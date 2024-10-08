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

  sqcRYGate(q, 0.49356061404060797, 0);
  sqcRZGate(q, -0.28711454993116536, 0);
  sqcRYGate(q, -0.6192220344798836, 1);
  sqcRZGate(q, 1.7715899835294522, 1);
  sqcRYGate(q, -2.5624602088695823, 2);
  sqcRZGate(q, 2.1756192964168832, 2);
  sqcRYGate(q, 2.1709229408162423, 3);
  sqcRZGate(q, 2.819568566368404, 3);
  sqcRYGate(q, -1.573674504383424, 4);
  sqcRZGate(q, -2.877789507316945, 4);
  sqcRYGate(q, -0.24820266349682635, 5);
  sqcRZGate(q, 2.228979634602191, 5);
  sqcRYGate(q, -2.5441945746203727, 6);
  sqcRZGate(q, 2.020563649363865, 6);
  sqcRYGate(q, -0.46013308633550754, 7);
  sqcRZGate(q, -2.2682366041735844, 7);
  sqcRYGate(q, -1.6494087382411233, 8);
  sqcRZGate(q, -3.1246543835398986, 8);
  sqcRYGate(q, 0.000886908065617753, 9);
  sqcRZGate(q, -2.81393622152049, 9);
  sqcRYGate(q, -0.003699362597504141, 10);
  sqcRZGate(q, 2.2968928016535006, 10);
  sqcRYGate(q, -3.0426211770850027, 11);
  sqcRZGate(q, 0.5223364912531334, 11);
  sqcRYGate(q, 1.0997605569515594, 12);
  sqcRZGate(q, 2.9961154003553028, 12);
  sqcRYGate(q, -1.5464326404850433, 13);
  sqcRZGate(q, -2.2539863110208183, 13);
  sqcRYGate(q, 0.05312716804774009, 14);
  sqcRZGate(q, 1.7219997934556615, 14);
  sqcRYGate(q, -2.703644213336125, 15);
  sqcRZGate(q, 0.8887480905164871, 15);
  sqcRYGate(q, 0.740038096728249, 16);
  sqcRZGate(q, 0.08131221842426262, 16);
  sqcRYGate(q, 1.2584909724808861, 17);
  sqcRZGate(q, -0.21078560093404744, 17);
  sqcRYGate(q, 1.7410770956630666, 18);
  sqcRZGate(q, 0.5251953141322898, 18);
  sqcRYGate(q, 0.45333730530074645, 19);
  sqcRZGate(q, -0.13990996129962419, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -1.9303377147519285, 0);
  sqcRZGate(q, -2.5458692357305615, 0);
  sqcRYGate(q, -1.9113110756078768, 1);
  sqcRZGate(q, -2.9966503081212017, 1);
  sqcRYGate(q, -2.1820687759050683, 2);
  sqcRZGate(q, -0.07897560003596382, 2);
  sqcRYGate(q, -4.979614190144828e-05, 3);
  sqcRZGate(q, 0.3928765893594504, 3);
  sqcRYGate(q, -0.011626023185676534, 4);
  sqcRZGate(q, 0.5298758697144852, 4);
  sqcRYGate(q, 3.13885797277897, 5);
  sqcRZGate(q, -2.745281474315631, 5);
  sqcRYGate(q, -3.0164793518468938, 6);
  sqcRZGate(q, 1.1453852437602954, 6);
  sqcRYGate(q, -1.4231008716181603, 7);
  sqcRZGate(q, 0.6885292024610341, 7);
  sqcRYGate(q, 1.63200780480721, 8);
  sqcRZGate(q, -3.000973957986866, 8);
  sqcRYGate(q, -3.1351038015249415, 9);
  sqcRZGate(q, 0.8486015443241212, 9);
  sqcRYGate(q, -0.10434646399804759, 10);
  sqcRZGate(q, 1.3757459252848319, 10);
  sqcRYGate(q, 3.0660136926278274, 11);
  sqcRZGate(q, -1.7912001889623348, 11);
  sqcRYGate(q, 1.5613573881685545, 12);
  sqcRZGate(q, -2.245660499058223, 12);
  sqcRYGate(q, 3.122863005469038, 13);
  sqcRZGate(q, -2.263097499597471, 13);
  sqcRYGate(q, -3.14152296173512, 14);
  sqcRZGate(q, -2.2090951357190414, 14);
  sqcRYGate(q, 3.140031415116564, 15);
  sqcRZGate(q, -1.6134166363652254, 15);
  sqcRYGate(q, -2.8879090341629325, 16);
  sqcRZGate(q, -2.6529657821010266, 16);
  sqcRYGate(q, -1.6377919852918301, 17);
  sqcRZGate(q, -0.11884947781583577, 17);
  sqcRYGate(q, 2.8457746867463616, 18);
  sqcRZGate(q, -0.0013212856851971821, 18);
  sqcRYGate(q, 0.985516432774659, 19);
  sqcRZGate(q, -0.46451522174917287, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -0.43969931533097295, 0);
  sqcRZGate(q, 2.754163357716334, 0);
  sqcRYGate(q, 1.1379482297073238, 1);
  sqcRZGate(q, 2.962387919479681, 1);
  sqcRYGate(q, 1.960916126736321, 2);
  sqcRZGate(q, -3.1223538526584282, 2);
  sqcRYGate(q, 1.7537815709855085, 3);
  sqcRZGate(q, 0.14817961412789415, 3);
  sqcRYGate(q, 3.0601436086316234, 4);
  sqcRZGate(q, 2.9977777444337015, 4);
  sqcRYGate(q, -0.0730507237592617, 5);
  sqcRZGate(q, 2.80886552522178, 5);
  sqcRYGate(q, 1.5943805800593513, 6);
  sqcRZGate(q, 1.971769923912933, 6);
  sqcRYGate(q, 0.7811648716108569, 7);
  sqcRZGate(q, 1.8717603394603728, 7);
  sqcRYGate(q, -1.5937444730017596, 8);
  sqcRZGate(q, 0.11674901478793893, 8);
  sqcRYGate(q, 0.001234855881462122, 9);
  sqcRZGate(q, -2.476863091332496, 9);
  sqcRYGate(q, -0.03627568381875908, 10);
  sqcRZGate(q, 0.3997171104005731, 10);
  sqcRYGate(q, 1.5823359106218833, 11);
  sqcRZGate(q, -3.0013437268720393, 11);
  sqcRYGate(q, -0.12564551611630304, 12);
  sqcRZGate(q, 0.8248352476213122, 12);
  sqcRYGate(q, -2.6699427273016947, 13);
  sqcRZGate(q, -2.7972247181991285, 13);
  sqcRYGate(q, -0.6890064083917357, 14);
  sqcRZGate(q, 2.1905199112613185, 14);
  sqcRYGate(q, 1.7147886506521184, 15);
  sqcRZGate(q, 1.797973743165433, 15);
  sqcRYGate(q, -0.49110827140924995, 16);
  sqcRZGate(q, -1.6524877292155462, 16);
  sqcRYGate(q, 0.8099470000283207, 17);
  sqcRZGate(q, -1.3120592843543841, 17);
  sqcRYGate(q, -1.155155685733641, 18);
  sqcRZGate(q, -2.717112784382116, 18);
  sqcRYGate(q, -1.1859155724799546, 19);
  sqcRZGate(q, 1.1819011732320535, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 0.8784735125130947, 0);
  sqcRZGate(q, 2.3261450556341625, 0);
  sqcRYGate(q, -1.0148709808598493, 1);
  sqcRZGate(q, -2.5314506555541136, 1);
  sqcRYGate(q, -1.3110910975103574, 2);
  sqcRZGate(q, 2.1358941389872284, 2);
  sqcRYGate(q, 2.9839146868004236, 3);
  sqcRZGate(q, 0.463378523074311, 3);
  sqcRYGate(q, 3.133167623884259, 4);
  sqcRZGate(q, 2.463733249417192, 4);
  sqcRYGate(q, 3.131623146816625, 5);
  sqcRZGate(q, -0.9815719065803582, 5);
  sqcRYGate(q, 3.1090055333873963, 6);
  sqcRZGate(q, 0.5732285259185348, 6);
  sqcRYGate(q, -1.5420356630935583, 7);
  sqcRZGate(q, -0.7081133522307052, 7);
  sqcRYGate(q, -0.23498839665892213, 8);
  sqcRZGate(q, 1.3242503999257664, 8);
  sqcRYGate(q, 2.997478858229835, 9);
  sqcRZGate(q, -1.3009354059050589, 9);
  sqcRYGate(q, 0.210901424475095, 10);
  sqcRZGate(q, 2.8616109320094703, 10);
  sqcRYGate(q, -1.9797565884543964, 11);
  sqcRZGate(q, -3.0266154491540087, 11);
  sqcRYGate(q, -3.0075812194824354, 12);
  sqcRZGate(q, 2.008348061501356, 12);
  sqcRYGate(q, -3.141335909504762, 13);
  sqcRZGate(q, 0.2830409541746545, 13);
  sqcRYGate(q, -3.1139778080852305, 14);
  sqcRZGate(q, -0.24142837777540205, 14);
  sqcRYGate(q, 3.137444175975625, 15);
  sqcRZGate(q, 3.077592500889844, 15);
  sqcRYGate(q, -1.5745984483710505, 16);
  sqcRZGate(q, -2.143801880954519, 16);
  sqcRYGate(q, 1.7522047855296576, 17);
  sqcRZGate(q, 0.4922799228024663, 17);
  sqcRYGate(q, -1.452528032908187, 18);
  sqcRZGate(q, 0.15172493841032608, 18);
  sqcRYGate(q, -0.8721700733113441, 19);
  sqcRZGate(q, 0.5792254499964162, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 2.279480097307136, 0);
  sqcRZGate(q, 1.4989631060666637, 0);
  sqcRYGate(q, -0.2680606545603297, 1);
  sqcRZGate(q, -0.3995256034570399, 1);
  sqcRYGate(q, 3.080806180746658, 2);
  sqcRZGate(q, -2.597671433462921, 2);
  sqcRYGate(q, -0.8118358481918034, 3);
  sqcRZGate(q, -0.2386508956990484, 3);
  sqcRYGate(q, -0.09725499956956554, 4);
  sqcRZGate(q, -0.9532800949211095, 4);
  sqcRYGate(q, -1.242052913249931, 5);
  sqcRZGate(q, -0.09685138373186764, 5);
  sqcRYGate(q, -2.1328189783389204, 6);
  sqcRZGate(q, -1.5373850111658365, 6);
  sqcRYGate(q, 1.8629493344889507, 7);
  sqcRZGate(q, 2.842822923100375, 7);
  sqcRYGate(q, -1.583207905734526, 8);
  sqcRZGate(q, -0.8722104860253105, 8);
  sqcRYGate(q, -1.563816508535476, 9);
  sqcRZGate(q, 1.6566333136719615, 9);
  sqcRYGate(q, 1.528004856374793, 10);
  sqcRZGate(q, 1.565273583193699, 10);
  sqcRYGate(q, 1.5794092916201796, 11);
  sqcRZGate(q, 1.504179086631834, 11);
  sqcRYGate(q, 1.6765916293175667, 12);
  sqcRZGate(q, 3.1368949851040897, 12);
  sqcRYGate(q, -0.009505939249422883, 13);
  sqcRZGate(q, -0.5689578252210554, 13);
  sqcRYGate(q, -0.23371289307484397, 14);
  sqcRZGate(q, 1.8885781186546908, 14);
  sqcRYGate(q, 1.410878760980565, 15);
  sqcRZGate(q, 2.4867871704384794, 15);
  sqcRYGate(q, 3.0985194170338928, 16);
  sqcRZGate(q, -2.7905393272907504, 16);
  sqcRYGate(q, 1.4753936559234724, 17);
  sqcRZGate(q, -1.5802648738793286, 17);
  sqcRYGate(q, 2.9360362730839524, 18);
  sqcRZGate(q, 0.006664427934728324, 18);
  sqcRYGate(q, -2.863213978495216, 19);
  sqcRZGate(q, 0.03514393192422993, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 0.8901516151017983, 0);
  sqcRZGate(q, 0.6167327620859219, 0);
  sqcRYGate(q, 0.07602409224304373, 1);
  sqcRZGate(q, -1.8616172025200992, 1);
  sqcRYGate(q, -1.5659429394023068, 2);
  sqcRZGate(q, -2.962794889857834, 2);
  sqcRYGate(q, 2.7382608391858687, 3);
  sqcRZGate(q, -1.4059434380228921, 3);
  sqcRYGate(q, 0.007160325035829471, 4);
  sqcRZGate(q, 3.029560876523599, 4);
  sqcRYGate(q, 3.112268019072233, 5);
  sqcRZGate(q, -2.4887983618694918, 5);
  sqcRYGate(q, 0.09180583130044796, 6);
  sqcRZGate(q, 1.9955649442871704, 6);
  sqcRYGate(q, 0.00010510775774186243, 7);
  sqcRZGate(q, 2.4116002595667223, 7);
  sqcRYGate(q, -0.004596315210658729, 8);
  sqcRZGate(q, -2.319819364328801, 8);
  sqcRYGate(q, 3.1200881957078166, 9);
  sqcRZGate(q, 1.6161259634811103, 9);
  sqcRYGate(q, 0.11370064514306488, 10);
  sqcRZGate(q, 2.667000550476771, 10);
  sqcRYGate(q, -1.571285404943653, 11);
  sqcRZGate(q, -1.5687543079042998, 11);
  sqcRYGate(q, -3.101185729176404, 12);
  sqcRZGate(q, -0.1972027910068581, 12);
  sqcRYGate(q, 3.1315394058349413, 13);
  sqcRZGate(q, -0.3895036470564218, 13);
  sqcRYGate(q, -0.029512891399249067, 14);
  sqcRZGate(q, 0.5235866521383556, 14);
  sqcRYGate(q, 0.018151776474930773, 15);
  sqcRZGate(q, 0.7396878640924612, 15);
  sqcRYGate(q, -1.883034083202159, 16);
  sqcRZGate(q, 1.7799826536078591, 16);
  sqcRYGate(q, 1.5699371106863462, 17);
  sqcRZGate(q, -0.5141272297394686, 17);
  sqcRYGate(q, 0.5976175893712838, 18);
  sqcRZGate(q, 1.8203418446313737, 18);
  sqcRYGate(q, 0.11982663186573904, 19);
  sqcRZGate(q, 2.5606242516969226, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -2.469225006368785, 0);
  sqcRZGate(q, 1.9254583183689409, 0);
  sqcRYGate(q, -1.3833808465434307, 1);
  sqcRZGate(q, -1.80900017533122, 1);
  sqcRYGate(q, 1.3117626154315394, 2);
  sqcRZGate(q, 1.6773773562969165, 2);
  sqcRYGate(q, -0.4806414225987119, 3);
  sqcRZGate(q, 2.434263945522177, 3);
  sqcRYGate(q, -0.28135290815034697, 4);
  sqcRZGate(q, -2.60453788835877, 4);
  sqcRYGate(q, 2.59931309411037, 5);
  sqcRZGate(q, -0.9785861941093442, 5);
  sqcRYGate(q, -1.6687200142551726, 6);
  sqcRZGate(q, -3.1021821987644214, 6);
  sqcRYGate(q, -0.9786715176705616, 7);
  sqcRZGate(q, -1.564736152493678, 7);
  sqcRYGate(q, 0.5133331732800102, 8);
  sqcRZGate(q, -2.9639459564466293, 8);
  sqcRYGate(q, -1.5322785642415386, 9);
  sqcRZGate(q, -1.533184279901598, 9);
  sqcRYGate(q, -1.600315206418521, 10);
  sqcRZGate(q, 1.7005031215513275, 10);
  sqcRYGate(q, -1.5627042558023714, 11);
  sqcRZGate(q, -1.5127999232584193, 11);
  sqcRYGate(q, 1.6057941563886362, 12);
  sqcRZGate(q, -3.1200472365349974, 12);
  sqcRYGate(q, 2.9537115329433483, 13);
  sqcRZGate(q, -1.3976194303439538, 13);
  sqcRYGate(q, 2.9665236003549755, 14);
  sqcRZGate(q, 1.5334032997640774, 14);
  sqcRYGate(q, -1.4838873516472812, 15);
  sqcRZGate(q, 2.4309788793667018, 15);
  sqcRYGate(q, 0.12111993436228506, 16);
  sqcRZGate(q, -2.9876411980028013, 16);
  sqcRYGate(q, 1.5936740062208603, 17);
  sqcRZGate(q, -1.4781755825543652, 17);
  sqcRYGate(q, 1.9755396032277053, 18);
  sqcRZGate(q, -1.7484720659233632, 18);
  sqcRYGate(q, -0.4133340101691128, 19);
  sqcRZGate(q, 2.7168259100360355, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -0.3530220498312767, 0);
  sqcRZGate(q, 0.3235465492364975, 0);
  sqcRYGate(q, -1.0261409571354345, 1);
  sqcRZGate(q, 2.909865589917826, 1);
  sqcRYGate(q, -2.1714322087799403, 2);
  sqcRZGate(q, 0.916693906469967, 2);
  sqcRYGate(q, -2.412316072532471, 3);
  sqcRZGate(q, 2.3442068600226253, 3);
  sqcRYGate(q, 0.016347512603489992, 4);
  sqcRZGate(q, 2.3418929341127024, 4);
  sqcRYGate(q, -3.081309500055597, 5);
  sqcRZGate(q, 2.8461216053586424, 5);
  sqcRYGate(q, -0.10876262812077848, 6);
  sqcRZGate(q, -0.1968814403835166, 6);
  sqcRYGate(q, -3.140799245914238, 7);
  sqcRZGate(q, 1.171613485409078, 7);
  sqcRYGate(q, 3.104864414412221, 8);
  sqcRZGate(q, -3.0302951126350766, 8);
  sqcRYGate(q, 3.0115918127920676, 9);
  sqcRZGate(q, 1.5503667778001131, 9);
  sqcRYGate(q, -2.978773832878979, 10);
  sqcRZGate(q, 0.10612265415358822, 10);
  sqcRYGate(q, 1.4692337788869292, 11);
  sqcRZGate(q, 3.132033906648268, 11);
  sqcRYGate(q, -0.02991143492004511, 12);
  sqcRZGate(q, -1.0711212871741882, 12);
  sqcRYGate(q, 0.04450000540497909, 13);
  sqcRZGate(q, 1.5929061953488306, 13);
  sqcRYGate(q, 0.08223785272228139, 14);
  sqcRZGate(q, 2.7329785218901477, 14);
  sqcRYGate(q, 3.138967007579215, 15);
  sqcRZGate(q, 0.666537436659265, 15);
  sqcRYGate(q, -3.13229999854044, 16);
  sqcRZGate(q, 0.5261081538218119, 16);
  sqcRYGate(q, 1.2531551982546985, 17);
  sqcRZGate(q, 1.0586486999877796, 17);
  sqcRYGate(q, 1.4456171102272242, 18);
  sqcRZGate(q, 0.8267126544794501, 18);
  sqcRYGate(q, 1.697363922918022, 19);
  sqcRZGate(q, 0.6558737636882965, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -0.011364245998458693, 0);
  sqcRZGate(q, 1.3296839849051159, 0);
  sqcRYGate(q, 2.898672171771896, 1);
  sqcRZGate(q, 0.38698942832564015, 1);
  sqcRYGate(q, 2.972037862687412, 2);
  sqcRZGate(q, 1.6955235977254857, 2);
  sqcRYGate(q, 1.9267692570769093, 3);
  sqcRZGate(q, 0.47263664614538126, 3);
  sqcRYGate(q, -2.9375005435534303, 4);
  sqcRZGate(q, 0.9128417972233023, 4);
  sqcRYGate(q, 1.7557013427340424, 5);
  sqcRZGate(q, -0.253486583111218, 5);
  sqcRYGate(q, -2.2593563876492144, 6);
  sqcRZGate(q, 1.8950321687931195, 6);
  sqcRYGate(q, -0.9529728127201498, 7);
  sqcRZGate(q, -3.114296268294412, 7);
  sqcRYGate(q, 2.640434907834405, 8);
  sqcRZGate(q, 1.5070539226331119, 8);
  sqcRYGate(q, -1.452913149809575, 9);
  sqcRZGate(q, 3.087830803724254, 9);
  sqcRYGate(q, -1.532672942334582, 10);
  sqcRZGate(q, -1.3361688430974255, 10);
  sqcRYGate(q, -2.0526565547005555, 11);
  sqcRZGate(q, -0.056664470998519005, 11);
  sqcRYGate(q, 3.0164389141026993, 12);
  sqcRZGate(q, -0.9248145726736452, 12);
  sqcRYGate(q, 0.12451224414319477, 13);
  sqcRZGate(q, -3.090313041363699, 13);
  sqcRYGate(q, 1.2533858446036354, 14);
  sqcRZGate(q, 0.0580279538333377, 14);
  sqcRYGate(q, 1.7058803362097112, 15);
  sqcRZGate(q, -2.787908729110967, 15);
  sqcRYGate(q, 1.5232595149291093, 16);
  sqcRZGate(q, 1.895735429280926, 16);
  sqcRYGate(q, -1.452926212743301, 17);
  sqcRZGate(q, 2.9320454766084865, 17);
  sqcRYGate(q, 1.8481568148326408, 18);
  sqcRZGate(q, -2.225654679554098, 18);
  sqcRYGate(q, -1.6560587371420086, 19);
  sqcRZGate(q, -0.73453036329102, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.597996599015303, 0);
  sqcRZGate(q, 0.4443851489234065, 0);
  sqcRYGate(q, 2.1808780170395243, 1);
  sqcRZGate(q, -1.6365029032895642, 1);
  sqcRYGate(q, -2.152052071992455, 2);
  sqcRZGate(q, -2.6991378236895716, 2);
  sqcRYGate(q, 0.2403218124208788, 3);
  sqcRZGate(q, 0.07043761094051824, 3);
  sqcRYGate(q, 0.017208212122081793, 4);
  sqcRZGate(q, 2.4219361039993967, 4);
  sqcRYGate(q, -0.050501900549978274, 5);
  sqcRZGate(q, 2.0574923679109514, 5);
  sqcRYGate(q, -0.05311241548864192, 6);
  sqcRZGate(q, -2.504921639258132, 6);
  sqcRYGate(q, 3.1405580164957394, 7);
  sqcRZGate(q, -1.1780688408127542, 7);
  sqcRYGate(q, -0.05349529378694218, 8);
  sqcRZGate(q, -2.729125070493046, 8);
  sqcRYGate(q, -3.1409632295803758, 9);
  sqcRZGate(q, -1.6364579568641728, 9);
  sqcRYGate(q, 0.31424696603524177, 10);
  sqcRZGate(q, -0.07470511432908288, 10);
  sqcRYGate(q, -1.784270586939969, 11);
  sqcRZGate(q, -2.0045755523675375, 11);
  sqcRYGate(q, 3.1415916778089343, 12);
  sqcRZGate(q, 0.1465712402779955, 12);
  sqcRYGate(q, 0.015150849470649314, 13);
  sqcRZGate(q, 3.0840968528451618, 13);
  sqcRYGate(q, 0.2227951810816835, 14);
  sqcRZGate(q, 3.140698329770622, 14);
  sqcRYGate(q, 0.02548597271396158, 15);
  sqcRZGate(q, -0.08586824361281521, 15);
  sqcRYGate(q, -0.1316315078347916, 16);
  sqcRZGate(q, 2.8999822319466126, 16);
  sqcRYGate(q, -2.986822852079514, 17);
  sqcRZGate(q, -2.0511086460392915, 17);
  sqcRYGate(q, 2.8376926582032453, 18);
  sqcRZGate(q, -2.5402172825438716, 18);
  sqcRYGate(q, 1.8106106440711915, 19);
  sqcRZGate(q, -2.902019954160281, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.2947931026319646, 0);
  sqcRZGate(q, -1.9385490778716026, 0);
  sqcRYGate(q, -1.6160185781294256, 1);
  sqcRZGate(q, 2.9538833405336726, 1);
  sqcRYGate(q, -2.4696850400107317, 2);
  sqcRZGate(q, -0.4061542737051657, 2);
  sqcRYGate(q, 0.06164180454166779, 3);
  sqcRZGate(q, 2.974200486170019, 3);
  sqcRYGate(q, 2.8538988463015276, 4);
  sqcRZGate(q, -0.1124816961711641, 4);
  sqcRYGate(q, -1.0218424986214079, 5);
  sqcRZGate(q, -0.7988292039610503, 5);
  sqcRYGate(q, 0.47306122156995034, 6);
  sqcRZGate(q, 0.8823205006826793, 6);
  sqcRYGate(q, 1.779535411366483, 7);
  sqcRZGate(q, 0.6805368832140954, 7);
  sqcRYGate(q, 1.7159529374635856, 8);
  sqcRZGate(q, -1.5423226692518954, 8);
  sqcRYGate(q, -1.4243650632385068, 9);
  sqcRZGate(q, -0.8238832007756907, 9);
  sqcRYGate(q, 1.5466358374961127, 10);
  sqcRZGate(q, 2.4465215000265483, 10);
  sqcRYGate(q, -1.5685652302564264, 11);
  sqcRZGate(q, -1.621689985182913, 11);
  sqcRYGate(q, -1.2235877452692423, 12);
  sqcRZGate(q, 0.036729688877930045, 12);
  sqcRYGate(q, -0.2619413231585607, 13);
  sqcRZGate(q, 0.46972325538547915, 13);
  sqcRYGate(q, 1.8201965633901684, 14);
  sqcRZGate(q, -1.97345479009579, 14);
  sqcRYGate(q, 3.0983627734249928, 15);
  sqcRZGate(q, -1.6820494616162294, 15);
  sqcRYGate(q, 3.0665872815913313, 16);
  sqcRZGate(q, 1.9728520118000148, 16);
  sqcRYGate(q, -1.9919127322980774, 17);
  sqcRZGate(q, 1.6789959035328739, 17);
  sqcRYGate(q, -1.3136108621489473, 18);
  sqcRZGate(q, -1.6793814082155163, 18);
  sqcRYGate(q, 0.9133572832240917, 19);
  sqcRZGate(q, 0.9533959322379674, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 2.5840980431152794, 0);
  sqcRZGate(q, -1.3414485927734248, 0);
  sqcRYGate(q, 2.228819549590548, 1);
  sqcRZGate(q, 0.9996959912910479, 1);
  sqcRYGate(q, 0.7264981099638216, 2);
  sqcRZGate(q, 1.8092825051132988, 2);
  sqcRYGate(q, 3.023387291682463, 3);
  sqcRZGate(q, -0.8161061840854851, 3);
  sqcRYGate(q, -3.136057016877021, 4);
  sqcRZGate(q, 1.1418981433914122, 4);
  sqcRYGate(q, 0.07191178703921874, 5);
  sqcRZGate(q, 0.2673959498486252, 5);
  sqcRYGate(q, 0.09604170119658216, 6);
  sqcRZGate(q, -0.9914295113531029, 6);
  sqcRYGate(q, 0.018634286284847867, 7);
  sqcRZGate(q, 2.6707530912263504, 7);
  sqcRYGate(q, 3.0850124925834437, 8);
  sqcRZGate(q, -2.6860979043649764, 8);
  sqcRYGate(q, -0.0419377146667701, 9);
  sqcRZGate(q, 2.899177879316815, 9);
  sqcRYGate(q, 0.010461202268417508, 10);
  sqcRZGate(q, 0.7203394301617222, 10);
  sqcRYGate(q, -1.574200717894891, 11);
  sqcRZGate(q, 0.012186718956450088, 11);
  sqcRYGate(q, 0.04376980119120909, 12);
  sqcRZGate(q, 1.5348220283564313, 12);
  sqcRYGate(q, -3.1303398060138132, 13);
  sqcRZGate(q, -1.0251655390017143, 13);
  sqcRYGate(q, -0.2924451733239745, 14);
  sqcRZGate(q, -1.2849842062355972, 14);
  sqcRYGate(q, 3.131765350606478, 15);
  sqcRZGate(q, -0.26191156691964473, 15);
  sqcRYGate(q, 1.2162707043037106, 16);
  sqcRZGate(q, 1.427474324430201, 16);
  sqcRYGate(q, 0.040429177016394154, 17);
  sqcRZGate(q, -2.909474730861097, 17);
  sqcRYGate(q, 0.2935147366229959, 18);
  sqcRZGate(q, -1.360519595311107, 18);
  sqcRYGate(q, 2.0390063152059765, 19);
  sqcRZGate(q, -2.8668153233080913, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 2.4297107363976598, 0);
  sqcRZGate(q, 0.9292606386395257, 0);
  sqcRYGate(q, 1.5370390033614765, 1);
  sqcRZGate(q, -1.1064904696507423, 1);
  sqcRYGate(q, 2.2542333158900947, 2);
  sqcRZGate(q, 1.46063288031843, 2);
  sqcRYGate(q, 0.1988462601984806, 3);
  sqcRZGate(q, 0.6832574264298046, 3);
  sqcRYGate(q, 1.5160116387680116, 4);
  sqcRZGate(q, -2.068373200732699, 4);
  sqcRYGate(q, -0.7661417160925525, 5);
  sqcRZGate(q, 0.8870621975304224, 5);
  sqcRYGate(q, -0.5925394602508449, 6);
  sqcRZGate(q, 2.108059823716135, 6);
  sqcRYGate(q, -0.1746983091945582, 7);
  sqcRZGate(q, -0.7353813132175828, 7);
  sqcRYGate(q, 2.7272985101125067, 8);
  sqcRZGate(q, 2.5199785342166283, 8);
  sqcRYGate(q, 1.5575900594502987, 9);
  sqcRZGate(q, 2.069099508784089, 9);
  sqcRYGate(q, 1.5901070992236501, 10);
  sqcRZGate(q, -1.060836613377483, 10);
  sqcRYGate(q, 2.707082098453078, 11);
  sqcRZGate(q, 2.09113719460634, 11);
  sqcRYGate(q, 1.5607018443048641, 12);
  sqcRZGate(q, 2.472649245100482, 12);
  sqcRYGate(q, -1.5331279019140713, 13);
  sqcRZGate(q, 0.5238530547216032, 13);
  sqcRYGate(q, 2.861037458665845, 14);
  sqcRZGate(q, -2.2964750483929777, 14);
  sqcRYGate(q, 2.991312018564718, 15);
  sqcRZGate(q, 0.689958748880398, 15);
  sqcRYGate(q, 2.9675613015276365, 16);
  sqcRZGate(q, 0.6136097194092907, 16);
  sqcRYGate(q, -2.125215039538338, 17);
  sqcRZGate(q, -2.1728394095415977, 17);
  sqcRYGate(q, -0.4256068713936845, 18);
  sqcRZGate(q, 2.6356029404742705, 18);
  sqcRYGate(q, -0.38887165918909705, 19);
  sqcRZGate(q, -2.6045527407981357, 19);

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
