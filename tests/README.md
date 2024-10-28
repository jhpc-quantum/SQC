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
* `qasm2c/data/`:C-API tests are stored. 8700 in all
* `qasm2c/tools/`:Contains scripts for creating and executing C-APIs
* `UnitTests/`:Delivering unit test relationships ※Unit test should be careful to rebuild C-API
* `UnitTests/answer`:Collection of answers to be used in the test
* `UnitTests/src`:Programs for testing
* `UnitTests/tools`:C-API unit tests are stored

## About Scripts
#### `qasm2c/tools/qasm2c.py`:　Script to convert .qasm to C-API test.

#### Example：
```
$ python3 qasm2c.py input.qasm output.c
```
#### `qasm2c/tools/qasm2c_all.sh`:　Script to convert all .qasm in all directories to C-API tests.
#### Example：
```
$ bash qasm2c_all.sh in_directory out_directory
```
#### `qasm2c/tools/translation_all.sh`:　Script to translate and run the converted C-API tests.
#### Example：
```
$ bash translation_all.sh
```
#### `qasm2c/tools/qiskit_1to1.py`： Script to run qiskit.
#### Example：
```
$ python3 qiskit_1to1.py input.txt
```
#### `qasm2c/tools/qiskit_all.sh`： Script to run qiskit for all directories under the specified directory.
#### Example：
```
$ bash qiskit_all.sh
```
#### `qasm2c/tools/run_compute_node.sh`:　Script to run a series of tests with the target application in Fugaku.
#### Example：
```
$ pjsub run_compute_node.sh
```

#### `UnitTest/tools/UnitTest0*.sh`： Individual unit tests
#### Example：
```
$ bash UnitTest001.sh
```

#### `UnitTest/tools/UnitTest_all.sh`： Script to run all unit tests
#### Example：
```
$ bash UnitTest_all.sh
```

#### `UnitTest/tools/run_compute_node.sh`： Script to run UnitTest_all.sh in Fugaku
#### Example：
```
$ qsub run_compute_node.sh
```