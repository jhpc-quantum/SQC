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

  sqcRYGate(q, -1.6155526267646394, 0);
  sqcRZGate(q, -2.0191920247162125, 0);
  sqcRYGate(q, 3.08710726449396, 1);
  sqcRZGate(q, 1.1063880842299323, 1);
  sqcRYGate(q, 0.13952531053579412, 2);
  sqcRZGate(q, 2.6230268265444785, 2);
  sqcRYGate(q, 2.135339607232396, 3);
  sqcRZGate(q, -2.087290308267169, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.181642147788346, 0);
  sqcRZGate(q, 0.016587515572469517, 0);
  sqcRYGate(q, -1.8230201474736107, 1);
  sqcRZGate(q, -2.582927092967041, 1);
  sqcRYGate(q, -1.7156826736470798, 2);
  sqcRZGate(q, 2.3051877663429097, 2);
  sqcRYGate(q, 0.30810931594410995, 3);
  sqcRZGate(q, 0.2092509432813221, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5096734327734876, 0);
  sqcRZGate(q, 0.4548103145978896, 0);
  sqcRYGate(q, 2.482552060995977, 1);
  sqcRZGate(q, -0.30762022618320645, 1);
  sqcRYGate(q, 0.3851526684551217, 2);
  sqcRZGate(q, 0.11853477374306341, 2);
  sqcRYGate(q, -1.591809473319442, 3);
  sqcRZGate(q, 0.5278651983986816, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.020249876232416142, 0);
  sqcRZGate(q, 2.163905591245924, 0);
  sqcRYGate(q, 0.8866404835345901, 1);
  sqcRZGate(q, 2.978817260179367, 1);
  sqcRYGate(q, -0.6030432413126363, 2);
  sqcRZGate(q, -1.9982144430026771, 2);
  sqcRYGate(q, 1.487630523209469, 3);
  sqcRZGate(q, 0.513021417067695, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.851964768445796, 0);
  sqcRZGate(q, 1.6771052016222956, 0);
  sqcRYGate(q, 2.7140828773967325, 1);
  sqcRZGate(q, 3.0560027624773327, 1);
  sqcRYGate(q, -1.010879101517477, 2);
  sqcRZGate(q, -2.344892194314351, 2);
  sqcRYGate(q, 0.7088243378423797, 3);
  sqcRZGate(q, 1.891374390592821, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7978827724138657, 0);
  sqcRZGate(q, -2.0504209608411954, 0);
  sqcRYGate(q, 1.630660981703883, 1);
  sqcRZGate(q, 2.7921421221806857, 1);
  sqcRYGate(q, 1.4150624120236268, 2);
  sqcRZGate(q, 2.9196649666029257, 2);
  sqcRYGate(q, 2.3440262584307887, 3);
  sqcRZGate(q, -0.21513095103411786, 3);

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
