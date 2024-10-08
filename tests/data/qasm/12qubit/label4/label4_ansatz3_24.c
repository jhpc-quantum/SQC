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

  sqcRYGate(q, -0.4524715694348771, 0);
  sqcRZGate(q, 0.6502860333596746, 0);
  sqcRYGate(q, -1.3015939425575263, 1);
  sqcRZGate(q, 0.29879800965735104, 1);
  sqcRYGate(q, -2.7651888486209275, 2);
  sqcRZGate(q, 2.437962791872699, 2);
  sqcRYGate(q, 3.1381972211229425, 3);
  sqcRZGate(q, -1.1368188971931006, 3);
  sqcRYGate(q, -0.5940622629274683, 4);
  sqcRZGate(q, -0.09735764384974482, 4);
  sqcRYGate(q, -1.427070394365356, 5);
  sqcRZGate(q, 2.887834221768158, 5);
  sqcRYGate(q, -3.132447763842158, 6);
  sqcRZGate(q, 0.003829414862643432, 6);
  sqcRYGate(q, -3.1338893463102053, 7);
  sqcRZGate(q, -1.2130780293117676, 7);
  sqcRYGate(q, 0.5633569593244983, 8);
  sqcRZGate(q, -2.7936542310989187, 8);
  sqcRYGate(q, 0.8733916930852175, 9);
  sqcRZGate(q, -2.676597732897539, 9);
  sqcRYGate(q, -2.4203929744143218, 10);
  sqcRZGate(q, -2.6988628552579597, 10);
  sqcRYGate(q, -0.03456549472055687, 11);
  sqcRZGate(q, 2.963458877701038, 11);
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
  sqcRYGate(q, 2.96980136413248, 0);
  sqcRZGate(q, 1.838044310075766, 0);
  sqcRYGate(q, 1.5495196213881621, 1);
  sqcRZGate(q, 2.616589274242384, 1);
  sqcRYGate(q, 3.136956002322258, 2);
  sqcRZGate(q, 0.8390610693130931, 2);
  sqcRYGate(q, -2.2924158368806915, 3);
  sqcRZGate(q, -1.2159287043562885, 3);
  sqcRYGate(q, 0.026042610328099583, 4);
  sqcRZGate(q, 0.15574332154177295, 4);
  sqcRYGate(q, 0.15068393843500516, 5);
  sqcRZGate(q, 3.065732083367587, 5);
  sqcRYGate(q, 2.4173812334165126, 6);
  sqcRZGate(q, 0.4075873338338421, 6);
  sqcRYGate(q, -3.141015749749688, 7);
  sqcRZGate(q, 1.5020054457207213, 7);
  sqcRYGate(q, -1.5166235450164347, 8);
  sqcRZGate(q, 2.0058778231706347, 8);
  sqcRYGate(q, -1.7872093578822446, 9);
  sqcRZGate(q, -1.032154881961402, 9);
  sqcRYGate(q, 0.5426915678411994, 10);
  sqcRZGate(q, -1.656902467773409, 10);
  sqcRYGate(q, -1.843710439627757, 11);
  sqcRZGate(q, 0.7866769107231171, 11);
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
  sqcRYGate(q, 1.3737598213417548, 0);
  sqcRZGate(q, -3.108168008793679, 0);
  sqcRYGate(q, 0.9775444745894348, 1);
  sqcRZGate(q, -0.4396570206095308, 1);
  sqcRYGate(q, -1.8916244730727083, 2);
  sqcRZGate(q, -2.738150466418346, 2);
  sqcRYGate(q, 3.1356622072031795, 3);
  sqcRZGate(q, -2.985215953739593, 3);
  sqcRYGate(q, -3.129426107429992, 4);
  sqcRZGate(q, -2.1133921962800573, 4);
  sqcRYGate(q, 3.127856486983163, 5);
  sqcRZGate(q, -1.210034724084526, 5);
  sqcRYGate(q, 0.01146379663574469, 6);
  sqcRZGate(q, -0.09652274034550157, 6);
  sqcRYGate(q, 1.5249013281348747, 7);
  sqcRZGate(q, -1.8823180162031907, 7);
  sqcRYGate(q, -0.4841129342148777, 8);
  sqcRZGate(q, 0.46032615478190747, 8);
  sqcRYGate(q, 0.8753151809689889, 9);
  sqcRZGate(q, 2.6606339965385337, 9);
  sqcRYGate(q, -0.32702168613914956, 10);
  sqcRZGate(q, 1.0489913284042824, 10);
  sqcRYGate(q, 3.1178344755707235, 11);
  sqcRZGate(q, -2.736109166982606, 11);
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
  sqcRYGate(q, 2.2663573828285855, 0);
  sqcRZGate(q, -2.119012592939204, 0);
  sqcRYGate(q, -1.6337947032938926, 1);
  sqcRZGate(q, -1.4047256534232486, 1);
  sqcRYGate(q, 7.603110154530413e-05, 2);
  sqcRZGate(q, 1.646702199661794, 2);
  sqcRYGate(q, -1.607584480100064, 3);
  sqcRZGate(q, 1.2795516707653112, 3);
  sqcRYGate(q, 0.004286018062208363, 4);
  sqcRZGate(q, -0.2734783714943454, 4);
  sqcRYGate(q, -3.1371684043282357, 5);
  sqcRZGate(q, -2.4675228675999135, 5);
  sqcRYGate(q, -1.8791187476811864, 6);
  sqcRZGate(q, -0.39983563817888795, 6);
  sqcRYGate(q, 0.0009588352051439485, 7);
  sqcRZGate(q, 1.4500680403763564, 7);
  sqcRYGate(q, -0.48709751304070453, 8);
  sqcRZGate(q, -0.0970862378217614, 8);
  sqcRYGate(q, -2.615324248957024, 9);
  sqcRZGate(q, -0.8073673229807925, 9);
  sqcRYGate(q, -2.490665330642948, 10);
  sqcRZGate(q, 0.01914457855886867, 10);
  sqcRYGate(q, -2.34502596541711, 11);
  sqcRZGate(q, -2.273566636643646, 11);
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
  sqcRYGate(q, 0.05240852377079808, 0);
  sqcRZGate(q, 1.3397149602963463, 0);
  sqcRYGate(q, 0.8393447181839617, 1);
  sqcRZGate(q, -1.849159056154348, 1);
  sqcRYGate(q, 2.353879082320385, 2);
  sqcRZGate(q, -0.7515024387424766, 2);
  sqcRYGate(q, -0.008916482673343218, 3);
  sqcRZGate(q, 2.9117315071734495, 3);
  sqcRYGate(q, -0.00365812050081234, 4);
  sqcRZGate(q, -2.3359328752828095, 4);
  sqcRYGate(q, -0.2652443313788293, 5);
  sqcRZGate(q, -1.5477170174483845, 5);
  sqcRYGate(q, 3.1323929303046545, 6);
  sqcRZGate(q, 1.1291504892865278, 6);
  sqcRYGate(q, -0.6826863346453456, 7);
  sqcRZGate(q, 0.3192129052470018, 7);
  sqcRYGate(q, 2.5060222886374426, 8);
  sqcRZGate(q, -0.7621459971017489, 8);
  sqcRYGate(q, -0.9219020222496502, 9);
  sqcRZGate(q, 2.6393648707227886, 9);
  sqcRYGate(q, -0.31544229480309305, 10);
  sqcRZGate(q, 1.1456015149503336, 10);
  sqcRYGate(q, -2.0088167871876226, 11);
  sqcRZGate(q, -0.07483371560423338, 11);
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
  sqcRYGate(q, 0.9067269301936393, 0);
  sqcRZGate(q, 0.6726407205818993, 0);
  sqcRYGate(q, 0.7880274307874832, 1);
  sqcRZGate(q, 2.2503975442031563, 1);
  sqcRYGate(q, -3.139878123688658, 2);
  sqcRZGate(q, -2.841350479399934, 2);
  sqcRYGate(q, -1.793976060566619, 3);
  sqcRZGate(q, -2.064042068392247, 3);
  sqcRYGate(q, 0.03178875562969986, 4);
  sqcRZGate(q, 2.328812312650252, 4);
  sqcRYGate(q, -3.140007982618538, 5);
  sqcRZGate(q, 1.291486145903109, 5);
  sqcRYGate(q, -1.2268664095556872, 6);
  sqcRZGate(q, 1.0609153432565988, 6);
  sqcRYGate(q, 3.1391365894499446, 7);
  sqcRZGate(q, 2.9183970776271098, 7);
  sqcRYGate(q, 2.7353823650441265, 8);
  sqcRZGate(q, 1.6948208786606846, 8);
  sqcRYGate(q, 0.4181331025857616, 9);
  sqcRZGate(q, -0.342751192121888, 9);
  sqcRYGate(q, -0.6199559870442801, 10);
  sqcRZGate(q, 2.640020138418972, 10);
  sqcRYGate(q, -1.294368713814806, 11);
  sqcRZGate(q, -2.433163929721541, 11);
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
  sqcRYGate(q, 3.0045923822729175, 0);
  sqcRZGate(q, -2.737693433606747, 0);
  sqcRYGate(q, 0.9440747442852153, 1);
  sqcRZGate(q, -1.7571087907749519, 1);
  sqcRYGate(q, 3.0435911896908285, 2);
  sqcRZGate(q, 1.0748140755652604, 2);
  sqcRYGate(q, 1.7368637220227099, 3);
  sqcRZGate(q, -2.6882929740631654, 3);
  sqcRYGate(q, 3.138949670055011, 4);
  sqcRZGate(q, -0.9530549261957382, 4);
  sqcRYGate(q, 1.7634699506371414, 5);
  sqcRZGate(q, -1.5942142654591898, 5);
  sqcRYGate(q, 0.0021042055381661484, 6);
  sqcRZGate(q, -0.8596912144659818, 6);
  sqcRYGate(q, 2.1899161124176523, 7);
  sqcRZGate(q, 2.6608197542735414, 7);
  sqcRYGate(q, 2.8513471904275076, 8);
  sqcRZGate(q, 2.857186521367786, 8);
  sqcRYGate(q, 0.9424038111432606, 9);
  sqcRZGate(q, 1.5481880410922786, 9);
  sqcRYGate(q, 1.6196710453176582, 10);
  sqcRZGate(q, -0.41538004976929516, 10);
  sqcRYGate(q, 0.8642487475184236, 11);
  sqcRZGate(q, -2.2617820778448765, 11);
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
  sqcRYGate(q, 1.5483422486240386, 0);
  sqcRZGate(q, 0.8488164366575138, 0);
  sqcRYGate(q, 3.137697454863119, 1);
  sqcRZGate(q, 1.8131329503026927, 1);
  sqcRYGate(q, -3.1377028962169544, 2);
  sqcRZGate(q, 3.09565890476875, 2);
  sqcRYGate(q, 3.102233436804289, 3);
  sqcRZGate(q, 2.1830417636690993, 3);
  sqcRYGate(q, -0.013227149130651508, 4);
  sqcRZGate(q, -1.4807282313573038, 4);
  sqcRYGate(q, 0.024244385529733847, 5);
  sqcRZGate(q, 3.098625950353843, 5);
  sqcRYGate(q, 1.7924935989733655, 6);
  sqcRZGate(q, 0.5697679860902979, 6);
  sqcRYGate(q, -3.140351324038941, 7);
  sqcRZGate(q, -1.132904938147348, 7);
  sqcRYGate(q, -0.18733751172578295, 8);
  sqcRZGate(q, 1.4168142194715232, 8);
  sqcRYGate(q, -2.1365440279487777, 9);
  sqcRZGate(q, -0.7832842870099386, 9);
  sqcRYGate(q, 0.34688747840214074, 10);
  sqcRZGate(q, 0.003929174889604313, 10);
  sqcRYGate(q, -1.494757300449331, 11);
  sqcRZGate(q, -0.2510454760556229, 11);
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
  sqcRYGate(q, 1.1357158668454774, 0);
  sqcRZGate(q, -1.523063552735187, 0);
  sqcRYGate(q, -2.195041624263978, 1);
  sqcRZGate(q, -0.8051051220284614, 1);
  sqcRYGate(q, 1.6677972570080655, 2);
  sqcRZGate(q, 1.3653722920829925, 2);
  sqcRYGate(q, -0.7544482237276967, 3);
  sqcRZGate(q, 2.8994855593987774, 3);
  sqcRYGate(q, 1.589310691458267, 4);
  sqcRZGate(q, 2.6244907336247247, 4);
  sqcRYGate(q, 1.8509660111670754, 5);
  sqcRZGate(q, 2.3628615102681567, 5);
  sqcRYGate(q, -0.0023403244618746205, 6);
  sqcRZGate(q, 0.7298455756557862, 6);
  sqcRYGate(q, -2.9198458596951413, 7);
  sqcRZGate(q, 3.040034764628484, 7);
  sqcRYGate(q, 1.155949960996124, 8);
  sqcRZGate(q, -1.5003865532024445, 8);
  sqcRYGate(q, 0.6995005747233769, 9);
  sqcRZGate(q, 2.6795220343205655, 9);
  sqcRYGate(q, 2.4678648187494003, 10);
  sqcRZGate(q, 2.0156268721393493, 10);
  sqcRYGate(q, 0.5354387931338698, 11);
  sqcRZGate(q, 2.0895460898236893, 11);
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
  sqcRYGate(q, -1.7964115212764078, 0);
  sqcRZGate(q, -0.8609286292692839, 0);
  sqcRYGate(q, -0.014785517946185323, 1);
  sqcRZGate(q, -2.69524979490076, 1);
  sqcRYGate(q, -0.22631052343419888, 2);
  sqcRZGate(q, 0.43561747759194036, 2);
  sqcRYGate(q, 2.718229060281354, 3);
  sqcRZGate(q, 1.5535710445229887, 3);
  sqcRYGate(q, -0.052807048496210866, 4);
  sqcRZGate(q, -2.633701198737438, 4);
  sqcRYGate(q, 3.141394797921438, 5);
  sqcRZGate(q, 1.8128741271746518, 5);
  sqcRYGate(q, 0.0001667456005752069, 6);
  sqcRZGate(q, 0.767688220096721, 6);
  sqcRYGate(q, 0.0016919598023807838, 7);
  sqcRZGate(q, 2.931459815743307, 7);
  sqcRYGate(q, 0.5829318294369568, 8);
  sqcRZGate(q, -1.2464974835755716, 8);
  sqcRYGate(q, 2.597193187982062, 9);
  sqcRZGate(q, -2.795137795009906, 9);
  sqcRYGate(q, 1.0053798443948008, 10);
  sqcRZGate(q, 2.2322656019418083, 10);
  sqcRYGate(q, -2.7343924325936206, 11);
  sqcRZGate(q, -3.1105100192936694, 11);
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
  sqcRYGate(q, 3.1362468874490257, 0);
  sqcRZGate(q, 1.806981284907246, 0);
  sqcRYGate(q, 2.007733236698153, 1);
  sqcRZGate(q, -3.0650557303222556, 1);
  sqcRYGate(q, -3.136139506587197, 2);
  sqcRZGate(q, -2.068390955007314, 2);
  sqcRYGate(q, 1.581194930820735, 3);
  sqcRZGate(q, -1.4320991968378918, 3);
  sqcRYGate(q, -1.548559953770324, 4);
  sqcRZGate(q, -0.0069834244442690254, 4);
  sqcRYGate(q, 1.9933719399507126, 5);
  sqcRZGate(q, -0.00856589607103686, 5);
  sqcRYGate(q, -0.0018419954610604783, 6);
  sqcRZGate(q, -1.8319455763053591, 6);
  sqcRYGate(q, 2.8561397414653964, 7);
  sqcRZGate(q, -2.983426581724335, 7);
  sqcRYGate(q, -0.8722089869817262, 8);
  sqcRZGate(q, 1.8483918248458484, 8);
  sqcRYGate(q, 1.8058425961301428, 9);
  sqcRZGate(q, 0.9250021053932906, 9);
  sqcRYGate(q, 0.09487410336392976, 10);
  sqcRZGate(q, -0.6964472565174331, 10);
  sqcRYGate(q, 2.1262629043712216, 11);
  sqcRZGate(q, 0.6407679994740922, 11);
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
  sqcRYGate(q, -1.9186950174989512, 0);
  sqcRZGate(q, 1.4153630494942098, 0);
  sqcRYGate(q, 0.017028903918283884, 1);
  sqcRZGate(q, -1.9888374011281842, 1);
  sqcRYGate(q, 0.180948934813836, 2);
  sqcRZGate(q, -2.7017149713366573, 2);
  sqcRYGate(q, -3.133334795427948, 3);
  sqcRZGate(q, -0.8731159282533945, 3);
  sqcRYGate(q, -1.7761527843137461, 4);
  sqcRZGate(q, -1.2752138870123977, 4);
  sqcRYGate(q, -1.4840688216186795, 5);
  sqcRZGate(q, 3.131783582593044, 5);
  sqcRYGate(q, -2.9918064463923604, 6);
  sqcRZGate(q, -2.8597644898747245, 6);
  sqcRYGate(q, -0.00015661619065754, 7);
  sqcRZGate(q, -1.3651595809566164, 7);
  sqcRYGate(q, -2.583727755386184, 8);
  sqcRZGate(q, -0.1259707565477577, 8);
  sqcRYGate(q, -0.8926436229126297, 9);
  sqcRZGate(q, 1.4228921006836757, 9);
  sqcRYGate(q, 1.9357159593866013, 10);
  sqcRZGate(q, 0.2627323007614387, 10);
  sqcRYGate(q, -2.4563166569822825, 11);
  sqcRZGate(q, -2.061753880031996, 11);
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
  sqcRYGate(q, 0.0008905085581956129, 0);
  sqcRZGate(q, -1.1794189626261753, 0);
  sqcRYGate(q, -2.9843506953567016, 1);
  sqcRZGate(q, 2.392186127110714, 1);
  sqcRYGate(q, 3.140470134693118, 2);
  sqcRZGate(q, 2.49380920208873, 2);
  sqcRYGate(q, -0.04197726172011507, 3);
  sqcRZGate(q, -1.4145099081227714, 3);
  sqcRYGate(q, 3.141479520094882, 4);
  sqcRZGate(q, 1.8694967278376855, 4);
  sqcRYGate(q, -1.987470819202174, 5);
  sqcRZGate(q, 2.589274335260918, 5);
  sqcRYGate(q, -3.1391431229123006, 6);
  sqcRZGate(q, -1.6058863317818526, 6);
  sqcRYGate(q, 3.136397583970692, 7);
  sqcRZGate(q, 0.7146978645301885, 7);
  sqcRYGate(q, -1.7840818307458521, 8);
  sqcRZGate(q, 2.9867029359847277, 8);
  sqcRYGate(q, 0.8327880725944302, 9);
  sqcRZGate(q, -2.492082141359829, 9);
  sqcRYGate(q, 0.7692059422884423, 10);
  sqcRZGate(q, -2.523916113780958, 10);
  sqcRYGate(q, -1.0648545740643964, 11);
  sqcRZGate(q, 0.26374820613644623, 11);
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
  sqcRYGate(q, 1.4630096064378335, 0);
  sqcRZGate(q, 1.2483675554406173, 0);
  sqcRYGate(q, 1.607984251163011, 1);
  sqcRZGate(q, 1.7358326664874948, 1);
  sqcRYGate(q, 0.18098277363008997, 2);
  sqcRZGate(q, -1.4096182448316297, 2);
  sqcRYGate(q, 3.089041564775246, 3);
  sqcRZGate(q, -1.951973704191433, 3);
  sqcRYGate(q, 0.4720481731207995, 4);
  sqcRZGate(q, -0.5512244160854234, 4);
  sqcRYGate(q, 3.098972452803008, 5);
  sqcRZGate(q, -1.052867312817513, 5);
  sqcRYGate(q, -3.1209065004183847, 6);
  sqcRZGate(q, 0.9375037977545384, 6);
  sqcRYGate(q, 0.0034789887729669293, 7);
  sqcRZGate(q, -0.134810745578422, 7);
  sqcRYGate(q, -0.6454892663721985, 8);
  sqcRZGate(q, -0.9075406097381424, 8);
  sqcRYGate(q, -2.875853595960698, 9);
  sqcRZGate(q, 2.180625761768882, 9);
  sqcRYGate(q, -2.0822333758642193, 10);
  sqcRZGate(q, -0.5714287958746294, 10);
  sqcRYGate(q, -1.3896815988385052, 11);
  sqcRZGate(q, 2.3783623711512716, 11);
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
  sqcRYGate(q, 0.10767612324891396, 0);
  sqcRZGate(q, 1.4932589509955017, 0);
  sqcRYGate(q, 0.7666230239891847, 1);
  sqcRZGate(q, 0.22713550415402176, 1);
  sqcRYGate(q, -0.26973322811883566, 2);
  sqcRZGate(q, -2.987397005308403, 2);
  sqcRYGate(q, 0.0007223048817532884, 3);
  sqcRZGate(q, -1.2056363696041563, 3);
  sqcRYGate(q, 3.139813682238062, 4);
  sqcRZGate(q, -1.6091727209223474, 4);
  sqcRYGate(q, 1.860847238569634, 5);
  sqcRZGate(q, 1.0631844757488635, 5);
  sqcRYGate(q, 2.9111315712821937, 6);
  sqcRZGate(q, 2.8222452413222676, 6);
  sqcRYGate(q, -0.004397179991017958, 7);
  sqcRZGate(q, -1.6074721626860295, 7);
  sqcRYGate(q, -0.26356465518095407, 8);
  sqcRZGate(q, -0.9112904578822976, 8);
  sqcRYGate(q, 1.4091976977661864, 9);
  sqcRZGate(q, -1.344446711478139, 9);
  sqcRYGate(q, -0.831490790080867, 10);
  sqcRZGate(q, 2.3252653375368166, 10);
  sqcRYGate(q, -1.5945355750293402, 11);
  sqcRZGate(q, 0.14296763218883693, 11);
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
  sqcRYGate(q, -1.5972242473923561, 0);
  sqcRZGate(q, -2.2293228539016523, 0);
  sqcRYGate(q, -1.3303872001084889, 1);
  sqcRZGate(q, 1.5123497099739307, 1);
  sqcRYGate(q, -0.16118548275346356, 2);
  sqcRZGate(q, -1.388377975968792, 2);
  sqcRYGate(q, -0.1343016138473056, 3);
  sqcRZGate(q, 2.7408112689028465, 3);
  sqcRYGate(q, -1.6415148307603686, 4);
  sqcRZGate(q, 1.7064220665540042, 4);
  sqcRYGate(q, 1.4879071493528286, 5);
  sqcRZGate(q, -1.9382962948176523, 5);
  sqcRYGate(q, -3.116164532744364, 6);
  sqcRZGate(q, 2.722691847385557, 6);
  sqcRYGate(q, 0.053115489773872294, 7);
  sqcRZGate(q, 1.3690455601568463, 7);
  sqcRYGate(q, 1.5874304675524984, 8);
  sqcRZGate(q, 3.0346829219240785, 8);
  sqcRYGate(q, -1.3780777854670507, 9);
  sqcRZGate(q, 2.4892747405238116, 9);
  sqcRYGate(q, 1.1383937362627794, 10);
  sqcRZGate(q, 0.13738033083842896, 10);
  sqcRYGate(q, -0.890650537737958, 11);
  sqcRZGate(q, 2.2383286723601934, 11);
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
  sqcRYGate(q, -2.970711369535487, 0);
  sqcRZGate(q, -1.4562110963609365, 0);
  sqcRYGate(q, -1.4719230118708673, 1);
  sqcRZGate(q, 3.1090783691991395, 1);
  sqcRYGate(q, -3.13996677586466, 2);
  sqcRZGate(q, -1.7610827207701343, 2);
  sqcRYGate(q, -0.00034111876962761306, 3);
  sqcRZGate(q, -1.1789295982497374, 3);
  sqcRYGate(q, -3.1094104985598543, 4);
  sqcRZGate(q, -1.4396894135097265, 4);
  sqcRYGate(q, -3.1410884000706343, 5);
  sqcRZGate(q, -3.1302895997438114, 5);
  sqcRYGate(q, 0.0003593431688537762, 6);
  sqcRZGate(q, 1.907856717010893, 6);
  sqcRYGate(q, 3.1378777542724294, 7);
  sqcRZGate(q, 3.029424733095526, 7);
  sqcRYGate(q, -0.7174845462459355, 8);
  sqcRZGate(q, -1.5164340945783257, 8);
  sqcRYGate(q, 0.08069480812034294, 9);
  sqcRZGate(q, -0.42318358296002634, 9);
  sqcRYGate(q, -1.6096885813935264, 10);
  sqcRZGate(q, 3.1132471713463845, 10);
  sqcRYGate(q, 1.406470899491883, 11);
  sqcRZGate(q, -1.2815170210718985, 11);
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
  sqcRYGate(q, -3.1290548340767343, 0);
  sqcRZGate(q, -0.824987821359056, 0);
  sqcRYGate(q, 2.1538903296783527, 1);
  sqcRZGate(q, 1.7247984219377968, 1);
  sqcRYGate(q, 3.0309922785655705, 2);
  sqcRZGate(q, 2.019251793680561, 2);
  sqcRYGate(q, 2.531499536186786, 3);
  sqcRZGate(q, 1.4882373340919655, 3);
  sqcRYGate(q, 1.4963216889654454, 4);
  sqcRZGate(q, 1.568037299403948, 4);
  sqcRYGate(q, 2.816960743464911, 5);
  sqcRZGate(q, -1.166804423671245, 5);
  sqcRYGate(q, 3.141002181085661, 6);
  sqcRZGate(q, 1.8180470820144068, 6);
  sqcRYGate(q, 2.7122795616867754, 7);
  sqcRZGate(q, -0.6629619061364957, 7);
  sqcRYGate(q, -1.5702673884498282, 8);
  sqcRZGate(q, -2.28019437305601, 8);
  sqcRYGate(q, 2.7666216765422096, 9);
  sqcRZGate(q, 2.722673902304865, 9);
  sqcRYGate(q, 0.9079081555782402, 10);
  sqcRZGate(q, 3.1099501044031213, 10);
  sqcRYGate(q, 1.5733556141904483, 11);
  sqcRZGate(q, 1.0911896365030325, 11);
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
  sqcRYGate(q, -0.6459217984368077, 0);
  sqcRZGate(q, -2.8847806750062315, 0);
  sqcRYGate(q, -3.1376749667241115, 1);
  sqcRZGate(q, 1.7610272664212823, 1);
  sqcRYGate(q, -0.004752643007682522, 2);
  sqcRZGate(q, -0.011021387712019482, 2);
  sqcRYGate(q, -3.1414640652980355, 3);
  sqcRZGate(q, 3.035522220080465, 3);
  sqcRYGate(q, 3.140962887952312, 4);
  sqcRZGate(q, -1.334222720693293, 4);
  sqcRYGate(q, -0.10439902271445334, 5);
  sqcRZGate(q, 0.056969401592598674, 5);
  sqcRYGate(q, 1.5678170387998362, 6);
  sqcRZGate(q, 0.4627292563754818, 6);
  sqcRYGate(q, 0.003992402171078879, 7);
  sqcRZGate(q, -0.2183649888767566, 7);
  sqcRYGate(q, 1.4943156453711786, 8);
  sqcRZGate(q, 1.60201170662988, 8);
  sqcRYGate(q, 0.02310881529187186, 9);
  sqcRZGate(q, 1.227102490814918, 9);
  sqcRYGate(q, 1.6323525356865183, 10);
  sqcRZGate(q, 0.8565259310033644, 10);
  sqcRYGate(q, 1.806314784981316, 11);
  sqcRZGate(q, 2.114351610287538, 11);
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
  sqcRYGate(q, 3.0898647100299663, 0);
  sqcRZGate(q, -1.3595883873503807, 0);
  sqcRYGate(q, 2.387048330470128, 1);
  sqcRZGate(q, -0.709728213748309, 1);
  sqcRYGate(q, 1.4267528368122002, 2);
  sqcRZGate(q, 0.4591560334920554, 2);
  sqcRYGate(q, 1.5761637466145897, 3);
  sqcRZGate(q, 1.9952863546217727, 3);
  sqcRYGate(q, -1.5787648988156837, 4);
  sqcRZGate(q, -0.9347569687530015, 4);
  sqcRYGate(q, 2.8338960592341156, 5);
  sqcRZGate(q, 0.6921479544813252, 5);
  sqcRYGate(q, 1.4793338165058214, 6);
  sqcRZGate(q, 0.6413416975078261, 6);
  sqcRYGate(q, 0.0009636603032013341, 7);
  sqcRZGate(q, -2.5743817492385612, 7);
  sqcRYGate(q, -0.06133573910887513, 8);
  sqcRZGate(q, 2.985058532123452, 8);
  sqcRYGate(q, 3.1084800625302895, 9);
  sqcRZGate(q, 2.9387803442821117, 9);
  sqcRYGate(q, -2.0021912701649685, 10);
  sqcRZGate(q, -1.0043662001595757, 10);
  sqcRYGate(q, 3.1089482049042894, 11);
  sqcRZGate(q, -3.0450567513760993, 11);
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
  sqcRYGate(q, -1.5941326608100859, 0);
  sqcRZGate(q, 0.8343561305630587, 0);
  sqcRYGate(q, -0.5543668305679113, 1);
  sqcRZGate(q, 1.92505966035881, 1);
  sqcRYGate(q, -2.705773250594426, 2);
  sqcRZGate(q, 2.6494161784801658, 2);
  sqcRYGate(q, -3.1407612761712844, 3);
  sqcRZGate(q, 1.6656714930186105, 3);
  sqcRYGate(q, -0.00014537529610869626, 4);
  sqcRZGate(q, -0.636152419601073, 4);
  sqcRYGate(q, 0.0007089383693319462, 5);
  sqcRZGate(q, -2.0330246807732872, 5);
  sqcRYGate(q, -3.1365670415665, 6);
  sqcRZGate(q, 0.6738659578394746, 6);
  sqcRYGate(q, 3.1414855726725177, 7);
  sqcRZGate(q, -0.44306213979586784, 7);
  sqcRYGate(q, 3.035124202449293, 8);
  sqcRZGate(q, 1.4354877287343157, 8);
  sqcRYGate(q, -1.572695254649311, 9);
  sqcRZGate(q, 3.1123253728358633, 9);
  sqcRYGate(q, -2.937540642580248, 10);
  sqcRZGate(q, 2.9401637494096473, 10);
  sqcRYGate(q, 1.3295808656364607, 11);
  sqcRZGate(q, 2.0389827328792114, 11);
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
  sqcRYGate(q, -0.0216259276052222, 0);
  sqcRZGate(q, -0.7935601298054867, 0);
  sqcRYGate(q, -1.3529858963683095, 1);
  sqcRZGate(q, -0.6443693752733557, 1);
  sqcRYGate(q, 0.33607122154147717, 2);
  sqcRZGate(q, 0.3271464366826328, 2);
  sqcRYGate(q, 3.1396545923990824, 3);
  sqcRZGate(q, -0.6781193073699843, 3);
  sqcRYGate(q, 1.7952136287150253, 4);
  sqcRZGate(q, 1.0511785254293793, 4);
  sqcRYGate(q, -2.5486230076008938, 5);
  sqcRZGate(q, 1.4008329696279955, 5);
  sqcRYGate(q, -1.4099586100204116, 6);
  sqcRZGate(q, -1.57477579010023, 6);
  sqcRYGate(q, 1.5566954588193749, 7);
  sqcRZGate(q, -3.123795908510956, 7);
  sqcRYGate(q, -3.137428875810493, 8);
  sqcRZGate(q, 1.5480003534448097, 8);
  sqcRYGate(q, -2.2756094457932106, 9);
  sqcRZGate(q, -1.3548036456146537, 9);
  sqcRYGate(q, 1.2461171229315928, 10);
  sqcRZGate(q, 3.081932551268136, 10);
  sqcRYGate(q, 0.007630617718200838, 11);
  sqcRZGate(q, -2.012270857597237, 11);
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
  sqcRYGate(q, 3.141426982352795, 0);
  sqcRZGate(q, 2.8600449766067544, 0);
  sqcRYGate(q, 3.034621390874067, 1);
  sqcRZGate(q, -2.962390609937431, 1);
  sqcRYGate(q, 2.330765712775792, 2);
  sqcRZGate(q, -2.808368003346968, 2);
  sqcRYGate(q, -3.140474837639369, 3);
  sqcRZGate(q, -0.41872187597724647, 3);
  sqcRYGate(q, -3.1413450651403094, 4);
  sqcRZGate(q, 1.5315106126894675, 4);
  sqcRYGate(q, 2.2342847349115718, 5);
  sqcRZGate(q, -0.001118941312413703, 5);
  sqcRYGate(q, -3.141508102641562, 6);
  sqcRZGate(q, -1.083602605733308, 6);
  sqcRYGate(q, -0.004173325421469088, 7);
  sqcRZGate(q, 1.4787140721395264, 7);
  sqcRYGate(q, -1.5268003861086896, 8);
  sqcRZGate(q, -2.6477527189972583, 8);
  sqcRYGate(q, 0.0005534530096849011, 9);
  sqcRZGate(q, 2.357338515534023, 9);
  sqcRYGate(q, 1.8311561266503915, 10);
  sqcRZGate(q, -1.6200287521950334, 10);
  sqcRYGate(q, 1.4617972266043697, 11);
  sqcRZGate(q, 0.008760515614034679, 11);
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
  sqcRYGate(q, 3.079644774376506, 0);
  sqcRZGate(q, 2.716212937943605, 0);
  sqcRYGate(q, 0.699811364790701, 1);
  sqcRZGate(q, 2.103571892507737, 1);
  sqcRYGate(q, -0.4923485206008791, 2);
  sqcRZGate(q, -0.5018748164443512, 2);
  sqcRYGate(q, -0.001093212315024372, 3);
  sqcRZGate(q, -1.095771795178207, 3);
  sqcRYGate(q, 0.0005124295270399269, 4);
  sqcRZGate(q, -0.5953737692369527, 4);
  sqcRYGate(q, 2.435250555813112, 5);
  sqcRZGate(q, 0.6707328117697098, 5);
  sqcRYGate(q, -3.13345994051183, 6);
  sqcRZGate(q, 0.6017038870694789, 6);
  sqcRYGate(q, -0.0069236276885673576, 7);
  sqcRZGate(q, 1.3336720943367508, 7);
  sqcRYGate(q, -3.136375432521499, 8);
  sqcRZGate(q, 0.5215814004525434, 8);
  sqcRYGate(q, 3.128045353296992, 9);
  sqcRZGate(q, -0.51840872466087, 9);
  sqcRYGate(q, -0.9517632345120504, 10);
  sqcRZGate(q, 2.959939568168586, 10);
  sqcRYGate(q, 1.5669223874656906, 11);
  sqcRZGate(q, -1.5711728593689283, 11);
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
  sqcRYGate(q, 0.006747967505021707, 0);
  sqcRZGate(q, 0.3663530466679162, 0);
  sqcRYGate(q, -0.5988664579870919, 1);
  sqcRZGate(q, 1.9061408912848545, 1);
  sqcRYGate(q, -0.549688743559309, 2);
  sqcRZGate(q, -2.1914827188040977, 2);
  sqcRYGate(q, 0.011983402558739975, 3);
  sqcRZGate(q, 1.2291253588909703, 3);
  sqcRYGate(q, -0.00041537212739592997, 4);
  sqcRZGate(q, -1.6787991634895236, 4);
  sqcRYGate(q, -1.0358028217850812, 5);
  sqcRZGate(q, -0.5270589422148513, 5);
  sqcRYGate(q, 3.1415564675201177, 6);
  sqcRZGate(q, 0.2738819609186817, 6);
  sqcRYGate(q, -3.140077317778358, 7);
  sqcRZGate(q, 1.4626152004942687, 7);
  sqcRYGate(q, 1.6575862107718222, 8);
  sqcRZGate(q, 0.00802530028108528, 8);
  sqcRYGate(q, -3.140146510571719, 9);
  sqcRZGate(q, -1.5251933301313534, 9);
  sqcRYGate(q, 1.572563835695961, 10);
  sqcRZGate(q, -0.022194434142972952, 10);
  sqcRYGate(q, -1.5697302223160192, 11);
  sqcRZGate(q, 1.5400607001575493, 11);
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
  sqcRYGate(q, -0.033775117190991445, 0);
  sqcRZGate(q, -0.2538800446453562, 0);
  sqcRYGate(q, 2.26294076535899, 1);
  sqcRZGate(q, 2.1000594409226094, 1);
  sqcRYGate(q, -0.15961639435659292, 2);
  sqcRZGate(q, 1.9181179717884234, 2);
  sqcRYGate(q, -3.140724225919533, 3);
  sqcRZGate(q, 0.9842596096955581, 3);
  sqcRYGate(q, 3.134564054721059, 4);
  sqcRZGate(q, 2.87118060585762, 4);
  sqcRYGate(q, 1.3097526538990447, 5);
  sqcRZGate(q, -3.139930950634365, 5);
  sqcRYGate(q, -3.0078338850068853, 6);
  sqcRZGate(q, 1.8502452011273591, 6);
  sqcRYGate(q, 0.004114089420760641, 7);
  sqcRZGate(q, -2.8467708042318196, 7);
  sqcRYGate(q, -1.5754564588061655, 8);
  sqcRZGate(q, 0.015377773340333337, 8);
  sqcRYGate(q, 1.572414108885023, 9);
  sqcRZGate(q, 0.04269470102868486, 9);
  sqcRYGate(q, -3.1296085190597354, 10);
  sqcRZGate(q, 3.1174481790100623, 10);
  sqcRYGate(q, 1.5675006331304386, 11);
  sqcRZGate(q, -1.5691615113018493, 11);
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
  sqcRYGate(q, 0.9462774652507422, 0);
  sqcRZGate(q, -2.947843251913783, 0);
  sqcRYGate(q, -0.7092162543755771, 1);
  sqcRZGate(q, -1.8237090956567124, 1);
  sqcRYGate(q, 1.429599261611001, 2);
  sqcRZGate(q, 1.771965593890189, 2);
  sqcRYGate(q, 0.23850930686109706, 3);
  sqcRZGate(q, -2.2114371200573943, 3);
  sqcRYGate(q, 0.054402640425654715, 4);
  sqcRZGate(q, -3.0970001041627206, 4);
  sqcRYGate(q, -1.7894667490424918, 5);
  sqcRZGate(q, -0.4497721233594927, 5);
  sqcRYGate(q, 0.00040721420633271777, 6);
  sqcRZGate(q, -1.22934547871911, 6);
  sqcRYGate(q, -3.1390078450395573, 7);
  sqcRZGate(q, -1.0743730591730078, 7);
  sqcRYGate(q, 1.570188268608982, 8);
  sqcRZGate(q, -0.189689030591726, 8);
  sqcRYGate(q, 2.7222036807443453, 9);
  sqcRZGate(q, -0.008206480335654298, 9);
  sqcRYGate(q, 1.5736207220633938, 10);
  sqcRZGate(q, 0.40761617579797077, 10);
  sqcRYGate(q, 1.5634648508507754, 11);
  sqcRZGate(q, -0.7044138471814292, 11);
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
  sqcRYGate(q, 0.03414948550087615, 0);
  sqcRZGate(q, -1.6802103716449697, 0);
  sqcRYGate(q, 1.562539622617888, 1);
  sqcRZGate(q, 1.162299445812261, 1);
  sqcRYGate(q, -0.0010161593049113904, 2);
  sqcRZGate(q, 0.98287653871449, 2);
  sqcRYGate(q, -0.0006996457083203425, 3);
  sqcRZGate(q, -2.8133177046476434, 3);
  sqcRYGate(q, -1.570052741538236, 4);
  sqcRZGate(q, -1.9298127543941106, 4);
  sqcRYGate(q, 0.03551371164513384, 5);
  sqcRZGate(q, -0.21865549113668872, 5);
  sqcRYGate(q, -1.5687726884715907, 6);
  sqcRZGate(q, 1.2598273863585119, 6);
  sqcRYGate(q, 1.5542900351886497, 7);
  sqcRZGate(q, -2.4013742251718657, 7);
  sqcRYGate(q, -0.002268525858084798, 8);
  sqcRZGate(q, -1.6887854519250025, 8);
  sqcRYGate(q, 1.5630090790629332, 9);
  sqcRZGate(q, 0.738578875381873, 9);
  sqcRYGate(q, -3.132002961252399, 10);
  sqcRZGate(q, 1.6694836250228153, 10);
  sqcRYGate(q, 3.1389403109111385, 11);
  sqcRZGate(q, 2.3081747163747997, 11);

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
