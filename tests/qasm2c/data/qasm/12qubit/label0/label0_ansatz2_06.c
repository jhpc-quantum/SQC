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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 2.8946851049141125, 0);
  sqcRZGate(q, 1.6930350625867947, 0);
  sqcRYGate(q, 1.5628070594080434, 1);
  sqcRZGate(q, 0.01481927051132903, 1);
  sqcRYGate(q, 0.23936327251142764, 2);
  sqcRZGate(q, 1.6579553327461136, 2);
  sqcRYGate(q, -3.141436779369981, 3);
  sqcRZGate(q, -1.6139563777578783, 3);
  sqcRYGate(q, -0.013377064320781782, 4);
  sqcRZGate(q, 2.5570404339033295, 4);
  sqcRYGate(q, -3.137719553908896, 5);
  sqcRZGate(q, -1.9760493402345758, 5);
  sqcRYGate(q, -3.1410472469971236, 6);
  sqcRZGate(q, -0.8975756737635977, 6);
  sqcRYGate(q, 0.002351828713020865, 7);
  sqcRZGate(q, 2.518239416556208, 7);
  sqcRYGate(q, 3.1415518118581542, 8);
  sqcRZGate(q, -0.41173814538336495, 8);
  sqcRYGate(q, 0.00010918410269254292, 9);
  sqcRZGate(q, -3.1033609960857365, 9);
  sqcRYGate(q, 6.796846571788251e-06, 10);
  sqcRZGate(q, -0.9482194053256071, 10);
  sqcRYGate(q, -2.9546239620985825e-05, 11);
  sqcRZGate(q, -2.2721199895422366, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.006968423295117357, 0);
  sqcRZGate(q, -1.72111067797777, 0);
  sqcRYGate(q, -1.5839084594939559, 1);
  sqcRZGate(q, -3.0635513283323554, 1);
  sqcRYGate(q, 0.03422907509114648, 2);
  sqcRZGate(q, -1.6733549929845943, 2);
  sqcRYGate(q, 3.1386462017498746, 3);
  sqcRZGate(q, -2.922794741528869, 3);
  sqcRYGate(q, 1.9275884469279319, 4);
  sqcRZGate(q, 0.28795980649233555, 4);
  sqcRYGate(q, -0.25782490059094965, 5);
  sqcRZGate(q, -2.295315552097487, 5);
  sqcRYGate(q, -0.015344201101017417, 6);
  sqcRZGate(q, 1.6294255429310025, 6);
  sqcRYGate(q, 0.002053644023301438, 7);
  sqcRZGate(q, -1.9824771553222558, 7);
  sqcRYGate(q, 3.1415074047878915, 8);
  sqcRZGate(q, 2.0164845762302894, 8);
  sqcRYGate(q, -0.0009539183611932955, 9);
  sqcRZGate(q, 0.6755735332152618, 9);
  sqcRYGate(q, 0.0006012219388185359, 10);
  sqcRZGate(q, 2.3762643162440003, 10);
  sqcRYGate(q, -0.00033092440769799463, 11);
  sqcRZGate(q, -2.5546755131222896, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.1092480988456472, 0);
  sqcRZGate(q, 2.6901067161408396, 0);
  sqcRYGate(q, 0.08865703915840843, 1);
  sqcRZGate(q, -1.8156163998099073, 1);
  sqcRYGate(q, 0.2637136229518351, 2);
  sqcRZGate(q, 3.130881941270366, 2);
  sqcRYGate(q, 1.584036627302191, 3);
  sqcRZGate(q, 3.139512412640258, 3);
  sqcRYGate(q, -1.933323408174561, 4);
  sqcRZGate(q, 2.9724750748674795, 4);
  sqcRYGate(q, -0.13147928599673928, 5);
  sqcRZGate(q, 0.017787874764686684, 5);
  sqcRYGate(q, -3.1153592420677283, 6);
  sqcRZGate(q, 2.793932572869123, 6);
  sqcRYGate(q, 0.005843907807284054, 7);
  sqcRZGate(q, -1.326592225072365, 7);
  sqcRYGate(q, -0.0001835856123770796, 8);
  sqcRZGate(q, -0.9243232178313566, 8);
  sqcRYGate(q, 3.140127086747971, 9);
  sqcRZGate(q, -2.575028588768851, 9);
  sqcRYGate(q, -0.0028158131280980876, 10);
  sqcRZGate(q, 2.501936954714938, 10);
  sqcRYGate(q, -3.1413946959768695, 11);
  sqcRZGate(q, -1.3271426522096372, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 0.0002631356225843789, 0);
  sqcRZGate(q, 3.0980216559294065, 0);
  sqcRYGate(q, 0.00012635007195083148, 1);
  sqcRZGate(q, -0.6948378486459053, 1);
  sqcRYGate(q, -0.002595892521188338, 2);
  sqcRZGate(q, 0.053683138625437624, 2);
  sqcRYGate(q, 1.588540206722274, 3);
  sqcRZGate(q, 0.1738807723181339, 3);
  sqcRYGate(q, 3.1395474465200226, 4);
  sqcRZGate(q, -1.8749303546321507, 4);
  sqcRYGate(q, 3.139156688376196, 5);
  sqcRZGate(q, 2.6995970949847625, 5);
  sqcRYGate(q, 1.3575187891118632, 6);
  sqcRZGate(q, 0.01177070887175529, 6);
  sqcRYGate(q, 0.054275074162615886, 7);
  sqcRZGate(q, 1.5069802659741223, 7);
  sqcRYGate(q, -8.647038306689933e-06, 8);
  sqcRZGate(q, -1.2466564167797352, 8);
  sqcRYGate(q, 3.1370371344058103, 9);
  sqcRZGate(q, -0.8994120656275623, 9);
  sqcRYGate(q, -0.00044088314406215927, 10);
  sqcRZGate(q, -2.652361620545635, 10);
  sqcRYGate(q, 3.1412108821627016, 11);
  sqcRZGate(q, 2.394775628549618, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 0.000334053638034959, 0);
  sqcRZGate(q, 0.5500000391206195, 0);
  sqcRYGate(q, -3.1404830426833596, 1);
  sqcRZGate(q, -0.20705247904253465, 1);
  sqcRYGate(q, -1.1388245611629647e-05, 2);
  sqcRZGate(q, -2.1513519816212043, 2);
  sqcRYGate(q, -0.010173235851999498, 3);
  sqcRZGate(q, -2.325510561212225, 3);
  sqcRYGate(q, -3.1224344134927318, 4);
  sqcRZGate(q, -0.07057340243769161, 4);
  sqcRYGate(q, -3.051033934482971, 5);
  sqcRZGate(q, 0.3080130544290976, 5);
  sqcRYGate(q, 1.7830960960403237, 6);
  sqcRZGate(q, 1.580541446646623, 6);
  sqcRYGate(q, 1.2890515335550126, 7);
  sqcRZGate(q, -0.08958790397355187, 7);
  sqcRYGate(q, -5.117969898765197e-05, 8);
  sqcRZGate(q, 0.9702917177923858, 8);
  sqcRYGate(q, 0.036816691177251594, 9);
  sqcRZGate(q, 0.4063039788149913, 9);
  sqcRYGate(q, 0.024408858975914605, 10);
  sqcRZGate(q, 0.2876563975407844, 10);
  sqcRYGate(q, -0.0046772690367307135, 11);
  sqcRZGate(q, 0.03165644486798841, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -3.1413817381856606, 0);
  sqcRZGate(q, -0.6939142919489489, 0);
  sqcRYGate(q, 3.1395784863843543, 1);
  sqcRZGate(q, 0.33760090794816655, 1);
  sqcRYGate(q, 3.140512306067174, 2);
  sqcRZGate(q, -0.9618138335404519, 2);
  sqcRYGate(q, -0.001241639926266025, 3);
  sqcRZGate(q, -1.9974176468211087, 3);
  sqcRYGate(q, 0.02323647318526782, 4);
  sqcRZGate(q, 2.7557762142111057, 4);
  sqcRYGate(q, 2.92912273413672, 5);
  sqcRZGate(q, 0.6709817123301031, 5);
  sqcRYGate(q, 1.601332490921048, 6);
  sqcRZGate(q, -0.0023944210629588385, 6);
  sqcRYGate(q, 2.0716775524297737, 7);
  sqcRZGate(q, 1.2519455490429974, 7);
  sqcRYGate(q, 3.1415799344506428, 8);
  sqcRZGate(q, 2.922214788514485, 8);
  sqcRYGate(q, 3.13625417791436, 9);
  sqcRZGate(q, 2.7037862911670056, 9);
  sqcRYGate(q, 3.1413275985119666, 10);
  sqcRZGate(q, -0.13054266276824486, 10);
  sqcRYGate(q, -0.0002556441499574902, 11);
  sqcRZGate(q, -0.36251020337845663, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.00016518182802671233, 0);
  sqcRZGate(q, 1.711817167470672, 0);
  sqcRYGate(q, 3.1411728169400774, 1);
  sqcRZGate(q, -3.0725981431210294, 1);
  sqcRYGate(q, -0.00010860351282193648, 2);
  sqcRZGate(q, 2.597115194635075, 2);
  sqcRYGate(q, -3.138369421118709, 3);
  sqcRZGate(q, -0.43332434130825426, 3);
  sqcRYGate(q, -3.1360345292118197, 4);
  sqcRZGate(q, -2.153636406015541, 4);
  sqcRYGate(q, -0.0014257350804500746, 5);
  sqcRZGate(q, -1.7420843796050083, 5);
  sqcRYGate(q, -1.590885043061815, 6);
  sqcRZGate(q, -0.36801174706903694, 6);
  sqcRYGate(q, 0.02184885792343864, 7);
  sqcRZGate(q, -0.9428729271987147, 7);
  sqcRYGate(q, 0.00026243287016747274, 8);
  sqcRZGate(q, 2.6114076074347135, 8);
  sqcRYGate(q, 2.877570107595001, 9);
  sqcRZGate(q, -2.7482381898092747, 9);
  sqcRYGate(q, -0.6667394603491531, 10);
  sqcRZGate(q, -1.7713686927837058, 10);
  sqcRYGate(q, -0.22430892139662273, 11);
  sqcRZGate(q, 1.9403349785808608, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.00011897653292626355, 0);
  sqcRZGate(q, -1.6578788985486979, 0);
  sqcRYGate(q, 3.141288945522809, 1);
  sqcRZGate(q, 0.8516787482072513, 1);
  sqcRYGate(q, -3.141170886885371, 2);
  sqcRZGate(q, -0.29727010308687163, 2);
  sqcRYGate(q, -0.005139652773995996, 3);
  sqcRZGate(q, -2.137139743314367, 3);
  sqcRYGate(q, -3.1411255595065093, 4);
  sqcRZGate(q, 1.3023141958855577, 4);
  sqcRYGate(q, -0.0007341482413735594, 5);
  sqcRZGate(q, 0.912969323348055, 5);
  sqcRYGate(q, -0.008450547296803558, 6);
  sqcRZGate(q, -2.862426423373313, 6);
  sqcRYGate(q, 3.1259770636184547, 7);
  sqcRZGate(q, 0.31875682444932446, 7);
  sqcRYGate(q, -3.1414937909711176, 8);
  sqcRZGate(q, -0.5343079149407401, 8);
  sqcRYGate(q, -2.687741528697832, 9);
  sqcRZGate(q, 2.3907629207313708, 9);
  sqcRYGate(q, 2.8602120541339264, 10);
  sqcRZGate(q, 1.9360625871861783, 10);
  sqcRYGate(q, 0.3449502478326911, 11);
  sqcRZGate(q, -0.6305116573670562, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -3.1415240667191258, 0);
  sqcRZGate(q, -2.2927463017206064, 0);
  sqcRYGate(q, -0.0003733324128617747, 1);
  sqcRZGate(q, -0.4646472096438785, 1);
  sqcRYGate(q, 0.001040405066899932, 2);
  sqcRZGate(q, 2.482250943859147, 2);
  sqcRYGate(q, -3.1412731334257322, 3);
  sqcRZGate(q, -0.05194307806303122, 3);
  sqcRYGate(q, 0.012964936961467721, 4);
  sqcRZGate(q, -1.4395614593091688, 4);
  sqcRYGate(q, 0.033413067314613416, 5);
  sqcRZGate(q, -1.3952198635713975, 5);
  sqcRYGate(q, -3.05486706017875, 6);
  sqcRZGate(q, 1.4673230401580897, 6);
  sqcRYGate(q, -0.24917105302446707, 7);
  sqcRZGate(q, 1.8588895855940013, 7);
  sqcRYGate(q, -1.5703649845789291, 8);
  sqcRZGate(q, 1.5705740265857255, 8);
  sqcRYGate(q, 2.667827501025674, 9);
  sqcRZGate(q, 1.8511577563663488, 9);
  sqcRYGate(q, 2.5742366901826794, 10);
  sqcRZGate(q, -0.16229280672603413, 10);
  sqcRYGate(q, -0.24178541079209384, 11);
  sqcRZGate(q, -2.9076824718390553, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 1.5708137958283457, 0);
  sqcRZGate(q, 3.1415847582862346, 0);
  sqcRYGate(q, -1.57087659883845, 1);
  sqcRZGate(q, -3.1415732417238416, 1);
  sqcRYGate(q, -1.5708745578334335, 2);
  sqcRZGate(q, 1.0300245762413642e-05, 2);
  sqcRYGate(q, 1.5705573736027443, 3);
  sqcRZGate(q, 3.1415382658021143, 3);
  sqcRYGate(q, 1.5708158185430443, 4);
  sqcRZGate(q, 3.1415235250897644, 4);
  sqcRYGate(q, -1.5707758446798332, 5);
  sqcRZGate(q, 1.0244114206692245e-05, 5);
  sqcRYGate(q, 1.5707157351316239, 6);
  sqcRZGate(q, 3.862471138482704e-06, 6);
  sqcRYGate(q, -1.5707132147205647, 7);
  sqcRZGate(q, 5.491905710641731e-05, 7);
  sqcRYGate(q, 1.246345451418445, 8);
  sqcRZGate(q, 1.571123503592517, 8);
  sqcRYGate(q, -1.5708333075760377, 9);
  sqcRZGate(q, 3.981627165128287e-05, 9);
  sqcRYGate(q, -1.5707663930371494, 10);
  sqcRZGate(q, 3.141579831400517, 10);
  sqcRYGate(q, -1.5708536542113736, 11);
  sqcRZGate(q, 1.8175992005041894e-05, 11);

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
