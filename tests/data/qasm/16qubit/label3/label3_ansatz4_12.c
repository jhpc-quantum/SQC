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

  sqcRYGate(q, -1.6861458412871393, 0);
  sqcRZGate(q, -0.4433291867207236, 0);
  sqcRYGate(q, 0.056233170040948036, 1);
  sqcRZGate(q, 3.0407068477210895, 1);
  sqcRYGate(q, 0.7201434192858438, 2);
  sqcRZGate(q, 1.4932246688325885, 2);
  sqcRYGate(q, 2.061899217679785, 3);
  sqcRZGate(q, 2.7848471107165436, 3);
  sqcRYGate(q, 2.680982544695194, 4);
  sqcRZGate(q, -2.8554400507083484, 4);
  sqcRYGate(q, -2.345457661202366, 5);
  sqcRZGate(q, 0.07156688149806333, 5);
  sqcRYGate(q, 1.5702671478977408, 6);
  sqcRZGate(q, -1.4637234369008372, 6);
  sqcRYGate(q, -1.2205846512639082, 7);
  sqcRZGate(q, 1.663386217995778, 7);
  sqcRYGate(q, -3.1397508447955778, 8);
  sqcRZGate(q, 1.32609167049087, 8);
  sqcRYGate(q, -0.46925950797420857, 9);
  sqcRZGate(q, 1.596225454564876, 9);
  sqcRYGate(q, -0.00039184781916980346, 10);
  sqcRZGate(q, -0.59720332898653, 10);
  sqcRYGate(q, 0.0007874197066151112, 11);
  sqcRZGate(q, -1.4737877026163733, 11);
  sqcRYGate(q, 1.424139975720328, 12);
  sqcRZGate(q, -3.138465623395564, 12);
  sqcRYGate(q, 1.5694178051846146, 13);
  sqcRZGate(q, -3.1080840393410645, 13);
  sqcRYGate(q, -1.606153580962677, 14);
  sqcRZGate(q, 3.0244008199535877, 14);
  sqcRYGate(q, -3.0646176271340733, 15);
  sqcRZGate(q, 1.5422022315019501, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.278483769573934, 0);
  sqcRZGate(q, -0.9770575845415106, 0);
  sqcRYGate(q, -3.1100510529231147, 1);
  sqcRZGate(q, -2.641873437502376, 1);
  sqcRYGate(q, -1.3569848989277213, 2);
  sqcRZGate(q, 1.0082201024586783, 2);
  sqcRYGate(q, -1.4152613800756493, 3);
  sqcRZGate(q, -0.7412313434038516, 3);
  sqcRYGate(q, 3.1414255612485738, 4);
  sqcRZGate(q, -0.7747234849503438, 4);
  sqcRYGate(q, 3.141258278993245, 5);
  sqcRZGate(q, 2.099372462750575, 5);
  sqcRYGate(q, -3.141323106218237, 6);
  sqcRZGate(q, 2.5354738124470027, 6);
  sqcRYGate(q, 0.0030702879174375752, 7);
  sqcRZGate(q, -0.09426560779050125, 7);
  sqcRYGate(q, -0.8155049968697519, 8);
  sqcRZGate(q, -1.5280742976933204, 8);
  sqcRYGate(q, -1.5681254410713275, 9);
  sqcRZGate(q, -3.0348818224507963, 9);
  sqcRYGate(q, -3.14140889630042, 10);
  sqcRZGate(q, -0.3423500578820411, 10);
  sqcRYGate(q, -0.0022791579460799127, 11);
  sqcRZGate(q, 2.7563704609170654, 11);
  sqcRYGate(q, -1.5678191521054343, 12);
  sqcRZGate(q, 0.7326272716025591, 12);
  sqcRYGate(q, 0.04399309396407894, 13);
  sqcRZGate(q, 1.546597447492779, 13);
  sqcRYGate(q, 0.04815404751626762, 14);
  sqcRZGate(q, -1.4550620072088658, 14);
  sqcRYGate(q, -0.6505047297403478, 15);
  sqcRZGate(q, 2.8188106487642317, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.296027395130229, 0);
  sqcRZGate(q, -2.4370597638727522, 0);
  sqcRYGate(q, -0.03776899361738653, 1);
  sqcRZGate(q, 1.7865050363283874, 1);
  sqcRYGate(q, 1.2486412005136949, 2);
  sqcRZGate(q, 2.105381618022336, 2);
  sqcRYGate(q, -2.5527529929524797, 3);
  sqcRZGate(q, 2.6482784454040473, 3);
  sqcRYGate(q, -1.4483833809481104, 4);
  sqcRZGate(q, 2.6781170476060328, 4);
  sqcRYGate(q, -1.3723323269457142, 5);
  sqcRZGate(q, -2.9321205836033744, 5);
  sqcRYGate(q, -3.134504722678948, 6);
  sqcRZGate(q, -2.2775235838625867, 6);
  sqcRYGate(q, 1.5654234379089305, 7);
  sqcRZGate(q, 1.4075742890474263, 7);
  sqcRYGate(q, 2.774626224230287, 8);
  sqcRZGate(q, -1.5361153721454572, 8);
  sqcRYGate(q, 0.01614901524257562, 9);
  sqcRZGate(q, -1.6780403604723761, 9);
  sqcRYGate(q, -1.5702500703221807, 10);
  sqcRZGate(q, -0.3959069901693003, 10);
  sqcRYGate(q, -1.5710176839809915, 11);
  sqcRZGate(q, 2.4111288992256887, 11);
  sqcRYGate(q, 0.23340477871331441, 12);
  sqcRZGate(q, 2.6425799431077333, 12);
  sqcRYGate(q, -0.690254756384083, 13);
  sqcRZGate(q, -1.2078171334342214, 13);
  sqcRYGate(q, 2.601056022281148, 14);
  sqcRZGate(q, -0.0019050821280499621, 14);
  sqcRYGate(q, 3.0672965368343266, 15);
  sqcRZGate(q, 2.821522924015128, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.8299868069152296, 0);
  sqcRZGate(q, -2.5639582420151252, 0);
  sqcRYGate(q, 3.05227773609722, 1);
  sqcRZGate(q, 1.9913467982610085, 1);
  sqcRYGate(q, -1.8621421766228694, 2);
  sqcRZGate(q, -0.046109767991969086, 2);
  sqcRYGate(q, 0.8025038366385698, 3);
  sqcRZGate(q, 1.2095314686424705, 3);
  sqcRYGate(q, -0.025122912376602358, 4);
  sqcRZGate(q, -0.9907933035110288, 4);
  sqcRYGate(q, 0.019367973556165374, 5);
  sqcRZGate(q, -2.1038830949528085, 5);
  sqcRYGate(q, 1.5869127263106884, 6);
  sqcRZGate(q, -0.016852997802500273, 6);
  sqcRYGate(q, 0.0028694384465932643, 7);
  sqcRZGate(q, 0.16350959519913386, 7);
  sqcRYGate(q, 1.5698928362423208, 8);
  sqcRZGate(q, -2.972400232309868, 8);
  sqcRYGate(q, 1.4491989401518404, 9);
  sqcRZGate(q, 1.5969069226177532, 9);
  sqcRYGate(q, -3.1270010250808347, 10);
  sqcRZGate(q, -2.711564896404593, 10);
  sqcRYGate(q, 3.138391002003302, 11);
  sqcRZGate(q, -2.551597625836598, 11);
  sqcRYGate(q, -3.013554351461339, 12);
  sqcRZGate(q, -1.2963999346081803, 12);
  sqcRYGate(q, 1.7295726533641338, 13);
  sqcRZGate(q, 1.85465811098208, 13);
  sqcRYGate(q, -1.5485507586360432, 14);
  sqcRZGate(q, 2.910667779654349, 14);
  sqcRYGate(q, 1.9914402997820426, 15);
  sqcRZGate(q, -0.037380598002351384, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.858985746538918, 0);
  sqcRZGate(q, -0.5562710327154974, 0);
  sqcRYGate(q, 0.04311138772395839, 1);
  sqcRZGate(q, -2.7033792015546365, 1);
  sqcRYGate(q, -0.34740779478756245, 2);
  sqcRZGate(q, -1.4734645706725171, 2);
  sqcRYGate(q, 0.842722171191767, 3);
  sqcRZGate(q, 1.2560560560865293, 3);
  sqcRYGate(q, 1.5808850096853488, 4);
  sqcRZGate(q, -0.00027342811094397404, 4);
  sqcRYGate(q, -1.577818587727783, 5);
  sqcRZGate(q, -0.005938354098540802, 5);
  sqcRYGate(q, 3.0788588191586332, 6);
  sqcRZGate(q, 0.27525757550703656, 6);
  sqcRYGate(q, -1.5673766371887883, 7);
  sqcRZGate(q, 2.3547518826942277, 7);
  sqcRYGate(q, 0.43629413609511336, 8);
  sqcRZGate(q, 1.4984658466607614, 8);
  sqcRYGate(q, 0.24134915573463187, 9);
  sqcRZGate(q, -2.4596876190102046, 9);
  sqcRYGate(q, -0.0009901032912233987, 10);
  sqcRZGate(q, 2.912426151601975, 10);
  sqcRYGate(q, -2.823528018499637, 11);
  sqcRZGate(q, -0.1104709939444482, 11);
  sqcRYGate(q, -3.1117741452711316, 12);
  sqcRZGate(q, 3.102271569531203, 12);
  sqcRYGate(q, 0.033425675467746545, 13);
  sqcRZGate(q, 1.4476521416928942, 13);
  sqcRYGate(q, 3.1380276341120683, 14);
  sqcRZGate(q, 2.8612597249961227, 14);
  sqcRYGate(q, 0.09378836920605416, 15);
  sqcRZGate(q, 0.024482499509231655, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.49880285345037123, 0);
  sqcRZGate(q, 2.8582075962537337, 0);
  sqcRYGate(q, 1.5220600701827651, 1);
  sqcRZGate(q, -1.466622018380734, 1);
  sqcRYGate(q, 1.0828514660869137, 2);
  sqcRZGate(q, -2.2617321203209357, 2);
  sqcRYGate(q, -1.6582873947034404, 3);
  sqcRZGate(q, 2.046428022582239, 3);
  sqcRYGate(q, 1.5724907165334434, 4);
  sqcRZGate(q, 3.129853821538383, 4);
  sqcRYGate(q, 1.5686271244197503, 5);
  sqcRZGate(q, 0.007673150781718074, 5);
  sqcRYGate(q, -3.134820965594644, 6);
  sqcRZGate(q, -2.8733783538204913, 6);
  sqcRYGate(q, 3.1238569038791772, 7);
  sqcRZGate(q, 2.566598020745023, 7);
  sqcRYGate(q, 0.022470134509880356, 8);
  sqcRZGate(q, 1.6336461463184522, 8);
  sqcRYGate(q, 3.1398327057778297, 9);
  sqcRZGate(q, -2.466005993621295, 9);
  sqcRYGate(q, 3.131063321891471, 10);
  sqcRZGate(q, -0.9734719804177326, 10);
  sqcRYGate(q, -3.1387321939149677, 11);
  sqcRZGate(q, 3.0305120540274193, 11);
  sqcRYGate(q, 1.536761200077784, 12);
  sqcRZGate(q, -2.107220856881404, 12);
  sqcRYGate(q, 2.0613288840497606, 13);
  sqcRZGate(q, 0.22669176725668283, 13);
  sqcRYGate(q, -3.108890538615949, 14);
  sqcRZGate(q, -1.6224018744771733, 14);
  sqcRYGate(q, 2.1457966097713683, 15);
  sqcRZGate(q, 3.0901235061052965, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.5711475458924733, 0);
  sqcRZGate(q, -3.137231121989578, 0);
  sqcRYGate(q, 0.259326068423133, 1);
  sqcRZGate(q, -1.6539885777458894, 1);
  sqcRYGate(q, 1.5555251889029176, 2);
  sqcRZGate(q, 1.3876134685177037, 2);
  sqcRYGate(q, 3.1353558095852057, 3);
  sqcRZGate(q, 1.2030961152798154, 3);
  sqcRYGate(q, -1.5733781391813026, 4);
  sqcRZGate(q, 2.159153670736905, 4);
  sqcRYGate(q, -1.580486369212867, 5);
  sqcRZGate(q, -2.592745170463372, 5);
  sqcRYGate(q, 3.1384100066992495, 6);
  sqcRZGate(q, -1.5544138820151774, 6);
  sqcRYGate(q, -1.6304430279237154, 7);
  sqcRZGate(q, 1.5430865397124132, 7);
  sqcRYGate(q, 2.704854568466206, 8);
  sqcRZGate(q, 1.7300055622216428, 8);
  sqcRYGate(q, 2.900203873581622, 9);
  sqcRZGate(q, 1.5748540860708657, 9);
  sqcRYGate(q, -1.568946609801663, 10);
  sqcRZGate(q, 1.5722993284568803, 10);
  sqcRYGate(q, 1.877915015976218, 11);
  sqcRZGate(q, -2.687720525486789, 11);
  sqcRYGate(q, 1.6041728694970874, 12);
  sqcRZGate(q, 0.7301396161496498, 12);
  sqcRYGate(q, 3.1390894387431794, 13);
  sqcRZGate(q, 1.7764217799987594, 13);
  sqcRYGate(q, -1.5713119900269819, 14);
  sqcRZGate(q, 1.132637105426579, 14);
  sqcRYGate(q, -0.01337048042812583, 15);
  sqcRZGate(q, 0.5782417736049661, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.5419802694412863, 0);
  sqcRZGate(q, 2.482980800486088, 0);
  sqcRYGate(q, -1.5446538787681439, 1);
  sqcRZGate(q, -0.5877956792667682, 1);
  sqcRYGate(q, 0.2377477915670756, 2);
  sqcRZGate(q, -2.986737466204044, 2);
  sqcRYGate(q, -0.893988935354394, 3);
  sqcRZGate(q, 1.319550225170244, 3);
  sqcRYGate(q, 3.118313517605159, 4);
  sqcRZGate(q, -0.4413020609643649, 4);
  sqcRYGate(q, -0.3465954342753123, 5);
  sqcRZGate(q, -1.5337337294272595, 5);
  sqcRYGate(q, -1.5784342843953514, 6);
  sqcRZGate(q, -1.59097054979576, 6);
  sqcRYGate(q, 1.583455399211804, 7);
  sqcRZGate(q, 1.8865643316890575, 7);
  sqcRYGate(q, 1.5734651976760947, 8);
  sqcRZGate(q, 0.28525929422819113, 8);
  sqcRYGate(q, 3.1335544837705536, 9);
  sqcRZGate(q, 1.6055879296369846, 9);
  sqcRYGate(q, 1.5706995174292084, 10);
  sqcRZGate(q, 1.1775698785164153, 10);
  sqcRYGate(q, 3.141181376924807, 11);
  sqcRZGate(q, -1.4635229621274615, 11);
  sqcRYGate(q, 3.128484744894763, 12);
  sqcRZGate(q, 2.276239105802035, 12);
  sqcRYGate(q, -1.578133749658624, 13);
  sqcRZGate(q, 0.06484068811046129, 13);
  sqcRYGate(q, -0.010018661618183773, 14);
  sqcRZGate(q, 0.4985306027036755, 14);
  sqcRYGate(q, 1.41834080110368, 15);
  sqcRZGate(q, -1.3114870493238864, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.4168076057522518, 0);
  sqcRZGate(q, -1.6366301741791505, 0);
  sqcRYGate(q, -1.2349290168289357, 1);
  sqcRZGate(q, -0.34264165148992626, 1);
  sqcRYGate(q, -2.4707797754340644, 2);
  sqcRZGate(q, 1.5373146025452797, 2);
  sqcRYGate(q, -0.025733002149036493, 3);
  sqcRZGate(q, 2.2843385807439724, 3);
  sqcRYGate(q, 3.130731990812542, 4);
  sqcRZGate(q, 1.850174953922725, 4);
  sqcRYGate(q, 3.1374896988465273, 5);
  sqcRZGate(q, 2.3970743752605066, 5);
  sqcRYGate(q, 1.5855089104576034, 6);
  sqcRZGate(q, -2.6607690428414794, 6);
  sqcRYGate(q, 1.5684007888155624, 7);
  sqcRZGate(q, 1.0921466372855446, 7);
  sqcRYGate(q, -0.001570822139722594, 8);
  sqcRZGate(q, 2.8582416542221947, 8);
  sqcRYGate(q, -0.33424387775946146, 9);
  sqcRZGate(q, -1.5713256152775026, 9);
  sqcRYGate(q, -3.1411713217874557, 10);
  sqcRZGate(q, 1.1776542451970544, 10);
  sqcRYGate(q, 3.1415796410329255, 11);
  sqcRZGate(q, -0.772394891356509, 11);
  sqcRYGate(q, 3.1405769227082696, 12);
  sqcRZGate(q, -3.0915248127610244, 12);
  sqcRYGate(q, -0.006028836286398507, 13);
  sqcRZGate(q, 3.1365766894335185, 13);
  sqcRYGate(q, 0.016397457631218693, 14);
  sqcRZGate(q, 1.5181690233189942, 14);
  sqcRYGate(q, -2.012296699092574, 15);
  sqcRZGate(q, -1.5684547110898688, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.02746815979863015, 0);
  sqcRZGate(q, 2.3771051877714107, 0);
  sqcRYGate(q, 1.6413447174692504, 1);
  sqcRZGate(q, -0.5710283840542495, 1);
  sqcRYGate(q, -1.5646230045788223, 2);
  sqcRZGate(q, 2.2741961270768543, 2);
  sqcRYGate(q, 0.3637865124977651, 3);
  sqcRZGate(q, -1.6085430955117772, 3);
  sqcRYGate(q, 3.140945855382953, 4);
  sqcRZGate(q, 1.9461341407136992, 4);
  sqcRYGate(q, 3.1258089420514783, 5);
  sqcRZGate(q, -0.763961709583259, 5);
  sqcRYGate(q, -0.0006081206195981522, 6);
  sqcRZGate(q, 1.092647454451079, 6);
  sqcRYGate(q, 0.00048543316387039687, 7);
  sqcRZGate(q, -2.662837958011343, 7);
  sqcRYGate(q, 1.5724341821495749, 8);
  sqcRZGate(q, 0.54273380282761, 8);
  sqcRYGate(q, -1.942815448223036, 9);
  sqcRZGate(q, -3.1409871845399904, 9);
  sqcRYGate(q, 1.5716829101609653, 10);
  sqcRZGate(q, -1.5714801259532614, 10);
  sqcRYGate(q, -3.140883462856806, 11);
  sqcRZGate(q, -2.25774171686136, 11);
  sqcRYGate(q, -0.020441371224049654, 12);
  sqcRZGate(q, 3.0665654890270635, 12);
  sqcRYGate(q, -0.01694042458946215, 13);
  sqcRZGate(q, 3.0802883360758657, 13);
  sqcRYGate(q, 1.56765028549625, 14);
  sqcRZGate(q, -1.9723928569826752, 14);
  sqcRYGate(q, -1.5683430181882647, 15);
  sqcRZGate(q, -1.6279424636531452, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.8802906777399397, 0);
  sqcRZGate(q, -2.178848820303326, 0);
  sqcRYGate(q, 3.034116199585729, 1);
  sqcRZGate(q, -0.578036939169418, 1);
  sqcRYGate(q, 3.137281335426721, 2);
  sqcRZGate(q, 1.4368402107320843, 2);
  sqcRYGate(q, -1.7145581472831637, 3);
  sqcRZGate(q, 3.0857545520047904, 3);
  sqcRYGate(q, -1.5702869393902523, 4);
  sqcRZGate(q, -1.5374573320467158, 4);
  sqcRYGate(q, -1.6000803920973752, 5);
  sqcRZGate(q, -1.5721059790902836, 5);
  sqcRYGate(q, 1.571334182690837, 6);
  sqcRZGate(q, 1.5738565336599364, 6);
  sqcRYGate(q, 1.5713167848634209, 7);
  sqcRZGate(q, 2.2702614167086526, 7);
  sqcRYGate(q, -0.0015203889396997606, 8);
  sqcRZGate(q, -2.611084400404386, 8);
  sqcRYGate(q, -1.569492772157039, 9);
  sqcRZGate(q, 3.0995396342775883, 9);
  sqcRYGate(q, 1.5903947178630284, 10);
  sqcRZGate(q, 1.5709861411216899, 10);
  sqcRYGate(q, -1.5424106345186526, 11);
  sqcRZGate(q, 1.5716337127335922, 11);
  sqcRYGate(q, 1.5718580498235726, 12);
  sqcRZGate(q, 0.23360577757365064, 12);
  sqcRYGate(q, -1.5699430934332608, 13);
  sqcRZGate(q, 0.6404444067418904, 13);
  sqcRYGate(q, 2.6679271325809015, 14);
  sqcRZGate(q, 1.2021964382934507, 14);
  sqcRYGate(q, -0.01512320939508971, 15);
  sqcRZGate(q, -0.850744148303998, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 3.138387824957557, 0);
  sqcRZGate(q, -0.4702369064658185, 0);
  sqcRYGate(q, 1.857351468359934, 1);
  sqcRZGate(q, -1.1814497392642405, 1);
  sqcRYGate(q, 1.546772612744407, 2);
  sqcRZGate(q, 0.5281456231850994, 2);
  sqcRYGate(q, 1.2166067311036775, 3);
  sqcRZGate(q, -1.8780353211315175, 3);
  sqcRYGate(q, -1.5364420807310886, 4);
  sqcRZGate(q, 0.005460470021850746, 4);
  sqcRYGate(q, 1.5674709107942144, 5);
  sqcRZGate(q, 0.07236400516519254, 5);
  sqcRYGate(q, -1.5604987853397436, 6);
  sqcRZGate(q, 1.2703966129739224, 6);
  sqcRYGate(q, -0.1332119178059966, 7);
  sqcRZGate(q, 0.5282946461188871, 7);
  sqcRYGate(q, -0.10083362952162574, 8);
  sqcRZGate(q, -0.3335745586023382, 8);
  sqcRYGate(q, -0.002517051580130959, 9);
  sqcRZGate(q, 0.16262532969854337, 9);
  sqcRYGate(q, 1.6618914109046643, 10);
  sqcRZGate(q, -3.1415358338603143, 10);
  sqcRYGate(q, -1.477092185185806, 11);
  sqcRZGate(q, -2.9295977445714003, 11);
  sqcRYGate(q, 3.1404792722269366, 12);
  sqcRZGate(q, 0.20050704529660915, 12);
  sqcRYGate(q, -3.1396876836100605, 13);
  sqcRZGate(q, 0.6118319145528489, 13);
  sqcRYGate(q, -1.570010084765376, 14);
  sqcRZGate(q, 2.3269992624180875, 14);
  sqcRYGate(q, 0.002634626897237702, 15);
  sqcRZGate(q, -3.0232063027785454, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.3681383510535436, 0);
  sqcRZGate(q, -1.1417128028517753, 0);
  sqcRYGate(q, -2.1895532041027383, 1);
  sqcRZGate(q, -1.3114234672109926, 1);
  sqcRYGate(q, -0.9174733380240808, 2);
  sqcRZGate(q, 2.3276996772223875, 2);
  sqcRYGate(q, -1.7267469111827465, 3);
  sqcRZGate(q, 0.48928767974101284, 3);
  sqcRYGate(q, -1.602864178013311, 4);
  sqcRZGate(q, 1.578327872131924, 4);
  sqcRYGate(q, -3.091198277550889, 5);
  sqcRZGate(q, 2.0013789870048635, 5);
  sqcRYGate(q, -0.0011901005197874068, 6);
  sqcRZGate(q, -1.2373676552969388, 6);
  sqcRYGate(q, 0.001582842469586911, 7);
  sqcRZGate(q, -2.832615442871065, 7);
  sqcRYGate(q, 0.005159643519744073, 8);
  sqcRZGate(q, 2.3989042438114905, 8);
  sqcRYGate(q, 0.00016544980277011234, 9);
  sqcRZGate(q, 3.024719326346394, 9);
  sqcRYGate(q, -1.5674158607851072, 10);
  sqcRZGate(q, 3.1037992122511726, 10);
  sqcRYGate(q, -0.08278345644858291, 11);
  sqcRZGate(q, 2.920274032728102, 11);
  sqcRYGate(q, -1.56967152516089, 12);
  sqcRZGate(q, -0.6196606274631664, 12);
  sqcRYGate(q, -0.046950824402609115, 13);
  sqcRZGate(q, -0.5577736290180476, 13);
  sqcRYGate(q, -1.8671658026556286, 14);
  sqcRZGate(q, -1.4819018872856509, 14);
  sqcRYGate(q, -0.39874520260883184, 15);
  sqcRZGate(q, -2.157630960507098, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.053145008282253776, 0);
  sqcRZGate(q, 1.1436638258856286, 0);
  sqcRYGate(q, 0.02962986560882097, 1);
  sqcRZGate(q, 1.9336791261581865, 1);
  sqcRYGate(q, 3.137886989677179, 2);
  sqcRZGate(q, -2.2279041778946063, 2);
  sqcRYGate(q, 0.012635129558145053, 3);
  sqcRZGate(q, 1.6345226163568576, 3);
  sqcRYGate(q, -0.016886065043828502, 4);
  sqcRZGate(q, -0.008652273656936773, 4);
  sqcRYGate(q, -3.1293374533533767, 5);
  sqcRZGate(q, 0.36643823350921406, 5);
  sqcRYGate(q, -1.5466432161552417, 6);
  sqcRZGate(q, 2.6608544235470966, 6);
  sqcRYGate(q, 1.5765240726550946, 7);
  sqcRZGate(q, -1.0902343494769111, 7);
  sqcRYGate(q, 1.6282966379107222, 8);
  sqcRZGate(q, -1.7523300497659815, 8);
  sqcRYGate(q, -0.056766113424224954, 9);
  sqcRZGate(q, -2.4439784493965346, 9);
  sqcRYGate(q, 3.059484967571822, 10);
  sqcRZGate(q, 1.5592535086121835, 10);
  sqcRYGate(q, -0.06472682369657168, 11);
  sqcRZGate(q, -1.5605810626461083, 11);
  sqcRYGate(q, -3.1414945671282264, 12);
  sqcRZGate(q, -0.6914198287363621, 12);
  sqcRYGate(q, 3.1415331548435375, 13);
  sqcRZGate(q, 2.0799443867782843, 13);
  sqcRYGate(q, -3.1396030551019742, 14);
  sqcRZGate(q, 2.289965421864289, 14);
  sqcRYGate(q, 1.5714270357225253, 15);
  sqcRZGate(q, 1.5706968838717246, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.7959367819670993, 0);
  sqcRZGate(q, -1.7627206926204642, 0);
  sqcRYGate(q, 2.433349329942332, 1);
  sqcRZGate(q, 2.4679933801386906, 1);
  sqcRYGate(q, -0.9837722068925828, 2);
  sqcRZGate(q, -2.829793099251994, 2);
  sqcRYGate(q, -0.3531640839628656, 3);
  sqcRZGate(q, 1.8582623003449044, 3);
  sqcRYGate(q, 1.567746686432767, 4);
  sqcRZGate(q, 1.725774065551131, 4);
  sqcRYGate(q, -1.5675310170943804, 5);
  sqcRZGate(q, 3.1143264590012247, 5);
  sqcRYGate(q, 3.1414548782767726, 6);
  sqcRZGate(q, -0.6011829636436339, 6);
  sqcRYGate(q, -3.1414832177513694, 7);
  sqcRZGate(q, -2.7003780559987227, 7);
  sqcRYGate(q, -3.1415116204336293, 8);
  sqcRZGate(q, 1.4283920342946055, 8);
  sqcRYGate(q, 3.141471924143934, 9);
  sqcRZGate(q, -2.4854454552964214, 9);
  sqcRYGate(q, -1.5702609735526165, 10);
  sqcRZGate(q, -0.01690497159890736, 10);
  sqcRYGate(q, 1.5703856144574604, 11);
  sqcRZGate(q, -0.9630657010660845, 11);
  sqcRYGate(q, -3.140129921696673, 12);
  sqcRZGate(q, -0.004501184717684937, 12);
  sqcRYGate(q, 3.1406304860841265, 13);
  sqcRZGate(q, 3.0289860805470075, 13);
  sqcRYGate(q, -3.1413929828756935, 14);
  sqcRZGate(q, -2.562499010438188, 14);
  sqcRYGate(q, -1.571785847298708, 15);
  sqcRZGate(q, -2.9895471573347745, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.3518286692632926, 0);
  sqcRZGate(q, 2.759295989746326, 0);
  sqcRYGate(q, 2.9902837376726095, 1);
  sqcRZGate(q, 1.1182003694773017, 1);
  sqcRYGate(q, -2.756557105057308, 2);
  sqcRZGate(q, 0.42675712645166985, 2);
  sqcRYGate(q, -3.1271432670678623, 3);
  sqcRZGate(q, -0.0037274970368814664, 3);
  sqcRYGate(q, 2.7755072748797924, 4);
  sqcRZGate(q, -0.6963914503693331, 4);
  sqcRYGate(q, 1.5253033329850965, 5);
  sqcRZGate(q, 2.310298520458646, 5);
  sqcRYGate(q, -0.37139028611674224, 6);
  sqcRZGate(q, -0.7274409698663199, 6);
  sqcRYGate(q, 1.5369811405098739, 7);
  sqcRZGate(q, -2.4356655220300643, 7);
  sqcRYGate(q, -1.6362216989243137, 8);
  sqcRZGate(q, 2.3073444191565944, 8);
  sqcRYGate(q, -1.537929925376513, 9);
  sqcRZGate(q, 0.6961153486640099, 9);
  sqcRYGate(q, -1.6103800336696308, 10);
  sqcRZGate(q, 0.7607920851802954, 10);
  sqcRYGate(q, 0.07017003674005318, 11);
  sqcRZGate(q, 0.7906445984427776, 11);
  sqcRYGate(q, 1.5352575975356082, 12);
  sqcRZGate(q, 0.6895311454172779, 12);
  sqcRYGate(q, 0.04176271368090124, 13);
  sqcRZGate(q, -0.5528944141057233, 13);
  sqcRYGate(q, 2.394725262327619, 14);
  sqcRZGate(q, -2.226668692768228, 14);
  sqcRYGate(q, -0.799166610929409, 15);
  sqcRZGate(q, 2.4200175873396566, 15);

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
