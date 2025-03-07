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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -2.7454916566452985, 0);
  sqcRYGate(q, -1.1923165608146258, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2226767235990543, 0);
  sqcRYGate(q, 0.9563752261979941, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2609480271805473, 2);
  sqcRYGate(q, 2.9710496241449387, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9716183832166667, 2);
  sqcRYGate(q, -0.9535739090609489, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1344527918384286, 4);
  sqcRYGate(q, 1.9513427979308124, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0781959859350128, 4);
  sqcRYGate(q, 3.1138614712726174, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.48833329974924, 6);
  sqcRYGate(q, 1.3403068286680924, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1015952000860838, 6);
  sqcRYGate(q, -0.6136850636836453, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9984184952772938, 1);
  sqcRYGate(q, 2.9169814295083607, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.503890802549215, 1);
  sqcRYGate(q, -3.121448727447027, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9623772617669717, 3);
  sqcRYGate(q, 0.1112638055507818, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1513036485216093, 3);
  sqcRYGate(q, -1.000835387298433, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9122310084723977, 5);
  sqcRYGate(q, 1.8283410777497489, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1780503828400986, 5);
  sqcRYGate(q, 1.571924383572209, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.873729333729939, 0);
  sqcRYGate(q, 1.6343149820965133, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.297060563289147, 0);
  sqcRYGate(q, 1.3941210369981505, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3206692598680205, 2);
  sqcRYGate(q, 2.45704249731329, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.016433298336040455, 2);
  sqcRYGate(q, -0.7973530261541546, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.435364980657935, 4);
  sqcRYGate(q, -0.7077917155427969, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1396400608794903, 4);
  sqcRYGate(q, 0.21673413357880764, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.33994650827342365, 6);
  sqcRYGate(q, -3.0774771658791686, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3538804721226363, 6);
  sqcRYGate(q, -1.5135614799400559, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8313536355935427, 1);
  sqcRYGate(q, 0.19059801688993616, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9986426229165155, 1);
  sqcRYGate(q, -1.1076068634278278, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.885886041179397, 3);
  sqcRYGate(q, -0.49208424534783834, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.44903965312805383, 3);
  sqcRYGate(q, -2.6341733090063415, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3911105521816225, 5);
  sqcRYGate(q, -1.5255368064505106, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.28186319672063, 5);
  sqcRYGate(q, -0.014426586970322399, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5454063653963759, 0);
  sqcRYGate(q, 0.7427776402349345, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.49846460848383073, 0);
  sqcRYGate(q, -1.46479674636849, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8633400169857663, 2);
  sqcRYGate(q, -2.243020906159844, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1237769427313644, 2);
  sqcRYGate(q, 2.63075300508573, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9877634000236428, 4);
  sqcRYGate(q, 0.2168353412156332, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.31882147400349936, 4);
  sqcRYGate(q, 1.9550309281818992, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6437525588322327, 6);
  sqcRYGate(q, 1.2402380484136453, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.21345608432246888, 6);
  sqcRYGate(q, 0.6655742126880149, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.064631939011971, 1);
  sqcRYGate(q, -0.8992644012189482, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.08070348523122942, 1);
  sqcRYGate(q, 0.01843779021225568, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3210118850951917, 3);
  sqcRYGate(q, 0.03696310265377534, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.044466101389154744, 3);
  sqcRYGate(q, 3.1179369805338575, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.3700485508456427, 5);
  sqcRYGate(q, -3.1000676271190875, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.19539243538435397, 5);
  sqcRYGate(q, 3.141257202949357, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8862568904941134, 0);
  sqcRYGate(q, 2.474767015000706, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.44064122997064364, 0);
  sqcRYGate(q, 2.8349730736062537, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9264702486427634, 2);
  sqcRYGate(q, -2.652694008004472, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.876011243558585, 2);
  sqcRYGate(q, -1.2968743665753784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.089531456078486, 4);
  sqcRYGate(q, -2.7279921542283367, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4841213689673975, 4);
  sqcRYGate(q, -1.2239289740827939, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5867445609650703, 6);
  sqcRYGate(q, -0.2174746376120842, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0717791409823447, 6);
  sqcRYGate(q, -0.03304348663942633, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.438463455861899, 1);
  sqcRYGate(q, 0.9217357954039046, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.011527999012830824, 1);
  sqcRYGate(q, -3.0230018834632943, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.43127805686241627, 3);
  sqcRYGate(q, 0.9063753487574236, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.795511333716378, 3);
  sqcRYGate(q, -0.034587200025942615, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9356482193717743, 5);
  sqcRYGate(q, -2.071663405866043, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.1066811508054358, 5);
  sqcRYGate(q, -3.141501182546299, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3706534341445935, 0);
  sqcRYGate(q, -0.8730645174069432, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.845832236987911, 0);
  sqcRYGate(q, -0.8658198522465449, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.498310365525756, 2);
  sqcRYGate(q, 2.521762542567634, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1549337120742447, 2);
  sqcRYGate(q, -1.7258418452117286, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5084085310446245, 4);
  sqcRYGate(q, -1.9168599425628157, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.24311755025741, 4);
  sqcRYGate(q, 2.441457852370999, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9839815546049389, 6);
  sqcRYGate(q, -0.8322263513322348, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.187558470559078, 6);
  sqcRYGate(q, 0.2073283836556019, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.471131433385543, 1);
  sqcRYGate(q, 1.73435320403909, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1316148644791184, 1);
  sqcRYGate(q, 0.23408078256697454, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5017946793900294, 3);
  sqcRYGate(q, 1.198578437459979, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7646157730729652, 3);
  sqcRYGate(q, 0.0044440943464317375, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.17418465106082, 5);
  sqcRYGate(q, 2.772377115099945, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8805321844025721, 5);
  sqcRYGate(q, -0.0003204644945897783, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.22092598629079238, 0);
  sqcRYGate(q, -0.7304621546915496, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4727510334496174, 0);
  sqcRYGate(q, 2.282781321379651, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.33822163511790215, 2);
  sqcRYGate(q, 2.248310040177896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8571201824323884, 2);
  sqcRYGate(q, -2.1191452438833043, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.27801059183860133, 4);
  sqcRYGate(q, 1.9354910909302454, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.141465701206129, 4);
  sqcRYGate(q, -2.483876176650732, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2909035423348998, 6);
  sqcRYGate(q, 1.4210283790325358, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.010006039363688, 6);
  sqcRYGate(q, -2.689937396046096, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9776680467379029, 1);
  sqcRYGate(q, -2.5614236760218407, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10949544778991895, 1);
  sqcRYGate(q, -0.2108786464321231, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9841795831768434, 3);
  sqcRYGate(q, 0.9564364574529542, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1719326548016236, 3);
  sqcRYGate(q, 3.11284019264338, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.28512240626382734, 5);
  sqcRYGate(q, 1.4395686796285019, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8028389745473357, 5);
  sqcRYGate(q, 3.1411199370384177, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9835987054891101, 0);
  sqcRYGate(q, -0.3633379154803391, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9950825676797752, 0);
  sqcRYGate(q, -2.9092796490350366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.047833277849559, 2);
  sqcRYGate(q, -1.3687006616977717, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.876762770493925, 2);
  sqcRYGate(q, 0.6338133867486597, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6130936989664646, 4);
  sqcRYGate(q, -0.8331922180289663, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7633375126037022, 4);
  sqcRYGate(q, -1.9432475648638923, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.808400427049825, 6);
  sqcRYGate(q, 0.9390535084544116, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.721961372354829, 6);
  sqcRYGate(q, 0.8743629141194195, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4900054516678898, 1);
  sqcRYGate(q, 0.37763056321099064, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1312433682021075, 1);
  sqcRYGate(q, -2.148652305790563, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3388170930893013, 3);
  sqcRYGate(q, -0.5055007110819156, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.136254390902725, 3);
  sqcRYGate(q, 1.8104138397869336, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6518530311255128, 5);
  sqcRYGate(q, -1.4764648575218065, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6044748720246167, 5);
  sqcRYGate(q, -0.7514601197418815, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.329591705322907, 0);
  sqcRYGate(q, -2.4270963708341093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0620446146707767, 0);
  sqcRYGate(q, -0.1979623456812584, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6374400339862571, 2);
  sqcRYGate(q, 0.36758551893492797, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9574793741452796, 2);
  sqcRYGate(q, 3.1301866573608392, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.935003179808484, 4);
  sqcRYGate(q, 1.5685010910634374, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8683275336586667, 4);
  sqcRYGate(q, -3.133084373982778, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0245790677548965, 6);
  sqcRYGate(q, 0.9104793711275657, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.661377913924539, 6);
  sqcRYGate(q, -3.04127784037252, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3207370311018716, 1);
  sqcRYGate(q, -0.38669230883712696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.005932779055790149, 1);
  sqcRYGate(q, 0.7411656551924581, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7300732710997861, 3);
  sqcRYGate(q, 0.371706785593083, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0088117935355456, 3);
  sqcRYGate(q, 3.03030891532266, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.633176676197475, 5);
  sqcRYGate(q, 0.11400911227929546, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.631466136157484, 5);
  sqcRYGate(q, -0.7348214168068086, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.45140925038003293, 0);
  sqcRYGate(q, -1.4448756544939698, 1);
  sqcRYGate(q, 2.6197405010244688, 2);
  sqcRYGate(q, -0.03899696681745724, 3);
  sqcRYGate(q, 2.0033904348333857, 4);
  sqcRYGate(q, 1.6161850768879833, 5);
  sqcRYGate(q, 1.6824534056229112, 6);
  sqcRYGate(q, -3.141393734966193, 7);

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
