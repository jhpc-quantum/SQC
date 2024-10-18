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

  sqcRYGate(q, -2.9613826103950567, 0);
  sqcRZGate(q, 2.1826962672368984, 0);
  sqcRYGate(q, 2.327867421729414, 1);
  sqcRZGate(q, 0.026892705857401115, 1);
  sqcRYGate(q, 2.1013704811595866, 2);
  sqcRZGate(q, -2.613065540278095, 2);
  sqcRYGate(q, 3.034351564191742, 3);
  sqcRZGate(q, 2.8835988276438385, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.5011922709511805, 0);
  sqcRZGate(q, 1.932294294944458, 0);
  sqcRYGate(q, 1.6344607101848245, 1);
  sqcRZGate(q, 1.9824917622906912, 1);
  sqcRYGate(q, 0.3510101978636308, 2);
  sqcRZGate(q, -1.8983339027694301, 2);
  sqcRYGate(q, 0.2828813456353849, 3);
  sqcRZGate(q, 0.16960068982399346, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.3724925967574861, 0);
  sqcRZGate(q, 0.753633093429855, 0);
  sqcRYGate(q, -2.0557636042218235, 1);
  sqcRZGate(q, -0.9285602821673997, 1);
  sqcRYGate(q, 2.8578302341269572, 2);
  sqcRZGate(q, 1.721321222972767, 2);
  sqcRYGate(q, -2.649877781659011, 3);
  sqcRZGate(q, -1.14077742838008, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.8160497416731669, 0);
  sqcRZGate(q, -0.5929840418420946, 0);
  sqcRYGate(q, 2.8817276750713527, 1);
  sqcRZGate(q, -1.3843101685609245, 1);
  sqcRYGate(q, -2.5951398219947714, 2);
  sqcRZGate(q, 0.2194310987418714, 2);
  sqcRYGate(q, 0.4966164985911404, 3);
  sqcRZGate(q, -1.7978113153215645, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.3989155779011861, 0);
  sqcRZGate(q, 2.6628172673135126, 0);
  sqcRYGate(q, -0.2698054511664454, 1);
  sqcRZGate(q, 1.0325810919929084, 1);
  sqcRYGate(q, -2.051818102998281, 2);
  sqcRZGate(q, -0.1397367848592559, 2);
  sqcRYGate(q, 1.3941374277819811, 3);
  sqcRZGate(q, 1.7624829578886985, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.4221341904345004, 0);
  sqcRZGate(q, 2.1967246525932564, 0);
  sqcRYGate(q, 0.27803367945652574, 1);
  sqcRZGate(q, -2.549629634895643, 1);
  sqcRYGate(q, -1.1449203639243324, 2);
  sqcRZGate(q, -0.20374201798541078, 2);
  sqcRYGate(q, -3.139472275732784, 3);
  sqcRZGate(q, -2.4249628980376876, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6258845931958374, 0);
  sqcRZGate(q, -0.6404315497102911, 0);
  sqcRYGate(q, 1.0665375983454586, 1);
  sqcRZGate(q, 0.9498211439791548, 1);
  sqcRYGate(q, 2.0144569636506704, 2);
  sqcRZGate(q, 1.729285810954049, 2);
  sqcRYGate(q, 3.114940729725908, 3);
  sqcRZGate(q, 2.6639823916440353, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.4097233838614596, 0);
  sqcRZGate(q, 0.45528513309394025, 0);
  sqcRYGate(q, -1.5599218495879543, 1);
  sqcRZGate(q, -1.0625171236787996, 1);
  sqcRYGate(q, 0.5429221888278902, 2);
  sqcRZGate(q, 1.4351085516509405, 2);
  sqcRYGate(q, -1.8924402919701873, 3);
  sqcRZGate(q, -0.9403282284806957, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.090065277056666, 0);
  sqcRZGate(q, 0.45885171495687516, 0);
  sqcRYGate(q, -0.5950071221783717, 1);
  sqcRZGate(q, 0.9465634389972216, 1);
  sqcRYGate(q, 2.4729371139501577, 2);
  sqcRZGate(q, -2.7352837916745, 2);
  sqcRYGate(q, -2.8374245433904526, 3);
  sqcRZGate(q, -2.0589474164197155, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -3.095052808291541, 0);
  sqcRZGate(q, -1.3616969549662459, 0);
  sqcRYGate(q, 2.2091352537367204, 1);
  sqcRZGate(q, -1.5694242434830787, 1);
  sqcRYGate(q, -1.7217732872365126, 2);
  sqcRZGate(q, 1.3934227222437885, 2);
  sqcRYGate(q, 2.685767442146396, 3);
  sqcRZGate(q, -2.551192281496381, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.0240348502771663, 0);
  sqcRZGate(q, 2.7899299881027875, 0);
  sqcRYGate(q, 0.34837297712458837, 1);
  sqcRZGate(q, 0.1331545511137003, 1);
  sqcRYGate(q, -0.4538109765054453, 2);
  sqcRZGate(q, 1.2268619646762549, 2);
  sqcRYGate(q, -1.4747184246486178, 3);
  sqcRZGate(q, -1.3728341982364822, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.1431850449786546, 0);
  sqcRZGate(q, 1.473076265717314, 0);
  sqcRYGate(q, -2.4870238675259464, 1);
  sqcRZGate(q, 0.2830755675927901, 1);
  sqcRYGate(q, -0.2828692889626438, 2);
  sqcRZGate(q, -2.2404117994673527, 2);
  sqcRYGate(q, -2.4411085575023668, 3);
  sqcRZGate(q, 0.7185754722509093, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.2410637849354913, 0);
  sqcRZGate(q, -0.09930882264844024, 0);
  sqcRYGate(q, -1.9759565008342197, 1);
  sqcRZGate(q, -0.21673172578389854, 1);
  sqcRYGate(q, -0.7536112984248866, 2);
  sqcRZGate(q, -0.9498979589034623, 2);
  sqcRYGate(q, -0.7251115026228585, 3);
  sqcRZGate(q, 1.203286130019472, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.2193876668885952, 0);
  sqcRZGate(q, -1.066792219869309, 0);
  sqcRYGate(q, 0.6046054183590914, 1);
  sqcRZGate(q, 0.1633557191168693, 1);
  sqcRYGate(q, -1.6507154273613596, 2);
  sqcRZGate(q, -0.12036325196204453, 2);
  sqcRYGate(q, -1.4510034304242647, 3);
  sqcRZGate(q, 1.0296384471143112, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.7108561394223551, 0);
  sqcRZGate(q, 0.2675770378265155, 0);
  sqcRYGate(q, 2.4542482876512604, 1);
  sqcRZGate(q, 1.8004400623646584, 1);
  sqcRYGate(q, -2.444494222928459, 2);
  sqcRZGate(q, 2.076430310022518, 2);
  sqcRYGate(q, -0.7504587946670324, 3);
  sqcRZGate(q, 0.4009419048264875, 3);

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
