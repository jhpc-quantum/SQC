#include "sqc_api.h"
#include <stdlib.h>
#include <string.h>

#if defined(FAKE_PROVIDER) 
#define KIND (Fake20QV1)
#ifndef OPT_LEVEL
sqcFakeProviderOption opt = {0};
#else
sqcFakeProviderOption opt = {OPT_LEVEL};
#endif
#elif defined(IBM_PROVIDER)
#fatal /* Not Implemented */
#else /* other */
#fatal 
#endif

int main(int argc, char *argv[])
{
  sqcInitialize();

  sqcQC* q;
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 7.074767878860384e-08, 0);
  sqcRZGate(q, 0.20784859241365614, 0);
  sqcRYGate(q, -1.7292008265968294e-07, 1);
  sqcRZGate(q, -0.574276776970179, 1);
  sqcRYGate(q, -3.1223475424080385, 2);
  sqcRZGate(q, 2.2833679066636137e-05, 2);
  sqcRYGate(q, -5.891701793103721e-08, 3);
  sqcRZGate(q, 3.018676382299534, 3);
  sqcRYGate(q, 3.141592348897519, 4);
  sqcRZGate(q, -0.5346683178034415, 4);
  sqcRYGate(q, 1.5707964633554103, 5);
  sqcRZGate(q, 3.1415926393405313, 5);
  sqcRYGate(q, -1.5408031833715043, 6);
  sqcRZGate(q, -3.141592134437765, 6);
  sqcRYGate(q, 1.5707961311616572, 7);
  sqcRZGate(q, 8.384775362912933e-08, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -8.748934585604719e-07, 0);
  sqcRZGate(q, 1.517805717031596, 0);
  sqcRYGate(q, -1.570796521555326, 1);
  sqcRZGate(q, 3.1415875451977735, 1);
  sqcRYGate(q, -1.5707975612254559, 2);
  sqcRZGate(q, 1.9820911545302708, 2);
  sqcRYGate(q, -1.5707953609533354, 3);
  sqcRZGate(q, -1.5534046348163224, 3);
  sqcRYGate(q, 3.1415924004519273, 4);
  sqcRZGate(q, -0.7369968936007061, 4);
  sqcRYGate(q, 1.07017762193387, 5);
  sqcRZGate(q, 1.5707346838741436, 5);
  sqcRYGate(q, 1.570777000206534, 6);
  sqcRZGate(q, 0.24810529778402532, 6);
  sqcRYGate(q, -2.071395737788129, 7);
  sqcRZGate(q, 3.1333263945953997, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.5707964393948703, 0);
  sqcRZGate(q, 1.5707950262076542, 0);
  sqcRYGate(q, 1.0701843094795238, 1);
  sqcRZGate(q, 1.3840814246425603, 1);
  sqcRYGate(q, -1.2985175608891275, 2);
  sqcRZGate(q, 0.9886468122974417, 2);
  sqcRYGate(q, -3.1415925701855665, 3);
  sqcRZGate(q, -2.1427044129859727, 3);
  sqcRYGate(q, 7.201380346595445e-07, 4);
  sqcRZGate(q, -1.053735549976409, 4);
  sqcRYGate(q, 0.02611433226439885, 5);
  sqcRZGate(q, -1.4154489904925436, 5);
  sqcRYGate(q, -2.706108636789211, 6);
  sqcRZGate(q, 1.587607647689989, 6);
  sqcRYGate(q, 3.62610360404858e-07, 7);
  sqcRZGate(q, 0.6451630619798415, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.5707948929167266, 0);
  sqcRZGate(q, 1.570797663266984, 0);
  sqcRYGate(q, -3.141592172767992, 1);
  sqcRZGate(q, -0.1867194175388125, 1);
  sqcRYGate(q, -1.5707951606592934, 2);
  sqcRZGate(q, -5.861541336803182e-07, 2);
  sqcRYGate(q, 3.1415923023252166, 3);
  sqcRZGate(q, -2.1600961766313533, 3);
  sqcRYGate(q, -1.5707966117953123, 4);
  sqcRZGate(q, -3.0743901473408846, 4);
  sqcRYGate(q, 3.1415924035104577, 5);
  sqcRZGate(q, -2.986306983899486, 5);
  sqcRYGate(q, -1.5707956913421741, 6);
  sqcRZGate(q, -3.141592524667225, 6);
  sqcRYGate(q, -3.141592309889022, 7);
  sqcRZGate(q, -2.5046958884036754, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.5708013491440915, 0);
  sqcRZGate(q, -1.0299578114387022, 0);
  sqcRYGate(q, 1.5707965096586687, 1);
  sqcRZGate(q, -2.2245065913027644, 1);
  sqcRYGate(q, -1.5707961890115707, 2);
  sqcRZGate(q, 0.5408384960214256, 2);
  sqcRYGate(q, 1.5707954497548098, 3);
  sqcRZGate(q, -0.653710029238455, 3);
  sqcRYGate(q, 1.0401102388257755e-06, 4);
  sqcRZGate(q, 2.044432095471869, 4);
  sqcRYGate(q, -1.5707966242715368, 5);
  sqcRZGate(q, 2.237171610202388, 5);
  sqcRYGate(q, -1.5707966178402464, 6);
  sqcRZGate(q, -2.60075435933223, 6);
  sqcRYGate(q, 1.5707959629792434, 7);
  sqcRZGate(q, 0.6663747789522323, 7);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
