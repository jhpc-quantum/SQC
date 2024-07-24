#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <Python.h>

typedef enum {
  BasicSimulator,
  FakeOpenPulse2Q,
  FakeOlenPulse3Q,
  Fake1Q,
  Fake5QV1,
  Fake20QV1,
  Fake7QPulseV1,
  Fake27QPulseV1,
  Fake127QpulseV1,
  //GenericBackendV2, /* オブジェクトの生成に引数が必要。一旦無視する */
  _NProviders,
} PROVIDERS;

// Define the class name and import source corresponding to the enum provider.
char* provider_info[_NProviders][2] = {
  { "qiskit.providers.basic_provider", "BasicSimulator" },
  { "qiskit.providers.fake_provider", "FakeOpenPulse2Q" },
  { "qiskit.providers.fake_provider", "FakeOpenPulse3Q" },
  { "qiskit.providers.fake_provider", "Fake1Q" },
  { "qiskit.providers.fake_provider", "Fake5QV1" },
  { "qiskit.providers.fake_provider", "Fake20QV1" },
  { "qiskit.providers.fake_provider", "Fake7QPulseV1" },
  { "qiskit.providers.fake_provider", "Fake27QPulseV1" },
  { "qiskit.providers.fake_provider", "Fake127QPulseV1" }
  //{ "qiskit.providers.fake_provider", "GenericBackendV2" }
};


#define MAX_N_GATES 128 
#define MAX_I_ARGS  8
#define MAX_R_ARGS  8

typedef struct{
  int   id;
  int    niarg;
  int    nrarg;
  int   iarg[MAX_I_ARGS];
  double rarg[MAX_R_ARGS];
} gate_info;

typedef struct{
  // --- common parameters --- 
  int           no;
  int           qubits;
  int            ngates; 
  gate_info      gate[MAX_N_GATES]; 
} sqc_info_t;

typedef sqc_info_t* sqc_ir;

int sqc_Initialize(void);
sqc_ir sqc_Circuit(int qubits);
int sqc_HGate(sqc_ir qcir, int qubit_number);
int sqc_CXGate(sqc_ir qcir, int qubit_number1, int qubit_number2);
int sqc_CZGate(sqc_ir qcir, int qubit_number1, int qubit_number2);
int sqc_RZGate(sqc_ir qcir, double phi, int qubit_number);
int sqc_SGate(sqc_ir qcir, int qubit_number);
int sqc_SdgGate(sqc_ir qcir, int qubit_number);
int sqc_Measure(sqc_ir qcir, int qubit_number, int clbit_number);
int sqc_Dump(sqc_ir qcir, char* buf, unsigned int size);
int sqc_Transpile(sqc_ir qcir, char* buf, unsigned int size,
		  PROVIDERS provider, int opt_level);
int sqc_Finalize(void);

////////////////////////////////  



enum enum_gates{
  _HGate,
  _CXGate, 
  _CZGate,
  _RZGate,
  _SGate,
  _SdgGate,
  _Measure,
  _NGates // # of gates 
};



#define CIRCUIT_NUM 10
typedef struct{
  sqc_ir c[CIRCUIT_NUM];
  int nsqc_irs;
  PyObject* pyLoads;
  PyObject* pyDumps;
  PyObject* pyTranspiler;
} mng_area;

mng_area* mng;

void sqc_ir_to_qasm(sqc_ir info, char *s);

int sqc_Initialize(void)
{
  mng = (mng_area*)malloc(sizeof(mng_area));
  mng->nsqc_irs = 0;
  for(int i=0; i<CIRCUIT_NUM; i++){
    mng->c[i] = NULL;
  }

  Py_Initialize(); // only be initialized once per interpreter process

  PyObject* pyImportName;

  pyImportName = PyUnicode_DecodeFSDefault("qiskit.qasm3");
  PyObject *pyQiskit_qasm3 = PyImport_Import(pyImportName);
  PyErr_Print();
  Py_XDECREF(pyImportName);

  pyImportName = PyUnicode_DecodeFSDefault("qiskit.compiler");
  PyObject *pyQiskit_compiler = PyImport_Import(pyImportName);
  PyErr_Print();

  mng->pyLoads = PyObject_GetAttrString(pyQiskit_qasm3, "loads");
  PyErr_Print();

  mng->pyDumps = PyObject_GetAttrString(pyQiskit_qasm3, "dumps");
  PyErr_Print();

  mng->pyTranspiler = PyObject_GetAttrString(pyQiskit_compiler, "transpile");
  PyErr_Print();

  Py_XDECREF(pyQiskit_compiler);
  Py_XDECREF(pyQiskit_qasm3);
  Py_XDECREF(pyImportName);

  return 0;
}

sqc_ir sqc_Circuit(int qubits)
{
  int n = mng->nsqc_irs;
  if( n!=0 ) {
    printf("Multiple IR generation is not supported.\n");
    return NULL;
  }
  
  mng->c[n] = (sqc_ir)malloc(sizeof(sqc_info_t));
  mng->c[n]->no = n;
  mng->c[n]->qubits  = qubits;
  mng->c[n]->ngates  = 0;

  mng->nsqc_irs++;
  
  return mng->c[n];
}

int sqc_HGate(sqc_ir qcir, int qubit_number)
{
  int n =  qcir->ngates; 
  qcir->gate[n].id      = _HGate;
  qcir->gate[n].niarg   = 1; 
  qcir->gate[n].iarg[0] = qubit_number;
  qcir->gate[n].nrarg   = 0; 
  qcir->ngates++;
  return 0;
}

int sqc_CXGate(sqc_ir qcir, int qubit_number1, int qubit_number2)
{
  int n = qcir->ngates; 
  qcir->gate[n].id      = _CXGate;
  qcir->gate[n].niarg   = 2; 
  qcir->gate[n].iarg[0] = qubit_number1;
  qcir->gate[n].iarg[1] = qubit_number2;
  qcir->gate[n].nrarg   = 0; 
  qcir->ngates++;
}

int sqc_CZGate(sqc_ir qcir, int qubit_number1, int qubit_number2)
{
  int n = qcir->ngates;
  qcir->gate[n].id      = _CZGate;
  qcir->gate[n].niarg   = 2; 
  qcir->gate[n].iarg[0] = qubit_number1;
  qcir->gate[n].iarg[1] = qubit_number2;
  qcir->gate[n].nrarg   = 0; 
  qcir->ngates++;
}

int sqc_RZGate(sqc_ir qcir, double phi, int qubit_number)
{
  int n = qcir->ngates;
  qcir->gate[n].id      = _RZGate;
  qcir->gate[n].niarg   = 1; 
  qcir->gate[n].iarg[0] = qubit_number;
  qcir->gate[n].nrarg   = 1; 
  qcir->gate[n].rarg[0] = phi;
  qcir->ngates++;
}

int sqc_SGate(sqc_ir qcir, int qubit_number)
{
  int n =  qcir->ngates; 
  qcir->gate[n].id      = _SGate;
  qcir->gate[n].niarg   = 1; 
  qcir->gate[n].iarg[0] = qubit_number;
  qcir->gate[n].nrarg   = 0; 
  qcir->ngates++;
  return 0;
}

int sqc_SdgGate(sqc_ir qcir, int qubit_number)
{
  int n =  qcir->ngates; 
  qcir->gate[n].id      = _SdgGate;
  qcir->gate[n].niarg   = 1; 
  qcir->gate[n].iarg[0] = qubit_number;
  qcir->gate[n].nrarg   = 0; 
  qcir->ngates++;
  return 0;
}


int sqc_Measure(sqc_ir qcir, int qubit_number, int clbit_number)
{
  int n =qcir->ngates; 
  qcir->gate[n].id      = _Measure;
  qcir->gate[n].niarg   = 2; 
  qcir->gate[n].iarg[0] = qubit_number;
  qcir->gate[n].iarg[1] = clbit_number;
  qcir->gate[n].nrarg   = 0; 
  qcir->ngates++;
}

int sqc_Dump(sqc_ir qcir, char* buf, unsigned int size)
{
  char* tmpbuf = (char *)malloc((qcir->ngates)*64+50);
  sqc_ir_to_qasm(qcir, tmpbuf);
  size_t tmpbuflen = strlen(tmpbuf)+1;
  if (size < tmpbuflen) {
    free(tmpbuf);
    return -1;
  }
  memcpy(buf, tmpbuf, tmpbuflen);
  *(buf+tmpbuflen)='\0';
  free(tmpbuf);
  return (int)tmpbuflen;
}

int sqc_Transpile(sqc_ir qcir, char* buf, unsigned int size,
		  PROVIDERS provider, int opt_level)
{
  if( provider >= _NProviders ) {
    printf("!!! unknown provider specified....\n"); exit(1);
  }
  printf("[ DEBUG ] The provider to use for transpilation : %s From %s\n",
	 provider_info[provider][1],
	 provider_info[provider][0]);

  // QASM-string from sqc_ir
  char* qasm_str = (char *)malloc((qcir->ngates)*64+50);
  sqc_ir_to_qasm(qcir, qasm_str);

  // generate provider
  PyObject* pyImportName;
  pyImportName = PyUnicode_DecodeFSDefault(provider_info[provider][0]);
  PyErr_Print();
  PyObject* pyProviderFrom = PyImport_Import(pyImportName);
  PyErr_Print();
  PyObject* pyProviderClass = PyObject_GetAttrString(pyProviderFrom, provider_info[provider][1]);
  PyErr_Print();
  PyObject* pyProvider = PyObject_CallNoArgs(pyProviderClass);
  PyErr_Print();
  Py_XDECREF(pyProviderClass);
  Py_XDECREF(pyProviderFrom);
  Py_XDECREF(pyImportName);

  // generate Circuit from QASM-string
  PyObject* pyTargetQASM = PyUnicode_DecodeFSDefault(qasm_str);
  PyErr_Print();
  PyObject* pyCircuit = PyObject_CallOneArg(mng->pyLoads, pyTargetQASM);
  PyErr_Print();
  free(qasm_str);

  // execute Transpile
  //   TODO: Reflection of optimize_level
  PyObject* pyArgs = PyTuple_New(2);
  PyTuple_SetItem(pyArgs, 0, pyCircuit);
  PyTuple_SetItem(pyArgs, 1, pyProvider);
  PyObject* pyTranspiledCircuit = PyObject_CallObject(mng->pyTranspiler, pyArgs);
  PyErr_Print();
  
  // generate transpiled-QASM-string from Transpiled Circuit
  PyObject* pyTranspiledStr = PyObject_CallOneArg(mng->pyDumps, pyTranspiledCircuit);  
  PyErr_Print();
  
  // Python-string to C-string
  const char *qasm_str_transpiled;
  if (pyTranspiledStr != NULL) {
    qasm_str_transpiled = PyUnicode_AsUTF8(pyTranspiledStr);
  }
  else {
    return -1;
  }

  size_t len = strlen(qasm_str_transpiled);
  if (size < len) {
    return -1;
  }
  memcpy(buf, qasm_str_transpiled, len);
  *(buf+len)='\0';

  Py_XDECREF(pyTranspiledStr);
  Py_XDECREF(pyTranspiledCircuit);
  Py_XDECREF(pyArgs);
  Py_XDECREF(pyCircuit);
  Py_XDECREF(pyTargetQASM);
  Py_XDECREF(pyProvider);

  return (int)len;
}

int sqc_Finalize()
{
  Py_XDECREF(mng->pyLoads);
  Py_XDECREF(mng->pyDumps);
  Py_XDECREF(mng->pyTranspiler);
  Py_Finalize();
  for(int i=0; i<CIRCUIT_NUM; i++){
    if(mng->c[i] != NULL){
        free(mng->c[i]);
    }
  }
  free(mng);
  mng = NULL;
  return 0;
}

/* 
 * Translate our ir to qasm. 
 * This is a quick and dirty implementation for the reference. 
 *
 * reference:
 * https://github.com/Qiskit/qiskit/blob/main/qiskit/qasm/libs/stdgates.inc
 */
void sqc_ir_to_qasm(sqc_ir info, char *s)
{
  char       t[256];
  gate_info *g;

  sprintf(s, "OPENQASM 3.0;\ninclude \"stdgates.inc\";\nqubit[%d] q;\nbit[%d] c;\n",info->qubits,info->qubits);
  for(int i=0; i<info->ngates; i++){
    g = &(info->gate[i]);
    memset(t, 0, sizeof(char)*256);
    switch(g->id){
      case _HGate:
        sprintf(t, "h q[%d];\n", g->iarg[0]);
        break;
      case _CXGate:
        sprintf(t, "cx q[%d], q[%d];\n",g->iarg[0], g->iarg[1]);
        break; 
      case _CZGate:
        sprintf(t, "cz q[%d], q[%d];\n",g->iarg[0], g->iarg[1]);
        break;
      case _RZGate:
        sprintf(t, "rz(%.30f) q[%d];\n",g->rarg[0], g->iarg[0]);
        break;
      case _SGate:
        sprintf(t, "s q[%d];\n", g->iarg[0]);
        break;
      case _SdgGate:
        sprintf(t, "sdg q[%d];\n", g->iarg[0]);
        break;        
      case _Measure:
        sprintf(t, "c[%d] = measure q[%d];\n",g->iarg[1], g->iarg[0]);
        break;
      default:
        printf("The gate ID %d is not implemented\n",info->gate[i].id); exit(1);
        break;
    }
    strcat(s, t);
  }
}
