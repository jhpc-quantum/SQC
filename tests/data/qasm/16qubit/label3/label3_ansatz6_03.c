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

  sqcRYGate(q, -2.197534382717536, 0);
  sqcRYGate(q, 1.5727786137037267, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.22398042235407437, 0);
  sqcRYGate(q, 0.48133270816892804, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.431419501860898, 1);
  sqcRYGate(q, -0.8259021973589009, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.044148973301122, 1);
  sqcRYGate(q, -2.1841019127754953, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.03516353720340573, 2);
  sqcRYGate(q, -0.5227010585670673, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.963462832330297, 2);
  sqcRYGate(q, 1.307350479399032, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.08913762066094026, 3);
  sqcRYGate(q, -1.329160848056558, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.1515535379169792, 3);
  sqcRYGate(q, 1.3669695578858025, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9573345545324162, 4);
  sqcRYGate(q, -1.4250269261573698, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9363040759598862, 4);
  sqcRYGate(q, -3.034480867334122, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.835874670803895, 5);
  sqcRYGate(q, 1.8235522726062872, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.584163270699682, 5);
  sqcRYGate(q, -1.271739439116506, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.11086758649931028, 6);
  sqcRYGate(q, -2.9478607047379315, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6435414781716784, 6);
  sqcRYGate(q, 1.4002408332522407, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1216000635996437, 7);
  sqcRYGate(q, -1.6508396790000175, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.600950892952169, 7);
  sqcRYGate(q, 0.5309918651704031, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.4871559194765318, 8);
  sqcRYGate(q, 1.6107518248942618, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.024994756804424867, 8);
  sqcRYGate(q, -1.725648371592043, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.8843029351993703, 9);
  sqcRYGate(q, 2.2353963698250645, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.4568949147288128, 9);
  sqcRYGate(q, 3.033798335423144, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.0984023761650281, 10);
  sqcRYGate(q, -1.1443775807822074, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.985517507004343, 10);
  sqcRYGate(q, 1.2163198680465894, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6135458064395805, 11);
  sqcRYGate(q, 1.5761930678486304, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.399987757377311, 11);
  sqcRYGate(q, -0.003359268153165118, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.625594806742049, 12);
  sqcRYGate(q, -0.03988282045276836, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.4527765594563125, 12);
  sqcRYGate(q, -1.832447237675085, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.1786685697100632, 13);
  sqcRYGate(q, 1.013091969734714, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.0689421875356504, 13);
  sqcRYGate(q, -2.505888996424002, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.0429175769903904, 14);
  sqcRYGate(q, 1.1735744795069976, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.1541139106110292, 14);
  sqcRYGate(q, -3.0325721549239515, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.0271296506693008, 0);
  sqcRYGate(q, -2.845307765549735, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.035965755960622, 0);
  sqcRYGate(q, 0.5499680620631704, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6709872287255565, 1);
  sqcRYGate(q, -2.4545512626887858, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3773132309849778, 1);
  sqcRYGate(q, 1.1673753038422598, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.714971858833511, 2);
  sqcRYGate(q, -1.0835268065725092, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6681151825363396, 2);
  sqcRYGate(q, 1.8675658569093383, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.094607628363884, 3);
  sqcRYGate(q, -2.9486607578995443, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0502615733886298, 3);
  sqcRYGate(q, 1.473911255302638, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.20506989335655224, 4);
  sqcRYGate(q, -0.07836265515733043, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.647503753981284, 4);
  sqcRYGate(q, -1.5518347901915028, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.743557802759463, 5);
  sqcRYGate(q, 1.6868342431963648, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6163786787942136, 5);
  sqcRYGate(q, -1.567907209571497, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6009436811206834, 6);
  sqcRYGate(q, -0.04050933247087922, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.596835710294089, 6);
  sqcRYGate(q, -1.646278290825362, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.31784350388987, 7);
  sqcRYGate(q, -1.5763384459445176, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5705643371132592, 7);
  sqcRYGate(q, 2.8793887373533162, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.4612657582452742, 8);
  sqcRYGate(q, -3.079762824197279, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.392363111222215, 8);
  sqcRYGate(q, 1.5287700575806773, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.430911418479318, 9);
  sqcRYGate(q, -0.05361677263918807, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.4502711125071643, 9);
  sqcRYGate(q, -1.521967908275675, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.077911283951496, 10);
  sqcRYGate(q, -2.001212732314524, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.60287483897039, 10);
  sqcRYGate(q, -1.6993623670574165, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.3601302569057205, 11);
  sqcRYGate(q, -1.0421631603824328, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.015549435559535465, 11);
  sqcRYGate(q, -1.7478438858520984, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.5838383460973113, 12);
  sqcRYGate(q, 0.602903077189759, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.7376856934806975, 12);
  sqcRYGate(q, 0.25874351901686143, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.514559481265408, 13);
  sqcRYGate(q, 2.574534574199807, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.13036142068193654, 13);
  sqcRYGate(q, -2.687967220146561, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.6808140164111813, 14);
  sqcRYGate(q, -2.7427136998063237, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.271958982623922, 14);
  sqcRYGate(q, -1.5663615347856812, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.5828744013391827, 0);
  sqcRYGate(q, -2.68506844151061, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2401417930242196, 0);
  sqcRYGate(q, 2.0186568602306876, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1484021239392104, 1);
  sqcRYGate(q, 2.7897781662183294, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.460124631416487, 1);
  sqcRYGate(q, 2.3802514654275138, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6264521095216296, 2);
  sqcRYGate(q, -3.1353121696426176, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2756451107963746, 2);
  sqcRYGate(q, -1.5166966896003196, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.03423942394026135, 3);
  sqcRYGate(q, -0.32172316816173824, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.104250248328443, 3);
  sqcRYGate(q, -1.755649603612146, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.74102052817564, 4);
  sqcRYGate(q, 1.5055289928461946, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0376202678032316, 4);
  sqcRYGate(q, -2.8201350869239903, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1402915373621227, 5);
  sqcRYGate(q, 2.5122148736777734, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0549160485836815, 5);
  sqcRYGate(q, -1.3456211925325938, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6102886235573255, 6);
  sqcRYGate(q, 3.1224264557443395, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5963771805476874, 6);
  sqcRYGate(q, -1.4891378800651456, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.962139436876282, 7);
  sqcRYGate(q, -1.7790032100023072, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5664232806785447, 7);
  sqcRYGate(q, 3.136891455373304, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.17995012997653717, 8);
  sqcRYGate(q, -1.5737808991376934, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5729295267389027, 8);
  sqcRYGate(q, 3.13997537077495, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6011027054632543, 9);
  sqcRYGate(q, 1.7615740727978597, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6270661434896843, 9);
  sqcRYGate(q, 0.35869203425353197, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.8289448145236931, 10);
  sqcRYGate(q, 1.5720613055988562, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.049401690004042, 10);
  sqcRYGate(q, 0.003960549094138344, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.4792338951632735, 11);
  sqcRYGate(q, 2.856101282238905, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5547546567394628, 11);
  sqcRYGate(q, -0.18887795822888442, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5759821470812891, 12);
  sqcRYGate(q, -0.5487378165339241, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5847444000808395, 12);
  sqcRYGate(q, 2.865986702755518, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5773934204696498, 13);
  sqcRYGate(q, -3.0372778548794095, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.09801264031612433, 13);
  sqcRYGate(q, -1.580971228867699, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.6431809509738677, 14);
  sqcRYGate(q, 0.935054737826716, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.02265297052148098, 14);
  sqcRYGate(q, -1.9505195428776805, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.10226767024429533, 0);
  sqcRYGate(q, -1.8827428444167398, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.941277089362026, 0);
  sqcRYGate(q, -2.7941534354145876, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1205222501624448, 1);
  sqcRYGate(q, 0.3555257497740607, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.182482416777864, 1);
  sqcRYGate(q, 2.5975680892236683, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.921100812652131, 2);
  sqcRYGate(q, 1.5865736197738214, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4134684639946797, 2);
  sqcRYGate(q, 0.13358991088576655, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.217366397766841, 3);
  sqcRYGate(q, 0.3130050020131673, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.012326214164232232, 3);
  sqcRYGate(q, 2.921203545695674, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0093249226814827, 4);
  sqcRYGate(q, -0.13108919776508543, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.012289720002411464, 4);
  sqcRYGate(q, -2.986520644254026, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0580094356643093, 5);
  sqcRYGate(q, -3.027968158371925, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.606512194429147, 5);
  sqcRYGate(q, 1.6450314022031927, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.021371586495812743, 6);
  sqcRYGate(q, -1.9179757173250531, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.124436879403217, 6);
  sqcRYGate(q, 1.5660225628221458, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8857805369607448, 7);
  sqcRYGate(q, 2.8021752985387742, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.8185914109120496, 7);
  sqcRYGate(q, 1.5868959959794546, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.054964713460094, 8);
  sqcRYGate(q, 1.2324040547117248, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.94672195451014, 8);
  sqcRYGate(q, 1.5878197114310457, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.44737044182586067, 9);
  sqcRYGate(q, 0.6306335494747243, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3611909034975989, 9);
  sqcRYGate(q, 1.5843577672515394, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.26568610636296, 10);
  sqcRYGate(q, 0.09196889283462728, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5815799000357815, 10);
  sqcRYGate(q, 1.5713210460245564, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5733923617008685, 11);
  sqcRYGate(q, -1.567848464157688, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5534878701327188, 11);
  sqcRYGate(q, -1.6027746458920202, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5758164430334403, 12);
  sqcRYGate(q, -1.8016302896236849, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.1132836564526287, 12);
  sqcRYGate(q, 2.120974227190626, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.8079232837049957, 13);
  sqcRYGate(q, -1.773028201753519, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.4757836343661808, 13);
  sqcRYGate(q, 2.8883782826110225, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.016109467019403745, 14);
  sqcRYGate(q, 0.2805372263421697, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.0006470190653051202, 14);
  sqcRYGate(q, -1.569828623908216, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.205215008123016, 0);
  sqcRYGate(q, 0.16243734394963916, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6644715407842456, 0);
  sqcRYGate(q, 0.0069181985037457495, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.15602404636915565, 1);
  sqcRYGate(q, 3.046048238337943, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0418978289141894, 1);
  sqcRYGate(q, -1.4844080727942188, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1251681914771995, 2);
  sqcRYGate(q, -2.7917366539026918, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5573259135044395, 2);
  sqcRYGate(q, -1.561218245046459, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4739379588654558, 3);
  sqcRYGate(q, -0.28889378227956536, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7990624440261778, 3);
  sqcRYGate(q, -2.187359301174114, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4749233101591563, 4);
  sqcRYGate(q, -0.6503077367365107, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.02172348070328667, 4);
  sqcRYGate(q, -0.04038971520072643, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9508832681759892, 5);
  sqcRYGate(q, 3.14145542688613, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4238830425632614, 5);
  sqcRYGate(q, 0.397705049094224, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.3398215017878361, 6);
  sqcRYGate(q, -0.4535738214062306, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1405502445049094, 6);
  sqcRYGate(q, 3.128343907199788, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5268730740383276, 7);
  sqcRYGate(q, -0.0038151356355147215, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6074092284364612, 7);
  sqcRYGate(q, 3.0373933920126954, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.5594395731062934, 8);
  sqcRYGate(q, 1.5835623714862006, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5667288525548817, 8);
  sqcRYGate(q, -3.1391783774118496, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.4622735879761803, 9);
  sqcRYGate(q, -1.7113760863880945, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.0322244017204283, 9);
  sqcRYGate(q, -0.020236867760597948, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.385657568736892, 10);
  sqcRYGate(q, 1.4928627415044133, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.5652156446304004, 10);
  sqcRYGate(q, 0.08730596214988041, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.252420108637983, 11);
  sqcRYGate(q, 1.6307952576883353, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.020642598081615823, 11);
  sqcRYGate(q, -3.1381335673499002, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.6378131475344686, 12);
  sqcRYGate(q, 3.135121537510437, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.592642939538453, 12);
  sqcRYGate(q, -1.7738754597634203, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.137452937309019, 13);
  sqcRYGate(q, 1.207240780694093, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5011865663399524, 13);
  sqcRYGate(q, -1.5713867650732585, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.0812916376685033, 14);
  sqcRYGate(q, -1.2916160717420544, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.5739261249720724, 14);
  sqcRYGate(q, 1.5689462846364153, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.049732568811837, 0);
  sqcRYGate(q, -2.739638648368026, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8701711578880174, 0);
  sqcRYGate(q, 1.9209402139124423, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2078000909053754, 1);
  sqcRYGate(q, -1.5633496783691507, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5644983189098998, 1);
  sqcRYGate(q, 1.573513328452739, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.253210154215491, 2);
  sqcRYGate(q, 1.3570922077128547, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9732877074520556, 2);
  sqcRYGate(q, -3.122631574518394, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10563829133414838, 3);
  sqcRYGate(q, 0.005216089621191554, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5908849272290866, 3);
  sqcRYGate(q, 1.15879779500556, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0819969039323256, 4);
  sqcRYGate(q, 1.5436675385562042, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.687630649817897, 4);
  sqcRYGate(q, -3.129546249854459, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.04923288239313915, 5);
  sqcRYGate(q, -0.22309501288736389, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5628507430663863, 5);
  sqcRYGate(q, -1.5774490078268402, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.34411312426254437, 6);
  sqcRYGate(q, 1.3941862562590632, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.710288701959158, 6);
  sqcRYGate(q, -3.1371135597205035, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.02003627318395735, 7);
  sqcRYGate(q, -2.8809035463559884, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5643693584600549, 7);
  sqcRYGate(q, 1.5390577443842632, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.202588634082765, 8);
  sqcRYGate(q, 1.6120072898264697, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.107062016904831, 8);
  sqcRYGate(q, 3.1275726531554153, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.204422044963315, 9);
  sqcRYGate(q, -2.6501512916321124, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.045999137541191, 9);
  sqcRYGate(q, -0.024480593662191907, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.13206156005586178, 10);
  sqcRYGate(q, 0.8054189140469096, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.05524296536592033, 10);
  sqcRYGate(q, 1.6416186812601614, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.9905246139584256, 11);
  sqcRYGate(q, -3.121136800441348, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5720759939879116, 11);
  sqcRYGate(q, 1.5703599685055751, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.7066799283832168, 12);
  sqcRYGate(q, -1.7458210821641922, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.02690459743933815, 12);
  sqcRYGate(q, -3.121581730715395, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.6458443572050858, 13);
  sqcRYGate(q, 0.0037204670562332957, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5696773998709688, 13);
  sqcRYGate(q, 1.5738929074582249, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.0003143179562491327, 14);
  sqcRYGate(q, 2.3669873132789543, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.1374097630805884, 14);
  sqcRYGate(q, -1.575056115292841, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.43137432317817, 0);
  sqcRYGate(q, -2.003674051690994, 1);
  sqcRYGate(q, -1.1830607520698926, 2);
  sqcRYGate(q, -0.9691680528684312, 3);
  sqcRYGate(q, 1.944380279766535, 4);
  sqcRYGate(q, 1.6814264563809822, 5);
  sqcRYGate(q, 0.004597137750559491, 6);
  sqcRYGate(q, 0.8294465789544886, 7);
  sqcRYGate(q, 1.6971539452438995, 8);
  sqcRYGate(q, -1.0636234644298783, 9);
  sqcRYGate(q, -0.633091409393316, 10);
  sqcRYGate(q, 0.9548824123412389, 11);
  sqcRYGate(q, -2.016731055739326, 12);
  sqcRYGate(q, 0.9538831434526462, 13);
  sqcRYGate(q, 2.5586588170074567, 14);
  sqcRYGate(q, -2.961770610490862, 15);

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
