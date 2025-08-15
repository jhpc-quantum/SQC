

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

//#undef USE_PYTHON
#define USE_PYTHON 1

#ifdef USE_PYTHON
#define PY_SSIZE_T_CLEAN
#include <Python.h>
#endif
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "../include/sqc_api.h"

static char* gateInfo2qasm2(sqcQC* qcHandle);
static char* gateInfo2qasm3(sqcQC* qcHandle);

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
    ZGate,
    // Non-gate operation definition
    Delay,
    DelayAll,
    Reset,
    ResetAll,
    Barrier,
    BarrierAll,
    Measure,
    MeasureAll,
    NGates /// Number of gates
};

/// \brief Precision of rotation angle in sqcRXGate, sqcRYGate, sqcRZGate, sqcU1Gate
#define PRECISION 20

#ifdef USE_PYTHON
/// \brief Information management area used in C-API processing
typedef struct{
    PyObject* pyLoads;      ///< Function object of a function that converts an OpenQASM string into a Qiskit circuit object.
    PyObject* pyDumps;      ///< Function object for a function that converts a Qiskit circuit object to an OpenQASM string.
    PyObject* pyTranspiler; ///< Function object of a function that calls the Qiskit transpiler
} mngArea;

static mngArea* mng;
#endif

int sqcInitialize(sqcInitOptions *opt)
{
  if(opt->use_qiskit){
#ifdef USE_PYTHON
    mng = (mngArea*)malloc(sizeof(mngArea));

    Py_Initialize(); // only be initialized once per interpreter process

    PyObject* pyImportName;

    pyImportName = PyUnicode_DecodeFSDefault("qiskit.qasm3");
    PyObject *pyQiskitQasm3 = PyImport_Import(pyImportName);
    if(PyErr_Occurred()){
        PyErr_Print();
    }
    Py_XDECREF(pyImportName);

    mng->pyLoads = PyObject_GetAttrString(pyQiskitQasm3, "loads");
    if(PyErr_Occurred()){
        PyErr_Print();
    }

    mng->pyDumps = PyObject_GetAttrString(pyQiskitQasm3, "dumps");
    if(PyErr_Occurred()){
        PyErr_Print();
    }
 
    /*
    mng->pyTranspiler = PyObject_GetAttrString(pyQiskitCompiler, "transpile");
    if(PyErr_Occurred()){
        PyErr_Print();
    }
    */

    Py_XDECREF(pyQiskitQasm3);
#else
    fprintf(stderr,"Qiskit/Python is currently invalided (%s,%d)\n",__FILE__,__LINE__);
#endif
  }

    return E_SUCCESS;
}

sqcQC* sqcQuantumCircuit(int qubits)
{
    sqcQC* qcHandle;
    qcHandle = (sqcQC*)malloc(sizeof(sqcQC));
    qcHandle->qubits  = qubits;
    qcHandle->ngates  = 0;
    qcHandle->pyTranspiledQuantumCircuit =NULL;
    qcHandle->qasm    = NULL;
    qcHandle->backend_config_json = NULL;
    qcHandle->backend_props_json  = NULL;

    return qcHandle;
}

void sqcReadQasmFile(char **ptr, const char *fname, int maxlen)
{
  int  len;
  FILE *fp;

  fp = fopen(fname, "r");
  if(!fp){
    printf("File %s not found\n",fname);
    exit(1);
  }
  len = fread(*ptr, sizeof(char), maxlen, fp);
  printf("read %d/%d\n",len,maxlen);
  if(!len){
    printf("Failed to read %s\n",fname);
    exit(1);
  }   

  fclose(fp);
  
}

// Free the memory of the circuit information
// Circuit information is a fixed area, so it is released at the same time as qcHandle is released
// Release the PyObject of the transpile result
// Release the qcHandle argument
void sqcDestroyQuantumCircuit(sqcQC* qcHandle)
{
#ifdef USE_PYTHON
    Py_XDECREF(qcHandle->pyTranspiledQuantumCircuit);
#endif
    qcHandle->pyTranspiledQuantumCircuit = NULL;
    if(qcHandle->qasm!=NULL){
      free(qcHandle->qasm);
      qcHandle->qasm = NULL;
    }
    if(qcHandle->backend_config_json!=NULL){
      free(qcHandle->backend_config_json);
      qcHandle->backend_config_json = NULL;
    }
    if(qcHandle->backend_props_json!=NULL){
      free(qcHandle->backend_props_json);
      qcHandle->backend_props_json = NULL;
    }
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

void sqcZGate(sqcQC* qcHandle, int qubitNumber)
{
    int n =  qcHandle->ngates;
    qcHandle->gate[n].id      = ZGate;
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

void sqcMeasureAll(sqcQC* qcHandle)
{
    int n =  qcHandle->ngates;
    qcHandle->gate[n].id      = MeasureAll;
    qcHandle->gate[n].niarg   = 0;
    qcHandle->gate[n].nrarg   = 0;
    qcHandle->ngates++;
}

int sqcStoreQCtoMemory(sqcQC* qcHandle, sqcBackend backend, void* address, size_t size)
{
    printf("Waring: sqcStoreQCtoMemory will be Removed! Please use sqcConvQASMtoMemory\n");
    return sqcConvQASMtoMemory(qcHandle, backend, address, size);
} /* sqcStoreQCtoMemory */

int sqcConvQASMtoMemory(sqcQC* qcHandle, sqcBackend backend, void* address, size_t size)
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
#ifdef USE_PYTHON
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
#else
        fprintf(stderr,"Error: qiskit transpiler is currently disabled (%s,%d)\n",__FILE__,__LINE__);
#endif
    } else {
       char *tmpbuf;
       if(backend == SQC_RPC_SCHED_QC_TYPE_QTM_GRPC ||
          backend == SQC_RPC_SCHED_QC_TYPE_QTM_SIM_GRPC){
          tmpbuf = gateInfo2qasm2(qcHandle);
        }else{
          tmpbuf = gateInfo2qasm3(qcHandle);
        }
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
    printf("Waring: sqcStoreQC will be Removed! Please use sqcConvQASM\n");
    return sqcConvQASM(qcHandle, file);
} /* sqcStoreQC */

int sqcConvQASM(sqcQC* qcHandle, FILE* file)
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
#ifdef USE_PYTYON
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
#else
        fprintf(stderr,"Error: Qiskit/Python is currently disabled (%s,%d)\n",__FILE__,__LINE__);
#endif
    } else {

        // TODO: if-then for qasm2 and qasm3
        char* tmpbuf = gateInfo2qasm3(qcHandle);
        fputs(tmpbuf, file);
        free(tmpbuf);

    }
    return E_SUCCESS;
}

void sqcTranspile(sqcQC* qcHandle, sqcBackend kind, sqcTranspileOptions options)
{
    char* qasmStr;
#ifdef USE_PYTHON
    // If there is already a PyObject, release it
    Py_XDECREF(qcHandle->pyTranspiledQuantumCircuit);
    qcHandle->pyTranspiledQuantumCircuit = NULL;

    // Checking for available providers.
    switch(kind){
      case SQC_RPC_SCHED_QC_TYPE_IBM_DACC:
        if(qcHandle->backend_config_json==NULL ||
           qcHandle->backend_props_json ==NULL) {
          sqcIbmdTranspileInfo(qcHandle, kind);
        }
        // DEBUG
        break;
      default:
        printf("error: %s: Specified backend %d is not supported \n", __func__, kind);
        exit(1);
        break;
    }

    if(qcHandle->qasm == NULL){
      // TODO: if-then for qasm2 and qasm3
      qasmStr = gateInfo2qasm3(qcHandle);
    }else{
      qasmStr = qcHandle->qasm;
    }
    char *python_file_name = "gen_sampler";

    PyObject *sys  = PyImport_ImportModule("sys");
    PyObject *path = PyObject_GetAttrString(sys, "path");
    PyList_Append(path, PyUnicode_FromString("<your path of gen_sampler.py>")); 
    PyRun_SimpleString("import os, sys\n");

    PyObject *python_module = PyImport_Import(PyUnicode_DecodeFSDefault(python_file_name));
    if(PyErr_Occurred()){ PyErr_Print(); }
    PyObject *python_func = PyObject_GetAttrString(python_module, "test");
    if(PyErr_Occurred()){ PyErr_Print(); }
    PyObject *args = PyTuple_New(3);
    PyTuple_SetItem(args, 0, PyUnicode_DecodeFSDefault(qcHandle->backend_config_json));
    PyTuple_SetItem(args, 1, PyUnicode_DecodeFSDefault(qcHandle->backend_props_json));
    PyTuple_SetItem(args, 2, PyUnicode_DecodeFSDefault(qcHandle->qasm));
    if(PyErr_Occurred()){ PyErr_Print(); }
    PyObject *python_res = PyObject_Call(python_func, args, NULL);
    if(PyErr_Occurred()){ PyErr_Print(); }

    PyObject* str = PyUnicode_AsEncodedString(python_res, "utf-8", "strict");
    if(PyErr_Occurred()){ PyErr_Print(); }
    char *result = PyBytes_AsString(str);
    if(PyErr_Occurred()){ PyErr_Print(); }
    free(qcHandle->qasm);
    int len = strlen(result);
    qcHandle->qasm = (char *)malloc(sizeof(char)*(len+1));
    strcpy(qcHandle->qasm, result);
    qcHandle->qasm[len] = 0;
#else
    fprintf(stderr,"Error: Qiskit/Python is currently disabled (%s,%d)\n",__FILE__,__LINE__);
#endif

}

int sqcFinalize(sqcInitOptions *opt)
{
  if(opt->use_qiskit){
#ifdef USE_PYTHON
    Py_XDECREF(mng->pyLoads);
    Py_XDECREF(mng->pyDumps);
    Py_XDECREF(mng->pyTranspiler);
    Py_Finalize();
    free(mng);
    mng = NULL;
#endif
  }
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
char* gateInfo2qasm3(sqcQC* qcHandle)
{
    char       t[65536];
    char       u[65536];
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
                sprintf(t, "c[%d] = measure q[%d];\n",g->iarg[0],g->iarg[0]);
                /*
                for(int i=0; i<g->iarg[0]; i++){
                  memset(u, 0, 512);
                  sprintf(u, "c[%d] = measure q[%d];\n",i, i);
                  strcat(t, u);
                }
                */
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

char* gateInfo2qasm2(sqcQC* qcHandle)
{
    char       t[65536];
    char       u[65536];
    gateInfo *g;
    unsigned int useECRGate = 0;

    // Obtain an area for the QASM string to be generated
    // The size to be acquired is not strict, and the immediate value specified by malloc is for the following.
    // 100: Number of bytes for include, qubit, cbit, etc. to be output by default.
    // 500: Number of bytes for definition of ECR gate.
    // 64: Number of bytes for a single operation. Allocate 64 bytes for the number of quantum circuit IRs x 64 bytes.
    char* s = (char *)malloc((qcHandle->ngates)*64+100+500);

    sprintf(s, "OPENQASM 2.0;\ninclude \"qelib1.inc\";\nqreg q[%d];\ncreg c[%d];\n",qcHandle->qubits,qcHandle->qubits);
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
            case ZGate:
                sprintf(t, "z q[%d];\n", g->iarg[0]);
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
                sprintf(t, "measure q[%d] -> c[%d];\n",g->iarg[0],g->iarg[0]);
                break;
            case MeasureAll:
                sprintf(t, "measure q ->c \n");
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


sqcInitOptions *sqcMallocInitOptions()
{
  sqcInitOptions* opt;
  opt = (sqcInitOptions *)malloc(sizeof(sqcInitOptions));
  if(opt == NULL){
    fprintf(stderr,"malloc error at (%s:%d:%s)\n",__FILE__,__LINE__,__func__);
  }
  opt->use_qiskit = 0;
  return opt;
}

void            sqcFreeInitOptions(sqcInitOptions *opt)
{
  if(opt != NULL){
    free(opt); opt = NULL;
  }
}

void            sqcInitializeRunOpt(sqcRunOptions *opt)
{
  if(opt == NULL){
    fprintf(stderr,"null ptr (%s:%d:%s)\n",__FILE__,__LINE__,__func__);
  }
  opt->optLevel = 0;
  opt->nshots   = 0;
  opt->qubits   = 0;
  opt->auth_method = RPC_AUTH_METHOD_JWT;
  opt->authorized  = 0;
  opt->outFormat   = SQC_OUT_RAW;
  opt->inFormat    = SQC_IN_QASM;
} /* sqcInitializeRunOpt */
 
void sqcPrintCidx(char *s, int n){
  for(int i=0; i<n; i++){
    printf("%d",s[i]);
  }
} /* sqcPrintCidx */

void sqcPrintAllBin(char *s, int nqubits, int n)
{
  int count = 0;
  for(int i=0; i<n; i++){
    unsigned char mask = 128;
    unsigned char bit  = (unsigned char)s[i];
    for(int j=7; j>=0; j--){
      if((mask&bit)==0){
        printf("0");
      }else{
        printf("1");      
      }
      count++;
      mask >>= 1;
      if(count==nqubits){
        printf("\n");
	count = 0;
      }
    }
  }
  printf("\n");
} /* sqcPrintAllBin */

void sqcPrintAllChar(char **s, int n, int nqubits)
{
  for(int i=0; i<n; i++){
    for(int j=0; j<nqubits; j++){
      printf("%d",s[i][j]);
    }
    printf("\n");
  }
} /* sqcPrintAllChar */


void sqcFreeOut(sqcOut *r, sqcOutputKind kind)
{
  if(kind == SQC_OUT_RAW){
    free(r->result);
  }else if(kind == SQC_OUT_HIST){
    free(r->count);
    free(r->index[0]);
    free(r->index);
  }else if(kind == SQC_OUT_ALL_BIN){
    free(r->result);
  }else if(kind == SQC_OUT_ALL_CHAR){
    free(r->result2[0]);
    free(r->result2);
  }else{
    fprintf(stderr,"Output format %d is not supported here %s\n",kind,__func__);
  }
} /* sqcFreeOut */

void sqcPrintQCResult(FILE *fp, sqcOut *r, sqcOutputKind kind)
{
  if(kind == SQC_OUT_RAW){
    fprintf(fp, "%s\n",r->result);
  }else if(kind == SQC_OUT_HIST){
    fprintf(fp, "# bitstring q[0]q[1]...q[n-1]: count\n");
    for(int i=0; i<r->n; i++){
      for(int j=0;  j<r->nqubits; j++){
        fprintf(fp, "%d",r->index[i][j]);
      }
      fprintf(fp, ":%d\n",r->count[i]);
    }
  }else if(kind == SQC_OUT_ALL_BIN){
    fwrite(r->result, sizeof(char), r->n, fp);
/*
    //fprintf(fp,"# bitstring q[0]q[1]...q[%d]\n",r->nqubits-1);
    unsigned char mask = 1;
    int k = 0;
    for(int i=0; i<r->n; i++){
      //fprintf(fp,"%3d ",i);
      for(int j=0; j<r->nqubits; j++){
        if((mask&r->result[k])==0){
          fprintf(fp,"0");
        }else{
          fprintf(fp,"1");
        }
        mask <<= 1;
        if(mask==0){
          mask = 1;
          k++;
        }
      }
      //fprintf(fp,"\n");
    }
*/
  }else if(kind == SQC_OUT_ALL_CHAR){
    fprintf(fp,"# of shots = %d\n",r->n);
    fprintf(fp,"# bitstring q[0]q[1]...q[%d]\n",r->nqubits-1);
    for(int i=0; i<r->n; i++){
      //fprintf(fp,"%3d ",i);
      for(int j=0; j<r->nqubits; j++){
        fprintf(fp,"%d",r->result2[i][j]);
      }
      fprintf(fp,"\n");
    }
  }else{
    fprintf(stderr,"Output format %d is not supported here %s\n",kind,__func__);
  }
} /* sqcPrintQCResult */
