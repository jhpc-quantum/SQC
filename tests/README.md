# C-API tests
## Introduction
This is the directory that contains the C-API test relations.

## Directory file structure
```
tests
├─qasm2c
│  ├─data
│  │  └─qasm
│  │      ├─04qubit
│  │      ├─08qubit
│  │      ├─12qubit
│  │      ├─16qubit
│  │      └─20qubit
│  └─tools
└─UnitTests
    ├─answer
    ├─src
    └─tools
```

## Description of directories
* `qasm2c/`:C-API test targeting (https://github.com/Qulacs-Osaka/VQE-generated-dataset/tree/main/data/qasm)
* `qasm2c/data/qasm/`:C-API tests are stored. 8700 in all
* `qasm2c/data/tools/`:Contains scripts for creating and executing C-APIs
* `UnitTests/`:Delivering unit test relationships
* `UnitTests/answer`:Collection of answers to be used in the test
* `UnitTests/src`:Programs for testing
* `UnitTests/tools`:C-API unit tests are stored

## About Scripts
#### `qasm2c/tools/qasm2c.py`:　Script to convert .qasm to C-API test.

#### Input Example：
```
$ python3 qasm2c.py input.qasm output.c
```
#### `qasm2c/tools/qasm2c_all.sh`:　Script to convert all .qasm in all directories to C-API tests.
#### Input Example：
```
$ bash qasm2c_all.sh in_directory out_directory
```
#### `qasm2c/tools/run_translation.sh`:　Script to translate and run the converted C-API tests.
#### Input Example：
```
$ bash run_translation.sh
```
#### `qasm2c/tools/run_compute_node.sh`:　Sample script to run run_translation.sh in Fugaku.
#### Input Example：
```
$ qsub run_translation.sh
```
#### `qasm2c/tools/qiskit_1to1.py`： Script to run qiskit.
#### Input Example：
```
$ python3 qiskit_1to1.py input.txt
```
#### `qasm2c/tools/qiskit_all.sh`： Script to run qiskit for all directories under the specified directory.
#### Input Example：
```
$ bash qiskit_all.sh
```