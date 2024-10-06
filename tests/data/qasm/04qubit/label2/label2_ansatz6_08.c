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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 1.8825675326883884, 0);
  sqcRYGate(q, 0.6236851505173275, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.655446710694977, 0);
  sqcRYGate(q, 0.610382601794405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.429234128581247, 1);
  sqcRYGate(q, -1.9313015650351624, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1340796179414232, 1);
  sqcRYGate(q, -2.491960832468567, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.453332985227866, 2);
  sqcRYGate(q, 2.297646700135525, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0408111023475204, 2);
  sqcRYGate(q, 2.027450234158277, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0385098502579364, 0);
  sqcRYGate(q, -3.0082608826428645, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5768857031284003, 0);
  sqcRYGate(q, 2.2079657212360195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3503628560268571, 1);
  sqcRYGate(q, -2.768756544633587, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4142091302035571, 1);
  sqcRYGate(q, 0.13635860396467425, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.49698533083475044, 2);
  sqcRYGate(q, -0.7700306465302349, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8564442958061784, 2);
  sqcRYGate(q, 2.481229212699255, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1180768671392483, 0);
  sqcRYGate(q, -3.057304373977046, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6056150060332588, 0);
  sqcRYGate(q, 1.7731781951479668, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7218642362112944, 1);
  sqcRYGate(q, 0.19239623807653672, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5796648961401634, 1);
  sqcRYGate(q, 0.6361578646159517, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7854812078005113, 2);
  sqcRYGate(q, 1.1175110482589494, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4167419345241347, 2);
  sqcRYGate(q, 0.5230560337775175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6799767404983406, 0);
  sqcRYGate(q, -2.0311455574217625, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2751860400403137, 0);
  sqcRYGate(q, 0.16125642603777085, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9911726134514685, 1);
  sqcRYGate(q, 2.820763788311542, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8427342399441874, 1);
  sqcRYGate(q, 3.1063595151947743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2596661429387395, 2);
  sqcRYGate(q, -1.5924439894286995, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0902788504705103, 2);
  sqcRYGate(q, 0.9304487439616844, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7714063677147492, 0);
  sqcRYGate(q, -1.723089627180362, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8482877859318808, 0);
  sqcRYGate(q, -1.52322431507492, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1940570806692943, 1);
  sqcRYGate(q, 2.640034982839565, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0138025460165068, 1);
  sqcRYGate(q, -3.0670686832728618, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5371227217372314, 2);
  sqcRYGate(q, -0.26754181007211475, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1907762887843973, 2);
  sqcRYGate(q, -0.9145809438465275, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1139244204715664, 0);
  sqcRYGate(q, 2.690440073186238, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1916690470011126, 0);
  sqcRYGate(q, 2.5203032747103324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7054978209739073, 1);
  sqcRYGate(q, 1.637315834986516, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1661978076100972, 1);
  sqcRYGate(q, -2.9230136199185095, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6588654220037966, 2);
  sqcRYGate(q, -0.32667302133208764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7667018761109015, 2);
  sqcRYGate(q, 1.6022285259185016, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7710817166609012, 0);
  sqcRYGate(q, -0.8099215072684369, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.752329668150172, 0);
  sqcRYGate(q, -1.1365804032992786, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7260044808912074, 1);
  sqcRYGate(q, -1.8951316162681906, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1755129974379477, 1);
  sqcRYGate(q, 1.7833435587963482, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.08415634909255765, 2);
  sqcRYGate(q, -0.6364493062586307, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1561100146608152, 2);
  sqcRYGate(q, 1.0358179718050344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.781062102266849, 0);
  sqcRYGate(q, -0.7434831206576611, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8542806532134574, 0);
  sqcRYGate(q, 0.556746828849815, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.478580636986117, 1);
  sqcRYGate(q, 2.0101356010034666, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.05732270298016728, 1);
  sqcRYGate(q, -2.4985808161878658, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6855933168607178, 2);
  sqcRYGate(q, -1.7359908153592554, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.823485784835652, 2);
  sqcRYGate(q, 0.9148346778751639, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3157058265882946, 0);
  sqcRYGate(q, 0.8241399754543487, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3689929094172815, 0);
  sqcRYGate(q, -1.2474302580374625, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.494846999092706, 1);
  sqcRYGate(q, -1.2831240880955315, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3612005605991846, 1);
  sqcRYGate(q, 0.4460042677103617, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6740532153256842, 2);
  sqcRYGate(q, -0.41157307202924737, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7474159597504297, 2);
  sqcRYGate(q, -0.6460321889909642, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9858949185318684, 0);
  sqcRYGate(q, -1.4848859931270484, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.09068599241527184, 0);
  sqcRYGate(q, 3.0850848949348744, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.27178658061447, 1);
  sqcRYGate(q, 1.9411976912727704, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.173738032856453, 1);
  sqcRYGate(q, 2.7314306746083217, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.622497237215269, 2);
  sqcRYGate(q, -1.0169573846938011, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.266875043784658, 2);
  sqcRYGate(q, -1.8273926299681937, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.45291712738215145, 0);
  sqcRYGate(q, -0.558092961538151, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4421670350848794, 0);
  sqcRYGate(q, 0.7120888832004484, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9349192912826592, 1);
  sqcRYGate(q, 2.4433574672126617, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9387156109753088, 1);
  sqcRYGate(q, 2.975693132469711, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.582191817448769, 2);
  sqcRYGate(q, -3.0919756383395502, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5109208705868045, 2);
  sqcRYGate(q, 2.6790679701768445, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5387119667036764, 0);
  sqcRYGate(q, 0.46024445726659674, 1);
  sqcRYGate(q, 2.2760502756033985, 2);
  sqcRYGate(q, -2.5753478498609605, 3);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
