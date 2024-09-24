/// \file
/// qasm3を生成するAPI

/// \brief sqcTranspileにてproviderを指定するenum
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
  NProviders        /// Number of provieders
} sqcTranspileKind;

/// \brief sqcStoreQCとsqcStoreQCtoMemoryにて利用する回路がないときのエラー出力を指定するenum
typedef enum {
  storeQCStop, ///< メッセージを出力して処理を終了する
  storeQCContinue, ///< メッセージを出力せず処理を継続する
  storeQCContinueAndMessage ///< メッセージを出力して処理を継続する
} sqcStoreQCOptionKind;

/// \brief トランスパイル時のオプションを指定するデータ構造
typedef void* sqcTranspileOptions;

/// \brief Fakeを先頭に持つプロバイダーを利用してトランスパイルする際のオプション
/// \note 今は最適化レベルのみ指定できるようにしている。
/// \todo 別のヘッダを用意するか検討
typedef struct{
 int optLevel;
} sqcFakeProviderOption;

/// \brief sqcMeasureの時のオプションを指定するデータ構造
typedef void* sqcMeasureOptions;

/// \brief 量子回路のIRに保存できるゲート情報の数
#define MAX_N_GATES 128 
/// \brief ゲートの整数パラメータの最大数
#define MAX_I_ARGS  2
/// \brief ゲートの実数パラメータの最大数
#define MAX_R_ARGS  1

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
  int       no;
  int       qubits;
  int       ngates; 
  gate_info gate[MAX_N_GATES]; 
  void*     pyTranspiledQuantumCircuit;
} sqcQC;

/// \brief C-APIの利用開始を宣言する
///
/// ```
///  本関数では以下を実施している。
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
///       Python C-APIが正しい値を返さない場合がある。このため、sqcInitializeは
///       プロセス内で１回しか呼び出せない制限とする。例外が発生する詳細な条件は未調査。
/// \note 現時点では、IRのdumpおよび、IRのdump+transpileを複数回実行することを許している。
///       このため、何度も使用するloads,dumps,transpielの関数オブジェクトを管理領域に
///       保持することで、同じimportをしないようにしている。
int sqcInitialize(void);

/// \brief 量子回路IR領域の取得
/// \details 量子回路IR領域を取得し、返却する。操作の追加などのAPIは、本APIが返却した値を用いる。
///          qubit数と古典ビット数は同数であると想定する。
///          CIRCUIT_NUM個の量子回路IRを保持できる。
/// \param [in] qubits 量子回路のqubit数
///
/// \retval NULL 異常終了
/// \retval それ以外 量子回路IRのハンドラ（sqcQC*）
sqcQC* sqcQuantumCircuit(int qubits);

/// \brief 量子回路IR領域の解放
/// \param [in] qc_handle 量子回路IRのハンドラ
///
/// \return なし
void sqcDestroyQuantumCircuit(sqcQC* qc_handle);

/// \brief 量子回路IRに h gateを追加する
/// \param [out] qc_handle 量子回路IRのハンドラ
/// \param [in] qubit_number 対象のqubit番号
///
/// \return なし
///
void sqcHGate(sqcQC* qc_handle, int qubit_number);

/// \brief 量子回路IRに cx gateを追加する
/// \param [out] qc_handle 量子回路IRのハンドラ
/// \param [in] qubit_number1 制御ビット番号
/// \param [in] qubit_number2 標的ビット番号
///
/// \return なし
///
void sqcCXGate(sqcQC* qc_handle, int qubit_number1, int qubit_number2);

/// \brief 量子回路IRに cz gateを追加する
/// \param [out] qc_handle 量子回路IRのハンドラ
/// \param [in] qubit_number1 制御ビット番号
/// \param [in] qubit_number2 標的ビット番号
///
/// \return なし
///
void sqcCZGate(sqcQC* qc_handle, int qubit_number1, int qubit_number2);

/// \brief 量子回路IRに rx gateを追加する
/// \param [out] qc_handle 量子回路IRのハンドラ
/// \param [in] theta 回転角
/// \param [in] qubit_number 標的ビット番号
///
/// \return なし
///
void sqcRXGate(sqcQC* qc_handle, double theta, int qubit_number);

/// \brief 量子回路IRに ry gateを追加する
/// \param [out] qc_handle 量子回路IRのハンドラ
/// \param [in] theta 回転角
/// \param [in] qubit_number 標的ビット番号
///
/// \return なし
///
void sqcRYGate(sqcQC* qc_handle, double theta, int qubit_number);

/// \brief 量子回路IRに rz gateを追加する
/// \param [out] qc_handle 量子回路IRのハンドラ
/// \param [in] phi 回転角
/// \param [in] qubit_number 標的ビット番号
///
/// \return なし
///
void sqcRZGate(sqcQC* qc_handle, double phi, int qubit_number);

/// \brief 量子回路IRに s gateを追加する
/// \param [out] qc_handle 量子回路IRのハンドラ
/// \param [in] qubit_number 標的ビット番号
///
/// \return なし
///
void sqcSGate(sqcQC* qc_handle, int qubit_number);

/// \brief 量子回路IRに sdg gateを追加する
/// \param [out] qc_handle 量子回路IRのハンドラ
/// \param [in] qubit_number 標的ビット番号
///
/// \return なし
///
void sqcSdgGate(sqcQC* qc_handle, int qubit_number);

/// \brief 量子回路IRに x gateを追加する
/// \param [out] qc_handle 量子回路IRのハンドラ
/// \param [in] qubit_number 標的ビット番号
///
/// \return なし
///
void sqcXGate(sqcQC* qc_handle, int qubit_number);

/// \brief 量子回路IRに u1 gateを追加する
/// \param [out] qc_handle 量子回路IRのハンドラ
/// \param [in] lam 回転角
/// \param [in] qubit_number 標的ビット番号
///
/// \retval 0 正常終了
/// \retval それ以外 異常終了
///
void sqcU1Gate(sqcQC* qc_handle, double lam, int qubit_number);

/// \brief 量子回路IRに Measureを追加する
/// \param [out] qc_handle 量子回路IRのハンドラ
/// \param [in] qubit_number 測定する量子ビット番号
/// \param [in] clbit_number 古典ビット番号
/// \param [in] options オプションを指示するためのデータ構造
///
/// \return なし
///
/// \TODO 存在しないビット番号が指定されたかのチェックは実施していない。
/// \TODO 操作を追加できない状態（MAX_N_GATES数を超える操作追加）かのチェックは実施していない。
void sqcMeasure(sqcQC* qc_handle, int qubit_number, int clbit_number, sqcMeasureOptions options);

/// \brief 量子回路IRからOpenQASM文字列を生成しメモリに出力する
/// \param [in] qc_handle 量子回路IRのハンドラ
/// \param [out] address OpenQASM文字列を格納するバッファのポインタ
/// \param [in] size バッファのサイズ
/// \param [in] isTranspiledQC トランスパイル前後のどちらの回路を処理するかを判別するための真偽値
/// \param [in] kind 利用する回路がない場合のエラー出力のオプション
///
/// \retval 正の値 正常終了。bufに格納したバイト数を返す。
/// \retval 負の値 異常終了
int sqcStoreQCtoMemory(sqcQC* qc_handle, void* address, int size, bool isTranspiledQC, sqcStoreQCOptionKind kind);

/// \brief 量子回路IRからOpenQASM文字列を生成しファイルに出力する
/// \param [in] qc_handle 量子回路IRのハンドラ
/// \param [out] file 書き込み対象のファイルのハンドラ
/// \param [in] isTranspiledQC トランスパイル前後のどちらの回路を処理するかを判別するための真偽値
/// \param [in] kind 利用する回路がない場合のエラー出力のオプション
///
/// \retval 0 正常終了
/// \retval その他 異常終了
int sqcStoreQC(sqcQC* qc_handle, FILE* file, bool isTranspiledQC, sqcStoreQCOptionKind kind);

/// \brief 量子回路IRをTranspileし、その回路情報をPyObject型で出力する
/// \param [in] qc_handle 量子回路IRのハンドラ
/// \param [in] kind Transpile対象のプロバイダ番号
/// \param [in] options オプションを指示するためのデータ構造
///
/// \return なし
/// 
/// \note オプションを指定するには以下の作業を行う。
///       1. 指定したいオプションを持つ構造体の変数を宣言する。
///       2. 指定したいオプションの内容をその変数に代入する。
///       3. sqcTranspiledOptions型の変数を上記の変数へのアドレスで初期化する。
///       4. sqcTranspileの引数"options"にsqcTranspiledOptions型の変数を指定する。
///
/// \TODO 現時点では、transpileに指定可能なproviderは、provider_infoで定義されているもののみ。
///       現在の設計はproviderのオブジェクトの生成に引数が不要な場合しか想定していないため、
///       providerのオブジェクトの生成に引数が必要なものに対応する場合はI/Fの検討が必要。
void sqcTranspile(sqcQC* qc_handle, sqcTranspileKind kind, sqcTranspileOptions options);

/// \brief C-APIの利用終了を宣言する
///
/// ```
///  本関数では以下を実施している。
///   ・qiskit.qasm3.loadsの関数オブジェクトの解放
///   ・qiskit.qasm3.dumpsの関数オブジェクトの解放
///   ・qiskit.compiler.transpileの関数オブジェクトの解放
///   ・Python C-API利用のためのPy_Finalizeの呼出し
/// ```
/// \retval 0 正常終了
/// \retval それ以外 異常終了
///
/// \note sqcInitializeと同様に、プロセス内で１回しか呼び出せない。
///       プロセス内で複数回のPy_Finalizeを呼び出した場合、どういった状態となるかは未調査。
int sqcFinalize(void);

////////////////////////////////
