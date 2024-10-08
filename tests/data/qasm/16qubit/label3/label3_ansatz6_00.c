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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 0.1978795134653876, 0);
  sqcRYGate(q, -1.6512420384565263, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3602606734216665, 0);
  sqcRYGate(q, -1.5058659897102704, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.048750273909216, 1);
  sqcRYGate(q, 0.28510985918316667, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5324014530717107, 1);
  sqcRYGate(q, 1.648846933343318, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.179702249787334, 2);
  sqcRYGate(q, -2.5705811443172633, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5350564462889857, 2);
  sqcRYGate(q, 1.5569098526343539, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.39025261808253564, 3);
  sqcRYGate(q, -3.1195050978239243, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.423486709611924, 3);
  sqcRYGate(q, 1.4629815874241565, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3740917334939704, 4);
  sqcRYGate(q, -0.3495367431631209, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2839024887967474, 4);
  sqcRYGate(q, -1.663130871058466, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5831602193568673, 5);
  sqcRYGate(q, -3.0230765581140306, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5440154628818974, 5);
  sqcRYGate(q, 0.3544345380037281, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2937984371676361, 6);
  sqcRYGate(q, -0.02320378482360585, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.583953648080069, 6);
  sqcRYGate(q, 1.5704719864758288, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0002106762715903, 7);
  sqcRYGate(q, 0.07257487181563131, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.465635244224918, 7);
  sqcRYGate(q, 1.5821879373613816, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.642780410110488, 8);
  sqcRYGate(q, -1.3900490859921497, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.1541750171223324, 8);
  sqcRYGate(q, 1.5958159908194745, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.0096649085987583, 9);
  sqcRYGate(q, 0.0024169122245183416, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5532669948372175, 9);
  sqcRYGate(q, 2.768702741683578, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.7536300688824333, 10);
  sqcRYGate(q, -0.6850203355108047, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.08646731130515051, 10);
  sqcRYGate(q, -1.5712113479474308, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.197649312329073, 11);
  sqcRYGate(q, -0.5167996084807518, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.1402345721439087, 11);
  sqcRYGate(q, -2.130245810316714, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.7642047990517906, 12);
  sqcRYGate(q, 2.9599972711523614, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5180261738823306, 12);
  sqcRYGate(q, 1.5157129686190762, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.5784423155510288, 13);
  sqcRYGate(q, 0.01270242131820178, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.6143354521226623, 13);
  sqcRYGate(q, 2.7343173822613784, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.01419832396168, 14);
  sqcRYGate(q, -0.17641635633163083, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5992212573152231, 14);
  sqcRYGate(q, -1.5510419369666701, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.843776495828982, 0);
  sqcRYGate(q, 2.9632394720628326, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.32943021302008113, 0);
  sqcRYGate(q, 1.8585763236347514, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.990606224019416, 1);
  sqcRYGate(q, -1.5291675697565001, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0901135412280185, 1);
  sqcRYGate(q, -2.5955875807835858, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5524910557477243, 2);
  sqcRYGate(q, -0.22025566021943702, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.04372628080785959, 2);
  sqcRYGate(q, -1.4023004048930285, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.348755728332785, 3);
  sqcRYGate(q, -0.0021278731662671083, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5782040986499482, 3);
  sqcRYGate(q, -1.563231402031944, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.126762748312844, 4);
  sqcRYGate(q, -3.1407760304344228, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.887073461458638, 4);
  sqcRYGate(q, -1.4291449127663975, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.135898949225133, 5);
  sqcRYGate(q, 2.4712978067368225, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0010666240929815274, 5);
  sqcRYGate(q, -1.5716847159916219, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7770296770287873, 6);
  sqcRYGate(q, 2.458991333775673, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0009201519826993241, 6);
  sqcRYGate(q, -0.09249110695170233, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2512646849179205, 7);
  sqcRYGate(q, -3.1314513306266334, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5857899837623661, 7);
  sqcRYGate(q, 1.552902934673504, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.8425513946765513, 8);
  sqcRYGate(q, 3.1402667716537263, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.25937236047638373, 8);
  sqcRYGate(q, 1.577073921922163, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.05209912951478283, 9);
  sqcRYGate(q, -0.217244107585449, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.09584133295719133, 9);
  sqcRYGate(q, -1.5661693159632737, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.03985705443281825, 10);
  sqcRYGate(q, 1.568561767501902, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.637899790832388, 10);
  sqcRYGate(q, -0.07479984571872882, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5649940456733733, 11);
  sqcRYGate(q, 2.4926016430378373, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.00722197122356949, 11);
  sqcRYGate(q, -1.6292856582286417, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.9626557675064842, 12);
  sqcRYGate(q, 3.125364117046092, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.262309019698564, 12);
  sqcRYGate(q, 1.064984064745759, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.6351641273481812, 13);
  sqcRYGate(q, 6.364457363234075e-05, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5189200032190273, 13);
  sqcRYGate(q, -1.5728393012016566, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.39981293275622, 14);
  sqcRYGate(q, 0.013829179609387234, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.071691222322437, 14);
  sqcRYGate(q, -2.9568521662858114, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.616761954758573, 0);
  sqcRYGate(q, -0.35114425286231876, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.36571178691620465, 0);
  sqcRYGate(q, 1.522727757266555, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.768137231025349, 1);
  sqcRYGate(q, 3.033434244401319, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.576343919684259, 1);
  sqcRYGate(q, 1.5043715957465635, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4754605329200805, 2);
  sqcRYGate(q, -0.04867177409599055, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5779316595159716, 2);
  sqcRYGate(q, -3.1315265771779024, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5722442847930618, 3);
  sqcRYGate(q, 0.014523331682588647, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5690916652057372, 3);
  sqcRYGate(q, -1.5707334427201949, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5786428243367023, 4);
  sqcRYGate(q, 0.11931548045838714, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.570891051560529, 4);
  sqcRYGate(q, -0.05370129583089117, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.57024001180532, 5);
  sqcRYGate(q, -0.027394773378721586, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5705382431251043, 5);
  sqcRYGate(q, 1.5640187521578448, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.12832066079146243, 6);
  sqcRYGate(q, 3.057236454718793, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.571411313922921, 6);
  sqcRYGate(q, -0.00019088722352887398, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.570762809685042, 7);
  sqcRYGate(q, -3.0970071233460086, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5706352772029926, 7);
  sqcRYGate(q, 1.570999968396285, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.8847288069465841, 8);
  sqcRYGate(q, 0.10238718589265895, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5708027227392911, 8);
  sqcRYGate(q, -0.00513411407787423, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5701461478193464, 9);
  sqcRYGate(q, 0.3328767440019607, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.568976550735174, 9);
  sqcRYGate(q, -1.6163511399131616, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.530949245247369, 10);
  sqcRYGate(q, -1.7750186041586877, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.571352934965815, 10);
  sqcRYGate(q, 3.1370046445737647, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5707038493212337, 11);
  sqcRYGate(q, -0.0893143065329216, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5709386956541387, 11);
  sqcRYGate(q, -1.5528466420556466, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5758737525168183, 12);
  sqcRYGate(q, 0.06651118615765839, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.570822940566182, 12);
  sqcRYGate(q, 0.0591430837925202, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5704569399572577, 13);
  sqcRYGate(q, -2.7767063506756986, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5707544926998036, 13);
  sqcRYGate(q, -1.559853668929263, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.202832732494741, 14);
  sqcRYGate(q, 1.4150881616755342, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.5712077751151323, 14);
  sqcRYGate(q, 0.00027511736965912803, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.6817239527212031, 0);
  sqcRYGate(q, 1.7832861306322876, 1);
  sqcRYGate(q, 1.8243700838967791, 2);
  sqcRYGate(q, 1.7808257559893188, 3);
  sqcRYGate(q, -1.3459405455696762, 4);
  sqcRYGate(q, -1.3586551347376883, 5);
  sqcRYGate(q, -3.052645564028027, 6);
  sqcRYGate(q, 1.7837317320653687, 7);
  sqcRYGate(q, 2.4480196197966113, 8);
  sqcRYGate(q, -1.3570017906929126, 9);
  sqcRYGate(q, 1.8018905342973817, 10);
  sqcRYGate(q, 1.7846113040371971, 11);
  sqcRYGate(q, 1.7890540829302246, 12);
  sqcRYGate(q, -1.3569826906270657, 13);
  sqcRYGate(q, 2.1519618738060236, 14);
  sqcRYGate(q, 1.784578266811805, 15);

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
