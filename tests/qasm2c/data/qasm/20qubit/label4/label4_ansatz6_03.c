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

  sqcRYGate(q, -1.334338141879617, 0);
  sqcRYGate(q, -0.248085400016817, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.159471631371648, 0);
  sqcRYGate(q, -1.187165869339628, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0218762644373256, 1);
  sqcRYGate(q, 0.5541206335657958, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.31298145683316037, 1);
  sqcRYGate(q, -1.2969111323626217, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.659057476806795, 2);
  sqcRYGate(q, 1.3272057116930749, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.296264139546819, 2);
  sqcRYGate(q, 3.1072784908372357, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.31567245070939814, 3);
  sqcRYGate(q, -2.5385873825167624, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1013732394757287, 3);
  sqcRYGate(q, -1.1505827037063505, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5421954322936116, 4);
  sqcRYGate(q, -1.1410038080708564, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.07829301898246209, 4);
  sqcRYGate(q, 1.5204646984043055, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5128171847356784, 5);
  sqcRYGate(q, 2.808831185785524, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7139339225412922, 5);
  sqcRYGate(q, -1.5541112982791863, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9558950015500862, 6);
  sqcRYGate(q, 1.0167359501831985, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.549789281007972, 6);
  sqcRYGate(q, 0.00010193973922438754, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3506962531199216, 7);
  sqcRYGate(q, -3.082459433665315, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.6972888102939594, 7);
  sqcRYGate(q, -1.5064519275707768, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.822239257077298, 8);
  sqcRYGate(q, -3.140233373886287, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5682139068252758, 8);
  sqcRYGate(q, -1.5738835737892432, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.23393718934136645, 9);
  sqcRYGate(q, 0.46275480482501147, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5036261631051602, 9);
  sqcRYGate(q, -1.3164760031278566, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.7740990445743119, 10);
  sqcRYGate(q, 1.1683739720666104, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.7303584867524626, 10);
  sqcRYGate(q, 0.005665062849137159, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.7634396154904408, 11);
  sqcRYGate(q, 1.1901466407882246, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.0806873599500886, 11);
  sqcRYGate(q, -0.7218781848907464, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.8872733523266936, 12);
  sqcRYGate(q, -3.06809180092201, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.9602825359132003, 12);
  sqcRYGate(q, -1.6090777392975868, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.5240820944395538, 13);
  sqcRYGate(q, 0.012053947498995446, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.7808759612917395, 13);
  sqcRYGate(q, -1.559596638145968, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.2187537222918543, 14);
  sqcRYGate(q, -0.1995386238243731, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.140963246826678, 14);
  sqcRYGate(q, -1.569097293749846, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.4369072458420197, 15);
  sqcRYGate(q, -1.339769147312392, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.8851269904592236, 15);
  sqcRYGate(q, -1.6451498978457728, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.9941629059752284, 16);
  sqcRYGate(q, -1.5722654214016156, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.4359790185254306, 16);
  sqcRYGate(q, -0.9762113207066462, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.878932801549783, 17);
  sqcRYGate(q, 0.11009347115948834, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.08272645217153406, 17);
  sqcRYGate(q, 0.14171890202933393, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.2568559350692203, 18);
  sqcRYGate(q, -1.6203262878222695, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.754709102428892, 18);
  sqcRYGate(q, 1.5187980214671444, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.3405031308031095, 0);
  sqcRYGate(q, 2.3885326380445244, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9443065243597477, 0);
  sqcRYGate(q, 0.35409272607390285, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7721300711275507, 1);
  sqcRYGate(q, -2.8243835406544813, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.359110119455665, 1);
  sqcRYGate(q, 2.091638777578855, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1752627881680446, 2);
  sqcRYGate(q, 3.0038430463777486, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4051074028365047, 2);
  sqcRYGate(q, 0.6243038870406007, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.089809241490039, 3);
  sqcRYGate(q, 1.4512734765107451, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1254954880940247, 3);
  sqcRYGate(q, 1.567033175098568, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.3965905899019977, 4);
  sqcRYGate(q, 0.009935617920618256, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.251551007398112, 4);
  sqcRYGate(q, -1.5594126533588564, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1114237557193194, 5);
  sqcRYGate(q, 2.6793944347943635, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.18151591394219313, 5);
  sqcRYGate(q, -0.0009920060830745925, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2327755859620204, 6);
  sqcRYGate(q, -1.6306803670709415, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.60210486868365, 6);
  sqcRYGate(q, -1.5709541437025312, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9566300471201874, 7);
  sqcRYGate(q, 0.020884415751810433, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.085693561502142, 7);
  sqcRYGate(q, -1.436722894069901, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.0336082801935564, 8);
  sqcRYGate(q, 1.2792316958502055, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.00023933420919754363, 8);
  sqcRYGate(q, -0.0029088833642205714, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.45243953293500994, 9);
  sqcRYGate(q, -1.8017771106816696, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.6792796407137365, 9);
  sqcRYGate(q, -2.0918330160876106, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.06966105619608158, 10);
  sqcRYGate(q, -1.559569302613311, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.4967357893934072, 10);
  sqcRYGate(q, -1.430221030567815, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.7490703380199222, 11);
  sqcRYGate(q, 1.6112799011378938, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.9435139093187901, 11);
  sqcRYGate(q, -0.19975395094652004, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.495041300135422, 12);
  sqcRYGate(q, 1.4917149340215303, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5434811750971442, 12);
  sqcRYGate(q, -0.11452206533550859, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.1734866903665937, 13);
  sqcRYGate(q, 1.5727924244472267, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.6201182514100056, 13);
  sqcRYGate(q, 2.7359022474756904, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.0009456206493996, 14);
  sqcRYGate(q, -1.6154577472062428, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.7504108208505899, 14);
  sqcRYGate(q, -3.111531407984927, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.709024276723528, 15);
  sqcRYGate(q, -1.5795325277729921, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.48262663613443396, 15);
  sqcRYGate(q, 3.1317911845845208, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 3.0595173554165473, 16);
  sqcRYGate(q, -0.08162253282146459, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.7721083184432804, 16);
  sqcRYGate(q, -1.6431864586998288, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.919423801886131, 17);
  sqcRYGate(q, -1.6392563844037573, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.181928751747411, 17);
  sqcRYGate(q, -2.6844487266149217, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.4773489625824077, 18);
  sqcRYGate(q, 3.1170360125485606, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.3658176274774673, 18);
  sqcRYGate(q, 2.754616119793212, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.7167091088710584, 0);
  sqcRYGate(q, 0.10058880052918263, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.21917601155612626, 0);
  sqcRYGate(q, -2.0875533351877786, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5984632481875143, 1);
  sqcRYGate(q, -1.1172783751528028, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.84496495632848, 1);
  sqcRYGate(q, -0.4520887221878968, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2216119374660255, 2);
  sqcRYGate(q, 2.267633259065315, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5959031173080529, 2);
  sqcRYGate(q, -1.5548654051061437, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.19716530872207985, 3);
  sqcRYGate(q, -1.5699389565281212, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5685064406094407, 3);
  sqcRYGate(q, -0.01176991873394151, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.068402272938196, 4);
  sqcRYGate(q, -2.7104173353804937, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.564628150720851, 4);
  sqcRYGate(q, -3.1392470533472667, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.47493710977349984, 5);
  sqcRYGate(q, 3.1174474433391257, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.078183861864738, 5);
  sqcRYGate(q, -1.577686499306462, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.722490434205275, 6);
  sqcRYGate(q, 1.6188040668860837, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2945268839373232, 6);
  sqcRYGate(q, -0.0011667513635300608, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0605856784452135, 7);
  sqcRYGate(q, 1.1278305105176223, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.0704789049366532, 7);
  sqcRYGate(q, -1.0988065266274143, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.040587281284687526, 8);
  sqcRYGate(q, -2.843526204892846, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5138651213776414, 8);
  sqcRYGate(q, -1.01692956132705, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.4460698633532862, 9);
  sqcRYGate(q, 1.6333060365930665, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.1413034385973644, 9);
  sqcRYGate(q, 3.139505085421605, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.8534887563368982, 10);
  sqcRYGate(q, -1.1820562281627538, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.0714647051538364, 10);
  sqcRYGate(q, 0.15882978300397443, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.9265371013913706, 11);
  sqcRYGate(q, -1.989112979418783, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.1117093115150047, 11);
  sqcRYGate(q, -3.1196573954537272, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.1778010887156798, 12);
  sqcRYGate(q, -1.9179371141579675, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.4089064586762862, 12);
  sqcRYGate(q, 0.12198034237286759, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.228462563885209, 13);
  sqcRYGate(q, -0.38002525212343186, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.126616999978246, 13);
  sqcRYGate(q, -1.173896853185819, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.8363848824113322, 14);
  sqcRYGate(q, -1.8592243677167914, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.088782381805846, 14);
  sqcRYGate(q, -2.9599297152189004, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.9960619737960181, 15);
  sqcRYGate(q, -0.6048430461396636, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.4726632929051884, 15);
  sqcRYGate(q, 1.5849202723958635, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.172626010177368, 16);
  sqcRYGate(q, 1.629841531255605, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.6271966749119704, 16);
  sqcRYGate(q, 0.005657170005804346, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.3272348693887027, 17);
  sqcRYGate(q, -1.7159611650948623, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.9469227075519626, 17);
  sqcRYGate(q, -0.0017648306666220945, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.36648698615543207, 18);
  sqcRYGate(q, -0.00909683691712486, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.5952944271205345, 18);
  sqcRYGate(q, -0.896650152278801, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.3689182078437937, 0);
  sqcRYGate(q, 1.9377558697710242, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8452126176210237, 0);
  sqcRYGate(q, 2.2058564371191816, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7778892622905653, 1);
  sqcRYGate(q, 0.006742956505213726, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0139820714750702, 1);
  sqcRYGate(q, -0.0018627793195715725, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2463381644397717, 2);
  sqcRYGate(q, -2.063430730295087, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0143284035445457, 2);
  sqcRYGate(q, 0.057559930019699, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5688940215036258, 3);
  sqcRYGate(q, 0.588670583073347, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1270564475664733, 3);
  sqcRYGate(q, -1.5697501371074716, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9170044063014525, 4);
  sqcRYGate(q, 1.1178416967757778, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.00890981770914223, 4);
  sqcRYGate(q, 0.4619612127803342, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.117415467031174, 5);
  sqcRYGate(q, 1.2302459222865498, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.07663456050127593, 5);
  sqcRYGate(q, 1.5801825822404085, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7991574040816513, 6);
  sqcRYGate(q, 2.994731760458037, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.975456484929643, 6);
  sqcRYGate(q, 1.5836112155735311, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0127521333735703, 7);
  sqcRYGate(q, -2.299803866183799, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1414667163339747, 7);
  sqcRYGate(q, -3.139664660642239, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.8622337998387644, 8);
  sqcRYGate(q, 0.14013308419738768, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.560528196226679, 8);
  sqcRYGate(q, 2.0407589959813093, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5136214525250722, 9);
  sqcRYGate(q, -1.084875110518578, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.004518046893243349, 9);
  sqcRYGate(q, 1.5627442292710647, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.3214487659707292, 10);
  sqcRYGate(q, -2.6381141101337393, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.04837678158244, 10);
  sqcRYGate(q, -1.5620305434238342, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.2980112969612856, 11);
  sqcRYGate(q, 2.350225299891434, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.014972421746055765, 11);
  sqcRYGate(q, -3.141384376078585, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.6884365383557371, 12);
  sqcRYGate(q, -0.010321390057680624, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.4985268672780512, 12);
  sqcRYGate(q, -1.5353788262545005, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.2468186497479106, 13);
  sqcRYGate(q, 1.3500721807350606, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.040445051797855305, 13);
  sqcRYGate(q, 1.4974651266796215, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.8429520512005992, 14);
  sqcRYGate(q, -1.5746516904796826, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.24780428166856, 14);
  sqcRYGate(q, -0.017825852436565922, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.0216235578694826, 15);
  sqcRYGate(q, -2.0269622077001497, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.508650064021631, 15);
  sqcRYGate(q, -3.1345226391855214, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.5731593965279629, 16);
  sqcRYGate(q, 2.813341152557251, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.5890200158927668, 16);
  sqcRYGate(q, 1.5326984478015329, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.556224852504833, 17);
  sqcRYGate(q, -2.4458267280845587, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.5351661127558622, 17);
  sqcRYGate(q, 3.030822586015993, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 3.128046139756703, 18);
  sqcRYGate(q, 0.915790681525734, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -3.127534454292718, 18);
  sqcRYGate(q, 1.5335428385469179, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.7954400844758247, 0);
  sqcRYGate(q, -1.708063780164908, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7064812771129523, 0);
  sqcRYGate(q, 2.1434191702944094, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5666441557296629, 1);
  sqcRYGate(q, -1.8866599336048229, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5425968065042543, 1);
  sqcRYGate(q, -1.7154043556688077, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0974589761617035, 2);
  sqcRYGate(q, 0.1671730272939174, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4260368029989037, 2);
  sqcRYGate(q, 0.020425802639548962, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4970212601836286, 3);
  sqcRYGate(q, 0.12148667867944772, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.044187875209260305, 3);
  sqcRYGate(q, -1.3014358653435014, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7496507317559375, 4);
  sqcRYGate(q, 0.6371153856575287, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1415293754567446, 4);
  sqcRYGate(q, 0.05522709807696749, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4924512105238006, 5);
  sqcRYGate(q, 1.5721073777228771, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5796771484127552, 5);
  sqcRYGate(q, -2.96910490267232, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5128656509338105, 6);
  sqcRYGate(q, -2.9852638370519817, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5204929370314069, 6);
  sqcRYGate(q, 0.013020999421805788, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5693860374404114, 7);
  sqcRYGate(q, 2.834872832313322, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.6674162964352881, 7);
  sqcRYGate(q, -1.5693217011461735, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5697678750513737, 8);
  sqcRYGate(q, 0.12335661154322874, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5314145569218438, 8);
  sqcRYGate(q, -2.7516469257326883, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.0014149121127911002, 9);
  sqcRYGate(q, -3.1391511619476646, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.03760555482595061, 9);
  sqcRYGate(q, -0.21295757379887206, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5868836073527577, 10);
  sqcRYGate(q, -1.6430558763048877, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.076202993601359, 10);
  sqcRYGate(q, -2.5288640436998557, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.94985620786223, 11);
  sqcRYGate(q, -1.601343172986824, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5700650369107874, 11);
  sqcRYGate(q, 2.6255355810610763, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.44951116955220005, 12);
  sqcRYGate(q, 2.947782298849509, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.1413462131776155, 12);
  sqcRYGate(q, -0.0012573465155805152, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.356436814562251, 13);
  sqcRYGate(q, -0.01725606641154175, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5824084655965822, 13);
  sqcRYGate(q, -1.7908057152011594, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.7026268945118748, 14);
  sqcRYGate(q, 3.0152325973622975, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.1406244875685014, 14);
  sqcRYGate(q, -3.1404128900692765, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.4810675935914126, 15);
  sqcRYGate(q, -1.5830937417750746, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.7819707055595266, 15);
  sqcRYGate(q, 0.03010023150675018, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.10301717074388692, 16);
  sqcRYGate(q, -0.2737375858807827, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -3.1406980049880047, 16);
  sqcRYGate(q, -0.0022723702351239443, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.3076468617089665, 17);
  sqcRYGate(q, -3.0156336573181743, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.8466452148073502, 17);
  sqcRYGate(q, 2.81936065540653, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.429032241149204, 18);
  sqcRYGate(q, 2.4886389435934277, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.602197949434851, 18);
  sqcRYGate(q, 1.5820385041843594, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.745748132228868, 0);
  sqcRYGate(q, 0.024119349167103003, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5704524195564697, 0);
  sqcRYGate(q, -0.901233208683008, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.875829861372685, 1);
  sqcRYGate(q, 1.5703622769755985, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9939416057792356, 1);
  sqcRYGate(q, 8.407937351533988e-05, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6181982820308145, 2);
  sqcRYGate(q, -1.572471901231175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4254170761299005, 2);
  sqcRYGate(q, 3.065842465504741, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0001283724066496461, 3);
  sqcRYGate(q, 0.057480665551618515, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5670908214892678, 3);
  sqcRYGate(q, 1.5289893928449716, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5755639313770935, 4);
  sqcRYGate(q, 1.4012578353840668, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0010521851256062615, 4);
  sqcRYGate(q, 1.5722313049122292, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1886825742388885, 5);
  sqcRYGate(q, 2.5117643988488005, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8550760185476842, 5);
  sqcRYGate(q, -0.00042020986453518097, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5722599252859837, 6);
  sqcRYGate(q, 1.5714505133272987, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5713333199938095, 6);
  sqcRYGate(q, 1.5960893288101303, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5712326537724184, 7);
  sqcRYGate(q, -0.0027526477712171986, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.06253335760124784, 7);
  sqcRYGate(q, -1.5884770125229577, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.4253957266352648, 8);
  sqcRYGate(q, -1.5776480859252828, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.4465727977185718, 8);
  sqcRYGate(q, -3.133027245545616, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.1013893248986304, 9);
  sqcRYGate(q, 3.127046516661441, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5718550936787326, 9);
  sqcRYGate(q, 1.5672451462871522, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5681228560172866, 10);
  sqcRYGate(q, 1.57076739044916, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.5201190417216086, 10);
  sqcRYGate(q, -1.5688006495619828, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6230581898204797, 11);
  sqcRYGate(q, -2.6969683860990274, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.571148522936908, 11);
  sqcRYGate(q, -0.0034471579925794416, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5706844232327697, 12);
  sqcRYGate(q, -0.0754771536875758, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5698623997538592, 12);
  sqcRYGate(q, 1.5716395054580856, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.574289169037466, 13);
  sqcRYGate(q, 1.703831968193024, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.570712384258854, 13);
  sqcRYGate(q, 1.5720013960170967, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.568948320863338, 14);
  sqcRYGate(q, 1.6540963948221608, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.493690477774647, 14);
  sqcRYGate(q, 2.5091619525204223, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5702989235369882, 15);
  sqcRYGate(q, 0.0987253584315226, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.5722018252263008, 15);
  sqcRYGate(q, -1.5801059528998278, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.5664150983845946, 16);
  sqcRYGate(q, 0.03838684307509954, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.5751121598027331, 16);
  sqcRYGate(q, -1.573021399535232, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.5728945450606324, 17);
  sqcRYGate(q, 3.138814290995073, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.5573759589053129, 17);
  sqcRYGate(q, -1.575069833030061, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.007592798294818515, 18);
  sqcRYGate(q, -0.6689542329595531, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 3.1414123116498445, 18);
  sqcRYGate(q, 3.12762226532248, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.00240441294901661, 0);
  sqcRYGate(q, -0.25454804960594135, 1);
  sqcRYGate(q, -3.1390275803205747, 2);
  sqcRYGate(q, 2.87014162452729, 3);
  sqcRYGate(q, -1.5709550053009824, 4);
  sqcRYGate(q, 1.1360560093207224, 5);
  sqcRYGate(q, -1.570815207620547, 6);
  sqcRYGate(q, -1.5734127228776105, 7);
  sqcRYGate(q, -2.000336028701357, 8);
  sqcRYGate(q, 1.7481088185928388, 9);
  sqcRYGate(q, -1.570798045488895, 10);
  sqcRYGate(q, -1.6230651744723046, 11);
  sqcRYGate(q, -1.570410950501082, 12);
  sqcRYGate(q, -1.5676405194951473, 13);
  sqcRYGate(q, 1.5729267999661463, 14);
  sqcRYGate(q, 1.5712667742310966, 15);
  sqcRYGate(q, -1.5695082708534, 16);
  sqcRYGate(q, -1.5818190439007607, 17);
  sqcRYGate(q, 3.1413904175599154, 18);
  sqcRYGate(q, -2.2639908012960768, 19);

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
