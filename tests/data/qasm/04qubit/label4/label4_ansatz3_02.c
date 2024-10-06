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

  sqcRYGate(q, 0.08708139017524807, 0);
  sqcRZGate(q, -0.5372572186834804, 0);
  sqcRYGate(q, -0.22171460866609485, 1);
  sqcRZGate(q, 2.4197762078831677, 1);
  sqcRYGate(q, 2.0835453542179145, 2);
  sqcRZGate(q, -1.1870985979833275, 2);
  sqcRYGate(q, -1.9718481430091392, 3);
  sqcRZGate(q, -2.0025756973728184, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.3178962213960146, 0);
  sqcRZGate(q, 2.6457085505420452, 0);
  sqcRYGate(q, 2.081672393885145, 1);
  sqcRZGate(q, -1.8643846230529153, 1);
  sqcRYGate(q, 1.8107458027060925, 2);
  sqcRZGate(q, -3.007515486179369, 2);
  sqcRYGate(q, -1.2825551740099477, 3);
  sqcRZGate(q, -1.059051545102149, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.4406590827375174, 0);
  sqcRZGate(q, -2.1217766848610866, 0);
  sqcRYGate(q, -1.3595573047980596, 1);
  sqcRZGate(q, 1.0386159564759543, 1);
  sqcRYGate(q, 1.3262398837834841, 2);
  sqcRZGate(q, 0.6423747595231454, 2);
  sqcRYGate(q, 1.3377861277224308, 3);
  sqcRZGate(q, -2.3614522998394083, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.9249090487900717, 0);
  sqcRZGate(q, -1.6492968686052758, 0);
  sqcRYGate(q, 2.58473688526621, 1);
  sqcRZGate(q, 2.0321854516842848, 1);
  sqcRYGate(q, -2.480406714906326, 2);
  sqcRZGate(q, 2.4479703174520173, 2);
  sqcRYGate(q, -0.5115852785942452, 3);
  sqcRZGate(q, 1.6958473139314625, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.1257459970076897, 0);
  sqcRZGate(q, 1.8806922917765467, 0);
  sqcRYGate(q, -0.3717873772474123, 1);
  sqcRZGate(q, -0.5606724567584118, 1);
  sqcRYGate(q, 3.027946082927248, 2);
  sqcRZGate(q, 0.6152751801156936, 2);
  sqcRYGate(q, 2.0892148336481755, 3);
  sqcRZGate(q, 2.4194194345676276, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.3581309489624891, 0);
  sqcRZGate(q, -2.3330457489914687, 0);
  sqcRYGate(q, 1.2242758244837024, 1);
  sqcRZGate(q, 2.856281453148833, 1);
  sqcRYGate(q, -2.6947423948833817, 2);
  sqcRZGate(q, -0.4860225853269675, 2);
  sqcRYGate(q, -2.045092661388747, 3);
  sqcRZGate(q, 0.5755727619672862, 3);

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
