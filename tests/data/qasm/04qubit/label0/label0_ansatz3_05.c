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

  sqcRYGate(q, 2.866878428896545, 0);
  sqcRZGate(q, -2.6365800778742634, 0);
  sqcRYGate(q, 2.5426915545177486, 1);
  sqcRZGate(q, 0.4017198631757006, 1);
  sqcRYGate(q, 0.24819926065619935, 2);
  sqcRZGate(q, -0.21521589474319364, 2);
  sqcRYGate(q, -2.814840419826359, 3);
  sqcRZGate(q, 2.362609018672507, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.20972702467648013, 0);
  sqcRZGate(q, -2.392347101963076, 0);
  sqcRYGate(q, 0.10076845008899975, 1);
  sqcRZGate(q, 0.1087275088058437, 1);
  sqcRYGate(q, -0.5280708043923045, 2);
  sqcRZGate(q, -2.3690250287218717, 2);
  sqcRYGate(q, 2.554348793944025, 3);
  sqcRZGate(q, -0.6518574557189059, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.27178607111915, 0);
  sqcRZGate(q, 1.4720602393170932, 0);
  sqcRYGate(q, 1.6783338165174362, 1);
  sqcRZGate(q, 0.09592919937968908, 1);
  sqcRYGate(q, 1.6575206254936599, 2);
  sqcRZGate(q, -3.0645012207896465, 2);
  sqcRYGate(q, 0.4834159491373567, 3);
  sqcRZGate(q, -0.1931032374772608, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.7982043594076389, 0);
  sqcRZGate(q, 1.357381689112903, 0);
  sqcRYGate(q, 2.6994685925252084, 1);
  sqcRZGate(q, -0.677125983311285, 1);
  sqcRYGate(q, -2.1832750271248313, 2);
  sqcRZGate(q, 1.234963442075279, 2);
  sqcRYGate(q, -0.43798048676941104, 3);
  sqcRZGate(q, 0.28057839347609725, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.5298601183240172, 0);
  sqcRZGate(q, 0.9861391640155466, 0);
  sqcRYGate(q, 0.5716705066667999, 1);
  sqcRZGate(q, -2.3598839454790177, 1);
  sqcRYGate(q, -1.9998838210020071, 2);
  sqcRZGate(q, -2.0647438386655654, 2);
  sqcRYGate(q, 0.07152752407624609, 3);
  sqcRZGate(q, 2.341552623975764, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.791059823367726, 0);
  sqcRZGate(q, -3.0921450965810067, 0);
  sqcRYGate(q, 1.5182075153577452, 1);
  sqcRZGate(q, -2.0040146446388554, 1);
  sqcRYGate(q, 1.167077485122773, 2);
  sqcRZGate(q, -1.982578764279248, 2);
  sqcRYGate(q, -2.4710204230063266, 3);
  sqcRZGate(q, -0.9438525292541982, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.230395902306488, 0);
  sqcRZGate(q, 0.324143647158912, 0);
  sqcRYGate(q, 0.8132239397634988, 1);
  sqcRZGate(q, -2.9074502032489025, 1);
  sqcRYGate(q, 2.3625757620067542, 2);
  sqcRZGate(q, -1.2339883595287473, 2);
  sqcRYGate(q, 0.2020738238101734, 3);
  sqcRZGate(q, 1.5264274614639461, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.03066115480073428, 0);
  sqcRZGate(q, -1.2146505648451256, 0);
  sqcRYGate(q, -1.2258639345204738, 1);
  sqcRZGate(q, 1.074888586060771, 1);
  sqcRYGate(q, 2.3079860760149664, 2);
  sqcRZGate(q, 1.9958717455017603, 2);
  sqcRYGate(q, 2.740066669676941, 3);
  sqcRZGate(q, -2.7545250975777145, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.1632152727483653, 0);
  sqcRZGate(q, -0.08367250738787631, 0);
  sqcRYGate(q, -0.8542398406717931, 1);
  sqcRZGate(q, 0.51389879539445, 1);
  sqcRYGate(q, 0.3484799829765821, 2);
  sqcRZGate(q, 0.9407940969409915, 2);
  sqcRYGate(q, 2.1561200361821067, 3);
  sqcRZGate(q, -2.4362102763910594, 3);

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
