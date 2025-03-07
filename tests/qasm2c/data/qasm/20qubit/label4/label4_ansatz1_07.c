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

  sqcRYGate(q, -2.955792121334272, 0);
  sqcRZGate(q, -1.751492192027679, 0);
  sqcRYGate(q, -1.6089788832026883, 1);
  sqcRZGate(q, 1.6682419498351726, 1);
  sqcRYGate(q, -2.7652329130195183, 2);
  sqcRZGate(q, 1.4360926703171604, 2);
  sqcRYGate(q, 1.488599423593941, 3);
  sqcRZGate(q, 2.3450349330731144, 3);
  sqcRYGate(q, 1.5607593037073342, 4);
  sqcRZGate(q, -1.66767600742177, 4);
  sqcRYGate(q, -3.1390483388737596, 5);
  sqcRZGate(q, 1.3666076314537552, 5);
  sqcRYGate(q, -0.05375079727546428, 6);
  sqcRZGate(q, -1.6032569428696846, 6);
  sqcRYGate(q, -0.8447157928422039, 7);
  sqcRZGate(q, 4.062728050148634e-05, 7);
  sqcRYGate(q, 1.51887156843906, 8);
  sqcRZGate(q, -0.004806877000407717, 8);
  sqcRYGate(q, -1.57084641665109, 9);
  sqcRZGate(q, -1.3203620979695694, 9);
  sqcRYGate(q, 0.003699730496984911, 10);
  sqcRZGate(q, 2.2876549605722576, 10);
  sqcRYGate(q, -1.5740651795184712, 11);
  sqcRZGate(q, 1.6759431661318285, 11);
  sqcRYGate(q, 1.5786335330578447, 12);
  sqcRZGate(q, 1.4377449088539636, 12);
  sqcRYGate(q, 3.141551365542115, 13);
  sqcRZGate(q, -1.3942250022902445, 13);
  sqcRYGate(q, 2.5300186698899347, 14);
  sqcRZGate(q, 1.5993176789500287, 14);
  sqcRYGate(q, 1.5234886464078163, 15);
  sqcRZGate(q, -0.9228722209976469, 15);
  sqcRYGate(q, 0.7708534179852675, 16);
  sqcRZGate(q, 0.9468244142061247, 16);
  sqcRYGate(q, -3.1237855581726888, 17);
  sqcRZGate(q, 0.18139097655014724, 17);
  sqcRYGate(q, -1.751940285772295, 18);
  sqcRZGate(q, 3.0243072390792225, 18);
  sqcRYGate(q, -1.2874152254929838, 19);
  sqcRZGate(q, -2.463498841012935, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.5536335232920502, 0);
  sqcRZGate(q, -3.125380914412956, 0);
  sqcRYGate(q, -1.4354792285435645, 1);
  sqcRZGate(q, 1.5530104607807544, 1);
  sqcRYGate(q, -0.14977090536374588, 2);
  sqcRZGate(q, 2.240929948690214, 2);
  sqcRYGate(q, -0.0723779607400914, 3);
  sqcRZGate(q, -0.004053138621674715, 3);
  sqcRYGate(q, 0.7643867571397704, 4);
  sqcRZGate(q, -3.075296728890671, 4);
  sqcRYGate(q, -1.5706571879499354, 5);
  sqcRZGate(q, -2.8061341584142614, 5);
  sqcRYGate(q, -1.5674419043854266, 6);
  sqcRZGate(q, -0.03555977196395065, 6);
  sqcRYGate(q, 1.5683794478585398, 7);
  sqcRZGate(q, 0.006944328781827379, 7);
  sqcRYGate(q, -1.5555417511206835, 8);
  sqcRZGate(q, -0.6187742334117559, 8);
  sqcRYGate(q, -3.1358670951717573, 9);
  sqcRZGate(q, 1.7915301719164016, 9);
  sqcRYGate(q, -2.637102359894821, 10);
  sqcRZGate(q, -1.7027583933967074, 10);
  sqcRYGate(q, -0.1449875282764204, 11);
  sqcRZGate(q, -2.0251140113216137, 11);
  sqcRYGate(q, -1.162650606179565, 12);
  sqcRZGate(q, -1.794845275861202, 12);
  sqcRYGate(q, 0.00036465281242303865, 13);
  sqcRZGate(q, -1.4140685739084191, 13);
  sqcRYGate(q, 0.051762083825646066, 14);
  sqcRZGate(q, 1.4729815901617167, 14);
  sqcRYGate(q, 0.4304219197617676, 15);
  sqcRZGate(q, -2.0111725645746135, 15);
  sqcRYGate(q, -3.05936250849962, 16);
  sqcRZGate(q, 2.2247701981438537, 16);
  sqcRYGate(q, -0.0014862748530157788, 17);
  sqcRZGate(q, -3.140287307807883, 17);
  sqcRYGate(q, 0.9294207508629277, 18);
  sqcRZGate(q, 1.1282239204532187, 18);
  sqcRYGate(q, -3.0417911625629572, 19);
  sqcRZGate(q, 0.6363816478835632, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.2958376299169707, 0);
  sqcRZGate(q, -1.0716438330541014, 0);
  sqcRYGate(q, -1.364463115247255, 1);
  sqcRZGate(q, -1.690326945817783, 1);
  sqcRYGate(q, -2.4694117599686676, 2);
  sqcRZGate(q, 0.8970847533617279, 2);
  sqcRYGate(q, -1.654941961799288, 3);
  sqcRZGate(q, 0.35257278650629376, 3);
  sqcRYGate(q, -1.265327150857547, 4);
  sqcRZGate(q, -0.6587335117817359, 4);
  sqcRYGate(q, -1.5511611581157425, 5);
  sqcRZGate(q, 2.163141511192947, 5);
  sqcRYGate(q, 1.565401140837956, 6);
  sqcRZGate(q, -3.1396172390921415, 6);
  sqcRYGate(q, 1.5696407358273579, 7);
  sqcRZGate(q, -9.063603794816674e-05, 7);
  sqcRYGate(q, 2.2131807458103, 8);
  sqcRZGate(q, -0.3185103614899081, 8);
  sqcRYGate(q, -1.542204306150503, 9);
  sqcRZGate(q, 0.009140872265994027, 9);
  sqcRYGate(q, 3.0113044594970333, 10);
  sqcRZGate(q, 0.02279980232419376, 10);
  sqcRYGate(q, 0.004990648827334887, 11);
  sqcRZGate(q, 2.379508031122351, 11);
  sqcRYGate(q, -2.9778692463237384, 12);
  sqcRZGate(q, 1.0999464066599653, 12);
  sqcRYGate(q, 3.1365199648501654, 13);
  sqcRZGate(q, -0.7037118480617429, 13);
  sqcRYGate(q, 2.027589087460507, 14);
  sqcRZGate(q, 1.2864318257051774, 14);
  sqcRYGate(q, 1.7280834774107106, 15);
  sqcRZGate(q, 0.45578958557636023, 15);
  sqcRYGate(q, -1.7323195032439305, 16);
  sqcRZGate(q, -2.5267325078412237, 16);
  sqcRYGate(q, 1.559227477885869, 17);
  sqcRZGate(q, -3.0911027025691054, 17);
  sqcRYGate(q, -0.3123491996876444, 18);
  sqcRZGate(q, -1.3883569069293737, 18);
  sqcRYGate(q, -2.7874052545846726, 19);
  sqcRZGate(q, 3.0433841111371067, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.870052381824917, 0);
  sqcRZGate(q, 0.3398548950239233, 0);
  sqcRYGate(q, -1.3919560430260727, 1);
  sqcRZGate(q, -0.701402568539149, 1);
  sqcRYGate(q, 1.544135787130673, 2);
  sqcRZGate(q, 2.7506993368777515, 2);
  sqcRYGate(q, 3.13815880679138, 3);
  sqcRZGate(q, 1.1501124974476618, 3);
  sqcRYGate(q, 3.140681447174745, 4);
  sqcRZGate(q, 0.9523022373537604, 4);
  sqcRYGate(q, -1.5705566627950267, 5);
  sqcRZGate(q, 0.024267334947993394, 5);
  sqcRYGate(q, 1.570072579267027, 6);
  sqcRZGate(q, 9.378489304777356e-05, 6);
  sqcRYGate(q, 1.5705544262451987, 7);
  sqcRZGate(q, 0.7441542447082237, 7);
  sqcRYGate(q, -0.015842917855170068, 8);
  sqcRZGate(q, 3.0941413159654667, 8);
  sqcRYGate(q, -1.5887356290005226, 9);
  sqcRZGate(q, 2.910926319346316, 9);
  sqcRYGate(q, 1.5730851259596548, 10);
  sqcRZGate(q, 1.4616906482145513, 10);
  sqcRYGate(q, 1.5749896632210298, 11);
  sqcRZGate(q, 0.00022220857858812337, 11);
  sqcRYGate(q, 0.05241937279490035, 12);
  sqcRZGate(q, -1.3358987278762715, 12);
  sqcRYGate(q, 0.00020123560207832342, 13);
  sqcRZGate(q, -0.7031215997272571, 13);
  sqcRYGate(q, 0.39137122124205953, 14);
  sqcRZGate(q, 1.0525671479090852, 14);
  sqcRYGate(q, -0.07972436689782272, 15);
  sqcRZGate(q, 2.090313147472739, 15);
  sqcRYGate(q, 1.5674543942497416, 16);
  sqcRZGate(q, 0.0020643305952221525, 16);
  sqcRYGate(q, -1.5645672765905994, 17);
  sqcRZGate(q, -1.6388126271022774, 17);
  sqcRYGate(q, -0.21495869227539283, 18);
  sqcRZGate(q, -0.09290866858168823, 18);
  sqcRYGate(q, -2.3458377605258884, 19);
  sqcRZGate(q, 1.240440938372081, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.0414887347595114, 0);
  sqcRZGate(q, -2.5250966499886833, 0);
  sqcRYGate(q, 2.924307872763979, 1);
  sqcRZGate(q, -1.2972605878914882, 1);
  sqcRYGate(q, 1.2019524842414078, 2);
  sqcRZGate(q, -0.7132400678612758, 2);
  sqcRYGate(q, 0.04200421203164689, 3);
  sqcRZGate(q, -0.7476305668247979, 3);
  sqcRYGate(q, -2.4776286759784143, 4);
  sqcRZGate(q, -0.3316384176936662, 4);
  sqcRYGate(q, 2.8297368060752475, 5);
  sqcRZGate(q, -3.118265835176925, 5);
  sqcRYGate(q, 1.571022350084092, 6);
  sqcRZGate(q, 0.8208053577335949, 6);
  sqcRYGate(q, -3.0965502520290826, 7);
  sqcRZGate(q, 0.7316198461947891, 7);
  sqcRYGate(q, 1.5779586409610724, 8);
  sqcRZGate(q, 0.7571188267058188, 8);
  sqcRYGate(q, -1.6410772518215666, 9);
  sqcRZGate(q, -1.4098095151693504, 9);
  sqcRYGate(q, 0.00262009729836095, 10);
  sqcRZGate(q, -2.762196258092821, 10);
  sqcRYGate(q, -1.5720781072587304, 11);
  sqcRZGate(q, -0.8870053830373906, 11);
  sqcRYGate(q, -1.573304216851832, 12);
  sqcRZGate(q, 1.6335198961924275, 12);
  sqcRYGate(q, 2.4619319067110976, 13);
  sqcRZGate(q, -0.0034269357215389092, 13);
  sqcRYGate(q, -1.6851332499310798, 14);
  sqcRZGate(q, 0.7061355250514642, 14);
  sqcRYGate(q, -1.5707585696388886, 15);
  sqcRZGate(q, -0.001906488073130319, 15);
  sqcRYGate(q, 1.5656047586487345, 16);
  sqcRZGate(q, -1.5560211716022563, 16);
  sqcRYGate(q, -1.5458825432809196, 17);
  sqcRZGate(q, 2.8651872349980296, 17);
  sqcRYGate(q, 1.5050178439508175, 18);
  sqcRZGate(q, 1.7881930915748723, 18);
  sqcRYGate(q, -0.24340156893054474, 19);
  sqcRZGate(q, 1.8129966573519163, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.0945643710641457, 0);
  sqcRZGate(q, 2.1645192034314436, 0);
  sqcRYGate(q, 1.7380840084344538, 1);
  sqcRZGate(q, -0.42864412431145027, 1);
  sqcRYGate(q, 0.09014893469481056, 2);
  sqcRZGate(q, 1.5997748104555516, 2);
  sqcRYGate(q, 0.5017047185613791, 3);
  sqcRZGate(q, 1.5848430206192945, 3);
  sqcRYGate(q, -3.1400036185167535, 4);
  sqcRZGate(q, 2.8352389749923423, 4);
  sqcRYGate(q, 1.5283509100496975, 5);
  sqcRZGate(q, -0.00043559300007196296, 5);
  sqcRYGate(q, -3.1403710677723704, 6);
  sqcRZGate(q, -2.042455705663931, 6);
  sqcRYGate(q, -0.21722488779141447, 7);
  sqcRZGate(q, 1.695782662484028, 7);
  sqcRYGate(q, 3.141470140118211, 8);
  sqcRZGate(q, -2.3869322074980244, 8);
  sqcRYGate(q, -0.00034844765393504673, 9);
  sqcRZGate(q, 1.4146019043215023, 9);
  sqcRYGate(q, 3.141404450968406, 10);
  sqcRZGate(q, 1.6000287358673877, 10);
  sqcRYGate(q, 2.1406775105862397, 11);
  sqcRZGate(q, 1.624281839069704, 11);
  sqcRYGate(q, 1.9798736159353347, 12);
  sqcRZGate(q, -0.11767607819445924, 12);
  sqcRYGate(q, -1.5707929677596768, 13);
  sqcRZGate(q, 0.5433340198139158, 13);
  sqcRYGate(q, -1.5688578463933993, 14);
  sqcRZGate(q, 3.141343728643134, 14);
  sqcRYGate(q, -1.5729716315136741, 15);
  sqcRZGate(q, -0.0375170364906916, 15);
  sqcRYGate(q, 1.835587154925129, 16);
  sqcRZGate(q, 0.00745818859360071, 16);
  sqcRYGate(q, 1.522923162907733, 17);
  sqcRZGate(q, -1.6266803740483033, 17);
  sqcRYGate(q, 1.5666305210009988, 18);
  sqcRZGate(q, 0.009234136405783744, 18);
  sqcRYGate(q, -0.0019195857141412805, 19);
  sqcRZGate(q, -1.9113214919854444, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.929026662630312, 0);
  sqcRZGate(q, 3.070431244344023, 0);
  sqcRYGate(q, -1.3331098358691822, 1);
  sqcRZGate(q, -1.90258696081961, 1);
  sqcRYGate(q, -0.007314001632574119, 2);
  sqcRZGate(q, 1.6850429820696693, 2);
  sqcRYGate(q, 1.5681980170488439, 3);
  sqcRZGate(q, -3.114804459044619, 3);
  sqcRYGate(q, -1.5869201281306342, 4);
  sqcRZGate(q, 0.0005294244921350001, 4);
  sqcRYGate(q, 1.2614943372508338, 5);
  sqcRZGate(q, 3.0278209888748657, 5);
  sqcRYGate(q, 0.009365249001159606, 6);
  sqcRZGate(q, -2.729594378155588, 6);
  sqcRYGate(q, 3.036579114754572, 7);
  sqcRZGate(q, 2.258678446079172, 7);
  sqcRYGate(q, -1.5635974300410194, 8);
  sqcRZGate(q, 1.566801071865819, 8);
  sqcRYGate(q, 1.7269394963749374, 9);
  sqcRZGate(q, 0.23149383520384462, 9);
  sqcRYGate(q, -0.0004340442702055469, 10);
  sqcRZGate(q, -1.2739651434103125, 10);
  sqcRYGate(q, 0.0003034551447624878, 11);
  sqcRZGate(q, 2.034023197574041, 11);
  sqcRYGate(q, -3.1350488034224355, 12);
  sqcRZGate(q, 1.2795612105353031, 12);
  sqcRYGate(q, -3.1276096585558957, 13);
  sqcRZGate(q, -0.050024078384377724, 13);
  sqcRYGate(q, -0.46177906420885595, 14);
  sqcRZGate(q, 0.21577488853299623, 14);
  sqcRYGate(q, 1.5712986679707566, 15);
  sqcRZGate(q, 3.14149352309214, 15);
  sqcRYGate(q, -0.42664115190011836, 16);
  sqcRZGate(q, 0.04801089487013943, 16);
  sqcRYGate(q, 2.8112892176605473, 17);
  sqcRZGate(q, 1.5304133391812236, 17);
  sqcRYGate(q, 1.4989457238662736, 18);
  sqcRZGate(q, 3.098594206605228, 18);
  sqcRYGate(q, -1.5702733177411448, 19);
  sqcRZGate(q, -3.141251316592323, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.8174978803714006, 0);
  sqcRZGate(q, -1.994100027530055, 0);
  sqcRYGate(q, -0.15686055622442738, 1);
  sqcRZGate(q, 1.225104117432351, 1);
  sqcRYGate(q, -1.5706961404357573, 2);
  sqcRZGate(q, 0.0038938318235350877, 2);
  sqcRYGate(q, 1.580101195953694, 3);
  sqcRZGate(q, -3.074924176024131, 3);
  sqcRYGate(q, -1.5754399800000976, 4);
  sqcRZGate(q, -3.1093220012454386, 4);
  sqcRYGate(q, -2.967055847496207, 5);
  sqcRZGate(q, -0.4519242358947592, 5);
  sqcRYGate(q, -0.07627597087837362, 6);
  sqcRZGate(q, 2.4487137500246385, 6);
  sqcRYGate(q, 0.000793035470149177, 7);
  sqcRZGate(q, 1.875610475215111, 7);
  sqcRYGate(q, 1.5713747346783333, 8);
  sqcRZGate(q, 1.5325489642718757, 8);
  sqcRYGate(q, 1.578699248022313, 9);
  sqcRZGate(q, 3.1322758246138203, 9);
  sqcRYGate(q, 0.08315215013295063, 10);
  sqcRZGate(q, -0.04300113588309293, 10);
  sqcRYGate(q, 0.7563613975056134, 11);
  sqcRZGate(q, -2.641828466815664, 11);
  sqcRYGate(q, -0.05584952263081355, 12);
  sqcRZGate(q, -1.4213681971005991, 12);
  sqcRYGate(q, -3.141355034480449, 13);
  sqcRZGate(q, -0.5735011217818622, 13);
  sqcRYGate(q, 0.0049150456957491205, 14);
  sqcRZGate(q, -0.8899482383625326, 14);
  sqcRYGate(q, -1.5723623833775477, 15);
  sqcRZGate(q, 3.1412644133606387, 15);
  sqcRYGate(q, -1.5674436676338885, 16);
  sqcRZGate(q, 3.1415557728401398, 16);
  sqcRYGate(q, 1.5734758954742905, 17);
  sqcRZGate(q, -0.2650087626796873, 17);
  sqcRYGate(q, 1.5728392376872744, 18);
  sqcRZGate(q, -1.5829664457020949, 18);
  sqcRYGate(q, 1.5688987508162822, 19);
  sqcRZGate(q, -2.132786708397496, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.629281946062612, 0);
  sqcRZGate(q, 0.5558109981877495, 0);
  sqcRYGate(q, 2.300321651592114, 1);
  sqcRZGate(q, 0.0008697203742740479, 1);
  sqcRYGate(q, -2.644686127825905, 2);
  sqcRZGate(q, -0.0005346122695835122, 2);
  sqcRYGate(q, 0.4735194350962964, 3);
  sqcRZGate(q, 3.014235498722956, 3);
  sqcRYGate(q, -3.1317451194072863, 4);
  sqcRZGate(q, 0.03223847027868487, 4);
  sqcRYGate(q, -0.0002284581634137492, 5);
  sqcRZGate(q, 1.9825334846836151, 5);
  sqcRYGate(q, -1.5614223705578327, 6);
  sqcRZGate(q, -1.5686151810554088, 6);
  sqcRYGate(q, -3.1410502721835223, 7);
  sqcRZGate(q, 2.4501194247306746, 7);
  sqcRYGate(q, -0.00015113159065993642, 8);
  sqcRZGate(q, 2.307978337871799, 8);
  sqcRYGate(q, -1.3471021481010101, 9);
  sqcRZGate(q, -0.09747836199222704, 9);
  sqcRYGate(q, 0.38528604965493557, 10);
  sqcRZGate(q, -3.1394452911263127, 10);
  sqcRYGate(q, 3.1413174912658604, 11);
  sqcRZGate(q, -1.43834599508398, 11);
  sqcRYGate(q, -2.754166794947675, 12);
  sqcRZGate(q, -3.14155491651369, 12);
  sqcRYGate(q, -0.34801559850699737, 13);
  sqcRZGate(q, -3.1076007965401997, 13);
  sqcRYGate(q, -3.045969493954549, 14);
  sqcRZGate(q, 2.314896626083068, 14);
  sqcRYGate(q, 1.401704826644656, 15);
  sqcRZGate(q, -2.6432283544370976, 15);
  sqcRYGate(q, -1.5708739196752703, 16);
  sqcRZGate(q, 1.5709699484806579, 16);
  sqcRYGate(q, -1.571076701193059, 17);
  sqcRZGate(q, -0.000679816742339475, 17);
  sqcRYGate(q, 1.5704299652301763, 18);
  sqcRZGate(q, -1.5735090585302967, 18);
  sqcRYGate(q, 3.1402145579617686, 19);
  sqcRZGate(q, 2.581329108646591, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.56882224819877, 0);
  sqcRZGate(q, 1.6166490796434019, 0);
  sqcRYGate(q, -1.5684693164865982, 1);
  sqcRZGate(q, 1.572058432394753, 1);
  sqcRYGate(q, 1.5707312816614256, 2);
  sqcRZGate(q, -1.5706478441694653, 2);
  sqcRYGate(q, 1.5650406879662584, 3);
  sqcRZGate(q, -1.5703101775096382, 3);
  sqcRYGate(q, -1.5761478871076489, 4);
  sqcRZGate(q, 1.5701519954372924, 4);
  sqcRYGate(q, 5.03585219657224e-05, 5);
  sqcRZGate(q, 1.6157339349237028, 5);
  sqcRYGate(q, -1.5709663700467926, 6);
  sqcRZGate(q, -2.3318341423925513, 6);
  sqcRYGate(q, -1.5765150993573487, 7);
  sqcRZGate(q, 0.0003106364092410934, 7);
  sqcRYGate(q, -3.139151220253793, 8);
  sqcRZGate(q, -0.8875312384935938, 8);
  sqcRYGate(q, -3.134835016387624, 9);
  sqcRZGate(q, -1.7663740628028284, 9);
  sqcRYGate(q, -0.35785132335848147, 10);
  sqcRZGate(q, -1.5708421795151983, 10);
  sqcRYGate(q, 0.9466660887275493, 11);
  sqcRZGate(q, -2.43356740519983, 11);
  sqcRYGate(q, -1.1734366360094173, 12);
  sqcRZGate(q, -1.5679875286896772, 12);
  sqcRYGate(q, 0.0002831655403037203, 13);
  sqcRZGate(q, -1.6124862327074243, 13);
  sqcRYGate(q, 0.000675096245537965, 14);
  sqcRZGate(q, 1.7253856209612628, 14);
  sqcRYGate(q, -0.001165651764163833, 15);
  sqcRZGate(q, 2.643227216766093, 15);
  sqcRYGate(q, 1.5707436711166451, 16);
  sqcRZGate(q, 3.0983109259008015, 16);
  sqcRYGate(q, 1.5698074508635766, 17);
  sqcRZGate(q, 0.018067645161231383, 17);
  sqcRYGate(q, 1.2434396464083628, 18);
  sqcRZGate(q, -1.5716697531140156, 18);
  sqcRYGate(q, -1.567663072258422, 19);
  sqcRZGate(q, 2.888708592576159, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.5652649028022712, 0);
  sqcRZGate(q, 1.9205361679261062, 0);
  sqcRYGate(q, 1.3892333696753632, 1);
  sqcRZGate(q, 2.548062496313034, 1);
  sqcRYGate(q, -1.568948809190248, 2);
  sqcRZGate(q, 1.9203479833924755, 2);
  sqcRYGate(q, 1.5714662929667391, 3);
  sqcRZGate(q, 0.9778440121552731, 3);
  sqcRYGate(q, -1.5715981578616045, 4);
  sqcRZGate(q, -2.7789309747575546, 4);
  sqcRYGate(q, -1.5716865137724279, 5);
  sqcRZGate(q, -2.1625114490065167, 5);
  sqcRYGate(q, -8.067029452263341e-05, 6);
  sqcRZGate(q, -2.039779891515269, 6);
  sqcRYGate(q, 1.5711339001850557, 7);
  sqcRZGate(q, -2.1617228187831907, 7);
  sqcRYGate(q, -1.570552759759905, 8);
  sqcRZGate(q, 1.8892969960457995, 8);
  sqcRYGate(q, -1.5948664284344973, 9);
  sqcRZGate(q, 1.2165808095739536, 9);
  sqcRYGate(q, -1.5708639315608286, 10);
  sqcRZGate(q, -3.0333846360879178, 10);
  sqcRYGate(q, 3.1408697453740784, 11);
  sqcRZGate(q, -3.0266828188596415, 11);
  sqcRYGate(q, -1.5699367748234903, 12);
  sqcRZGate(q, 1.9127841555026237, 12);
  sqcRYGate(q, -1.4694165816254179, 13);
  sqcRZGate(q, 2.4163462311565485, 13);
  sqcRYGate(q, -1.5111722609356097, 14);
  sqcRZGate(q, -3.103400140202474, 14);
  sqcRYGate(q, -1.570721885958167, 15);
  sqcRZGate(q, 0.9798406757107152, 15);
  sqcRYGate(q, 6.2863073031493855e-06, 16);
  sqcRZGate(q, -2.9968987227166206, 16);
  sqcRYGate(q, -1.570512278222772, 17);
  sqcRZGate(q, -2.1621355566239666, 17);
  sqcRYGate(q, 1.570741509007867, 18);
  sqcRZGate(q, 0.11274245478623435, 18);
  sqcRYGate(q, -0.000903397996583165, 19);
  sqcRZGate(q, -1.9096328009772354, 19);

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
