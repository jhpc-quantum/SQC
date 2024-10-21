#!/bin/bash
cd ../../../capi
make clean
make
cd ../tests/UnitTests/tools

FILENAME=UnitTestProgramExample
CFLAGS_ALL="-Wall -g"
INCLUDE_PATH="../../../capi/include"
LIBRARY_PATH="../../../capi/build"
LIBRARY_NAME="sqc_api"
SRC_DIR="../src"
SOURCE_FILE="$SRC_DIR/$FILENAME.c"
CIRCUIT_OUT="../../../capi/build/UnitTest06.o"
COMMON="$CFLAGS_ALL -I $INCLUDE_PATH $SOURCE_FILE -L$LIBRARY_PATH -l$LIBRARY_NAME"

# Answer file
expected_error_file="../answer/UnitTest06.log"
# Specifying a provider
PROVIDER_FLAGS="-D FAKE"
# To transpile or not
TRANSPILE_FRAGS="-D ON_TRANSPILE"
# Whether to write the circuit to memory
MEMORY_FLAGS="-D MEMORY"
# Memory address is NULL
MEMORY_NULL_FLAGS="-D MEMORYADDRESS_NULL"

gcc $COMMON $MEMORY_NULL_FLAGS $MEMORY_FLAGS  $PROVIDER_FLAGS $TRANSPILE_FRAGS -o "$CIRCUIT_OUT"
if [ $? -ne 0 ]; then
    echo "Compilation Failed"
    exit 1
fi

LD_LIBRARY_PATH="../../../capi/build":$LD_LIBRARY_PATH  ./$CIRCUIT_OUT > output.log 2>&1
if diff -q "output.log" "$expected_error_file" > /dev/null; then
    echo "Execution success"
else
    echo "Execution faild"
    exit 1
fi

rm output.log
rm -f "$CIRCUIT_OUT"
