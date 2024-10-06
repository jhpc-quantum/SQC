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

  sqcRYGate(q, 0.4630017970042113, 0);
  sqcRZGate(q, 2.2964201299426104, 0);
  sqcRYGate(q, -0.5961832542969124, 1);
  sqcRZGate(q, 1.4215371725960084, 1);
  sqcRYGate(q, 1.295763862979523, 2);
  sqcRZGate(q, -2.97272699641788, 2);
  sqcRYGate(q, -0.6381943521570683, 3);
  sqcRZGate(q, -1.1935151032368083, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.2833918502977544, 0);
  sqcRZGate(q, -0.1284196741752141, 0);
  sqcRYGate(q, -2.5816935379851498, 1);
  sqcRZGate(q, -0.22547639367532302, 1);
  sqcRYGate(q, 0.9792477900090061, 2);
  sqcRZGate(q, -2.720735777573684, 2);
  sqcRYGate(q, 1.3116604304204307, 3);
  sqcRZGate(q, 2.777713044759891, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.914605758377545, 0);
  sqcRZGate(q, 0.9903845020831913, 0);
  sqcRYGate(q, -1.5156284627336571, 1);
  sqcRZGate(q, 2.37309122712151, 1);
  sqcRYGate(q, -2.252266936919799, 2);
  sqcRZGate(q, -2.230894891508834, 2);
  sqcRYGate(q, -2.483148877168536, 3);
  sqcRZGate(q, 0.5208137077270676, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.443147189255054, 0);
  sqcRZGate(q, 0.4172507851866553, 0);
  sqcRYGate(q, 2.0075388620679018, 1);
  sqcRZGate(q, -2.858556307834608, 1);
  sqcRYGate(q, -1.4351569832903062, 2);
  sqcRZGate(q, 2.3251270697400797, 2);
  sqcRYGate(q, 1.0292156318690466, 3);
  sqcRZGate(q, 2.7885015064247196, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.7105852925617917, 0);
  sqcRZGate(q, 2.595148393081551, 0);
  sqcRYGate(q, 1.8942843369809879, 1);
  sqcRZGate(q, 0.2528470701253047, 1);
  sqcRYGate(q, 0.8336296132379557, 2);
  sqcRZGate(q, 2.724900319246745, 2);
  sqcRYGate(q, 0.8934856932416926, 3);
  sqcRZGate(q, -2.432199597477985, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.411396794004301, 0);
  sqcRZGate(q, -2.5912435099422697, 0);
  sqcRYGate(q, -1.7400989257074126, 1);
  sqcRZGate(q, -1.0255077473293521, 1);
  sqcRYGate(q, 2.016549843727658, 2);
  sqcRZGate(q, -1.797226152117887, 2);
  sqcRYGate(q, -1.6439556812460938, 3);
  sqcRZGate(q, 0.965759594200662, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.6960248532255667, 0);
  sqcRZGate(q, 1.0642219626700902, 0);
  sqcRYGate(q, 2.5336093886407545, 1);
  sqcRZGate(q, -3.1270576035060658, 1);
  sqcRYGate(q, 1.148293051690417, 2);
  sqcRZGate(q, 0.3513652769970408, 2);
  sqcRYGate(q, -1.1077412736013434, 3);
  sqcRZGate(q, -1.7935890807945216, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.424694947918947, 0);
  sqcRZGate(q, 1.5235734634456217, 0);
  sqcRYGate(q, -2.926302840288355, 1);
  sqcRZGate(q, -0.6302122615637423, 1);
  sqcRYGate(q, 3.0144145585385003, 2);
  sqcRZGate(q, 2.2475853148124947, 2);
  sqcRYGate(q, -0.7306854682570619, 3);
  sqcRZGate(q, -0.18596142377432742, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.9769569641751072, 0);
  sqcRZGate(q, -2.807386680869871, 0);
  sqcRYGate(q, 2.585841896315983, 1);
  sqcRZGate(q, -0.780943322379175, 1);
  sqcRYGate(q, -0.2888953652828259, 2);
  sqcRZGate(q, -1.9979146558836096, 2);
  sqcRYGate(q, -2.1158488811338874, 3);
  sqcRZGate(q, -0.7513929519242408, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.9218324994193914, 0);
  sqcRZGate(q, 0.9566345950594375, 0);
  sqcRYGate(q, -1.1740106495034262, 1);
  sqcRZGate(q, 0.31816964878495035, 1);
  sqcRYGate(q, -0.9014489691752373, 2);
  sqcRZGate(q, 0.8585436231912552, 2);
  sqcRYGate(q, -2.2606606694191287, 3);
  sqcRZGate(q, -2.318139949053136, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.8651831702664898, 0);
  sqcRZGate(q, -2.83300265102342, 0);
  sqcRYGate(q, 1.4086372937298368, 1);
  sqcRZGate(q, -1.8507132168203893, 1);
  sqcRYGate(q, -2.948476688566914, 2);
  sqcRZGate(q, -2.1711620472153803, 2);
  sqcRYGate(q, 1.918192814268284, 3);
  sqcRZGate(q, -0.3845415877537883, 3);

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
