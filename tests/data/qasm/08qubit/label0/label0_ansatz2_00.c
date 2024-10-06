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

  sqcRYGate(q, 0.25356300347946625, 0);
  sqcRZGate(q, -3.1148616656495465, 0);
  sqcRYGate(q, 1.7989913459927294, 1);
  sqcRZGate(q, 3.136593414028291, 1);
  sqcRYGate(q, 2.889957319105866, 2);
  sqcRZGate(q, -0.01486028471260603, 2);
  sqcRYGate(q, -3.0893141382869342, 3);
  sqcRZGate(q, 2.7317516043343066, 3);
  sqcRYGate(q, 0.011358653798799521, 4);
  sqcRZGate(q, -1.618544458236312, 4);
  sqcRYGate(q, -0.0038136926878511446, 5);
  sqcRZGate(q, 1.6097589108392159, 5);
  sqcRYGate(q, 3.1410504960490795, 6);
  sqcRZGate(q, 1.9464769797124557, 6);
  sqcRYGate(q, 0.00019220971156374788, 7);
  sqcRZGate(q, 2.7163820562172853, 7);
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
  sqcRYGate(q, 0.05687456433106366, 0);
  sqcRZGate(q, -0.02205928403039798, 0);
  sqcRYGate(q, -1.8139917326908694, 1);
  sqcRZGate(q, 0.008273526984456934, 1);
  sqcRYGate(q, -0.05897846888927382, 2);
  sqcRZGate(q, -3.125863570153394, 2);
  sqcRYGate(q, -0.019573873123292517, 3);
  sqcRZGate(q, -2.740582971899285, 3);
  sqcRYGate(q, 0.0922366536996711, 4);
  sqcRZGate(q, 1.7161551060734155, 4);
  sqcRYGate(q, 0.3108779160561346, 5);
  sqcRZGate(q, 2.1895408463336583, 5);
  sqcRYGate(q, 0.9720841555861401, 6);
  sqcRZGate(q, 0.08164171222126004, 6);
  sqcRYGate(q, -0.2916348762804101, 7);
  sqcRZGate(q, 2.9701217032028695, 7);
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
  sqcRYGate(q, 0.04388127297028799, 0);
  sqcRZGate(q, 1.5665175205992448, 0);
  sqcRYGate(q, -3.050221773103788, 1);
  sqcRZGate(q, 1.5805695231531882, 1);
  sqcRYGate(q, 2.814652334540608, 2);
  sqcRZGate(q, 1.5724851409365286, 2);
  sqcRYGate(q, -0.6526778732900391, 3);
  sqcRZGate(q, 1.5761177243410438, 3);
  sqcRYGate(q, -0.47781493661960184, 4);
  sqcRZGate(q, -1.671892643857353, 4);
  sqcRYGate(q, -0.28760732301374653, 5);
  sqcRZGate(q, -2.2210477320177824, 5);
  sqcRYGate(q, -0.9402124646295895, 6);
  sqcRZGate(q, 3.0714781923751304, 6);
  sqcRYGate(q, -2.980097463070066, 7);
  sqcRZGate(q, -0.14618007802320845, 7);
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
  sqcRYGate(q, -1.5712393728984013, 0);
  sqcRZGate(q, 0.013906624864554294, 0);
  sqcRYGate(q, -1.5718577226299077, 1);
  sqcRZGate(q, -3.1128295814940663, 1);
  sqcRYGate(q, 1.5717877725167115, 2);
  sqcRZGate(q, -2.920114462324282, 2);
  sqcRYGate(q, 1.572952518255889, 3);
  sqcRZGate(q, -0.5576957553619639, 3);
  sqcRYGate(q, -1.5750383639336647, 4);
  sqcRZGate(q, 0.35904911110409987, 4);
  sqcRYGate(q, 1.5590004301568055, 5);
  sqcRZGate(q, 2.9915611037224057, 5);
  sqcRYGate(q, -1.547657203810537, 6);
  sqcRZGate(q, 3.1173370213828506, 6);
  sqcRYGate(q, 1.5793528573100675, 7);
  sqcRZGate(q, -0.000813636323134539, 7);

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
