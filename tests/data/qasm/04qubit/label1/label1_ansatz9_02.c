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

  sqcRYGate(q, 2.5641157467061, 0);
  sqcRYGate(q, 1.0316063457296254, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2136624088472754, 0);
  sqcRYGate(q, -2.3018151757295264, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1368808044089422, 2);
  sqcRYGate(q, 3.018370140299355, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8804092364316756, 2);
  sqcRYGate(q, -2.223813749766731, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1081731502901295, 0);
  sqcRYGate(q, -3.075353704285353, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.902685721577717, 0);
  sqcRYGate(q, 0.7509313527090294, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9665371990761369, 1);
  sqcRYGate(q, 0.4000488824956536, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3425784930528053, 1);
  sqcRYGate(q, 1.7820140207906887, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6263416905304977, 0);
  sqcRYGate(q, -0.8471281902945966, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0461482236354032, 0);
  sqcRYGate(q, 1.174595771687561, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.447808100196996, 1);
  sqcRYGate(q, 2.0816979097221298, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9515904410324323, 1);
  sqcRYGate(q, 3.1010950253487035, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1530358306992263, 0);
  sqcRYGate(q, -0.8466742605621701, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.266935669576581, 0);
  sqcRYGate(q, 0.12900666965194585, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3296209392467002, 2);
  sqcRYGate(q, -2.596928114963349, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.36925338340522806, 2);
  sqcRYGate(q, 0.8931625326903063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.118302338275411, 0);
  sqcRYGate(q, -0.15739178811471174, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1844343446358465, 0);
  sqcRYGate(q, -2.6317406237504075, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.151520269861676, 1);
  sqcRYGate(q, -2.1036609244675653, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9511380537026386, 1);
  sqcRYGate(q, -1.3343664563311428, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8047022697605459, 0);
  sqcRYGate(q, -1.4517407388954369, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.689448205949998, 0);
  sqcRYGate(q, 2.775055959779731, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0563072792226476, 1);
  sqcRYGate(q, 0.0634655433277996, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4897701737700828, 1);
  sqcRYGate(q, -0.3970165980199436, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3357197131476424, 0);
  sqcRYGate(q, -1.882095052571266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7048710710165711, 0);
  sqcRYGate(q, 2.979326629234132, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5788681642312645, 2);
  sqcRYGate(q, -2.91575298781271, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3167693196006924, 2);
  sqcRYGate(q, 0.656155954073103, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5000005657724866, 0);
  sqcRYGate(q, -2.2286263992513353, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.448924910394449, 0);
  sqcRYGate(q, -0.5472474778884974, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8858731422175943, 1);
  sqcRYGate(q, 1.8684299436467522, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.800467142858123, 1);
  sqcRYGate(q, -0.24284162295966635, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7221589674440543, 0);
  sqcRYGate(q, 1.6878388644360331, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.12614767766646978, 0);
  sqcRYGate(q, -1.1698424436391095, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3649646566665012, 1);
  sqcRYGate(q, -2.4869665968774664, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4204259773459724, 1);
  sqcRYGate(q, 2.8611886172875094, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9355538221218778, 0);
  sqcRYGate(q, 1.816230330837721, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.29229981358982704, 0);
  sqcRYGate(q, 1.841344549851497, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.064130273349653, 2);
  sqcRYGate(q, -2.1119036070601167, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8362398479253876, 2);
  sqcRYGate(q, 3.013040397325546, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.327334800433154, 0);
  sqcRYGate(q, 1.0095090017438944, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3849737468535066, 0);
  sqcRYGate(q, -2.847321883331005, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0966895686846563, 1);
  sqcRYGate(q, -0.18804358025481002, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.374215359540033, 1);
  sqcRYGate(q, -1.8823158031316611, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4857490838688294, 0);
  sqcRYGate(q, 1.455061739027581, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4970825168817452, 0);
  sqcRYGate(q, -2.4065781869857354, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.06810623660957679, 1);
  sqcRYGate(q, 0.08078685765624627, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.28959632892138387, 1);
  sqcRYGate(q, -2.2917314959181327, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.492612990594038, 0);
  sqcRYGate(q, -1.083073232843918, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3979305615282935, 0);
  sqcRYGate(q, 2.0485926919740747, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3130476260464654, 2);
  sqcRYGate(q, -2.5751859635238796, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.773316265138858, 2);
  sqcRYGate(q, 0.16988520626584958, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7813651207098147, 0);
  sqcRYGate(q, 2.8023903085361934, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8919349915881528, 0);
  sqcRYGate(q, 1.5552177040316588, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.624463006527377, 1);
  sqcRYGate(q, -2.2169950613321516, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3242357319042802, 1);
  sqcRYGate(q, 2.0381975845143865, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1866915778983476, 0);
  sqcRYGate(q, -1.6142893155042866, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5887167100441966, 0);
  sqcRYGate(q, 1.9264433543633914, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3981814376497738, 1);
  sqcRYGate(q, -1.5823086911637247, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5821441612572391, 1);
  sqcRYGate(q, -0.7153530330321632, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4952614758822829, 0);
  sqcRYGate(q, -0.4443329708588908, 1);
  sqcRYGate(q, -1.9500029742888136, 2);
  sqcRYGate(q, 0.9304619878308502, 3);

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
