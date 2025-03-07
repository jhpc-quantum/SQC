/// \file sqc_api.c
/// \brief API to generate qasm3
///
/// Copyright (c) RIKEN, Japan. All rights reserved.
/// 
/// \note
/// - When outputting an error, it does not indicate which API it occurred in.
/// - Write the following two lines for gate functions.
///   - No check if a nonexistent bit number is specified.
///   - Do not check if an operation cannot be added (adding an operation that exceeds the number of MAX_N_GATES).

#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../include/sqc_api.h"

static char* gateInfo2qasm(sqcQC* qcHandle);

/// \brief Definition of import source and class name corresponding to enum sqcTranspileKind
static char* providerInfo[NProviders][2] = {
        { "qiskit.providers.basic_provider", "BasicSimulator" },
        { "qiskit.providers.fake_provider", "FakeOpenPulse2Q" },
        { "qiskit.providers.fake_provider", "FakeOpenPulse3Q" },
        { "qiskit.providers.fake_provider", "Fake1Q" },
        { "qiskit.providers.fake_provider", "Fake5QV1" },
        { "qiskit.providers.fake_provider", "Fake20QV1" },
        { "qiskit.providers.fake_provider", "Fake7QPulseV1" },
        { "qiskit.providers.fake_provider", "Fake27QPulseV1" },
        { "qiskit.providers.fake_provider", "Fake127QPulseV1" }
};

/// \brief enum representing operations in a quantum circuit IR
/// \note Lines 37 to 49 are enum of gate, line 51 to 57 are enum of non-gate operation.
enum enumGates{
    // Gate definition
    HGate,
    CXGate,
    CZGate,
    RXGate,
    RYGate,
    RZGate,
    SGate,
    SdgGate,
    XGate,
    U1Gate,
    ECRGate,
    SXGate,
    IDGate,
    // Non-gate operation definition
    Delay,
    DelayAll,
    Reset,
    ResetAll,
    Barrier,
    BarrierAll,
    Measure,
    NGates /// Number of gates
};

/// \brief Precision of rotation angle in sqcRXGate, sqcRYGate, sqcRZGate, sqcU1Gate
#define PRECISION 20

/// \brief Information management area used in C-API processing
typedef struct{
    PyObject* pyLoads;      ///< Function object of a function that converts an OpenQASM string into a Qiskit circuit object.
    PyObject* pyDumps;      ///< Function object for a function that converts a Qiskit circuit object to an OpenQASM string.
    PyObject* pyTranspiler; ///< Function object of a function that calls the Qiskit transpiler
} mngArea;

static mngArea* mng;

int sqcInitialize(char* channel, char* token)
{
    (void)channel;
    (void)token;
    mng = (mngArea*)malloc(sizeof(mngArea));

    Py_Initialize(); // only be initialized once per interpreter process

    PyObject* pyImportName;

    pyImportName = PyUnicode_DecodeFSDefault("qiskit.qasm3");
    PyObject *pyQiskitQasm3 = PyImport_Import(pyImportName);
    if(PyErr_Occurred()){
        PyErr_Print();
    }
    Py_XDECREF(pyImportName);

    pyImportName = PyUnicode_DecodeFSDefault("qiskit.compiler");
    PyObject *pyQiskitCompiler = PyImport_Import(pyImportName);
    if(PyErr_Occurred()){
        PyErr_Print();
    }

    mng->pyLoads = PyObject_GetAttrString(pyQiskitQasm3, "loads");
    if(PyErr_Occurred()){
        PyErr_Print();
    }

    mng->pyDumps = PyObject_GetAttrString(pyQiskitQasm3, "dumps");
    if(PyErr_Occurred()){
        PyErr_Print();
    }

    mng->pyTranspiler = PyObject_GetAttrString(pyQiskitCompiler, "transpile");
    if(PyErr_Occurred()){
        PyErr_Print();
    }

    Py_XDECREF(pyQiskitCompiler);
    Py_XDECREF(pyQiskitQasm3);
    Py_XDECREF(pyImportName);

    return E_SUCCESS;
}

sqcQC* sqcQuantumCircuit(int qubits)
{
    sqcQC* qcHandle;
    qcHandle = (sqcQC*)malloc(sizeof(sqcQC));
    qcHandle->qubits  = qubits;
    qcHandle->ngates  = 0;
    qcHandle->pyTranspiledQuantumCircuit =NULL;

    return qcHandle;
}

// Free the memory of the circuit information
// Circuit information is a fixed area, so it is released at the same time as qcHandle is released
// Release the PyObject of the transpile result
// Release the qcHandle argument
void sqcDestroyQuantumCircuit(sqcQC* qcHandle)
{
    Py_XDECREF(qcHandle->pyTranspiledQuantumCircuit);
    qcHandle->pyTranspiledQuantumCircuit = NULL;
    free(qcHandle);
}

void sqcHGate(sqcQC* qcHandle, int qubitNumber)
{
    int n =  qcHandle->ngates;
    qcHandle->gate[n].id      = HGate;
    qcHandle->gate[n].niarg   = 1;
    qcHandle->gate[n].iarg[0] = qubitNumber;
    qcHandle->gate[n].nrarg   = 0;
    qcHandle->ngates++;
}

void sqcCXGate(sqcQC* qcHandle, int qubitNumber1, int qubitNumber2)
{
    int n = qcHandle->ngates;
    qcHandle->gate[n].id      = CXGate;
    qcHandle->gate[n].niarg   = 2;
    qcHandle->gate[n].iarg[0] = qubitNumber1;
    qcHandle->gate[n].iarg[1] = qubitNumber2;
    qcHandle->gate[n].nrarg   = 0;
    qcHandle->ngates++;
}

void sqcCZGate(sqcQC* qcHandle, int qubitNumber1, int qubitNumber2)
{
    int n = qcHandle->ngates;
    qcHandle->gate[n].id      = CZGate;
    qcHandle->gate[n].niarg   = 2;
    qcHandle->gate[n].iarg[0] = qubitNumber1;
    qcHandle->gate[n].iarg[1] = qubitNumber2;
    qcHandle->gate[n].nrarg   = 0;
    qcHandle->ngates++;
}

void sqcRXGate(sqcQC* qcHandle, double theta, int qubitNumber)
{
    int n = qcHandle->ngates;
    qcHandle->gate[n].id      = RXGate;
    qcHandle->gate[n].niarg   = 1;
    qcHandle->gate[n].iarg[0] = qubitNumber;
    qcHandle->gate[n].nrarg   = 1;
    qcHandle->gate[n].rarg[0] = theta;
    qcHandle->ngates++;
}

void sqcRYGate(sqcQC* qcHandle, double theta, int qubitNumber)
{
    int n = qcHandle->ngates;
    qcHandle->gate[n].id      = RYGate;
    qcHandle->gate[n].niarg   = 1;
    qcHandle->gate[n].iarg[0] = qubitNumber;
    qcHandle->gate[n].nrarg   = 1;
    qcHandle->gate[n].rarg[0] = theta;
    qcHandle->ngates++;
}

void sqcRZGate(sqcQC* qcHandle, double phi, int qubitNumber)
{
    int n = qcHandle->ngates;
    qcHandle->gate[n].id      = RZGate;
    qcHandle->gate[n].niarg   = 1;
    qcHandle->gate[n].iarg[0] = qubitNumber;
    qcHandle->gate[n].nrarg   = 1;
    qcHandle->gate[n].rarg[0] = phi;
    qcHandle->ngates++;
}

void sqcSGate(sqcQC* qcHandle, int qubitNumber)
{
    int n =  qcHandle->ngates;
    qcHandle->gate[n].id      = SGate;
    qcHandle->gate[n].niarg   = 1;
    qcHandle->gate[n].iarg[0] = qubitNumber;
    qcHandle->gate[n].nrarg   = 0;
    qcHandle->ngates++;
}

void sqcSdgGate(sqcQC* qcHandle, int qubitNumber)
{
    int n =  qcHandle->ngates;
    qcHandle->gate[n].id      = SdgGate;
    qcHandle->gate[n].niarg   = 1;
    qcHandle->gate[n].iarg[0] = qubitNumber;
    qcHandle->gate[n].nrarg   = 0;
    qcHandle->ngates++;
}

void sqcXGate(sqcQC* qcHandle, int qubitNumber)
{
    int n =  qcHandle->ngates;
    qcHandle->gate[n].id      = XGate;
    qcHandle->gate[n].niarg   = 1;
    qcHandle->gate[n].iarg[0] = qubitNumber;
    qcHandle->gate[n].nrarg   = 0;
    qcHandle->ngates++;
}

void sqcU1Gate(sqcQC* qcHandle, double lam, int qubitNumber)
{
    int n =  qcHandle->ngates;
    qcHandle->gate[n].id      = U1Gate;
    qcHandle->gate[n].niarg   = 1;
    qcHandle->gate[n].iarg[0] = qubitNumber;
    qcHandle->gate[n].nrarg   = 1;
    qcHandle->gate[n].rarg[0] = lam;
    qcHandle->ngates++;
}

void sqcECRGate(sqcQC* qcHandle, int qubitNumber1, int qubitNumber2)
{
    int n = qcHandle->ngates;
    qcHandle->gate[n].id      = ECRGate;
    qcHandle->gate[n].niarg   = 2;
    qcHandle->gate[n].iarg[0] = qubitNumber1;
    qcHandle->gate[n].iarg[1] = qubitNumber2;
    qcHandle->gate[n].nrarg   = 0;
    qcHandle->ngates++;
}

void sqcSXGate(sqcQC* qcHandle, int qubitNumber)
{
    int n =  qcHandle->ngates;
    qcHandle->gate[n].id      = SXGate;
    qcHandle->gate[n].niarg   = 1;
    qcHandle->gate[n].iarg[0] = qubitNumber;
    qcHandle->gate[n].nrarg   = 0;
    qcHandle->ngates++;
}

void sqcIDGate(sqcQC* qcHandle, int qubitNumber)
{
    int n =  qcHandle->ngates;
    qcHandle->gate[n].id      = IDGate;
    qcHandle->gate[n].niarg   = 1;
    qcHandle->gate[n].iarg[0] = qubitNumber;
    qcHandle->gate[n].nrarg   = 0;
    qcHandle->ngates++;
}

void sqcDelay(sqcQC* qcHandle, double duration, sqcUnitKind unit, int qubitNumber)
{
    int n =  qcHandle->ngates;
    qcHandle->gate[n].id      = Delay;
    qcHandle->gate[n].niarg   = 2;
    qcHandle->gate[n].iarg[0] = (int)unit;
    qcHandle->gate[n].iarg[1] = qubitNumber;
    qcHandle->gate[n].nrarg   = 1;
    qcHandle->gate[n].rarg[0] = duration;
    qcHandle->ngates++;
}

void sqcDelayAll(sqcQC* qcHandle, double duration, sqcUnitKind unit)
{
    int n =  qcHandle->ngates;
    qcHandle->gate[n].id      = DelayAll;
    qcHandle->gate[n].niarg   = 1;
    qcHandle->gate[n].iarg[0] = (int)unit;
    qcHandle->gate[n].nrarg   = 1;
    qcHandle->gate[n].rarg[0] = duration;
    qcHandle->ngates++;
}

void sqcReset(sqcQC* qcHandle, int qubitNumber)
{
    int n =  qcHandle->ngates;
    qcHandle->gate[n].id      = Reset;
    qcHandle->gate[n].niarg   = 1;
    qcHandle->gate[n].iarg[0] = qubitNumber;
    qcHandle->gate[n].nrarg   = 0;
    qcHandle->ngates++;
}

void sqcResetAll(sqcQC* qcHandle)
{
    int n =  qcHandle->ngates;
    qcHandle->gate[n].id      = ResetAll;
    qcHandle->gate[n].niarg   = 0;
    qcHandle->gate[n].nrarg   = 0;
    qcHandle->ngates++;
}

void sqcBarrier(sqcQC* qcHandle, int qubitNumber)
{
    int n =  qcHandle->ngates;
    qcHandle->gate[n].id      = Barrier;
    qcHandle->gate[n].niarg   = 1;
    qcHandle->gate[n].iarg[0] = qubitNumber;
    qcHandle->gate[n].nrarg   = 0;
    qcHandle->ngates++;
}

void sqcBarrierAll(sqcQC* qcHandle)
{
    int n =  qcHandle->ngates;
    qcHandle->gate[n].id      = BarrierAll;
    qcHandle->gate[n].niarg   = 0;
    qcHandle->gate[n].nrarg   = 0;
    qcHandle->ngates++;
}

/// \todo Measure option will be implemented after investigating the actual provider
void sqcMeasure(sqcQC* qcHandle, int qubitNumber, int clbitNumber, sqcMeasureOptions options)
{
    if(options != NULL){
        printf("error: %s: sqcMeasureOptions is not supported.\n", __func__);
        exit(1);
    }
    int n =qcHandle->ngates;
    qcHandle->gate[n].id      = Measure;
    qcHandle->gate[n].niarg   = 2;
    qcHandle->gate[n].iarg[0] = qubitNumber;
    qcHandle->gate[n].iarg[1] = clbitNumber;
    qcHandle->gate[n].nrarg   = 0;
    qcHandle->ngates++;
}

int sqcStoreQCtoMemory(sqcQC* qcHandle, void* address, size_t size)
{
    if(qcHandle->pyTranspiledQuantumCircuit == NULL && qcHandle->ngates == 0){
#ifdef DEBUG_ERROR_STOP   
        printf("error: %s: This function is not available because there is no QuantumCircuit.\n", __func__);
        exit(1);
#endif
    }

    if(address == NULL){
        printf("error: %s: Specified address is NULL.\n", __func__);
        return E_NULL_POINTER;
    }

    size_t buflen;
    if(qcHandle->pyTranspiledQuantumCircuit != NULL){

        PyObject* pyTranspiledStr = PyObject_CallOneArg(mng->pyDumps, qcHandle->pyTranspiledQuantumCircuit);
        if(PyErr_Occurred()){
            PyErr_Print();
        }
        
        const char* qasmStrTranspiled = PyUnicode_AsUTF8(pyTranspiledStr);
        if(PyErr_Occurred()){
            PyErr_Print();
        }
        // Do not release pyTranspiledStr here, but release it when qasmStrTranspiled is finished being used
        // PyObject(pyTranspiledStr), the generator, is not released until the end of string usage,
        // in order to release its memory area on the PyObject side.

        buflen = strlen(qasmStrTranspiled)+1;
        if (size < buflen) {
            // Error return if buffer length passed by user is too short
            memcpy(address, qasmStrTranspiled, size);
            *((char*)address+size-1) = '\0';
            Py_XDECREF(pyTranspiledStr);
            printf("error: %s: Shortage size to write OpenQASM string.\n", __func__);
            return E_SHORTAGE_SIZE;
        }
        memcpy(address, qasmStrTranspiled, buflen);
        Py_XDECREF(pyTranspiledStr);
    } else {
        char* tmpbuf = gateInfo2qasm(qcHandle);
        buflen = strlen(tmpbuf)+1;
        if (size < buflen) {
            // Error return if buffer length passed by user is too short
            memcpy(address, tmpbuf, size);
            *((char*)address+size-1) = '\0';
            free(tmpbuf);
            printf("error: %s: Shortage size to write OpenQASM string.\n", __func__);
            return E_SHORTAGE_SIZE;
        }
        memcpy(address, tmpbuf, buflen);
        free(tmpbuf);
        
    }
    return (int)buflen;

}

int sqcStoreQC(sqcQC* qcHandle, FILE* file)
{
    if(qcHandle->pyTranspiledQuantumCircuit == NULL && qcHandle->ngates == 0){    
#ifdef DEBUG_ERROR_STOP 
        printf("error: %s: This function is not available because there is no QuantumCircuit.\n", __func__);
        exit(1);
#endif
    }
    
    if (file == NULL) {
        // Error return if file handler passed by user is NULL.
        printf("error: %s: Specified file handle is NULL.\n", __func__);
        return E_NULL_POINTER;
    }

    if(qcHandle->pyTranspiledQuantumCircuit != NULL){

        PyObject* pyTranspiledStr = PyObject_CallOneArg(mng->pyDumps, qcHandle->pyTranspiledQuantumCircuit);
        if(PyErr_Occurred()){
            PyErr_Print();
        }
        
        const char* qasmStrTranspiled = PyUnicode_AsUTF8(pyTranspiledStr);
        if(PyErr_Occurred()){
            PyErr_Print();
        }
        // Do not release pyTranspiledStr here, but release it when qasmStrTranspiled is finished being used
        // PyObject(pyTranspiledStr), the generator, is not released until the end of string usage,
        // in order to release its memory area on the PyObject side.
        fputs(qasmStrTranspiled, file);
        Py_XDECREF(pyTranspiledStr);

    } else {

        char* tmpbuf = gateInfo2qasm(qcHandle);
        fputs(tmpbuf, file);
        free(tmpbuf);

    }
    return E_SUCCESS;
}

void sqcTranspile(sqcQC* qcHandle, sqcTranspileKind kind, sqcTranspileOptions options)
{
    // If there is already a PyObject, release it
    Py_XDECREF(qcHandle->pyTranspiledQuantumCircuit);
    qcHandle->pyTranspiledQuantumCircuit = NULL;

    // Checking for available providers.
    switch(kind){
        case BasicSimulator:
            printf("error: %s: Specified provider is unsupported.\n", __func__);
            exit(1);
            break;
        case FakeOpenPulse2Q:
        case FakeOpenPulse3Q:
        case Fake1Q:
        case Fake5QV1:
        case Fake20QV1:
        case Fake7QPulseV1:
        case Fake27QPulseV1:
        case Fake127QPulseV1:
            printf("[ DEBUG ] The provider to use for transpilation : %s From %s  (optLevel=%d)\n",
                providerInfo[kind][1],
                providerInfo[kind][0],
                ((sqcFakeProviderOption*)options)->optLevel);
            break;
        default:
            printf("error: %s: !!! unknown provider specified....\n", __func__);
            exit(1);
            break;
    }

    char* qasmStr = gateInfo2qasm(qcHandle);

    PyObject* pyImportName;
    pyImportName = PyUnicode_DecodeFSDefault(providerInfo[kind][0]);
    if(PyErr_Occurred()){
        PyErr_Print();
    }
    PyObject* pyProviderFrom = PyImport_Import(pyImportName);
    if(PyErr_Occurred()){
        PyErr_Print();
    }
    PyObject* pyProviderClass = PyObject_GetAttrString(pyProviderFrom, providerInfo[kind][1]);
    if(PyErr_Occurred()){
        PyErr_Print();
    }
    PyObject* pyProvider = PyObject_CallNoArgs(pyProviderClass);
    if(PyErr_Occurred()){
        PyErr_Print();
    }
    Py_XDECREF(pyImportName);
    Py_XDECREF(pyProviderFrom);
    Py_XDECREF(pyProviderClass);

    PyObject* pyTargetQASM = PyUnicode_DecodeFSDefault(qasmStr);
    if(PyErr_Occurred()){
        PyErr_Print();
    }
    PyObject* pyCircuit = PyObject_CallOneArg(mng->pyLoads, pyTargetQASM);
    if(PyErr_Occurred()){
        PyErr_Print();
    }
    free(qasmStr);
    Py_XDECREF(pyTargetQASM);

    // execute Transpile
    //   Use tuples and dicts as arguments to call qiskit.compiler.transpile
    PyObject* pyArgs = PyTuple_New(1);
    PyTuple_SetItem(pyArgs, 0, pyCircuit);

    PyObject* pyDictArg = PyDict_New();
    PyDict_SetItemString( pyDictArg, "backend", pyProvider);

    // Currently, only FakeProvider is supported, so only its options are specified.
    sqcFakeProviderOption* FakeOption = (sqcFakeProviderOption*)options;
    PyObject* pyOptLevel= PyLong_FromLong(FakeOption->optLevel);
    PyDict_SetItemString( pyDictArg, "optimization_level", pyOptLevel);

    qcHandle->pyTranspiledQuantumCircuit = PyObject_Call(mng->pyTranspiler, pyArgs, pyDictArg);
    if(PyErr_Occurred()){
        PyErr_Print();
    }
    Py_XDECREF(pyArgs);
    Py_XDECREF(pyCircuit);
    Py_XDECREF(pyDictArg);
    Py_XDECREF(pyProvider);
    Py_XDECREF(pyOptLevel);
}

int sqcFinalize(void)
{
    Py_XDECREF(mng->pyLoads);
    Py_XDECREF(mng->pyDumps);
    Py_XDECREF(mng->pyTranspiler);
    Py_Finalize();
    free(mng);
    mng = NULL;
    return E_SUCCESS;
}

/// \brief Internal function to generate OpenQASM string from quantum circuit IR
/// \details  Internal function used to generate OpenQASM strings from quantum circuit IR.
///           Not exposed as I/F of C-API.
///           Traverses the gate[n] of the quantum circuit IR in sequence and 
///           concatenates the strings corresponding to each operation.
///
/// \param [in] qcHandle quantum circuit IR
///
/// \return Pointer to OpenQASM string
///         The output of this function, an OpenQASM string, is managed in dynamic memory and must be freed by the caller,
///         It must be freed by the caller.
///
/// \note The structure is almost exactly as provided by RCCS. The following comments were made at the time of provision.
/// ```
///  * Translate our ir to qasm.
///  * This is a quick and dirty implementation for the reference.
///  *
///  * reference:
///  * https://github.com/Qiskit/qiskit/blob/main/qiskit/qasm/libs/stdgates.inc
/// ```
char* gateInfo2qasm(sqcQC* qcHandle)
{
    char       t[512], u[512];
    gateInfo *g;
    unsigned int useECRGate = 0;

    // Obtain an area for the QASM string to be generated
    // The size to be acquired is not strict, and the immediate value specified by malloc is for the following.
    // 100: Number of bytes for include, qubit, cbit, etc. to be output by default.
    // 500: Number of bytes for definition of ECR gate.
    // 64: Number of bytes for a single operation. Allocate 64 bytes for the number of quantum circuit IRs x 64 bytes.
    char* s = (char *)malloc((qcHandle->ngates)*64+100+500);

    sprintf(s, "OPENQASM 3.0;\ninclude \"stdgates.inc\";\nqubit[%d] q;\nbit[%d] c;\n",qcHandle->qubits,qcHandle->qubits);
    for(int i=0; i<qcHandle->ngates; i++){
        g = &(qcHandle->gate[i]);
        t[0] = 0;
        switch(g->id){
            case HGate:
                sprintf(t, "h q[%d];\n", g->iarg[0]);
                break;
            case CXGate:
                sprintf(t, "cx q[%d], q[%d];\n",g->iarg[0], g->iarg[1]);
                break;
            case CZGate:
                sprintf(t, "cz q[%d], q[%d];\n",g->iarg[0], g->iarg[1]);
                break;
            case RXGate:
                sprintf(t, "rx(%.*f) q[%d];\n", PRECISION, g->rarg[0], g->iarg[0]);
                break;
            case RYGate:
                sprintf(t, "ry(%.*f) q[%d];\n", PRECISION, g->rarg[0], g->iarg[0]);
                break;
            case RZGate:
                sprintf(t, "rz(%.*f) q[%d];\n", PRECISION, g->rarg[0], g->iarg[0]);
                break;
            case SGate:
                sprintf(t, "s q[%d];\n", g->iarg[0]);
                break;
            case SdgGate:
                sprintf(t, "sdg q[%d];\n", g->iarg[0]);
                break;
            case XGate:
                sprintf(t, "x q[%d];\n", g->iarg[0]);
                break;
            case U1Gate:
                sprintf(t, "u1(%.*f) q[%d];\n", PRECISION, g->rarg[0], g->iarg[0]);
                break;
            case ECRGate:
                if(useECRGate == 0){
                    sprintf(t, "gate rzx_1(_gate_p_0) _gate_q_0, _gate_q_1 {\n"
                            "h _gate_q_1;\n"
                            "cx _gate_q_0, _gate_q_1;\n"
                            "rz(pi/4) _gate_q_1;\n"
                            "cx _gate_q_0, _gate_q_1;\n"
                            "h _gate_q_1;\n"
                            "}\n"
                            "gate rzx_2(_gate_p_0) _gate_q_0, _gate_q_1 {\n"
                            "h _gate_q_1;\n"
                            "cx _gate_q_0, _gate_q_1;\n"
                            "rz(-pi/4) _gate_q_1;\n"
                            "cx _gate_q_0, _gate_q_1;\n"
                            "h _gate_q_1;\n"
                            "}\n"
                            "gate ecr _gate_q_0, _gate_q_1 {\n"
                            "rzx_1(pi/4) _gate_q_0, _gate_q_1;\n"
                            "x _gate_q_0;\n"
                            "rzx_2(-pi/4) _gate_q_0, _gate_q_1;\n"
                            "}\n");
                    useECRGate++;
                    strcat(s, t);     
                }
                sprintf(t, "ecr q[%d], q[%d];\n", g->iarg[0], g->iarg[1]);
                break;
            case SXGate:
                sprintf(t, "sx q[%d];\n", g->iarg[0]);
                break;
            case IDGate:
                sprintf(t, "id q[%d];\n", g->iarg[0]);
                break;  
            case Delay:
            case DelayAll:
                {
                    char qubitNumberString[20];
                    if(g->id == Delay){
                        sprintf(qubitNumberString, "[%d];", g->iarg[1]);
                    } else {
                        sprintf(qubitNumberString, ";");
                    }
                    switch((sqcUnitKind)g->iarg[0]){
                        case UnitS:
                            sprintf(t, "delay[%fs] q%s\n", g->rarg[0], qubitNumberString);
                            break;
                        case UnitMS:
                            sprintf(t, "delay[%fms] q%s\n", g->rarg[0], qubitNumberString);
                            break;
                        case UnitUS:
                            sprintf(t, "delay[%fus] q%s\n", g->rarg[0], qubitNumberString);
                            break;
                        case UnitNS:
                            sprintf(t, "delay[%fns] q%s\n", g->rarg[0], qubitNumberString);
                            break;
                        case UnitDT:
                            sprintf(t, "delay[%fdt] q%s\n", g->rarg[0], qubitNumberString);
                            break;
                    }
                }
                break; 
            case Reset:
                sprintf(t, "reset q[%d];\n", g->iarg[0]);
                break;
            case ResetAll:
                sprintf(t, "reset q;\n");
                break;
            case Barrier:
                sprintf(t, "barrier q[%d];\n", g->iarg[0]);
                break;
            case BarrierAll:
                sprintf(t, "barrier q;\n");
                break; 
            case Measure:
                for(int i=0; i<g->iarg[0]; i++){
                  memset(u, 0, 512);      
                  sprintf(u, "c[%d] = measure q[%d];\n",i, i);
                  strcat(t, u);
                }
                break;
            default:
                assert(0 && "unknown gate ID");
                abort();
                break;
        }
        strcat(s, t);
    }
    return s;
}
