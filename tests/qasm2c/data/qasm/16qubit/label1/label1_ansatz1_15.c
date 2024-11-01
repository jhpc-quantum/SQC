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

  sqcRYGate(q, 0.19168307953321317, 0);
  sqcRZGate(q, -0.29415051733032743, 0);
  sqcRYGate(q, 2.8677239250429856, 1);
  sqcRZGate(q, 2.8776926862079306, 1);
  sqcRYGate(q, 0.08580690930371128, 2);
  sqcRZGate(q, 1.111026733419382, 2);
  sqcRYGate(q, 3.119940759561837, 3);
  sqcRZGate(q, -1.2870175747976518, 3);
  sqcRYGate(q, -1.8885153671837722, 4);
  sqcRZGate(q, -3.0331045964636663, 4);
  sqcRYGate(q, 0.07446030272211956, 5);
  sqcRZGate(q, -0.33667891827812324, 5);
  sqcRYGate(q, 0.38077988947858626, 6);
  sqcRZGate(q, -2.9609556957859815, 6);
  sqcRYGate(q, 1.6616856790947523, 7);
  sqcRZGate(q, 2.232082286548051, 7);
  sqcRYGate(q, 1.5119304239023243, 8);
  sqcRZGate(q, 1.9330810500235807, 8);
  sqcRYGate(q, 0.6382359225532044, 9);
  sqcRZGate(q, -2.5359231984336215, 9);
  sqcRYGate(q, -0.16028084134828727, 10);
  sqcRZGate(q, 0.47008655586301823, 10);
  sqcRYGate(q, 0.48543238690765206, 11);
  sqcRZGate(q, -1.9978060098916628, 11);
  sqcRYGate(q, 0.02036402262131643, 12);
  sqcRZGate(q, 0.49833976885868125, 12);
  sqcRYGate(q, -1.7714823766930192, 13);
  sqcRZGate(q, 0.44006179874342344, 13);
  sqcRYGate(q, -2.8814982220016927, 14);
  sqcRZGate(q, 0.13668188143435755, 14);
  sqcRYGate(q, -1.138691254948933, 15);
  sqcRZGate(q, -0.7552205960637117, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -3.014432752762678, 0);
  sqcRZGate(q, -1.715421664804689, 0);
  sqcRYGate(q, 2.8659860611945573, 1);
  sqcRZGate(q, 0.05401368281035734, 1);
  sqcRYGate(q, 2.32191395303161, 2);
  sqcRZGate(q, 1.379773529987415, 2);
  sqcRYGate(q, -2.800771515028361, 3);
  sqcRZGate(q, 2.320614992225963, 3);
  sqcRYGate(q, -1.6066007528771875, 4);
  sqcRZGate(q, 1.4474883895682336, 4);
  sqcRYGate(q, 0.02055349887379258, 5);
  sqcRZGate(q, 1.545143419690486, 5);
  sqcRYGate(q, -0.6435186567804007, 6);
  sqcRZGate(q, -1.3969990698240293, 6);
  sqcRYGate(q, -0.3771022319711781, 7);
  sqcRZGate(q, -0.9268300298101044, 7);
  sqcRYGate(q, 1.4804977955502754, 8);
  sqcRZGate(q, 2.722370286535196, 8);
  sqcRYGate(q, -2.5614573827391607, 9);
  sqcRZGate(q, 2.1938776359623082, 9);
  sqcRYGate(q, 2.9889114709660447, 10);
  sqcRZGate(q, 1.148903941055178, 10);
  sqcRYGate(q, 0.7836181618163751, 11);
  sqcRZGate(q, -0.02222642205121783, 11);
  sqcRYGate(q, 2.01890403681906, 12);
  sqcRZGate(q, 0.07712657198359985, 12);
  sqcRYGate(q, 1.9325741410371768, 13);
  sqcRZGate(q, 1.665813926932864, 13);
  sqcRYGate(q, -2.4833576923871172, 14);
  sqcRZGate(q, 0.02219914511359041, 14);
  sqcRYGate(q, -0.38013685124722096, 15);
  sqcRZGate(q, 2.0289984382435544, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.717032834634664, 0);
  sqcRZGate(q, -1.9924722014862244, 0);
  sqcRYGate(q, -0.014351255618843598, 1);
  sqcRZGate(q, 2.211101274476956, 1);
  sqcRYGate(q, -2.4519261180066154, 2);
  sqcRZGate(q, 2.1401095016756306, 2);
  sqcRYGate(q, -1.8262253757292148, 3);
  sqcRZGate(q, -1.396946429463769, 3);
  sqcRYGate(q, -0.6311172884950023, 4);
  sqcRZGate(q, -2.013796974679223, 4);
  sqcRYGate(q, 0.11928379650112965, 5);
  sqcRZGate(q, -0.8476342317637656, 5);
  sqcRYGate(q, 2.043381377335632, 6);
  sqcRZGate(q, 2.4072614870756563, 6);
  sqcRYGate(q, -3.1293224219088196, 7);
  sqcRZGate(q, -2.778709365907849, 7);
  sqcRYGate(q, 0.9445757077729099, 8);
  sqcRZGate(q, 3.1055267397676176, 8);
  sqcRYGate(q, 2.577164277558911, 9);
  sqcRZGate(q, -2.9022606810778226, 9);
  sqcRYGate(q, -0.11163619923569379, 10);
  sqcRZGate(q, -2.884545832334257, 10);
  sqcRYGate(q, 3.114162620780648, 11);
  sqcRZGate(q, -0.155737107525693, 11);
  sqcRYGate(q, -3.1084205086246675, 12);
  sqcRZGate(q, 0.09934056306061911, 12);
  sqcRYGate(q, -3.138801642598209, 13);
  sqcRZGate(q, -1.4456974439651469, 13);
  sqcRYGate(q, -2.2051447723621926, 14);
  sqcRZGate(q, -0.18705462878418364, 14);
  sqcRYGate(q, -2.0345939429956763, 15);
  sqcRZGate(q, -1.0382094612579762, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.014222038645661073, 0);
  sqcRZGate(q, 2.5257116176913614, 0);
  sqcRYGate(q, -3.1084668056836193, 1);
  sqcRZGate(q, -0.8220307797659308, 1);
  sqcRYGate(q, 2.655065296304546, 2);
  sqcRZGate(q, -0.0960820386138166, 2);
  sqcRYGate(q, -0.04005124370043145, 3);
  sqcRZGate(q, -1.6837718610006525, 3);
  sqcRYGate(q, -3.1239790985128497, 4);
  sqcRZGate(q, -0.522614652850012, 4);
  sqcRYGate(q, 2.610194356401856, 5);
  sqcRZGate(q, 2.9316946219158995, 5);
  sqcRYGate(q, 1.7214444148920547, 6);
  sqcRZGate(q, 2.3567549388485878, 6);
  sqcRYGate(q, -3.046777428368666, 7);
  sqcRZGate(q, -0.1283365802966534, 7);
  sqcRYGate(q, 2.098885189475273, 8);
  sqcRZGate(q, 0.8900271387338694, 8);
  sqcRYGate(q, -1.6207632878983156, 9);
  sqcRZGate(q, -0.6702009784416486, 9);
  sqcRYGate(q, 1.538314779020593, 10);
  sqcRZGate(q, -2.3232942126430443, 10);
  sqcRYGate(q, -2.0798779692982423, 11);
  sqcRZGate(q, -0.682921939430238, 11);
  sqcRYGate(q, 1.1406499019938772, 12);
  sqcRZGate(q, 3.065568759389089, 12);
  sqcRYGate(q, -2.436383508014693, 13);
  sqcRZGate(q, 1.9442248194592189, 13);
  sqcRYGate(q, -0.609626749343728, 14);
  sqcRZGate(q, 0.09710492855794861, 14);
  sqcRYGate(q, -0.9804282463984181, 15);
  sqcRZGate(q, 2.8380000749144365, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.3561087490889028, 0);
  sqcRZGate(q, 2.271043201796529, 0);
  sqcRYGate(q, -0.004710631123686859, 1);
  sqcRZGate(q, -2.3590467742879446, 1);
  sqcRYGate(q, 3.0830234778002614, 2);
  sqcRZGate(q, 2.968162893524114, 2);
  sqcRYGate(q, 1.7693277489094583, 3);
  sqcRZGate(q, -0.24644300593200708, 3);
  sqcRYGate(q, 2.5082771709540044, 4);
  sqcRZGate(q, 1.8083941456160275, 4);
  sqcRYGate(q, -2.1258520347037284, 5);
  sqcRZGate(q, 1.3534825379213489, 5);
  sqcRYGate(q, 2.9899688362399286, 6);
  sqcRZGate(q, -0.1836957120543582, 6);
  sqcRYGate(q, 0.12624971708202717, 7);
  sqcRZGate(q, 0.5986188808331357, 7);
  sqcRYGate(q, 0.3110461026577574, 8);
  sqcRZGate(q, 1.1871194466168726, 8);
  sqcRYGate(q, 0.11525112266013339, 9);
  sqcRZGate(q, 0.015404162136867324, 9);
  sqcRYGate(q, -1.01249657827752, 10);
  sqcRZGate(q, -2.3834126202296386, 10);
  sqcRYGate(q, 1.5209081549317256, 11);
  sqcRZGate(q, -2.7832411964668644, 11);
  sqcRYGate(q, 3.128745946781767, 12);
  sqcRZGate(q, -2.143990816288938, 12);
  sqcRYGate(q, 3.0688384936600577, 13);
  sqcRZGate(q, 0.27057070478637224, 13);
  sqcRYGate(q, -2.1000227843841617, 14);
  sqcRZGate(q, 2.471717305311296, 14);
  sqcRYGate(q, -0.23233805051046028, 15);
  sqcRZGate(q, -2.1236936770598542, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.7474458629035947, 0);
  sqcRZGate(q, -2.0068990371224738, 0);
  sqcRYGate(q, 0.028870092373451676, 1);
  sqcRZGate(q, -0.055168635834968074, 1);
  sqcRYGate(q, -2.2633147525006914, 2);
  sqcRZGate(q, 2.2894032475718924, 2);
  sqcRYGate(q, -1.2742591539090529, 3);
  sqcRZGate(q, -0.0246646864720903, 3);
  sqcRYGate(q, 0.9787412326417613, 4);
  sqcRZGate(q, -2.7607311099657728, 4);
  sqcRYGate(q, 0.08734340297253862, 5);
  sqcRZGate(q, 1.5931374858051193, 5);
  sqcRYGate(q, 3.08505487424183, 6);
  sqcRZGate(q, 1.3361398306865704, 6);
  sqcRYGate(q, 2.4930869641503883, 7);
  sqcRZGate(q, -2.920382557630771, 7);
  sqcRYGate(q, 1.204739151636196, 8);
  sqcRZGate(q, 1.6281459344766234, 8);
  sqcRYGate(q, -0.028249769991196497, 9);
  sqcRZGate(q, -1.7448332323605973, 9);
  sqcRYGate(q, -1.7717057842468158, 10);
  sqcRZGate(q, -0.921266455568202, 10);
  sqcRYGate(q, 1.4256742263521502, 11);
  sqcRZGate(q, -0.5472319645734585, 11);
  sqcRYGate(q, 1.7576149767451712, 12);
  sqcRZGate(q, -3.0854091322997874, 12);
  sqcRYGate(q, 0.46766280359386503, 13);
  sqcRZGate(q, 3.0936654210529895, 13);
  sqcRYGate(q, 1.4271544039522501, 14);
  sqcRZGate(q, -0.9155181934625647, 14);
  sqcRYGate(q, 1.3603504262569084, 15);
  sqcRZGate(q, -1.5249548958455754, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.2672152405239281, 0);
  sqcRZGate(q, 2.824605462330358, 0);
  sqcRYGate(q, -1.776605074428339, 1);
  sqcRZGate(q, -2.906320317342975, 1);
  sqcRYGate(q, -0.852095241550697, 2);
  sqcRZGate(q, -1.9818525968160483, 2);
  sqcRYGate(q, 0.776875771208837, 3);
  sqcRZGate(q, -0.004819737287838244, 3);
  sqcRYGate(q, 1.0174366171043516, 4);
  sqcRZGate(q, -0.7946479696568449, 4);
  sqcRYGate(q, 2.5243776722305546, 5);
  sqcRZGate(q, -2.16973614163003, 5);
  sqcRYGate(q, -0.26126993257369513, 6);
  sqcRZGate(q, 3.1184014182220494, 6);
  sqcRYGate(q, 0.04595303881722515, 7);
  sqcRZGate(q, 1.624629370687904, 7);
  sqcRYGate(q, 3.052483473662522, 8);
  sqcRZGate(q, 1.766894384217304, 8);
  sqcRYGate(q, 0.4400500312694984, 9);
  sqcRZGate(q, 2.9352835279213974, 9);
  sqcRYGate(q, -2.251443199722215, 10);
  sqcRZGate(q, -0.05210584225337175, 10);
  sqcRYGate(q, -0.178904485132394, 11);
  sqcRZGate(q, -1.0111992432788055, 11);
  sqcRYGate(q, 1.4420915422010392, 12);
  sqcRZGate(q, 2.6195737923943883, 12);
  sqcRYGate(q, -2.8318524547067243, 13);
  sqcRZGate(q, -1.313224289157891, 13);
  sqcRYGate(q, 2.247760910539058, 14);
  sqcRZGate(q, 0.4336336357065418, 14);
  sqcRYGate(q, 2.1142063238331747, 15);
  sqcRZGate(q, -0.7169370592944686, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.981084062823554, 0);
  sqcRZGate(q, 2.5614925277592264, 0);
  sqcRYGate(q, 1.4064765491063378, 1);
  sqcRZGate(q, -0.269884782108077, 1);
  sqcRYGate(q, 1.0864355768000813, 2);
  sqcRZGate(q, -1.3887348630064063, 2);
  sqcRYGate(q, -2.981079050086353, 3);
  sqcRZGate(q, 1.0850475829522037, 3);
  sqcRYGate(q, -2.465394721825926, 4);
  sqcRZGate(q, 2.618919663339426, 4);
  sqcRYGate(q, -0.00809155222209057, 5);
  sqcRZGate(q, 1.4076848574316658, 5);
  sqcRYGate(q, -0.03649592337750107, 6);
  sqcRZGate(q, -2.0332439549540773, 6);
  sqcRYGate(q, 1.8326812295654848, 7);
  sqcRZGate(q, 1.3092156801257298, 7);
  sqcRYGate(q, -0.5210652687415975, 8);
  sqcRZGate(q, -0.7448956262641064, 8);
  sqcRYGate(q, -1.6848315803110214, 9);
  sqcRZGate(q, 2.6941734578359626, 9);
  sqcRYGate(q, -2.8437934946805554, 10);
  sqcRZGate(q, -0.11613488609131603, 10);
  sqcRYGate(q, -0.901524949401002, 11);
  sqcRZGate(q, 3.061949313227117, 11);
  sqcRYGate(q, 3.106116302713816, 12);
  sqcRZGate(q, -2.7773635540575654, 12);
  sqcRYGate(q, -1.818556400976819, 13);
  sqcRZGate(q, 1.6737158615855152, 13);
  sqcRYGate(q, -0.7422479433496747, 14);
  sqcRZGate(q, -0.4064551294770354, 14);
  sqcRYGate(q, 2.0394699868856896, 15);
  sqcRZGate(q, 1.6201139625660206, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.9123499768200986, 0);
  sqcRZGate(q, 1.9190327307678539, 0);
  sqcRYGate(q, -0.007313533532959938, 1);
  sqcRZGate(q, 0.2971275703067837, 1);
  sqcRYGate(q, -0.03034954137283447, 2);
  sqcRZGate(q, 2.1638486221025004, 2);
  sqcRYGate(q, -3.1051948248444097, 3);
  sqcRZGate(q, -0.8960097399138139, 3);
  sqcRYGate(q, -0.6802732484076226, 4);
  sqcRZGate(q, -2.7849911600032167, 4);
  sqcRYGate(q, -1.1114780448129977, 5);
  sqcRZGate(q, -1.308526492226967, 5);
  sqcRYGate(q, 3.1123396937576864, 6);
  sqcRZGate(q, 0.8969886511727089, 6);
  sqcRYGate(q, -0.06842223675477399, 7);
  sqcRZGate(q, 0.8916524780744233, 7);
  sqcRYGate(q, 0.2812316769019906, 8);
  sqcRZGate(q, 1.1389946493157432, 8);
  sqcRYGate(q, 0.5375200741053208, 9);
  sqcRZGate(q, -1.2118387519378055, 9);
  sqcRYGate(q, 2.6968908789777077, 10);
  sqcRZGate(q, -0.267289739611555, 10);
  sqcRYGate(q, -0.27629975290944736, 11);
  sqcRZGate(q, 0.2913405554185502, 11);
  sqcRYGate(q, 0.055825476642433536, 12);
  sqcRZGate(q, -1.905783483136584, 12);
  sqcRYGate(q, -1.3629772353094296, 13);
  sqcRZGate(q, -0.18398807875716106, 13);
  sqcRYGate(q, 0.8676091660241697, 14);
  sqcRZGate(q, -1.73032063802674, 14);
  sqcRYGate(q, -0.7741247257946817, 15);
  sqcRZGate(q, -1.0019904193119418, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.4052104445740052, 0);
  sqcRZGate(q, 1.9703881596478734, 0);
  sqcRYGate(q, 1.9233142557419658, 1);
  sqcRZGate(q, 1.8664781347375712, 1);
  sqcRYGate(q, -2.973647766095636, 2);
  sqcRZGate(q, 0.34480490152115545, 2);
  sqcRYGate(q, -0.11079640916465029, 3);
  sqcRZGate(q, 2.699244211533455, 3);
  sqcRYGate(q, 1.0140776429686431, 4);
  sqcRZGate(q, -2.818211757507054, 4);
  sqcRYGate(q, 1.8739148692749492, 5);
  sqcRZGate(q, 0.30485834353447583, 5);
  sqcRYGate(q, 0.32464099703173493, 6);
  sqcRZGate(q, -3.091393475657775, 6);
  sqcRYGate(q, 1.5991985310395818, 7);
  sqcRZGate(q, 1.741959865479155, 7);
  sqcRYGate(q, 2.980405876720241, 8);
  sqcRZGate(q, 1.1307029370047725, 8);
  sqcRYGate(q, -0.05758519878190338, 9);
  sqcRZGate(q, -1.7938130647407644, 9);
  sqcRYGate(q, -3.0539094662251727, 10);
  sqcRZGate(q, -2.257916103504204, 10);
  sqcRYGate(q, 0.8233857677766769, 11);
  sqcRZGate(q, -1.204189316656099, 11);
  sqcRYGate(q, -3.1294171640857815, 12);
  sqcRZGate(q, 1.5845102122847727, 12);
  sqcRYGate(q, -1.935570616016423, 13);
  sqcRZGate(q, -1.5730274622082243, 13);
  sqcRYGate(q, -1.5580947731713994, 14);
  sqcRZGate(q, -0.24111424698706455, 14);
  sqcRYGate(q, -0.054969891857261644, 15);
  sqcRZGate(q, -2.9104925166749824, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.848920863738217, 0);
  sqcRZGate(q, -3.0151891576444694, 0);
  sqcRYGate(q, -0.7079935107313151, 1);
  sqcRZGate(q, 1.6883966154614352, 1);
  sqcRYGate(q, 0.892504777454433, 2);
  sqcRZGate(q, 1.1616125406059492, 2);
  sqcRYGate(q, -1.9792521224815598, 3);
  sqcRZGate(q, -0.9122557341181412, 3);
  sqcRYGate(q, 3.1110166067803826, 4);
  sqcRZGate(q, 2.497022774333154, 4);
  sqcRYGate(q, 3.109150068496562, 5);
  sqcRZGate(q, 0.4441727338409373, 5);
  sqcRYGate(q, 1.5260729562903084, 6);
  sqcRZGate(q, -0.02522240851638325, 6);
  sqcRYGate(q, -3.067041495955265, 7);
  sqcRZGate(q, -0.1050780896163071, 7);
  sqcRYGate(q, -1.596344003624762, 8);
  sqcRZGate(q, -3.1132030580755656, 8);
  sqcRYGate(q, -2.2977472034808937, 9);
  sqcRZGate(q, -2.181948978942284, 9);
  sqcRYGate(q, -1.7540232637717217, 10);
  sqcRZGate(q, -1.9843502072581563, 10);
  sqcRYGate(q, -1.7046838100516448, 11);
  sqcRZGate(q, 0.11779310173261849, 11);
  sqcRYGate(q, 0.058700292158336616, 12);
  sqcRZGate(q, -0.10863608051508647, 12);
  sqcRYGate(q, 2.5542937094439786, 13);
  sqcRZGate(q, -0.019368606263973513, 13);
  sqcRYGate(q, 0.9949656722420859, 14);
  sqcRZGate(q, 2.8937263615269133, 14);
  sqcRYGate(q, 2.6501232037173375, 15);
  sqcRZGate(q, 1.0047795271305526, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.3203844940063887, 0);
  sqcRZGate(q, -1.5329239672864574, 0);
  sqcRYGate(q, 3.085723097866965, 1);
  sqcRZGate(q, -2.123599874942043, 1);
  sqcRYGate(q, 2.0147079443770357, 2);
  sqcRZGate(q, -0.4972166825484796, 2);
  sqcRYGate(q, -2.9942912816132847, 3);
  sqcRZGate(q, 1.227015058038969, 3);
  sqcRYGate(q, 3.1230541705205095, 4);
  sqcRZGate(q, 2.0142763454936885, 4);
  sqcRYGate(q, -1.7279426006582719, 5);
  sqcRZGate(q, 0.1183610359631282, 5);
  sqcRYGate(q, 0.30937209216073397, 6);
  sqcRZGate(q, 2.944657854764313, 6);
  sqcRYGate(q, -2.8421131013800682, 7);
  sqcRZGate(q, -2.91310060957821, 7);
  sqcRYGate(q, -1.8045178340813437, 8);
  sqcRZGate(q, -1.8502556146597673, 8);
  sqcRYGate(q, -0.6278894731085488, 9);
  sqcRZGate(q, -1.3164797923111513, 9);
  sqcRYGate(q, -2.9895784867022495, 10);
  sqcRZGate(q, -1.678470699383052, 10);
  sqcRYGate(q, 2.486667263020778, 11);
  sqcRZGate(q, 2.3265053237985835, 11);
  sqcRYGate(q, 3.091125974428141, 12);
  sqcRZGate(q, -2.8885632619611705, 12);
  sqcRYGate(q, 1.3841127845523746, 13);
  sqcRZGate(q, 0.6346022482558417, 13);
  sqcRYGate(q, 2.444737449872515, 14);
  sqcRZGate(q, -1.8747140734510064, 14);
  sqcRYGate(q, -2.1036118440526943, 15);
  sqcRZGate(q, -1.669970701759876, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.5470106400145756, 0);
  sqcRZGate(q, -0.33930985315247675, 0);
  sqcRYGate(q, 0.5668157933485471, 1);
  sqcRZGate(q, 2.6211979051340215, 1);
  sqcRYGate(q, 0.38699129218410455, 2);
  sqcRZGate(q, 1.7597169360860896, 2);
  sqcRYGate(q, -0.6417795022117216, 3);
  sqcRZGate(q, 2.624889549689897, 3);
  sqcRYGate(q, 1.509899029918353, 4);
  sqcRZGate(q, 1.209807032493032, 4);
  sqcRYGate(q, 2.527941455789246, 5);
  sqcRZGate(q, -0.5767514908072567, 5);
  sqcRYGate(q, -3.017436143933891, 6);
  sqcRZGate(q, -1.2667260554037467, 6);
  sqcRYGate(q, 0.05041558810095648, 7);
  sqcRZGate(q, 2.964326491003928, 7);
  sqcRYGate(q, 0.16390125526800592, 8);
  sqcRZGate(q, -0.6330534928754039, 8);
  sqcRYGate(q, 0.3397379385446646, 9);
  sqcRZGate(q, -2.60794674511639, 9);
  sqcRYGate(q, -3.062805482530499, 10);
  sqcRZGate(q, -0.9485058466308828, 10);
  sqcRYGate(q, -1.894411228000579, 11);
  sqcRZGate(q, 2.9358335658447263, 11);
  sqcRYGate(q, -0.5949664073389185, 12);
  sqcRZGate(q, -0.37541100780900927, 12);
  sqcRYGate(q, -2.513949343840347, 13);
  sqcRZGate(q, -0.986870400336426, 13);
  sqcRYGate(q, 0.5509618495607285, 14);
  sqcRZGate(q, -0.1769023112238912, 14);
  sqcRYGate(q, 0.9625443728668728, 15);
  sqcRZGate(q, -0.3879583907931924, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.0822036549019671, 0);
  sqcRZGate(q, 2.7502952701049184, 0);
  sqcRYGate(q, 0.539346599964329, 1);
  sqcRZGate(q, 1.3617548904706633, 1);
  sqcRYGate(q, 1.6751397034273858, 2);
  sqcRZGate(q, 2.4379349498773224, 2);
  sqcRYGate(q, 0.00458831165768725, 3);
  sqcRZGate(q, 2.191208441521982, 3);
  sqcRYGate(q, -3.1380330790599853, 4);
  sqcRZGate(q, -2.626121367913296, 4);
  sqcRYGate(q, -0.0385504429837189, 5);
  sqcRZGate(q, -2.650048736798052, 5);
  sqcRYGate(q, 3.1337029172506097, 6);
  sqcRZGate(q, 0.2442769530544265, 6);
  sqcRYGate(q, 0.13433534851186885, 7);
  sqcRZGate(q, -1.7772238993585754, 7);
  sqcRYGate(q, 3.0191540510588046, 8);
  sqcRZGate(q, -1.5317412829137083, 8);
  sqcRYGate(q, -2.3928696565997782, 9);
  sqcRZGate(q, 1.6538522119850705, 9);
  sqcRYGate(q, -3.015611072978896, 10);
  sqcRZGate(q, -1.2447933948469863, 10);
  sqcRYGate(q, -2.8736084411977716, 11);
  sqcRZGate(q, 0.008114132595698193, 11);
  sqcRYGate(q, 0.04323004705312261, 12);
  sqcRZGate(q, 0.6976947867695831, 12);
  sqcRYGate(q, 1.6382166614407172, 13);
  sqcRZGate(q, 1.2764461756302383, 13);
  sqcRYGate(q, 0.1780998522317576, 14);
  sqcRZGate(q, -1.3510577821706424, 14);
  sqcRYGate(q, -1.7013968727167965, 15);
  sqcRZGate(q, -2.5347193946736826, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.27581616405595055, 0);
  sqcRZGate(q, -1.9833922131789192, 0);
  sqcRYGate(q, 3.1166624536792322, 1);
  sqcRZGate(q, -1.4870674596933755, 1);
  sqcRYGate(q, -1.8356020646255788, 2);
  sqcRZGate(q, -2.6152773767846806, 2);
  sqcRYGate(q, 0.8220843211861427, 3);
  sqcRZGate(q, 0.6498403839000284, 3);
  sqcRYGate(q, 3.0544659704504906, 4);
  sqcRZGate(q, -2.353034794872953, 4);
  sqcRYGate(q, -0.04880973436228234, 5);
  sqcRZGate(q, 3.0221490718257575, 5);
  sqcRYGate(q, -1.7794680082479677, 6);
  sqcRZGate(q, -1.9171111750834975, 6);
  sqcRYGate(q, 2.725114993560624, 7);
  sqcRZGate(q, -0.05651807395421571, 7);
  sqcRYGate(q, 3.049829006850628, 8);
  sqcRZGate(q, 1.4580680499845435, 8);
  sqcRYGate(q, 2.4742793899894755, 9);
  sqcRZGate(q, -2.39470684324031, 9);
  sqcRYGate(q, -0.1626243294327674, 10);
  sqcRZGate(q, -0.859952722766775, 10);
  sqcRYGate(q, 1.8999912855502483, 11);
  sqcRZGate(q, 0.01083116811770054, 11);
  sqcRYGate(q, 3.063817027671876, 12);
  sqcRZGate(q, 0.753349037275516, 12);
  sqcRYGate(q, 2.67677576634244, 13);
  sqcRZGate(q, -2.8624888019307146, 13);
  sqcRYGate(q, 1.8104651277984614, 14);
  sqcRZGate(q, 2.130326969092607, 14);
  sqcRYGate(q, 2.5635138240445574, 15);
  sqcRZGate(q, 0.5570357986956439, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.227608435223121, 0);
  sqcRZGate(q, 2.47229868065198, 0);
  sqcRYGate(q, 2.143651772318183, 1);
  sqcRZGate(q, -2.5317452797920112, 1);
  sqcRYGate(q, -2.840261975305455, 2);
  sqcRZGate(q, 0.6995717963007628, 2);
  sqcRYGate(q, -1.5652298345343711, 3);
  sqcRZGate(q, -1.6710274217960412, 3);
  sqcRYGate(q, 2.956627340900642, 4);
  sqcRZGate(q, -2.8226561706290574, 4);
  sqcRYGate(q, 0.08092210049198492, 5);
  sqcRZGate(q, -1.2022385421379005, 5);
  sqcRYGate(q, 0.005638849240053645, 6);
  sqcRZGate(q, 2.9404580727884704, 6);
  sqcRYGate(q, 3.044155958589266, 7);
  sqcRZGate(q, 0.08420094711028447, 7);
  sqcRYGate(q, -0.03688446040370988, 8);
  sqcRZGate(q, -2.507156351513895, 8);
  sqcRYGate(q, 2.583283252421935, 9);
  sqcRZGate(q, 2.2474916291417437, 9);
  sqcRYGate(q, 2.8836651110471667, 10);
  sqcRZGate(q, -1.8188158105272452, 10);
  sqcRYGate(q, 0.28121345476113735, 11);
  sqcRZGate(q, -2.860511070229503, 11);
  sqcRYGate(q, -0.026679898740793295, 12);
  sqcRZGate(q, -2.544380245321921, 12);
  sqcRYGate(q, -2.4096426647204474, 13);
  sqcRZGate(q, -0.24930770816142883, 13);
  sqcRYGate(q, 1.0886439120757525, 14);
  sqcRZGate(q, 0.130171899045612, 14);
  sqcRYGate(q, -1.4382052874713356, 15);
  sqcRZGate(q, -2.1345025181694712, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.20640414184030542, 0);
  sqcRZGate(q, -0.8173300937457828, 0);
  sqcRYGate(q, -2.4224634894267894, 1);
  sqcRZGate(q, -0.06088517556347465, 1);
  sqcRYGate(q, -1.5726436434129007, 2);
  sqcRZGate(q, -3.0366249270505237, 2);
  sqcRYGate(q, 2.8041434578774975, 3);
  sqcRZGate(q, -1.7725057710636145, 3);
  sqcRYGate(q, -0.011245486506067128, 4);
  sqcRZGate(q, 2.7611524755438, 4);
  sqcRYGate(q, -0.11585582712897313, 5);
  sqcRZGate(q, -1.1335823935234677, 5);
  sqcRYGate(q, 0.5141707269148599, 6);
  sqcRZGate(q, 2.2860924659332933, 6);
  sqcRYGate(q, -1.1282098143600123, 7);
  sqcRZGate(q, -0.8600495218337159, 7);
  sqcRYGate(q, -1.3288726106418256, 8);
  sqcRZGate(q, 1.4951598948422005, 8);
  sqcRYGate(q, 1.0625727006743002, 9);
  sqcRZGate(q, -0.32294779721860883, 9);
  sqcRYGate(q, -0.7277935617314052, 10);
  sqcRZGate(q, 0.31640186530747894, 10);
  sqcRYGate(q, -2.941194981435183, 11);
  sqcRZGate(q, 2.867735040332323, 11);
  sqcRYGate(q, -1.3488275391151463, 12);
  sqcRZGate(q, 1.4804789427257345, 12);
  sqcRYGate(q, -2.14849733938246, 13);
  sqcRZGate(q, -0.48797729792345823, 13);
  sqcRYGate(q, -2.345654927573776, 14);
  sqcRZGate(q, -1.0093519760092864, 14);
  sqcRYGate(q, 1.7944954450046924, 15);
  sqcRZGate(q, -3.0211001552364327, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.9501437723159514, 0);
  sqcRZGate(q, 2.3776524167500597, 0);
  sqcRYGate(q, 1.570177075761267, 1);
  sqcRZGate(q, 1.5684611915926006, 1);
  sqcRYGate(q, -3.140929392723245, 2);
  sqcRZGate(q, -1.4665636164493914, 2);
  sqcRYGate(q, 0.013835850097566424, 3);
  sqcRZGate(q, -1.480587502381205, 3);
  sqcRYGate(q, 2.9503382426370903, 4);
  sqcRZGate(q, -3.106094369442972, 4);
  sqcRYGate(q, 0.09715777471365339, 5);
  sqcRZGate(q, 1.0459714853514432, 5);
  sqcRYGate(q, 3.0975567467539658, 6);
  sqcRZGate(q, 3.074367672316143, 6);
  sqcRYGate(q, 0.0042531331796900225, 7);
  sqcRZGate(q, 0.05042661564260608, 7);
  sqcRYGate(q, 3.109781316220525, 8);
  sqcRZGate(q, 0.051422724521248846, 8);
  sqcRYGate(q, 3.092012464537307, 9);
  sqcRZGate(q, 0.569822337865668, 9);
  sqcRYGate(q, -2.89173845765645, 10);
  sqcRZGate(q, -2.130779439280076, 10);
  sqcRYGate(q, 0.07134461128059223, 11);
  sqcRZGate(q, -0.38445562105906284, 11);
  sqcRYGate(q, -0.058891041570451996, 12);
  sqcRZGate(q, -2.139865123459671, 12);
  sqcRYGate(q, -2.660490245278137, 13);
  sqcRZGate(q, 1.0484503685457884, 13);
  sqcRYGate(q, -2.2239565659507265, 14);
  sqcRZGate(q, -2.0370170794242775, 14);
  sqcRYGate(q, 0.43847878398205326, 15);
  sqcRZGate(q, -0.9943941665899062, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.0010348473864434382, 0);
  sqcRZGate(q, 2.2080778155882994, 0);
  sqcRYGate(q, -1.5711913832885542, 1);
  sqcRZGate(q, 0.27265606862029246, 1);
  sqcRYGate(q, 1.5706861788111137, 2);
  sqcRZGate(q, -0.5665603160242538, 2);
  sqcRYGate(q, 1.2409722573301165, 3);
  sqcRZGate(q, 1.8784803533462282, 3);
  sqcRYGate(q, 1.5770818280688044, 4);
  sqcRZGate(q, -0.4662452098716708, 4);
  sqcRYGate(q, -1.507738332714509, 5);
  sqcRZGate(q, -0.7220216860232935, 5);
  sqcRYGate(q, 2.6285943003596093, 6);
  sqcRZGate(q, -0.40987299828767176, 6);
  sqcRYGate(q, -0.05300921084830268, 7);
  sqcRZGate(q, -0.9730476262525468, 7);
  sqcRYGate(q, 0.3777814841684102, 8);
  sqcRZGate(q, 2.692789141685256, 8);
  sqcRYGate(q, 1.1623324898506961, 9);
  sqcRZGate(q, 2.959001980994364, 9);
  sqcRYGate(q, -1.1395765347973121, 10);
  sqcRZGate(q, 0.9401656601390617, 10);
  sqcRYGate(q, -1.709999578325719, 11);
  sqcRZGate(q, -1.92772621726375, 11);
  sqcRYGate(q, -2.82799955903184, 12);
  sqcRZGate(q, 2.176758461729997, 12);
  sqcRYGate(q, 0.3714250421347475, 13);
  sqcRZGate(q, 1.9331751190337314, 13);
  sqcRYGate(q, 1.6338258633604181, 14);
  sqcRZGate(q, -2.6976115166254937, 14);
  sqcRYGate(q, -0.6496234316253291, 15);
  sqcRZGate(q, 0.08597366236975817, 15);

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
