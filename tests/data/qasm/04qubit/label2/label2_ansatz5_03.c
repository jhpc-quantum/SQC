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

  sqcRYGate(q, -3.0809257641915964, 0);
  sqcRYGate(q, 2.7043707661821306, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.642817796911497, 0);
  sqcRYGate(q, -1.031856789977488, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8921935920458877, 2);
  sqcRYGate(q, 0.45502715742454924, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.415346222684505, 2);
  sqcRYGate(q, 1.8998724504801487, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.871419741048088, 1);
  sqcRYGate(q, -1.6304285500681854, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4072417867732367, 1);
  sqcRYGate(q, 0.30276379678364845, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.015695198250332, 0);
  sqcRYGate(q, 1.701825825006335, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.675682589544774, 0);
  sqcRYGate(q, -2.4349384043187148, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.715501019931935, 2);
  sqcRYGate(q, 1.458348213650413, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3193567836200284, 2);
  sqcRYGate(q, 0.6622649815507344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.331316827942883, 1);
  sqcRYGate(q, 0.5305245893761699, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0344605362258423, 1);
  sqcRYGate(q, 1.0267019008708154, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6906954437774564, 0);
  sqcRYGate(q, 1.3096362226065308, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.539313177116485, 0);
  sqcRYGate(q, 2.6046630272851172, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8632315682344575, 2);
  sqcRYGate(q, -1.1239076043922405, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4717963227074633, 2);
  sqcRYGate(q, -1.071381915547813, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.978499039444954, 1);
  sqcRYGate(q, -2.2171707504190055, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.45065159012231076, 1);
  sqcRYGate(q, 0.8629091224394163, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7323859447658996, 0);
  sqcRYGate(q, -1.4871017785330616, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0744304560530513, 0);
  sqcRYGate(q, -0.6725968847769502, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.30118494192024414, 2);
  sqcRYGate(q, -0.7080568627377124, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.721613323723952, 2);
  sqcRYGate(q, -2.2384642285393577, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7635108210691304, 1);
  sqcRYGate(q, 3.1190475594018108, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5258304827038573, 1);
  sqcRYGate(q, 2.557364785492837, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9025647404561139, 0);
  sqcRYGate(q, -0.7878407019629388, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.678595452775633, 0);
  sqcRYGate(q, -0.969468563588476, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7619631222417975, 2);
  sqcRYGate(q, -2.0271849208908552, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.90993168958289, 2);
  sqcRYGate(q, -1.4959763701723754, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.98730842231386, 1);
  sqcRYGate(q, 2.2423622556256007, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.009391022734574, 1);
  sqcRYGate(q, 1.5020452428431474, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.885944117952186, 0);
  sqcRYGate(q, -1.1909283940619995, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4699824351605768, 0);
  sqcRYGate(q, 1.73630381561693, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.634432087627448, 2);
  sqcRYGate(q, 2.082188796736261, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3050447782520103, 2);
  sqcRYGate(q, 0.0696498297758055, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.356002546009647, 1);
  sqcRYGate(q, -2.5419098644362284, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3065323813757725, 1);
  sqcRYGate(q, -2.3822491573009335, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1756543855540738, 0);
  sqcRYGate(q, -1.1598132664576228, 1);
  sqcRYGate(q, -1.4635425727283784, 2);
  sqcRYGate(q, -0.010825899208716308, 3);

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
