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

  sqcRYGate(q, -3.1414699670509907, 0);
  sqcRZGate(q, 1.0393787354016493, 0);
  sqcRYGate(q, -2.0832186565551725, 1);
  sqcRZGate(q, -1.2651467153838105, 1);
  sqcRYGate(q, -1.5709024360865165, 2);
  sqcRZGate(q, 1.5693027376379882, 2);
  sqcRYGate(q, -1.5862898710510471, 3);
  sqcRZGate(q, -1.9591724183663246, 3);
  sqcRYGate(q, -1.5705003804313433, 4);
  sqcRZGate(q, 0.9464398648293849, 4);
  sqcRYGate(q, -0.0730201279697713, 5);
  sqcRZGate(q, 1.8794186371655943, 5);
  sqcRYGate(q, -3.141574931706923, 6);
  sqcRZGate(q, -3.060467089696807, 6);
  sqcRYGate(q, 1.570642977018152, 7);
  sqcRZGate(q, 0.3605216908965335, 7);
  sqcRYGate(q, 1.6073596445101017, 8);
  sqcRZGate(q, -1.5836528895022361, 8);
  sqcRYGate(q, 3.117569721238255, 9);
  sqcRZGate(q, 2.771415292798547, 9);
  sqcRYGate(q, 3.141190445843432, 10);
  sqcRZGate(q, -0.07499899789110386, 10);
  sqcRYGate(q, 2.9325390943528724, 11);
  sqcRZGate(q, 0.44019030155919214, 11);
  sqcRYGate(q, -0.07225661164485782, 12);
  sqcRZGate(q, -2.2576763558582487, 12);
  sqcRYGate(q, 1.8864308009358755e-05, 13);
  sqcRZGate(q, -2.0365576092568247, 13);
  sqcRYGate(q, -0.004521330999296598, 14);
  sqcRZGate(q, -2.7709334227942235, 14);
  sqcRYGate(q, 0.5888435638264351, 15);
  sqcRZGate(q, -3.0268641453411065, 15);
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
  sqcRYGate(q, -1.5711505295489063, 0);
  sqcRZGate(q, -0.0034512834377154805, 0);
  sqcRYGate(q, -3.1374100407776866, 1);
  sqcRZGate(q, -1.2792537811738853, 1);
  sqcRYGate(q, -1.5587899102737317, 2);
  sqcRZGate(q, 0.25118509220530694, 2);
  sqcRYGate(q, -3.1413829165986273, 3);
  sqcRZGate(q, -0.5813801271062206, 3);
  sqcRYGate(q, -3.137373995261134, 4);
  sqcRZGate(q, -2.8719449770954064, 4);
  sqcRYGate(q, 3.141574263429867, 5);
  sqcRZGate(q, 0.5603939216492883, 5);
  sqcRYGate(q, 1.5707529503573232, 6);
  sqcRZGate(q, 2.5811853774362024, 6);
  sqcRYGate(q, -3.141406931098043, 7);
  sqcRZGate(q, 0.36597275911357574, 7);
  sqcRYGate(q, 2.0736937640595405, 8);
  sqcRZGate(q, -1.572488343684916, 8);
  sqcRYGate(q, -3.141586519202702, 9);
  sqcRZGate(q, 0.2918211358241771, 9);
  sqcRYGate(q, 0.041460200257015495, 10);
  sqcRZGate(q, -0.4080111130662427, 10);
  sqcRYGate(q, 0.16456118771595904, 11);
  sqcRZGate(q, -0.7197073987196267, 11);
  sqcRYGate(q, -1.4811071058062582, 12);
  sqcRZGate(q, -1.6463618683244938, 12);
  sqcRYGate(q, 3.1415750504132283, 13);
  sqcRZGate(q, 0.8301602493918203, 13);
  sqcRYGate(q, -0.00800346080603287, 14);
  sqcRZGate(q, -2.775319224737415, 14);
  sqcRYGate(q, 1.0633593840674456, 15);
  sqcRZGate(q, -1.1349702124325074, 15);
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
  sqcRYGate(q, 1.571267817416607, 0);
  sqcRZGate(q, -0.00010770201773180332, 0);
  sqcRYGate(q, 1.5713440676096708, 1);
  sqcRZGate(q, 2.2333990662218004, 1);
  sqcRYGate(q, -3.1380013948096113, 2);
  sqcRZGate(q, -2.90238031628666, 2);
  sqcRYGate(q, 1.4133573828544996, 3);
  sqcRZGate(q, 0.9100878558926121, 3);
  sqcRYGate(q, 1.5709062394255806, 4);
  sqcRZGate(q, 2.886601635381648, 4);
  sqcRYGate(q, 1.5525675442874372, 5);
  sqcRZGate(q, -1.0421083810227203, 5);
  sqcRYGate(q, 3.1413977498747054, 6);
  sqcRZGate(q, -2.7020764491516482, 6);
  sqcRYGate(q, -1.5776788774393904, 7);
  sqcRZGate(q, -2.4302856028251214, 7);
  sqcRYGate(q, -1.5700499760671665, 8);
  sqcRZGate(q, 0.037450027127194176, 8);
  sqcRYGate(q, 1.5486194346061843, 9);
  sqcRZGate(q, -2.1085567931462865, 9);
  sqcRYGate(q, 1.5715486679170656, 10);
  sqcRZGate(q, -1.5226860451803983, 10);
  sqcRYGate(q, -1.3897532362894482, 11);
  sqcRZGate(q, -1.6145894391041995, 11);
  sqcRYGate(q, -1.9913453878602594, 12);
  sqcRZGate(q, -0.7317952114300166, 12);
  sqcRYGate(q, 2.008554190080503e-05, 13);
  sqcRZGate(q, -1.9679808669863323, 13);
  sqcRYGate(q, 0.0006429117022624966, 14);
  sqcRZGate(q, 0.08342857287110714, 14);
  sqcRYGate(q, -2.5291080116590132, 15);
  sqcRZGate(q, -2.268734552278035, 15);
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
  sqcRYGate(q, -2.083460960738944, 0);
  sqcRZGate(q, -2.080721637903746, 0);
  sqcRYGate(q, 3.1415525299940894, 1);
  sqcRZGate(q, -1.0166078442604292, 1);
  sqcRYGate(q, -1.5711411508182596, 2);
  sqcRZGate(q, -1.5717703514421915, 2);
  sqcRYGate(q, 1.5737785143940108, 3);
  sqcRZGate(q, -1.2625410434227402, 3);
  sqcRYGate(q, 0.002412244950624753, 4);
  sqcRZGate(q, -2.556467779691911, 4);
  sqcRYGate(q, 0.01410019265549245, 5);
  sqcRZGate(q, -2.5944906132633716, 5);
  sqcRYGate(q, -9.97692796014249e-05, 6);
  sqcRZGate(q, -0.556133433515493, 6);
  sqcRYGate(q, 3.1415900356988478, 7);
  sqcRZGate(q, -3.0543548544151777, 7);
  sqcRYGate(q, 0.005868754827934808, 8);
  sqcRZGate(q, 0.0007608844323918618, 8);
  sqcRYGate(q, 3.134321951820035, 9);
  sqcRZGate(q, -0.6131340552872511, 9);
  sqcRYGate(q, 1.6108432768976444, 10);
  sqcRZGate(q, 3.136810595142504, 10);
  sqcRYGate(q, -1.5619180730860427, 11);
  sqcRZGate(q, 0.0011090868769860762, 11);
  sqcRYGate(q, -3.067156934948586, 12);
  sqcRZGate(q, 0.592478309619592, 12);
  sqcRYGate(q, -8.013896745852243e-05, 13);
  sqcRZGate(q, 3.052840215746157, 13);
  sqcRYGate(q, 1.5700709804870727, 14);
  sqcRZGate(q, 1.2298779094538723, 14);
  sqcRYGate(q, 2.5252537931933046, 15);
  sqcRZGate(q, -2.365585196310222, 15);
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
  sqcRYGate(q, -0.171714444118603, 0);
  sqcRZGate(q, 2.5673573724979843, 0);
  sqcRYGate(q, -3.1312360964238883, 1);
  sqcRZGate(q, 0.85845899788551, 1);
  sqcRYGate(q, 1.5697724582913475, 2);
  sqcRZGate(q, -2.6687150411412306, 2);
  sqcRYGate(q, 0.0004311146048907588, 3);
  sqcRZGate(q, -0.3080253351383341, 3);
  sqcRYGate(q, 0.0006983356220828796, 4);
  sqcRZGate(q, -0.386525182222206, 4);
  sqcRYGate(q, -0.00025920001027297026, 5);
  sqcRZGate(q, 1.4560872904312196, 5);
  sqcRYGate(q, -3.141377206488126, 6);
  sqcRZGate(q, 0.27590884480666433, 6);
  sqcRYGate(q, -0.013589877325808963, 7);
  sqcRZGate(q, -0.47788639946666306, 7);
  sqcRYGate(q, -1.570583608457489, 8);
  sqcRZGate(q, 1.5690258807530544, 8);
  sqcRYGate(q, 2.360343349742251, 9);
  sqcRZGate(q, -1.9569083947866894, 9);
  sqcRYGate(q, 1.5904231793810961, 10);
  sqcRZGate(q, -1.574555930584916, 10);
  sqcRYGate(q, -1.5709999789315738, 11);
  sqcRZGate(q, -3.140129281194885, 11);
  sqcRYGate(q, -4.504567563401451e-08, 12);
  sqcRZGate(q, -1.768750538517352, 12);
  sqcRYGate(q, 4.153576444565488e-05, 13);
  sqcRZGate(q, -1.9114968379323856, 13);
  sqcRYGate(q, 3.1392731116199575, 14);
  sqcRZGate(q, 1.9296509370751604, 14);
  sqcRYGate(q, -1.5696078631963806, 15);
  sqcRZGate(q, -0.158699564086855, 15);
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
  sqcRYGate(q, -3.1413054563550022, 0);
  sqcRZGate(q, -1.0777958257102271, 0);
  sqcRYGate(q, -3.1415306976811723, 1);
  sqcRZGate(q, -2.099354785521002, 1);
  sqcRYGate(q, -2.0576238544049383e-05, 2);
  sqcRZGate(q, 0.5536798038307024, 2);
  sqcRYGate(q, -1.5744779653467957, 3);
  sqcRZGate(q, 1.6166196081085475, 3);
  sqcRYGate(q, -1.4912758151745156, 4);
  sqcRZGate(q, 0.6988755381807228, 4);
  sqcRYGate(q, -3.1318877437583015, 5);
  sqcRZGate(q, -2.2513899180595076, 5);
  sqcRYGate(q, -3.1415829859708033, 6);
  sqcRZGate(q, 2.7774855589847482, 6);
  sqcRYGate(q, -1.1666072728902487e-06, 7);
  sqcRZGate(q, 0.5636127521056198, 7);
  sqcRYGate(q, -1.5709798339073424, 8);
  sqcRZGate(q, -0.12967816802500565, 8);
  sqcRYGate(q, -3.13969574454061, 9);
  sqcRZGate(q, -3.075566030117836, 9);
  sqcRYGate(q, 1.6241794200227169, 10);
  sqcRZGate(q, -2.984691567286126, 10);
  sqcRYGate(q, -1.5824546858660014, 11);
  sqcRZGate(q, 0.5088008758389311, 11);
  sqcRYGate(q, 2.6813056326940976, 12);
  sqcRZGate(q, -2.8705078675416646, 12);
  sqcRYGate(q, -2.4685476744140273, 13);
  sqcRZGate(q, -0.39404134865672436, 13);
  sqcRYGate(q, -2.079294155366906, 14);
  sqcRZGate(q, -1.4471634256635062, 14);
  sqcRYGate(q, -2.1302457738976903, 15);
  sqcRZGate(q, 0.8855364298638663, 15);
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
  sqcRYGate(q, -1.4194833893327563, 0);
  sqcRZGate(q, -1.4190802446233217, 0);
  sqcRYGate(q, -0.3133550697483299, 1);
  sqcRZGate(q, 1.440699406129906, 1);
  sqcRYGate(q, -0.0025280572560344647, 2);
  sqcRZGate(q, -0.1235074740021855, 2);
  sqcRYGate(q, -1.570865890492154, 3);
  sqcRZGate(q, 1.5317108377264974, 3);
  sqcRYGate(q, -0.0009360960193749436, 4);
  sqcRZGate(q, -2.8984097195521326, 4);
  sqcRYGate(q, -1.5704824772575199, 5);
  sqcRZGate(q, -1.0700028706828917, 5);
  sqcRYGate(q, 3.1112415234623296, 6);
  sqcRZGate(q, 0.5175842305940388, 6);
  sqcRYGate(q, -0.0048421410001120435, 7);
  sqcRZGate(q, -2.558187799436579, 7);
  sqcRYGate(q, 1.6787913973622688, 8);
  sqcRZGate(q, 2.418293541448887, 8);
  sqcRYGate(q, -1.7976692110380286, 9);
  sqcRZGate(q, 2.1608688506669935, 9);
  sqcRYGate(q, 2.995326326709512, 10);
  sqcRZGate(q, -2.9034029021369783, 10);
  sqcRYGate(q, -0.0002779553940328583, 11);
  sqcRZGate(q, -0.3024989699157601, 11);
  sqcRYGate(q, 3.1415190184192334, 12);
  sqcRZGate(q, 2.4307944430580144, 12);
  sqcRYGate(q, -3.141478969103858, 13);
  sqcRZGate(q, -1.9660655535868845, 13);
  sqcRYGate(q, -3.136597588928701, 14);
  sqcRZGate(q, 3.004710359859791, 14);
  sqcRYGate(q, -0.3330042569719684, 15);
  sqcRZGate(q, -0.6933581541203795, 15);
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
  sqcRYGate(q, -0.0004160169916929067, 0);
  sqcRZGate(q, -3.1008513778745925, 0);
  sqcRYGate(q, -0.08868104400703913, 1);
  sqcRZGate(q, 3.138470257242094, 1);
  sqcRYGate(q, 1.5477876518034224, 2);
  sqcRZGate(q, 1.5398501878653907, 2);
  sqcRYGate(q, 1.5937686618580544, 3);
  sqcRZGate(q, -1.3999590635426227, 3);
  sqcRYGate(q, 3.1415207568370698, 4);
  sqcRZGate(q, -0.6289438979188509, 4);
  sqcRYGate(q, 0.4427608835456402, 5);
  sqcRZGate(q, 2.4262172705723497, 5);
  sqcRYGate(q, 3.1412002674683395, 6);
  sqcRZGate(q, -2.20819235928083, 6);
  sqcRYGate(q, -3.1415922097908435, 7);
  sqcRZGate(q, 1.8976235350796609, 7);
  sqcRYGate(q, 3.1407151661875488, 8);
  sqcRZGate(q, 0.8470150006289777, 8);
  sqcRYGate(q, -0.00011624883183673457, 9);
  sqcRZGate(q, 0.9532501204647866, 9);
  sqcRYGate(q, -0.01910709482091022, 10);
  sqcRZGate(q, 1.6335947304649476, 10);
  sqcRYGate(q, -0.0001212418523612868, 11);
  sqcRZGate(q, 1.4244183542333644, 11);
  sqcRYGate(q, -0.6272149682756849, 12);
  sqcRZGate(q, 0.17422641026695374, 12);
  sqcRYGate(q, -1.3167197509282396, 13);
  sqcRZGate(q, -0.814658788689667, 13);
  sqcRYGate(q, -2.6340457872011913, 14);
  sqcRZGate(q, -1.2622895811137618, 14);
  sqcRYGate(q, -3.041743909882108, 15);
  sqcRZGate(q, -0.18743969904312882, 15);
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
  sqcRYGate(q, 0.035002071680381275, 0);
  sqcRZGate(q, 1.3679224832230852, 0);
  sqcRYGate(q, -2.4736505441229557, 1);
  sqcRZGate(q, -2.4070483894030943, 1);
  sqcRYGate(q, 1.5708448830946287, 2);
  sqcRZGate(q, -1.4235262331224177, 2);
  sqcRYGate(q, 0.0006354001427856675, 3);
  sqcRZGate(q, -1.750373995406039, 3);
  sqcRYGate(q, 2.9757557569842765, 4);
  sqcRZGate(q, 2.0217971257616685, 4);
  sqcRYGate(q, 3.141547271650172, 5);
  sqcRZGate(q, -0.8289647490862279, 5);
  sqcRYGate(q, -3.1078362539733533, 6);
  sqcRZGate(q, -2.020627676176228, 6);
  sqcRYGate(q, -2.0323017248635722e-05, 7);
  sqcRZGate(q, 2.9204043475122337, 7);
  sqcRYGate(q, 1.4314949113961815, 8);
  sqcRZGate(q, 1.9790357176873206, 8);
  sqcRYGate(q, 1.6809870819416721, 9);
  sqcRZGate(q, -2.946780879087141, 9);
  sqcRYGate(q, -1.05621890204924, 10);
  sqcRZGate(q, 2.745497749067917, 10);
  sqcRYGate(q, 1.570938070218706, 11);
  sqcRZGate(q, -0.3307812343935348, 11);
  sqcRYGate(q, -3.1415865560488694, 12);
  sqcRZGate(q, -1.9588405350420928, 12);
  sqcRYGate(q, 3.141585363773087, 13);
  sqcRZGate(q, -0.9678697144835455, 13);
  sqcRYGate(q, 3.141296693331005, 14);
  sqcRZGate(q, 0.731108608921198, 14);
  sqcRYGate(q, -1.1589433824483957, 15);
  sqcRZGate(q, -2.719202907951337, 15);
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
  sqcRYGate(q, -1.5733393930548145, 0);
  sqcRZGate(q, 0.38974577290119417, 0);
  sqcRYGate(q, 0.01135535446351632, 1);
  sqcRZGate(q, 1.0999430134428914, 1);
  sqcRYGate(q, 1.5968340978793858, 2);
  sqcRZGate(q, -1.5670231013809248, 2);
  sqcRYGate(q, -1.5751414573310605, 3);
  sqcRZGate(q, 0.2865527041848267, 3);
  sqcRYGate(q, -3.141552360983722, 4);
  sqcRZGate(q, -2.563345355377439, 4);
  sqcRYGate(q, 2.5282215817585527, 5);
  sqcRZGate(q, 0.5093353760599761, 5);
  sqcRYGate(q, -0.00244430225236858, 6);
  sqcRZGate(q, 0.9024646871514665, 6);
  sqcRYGate(q, 3.141587828181429, 7);
  sqcRZGate(q, -1.083733793367044, 7);
  sqcRYGate(q, 0.005560960734433351, 8);
  sqcRZGate(q, 2.668127280544149, 8);
  sqcRYGate(q, 1.5557944057820032, 9);
  sqcRZGate(q, 0.24211651574740944, 9);
  sqcRYGate(q, -2.271611645183637, 10);
  sqcRZGate(q, 0.005537432379620456, 10);
  sqcRYGate(q, -3.141420782994499, 11);
  sqcRZGate(q, -1.945970071288438, 11);
  sqcRYGate(q, 1.1383559056398451, 12);
  sqcRZGate(q, -1.140882295759413, 12);
  sqcRYGate(q, 1.5864873625022409, 13);
  sqcRZGate(q, 3.008298031864329, 13);
  sqcRYGate(q, 1.6001693840812559, 14);
  sqcRZGate(q, -3.028008405538793, 14);
  sqcRYGate(q, -2.2680388044858564, 15);
  sqcRZGate(q, -2.8756496885193075, 15);
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
  sqcRYGate(q, 3.141039676666346, 0);
  sqcRZGate(q, 1.9701794167456672, 0);
  sqcRYGate(q, 0.0026233600441960547, 1);
  sqcRZGate(q, 2.050492523253136, 1);
  sqcRYGate(q, -1.5705963393377826, 2);
  sqcRZGate(q, -0.5767412683464626, 2);
  sqcRYGate(q, -0.0003045399849188183, 3);
  sqcRZGate(q, -0.0015415496218613713, 3);
  sqcRYGate(q, -0.04764555447430937, 4);
  sqcRZGate(q, -1.6824996440348354, 4);
  sqcRYGate(q, -3.133917626010284, 5);
  sqcRZGate(q, 0.19099419170598228, 5);
  sqcRYGate(q, 3.1279628139922666, 6);
  sqcRZGate(q, -0.6517677862857303, 6);
  sqcRYGate(q, -6.467524302156136e-05, 7);
  sqcRZGate(q, -1.849987532138563, 7);
  sqcRYGate(q, -3.1412156626084813, 8);
  sqcRZGate(q, -0.7736951722578516, 8);
  sqcRYGate(q, 0.3114270372083219, 9);
  sqcRZGate(q, -1.79858232054474, 9);
  sqcRYGate(q, 2.9625941720680427, 10);
  sqcRZGate(q, 0.004393184582387909, 10);
  sqcRYGate(q, -0.027969033250292208, 11);
  sqcRZGate(q, 1.6081810788102535, 11);
  sqcRYGate(q, -4.24756288053274e-05, 12);
  sqcRZGate(q, 2.8230374892611767, 12);
  sqcRYGate(q, 3.1415849809184513, 13);
  sqcRZGate(q, -1.7067726916763086, 13);
  sqcRYGate(q, 7.868461171661202e-07, 14);
  sqcRZGate(q, 2.153923903925359, 14);
  sqcRYGate(q, 3.141586723973623, 15);
  sqcRZGate(q, -1.8230270388015901, 15);
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
  sqcRYGate(q, 2.482670185098544, 0);
  sqcRZGate(q, 2.0788037059834954, 0);
  sqcRYGate(q, 1.6246693900498674, 1);
  sqcRZGate(q, -2.445523928054519, 1);
  sqcRYGate(q, 3.1413382355780377, 2);
  sqcRZGate(q, 2.898254328081649, 2);
  sqcRYGate(q, 3.140884380708257, 3);
  sqcRZGate(q, 2.7703281796637382, 3);
  sqcRYGate(q, 1.568651058633281, 4);
  sqcRZGate(q, -1.0989618905718839, 4);
  sqcRYGate(q, 0.1820618625367082, 5);
  sqcRZGate(q, -0.6378774656618588, 5);
  sqcRYGate(q, 0.10571208579915936, 6);
  sqcRZGate(q, -0.7220476149119843, 6);
  sqcRYGate(q, -6.2596101555456585e-06, 7);
  sqcRZGate(q, -1.6600251226928808, 7);
  sqcRYGate(q, -3.1384216633020223, 8);
  sqcRZGate(q, -0.8079355293425625, 8);
  sqcRYGate(q, -1.3838792647131872, 9);
  sqcRZGate(q, 0.9154884630433208, 9);
  sqcRYGate(q, 0.8709721270217949, 10);
  sqcRZGate(q, -2.980734931544209, 10);
  sqcRYGate(q, 0.0031538081810503914, 11);
  sqcRZGate(q, -1.5637225329248399, 11);
  sqcRYGate(q, -0.9048288732822068, 12);
  sqcRZGate(q, -0.6958068178543091, 12);
  sqcRYGate(q, -1.6359725048604292, 13);
  sqcRZGate(q, -2.1324185608439707, 13);
  sqcRYGate(q, -0.9057213099764859, 14);
  sqcRZGate(q, 0.03221312446245336, 14);
  sqcRYGate(q, -0.601984435491133, 15);
  sqcRZGate(q, 1.383143779343734, 15);
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
  sqcRYGate(q, -0.3951984581049716, 0);
  sqcRZGate(q, -0.013320029504584772, 0);
  sqcRYGate(q, 2.541492351940999, 1);
  sqcRZGate(q, 1.854274459561374, 1);
  sqcRYGate(q, -3.1415246594782973, 2);
  sqcRZGate(q, -3.0153352721239646, 2);
  sqcRYGate(q, 1.6412423085148093, 3);
  sqcRZGate(q, 1.6839048207760445, 3);
  sqcRYGate(q, 0.0015153008079957786, 4);
  sqcRZGate(q, 2.9601849697925204, 4);
  sqcRYGate(q, -1.5634003743476137, 5);
  sqcRZGate(q, 3.0798257403606337, 5);
  sqcRYGate(q, -3.1415444102690695, 6);
  sqcRZGate(q, 3.0279411513021586, 6);
  sqcRYGate(q, 1.9149213752456262e-06, 7);
  sqcRZGate(q, 0.8314069684827786, 7);
  sqcRYGate(q, 1.572953127544414, 8);
  sqcRZGate(q, 0.006518000748905517, 8);
  sqcRYGate(q, -0.12268276323443228, 9);
  sqcRZGate(q, 0.64643729608102, 9);
  sqcRYGate(q, -1.1149634578570744, 10);
  sqcRZGate(q, -1.7073958621777923, 10);
  sqcRYGate(q, 1.5705770638138603, 11);
  sqcRZGate(q, 0.7726518096675319, 11);
  sqcRYGate(q, 1.8470103435141993e-05, 12);
  sqcRZGate(q, -2.6716855381281848, 12);
  sqcRYGate(q, -9.961616128428828e-06, 13);
  sqcRZGate(q, 0.08494097184227571, 13);
  sqcRYGate(q, 3.1412093872796882, 14);
  sqcRZGate(q, 1.3002415905692892, 14);
  sqcRYGate(q, 0.6349238423845982, 15);
  sqcRZGate(q, -1.1991889070413366, 15);
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
  sqcRYGate(q, 1.7058088514401388, 0);
  sqcRZGate(q, -3.025383304148232, 0);
  sqcRYGate(q, -3.115495743656222, 1);
  sqcRZGate(q, 1.1317947336359406, 1);
  sqcRYGate(q, 2.9704178474292564, 2);
  sqcRZGate(q, 0.6555095749249837, 2);
  sqcRYGate(q, -3.1164839805302322, 3);
  sqcRZGate(q, 0.32724292385961107, 3);
  sqcRYGate(q, 0.8222126331544066, 4);
  sqcRZGate(q, -2.3133232249170197, 4);
  sqcRYGate(q, -1.1868922246460882, 5);
  sqcRZGate(q, -2.1320090445124498, 5);
  sqcRYGate(q, 3.1415686353397767, 6);
  sqcRZGate(q, -1.3282220976544663, 6);
  sqcRYGate(q, -7.336466116212603e-06, 7);
  sqcRZGate(q, 2.4172442048524103, 7);
  sqcRYGate(q, -0.041082859458434484, 8);
  sqcRZGate(q, 3.1346785301263553, 8);
  sqcRYGate(q, 2.6620928422724686, 9);
  sqcRZGate(q, -1.5676872077675936, 9);
  sqcRYGate(q, -3.141589202433267, 10);
  sqcRZGate(q, -1.8012600157417018, 10);
  sqcRYGate(q, -1.5707925501831759, 11);
  sqcRZGate(q, -0.4247272046466133, 11);
  sqcRYGate(q, 2.0035889526721387, 12);
  sqcRZGate(q, 2.120895511284022, 12);
  sqcRYGate(q, -0.9415534969468169, 13);
  sqcRZGate(q, -0.8185503725815524, 13);
  sqcRYGate(q, 1.0063430918506029, 14);
  sqcRZGate(q, 0.9518802021936965, 14);
  sqcRYGate(q, 3.023466951948195, 15);
  sqcRZGate(q, 2.181207256847215, 15);
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
  sqcRYGate(q, 2.7648594263649287, 0);
  sqcRZGate(q, -3.0255861552789116, 0);
  sqcRYGate(q, -1.5039524038668848, 1);
  sqcRZGate(q, 0.6320919274398156, 1);
  sqcRYGate(q, 3.1413088662327024, 2);
  sqcRZGate(q, 2.223272055789045, 2);
  sqcRYGate(q, 3.1380753886988746, 3);
  sqcRZGate(q, -2.779283098863495, 3);
  sqcRYGate(q, 3.1406530188927726, 4);
  sqcRZGate(q, 0.7322203699367624, 4);
  sqcRYGate(q, 0.009938396082058005, 5);
  sqcRZGate(q, -2.3374595985357396, 5);
  sqcRYGate(q, -3.141562072645082, 6);
  sqcRZGate(q, -1.9803811969091771, 6);
  sqcRYGate(q, -3.1415685390014043, 7);
  sqcRZGate(q, -2.2382952457454834, 7);
  sqcRYGate(q, 1.5684292258606156, 8);
  sqcRZGate(q, -1.5367759124304214, 8);
  sqcRYGate(q, -1.5698283770468375, 9);
  sqcRZGate(q, 3.1209982815809894, 9);
  sqcRYGate(q, 1.5709686658064888, 10);
  sqcRZGate(q, 0.7273403378194025, 10);
  sqcRYGate(q, -5.8792154046936884e-05, 11);
  sqcRZGate(q, -2.9593493232250236, 11);
  sqcRYGate(q, -1.0880887921558188e-05, 12);
  sqcRZGate(q, -3.0788697712399653, 12);
  sqcRYGate(q, -6.45336346178353e-06, 13);
  sqcRZGate(q, -2.9873040065704215, 13);
  sqcRYGate(q, -0.053297065088475766, 14);
  sqcRZGate(q, -2.2362219091715847, 14);
  sqcRYGate(q, -0.09070768149191721, 15);
  sqcRZGate(q, 3.1162226388658807, 15);
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
  sqcRYGate(q, 2.6844984590766083, 0);
  sqcRZGate(q, 2.4083032598683722, 0);
  sqcRYGate(q, -0.017098434539380314, 1);
  sqcRZGate(q, -0.4613524838583128, 1);
  sqcRYGate(q, -1.6500076379591055, 2);
  sqcRZGate(q, -2.714019712003209, 2);
  sqcRYGate(q, -0.25615723042091965, 3);
  sqcRZGate(q, -1.5399628249980577, 3);
  sqcRYGate(q, -2.8243749943853436, 4);
  sqcRZGate(q, -1.718069892298857, 4);
  sqcRYGate(q, 1.7878620978857374, 5);
  sqcRZGate(q, 2.344067474432293, 5);
  sqcRYGate(q, 1.9686584427415408, 6);
  sqcRZGate(q, 0.12403023857108773, 6);
  sqcRYGate(q, 1.0788699356845335, 7);
  sqcRZGate(q, -3.019785862067033, 7);
  sqcRYGate(q, 0.566326218120242, 8);
  sqcRZGate(q, -3.0395392015857348, 8);
  sqcRYGate(q, -0.5285557537510919, 9);
  sqcRZGate(q, -2.9977072906488256, 9);
  sqcRYGate(q, 0.02701548456365632, 10);
  sqcRZGate(q, 2.5411337104355463, 10);
  sqcRYGate(q, 0.07383807893164107, 11);
  sqcRZGate(q, 0.3685397624489761, 11);
  sqcRYGate(q, 1.5920771035721837, 12);
  sqcRZGate(q, 1.6981460030334325, 12);
  sqcRYGate(q, 0.801941319156575, 13);
  sqcRZGate(q, 0.6953361522995767, 13);
  sqcRYGate(q, 1.5782059842733462, 14);
  sqcRZGate(q, -0.6907244395500641, 14);
  sqcRYGate(q, -1.7633889424494686, 15);
  sqcRZGate(q, -3.043050559688137, 15);

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
