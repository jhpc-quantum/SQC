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

  sqcRYGate(q, 2.4007384340084728, 0);
  sqcRZGate(q, 3.1007431217260164, 0);
  sqcRYGate(q, 2.0331600928205313, 1);
  sqcRZGate(q, -0.7479905138738664, 1);
  sqcRYGate(q, -1.9384194037783005, 2);
  sqcRZGate(q, -2.3194488690468367, 2);
  sqcRYGate(q, -1.37389953803522, 3);
  sqcRZGate(q, 2.971285972663645, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.1000914540623477, 0);
  sqcRZGate(q, -0.7467912188802717, 0);
  sqcRYGate(q, -0.46675992997955706, 1);
  sqcRZGate(q, -1.0189903378598775, 1);
  sqcRYGate(q, 2.713829874396016, 2);
  sqcRZGate(q, -2.4631106824692837, 2);
  sqcRYGate(q, 0.8250312376436425, 3);
  sqcRZGate(q, 0.2983682391367298, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.9635586713040323, 0);
  sqcRZGate(q, 2.500137006233458, 0);
  sqcRYGate(q, -0.04728259125623691, 1);
  sqcRZGate(q, 0.5893704451753248, 1);
  sqcRYGate(q, -1.0197514499253206, 2);
  sqcRZGate(q, 0.8069776312514638, 2);
  sqcRYGate(q, 1.0779519571318756, 3);
  sqcRZGate(q, 1.6049899416577915, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5596421498358635, 0);
  sqcRZGate(q, 0.11369533097515362, 0);
  sqcRYGate(q, 2.8646738310275706, 1);
  sqcRZGate(q, -0.02925184734343933, 1);
  sqcRYGate(q, -1.5479276692759671, 2);
  sqcRZGate(q, 0.870920661084332, 2);
  sqcRYGate(q, -0.22371666791391015, 3);
  sqcRZGate(q, 2.850906299149178, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5648621440772277, 0);
  sqcRZGate(q, -1.5794773299916984, 0);
  sqcRYGate(q, -1.7896884853247708, 1);
  sqcRZGate(q, 2.680559797371395, 1);
  sqcRYGate(q, 0.7909866342551243, 2);
  sqcRZGate(q, 0.8859306093183088, 2);
  sqcRYGate(q, -1.7049929910118393, 3);
  sqcRZGate(q, -2.3299756506643265, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9410834102938227, 0);
  sqcRZGate(q, -0.3150773832362566, 0);
  sqcRYGate(q, -0.18348606376301116, 1);
  sqcRZGate(q, 1.0038270053451805, 1);
  sqcRYGate(q, -0.04993724165034789, 2);
  sqcRZGate(q, 1.8896276677242407, 2);
  sqcRYGate(q, -0.7449611671699127, 3);
  sqcRZGate(q, 2.691152154177796, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9456892529318228, 0);
  sqcRZGate(q, -2.9216329227055224, 0);
  sqcRYGate(q, 2.5336940694177215, 1);
  sqcRZGate(q, 2.631017388253429, 1);
  sqcRYGate(q, -1.7767034485599005, 2);
  sqcRZGate(q, 3.0198922939260004, 2);
  sqcRYGate(q, -2.0523083201376764, 3);
  sqcRZGate(q, 2.2685869025823315, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3970542523654466, 0);
  sqcRZGate(q, -0.5258537874828699, 0);
  sqcRYGate(q, 1.24189055259047, 1);
  sqcRZGate(q, -0.3532761244715221, 1);
  sqcRYGate(q, 0.9048955587511003, 2);
  sqcRZGate(q, 2.5678017801413127, 2);
  sqcRYGate(q, -0.03366436325982303, 3);
  sqcRZGate(q, 2.6393034042929493, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.332330326689331, 0);
  sqcRZGate(q, 3.0253028039534917, 0);
  sqcRYGate(q, 2.890093914292461, 1);
  sqcRZGate(q, 1.3148844831231958, 1);
  sqcRYGate(q, -0.790284983619154, 2);
  sqcRZGate(q, -0.7184149574049519, 2);
  sqcRYGate(q, -0.5087542505504228, 3);
  sqcRZGate(q, 2.1751159350819202, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.983291249113649, 0);
  sqcRZGate(q, 0.28649192111532246, 0);
  sqcRYGate(q, -1.4964225231351502, 1);
  sqcRZGate(q, -2.2026166825665516, 1);
  sqcRYGate(q, 0.931842439451617, 2);
  sqcRZGate(q, -1.7636540194239096, 2);
  sqcRYGate(q, 0.768962987704494, 3);
  sqcRZGate(q, -1.430775994679263, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.3796689860897504, 0);
  sqcRZGate(q, 2.3215242694618397, 0);
  sqcRYGate(q, -0.9915368740445422, 1);
  sqcRZGate(q, -2.2361640940545082, 1);
  sqcRYGate(q, -0.25146382784964105, 2);
  sqcRZGate(q, 0.283845029086318, 2);
  sqcRYGate(q, 0.4273668416308709, 3);
  sqcRZGate(q, -2.5014548921914748, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7595409737289054, 0);
  sqcRZGate(q, -1.5135544249525774, 0);
  sqcRYGate(q, -2.59266716899343, 1);
  sqcRZGate(q, 1.9859731204882223, 1);
  sqcRYGate(q, 1.5797163874376514, 2);
  sqcRZGate(q, 1.1225652655973641, 2);
  sqcRYGate(q, 2.491004948314717, 3);
  sqcRZGate(q, 0.7492682678513352, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1188489169433105, 0);
  sqcRZGate(q, -0.6961907764452894, 0);
  sqcRYGate(q, 1.268626751069888, 1);
  sqcRZGate(q, 0.7798542845909182, 1);
  sqcRYGate(q, 1.4007038192775347, 2);
  sqcRZGate(q, -0.07542886807313653, 2);
  sqcRYGate(q, -2.695051563643178, 3);
  sqcRZGate(q, 1.6779923508136783, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.37970567475782335, 0);
  sqcRZGate(q, -0.1957887655443011, 0);
  sqcRYGate(q, 0.6236946984293397, 1);
  sqcRZGate(q, 2.6832686580391485, 1);
  sqcRYGate(q, -3.0476840615864638, 2);
  sqcRZGate(q, -1.1480467398688141, 2);
  sqcRYGate(q, -0.7231541368376484, 3);
  sqcRZGate(q, 0.927925718087451, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3894866838458678, 0);
  sqcRZGate(q, -0.8481377629158714, 0);
  sqcRYGate(q, -1.72442968410721, 1);
  sqcRZGate(q, 2.582204620992282, 1);
  sqcRYGate(q, 1.1512525923684702, 2);
  sqcRZGate(q, 1.3439134121703127, 2);
  sqcRYGate(q, -2.928204263236252, 3);
  sqcRZGate(q, -2.7966827815719215, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5539988137853227, 0);
  sqcRZGate(q, -0.8975765302559129, 0);
  sqcRYGate(q, -1.1959328675085956, 1);
  sqcRZGate(q, -0.9740774216581043, 1);
  sqcRYGate(q, 2.2662806233868187, 2);
  sqcRZGate(q, -0.24435409992891888, 2);
  sqcRYGate(q, -2.470117606597195, 3);
  sqcRZGate(q, -1.9458141131687312, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9923405597147616, 0);
  sqcRZGate(q, -2.3649215334146745, 0);
  sqcRYGate(q, 2.9116625569379857, 1);
  sqcRZGate(q, 1.951085292727112, 1);
  sqcRYGate(q, 2.7509796642453965, 2);
  sqcRZGate(q, -1.5025877858096184, 2);
  sqcRYGate(q, 2.511687698889203, 3);
  sqcRZGate(q, -3.006614633859959, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.438128977090405, 0);
  sqcRZGate(q, -1.609992504724855, 0);
  sqcRYGate(q, 2.9604690575894534, 1);
  sqcRZGate(q, -1.0089029206089146, 1);
  sqcRYGate(q, 1.1881526517102952, 2);
  sqcRZGate(q, 1.6527847742762314, 2);
  sqcRYGate(q, -3.1026925247578654, 3);
  sqcRZGate(q, -2.268887621657411, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6204098537113729, 0);
  sqcRZGate(q, -1.0707400601675676, 0);
  sqcRYGate(q, 2.0831848390650887, 1);
  sqcRZGate(q, 0.2978437306584407, 1);
  sqcRYGate(q, -2.386596710491733, 2);
  sqcRZGate(q, 2.6156873606227014, 2);
  sqcRYGate(q, -3.0253342262210414, 3);
  sqcRZGate(q, 2.8510593532656556, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.320419706406734, 0);
  sqcRZGate(q, -2.4784952379660035, 0);
  sqcRYGate(q, 2.5690622034357067, 1);
  sqcRZGate(q, 2.9817033387214633, 1);
  sqcRYGate(q, 0.7371429248217707, 2);
  sqcRZGate(q, 1.5685770229088976, 2);
  sqcRYGate(q, -3.0687855072153605, 3);
  sqcRZGate(q, 1.761199567761766, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.741544436412409, 0);
  sqcRZGate(q, -0.013703371086567412, 0);
  sqcRYGate(q, 0.7390153645961464, 1);
  sqcRZGate(q, -0.5303072811680809, 1);
  sqcRYGate(q, -1.5886089002510133, 2);
  sqcRZGate(q, -1.6919201317550234, 2);
  sqcRYGate(q, 2.2177399190826605, 3);
  sqcRZGate(q, -3.113052538564069, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1059951215649244, 0);
  sqcRZGate(q, -0.02321471412752984, 0);
  sqcRYGate(q, -2.681658054715926, 1);
  sqcRZGate(q, 0.4336165019860161, 1);
  sqcRYGate(q, -1.1654256035515331, 2);
  sqcRZGate(q, 0.8543127646383387, 2);
  sqcRYGate(q, 1.2449555662529974, 3);
  sqcRZGate(q, 0.9365229147312304, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8531753231531339, 0);
  sqcRZGate(q, 2.230039737402004, 0);
  sqcRYGate(q, -1.3728378174930822, 1);
  sqcRZGate(q, 0.5764010622475136, 1);
  sqcRYGate(q, 0.5826371882821616, 2);
  sqcRZGate(q, -1.3290329677693098, 2);
  sqcRYGate(q, 1.2850893652633069, 3);
  sqcRZGate(q, 1.8504383027851672, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.556741596563422, 0);
  sqcRZGate(q, 0.389056286455743, 0);
  sqcRYGate(q, 1.226795569245871, 1);
  sqcRZGate(q, -2.102627118964577, 1);
  sqcRYGate(q, 0.40403147540086515, 2);
  sqcRZGate(q, -1.5587609717201822, 2);
  sqcRYGate(q, 0.7088862156866774, 3);
  sqcRZGate(q, 1.339895817418002, 3);

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
