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

  sqcRYGate(q, 2.826509416234463, 0);
  sqcRZGate(q, -0.24810487775361958, 0);
  sqcRYGate(q, -0.7977142904864936, 1);
  sqcRZGate(q, 1.7342970589573197, 1);
  sqcRYGate(q, -0.3143158170953777, 2);
  sqcRZGate(q, 2.0070475774330623, 2);
  sqcRYGate(q, 1.0975195930454225, 3);
  sqcRZGate(q, -2.6726239599385964, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.5705949694822374, 0);
  sqcRZGate(q, 1.0993459095961227, 0);
  sqcRYGate(q, 3.1055815368446886, 1);
  sqcRZGate(q, -1.6939958268815838, 1);
  sqcRYGate(q, 2.802900618652169, 2);
  sqcRZGate(q, -1.5451958367515581, 2);
  sqcRYGate(q, -2.7958660337106416, 3);
  sqcRZGate(q, -2.482558643491194, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 3.0000413881259655, 0);
  sqcRZGate(q, -2.1779570006178326, 0);
  sqcRYGate(q, -2.3136553477253172, 1);
  sqcRZGate(q, 1.2279165147122921, 1);
  sqcRYGate(q, -1.865011945971469, 2);
  sqcRZGate(q, -0.9385597748693568, 2);
  sqcRYGate(q, 0.42384248959435755, 3);
  sqcRZGate(q, 1.5953542939224576, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.2830175099998649, 0);
  sqcRZGate(q, 1.614834996569555, 0);
  sqcRYGate(q, -2.851292160397352, 1);
  sqcRZGate(q, 2.8116399628383655, 1);
  sqcRYGate(q, 2.8279515051679605, 2);
  sqcRZGate(q, 1.1361748744949565, 2);
  sqcRYGate(q, -1.5680225796618341, 3);
  sqcRZGate(q, 1.5069203470842516, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.08386860530336442, 0);
  sqcRZGate(q, 2.4103669214301475, 0);
  sqcRYGate(q, 1.2187498990647718, 1);
  sqcRZGate(q, -2.5441571712115647, 1);
  sqcRYGate(q, 0.3592412709521095, 2);
  sqcRZGate(q, 0.35786790296164916, 2);
  sqcRYGate(q, 1.6122021171484642, 3);
  sqcRZGate(q, -1.7145923434549273, 3);

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
