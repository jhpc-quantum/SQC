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

  sqcRYGate(q, 1.2485640617119333, 0);
  sqcRZGate(q, 1.7408786570160952, 0);
  sqcRYGate(q, -1.5065980915860118, 1);
  sqcRZGate(q, 0.12413213635837028, 1);
  sqcRYGate(q, 3.123348520909314, 2);
  sqcRZGate(q, 0.2551676023050158, 2);
  sqcRYGate(q, 1.597069161639447, 3);
  sqcRZGate(q, -2.232763717651924, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.389839211567167, 0);
  sqcRZGate(q, -2.0107321230438093, 0);
  sqcRYGate(q, -0.9541743543855377, 1);
  sqcRZGate(q, -1.7645745095891445, 1);
  sqcRYGate(q, -2.596471320622318, 2);
  sqcRZGate(q, -2.0863951596938426, 2);
  sqcRYGate(q, -0.10015825398939582, 3);
  sqcRZGate(q, -1.637545820780807, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9252276578403142, 0);
  sqcRZGate(q, 0.7229634191622302, 0);
  sqcRYGate(q, -1.402306707195889, 1);
  sqcRZGate(q, -1.6128383483724864, 1);
  sqcRYGate(q, -2.0494045928197875, 2);
  sqcRZGate(q, -0.3569117575206132, 2);
  sqcRYGate(q, 0.16183861943924863, 3);
  sqcRZGate(q, -2.394754516292054, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7252022542480896, 0);
  sqcRZGate(q, -1.34320305248847, 0);
  sqcRYGate(q, -0.12772450526259238, 1);
  sqcRZGate(q, -1.4926284470198559, 1);
  sqcRYGate(q, -1.8899897031641935, 2);
  sqcRZGate(q, -2.7459659529182128, 2);
  sqcRYGate(q, -0.4148292238518571, 3);
  sqcRZGate(q, -2.88665381503094, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7170282182427741, 0);
  sqcRZGate(q, 2.3664770667765245, 0);
  sqcRYGate(q, 2.9354741077544597, 1);
  sqcRZGate(q, -2.446048718616447, 1);
  sqcRYGate(q, -1.9259488605916837, 2);
  sqcRZGate(q, -0.9340811034882633, 2);
  sqcRYGate(q, 0.004019712072480762, 3);
  sqcRZGate(q, 2.0066519271759686, 3);

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
