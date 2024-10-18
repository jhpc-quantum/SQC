#!/bin/bash
INPUT_DIR=$1
OUTPUT_DIR=$2

if [ -z "$INPUT_DIR" ]; then
    echo "Error: Input directory must be specified."
    exit 1
fi

SCRIPT_FILE="qasm2c.py"

INPUT_DIR=$(realpath "$INPUT_DIR")

INPUT_DIR=${INPUT_DIR%/}

find "$INPUT_DIR" -type f -name "*.qasm" | while read -r qasm_file; do
    if [ -z "$OUTPUT_DIR" ]; then
        output_dir=$(dirname "$qasm_file")
    else
        output_dir=$(realpath "$OUTPUT_DIR")
        mkdir -p "$output_dir"
    fi

    out_file="${output_dir}/$(basename "${qasm_file%.qasm}.c")"

    python3 "$SCRIPT_FILE" "$qasm_file" "$out_file"
done

# Count the number of generated .c files
target_dir=${OUTPUT_DIR:-$INPUT_DIR}
generated_count=$(find "$target_dir" -type f -name "*.c" | wc -l)
echo ".Number of c-files generated: $generated_count"