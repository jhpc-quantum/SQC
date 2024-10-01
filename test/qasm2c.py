##
# @file qasm2c.py
# @brief 簡単な説明
# @copyright

import sys
import re

# @brief Parses the input.
# @details Function to parse the contents of the OPENQASM 2.0 file and check for qreg variable names and unsupported syntax.
# @param[in] input_content List containing each line of the OPENQASM 2.0 file to be parsed.
# @return True if the parsing was successful and there were no errors.
# @return False Returns False if an error occurred.
# @return qreg_name Returns the first qreg variable name found in the qreg syntax. Returns an error message if an error occurred.
def input_analyze(input_content):
    supported_syntaxes = ['qreg ', 'cx ', 'rz(', 'h ', 'cz ', 'ry(', 'rx(', 's ', 'sdg ']
    errors = []
    unsupported_syntaxes = []
    qreg_name = None
    skip_patterns = [r'OPENQASM\s+.*;', r'include\s+.*;', r'^\s*$']  # 空行を追加

    has_openqasm_2_0 = any(re.search(r'OPENQASM\s*2\.0;', line) for line in input_content)
    if not any('OPENQASM' in line for line in input_content):
        errors.append("Error: OPENQASM version not specified.")
    elif not has_openqasm_2_0:
        errors.append("Error: Only OPENQASM 2.0 is supported.")

    qreg_lines = [line.strip() for line in input_content if line.strip().startswith('qreg')]

    if len(qreg_lines) > 1 or any(len(stripped_line.split()[1].split(',')) > 1 for stripped_line in qreg_lines):
        errors.append("Error: There are multiple qreg syntaxes.")

    if qreg_lines:
        for stripped_line in qreg_lines:
            qregs = stripped_line.split()[1].split(',')
            qreg_name = qregs[0].split('[')[0]
    else:
        errors.append("Error: qreg syntax not found.")

    for line in input_content:
        stripped_line = line.strip()

        if any(re.match(pattern, stripped_line) for pattern in skip_patterns):
            continue

        if not any(stripped_line.startswith(syntax) for syntax in supported_syntaxes):
            unsupported_syntaxes.append(stripped_line)

    if unsupported_syntaxes:
        errors.append(
            "Error: The following lines are not supported.\n" +
            "\n".join(unsupported_syntaxes)
        )

    if errors:
        return False, "\n".join(errors)

    return True, qreg_name

##
# @brief Generate header section.
# @details Generate headers with initialization codes according to required includes and providers.
# @return headers Returns the generated header section code in list format.
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
# @brief Generate gate transformation part.
# @details Based on the input content, each quantum gate (qreg, cx, rz, h) is converted to the corresponding function and converted to C code.
# @param[in] input_content Contents of QASM format to be converted
# @param[in] qreg_name Variable name of quantum register defined in qreg
# @return output_lines List of converted C codes
def add_gates(input_content, qreg_name):
    output_lines = []

    for line in input_content:
        stripped_line = line.strip()

        if stripped_line.startswith('qreg '):
            output_lines.extend(transform_qreg(stripped_line, qreg_name))
        elif stripped_line.startswith('cx '):
            output_lines.append(transform_cx(stripped_line))
        elif stripped_line.startswith('rz('):
            output_lines.append(transform_rz(stripped_line))
        elif stripped_line.startswith('h '):
            output_lines.append(transform_h(stripped_line))
        elif stripped_line.startswith('cz '):
            output_lines.append(transform_cz(stripped_line))
        elif stripped_line.startswith('ry('):
            output_lines.append(transform_ry(stripped_line))
        elif stripped_line.startswith('rx('):
            output_lines.append(transform_rx(stripped_line))
        elif stripped_line.startswith('s '):
            output_lines.append(transform_s(stripped_line))
        elif stripped_line.startswith('sdg '):
            output_lines.append(transform_sdg(stripped_line))

    return output_lines

##
# @brief qreg conversion process.
# @details Convert QASM qreg syntax to C code. convert qreg definition to sqcQC* type,
# @brief Generate initialization code for quantum registers.
# @param[in] stripped_line Line of qreg definition in QASM format
# @param[in] qreg_name Converted qreg variable name
# @return output_lines List of lines converted to C code
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
# @brief "cx" ゲートの変換
# before：
#   cx q[0],q[1];
# after：
#   sqcCXGate(q, 0, 1);
def transform_cz(stripped_line):
    # cz q[0],q[1]; からqubit数を抽出
    qubit_count = [bit.split('[')[1].split(']')[0] for bit in stripped_line[3:].split(',')]
    qreg_name = stripped_line.split()[1].split(',')[0].split('[')[0]

    return f'  sqcCZGate({qreg_name}, {qubit_count[0]}, {qubit_count[1]});\n'

##
# @brief "ry" ゲートの変換
# before：
#   ry(-0.08567393067678994) q[1];
# after：
#   sqcRYGate(q, -0.08567393067678994, 1);
def transform_ry(stripped_line):
    ry_theta = stripped_line.split('(')[1].split(')')[0]  # 回転角を取得
    ry_qubit = stripped_line.split()[1]
    qubit_count = ry_qubit.split('[')[1].split(']')[0]  # qubit数を取得
    qreg_name = ry_qubit.split('[')[0]  # qregの名前を取得

    return f'  sqcRYGate({qreg_name}, {ry_theta}, {qubit_count});\n'

##
# @brief "rx" ゲートの変換
# before：
#   rx(-0.08567393067678994) q[1];
# after：
#   sqcRXGate(q, -0.08567393067678994, 1);
def transform_rx(stripped_line):
    rx_theta = stripped_line.split('(')[1].split(')')[0]  # 回転角を取得
    rx_qubit = stripped_line.split()[1]
    qubit_count = rx_qubit.split('[')[1].split(']')[0]  # qubit数を取得
    qreg_name = rx_qubit.split('[')[0]  # qregの名前を取得

    return f'  sqcRXGate({qreg_name}, {rx_theta}, {qubit_count});\n'

##
# @brief "s" ゲートの変換
# before：
#   s q[0];
# after：
#   sqcSGate(q, 0);
def transform_s(stripped_line):
    s_qubit = stripped_line.split()[1]
    qubit_count = s_qubit.split('[')[1].split(']')[0]  # qubit数を取得
    qreg_name = s_qubit.split('[')[0]  # qregの名前を取得

    return f'  sqcSGate({qreg_name}, {qubit_count});\n'

##
# @brief "sdg" ゲートの変換
# before：
#   sdg q[0];
# after：
#   sqcSdgGate(q, 0);
def transform_sdg(stripped_line):
    sdg_qubit = stripped_line.split()[1]
    qubit_count = sdg_qubit.split('[')[1].split(']')[0]  # qubit数を取得
    qreg_name = sdg_qubit.split('[')[0]  # qregの名前を取得

    return f'  sqcSdgGate({qreg_name}, {qubit_count});\n'

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
