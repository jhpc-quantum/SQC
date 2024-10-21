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

  sqcRYGate(q, 2.7846134966998517, 0);
  sqcRZGate(q, 3.0729959941913894, 0);
  sqcRYGate(q, -2.2392753931701614, 1);
  sqcRZGate(q, -0.9036669041221747, 1);
  sqcRYGate(q, -0.20717331311308662, 2);
  sqcRZGate(q, 1.2111397303228308, 2);
  sqcRYGate(q, 1.266607676448933, 3);
  sqcRZGate(q, -1.5393494703607975, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6168868047782567, 0);
  sqcRZGate(q, -0.45828345281565674, 0);
  sqcRYGate(q, 2.717281851681207, 1);
  sqcRZGate(q, -0.6318281470221088, 1);
  sqcRYGate(q, -1.3739789165454832, 2);
  sqcRZGate(q, 1.1093203010164239, 2);
  sqcRYGate(q, 0.23022557634927934, 3);
  sqcRZGate(q, -1.1098511620438218, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5315039603207525, 0);
  sqcRZGate(q, -0.041265427478988315, 0);
  sqcRYGate(q, 0.893757314282511, 1);
  sqcRZGate(q, -2.3488993050166256, 1);
  sqcRYGate(q, 0.700808186384501, 2);
  sqcRZGate(q, -2.0489512949738558, 2);
  sqcRYGate(q, 1.1111150849057556, 3);
  sqcRZGate(q, 3.0487063578920903, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5310179510208057, 0);
  sqcRZGate(q, -2.05308663230773, 0);
  sqcRYGate(q, 1.7873760500859208, 1);
  sqcRZGate(q, -0.7066005369013482, 1);
  sqcRYGate(q, -1.0508818337067316, 2);
  sqcRZGate(q, 3.1141302054540865, 2);
  sqcRYGate(q, 1.4280651097881352, 3);
  sqcRZGate(q, -0.9408007658169368, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.865987344772028, 0);
  sqcRZGate(q, 2.7998727749499093, 0);
  sqcRYGate(q, -2.1184758655457565, 1);
  sqcRZGate(q, 0.7800479544535464, 1);
  sqcRYGate(q, 0.7202211178707092, 2);
  sqcRZGate(q, 2.442174135122737, 2);
  sqcRYGate(q, -1.9682546359983746, 3);
  sqcRZGate(q, -1.0610728704229053, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2070872372532913, 0);
  sqcRZGate(q, -1.3973153921236348, 0);
  sqcRYGate(q, 0.9933871008697137, 1);
  sqcRZGate(q, -1.901008278804114, 1);
  sqcRYGate(q, 2.8191653386672773, 2);
  sqcRZGate(q, 2.029399588751621, 2);
  sqcRYGate(q, 2.536038842484558, 3);
  sqcRZGate(q, 2.724654142837404, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.13436622609758508, 0);
  sqcRZGate(q, 2.8695943112523086, 0);
  sqcRYGate(q, -0.2956903216866653, 1);
  sqcRZGate(q, 0.49439672671447016, 1);
  sqcRYGate(q, -2.886910226223693, 2);
  sqcRZGate(q, -1.5863501435963974, 2);
  sqcRYGate(q, -1.33654820945726, 3);
  sqcRZGate(q, 2.4004472667840306, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5079895866574509, 0);
  sqcRZGate(q, 2.102353802916433, 0);
  sqcRYGate(q, -0.21032296347204849, 1);
  sqcRZGate(q, 0.8571464806587246, 1);
  sqcRYGate(q, 0.6397405659531915, 2);
  sqcRZGate(q, -2.2130458642062876, 2);
  sqcRYGate(q, -1.1076359834184286, 3);
  sqcRZGate(q, 2.141658917990168, 3);

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
