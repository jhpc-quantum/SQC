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

  sqcRYGate(q, 1.5707951150827066, 0);
  sqcRZGate(q, -3.039246514849026, 0);
  sqcRYGate(q, 1.570803948152931, 1);
  sqcRZGate(q, 0.3890153125902973, 1);
  sqcRYGate(q, -1.5707985505704842, 2);
  sqcRZGate(q, 2.098607707765258, 2);
  sqcRYGate(q, 0.3877816408591537, 3);
  sqcRZGate(q, 2.71290851070141, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.179981585058049, 0);
  sqcRZGate(q, -1.749981018704271, 0);
  sqcRYGate(q, -2.1851419096370406, 1);
  sqcRZGate(q, -3.0967666867716845, 1);
  sqcRYGate(q, 1.497356752930042, 2);
  sqcRZGate(q, 2.740968666644214, 2);
  sqcRYGate(q, 2.97201981361578, 3);
  sqcRZGate(q, 1.1764652187520168, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.595584300926384e-06, 0);
  sqcRZGate(q, 0.2378756729816667, 0);
  sqcRYGate(q, 3.1415788181420856, 1);
  sqcRZGate(q, -0.0573660463157637, 1);
  sqcRYGate(q, -3.1415923002943518, 2);
  sqcRZGate(q, 1.0449723906354933, 2);
  sqcRYGate(q, -1.9982619964336293e-05, 3);
  sqcRZGate(q, -1.6076723473999293, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.6546817163080412, 0);
  sqcRZGate(q, 2.5442866374677933, 0);
  sqcRYGate(q, -2.0904313656164453, 1);
  sqcRZGate(q, 2.9245491238978265, 1);
  sqcRYGate(q, 0.5324143009947, 2);
  sqcRZGate(q, 0.23647673424896087, 2);
  sqcRYGate(q, 1.683159784203399, 3);
  sqcRZGate(q, -0.07065852190174678, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.141587515489197, 0);
  sqcRZGate(q, 1.8125691703524756, 0);
  sqcRYGate(q, 0.3759132506748229, 1);
  sqcRZGate(q, 2.5299416084189414, 1);
  sqcRYGate(q, -3.141591846750984, 2);
  sqcRZGate(q, -0.39539687700563236, 2);
  sqcRYGate(q, 1.570789307456124, 3);
  sqcRZGate(q, -1.9450082062123704, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.141592054073086, 0);
  sqcRZGate(q, -3.1103897711657633, 0);
  sqcRYGate(q, 1.5670511102072737e-06, 1);
  sqcRZGate(q, 0.19161922972885176, 1);
  sqcRYGate(q, 8.007960031290031e-07, 2);
  sqcRZGate(q, -2.0383195147755027, 2);
  sqcRYGate(q, 3.0354626457141958, 3);
  sqcRZGate(q, 2.3492629377318517, 3);

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
