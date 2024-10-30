#!/bin/bash

# Specify the top-level directory for conversion
TARGET_DIR="../data"
# Specify number of concurrent executions
PARALLEL_JOBS=10
# Specify the Python script to run
SCRIPT="qiskit_1to1.py"

function toQiskit() {
    file="$1"
    output_file="${file%_IR.txt}_output.log"
    error_file="${file%_IR.txt}_error.log"

    echo "Target file: $file, Output file: $output_file, Error file: $error_file"

    python3 "$SCRIPT" "$file" > "$output_file" 2> "$error_file"
}

cd $(dirname "$0")

export -f toQiskit
export SCRIPT

find "$TARGET_DIR" -name '*_IR.txt' | xargs -P "$PARALLEL_JOBS" -I% bash -c 'toQiskit %'

echo "All processes have completed."
