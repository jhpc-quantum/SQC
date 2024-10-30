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

  sqcRYGate(q, -0.917187177064128, 0);
  sqcRZGate(q, 1.9396027997656278, 0);
  sqcRYGate(q, -0.10960340269849644, 1);
  sqcRZGate(q, -3.060158434592779, 1);
  sqcRYGate(q, 0.32983910735299826, 2);
  sqcRZGate(q, 2.7788160809312616, 2);
  sqcRYGate(q, 0.7464934725100791, 3);
  sqcRZGate(q, 1.3618176938769988, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.8800696557912497, 0);
  sqcRZGate(q, -0.7437180755299819, 0);
  sqcRYGate(q, -2.58230759112878, 1);
  sqcRZGate(q, -0.07376036429041923, 1);
  sqcRYGate(q, 2.9628633748446216, 2);
  sqcRZGate(q, -0.4934164850048787, 2);
  sqcRYGate(q, 2.150469583322793, 3);
  sqcRZGate(q, -2.558124905736441, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.5412770533018887, 0);
  sqcRZGate(q, -0.34752294825808155, 0);
  sqcRYGate(q, 1.2862458829090453, 1);
  sqcRZGate(q, -2.253736512848775, 1);
  sqcRYGate(q, -1.9966002376548548, 2);
  sqcRZGate(q, -2.0193580787136174, 2);
  sqcRYGate(q, -0.6025919388374362, 3);
  sqcRZGate(q, 2.5418399023046043, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.26762335995316366, 0);
  sqcRZGate(q, 0.67134638174763, 0);
  sqcRYGate(q, 0.6590801375001467, 1);
  sqcRZGate(q, -2.5436981620690853, 1);
  sqcRYGate(q, 2.8060774477678443, 2);
  sqcRZGate(q, 1.68323956812842, 2);
  sqcRYGate(q, -1.012023976644115, 3);
  sqcRZGate(q, 2.66449357723357, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.480345202679326, 0);
  sqcRZGate(q, 0.8826654661640116, 0);
  sqcRYGate(q, -0.198943490175858, 1);
  sqcRZGate(q, -1.260131573757297, 1);
  sqcRYGate(q, 0.9957151887315608, 2);
  sqcRZGate(q, -0.9331352842123716, 2);
  sqcRYGate(q, 0.8594296004585077, 3);
  sqcRZGate(q, 1.6654044511001578, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.9903161592600607, 0);
  sqcRZGate(q, -0.3975812252404615, 0);
  sqcRYGate(q, -2.3233797151764817, 1);
  sqcRZGate(q, -0.7897641272601197, 1);
  sqcRYGate(q, -0.8983668432245056, 2);
  sqcRZGate(q, 2.2717224904265176, 2);
  sqcRYGate(q, -2.8802343675234505, 3);
  sqcRZGate(q, -1.9240222751143985, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.5852138401257392, 0);
  sqcRZGate(q, 0.9796236341063882, 0);
  sqcRYGate(q, -1.049774556361772, 1);
  sqcRZGate(q, 2.5346821708978657, 1);
  sqcRYGate(q, -2.134452401371908, 2);
  sqcRZGate(q, 0.6072871186515837, 2);
  sqcRYGate(q, 0.7628052273892666, 3);
  sqcRZGate(q, 1.5984425528982242, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.7931122440128116, 0);
  sqcRZGate(q, 1.6028984051973703, 0);
  sqcRYGate(q, 1.6341350206137115, 1);
  sqcRZGate(q, 2.742986717415733, 1);
  sqcRYGate(q, -2.0580173194619436, 2);
  sqcRZGate(q, 0.7316846604006164, 2);
  sqcRYGate(q, 1.1163348529237416, 3);
  sqcRZGate(q, -1.8937795763419532, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.4183755223567536, 0);
  sqcRZGate(q, 2.363979685254532, 0);
  sqcRYGate(q, 0.8779903930160091, 1);
  sqcRZGate(q, 1.8383327163574366, 1);
  sqcRYGate(q, 0.9117748873170468, 2);
  sqcRZGate(q, -0.8858212478125829, 2);
  sqcRYGate(q, 0.503877321987545, 3);
  sqcRZGate(q, -1.0429187018877526, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.894523803199017, 0);
  sqcRZGate(q, 2.675283388051998, 0);
  sqcRYGate(q, 0.5191943021961708, 1);
  sqcRZGate(q, 1.1896241629593582, 1);
  sqcRYGate(q, -1.1966052172907338, 2);
  sqcRZGate(q, 0.6790050773983863, 2);
  sqcRYGate(q, -0.9267304356659389, 3);
  sqcRZGate(q, 1.7609048928343267, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.11526881267456185, 0);
  sqcRZGate(q, -2.7240840880684125, 0);
  sqcRYGate(q, -1.5489807254629717, 1);
  sqcRZGate(q, -2.340163000693437, 1);
  sqcRYGate(q, 1.60907642380314, 2);
  sqcRZGate(q, -1.3363470049460373, 2);
  sqcRYGate(q, 2.0684423799152625, 3);
  sqcRZGate(q, -2.4725800209844926, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.024269761371743425, 0);
  sqcRZGate(q, 1.1625140752292655, 0);
  sqcRYGate(q, -0.02321606026081939, 1);
  sqcRZGate(q, -1.1790989934767255, 1);
  sqcRYGate(q, -1.1579543939621728, 2);
  sqcRZGate(q, 1.8849252320929208, 2);
  sqcRYGate(q, -1.5317353401775495, 3);
  sqcRZGate(q, 3.064158424575209, 3);

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
