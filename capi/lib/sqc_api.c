/// \file
/// qasm3を生成するAPI
/// 
/// \TODO エラー出力時にどのAPIで発生したか表示していない。
/// \TODO ゲート系の関数について以下2行を記載
/// \TODO 存在しないビット番号が指定されたかのチェックは実施していない。
/// \TODO 操作を追加できない状態（MAX_N_GATES数を超える操作追加）かのチェックは実施していない。

#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../include/sqc_api.h"

static char* gateInfo2qasm(sqcQC* qcHandle);

/// \brief enum sqcTranspileKindに対応するimport元とクラス名の定義
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

/// \brief 量子回路IRでの操作を表すenum
enum enumGates{
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

/// \brief C-API処理で使用する情報管理領域
typedef struct{
    PyObject* pyLoads;      ///< OpenQASM文字列をQiskitのcircuitオブジェクトに変換する関数の関数オブジェクト
    PyObject* pyDumps;      ///< QiskitのcircuitオブジェクトをOpenQASM文字列に変換する関数の関数オブジェクト
    PyObject* pyTranspiler; ///< Qiskitのトランスパイラを呼び出す関数の関数オブジェクト
} mngArea;

static mngArea* mng;

int sqcInitialize(void)
{
    mng = (mngArea*)malloc(sizeof(mngArea));

    Py_Initialize(); // only be initialized once per interpreter process

    PyObject* pyImportName;

    pyImportName = PyUnicode_DecodeFSDefault("qiskit.qasm3");
    PyObject *pyQiskitQasm3 = PyImport_Import(pyImportName);
    PyErr_Print();
    Py_XDECREF(pyImportName);

    pyImportName = PyUnicode_DecodeFSDefault("qiskit.compiler");
    PyObject *pyQiskitCompiler = PyImport_Import(pyImportName);
    PyErr_Print();

    mng->pyLoads = PyObject_GetAttrString(pyQiskitQasm3, "loads");
    PyErr_Print();

    mng->pyDumps = PyObject_GetAttrString(pyQiskitQasm3, "dumps");
    PyErr_Print();

    mng->pyTranspiler = PyObject_GetAttrString(pyQiskitCompiler, "transpile");
    PyErr_Print();

    Py_XDECREF(pyQiskitCompiler);
    Py_XDECREF(pyQiskitQasm3);
    Py_XDECREF(pyImportName);

    return 0;
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

// 回路情報のメモリ解放を行う
// 回路情報は固定領域なため、qcHandleの解放と同時に解放される
// トランスパイル結果のPyObjectの解放を行う
// 引数のqcHandleの解放
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

/// \TODO Measureのオプションは実機のプロバイダーを調査して実装する予定
void sqcMeasure(sqcQC* qcHandle, int qubitNumber, int clbitNumber, sqcMeasureOptions options)
{
    if(options != NULL){
        printf("sqcMeasureOptions is not supported.");
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

int sqcStoreQCtoMemory(sqcQC* qcHandle, void* address, int size, sqcStoreQCOptionKind kind)
{
    if(qcHandle->pyTranspiledQuantumCircuit == NULL && qcHandle->ngates == 0){
        switch(kind){
            default:
            case storeQCStop:
                printf("This function is not available because there is no QuantumCircuit.\n"); exit(1);
                break;
            case storeQCContinue:
                break; 
            case storeQCContinueAndMessage:
                printf("This function is not available because there is no QuantumCircuit.\n");
                break;
        }
    }
    
    if(size < 0){
        printf("Negative numbers are not supported.");
        return -1;
    }

    size_t buflen;
    if(qcHandle->pyTranspiledQuantumCircuit != NULL){

        // generate transpiled-QASM-string from Transpiled Circuit
        PyObject* pyTranspiledStr = PyObject_CallOneArg(mng->pyDumps, qcHandle->pyTranspiledQuantumCircuit);
        PyErr_Print();
        
        // Python-string to C-string
        if (pyTranspiledStr == NULL) {
            return -1;
        }
        const char* qasmStrTranspiled = PyUnicode_AsUTF8(pyTranspiledStr);
        PyErr_Print();
        Py_XDECREF(pyTranspiledStr);

        buflen = strlen(qasmStrTranspiled)+1;
        if ((size_t)size < buflen) {
            // ユーザから渡されたバッファ長が短い場合はエラー復帰
            return -1;
        }
        memcpy(address, qasmStrTranspiled, buflen);
    } else {
        char* tmpbuf = gateInfo2qasm(qcHandle);
        buflen = strlen(tmpbuf)+1;
        if ((size_t)size < buflen) {
            // ユーザから渡されたバッファ長が短い場合はエラー復帰
            free(tmpbuf);
            return -1;
        }
        memcpy(address, tmpbuf, buflen);
        free(tmpbuf);
        
    }
    return (int)buflen;

}

int sqcStoreQC(sqcQC* qcHandle, FILE* file, sqcStoreQCOptionKind kind)
{
    if(qcHandle->pyTranspiledQuantumCircuit == NULL && qcHandle->ngates == 0){
        switch(kind){
            default:
            case storeQCStop:
                printf("This function is not available because there is no QuantumCircuit.\n"); exit(1);
                break;
            case storeQCContinue:
                break; 
            case storeQCContinueAndMessage:
                printf("This function is not available because there is no QuantumCircuit.\n");
                break;
        }
    }
    
    if (file == NULL) {
        // ユーザから渡されたファイルハンドラがNULLの場合はエラー復帰
        return -1;
    }

    int result;

    if(qcHandle->pyTranspiledQuantumCircuit != NULL){

        // generate transpiled-QASM-string from Transpiled Circuit
        PyObject* pyTranspiledStr = PyObject_CallOneArg(mng->pyDumps, qcHandle->pyTranspiledQuantumCircuit);
        PyErr_Print();
        
        // Python-string to C-string
        if (pyTranspiledStr == NULL) {
            return -1;
        }
        const char* qasmStrTranspiled = PyUnicode_AsUTF8(pyTranspiledStr);
        PyErr_Print();
        Py_XDECREF(pyTranspiledStr);
        result = fputs(qasmStrTranspiled, file);

    } else {

        char* tmpbuf = gateInfo2qasm(qcHandle);
        result = fputs(tmpbuf, file);
        free(tmpbuf);

    }
    return result;
}

void sqcTranspile(sqcQC* qcHandle, sqcTranspileKind kind, sqcTranspileOptions options)
{
    // If there is already a PyObject, release it
    Py_XDECREF(qcHandle->pyTranspiledQuantumCircuit);
    qcHandle->pyTranspiledQuantumCircuit = NULL;

    switch(kind){
        case BasicSimulator:
            printf("!!! unknown provider specified....\n"); exit(1);
            break;
        case FakeOpenPulse2Q:
        case FakeOpenPulse3Q:
        case Fake1Q:
        case Fake5QV1:
        case Fake20QV1:
        case Fake7QPulseV1:
        case Fake27QPulseV1:
        case Fake127QpulseV1:
            /// \TODO デバッグ情報の出力に関しては要検討（ここに限らず）
            printf("[ DEBUG ] The provider to use for transpilation : %s From %s  (optLevel=%d)\n",
                providerInfo[kind][1],
                providerInfo[kind][0],
                ((sqcFakeProviderOption*)options)->optLevel);
            break;
        default:
            printf("!!! unknown provider specified....\n"); exit(1);
            break;
    }

    // QASM-string from sqcQC*
    char* qasmStr = gateInfo2qasm(qcHandle);

    // generate provider
    PyObject* pyImportName;
    pyImportName = PyUnicode_DecodeFSDefault(providerInfo[kind][0]);
    PyErr_Print();
    PyObject* pyProviderFrom = PyImport_Import(pyImportName);
    PyErr_Print();
    PyObject* pyProviderClass = PyObject_GetAttrString(pyProviderFrom, providerInfo[kind][1]);
    PyErr_Print();
    PyObject* pyProvider = PyObject_CallNoArgs(pyProviderClass);
    PyErr_Print();
    Py_XDECREF(pyImportName);
    Py_XDECREF(pyProviderFrom);
    Py_XDECREF(pyProviderClass);

    // generate Circuit from QASM-string
    PyObject* pyTargetQASM = PyUnicode_DecodeFSDefault(qasmStr);
    PyErr_Print();
    PyObject* pyCircuit = PyObject_CallOneArg(mng->pyLoads, pyTargetQASM);
    PyErr_Print(); 
    free(qasmStr);
    Py_XDECREF(pyTargetQASM);

    // execute Transpile
    //   Use tuples and dicts as arguments to call qiskit.compiler.transpile
    PyObject* pyArgs = PyTuple_New(1);
    PyTuple_SetItem(pyArgs, 0, pyCircuit);

    PyObject* pyDictArg = PyDict_New();
    PyDict_SetItemString( pyDictArg, "backend", pyProvider);

    //現状はFakeProviderのみサポートしているため、それのオプションのみ指定している。
    sqcFakeProviderOption* FakeOption = (sqcFakeProviderOption*)options;
    PyObject* pyOptLevel= PyLong_FromLong(FakeOption->optLevel);
    PyDict_SetItemString( pyDictArg, "optimization_level", pyOptLevel);

    qcHandle->pyTranspiledQuantumCircuit = PyObject_Call(mng->pyTranspiler, pyArgs, pyDictArg);
    PyErr_Print(); 
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
    return 0;
}

/// \brief 量子回路IRからOpenQASM文字列を生成する内部関数
/// \details  量子回路IRからOpenQASM文字列を生成する際に使用する内部関数。
///           C-APIのI/Fとして公開されない。
///           量子回路IRのgate[n]を順に辿り、各操作に対応する文字列を連結する。
///
/// \param [in] qcHandle 量子回路IR
///
/// \return OpenQASM文字列のポインタ
///         この関数の出力であるOpenQASM文字列は動的メモリで管理しており、
///         呼び出し側で解放しなければならない。
///
/// \note ほぼRCCSから提供されたままの仕組である。提供時以下のようにコメントされていた。
/// ```
///  * Translate our ir to qasm.
///  * This is a quick and dirty implementation for the reference.
///  *
///  * reference:
///  * https://github.com/Qiskit/qiskit/blob/main/qiskit/qasm/libs/stdgates.inc
/// ```
char* gateInfo2qasm(sqcQC* qcHandle)
{
    char       t[256];
    gateInfo *g;

    // 生成するQASM文字列用の領域を取得する
    // 取得するサイズは厳密でなく、mallocで指定する即値は以下のためのものである。
    //    50：定型で出力するinclude, qubit, cbitなどのためのbyte数
    //    64：１つのの操作に対するbyte数。量子回路IR数×64byteを確保
    char* s = (char *)malloc((qcHandle->ngates)*64+50);

    sprintf(s, "OPENQASM 3.0;\ninclude \"stdgates.inc\";\nqubit[%d] q;\nbit[%d] c;\n",qcHandle->qubits,qcHandle->qubits);
    for(int i=0; i<qcHandle->ngates; i++){
        g = &(qcHandle->gate[i]);
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
                printf("The gate ID %d is not implemented\n",qcHandle->gate[i].id); exit(1);
                break;
        }
        strcat(s, t);
    }
    return s;
}