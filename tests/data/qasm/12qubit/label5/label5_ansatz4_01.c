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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -0.0001526035082806132, 0);
  sqcRZGate(q, 2.1298171263901704, 0);
  sqcRYGate(q, 1.570798524910128, 1);
  sqcRZGate(q, -2.649100780923694, 1);
  sqcRYGate(q, 1.5674536683878095, 2);
  sqcRZGate(q, 1.6562426541218946e-05, 2);
  sqcRYGate(q, 1.570826421658041, 3);
  sqcRZGate(q, -1.5712204388404671, 3);
  sqcRYGate(q, -1.54684367146162, 4);
  sqcRZGate(q, -3.061765877076592, 4);
  sqcRYGate(q, -1.5708112174856215, 5);
  sqcRZGate(q, 1.570792125740921, 5);
  sqcRYGate(q, -1.5707825702098488, 6);
  sqcRZGate(q, -1.131406382364916, 6);
  sqcRYGate(q, -1.5657094550054937, 7);
  sqcRZGate(q, 3.141570487666802, 7);
  sqcRYGate(q, -1.570819461606109, 8);
  sqcRZGate(q, -2.821211433385113, 8);
  sqcRYGate(q, 2.9834553363453864, 9);
  sqcRZGate(q, 0.19920993392142394, 9);
  sqcRYGate(q, -0.0527561757761088, 10);
  sqcRZGate(q, -3.1372248728473777, 10);
  sqcRYGate(q, -3.141589663462099, 11);
  sqcRZGate(q, 1.6298210478393225, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 1.5705807764260724, 0);
  sqcRZGate(q, -3.1410321294186128, 0);
  sqcRYGate(q, 1.26703347740695, 1);
  sqcRZGate(q, -2.674254058004721, 1);
  sqcRYGate(q, 0.7004237714071921, 2);
  sqcRZGate(q, 3.141583302439391, 2);
  sqcRYGate(q, 1.5711533816875367, 3);
  sqcRZGate(q, 2.271203067624242, 3);
  sqcRYGate(q, -0.0008729404034175658, 4);
  sqcRZGate(q, 2.484395472168756, 4);
  sqcRYGate(q, -1.5708465837979517, 5);
  sqcRZGate(q, -2.683680309133049, 5);
  sqcRYGate(q, -1.5984623115830283, 6);
  sqcRZGate(q, 1.5120546958904295, 6);
  sqcRYGate(q, 1.50588282065075, 7);
  sqcRZGate(q, 1.5707941506489398, 7);
  sqcRYGate(q, -0.17074003041232969, 8);
  sqcRZGate(q, 3.128553394584226, 8);
  sqcRYGate(q, 0.004173062531082414, 9);
  sqcRZGate(q, 1.3715374014769253, 9);
  sqcRYGate(q, -1.5708392392204154, 10);
  sqcRZGate(q, 1.8643724419953251, 10);
  sqcRYGate(q, 3.141585082031641, 11);
  sqcRZGate(q, -0.3738688227861124, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 3.0845113928681824, 0);
  sqcRZGate(q, 1.5712986643363118, 0);
  sqcRYGate(q, 1.5707957965975314, 1);
  sqcRZGate(q, 1.5707162619271404, 1);
  sqcRYGate(q, 1.570797457638803, 2);
  sqcRZGate(q, -3.123332287029501, 2);
  sqcRYGate(q, 1.5744494142233008, 3);
  sqcRZGate(q, 1.750010699382669, 3);
  sqcRYGate(q, -7.966595098274354e-06, 4);
  sqcRZGate(q, 2.148170506242199, 4);
  sqcRYGate(q, 2.757078079618225e-06, 5);
  sqcRZGate(q, -0.4570634397300799, 5);
  sqcRYGate(q, 1.6769152650475931, 6);
  sqcRZGate(q, -3.1278490287922187, 6);
  sqcRYGate(q, -0.9571928475535061, 7);
  sqcRZGate(q, 0.4615841727041827, 7);
  sqcRYGate(q, 2.757166882671192, 8);
  sqcRZGate(q, 0.8867135673896147, 8);
  sqcRYGate(q, -1.5029927011979762, 9);
  sqcRZGate(q, 1.669689569229521, 9);
  sqcRYGate(q, -0.6363291409802487, 10);
  sqcRZGate(q, 0.0708823795729241, 10);
  sqcRYGate(q, 3.1415915873144895, 11);
  sqcRZGate(q, -0.8758094973641262, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 1.5707963318865044, 0);
  sqcRZGate(q, 3.140517431596167, 0);
  sqcRYGate(q, -0.2087456091119755, 1);
  sqcRZGate(q, -1.5707162627899711, 1);
  sqcRYGate(q, -1.5707979880175957, 2);
  sqcRZGate(q, -1.5708893375189907, 2);
  sqcRYGate(q, -3.1412425517426605, 3);
  sqcRZGate(q, 1.748058920930192, 3);
  sqcRYGate(q, -1.5707848286066657, 4);
  sqcRZGate(q, -3.1415921764792585, 4);
  sqcRYGate(q, -1.2446894323003548, 5);
  sqcRZGate(q, -1.570940295958584, 5);
  sqcRYGate(q, 0.010928782692257229, 6);
  sqcRZGate(q, 1.5569037318046526, 6);
  sqcRYGate(q, 3.141562205843441, 7);
  sqcRZGate(q, 2.032374859608841, 7);
  sqcRYGate(q, -0.0011112223922614681, 8);
  sqcRZGate(q, 2.282391379478244, 8);
  sqcRYGate(q, 3.140127531405908, 9);
  sqcRZGate(q, 0.09886033657828501, 9);
  sqcRYGate(q, 1.5707770908258465, 10);
  sqcRZGate(q, -2.7860767675160315e-06, 10);
  sqcRYGate(q, 1.5707969711163365, 11);
  sqcRZGate(q, 1.5709497313361798, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 1.5797590777666275, 0);
  sqcRZGate(q, -0.17741630489358307, 0);
  sqcRYGate(q, -1.5707985425501854, 1);
  sqcRZGate(q, -1.7992837551995562, 1);
  sqcRYGate(q, -1.5707950206912817, 2);
  sqcRZGate(q, 1.393296531789781, 2);
  sqcRYGate(q, 0.06856377832750814, 3);
  sqcRZGate(q, -1.7972849346050166, 3);
  sqcRYGate(q, 1.5707070762174509, 4);
  sqcRZGate(q, 1.3938603783346328, 4);
  sqcRYGate(q, -1.6894434997270638, 5);
  sqcRZGate(q, -1.7990678091333647, 5);
  sqcRYGate(q, 0.1855627637409298, 6);
  sqcRZGate(q, 2.9646949543552017, 6);
  sqcRYGate(q, 1.5708004182179556, 7);
  sqcRZGate(q, -0.22826058394922327, 7);
  sqcRYGate(q, 1.5708011703792728, 8);
  sqcRZGate(q, -1.747854281820501, 8);
  sqcRYGate(q, -1.5707948903601643, 9);
  sqcRZGate(q, -1.7992300179405107, 9);
  sqcRYGate(q, 1.5707951625458267, 10);
  sqcRZGate(q, -0.17705394244665068, 10);
  sqcRYGate(q, -2.294859791894923, 11);
  sqcRZGate(q, 1.3425023792279962, 11);

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
