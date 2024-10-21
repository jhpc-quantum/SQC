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

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.008995626684944106, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.09380618187142396, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.059081607339053405, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 1.5223776035868357, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 6.989110578572527e-06, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 2.0938384388856086, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.2153563764444053, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.33132288400090476, 0);
  sqcRZGate(q, -2.816065765625436, 1);
  sqcRZGate(q, -1.0144307567425368, 2);
  sqcRZGate(q, -0.6172135474316026, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -1.1657249568198078, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -2.451444226876913, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 1.0677410871070436, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.4394490437854399, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.575627626430288, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 1.127817748086096, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -1.5801182301739567, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.3794210616970477, 0);
  sqcRZGate(q, 1.6496435171437545, 1);
  sqcRZGate(q, -0.0891390113426767, 2);
  sqcRZGate(q, 1.8268894401656859, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.4097287857488097, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.21653543135861797, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 1.2783150946378923, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.42272506447677277, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 2.9901050042824933, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 2.628952482424235, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -1.4679975975376132, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.20479212298994062, 0);
  sqcRZGate(q, -2.0525728751015206, 1);
  sqcRZGate(q, 2.5060323781631264e-06, 2);
  sqcRZGate(q, 0.7006777748167045, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.4222711225128803, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.057662107236294655, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -1.5766853304861097, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.06677577373137955, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -3.1415582043099737, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -1.5529799087346856, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -1.5603750365195985, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.5221713989940341, 0);
  sqcRZGate(q, -2.052640766020721, 1);
  sqcRZGate(q, -0.00014745083511207886, 2);
  sqcRZGate(q, 0.4753371517408521, 3);

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
