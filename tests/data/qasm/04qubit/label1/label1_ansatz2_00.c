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

  sqcRYGate(q, -6.555608738523233e-06, 0);
  sqcRZGate(q, -0.02827480681309925, 0);
  sqcRYGate(q, 3.1415918762888415, 1);
  sqcRZGate(q, -2.506009829415267, 1);
  sqcRYGate(q, -1.5591178259603926, 2);
  sqcRZGate(q, 1.3342621828366945, 2);
  sqcRYGate(q, 2.7802018632873766, 3);
  sqcRZGate(q, -2.3802270922139974, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.74889340931141, 0);
  sqcRZGate(q, -1.3976272432714154e-05, 0);
  sqcRYGate(q, 3.1415915799853567, 1);
  sqcRZGate(q, 0.5627189533890853, 1);
  sqcRYGate(q, 2.3579303046624633, 2);
  sqcRZGate(q, 1.6545242013900525, 2);
  sqcRYGate(q, 0.42465710096910403, 3);
  sqcRZGate(q, 1.1845754495669236, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.392695156359558, 0);
  sqcRZGate(q, -0.9363026187240484, 0);
  sqcRYGate(q, 1.5707961738618719, 1);
  sqcRZGate(q, -8.749576805300308e-07, 1);
  sqcRYGate(q, 3.1415899081955234, 2);
  sqcRZGate(q, -0.9062283046451453, 2);
  sqcRYGate(q, 3.14158333833824, 3);
  sqcRZGate(q, 1.171942569418896, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.3422718253840458e-07, 0);
  sqcRZGate(q, 0.0204896884226002, 0);
  sqcRYGate(q, -1.5707943103223092, 1);
  sqcRZGate(q, 2.225768839577876, 1);
  sqcRYGate(q, 2.6788051062296164e-07, 2);
  sqcRZGate(q, -2.889556233190924, 2);
  sqcRYGate(q, -3.1415917552753, 3);
  sqcRZGate(q, -0.9210122238581597, 3);

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
