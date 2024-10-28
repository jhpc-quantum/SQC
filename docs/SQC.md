# C-API and C-API-specific types lists of SQC

## Introduction
List C-API and C-API-specific types available in SQC.

## C-API list

**1) Start and end API**

| C-API | return value | arguments | abstract |
| -- | -- | -- | -- |
|int sqcInitialize(char* channel, char* token)|E_SUCCESS：Correctly END.|channel：channel type<br>token：API token|Start the use of the C-API.<br>Must not be called more than once in a process.|
|int sqcFinalize()|E_SUCCESS：Correctly END.|None|End the use of the C-API.<br>Must not be called more than once in a process.|

**2) Create and destroy cirucit API**

| C-API | return value | arguments | abstract |
| -- | -- | -- | -- |
|sqcQC* sqcQuantumCircuit(int qubits)|Handle of quantum circuit|qubits：Number of qubits in a quantum circuit|Create a quantum circuit from qubits.<br>The number of classical bits is defined as the same number of qubits.|
|void sqcDestroyQuantumCircuit(sqcQC* qcHandle)|None|qcHandle：Handle of quantum circuit|Discard the quantum circuit specified by the argument.|



**3) Gate and operation API**

| C-API | return value | arguments | abstract |
| -- | -- | -- | -- |
|void sqcMeasure(sqcQC* qcHandle, int qubitNumber, int clbitNumber, sqcMeasureOptions options)|None|qcHandle：Handle of quantum circuit<br>qubitNumber：Target qubit number  <br>clbitNumber：Target classical bit number<br>options：Data structure for specifying options|The measurement result of one qubit is<br>Store in one classical bit.<br>Now specify NULL.|
|void sqcHGate(sqcQC* qcHandle, int qubitNumber)|None|qcHandle：Handle of quantum circuit<br>qubitNumber：Target bit number|Apply H gate to a qubit.|
|void sqcCXGate(sqcQC* qcHandle, int qubitNumber1, int qubitNumber2)|None|qcHandle：Handle of quantum circuit<br>qubitNumber1：control bit number <br>qubitNumber2：Target bit number|Apply CX gate to a qubit.|
|void sqcCZGate(sqcQC* qcHandle, int qubitNumber1, int qubitNumber2)|None|qcHandle：Handle of quantum circuit<br>qubitNumber1：control bit number <br>qubitNumber2：Target bit number|Apply CZ gate to a qubit.|
|void sqcRZGate(sqcQC* qcHandle, double phi, int qubitNumber)|None|qcHandle：Handle of quantum circuit<br>phi：Rotation angle<br>qubitNumber：Target bit number|Apply RZ gate to a qubit.|
|void sqcSGate(sqcQC* qcHandle, int qubitNumber)|None|qcHandle：Handle of quantum circuit<br>qubitNumber：Target bit number|Apply S gate to a qubit.|
|void sqcSdgGate(sqcQC* qcHandle, int qubitNumber)|None|qcHandle：Handle of quantum circuit<br>qubitNumber：Target bit number|Apply S† gate to a qubit.|
|void sqcRXGate(sqcQC* qcHandle, double theta, int qubitNumber)|None|qcHandle：Handle of quantum circuit<br>theta：Rotation angle<br>qubitNumber：Target bit number|Apply RX gate to a qubit.|
|void sqcRYGate(sqcQC* qcHandle, double theta, int qubitNumber)|None|qcHandle：Handle of quantum circuit<br>theta：Rotation angle<br>qubitNumber：Target bit number|Apply RY gate to a qubit.|
|void sqcXGate(sqcQC* qcHandle, int qubitNumber)|None|qcHandle：Handle of quantum circuit<br>qubitNumber：Target bit number|Apply Pauli X gate to a qubit.|
|void sqcU1Gate(sqcQC* qcHandle, double lam, int qubitNumber)|None|qcHandle：Handle of quantum circuit<br>lam：Rotation angle<br>qubitNumber：Target bit number|Apply U1 gate to a qubit.|
|void sqcReset(sqcQC* qcHandle, int qubitNumber)|None|qcHandle：Handle of quantum circuit<br>qubitNumber：Target bit number|Reset the quantum a qubit to their default state.|
|void sqcResetAll(sqcQC* qcHandle)|None|qcHandle：Handle of quantum circuit|Reset the quantum all qubits to their default state.|
|void sqcBarrier(sqcQC* qcHandle, int qubitNumber)|None|qcHandle：Handle of quantum circuit<br>qubitNumber：Target bit number|Apply Barrier to a qubit.|
|void sqcBarrierAll(sqcQC* qcHandle)|None|qcHandle：Handle of quantum circuit|Apply Barrier to all qubits.|
|void sqcECRGate(sqcQC* qcHandle, int qubitNumber1, <br>int qubitNumber2)|None|qcHandle：Handle of quantum circuit<br>qubitNumber1：Target bit number1<br>qubitNumber2：Target bit number2|Apply ECR gate to a qubit.|
|void sqcSXGate(sqcQC* qcHandle, int qubitNumber)|None|qcHandle：Handle of quantum circuit<br>qubitNumber：Target bit number|Apply SX gate(√X gate) to a qubit。
|void sqcIDGate(sqcQC* qcHandle, int qubitNumber)|None|qcHandle：Handle of quantum circuit<br>qubitNumber：Target bit number|Apply Identity gate to a qubit.|
|void sqcDelay(sqcQC* qcHandle, double duration, sqcUnitKind unit, int qubitNumber)|None|qcHandle：Handle of quantum circuit<br>duration：Time to delay<br>unit：Unit of time to delay<br>qubitNumber：Target bit number|Delays the operation of the qubit.<br>UnitS, UnitMS, UnitUS, UnitNS and UnitDT can be specified for sqcUnitKind.|
|void sqcDelayAll(sqcQC* qcHandle, double duration, sqcUnitKind unit)|None|qcHandle：Handle of quantum circuit<br>duration：Time to delay<br>unit：Unit of time to delay|Delays the operation of all qubits.<br>UnitS, UnitMS, UnitUS, UnitNS and UnitDT can be specified for sqcUnitKind.|

**4) Store API**
| C-API | return value | arguments | abstract |
| -- | -- | -- | -- |
|int sqcStoreQC(sqcQC* qcHandle, FILE* file)|E_SUCCESS：Correctly END.<br>E_NULL_POINTER：Specified file is NULL|qcHandle：Handle of quantum circuit<br>file：Handler of the file to be written|Convert the quantum circuit before or after transpiling to an Open3.0QASM string and write it to a file. Convert the circuit to a QASM string if it has been transpiled, otherwise convert the circuit before transpiling.|
|int sqcStoreQCtoMemory(sqcQC* qcHandle, void* address, size_t size)|Positive value： Normal completion(OpenQASM strings length)<br>E_NULL_POINTER：Specified address is NULL<br>E_SHORTAGE_SIZE：Shortage size to write OpenQASM string|qcHandle：Handle of quantum circuit<br>address：Pointer to buffer to store OpenQASM string<br>size：Buffer Size|Convert the quantum circuit before or after transpiling into an OpenQASM3.0 string and write it to memory at the address specified in the argument. If the circuit has been transpiled, it is converted to the QASM string, otherwise the circuit before transpiling is converted to the QASM string.|

**5) Transpile API**
| C-API | return value | arguments | abstract |
| -- | -- | -- | -- |
|void sqcTranspile(sqcQC* qcHandle, sqcTranspileKind kind, sqcTranspileOptions options)|None|qcHandle：Handle of quantum circuit<br>kind：Provider to specify when transpile<br>options：Data structure for specifying options|Transpile the quantum circuit at the optimization level for the provider and store the result (PyObject) in the qcHandle. The available providers and how to specify options are described on a separate page.|




## C-API-specific types
**1) sqcQC**

Structure representing quantum circuits.<br>
Create by sqcQuantumCircuit.<br>
Must destroyed by sqcDestroyQuantumCircuit when finished using.

**2) sqcMeasureOptions**

Data structure specifying options when sqcMeasure is used.<br>
Internal not yet implemented. <br>
If a non-null value is specified, an error occurs and the program terminates.

**3) sqcUnitKind**

Unit of time to delay in sqcDelay and sqcDelayAll.<br>
The strings listed in the table below can be specified.

| sqcUnitKind | Unit |
| -- | -- |
|UnitS| second|
|UnitMS| millisecond|
|UnitUS| microsecond|
|UnitNS| nanosecond|
|UnitDT| integer time unit depending on the target backend|

**4) sqcTranspileKind**

Enum specifying provider in sqcTranspile.<br>
The strings listed in the table below can be specified.

| sqcTranspileKind | Provider |
| -- | -- |
| BasicSimulator* | BasicSimulator |
| FakeOpenPulse2Q | FakeOpenPulse2Q |
| FakeOpenPulse3Q | FakeOpenPulse3Q |
| Fake1Q | Fake1Q |
| Fake5QV1 | Fake5QV1 |
| Fake20QV1 | Fake20QV1 |
| Fake7QPulseV1 | Fake7QPulseV1 |
| Fake27QPulseV1 | Fake27QPulseV1 |
| Fake127QpulseV1 | Fake127QpulseV1 |

*Currently, BasicSimulator is not available as it does not implement the option.

**5) sqcTranspileOptions**

Data structure specifying options for transpiling in sqcTranspile.

**How to specify options**

- sqcTranspileOptions are available for each provider.

Example
```
sqcFakeProviderOption option = {1};
sqcTranspile(qcHandle, Fake20QV1, &option);
```

The optional data structure for FakeProvider only allows optimization_level to be specified.<br>
Below is a description of the structure that specifies the options.

| structure name | member |
| -- | -- |
| sqcFakeProviderOption | int optLevel: optimization_level of Qiskit's transpile option<br>Possible values are 0, 1, 2, 3. |

## Return code
Below is a description of return code in sqcInitialize and sqcFinalize.
| return code | meaning |
| -- | -- |
| E_SUCCESS | Correctly END. |

Below is a description of return code in sqcStoreQC and sqcStoreQCtoMemory.
| return code | meaning |
| -- | -- |
| E_SUCCESS | Correctly END. |
| E_NULL_POINTER | Specified argument is NULL. |
| E_SHORTAGE_SIZE | Shortage size to write OpenQASM string. |




