#!/bin/bash

cd $(dirname "$0")

# Set the include path
INCLUDE_PATH="../../capi/include"
# Set the library path
LIBRARY_PATH="../../capi/build"
# Set the name of the library to use
LIBRARY_NAME="sqc_api"
# Set the compiler options
FLAGS="-Wall -DFAKE_PROVIDER"
# Specify the top-level directory for conversion
TARGET_DIR="qasm"
# Set the log file
LOG_FILE="compile_run_all.log"
: > "$LOG_FILE"

find "$TARGET_DIR" -name "*.c" | while read -r c_file; do
    exe_file=$(basename "$c_file" .c)
    
    echo "Compiling: $c_file" | tee -a "$LOG_FILE"
    compile_output=$(gcc $FLAGS -I "$INCLUDE_PATH" "$c_file" -L "$LIBRARY_PATH" -l"$LIBRARY_NAME" -o "$exe_file" 2>&1)

    if [ $? -ne 0 ]; then
        echo "Compilation errors"
        echo "$compile_output"
fi

echo "$compile_output" >> "$LOG_FILE"
    echo "Running: ./$exe_file" | tee -a "$LOG_FILE"
    LD_LIBRARY_PATH="$LIBRARY_PATH" ./"$exe_file" 2>&1 | tee -a "$LOG_FILE"
    
    rm -f "$exe_file"
done

echo "All processes have completed." | tee -a "$LOG_FILE"
