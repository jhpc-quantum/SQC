import sys

def convert_to_c(input_file, output_file):
    # 入力ファイルを読み込む
    with open(input_file, 'r') as file:
        input_content = file.readlines()

    # ヘッダー部を追加
    headers = [
        '#include "sqc_api.h"\n'
        '#define _CRT_SECURE_NO_WARNINGS\n'
        '#include <stdio.h>\n'
        '#include <stdlib.h>\n'
        '#include <string.h>\n\n'
        '#ifdef FAKE_PROVIDER\n'
        '#define KIND (Fake20QV1)\n'
        '#ifndef OPT_LEVEL\n'
        'sqcFakeProviderOption opt = {0};\n'
        '#else\n'
        'sqcFakeProviderOption opt = {OPT_LEVEL};\n'
        '#endif\n'
        '#else /* IBM PROVIDER */\n'
        '#fatal /* Not Implemented */\n'
        '#endif\n\n'
        'int main(int argc, char *argv[])\n'
        '{\n'
        'sqcInitialize(); \n\n'
    ]
    
    # 出力用の行を格納するリスト
    output_lines = headers

    for line in input_content:
        output_lines.append(f"// 一時的にコメントに変換: {line.strip()}\n") 

    # 出力ファイルに書き込む
    with open(output_file, 'w') as file:
        file.writelines(output_lines)

    print(f"変換完了: {output_file}")

if __name__ == "__main__":
    # コマンドライン引数から入力ファイル名と出力ファイル名を取得

    input_file = sys.argv[1]
    output_file = sys.argv[2]
    convert_to_c(input_file, output_file)