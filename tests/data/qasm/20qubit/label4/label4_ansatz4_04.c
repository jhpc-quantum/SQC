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

  sqcRYGate(q, -1.5707790460857174, 0);
  sqcRZGate(q, 1.5708326207393897, 0);
  sqcRYGate(q, 3.1415070344410725, 1);
  sqcRZGate(q, 2.3329537213116023, 1);
  sqcRYGate(q, 3.079942868294901, 2);
  sqcRZGate(q, 0.00011585884463792717, 2);
  sqcRYGate(q, 1.5707966007725918, 3);
  sqcRZGate(q, 1.5714612632132587, 3);
  sqcRYGate(q, -3.1221988909094915, 4);
  sqcRZGate(q, -1.563499940873837, 4);
  sqcRYGate(q, 3.1415922563729928, 5);
  sqcRZGate(q, 2.7584211266625513, 5);
  sqcRYGate(q, 1.5708127883514145, 6);
  sqcRZGate(q, 2.8811096295378032e-05, 6);
  sqcRYGate(q, -2.8965003302516834e-06, 7);
  sqcRZGate(q, 0.22527693716177913, 7);
  sqcRYGate(q, -1.5708144757467717, 8);
  sqcRZGate(q, 1.8329402788017257, 8);
  sqcRYGate(q, 1.5707965413939429, 9);
  sqcRZGate(q, -1.5707959774164175, 9);
  sqcRYGate(q, -1.5707966991504623, 10);
  sqcRZGate(q, -5.937228682406921e-06, 10);
  sqcRYGate(q, 1.5338978193118982, 11);
  sqcRZGate(q, 3.093584341356025, 11);
  sqcRYGate(q, 3.1415821963736588, 12);
  sqcRZGate(q, 0.3510271908255825, 12);
  sqcRYGate(q, 3.141590229759664, 13);
  sqcRZGate(q, -0.5282952524292549, 13);
  sqcRYGate(q, 3.1415486877224534, 14);
  sqcRZGate(q, 1.7561461089704364, 14);
  sqcRYGate(q, -1.8678564810834717, 15);
  sqcRZGate(q, 3.1020124179671753, 15);
  sqcRYGate(q, -6.124187645895063e-07, 16);
  sqcRZGate(q, 1.0897618018253414, 16);
  sqcRYGate(q, 2.627675807163219, 17);
  sqcRZGate(q, 1.5685058366877234, 17);
  sqcRYGate(q, -1.570819261504301, 18);
  sqcRZGate(q, -3.1414988006391718, 18);
  sqcRYGate(q, -1.570791032651246, 19);
  sqcRZGate(q, 1.5708172242002512, 19);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.5701513752974319, 0);
  sqcRZGate(q, 1.0860947929180185, 0);
  sqcRYGate(q, -1.5707845939927605, 1);
  sqcRZGate(q, -3.1414029265078764, 1);
  sqcRYGate(q, 1.570795560109108, 2);
  sqcRZGate(q, 3.138164114163149, 2);
  sqcRYGate(q, -1.5708243901457752, 3);
  sqcRZGate(q, -2.799629207538745, 3);
  sqcRYGate(q, -1.5660231391673518, 4);
  sqcRZGate(q, 0.05729363207671056, 4);
  sqcRYGate(q, -1.57079814711288, 5);
  sqcRZGate(q, -1.6730925018942917, 5);
  sqcRYGate(q, -1.570787555171198, 6);
  sqcRZGate(q, -1.5707989931647397, 6);
  sqcRYGate(q, 1.570796951995618, 7);
  sqcRZGate(q, -1.7130465890077682, 7);
  sqcRYGate(q, 1.2769482117611577, 8);
  sqcRZGate(q, -0.7815282090144504, 8);
  sqcRYGate(q, -1.5707967353720085, 9);
  sqcRZGate(q, 1.970842611863679, 9);
  sqcRYGate(q, 1.5709028638257332, 10);
  sqcRZGate(q, -1.4810127905470902, 10);
  sqcRYGate(q, -0.00011139367902490103, 11);
  sqcRZGate(q, 0.04800868590717787, 11);
  sqcRYGate(q, 1.5708099322045332, 12);
  sqcRZGate(q, 2.6556213605518937, 12);
  sqcRYGate(q, -8.667538937245922e-06, 13);
  sqcRZGate(q, -2.398448165566112, 13);
  sqcRYGate(q, -1.5707948679960442, 14);
  sqcRZGate(q, 0.34668516835581237, 14);
  sqcRYGate(q, 3.089285183862926, 15);
  sqcRZGate(q, 3.102523650799579, 15);
  sqcRYGate(q, 3.14158576856639, 16);
  sqcRZGate(q, -2.4709640225853624, 16);
  sqcRYGate(q, 3.118458101186691, 17);
  sqcRZGate(q, -0.25077515741908313, 17);
  sqcRYGate(q, -0.18284502762756993, 18);
  sqcRZGate(q, -0.00012349471143773146, 18);
  sqcRYGate(q, -1.570805460860182, 19);
  sqcRZGate(q, 0.18385486466898757, 19);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.452588611439154e-05, 0);
  sqcRZGate(q, 0.48394002936657593, 0);
  sqcRYGate(q, -1.5689234323688408, 1);
  sqcRZGate(q, -2.222694847143397, 1);
  sqcRYGate(q, -2.796188134170126, 2);
  sqcRZGate(q, 1.3582238939039044, 2);
  sqcRYGate(q, -5.097381236280539e-06, 3);
  sqcRZGate(q, -0.3428316903367774, 3);
  sqcRYGate(q, -3.141400930534854, 4);
  sqcRZGate(q, 0.05729437839313531, 4);
  sqcRYGate(q, 3.141592451293568, 5);
  sqcRZGate(q, 1.4692616590869172, 5);
  sqcRYGate(q, -0.4881509411477509, 6);
  sqcRZGate(q, -1.0912201652392146e-06, 6);
  sqcRYGate(q, -1.4724230723572873e-08, 7);
  sqcRZGate(q, 1.6928762861746183, 7);
  sqcRYGate(q, 1.422851648781819, 8);
  sqcRZGate(q, -3.1399980378782075, 8);
  sqcRYGate(q, -3.1415824122426943, 9);
  sqcRZGate(q, 2.713729067568, 9);
  sqcRYGate(q, -0.0015720529869985404, 10);
  sqcRZGate(q, 3.0518088577584637, 10);
  sqcRYGate(q, -1.571085787733888, 11);
  sqcRZGate(q, -0.0016087093839067166, 11);
  sqcRYGate(q, 3.14155777146549, 12);
  sqcRZGate(q, 1.0848271911819376, 12);
  sqcRYGate(q, 2.090712943214612e-06, 13);
  sqcRZGate(q, 2.744924734988714, 13);
  sqcRYGate(q, -1.727133261346497e-05, 14);
  sqcRZGate(q, 1.1566415106186594, 14);
  sqcRYGate(q, 1.5707966668962292, 15);
  sqcRZGate(q, 4.6211763031323017e-05, 15);
  sqcRYGate(q, 1.288530937810794, 16);
  sqcRZGate(q, 0.5410059418417097, 16);
  sqcRYGate(q, 3.1415889736607503, 17);
  sqcRZGate(q, -0.9116730657639432, 17);
  sqcRYGate(q, 2.4398204750599355, 18);
  sqcRZGate(q, -1.5708283819398439, 18);
  sqcRYGate(q, 1.5716790009218258, 19);
  sqcRZGate(q, 0.03646038526845826, 19);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.5698612022907001, 0);
  sqcRZGate(q, -1.3052171671937018, 0);
  sqcRYGate(q, 7.719262869660394e-06, 1);
  sqcRZGate(q, 2.0916804801298983, 1);
  sqcRYGate(q, 3.1415835002831347, 2);
  sqcRZGate(q, -1.1175782072498488, 2);
  sqcRYGate(q, -1.571709530813635, 3);
  sqcRZGate(q, -0.1108000575793131, 3);
  sqcRYGate(q, -1.5744015340118551, 4);
  sqcRZGate(q, 1.5687088277522687, 4);
  sqcRYGate(q, -1.5708081693538336, 5);
  sqcRZGate(q, -1.572961928677493, 5);
  sqcRYGate(q, -1.5707988285833756, 6);
  sqcRZGate(q, -2.422189838180825, 6);
  sqcRYGate(q, -1.5707736707392455, 7);
  sqcRZGate(q, -2.943814780567575, 7);
  sqcRYGate(q, 1.5661654407842427, 8);
  sqcRZGate(q, -3.0187025973593458, 8);
  sqcRYGate(q, 1.5707853391085635, 9);
  sqcRZGate(q, -0.8462527785304106, 9);
  sqcRYGate(q, 1.5707916761655207, 10);
  sqcRZGate(q, 0.08992946917949776, 10);
  sqcRYGate(q, 1.5706899944973625, 11);
  sqcRZGate(q, 1.940787238153332, 11);
  sqcRYGate(q, -1.400336972442541, 12);
  sqcRZGate(q, -3.141591997872042, 12);
  sqcRYGate(q, -1.5707967433391175, 13);
  sqcRZGate(q, 1.572413654166204, 13);
  sqcRYGate(q, 3.1415895105094798, 14);
  sqcRZGate(q, 3.0740265272806795, 14);
  sqcRYGate(q, 3.00180199518979, 15);
  sqcRZGate(q, -1.5707341326857032, 15);
  sqcRYGate(q, -1.2362245758602858e-05, 16);
  sqcRZGate(q, -0.5406384245556485, 16);
  sqcRYGate(q, -9.621100005273768e-06, 17);
  sqcRZGate(q, 1.3672026541814635, 17);
  sqcRYGate(q, 1.5708134260417852, 18);
  sqcRZGate(q, 0.49935261242928153, 18);
  sqcRYGate(q, -1.5708354765013803, 19);
  sqcRZGate(q, -1.6567204067327808, 19);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.533717905922975, 0);
  sqcRZGate(q, 2.436458314293054, 0);
  sqcRYGate(q, 3.1402313918534595, 1);
  sqcRZGate(q, 0.0678219359770445, 1);
  sqcRYGate(q, 3.141541623330105, 2);
  sqcRZGate(q, 2.236500256441043, 2);
  sqcRYGate(q, 0.18923463788203335, 3);
  sqcRZGate(q, 0.11079422179211362, 3);
  sqcRYGate(q, -0.161457429309639, 4);
  sqcRZGate(q, 0.3497854725330977, 4);
  sqcRYGate(q, -1.5707885226084037, 5);
  sqcRZGate(q, 1.503540354285371, 5);
  sqcRYGate(q, 3.141591158540487, 6);
  sqcRZGate(q, 0.14595554147729395, 6);
  sqcRYGate(q, -3.140564234671639, 7);
  sqcRZGate(q, 1.5510932568514482, 7);
  sqcRYGate(q, -7.016101352705384e-07, 8);
  sqcRZGate(q, -1.5770366470556647, 8);
  sqcRYGate(q, 2.8976542045811016e-06, 9);
  sqcRZGate(q, -0.7245637500406854, 9);
  sqcRYGate(q, -2.997218653874154, 10);
  sqcRZGate(q, 2.1596726976722085, 10);
  sqcRYGate(q, -1.2060662897376382e-05, 11);
  sqcRZGate(q, -2.6051325768505427, 11);
  sqcRYGate(q, -2.891060385559079, 12);
  sqcRZGate(q, 4.3494878596233944e-07, 12);
  sqcRYGate(q, 0.019877807716997143, 13);
  sqcRZGate(q, -1.5724138172399575, 13);
  sqcRYGate(q, 1.5759850750971032, 14);
  sqcRZGate(q, 1.5701276565603948, 14);
  sqcRYGate(q, 1.5707973420774695, 15);
  sqcRZGate(q, -1.5715278842880986, 15);
  sqcRYGate(q, -3.1189310019828773, 16);
  sqcRZGate(q, -1.572180847781718, 16);
  sqcRYGate(q, -1.5708081259167281, 17);
  sqcRZGate(q, -2.7061708065748453, 17);
  sqcRYGate(q, -0.0020095750874773444, 18);
  sqcRZGate(q, -0.9246949414773543, 18);
  sqcRYGate(q, 0.00024288376078888084, 19);
  sqcRZGate(q, 1.5647456441026666, 19);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.000134653729484846, 0);
  sqcRZGate(q, -0.614754997750036, 0);
  sqcRYGate(q, 3.1415752624299578, 1);
  sqcRZGate(q, -1.3693411514547118, 1);
  sqcRYGate(q, -1.570796077874304, 2);
  sqcRZGate(q, 2.1183281111537202e-07, 2);
  sqcRYGate(q, 1.570801118674267, 3);
  sqcRZGate(q, -3.1415920998152935, 3);
  sqcRYGate(q, 0.00014754936560024134, 4);
  sqcRZGate(q, 2.95677462405587, 4);
  sqcRYGate(q, 0.01167431133852798, 5);
  sqcRZGate(q, -0.606548248140694, 5);
  sqcRYGate(q, -2.4894589550860966e-06, 6);
  sqcRZGate(q, -2.5042060210025205, 6);
  sqcRYGate(q, 0.0001487112983739442, 7);
  sqcRZGate(q, 0.21748228364618935, 7);
  sqcRYGate(q, -3.1007578206512116, 8);
  sqcRZGate(q, -3.0248539057922885, 8);
  sqcRYGate(q, 0.40964230362486287, 9);
  sqcRZGate(q, -3.14156973683677, 9);
  sqcRYGate(q, -1.5707937426139686, 10);
  sqcRZGate(q, 3.709197831547328e-06, 10);
  sqcRYGate(q, -7.223708815029538e-05, 11);
  sqcRZGate(q, 2.2351417545176577, 11);
  sqcRYGate(q, 1.5707948556880562, 12);
  sqcRZGate(q, -3.1415859243966584, 12);
  sqcRYGate(q, 1.570796170694066, 13);
  sqcRZGate(q, 2.3470656019625573, 13);
  sqcRYGate(q, -1.5708122866769543, 14);
  sqcRZGate(q, 3.141584466288465, 14);
  sqcRYGate(q, 1.214942458954399, 15);
  sqcRZGate(q, 0.00013904486668181448, 15);
  sqcRYGate(q, -1.5707995474313692, 16);
  sqcRZGate(q, -1.5545984846021739, 16);
  sqcRYGate(q, 0.0005783637419272125, 17);
  sqcRZGate(q, -2.7079483080922175, 17);
  sqcRYGate(q, -1.5707922040019184, 18);
  sqcRZGate(q, -0.6264117360772827, 18);
  sqcRYGate(q, 0.021917074021326772, 19);
  sqcRZGate(q, -1.4788322404683214, 19);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -3.141582284910315, 0);
  sqcRZGate(q, -1.9699497861503015, 0);
  sqcRYGate(q, -2.42185490833457, 1);
  sqcRZGate(q, -0.28440479378566175, 1);
  sqcRYGate(q, -1.5707964394297302, 2);
  sqcRZGate(q, 1.563679185732743, 2);
  sqcRYGate(q, -1.570799891308912, 3);
  sqcRZGate(q, 0.00047209582388596516, 3);
  sqcRYGate(q, 1.2132400823937057e-07, 4);
  sqcRZGate(q, -1.7358010269043085, 4);
  sqcRYGate(q, -4.425920146822193e-06, 5);
  sqcRZGate(q, -2.46778761412669, 5);
  sqcRYGate(q, 9.766833350771214e-07, 6);
  sqcRZGate(q, 1.5069333365888697, 6);
  sqcRYGate(q, -1.5709915460657131, 7);
  sqcRZGate(q, 1.569946757273935, 7);
  sqcRYGate(q, 1.5707962897139245, 8);
  sqcRZGate(q, -1.8436608773225087, 8);
  sqcRYGate(q, 1.5710623990663035, 9);
  sqcRZGate(q, -3.1233963303016665, 9);
  sqcRYGate(q, -1.570795968236431, 10);
  sqcRZGate(q, 1.4761058077084568, 10);
  sqcRYGate(q, 1.5707993944880112, 11);
  sqcRZGate(q, -0.2699281446165527, 11);
  sqcRYGate(q, 0.32513976183190607, 12);
  sqcRZGate(q, 1.5707999224979892, 12);
  sqcRYGate(q, -3.141591030661766, 13);
  sqcRZGate(q, 2.3470677975398266, 13);
  sqcRYGate(q, -1.570796137088604, 14);
  sqcRZGate(q, -3.1372901141296525, 14);
  sqcRYGate(q, 1.5707963368858309, 15);
  sqcRZGate(q, -1.8507873886261373e-06, 15);
  sqcRYGate(q, -1.9836521557377205e-07, 16);
  sqcRZGate(q, -1.682170066681705, 16);
  sqcRYGate(q, -6.9602753001163364e-06, 17);
  sqcRZGate(q, -2.4398629005025323, 17);
  sqcRYGate(q, -0.03461630156913148, 18);
  sqcRZGate(q, -0.9441234552157828, 18);
  sqcRYGate(q, 0.4709618927441577, 19);
  sqcRZGate(q, 1.4533376790915042e-05, 19);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -3.141547164463885, 0);
  sqcRZGate(q, 1.0735504622252536, 0);
  sqcRYGate(q, -5.4129296361615786e-05, 1);
  sqcRZGate(q, -0.06893591250017651, 1);
  sqcRYGate(q, 1.359764033792281, 2);
  sqcRZGate(q, 3.1098084626720435, 2);
  sqcRYGate(q, 1.5708256912932281, 3);
  sqcRZGate(q, 2.789215184617251, 3);
  sqcRYGate(q, 1.5707966195112455, 4);
  sqcRZGate(q, 3.108549647937307, 4);
  sqcRYGate(q, -1.570796914799107, 5);
  sqcRZGate(q, 1.218456968335479, 5);
  sqcRYGate(q, 0.08721154123936349, 6);
  sqcRZGate(q, 3.108473575385338, 6);
  sqcRYGate(q, -1.5707959913225127, 7);
  sqcRZGate(q, -0.3523441036105357, 7);
  sqcRYGate(q, -3.141587137746022, 8);
  sqcRZGate(q, 2.83568654525626, 8);
  sqcRYGate(q, 3.1415893285830276, 9);
  sqcRZGate(q, -1.9049582330874764, 9);
  sqcRYGate(q, -1.5708153156385212, 10);
  sqcRZGate(q, 1.5378908587068871, 10);
  sqcRYGate(q, 3.141333003594613, 11);
  sqcRZGate(q, 0.9485035876528498, 11);
  sqcRYGate(q, 1.5707859707689504, 12);
  sqcRZGate(q, -0.03306251114308223, 12);
  sqcRYGate(q, -1.570796861418307, 13);
  sqcRZGate(q, -0.35235359540725497, 13);
  sqcRYGate(q, -2.9751403826348444, 14);
  sqcRZGate(q, 3.1128815492619477, 14);
  sqcRYGate(q, 1.5707918075008722, 15);
  sqcRZGate(q, -0.3516759108055971, 15);
  sqcRYGate(q, 2.435052980561666e-06, 16);
  sqcRZGate(q, 0.03253248365033112, 16);
  sqcRYGate(q, 1.5709919926202165, 17);
  sqcRZGate(q, -0.35202191290242885, 17);
  sqcRYGate(q, 2.00773572631119, 18);
  sqcRZGate(q, -0.0323830414750315, 18);
  sqcRYGate(q, 1.5687903902213776, 19);
  sqcRZGate(q, -0.32735314027466966, 19);

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
