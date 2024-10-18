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
  sqcInitialize(NULL, NULL);

  sqcQC* q;
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 3.032711322764746, 0);
  sqcRZGate(q, -0.19762631700092465, 0);
  sqcRYGate(q, -1.5766409480670889, 1);
  sqcRZGate(q, -1.5796448255953974, 1);
  sqcRYGate(q, -3.0774539533338614, 2);
  sqcRZGate(q, 0.483196288944903, 2);
  sqcRYGate(q, 1.5624414314965365, 3);
  sqcRZGate(q, 0.725965022674079, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 3.1414400601624144, 0);
  sqcRZGate(q, -1.7750058027647277, 0);
  sqcRYGate(q, -0.8374509977497618, 1);
  sqcRZGate(q, 0.6707616794278188, 1);
  sqcRYGate(q, -1.6114486227196319, 2);
  sqcRZGate(q, 1.6554473596208241, 2);
  sqcRYGate(q, 1.5689372644097423, 3);
  sqcRZGate(q, -2.4835909935052336, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.4084880523906445, 0);
  sqcRZGate(q, -0.278159976836906, 0);
  sqcRYGate(q, 1.2588377666896418, 1);
  sqcRZGate(q, -2.3725140526630195, 1);
  sqcRYGate(q, -2.4114003472272985, 2);
  sqcRZGate(q, -1.4561968763599085, 2);
  sqcRYGate(q, 3.0288776728459856, 3);
  sqcRZGate(q, 3.1089495526272106, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 3.053721205918925, 0);
  sqcRZGate(q, -1.6601812941262435, 0);
  sqcRYGate(q, -2.9702674047774393, 1);
  sqcRZGate(q, 0.9387866134523479, 1);
  sqcRYGate(q, 1.6509790776824884, 2);
  sqcRZGate(q, 1.7601323833995526, 2);
  sqcRYGate(q, -1.63146544115559, 3);
  sqcRZGate(q, -1.0195627464595662, 3);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
