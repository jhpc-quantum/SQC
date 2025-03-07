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

  sqcRYGate(q, -1.6327726161839111, 0);
  sqcRYGate(q, 0.9601074328689878, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5132758277340868, 0);
  sqcRYGate(q, -2.677293983655311, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8968531569111722, 2);
  sqcRYGate(q, 2.212910949804505, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.500938674320947, 2);
  sqcRYGate(q, -0.3893485458220489, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0024966511382134, 4);
  sqcRYGate(q, -0.14957312672769252, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.48789295408345545, 4);
  sqcRYGate(q, 1.1789596252226318, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6551393691479349, 6);
  sqcRYGate(q, -0.676986654864578, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.892500471921786, 6);
  sqcRYGate(q, 2.5544972130339483, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7777983674269517, 8);
  sqcRYGate(q, 2.095506050201616, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.1540814793404808, 8);
  sqcRYGate(q, 2.707012733882614, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.06004716035282736, 10);
  sqcRYGate(q, 1.8873990312993527, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.19738875198029862, 10);
  sqcRYGate(q, 2.6647142514198663, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.37914810309946034, 12);
  sqcRYGate(q, 0.18263735652258759, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.303121853974938, 12);
  sqcRYGate(q, 1.7399717321545571, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.15557268513159572, 14);
  sqcRYGate(q, 1.3675745889082176, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.3794263259049453, 14);
  sqcRYGate(q, -2.949501416278973, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.558075944042368, 16);
  sqcRYGate(q, -1.755940482071183, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.917301974479954, 16);
  sqcRYGate(q, 2.6570458589693535, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.9159388157329377, 18);
  sqcRYGate(q, 1.0249949344014944, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.92418539307547, 18);
  sqcRYGate(q, 0.24253641956708893, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.3914865800911322, 0);
  sqcRYGate(q, 1.9893519605089385, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0590562888231068, 0);
  sqcRYGate(q, -0.032743337135476364, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.521533828427731, 2);
  sqcRYGate(q, 2.0159181529308023, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.1247056310223167, 2);
  sqcRYGate(q, -3.138831842524569, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.4886907957427213, 4);
  sqcRYGate(q, -1.0227454102524531, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.1410066014744955, 4);
  sqcRYGate(q, 2.1123196786756018, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.2795328211767523, 6);
  sqcRYGate(q, -0.5002108497665538, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.2164142880600934, 6);
  sqcRYGate(q, 0.6447819165627969, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.3174348277062567, 8);
  sqcRYGate(q, -0.1454015321512525, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.11824714668225646, 8);
  sqcRYGate(q, -3.021905107068805, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.2592367252265975, 10);
  sqcRYGate(q, -2.369297330299182, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.25301995974731817, 10);
  sqcRYGate(q, -0.012711957595326062, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 2.693494508381624, 12);
  sqcRYGate(q, -0.2689391027828666, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 3.0014303179587913, 12);
  sqcRYGate(q, 0.15088370914458243, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.9040000331646556, 14);
  sqcRYGate(q, 0.24423777645932418, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -0.5225818643778428, 14);
  sqcRYGate(q, 0.40447742113899904, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 0.7110575569715003, 16);
  sqcRYGate(q, -1.8980083663326823, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 0.003541503288834188, 16);
  sqcRYGate(q, 0.005129752244769027, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -1.431427772033227, 1);
  sqcRYGate(q, -1.2012120348731332, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0376864921888402, 1);
  sqcRYGate(q, 3.1018339372345896, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3970799238956313, 3);
  sqcRYGate(q, 2.609911680691686, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.5008541921641845, 3);
  sqcRYGate(q, 1.1996129145788512, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.702036956860901, 5);
  sqcRYGate(q, -1.1437438038203576, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.0003725374415326499, 5);
  sqcRYGate(q, -0.00103104579795799, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.1288790244839575, 7);
  sqcRYGate(q, 0.3608068217642888, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.15498320634724114, 7);
  sqcRYGate(q, -0.00035740765098957183, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.11687550694175143, 9);
  sqcRYGate(q, -1.5686593974490322, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.1362599603520138, 9);
  sqcRYGate(q, 2.0233895716621397, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.2229790924839417, 11);
  sqcRYGate(q, -1.614436565338739, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.8760476671633145, 11);
  sqcRYGate(q, -0.7349638537084708, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.15291192071408236, 13);
  sqcRYGate(q, 0.9310106182487868, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 3.1216428680250563, 13);
  sqcRYGate(q, -0.011222449487497066, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -2.1959419838875336, 15);
  sqcRYGate(q, 2.6009769156636886, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 0.03154854747547009, 15);
  sqcRYGate(q, -3.1337831093330197, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 0.703574235587002, 17);
  sqcRYGate(q, -2.7058592277880935, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -0.01130790583407378, 17);
  sqcRYGate(q, -0.013366661894645304, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 0.7727812834875447, 0);
  sqcRYGate(q, -0.8973994398358194, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8443785242726334, 0);
  sqcRYGate(q, 2.1473858281037854, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6048782044458457, 2);
  sqcRYGate(q, 1.7274539833482665, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.032087354983573, 2);
  sqcRYGate(q, 0.5912924442240843, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7851952035433145, 4);
  sqcRYGate(q, -1.873242381931905, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8961995970504013, 4);
  sqcRYGate(q, 1.8683162908598014, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7701917682748967, 6);
  sqcRYGate(q, -0.6071964956382958, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9182489443473183, 6);
  sqcRYGate(q, 0.3420067604837504, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5907387681365834, 8);
  sqcRYGate(q, -1.04582045797674, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.4998867228704613, 8);
  sqcRYGate(q, -1.990274106087151, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.33088131936930765, 10);
  sqcRYGate(q, 1.585290287601203, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.5258983874643874, 10);
  sqcRYGate(q, -0.5923559936123257, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.8792193067632927, 12);
  sqcRYGate(q, -1.0242226297724177, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.1339895913915727, 12);
  sqcRYGate(q, 2.431773573765552, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.614046825547125, 14);
  sqcRYGate(q, 1.4873864042485494, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.04262285125453691, 14);
  sqcRYGate(q, 0.006674216138344846, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.102563472169057, 16);
  sqcRYGate(q, 2.527296592149437, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.5212771193532646, 16);
  sqcRYGate(q, 2.7100854029662766, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.587231190004473, 18);
  sqcRYGate(q, -0.4047599035403923, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.7040448256417121, 18);
  sqcRYGate(q, 2.8815380472128154, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.2061589472817795, 0);
  sqcRYGate(q, -1.4380655051288684, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.09965692608664391, 0);
  sqcRYGate(q, -2.3195449168748534, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3191614532538667, 2);
  sqcRYGate(q, -1.3715168437084166, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.132785212555794, 2);
  sqcRYGate(q, 2.9930555637379883, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.9639221653922072, 4);
  sqcRYGate(q, 2.8529879376904432, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.001194257529540587, 4);
  sqcRYGate(q, -3.1402795677881716, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.30815414430968074, 6);
  sqcRYGate(q, 2.376492389829407, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.3125913564362035, 6);
  sqcRYGate(q, -1.970844425579412, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.2416288850381019, 8);
  sqcRYGate(q, -1.0290410244834516, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.113856664093326, 8);
  sqcRYGate(q, 0.03393055366255293, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.9502866013501046, 10);
  sqcRYGate(q, 2.6153287436885413, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.131228396533638, 10);
  sqcRYGate(q, -3.1054100050727236, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.9516061697708667, 12);
  sqcRYGate(q, -3.0636863005270474, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.0015585051930440128, 12);
  sqcRYGate(q, 3.1353844912570974, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 3.100235438532064, 14);
  sqcRYGate(q, 0.0936354225392897, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -2.1730973350411897, 14);
  sqcRYGate(q, 1.0903558170267136, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 0.7111565392952474, 16);
  sqcRYGate(q, 1.7712806623541788, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 2.9053940852022704, 16);
  sqcRYGate(q, -3.111326505614741, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 0.9922003555281351, 1);
  sqcRYGate(q, -1.6990660133752966, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3302809008183605, 1);
  sqcRYGate(q, 0.9240657423701434, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.575743020683039, 3);
  sqcRYGate(q, -2.264256533478592, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.892021896842656, 3);
  sqcRYGate(q, -0.36207394457356384, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.11229055571770065, 5);
  sqcRYGate(q, -0.8077434194732178, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.1415699120453158, 5);
  sqcRYGate(q, 0.0003578405385278316, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.657512069424678, 7);
  sqcRYGate(q, -1.6511661351279223, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.1475991881210339, 7);
  sqcRYGate(q, 1.3188806255865773, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.4720727841742516, 9);
  sqcRYGate(q, -0.5263317782455221, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.008280427873786508, 9);
  sqcRYGate(q, 3.0663528371664768, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.3435187853363972, 11);
  sqcRYGate(q, -1.9803906618678384, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.11815443276117586, 11);
  sqcRYGate(q, -2.7529236734629734, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -2.8601275330628804, 13);
  sqcRYGate(q, 1.4732218826899617, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.3720856501906927, 13);
  sqcRYGate(q, -0.006113119931733023, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.7768814121413552, 15);
  sqcRYGate(q, 1.8267768463864975, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -3.0905857304084066, 15);
  sqcRYGate(q, 3.058948772437381, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -2.138305784232479, 17);
  sqcRYGate(q, 2.9748674974672826, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 2.8493026940385464, 17);
  sqcRYGate(q, 3.140692968679498, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -2.9560655761711496, 0);
  sqcRYGate(q, -0.6723754991756491, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7447714575920416, 0);
  sqcRYGate(q, -2.804543209018615, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8962887518661153, 2);
  sqcRYGate(q, 0.9761247678965841, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7689766763467709, 2);
  sqcRYGate(q, 3.1178401044714934, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4100733053896006, 4);
  sqcRYGate(q, -1.358470657917045, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6903605972317237, 4);
  sqcRYGate(q, -0.24018731411134464, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7004950080659249, 6);
  sqcRYGate(q, 1.9728547257222913, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.308938359561969, 6);
  sqcRYGate(q, 0.23945227357849053, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4505203563470905, 8);
  sqcRYGate(q, 2.323290380994986, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.477747248492914, 8);
  sqcRYGate(q, 1.5676266443133824, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.6254037949483086, 10);
  sqcRYGate(q, -3.047307121533696, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.7241369627952388, 10);
  sqcRYGate(q, 0.7507797521109314, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.4702565126560394, 12);
  sqcRYGate(q, -0.843006804652406, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.475750238704423, 12);
  sqcRYGate(q, -1.476487108155899, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.314071753231819, 14);
  sqcRYGate(q, 2.2985006645572645, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.7628132613409693, 14);
  sqcRYGate(q, -2.5082604222924743, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.06433843650605997, 16);
  sqcRYGate(q, 0.0752438013014984, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.9342446350268646, 16);
  sqcRYGate(q, 0.49690013339585715, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.7698456093969597, 18);
  sqcRYGate(q, -0.0524694334773269, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.8383439075235235, 18);
  sqcRYGate(q, -0.7562555720262394, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.6727540379867265, 0);
  sqcRYGate(q, -0.2684885722727612, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.279867086296715, 0);
  sqcRYGate(q, 1.8042305410755608, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.12924840049258612, 2);
  sqcRYGate(q, 1.0328305585196071, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.079384262325, 2);
  sqcRYGate(q, 1.3744743767568603, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5224103408965535, 4);
  sqcRYGate(q, 2.7952972008136063, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.006944356844913458, 4);
  sqcRYGate(q, -0.002109939865479582, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.1218994545041348, 6);
  sqcRYGate(q, -1.697186516734632, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.1200980053170566, 6);
  sqcRYGate(q, 0.23699888205837463, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.340429253753588, 8);
  sqcRYGate(q, 2.195744961878648, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.0021192068941360276, 8);
  sqcRYGate(q, -3.1362061301288526, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.43814950133558034, 10);
  sqcRYGate(q, 0.9517609543428378, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 2.5554275341534134, 10);
  sqcRYGate(q, 1.7368639937002324, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.6488757276050521, 12);
  sqcRYGate(q, -2.48934982471812, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.007685235728069093, 12);
  sqcRYGate(q, 0.0007358844890587498, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.46847814394550724, 14);
  sqcRYGate(q, 1.1323074861411233, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -3.1029666972207304, 14);
  sqcRYGate(q, 3.130889348976, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 2.4377150929533205, 16);
  sqcRYGate(q, -1.489636064476306, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 0.28512633376871127, 16);
  sqcRYGate(q, 0.05579540933394162, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -2.0939564970454834, 1);
  sqcRYGate(q, 1.9360308369925932, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1714694681874587, 1);
  sqcRYGate(q, -1.7444846686002498, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.22780598931465157, 3);
  sqcRYGate(q, 0.2927540258452321, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.4355455243671607, 3);
  sqcRYGate(q, 0.5038257398339674, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.3905637946290532, 5);
  sqcRYGate(q, -2.6783951924731855, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.004284778377302345, 5);
  sqcRYGate(q, -0.004852450211208392, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.5367964760686291, 7);
  sqcRYGate(q, 2.0213342387631057, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.2094554221248268, 7);
  sqcRYGate(q, -0.7788615956303844, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.1141138117333846, 9);
  sqcRYGate(q, -1.566806346894313, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.0008523676836659837, 9);
  sqcRYGate(q, 0.006571532087328969, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.9928001802110873, 11);
  sqcRYGate(q, 2.9837782594678712, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 2.7327609602081315, 11);
  sqcRYGate(q, 2.310611496254528, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.99548343770591, 13);
  sqcRYGate(q, 2.1522893932244385, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 3.1108815273073427, 13);
  sqcRYGate(q, 3.141574626447837, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -2.490742365522801, 15);
  sqcRYGate(q, -0.017497670293992407, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 0.08852215829978181, 15);
  sqcRYGate(q, -0.02639788298419216, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 2.7418758213798706, 17);
  sqcRYGate(q, -0.7381678841560211, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 2.8194400039831757, 17);
  sqcRYGate(q, -0.05902252977112177, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -2.6933638288191335, 0);
  sqcRYGate(q, -1.5513589312714895, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5954602775818119, 0);
  sqcRYGate(q, 0.7107553666197939, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8756812784563488, 2);
  sqcRYGate(q, -0.7130019448679406, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.619567978506865, 2);
  sqcRYGate(q, 3.0845953321514408, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.710344659550005, 4);
  sqcRYGate(q, 0.07943250983857005, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3423904563004454, 4);
  sqcRYGate(q, -2.221598313080336, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.592311685985582, 6);
  sqcRYGate(q, 1.9482200585935976, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.1230621581748439, 6);
  sqcRYGate(q, -1.5715428990643259, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4719869706197484, 8);
  sqcRYGate(q, 0.8790086355855153, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.9092539052379219, 8);
  sqcRYGate(q, -0.888588739012717, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.009552864480411, 10);
  sqcRYGate(q, -1.9301330832954005, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.7849547845492095, 10);
  sqcRYGate(q, 0.01718594847760692, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.9529327418727157, 12);
  sqcRYGate(q, -1.8142077783554884, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.7514892828058084, 12);
  sqcRYGate(q, 1.5793130220520837, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.3818918728887146, 14);
  sqcRYGate(q, -0.8061630736844574, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.7710114114204067, 14);
  sqcRYGate(q, 0.056188991576935736, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.9441289900094488, 16);
  sqcRYGate(q, 2.778255053246146, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.923441464235588, 16);
  sqcRYGate(q, 2.5955149055005187, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.6261600583605371, 18);
  sqcRYGate(q, -0.3408935486938862, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.9370341214419193, 18);
  sqcRYGate(q, -2.8106980499661924, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.58993253842762, 0);
  sqcRYGate(q, 2.352446676522062, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4186963169951443, 0);
  sqcRYGate(q, 0.6517881342497684, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6210591524781481, 2);
  sqcRYGate(q, 1.077596538854701, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.102411232464785, 2);
  sqcRYGate(q, 0.013794642536089976, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.24214902482401315, 4);
  sqcRYGate(q, -1.0964660585303814, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.00022224734005418914, 4);
  sqcRYGate(q, 2.8500379774089346, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.15281052614918078, 6);
  sqcRYGate(q, -1.029712006279043, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.4972682933732686, 6);
  sqcRYGate(q, -0.001148856255909951, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.546448867098548, 8);
  sqcRYGate(q, -2.636213823514056, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.0008209128230306661, 8);
  sqcRYGate(q, 0.004413919530813172, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.8439914487754128, 10);
  sqcRYGate(q, -2.8123167387002925, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.8794406018413436, 10);
  sqcRYGate(q, -3.062700021531913, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.5741012097112737, 12);
  sqcRYGate(q, 1.9008463463375431, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -3.140677962858491, 12);
  sqcRYGate(q, -0.001978989391294762, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.246909353803944, 14);
  sqcRYGate(q, -2.5294943738490385, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -0.01831028385588723, 14);
  sqcRYGate(q, 3.0251097055539877, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -2.56938562912663, 16);
  sqcRYGate(q, 1.4780848537320401, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -2.7056209444923325, 16);
  sqcRYGate(q, -3.0833422658207406, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -0.7768680040604439, 1);
  sqcRYGate(q, -0.7944997224414146, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4909835165434373, 1);
  sqcRYGate(q, -3.1124866721974436, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3209002858657586, 3);
  sqcRYGate(q, 2.320785402226667, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.1074992964549355, 3);
  sqcRYGate(q, -0.034796571493557416, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.042097193619628, 5);
  sqcRYGate(q, -2.175652344018404, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.1394038217717015, 5);
  sqcRYGate(q, -0.04801761539895999, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.9723520711219173, 7);
  sqcRYGate(q, 2.6188681709829544, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.1095989810679745, 7);
  sqcRYGate(q, -0.04322216135394407, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.11022497079600767, 9);
  sqcRYGate(q, -2.9063679059072984, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.137683783377672, 9);
  sqcRYGate(q, -0.002783381207454916, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.34897201934045796, 11);
  sqcRYGate(q, 2.9907726267757706, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -2.8195577029460583, 11);
  sqcRYGate(q, -1.5869392655146983, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.8671780957095232, 13);
  sqcRYGate(q, 0.7120648411461906, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 3.1263229465250224, 13);
  sqcRYGate(q, -0.010671785736770861, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.29214973403462263, 15);
  sqcRYGate(q, 1.7068182746568983, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 3.113480106275505, 15);
  sqcRYGate(q, 0.002286185362547321, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 0.3342315045576187, 17);
  sqcRYGate(q, -1.3388650395164183, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 0.1333522251665311, 17);
  sqcRYGate(q, 0.05572080153854486, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 2.660437020233195, 0);
  sqcRYGate(q, -2.2444305333059873, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8324544072635435, 0);
  sqcRYGate(q, 1.9885344249324528, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5336981582794535, 2);
  sqcRYGate(q, -0.48185580628341285, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.05880239012917226, 2);
  sqcRYGate(q, 0.03735238471043978, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0261985522525876, 4);
  sqcRYGate(q, -0.7221777782431644, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0646939333634835, 4);
  sqcRYGate(q, -2.773571205649369, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4433949670822885, 6);
  sqcRYGate(q, 2.1912064274095497, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.11068715637323821, 6);
  sqcRYGate(q, 3.043516239299303, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.3277793058976597, 8);
  sqcRYGate(q, -2.179405407489873, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.8714069059937732, 8);
  sqcRYGate(q, -2.6096758328427123, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.0829640203837325, 10);
  sqcRYGate(q, 2.0412269539994994, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.1738921550350845, 10);
  sqcRYGate(q, -0.3398083070850735, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.47758641406927443, 12);
  sqcRYGate(q, -1.4378310605375786, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.097307969598881, 12);
  sqcRYGate(q, 1.8071375019046139, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.7402238105419556, 14);
  sqcRYGate(q, 1.3448832299847924, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.24108648106155517, 14);
  sqcRYGate(q, -0.8308376062806583, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.008815025598989834, 16);
  sqcRYGate(q, -2.543616607391083, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.9968283655979087, 16);
  sqcRYGate(q, -0.3536016786693029, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.279343095086758, 18);
  sqcRYGate(q, 0.11891765039873667, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.6940523567780426, 18);
  sqcRYGate(q, 1.8699222203850598, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -3.0157690711663894, 0);
  sqcRYGate(q, -1.5224814982253652, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.103110245530328, 0);
  sqcRYGate(q, 0.8413435348995382, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.28091536959463426, 2);
  sqcRYGate(q, -0.4774978453544038, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.0008980165710789583, 2);
  sqcRYGate(q, -0.00017317388443072832, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.4185469390981522, 4);
  sqcRYGate(q, -0.48772175908051985, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.8472444789005333, 4);
  sqcRYGate(q, 0.22096043144215116, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.05309947997809856, 6);
  sqcRYGate(q, 1.0061598804590608, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.1352357780913263, 6);
  sqcRYGate(q, -3.1343006778135742, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.6149121133100337, 8);
  sqcRYGate(q, -1.783634737716297, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.024323809257202986, 8);
  sqcRYGate(q, 3.138626885895794, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.741286981364745, 10);
  sqcRYGate(q, -1.23369660422754, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.2580121706854097, 10);
  sqcRYGate(q, -1.7474928212300025, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -2.415391544893407, 12);
  sqcRYGate(q, 1.3328280855915535, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 3.1305488042840497, 12);
  sqcRYGate(q, -0.08279769136054949, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.188366177739021, 14);
  sqcRYGate(q, -1.5325810630806487, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -0.053959628258667215, 14);
  sqcRYGate(q, -0.02472834171338195, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 2.2863292766558767, 16);
  sqcRYGate(q, -1.4791444698463652, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 3.071800149557414, 16);
  sqcRYGate(q, -0.0059019194706541175, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 0.6608114552683737, 1);
  sqcRYGate(q, 0.20549846774966163, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.113184642537606, 1);
  sqcRYGate(q, -2.524589877777401, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6512556481280285, 3);
  sqcRYGate(q, -0.5098302139050892, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.05230052624779656, 3);
  sqcRYGate(q, -3.1379960309412205, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.4202009679985315, 5);
  sqcRYGate(q, 1.315945934875222, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.09568890055388038, 5);
  sqcRYGate(q, 2.7660824084285127, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.138132492182229, 7);
  sqcRYGate(q, 1.483500403978603, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.018949505008753142, 7);
  sqcRYGate(q, -3.1391767958035173, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.8829562971439724, 9);
  sqcRYGate(q, -0.7158844441011842, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.004486489265783828, 9);
  sqcRYGate(q, -2.892688397109808, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.29122834437169764, 11);
  sqcRYGate(q, -1.5513860442703256, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.6984165891051275, 11);
  sqcRYGate(q, -0.013162779656965993, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.4643344058216403, 13);
  sqcRYGate(q, 1.1236922317466385, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -3.140239567990144, 13);
  sqcRYGate(q, -0.05643254626798923, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 1.031148739206032, 15);
  sqcRYGate(q, -0.3321352273733673, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 3.1222284189585223, 15);
  sqcRYGate(q, 3.1290707025658335, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 2.8616467762330142, 17);
  sqcRYGate(q, 1.0518909238962166, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -1.5935693594702904, 17);
  sqcRYGate(q, -3.1226996335823753, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -2.494606425282516, 0);
  sqcRYGate(q, 1.8416828391516047, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3684733223773318, 0);
  sqcRYGate(q, 1.0591934935508602, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5217203641464555, 2);
  sqcRYGate(q, -2.822915876853624, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5598598219981472, 2);
  sqcRYGate(q, 3.0652320155999337, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.315658916303664, 4);
  sqcRYGate(q, -1.0219437162128893, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0729189891241435, 4);
  sqcRYGate(q, 0.1038999534252687, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.747743749949206, 6);
  sqcRYGate(q, 0.7979149598126254, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0224351661044384, 6);
  sqcRYGate(q, 0.19791443043361312, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.60765522230729, 8);
  sqcRYGate(q, -0.6750509827351436, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.15158630922008776, 8);
  sqcRYGate(q, -0.22907769961219682, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9419245236579483, 10);
  sqcRYGate(q, -3.0095298358426907, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.2132851572469188, 10);
  sqcRYGate(q, 1.4499171768411805, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.258528122327525, 12);
  sqcRYGate(q, 1.4797999717411328, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.6534534831539809, 12);
  sqcRYGate(q, 0.5327163033191102, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.10204486166144998, 14);
  sqcRYGate(q, 1.5731475376651152, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.2207244663048626, 14);
  sqcRYGate(q, 2.8118147061648524, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.445389052788727, 16);
  sqcRYGate(q, -0.20520589754181096, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.0017956433125752972, 16);
  sqcRYGate(q, 2.8571372602262257, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.186708992718688, 18);
  sqcRYGate(q, -1.575392703205441, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.2727399207095162, 18);
  sqcRYGate(q, 0.11649724762605906, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.8262239530625957, 0);
  sqcRYGate(q, 2.2779648602989777, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1104040392284946, 0);
  sqcRYGate(q, -2.265624822291173, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.24416981553243775, 2);
  sqcRYGate(q, 1.9495828620864626, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.008183550018173946, 2);
  sqcRYGate(q, -0.024046754548481708, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.7445517132165262, 4);
  sqcRYGate(q, -2.674790589588685, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.2956352174684129, 4);
  sqcRYGate(q, -3.0666622381566078, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.6321955706284379, 6);
  sqcRYGate(q, 0.05029953635614248, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.009033094247587631, 6);
  sqcRYGate(q, -0.004105001460103175, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.5724388567045128, 8);
  sqcRYGate(q, 2.1967588254859622, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.00230498765834497, 8);
  sqcRYGate(q, -3.112516187450328, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.5860494219257699, 10);
  sqcRYGate(q, -1.3867981828388158, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.5496686904915418, 10);
  sqcRYGate(q, -3.1372439855145506, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.8263275997550394, 12);
  sqcRYGate(q, 2.3314954815487265, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 3.1231633820002127, 12);
  sqcRYGate(q, -3.137526796630608, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.6621121138245636, 14);
  sqcRYGate(q, 1.7966767766139622, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 3.103482754353329, 14);
  sqcRYGate(q, 0.02142332848925399, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -1.8474611243023196, 16);
  sqcRYGate(q, -2.877765494615043, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 0.045056114112171794, 16);
  sqcRYGate(q, 0.02594202643106775, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -2.0936156711716647, 1);
  sqcRYGate(q, -1.9267012484412946, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.801537217545873, 1);
  sqcRYGate(q, -0.030332388250990935, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4203028003307288, 3);
  sqcRYGate(q, 0.25629120495999036, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.1312319043659365, 3);
  sqcRYGate(q, -3.141546252554734, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.1938381282149066, 5);
  sqcRYGate(q, -0.4293244664150381, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.0995848666490579, 5);
  sqcRYGate(q, -0.39635557700067636, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.35298872664591663, 7);
  sqcRYGate(q, 1.1029104636547846, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.009095620169516686, 7);
  sqcRYGate(q, 3.1371384139581036, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.4335442258037366, 9);
  sqcRYGate(q, -0.14311082030779865, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.128351847050367, 9);
  sqcRYGate(q, -2.899688193791066, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.007442586230236, 11);
  sqcRYGate(q, 3.056173858635768, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.03770277477637192, 11);
  sqcRYGate(q, -3.141022224860106, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.7143584055477694, 13);
  sqcRYGate(q, 1.7890811891117586, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 3.125522971242596, 13);
  sqcRYGate(q, -0.007573912014836631, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 1.0805554133056836, 15);
  sqcRYGate(q, -0.7836838548939785, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -3.13784792354391, 15);
  sqcRYGate(q, -3.122572636660816, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 2.7273507942726276, 17);
  sqcRYGate(q, 1.4969611596032044, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -1.7239858113288182, 17);
  sqcRYGate(q, 3.1064434553324007, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -2.77686209664345, 0);
  sqcRYGate(q, -2.2652631806618833, 1);
  sqcRYGate(q, 2.0934985535279305, 2);
  sqcRYGate(q, -1.4604670509086128, 3);
  sqcRYGate(q, -0.9032372673782957, 4);
  sqcRYGate(q, -2.865567841034331, 5);
  sqcRYGate(q, 0.7319011871652432, 6);
  sqcRYGate(q, 1.8281564756934188, 7);
  sqcRYGate(q, -0.9019838147776609, 8);
  sqcRYGate(q, -2.7588837245156244, 9);
  sqcRYGate(q, 0.7901894325999104, 10);
  sqcRYGate(q, 1.4037286321241291, 11);
  sqcRYGate(q, -2.123093603242248, 12);
  sqcRYGate(q, 3.1369022270923512, 13);
  sqcRYGate(q, -0.8159952922629508, 14);
  sqcRYGate(q, 1.846317713980988, 15);
  sqcRYGate(q, 0.42450177295495745, 16);
  sqcRYGate(q, 1.048628636248089, 17);
  sqcRYGate(q, -1.8491300595076767, 18);
  sqcRYGate(q, -2.171627026293132, 19);

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
