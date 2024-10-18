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

  sqcRYGate(q, -2.0264403621499207, 0);
  sqcRZGate(q, -2.0220781889872845, 0);
  sqcRYGate(q, -0.13777335916538114, 1);
  sqcRZGate(q, 2.3890746967670666, 1);
  sqcRYGate(q, -2.6322664941715765, 2);
  sqcRZGate(q, -0.17616330672970726, 2);
  sqcRYGate(q, 0.7223139542712588, 3);
  sqcRZGate(q, 2.854519933885972, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.329086613585151, 0);
  sqcRZGate(q, -1.6020678469847165, 0);
  sqcRYGate(q, 1.7631150558471163, 1);
  sqcRZGate(q, 0.8657490637198134, 1);
  sqcRYGate(q, -2.5118801502050028, 2);
  sqcRZGate(q, 1.0820069337372793, 2);
  sqcRYGate(q, -1.0920160626578541, 3);
  sqcRZGate(q, 1.2291040155813238, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4165553792562067, 0);
  sqcRZGate(q, 1.5900609263179775, 0);
  sqcRYGate(q, -1.6539409626984378, 1);
  sqcRZGate(q, 0.9946145343537925, 1);
  sqcRYGate(q, 2.1958301816804635, 2);
  sqcRZGate(q, 1.7258335656290216, 2);
  sqcRYGate(q, -1.8290393808949548, 3);
  sqcRZGate(q, -2.613580562215648, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.049129482713773, 0);
  sqcRZGate(q, -0.7957795331031604, 0);
  sqcRYGate(q, -1.4989208259280922, 1);
  sqcRZGate(q, 2.8985388495669047, 1);
  sqcRYGate(q, 1.8743748127520234, 2);
  sqcRZGate(q, 0.9486463488112236, 2);
  sqcRYGate(q, -2.7058657606436904, 3);
  sqcRZGate(q, 2.4169123760086118, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.43634636767014556, 0);
  sqcRZGate(q, 2.701324171093608, 0);
  sqcRYGate(q, 2.725535519085193, 1);
  sqcRZGate(q, -0.3056504409801575, 1);
  sqcRYGate(q, 1.8989231297523805, 2);
  sqcRZGate(q, 0.12709168227913967, 2);
  sqcRYGate(q, -2.309985569076323, 3);
  sqcRZGate(q, -1.470655599369998, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9401825271885434, 0);
  sqcRZGate(q, 0.23506800342618728, 0);
  sqcRYGate(q, -0.9769759957026134, 1);
  sqcRZGate(q, -3.0465836096528456, 1);
  sqcRYGate(q, -0.37884294323354833, 2);
  sqcRZGate(q, 2.2337577096535863, 2);
  sqcRYGate(q, -0.23864879825127872, 3);
  sqcRZGate(q, 2.447851771599237, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.4890669726954537, 0);
  sqcRZGate(q, -1.0245352629878859, 0);
  sqcRYGate(q, -3.0543365861309253, 1);
  sqcRZGate(q, -1.6326135604423178, 1);
  sqcRYGate(q, 0.772416399140604, 2);
  sqcRZGate(q, 1.6689693439073823, 2);
  sqcRYGate(q, -2.482505032932234, 3);
  sqcRZGate(q, -2.2355986533275765, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9323371563412552, 0);
  sqcRZGate(q, -1.6861987981385034, 0);
  sqcRYGate(q, 1.7594501782506828, 1);
  sqcRZGate(q, -1.6394429158885941, 1);
  sqcRYGate(q, -1.047124932252448, 2);
  sqcRZGate(q, 1.3550221746843043, 2);
  sqcRYGate(q, 1.8928267268370937, 3);
  sqcRZGate(q, 2.4724581006558326, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5580456359009, 0);
  sqcRZGate(q, 2.8390236600573235, 0);
  sqcRYGate(q, 0.9566145983065236, 1);
  sqcRZGate(q, -0.7377442352879501, 1);
  sqcRYGate(q, -2.869063059225808, 2);
  sqcRZGate(q, -0.05385830138792193, 2);
  sqcRYGate(q, -0.5489140551992603, 3);
  sqcRZGate(q, 3.0302182301454934, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.581287402382852, 0);
  sqcRZGate(q, -3.0905753280245882, 0);
  sqcRYGate(q, 0.8078827385321459, 1);
  sqcRZGate(q, -2.9125580697725177, 1);
  sqcRYGate(q, -2.3909895263702245, 2);
  sqcRZGate(q, -3.0765125619223346, 2);
  sqcRYGate(q, 1.8532013906195093, 3);
  sqcRZGate(q, 2.267926514652119, 3);

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
