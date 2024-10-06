##
# @file qasm2c.py
# @brief Script to generate C-API tests.
import sys
import re

##
# @brief Parses the input.
# @param[in] input_content List containing each line of the OPENQASM file to be parsed.
# @return True if the parsing was successful and there were no errors; False if an error occurred.
# @return qreg_name Returns the first qreg variable name found in the qreg syntax. Returns an error message if an error occurred.
def input_analyze(input_content):
    supported_syntaxes = ['qreg ', 'cx ', 'rz(', 'h ', 'cz ', 'ry(', 'rx(', 's ', 'sdg ']  # List of supported syntaxes
    errors = []  # List to store errors
    unsupported_syntaxes = []  # List to store unsupported syntaxes
    qreg_name = None
    skip_patterns = [r'OPENQASM\s+.*;', r'include\s+.*;', r'^\s*$']  # No conversion syntaxs

    if not any('OPENQASM' in line for line in input_content):
        errors.append("Error: OPENQASM version not specified.")
    elif not any(re.search(r'OPENQASM\s*2\.0;', line) for line in input_content):
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
# @return List of C codes in the generated header section.
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
# @brief Convert gate section.
# @param[in] input_content Contents of QASM to be converted.
# @param[in] qreg_name Quantum register identifier.
# @return output_lines List of converted C codes.
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
# @brief "qreg" conversion process.
# @param[in] stripped_line Line of qreg definition in QASM format.
# @param[in] qreg_name Converted qreg variable name.
# @return output_lines List of converted C codes.
def transform_qreg(stripped_line, qreg_name):
    output_lines = []
    qregs = stripped_line.split()[1].split(',')
    qubit_count = [qreg.split('[')[1].split(']')[0] for qreg in qregs]
    output_lines.append(f"  sqcQC* {qreg_name};\n")
    output_lines.append(f"  {qreg_name} = sqcQuantumCircuit({qubit_count[0]});\n\n")

    return output_lines

##
# @brief "cx" gate conversion process.
# @param[in] stripped_line Line of cx definition in QASM format.
# @return output_lines List of converted C codes.
def transform_cx(stripped_line):
    qubit_count = [bit.split('[')[1].split(']')[0] for bit in stripped_line[3:].split(',')]
    qreg_name = stripped_line.split()[1].split(',')[0].split('[')[0]

    return f'  sqcCXGate({qreg_name}, {qubit_count[0]}, {qubit_count[1]});\n'

##
# @brief "rz" gate conversion process.
# @param[in] stripped_line Line of rz definition in QASM format.
# @return output_lines List of converted C codes.
def transform_rz(stripped_line):
    rz_phi = stripped_line.split('(')[1].split(')')[0]
    rz_qubit = stripped_line.split()[1]
    qubit_count = rz_qubit.split('[')[1].split(']')[0]
    qreg_name = rz_qubit.split('[')[0]

    return f'  sqcRZGate({qreg_name}, {rz_phi}, {qubit_count});\n'

##
# @brief "h" gate conversion process.
# @param[in] stripped_line Line of h definition in QASM format.
# @return output_lines List of converted C codes.
def transform_h(stripped_line):
    h_qubit = stripped_line.split()[1]
    qubit_count = h_qubit.split('[')[1].split(']')[0]
    qreg_name = h_qubit.split('[')[0]

    return f'  sqcHGate({qreg_name}, {qubit_count});\n'

##
# @brief "cz" gate conversion process.
# @param[in] stripped_line Line of cz definition in QASM format.
# @return output_lines List of converted C codes.
def transform_cz(stripped_line):
    qubit_count = [bit.split('[')[1].split(']')[0] for bit in stripped_line[3:].split(',')]
    qreg_name = stripped_line.split()[1].split(',')[0].split('[')[0]

    return f'  sqcCZGate({qreg_name}, {qubit_count[0]}, {qubit_count[1]});\n'

##
# @brief "ry" gate conversion process.
# @param[in] stripped_line Line of ry definition in QASM format.
# @return output_lines List of converted C codes.
def transform_ry(stripped_line):
    ry_theta = stripped_line.split('(')[1].split(')')[0]
    ry_qubit = stripped_line.split()[1]
    qubit_count = ry_qubit.split('[')[1].split(']')[0]
    qreg_name = ry_qubit.split('[')[0]

    return f'  sqcRYGate({qreg_name}, {ry_theta}, {qubit_count});\n'

##
# @brief "rx" gate conversion process.
# @param[in] stripped_line Line of rx definition in QASM format.
# @return output_lines List of converted C codes.
def transform_rx(stripped_line):
    rx_theta = stripped_line.split('(')[1].split(')')[0]
    rx_qubit = stripped_line.split()[1]
    qubit_count = rx_qubit.split('[')[1].split(']')[0]
    qreg_name = rx_qubit.split('[')[0]

    return f'  sqcRXGate({qreg_name}, {rx_theta}, {qubit_count});\n'

##
# @brief "s" gate conversion process.
# @param[in] stripped_line Line of s definition in QASM format.
# @return output_lines List of converted C codes.
def transform_s(stripped_line):
    s_qubit = stripped_line.split()[1]
    qubit_count = s_qubit.split('[')[1].split(']')[0]
    qreg_name = s_qubit.split('[')[0]

    return f'  sqcSGate({qreg_name}, {qubit_count});\n'

##
# @brief "sdg" gate conversion process.
# @param[in] stripped_line Line of s definition in QASM format.
# @return output_lines List of converted C codes.
def transform_sdg(stripped_line):
    sdg_qubit = stripped_line.split()[1]
    qubit_count = sdg_qubit.split('[')[1].split(']')[0]
    qreg_name = sdg_qubit.split('[')[0]

    return f'  sqcSdgGate({qreg_name}, {qubit_count});\n'

##
# @brief Generate footer section.
# @param[in] qreg_name Converted qreg variable name.
# @return List of C codes in the generated header section.
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
# @brief Converts a QASM file to C code and writes it to the output file.
# @param[in] input_file The path to the QASM input file to be converted.
# @param[in] output_file The path to the output file where the C code will be written.
# @return None
def convert_to_c(input_file, output_file):
    with open(input_file, 'r') as file:
        input_content = file.readlines()
    is_valid, result = input_analyze(input_content)

    if not is_valid:
        print(f"Analyze failed:\n{result}")
    else:
        qreg_name = result
        print("Analyze Success")
    output_lines = add_headers()
    output_lines.extend(add_gates(input_content, qreg_name))
    output_lines.extend(add_footers(qreg_name))

    with open(output_file, 'w') as file:
        file.writelines(output_lines)

    print(f"Conversion Complete: {output_file}")

if __name__ == "__main__":
    input_file = sys.argv[1]
    output_file = sys.argv[2]
    convert_to_c(input_file, output_file)
