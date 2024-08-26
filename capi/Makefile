CC=gcc
CFLAGS=-O2 -Wall -Wextra
PYLIB=-L /usr/lib/python3.10 -lpython3.10
PYINC=-I /usr/include/python3.10

.PHONY : all clean build test
VPATH=./build

all: build

clean:
	rm -fr ./build

build: libsqc_api.so libsqc_api.a

test: test.dynamic test.static

libsqc_api.so: lib/sqc_api.c
	mkdir -p build
	$(CC) $(CFLAGS)  -shared $< -o ./build/libsqc_api.so $(PYINC) $(PYLIB)

libsqc_api.a: lib/sqc_api.c
	mkdir -p build
	$(CC) $(CFLAGS) $< -o ./build/libsqc_api.o -c $(PYINC)
	ar rcs ./build/libsqc_api.a ./build/libsqc_api.o


test.dynamic: ../sample/target1.c
	$(CC) -Wall -I ./include $< -L./build -lsqc_api -o ./build/test.dynamic

test.static: ../sample/target1.c
	$(CC) -Wall -I ./include $< ./build/libsqc_api.a $(PYLIB) -o ./build/test.static
