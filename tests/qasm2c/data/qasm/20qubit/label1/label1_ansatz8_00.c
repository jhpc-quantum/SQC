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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -0.6525317402124529, 0);
  sqcRYGate(q, -2.878176215512167, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.926998688356862, 0);
  sqcRYGate(q, -0.0052990382933456705, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8146134937454441, 2);
  sqcRYGate(q, 2.23099547126792, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0982512927082837, 2);
  sqcRYGate(q, -1.2186969480313736, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0108158175579773, 4);
  sqcRYGate(q, 3.051591650042557, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8706303153514485, 4);
  sqcRYGate(q, 1.6401711859472892, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.15262421935081358, 6);
  sqcRYGate(q, 0.30306167080408386, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8329632470841837, 6);
  sqcRYGate(q, -2.355098838644345, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.007003167308981, 8);
  sqcRYGate(q, -2.020766485054264, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.7645681927753136, 8);
  sqcRYGate(q, -1.3496223381833046, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.8642495148584963, 10);
  sqcRYGate(q, 2.9966458837679086, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6706597740742022, 10);
  sqcRYGate(q, -1.6175496058985293, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.05899946405053669, 12);
  sqcRYGate(q, 2.157383815294968, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.1357855071924354, 12);
  sqcRYGate(q, -0.15757442907540042, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.362434694714995, 14);
  sqcRYGate(q, -1.1469900973003582, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.756217344362079, 14);
  sqcRYGate(q, -1.2854984109748653, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.270909833543631, 16);
  sqcRYGate(q, -0.04407948241466626, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.9750972362699811, 16);
  sqcRYGate(q, -0.6730294753013677, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.454115639967803, 18);
  sqcRYGate(q, -0.29224945182154616, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.028870461891019, 18);
  sqcRYGate(q, 2.081653719553901, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.3041731112724362, 0);
  sqcRYGate(q, -1.2530694065261676, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5900422804717689, 0);
  sqcRYGate(q, 0.6446910623581453, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2994308998224238, 2);
  sqcRYGate(q, -0.8141345204188317, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.7658936095942444, 2);
  sqcRYGate(q, -0.7602358805434841, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.764166754674183, 4);
  sqcRYGate(q, 1.6425236779407362, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.9053682181547782, 4);
  sqcRYGate(q, 2.8286209928653467, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.989357072540787, 6);
  sqcRYGate(q, 2.61101549105932, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.5165924562255673, 6);
  sqcRYGate(q, 0.19439728329651998, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.040545927443845, 8);
  sqcRYGate(q, 2.8426426214099774, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.8580106619700776, 8);
  sqcRYGate(q, -3.113328674670265, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.950843104599559, 10);
  sqcRYGate(q, 0.9779340122594364, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.44297370669170044, 10);
  sqcRYGate(q, 0.4179727658850289, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.838213641185654, 12);
  sqcRYGate(q, 0.4469750755167619, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -3.013624463326062, 12);
  sqcRYGate(q, -0.03064784897542694, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.8711501262307616, 14);
  sqcRYGate(q, 2.165118536093546, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -0.20833603157748837, 14);
  sqcRYGate(q, -2.3061760005627217, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 1.0278054117597097, 16);
  sqcRYGate(q, -1.240238512129727, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -0.013098463486554301, 16);
  sqcRYGate(q, -0.01735669546213181, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 2.7741862105984696, 1);
  sqcRYGate(q, 1.4520544971461276, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.822994457191555, 1);
  sqcRYGate(q, 1.9165930205041235, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8958712245915477, 3);
  sqcRYGate(q, -1.1978442689651132, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.22100710063331136, 3);
  sqcRYGate(q, -0.05533632240906046, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.34117567051026787, 5);
  sqcRYGate(q, -1.5328084749692106, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.8065286980349615, 5);
  sqcRYGate(q, -1.1708956743086594, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.2947140737102245, 7);
  sqcRYGate(q, -0.3670248239611648, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.4537309363623785, 7);
  sqcRYGate(q, -0.511636551369502, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.9191226537065598, 9);
  sqcRYGate(q, -1.5559220014564312, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.4661932742069834, 9);
  sqcRYGate(q, 1.114450860096118, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.826724359593958, 11);
  sqcRYGate(q, 0.37422326543903595, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -2.8434996923604436, 11);
  sqcRYGate(q, -0.056303449259849966, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.48530872833549665, 13);
  sqcRYGate(q, 0.3328720721637385, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -3.0252110973012467, 13);
  sqcRYGate(q, 3.026745719220918, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.1879625552433497, 15);
  sqcRYGate(q, 0.7122019140103824, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 3.048537687091861, 15);
  sqcRYGate(q, -0.2847985622039776, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -2.7770811785567693, 17);
  sqcRYGate(q, 1.2240592940159138, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -0.7557901918578711, 17);
  sqcRYGate(q, 1.5255350304639235, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 0.3762516319692865, 0);
  sqcRYGate(q, -1.3300756471465291, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.443506346380927, 0);
  sqcRYGate(q, 1.4554124037154956, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5987666546240861, 2);
  sqcRYGate(q, 2.910871536661138, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6943631589890866, 2);
  sqcRYGate(q, -1.061385196762866, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7111928333501645, 4);
  sqcRYGate(q, 2.545411043943694, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5341546070516987, 4);
  sqcRYGate(q, -2.9563618225182977, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5236969141288818, 6);
  sqcRYGate(q, -2.8084550595097086, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3605748290130877, 6);
  sqcRYGate(q, 0.6527628881269898, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6135494973840109, 8);
  sqcRYGate(q, -0.08547011878908428, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.021746101915327998, 8);
  sqcRYGate(q, -2.9040476753815656, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.3140594532948064, 10);
  sqcRYGate(q, -2.0909509066831315, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.562498336340174, 10);
  sqcRYGate(q, 1.6032745860652806, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.8726723356879442, 12);
  sqcRYGate(q, 2.789779588155818, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.2735400592785882, 12);
  sqcRYGate(q, -2.527769724258507, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.65448859410888, 14);
  sqcRYGate(q, -2.9811616807964003, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.0599100344475705, 14);
  sqcRYGate(q, -1.8363259369397813, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.1699201857900343, 16);
  sqcRYGate(q, -1.6041966200814706, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.5110974722929251, 16);
  sqcRYGate(q, -3.0721049074206177, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.534033118500873, 18);
  sqcRYGate(q, 2.163055711277896, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.6113351554412123, 18);
  sqcRYGate(q, 2.624162523616867, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.06767989012798892, 0);
  sqcRYGate(q, 2.385412634153194, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.19196418957847075, 0);
  sqcRYGate(q, 2.015783275058686, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.071831232573338, 2);
  sqcRYGate(q, 2.6016101643647453, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.02319495889510856, 2);
  sqcRYGate(q, 0.004670658546224759, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.753769366795747, 4);
  sqcRYGate(q, 0.42863576472532827, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.1950590422230691, 4);
  sqcRYGate(q, -2.7955276420511757, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5465376408764913, 6);
  sqcRYGate(q, 1.8851423742393925, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.09223526893375113, 6);
  sqcRYGate(q, 2.5807322937133605, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.1912734025037297, 8);
  sqcRYGate(q, 1.9571415192152664, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.611357625573963, 8);
  sqcRYGate(q, -0.7371091227530505, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.1503839944738663, 10);
  sqcRYGate(q, 2.082259691970041, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.9218464608735337, 10);
  sqcRYGate(q, -2.7542865977312005, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.3549263861600807, 12);
  sqcRYGate(q, -2.7376112254885365, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.5838421675894048, 12);
  sqcRYGate(q, 0.36578118477987004, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.6042981722421887, 14);
  sqcRYGate(q, 2.673853130234675, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -1.5554688968905026, 14);
  sqcRYGate(q, 2.2107466770188227, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -1.667671853956091, 16);
  sqcRYGate(q, -2.4634882450977056, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -1.521097859570623, 16);
  sqcRYGate(q, 2.582291529640128, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -1.3392527613183773, 1);
  sqcRYGate(q, 0.3142885819689676, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7438142165515924, 1);
  sqcRYGate(q, -1.4493389117015303, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1095287903174702, 3);
  sqcRYGate(q, 1.8222795458726153, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.106926389278188, 3);
  sqcRYGate(q, -3.0629419569575744, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.1177489186581029, 5);
  sqcRYGate(q, 0.8869387001059579, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.781664501037472, 5);
  sqcRYGate(q, 0.31066824525470693, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.7148099807012365, 7);
  sqcRYGate(q, 1.4858113501858226, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.040152669854353444, 7);
  sqcRYGate(q, 3.0975534766414854, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.8365827115767086, 9);
  sqcRYGate(q, 1.7163191928880774, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.1070829237534645, 9);
  sqcRYGate(q, -0.002506629840667074, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.28879798943508206, 11);
  sqcRYGate(q, 0.883094653311664, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.3421713528295376, 11);
  sqcRYGate(q, -1.264211344298573, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 2.80069583352356, 13);
  sqcRYGate(q, 0.6449493416777128, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.966618657458603, 13);
  sqcRYGate(q, -3.0667382405901518, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 1.7946123701770844, 15);
  sqcRYGate(q, 2.6783688972236313, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 3.121363637860982, 15);
  sqcRYGate(q, -3.056251505114699, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 0.3910380282614359, 17);
  sqcRYGate(q, 1.5159785016289689, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 2.7934225147252194, 17);
  sqcRYGate(q, 1.9138096862681995, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -2.790686862027915, 0);
  sqcRYGate(q, 1.367027898997173, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2162018335685891, 0);
  sqcRYGate(q, -2.578616201121743, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7407928966911292, 2);
  sqcRYGate(q, 1.4993045643065148, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7365652210748709, 2);
  sqcRYGate(q, 1.3810643652604189, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4017376153705947, 4);
  sqcRYGate(q, 0.29782269057966104, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6297732567553223, 4);
  sqcRYGate(q, -2.794488427959096, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7012271461051434, 6);
  sqcRYGate(q, -2.6597175247062252, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4980868055038286, 6);
  sqcRYGate(q, 1.886354042960221, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.103844324831812, 8);
  sqcRYGate(q, 0.03991480518188339, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5150678054734854, 8);
  sqcRYGate(q, -0.08912800272664168, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.7371327637128988, 10);
  sqcRYGate(q, -1.4236936455909739, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.000413553397805, 10);
  sqcRYGate(q, 2.6775459363293157, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6265722467264352, 12);
  sqcRYGate(q, 0.3052583770878885, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.6125570326785397, 12);
  sqcRYGate(q, -0.7358943412154662, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.583963706676544, 14);
  sqcRYGate(q, 0.5380266521960765, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.5842319351492782, 14);
  sqcRYGate(q, 1.0525173785868749, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.089064427973054, 16);
  sqcRYGate(q, 0.6628505753125, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.434851265967874, 16);
  sqcRYGate(q, -1.3050285523629226, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.805603292035003, 18);
  sqcRYGate(q, 1.2693683699152487, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.677507631748095, 18);
  sqcRYGate(q, 0.34335661872239864, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.9953157651024152, 0);
  sqcRYGate(q, -2.87229869226575, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5114937514425355, 0);
  sqcRYGate(q, -0.8918935658371687, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5756108969452534, 2);
  sqcRYGate(q, -1.8933848336757784, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.07606625704721283, 2);
  sqcRYGate(q, -0.06932429184235114, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.4428537548397464, 4);
  sqcRYGate(q, -1.2702681657064672, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.89682792898748, 4);
  sqcRYGate(q, -0.12114681526148365, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.8941086662874316, 6);
  sqcRYGate(q, -3.0684386700043236, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.073065258550521, 6);
  sqcRYGate(q, 3.0384767462569386, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.4160564626737615, 8);
  sqcRYGate(q, 1.3098473637365808, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.0751625317944491, 8);
  sqcRYGate(q, -3.0740585486609895, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.5804052801944062, 10);
  sqcRYGate(q, 1.5029930932792017, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.11783066933340969, 10);
  sqcRYGate(q, -0.1325458753723856, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.3132904115867534, 12);
  sqcRYGate(q, -1.9547463075778664, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.07406889166423891, 12);
  sqcRYGate(q, 0.02155585684771416, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.20150806134568014, 14);
  sqcRYGate(q, 1.4122556945489892, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -3.091842247859639, 14);
  sqcRYGate(q, -3.128078061037211, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -1.514638825768417, 16);
  sqcRYGate(q, 1.0124895245940122, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -2.891758593260881, 16);
  sqcRYGate(q, 1.1749207288666674, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 2.53088008060083, 1);
  sqcRYGate(q, 0.2371174105418225, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9374173062987845, 1);
  sqcRYGate(q, -1.9803072272121491, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.050974513749569184, 3);
  sqcRYGate(q, -1.7732252918601255, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.0352397482074274, 3);
  sqcRYGate(q, 0.14491378065207797, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.3577759867636425, 5);
  sqcRYGate(q, -1.7048927313323663, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.17461327481921032, 5);
  sqcRYGate(q, -0.12041711874606519, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.499452455152853, 7);
  sqcRYGate(q, 1.8034281526347815, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.07599157865481075, 7);
  sqcRYGate(q, 2.9356775968685844, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.0358721104022597, 9);
  sqcRYGate(q, -1.9853140289416693, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.11971466552329613, 9);
  sqcRYGate(q, 0.13871738811518242, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.629850451449288, 11);
  sqcRYGate(q, -1.7349946805055247, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 2.857827723565533, 11);
  sqcRYGate(q, -2.980748273334367, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.40229810530328, 13);
  sqcRYGate(q, 1.5994632957017791, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.9345190023401653, 13);
  sqcRYGate(q, -0.2130844315410352, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.7534347012101782, 15);
  sqcRYGate(q, -1.9434765542714054, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -3.098620832181173, 15);
  sqcRYGate(q, 3.1355355563859537, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -0.4825389311536758, 17);
  sqcRYGate(q, 2.2097642284556915, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -1.1796989239956661, 17);
  sqcRYGate(q, -0.649129884482594, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -0.5093894979593712, 0);
  sqcRYGate(q, -1.3151224319828099, 1);
  sqcRYGate(q, 1.6691047067022853, 2);
  sqcRYGate(q, 2.2966542022350325, 3);
  sqcRYGate(q, -1.2163241067932935, 4);
  sqcRYGate(q, 1.4484460896058442, 5);
  sqcRYGate(q, -1.3712909331047334, 6);
  sqcRYGate(q, -1.5171469025245443, 7);
  sqcRYGate(q, -1.2384779886911261, 8);
  sqcRYGate(q, -1.1822934370327334, 9);
  sqcRYGate(q, 1.6650807308957067, 10);
  sqcRYGate(q, 1.48451879254537, 11);
  sqcRYGate(q, 1.4724924995640425, 12);
  sqcRYGate(q, 1.551658451712461, 13);
  sqcRYGate(q, -0.14274924456868288, 14);
  sqcRYGate(q, -0.743191628163549, 15);
  sqcRYGate(q, -2.0146274188624993, 16);
  sqcRYGate(q, 1.9759500656279236, 17);
  sqcRYGate(q, -1.6853450019913163, 18);
  sqcRYGate(q, -1.0522004231305144, 19);

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
