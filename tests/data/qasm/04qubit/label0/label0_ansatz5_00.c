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

  sqcRYGate(q, -0.9957582964950555, 0);
  sqcRYGate(q, -1.5235669551484081, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.892310036782754, 0);
  sqcRYGate(q, 1.5046088603853858, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9585810464542193, 2);
  sqcRYGate(q, 3.0204330736294676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.464419387972662, 2);
  sqcRYGate(q, 0.38687179145491424, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.879576535449647, 1);
  sqcRYGate(q, -1.6690974917274177, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.030736470970228247, 1);
  sqcRYGate(q, -3.0339043350108295, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.070525194342678, 0);
  sqcRYGate(q, 3.1406075832340945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4494586107103995, 0);
  sqcRYGate(q, 0.5268110420771207, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.020979118480726196, 2);
  sqcRYGate(q, -0.933600519513134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7228482890371097, 2);
  sqcRYGate(q, 0.03112387703178766, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.236501054808054, 1);
  sqcRYGate(q, 0.7256736061014343, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0951647969195673, 1);
  sqcRYGate(q, -0.6115982305336247, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.037684706412723, 0);
  sqcRYGate(q, -0.7729791527304946, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8003302248593381, 0);
  sqcRYGate(q, -1.0755680552920626, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1515827346286303, 2);
  sqcRYGate(q, 1.4705042538295823, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8253470203454656, 2);
  sqcRYGate(q, -0.006293704319867644, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.535508829322582, 1);
  sqcRYGate(q, -0.6061871061123696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.36557692839157807, 1);
  sqcRYGate(q, -1.9793490882632776, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.250313757571941, 0);
  sqcRYGate(q, -2.211633380828919, 1);
  sqcRYGate(q, 1.9482185194469697, 2);
  sqcRYGate(q, 2.718052406958102, 3);

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
