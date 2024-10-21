#!/bin/bash

# Specify the top-level directory for conversion
TARGET_DIR="../data"

# Specify number of concurrent executions
PARALLEL_JOBS=10

function toQASM() {
    # Set the include path
    INCLUDE_PATH="../../../capi/include"
    # Set the library path
    LIBRARY_PATH="../../../capi/build"
    # Set the name of the library to use
    LIBRARY_NAME="sqc_api"
    # Set the compiler options
    FLAGS="-Wall -DFAKE_PROVIDER"
    exe_file=$(basename "$1" .c)
    log_file="${exe_file}.log"
    {
        echo "Compiling: $1"
        compile_output=$(gcc $FLAGS -I "$INCLUDE_PATH" "$1" -L "$LIBRARY_PATH" -l"$LIBRARY_NAME" -o "$exe_file" 2>&1)

        if [ $? -ne 0 ]; then
            echo "Compilation errors"
            echo "$compile_output"
        fi

        echo "Running: ./$exe_file"
        LD_LIBRARY_PATH="$LIBRARY_PATH:$LD_LIBRARY_PATH" ./"$exe_file"
        
        rm -f "$exe_file"
    } &> "$log_file"
}

cd $(dirname "$0")

export -f toQASM

find "$TARGET_DIR" -name "*.c" | xargs -P "$PARALLEL_JOBS" -I% bash -c 'toQASM %'

cat *.log > compile_run_all.txt
rm -f *.log

echo "All processes have completed."
