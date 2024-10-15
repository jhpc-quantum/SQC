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

  sqcRYGate(q, 2.859120377921151, 0);
  sqcRZGate(q, 0.050028657184697956, 0);
  sqcRYGate(q, -1.5622408218338029, 1);
  sqcRZGate(q, 1.3199537737278164, 1);
  sqcRYGate(q, 1.5874563428890263, 2);
  sqcRZGate(q, -1.5995853367662107, 2);
  sqcRYGate(q, -1.5902828358020134, 3);
  sqcRZGate(q, -1.3361412423954784, 3);
  sqcRYGate(q, 1.8199848522670923, 4);
  sqcRZGate(q, 0.45776605202560267, 4);
  sqcRYGate(q, -2.9430928292289753, 5);
  sqcRZGate(q, -2.4644808510751988, 5);
  sqcRYGate(q, 2.769065648117431, 6);
  sqcRZGate(q, 0.22890648630756338, 6);
  sqcRYGate(q, 2.055381749529404, 7);
  sqcRZGate(q, 0.5768193459706863, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.838096285212368, 0);
  sqcRZGate(q, -1.3028345666181265, 0);
  sqcRYGate(q, 0.023117456640551107, 1);
  sqcRZGate(q, 1.8887597247954062, 1);
  sqcRYGate(q, 0.3567655815547914, 2);
  sqcRZGate(q, 1.571532567687208, 2);
  sqcRYGate(q, -0.004157370919034342, 3);
  sqcRZGate(q, 2.2567385159881646, 3);
  sqcRYGate(q, -0.00011782098095469706, 4);
  sqcRZGate(q, 2.392368849528989, 4);
  sqcRYGate(q, -0.006996519822632573, 5);
  sqcRZGate(q, 0.3949899449615901, 5);
  sqcRYGate(q, -3.1334565924174997, 6);
  sqcRZGate(q, -2.372047128892587, 6);
  sqcRYGate(q, -0.9098711686265153, 7);
  sqcRZGate(q, 1.3443296805651084, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 3.108955568235217, 0);
  sqcRZGate(q, 0.8186866914979786, 0);
  sqcRYGate(q, -1.5836701646986642, 1);
  sqcRZGate(q, 1.2052662466160589, 1);
  sqcRYGate(q, -1.5595385618692443, 2);
  sqcRZGate(q, -2.379072870728985, 2);
  sqcRYGate(q, 0.149868538185693, 3);
  sqcRZGate(q, -0.9915754061651336, 3);
  sqcRYGate(q, 2.8286203635483638, 4);
  sqcRZGate(q, 1.3544785661480265, 4);
  sqcRYGate(q, -1.5975367994099618, 5);
  sqcRZGate(q, -0.12909696543381255, 5);
  sqcRYGate(q, 2.8618485508809717, 6);
  sqcRZGate(q, 1.0789829168450602, 6);
  sqcRYGate(q, -2.51516937136123, 7);
  sqcRZGate(q, 0.3811943671822135, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.362354709835919, 0);
  sqcRZGate(q, 0.25533858241331053, 0);
  sqcRYGate(q, 0.0035532578378076017, 1);
  sqcRZGate(q, 0.3338545386398577, 1);
  sqcRYGate(q, 3.135691314375877, 2);
  sqcRZGate(q, 0.4581612978259079, 2);
  sqcRYGate(q, -2.3014805589397644, 3);
  sqcRZGate(q, -2.203682103984767, 3);
  sqcRYGate(q, 0.15273894527843934, 4);
  sqcRZGate(q, -1.6264015575392743, 4);
  sqcRYGate(q, -3.1385523970685942, 5);
  sqcRZGate(q, -3.030773873226893, 5);
  sqcRYGate(q, -3.1385371899453727, 6);
  sqcRZGate(q, 1.4512718499957782, 6);
  sqcRYGate(q, 1.797544172226103, 7);
  sqcRZGate(q, 1.464901554075081, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -3.114671169445344, 0);
  sqcRZGate(q, -0.5129079568127315, 0);
  sqcRYGate(q, 0.00751393450331757, 1);
  sqcRZGate(q, -0.07887280803700555, 1);
  sqcRYGate(q, 0.002053988002769458, 2);
  sqcRZGate(q, 0.15607923473269295, 2);
  sqcRYGate(q, 1.6421482121432627, 3);
  sqcRZGate(q, -1.4899054284447253, 3);
  sqcRYGate(q, 1.362919238649572, 4);
  sqcRZGate(q, -1.503384792683657, 4);
  sqcRYGate(q, 1.5784087179897386, 5);
  sqcRZGate(q, 1.52334989421046, 5);
  sqcRYGate(q, -2.1044358065083033, 6);
  sqcRZGate(q, -2.8693761401746514, 6);
  sqcRYGate(q, -2.947843505090963, 7);
  sqcRZGate(q, 2.3935795599389817, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.0234721007278975, 0);
  sqcRZGate(q, -1.0660041012698418, 0);
  sqcRYGate(q, 0.03464249211944903, 1);
  sqcRZGate(q, -3.1066172750881624, 1);
  sqcRYGate(q, -1.569659735121384, 2);
  sqcRZGate(q, -1.5743440990533846, 2);
  sqcRYGate(q, -2.200812176232958, 3);
  sqcRZGate(q, 1.963123990768767, 3);
  sqcRYGate(q, -3.1129433217618345, 4);
  sqcRZGate(q, 3.061748076071309, 4);
  sqcRYGate(q, -1.2751425548342643, 5);
  sqcRZGate(q, 1.2449273735324926, 5);
  sqcRYGate(q, -2.9046974964247316, 6);
  sqcRZGate(q, -0.05542593791544981, 6);
  sqcRYGate(q, -0.005970619500884112, 7);
  sqcRZGate(q, -2.5476398771196473, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.562599321570623, 0);
  sqcRZGate(q, 2.410094526860915, 0);
  sqcRYGate(q, 1.5738769747796189, 1);
  sqcRZGate(q, -0.2513845257308782, 1);
  sqcRYGate(q, 0.829226378741887, 2);
  sqcRZGate(q, 0.015285142331208161, 2);
  sqcRYGate(q, 0.00012329325069870833, 3);
  sqcRZGate(q, 1.7215470466301577, 3);
  sqcRYGate(q, -0.0009697056120545611, 4);
  sqcRZGate(q, 0.21104447782673663, 4);
  sqcRYGate(q, -0.03328586833947672, 5);
  sqcRZGate(q, -1.2249387770862068, 5);
  sqcRYGate(q, 2.08850571001362, 6);
  sqcRZGate(q, 3.0880285295847902, 6);
  sqcRYGate(q, -2.9270067076543773, 7);
  sqcRZGate(q, 1.5304773881381297, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.524396948270585, 0);
  sqcRZGate(q, 0.7471304693899619, 0);
  sqcRYGate(q, 0.00025407739860305867, 1);
  sqcRZGate(q, 1.6023005802301205, 1);
  sqcRYGate(q, 1.570076205803421, 2);
  sqcRZGate(q, 3.1373323428323174, 2);
  sqcRYGate(q, 0.0013880940965442792, 3);
  sqcRZGate(q, 2.6202186929516, 3);
  sqcRYGate(q, 3.1400599243371428, 4);
  sqcRZGate(q, 1.5954507775342854, 4);
  sqcRYGate(q, 1.8728502627202772, 5);
  sqcRZGate(q, 2.8680751482629847, 5);
  sqcRYGate(q, 2.9042649478242777, 6);
  sqcRZGate(q, 0.04371280156502393, 6);
  sqcRYGate(q, -1.6220911287728945, 7);
  sqcRZGate(q, -2.4375598819588635, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.56551525405026, 0);
  sqcRZGate(q, 1.57166059141532, 0);
  sqcRYGate(q, -1.5720417731743284, 1);
  sqcRZGate(q, -1.565621036516073, 1);
  sqcRYGate(q, -2.569455028129601, 2);
  sqcRZGate(q, -0.0016519372971039404, 2);
  sqcRYGate(q, 0.5647648111611175, 3);
  sqcRZGate(q, -0.015375752458324232, 3);
  sqcRYGate(q, 1.7128819913589253, 4);
  sqcRZGate(q, 0.008853250986570416, 4);
  sqcRYGate(q, -0.028156540029139365, 5);
  sqcRZGate(q, 1.7858637226515348, 5);
  sqcRYGate(q, 1.5678387270071372, 6);
  sqcRZGate(q, 3.1285672136261686, 6);
  sqcRYGate(q, -0.02604892354588095, 7);
  sqcRZGate(q, 0.8671629628676047, 7);

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
