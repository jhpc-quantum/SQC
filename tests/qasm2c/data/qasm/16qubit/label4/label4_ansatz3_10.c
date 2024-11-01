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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 0.00045017794907753483, 0);
  sqcRZGate(q, -1.365790670366674, 0);
  sqcRYGate(q, 3.1087809564684794, 1);
  sqcRZGate(q, -0.08066960501552198, 1);
  sqcRYGate(q, -2.8814761506450655, 2);
  sqcRZGate(q, -0.15010017782050067, 2);
  sqcRYGate(q, 1.6101669750663232, 3);
  sqcRZGate(q, 0.00018672204831188634, 3);
  sqcRYGate(q, -1.5866394766027068, 4);
  sqcRZGate(q, -1.576099566744101, 4);
  sqcRYGate(q, 0.00043822976420086274, 5);
  sqcRZGate(q, -1.3889832376897244, 5);
  sqcRYGate(q, -3.1060499301883775, 6);
  sqcRZGate(q, -2.5536466885258298, 6);
  sqcRYGate(q, 1.5440352618738267, 7);
  sqcRZGate(q, -1.3169110958031565, 7);
  sqcRYGate(q, -1.5413698455702425, 8);
  sqcRZGate(q, 3.140139262956862, 8);
  sqcRYGate(q, -0.001749324226724601, 9);
  sqcRZGate(q, -2.145003884674453, 9);
  sqcRYGate(q, 3.1414664242043586, 10);
  sqcRZGate(q, 0.35572044977468953, 10);
  sqcRYGate(q, 0.0017289975487860224, 11);
  sqcRZGate(q, 2.6949076265347207, 11);
  sqcRYGate(q, 1.4029755374006605, 12);
  sqcRZGate(q, -2.366698980765938, 12);
  sqcRYGate(q, 0.6553696653004423, 13);
  sqcRZGate(q, -0.33919120491025184, 13);
  sqcRYGate(q, -1.205366893962654, 14);
  sqcRZGate(q, 1.3799096350383646, 14);
  sqcRYGate(q, 1.6170796036620816, 15);
  sqcRZGate(q, 0.26548338517560494, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -3.1402928203973355, 0);
  sqcRZGate(q, -0.48187100123082155, 0);
  sqcRYGate(q, -1.5765535814838032, 1);
  sqcRZGate(q, -3.141175755829049, 1);
  sqcRYGate(q, -0.0005937074888997529, 2);
  sqcRZGate(q, 0.07085264951050885, 2);
  sqcRYGate(q, -1.6088704912375649, 3);
  sqcRZGate(q, 3.044877306133872, 3);
  sqcRYGate(q, 3.1363731963435377, 4);
  sqcRZGate(q, -1.3992379947481983, 4);
  sqcRYGate(q, -0.02751378612700872, 5);
  sqcRZGate(q, 2.9795131874626004, 5);
  sqcRYGate(q, 3.141460160392403, 6);
  sqcRZGate(q, 0.7556172917184278, 6);
  sqcRYGate(q, 1.012549299978307, 7);
  sqcRZGate(q, 1.4209668242266054, 7);
  sqcRYGate(q, -1.5405689381136825, 8);
  sqcRZGate(q, -2.05386734256242, 8);
  sqcRYGate(q, -0.3672643006188169, 9);
  sqcRZGate(q, -0.12984179292938802, 9);
  sqcRYGate(q, -1.5706272748133083, 10);
  sqcRZGate(q, -3.0641677135946255, 10);
  sqcRYGate(q, -0.0036621898565575624, 11);
  sqcRZGate(q, -0.29667671985082916, 11);
  sqcRYGate(q, 0.9771260864294141, 12);
  sqcRZGate(q, 1.599652716552545, 12);
  sqcRYGate(q, 0.37267438289398314, 13);
  sqcRZGate(q, -2.9482568229387667, 13);
  sqcRYGate(q, -1.8346170007816407, 14);
  sqcRZGate(q, 0.01152489688618985, 14);
  sqcRYGate(q, -2.5922262441830313, 15);
  sqcRZGate(q, -3.05640715550412, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -2.0526673541707945, 0);
  sqcRZGate(q, 1.7236813535179616, 0);
  sqcRYGate(q, -1.5683737262968658, 1);
  sqcRZGate(q, 0.03053229427074111, 1);
  sqcRYGate(q, 0.010272101282201556, 2);
  sqcRZGate(q, -2.71317977454007, 2);
  sqcRYGate(q, -3.109886372966401, 3);
  sqcRZGate(q, -2.0008702675535464, 3);
  sqcRYGate(q, 3.127289456248814, 4);
  sqcRZGate(q, -2.9651099924511275, 4);
  sqcRYGate(q, -1.5713852843823335, 5);
  sqcRZGate(q, 1.5705133008792964, 5);
  sqcRYGate(q, -0.0009667607185291031, 6);
  sqcRZGate(q, 0.8707590302165541, 6);
  sqcRYGate(q, -2.0261488754226464, 7);
  sqcRZGate(q, 2.225002396816606, 7);
  sqcRYGate(q, 1.5693079226851383, 8);
  sqcRZGate(q, -0.1737270237633347, 8);
  sqcRYGate(q, -2.525014615379404, 9);
  sqcRZGate(q, 2.4858239646053146, 9);
  sqcRYGate(q, -0.0018761402142488445, 10);
  sqcRZGate(q, -1.4278554049043757, 10);
  sqcRYGate(q, 3.1407923676832055, 11);
  sqcRZGate(q, 2.5485572524997173, 11);
  sqcRYGate(q, 3.1413702715418483, 12);
  sqcRZGate(q, 0.9869300196480023, 12);
  sqcRYGate(q, -1.7934993586217582, 13);
  sqcRZGate(q, 3.1203763738840116, 13);
  sqcRYGate(q, 0.7983216238650018, 14);
  sqcRZGate(q, 0.8868348991080262, 14);
  sqcRYGate(q, -1.9227014513180984, 15);
  sqcRZGate(q, -0.4882612516132597, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.1696407025843598, 0);
  sqcRZGate(q, 2.3890929137667793, 0);
  sqcRYGate(q, 3.1394085431219443, 1);
  sqcRZGate(q, 1.2956868795801444, 1);
  sqcRYGate(q, -3.141451686157528, 2);
  sqcRZGate(q, -0.23379751232133575, 2);
  sqcRYGate(q, 1.5718304081740073, 3);
  sqcRZGate(q, -2.8658625680044483, 3);
  sqcRYGate(q, -0.5170148494554255, 4);
  sqcRZGate(q, -0.0014133197125607566, 4);
  sqcRYGate(q, 1.5716594563024853, 5);
  sqcRZGate(q, 2.7195455472916295, 5);
  sqcRYGate(q, 1.5693246508304206, 6);
  sqcRZGate(q, 0.022793025704052283, 6);
  sqcRYGate(q, 3.141354625961145, 7);
  sqcRZGate(q, 3.002886458021768, 7);
  sqcRYGate(q, -0.003569620238731966, 8);
  sqcRZGate(q, 0.1934769293428982, 8);
  sqcRYGate(q, 3.140488109967577, 9);
  sqcRZGate(q, -0.6860065422490589, 9);
  sqcRYGate(q, 2.531194789997758, 10);
  sqcRZGate(q, 1.773663010512244, 10);
  sqcRYGate(q, -0.3944402226149793, 11);
  sqcRZGate(q, -0.10713047383145911, 11);
  sqcRYGate(q, 2.2497252812760347, 12);
  sqcRZGate(q, 1.095588175144597, 12);
  sqcRYGate(q, 1.108647414257466, 13);
  sqcRZGate(q, 1.7136472184358458, 13);
  sqcRYGate(q, -1.40912488870093, 14);
  sqcRZGate(q, -0.9285343167831447, 14);
  sqcRYGate(q, 2.8928321774593004, 15);
  sqcRZGate(q, -2.414361371583476, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -0.1511077192144965, 0);
  sqcRZGate(q, 2.5406447557930463, 0);
  sqcRYGate(q, 1.5711623288236258, 1);
  sqcRZGate(q, -2.6486870437465453, 1);
  sqcRYGate(q, 2.834701443532595e-05, 2);
  sqcRZGate(q, 1.5038223050320487, 2);
  sqcRYGate(q, 0.6445843753268254, 3);
  sqcRZGate(q, -0.5325972150423945, 3);
  sqcRYGate(q, 1.5718722920187078, 4);
  sqcRZGate(q, 2.0024895679377677, 4);
  sqcRYGate(q, -1.9187920822451208, 5);
  sqcRZGate(q, 2.3021590902920455, 5);
  sqcRYGate(q, 1.5736524142593895, 6);
  sqcRZGate(q, -0.6935472751414424, 6);
  sqcRYGate(q, 3.1415433251322558, 7);
  sqcRZGate(q, -2.8829833816454555, 7);
  sqcRYGate(q, -3.137536029738405, 8);
  sqcRZGate(q, -0.22962419704791867, 8);
  sqcRYGate(q, 1.7162015425846744, 9);
  sqcRZGate(q, -1.6317011416626226, 9);
  sqcRYGate(q, -0.6200125641187605, 10);
  sqcRZGate(q, 1.0459604552047486, 10);
  sqcRYGate(q, 0.00030629166981910316, 11);
  sqcRZGate(q, 0.964734675458276, 11);
  sqcRYGate(q, 3.140883880165997, 12);
  sqcRZGate(q, -2.5268943958038244, 12);
  sqcRYGate(q, 0.1580374069585906, 13);
  sqcRZGate(q, 3.11186455748589, 13);
  sqcRYGate(q, 1.05513270379336, 14);
  sqcRZGate(q, 0.7108718412153561, 14);
  sqcRYGate(q, -2.617054696215955, 15);
  sqcRZGate(q, 2.452795850232626, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.5759198071146674, 0);
  sqcRZGate(q, -1.5769544990666688, 0);
  sqcRYGate(q, 0.0018965099737467464, 1);
  sqcRZGate(q, 0.2933857220758781, 1);
  sqcRYGate(q, 0.09165945338427228, 2);
  sqcRZGate(q, -2.669792237201728, 2);
  sqcRYGate(q, -1.5659360883617746, 3);
  sqcRZGate(q, -3.1398863954786354, 3);
  sqcRYGate(q, -9.184361968340274e-06, 4);
  sqcRZGate(q, 1.1390511795968248, 4);
  sqcRYGate(q, 3.1409880325835577, 5);
  sqcRZGate(q, -2.949191570226277, 5);
  sqcRYGate(q, -9.049953959294754e-05, 6);
  sqcRZGate(q, -2.4481390277663064, 6);
  sqcRYGate(q, -3.1414044002515835, 7);
  sqcRZGate(q, 2.2585715942262983, 7);
  sqcRYGate(q, -2.587410809759545, 8);
  sqcRZGate(q, -0.934078823134465, 8);
  sqcRYGate(q, -0.00022434426134948913, 9);
  sqcRZGate(q, -1.9598850925963731, 9);
  sqcRYGate(q, 2.880702757534097, 10);
  sqcRZGate(q, -0.9566006711137529, 10);
  sqcRYGate(q, -0.0013269438467678415, 11);
  sqcRZGate(q, 2.2788584913839927, 11);
  sqcRYGate(q, 7.983487876117579e-06, 12);
  sqcRZGate(q, -0.7618611757745157, 12);
  sqcRYGate(q, -0.8693126508476511, 13);
  sqcRZGate(q, -1.9028196000428519, 13);
  sqcRYGate(q, -0.8868713117700725, 14);
  sqcRZGate(q, 1.781409495132876, 14);
  sqcRYGate(q, -3.0861643585198655, 15);
  sqcRZGate(q, -1.0395468507719237, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.5668198985479675, 0);
  sqcRZGate(q, 3.12779160916092, 0);
  sqcRYGate(q, 3.138736927842248, 1);
  sqcRZGate(q, 0.7734872042622616, 1);
  sqcRYGate(q, 0.00023973534919158605, 2);
  sqcRZGate(q, 2.675471172917866, 2);
  sqcRYGate(q, 0.4191354707192714, 3);
  sqcRZGate(q, -1.5732673805585646, 3);
  sqcRYGate(q, 1.5707928769711996, 4);
  sqcRZGate(q, 0.0012958090285533077, 4);
  sqcRYGate(q, 1.5712669472774061, 5);
  sqcRZGate(q, -0.0017466464024185058, 5);
  sqcRYGate(q, -1.5681256380356343, 6);
  sqcRZGate(q, -0.4521470351653951, 6);
  sqcRYGate(q, 6.088046922881365e-07, 7);
  sqcRZGate(q, -1.040964149110751, 7);
  sqcRYGate(q, 1.6027504544505529, 8);
  sqcRZGate(q, -2.8050168640095845, 8);
  sqcRYGate(q, -0.03498606010276056, 9);
  sqcRZGate(q, 2.022117032077018, 9);
  sqcRYGate(q, 2.910647167501117, 10);
  sqcRZGate(q, 2.6867918578139154, 10);
  sqcRYGate(q, 1.9621562876691354, 11);
  sqcRZGate(q, 2.4803161041500985, 11);
  sqcRYGate(q, -3.141157454023079, 12);
  sqcRZGate(q, 2.739282277200945, 12);
  sqcRYGate(q, -0.1894060361581623, 13);
  sqcRZGate(q, -1.1520312294003423, 13);
  sqcRYGate(q, -2.2531855628733335, 14);
  sqcRZGate(q, 0.014207558184197389, 14);
  sqcRYGate(q, 0.004250228003527923, 15);
  sqcRZGate(q, 0.8042813176890915, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 2.430004594538871, 0);
  sqcRZGate(q, 3.1130056701419115, 0);
  sqcRYGate(q, -0.3421566524060937, 1);
  sqcRZGate(q, 0.008536269907307643, 1);
  sqcRYGate(q, 2.985882170196356, 2);
  sqcRZGate(q, 1.5660073523629912, 2);
  sqcRYGate(q, 1.5764742334095478, 3);
  sqcRZGate(q, -0.6320606717889103, 3);
  sqcRYGate(q, 0.00061091264852269, 4);
  sqcRZGate(q, 3.1383476248261313, 4);
  sqcRYGate(q, -1.5699155324534617, 5);
  sqcRZGate(q, -1.6194695841119477, 5);
  sqcRYGate(q, 3.1385419018910468, 6);
  sqcRZGate(q, 0.20216590973408802, 6);
  sqcRYGate(q, 1.571383774654306, 7);
  sqcRZGate(q, -2.4450477828577095, 7);
  sqcRYGate(q, 3.136608832304903, 8);
  sqcRZGate(q, -1.6621934849923763, 8);
  sqcRYGate(q, -0.1252742928761057, 9);
  sqcRZGate(q, 0.004761254113743618, 9);
  sqcRYGate(q, 0.11428831985417975, 10);
  sqcRZGate(q, -2.2390814678851925, 10);
  sqcRYGate(q, -3.140685924445349, 11);
  sqcRZGate(q, -0.6613763383584496, 11);
  sqcRYGate(q, -3.1414430310824, 12);
  sqcRZGate(q, -1.7687539440620168, 12);
  sqcRYGate(q, 0.0006329388012570916, 13);
  sqcRZGate(q, 2.566944669022231, 13);
  sqcRYGate(q, 1.918558120312479, 14);
  sqcRZGate(q, -2.1972546303365155, 14);
  sqcRYGate(q, 0.8957726834791161, 15);
  sqcRZGate(q, -0.06630827521659644, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.5674958757561839, 0);
  sqcRZGate(q, -1.5743655085908115, 0);
  sqcRYGate(q, -1.5704105908424548, 1);
  sqcRZGate(q, 2.80397185105152, 1);
  sqcRYGate(q, -2.415268807541143, 2);
  sqcRZGate(q, -1.5598490968736187, 2);
  sqcRYGate(q, 1.5679106372054943, 3);
  sqcRZGate(q, 1.5678128289602373, 3);
  sqcRYGate(q, 1.5699985471172822, 4);
  sqcRZGate(q, -0.893423834270779, 4);
  sqcRYGate(q, -3.1125820595764977, 5);
  sqcRZGate(q, 1.5235823602047647, 5);
  sqcRYGate(q, 8.311803874695729e-05, 6);
  sqcRZGate(q, -2.6713612826044386, 6);
  sqcRYGate(q, 3.141330927215468, 7);
  sqcRZGate(q, -1.770641816936152, 7);
  sqcRYGate(q, 3.13625400073733, 8);
  sqcRZGate(q, -1.796972300481503, 8);
  sqcRYGate(q, 1.5706143463890652, 9);
  sqcRZGate(q, 0.9432705088846581, 9);
  sqcRYGate(q, 2.812666187231462, 10);
  sqcRZGate(q, 0.8779018442442217, 10);
  sqcRYGate(q, 1.958464520144747, 11);
  sqcRZGate(q, 1.5594974311359546, 11);
  sqcRYGate(q, 3.1414658762555785, 12);
  sqcRZGate(q, -0.8957067568518314, 12);
  sqcRYGate(q, 2.7222600856575583, 13);
  sqcRZGate(q, -2.6646250922799988, 13);
  sqcRYGate(q, -3.130877554141062, 14);
  sqcRZGate(q, 1.794623618590995, 14);
  sqcRYGate(q, -0.16797832655430422, 15);
  sqcRZGate(q, 0.06159767219032197, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.570202075920073, 0);
  sqcRZGate(q, 1.739985589298562, 0);
  sqcRYGate(q, 0.0009024773644510375, 1);
  sqcRZGate(q, -1.233482229870792, 1);
  sqcRYGate(q, -0.007898928608943478, 2);
  sqcRZGate(q, -0.010892312251588265, 2);
  sqcRYGate(q, -2.545939536858109, 3);
  sqcRZGate(q, -3.1409577591889364, 3);
  sqcRYGate(q, -3.141406506379491, 4);
  sqcRZGate(q, 0.9350882002737889, 4);
  sqcRYGate(q, 1.5457937032054343, 5);
  sqcRZGate(q, -1.8132896856536203, 5);
  sqcRYGate(q, 3.1412164110053733, 6);
  sqcRZGate(q, -1.422346035899926, 6);
  sqcRYGate(q, -1.5825185680718639, 7);
  sqcRZGate(q, 1.5676855164775187, 7);
  sqcRYGate(q, -3.1397119051767453, 8);
  sqcRZGate(q, 0.2032195560793862, 8);
  sqcRYGate(q, 3.0646406077910147, 9);
  sqcRZGate(q, -1.8829789989813155, 9);
  sqcRYGate(q, -1.5931823805995364, 10);
  sqcRZGate(q, -1.565470864980101, 10);
  sqcRYGate(q, 1.2605670786551657, 11);
  sqcRZGate(q, -3.1035667078030036, 11);
  sqcRYGate(q, -0.0008615980434800719, 12);
  sqcRZGate(q, -2.1020390644639035, 12);
  sqcRYGate(q, 1.5702447401380142, 13);
  sqcRZGate(q, -0.6294814639431994, 13);
  sqcRYGate(q, -0.6125021321919562, 14);
  sqcRZGate(q, 1.2406370708633778, 14);
  sqcRYGate(q, 1.5420931799559345, 15);
  sqcRZGate(q, -3.1375094354671513, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -0.0009997689345358207, 0);
  sqcRZGate(q, -1.738653562243407, 0);
  sqcRYGate(q, -1.5719481805597306, 1);
  sqcRZGate(q, 1.570768309125883, 1);
  sqcRYGate(q, -1.5709280076582144, 2);
  sqcRZGate(q, -0.0007176055982807128, 2);
  sqcRYGate(q, 0.04740100972455189, 3);
  sqcRZGate(q, 2.2523361149604613, 3);
  sqcRYGate(q, -3.141429133273785, 4);
  sqcRZGate(q, -1.313691905223149, 4);
  sqcRYGate(q, -0.0014071802386332877, 5);
  sqcRZGate(q, 0.6517019162099862, 5);
  sqcRYGate(q, 0.00027600686124529256, 6);
  sqcRZGate(q, -1.0259327997738004, 6);
  sqcRYGate(q, -0.16085659787455026, 7);
  sqcRZGate(q, 3.094747345329759, 7);
  sqcRYGate(q, -2.7859694672634774, 8);
  sqcRZGate(q, 0.03811923894457664, 8);
  sqcRYGate(q, 3.139211353507345, 9);
  sqcRZGate(q, -2.8141183393735827, 9);
  sqcRYGate(q, 0.0351548665074294, 10);
  sqcRZGate(q, 3.1362263626718567, 10);
  sqcRYGate(q, -4.9264928879365204e-05, 11);
  sqcRZGate(q, -0.003403917978847204, 11);
  sqcRYGate(q, 0.48075758339616037, 12);
  sqcRZGate(q, -1.5710395204822025, 12);
  sqcRYGate(q, 0.0001470446046200696, 13);
  sqcRZGate(q, -0.25297439101934877, 13);
  sqcRYGate(q, -1.56538684973789, 14);
  sqcRZGate(q, -1.5687043291547682, 14);
  sqcRYGate(q, -1.5713499803422115, 15);
  sqcRZGate(q, -1.576971404590328, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 2.2149110423416225, 0);
  sqcRZGate(q, -0.0031951762959275764, 0);
  sqcRYGate(q, -1.5732072818496405, 1);
  sqcRZGate(q, -1.5662072949364336, 1);
  sqcRYGate(q, 1.5629400903463706, 2);
  sqcRZGate(q, -3.141414877350741, 2);
  sqcRYGate(q, 3.140791571879044, 3);
  sqcRZGate(q, -0.3362802247906896, 3);
  sqcRYGate(q, 2.3237581618011065, 4);
  sqcRZGate(q, -0.011047781460846728, 4);
  sqcRYGate(q, -0.020609561755119188, 5);
  sqcRZGate(q, -1.5307738435571245, 5);
  sqcRYGate(q, 0.0034804155813930038, 6);
  sqcRZGate(q, 0.49250342942603437, 6);
  sqcRYGate(q, -2.466132413282886, 7);
  sqcRZGate(q, -1.7434598091254392, 7);
  sqcRYGate(q, -1.5706014027047406, 8);
  sqcRZGate(q, 1.7635699959412001, 8);
  sqcRYGate(q, -1.5688216100733001, 9);
  sqcRZGate(q, 2.414736481240036, 9);
  sqcRYGate(q, 1.5635658303171134, 10);
  sqcRZGate(q, -1.5242554642690849, 10);
  sqcRYGate(q, -2.8309368326996385, 11);
  sqcRZGate(q, 0.03480366969531934, 11);
  sqcRYGate(q, 1.5709122364253327, 12);
  sqcRZGate(q, 1.6852010722658468, 12);
  sqcRYGate(q, -3.1407675178913412, 13);
  sqcRZGate(q, 0.6851559147347493, 13);
  sqcRYGate(q, -1.6521198246598654, 14);
  sqcRZGate(q, 2.3915188700515855, 14);
  sqcRYGate(q, 2.0117921475445417, 15);
  sqcRZGate(q, 2.492887840180474, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.5707996525659165, 0);
  sqcRZGate(q, 1.7131085547714586, 0);
  sqcRYGate(q, 1.5429570181858967, 1);
  sqcRZGate(q, -3.1392403698607145, 1);
  sqcRYGate(q, 1.5703536226140935, 2);
  sqcRZGate(q, 8.748343827142061e-05, 2);
  sqcRYGate(q, -3.141578097585504, 3);
  sqcRZGate(q, -2.6394073374850535, 3);
  sqcRYGate(q, -3.097265193331532, 4);
  sqcRZGate(q, -3.016817302884093, 4);
  sqcRYGate(q, -0.0005181709762132217, 5);
  sqcRZGate(q, 2.689285346171041, 5);
  sqcRYGate(q, 0.1610472107054406, 6);
  sqcRZGate(q, -3.108603180378545, 6);
  sqcRYGate(q, -3.119518243166119, 7);
  sqcRZGate(q, 0.059157318814290365, 7);
  sqcRYGate(q, 3.141545341860628, 8);
  sqcRZGate(q, -1.3783386753189433, 8);
  sqcRYGate(q, -4.091985350029109e-05, 9);
  sqcRZGate(q, 0.5932571619710673, 9);
  sqcRYGate(q, -3.1415832258013685, 10);
  sqcRZGate(q, 1.5562887252774709, 10);
  sqcRYGate(q, -0.136027857256469, 11);
  sqcRZGate(q, 3.1408195131736467, 11);
  sqcRYGate(q, -3.141406071026685, 12);
  sqcRZGate(q, -0.9666372259869922, 12);
  sqcRYGate(q, 1.5708965278756146, 13);
  sqcRZGate(q, -1.5556733793561646, 13);
  sqcRYGate(q, -9.738045591706118e-05, 14);
  sqcRZGate(q, -2.9804842219865932, 14);
  sqcRYGate(q, -3.1412124118544744, 15);
  sqcRZGate(q, 2.51403153853173, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -0.0010028750448642502, 0);
  sqcRZGate(q, 0.4789502254866924, 0);
  sqcRYGate(q, 0.13742549421571182, 1);
  sqcRZGate(q, -2.188852412542994, 1);
  sqcRYGate(q, 1.571586929891702, 2);
  sqcRZGate(q, 2.192206115206187, 2);
  sqcRYGate(q, 0.0010791175089729284, 3);
  sqcRZGate(q, 2.575018168794146, 3);
  sqcRYGate(q, -3.1408381883059784, 4);
  sqcRZGate(q, -0.813496107345097, 4);
  sqcRYGate(q, 1.68702228527418, 5);
  sqcRZGate(q, 0.9334287738484893, 5);
  sqcRYGate(q, 3.1382290123154113, 6);
  sqcRZGate(q, 0.6564624641809972, 6);
  sqcRYGate(q, 0.0032592118206825733, 7);
  sqcRZGate(q, -0.8025981700592003, 7);
  sqcRYGate(q, 1.5724861043158043, 8);
  sqcRZGate(q, -2.518246541534901, 8);
  sqcRYGate(q, -1.568036678139567, 9);
  sqcRZGate(q, -0.6281930875992481, 9);
  sqcRYGate(q, -0.006793151113097141, 10);
  sqcRZGate(q, -2.5005398632858533, 10);
  sqcRYGate(q, 1.5702124301621874, 11);
  sqcRZGate(q, -0.6168491148744967, 11);
  sqcRYGate(q, 3.1415652085975334, 12);
  sqcRZGate(q, -0.49826554303972076, 12);
  sqcRYGate(q, -0.07065790765244984, 13);
  sqcRZGate(q, -2.2035418879073108, 13);
  sqcRYGate(q, -3.0433347701586038, 14);
  sqcRZGate(q, 1.5742199669553703, 14);
  sqcRYGate(q, -1.570661783634673, 15);
  sqcRZGate(q, -2.1869191521036546, 15);

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
