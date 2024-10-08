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

  sqcRYGate(q, -0.3631334066168396, 0);
  sqcRZGate(q, 3.0750062523555552, 0);
  sqcRYGate(q, 2.531266787097564, 1);
  sqcRZGate(q, 1.578983604349014, 1);
  sqcRYGate(q, 0.5937886762088835, 2);
  sqcRZGate(q, 1.5073837401102883, 2);
  sqcRYGate(q, -0.6896156398738169, 3);
  sqcRZGate(q, -1.5359361342268487, 3);
  sqcRYGate(q, 1.5601519169313423, 4);
  sqcRZGate(q, 2.82709708165073, 4);
  sqcRYGate(q, -2.6697596217760653, 5);
  sqcRZGate(q, -1.4797653012728582, 5);
  sqcRYGate(q, -1.9921646195900853, 6);
  sqcRZGate(q, -1.4634737076403534, 6);
  sqcRYGate(q, -1.8384678486759716, 7);
  sqcRZGate(q, 2.8627584204280017, 7);
  sqcRYGate(q, -1.838463464625745, 8);
  sqcRZGate(q, -2.862760299851899, 8);
  sqcRYGate(q, 1.992164060292307, 9);
  sqcRZGate(q, 1.4634714058041256, 9);
  sqcRYGate(q, 0.47183315353159366, 10);
  sqcRZGate(q, 1.661822690698305, 10);
  sqcRYGate(q, 1.5814395782418966, 11);
  sqcRZGate(q, 2.8270974916234968, 11);
  sqcRYGate(q, -0.6896149550160958, 12);
  sqcRZGate(q, 1.5359356519706333, 12);
  sqcRYGate(q, -2.547802810896299, 13);
  sqcRZGate(q, 1.5073832626164398, 13);
  sqcRYGate(q, -2.531268561598817, 14);
  sqcRZGate(q, -1.5789668114628415, 14);
  sqcRYGate(q, 0.36313201238069426, 15);
  sqcRZGate(q, 0.06650529551540459, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.05748405654748516, 0);
  sqcRZGate(q, -1.4835179738599935, 0);
  sqcRYGate(q, 1.6072677285284604, 1);
  sqcRZGate(q, 0.022233641686948857, 1);
  sqcRYGate(q, 1.6167292406894254, 2);
  sqcRZGate(q, -1.6636308050447903, 2);
  sqcRYGate(q, 2.63636756512131, 3);
  sqcRZGate(q, -1.53559830150164, 3);
  sqcRYGate(q, -1.4515722618510003, 4);
  sqcRZGate(q, 0.0035938711715424176, 4);
  sqcRYGate(q, -2.7641610436182735, 5);
  sqcRZGate(q, 3.056391962037814, 5);
  sqcRYGate(q, 0.3118966510010789, 6);
  sqcRZGate(q, -1.7460891721299028, 6);
  sqcRYGate(q, -2.765583812707854, 7);
  sqcRZGate(q, 0.07866105822809823, 7);
  sqcRYGate(q, 0.37600988606704894, 8);
  sqcRZGate(q, -3.062931319087142, 8);
  sqcRYGate(q, 0.31189674015266, 9);
  sqcRZGate(q, 1.7460892521143585, 9);
  sqcRYGate(q, -2.7641614784587087, 10);
  sqcRZGate(q, 3.056389400819908, 10);
  sqcRYGate(q, -1.4515730762210102, 11);
  sqcRZGate(q, 0.003592635437293268, 11);
  sqcRYGate(q, 2.6363676824885327, 12);
  sqcRZGate(q, -1.6059980869130044, 12);
  sqcRYGate(q, 1.61671968948687, 13);
  sqcRZGate(q, -1.6636330356416351, 13);
  sqcRYGate(q, 1.6072665587337658, 14);
  sqcRZGate(q, 3.1193604136289315, 14);
  sqcRYGate(q, 3.0841084076570473, 15);
  sqcRZGate(q, 1.658010452932701, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.720110511144151, 0);
  sqcRZGate(q, -1.5439133412519057, 0);
  sqcRYGate(q, -2.249359388134862, 1);
  sqcRZGate(q, 1.3951742248862784, 1);
  sqcRYGate(q, -3.0086310712758695, 2);
  sqcRZGate(q, -0.6390226322405544, 2);
  sqcRYGate(q, 3.0666289401063045, 3);
  sqcRZGate(q, 0.052950562894814146, 3);
  sqcRYGate(q, 1.590865526898955, 4);
  sqcRZGate(q, -1.8709467274123734, 4);
  sqcRYGate(q, 0.364409392381846, 5);
  sqcRZGate(q, -1.519862655083613, 5);
  sqcRYGate(q, -2.727041704201473, 6);
  sqcRZGate(q, -0.16735474727018484, 6);
  sqcRYGate(q, -1.8115835463302696, 7);
  sqcRZGate(q, 1.5280361979369614, 7);
  sqcRYGate(q, 1.3300150743042112, 8);
  sqcRZGate(q, -1.5280344570292916, 8);
  sqcRYGate(q, -2.727041051234594, 9);
  sqcRZGate(q, 0.1673547475253647, 9);
  sqcRYGate(q, -0.36441005441801355, 10);
  sqcRZGate(q, -1.5198612347123088, 10);
  sqcRYGate(q, 1.5507261467037168, 11);
  sqcRZGate(q, 1.8709455950854066, 11);
  sqcRYGate(q, -3.0666292334829515, 12);
  sqcRZGate(q, 3.0886363131979575, 12);
  sqcRYGate(q, -3.0086318152112246, 13);
  sqcRZGate(q, 2.502565678682826, 13);
  sqcRYGate(q, 2.2493606439245806, 14);
  sqcRZGate(q, -1.395173913927044, 14);
  sqcRYGate(q, -0.42148376018673434, 15);
  sqcRZGate(q, 1.5438978429731876, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.16676990898511568, 0);
  sqcRZGate(q, -2.746804454708374, 0);
  sqcRYGate(q, 1.5712286095034258, 1);
  sqcRZGate(q, 1.9554323987556668, 1);
  sqcRYGate(q, -1.5942648768071743, 2);
  sqcRZGate(q, 2.0014738649368224, 2);
  sqcRYGate(q, -2.565447316679199, 3);
  sqcRZGate(q, 0.43921037646468447, 3);
  sqcRYGate(q, -1.6090737877397532, 4);
  sqcRZGate(q, 2.0861613444125404, 4);
  sqcRYGate(q, 2.2486249281964072, 5);
  sqcRZGate(q, -2.731769386336257, 5);
  sqcRYGate(q, -2.6603193489634362, 6);
  sqcRZGate(q, -2.8350737513121884, 6);
  sqcRYGate(q, 1.0631071524398783, 7);
  sqcRZGate(q, 0.5252596609997772, 7);
  sqcRYGate(q, 1.0631082440147672, 8);
  sqcRZGate(q, -2.842032596604856, 8);
  sqcRYGate(q, 2.660319741672389, 9);
  sqcRZGate(q, -2.6232876911458254, 9);
  sqcRYGate(q, 0.8929667939574362, 10);
  sqcRZGate(q, -2.726593789340909, 10);
  sqcRYGate(q, -1.6090734298545377, 11);
  sqcRZGate(q, 1.8802547787726942, 11);
  sqcRYGate(q, 2.5654474070439472, 12);
  sqcRZGate(q, 0.38561285215964597, 12);
  sqcRYGate(q, -1.5473365403591797, 13);
  sqcRZGate(q, -1.1766383614690588, 13);
  sqcRYGate(q, 1.571228784756955, 14);
  sqcRZGate(q, 2.010981463552713, 14);
  sqcRYGate(q, -0.1667705435831367, 15);
  sqcRZGate(q, -2.7115478366336756, 15);

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
