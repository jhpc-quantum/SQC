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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 2.6732211852727845, 0);
  sqcRYGate(q, -0.12867976934385045, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5288805388084246, 0);
  sqcRYGate(q, 1.8291147765222195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6598204474837255, 2);
  sqcRYGate(q, -1.3993058197790897, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.403079156914039, 2);
  sqcRYGate(q, -0.5361797255255061, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6095432641425296, 0);
  sqcRYGate(q, 2.158278559709318, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7059450317437297, 0);
  sqcRYGate(q, -2.407527428400261, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.00166759566721, 1);
  sqcRYGate(q, 1.0695412921787835, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7047672691270987, 1);
  sqcRYGate(q, -1.4003767771446327, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.507745055172541, 0);
  sqcRYGate(q, -0.39890279384010624, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.33910291449270513, 0);
  sqcRYGate(q, 0.6105976652076978, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1729178572551113, 2);
  sqcRYGate(q, -3.016832422213939, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0227796097359425, 2);
  sqcRYGate(q, 1.6802386314102182, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3408179778464033, 0);
  sqcRYGate(q, 0.8783105263768523, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.14272730876548323, 0);
  sqcRYGate(q, 1.114853849564306, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0992788957283413, 1);
  sqcRYGate(q, 2.0363056947409897, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4356877502403664, 1);
  sqcRYGate(q, -3.1387531748241004, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.073108209105339, 0);
  sqcRYGate(q, -0.8146697307964779, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.001375249714953, 0);
  sqcRYGate(q, -3.092222278937345, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.777667276780608, 2);
  sqcRYGate(q, 2.5447598451162676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.10650726704305, 2);
  sqcRYGate(q, 0.09141562228375921, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.26598663077206713, 0);
  sqcRYGate(q, 0.3634621777085858, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9173757538574727, 0);
  sqcRYGate(q, 2.0052263790186284, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2479797008531923, 1);
  sqcRYGate(q, 1.6547476227819249, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.687762230068959, 1);
  sqcRYGate(q, 1.1275304981158911, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9561814594267285, 0);
  sqcRYGate(q, 2.961912447796541, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9338400027733047, 0);
  sqcRYGate(q, -3.052005788504327, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.18191476152512287, 2);
  sqcRYGate(q, -2.510401050273811, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.506663407629329, 2);
  sqcRYGate(q, -1.7349938001161052, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6468886893182662, 0);
  sqcRYGate(q, -0.6111411448179442, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.772598511756811, 0);
  sqcRYGate(q, -2.183222719855615, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6123902710599074, 1);
  sqcRYGate(q, -1.8957966681177199, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.554739165380882, 1);
  sqcRYGate(q, -0.7201641805649492, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2685524712067942, 0);
  sqcRYGate(q, -1.0055455616798143, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8378621333187645, 0);
  sqcRYGate(q, -0.37835821637459843, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1128928819601245, 2);
  sqcRYGate(q, 2.214043553162403, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1357411334747094, 2);
  sqcRYGate(q, -1.9672441586255642, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9685299611706197, 0);
  sqcRYGate(q, -1.4440226089499442, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4051828424978139, 0);
  sqcRYGate(q, -1.221792865722584, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0486087491372182, 1);
  sqcRYGate(q, -0.5952702222757535, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7550221577953478, 1);
  sqcRYGate(q, 1.588638012476971, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.45930678021506477, 0);
  sqcRYGate(q, -1.5493684793579248, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.025036627399788652, 0);
  sqcRYGate(q, 0.46625835267492755, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7672202609231303, 2);
  sqcRYGate(q, 2.430199585635392, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.022247825517583, 2);
  sqcRYGate(q, 0.25763357307816986, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7597834034815945, 0);
  sqcRYGate(q, -2.5395515911097744, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.290957641423044, 0);
  sqcRYGate(q, 1.308848169964281, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2490737642751345, 1);
  sqcRYGate(q, 1.3458285285592826, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6999112183906258, 1);
  sqcRYGate(q, 0.8068096279722763, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8021943879014124, 0);
  sqcRYGate(q, 0.025208411592026355, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0801933839410554, 0);
  sqcRYGate(q, 0.6336434529943887, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6338706484168759, 2);
  sqcRYGate(q, -3.1247209062202344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.40699770329141916, 2);
  sqcRYGate(q, 2.114361918011215, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4380876944166023, 0);
  sqcRYGate(q, -1.9809243076567544, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5237147216048763, 0);
  sqcRYGate(q, -0.6122138475867486, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.23981645929619955, 1);
  sqcRYGate(q, 1.3469873002180421, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9487768552057485, 1);
  sqcRYGate(q, 1.1848301431394674, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8193695915170265, 0);
  sqcRYGate(q, -1.577213256541694, 1);
  sqcRYGate(q, -0.8773474651058796, 2);
  sqcRYGate(q, 0.7230854672551225, 3);

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
