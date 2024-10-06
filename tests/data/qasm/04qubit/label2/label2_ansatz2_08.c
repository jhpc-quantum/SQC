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

  sqcRYGate(q, 2.9865369155526906, 0);
  sqcRZGate(q, -1.7338945110270743, 0);
  sqcRYGate(q, -0.24424673427680454, 1);
  sqcRZGate(q, -2.8782667546955616, 1);
  sqcRYGate(q, -2.223283811346252, 2);
  sqcRZGate(q, 2.2851159515686432, 2);
  sqcRYGate(q, -1.83377775475146, 3);
  sqcRZGate(q, 1.1954584036757632, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.6225703789203277, 0);
  sqcRZGate(q, 2.5379794424800797, 0);
  sqcRYGate(q, -0.7372256736899993, 1);
  sqcRZGate(q, 2.5609960194766757, 1);
  sqcRYGate(q, 0.8180930428765185, 2);
  sqcRZGate(q, -1.491532326533217, 2);
  sqcRYGate(q, -1.3019420930858896, 3);
  sqcRZGate(q, -0.6987124819697703, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.38989758627545407, 0);
  sqcRZGate(q, 2.3129703177374203, 0);
  sqcRYGate(q, -1.3701548564811352, 1);
  sqcRZGate(q, -3.0310905106137387, 1);
  sqcRYGate(q, 0.6747048994293916, 2);
  sqcRZGate(q, -0.470868885207067, 2);
  sqcRYGate(q, 1.287564518709678, 3);
  sqcRZGate(q, 1.4489726701139962, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.167374502170267, 0);
  sqcRZGate(q, 1.9046875207829936, 0);
  sqcRYGate(q, 1.5420524871335841, 1);
  sqcRZGate(q, 0.12376640065900649, 1);
  sqcRYGate(q, 2.207575798364581, 2);
  sqcRZGate(q, 2.546079741600573, 2);
  sqcRYGate(q, -2.8873678956831523, 3);
  sqcRZGate(q, 1.8794901482423436, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.6665503487313955, 0);
  sqcRZGate(q, 1.6550175131867682, 0);
  sqcRYGate(q, 1.3573253712516893, 1);
  sqcRZGate(q, 0.30044432727929316, 1);
  sqcRYGate(q, -0.1548602586394763, 2);
  sqcRZGate(q, 1.5123956634905598, 2);
  sqcRYGate(q, -2.6697266323083597, 3);
  sqcRZGate(q, 3.019284439315144, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.4496480578479862, 0);
  sqcRZGate(q, 2.772319811405354, 0);
  sqcRYGate(q, 0.05607601400331123, 1);
  sqcRZGate(q, 1.8080261450454045, 1);
  sqcRYGate(q, 2.6781680025838517, 2);
  sqcRZGate(q, -2.352761726004243, 2);
  sqcRYGate(q, 2.725125829684489, 3);
  sqcRZGate(q, -2.1747952855076544, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.5587995364613088, 0);
  sqcRZGate(q, 1.875001301489816, 0);
  sqcRYGate(q, 0.10820560960609171, 1);
  sqcRZGate(q, 2.8303325753601394, 1);
  sqcRYGate(q, -0.7812112061745422, 2);
  sqcRZGate(q, 0.71835703152, 2);
  sqcRYGate(q, -0.520241439624924, 3);
  sqcRZGate(q, -0.16751687733011436, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.635196730341399, 0);
  sqcRZGate(q, 0.2662225472026343, 0);
  sqcRYGate(q, -0.09062844428216543, 1);
  sqcRZGate(q, -2.0192411702550466, 1);
  sqcRYGate(q, 3.1176104073551563, 2);
  sqcRZGate(q, 1.2565486300509123, 2);
  sqcRYGate(q, -0.9197730528053506, 3);
  sqcRZGate(q, -0.8861616843855159, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.7429415767892896, 0);
  sqcRZGate(q, -2.284286998884301, 0);
  sqcRYGate(q, -1.2084605139207625, 1);
  sqcRZGate(q, 0.5310418920185853, 1);
  sqcRYGate(q, 1.2692792243986473, 2);
  sqcRZGate(q, 1.681673005327169, 2);
  sqcRYGate(q, -0.5721591217688893, 3);
  sqcRZGate(q, -0.9907882581600999, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.0989445152689763, 0);
  sqcRZGate(q, -1.8160596814812462, 0);
  sqcRYGate(q, -1.225452461328592, 1);
  sqcRZGate(q, -0.2940235316345467, 1);
  sqcRYGate(q, 0.8106197918608763, 2);
  sqcRZGate(q, 2.075490309546675, 2);
  sqcRYGate(q, -1.2353970464461348, 3);
  sqcRZGate(q, -1.9111812518244629, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.2474344449127548, 0);
  sqcRZGate(q, 0.8772532349573011, 0);
  sqcRYGate(q, 0.7568534184415958, 1);
  sqcRZGate(q, -3.0831386146402786, 1);
  sqcRYGate(q, -2.4248812114589082, 2);
  sqcRZGate(q, 2.054889143365512, 2);
  sqcRYGate(q, -0.49850687527314164, 3);
  sqcRZGate(q, 2.209200234996489, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.747824845618772, 0);
  sqcRZGate(q, 2.1120087170698723, 0);
  sqcRYGate(q, 1.4445811004842757, 1);
  sqcRZGate(q, -0.6075104310458992, 1);
  sqcRYGate(q, 0.4888991717610893, 2);
  sqcRZGate(q, 2.9809447038780714, 2);
  sqcRYGate(q, -2.645294425187519, 3);
  sqcRZGate(q, -0.25862301166727575, 3);

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
