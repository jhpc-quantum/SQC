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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 0.9763614002814813, 0);
  sqcRZGate(q, 3.1405590935886187, 0);
  sqcRYGate(q, -1.5579136260254334, 1);
  sqcRZGate(q, -1.221704342471619, 1);
  sqcRYGate(q, -1.572049150076288, 2);
  sqcRZGate(q, -1.1489143544413776, 2);
  sqcRYGate(q, 1.9880168272949792, 3);
  sqcRZGate(q, 3.1413571897222137, 3);
  sqcRYGate(q, 1.5705095456226505, 4);
  sqcRZGate(q, -1.103909820500103, 4);
  sqcRYGate(q, -1.5722906404384824, 5);
  sqcRZGate(q, -1.5252755275100511, 5);
  sqcRYGate(q, 1.5724029070335641, 6);
  sqcRZGate(q, 1.577113283115512, 6);
  sqcRYGate(q, 1.5707793612307066, 7);
  sqcRZGate(q, 1.5276163704323529, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5686215640335748, 0);
  sqcRZGate(q, -1.3075571291229444, 0);
  sqcRYGate(q, -2.9699810006542067, 1);
  sqcRZGate(q, 1.0996906783747251, 1);
  sqcRYGate(q, 0.1386387868257568, 2);
  sqcRZGate(q, -0.5128801185820464, 2);
  sqcRYGate(q, -0.5116924199567592, 3);
  sqcRZGate(q, 0.0007750018090817434, 3);
  sqcRYGate(q, -3.0634519024357605, 4);
  sqcRZGate(q, -1.785934371889215, 4);
  sqcRYGate(q, 1.5721901249675487, 5);
  sqcRZGate(q, 1.3583004506387875, 5);
  sqcRYGate(q, 1.5706188210793501, 6);
  sqcRZGate(q, 1.5696124263520241, 6);
  sqcRYGate(q, -0.007955774189976061, 7);
  sqcRZGate(q, 0.0437389340953862, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7936491313842735, 0);
  sqcRZGate(q, 2.3865540859340233, 0);
  sqcRYGate(q, 1.6825384603786215, 1);
  sqcRZGate(q, 3.0801266054353102, 1);
  sqcRYGate(q, 1.5753991939107856, 2);
  sqcRZGate(q, 1.5702394550831356, 2);
  sqcRYGate(q, 1.14563138136368, 3);
  sqcRZGate(q, -0.004370709603297088, 3);
  sqcRYGate(q, 1.571170506933525, 4);
  sqcRZGate(q, -0.024563198134307185, 4);
  sqcRYGate(q, 3.099742763959895, 5);
  sqcRZGate(q, 1.3581434212055372, 5);
  sqcRYGate(q, -1.5717692657747036, 6);
  sqcRZGate(q, -1.569702408336611, 6);
  sqcRYGate(q, -1.579995920698322, 7);
  sqcRZGate(q, 0.10992503258600637, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5647712433528531, 0);
  sqcRZGate(q, 1.8668756556861568, 0);
  sqcRYGate(q, 1.5769057046832706, 1);
  sqcRZGate(q, 3.1407449067860362, 1);
  sqcRYGate(q, 1.5924792207709388, 2);
  sqcRZGate(q, -1.5193181083961818, 2);
  sqcRYGate(q, -1.5719349158250475, 3);
  sqcRZGate(q, -1.1628308666849492, 3);
  sqcRYGate(q, -0.19164891949780902, 4);
  sqcRZGate(q, -2.8953592260926175, 4);
  sqcRYGate(q, 1.5712102210577044, 5);
  sqcRZGate(q, -1.5996392934809165, 5);
  sqcRYGate(q, 1.570214206372663, 6);
  sqcRZGate(q, -1.5729462201053186, 6);
  sqcRYGate(q, 0.5936582749027126, 7);
  sqcRZGate(q, -1.6332678082672878, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.0530518650735856, 0);
  sqcRZGate(q, 0.2927366222214678, 0);
  sqcRYGate(q, -1.4744055153334046, 1);
  sqcRZGate(q, 1.5734668163787928, 1);
  sqcRYGate(q, -1.5718220966044534, 2);
  sqcRZGate(q, -0.0002720619441749506, 2);
  sqcRYGate(q, -0.00022517774818986425, 3);
  sqcRZGate(q, -1.909258181645182, 3);
  sqcRYGate(q, 1.306315110684366, 4);
  sqcRZGate(q, 2.4245591753712334, 4);
  sqcRYGate(q, 1.741543747095366, 5);
  sqcRZGate(q, -0.48040745480210933, 5);
  sqcRYGate(q, -1.5716043228138639, 6);
  sqcRZGate(q, 3.140211245014608, 6);
  sqcRYGate(q, -1.5211867117881726, 7);
  sqcRZGate(q, -2.037280097320269, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5364821267840558, 0);
  sqcRZGate(q, 3.1323299955597266, 0);
  sqcRYGate(q, 1.5721735627910063, 1);
  sqcRZGate(q, -0.004940827262831761, 1);
  sqcRYGate(q, -1.5817007621445267, 2);
  sqcRZGate(q, -1.5716208080729834, 2);
  sqcRYGate(q, -7.487938770578443e-05, 3);
  sqcRZGate(q, 0.3315444234979728, 3);
  sqcRYGate(q, 0.7235245669356409, 4);
  sqcRZGate(q, -2.292836282467036, 4);
  sqcRYGate(q, -3.1414919933007512, 5);
  sqcRZGate(q, 2.8860891987768547, 5);
  sqcRYGate(q, 1.5684526426618113, 6);
  sqcRZGate(q, 1.5689345662856529, 6);
  sqcRYGate(q, -1.5724450076214769, 7);
  sqcRZGate(q, -0.002903713193428809, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5705875232361155, 0);
  sqcRZGate(q, 1.570456078009829, 0);
  sqcRYGate(q, -1.9974176703977298, 1);
  sqcRZGate(q, -0.002327906762965702, 1);
  sqcRYGate(q, 1.5664167440109962, 2);
  sqcRZGate(q, -0.451900806461443, 2);
  sqcRYGate(q, 3.141373062488336, 3);
  sqcRZGate(q, -2.7411505255594446, 3);
  sqcRYGate(q, 1.3378969087838364, 4);
  sqcRZGate(q, 2.8876651315411412, 4);
  sqcRYGate(q, 1.5646174096634589, 5);
  sqcRZGate(q, 1.572826169295212, 5);
  sqcRYGate(q, 1.5697408673682711, 6);
  sqcRZGate(q, 0.16281622648630184, 6);
  sqcRYGate(q, 1.5717573551695934, 7);
  sqcRZGate(q, -2.049650152916417, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5715590989600807, 0);
  sqcRZGate(q, -1.3116204876772974, 0);
  sqcRYGate(q, 1.570677866051259, 1);
  sqcRZGate(q, -0.6838800368421274, 1);
  sqcRYGate(q, 3.1413618294370402, 2);
  sqcRZGate(q, 2.7827941038139326, 2);
  sqcRYGate(q, -1.5699029182045858, 3);
  sqcRZGate(q, -0.7609300823155163, 3);
  sqcRYGate(q, 1.5677331443530786, 4);
  sqcRZGate(q, 1.893933482171491, 4);
  sqcRYGate(q, 1.571669178452095, 5);
  sqcRZGate(q, -2.4239551209840897, 5);
  sqcRYGate(q, -0.0002636545014633462, 6);
  sqcRZGate(q, -2.9187443106783744, 6);
  sqcRYGate(q, -3.140245012282433, 7);
  sqcRZGate(q, -1.3738321832179672, 7);

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
