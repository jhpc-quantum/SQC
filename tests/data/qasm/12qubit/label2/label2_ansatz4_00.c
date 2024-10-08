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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -1.5690201945955378e-06, 0);
  sqcRZGate(q, -0.519348116921706, 0);
  sqcRYGate(q, 1.5237909314710139, 1);
  sqcRZGate(q, 1.5525286285099549, 1);
  sqcRYGate(q, -3.141423185753454, 2);
  sqcRZGate(q, 0.4882534764115259, 2);
  sqcRYGate(q, -1.3406679322258697e-08, 3);
  sqcRZGate(q, -0.05423895333017814, 3);
  sqcRYGate(q, -1.640734552618616, 4);
  sqcRZGate(q, 0.1839282182109389, 4);
  sqcRYGate(q, 1.5714917218905975, 5);
  sqcRZGate(q, -2.9569107379914517, 5);
  sqcRYGate(q, 2.3544939776520835e-05, 6);
  sqcRZGate(q, -0.3600402072350777, 6);
  sqcRYGate(q, 7.363438655825033e-08, 7);
  sqcRZGate(q, 2.353242435506361, 7);
  sqcRYGate(q, 1.0629666746808653e-07, 8);
  sqcRZGate(q, 2.580939300141619, 8);
  sqcRYGate(q, 0.0001521175702615418, 9);
  sqcRZGate(q, -0.17176896637672115, 9);
  sqcRYGate(q, -1.5711773085685925, 10);
  sqcRZGate(q, -0.19407223189904385, 10);
  sqcRYGate(q, -1.5702709456226485, 11);
  sqcRZGate(q, 2.9779155645850466, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.570827855001227, 0);
  sqcRZGate(q, 2.5702817303005703, 0);
  sqcRYGate(q, -2.94674794095406, 1);
  sqcRZGate(q, -1.579164648826166, 1);
  sqcRYGate(q, 0.0494548570511828, 2);
  sqcRZGate(q, -3.1411353612078146, 2);
  sqcRYGate(q, -3.14159249757907, 3);
  sqcRZGate(q, -2.2305858319021796, 3);
  sqcRYGate(q, -0.7943272210706648, 4);
  sqcRZGate(q, -1.5682309700357917, 4);
  sqcRYGate(q, 2.349709340173931, 5);
  sqcRZGate(q, -1.308322644008249, 5);
  sqcRYGate(q, 1.6200982543686313, 6);
  sqcRZGate(q, -1.5707435969112584, 6);
  sqcRYGate(q, 1.5708094367864647, 7);
  sqcRZGate(q, -1.5707857379109882, 7);
  sqcRYGate(q, -1.7974080384064448e-06, 8);
  sqcRZGate(q, 1.5510620270680002, 8);
  sqcRYGate(q, 3.091923581167203, 9);
  sqcRZGate(q, 1.5708783423392685, 9);
  sqcRYGate(q, 0.8822968877492766, 10);
  sqcRZGate(q, -0.42846840228048033, 10);
  sqcRYGate(q, 2.45613011713871, 11);
  sqcRZGate(q, 2.445248071767556, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.0008238902666803938, 0);
  sqcRZGate(q, 2.8791020488490653, 0);
  sqcRYGate(q, -1.57010332641691, 1);
  sqcRZGate(q, 2.500442243031485, 1);
  sqcRYGate(q, -1.5707958915768512, 2);
  sqcRZGate(q, -1.6040464249153352, 2);
  sqcRYGate(q, -1.5707963372395626, 3);
  sqcRZGate(q, 3.1415779646218525, 3);
  sqcRYGate(q, -1.5708041004840032, 4);
  sqcRZGate(q, 2.2510236891782407, 4);
  sqcRYGate(q, -1.5707885565033033, 5);
  sqcRZGate(q, -1.9076746588118585, 5);
  sqcRYGate(q, 1.5708070465327362, 6);
  sqcRZGate(q, -1.0203079525123604, 6);
  sqcRYGate(q, 1.5708492268890542, 7);
  sqcRZGate(q, -0.6483598092948932, 7);
  sqcRYGate(q, -1.5707963313468278, 8);
  sqcRZGate(q, 3.141566778475168, 8);
  sqcRYGate(q, 1.5707963017246769, 9);
  sqcRZGate(q, 2.6226906127877996, 9);
  sqcRYGate(q, -3.1225873395795336, 10);
  sqcRZGate(q, 0.668275305210389, 10);
  sqcRYGate(q, 3.123108339956916, 11);
  sqcRZGate(q, 0.05571270839175657, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.080548234279945e-06, 0);
  sqcRZGate(q, 0.3357822839618609, 0);
  sqcRYGate(q, -3.124826840629614e-06, 1);
  sqcRZGate(q, 0.1431302538523397, 1);
  sqcRYGate(q, 1.4682402573559735e-05, 2);
  sqcRZGate(q, -2.035552841733281, 2);
  sqcRYGate(q, 1.5707952721168357, 3);
  sqcRZGate(q, 2.6435860272168474, 3);
  sqcRYGate(q, -1.6498970731859686e-06, 4);
  sqcRZGate(q, 0.39256543784237685, 4);
  sqcRYGate(q, 3.141591147266987, 5);
  sqcRZGate(q, 0.7359145232020845, 5);
  sqcRYGate(q, 3.1415916245216646, 6);
  sqcRZGate(q, -0.3453502792305313, 6);
  sqcRYGate(q, -1.039820868903539e-06, 7);
  sqcRZGate(q, -0.2474783175753306, 7);
  sqcRYGate(q, -1.5708415654299124, 8);
  sqcRZGate(q, -2.4663561408433163, 8);
  sqcRYGate(q, 5.248049118057809e-05, 9);
  sqcRZGate(q, 1.194138438534762, 9);
  sqcRYGate(q, 3.141592296099428, 10);
  sqcRZGate(q, 3.0792292610617342, 10);
  sqcRYGate(q, -3.1415923075816754, 11);
  sqcRZGate(q, -0.6560574302409252, 11);

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
