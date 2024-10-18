#!/bin/bash
cd ../../../capi
make clean
make debug
cd ../tests/UnitTests/tools

FILENAME=UnitTestProgramExample
CFLAGS_ALL="-Wall -g"
INCLUDE_PATH="../../../capi/include"
LIBRARY_PATH="../../../capi/build"
LIBRARY_NAME="sqc_api"
SRC_DIR="../src"
SOURCE_FILE="$SRC_DIR/$FILENAME.c"
CIRCUIT_OUT="../../../capi/build/UnitTest21.o"
COMMON="$CFLAGS_ALL -I $INCLUDE_PATH $SOURCE_FILE -L$LIBRARY_PATH -l$LIBRARY_NAME"

# BASIC or FAKE or NONE
PROVIDER_FLAGS="-D FAKE"
# Whether to output circuit information
CIRCUIT_FLAGS="-D CIRCUIT"

gcc $COMMON $CIRCUIT_FLAGS $PROVIDER_FLAGS -o "$CIRCUIT_OUT"
if [ $? -ne 0 ]; then
    echo "Compilation Failed"
    exit 1 
fi

LD_LIBRARY_PATH="../../../capi/build":$LD_LIBRARY_PATH  ./$CIRCUIT_OUT > output.log 2>&1
if [ $? -ne 0 ]; then
    echo "Execution faild"
    exit 1
else
    echo "Execution success"
fi

rm output.log
rm -f "$CIRCUIT_OUT"
