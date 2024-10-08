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

  sqcRYGate(q, 1.5337886642092722, 0);
  sqcRZGate(q, -1.5667927465216167, 0);
  sqcRYGate(q, 1.5707968462354547, 1);
  sqcRZGate(q, 1.570795273313835, 1);
  sqcRYGate(q, 1.5707961944100133, 2);
  sqcRZGate(q, -0.21533863269755926, 2);
  sqcRYGate(q, -2.7506423119228853, 3);
  sqcRZGate(q, 1.6604594070237224, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.5691463725190076, 0);
  sqcRZGate(q, -1.9609232949411626, 0);
  sqcRYGate(q, 0.3947401617799926, 1);
  sqcRZGate(q, -1.7759098587396518, 1);
  sqcRYGate(q, -1.7727706813630562e-06, 2);
  sqcRZGate(q, 2.648955287494694, 2);
  sqcRYGate(q, -2.749522084475126, 3);
  sqcRZGate(q, -3.0337014711455565, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.6107937165828243, 0);
  sqcRZGate(q, 1.2040351608276376, 0);
  sqcRYGate(q, -1.5333092374990835, 1);
  sqcRZGate(q, -1.749027142566041, 1);
  sqcRYGate(q, 0.2759146601868952, 2);
  sqcRZGate(q, 0.7270788419341195, 2);
  sqcRYGate(q, 3.1014711986701093, 3);
  sqcRZGate(q, 1.9513147903135106, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 3.1415921030600593, 0);
  sqcRZGate(q, -2.0877319294227332, 0);
  sqcRYGate(q, 0.20846183143430944, 1);
  sqcRZGate(q, -1.624027008341825, 1);
  sqcRYGate(q, 1.3623334355817418, 2);
  sqcRZGate(q, 1.51755965915794, 2);
  sqcRYGate(q, -8.876993105033648e-07, 3);
  sqcRZGate(q, -1.8967459812141039, 3);

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
