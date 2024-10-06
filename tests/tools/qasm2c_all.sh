#!/bin/bash
# Specify the target directory for conversion
TARGET_DIR="qasm"
# Specify the script file to execute
SCRIPT_FILE="qasm2c.py"

find "$TARGET_DIR" -type f -name "*.qasm" | while read -r qasm_file; do
    out_file="${qasm_file%.qasm}.c"
    
    python3 "$SCRIPT_FILE" "$qasm_file" "$out_file"

done

# Count the number of generated .c files
generated_count=$(find "$TARGET_DIR" -type f -name "*.c" | wc -l)
echo ".Number of c-files generated: $generated_count"
