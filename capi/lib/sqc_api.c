/// \file
/// qasm3を生成するAPI
/// 
/// \TODO ゲート系の関数について以下2行を記載
/// \TODO 存在しないビット番号が指定されたかのチェックは実施していない。
/// \TODO 操作を追加できない状態（MAX_N_GATES数を超える操作追加）かのチェックは実施していない。

#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../include/sqc_api.h"

static char* gate_info_to_qasm(sqcQC* qc_handle);

/// \brief enum sqcTranspileKindに対応するimport元とクラス名の定義
static char* provider_info[NProviders][2] = {
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

/// \brief 量子回路IRでの操作を表すenum
enum enum_gates{
    HGate,
    CXGate,
    CZGate,
    RXGate,
    RYGate,
    RZGate,
    SGate,
    SdgGate,
    Measure,
    NGates /// Number of gates
};

/// \brief 量子回路のIRの最大数
#define CIRCUIT_NUM 48

/// \brief C-API処理で使用する情報管理領域
typedef struct{
    sqcQC* c[CIRCUIT_NUM];  ///< 量子回路IR
    int nsqcQCs;           ///< 使用している量子回路IR数
    PyObject* pyLoads;      ///< OpenQASM文字列をQiskitのcircuitオブジェクトに変換する関数の関数オブジェクト
    PyObject* pyDumps;      ///< QiskitのcircuitオブジェクトをOpenQASM文字列に変換する関数の関数オブジェクト
    PyObject* pyTranspiler; ///< Qiskitのトランスパイラを呼び出す関数の関数オブジェクト
} mng_area;

static mng_area* mng;

int sqcInitialize(void)
{
    mng = (mng_area*)malloc(sizeof(mng_area));
    mng->nsqcQCs = 0;
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

sqcQC* sqcQuantumCircuit(int qubits)
{
    int n = mng->nsqcQCs;

    mng->c[n] = (sqcQC*)malloc(sizeof(sqcQC));
    mng->c[n]->no = n;
    mng->c[n]->qubits  = qubits;
    mng->c[n]->ngates  = 0;

    mng->nsqcQCs++;

    return mng->c[n];
}

int sqcHGate(sqcQC* qc_handle, int qubit_number)
{
    int n =  qc_handle->ngates;
    qc_handle->gate[n].id      = HGate;
    qc_handle->gate[n].niarg   = 1;
    qc_handle->gate[n].iarg[0] = qubit_number;
    qc_handle->gate[n].nrarg   = 0;
    qc_handle->ngates++;
    return 0;
}

int sqcCXGate(sqcQC* qc_handle, int qubit_number1, int qubit_number2)
{
    int n = qc_handle->ngates;
    qc_handle->gate[n].id      = CXGate;
    qc_handle->gate[n].niarg   = 2;
    qc_handle->gate[n].iarg[0] = qubit_number1;
    qc_handle->gate[n].iarg[1] = qubit_number2;
    qc_handle->gate[n].nrarg   = 0;
    qc_handle->ngates++;
    return 0;
}

int sqcCZGate(sqcQC* qc_handle, int qubit_number1, int qubit_number2)
{
    int n = qc_handle->ngates;
    qc_handle->gate[n].id      = CZGate;
    qc_handle->gate[n].niarg   = 2;
    qc_handle->gate[n].iarg[0] = qubit_number1;
    qc_handle->gate[n].iarg[1] = qubit_number2;
    qc_handle->gate[n].nrarg   = 0;
    qc_handle->ngates++;
    return 0;
}

int sqcRXGate(sqcQC* qc_handle, double theta, int qubit_number)
{
    int n = qc_handle->ngates;
    qc_handle->gate[n].id      = RXGate;
    qc_handle->gate[n].niarg   = 1;
    qc_handle->gate[n].iarg[0] = qubit_number;
    qc_handle->gate[n].nrarg   = 1;
    qc_handle->gate[n].rarg[0] = theta;
    qc_handle->ngates++;
    return 0;
}

int sqcRYGate(sqcQC* qc_handle, double theta, int qubit_number)
{
    int n = qc_handle->ngates;
    qc_handle->gate[n].id      = RYGate;
    qc_handle->gate[n].niarg   = 1;
    qc_handle->gate[n].iarg[0] = qubit_number;
    qc_handle->gate[n].nrarg   = 1;
    qc_handle->gate[n].rarg[0] = theta;
    qc_handle->ngates++;
    return 0;
}

int sqcRZGate(sqcQC* qc_handle, double phi, int qubit_number)
{
    int n = qc_handle->ngates;
    qc_handle->gate[n].id      = RZGate;
    qc_handle->gate[n].niarg   = 1;
    qc_handle->gate[n].iarg[0] = qubit_number;
    qc_handle->gate[n].nrarg   = 1;
    qc_handle->gate[n].rarg[0] = phi;
    qc_handle->ngates++;
    return 0;
}

int sqcSGate(sqcQC* qc_handle, int qubit_number)
{
    int n =  qc_handle->ngates;
    qc_handle->gate[n].id      = SGate;
    qc_handle->gate[n].niarg   = 1;
    qc_handle->gate[n].iarg[0] = qubit_number;
    qc_handle->gate[n].nrarg   = 0;
    qc_handle->ngates++;
    return 0;
}

int sqcSdgGate(sqcQC* qc_handle, int qubit_number)
{
    int n =  qc_handle->ngates;
    qc_handle->gate[n].id      = SdgGate;
    qc_handle->gate[n].niarg   = 1;
    qc_handle->gate[n].iarg[0] = qubit_number;
    qc_handle->gate[n].nrarg   = 0;
    qc_handle->ngates++;
    return 0;
}

int sqcMeasure(sqcQC* qc_handle, int qubit_number, int clbit_number)
{
    int n =qc_handle->ngates;
    qc_handle->gate[n].id      = Measure;
    qc_handle->gate[n].niarg   = 2;
    qc_handle->gate[n].iarg[0] = qubit_number;
    qc_handle->gate[n].iarg[1] = clbit_number;
    qc_handle->gate[n].nrarg   = 0;
    qc_handle->ngates++;
    return 0;
}

int sqcStoreQCtoMemory(sqcQC* qc_handle, char* buf, unsigned int size)
{
    char* tmpbuf = gate_info_to_qasm(qc_handle);
    size_t tmpbuflen = strlen(tmpbuf)+1;
    if (size < tmpbuflen) {
        // ユーザから渡されたバッファ長が短い場合はエラー復帰
        free(tmpbuf);
        return -1;
    }
    memcpy(buf, tmpbuf, tmpbuflen);
    *(buf+tmpbuflen)='\0';
    free(tmpbuf);
    return (int)tmpbuflen;
}

int sqcTranspile(sqcQC* qc_handle, char* buf, unsigned int size,
                  sqcTranspileKind provider, sqcTranspileOptions options)
{
    if( provider >= NProviders ) {
        printf("!!! unknown provider specified....\n"); exit(1);
    }

    /// \TODO デバッグ情報の出力に関しては要検討（ここに限らず）
    printf("[ DEBUG ] The provider to use for transpilation : %s From %s  (opt_level=%d)\n",
           provider_info[provider][1],
           provider_info[provider][0],
           opt_level);

    // QASM-string from sqcQC*
    char* qasm_str = gate_info_to_qasm(qc_handle);

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
    //   Use tuples and dicts as arguments to call qiskit.compiler.transpile
    PyObject* pyArgs = PyTuple_New(1);
    PyTuple_SetItem(pyArgs, 0, pyCircuit);

    PyObject* pyDictArg = PyDict_New();
    PyDict_SetItemString( pyDictArg, "backend", pyProvider);
    PyObject* pyOptLevel= PyLong_FromLong(opt_level);
    PyDict_SetItemString( pyDictArg, "optimization_level", pyOptLevel);

    PyObject* pyTranspiledCircuit = PyObject_Call(mng->pyTranspiler, pyArgs, pyDictArg);
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
        // ユーザから渡されたバッファ長が短い場合はエラー復帰
        return -1;
    }
    memcpy(buf, qasm_str_transpiled, len);
    *(buf+len)='\0';

    Py_XDECREF(pyTranspiledStr);
    Py_XDECREF(pyTranspiledCircuit);
    Py_XDECREF(pyArgs);
    Py_XDECREF(pyDictArg);
    Py_XDECREF(pyOptLevel);
    Py_XDECREF(pyCircuit);
    Py_XDECREF(pyTargetQASM);
    Py_XDECREF(pyProvider);

    return (int)len;
}

int sqcFinalize(void)
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

/// \brief 量子回路IRからOpenQASM文字列を生成する内部関数
/// \details  量子回路IRからOpenQASM文字列を生成する際に使用する内部関数。
///           C-APIのI/Fとして公開されない。
///           量子回路IRのgate[n]を順に辿り、各操作に対応する文字列を連結する。
///           この関数の出力であるOpenQASM文字列は動的メモリで管理しており、
///           free関数で解放しなければならない。
///
/// \param [in] qc_handle 量子回路IR
///
/// \return OpenQASM文字列のポインタ
///
/// \note ほぼRCCSから提供されたままの仕組である。提供時以下のようにコメントされていた。
/// ```
///  * Translate our ir to qasm.
///  * This is a quick and dirty implementation for the reference.
///  *
///  * reference:
///  * https://github.com/Qiskit/qiskit/blob/main/qiskit/qasm/libs/stdgates.inc
/// ```
char* gate_info_to_qasm(sqcQC* qc_handle)
{
    char       t[256];
    gate_info *g;

    // 生成するQASM文字列用の領域を取得する
    // 取得するサイズは厳密でなく、mallocで指定する即値は以下のためのものである。
    //    50：定型で出力するinclude, qubit, cbitなどのためのbyte数
    //    64：１つのの操作に対するbyte数。量子回路IR数×64byteを確保
    char* s = (char *)malloc((qc_handle->ngates)*64+50);

    sprintf(s, "OPENQASM 3.0;\ninclude \"stdgates.inc\";\nqubit[%d] q;\nbit[%d] c;\n",qc_handle->qubits,qc_handle->qubits);
    for(int i=0; i<qc_handle->ngates; i++){
        g = &(qc_handle->gate[i]);
        memset(t, 0, sizeof(char)*256);
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
                sprintf(t, "rx(%.20f) q[%d];\n",g->rarg[0], g->iarg[0]);
                break;
            case RYGate:
                sprintf(t, "ry(%.20f) q[%d];\n",g->rarg[0], g->iarg[0]);
                break;
            case RZGate:
                sprintf(t, "rz(%.20f) q[%d];\n",g->rarg[0], g->iarg[0]);
                break;
            case SGate:
                sprintf(t, "s q[%d];\n", g->iarg[0]);
                break;
            case SdgGate:
                sprintf(t, "sdg q[%d];\n", g->iarg[0]);
                break;
            case Measure:
                sprintf(t, "c[%d] = measure q[%d];\n",g->iarg[1], g->iarg[0]);
                break;
            default:
                printf("The gate ID %d is not implemented\n",qc_handle->gate[i].id); exit(1);
                break;
        }
        strcat(s, t);
    }
    return s;
}
