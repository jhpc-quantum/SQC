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

  sqcRYGate(q, -0.0032326143403098584, 0);
  sqcRZGate(q, -1.5172013118474297, 0);
  sqcRYGate(q, -3.1360470895203556, 1);
  sqcRZGate(q, 1.664456738800416, 1);
  sqcRYGate(q, 1.5666018747597281, 2);
  sqcRZGate(q, 0.03714966947258747, 2);
  sqcRYGate(q, 2.8982873299257035, 3);
  sqcRZGate(q, 1.6458643928369874, 3);
  sqcRYGate(q, -0.06189907145957996, 4);
  sqcRZGate(q, 1.521595460248549, 4);
  sqcRYGate(q, -3.129164884774858, 5);
  sqcRZGate(q, 1.547805391412474, 5);
  sqcRYGate(q, -1.21300741354022, 6);
  sqcRZGate(q, -3.1338765305379535, 6);
  sqcRYGate(q, -2.8749478364672587, 7);
  sqcRZGate(q, -0.02584309330819146, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.892370807458461, 0);
  sqcRZGate(q, -0.009906806868168694, 0);
  sqcRYGate(q, -1.6374300211001316, 1);
  sqcRZGate(q, 0.1258757759595997, 1);
  sqcRYGate(q, 1.566653599742663, 2);
  sqcRZGate(q, 1.8416252267604132, 2);
  sqcRYGate(q, 3.1283123384087492, 3);
  sqcRZGate(q, 0.16346519363419604, 3);
  sqcRYGate(q, -3.1310396992574496, 4);
  sqcRZGate(q, 3.0675599406809315, 4);
  sqcRYGate(q, 1.5204154136651686, 5);
  sqcRZGate(q, 3.134403144338464, 5);
  sqcRYGate(q, -0.9721040007449279, 6);
  sqcRZGate(q, -0.008958464114442585, 6);
  sqcRYGate(q, 0.0699084781418694, 7);
  sqcRZGate(q, 0.021757125287588868, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.1266934736493988, 0);
  sqcRZGate(q, -0.08686319792226715, 0);
  sqcRYGate(q, 3.077956876740197, 1);
  sqcRZGate(q, -1.4451019411854198, 1);
  sqcRYGate(q, -3.114218467451182, 2);
  sqcRZGate(q, 0.27407673687061257, 2);
  sqcRYGate(q, -0.24796568814493153, 3);
  sqcRZGate(q, 3.0518376705928696, 3);
  sqcRYGate(q, 1.4070960443594638, 4);
  sqcRZGate(q, 0.000984498437407666, 4);
  sqcRYGate(q, 1.2502844498851722, 5);
  sqcRZGate(q, -3.1308124134411073, 5);
  sqcRYGate(q, 0.10927666915901038, 6);
  sqcRZGate(q, -3.051655647982147, 6);
  sqcRYGate(q, -3.1014776453875434, 7);
  sqcRZGate(q, 2.8812500730030277, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.141515438739739, 0);
  sqcRZGate(q, 1.5006555838585862, 0);
  sqcRYGate(q, -1.4849524743891553, 1);
  sqcRZGate(q, -3.13487103606603, 1);
  sqcRYGate(q, 0.22572281216353662, 2);
  sqcRZGate(q, -1.5696832000795264, 2);
  sqcRYGate(q, 3.066686422152938, 3);
  sqcRZGate(q, -1.5711360508707388, 3);
  sqcRYGate(q, -1.4054564807356025, 4);
  sqcRZGate(q, -3.1404438355477797, 4);
  sqcRYGate(q, -0.1758261390959417, 5);
  sqcRZGate(q, 0.014829030830992239, 5);
  sqcRYGate(q, -0.0014719021668012644, 6);
  sqcRZGate(q, 3.0544794507949193, 6);
  sqcRYGate(q, 3.138261614288123, 7);
  sqcRZGate(q, -0.26004142392836727, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5711604692678973, 0);
  sqcRZGate(q, -0.0003069529112886826, 0);
  sqcRYGate(q, 1.5696432432588483, 1);
  sqcRZGate(q, 1.5701835130495425, 1);
  sqcRYGate(q, 1.5665492317977494, 2);
  sqcRZGate(q, -0.0002923200132665116, 2);
  sqcRYGate(q, 1.5984587089659639, 3);
  sqcRZGate(q, -0.0003100900095311942, 3);
  sqcRYGate(q, -1.6109313842342388, 4);
  sqcRZGate(q, 3.1398064675315074, 4);
  sqcRYGate(q, -1.4168487746948206, 5);
  sqcRZGate(q, 3.1390186463366074, 5);
  sqcRYGate(q, 1.5431369127011891, 6);
  sqcRZGate(q, 3.140639317666852, 6);
  sqcRYGate(q, 1.5651275175442272, 7);
  sqcRZGate(q, -0.0008447888504417682, 7);

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
