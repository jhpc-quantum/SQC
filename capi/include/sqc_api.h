#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/// \brief sqc_Transpileにてproviderを指定するenum
typedef enum {
  BasicSimulator,    ///< BasicSimulator
  FakeOpenPulse2Q,   ///< FakeOpenPulse2Q
  FakeOlenPulse3Q,   ///< FakeOlenPulse3Q
  Fake1Q,            ///< Fake1Q
  Fake5QV1,          ///< Fake5QV1
  Fake20QV1,         ///< Fake20QV1
  Fake7QPulseV1,     ///< Fake7QPulseV1
  Fake27QPulseV1,    ///< Fake27QPulseV1
  Fake127QpulseV1,   ///< Fake127QpulseV1
  _NProviders,
} PROVIDERS;

/// \brief enum PROVIDERSに対応するimport元とクラス名の定義
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
};

/// \brief 量子回路のIRに保存できるゲート情報の数
#define MAX_N_GATES 128 
/// \brief ゲートの整数パラメータの最大数
#define MAX_I_ARGS  8
/// \brief ゲートの実数パラメータの最大数
#define MAX_R_ARGS  8

/// \brief ゲートなどの操作を表現する構造体
/// \details 量子回路の１つのゲートなどの操作を表現する構造体。
///          パラメータが何を意味するかは、操作ごとに設計する。
///          例えば、id=_CXGateの場合、
///          niarg=2, rarg=0であり、iarg[0]が標的qubit番号、iarg[1]が制御qubit番号となっている。
typedef struct{
  int    id;               ///< この操作の種別（enum_gates）。_HGateなど。
  int    niarg;            ///< この操作の整数パラメータの数
  int    nrarg;            ///< この操作の実数パラメータの数
  int    iarg[MAX_I_ARGS]; ///< この操作の整数パラメータ
  double rarg[MAX_R_ARGS]; ///< この操作の実数パラメータ
} gate_info;

/// \brief 量子回路のIRを表現する構造体
/// \details 量子回路のIRを表現する構造体。
/// \note 現時点では、ゲートなどの操作を表現する構造体領域をMAX_N_GATES数分確保しており、
///       MAX_N_GATES以上の操作を保持することはできない。
typedef struct{
  // --- common parameters --- 
  int           no;
  int           qubits;
  int            ngates; 
  gate_info      gate[MAX_N_GATES]; 
} sqc_info_t;

typedef sqc_info_t* sqc_ir; ///< 量子回路IRのポインタ型。C-APIのIFで使用。

int sqc_Initialize(void);
sqc_ir sqc_Circuit(int qubits);
int sqc_HGate(sqc_ir qcir, int qubit_number);
int sqc_CXGate(sqc_ir qcir, int qubit_number1, int qubit_number2);
int sqc_CZGate(sqc_ir qcir, int qubit_number1, int qubit_number2);
int sqc_RXGate(sqc_ir qcir, double theta, int qubit_number);
int sqc_RYGate(sqc_ir qcir, double theta, int qubit_number);
int sqc_RZGate(sqc_ir qcir, double phi, int qubit_number);
int sqc_SGate(sqc_ir qcir, int qubit_number);
int sqc_SdgGate(sqc_ir qcir, int qubit_number);
int sqc_Measure(sqc_ir qcir, int qubit_number, int clbit_number);
int sqc_Dump(sqc_ir qcir, char* buf, unsigned int size);
int sqc_Transpile(sqc_ir qcir, char* buf, unsigned int size,
		  PROVIDERS provider, int opt_level);
int sqc_Finalize(void);

////////////////////////////////  



/// \brief 量子回路IRでの操作を表すenum
enum enum_gates{
  _HGate,
  _CXGate, 
  _CZGate,
  _RXGate,
  _RYGate,
  _RZGate,
  _SGate,
  _SdgGate,
  _Measure,
  _NGates // # of gates 
};


/// \brief 量子回路のIRの最大数
#define CIRCUIT_NUM 48
/// \brief C-API処理で使用する情報管理領域
typedef struct{
  sqc_ir c[CIRCUIT_NUM];  ///< 量子回路IR
  int nsqc_irs;           ///< 使用している量子回路IR数
  PyObject* pyLoads;      ///< OpenQASM文字列をQiskitのcircuitオブジェクトに変換する関数の関数オブジェクト
  PyObject* pyDumps;      ///< QiskitのcircuitオブジェクトをOpenQASM文字列に変換する関数の関数オブジェクト
  PyObject* pyTranspiler; ///< Qiskitのトランスパイラを呼び出す関数の関数オブジェクト
} mng_area;

mng_area* mng;

char* sqc_ir_to_qasm(sqc_ir info);

/// \brief C-APIの利用開始を宣言する
///
/// ```
///  本関数では以下を実施している。
///   ・IR用領域の準備
///   ・Python C-API利用のためのPy_Initializeの呼出し
///   ・qiskit.qasm3.loadsの関数オブジェクトの保持
///   ・qiskit.qasm3.dumpsの関数オブジェクトの保持
///   ・qiskit.compiler.transpileの関数オブジェクトの保持
/// ```
/// \retval 0 正常終了
/// \retval それ以外 異常終了
///
/// \note Python C-APIのモジュールによっては
///       プロセス内で複数回のPy_Initialize/Py_FinalizeがされるとPythonで例外が発生し、
///       Python C-APIが正しい値を返さない場合がある。このため、sqc_Initializeは
///       プロセス内で１回しか呼び出せない制限とする。例外が発生する詳細な条件は未調査。
/// \note 現時点では、IRのdumpおよび、IRのdump+transpileを複数回実行することを許している。
///       このため、何度も使用するloads,dumps,transpielの関数オブジェクトを管理領域に
///       保持することで、同じimportをしないようにしている。
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

/// \brief 量子回路IR領域の取得
/// \details 量子回路IR領域を取得し、返却する。操作の追加などのAPIは、本APIが返却した値を用いる。
///          qubit数と古典ビット数は同数であると想定する。
///          CIRCUIT_NUM個の量子回路IRを保持できる。
/// \param [in] qubits 量子回路のqubit数
///
/// \retval NULL 異常終了
/// \retval それ以外 量子回路IRのポインタ（sqc_ir）
sqc_ir sqc_Circuit(int qubits)
{
  int n = mng->nsqc_irs;
  
  mng->c[n] = (sqc_ir)malloc(sizeof(sqc_info_t));
  mng->c[n]->no = n;
  mng->c[n]->qubits  = qubits;
  mng->c[n]->ngates  = 0;

  mng->nsqc_irs++;
  
  return mng->c[n];
}

/// \brief 量子回路IRに h gateを追加する
/// \param [in] qcir 量子回路IR
/// \param [in] qubit_number 対象のqubit番号
///
/// \retval 0 正常終了
/// \retval それ以外 異常終了
///
/// \TODO 存在しないビット番号が指定されたかのチェックは実施していない。
/// \TODO 操作を追加できない状態（MAX_N_GATES数を超える操作追加）かのチェックは実施していない。
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

/// \brief 量子回路IRに cx gateを追加する
/// \param [in] qcir 量子回路IR
/// \param [in] qubit_number1 制御ビット番号
/// \param [in] qubit_number2 標的ビット番号
///
/// \retval 0 正常終了
/// \retval それ以外 異常終了
///
/// \TODO 存在しないビット番号が指定されたかのチェックは実施していない。
/// \TODO 操作を追加できない状態（MAX_N_GATES数を超える操作追加）かのチェックは実施していない。
int sqc_CXGate(sqc_ir qcir, int qubit_number1, int qubit_number2)
{
  int n = qcir->ngates; 
  qcir->gate[n].id      = _CXGate;
  qcir->gate[n].niarg   = 2; 
  qcir->gate[n].iarg[0] = qubit_number1;
  qcir->gate[n].iarg[1] = qubit_number2;
  qcir->gate[n].nrarg   = 0; 
  qcir->ngates++;
  return 0;
}

/// \brief 量子回路IRに cz gateを追加する
/// \param [in] qcir 量子回路IR
/// \param [in] qubit_number1 制御ビット番号
/// \param [in] qubit_number2 標的ビット番号
///
/// \retval 0 正常終了
/// \retval それ以外 異常終了
///
/// \TODO 存在しないビット番号が指定されたかのチェックは実施していない。
/// \TODO 操作を追加できない状態（MAX_N_GATES数を超える操作追加）かのチェックは実施していない。
int sqc_CZGate(sqc_ir qcir, int qubit_number1, int qubit_number2)
{
  int n = qcir->ngates;
  qcir->gate[n].id      = _CZGate;
  qcir->gate[n].niarg   = 2; 
  qcir->gate[n].iarg[0] = qubit_number1;
  qcir->gate[n].iarg[1] = qubit_number2;
  qcir->gate[n].nrarg   = 0; 
  qcir->ngates++;
  return 0;
}

/// \brief 量子回路IRに rx gateを追加する
/// \param [in] qcir 量子回路IR
/// \param [in] theta 回転角
/// \param [in] qubit_number 標的ビット番号
///
/// \retval 0 正常終了
/// \retval それ以外 異常終了
///
/// \TODO 存在しないビット番号が指定されたかのチェックは実施していない。
/// \TODO 操作を追加できない状態（MAX_N_GATES数を超える操作追加）かのチェックは実施していない。
int sqc_RXGate(sqc_ir qcir, double theta, int qubit_number)
{
  int n = qcir->ngates;
  qcir->gate[n].id      = _RXGate;
  qcir->gate[n].niarg   = 1; 
  qcir->gate[n].iarg[0] = qubit_number;
  qcir->gate[n].nrarg   = 1; 
  qcir->gate[n].rarg[0] = theta;
  qcir->ngates++;
  return 0;
}

/// \brief 量子回路IRに ry gateを追加する
/// \param [in] qcir 量子回路IR
/// \param [in] theta 回転角
/// \param [in] qubit_number 標的ビット番号
///
/// \retval 0 正常終了
/// \retval それ以外 異常終了
///
/// \TODO 存在しないビット番号が指定されたかのチェックは実施していない。
/// \TODO 操作を追加できない状態（MAX_N_GATES数を超える操作追加）かのチェックは実施していない。
int sqc_RYGate(sqc_ir qcir, double theta, int qubit_number)
{
  int n = qcir->ngates;
  qcir->gate[n].id      = _RYGate;
  qcir->gate[n].niarg   = 1; 
  qcir->gate[n].iarg[0] = qubit_number;
  qcir->gate[n].nrarg   = 1; 
  qcir->gate[n].rarg[0] = theta;
  qcir->ngates++;
  return 0;
}

/// \brief 量子回路IRに rz gateを追加する
/// \param [in] qcir 量子回路IR
/// \param [in] phi 回転角
/// \param [in] qubit_number 標的ビット番号
///
/// \retval 0 正常終了
/// \retval それ以外 異常終了
///
/// \TODO 存在しないビット番号が指定されたかのチェックは実施していない。
/// \TODO 操作を追加できない状態（MAX_N_GATES数を超える操作追加）かのチェックは実施していない。
int sqc_RZGate(sqc_ir qcir, double phi, int qubit_number)
{
  int n = qcir->ngates;
  qcir->gate[n].id      = _RZGate;
  qcir->gate[n].niarg   = 1; 
  qcir->gate[n].iarg[0] = qubit_number;
  qcir->gate[n].nrarg   = 1; 
  qcir->gate[n].rarg[0] = phi;
  qcir->ngates++;
  return 0;
}

/// \brief 量子回路IRに s gateを追加する
/// \param [in] qcir 量子回路IR
/// \param [in] qubit_number 標的ビット番号
///
/// \retval 0 正常終了
/// \retval それ以外 異常終了
///
/// \TODO 存在しないビット番号が指定されたかのチェックは実施していない。
/// \TODO 操作を追加できない状態（MAX_N_GATES数を超える操作追加）かのチェックは実施していない。
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

/// \brief 量子回路IRに sdg gateを追加する
/// \param [in] qcir 量子回路IR
/// \param [in] qubit_number 標的ビット番号
///
/// \retval 0 正常終了
/// \retval それ以外 異常終了
///
/// \TODO 存在しないビット番号が指定されたかのチェックは実施していない。
/// \TODO 操作を追加できない状態（MAX_N_GATES数を超える操作追加）かのチェックは実施していない。
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

/// \brief 量子回路IRに Measureを追加する
/// \param [in] qcir 量子回路IR
/// \param [in] qubit_number 測定する量子ビット番号
/// \param [in] clbit_number 古典ビット番号
///
/// \retval 0 正常終了
/// \retval それ以外 異常終了
///
/// \TODO 存在しないビット番号が指定されたかのチェックは実施していない。
/// \TODO 操作を追加できない状態（MAX_N_GATES数を超える操作追加）かのチェックは実施していない。
int sqc_Measure(sqc_ir qcir, int qubit_number, int clbit_number)
{
  int n =qcir->ngates; 
  qcir->gate[n].id      = _Measure;
  qcir->gate[n].niarg   = 2; 
  qcir->gate[n].iarg[0] = qubit_number;
  qcir->gate[n].iarg[1] = clbit_number;
  qcir->gate[n].nrarg   = 0; 
  qcir->ngates++;
  return 0;
}

/// \brief 量子回路IRからOpenQASM文字列を生成する
/// \param [in] qcir 量子回路IR
/// \param [in,out] buf OpenQASM文字列を格納するバッファのポインタ
/// \param [in] size bufのサイズ
///
/// \retval 正の値 正常終了。bufに格納したバイト数を返す。
/// \retval 負の値 異常終了
int sqc_Dump(sqc_ir qcir, char* buf, unsigned int size)
{
  char* tmpbuf = sqc_ir_to_qasm(qcir);
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

/// \brief 量子回路IRをTranspileしたOpenQASM文字列を返す
/// \param [in] qcir 量子回路IR
/// \param [in,out] buf Transpile後のOpenQASM文字列を格納するバッファのポインタ
/// \param [in] size bufのサイズ
/// \param [in] provider Transpile対象のプロバイダ番号
/// \param [in] opt_level 最適化レベル
///
/// \retval 正の値 正常終了。bufに格納したバイト数を返す。
/// \retval 負の値 異常終了
///
/// \TODO 現時点では、transpileに指定可能なproviderは、provider_infoで定義されているもののみ。
///       現在の設計はproviderのオブジェクトの生成に引数が不要な場合しか想定していないため、
///       providerのオブジェクトの生成に引数が必要なものに対応する場合はI/Fの検討が必要。
int sqc_Transpile(sqc_ir qcir, char* buf, unsigned int size,
		  PROVIDERS provider, int opt_level)
{
  if( provider >= _NProviders ) {
    printf("!!! unknown provider specified....\n"); exit(1);
  }

  /// \TODO デバッグ情報の出力に関しては要検討（ここに限らず）
  printf("[ DEBUG ] The provider to use for transpilation : %s From %s  (opt_level=%d)\n",         
	 provider_info[provider][1],
	 provider_info[provider][0],
         opt_level);

  // QASM-string from sqc_ir
  char* qasm_str = sqc_ir_to_qasm(qcir);

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

/// \brief C-APIの利用修了を宣言する
///
/// ```
///  本関数では以下を実施している。
///   ・qiskit.qasm3.loadsの関数オブジェクトの解放
///   ・qiskit.qasm3.dumpsの関数オブジェクトの解放
///   ・qiskit.compiler.transpileの関数オブジェクトの解放
///   ・Python C-API利用のためのPy_Finalizeの呼出し
///   ・IR用領域、および管理行の解放
/// ```
/// \retval 0 正常終了
/// \retval それ以外 異常終了
///
/// \note sqc_Initializeと同様に、プロセス内で１回しか呼び出せない。
///       プロセス内で複数回のPy_Finalizeを呼び出した場合、どういった状態となるかは未調査。
int sqc_Finalize(void)
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
/// \param [in] info 量子回路IR
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
char* sqc_ir_to_qasm(sqc_ir info)
{
  char       t[256];
  gate_info *g;

  // 生成するQASM文字列用の領域を取得する
  // 取得するサイズは厳密でなく、mallocで指定する即値は以下のためのものである。
  //    50：定型で出力するinclude, qubit, cbitなどのためのbyte数
  //    64：１つのの操作に対するbyte数。量子回路IR数×64byteを確保
  char* s = (char *)malloc((info->ngates)*64+50);

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
      case _RXGate:
        sprintf(t, "rx(%.20f) q[%d];\n",g->rarg[0], g->iarg[0]);
        break;
      case _RYGate:
        sprintf(t, "ry(%.20f) q[%d];\n",g->rarg[0], g->iarg[0]);
        break;
      case _RZGate:
        sprintf(t, "rz(%.20f) q[%d];\n",g->rarg[0], g->iarg[0]);
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
  return s;
}
