/// \file sqc_api.h
/// \brief API to generate qasm3
///
/// Copyright (c) RIKEN, Japan. All rights reserved.

#include <stdio.h>

/// \brief Unit of time to delay in sqcDelay and sqcDelayAll
typedef enum{
  UnitS, ///< second
  UnitMS, ///< millisecond
  UnitUS, ///< microsecond
  UnitNS, ///< nanosecond
  UnitDT ///< integer time unit depending on the target backend
} sqcUnitKind;

/// \brief Enum specifying provider in sqcTranspile
typedef enum {
  BasicSimulator,    ///< BasicSimulator
  FakeOpenPulse2Q,   ///< FakeOpenPulse2Q
  FakeOpenPulse3Q,   ///< FakeOpenPulse3Q
  Fake1Q,            ///< Fake1Q
  Fake5QV1,          ///< Fake5QV1
  Fake20QV1,         ///< Fake20QV1
  Fake7QPulseV1,     ///< Fake7QPulseV1
  Fake27QPulseV1,    ///< Fake27QPulseV1
  Fake127QpulseV1,   ///< Fake127QpulseV1
  NProviders        ///< Number of provieders
} sqcTranspileKind;

/// \brief Data structure specifying options for transpiling
typedef void* sqcTranspileOptions;

/// \brief Options for transpiling using providers prefixed with Fake
/// \note Now only the optimization level can be specified.
typedef struct{
 int optLevel;
} sqcFakeProviderOption;

/// \brief Data structure specifying options when sqcMeasure is used.
typedef void* sqcMeasureOptions;

/// \brief Number of gate information that can be stored in the IR of a quantum circuit
/// \note The maximum number of gates in the VQE-generated-dataset used in the test is 36500, so we have matched it.
#define MAX_N_GATES 40000 
/// \brief Maximum number of integer parameters for gate
#define MAX_I_ARGS  2
/// \brief Maximum number of real parameters of gate
#define MAX_R_ARGS  1

/// \brief Structures that represent gates and other operations
/// \details A structure that represents a single gate or other operation of a quantum circuit.
///          What the parameters mean is designed for each operation.
///          For example, if id=CXGate,
///          niarg=2, rarg=0, where iarg[0] is the target qubit number and iarg[1] is the control qubit number.
typedef struct{
  int    id;               ///< Type of this operation (enumGates). such as HGate.
  int    niarg;            ///< Number of integer parameters for this operation
  int    nrarg;            ///< Number of real parameters for this operation
  int    iarg[MAX_I_ARGS]; ///< Integer parameter for this operation
  double rarg[MAX_R_ARGS]; ///< Real parameters for this operation
} gateInfo;

/// \brief Structures representing IRs in quantum circuits
/// \details Structures representing IRs in quantum circuits
/// \note
/// - At present, the structure area for representing operations such as gates is reserved for the number of MAX_N_GATES,
/// - It is not possible to hold more than MAX_N_GATES operations.
typedef struct{
  // --- common parameters --- 
  int       qubits;
  int       ngates; 
  gateInfo gate[MAX_N_GATES]; 
  void*     pyTranspiledQuantumCircuit;
} sqcQC;

// Error code of all function.
/// \brief Function worked correctly.
#define E_SUCCESS (0)


/// \brief Declare the start of C-API usage
/// ```
/// This function performs the following.
/// ・ Calling Py_Initialize for using Python C-API
/// ・ Retention of function object of qiskit.qasm3.loads
/// ・ Retention of function objects in qiskit.qasm3.dumps
/// ・ Retention of function object in qiskit.compiler.transpile
/// ```
///
/// \param [in] channel Channel type.
/// \param [in] token API token.
/// \retval E_SUCCESS Correctly END.
///
/// \note ・Some modules in the Python C-API
///       Python raises an exception when Py_Initialize/Py_Finalize is done multiple times in a process,
///       Python C-API may not return the correct value. For this reason, sqcInitialize should be
///       The limitation is that it can only be called once in a process. The detailed conditions 
///       under which the exception occurs have not yet been investigated.
/// \note ・At this time, multiple executions of the IR dump and the IR dump + transpile are allowed.
///       Therefore, by keeping the function objects of loads, dumps, and transpile that are used multiple times in the management area,
///       we ensure that the same import is not performed.
/// \note ・Arguments currently unused.
int sqcInitialize(char* channel, char* token);

/// \brief Obtaining the quantum circuit IR region
/// \details Obtains and returns the quantum circuit IR region. APIs such as adding operations use the value returned by this API.
///          The number of qubits and the number of classical bits are assumed to be the same.
/// \param [in] qubits Number of qubits in a quantum circuit
///
/// \retval NULL ABEND
/// \retval Other Handler of quantum circuit IR (sqcQC*)
sqcQC* sqcQuantumCircuit(int qubits);

/// \brief Quantum Circuit IR Region Release
/// \param [in, out] qcHandle Handler of quantum circuit IR
///
/// \return None
void sqcDestroyQuantumCircuit(sqcQC* qcHandle);

/// \brief Add h gate to quantum circuit IR
/// \param [in, out] qcHandle Handler of quantum circuit IR
/// \param [in] qubitNumber Target qubit number
///
/// \return None
///
void sqcHGate(sqcQC* qcHandle, int qubitNumber);

/// \brief Add cx gate to quantum circuit IR
/// \param [in, out] qcHandle Handler of quantum circuit IR
/// \param [in] qubitNumber1 control bit number
/// \param [in] qubitNumber2 target bit number
///
/// \return None
///
void sqcCXGate(sqcQC* qcHandle, int qubitNumber1, int qubitNumber2);

/// \brief Add cz gate to quantum circuit IR
/// \param [in, out] qcHandle Handler of quantum circuit IR
/// \param [in] qubitNumber1 control bit number
/// \param [in] qubitNumber2 target bit number
///
/// \return None
///
void sqcCZGate(sqcQC* qcHandle, int qubitNumber1, int qubitNumber2);

/// \brief Add rx gate to quantum circuit IR
/// \param [in, out] qcHandle Handler for quantum circuit IR
/// \param [in] theta Rotation angle
/// \param [in] qubitNumber target bit number
///
/// \return None
///
void sqcRXGate(sqcQC* qcHandle, double theta, int qubitNumber);

/// \brief Add ry gate to quantum circuit IR
/// \param [in, out] qcHandle Handler for quantum circuit IR
/// \param [in] theta Rotation angle
/// \param [in] qubitNumber target bit number
///
/// \return None
///
void sqcRYGate(sqcQC* qcHandle, double theta, int qubitNumber);

/// \brief Add rz gate to quantum circuit IR
/// \param [in, out] qcHandle Handler for quantum circuit IR
/// \param [in] phi Rotation angle
/// \param [in] qubitNumber target bit number
///
/// \return None
///
void sqcRZGate(sqcQC* qcHandle, double phi, int qubitNumber);

/// \brief Add s gate to quantum circuit IR
/// \param [in, out] qcHandle Handler for quantum circuit IR
/// \param [in] qubitNumber Target bit number
///
/// \return None
///
void sqcSGate(sqcQC* qcHandle, int qubitNumber);

/// \brief Add sdg gate to quantum circuit IR
/// \param [in, out] qcHandle Handler for quantum circuit IR
/// \param [in] qubitNumber target bit number
///
/// \return None
///
void sqcSdgGate(sqcQC* qcHandle, int qubitNumber);

/// \brief Add x gate to quantum circuit IR
/// \param [in, out] qcHandle Handler for quantum circuit IR
/// \param [in] qubitNumber target bit number
///
/// \return None
///
void sqcXGate(sqcQC* qcHandle, int qubitNumber);

/// \brief Add u1 gate to quantum circuit IR
/// \param [in, out] qcHandle Handler for quantum circuit IR
/// \param [in] lam Rotation angle
/// \param [in] qubitNumber Target bit number
///
/// \return None
///
void sqcU1Gate(sqcQC* qcHandle, double lam, int qubitNumber);

/// \brief Add ecr gate to quantum circuit IR
/// \param [in, out] qcHandle Handler for quantum circuit IR
/// \param [in] qubitNumber1 Target bit number1
/// \param [in] qubitNumber2 Target bit number2
///
/// \return None
///
void sqcECRGate(sqcQC* qcHandle, int qubitNumber1, int qubitNumber2);

/// \brief Add sx gate to quantum circuit IR
/// \param [in, out] qcHandle Handler for quantum circuit IR
/// \param [in] qubitNumber Target bit number
///
/// \return None
///
void sqcSXGate(sqcQC* qcHandle, int qubitNumber);

/// \brief Add id gate to quantum circuit IR
/// \param [in, out] qcHandle Handler for quantum circuit IR
/// \param [in] qubitNumber Target bit number
///
/// \return None
///
void sqcIDGate(sqcQC* qcHandle, int qubitNumber);

/// \brief Delays the operation of the qubit
/// \param [in, out] qcHandle Handler for quantum circuit IR
/// \param [in] duration Time to delay
/// \param [in] unit Unit of time to delay
/// \param [in] qubitNumber Target bit number
///
/// \return None
///
void sqcDelay(sqcQC* qcHandle, double duration, sqcUnitKind unit, int qubitNumber);

/// \brief Delays the operation of all qubits
/// \param [in, out] qcHandle Handler for quantum circuit IR
/// \param [in] duration Time to delay
/// \param [in] unit Unit of time to delay
///
/// \return None
///
void sqcDelayAll(sqcQC* qcHandle, double duration, sqcUnitKind unit);

/// \brief Reset the qubit to default state.
/// \param [in, out] qcHandle Handler for quantum circuit IR
/// \param [in] qubitNumber Target bit number
///
/// \return None
///
void sqcReset(sqcQC* qcHandle, int qubitNumber);

/// \brief Reset the All qubit to defalut state.
/// \param [in, out] qcHandle Handler for quantum circuit IR
///
/// \return None
///
void sqcResetAll(sqcQC* qcHandle);

/// \brief Apply Barrier to the qubit. 
/// \param [in, out] qcHandle Handler for quantum circuit IR
/// \param [in] qubitNumber Target bit number
///
/// \return None
///
void sqcBarrier(sqcQC* qcHandle, int qubitNumber);

/// \brief Apply Barrier to all qubits.
/// \param [in, out] qcHandle Handler for quantum circuit IR
///
/// \return None
///
void sqcBarrierAll(sqcQC* qcHandle);

/// \brief Add Measure to quantum circuit IR
/// \param [in, out] qcHandle Handler for quantum circuit IR
/// \param [in] qubitNumber Quantum bit number to measure
/// \param [in] clbitNumber classical bit number
/// \param [in] options Data structure for specifying options
///
/// \return None
///
void sqcMeasure(sqcQC* qcHandle, int qubitNumber, int clbitNumber, sqcMeasureOptions options);

/// \brief Specified address is NULL of sqcStoreQC and sqcStoreQCtoMemory.
#define E_NULL_POINTER (-1)
/// \brief Shortage size to write OpenQASM string of sqcStoreQC and sqcStoreQCtoMemory.
#define E_SHORTAGE_SIZE (-2)

/// \brief Generate OpenQASM string from quantum circuit IR and output to memory
/// \param [in] qcHandle Handler of quantum circuit IR
/// \param [out] address Pointer to buffer to store OpenQASM string
/// \param [in] size Buffer Size
///
/// \retval Positive value Normal completion; the number of bytes stored in buf is returned.
/// \retval E_NULL_POINTER Specified "address" is NULL.
/// \retval E_SHORTAGE_SIZE Shortage size to write OpenQASM string.
/// \note 
/// - If there is no circuit that can output, the process continues.
/// - If "debug" is performed at build time, the program will exit with a message.
int sqcStoreQCtoMemory(sqcQC* qcHandle, void* address, size_t size);

/// \brief Generate OpenQASM string from quantum circuit IR and output to file
/// \param [in] qcHandle Handler of quantum circuit IR
/// \param [out] file Handler of the file to be written
///
/// \retval E_SUCCESS Correctly END.
/// \retval E_NULL_POINTER Specified "file" is NULL.
/// \note 
/// - If there is no circuit that can output, the process continues.
/// - If "debug" is performed at build time, the program will exit with a message.
int sqcStoreQC(sqcQC* qcHandle, FILE* file);

/// \brief Transpile a quantum circuit IR and output its circuit information in PyObject type
/// \param [in, out] qcHandle Handler of quantum circuit IR
/// \param [in] kind Transpile Target Provider Number
/// \param [in] options Data structure for indicating options
///
/// \return None
/// 
/// \note 
/// - To specify options, do the following
///       1. Declare a variable of the structure whose options you wish to specify.
///       2. Assign the contents of the option to be specified to the variable.
///       3. Initialize a variable of type sqcTranspiledOptions with the address to the above variable.
///       4. Specify a variable of type sqcTranspiledOptions in the “options” argument of sqcTranspile.
///
/// \note 
/// - At present, the only providers that can be specified for transpile are those defined in providerInfo.
void sqcTranspile(sqcQC* qcHandle, sqcTranspileKind kind, sqcTranspileOptions options);

/// \brief Declare the end of C-API usage
/// 
/// ```
/// This function performs the following.
/// ・ Release the function object of qiskit.qasm3.loads
/// ・ Releasing the function object of qiskit.qasm3.dumps
/// ・ Release of function object in qiskit.compiler.transpile
/// ・ Calling Py_Finalize for Python C-API usage
/// ```
/// \retval E_SUCCESS Correctly END.
///
/// \note 
/// - Like sqcInitialize, it can only be called once in a process.
/// - It has not been investigated what happens if Py_Finalize is called multiple times in a process.
int sqcFinalize(void);

////////////////////////////////
