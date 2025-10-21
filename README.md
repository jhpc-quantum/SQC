# SQC
This is a repository for software of supercomputing and quantum computing.

## Introduction
SQC is library providing C/C++ language interface to the following.
* Read and create quantum circuit.
* Transpile quantum circuit for quantum computer directly connected to Fugaku (only "ibm-kobe-dacc").
* Run quantum circuit on quantum computer directly connected to Fugaku.

## Requirements
### Fugaku login node
- gcc(13.2.0)
- Python(>=3.9)
- qiskit(2.1.1)
- qiskit-qasm3-import(0.41.0)
- qiskit-ibm-runtime(0.6.0)

## Prepare Qiskit
This section describes the Qiskit prepare procedure at Fugaku (login node).
```bash
$ # load spack environment 
$ . /vol0004/apps/oss/spack-v0.21/share/spack/setup-env.sh
$ # load python 
$ spack load python@3.11.6/yjlixq5
$ # create Python virtual envirionment
$ python3 -m venv path/to/qiskitenv_login_node
$ # activate Python virtual envirionment
$ source path/to/qiskitenv_login_node/bin/activate
$ # install qiskit, qiskit-qasm3-import and qiskit-ibm-runtime
(qiskitenv_login_node) $ python3 -m pip install qiskit==2.1.1 qiskit_qasm3_import==0.41.0 qiskit-ibm-runtime==0.6.0
```

## How to build of SQC library
This section describes the build procedure at Fugaku (login node).

1) Clone the repository and obtain SQC
```bash
$ git clone https://github.com/jhpc-quantum/SQC.git
```

2) Make
```bash
$ # load spack environment 
$ . /vol0004/apps/oss/spack-v0.21/share/spack/setup-env.sh
$ # load gcc and python 
$ spack load gcc@13.2.0/77gzpid python@3.11.6/yjlixq5
$ # Go to the directory where the Makefile is located
$ cd SQC/capi
$ # make
$ make
```

## Usage
See [GitHub jhpc-quantum/documents/SQC_JHPC_Quantum_user_guide.md](https://github.com/jhpc-quantum/documents/blob/main/SQC_JHPC_Quantum_user_guide.md).

## C-API and C-API-specific types lists of SQC 
See [docs/SQC.md](docs/SQC.md).
