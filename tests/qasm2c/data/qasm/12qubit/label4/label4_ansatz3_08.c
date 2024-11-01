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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -2.9235338280043073, 0);
  sqcRZGate(q, 3.0544935083790525, 0);
  sqcRYGate(q, 0.29049748628540417, 1);
  sqcRZGate(q, 0.42391649297173034, 1);
  sqcRYGate(q, 0.33752815576645734, 2);
  sqcRZGate(q, 3.1158429974817774, 2);
  sqcRYGate(q, -3.1375860762100625, 3);
  sqcRZGate(q, 1.085046247789415, 3);
  sqcRYGate(q, 3.141481631600236, 4);
  sqcRZGate(q, -0.6698912625521629, 4);
  sqcRYGate(q, 3.3520050861213235e-05, 5);
  sqcRZGate(q, 3.0510711808655047, 5);
  sqcRYGate(q, -0.5704981185437806, 6);
  sqcRZGate(q, -0.35537309597495, 6);
  sqcRYGate(q, 1.5705525494834047, 7);
  sqcRZGate(q, 1.5709101967668702, 7);
  sqcRYGate(q, -1.4418156098010892, 8);
  sqcRZGate(q, -1.602524243386712, 8);
  sqcRYGate(q, 2.5869092218889795, 9);
  sqcRZGate(q, 0.22600837517369227, 9);
  sqcRYGate(q, -1.3270329228475362, 10);
  sqcRZGate(q, -1.5938451761399413, 10);
  sqcRYGate(q, -1.5702949420775454, 11);
  sqcRZGate(q, 1.5707246001318913, 11);
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
  sqcRYGate(q, -1.3177806601519109, 0);
  sqcRZGate(q, -0.44911993839431297, 0);
  sqcRYGate(q, 2.9962177040750952, 1);
  sqcRZGate(q, -1.2856885583694109, 1);
  sqcRYGate(q, -0.4460597434939081, 2);
  sqcRZGate(q, -2.740028962483406, 2);
  sqcRYGate(q, 0.04098185879398386, 3);
  sqcRZGate(q, 2.4746242490546444, 3);
  sqcRYGate(q, 1.5696678966234545, 4);
  sqcRZGate(q, -0.6124465292727069, 4);
  sqcRYGate(q, 0.7037287286884649, 5);
  sqcRZGate(q, 1.373718496054706, 5);
  sqcRYGate(q, -0.0004984644908629635, 6);
  sqcRZGate(q, -2.794021847450239, 6);
  sqcRYGate(q, 1.5857379216995935, 7);
  sqcRZGate(q, -0.9262249497074456, 7);
  sqcRYGate(q, -1.5794545495873293, 8);
  sqcRZGate(q, -0.001349305715416524, 8);
  sqcRYGate(q, -1.603991505994066, 9);
  sqcRZGate(q, -0.3674654656127425, 9);
  sqcRYGate(q, -3.1411931230196184, 10);
  sqcRZGate(q, 2.392666602995036, 10);
  sqcRYGate(q, 1.543764367060925, 11);
  sqcRZGate(q, 0.002256133361394314, 11);
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
  sqcRYGate(q, 0.5331008609356708, 0);
  sqcRZGate(q, -2.2089755871745744, 0);
  sqcRYGate(q, 2.9085421860638, 1);
  sqcRZGate(q, 1.083511792800907, 1);
  sqcRYGate(q, -0.00017159761265491796, 2);
  sqcRZGate(q, -0.5134626561726844, 2);
  sqcRYGate(q, 3.1147401309311844, 3);
  sqcRZGate(q, -1.0689855655586458, 3);
  sqcRYGate(q, -0.0003371683080564125, 4);
  sqcRZGate(q, -2.650769513066526, 4);
  sqcRYGate(q, 9.47748296882267e-05, 5);
  sqcRZGate(q, -0.6442094121562763, 5);
  sqcRYGate(q, 1.5712594453808117, 6);
  sqcRZGate(q, 1.9014122218255904, 6);
  sqcRYGate(q, -3.1411486070188115, 7);
  sqcRZGate(q, 2.215745721813618, 7);
  sqcRYGate(q, -1.5087968738797128, 8);
  sqcRZGate(q, -0.0444551649204703, 8);
  sqcRYGate(q, -0.9852585899471631, 9);
  sqcRZGate(q, 1.8315560232279138, 9);
  sqcRYGate(q, -1.987385406805309, 10);
  sqcRZGate(q, -0.24917947891476108, 10);
  sqcRYGate(q, -1.5098891742809146, 11);
  sqcRZGate(q, -2.0071155131254566, 11);
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
  sqcRYGate(q, 0.39280890081514475, 0);
  sqcRZGate(q, 2.107872382382955, 0);
  sqcRYGate(q, -0.8490600735591185, 1);
  sqcRZGate(q, 0.018838932956445478, 1);
  sqcRYGate(q, 0.14374322909944048, 2);
  sqcRZGate(q, -0.8451229467999948, 2);
  sqcRYGate(q, -0.029440279724465244, 3);
  sqcRZGate(q, -3.04378303828553, 3);
  sqcRYGate(q, 2.849126346992104, 4);
  sqcRZGate(q, 1.4131887431444197, 4);
  sqcRYGate(q, 1.005825061321751, 5);
  sqcRZGate(q, -1.4492034066354753, 5);
  sqcRYGate(q, -6.545465958651116e-05, 6);
  sqcRZGate(q, -1.1065929929852176, 6);
  sqcRYGate(q, -1.5444328928036875, 7);
  sqcRZGate(q, 0.0003380975116324998, 7);
  sqcRYGate(q, 3.1407116357423064, 8);
  sqcRZGate(q, -1.7509535282357485, 8);
  sqcRYGate(q, -2.548790116270646, 9);
  sqcRZGate(q, 0.1219469541619604, 9);
  sqcRYGate(q, -3.14125501715098, 10);
  sqcRZGate(q, 1.120571148919929, 10);
  sqcRYGate(q, -3.138552026263023, 11);
  sqcRZGate(q, 2.8997418651018037, 11);
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
  sqcRYGate(q, -0.09600379359676987, 0);
  sqcRZGate(q, -1.0202260827050509, 0);
  sqcRYGate(q, 1.8140401801115171, 1);
  sqcRZGate(q, 2.546000265921423, 1);
  sqcRYGate(q, 3.1366611442309056, 2);
  sqcRZGate(q, -1.6096294492113128, 2);
  sqcRYGate(q, 0.0222098088592384, 3);
  sqcRZGate(q, 1.6298426001084705, 3);
  sqcRYGate(q, -0.00292372273130152, 4);
  sqcRZGate(q, -0.818954380533525, 4);
  sqcRYGate(q, 3.141421670193924, 5);
  sqcRZGate(q, -3.0303552706345394, 5);
  sqcRYGate(q, -0.0001868403014216417, 6);
  sqcRZGate(q, -0.08714561488521047, 6);
  sqcRYGate(q, 1.570733329771011, 7);
  sqcRZGate(q, 1.5707672687992391, 7);
  sqcRYGate(q, 0.6560029541428001, 8);
  sqcRZGate(q, 0.17253993091454412, 8);
  sqcRYGate(q, -1.5749537034128305, 9);
  sqcRZGate(q, 0.06587393408742773, 9);
  sqcRYGate(q, 2.359663166662356, 10);
  sqcRZGate(q, -0.8652998400834553, 10);
  sqcRYGate(q, 0.006004081324796573, 11);
  sqcRZGate(q, -0.9497246491710348, 11);
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
  sqcRYGate(q, -2.4891762841898264, 0);
  sqcRZGate(q, -1.1818068189462627, 0);
  sqcRYGate(q, -1.7409007052416785, 1);
  sqcRZGate(q, 2.6351865213315824, 1);
  sqcRYGate(q, -1.59322568676476, 2);
  sqcRZGate(q, -0.3581343100321633, 2);
  sqcRYGate(q, -1.5781603939218272, 3);
  sqcRZGate(q, -1.3709060707637697, 3);
  sqcRYGate(q, 0.051880082920119364, 4);
  sqcRZGate(q, -1.2056169946421833, 4);
  sqcRYGate(q, -2.6140952027515993, 5);
  sqcRZGate(q, -2.0945760610590165, 5);
  sqcRYGate(q, 5.788978773324516e-05, 6);
  sqcRZGate(q, 0.6167674870155792, 6);
  sqcRYGate(q, 1.5707601885518694, 7);
  sqcRZGate(q, -1.4100485627504018, 7);
  sqcRYGate(q, 1.1369095868095451, 8);
  sqcRZGate(q, -3.140917753502337, 8);
  sqcRYGate(q, -2.887796245486732, 9);
  sqcRZGate(q, 1.7499537165100263, 9);
  sqcRYGate(q, 0.0004717380665302834, 10);
  sqcRZGate(q, -0.642082016127361, 10);
  sqcRYGate(q, -3.134500446615422, 11);
  sqcRZGate(q, -2.575322501627447, 11);
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
  sqcRYGate(q, 1.2636344754664321, 0);
  sqcRZGate(q, 1.4926011053703843, 0);
  sqcRYGate(q, 1.4236510051520836, 1);
  sqcRZGate(q, 0.010124318783657493, 1);
  sqcRYGate(q, -0.23924538329054013, 2);
  sqcRZGate(q, 1.4804728033737593, 2);
  sqcRYGate(q, 1.572385619143284, 3);
  sqcRZGate(q, -1.5694533152636734, 3);
  sqcRYGate(q, -7.51840931956238e-05, 4);
  sqcRZGate(q, 3.110269192505012, 4);
  sqcRYGate(q, -1.5708293356127958, 5);
  sqcRZGate(q, -2.875343154900395, 5);
  sqcRYGate(q, -0.0006910517843213796, 6);
  sqcRZGate(q, -1.7513943752831844, 6);
  sqcRYGate(q, 1.5707989415664705, 7);
  sqcRZGate(q, 3.0272630660280857, 7);
  sqcRYGate(q, 0.870306209216661, 8);
  sqcRZGate(q, -1.582784086924029, 8);
  sqcRYGate(q, 3.141355035694716, 9);
  sqcRZGate(q, 0.1791824935333781, 9);
  sqcRYGate(q, 0.10162122828838509, 10);
  sqcRZGate(q, 0.4485538044564297, 10);
  sqcRYGate(q, 3.1249381488725954, 11);
  sqcRZGate(q, -0.24929190826581477, 11);
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
  sqcRYGate(q, 3.1356131948890145, 0);
  sqcRZGate(q, 3.050795721471309, 0);
  sqcRYGate(q, -0.6331575829398028, 1);
  sqcRZGate(q, 1.555595990398027, 1);
  sqcRYGate(q, -0.0006715247967181992, 2);
  sqcRZGate(q, 3.108212051473617, 2);
  sqcRYGate(q, -0.18763051972973413, 3);
  sqcRZGate(q, -1.571181414329252, 3);
  sqcRYGate(q, 3.141547339784749, 4);
  sqcRZGate(q, -0.2776843607782391, 4);
  sqcRYGate(q, -3.1415570056312907, 5);
  sqcRZGate(q, 0.26610456876774174, 5);
  sqcRYGate(q, -0.00026824124691963243, 6);
  sqcRZGate(q, 1.9262225034277818, 6);
  sqcRYGate(q, -3.1415846537452583, 7);
  sqcRZGate(q, 0.3599580956182287, 7);
  sqcRYGate(q, 1.5928358325833178, 8);
  sqcRZGate(q, 1.185393122032698, 8);
  sqcRYGate(q, 1.5709131504114007, 9);
  sqcRZGate(q, 1.5707868209404507, 9);
  sqcRYGate(q, -3.140810030967463, 10);
  sqcRZGate(q, -1.2499256418762097, 10);
  sqcRYGate(q, -1.5755281505515948, 11);
  sqcRZGate(q, -2.3555933254850516, 11);
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
  sqcRYGate(q, 1.5693153178379902, 0);
  sqcRZGate(q, 3.141408839376173, 0);
  sqcRYGate(q, 1.5714913595546218, 1);
  sqcRZGate(q, 0.855600811666234, 1);
  sqcRYGate(q, -2.632005278240954, 2);
  sqcRZGate(q, 0.0384195570584096, 2);
  sqcRYGate(q, 1.5686899686568898, 3);
  sqcRZGate(q, 2.614935036154696, 3);
  sqcRYGate(q, 3.1414806266480126, 4);
  sqcRZGate(q, -2.8950095370993965, 4);
  sqcRYGate(q, 1.5712718050518637, 5);
  sqcRZGate(q, -1.5657412214144646, 5);
  sqcRYGate(q, 1.5709271191156788, 6);
  sqcRZGate(q, 0.2427585977802609, 6);
  sqcRYGate(q, -4.306925733215947e-05, 7);
  sqcRZGate(q, -0.0011096466578575104, 7);
  sqcRYGate(q, -1.5711576751814345, 8);
  sqcRZGate(q, 1.707190694092443, 8);
  sqcRYGate(q, 1.5708534332505186, 9);
  sqcRZGate(q, -1.5730547582679062, 9);
  sqcRYGate(q, 1.5709013282121145, 10);
  sqcRZGate(q, -1.1682618225171353, 10);
  sqcRYGate(q, 0.0004679661331081775, 11);
  sqcRZGate(q, -0.7916375429759145, 11);
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
  sqcRYGate(q, -1.5705214110905787, 0);
  sqcRZGate(q, -0.09760299868282374, 0);
  sqcRYGate(q, 1.5707426120910857, 1);
  sqcRZGate(q, -1.5666487469068473, 1);
  sqcRYGate(q, 3.1384007563009018, 2);
  sqcRZGate(q, 1.8195488553626398, 2);
  sqcRYGate(q, -3.1409356630067387, 3);
  sqcRZGate(q, 1.725434004956588, 3);
  sqcRYGate(q, 1.5699978706650393, 4);
  sqcRZGate(q, 0.01080034015019429, 4);
  sqcRYGate(q, -1.5716429806579901, 5);
  sqcRZGate(q, 2.480115758745153, 5);
  sqcRYGate(q, -5.375798567542151e-05, 6);
  sqcRZGate(q, 2.890130164417117, 6);
  sqcRYGate(q, 0.0003240767017835821, 7);
  sqcRZGate(q, 3.1088461210085603, 7);
  sqcRYGate(q, 2.8084307059616447, 8);
  sqcRZGate(q, 1.7013186515076564, 8);
  sqcRYGate(q, -1.5707975254186275, 9);
  sqcRZGate(q, -0.5981388049830835, 9);
  sqcRYGate(q, -3.141132920862257, 10);
  sqcRZGate(q, 2.8364468152027342, 10);
  sqcRYGate(q, -1.57145008991977, 11);
  sqcRZGate(q, 1.5706184630793194, 11);
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
  sqcRYGate(q, 0.018942979115079694, 0);
  sqcRZGate(q, 1.6746420609666268, 0);
  sqcRYGate(q, 1.5643223857739614, 1);
  sqcRZGate(q, 1.5699002757275187, 1);
  sqcRYGate(q, 1.5707392024820743, 2);
  sqcRZGate(q, -1.757494905815329, 2);
  sqcRYGate(q, 1.5713175473020553, 3);
  sqcRZGate(q, -2.092896129195017, 3);
  sqcRYGate(q, 3.141556732310659, 4);
  sqcRZGate(q, -1.903282220423126, 4);
  sqcRYGate(q, 7.790398726364645e-05, 5);
  sqcRZGate(q, -0.5917593193034943, 5);
  sqcRYGate(q, 0.04777347156634448, 6);
  sqcRZGate(q, 1.0936109486841559, 6);
  sqcRYGate(q, 3.1414078888603862, 7);
  sqcRZGate(q, 1.2506738385166407, 7);
  sqcRYGate(q, 1.571400188876635, 8);
  sqcRZGate(q, -0.0005390948062926737, 8);
  sqcRYGate(q, 3.1415223390828255, 9);
  sqcRZGate(q, 1.2669020085240126, 9);
  sqcRYGate(q, -0.000438396088490417, 10);
  sqcRZGate(q, 2.279134964748451, 10);
  sqcRYGate(q, 1.5707088363254789, 11);
  sqcRZGate(q, -0.24534878613230227, 11);
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
  sqcRYGate(q, 1.5703822158072196, 0);
  sqcRZGate(q, -1.7578507997000905, 0);
  sqcRYGate(q, -1.570945414431189, 1);
  sqcRZGate(q, 2.4516996322376925, 1);
  sqcRYGate(q, -3.1414416081892473, 2);
  sqcRZGate(q, 1.1970034152259634, 2);
  sqcRYGate(q, 6.316373694331135e-05, 3);
  sqcRZGate(q, 2.973675079534324, 3);
  sqcRYGate(q, 3.14061546057716, 4);
  sqcRZGate(q, -2.1014806932283854, 4);
  sqcRYGate(q, -0.0009928981142701687, 5);
  sqcRZGate(q, 2.1335284004771733, 5);
  sqcRYGate(q, 3.141374547716175, 6);
  sqcRZGate(q, 2.4676310559098873, 6);
  sqcRYGate(q, -3.1413177069144727, 7);
  sqcRZGate(q, 0.11973451484446439, 7);
  sqcRYGate(q, -1.5266176863371317, 8);
  sqcRZGate(q, -1.75833313641473, 8);
  sqcRYGate(q, 3.1406657717255824, 9);
  sqcRZGate(q, -1.9669562489239203, 9);
  sqcRYGate(q, 1.570701671141931, 10);
  sqcRZGate(q, -0.1873419387025841, 10);
  sqcRYGate(q, -3.140906165553692, 11);
  sqcRZGate(q, 0.6350317473925289, 11);

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
