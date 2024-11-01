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

  sqcRYGate(q, 0.0035208350303431108, 0);
  sqcRZGate(q, 2.0735891452873423, 0);
  sqcRYGate(q, -1.6713218993301933, 1);
  sqcRZGate(q, 0.7616764066414388, 1);
  sqcRYGate(q, 2.7476463645670646, 2);
  sqcRZGate(q, 3.1216349092479856, 2);
  sqcRYGate(q, -1.4135608180989054, 3);
  sqcRZGate(q, -2.3766885184998143, 3);
  sqcRYGate(q, 0.042000530416262276, 4);
  sqcRZGate(q, 2.4091644690982608, 4);
  sqcRYGate(q, 0.0820037793945487, 5);
  sqcRZGate(q, -0.6897920139990488, 5);
  sqcRYGate(q, -0.0014648003475105816, 6);
  sqcRZGate(q, -2.2431749801218093, 6);
  sqcRYGate(q, 1.5349859212208496, 7);
  sqcRZGate(q, 1.5553071720571148, 7);
  sqcRYGate(q, -1.8055689242916404, 8);
  sqcRZGate(q, 1.4110141915665935, 8);
  sqcRYGate(q, -0.0008413040830708121, 9);
  sqcRZGate(q, 1.7406851398305954, 9);
  sqcRYGate(q, -1.9987752078009657, 10);
  sqcRZGate(q, -1.1935108677628694, 10);
  sqcRYGate(q, -0.0005562282807822783, 11);
  sqcRZGate(q, -1.9261800606301485, 11);
  sqcRYGate(q, 7.433961730285432e-05, 12);
  sqcRZGate(q, 0.6128145855413986, 12);
  sqcRYGate(q, 0.18859826300916005, 13);
  sqcRZGate(q, 1.4649254771233648, 13);
  sqcRYGate(q, 2.617632246388828, 14);
  sqcRZGate(q, 2.5191030974973825, 14);
  sqcRYGate(q, 0.9310320621204857, 15);
  sqcRZGate(q, 3.1362856670294637, 15);
  sqcRYGate(q, -1.5747944614614253, 16);
  sqcRZGate(q, 1.5589604961986208, 16);
  sqcRYGate(q, 4.996469400797565e-05, 17);
  sqcRZGate(q, 1.090859064804551, 17);
  sqcRYGate(q, 2.3140741323009464, 18);
  sqcRZGate(q, -0.2334278150595243, 18);
  sqcRYGate(q, 1.488324549346091, 19);
  sqcRZGate(q, 1.0868996461000764, 19);
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
  sqcRYGate(q, -0.029972939188581016, 0);
  sqcRZGate(q, 2.4460805116470845, 0);
  sqcRYGate(q, 0.960381089478223, 1);
  sqcRZGate(q, -0.3412677008775375, 1);
  sqcRYGate(q, 1.4324045748915593, 2);
  sqcRZGate(q, 3.0796828786367905, 2);
  sqcRYGate(q, -2.093240277823327, 3);
  sqcRZGate(q, -0.5169001297341422, 3);
  sqcRYGate(q, 0.07810683601549417, 4);
  sqcRZGate(q, -1.11989268501818, 4);
  sqcRYGate(q, -0.00020330420020275852, 5);
  sqcRZGate(q, 2.215956506946294, 5);
  sqcRYGate(q, -3.1413029254998435, 6);
  sqcRZGate(q, 0.2796329069864311, 6);
  sqcRYGate(q, -1.4237670664094404, 7);
  sqcRZGate(q, -1.6545075240007234, 7);
  sqcRYGate(q, 0.7408870366024427, 8);
  sqcRZGate(q, -1.6593440398573787, 8);
  sqcRYGate(q, 0.6166845247744951, 9);
  sqcRZGate(q, 0.1775519096826772, 9);
  sqcRYGate(q, 0.4008279971590984, 10);
  sqcRZGate(q, -1.142206443538626, 10);
  sqcRYGate(q, 0.0013003270268159284, 11);
  sqcRZGate(q, 1.4122584394515565, 11);
  sqcRYGate(q, 0.0005142877627868359, 12);
  sqcRZGate(q, -2.584480994342673, 12);
  sqcRYGate(q, -1.70809384555107, 13);
  sqcRZGate(q, -2.937451492409635, 13);
  sqcRYGate(q, 0.00015247812050498625, 14);
  sqcRZGate(q, -2.6615543124790775, 14);
  sqcRYGate(q, 1.7003295260511482, 15);
  sqcRZGate(q, 3.034877208453777, 15);
  sqcRYGate(q, -1.609278218147099, 16);
  sqcRZGate(q, -3.1291995710654037, 16);
  sqcRYGate(q, -0.009529839638649031, 17);
  sqcRZGate(q, -0.12401709498442681, 17);
  sqcRYGate(q, 3.1410235291897517, 18);
  sqcRZGate(q, -1.797892117076345, 18);
  sqcRYGate(q, -0.007541348613344212, 19);
  sqcRZGate(q, -2.7985619042358647, 19);
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
  sqcRYGate(q, 3.1081784269960906, 0);
  sqcRZGate(q, -2.5711040280584108, 0);
  sqcRYGate(q, -0.02499004344934454, 1);
  sqcRZGate(q, -1.1185612517467574, 1);
  sqcRYGate(q, 1.468607738704819, 2);
  sqcRZGate(q, 1.3500857654504936, 2);
  sqcRYGate(q, 0.848193918592202, 3);
  sqcRZGate(q, -2.9626055624472603, 3);
  sqcRYGate(q, 3.1037816690908864, 4);
  sqcRZGate(q, 2.8643756085351675, 4);
  sqcRYGate(q, -3.1030218988716918, 5);
  sqcRZGate(q, -1.745468555063832, 5);
  sqcRYGate(q, -0.0009702343828426052, 6);
  sqcRZGate(q, 1.902708102039753, 6);
  sqcRYGate(q, -0.06964849206795232, 7);
  sqcRZGate(q, -0.18893416057587237, 7);
  sqcRYGate(q, -3.1296431997375302, 8);
  sqcRZGate(q, -0.5288654485499444, 8);
  sqcRYGate(q, -3.1409399666701705, 9);
  sqcRZGate(q, -3.0307495844207777, 9);
  sqcRYGate(q, 2.712267223846296, 10);
  sqcRZGate(q, -1.5300581316471353, 10);
  sqcRYGate(q, -0.00016359264089713, 11);
  sqcRZGate(q, -3.1123816930174955, 11);
  sqcRYGate(q, -3.140849913341901, 12);
  sqcRZGate(q, -0.2858148414830357, 12);
  sqcRYGate(q, -2.1803834099287043, 13);
  sqcRZGate(q, 1.6211555263695772, 13);
  sqcRYGate(q, 0.0026796090016256713, 14);
  sqcRZGate(q, -2.3874562206054923, 14);
  sqcRYGate(q, 1.7262799610596289, 15);
  sqcRZGate(q, -3.0754650850347396, 15);
  sqcRYGate(q, 0.39424126967329554, 16);
  sqcRZGate(q, -1.5836223690019766, 16);
  sqcRYGate(q, 8.641669480535796e-05, 17);
  sqcRZGate(q, 0.4227525279277299, 17);
  sqcRYGate(q, -2.236120039963832, 18);
  sqcRZGate(q, -2.2130367570556233, 18);
  sqcRYGate(q, 0.08970457261903006, 19);
  sqcRZGate(q, 0.12231137581699153, 19);
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
  sqcRYGate(q, -2.8428451535574117, 0);
  sqcRZGate(q, -1.0155489387078969, 0);
  sqcRYGate(q, -1.3789174663108703, 1);
  sqcRZGate(q, -2.375692177067347, 1);
  sqcRYGate(q, -1.5847070851827159, 2);
  sqcRZGate(q, -2.960069814865045, 2);
  sqcRYGate(q, 2.0002827870485547, 3);
  sqcRZGate(q, -1.319319164759869, 3);
  sqcRYGate(q, -0.9156870592982899, 4);
  sqcRZGate(q, 1.715230131597191, 4);
  sqcRYGate(q, 1.5723302641329822, 5);
  sqcRZGate(q, 2.4344686301567617, 5);
  sqcRYGate(q, 0.00022755881200582894, 6);
  sqcRZGate(q, 0.6745934457912153, 6);
  sqcRYGate(q, 2.0732975122236477, 7);
  sqcRZGate(q, 0.9463048706841334, 7);
  sqcRYGate(q, 0.04992246800426159, 8);
  sqcRZGate(q, 2.1340743426532516, 8);
  sqcRYGate(q, 2.609256979455239, 9);
  sqcRZGate(q, 0.49426837888876046, 9);
  sqcRYGate(q, -0.3339095449197854, 10);
  sqcRZGate(q, -2.0025847122718887, 10);
  sqcRYGate(q, 0.00042417685675158944, 11);
  sqcRZGate(q, 2.951278585470732, 11);
  sqcRYGate(q, 1.5708719580564148, 12);
  sqcRZGate(q, 1.6701279184146607, 12);
  sqcRYGate(q, 1.512638532803435, 13);
  sqcRZGate(q, 0.6501643707659266, 13);
  sqcRYGate(q, -3.141104452258904, 14);
  sqcRZGate(q, -2.7204091596495474, 14);
  sqcRYGate(q, 1.7808610179417377, 15);
  sqcRZGate(q, -2.9124345161870027, 15);
  sqcRYGate(q, -1.5630652168175811, 16);
  sqcRZGate(q, -0.1278522953453214, 16);
  sqcRYGate(q, 2.1331321992240193, 17);
  sqcRZGate(q, 2.331332529915546, 17);
  sqcRYGate(q, 0.623761517877542, 18);
  sqcRZGate(q, -2.689040989788489, 18);
  sqcRYGate(q, -1.7103935060834943, 19);
  sqcRZGate(q, 1.2910013038874564, 19);
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
  sqcRYGate(q, 3.1365381860780364, 0);
  sqcRZGate(q, -3.1087773770912244, 0);
  sqcRYGate(q, 2.09813477652787, 1);
  sqcRZGate(q, 2.4700665963583743, 1);
  sqcRYGate(q, -1.5815227981662803, 2);
  sqcRZGate(q, 1.3766019301823977, 2);
  sqcRYGate(q, 1.5639791746722693, 3);
  sqcRZGate(q, -2.238018437332619, 3);
  sqcRYGate(q, -1.5716894100171308, 4);
  sqcRZGate(q, 2.0547026979592315, 4);
  sqcRYGate(q, 3.07783456932899, 5);
  sqcRZGate(q, 0.8390684886319898, 5);
  sqcRYGate(q, -1.1595629102129643e-05, 6);
  sqcRZGate(q, -0.05894732201152267, 6);
  sqcRYGate(q, 3.1311239006847535, 7);
  sqcRZGate(q, 1.383278393763676, 7);
  sqcRYGate(q, -0.9408353916912898, 8);
  sqcRZGate(q, -0.4468594321221258, 8);
  sqcRYGate(q, 1.5789536248955658, 9);
  sqcRZGate(q, -2.2517948137688335, 9);
  sqcRYGate(q, 1.4867355757315457, 10);
  sqcRZGate(q, -0.17682668914498922, 10);
  sqcRYGate(q, -3.1413655578263118, 11);
  sqcRZGate(q, 1.6917902543573504, 11);
  sqcRYGate(q, 1.5694607673375875, 12);
  sqcRZGate(q, 1.5710792086455276, 12);
  sqcRYGate(q, -0.00011135478036017332, 13);
  sqcRZGate(q, -0.39462387107532504, 13);
  sqcRYGate(q, -1.570931181198942, 14);
  sqcRZGate(q, 1.7439286014733328, 14);
  sqcRYGate(q, 3.12926690005099, 15);
  sqcRZGate(q, 1.521977893591762, 15);
  sqcRYGate(q, -3.13637245355284, 16);
  sqcRZGate(q, 0.9469290145475986, 16);
  sqcRYGate(q, -0.34888633767027594, 17);
  sqcRZGate(q, -1.8372113169926447, 17);
  sqcRYGate(q, 3.1345014651529772, 18);
  sqcRZGate(q, -2.691609774097629, 18);
  sqcRYGate(q, -0.0013173141424625001, 19);
  sqcRZGate(q, 1.8468021485027935, 19);
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
  sqcRYGate(q, 3.1370180388934736, 0);
  sqcRZGate(q, -0.9151090306277352, 0);
  sqcRYGate(q, 2.558805434480959, 1);
  sqcRZGate(q, -1.6217349434138741, 1);
  sqcRYGate(q, -0.779770277053955, 2);
  sqcRZGate(q, -1.8246332917896382, 2);
  sqcRYGate(q, 0.002200142500519142, 3);
  sqcRZGate(q, 2.8447302022913608, 3);
  sqcRYGate(q, 3.13743458595962, 4);
  sqcRZGate(q, -1.0984724308166247, 4);
  sqcRYGate(q, 0.08541470622132598, 5);
  sqcRZGate(q, -2.691048377920799, 5);
  sqcRYGate(q, 1.5708237224267672, 6);
  sqcRZGate(q, -1.5578006545525256, 6);
  sqcRYGate(q, -1.5705813805761295, 7);
  sqcRZGate(q, 0.48415067174951937, 7);
  sqcRYGate(q, 5.365602837563316e-06, 8);
  sqcRZGate(q, -1.4142747918117529, 8);
  sqcRYGate(q, -3.139713754519321, 9);
  sqcRZGate(q, -2.152372157309751, 9);
  sqcRYGate(q, 3.141374398280638, 10);
  sqcRZGate(q, 1.5968183640639522, 10);
  sqcRYGate(q, -2.533863646831558, 11);
  sqcRZGate(q, -1.2873528576048952, 11);
  sqcRYGate(q, -1.6418456196901292, 12);
  sqcRZGate(q, -0.04085369514788544, 12);
  sqcRYGate(q, -3.1409337131316066, 13);
  sqcRZGate(q, 3.087783636500878, 13);
  sqcRYGate(q, -0.001714001032451456, 14);
  sqcRZGate(q, -1.4262274434737796, 14);
  sqcRYGate(q, 1.5597045717242373, 15);
  sqcRZGate(q, -2.6389087572667806, 15);
  sqcRYGate(q, 3.1411976380445203, 16);
  sqcRZGate(q, 2.6553025675867823, 16);
  sqcRYGate(q, 1.5687072392013817, 17);
  sqcRZGate(q, -0.6937865013647685, 17);
  sqcRYGate(q, 0.6259278331672036, 18);
  sqcRZGate(q, 0.7910442509533695, 18);
  sqcRYGate(q, 1.5664985450270859, 19);
  sqcRZGate(q, 1.180570325921034, 19);
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
  sqcRYGate(q, -0.003754492380708463, 0);
  sqcRZGate(q, 1.7206687403198084, 0);
  sqcRYGate(q, -1.149188593194624, 1);
  sqcRZGate(q, -2.9863652881844334, 1);
  sqcRYGate(q, -3.1324555257561957, 2);
  sqcRZGate(q, -2.984412798946942, 2);
  sqcRYGate(q, 1.269693172065546, 3);
  sqcRZGate(q, 3.026641896454442, 3);
  sqcRYGate(q, 1.5695244352448081, 4);
  sqcRZGate(q, 1.6685543191761585, 4);
  sqcRYGate(q, -1.571095414369612, 5);
  sqcRZGate(q, -3.1415147834555457, 5);
  sqcRYGate(q, -1.5705037463000158, 6);
  sqcRZGate(q, 0.2566823105040354, 6);
  sqcRYGate(q, -0.022917281839639262, 7);
  sqcRZGate(q, -2.368573027699379, 7);
  sqcRYGate(q, -2.1868144861767522, 8);
  sqcRZGate(q, -1.568667154362653, 8);
  sqcRYGate(q, -3.1133115024064972, 9);
  sqcRZGate(q, 0.09754937629400029, 9);
  sqcRYGate(q, -1.6026486005539617, 10);
  sqcRZGate(q, 0.001554906688297386, 10);
  sqcRYGate(q, -0.00016847286063243445, 11);
  sqcRZGate(q, -1.8118620935775764, 11);
  sqcRYGate(q, -1.1324882932568654, 12);
  sqcRZGate(q, 0.05098327178822882, 12);
  sqcRYGate(q, -3.141542457699982, 13);
  sqcRZGate(q, -0.7603613988224537, 13);
  sqcRYGate(q, -3.1339779771770995, 14);
  sqcRZGate(q, -1.7378678481366765, 14);
  sqcRYGate(q, 0.010645173900481376, 15);
  sqcRZGate(q, -2.0605555003567764, 15);
  sqcRYGate(q, 3.1411851037184166, 16);
  sqcRZGate(q, -1.3489663391180613, 16);
  sqcRYGate(q, 2.760760466388769, 17);
  sqcRZGate(q, 1.8762943350916936, 17);
  sqcRYGate(q, -0.002084790614070552, 18);
  sqcRZGate(q, 1.6622417650536132, 18);
  sqcRYGate(q, -2.8763869185859328, 19);
  sqcRZGate(q, -1.1691773721558423, 19);
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
  sqcRYGate(q, -0.0026698661647734934, 0);
  sqcRZGate(q, -0.7857340914263853, 0);
  sqcRYGate(q, -1.5683504058544544, 1);
  sqcRZGate(q, 2.5219347626905244, 1);
  sqcRYGate(q, 0.0002258008010072696, 2);
  sqcRZGate(q, 0.8761670798975798, 2);
  sqcRYGate(q, -1.56966530979006, 3);
  sqcRZGate(q, -1.4022343040068765, 3);
  sqcRYGate(q, -3.1415189218753836, 4);
  sqcRZGate(q, -1.2307961013470006, 4);
  sqcRYGate(q, -1.5008327590661903, 5);
  sqcRZGate(q, 0.00012207444708067783, 5);
  sqcRYGate(q, -3.141535302565462, 6);
  sqcRZGate(q, -2.8849044393301857, 6);
  sqcRYGate(q, 1.152592834508457e-05, 7);
  sqcRZGate(q, 1.881108269852376, 7);
  sqcRYGate(q, -0.6254436903090519, 8);
  sqcRZGate(q, -1.56461608013871, 8);
  sqcRYGate(q, -3.100911469646979, 9);
  sqcRZGate(q, -1.5274345892733114, 9);
  sqcRYGate(q, 0.0001458706090280039, 10);
  sqcRZGate(q, 0.010279695092931286, 10);
  sqcRYGate(q, -1.561574078707828, 11);
  sqcRZGate(q, -2.0712070036038295, 11);
  sqcRYGate(q, 0.4764820679355841, 12);
  sqcRZGate(q, -1.6010205753168396, 12);
  sqcRYGate(q, 3.1401428656429635, 13);
  sqcRZGate(q, -0.7167658476899701, 13);
  sqcRYGate(q, 3.1360293966482287, 14);
  sqcRZGate(q, 2.760700297021183, 14);
  sqcRYGate(q, 0.9531088614616108, 15);
  sqcRZGate(q, -0.9290762196020373, 15);
  sqcRYGate(q, 1.570354799862311, 16);
  sqcRZGate(q, -1.5997754397147925, 16);
  sqcRYGate(q, 0.46334848680732216, 17);
  sqcRZGate(q, -1.3913884782074009, 17);
  sqcRYGate(q, 0.0022770981996610784, 18);
  sqcRZGate(q, -1.415243587462097, 18);
  sqcRYGate(q, -3.131656428640441, 19);
  sqcRZGate(q, 0.0810110702262165, 19);
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
  sqcRYGate(q, -3.071582426117673, 0);
  sqcRZGate(q, -1.5470690044192166, 0);
  sqcRYGate(q, 1.4429094640467497, 1);
  sqcRZGate(q, -0.3967880620078428, 1);
  sqcRYGate(q, -1.5708011265433979, 2);
  sqcRZGate(q, -0.0002809725872823862, 2);
  sqcRYGate(q, 3.1414863044163233, 3);
  sqcRZGate(q, 1.1921807828761528, 3);
  sqcRYGate(q, -0.012488796856539603, 4);
  sqcRZGate(q, -0.2422998305100026, 4);
  sqcRYGate(q, 1.5246590569274545, 5);
  sqcRZGate(q, 1.0716981965048338, 5);
  sqcRYGate(q, 1.57040822120653, 6);
  sqcRZGate(q, -0.006831743397822384, 6);
  sqcRYGate(q, 0.28058251645040977, 7);
  sqcRZGate(q, 1.6262834859398259, 7);
  sqcRYGate(q, 0.845578054689561, 8);
  sqcRZGate(q, -0.20121203500144172, 8);
  sqcRYGate(q, -0.04039615139204589, 9);
  sqcRZGate(q, 1.5020256727576982, 9);
  sqcRYGate(q, -3.068702271079846, 10);
  sqcRZGate(q, -3.1306761083068446, 10);
  sqcRYGate(q, 2.8501998106145528e-05, 11);
  sqcRZGate(q, -1.0682348049685455, 11);
  sqcRYGate(q, -1.537800048344307, 12);
  sqcRZGate(q, 1.2520007949816323, 12);
  sqcRYGate(q, 0.0001931019763747962, 13);
  sqcRZGate(q, -2.206870067717818, 13);
  sqcRYGate(q, 0.00018224383163367716, 14);
  sqcRZGate(q, -0.635638303247787, 14);
  sqcRYGate(q, -3.1292081853057057, 15);
  sqcRZGate(q, -2.500575410978649, 15);
  sqcRYGate(q, -0.0986893320043638, 16);
  sqcRZGate(q, -1.600853406545017, 16);
  sqcRYGate(q, 7.429959281757572e-05, 17);
  sqcRZGate(q, 2.5810279291265736, 17);
  sqcRYGate(q, 1.571033627817013, 18);
  sqcRZGate(q, 2.4227428287419053, 18);
  sqcRYGate(q, 0.1361639509191649, 19);
  sqcRZGate(q, 0.8111613585733162, 19);
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
  sqcRYGate(q, -0.0026852675025805794, 0);
  sqcRZGate(q, -1.7388498815228708, 0);
  sqcRYGate(q, 3.1379168632684493, 1);
  sqcRZGate(q, -1.9098435601859374, 1);
  sqcRYGate(q, -1.570951711940607, 2);
  sqcRZGate(q, 1.8688188458959584e-05, 2);
  sqcRYGate(q, 3.141143919639983, 3);
  sqcRZGate(q, 1.450577323002498, 3);
  sqcRYGate(q, 2.4912637357110277, 4);
  sqcRZGate(q, -0.09724539323479217, 4);
  sqcRYGate(q, 2.1469947814409434, 5);
  sqcRZGate(q, -0.11806897360504807, 5);
  sqcRYGate(q, -1.650592867033309, 6);
  sqcRZGate(q, 1.8986904530154503, 6);
  sqcRYGate(q, 0.00339919197497598, 7);
  sqcRZGate(q, 2.231842213825786, 7);
  sqcRYGate(q, 3.127687709687012, 8);
  sqcRZGate(q, -1.7736154288307269, 8);
  sqcRYGate(q, -1.4912119233957055, 9);
  sqcRZGate(q, -2.93803281977303, 9);
  sqcRYGate(q, -1.5701019741297122, 10);
  sqcRZGate(q, 2.7503512541226898, 10);
  sqcRYGate(q, 1.5569484556339814, 11);
  sqcRZGate(q, -0.04362012975124241, 11);
  sqcRYGate(q, 1.5823936876733864, 12);
  sqcRZGate(q, -2.8009789290511162, 12);
  sqcRYGate(q, 1.5819385685268008, 13);
  sqcRZGate(q, -0.0007962167320396673, 13);
  sqcRYGate(q, 0.00015720053226848788, 14);
  sqcRZGate(q, -0.5635893730177216, 14);
  sqcRYGate(q, -1.5610028107247864, 15);
  sqcRZGate(q, 0.6636366410978838, 15);
  sqcRYGate(q, 0.4792045378644164, 16);
  sqcRZGate(q, 2.7891159308839097, 16);
  sqcRYGate(q, 1.575979217651859, 17);
  sqcRZGate(q, 0.9821605072000033, 17);
  sqcRYGate(q, -3.141466653298315, 18);
  sqcRZGate(q, -0.6668538109593358, 18);
  sqcRYGate(q, 1.5697960366479355, 19);
  sqcRZGate(q, -1.570698870202241, 19);
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
  sqcRYGate(q, 1.5706751735275146, 0);
  sqcRZGate(q, -0.6682428247754401, 0);
  sqcRYGate(q, -1.1534243464707872, 1);
  sqcRZGate(q, 2.9999948372136243, 1);
  sqcRYGate(q, -1.5707581930057968, 2);
  sqcRZGate(q, 0.00021820084301893417, 2);
  sqcRYGate(q, 7.297593359201215e-05, 3);
  sqcRZGate(q, 1.29821006877525, 3);
  sqcRYGate(q, -3.140368494835408, 4);
  sqcRZGate(q, -0.6658468568569331, 4);
  sqcRYGate(q, 3.1415597327967744, 5);
  sqcRZGate(q, -1.5229841939323565, 5);
  sqcRYGate(q, -0.0005423953453225534, 6);
  sqcRZGate(q, -1.8983843267256206, 6);
  sqcRYGate(q, 0.00037684006406710387, 7);
  sqcRZGate(q, 1.665862895941003, 7);
  sqcRYGate(q, 0.031913073773247376, 8);
  sqcRZGate(q, 1.809112935254399, 8);
  sqcRYGate(q, 0.000983402065615736, 9);
  sqcRZGate(q, -0.20349960680300888, 9);
  sqcRYGate(q, 7.064981358050282e-05, 10);
  sqcRZGate(q, 0.3127591065781516, 10);
  sqcRYGate(q, 3.0246161327748844, 11);
  sqcRZGate(q, 0.002338862729448721, 11);
  sqcRYGate(q, -3.1414783701838527, 12);
  sqcRZGate(q, -0.8483360923073502, 12);
  sqcRYGate(q, -1.495031987752859, 13);
  sqcRZGate(q, 1.6896472307906283, 13);
  sqcRYGate(q, 0.00013130276429773605, 14);
  sqcRZGate(q, -0.4738071061560119, 14);
  sqcRYGate(q, 0.006165578642706688, 15);
  sqcRZGate(q, -0.03923876080485389, 15);
  sqcRYGate(q, 3.138576256944623, 16);
  sqcRZGate(q, -0.41928930896919264, 16);
  sqcRYGate(q, 0.0002874849406430392, 17);
  sqcRZGate(q, -2.17724654781856, 17);
  sqcRYGate(q, 3.1322910357968765, 18);
  sqcRZGate(q, 0.19685514507223278, 18);
  sqcRYGate(q, -1.5706308587160738, 19);
  sqcRZGate(q, 2.6652714799262673, 19);
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
  sqcRYGate(q, 0.000290749793918188, 0);
  sqcRZGate(q, 0.25661340944000144, 0);
  sqcRYGate(q, 3.022719828441221, 1);
  sqcRZGate(q, 2.111121662895378, 1);
  sqcRYGate(q, 1.4960086168711755, 2);
  sqcRZGate(q, -0.4115674044206805, 2);
  sqcRYGate(q, 0.0024594563360480493, 3);
  sqcRZGate(q, -2.7544572910223777, 3);
  sqcRYGate(q, -0.0001120657752426979, 4);
  sqcRZGate(q, -2.9845633297340597, 4);
  sqcRYGate(q, -1.949103871401758, 5);
  sqcRZGate(q, 2.698539319006226, 5);
  sqcRYGate(q, 1.4910913193934023, 6);
  sqcRZGate(q, -1.9962176838953032, 6);
  sqcRYGate(q, -0.004925624035062351, 7);
  sqcRZGate(q, 1.3016444837088923, 7);
  sqcRYGate(q, -3.1276411848395247, 8);
  sqcRZGate(q, 2.949476526357499, 8);
  sqcRYGate(q, -1.6926604274723078, 9);
  sqcRZGate(q, 2.1012865202457167, 9);
  sqcRYGate(q, -3.140626677968755, 10);
  sqcRZGate(q, 2.646203780862648, 10);
  sqcRYGate(q, 1.5712951478124693, 11);
  sqcRZGate(q, -1.0186206528894979, 11);
  sqcRYGate(q, 3.1414408229255124, 12);
  sqcRZGate(q, -1.6283463908783824, 12);
  sqcRYGate(q, 0.09531877596683636, 13);
  sqcRZGate(q, 2.101511062457485, 13);
  sqcRYGate(q, 3.1412735346178224, 14);
  sqcRZGate(q, -0.3425856341230711, 14);
  sqcRYGate(q, -1.579928410560848, 15);
  sqcRZGate(q, -0.9597219957525659, 15);
  sqcRYGate(q, -2.049366758890632, 16);
  sqcRZGate(q, 2.767731902807568, 16);
  sqcRYGate(q, 3.068361296056644, 17);
  sqcRZGate(q, 2.078559131938972, 17);
  sqcRYGate(q, 3.1414061610330806, 18);
  sqcRZGate(q, 1.3747103453366951, 18);
  sqcRYGate(q, 0.08963933142326486, 19);
  sqcRZGate(q, -2.8182197679681495, 19);

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
