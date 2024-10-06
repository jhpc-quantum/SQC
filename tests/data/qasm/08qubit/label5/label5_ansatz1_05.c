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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -2.2201618420189266, 0);
  sqcRZGate(q, 2.431501237057794, 0);
  sqcRYGate(q, 1.6891095172157966, 1);
  sqcRZGate(q, 2.3995095336739185, 1);
  sqcRYGate(q, -0.02138263608487118, 2);
  sqcRZGate(q, -2.138434883516334, 2);
  sqcRYGate(q, -1.5700829448375562, 3);
  sqcRZGate(q, 1.5762136474396398, 3);
  sqcRYGate(q, 1.6645510935988774, 4);
  sqcRZGate(q, -3.0815800245032823, 4);
  sqcRYGate(q, -0.26039388008770725, 5);
  sqcRZGate(q, 3.082993612591256, 5);
  sqcRYGate(q, 1.488782551922852, 6);
  sqcRZGate(q, 2.0093556175001073, 6);
  sqcRYGate(q, -2.047384423247469, 7);
  sqcRZGate(q, -2.7567648848768416, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.014233077286967877, 0);
  sqcRZGate(q, 2.9339467539447623, 0);
  sqcRYGate(q, -0.316424403549816, 1);
  sqcRZGate(q, -2.3809214595186643, 1);
  sqcRYGate(q, -1.201951121884516, 2);
  sqcRZGate(q, -0.2890328438004302, 2);
  sqcRYGate(q, -1.4904069747080853, 3);
  sqcRZGate(q, 1.5654809051462977, 3);
  sqcRYGate(q, 1.5674121378073165, 4);
  sqcRZGate(q, 3.139489184951852, 4);
  sqcRYGate(q, 1.829369454111477, 5);
  sqcRZGate(q, 3.011099555611933, 5);
  sqcRYGate(q, -2.7182674945274568, 6);
  sqcRZGate(q, 0.6959592284846963, 6);
  sqcRYGate(q, -0.013758493750291931, 7);
  sqcRZGate(q, -2.9308269803307905, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.040269143509267, 0);
  sqcRZGate(q, 0.9293030763595728, 0);
  sqcRYGate(q, 1.571829833656327, 1);
  sqcRZGate(q, -1.2352931168059118, 1);
  sqcRYGate(q, 0.17052453572867687, 2);
  sqcRZGate(q, 0.0035586953790556213, 2);
  sqcRYGate(q, 1.5575572519665748, 3);
  sqcRZGate(q, 0.14238132699590622, 3);
  sqcRYGate(q, -1.5623217752544865, 4);
  sqcRZGate(q, 1.57077160349263, 4);
  sqcRYGate(q, 3.140508855204873, 5);
  sqcRZGate(q, -3.0431853714730988, 5);
  sqcRYGate(q, 1.7691772986586682, 6);
  sqcRZGate(q, -2.5067620264353243, 6);
  sqcRYGate(q, 3.0788416138362718, 7);
  sqcRZGate(q, -0.9862669743353001, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.05893361803207828, 0);
  sqcRZGate(q, -0.15934720936593738, 0);
  sqcRYGate(q, -2.4402045891607016, 1);
  sqcRZGate(q, 2.1044036966047006, 1);
  sqcRYGate(q, -1.5717526648233502, 2);
  sqcRZGate(q, -0.021537874011525737, 2);
  sqcRYGate(q, -0.026518419651457226, 3);
  sqcRZGate(q, 2.999027625289452, 3);
  sqcRYGate(q, -1.5624824336364507, 4);
  sqcRZGate(q, -1.5717161320285902, 4);
  sqcRYGate(q, 2.869907322080889, 5);
  sqcRZGate(q, -1.3356791488125603, 5);
  sqcRYGate(q, -1.2782406299332, 6);
  sqcRZGate(q, 2.9669461646211226, 6);
  sqcRYGate(q, -1.589629275650147, 7);
  sqcRZGate(q, -3.121156711095649, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.6154142218465815, 0);
  sqcRZGate(q, 1.5576661841449395, 0);
  sqcRYGate(q, 1.6075845926955088, 1);
  sqcRZGate(q, -0.07927562560212695, 1);
  sqcRYGate(q, -0.0955918476006552, 2);
  sqcRZGate(q, -1.54623194841262, 2);
  sqcRYGate(q, 1.4908701355253755, 3);
  sqcRZGate(q, 0.00018280614482879545, 3);
  sqcRYGate(q, 2.873991179083585, 4);
  sqcRZGate(q, -1.9660847703401103, 4);
  sqcRYGate(q, -1.574920766581708, 5);
  sqcRZGate(q, -1.5187866468928448, 5);
  sqcRYGate(q, 1.5085478891080246, 6);
  sqcRZGate(q, -1.552822197338495, 6);
  sqcRYGate(q, 1.3900495710807945, 7);
  sqcRZGate(q, -0.07745046748831985, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.870416579152009, 0);
  sqcRZGate(q, -0.0750136202222933, 0);
  sqcRYGate(q, 1.490206288492674, 1);
  sqcRZGate(q, -1.3962696339065181, 1);
  sqcRYGate(q, 1.0616132646853655, 2);
  sqcRZGate(q, -0.004123322674407091, 2);
  sqcRYGate(q, -1.5439577357878742, 3);
  sqcRZGate(q, 3.088476068663172, 3);
  sqcRYGate(q, 0.03758980672821988, 4);
  sqcRZGate(q, -1.1649688658074282, 4);
  sqcRYGate(q, 3.1410001070585896, 5);
  sqcRZGate(q, 0.06550089246709184, 5);
  sqcRYGate(q, 1.573269377353447, 6);
  sqcRZGate(q, 0.0013327954581665582, 6);
  sqcRYGate(q, -1.2859697993150618, 7);
  sqcRZGate(q, 0.3569370556873563, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.603022515042298, 0);
  sqcRZGate(q, -1.5137781373765034, 0);
  sqcRYGate(q, 0.0011593235787578026, 1);
  sqcRZGate(q, 2.7706438360053744, 1);
  sqcRYGate(q, -1.5726950560054354, 2);
  sqcRZGate(q, 0.264198984123157, 2);
  sqcRYGate(q, 2.954604034067744, 3);
  sqcRZGate(q, 3.0366249992020378, 3);
  sqcRYGate(q, 1.573622289135038, 4);
  sqcRZGate(q, -0.0027652237207460573, 4);
  sqcRYGate(q, 1.3257561710509362, 5);
  sqcRZGate(q, 3.0876261991907312, 5);
  sqcRYGate(q, -1.3203905767470294, 6);
  sqcRZGate(q, 2.658136220990775, 6);
  sqcRYGate(q, -2.95391122858361, 7);
  sqcRZGate(q, 0.11763331972494702, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.3366413336959853, 0);
  sqcRZGate(q, 1.2569464968535007, 0);
  sqcRYGate(q, 1.5693755874003996, 1);
  sqcRZGate(q, -0.12571933150749862, 1);
  sqcRYGate(q, 1.0721598011614906, 2);
  sqcRZGate(q, 2.3861044597441787, 2);
  sqcRYGate(q, 0.0005364997953319579, 3);
  sqcRZGate(q, -1.516057808836889, 3);
  sqcRYGate(q, -3.0811792685788677, 4);
  sqcRZGate(q, 1.5702421512197118, 4);
  sqcRYGate(q, -0.26323477198526457, 5);
  sqcRZGate(q, -3.0961645509340765, 5);
  sqcRYGate(q, -0.019328816232446616, 6);
  sqcRZGate(q, -2.793881184662594, 6);
  sqcRYGate(q, -0.046789547497164366, 7);
  sqcRZGate(q, -1.4197692538115119, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5685564071225966, 0);
  sqcRZGate(q, 0.8435747021024218, 0);
  sqcRYGate(q, 3.141009297833385, 1);
  sqcRZGate(q, 1.9981259676230116, 1);
  sqcRYGate(q, -0.00028782746066378516, 2);
  sqcRZGate(q, -1.6703920466809823, 2);
  sqcRYGate(q, -1.5703374749584995, 3);
  sqcRZGate(q, -1.0033002407894276, 3);
  sqcRYGate(q, 1.571294619880594, 4);
  sqcRZGate(q, -2.297133759855554, 4);
  sqcRYGate(q, -1.8204814548813122, 5);
  sqcRZGate(q, -2.575674362716205, 5);
  sqcRYGate(q, -0.007519232813519535, 6);
  sqcRZGate(q, -2.165665064076287, 6);
  sqcRYGate(q, -1.620461607864283, 7);
  sqcRZGate(q, 1.943038297660664, 7);

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
