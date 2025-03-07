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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -1.5660392327963581, 0);
  sqcRZGate(q, -3.122528188088242, 0);
  sqcRYGate(q, 1.5758330253224955, 1);
  sqcRZGate(q, 3.1350963047291267, 1);
  sqcRYGate(q, 0.9190445304885353, 2);
  sqcRZGate(q, 3.0298125076142868, 2);
  sqcRYGate(q, 1.9244060114493062, 3);
  sqcRZGate(q, -0.6713905570720476, 3);
  sqcRYGate(q, 2.7030300994586334, 4);
  sqcRZGate(q, -1.0796848078515338, 4);
  sqcRYGate(q, 3.069058157449362, 5);
  sqcRZGate(q, 1.6652355859066779, 5);
  sqcRYGate(q, 2.5705293943309817, 6);
  sqcRZGate(q, -1.6143952015235374, 6);
  sqcRYGate(q, -1.9330177140744036, 7);
  sqcRZGate(q, 2.7030987398640076, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.28187580923155453, 0);
  sqcRZGate(q, -2.438469374979438, 0);
  sqcRYGate(q, -1.4035443592904246, 1);
  sqcRZGate(q, -1.5658058845407998, 1);
  sqcRYGate(q, 1.4398977617749216, 2);
  sqcRZGate(q, 2.9299602613970412, 2);
  sqcRYGate(q, -0.8645876101161221, 3);
  sqcRZGate(q, -2.6917338986082386, 3);
  sqcRYGate(q, -0.9681140076676016, 4);
  sqcRZGate(q, -2.639819316562055, 4);
  sqcRYGate(q, 0.5681595841817014, 5);
  sqcRZGate(q, -2.0364052402027184, 5);
  sqcRYGate(q, 0.8418818413491844, 6);
  sqcRZGate(q, -1.2618817663143211, 6);
  sqcRYGate(q, -1.5752730232213379, 7);
  sqcRZGate(q, -1.8527083534892288, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.0074813101787496224, 0);
  sqcRZGate(q, 2.413849002945507, 0);
  sqcRYGate(q, -2.6989702221583856, 1);
  sqcRZGate(q, -1.5820463705677117, 1);
  sqcRYGate(q, 2.3502823212581556, 2);
  sqcRZGate(q, -0.6178579127813145, 2);
  sqcRYGate(q, -1.3356539778634062, 3);
  sqcRZGate(q, 1.077395356793502, 3);
  sqcRYGate(q, 0.34522794414138497, 4);
  sqcRZGate(q, -1.1051015648654159, 4);
  sqcRYGate(q, 2.9331241128396925, 5);
  sqcRZGate(q, -1.9273854377018163, 5);
  sqcRYGate(q, 0.9290825068162542, 6);
  sqcRZGate(q, 0.33526280177691165, 6);
  sqcRYGate(q, -3.068325771878981, 7);
  sqcRZGate(q, -3.055850646642586, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.376999020334213, 0);
  sqcRZGate(q, -1.2611872554998422, 0);
  sqcRYGate(q, 0.5954378465821267, 1);
  sqcRZGate(q, 1.5835476514574784, 1);
  sqcRYGate(q, -2.660630512474476, 2);
  sqcRZGate(q, -1.4689800589605053, 2);
  sqcRYGate(q, -0.638737776692774, 3);
  sqcRZGate(q, -2.3714410331851936, 3);
  sqcRYGate(q, -1.4727663212536943, 4);
  sqcRZGate(q, -1.3850982896202675, 4);
  sqcRYGate(q, 1.968182260746187, 5);
  sqcRZGate(q, 1.1090475085503346, 5);
  sqcRYGate(q, 0.3434390755493215, 6);
  sqcRZGate(q, 0.9014741608543257, 6);
  sqcRYGate(q, -2.9067138336105063, 7);
  sqcRZGate(q, 2.060428186890702, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.014090766589288234, 0);
  sqcRZGate(q, 1.2736882951951607, 0);
  sqcRYGate(q, 1.509366422004634, 1);
  sqcRZGate(q, 2.002568174152625, 1);
  sqcRYGate(q, 2.6408349846940866, 2);
  sqcRZGate(q, -0.7913587113790304, 2);
  sqcRYGate(q, -0.242181145519385, 3);
  sqcRZGate(q, -2.547848783156197, 3);
  sqcRYGate(q, 1.2410748961773503, 4);
  sqcRZGate(q, 1.8572854122494231, 4);
  sqcRYGate(q, -3.000687378807459, 5);
  sqcRZGate(q, 1.5089182504494605, 5);
  sqcRYGate(q, 0.42186353214397565, 6);
  sqcRZGate(q, 1.506884536943305, 6);
  sqcRYGate(q, 1.1965659310197738, 7);
  sqcRZGate(q, -2.652414107096744, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.8220931175444335, 0);
  sqcRZGate(q, 1.5778335105526002, 0);
  sqcRYGate(q, -3.126126792082031, 1);
  sqcRZGate(q, -1.1316082975833153, 1);
  sqcRYGate(q, -1.7353062538916975, 2);
  sqcRZGate(q, -0.6727659583371698, 2);
  sqcRYGate(q, -1.6446640388035494, 3);
  sqcRZGate(q, -0.2698605215212043, 3);
  sqcRYGate(q, -0.7228218775224312, 4);
  sqcRZGate(q, -1.1224419150244889, 4);
  sqcRYGate(q, -2.951698512380599, 5);
  sqcRZGate(q, -1.2957694296010818, 5);
  sqcRYGate(q, -1.4411045199844492, 6);
  sqcRZGate(q, -2.6930257426369018, 6);
  sqcRYGate(q, -0.5532432700391405, 7);
  sqcRZGate(q, -0.6548517067635878, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.811673161943495, 0);
  sqcRZGate(q, -1.4937046483164442, 0);
  sqcRYGate(q, -0.20412665665759366, 1);
  sqcRZGate(q, -1.50004511659032, 1);
  sqcRYGate(q, 2.20075619688199, 2);
  sqcRZGate(q, 3.0586025307568003, 2);
  sqcRYGate(q, -1.907187779341351, 3);
  sqcRZGate(q, 0.7022216835245046, 3);
  sqcRYGate(q, 1.5998504812356955, 4);
  sqcRZGate(q, 0.8333454547994829, 4);
  sqcRYGate(q, 2.6744578045909155, 5);
  sqcRZGate(q, -0.8850292267477118, 5);
  sqcRYGate(q, -0.39694754854734354, 6);
  sqcRZGate(q, -2.8305892736445033, 6);
  sqcRYGate(q, -1.7899102094939288, 7);
  sqcRZGate(q, 0.9952554594702557, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.07984011989411677, 0);
  sqcRZGate(q, -1.653713945160203, 0);
  sqcRYGate(q, -0.12205961265012633, 1);
  sqcRZGate(q, 1.0981253574935275, 1);
  sqcRYGate(q, -2.7251842506869943, 2);
  sqcRZGate(q, 1.4988227895417492, 2);
  sqcRYGate(q, -2.8277144507532985, 3);
  sqcRZGate(q, 1.1758265371898893, 3);
  sqcRYGate(q, 2.187870855826959, 4);
  sqcRZGate(q, -2.4676187990530045, 4);
  sqcRYGate(q, -1.482418643239016, 5);
  sqcRZGate(q, 0.6278837120925534, 5);
  sqcRYGate(q, 2.6295275826080515, 6);
  sqcRZGate(q, 2.629331476120404, 6);
  sqcRYGate(q, 0.744559016079455, 7);
  sqcRZGate(q, -0.38993325878136886, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.7925794717635696, 0);
  sqcRZGate(q, 2.166462645664027, 0);
  sqcRYGate(q, 0.00470123546639607, 1);
  sqcRZGate(q, -1.181775961361078, 1);
  sqcRYGate(q, -1.5224037620859834, 2);
  sqcRZGate(q, 0.9062911954870082, 2);
  sqcRYGate(q, 2.616295014083101, 3);
  sqcRZGate(q, -2.8609703230479577, 3);
  sqcRYGate(q, 2.245998624764936, 4);
  sqcRZGate(q, 0.6774911841138301, 4);
  sqcRYGate(q, 1.1168865107064185, 5);
  sqcRZGate(q, -2.8713444195365305, 5);
  sqcRYGate(q, 1.2116427815699407, 6);
  sqcRZGate(q, 2.850766851792668, 6);
  sqcRYGate(q, 0.04990083392171662, 7);
  sqcRZGate(q, -2.387044562516829, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -3.136839893547425, 0);
  sqcRZGate(q, 2.1575138755229566, 0);
  sqcRYGate(q, -1.4404039406723577, 1);
  sqcRZGate(q, 1.5695033227237172, 1);
  sqcRYGate(q, 2.8230770425834986, 2);
  sqcRZGate(q, 1.1621243633800296, 2);
  sqcRYGate(q, -2.2298114245506633, 3);
  sqcRZGate(q, -0.805307397970541, 3);
  sqcRYGate(q, -0.9927471033903421, 4);
  sqcRZGate(q, -0.2686895373145992, 4);
  sqcRYGate(q, 0.936779232575554, 5);
  sqcRZGate(q, -2.882563612196972, 5);
  sqcRYGate(q, -2.1957143654779543, 6);
  sqcRZGate(q, -2.7946390084275623, 6);
  sqcRYGate(q, 2.5194124366627, 7);
  sqcRZGate(q, 2.9414083697757487, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.373807103901553, 0);
  sqcRZGate(q, -2.5272367593585447, 0);
  sqcRYGate(q, -1.9787070648431224, 1);
  sqcRZGate(q, -1.5554285685223137, 1);
  sqcRYGate(q, -2.362333645281581, 2);
  sqcRZGate(q, 2.4956018290909894, 2);
  sqcRYGate(q, 0.3520435986695007, 3);
  sqcRZGate(q, 0.3261888381711158, 3);
  sqcRYGate(q, -1.1668729345174198, 4);
  sqcRZGate(q, 1.8341114787002377, 4);
  sqcRYGate(q, -0.5238555798265945, 5);
  sqcRZGate(q, -1.420946230878785, 5);
  sqcRYGate(q, 1.4666037420794105, 6);
  sqcRZGate(q, -2.9100864185853554, 6);
  sqcRYGate(q, 0.8653260860127618, 7);
  sqcRZGate(q, -1.1567237920069369, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.014152875857177328, 0);
  sqcRZGate(q, 1.9517119845599888, 0);
  sqcRYGate(q, -2.978916179709507, 1);
  sqcRZGate(q, 1.5875225745643116, 1);
  sqcRYGate(q, -0.690103928475005, 2);
  sqcRZGate(q, -1.389222609836522, 2);
  sqcRYGate(q, -0.09659392383738791, 3);
  sqcRZGate(q, -1.7314169187556794, 3);
  sqcRYGate(q, 0.02461098513573745, 4);
  sqcRZGate(q, -1.5707456460060933, 4);
  sqcRYGate(q, 1.3826647047319307, 5);
  sqcRZGate(q, -1.48955893869569, 5);
  sqcRYGate(q, -0.9496030882629647, 6);
  sqcRZGate(q, 0.6503157374224234, 6);
  sqcRYGate(q, -1.202510704795327, 7);
  sqcRZGate(q, -0.4605473387800849, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 3.135706603917208, 0);
  sqcRZGate(q, 2.772578904289897, 0);
  sqcRYGate(q, -0.29875232926522544, 1);
  sqcRZGate(q, -1.5654817647909323, 1);
  sqcRYGate(q, 0.0653609346972832, 2);
  sqcRZGate(q, -0.9862756033956419, 2);
  sqcRYGate(q, 2.8467386280434885, 3);
  sqcRZGate(q, -1.7710212626310309, 3);
  sqcRYGate(q, 2.099294204663012, 4);
  sqcRZGate(q, -2.1468309709063864, 4);
  sqcRYGate(q, -1.6956665552746908, 5);
  sqcRZGate(q, 0.621200619312023, 5);
  sqcRYGate(q, 3.058995748122503, 6);
  sqcRZGate(q, 1.83543980733077, 6);
  sqcRYGate(q, -0.7992419017029109, 7);
  sqcRZGate(q, -1.4049302597492006, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 3.1400344666089834, 0);
  sqcRZGate(q, -0.2979560899357337, 0);
  sqcRYGate(q, 0.8639093195293643, 1);
  sqcRZGate(q, 1.5771968402786793, 1);
  sqcRYGate(q, 1.1394843720056491, 2);
  sqcRZGate(q, -0.3590692934469004, 2);
  sqcRYGate(q, 0.17091200661353986, 3);
  sqcRZGate(q, -2.499630642293653, 3);
  sqcRYGate(q, 1.014501884471909, 4);
  sqcRZGate(q, 1.0935121715753922, 4);
  sqcRYGate(q, 1.6359006640392666, 5);
  sqcRZGate(q, -2.269914870825417, 5);
  sqcRYGate(q, -0.874816795735945, 6);
  sqcRZGate(q, 1.375666274074912, 6);
  sqcRYGate(q, -2.686322814436415, 7);
  sqcRZGate(q, -0.6875057382862151, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.007448956011771627, 0);
  sqcRZGate(q, -1.076101449025933, 0);
  sqcRYGate(q, -1.625390042553296, 1);
  sqcRZGate(q, -1.5633855113597885, 1);
  sqcRYGate(q, -1.01875680596915, 2);
  sqcRZGate(q, -0.8760623619379775, 2);
  sqcRYGate(q, 2.09078240726807, 3);
  sqcRZGate(q, -1.5319409881826314, 3);
  sqcRYGate(q, 1.613394441922917, 4);
  sqcRZGate(q, 3.1178807370480155, 4);
  sqcRYGate(q, -1.6520095009058728, 5);
  sqcRZGate(q, 2.4413107385446, 5);
  sqcRYGate(q, -2.135700307965813, 6);
  sqcRZGate(q, -0.030801277280809284, 6);
  sqcRYGate(q, -2.660600064665663, 7);
  sqcRZGate(q, 1.0854238561463472, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.6884775367016633, 0);
  sqcRZGate(q, -1.551075490326211, 0);
  sqcRYGate(q, 1.6466059791337937, 1);
  sqcRZGate(q, -1.555332082614088, 1);
  sqcRYGate(q, 0.04009646641001001, 2);
  sqcRZGate(q, 1.8513634201852878, 2);
  sqcRYGate(q, -0.7910947246016062, 3);
  sqcRZGate(q, 0.5725888663154075, 3);
  sqcRYGate(q, 1.7687013287641793, 4);
  sqcRZGate(q, -2.6947304035438995, 4);
  sqcRYGate(q, -3.0732404639682325, 5);
  sqcRZGate(q, 0.9042428043488098, 5);
  sqcRYGate(q, 1.820544888638569, 6);
  sqcRZGate(q, 1.9599669229551593, 6);
  sqcRYGate(q, 1.7700616840224472, 7);
  sqcRZGate(q, 0.3478684813732455, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.7313758092609928, 0);
  sqcRZGate(q, -1.5717328702351507, 0);
  sqcRYGate(q, -2.5245289072699304, 1);
  sqcRZGate(q, 1.5566809738233114, 1);
  sqcRYGate(q, -1.7462812905401446, 2);
  sqcRZGate(q, 2.061661428664421, 2);
  sqcRYGate(q, 0.46648147288186337, 3);
  sqcRZGate(q, 1.6167694338894916, 3);
  sqcRYGate(q, -2.444746239663928, 4);
  sqcRZGate(q, -2.1783592547141084, 4);
  sqcRYGate(q, 2.4854132724177345, 5);
  sqcRZGate(q, -1.8396483148279565, 5);
  sqcRYGate(q, -1.2450489162489218, 6);
  sqcRZGate(q, -2.568485126198904, 6);
  sqcRYGate(q, 1.2437664652975204, 7);
  sqcRZGate(q, 1.3844267298537671, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.401164016216336, 0);
  sqcRZGate(q, -0.8730362362743421, 0);
  sqcRYGate(q, 1.472256395833298, 1);
  sqcRZGate(q, 1.4315899457156238, 1);
  sqcRYGate(q, 1.1344933512778388, 2);
  sqcRZGate(q, 0.4014962777326429, 2);
  sqcRYGate(q, -0.771626156027807, 3);
  sqcRZGate(q, 2.69438531406666, 3);
  sqcRYGate(q, -1.958681203818652, 4);
  sqcRZGate(q, 2.24210335426199, 4);
  sqcRYGate(q, 1.1667684624017274, 5);
  sqcRZGate(q, 1.048689383562527, 5);
  sqcRYGate(q, -2.2509722698167955, 6);
  sqcRZGate(q, -0.5368245807019657, 6);
  sqcRYGate(q, 0.5323707027840792, 7);
  sqcRZGate(q, 3.108369057063944, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -3.122066775684576, 0);
  sqcRZGate(q, 0.4683389809271494, 0);
  sqcRYGate(q, -0.08807193741014352, 1);
  sqcRZGate(q, 3.0562369251636783, 1);
  sqcRYGate(q, -0.5602066483143756, 2);
  sqcRZGate(q, 2.6255042774097794, 2);
  sqcRYGate(q, -0.7786195351546804, 3);
  sqcRZGate(q, -2.893830933543243, 3);
  sqcRYGate(q, 1.6052501947678364, 4);
  sqcRZGate(q, -2.8639535966720064, 4);
  sqcRYGate(q, -1.2976889572679262, 5);
  sqcRZGate(q, 0.9490111508200082, 5);
  sqcRYGate(q, -0.15147260930634232, 6);
  sqcRZGate(q, -0.8892954955339102, 6);
  sqcRYGate(q, 1.2354357441340853, 7);
  sqcRZGate(q, -2.9988000515632796, 7);

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
