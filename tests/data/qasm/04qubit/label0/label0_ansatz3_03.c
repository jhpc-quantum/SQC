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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 1.0223286618792837, 0);
  sqcRZGate(q, -1.6213904055826651, 0);
  sqcRYGate(q, 2.2973678517969502, 1);
  sqcRZGate(q, -2.4313268501533787, 1);
  sqcRYGate(q, -0.7618729050027214, 2);
  sqcRZGate(q, 2.318557969060693, 2);
  sqcRYGate(q, 0.23114324565572766, 3);
  sqcRZGate(q, 1.978642875121226, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.9358619529165342, 0);
  sqcRZGate(q, 2.357436252540383, 0);
  sqcRYGate(q, -2.8064429430539586, 1);
  sqcRZGate(q, 2.2212347812293713, 1);
  sqcRYGate(q, -1.7128501363783082, 2);
  sqcRZGate(q, 0.9598451037452519, 2);
  sqcRYGate(q, -0.23222236089108, 3);
  sqcRZGate(q, 1.7784597911338915, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.8479685857475903, 0);
  sqcRZGate(q, 2.539870776139415, 0);
  sqcRYGate(q, -0.8282931784715578, 1);
  sqcRZGate(q, -1.5377256859072945, 1);
  sqcRYGate(q, -0.0016058533684078426, 2);
  sqcRZGate(q, 2.6480271421949158, 2);
  sqcRYGate(q, 2.9506013845240253, 3);
  sqcRZGate(q, 1.5759687707818353, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.4489423182222687, 0);
  sqcRZGate(q, -1.4498645002466313, 0);
  sqcRYGate(q, 1.0232091957858067, 1);
  sqcRZGate(q, -1.1597171341239103, 1);
  sqcRYGate(q, 3.0731840058581907, 2);
  sqcRZGate(q, 1.3555968730597234, 2);
  sqcRYGate(q, 0.12711240524198697, 3);
  sqcRZGate(q, -0.35624019342590024, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.9551530477552002, 0);
  sqcRZGate(q, -0.12057188963778012, 0);
  sqcRYGate(q, 0.16326307320241626, 1);
  sqcRZGate(q, 2.416885042686278, 1);
  sqcRYGate(q, 2.5607168052465563, 2);
  sqcRZGate(q, -0.7875691807517736, 2);
  sqcRYGate(q, 0.820765254731582, 3);
  sqcRZGate(q, 1.9355251785471168, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.3693433607171128, 0);
  sqcRZGate(q, -1.2637927619997429, 0);
  sqcRYGate(q, -1.9722622206876705, 1);
  sqcRZGate(q, -0.07162991570554846, 1);
  sqcRYGate(q, 1.3010231240050427, 2);
  sqcRZGate(q, -2.8848503674602846, 2);
  sqcRYGate(q, -0.2901256955505677, 3);
  sqcRZGate(q, 3.0721468759433335, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.2203710159915193, 0);
  sqcRZGate(q, -1.2074544160398937, 0);
  sqcRYGate(q, 1.311510044680086, 1);
  sqcRZGate(q, -1.4925346634535597, 1);
  sqcRYGate(q, 1.162707114509935, 2);
  sqcRZGate(q, -1.7427002839135424, 2);
  sqcRYGate(q, -1.0904548626234534, 3);
  sqcRZGate(q, -2.368687958392484, 3);

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
