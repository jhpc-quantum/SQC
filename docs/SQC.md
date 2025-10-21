# C-API and C-API-specific types lists of SQC

## Introduction
List C-API and C-API-specific types available in SQC.

## C-API list

**1) Start and end API**

| C-API | return value | arguments | abstract |
| -- | -- | -- | -- |
|sqcInitOptions *sqcMallocInitOptions()|sqcInitOptions pointer|None|Allocate memory of sqcInitOptions size and returns a sqcInitOptions pointer to the allocated memory.<br>This function initializes sqcInitOptions.|
|int sqcInitialize(sqcInitOptions *opt)|E_SUCCESS : Correctly END|opt: pointer of C-API initialize option|Start the use of the C-API.<br>If you connect to "ibm-kobe-dacc", please specify 1 for use_qiskit, a member of sqcInitOptions.<br>Must not be called more than two times within a single process.|
|int sqcFinalize(sqcInitOptions *opt)|E_SUCCESS : Correctly END|opt: pointer of C-API initialize option|End the use of the C-API.<br>Must not be called more than two times within a single process.|
|void sqcFreeInitOptions(sqcInitOptions *opt)|None|opt: pointer of C-API initialize option|Free up memory area of sqcInitOptions pointer.|

**2) Create and destroy cirucit API**

| C-API | return value | arguments | abstract |
| -- | -- | -- | -- |
|sqcQC* sqcQuantumCircuit(int qubits)|Handle of quantum circuit|qubits : Number of qubits in a quantum circuit|Create a quantum circuit from qubits.<br>The number of classical bits is defined as the same number of qubits.|
|void sqcDestroyQuantumCircuit(sqcQC* qcHandle)|None|qcHandle : Handle of quantum circuit|Discard the quantum circuit specified by the argument.|

**3) Gate and operation API**

Maximum number of gates and operations that can be set is 40000.

| C-API | return value | arguments | abstract |
| -- | -- | -- | -- |
|void sqcMeasure(sqcQC* qcHandle, int qubitNumber, int clbitNumber, sqcMeasureOptions options)|None|qcHandle : Handle of quantum circuit<br>qubitNumber : Target qubit number  <br>clbitNumber : Target classical bit number<br>options : Data structure for specifying options|The measurement result of one qubit is stored in one classical bit.<br>Now, sqcMeasureOptions can specify "NULL" only.|
|void sqcMeasureAll(sqcQC* qcHandle)|None|qcHandle : Handle of quantum circuit|The measurement result of all qubits are stored in classical bits.<br>This operation is only available on "reimei" or "reimei-simulator".|
|void sqcHGate(sqcQC* qcHandle, int qubitNumber)|None|qcHandle : Handle of quantum circuit<br>qubitNumber : Target bit number|Apply H gate to a qubit.|
|void sqcCXGate(sqcQC* qcHandle, int qubitNumber1, int qubitNumber2)|None|qcHandle : Handle of quantum circuit<br>qubitNumber1 : control bit number <br>qubitNumber2 : Target bit number|Apply CX gate to a qubit.|
|void sqcCZGate(sqcQC* qcHandle, int qubitNumber1, int qubitNumber2)|None|qcHandle : Handle of quantum circuit<br>qubitNumber1 : control bit number <br>qubitNumber2 : Target bit number|Apply CZ gate to a qubit.|
|void sqcRZGate(sqcQC* qcHandle, double phi, int qubitNumber)|None|qcHandle : Handle of quantum circuit<br>phi : Rotation angle<br>qubitNumber : Target bit number|Apply RZ gate to a qubit.|
|void sqcSGate(sqcQC* qcHandle, int qubitNumber)|None|qcHandle : Handle of quantum circuit<br>qubitNumber : Target bit number|Apply S gate to a qubit.|
|void sqcSdgGate(sqcQC* qcHandle, int qubitNumber)|None|qcHandle : Handle of quantum circuit<br>qubitNumber : Target bit number|Apply S† gate to a qubit.|
|void sqcRXGate(sqcQC* qcHandle, double theta, int qubitNumber)|None|qcHandle : Handle of quantum circuit<br>theta : Rotation angle<br>qubitNumber : Target bit number|Apply RX gate to a qubit.|
|void sqcRYGate(sqcQC* qcHandle, double theta, int qubitNumber)|None|qcHandle : Handle of quantum circuit<br>theta : Rotation angle<br>qubitNumber : Target bit number|Apply RY gate to a qubit.|
|void sqcXGate(sqcQC* qcHandle, int qubitNumber)|None|qcHandle : Handle of quantum circuit<br>qubitNumber : Target bit number|Apply Pauli X gate to a qubit.|
|void sqcZGate(sqcQC* qcHandle, int qubitNumber)|None|qcHandle : Handle of quantum circuit<br>qubitNumber : Target bit number|Apply Pauli Z gate to a qubit.<br>This gate is only available on "reimei" or "reimei-simulator".|
|void sqcU1Gate(sqcQC* qcHandle, double lam, int qubitNumber)|None|qcHandle : Handle of quantum circuit<br>lam : Rotation angle<br>qubitNumber : Target bit number|Apply U1 gate to a qubit.|
|void sqcReset(sqcQC* qcHandle, int qubitNumber)|None|qcHandle : Handle of quantum circuit<br>qubitNumber : Target bit number|Reset the quantum a qubit to their default state.|
|void sqcResetAll(sqcQC* qcHandle)|None|qcHandle : Handle of quantum circuit|Reset the quantum all qubits to their default state.|
|void sqcBarrier(sqcQC* qcHandle, int qubitNumber)|None|qcHandle : Handle of quantum circuit<br>qubitNumber : Target bit number|Apply Barrier to a qubit.|
|void sqcBarrierAll(sqcQC* qcHandle)|None|qcHandle : Handle of quantum circuit|Apply Barrier to all qubits.|
|void sqcECRGate(sqcQC* qcHandle, int qubitNumber1, <br>int qubitNumber2)|None|qcHandle : Handle of quantum circuit<br>qubitNumber1 : Target bit number1<br>qubitNumber2 : Target bit number2|Apply ECR gate to a qubit.|
|void sqcSXGate(sqcQC* qcHandle, int qubitNumber)|None|qcHandle : Handle of quantum circuit<br>qubitNumber : Target bit number|Apply SX gate(√X gate) to a qubit.|
|void sqcIDGate(sqcQC* qcHandle, int qubitNumber)|None|qcHandle : Handle of quantum circuit<br>qubitNumber : Target bit number|Apply Identity gate to a qubit.|
|void sqcDelay(sqcQC* qcHandle, double duration, sqcUnitKind unit, int qubitNumber)|None|qcHandle : Handle of quantum circuit<br>duration : Time to delay<br>unit : Unit of time to delay<br>qubitNumber : Target bit number|Delays the operation of the qubit.<br>UnitS, UnitMS, UnitUS, UnitNS and UnitDT can be specified for sqcUnitKind.<br>This operation is only available on "ibm-kobe-dacc".|
|void sqcDelayAll(sqcQC* qcHandle, double duration, sqcUnitKind unit)|None|qcHandle : Handle of quantum circuit<br>duration : Time to delay<br>unit : Unit of time to delay|Delays the operation of all qubits.<br>UnitS, UnitMS, UnitUS, UnitNS and UnitDT can be specified for sqcUnitKind.<br>This operation is only available on "ibm-kobe-dacc".|

**4) Read and store OpenQASM API**
| C-API | return value | arguments | abstract |
| -- | -- | -- | -- |
|void sqcReadQasmFile(char **ptr, const char *fname, int maxlen)|None|ptr:Pointer to store OpenQASM string<br>fname:OpenQASM file path<br>maxlen:Maximum length that can be written to memory|Read OpenQASM file and store OpenQASM string to specified memory.|
|int sqcConvQASMtoMemory(sqcQC* qcHandle, sqcBackend backend, void* address, size_t size)|Positive value :  Normal completion(OpenQASM strings length)<br>E_NULL_POINTER : Specified address is NULL<br>E_SHORTAGE_SIZE : Shortage size to write OpenQASM string|qcHandle : Handle of quantum circuit<br>backend: Quantum computer or simulator running quantum circuit<br>address : Pointer to memory to store OpenQASM string<br>size : Memory Size|Convert the quantum circuit into an OpenQASM string and write it to memory specified in the argument.<br>If backend is "reimei" or "reimei-simulator", this function converts to OpenQASM2.0. Otherwise, this function converts to OpenQASM3.0.|

**5) Transpile API**
| C-API | return value | arguments | abstract |
| -- | -- | -- | -- |
|int sqcIbmdTranspileInfo(sqcQC* qcHandle, sqcBackend backend)|SQC_RESULT_OK(0): Correctly END<br>Negative value: Error<br>Refer to "sqcIbmdTranspileInfo, sqcQCRun" of Chapter "retun code".|qcHandle : Handle of quantum circuit<br>backend : Quantum computer or simulator running quantum circuit|Get "ibm-kobe-dacc" quantum computer information to transpile quantum circuit.|
|void sqcTranspile(sqcQC* qcHandle, sqcBackend backend, sqcTranspileOptions options)|None|qcHandle : Handle of quantum circuit<br>backend : Quantum computer or simulator running quantum circuit<br>options : Data structure for specifying options|Get "ibm-kobe-dacc" quantum computer information and transpile the quantum circuit.<br>The available backend is "ibm-kobe-dacc" only.<br>Please specify NULL for transpile options because the options are not implemented.<br>"qiskit", "qiskit-qasm3-import", "qiskit-ibm-runtime" are necessary.|

**6) Run API**
| C-API | return value | arguments | abstract |
| -- | -- | -- | -- |
|void sqcInitializeRunOpt(sqcRunOptions* opt)|None|opt : pointer of sqcRunOptions |Initialize option of running quantum circuit. Initialized values are described on sqcRunOptions of Chapter "C-API-specific types".|
|int sqcQCRun(sqcQC* qcHandle, sqcBackend backend, sqcRunOptions options, sqcOut *result)|SQC_RESULT_OK(0): Correctly END<br>Negative value: Error<br>Refer to "sqcIbmdTranspileInfo, sqcQCRun" of Chapter "retun code".|qcHandle : Handle of quantum circuit<br>backend : Quantum computer or simulator running quantum circuit<br>options : Data structure for specifying options<br>result : Pointer storing result of runnning quantum circuit.|Run quantum circuit on specified backend under specified options.<br>Refer to sqcRunOptions of Chapter "C-API-specific types".|

**7) Print and free up result API**
| C-API | return value | arguments | abstract |
| -- | -- | -- | -- |
|void sqcPrintQCResult(FILE *fp, sqcOut *r, sqcOutputKind kind)|None|fp : File Handler storing result<br>r : Pointer of struct stored result<br>kind : Output format|Write result to file according to specified format.|
|void sqcFreeOut(sqcOut *r, sqcOutputKind kind)|None|r : Pointer of struct stored result<br>kind : Output format|Free up memory area of sqcOut pointer.|

## C-API-specific types

**1) sqcInitOptions**

Data structure specifying options when sqcInitialize and sqcFinalize is used.<br>
The following table lists the members of the structure.

|member|type|Initialize value <br>by sqcMallocInitOptions|description|
| -- | -- | -- | -- |
|use_qiskit|char|0|Whether to use Qiskit.<br>If you connect to "ibm-kobe-dacc", please specify 1 for this option.|

**2) sqcQC**

Structure representing quantum circuits.<br>
Create by sqcQuantumCircuit.<br>
Must destroyed by sqcDestroyQuantumCircuit when finished using.<br>
The following are the members of this structure that users directly utilise.<br>

|member|type|Initialization value by sqcQuantumCircuit|description|
| -- | -- | -- | -- |
|qasm|char*|NULL|Pointer of memory to store OpenQASM string.<br>Funtion "sqcTranspile" returns transpiled circuit (OpenQASM string) to this member.|
|backend_config_json|char*|NULL|Pointer of memory to store a configuration string of "ibm-kobe-dacc" backend.<br>The string is stored by function "sqcIbmdTranspileInfo".|
|backend_props_json|char*|NULL|Pointer of memory to store properties string of "ibm-kobe-dacc" backend.<br>The string is stored by function "sqcIbmdTranspileInfo".|

**3) sqcMeasureOptions**

Data structure specifying options when sqcMeasure is used.<br>
Internal not yet implemented. <br>
If a non-null value is specified, an error occurs and the program terminates.

**4) sqcUnitKind**

Unit of time to delay in sqcDelay and sqcDelayAll.<br>
The strings listed in the table below can be specified.

| sqcUnitKind | Unit |
| -- | -- |
|UnitS| second|
|UnitMS| millisecond|
|UnitUS| microsecond|
|UnitNS| nanosecond|
|UnitDT| integer time unit depending on the target backend|

**5) sqcBackend**

Enum specifying backend.<br>
The strings listed in the table below can be specified.

| sqcBackend | Quantum computer or simulator |
| -- | -- |
|SQC_RPC_SCHED_QC_TYPE_QTM_GRPC|reimei|
|SQC_RPC_SCHED_QC_TYPE_QTM_SIM_GRPC|reimei-simulator|
|SQC_RPC_SCHED_QC_TYPE_IBM_DACC|ibm-kobe-dacc|

**6) sqcTranspileOptions**

Data structure specifying options for transpiling in sqcTranspile.<br>
Please specify NULL for transpile options because the options are not implemented.

**7) sqcRunOptions**

Data structure specifying options for Run API.<br>
The following table lists the members of the structure.

|member|type|Initialization value by sqcInitializeRunOpt|description|
| -- | -- | -- | -- |
|nshots|int|0|Number of shots|
|qubits|int|0|Number of qubits using quantum circuit|
|auth_method|int|RPC_AUTH_METHOD_JWT|Authentication method for RPC server connection.<br>RPC_AUTH_METHOD_JWT : JWT(Json Web Token)|
|outFormat|sqcOutputKind|SQC_OUT_RAW|Output format of result of running quantum circuit.<br>Refer to sqcOutputKind of Chapter "C-API-specific types".|
|inFormat|sqcInputKind|SQC_IN_QASM|Input format of quantum circuit to quantum computer.<br>Refer to sqcInputKind of Chapter "C-API-specific types".|

**8) sqcOutputKind**

Enum specifying output format of result of running quantum circuit or simulator.<br>
The strings listed below can be specified.

| sqcOutputKind | description |
| -- | -- |
|SQC_OUT_RAW| Result string returned quantum computer or simulator. |
|SQC_OUT_HIST| Histogram.<br>Not currently implemented.|
|SQC_OUT_ALL_BIN| Data lists of binary numbers in binary format.<br>Not currently implemented.|
|SQC_OUT_ALL_CHAR| Data lists of binary numbers in string format.<br>Not currently implemented.|

Examples of each output format are shown below.
* SQC_OUT_RAW

  In this format, the output differs between "reimei" or "reimei-simulator" and "ibm-kobe-dacc".

   "reimei" or "reimei-simulator"
   ```
   {
      c    : "00"
      cx    : "0"
   }
   {
      c    : "11"
      cx    : "1"
   }
   ...
   ```
   "ibm-kobe-dacc"
   ```
   ```

**9) sqcInputKind**

Enum specifying input format of quantum circuit to quantum computer or simulator.<br>
The input format listed in the table below can be specified.

|sqcInputKind|description|
| -- | -- |
|SQC_IN_QASM| OpenQASM format.<br>OpenQASM version is 3.0 when backend is "ibm-kobe-dacc".<br>OpenQASM version is 2.0 when backend is "reimei" or "reimei-simulator". 
|SQC_IN_QIR| QIR format.<br>Not currently implemented.|

**10) sqcOut**

Structure representing result of running quantum circuits.<br>
The following table lists the members of the structure.

|member|type|description|
| -- | -- | -- |
|format|sqcOutputKind|Output format of result|
|n|int|length of result string when "sqcRunOptions.outFormat" is SQC_OUT_RAW.<br>For other output formats, number of shots.|
|nqubits|int|Number of qubits|
|result|char*|Result string when "sqcRunOptions.outFormat" is SQC_OUT_RAW.|
|result2|char**||
|index|char**||
|count|int*||

## Return code
### sqcInitialize, sqcFinalize
| return code | meaning |
| -- | -- |
| E_SUCCESS | Correctly END. |

### sqcConvQASMtoMemory
| return code | meaning |
| -- | -- |
| E_SUCCESS | Correctly END. |
| E_NULL_POINTER | Specified argument is NULL. |
| E_SHORTAGE_SIZE | Shortage size to write OpenQASM string. |

### sqcIbmdTranspileInfo, sqcQCRun
| return code | meaning |
| -- | -- |
|SQC_RESULT_OK| Correctly END. |
|SQC_RESULT_ANY_FAILURES|Some kind of error. |
|SQC_RESULT_POSIX_API_ERROR||
|SQC_RESULT_NO_MEMORY| Insufficient memory. |
|SQC_RESULT_NOT_FOUND||
|SQC_RESULT_ALREADY_EXISTS||
|SQC_RESULT_NOT_OPERATIONAL||
|SQC_RESULT_INVALID_ARGS| The arguments is invalid. |
|SQC_RESULT_NOT_OWNER||
|SQC_RESULT_NOT_STARTED||
|SQC_RESULT_TIMEDOUT| The timeout occurred. |
|SQC_RESULT_ITERATION_HALTED||
|SQC_RESULT_OUT_OF_RANGE||
|SQC_RESULT_NAN||
|SQC_RESULT_ALREADY_HALTED||
|SQC_RESULT_INVALID_OBJECT||
|SQC_RESULT_INVALID_STATE_TRANSITION||
|SQC_RESULT_SOCKET_ERROR||
|SQC_RESULT_BUSY||
|SQC_RESULT_STOP||
|SQC_RESULT_TLS_CONN_ERROR||
|SQC_RESULT_EINPROGRESS||
|SQC_RESULT_UNSUPPORTED||
|SQC_RESULT_QUOTE_NOT_CLOSED||
|SQC_RESULT_NOT_ALLOWED||
|SQC_RESULT_NOT_DEFINED||
|SQC_RESULT_WAKEUP_REQUESTED||
|SQC_RESULT_TOO_MANY_OBJECTS||
|SQC_RESULT_EOF||
|SQC_RESULT_NO_MORE_ACTION||
|SQC_RESULT_TOO_LARGE||
|SQC_RESULT_TOO_SMALL||
|SQC_RESULT_TOO_LONG||
|SQC_RESULT_TOO_SHORT||
|SQC_RESULT_ADDR_RESOLVER_FAILURE||
|SQC_RESULT_INVALID_STATE||
|SQC_RESULT_INVALID_NAMESPACE||
|SQC_RESULT_INTERRUPTED||
|SQC_RESULT_TEMPORARY_UNAVAILABLE||
|SQC_RESULT_ANY_RUNTIME_ERROR||
|SQC_RESULT_AUTHENTICATION_ERROR||
|SQC_RESULT_INVALID_CREDENTIAL||
|SQC_RESULT_NOT_A_DIRECTORY||
|SQC_RESULT_IS_A_DIRECTORY||
|SQC_RESULT_INVALID_PRIVATE_KEY_PERMISSION||
|SQC_RESULT_PRIVATE_KEY_READ_FAILURE||
|SQC_RESULT_PUBLIC_KEY_READ_FAILURE||
|SQC_RESULT_INVALID_CIPHER||
|SQC_RESULT_CERTIFICATE_VERIFY_FAILURE||
|SQC_RESULT_INVALID_JWT_TOKEN||
