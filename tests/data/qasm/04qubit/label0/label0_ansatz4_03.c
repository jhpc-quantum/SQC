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

  sqcRYGate(q, 0.05269765863734577, 0);
  sqcRZGate(q, -2.9588853923140976, 0);
  sqcRYGate(q, -0.3267784865538843, 1);
  sqcRZGate(q, 2.3156705207139163, 1);
  sqcRYGate(q, 1.0202606156475713, 2);
  sqcRZGate(q, -2.1919197439216216, 2);
  sqcRYGate(q, -0.13077566386573916, 3);
  sqcRZGate(q, 1.5863369680580366, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7033861997455055, 0);
  sqcRZGate(q, -1.1841404016835861, 0);
  sqcRYGate(q, 1.9538401395528107, 1);
  sqcRZGate(q, -2.9384558794829543, 1);
  sqcRYGate(q, 1.9060192863157375, 2);
  sqcRZGate(q, 2.343579407919856, 2);
  sqcRYGate(q, 2.970140635410672, 3);
  sqcRZGate(q, 2.771458483718133, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0082770406272834, 0);
  sqcRZGate(q, -0.7710284079137874, 0);
  sqcRYGate(q, -1.101626851507266, 1);
  sqcRZGate(q, -2.044015169142103, 1);
  sqcRYGate(q, -0.07836568238596597, 2);
  sqcRZGate(q, -2.8854491186110023, 2);
  sqcRYGate(q, -0.04565914830017501, 3);
  sqcRZGate(q, -2.277750805924158, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7355512245864757, 0);
  sqcRZGate(q, -0.3199400859915614, 0);
  sqcRYGate(q, 1.4446623510205896, 1);
  sqcRZGate(q, 1.0401627539614706, 1);
  sqcRYGate(q, -1.1377737281067404, 2);
  sqcRZGate(q, 1.391254736105691, 2);
  sqcRYGate(q, -0.09276127883262308, 3);
  sqcRZGate(q, 3.035315689016422, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3522978040052394, 0);
  sqcRZGate(q, 2.340945801099311, 0);
  sqcRYGate(q, 1.6779948611752973, 1);
  sqcRZGate(q, -0.1025063044677097, 1);
  sqcRYGate(q, -2.610235030676452, 2);
  sqcRZGate(q, -1.1211139911847856, 2);
  sqcRYGate(q, -0.09783904569093725, 3);
  sqcRZGate(q, -2.6886281062350603, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4425946116355126, 0);
  sqcRZGate(q, -0.5009706001033507, 0);
  sqcRYGate(q, -2.0060696325646603, 1);
  sqcRZGate(q, 2.9465379110895817, 1);
  sqcRYGate(q, -2.8930488693659164, 2);
  sqcRZGate(q, 1.4208919428138598, 2);
  sqcRYGate(q, 0.13364112893899982, 3);
  sqcRZGate(q, -0.29208913087952126, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0279554660452996, 0);
  sqcRZGate(q, 0.6798856030163751, 0);
  sqcRYGate(q, -1.5681265126397, 1);
  sqcRZGate(q, 0.06404409888536274, 1);
  sqcRYGate(q, 0.14328964790151807, 2);
  sqcRZGate(q, 3.0173758139716558, 2);
  sqcRYGate(q, -1.5564867455636922, 3);
  sqcRZGate(q, 3.134944456190404, 3);

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
