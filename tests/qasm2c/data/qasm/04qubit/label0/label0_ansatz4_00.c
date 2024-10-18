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

  sqcRYGate(q, 0.2547071101077183, 0);
  sqcRZGate(q, -0.7263428910016332, 0);
  sqcRYGate(q, -1.2393125097771973, 1);
  sqcRZGate(q, -0.17005009705090582, 1);
  sqcRYGate(q, -3.331978798470914e-05, 2);
  sqcRZGate(q, 0.4389017680738397, 2);
  sqcRYGate(q, -3.008511484192517, 3);
  sqcRZGate(q, 2.0936379004827237, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 5.353942295722304e-06, 0);
  sqcRZGate(q, -0.4539625631696013, 0);
  sqcRYGate(q, 1.4842009253349462, 1);
  sqcRZGate(q, -2.1560572965465665, 1);
  sqcRYGate(q, 3.1413990007355874, 2);
  sqcRZGate(q, -0.5318852663883257, 2);
  sqcRYGate(q, 0.20223173694298247, 3);
  sqcRZGate(q, -0.07221354606644681, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.1415614992226972, 0);
  sqcRZGate(q, 3.1009776359947083, 0);
  sqcRYGate(q, -0.4066683314324991, 1);
  sqcRZGate(q, 1.0763812341568346, 1);
  sqcRYGate(q, 1.5707965705752969, 2);
  sqcRZGate(q, -1.5712427463967977, 2);
  sqcRYGate(q, -3.107884037656063, 3);
  sqcRZGate(q, 0.39382478893864636, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5708017687633036, 0);
  sqcRZGate(q, -8.949098213584248e-06, 0);
  sqcRYGate(q, -1.5707381440413792, 1);
  sqcRZGate(q, 3.141558162912096, 1);
  sqcRYGate(q, -0.4290305300835717, 2);
  sqcRZGate(q, 1.5711763025567393, 2);
  sqcRYGate(q, 1.5708101632927218, 3);
  sqcRZGate(q, 3.1415797881506244, 3);

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
