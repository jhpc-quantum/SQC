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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 2.8859408967803377, 0);
  sqcRZGate(q, -3.1396108295964793, 0);
  sqcRYGate(q, 1.5728567406831568, 1);
  sqcRZGate(q, 0.48951264447525666, 1);
  sqcRYGate(q, -2.895507430499862, 2);
  sqcRZGate(q, -3.1226930456920488, 2);
  sqcRYGate(q, -1.4259183931314867, 3);
  sqcRZGate(q, -1.0056715378852137, 3);
  sqcRYGate(q, -0.0006467440452162521, 4);
  sqcRZGate(q, -1.5236123422261656, 4);
  sqcRYGate(q, 1.9730749945530768, 5);
  sqcRZGate(q, 0.8019968577614555, 5);
  sqcRYGate(q, 0.0005549647344071929, 6);
  sqcRZGate(q, -0.015083934320935022, 6);
  sqcRYGate(q, 1.73262367917482, 7);
  sqcRZGate(q, -1.096519701640551, 7);
  sqcRYGate(q, 0.000724650606593187, 8);
  sqcRZGate(q, 1.5029377663440124, 8);
  sqcRYGate(q, -0.3253314481906777, 9);
  sqcRZGate(q, 2.420161949334997, 9);
  sqcRYGate(q, 0.00012607441412093692, 10);
  sqcRZGate(q, 1.2929245476695552, 10);
  sqcRYGate(q, 3.1415494039274026, 11);
  sqcRZGate(q, 0.13138464339161152, 11);
  sqcRYGate(q, -1.5713650816719158, 12);
  sqcRZGate(q, 2.796547260088791, 12);
  sqcRYGate(q, -1.5317237033906654, 13);
  sqcRZGate(q, -1.6706202068874623, 13);
  sqcRYGate(q, -1.570554533743465, 14);
  sqcRZGate(q, -0.6554736907259839, 14);
  sqcRYGate(q, -1.567873823594871, 15);
  sqcRZGate(q, 1.5937824196629702, 15);
  sqcRYGate(q, 3.1412116695869354, 16);
  sqcRZGate(q, -2.047329751020376, 16);
  sqcRYGate(q, 2.318459290407585, 17);
  sqcRZGate(q, 3.1252029367609997, 17);
  sqcRYGate(q, -1.809130696250832, 18);
  sqcRZGate(q, -1.6126709281231173, 18);
  sqcRYGate(q, -1.5711624825102168, 19);
  sqcRZGate(q, -0.9708046252720823, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.5690179488827143, 0);
  sqcRZGate(q, -1.1332471066433654, 0);
  sqcRYGate(q, 1.5315608340660767, 1);
  sqcRZGate(q, -3.131654846332769, 1);
  sqcRYGate(q, 1.5696635856286738, 2);
  sqcRZGate(q, -0.8301809557323077, 2);
  sqcRYGate(q, -1.5716466247068863, 3);
  sqcRZGate(q, 1.751321595238343, 3);
  sqcRYGate(q, -1.5710110690207229, 4);
  sqcRZGate(q, 1.5843035480144625, 4);
  sqcRYGate(q, -0.5485124663013194, 5);
  sqcRZGate(q, -2.168213127943337, 5);
  sqcRYGate(q, -1.5710612472861571, 6);
  sqcRZGate(q, 1.568450403138809, 6);
  sqcRYGate(q, -0.3454639034509146, 7);
  sqcRZGate(q, -0.2792160944534148, 7);
  sqcRYGate(q, 1.6001428055158184, 8);
  sqcRZGate(q, -1.500322522465666, 8);
  sqcRYGate(q, 0.1930543578913042, 9);
  sqcRZGate(q, 2.2071998852671713, 9);
  sqcRYGate(q, 1.5707131153639136, 10);
  sqcRZGate(q, 1.571002288194813, 10);
  sqcRYGate(q, -2.0841200522524845, 11);
  sqcRZGate(q, 3.0873363025602205, 11);
  sqcRYGate(q, -3.1415256500040103, 12);
  sqcRZGate(q, -0.3443640279509843, 12);
  sqcRYGate(q, -1.570809378700583, 13);
  sqcRZGate(q, -1.5707958990050581, 13);
  sqcRYGate(q, 3.1413411572161043, 14);
  sqcRZGate(q, -1.9552033639310338, 14);
  sqcRYGate(q, 2.3332921293340596, 15);
  sqcRZGate(q, 0.8707204969802412, 15);
  sqcRYGate(q, 1.570728121785268, 16);
  sqcRZGate(q, 1.5702405444890368, 16);
  sqcRYGate(q, 1.9809440365272595, 17);
  sqcRZGate(q, -3.1324444771540434, 17);
  sqcRYGate(q, -1.573205756389818, 18);
  sqcRZGate(q, -2.8014288577483186, 18);
  sqcRYGate(q, 1.9072020497033306, 19);
  sqcRZGate(q, 1.8540328560740797, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.5320975955143226, 0);
  sqcRZGate(q, -0.04460662102079027, 0);
  sqcRYGate(q, -1.593834977871171, 1);
  sqcRZGate(q, -0.07636869590442875, 1);
  sqcRYGate(q, -0.003372124170326708, 2);
  sqcRZGate(q, -0.7344069311396113, 2);
  sqcRYGate(q, -3.0871517901486776, 3);
  sqcRZGate(q, 0.022634363157597818, 3);
  sqcRYGate(q, -0.8925782853719015, 4);
  sqcRZGate(q, -0.899608216566156, 4);
  sqcRYGate(q, 1.5779926827992998, 5);
  sqcRZGate(q, -0.9138220608169582, 5);
  sqcRYGate(q, -1.570241835865997, 6);
  sqcRZGate(q, -3.140668182600433, 6);
  sqcRYGate(q, 0.045522267769828484, 7);
  sqcRZGate(q, 1.7763152936350408, 7);
  sqcRYGate(q, -3.1176201360646547, 8);
  sqcRZGate(q, -3.068703742370465, 8);
  sqcRYGate(q, 4.680794534106524e-05, 9);
  sqcRZGate(q, -0.1269393046111209, 9);
  sqcRYGate(q, 1.6229321490947406, 10);
  sqcRZGate(q, -0.8083119279450147, 10);
  sqcRYGate(q, -3.11254516136315, 11);
  sqcRZGate(q, -1.58476792149205, 11);
  sqcRYGate(q, 1.0959864555420926, 12);
  sqcRZGate(q, -0.00013810666358171628, 12);
  sqcRYGate(q, 1.5705420220107362, 13);
  sqcRZGate(q, 1.1651014116894411, 13);
  sqcRYGate(q, -0.0005172433952917999, 14);
  sqcRZGate(q, -2.4142704436575713, 14);
  sqcRYGate(q, 3.14115259236687, 15);
  sqcRZGate(q, 0.7377126190540292, 15);
  sqcRYGate(q, -0.7698700382641225, 16);
  sqcRZGate(q, -3.1415620312825885, 16);
  sqcRYGate(q, 1.5671881074997591, 17);
  sqcRZGate(q, -0.18086299136174766, 17);
  sqcRYGate(q, -3.1381188559316358, 18);
  sqcRZGate(q, 1.9091372888958864, 18);
  sqcRYGate(q, -3.0954647335860317, 19);
  sqcRZGate(q, -2.618635996020584, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.4950884970656657, 0);
  sqcRZGate(q, 2.5353444597448314, 0);
  sqcRYGate(q, -2.114617912428128, 1);
  sqcRZGate(q, -1.610883673929548, 1);
  sqcRYGate(q, 1.70068859088319, 2);
  sqcRZGate(q, 1.5648956101742257, 2);
  sqcRYGate(q, -0.08505399466730879, 3);
  sqcRZGate(q, 1.5699595376214104, 3);
  sqcRYGate(q, 3.141455417856381, 4);
  sqcRZGate(q, 2.2157959427609977, 4);
  sqcRYGate(q, -3.0907073475202123, 5);
  sqcRZGate(q, -0.8852754291785594, 5);
  sqcRYGate(q, 1.5709301638386917, 6);
  sqcRZGate(q, 2.5525041073775623, 6);
  sqcRYGate(q, -1.585209511265693, 7);
  sqcRZGate(q, -2.865283448224679, 7);
  sqcRYGate(q, 1.6723461233711197, 8);
  sqcRZGate(q, 0.02960869982543684, 8);
  sqcRYGate(q, 0.6567673839120195, 9);
  sqcRZGate(q, -1.6094052198448319, 9);
  sqcRYGate(q, -5.328332231357096e-05, 10);
  sqcRZGate(q, -2.3334081768182697, 10);
  sqcRYGate(q, 0.02499192564463204, 11);
  sqcRZGate(q, 1.486386032450958, 11);
  sqcRYGate(q, -1.6906960649994833, 12);
  sqcRZGate(q, 2.827759467287578, 12);
  sqcRYGate(q, 1.6512792766547761, 13);
  sqcRZGate(q, 0.03434486559970641, 13);
  sqcRYGate(q, -1.5709576102477962, 14);
  sqcRZGate(q, -1.560574393349393, 14);
  sqcRYGate(q, -0.9319147592185334, 15);
  sqcRZGate(q, -1.971997289214227, 15);
  sqcRYGate(q, -1.5047993507979018, 16);
  sqcRZGate(q, -3.3854593202886156e-05, 16);
  sqcRYGate(q, -0.8768632672275871, 17);
  sqcRZGate(q, -0.028210242078976044, 17);
  sqcRYGate(q, -0.2775662588823778, 18);
  sqcRZGate(q, 0.5367632225626432, 18);
  sqcRYGate(q, 2.526190940023474, 19);
  sqcRZGate(q, -1.1858262938970916, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.011478737626759994, 0);
  sqcRZGate(q, 1.8387690615270578, 0);
  sqcRYGate(q, -1.5727934107633388, 1);
  sqcRZGate(q, -0.030130626715858446, 1);
  sqcRYGate(q, -1.5923895232847824, 2);
  sqcRZGate(q, 1.5699245059334204, 2);
  sqcRYGate(q, 0.8889039802969922, 3);
  sqcRZGate(q, -1.5799741822583928, 3);
  sqcRYGate(q, 0.2987680740761711, 4);
  sqcRZGate(q, 1.607460183841217, 4);
  sqcRYGate(q, 1.6677065579144814, 5);
  sqcRZGate(q, -1.5680572607648384, 5);
  sqcRYGate(q, -3.1406619095448063, 6);
  sqcRZGate(q, -2.1598668470078, 6);
  sqcRYGate(q, -0.9510630166658686, 7);
  sqcRZGate(q, 1.5684714016734824, 7);
  sqcRYGate(q, -2.1080374856939983, 8);
  sqcRZGate(q, 1.5708348893260768, 8);
  sqcRYGate(q, 1.5707563519696826, 9);
  sqcRZGate(q, -1.5484481682418605, 9);
  sqcRYGate(q, -1.5615718508374226, 10);
  sqcRZGate(q, -1.5707350623560343, 10);
  sqcRYGate(q, -3.1400617765481966, 11);
  sqcRZGate(q, -1.6654806776569668, 11);
  sqcRYGate(q, 3.1384444102482143, 12);
  sqcRZGate(q, 1.2569262087762842, 12);
  sqcRYGate(q, -1.4705024464788035, 13);
  sqcRZGate(q, 3.134371435475766, 13);
  sqcRYGate(q, 0.049484736822436926, 14);
  sqcRZGate(q, -1.5810566843915523, 14);
  sqcRYGate(q, 0.009698982844430505, 15);
  sqcRZGate(q, 0.4035416522325868, 15);
  sqcRYGate(q, -0.4229216356470486, 16);
  sqcRZGate(q, -1.5705373617876495, 16);
  sqcRYGate(q, -3.087126071749242, 17);
  sqcRZGate(q, 1.620569252867692, 17);
  sqcRYGate(q, -0.003451667097416511, 18);
  sqcRZGate(q, 2.6051081522712316, 18);
  sqcRYGate(q, 1.5669509404659772, 19);
  sqcRZGate(q, 2.7674786937927323, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -3.137627727510867, 0);
  sqcRZGate(q, -0.8910459766547606, 0);
  sqcRYGate(q, 1.2531456688915596, 1);
  sqcRZGate(q, -2.441687370604471, 1);
  sqcRYGate(q, 1.5707237605156346, 2);
  sqcRZGate(q, -1.9452634929007848, 2);
  sqcRYGate(q, 1.5701304790976272, 3);
  sqcRZGate(q, 2.2080067789174507, 3);
  sqcRYGate(q, 1.570782156124689, 4);
  sqcRZGate(q, 2.7649828214966012, 4);
  sqcRYGate(q, -1.566863144543274, 5);
  sqcRZGate(q, -2.7570579164049756, 5);
  sqcRYGate(q, -1.5707786873303364, 6);
  sqcRZGate(q, 2.7548784477404094, 6);
  sqcRYGate(q, 1.5707204059035007, 7);
  sqcRZGate(q, 1.2566319937886634, 7);
  sqcRYGate(q, -1.5707930727637196, 8);
  sqcRZGate(q, -1.9468508449428354, 8);
  sqcRYGate(q, 1.537241730500675, 9);
  sqcRZGate(q, 1.974148026063625, 9);
  sqcRYGate(q, 1.570929135635299, 10);
  sqcRZGate(q, -0.37719519158049236, 10);
  sqcRYGate(q, -1.5711658604668521, 11);
  sqcRZGate(q, 1.1256580977218453, 11);
  sqcRYGate(q, 1.570798187176873, 12);
  sqcRZGate(q, 2.7994346294174135, 12);
  sqcRYGate(q, -0.07896958715565973, 13);
  sqcRZGate(q, 1.927743641940145, 13);
  sqcRYGate(q, -1.5710831016352007, 14);
  sqcRZGate(q, -0.368831486232295, 14);
  sqcRYGate(q, -1.5730049009095315, 15);
  sqcRZGate(q, -2.0869531571541255, 15);
  sqcRYGate(q, -1.5708021277731952, 16);
  sqcRZGate(q, -0.44114949253659846, 16);
  sqcRYGate(q, -1.571443295857498, 17);
  sqcRZGate(q, -0.011698904752759896, 17);
  sqcRYGate(q, -1.5699490864687062, 18);
  sqcRZGate(q, 2.6345083317050233, 18);
  sqcRYGate(q, -3.0463414285761004, 19);
  sqcRZGate(q, 1.8831479126558672, 19);

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
