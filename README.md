# SQC
This is a repository for software of supercomputing and quantum computing.

## Introduction
SQC is library providing C/C++ language interface to the following.
* Read and create quantum circuit.
* Transpile quantum circuit for quantum computer directly connected to Fugaku (only "ibm-kobe-dacc").
* Run quantum circuit on quantum computer directly connected to Fugaku.

## Requirements
- gcc(15.1.0)
- boost(1.88.0)
- Python(3.13.5)
- qiskit(2.3.1)
- qiskit-ibm-runtime
    - Login node: 0.45.1
    - Compute node: 0.46.1
- qiskit-qasm3-import(0.6.0)

## Prepare Qiskit
This section describes the Qiskit prepare procedure at Fugaku.
### login node
```bash
$ # load spack environment 
$ . /vol0004/apps/oss/spack/share/spack/setup-env.sh
$ # load python 
$ spack load python@3.13.5/xwl6x7i
$ # create Python virtual envirionment
$ python3 -m venv path/to/qiskitenv_login_node
$ # activate Python virtual envirionment
$ source path/to/qiskitenv_login_node/bin/activate
$ # install qiskit, qiskit-qasm3-import and qiskit-ibm-runtime
(qiskitenv_login_node) $ python3 -m pip install qiskit==2.3.1 qiskit-qasm3-import==0.6.0 qiskit-ibm-runtime==0.45.1
```

### compute node
```bash
$ # load spack environment 
$ . /vol0004/apps/oss/spack/share/spack/setup-env.sh
$ # load python 
$ spack load python@3.13.5/qhm66vh
$ # create Python virtual envirionment
$ python3 -m venv path/to/qiskitenv_compute_node
$ # activate Python virtual envirionment
$ source path/to/qiskitenv_compute_node/bin/activate
$ # install qiskit, qiskit-qasm3-import and qiskit-ibm-runtime
(qiskitenv_compute_node) $ python3 -m pip install qiskit==2.3.1 qiskit-qasm3-import==0.6.0 qiskit-ibm-runtime==0.46.1
```

## How to build of SQC library
This section describes the build procedure at Fugaku (login node).

1) Clone the repository and obtain SQC
```bash
$ git clone https://github.com/jhpc-quantum/SQC.git
```

2) Make
    <br>login node
    ```bash
    $ # load spack environment 
    $ . /vol0004/apps/oss/spack/share/spack/setup-env.sh
    $ # load gcc, boost and python
    $ spack load gcc@15.1.0/pmdm4gu boost@1.88.0/zxt2ddd python@3.13.5/xwl6x7i
    $ # Go to the directory where the Makefile is located
    $ cd SQC/capi
    $ # make
    $ make
    ```

    compute node
    ```bash
    $ # load spack environment 
    $ . /vol0004/apps/oss/spack/share/spack/setup-env.sh
    $ # load gcc, boost and python 
    $ spack load gcc@15.1.0/c3wm4pb boost@1.88.0/cx2lqoq python@3.13.5/qhm66vh
    $ # Go to the directory where the Makefile is located
    $ cd SQC/capi
    $ # make
    $ make
    ```

## Usage
See [GitHub jhpc-quantum/documents/SQC_JHPC_Quantum_user_guide.md](https://github.com/jhpc-quantum/documents/blob/main/SQC_JHPC_Quantum_user_guide.md).

## C-API and C-API-specific types lists of SQC 
See [docs/SQC.md](docs/SQC.md).
