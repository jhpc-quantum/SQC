import sys
import re

##
# @brief 入力の解析
# @return qreg変数名
def input_analyze(input_content):
    supported_syntaxes = ['qreg', 'cx', 'rz', 'h ']  # 対応している構文のリスト
    errors = []  # エラーを蓄積するリスト
    unsupported_syntaxes = []  # 未対応の構文を保存するリスト
    qreg_name = None  # 初期化
    skip_patterns = [r'OPENQASM\s+.*;', r'include\s+.*;', r'^\s*$']  # 空行を追加

    # OPENQASM 2.0のバージョンチェック
    has_openqasm_2_0 = any(re.search(r'OPENQASM\s*2\.0;', line) for line in input_content)
    if not any('OPENQASM' in line for line in input_content):
        errors.append("Error: OPENQASM version not specified.")
    elif not has_openqasm_2_0:
        errors.append("Error: Only OPENQASM 2.0 is supported.")

    # qreg構文の行をすべて取得
    qreg_lines = [line.strip() for line in input_content if line.strip().startswith('qreg')]

    # 複数のqreg行や複数変数がないかを確認
    if len(qreg_lines) > 1 or any(len(stripped_line.split()[1].split(',')) > 1 for stripped_line in qreg_lines):
        errors.append("Error: There are multiple qreg syntaxes.")

    # qreg構文が1つだけの場合、変数名を抽出
    if qreg_lines:
        for stripped_line in qreg_lines:
            qregs = stripped_line.split()[1].split(',')
            qreg_name = qregs[0].split('[')[0]  # 最初のqreg変数名を抽出
    else:
        errors.append("Error: qreg syntax not found.")

    # 各行に対して未対応の構文がないか確認
    for line in input_content:
        stripped_line = line.strip()

        # OPENQASM 2.0とincludeは例外としてスキップ
        if any(re.match(pattern, stripped_line) for pattern in skip_patterns):
            continue

        # 対応している構文のリストに含まれているか確認
        if not any(stripped_line.startswith(syntax) for syntax in supported_syntaxes):
            unsupported_syntaxes.append(stripped_line)

    # 未対応構文をエラーリストに追加
    if unsupported_syntaxes:
        errors.append(
            "Error: The following lines are not supported.\n" +
            "\n".join(unsupported_syntaxes)
        )

    # エラーが存在するかを確認して返す
    if errors:
        return False, "\n".join(errors)  # エラーがある場合はFalseとエラーメッセージを返す

    return True, qreg_name  # エラーがない場合はTrueとqreg名を返す
##
# @brief ヘッダー部の生成
# @return 生成したヘッダーのリスト
def add_headers():
    headers = [
        '#include "sqc_api.h"\n'
        '#include <stdlib.h>\n'
        '#include <string.h>\n\n'
        '#if defined(FAKE_PROVIDER) \n'
        '#define KIND (Fake20QV1)\n'
        '#ifndef OPT_LEVEL\n'
        'sqcFakeProviderOption opt = {0};\n'
        '#else\n'
        'sqcFakeProviderOption opt = {OPT_LEVEL};\n'
        '#endif\n'
        '#elif defined(IBM_PROVIDER)\n'
        '#fatal /* Not Implemented */\n'
        '#else /* other */\n'
        '#fatal \n'
        '#endif\n\n'
        'int main(int argc, char *argv[])\n'
        '{\n'
        '  sqcInitialize();\n\n'
    ]

    return headers

##
# @brief ボディ部の生成（ゲート変換部分）
def add_gates(input_content, qreg_name):
    output_lines = []

    for line in input_content:
        stripped_line = line.strip()

        if stripped_line.startswith('qreg'):
            output_lines.extend(transform_qreg(stripped_line, qreg_name))
        elif stripped_line.startswith('cx'):
            output_lines.append(transform_cx(stripped_line))
        elif stripped_line.startswith('rz'):
            output_lines.append(transform_rz(stripped_line))
        elif stripped_line.startswith('h '):
            output_lines.append(transform_h(stripped_line))

    return output_lines

##
# @brief qregの変換処理
# before：
#   qreg q[4];
# after：
#   sqcQC* q;
#   q = sqcQuantumCircuit(4);
def transform_qreg(stripped_line, qreg_name):
    output_lines = []
    qregs = stripped_line.split()[1].split(',')
    qubit_count = [qreg.split('[')[1].split(']')[0] for qreg in qregs]
    output_lines.append(f"  sqcQC* {qreg_name};\n")
    output_lines.append(f"  {qreg_name} = sqcQuantumCircuit({qubit_count[0]});\n\n")

    return output_lines

##
# @brief "cx" ゲートの変換
# before：
#   cx q[0],q[1];
# after：
#   sqcCXGate(q, 0, 1);
def transform_cx(stripped_line):
    # cx q[0],q[1]; からqubit数を抽出
    qubit_count = [bit.split('[')[1].split(']')[0] for bit in stripped_line[3:].split(',')]
    qreg_name = stripped_line.split()[1].split(',')[0].split('[')[0]

    return f'  sqcCXGate({qreg_name}, {qubit_count[0]}, {qubit_count[1]});\n'

##
# @brief "rz" ゲートの変換
# before：
#   rz(-0.08567393067678994) q[1];
# after：
#   sqcRZGate(q, -0.08567393067678994, 1);
def transform_rz(stripped_line):
    rz_phi = stripped_line.split('(')[1].split(')')[0]  # 回転角を取得
    rz_qubit = stripped_line.split()[1]
    qubit_count = rz_qubit.split('[')[1].split(']')[0]  # qubit数を取得
    qreg_name = rz_qubit.split('[')[0]  # qregの名前を取得

    return f'  sqcRZGate({qreg_name}, {rz_phi}, {qubit_count});\n'

##
# @brief "h" ゲートの変換
# before：
#   h q[0];
# after：
#   sqcHGate(q, 0);
def transform_h(stripped_line):
    h_qubit = stripped_line.split()[1]
    qubit_count = h_qubit.split('[')[1].split(']')[0]  # qubit数を取得
    qreg_name = h_qubit.split('[')[0]  # qregの名前を取得

    return f'  sqcHGate({qreg_name}, {qubit_count});\n'

##
# @brief フッター部の生成
def add_footers(qreg_name):
    footer = [
            "\n  FILE * IR_file = NULL;\n",
            '  IR_file = fopen(__FILE__"_IR.txt", "w");\n',
            f"  sqcStoreQC({qreg_name}, IR_file, storeQCStop);\n",
            "  fclose(IR_file);\n\n",
            f"  sqcTranspile({qreg_name}, KIND, &opt);\n\n",
            "  FILE * Transpile_file = NULL;\n",
            '  Transpile_file = fopen(__FILE__"_TP.txt", "w");\n',
            f"  sqcStoreQC({qreg_name}, Transpile_file, storeQCStop);\n",
            "  fclose(Transpile_file);\n\n",
            f"  sqcDestroyQuantumCircuit({qreg_name});\n",
            "  sqcFinalize();\n",
            "  return 0;\n",
            "}\n",
    ]

    return footer

##
# @brief 変換メイン処理
def convert_to_c(input_file, output_file):
    # 入力ファイルを読み込む
    with open(input_file, 'r') as file:
        input_content = file.readlines()
    # 入力ファイルの解析
    is_valid, result = input_analyze(input_content)

    if not is_valid:
        print(f"Analyze failed:\n{result}")
    else:
        qreg_name = result  # 解析成功時にqreg_nameをresultから取得
        print("Analyze Success")
    # 出力用の行を格納するリスト
    output_lines = add_headers()  # ヘッダーを追加
    output_lines.extend(add_gates(input_content, qreg_name))  # ボディ（ゲート変換）を追加
    output_lines.extend(add_footers(qreg_name))  # フッターを追加

    # 出力ファイルに書き込む
    with open(output_file, 'w') as file:
        file.writelines(output_lines)

    print(f"Conversion Complete: {output_file}")

if __name__ == "__main__":
    # コマンドライン引数から入力ファイル名と出力ファイル名を取得
    input_file = sys.argv[1]
    output_file = sys.argv[2]
    convert_to_c(input_file, output_file)
