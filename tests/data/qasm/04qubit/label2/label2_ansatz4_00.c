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

  sqcRYGate(q, 3.1415904101593553, 0);
  sqcRZGate(q, -0.2297291718923189, 0);
  sqcRYGate(q, -3.079697108153884, 1);
  sqcRZGate(q, -0.877988423086169, 1);
  sqcRYGate(q, -2.2950479876671577, 2);
  sqcRZGate(q, -0.05136261583612639, 2);
  sqcRYGate(q, -3.14159172056854, 3);
  sqcRZGate(q, -2.76678048514546, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.570796388741835, 0);
  sqcRZGate(q, 1.5707779972248987, 0);
  sqcRYGate(q, -1.4958933112047246, 1);
  sqcRZGate(q, 1.6096084832917132, 1);
  sqcRYGate(q, 0.8150871890979099, 2);
  sqcRZGate(q, -0.6528997949583255, 2);
  sqcRYGate(q, -1.197483272152738e-07, 3);
  sqcRZGate(q, 0.7981087497921271, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5635960509841675, 0);
  sqcRZGate(q, -0.557349066722131, 0);
  sqcRYGate(q, 1.5708143079864787, 1);
  sqcRZGate(q, 2.8206944987652856, 1);
  sqcRYGate(q, -1.5707961903260819, 2);
  sqcRZGate(q, -2.108073053858539, 2);
  sqcRYGate(q, 1.570796291912906, 3);
  sqcRZGate(q, -9.255746782343975e-06, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -8.654734706681211e-08, 0);
  sqcRZGate(q, 1.451044828393646, 0);
  sqcRYGate(q, 3.141592505405556, 1);
  sqcRZGate(q, 2.143593995491715, 1);
  sqcRYGate(q, 3.1415818008432037, 2);
  sqcRZGate(q, 0.3563868309813453, 2);
  sqcRYGate(q, 1.5708011575253389, 3);
  sqcRZGate(q, 2.464459407715959, 3);

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
