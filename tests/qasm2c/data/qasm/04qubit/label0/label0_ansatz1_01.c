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

  sqcRYGate(q, -1.9924269264071546, 0);
  sqcRZGate(q, 1.8317297139813338, 0);
  sqcRYGate(q, -3.1203102491558, 1);
  sqcRZGate(q, 1.4029649535569393, 1);
  sqcRYGate(q, -1.6791231542961917, 2);
  sqcRZGate(q, 1.7432860546985984, 2);
  sqcRYGate(q, -1.3644007753881118, 3);
  sqcRZGate(q, -1.132573767476793, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.1062852514570354, 0);
  sqcRZGate(q, -2.6548687572824856, 0);
  sqcRYGate(q, 1.5717280148388326, 1);
  sqcRZGate(q, 1.720398407147228, 1);
  sqcRYGate(q, 2.403695479447487, 2);
  sqcRZGate(q, -1.5866988659039354, 2);
  sqcRYGate(q, -0.3709651508169213, 3);
  sqcRZGate(q, -1.3694947353904943, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.16780212156255686, 0);
  sqcRZGate(q, -1.607412056687542, 0);
  sqcRYGate(q, 0.0858213975183375, 1);
  sqcRZGate(q, -1.9969172320317696, 1);
  sqcRYGate(q, 1.6035022601497868, 2);
  sqcRZGate(q, 1.4266503711028544, 2);
  sqcRYGate(q, -0.5614709791561179, 3);
  sqcRZGate(q, -0.7859544955086963, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3418816261427908, 0);
  sqcRZGate(q, -1.932353189106142, 0);
  sqcRYGate(q, -1.5366683217455883, 1);
  sqcRZGate(q, -1.5610195254896064, 1);
  sqcRYGate(q, -0.031336302135431815, 2);
  sqcRZGate(q, 0.38969702057524275, 2);
  sqcRYGate(q, 2.770096278917206, 3);
  sqcRZGate(q, -0.016875087613080986, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5623367079695303, 0);
  sqcRZGate(q, 3.135608882286365, 0);
  sqcRYGate(q, -2.114146131000396, 1);
  sqcRZGate(q, 1.648232444287346, 1);
  sqcRYGate(q, -3.139630159490053, 2);
  sqcRZGate(q, 1.9845509929025589, 2);
  sqcRYGate(q, 0.5244212868835527, 3);
  sqcRZGate(q, 2.286254582825011, 3);

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
