import sys


def add_headers():
    # ヘッダー部を返す関数
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


def add_gates(input_content):
    # ボディ部を生成する関数（ゲート変換部分）
    output_lines = []
    qreg_name = []
    qubit_count = []

    for line in input_content:
        stripped_line = line.strip()

        # qregの変換処理
        if stripped_line.startswith('qreg'):
            qreg_name = [qreg.split('[')[0] for qreg in stripped_line.split()[1].split(',')]  # 変数名をリストとして抽出
            qubit_count = [qreg.split('[')[1].split(']')[0] for qreg in stripped_line.split()[1].split(',')]  # qubit数をリストとして抽出

            if len(qreg_name) > 1:
                raise ValueError("エラー: qregに複数の要素があります。")

            for qreg_id, count in zip(qreg_name, qubit_count):
                output_lines.append(f"  sqcQC* {qreg_id};\n")
                output_lines.append(f"  {qreg_id} = sqcQuantumCircuit({count});\n")
        else:
            # C言語のコメント形式に変換する処理
            output_lines.append(f"// 一時的にコメントに変換: {stripped_line}\n")

    return output_lines, qreg_id  # ボディ変換結果とqregの識別子のリストを返す


def add_footers(qreg_id):
    # フッター部を返す関数
    footer = [
            "  FILE * IR_file = NULL;\n",
            '  IR_file = fopen(__FILE__ "_IR.txt", "w");\n',
            f"  sqcStoreQC({qreg_id}, IR_file, false);\n",
            "  fclose(IR_file);\n\n",
            f"  sqcTranspile({qreg_id}, KIND, &opt);\n\n",
            "  FILE * Transpile_file = NULL;\n",
            '  Transpile_file = fopen(__FILE__ "_TP.txt", "w");\n',
            f"  sqcStoreQC({qreg_id}, Transpile_file ,true);\n",
            "  fclose(Transpile_file);\n\n",
            f"  sqcDestroyQuantumCircuit({qreg_id});\n",
            "  sqcFinalize();\n",
            "  return 0;\n",
            "}\n",
    ]
    return footer


def convert_to_c(input_file, output_file):
    # メイン処理
    # 入力ファイルを読み込む
    with open(input_file, 'r') as file:
        input_content = file.readlines()

    # 出力用の行を格納するリスト
    output_lines = add_headers()  # ヘッダーを追加
    body_lines, qreg_id = add_gates(input_content)  # ボディ変換結果とqregの識別子を取得
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
