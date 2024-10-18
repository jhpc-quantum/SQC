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

  sqcRYGate(q, 1.6258157116871486, 0);
  sqcRZGate(q, 0.30703803960897874, 0);
  sqcRYGate(q, -1.0971006438574242, 1);
  sqcRZGate(q, -0.9540620385209335, 1);
  sqcRYGate(q, 2.179087595578526, 2);
  sqcRZGate(q, 0.29475531854730175, 2);
  sqcRYGate(q, 2.4489783333940305, 3);
  sqcRZGate(q, 2.852808754270728, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8714490460688762, 0);
  sqcRZGate(q, 2.7296566176911523, 0);
  sqcRYGate(q, -1.5689345208663836, 1);
  sqcRZGate(q, -0.34321507892164327, 1);
  sqcRYGate(q, -1.7923502328677843, 2);
  sqcRZGate(q, -0.517596516143275, 2);
  sqcRYGate(q, -0.7098260242516217, 3);
  sqcRZGate(q, -2.2475233921709323, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.3323859759572279, 0);
  sqcRZGate(q, 1.277619677790038, 0);
  sqcRYGate(q, -0.7171859344727194, 1);
  sqcRZGate(q, 2.9836839772834756, 1);
  sqcRYGate(q, -0.8871411667046635, 2);
  sqcRZGate(q, -0.47416223130142265, 2);
  sqcRYGate(q, 1.1020268952611032, 3);
  sqcRZGate(q, -2.946085773884206, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.467957084508894, 0);
  sqcRZGate(q, -0.842514166699375, 0);
  sqcRYGate(q, -1.114239213833387, 1);
  sqcRZGate(q, -0.7764788703511448, 1);
  sqcRYGate(q, -0.6612302724827995, 2);
  sqcRZGate(q, -3.06363591589079, 2);
  sqcRYGate(q, -0.20332872584011685, 3);
  sqcRZGate(q, 3.0657907721046893, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.0754286722032687, 0);
  sqcRZGate(q, 2.0016270557188687, 0);
  sqcRYGate(q, -0.9471987342488519, 1);
  sqcRZGate(q, 2.3782882468051834, 1);
  sqcRYGate(q, -1.9304952354544456, 2);
  sqcRZGate(q, -0.5168996023518526, 2);
  sqcRYGate(q, 1.9519274539134543, 3);
  sqcRZGate(q, -2.870016528322076, 3);

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
