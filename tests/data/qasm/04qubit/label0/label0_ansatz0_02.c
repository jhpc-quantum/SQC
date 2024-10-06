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

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.09059783771832587, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.06447354702770104, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.06047645140839611, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.008466444326904337, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.4513356525733577, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 1.1168207537277912, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.2017278962716786, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.08137209187649827, 0);
  sqcRZGate(q, -0.03420683981441929, 1);
  sqcRZGate(q, 0.6019597543740707, 2);
  sqcRZGate(q, 0.4185062488184141, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.09920399637885927, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.41102493568518383, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.005031192385084389, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.02149260328265108, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.5897230929611808, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.07311913847255169, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.0003421682115186857, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.18133331290764385, 0);
  sqcRZGate(q, 1.3180663344939187, 1);
  sqcRZGate(q, 0.41021437105068886, 2);
  sqcRZGate(q, 0.4323678561128011, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.3961205975818958, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.7828001017429922, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.6362922349003983, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.5989526271679758, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.2327029322679488, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.7420105690770382, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.12303203498342172, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.990970324529258, 0);
  sqcRZGate(q, 0.807683588265362, 1);
  sqcRZGate(q, 1.2514830178733227, 2);
  sqcRZGate(q, 0.23497650181656043, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.0694892008824362, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.2257114599955155, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.6873773447692096, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.9793248347369122, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.965239850179505, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -1.15958595476065, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.8861503360180067, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.9188708571295533, 0);
  sqcRZGate(q, -0.00047971845946051045, 1);
  sqcRZGate(q, 1.0494226907953779, 2);
  sqcRZGate(q, 1.5714913570612266, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.3271317790120192, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.05774346296144178, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.4791691608701971, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.8585143577313703, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.5743625617363985, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.0009044585508701866, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -1.4252381484772274, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.5194910247604654, 0);
  sqcRZGate(q, -0.0008339923061650831, 1);
  sqcRZGate(q, -1.0232422617775265, 2);
  sqcRZGate(q, 0.6072618825651392, 3);

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
