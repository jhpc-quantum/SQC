import sys

##
# @brief ヘッダー部の生成
# @return 生成したヘッダーのリスト
def add_headers():
    headers = [
        '#include "sqc_api.h"\n'
        '#include <stdio.h>\n'
        '#include <stdlib.h>\n'
        '#include <string.h>\n\n'
        '#if defined(FAKE_PROVIDER) \n'
        '#define KIND (Fake20QV1)\n'
        '#ifndef OPT_LEVEL\n'
        'sqcFakeProviderOption opt = {0};\n'
        '#else\n'
        'sqcFakeProviderOption opt = {OPT_LEVEL};\n'
        '#endif\n'
        '#elif defined(IBM_PROVIDER) /* IBM PROVIDER */\n'
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
def add_gates(input_content):
    output_lines = []
    qreg_name = []
    qubit_count = []
    unsupported_lines = []
    skip_lines = ['OPENQASM 2.0;', 'include "qelib1.inc";']  # 変換対象外の構文リスト

    for line in input_content:
        stripped_line = line.strip()

        ##
        # @brief qregの変換処理
        # before：
        #   qreg q[4];
        # after：
        #   sqcQC* q;
        #   q = sqcQuantumCircuit(4);
        if stripped_line.startswith('qreg'):
            qregs = stripped_line.split()[1].split(',')
            qreg_name = [qreg.split('[')[0] for qreg in qregs]  # 変数名をリストとして抽出
            qubit_count = [qreg.split('[')[1].split(']')[0] for qreg in qregs]  # qubit数をリストとして抽出

            if len(qreg_name) > 1:
                raise ValueError("エラー: qregに複数の要素があります。")

            for qreg_id, count in zip(qreg_name, qubit_count):
                output_lines.append(f"  sqcQC* {qreg_id};\n")
                output_lines.append(f"  {qreg_id} = sqcQuantumCircuit({count}); /* 古典ビット数はqubitsと同数 */\n\n")

        ##
        # @brief "cx" ゲートの変換
        # before：
        #   cx q[0],q[1];
        # after：
        #   sqcCXGate(q, 0, 1);
        elif stripped_line.startswith('cx'):
            cx_qubits = [bit[2] for bit in stripped_line[3:].split(',')]
            output_lines.append(f'  sqcCXGate({qreg_id}, {cx_qubits[0]}, {cx_qubits[1]});\n')

        ##
        # @brief "rz" ゲートの変換
        # before：
        #   rz(-0.08567393067678994) q[1];
        # after：
        #   sqcRZGate(q, -0.08567393067678994, 1);
        elif stripped_line.startswith('rz'):
            rz_phi = stripped_line.split('(')[1].split(')')[0]  # 回転角を取得
            rz_qubit = stripped_line.split()[1][2]  # qubit数を取得
            output_lines.append(f'  sqcRZGate({qreg_id}, {rz_phi}, {rz_qubit});\n')

        ##
        # @brief "h" ゲートの変換
        # before：
        #   h q[0];
        # after：
        #   sqcHGate(q, 0);
        elif stripped_line.startswith('h'):
            h_qubit = stripped_line.split()[1][2]  # qubit数を取得
            output_lines.append(f'  sqcHGate(q, {h_qubit});\n')

        ##
        # @brief 未変換ゲートの抽出
        else:
            if stripped_line not in skip_lines and stripped_line:  # 空行はスキップ
                unsupported_lines.append(stripped_line)
    ##
    # @brief 未対応ゲートのログ出力
    if unsupported_lines:
        for unsupported in unsupported_lines:
            print(f" 未対応のゲート： {unsupported}")

    return output_lines, qreg_id  # ボディ変換結果とqregの識別子のリストを返す

##
# @brief フッター部の生成
def add_footers(qreg_id):
    footer = [
            "\n  FILE * IR_file = NULL;\n",
            '  IR_file = fopen(__FILE__"_IR.txt", "w");\n',
            f"  sqcStoreQC({qreg_id}, IR_file ,false);\n",
            "  fclose(IR_file);\n\n",
            f"  sqcTranspile({qreg_id}, KIND, &opt);\n\n",
            "  FILE * Transpile_file = NULL;\n",
            '  Transpile_file = fopen(__FILE__"_TP.txt", "w");\n',
            f"  sqcStoreQC({qreg_id}, Transpile_file ,true);\n",
            "  fclose(Transpile_file);\n\n",
            f"  sqcDestroyQuantumCircuit({qreg_id});\n",
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
        # バージョンチェック
        if not any('OPENQASM 2.0;' in line for line in input_content):
            raise KeyError("エラー: OPENQASM 2.0のみ対応しています。")

    body_lines, qreg_id = add_gates(input_content)  # ボディ変換結果とqregの識別子を取得
    # 出力用の行を格納するリスト
    output_lines = add_headers()  # ヘッダーを追加
    output_lines.extend(body_lines)  # ボディを追加
    output_lines.extend(add_footers(qreg_id))  # フッターを追加

    # 出力ファイルに書き込む
    with open(output_file, 'w') as file:
        file.writelines(output_lines)

    print(f"変換完了: {output_file}")


if __name__ == "__main__":
    # コマンドライン引数から入力ファイル名と出力ファイル名を取得
    input_file = sys.argv[1]
    output_file = sys.argv[2]
    convert_to_c(input_file, output_file)
