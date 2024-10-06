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

  sqcRYGate(q, -0.9736616161997622, 0);
  sqcRZGate(q, 3.1415925882161937, 0);
  sqcRYGate(q, 1.9267230203229284, 1);
  sqcRZGate(q, 3.1415922793702444, 1);
  sqcRYGate(q, 1.5707962237013564, 2);
  sqcRZGate(q, -2.0034889990801146, 2);
  sqcRYGate(q, 1.570796458695316, 3);
  sqcRZGate(q, 1.589475787086932, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.3582437475977147, 0);
  sqcRZGate(q, -3.610438891330319e-07, 0);
  sqcRYGate(q, 1.5707964188948278, 1);
  sqcRZGate(q, 0.024082154469255546, 1);
  sqcRYGate(q, -3.078680013288283, 2);
  sqcRZGate(q, 1.3509974891876269, 2);
  sqcRYGate(q, 2.1243230508520083, 3);
  sqcRZGate(q, -1.6038457168704345, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.570796146703958, 0);
  sqcRZGate(q, -2.370315732313417, 0);
  sqcRYGate(q, -0.8670467546804783, 1);
  sqcRZGate(q, 0.3746833317991607, 1);
  sqcRYGate(q, -1.2266478323643053, 2);
  sqcRZGate(q, -0.30276843760098915, 2);
  sqcRYGate(q, -3.1201756799639495e-07, 3);
  sqcRZGate(q, -2.6537482472599643, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.131177250834318, 0);
  sqcRZGate(q, 1.005076763069579, 0);
  sqcRYGate(q, -1.156534539858446, 1);
  sqcRZGate(q, 0.8556531934028007, 1);
  sqcRYGate(q, -0.8297818674205031, 2);
  sqcRZGate(q, -1.0005677309873215, 2);
  sqcRYGate(q, 2.2766072822707284, 3);
  sqcRZGate(q, 2.7598301271063126, 3);

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
