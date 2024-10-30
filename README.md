# SQC

## Introduction
SQC is interface to use Qiskit with C-lang.

## Requirements
- Python(>=3.8)
- qiskit(1.2.4)
- qiskit-qasm3-import(0.5.0)

v3.8 or higher Python@version%gcc of spack , this procedure uses "7x2kdfq python".
|Available Python|
|---|
k3kgiz6 python@3.10.13%gcc@13.2.0 arch=linux-rhel8-a64fx
kpspsnw python@3.11.6%gcc@8.5.0 arch=linux-rhel8-a64fx
3wxkbij python@3.11.6%gcc@12.2.0 arch=linux-rhel8-a64fx
7x2kdfq python@3.11.6%gcc@13.2.0 arch=linux-rhel8-a64fx

## Prepare Qiskit
This section describes the Qiskit prepare procedure at Fugaku (compute node).
```bash
$ # load spack environment 
$ . /vol0004/apps/oss/spack/share/spack/setup-env.sh
$ # load python 
$ spack load python@3.11.6/7x2kdfq
$ # create Python virtual envirionment
$ python3 -m venv path/to/qiskitenv_compute_node
$ # activate Python virtual envirionment
$ source path/to/qiskitenv_compute_node/bin/activate
$ # install qiskit and qiskit-qasm3-import
(qiskitenv_compute_node) $ python3 -m pip install qiskit
(qiskitenv_compute_node) $ python3 -m pip install qiskit_qasm3_import
```

## How to build of SQC library
This section describes the build procedure at Fugaku (compute node).

1) Clone the repository and obtain SQC
```bash
$ git clone https://github.com/jhpc-quantum/SQC.git
```

2) Make
```bash
$ # load spack environment 
$ . /vol0004/apps/oss/spack/share/spack/setup-env.sh
$ # load python 
$ spack load python@3.11.6/7x2kdfq
$ # Go to the directory where the Makefile is located
$ cd SQC/capi
$ # make
$ make
```
3) Build Check
```bash
$ # compile build check program
$ make test
$ # set environment variable
$ export LD_LIBRARY_PATH=./build:/vol0004/apps/oss/spack-v0.21/opt/spack/linux-rhel8-a64fx/gcc-13.2.0/python-3.11.6-7x2kdfqu57k7ej5hvkhbz6mjptpqhwuy/lib
$ # activate Python virtual envirionment
$ source path/to/qiskitenv_compute_node/bin/activate
$ # execute build check program
(qiskitenv_compute_node) $ ./build/test
```
Success if the following string is output.
```
-- return sqcStoreQCtoMemory before sqcTranspile (105) --
OPENQASM 3.0;
include "stdgates.inc";
qubit[2] q;
bit[2] c;
h q[0];
cx q[0], q[1];
c[0] = measure q[0];
```

## Usage
This section describes the usage of SQC at Fugaku (compute node).
1) compile
```bash
$ # load spack environment
$ . /vol0004/apps/oss/spack/share/spack/setup-env.sh
$ # load python 
$ spack load python@3.11.6/7x2kdfq 
$ # compile c program
$ gcc -Wall -I path/to/SQC/capi/include path/to/sample.c -Lpath/to/SQC/capi/build -lsqc_api 
```

2) execution 
```bash
$ # set environment variable
$ export LD_LIBRARY_PATH=path/to/SQC/capi/build:/vol0004/apps/oss/spack-v0.21/opt/spack/linux-rhel8-a64fx/gcc-13.2.0/python-3.11.6-7x2kdfqu57k7ej5hvkhbz6mjptpqhwuy/lib
$ # activate Python virtual envirionment
$ source path/to/qiskitenv_compute_node/bin/activate
$ # execute
(qiskitenv_compute_node) $ ./a.out
```

## C-API and C-API-specific types lists of SQC 
See [docs/SQC.md](docs/SQC.md).

## Test
See [tests/README.md](tests/README.md) for Test.
This is a repository for software of supercomputing and quantum computing.
