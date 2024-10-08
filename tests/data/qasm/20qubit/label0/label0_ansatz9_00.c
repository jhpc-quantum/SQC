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

  sqcRYGate(q, 1.1598553053628207, 0);
  sqcRYGate(q, -0.16704158007002157, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6205134321572892, 0);
  sqcRYGate(q, -0.6797353352201659, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.08426013239555541, 2);
  sqcRYGate(q, -0.3378493582856359, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.06141775210891821, 2);
  sqcRYGate(q, 1.4017437177333942, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.649992760143087, 4);
  sqcRYGate(q, -2.648090001765665, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6192581068326184, 4);
  sqcRYGate(q, -0.68407538295462, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.293973918717258, 6);
  sqcRYGate(q, 2.793944910146247, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4634517967648835, 6);
  sqcRYGate(q, -0.9264753383596158, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1302824690721414, 8);
  sqcRYGate(q, -0.7517428371611379, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.3024100683116075, 8);
  sqcRYGate(q, 0.9499800916082072, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.5696371811908674, 10);
  sqcRYGate(q, -2.0623544357652466, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.6110005774706657, 10);
  sqcRYGate(q, 2.865149606865263, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.0862694489795093, 12);
  sqcRYGate(q, 2.351946107278211, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.137824990218582, 12);
  sqcRYGate(q, 0.7524041969146742, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.595620329127506, 14);
  sqcRYGate(q, -2.2206853512076714, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.557659755898214, 14);
  sqcRYGate(q, 1.3231600039421743, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.806655801625604, 16);
  sqcRYGate(q, -1.5394635784492205, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.736822709801609, 16);
  sqcRYGate(q, -2.7201215145361677, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.5064407836983147, 18);
  sqcRYGate(q, 0.2876216546791625, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.10790354406496583, 18);
  sqcRYGate(q, -0.210401741937874, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.3348363723475916, 0);
  sqcRYGate(q, -2.747476545253796, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2022170148053473, 0);
  sqcRYGate(q, 1.352855519469995, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.876403825625202, 2);
  sqcRYGate(q, 0.6281788126126667, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.8720550661758129, 2);
  sqcRYGate(q, 0.00045714133848725645, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.3156757804992134, 4);
  sqcRYGate(q, 1.1681651516730698, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.3271307652718018, 4);
  sqcRYGate(q, 1.9847761127008545, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.1935532332293395, 6);
  sqcRYGate(q, -0.8395722047174111, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.33787578163611043, 6);
  sqcRYGate(q, -3.1381562064063795, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.507838866121768, 8);
  sqcRYGate(q, 2.5357929006124316, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.6249755139288729, 8);
  sqcRYGate(q, 0.11030549711927673, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.0421531717551047, 10);
  sqcRYGate(q, 2.598607811505888, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.8924211405236329, 10);
  sqcRYGate(q, -2.041170113816274, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 2.6571040257401166, 12);
  sqcRYGate(q, 1.2340261570098683, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.850085010500357, 12);
  sqcRYGate(q, 1.2739823378035051, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.0157614788823368, 14);
  sqcRYGate(q, -1.3436391551223386, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -2.843721990454463, 14);
  sqcRYGate(q, 0.1043613585358575, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 2.2967831015179203, 16);
  sqcRYGate(q, 0.6894087541698211, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -1.9440630939375092, 16);
  sqcRYGate(q, 1.2200581921158198, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 0.34119365328687934, 1);
  sqcRYGate(q, -2.9733570164347665, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.10812004514000995, 1);
  sqcRYGate(q, -0.5292156969012201, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6192619294224874, 3);
  sqcRYGate(q, -2.458323276812307, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.2271164088240394, 3);
  sqcRYGate(q, -3.056972765182715, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.8122864120331514, 5);
  sqcRYGate(q, 1.64045941629902, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.1689723906055264, 5);
  sqcRYGate(q, -3.103526665755966, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.1583868715502237, 7);
  sqcRYGate(q, -2.3907079329644914, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.04270992012794572, 7);
  sqcRYGate(q, 0.17075367911498462, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.7817961831242055, 9);
  sqcRYGate(q, -0.2984514263121598, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.38460166277788943, 9);
  sqcRYGate(q, 3.093427138373618, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.08565796002334608, 11);
  sqcRYGate(q, -1.3006138621374523, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.2665119760948051, 11);
  sqcRYGate(q, 1.9207118625729838, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.9369921525948273, 13);
  sqcRYGate(q, 2.309565279538518, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.6226973710108545, 13);
  sqcRYGate(q, -1.3792899638724865, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.7608449240394064, 15);
  sqcRYGate(q, -2.649408791905026, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -0.34509446957393936, 15);
  sqcRYGate(q, -0.35823292738932816, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -3.0213084103919816, 17);
  sqcRYGate(q, -0.4214456868383349, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, 0.23237891223870477, 17);
  sqcRYGate(q, 1.0286464644596962, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -0.3401827560649621, 0);
  sqcRYGate(q, 2.803366876327171, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4387812238535185, 0);
  sqcRYGate(q, -0.45430060108991555, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.0858626259209296, 1);
  sqcRYGate(q, -0.29768493709583144, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.32328698588798765, 1);
  sqcRYGate(q, 2.8679455497098187, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3208012860167315, 2);
  sqcRYGate(q, -2.0714497175539868, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -3.1179540172211255, 2);
  sqcRYGate(q, 0.014661466826474623, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.3183891500496046, 3);
  sqcRYGate(q, -3.1186742797702425, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.121736198793595, 3);
  sqcRYGate(q, -3.1398658565618702, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6244982763978584, 4);
  sqcRYGate(q, 2.5011166362199115, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.7879108750470936, 4);
  sqcRYGate(q, 2.0502055741318856, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.660137198368388, 5);
  sqcRYGate(q, 3.0766838738539617, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0009127045117432983, 5);
  sqcRYGate(q, -0.0013153842448114473, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5461021431339277, 6);
  sqcRYGate(q, 1.9427791954295772, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -2.7152461755035233, 6);
  sqcRYGate(q, -0.8695491863608066, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -2.48325507331183, 7);
  sqcRYGate(q, -0.9669517089798774, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.1467313731393913, 7);
  sqcRYGate(q, -0.9981009799605758, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.6144329462606928, 8);
  sqcRYGate(q, -0.30234470072644287, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 2.3319067744578, 8);
  sqcRYGate(q, 2.0577000324933987, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 2.020374766045615, 9);
  sqcRYGate(q, -1.189985871903345, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.06950655848075905, 9);
  sqcRYGate(q, 0.0474970421109734, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.2562505212375354, 10);
  sqcRYGate(q, 1.6183410179102324, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -0.1890657594276446, 10);
  sqcRYGate(q, 2.9858749461359166, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -1.3472765867102696, 11);
  sqcRYGate(q, 1.3448065004013507, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.02057453528759123, 11);
  sqcRYGate(q, -3.1325594161537027, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.950261880199961, 12);
  sqcRYGate(q, -0.5895333642528531, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -6.273166821812847e-05, 12);
  sqcRYGate(q, -3.14109604409245, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -0.12575882068411018, 13);
  sqcRYGate(q, -1.368653228706485, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.012167969412343292, 13);
  sqcRYGate(q, -0.01042976148186341, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.0065190769633237, 14);
  sqcRYGate(q, 2.8139217315279748, 17);
  sqcCXGate(q, 14, 17);
  sqcRYGate(q, -2.748963127868023, 14);
  sqcRYGate(q, -2.972404016080344, 17);
  sqcCXGate(q, 14, 17);
  sqcRYGate(q, 2.1685547579044258, 15);
  sqcRYGate(q, 2.471085691016781, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.4489424180995893, 15);
  sqcRYGate(q, 2.247224068537617, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.8360656074477157, 16);
  sqcRYGate(q, 0.11174970245929614, 19);
  sqcCXGate(q, 16, 19);
  sqcRYGate(q, -2.841904212176305, 16);
  sqcRYGate(q, -2.6852421418582373, 19);
  sqcCXGate(q, 16, 19);
  sqcRYGate(q, 1.1493147988409715, 17);
  sqcRYGate(q, 2.645876578559777, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.029989054445577, 17);
  sqcRYGate(q, -3.1369347981322218, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.5937845564432861, 0);
  sqcRYGate(q, 2.425299047162295, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.22061129307065283, 0);
  sqcRYGate(q, -0.059138707578728855, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8921287334628536, 2);
  sqcRYGate(q, 1.6507942107200089, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.02559777615435, 2);
  sqcRYGate(q, -0.0395569778089403, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3565983455849113, 4);
  sqcRYGate(q, 1.0155342796933313, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.02016613326893165, 4);
  sqcRYGate(q, -0.023229620544906928, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.32957132494342933, 6);
  sqcRYGate(q, 0.9418781196518937, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6201231153416336, 6);
  sqcRYGate(q, 0.5684249843295701, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.851531277839836, 8);
  sqcRYGate(q, -1.6731740864021403, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.617661839448941, 8);
  sqcRYGate(q, 2.755807360994381, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.6259340982085018, 10);
  sqcRYGate(q, 2.452493118808689, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.05407018045163129, 10);
  sqcRYGate(q, 0.06005674552458983, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.05442532341137429, 12);
  sqcRYGate(q, -1.5939580271023466, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.13016532739823672, 12);
  sqcRYGate(q, -2.175106274494455, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.26925828693692444, 14);
  sqcRYGate(q, 3.0281631424461755, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.7429527917603863, 14);
  sqcRYGate(q, 0.10113305786347718, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.5654576503092229, 16);
  sqcRYGate(q, -3.084889693356735, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.8416672340129456, 16);
  sqcRYGate(q, 0.4015544922523459, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 3.1360743088502514, 18);
  sqcRYGate(q, 2.751141626482581, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.5728796084581271, 18);
  sqcRYGate(q, 1.5871786829129881, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.80971324861495, 0);
  sqcRYGate(q, -1.6714312981660813, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9823279628883705, 0);
  sqcRYGate(q, 0.34223459442840026, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7630319315101142, 2);
  sqcRYGate(q, 2.380512644547036, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.990526994559433, 2);
  sqcRYGate(q, 2.931561899199772, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.345363465926244, 4);
  sqcRYGate(q, 2.5948350662248196, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.6177172707334866, 4);
  sqcRYGate(q, -3.139537052227619, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.5118430542712523, 6);
  sqcRYGate(q, -2.1438213621737665, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.5962228533426517, 6);
  sqcRYGate(q, 2.5171490209389935, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.3103475079056977, 8);
  sqcRYGate(q, -0.7986507038266071, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 3.114716174656457, 8);
  sqcRYGate(q, -3.1125625034193782, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.3638051990193363, 10);
  sqcRYGate(q, -1.432566973907477, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.9754584972153824, 10);
  sqcRYGate(q, -2.572699668979786, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -2.2298566343564077, 12);
  sqcRYGate(q, -0.32284434653110694, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 3.1407727122499685, 12);
  sqcRYGate(q, -0.0013352730451558481, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -3.1293736839373256, 14);
  sqcRYGate(q, 1.0955869651804653, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -3.1154305249205927, 14);
  sqcRYGate(q, 3.0918922457398827, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -1.2287512493279422, 16);
  sqcRYGate(q, -1.1908177650143887, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -1.8414580298874448, 16);
  sqcRYGate(q, -0.6620215113901207, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -0.6114218715756392, 1);
  sqcRYGate(q, -1.2726628948892245, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6863407361508016, 1);
  sqcRYGate(q, -1.6822204368192795, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.33572308537695744, 3);
  sqcRYGate(q, -2.598592612877055, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.1399946694902194, 3);
  sqcRYGate(q, -0.0013792864647676898, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.33781101994468105, 5);
  sqcRYGate(q, -0.7058308246989924, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.7786525588100979, 5);
  sqcRYGate(q, -3.016412250945785, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.914639183567722, 7);
  sqcRYGate(q, -0.624762831205663, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.2651316804473298, 7);
  sqcRYGate(q, 1.2678176983093354, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.8211239469641454, 9);
  sqcRYGate(q, 3.111390276763864, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.09441705275825285, 9);
  sqcRYGate(q, -0.11136980540683639, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.48677016716206195, 11);
  sqcRYGate(q, -0.7850278979162795, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -3.1388137085944763, 11);
  sqcRYGate(q, -3.1284555204821065, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -2.1971536856904104, 13);
  sqcRYGate(q, -3.0407594323742066, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.0017343963424449882, 13);
  sqcRYGate(q, 0.0008064679640687868, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.27822191878329866, 15);
  sqcRYGate(q, -0.6569605941011182, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 2.8966667829975523, 15);
  sqcRYGate(q, -0.06633157460124013, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, 2.8378975075546236, 17);
  sqcRYGate(q, -1.57924536330573, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -1.1637198465188467, 17);
  sqcRYGate(q, 3.1230829045218993, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -0.39542532186403173, 0);
  sqcRYGate(q, 2.4108894176015987, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7104785619547695, 0);
  sqcRYGate(q, -1.3506102615534419, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.7227316011096314, 1);
  sqcRYGate(q, -1.1980864890836478, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.57600134685272, 1);
  sqcRYGate(q, 1.7115982880741727, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.024980917995637952, 2);
  sqcRYGate(q, 2.971444529662134, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -3.1381527666466833, 2);
  sqcRYGate(q, 3.135819034146958, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.8667570653250172, 3);
  sqcRYGate(q, 1.6252863914354372, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4323659723318995, 3);
  sqcRYGate(q, -3.139061984985512, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2711802116627566, 4);
  sqcRYGate(q, 1.8575774427610692, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.0010928604643654083, 4);
  sqcRYGate(q, -0.0005488831179868397, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.26699273256638684, 5);
  sqcRYGate(q, 2.1716558492316134, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1032957242408026, 5);
  sqcRYGate(q, 3.11317954293873, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.15287684193204853, 6);
  sqcRYGate(q, 0.33405981304054677, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 2.8307815470770135, 6);
  sqcRYGate(q, 0.7904345223883263, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -0.6288141365387331, 7);
  sqcRYGate(q, -0.5533017358753849, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.26911344708876905, 7);
  sqcRYGate(q, 0.02693079113137008, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4073848305589705, 8);
  sqcRYGate(q, 0.8325434706969055, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -0.12494612061895982, 8);
  sqcRYGate(q, -2.606510093497506, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 0.6718162091985797, 9);
  sqcRYGate(q, 1.2350777994988116, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.0010756750273683835, 9);
  sqcRYGate(q, 3.141286249616, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.1588180944455111, 10);
  sqcRYGate(q, 2.7761674017970477, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, 0.029715762699694153, 10);
  sqcRYGate(q, 0.009694350580415506, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -3.073783222180376, 11);
  sqcRYGate(q, 1.876414496929298, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.2881549998349637, 11);
  sqcRYGate(q, -2.7920498438748145, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.529135188263564, 12);
  sqcRYGate(q, -1.9755924671703253, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -0.005698385867936472, 12);
  sqcRYGate(q, 0.0016872693645293424, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, 0.42941406706319785, 13);
  sqcRYGate(q, -1.1905428946770975, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.1393464348950024, 13);
  sqcRYGate(q, -0.01568202523761464, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.9004839218515635, 14);
  sqcRYGate(q, -0.41448575756211525, 17);
  sqcCXGate(q, 14, 17);
  sqcRYGate(q, -0.178632556836809, 14);
  sqcRYGate(q, -3.0932155631742924, 17);
  sqcCXGate(q, 14, 17);
  sqcRYGate(q, -1.9017925816559744, 15);
  sqcRYGate(q, -0.3479531106718534, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.9164877413554415, 15);
  sqcRYGate(q, -3.1318351280461427, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.5971942224198985, 16);
  sqcRYGate(q, 0.01485792885463098, 19);
  sqcCXGate(q, 16, 19);
  sqcRYGate(q, 0.4673861952986531, 16);
  sqcRYGate(q, -3.1155534607303843, 19);
  sqcCXGate(q, 16, 19);
  sqcRYGate(q, 0.3027928970790379, 17);
  sqcRYGate(q, 3.093046123797596, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.668673731165535, 17);
  sqcRYGate(q, -0.7959937991048549, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.3150597176471948, 0);
  sqcRYGate(q, -1.7433632856643575, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0209742008640643, 0);
  sqcRYGate(q, 0.04481676640606125, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7103463192243895, 2);
  sqcRYGate(q, -0.4613084672749566, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.021522442390382875, 2);
  sqcRYGate(q, 0.15645273687886085, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1199835600411983, 4);
  sqcRYGate(q, -0.19115318821032368, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9852829155755427, 4);
  sqcRYGate(q, -0.13308899508166316, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.021692488893967, 6);
  sqcRYGate(q, -1.2648356006194237, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8264215359520812, 6);
  sqcRYGate(q, -0.7135725070963315, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4290133235905769, 8);
  sqcRYGate(q, -1.752909463271898, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.04227984232805948, 8);
  sqcRYGate(q, -2.923677060550441, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.2594135003729736, 10);
  sqcRYGate(q, -0.968477795650645, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5654644929109416, 10);
  sqcRYGate(q, 1.6263449750947547, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.4807608569637605, 12);
  sqcRYGate(q, -0.30408269493945467, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.010483563614400282, 12);
  sqcRYGate(q, -2.953512109379095, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.434216994725339, 14);
  sqcRYGate(q, -1.672372930822783, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.9183045361092006, 14);
  sqcRYGate(q, 2.9619768302240663, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.5850361286334147, 16);
  sqcRYGate(q, 1.2806528373480188, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.863147007217974, 16);
  sqcRYGate(q, -0.9115834477696326, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.6432966380828378, 18);
  sqcRYGate(q, -2.2546380493686855, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.492261137088987, 18);
  sqcRYGate(q, 2.4152294455865273, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.0459002297440696, 0);
  sqcRYGate(q, 0.8067360559631415, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0584857455003176, 0);
  sqcRYGate(q, 0.06087841443371467, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.803927101382824, 2);
  sqcRYGate(q, 0.5861301084527478, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.007130371447623056, 2);
  sqcRYGate(q, -3.105553385757629, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.8809157572716546, 4);
  sqcRYGate(q, 2.9851902949045432, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.134917069822692, 4);
  sqcRYGate(q, -0.012326964368949861, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.0354709362985437, 6);
  sqcRYGate(q, -1.62884787560266, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.8020655761270055, 6);
  sqcRYGate(q, 1.4382113350329981, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.0126457908879658, 8);
  sqcRYGate(q, 0.9878741931570484, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.14243183022352993, 8);
  sqcRYGate(q, 0.017780632363117554, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.16496318915122837, 10);
  sqcRYGate(q, -1.4823870653750582, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.031145086058397276, 10);
  sqcRYGate(q, -3.1393485755477792, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.8262948248621614, 12);
  sqcRYGate(q, -2.5319180679370246, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 3.137284873038073, 12);
  sqcRYGate(q, -0.006800024702694252, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.1404071979604407, 14);
  sqcRYGate(q, -0.6224029233539673, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, -1.7908708572130025, 14);
  sqcRYGate(q, -2.7423795179149733, 16);
  sqcCXGate(q, 14, 16);
  sqcRYGate(q, 2.8355776455348023, 16);
  sqcRYGate(q, -1.409127888374111, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, -2.9854366493640807, 16);
  sqcRYGate(q, -3.0286969273091957, 18);
  sqcCXGate(q, 16, 18);
  sqcRYGate(q, 1.9117510042333792, 1);
  sqcRYGate(q, -2.663115507081197, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9677784934814735, 1);
  sqcRYGate(q, -0.09427764750737347, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9873945662726777, 3);
  sqcRYGate(q, 0.42239401534299953, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.1374692155087356, 3);
  sqcRYGate(q, -0.002372118154519321, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.097759547894119, 5);
  sqcRYGate(q, 1.208985468405365, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.0018189559228381717, 5);
  sqcRYGate(q, 0.0011634328282787607, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.9326803339080127, 7);
  sqcRYGate(q, -1.6787635800223013, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.8588238359353708, 7);
  sqcRYGate(q, -1.853533358111731, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.440323850191591, 9);
  sqcRYGate(q, 0.22308184535596887, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.1385019946127195, 9);
  sqcRYGate(q, 0.0007105317459927818, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.8748692040607042, 11);
  sqcRYGate(q, 2.198150924239788, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -2.9837016265375156, 11);
  sqcRYGate(q, -3.075927410202315, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.794707133832718, 13);
  sqcRYGate(q, 0.0466546648619716, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.004679927041134846, 13);
  sqcRYGate(q, -0.13217373965057178, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -2.516989411629926, 15);
  sqcRYGate(q, 2.821122543287253, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -1.1920471637004493, 15);
  sqcRYGate(q, -2.9409369575548387, 17);
  sqcCXGate(q, 15, 17);
  sqcRYGate(q, -2.625644389074747, 17);
  sqcRYGate(q, 1.5292667041895007, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -0.09277773030704342, 17);
  sqcRYGate(q, 3.0881142170821354, 19);
  sqcCXGate(q, 17, 19);
  sqcRYGate(q, -1.418831928641912, 0);
  sqcRYGate(q, -0.7589544286327146, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.013578811511444577, 0);
  sqcRYGate(q, -2.5679982155211776, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.2843544667132569, 1);
  sqcRYGate(q, -1.1236790239656789, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.137235928049124, 1);
  sqcRYGate(q, -1.4080428196877852, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9765587321495905, 2);
  sqcRYGate(q, 1.1607680221775887, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 3.1256408559855666, 2);
  sqcRYGate(q, 3.11516304129221, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.5699661079613887, 3);
  sqcRYGate(q, 1.4554342295946883, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.897281815504802, 3);
  sqcRYGate(q, -2.8154565135791496, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.547106732284373, 4);
  sqcRYGate(q, 1.2039773202724744, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -3.1129631304047756, 4);
  sqcRYGate(q, 0.04705558565661789, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.4570771529151276, 5);
  sqcRYGate(q, -1.6083552046521046, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.15077373550472117, 5);
  sqcRYGate(q, 2.7372302836248155, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6100323957091789, 6);
  sqcRYGate(q, -1.1286265705226945, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 0.03824620750504489, 6);
  sqcRYGate(q, -3.0562176856709704, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -1.457951628816227, 7);
  sqcRYGate(q, -0.9896994985604213, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.2631942972759123, 7);
  sqcRYGate(q, 3.0916097219031577, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.1007598247026165, 8);
  sqcRYGate(q, 1.9773937748894685, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -3.1411488003592525, 8);
  sqcRYGate(q, 0.0003030214026260581, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 1.9381349237926182, 9);
  sqcRYGate(q, 2.9944237319603966, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.4024287880859818, 9);
  sqcRYGate(q, -0.13008038823775045, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.6121326944282663, 10);
  sqcRYGate(q, -2.3559170792252497, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -0.0005399012411102413, 10);
  sqcRYGate(q, -0.012526133177589216, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, 0.8270072256687797, 11);
  sqcRYGate(q, 2.001189007906685, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.9136309726503558, 11);
  sqcRYGate(q, 2.163231362435674, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5777668141697747, 12);
  sqcRYGate(q, 0.8031172860402895, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, 3.1415206646765013, 12);
  sqcRYGate(q, -3.135010075647076, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -0.7777411535793347, 13);
  sqcRYGate(q, -1.4715479333646684, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.018530382453558, 13);
  sqcRYGate(q, 2.7626766203800317, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.530721331738102, 14);
  sqcRYGate(q, -1.4928200050365437, 17);
  sqcCXGate(q, 14, 17);
  sqcRYGate(q, 3.118645761452411, 14);
  sqcRYGate(q, 0.0008955284494551345, 17);
  sqcCXGate(q, 14, 17);
  sqcRYGate(q, -1.8689709258631233, 15);
  sqcRYGate(q, -3.1347116713561, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.5397369706130017, 15);
  sqcRYGate(q, -2.6845972641308533, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.06410363406647512, 16);
  sqcRYGate(q, 2.8873314657835314, 19);
  sqcCXGate(q, 16, 19);
  sqcRYGate(q, 3.1227496974434876, 16);
  sqcRYGate(q, 3.1087172216739245, 19);
  sqcCXGate(q, 16, 19);
  sqcRYGate(q, 1.090666173433072, 17);
  sqcRYGate(q, -0.6666636060364808, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.10271087001515422, 17);
  sqcRYGate(q, 2.778175709484436, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.245764641113022, 0);
  sqcRYGate(q, 2.794922338540328, 1);
  sqcRYGate(q, 2.6532700670723472, 2);
  sqcRYGate(q, -0.5107618505753475, 3);
  sqcRYGate(q, -0.002115051197124629, 4);
  sqcRYGate(q, -3.1401836251744397, 5);
  sqcRYGate(q, 3.1232776587447146, 6);
  sqcRYGate(q, 0.17838829175317714, 7);
  sqcRYGate(q, -2.6418047355896253, 8);
  sqcRYGate(q, -3.078468387337779, 9);
  sqcRYGate(q, -0.04020391191952566, 10);
  sqcRYGate(q, -0.03130320233487708, 11);
  sqcRYGate(q, 0.002915288656513582, 12);
  sqcRYGate(q, 0.002603365043650996, 13);
  sqcRYGate(q, -1.0429599983746645, 14);
  sqcRYGate(q, -0.1010632381424923, 15);
  sqcRYGate(q, 0.2479696195163843, 16);
  sqcRYGate(q, -0.052068775499793496, 17);
  sqcRYGate(q, -0.7824597445868123, 18);
  sqcRYGate(q, 0.49738954062766005, 19);

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
