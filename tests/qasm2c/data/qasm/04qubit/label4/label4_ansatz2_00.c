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

  sqcRYGate(q, 1.5708031047775117, 0);
  sqcRZGate(q, 1.4845502430398543, 0);
  sqcRYGate(q, -3.1415762088813186, 1);
  sqcRZGate(q, 2.048625365499965, 1);
  sqcRYGate(q, 1.5707960404984134, 2);
  sqcRZGate(q, 1.3527554611642474, 2);
  sqcRYGate(q, -3.1415869230876536, 3);
  sqcRZGate(q, -0.3109588826362914, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.1377827226781063, 0);
  sqcRZGate(q, 1.158970647112451, 0);
  sqcRYGate(q, 1.5707933605478908, 1);
  sqcRZGate(q, -1.9280320052089816e-05, 1);
  sqcRYGate(q, -3.140237611012792, 2);
  sqcRZGate(q, 2.9197551579928964, 2);
  sqcRYGate(q, 1.8812871674118021, 3);
  sqcRZGate(q, 1.5707958300927514, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.1415926050797145, 0);
  sqcRZGate(q, 1.2438944532991085, 0);
  sqcRYGate(q, -2.2245386562925358, 1);
  sqcRZGate(q, 1.5707868402672276, 1);
  sqcRYGate(q, -1.5707931417389185, 2);
  sqcRZGate(q, 1.592227962890365e-06, 2);
  sqcRYGate(q, -1.5708119141357086, 3);
  sqcRZGate(q, -0.7944105818528814, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.5707965814430922, 0);
  sqcRZGate(q, -1.1860774082072387, 0);
  sqcRYGate(q, 1.5707812297331851, 1);
  sqcRZGate(q, -2.4983911845063447, 1);
  sqcRYGate(q, -1.570794542967926, 2);
  sqcRZGate(q, 1.762802204404219, 2);
  sqcRYGate(q, -2.7150002269660733e-05, 3);
  sqcRZGate(q, 0.7600738046214062, 3);

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
