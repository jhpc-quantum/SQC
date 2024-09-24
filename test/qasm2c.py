import sys

def add_headers():
    #ヘッダー部を返す関数
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
        'sqcInitialize();\n\n'
    ]
    return headers

def add_gate(input_content):
    #ボディ部を生成する関数(ゲート変換部分)
    output_lines = []
    for line in input_content:
        output_lines.append(f"// 一時的にコメントに変換: {line.strip()}\n") 
    return output_lines

def add_footer(input_content):
    #フッター部を返す関数
    footer = [
        '\n// フッター部分（未）\n'
    ]
    return footer

def convert_to_c(input_file, output_file):
    #メイン処理
    # 入力ファイルを読み込む
    with open(input_file, 'r') as file:
        input_content = file.readlines()

    # 出力用の行を格納するリスト
    output_lines = add_headers()
    output_lines.extend(add_gate(input_content))
    output_lines.extend(add_footer(input_content))

    # 出力ファイルに書き込む
    with open(output_file, 'w') as file:
        file.writelines(output_lines)

    print(f"変換完了: {output_file}")

if __name__ == "__main__":
    # コマンドライン引数から入力ファイル名と出力ファイル名を取得
    input_file = sys.argv[1]
    output_file = sys.argv[2]
    convert_to_c(input_file, output_file)