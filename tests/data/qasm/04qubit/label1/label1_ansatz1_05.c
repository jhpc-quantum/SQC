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

  sqcRYGate(q, 0.14225147847046682, 0);
  sqcRZGate(q, -2.8917345971698727, 0);
  sqcRYGate(q, 0.6318313028044841, 1);
  sqcRZGate(q, 0.3905331990794239, 1);
  sqcRYGate(q, -0.09247771919706782, 2);
  sqcRZGate(q, -2.5903299175061725, 2);
  sqcRYGate(q, 2.4355764617709927, 3);
  sqcRZGate(q, -1.3779553820606436, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.49119109868320837, 0);
  sqcRZGate(q, -2.7724227243944912, 0);
  sqcRYGate(q, -2.8796211829437364, 1);
  sqcRZGate(q, 1.3906175129864498, 1);
  sqcRYGate(q, 3.001941990860445, 2);
  sqcRZGate(q, 0.9449201063896234, 2);
  sqcRYGate(q, 1.262316811972652, 3);
  sqcRZGate(q, -0.36500684634586716, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.053362156160437, 0);
  sqcRZGate(q, -0.5554606746021058, 0);
  sqcRYGate(q, -2.724046674286655, 1);
  sqcRZGate(q, 1.3861267649115838, 1);
  sqcRYGate(q, -1.8709159702435505, 2);
  sqcRZGate(q, -2.7281676165311777, 2);
  sqcRYGate(q, -0.41340537183826953, 3);
  sqcRZGate(q, -0.6599182953647393, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9791443825316954, 0);
  sqcRZGate(q, 0.5908481649972819, 0);
  sqcRYGate(q, -2.377692100402774, 1);
  sqcRZGate(q, 2.916812182331894, 1);
  sqcRYGate(q, 1.0584121478853843, 2);
  sqcRZGate(q, 2.776240697340315, 2);
  sqcRYGate(q, 1.7731155188443681, 3);
  sqcRZGate(q, -0.9960468601225116, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1840645287311116, 0);
  sqcRZGate(q, -1.8060049170268921, 0);
  sqcRYGate(q, 0.4883298988036508, 1);
  sqcRZGate(q, -0.33841803728148356, 1);
  sqcRYGate(q, -2.087143640280722, 2);
  sqcRZGate(q, 1.8124294871669775, 2);
  sqcRYGate(q, 2.98878941823925, 3);
  sqcRZGate(q, 1.301124353936034, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8195490406777033, 0);
  sqcRZGate(q, -2.4214971027891385, 0);
  sqcRYGate(q, 1.5813113310506155, 1);
  sqcRZGate(q, 2.552133058295106, 1);
  sqcRYGate(q, -2.6737933284871773, 2);
  sqcRZGate(q, 0.7793476804543609, 2);
  sqcRYGate(q, 1.5762233119320546, 3);
  sqcRZGate(q, -0.144473380798996, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.010845874564777, 0);
  sqcRZGate(q, 0.9780655392910969, 0);
  sqcRYGate(q, 3.129893470990796, 1);
  sqcRZGate(q, 0.9068114083629747, 1);
  sqcRYGate(q, 2.024729399752804, 2);
  sqcRZGate(q, 2.896485632622403, 2);
  sqcRYGate(q, 1.7745303096894656, 3);
  sqcRZGate(q, 2.983797863631184, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3116662991321655, 0);
  sqcRZGate(q, -0.5740676722784207, 0);
  sqcRYGate(q, -2.193355357209553, 1);
  sqcRZGate(q, 0.04063598814608849, 1);
  sqcRYGate(q, -1.9311201788816328, 2);
  sqcRZGate(q, -3.0228646150576144, 2);
  sqcRYGate(q, -3.056321845162376, 3);
  sqcRZGate(q, 0.24796996705607785, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3346165733418075, 0);
  sqcRZGate(q, 0.6533583011680113, 0);
  sqcRYGate(q, 1.0304102838474725, 1);
  sqcRZGate(q, 2.8453116591600014, 1);
  sqcRYGate(q, -1.9820015335543557, 2);
  sqcRZGate(q, -1.1667948032378215, 2);
  sqcRYGate(q, -2.7447860112035607, 3);
  sqcRZGate(q, -1.5611711768925431, 3);

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
