CC=gcc
CFLAGS=-O2 -Wall -Wextra -fPIC

# Running options on Fugaku's login nodes
# PY_PATH=/vol0004/apps/oss/spack-v0.21/opt/spack/linux-rhel8-cascadelake/gcc-13.2.0/python-3.11.6-yjlixq5gurvspzwveq6tfrqonplxu7m3

# Running options on Fugaku's compute nodes
PY_PATH=/vol0004/apps/oss/spack-v0.21/opt/spack/linux-rhel8-a64fx/gcc-13.2.0/python-3.11.6-7x2kdfqu57k7ej5hvkhbz6mjptpqhwuy

PYLIB=-L $(PY_PATH)/lib -lpython3.11
PYINC=-I $(PY_PATH)/include/python3.11

.PHONY : all clean build test debug
VPATH=./build

all: build

clean:
	rm -fr ./build

build: libsqc_api.so

libsqc_api.so: lib/sqc_api.c
	mkdir -p build
	$(CC) $(CFLAGS) -shared $< -o ./build/libsqc_api.so $(PYINC) $(PYLIB)

test: ../sample/target1.c
	$(CC) -Wall -I ./include $< -L./build -lsqc_api -o ./build/test

debug: lib/sqc_api.c
	mkdir -p build
	$(CC) $(CFLAGS) -D DEBUG_ERROR_STOP -shared $< -o ./build/libsqc_api.so $(PYINC) $(PYLIB)
