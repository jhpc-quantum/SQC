#!/bin/bash
cd ../../../capi
make clean
make
cd ../tests/UnitTests/tools
FILENAME=testMultiCircuit
CFLAGS_ALL="-Wall -g"
INCLUDE_PATH="../../../capi/include"
LIBRARY_PATH="../../../capi/build"
LIBRARY_NAME="sqc_api"
SRC_DIR="../src"
SOURCE_FILE="$SRC_DIR/$FILENAME.c"
CIRCUIT_OUT="../../../capi/build/UnitTest37.o"
COMMON="$CFLAGS_ALL -I $INCLUDE_PATH $SOURCE_FILE -L$LIBRARY_PATH -l$LIBRARY_NAME"

gcc $COMMON  $PROVIDER_FLAGS $GATECHECK_FLAGS -o "$CIRCUIT_OUT"
if [ $? -ne 0 ]; then
    echo "Compilation Failed"
    exit 1 
fi

LD_LIBRARY_PATH="../../../capi/build":$LD_LIBRARY_PATH  ./$CIRCUIT_OUT
if [ $? -ne 0 ]; then
    echo "Execution faild"
    exit 1
else
    echo "Execution success"
fi

rm -f "$CIRCUIT_OUT"