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

  sqcRYGate(q, 2.779894294228176, 0);
  sqcRYGate(q, -0.5492188139996884, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4585870118389317, 0);
  sqcRYGate(q, -1.019139516202733, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5399745878947515, 2);
  sqcRYGate(q, -1.3313749506617318, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.77945741638292, 2);
  sqcRYGate(q, 1.6120434364638216, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.46354967023762, 1);
  sqcRYGate(q, -0.727482703030623, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3224198393127695, 1);
  sqcRYGate(q, 3.0259371430011237, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7216928217750187, 0);
  sqcRYGate(q, -1.6299554886875525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1981685458346738, 0);
  sqcRYGate(q, 0.11366077352646807, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8181266862229878, 2);
  sqcRYGate(q, -3.031243714651019, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4551350308540991, 2);
  sqcRYGate(q, -0.029809163246057778, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8655214906340342, 1);
  sqcRYGate(q, 0.30076455981640365, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9741096479753795, 1);
  sqcRYGate(q, -2.2160188684928466, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8831994292574575, 0);
  sqcRYGate(q, 0.544043739706705, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9276652079598761, 0);
  sqcRYGate(q, 2.8129531684610343, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3424561865027962, 2);
  sqcRYGate(q, -0.8794286709378262, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.28589060373475, 2);
  sqcRYGate(q, 2.2033492856060084, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1392125495741667, 1);
  sqcRYGate(q, 0.9172236004266558, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.477051410757138, 1);
  sqcRYGate(q, 2.549045745489451, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.817451886584955, 0);
  sqcRYGate(q, 1.3032677717616967, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4547494051330574, 0);
  sqcRYGate(q, 0.6272424873167163, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7929906314809436, 2);
  sqcRYGate(q, -0.3748332039526229, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.140160046655283, 2);
  sqcRYGate(q, -0.13957811268468756, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7657258130021942, 1);
  sqcRYGate(q, -0.599193105050653, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.130874355701612, 1);
  sqcRYGate(q, -2.092719800437516, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5088321105242564, 0);
  sqcRYGate(q, 0.929790659011724, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6197088882399354, 0);
  sqcRYGate(q, 0.7441272335858702, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0119151087968588, 2);
  sqcRYGate(q, 2.2990368463035655, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5909184276129538, 2);
  sqcRYGate(q, 1.1152904909319394, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07436831332844256, 1);
  sqcRYGate(q, 1.523935970230444, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.724934544111013, 1);
  sqcRYGate(q, 1.6228683909735246, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.754740345862065, 0);
  sqcRYGate(q, -1.940703399226515, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6080476883596271, 0);
  sqcRYGate(q, 1.7429847919747905, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.94000410562837, 2);
  sqcRYGate(q, 1.1131227242085597, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5373807919031366, 2);
  sqcRYGate(q, -0.6518079150297025, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5160659691168894, 1);
  sqcRYGate(q, -2.004868637769598, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9956182786790415, 1);
  sqcRYGate(q, -1.2771314879047155, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1980318378131163, 0);
  sqcRYGate(q, -1.6283828633148383, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1931732249353666, 0);
  sqcRYGate(q, -2.1583423287136103, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7771972671773231, 2);
  sqcRYGate(q, -2.288043689087825, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6785576196542282, 2);
  sqcRYGate(q, -2.4061284054924696, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3055226299467487, 1);
  sqcRYGate(q, 0.3332240313413128, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1195375110568024, 1);
  sqcRYGate(q, -0.06557233754970818, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0330806445507974, 0);
  sqcRYGate(q, -0.9062025479097559, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4201005380677743, 0);
  sqcRYGate(q, -2.3792208196590225, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.081859136673688, 2);
  sqcRYGate(q, 2.5917259287628327, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.12983781261529792, 2);
  sqcRYGate(q, 1.9222298270307485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.598878823050509, 1);
  sqcRYGate(q, -0.2289470312302928, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.970160982814504, 1);
  sqcRYGate(q, -2.224872928439688, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3510107012918469, 0);
  sqcRYGate(q, 0.9740869801240559, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.38950693555811083, 0);
  sqcRYGate(q, -3.115265347424221, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7567606244479708, 2);
  sqcRYGate(q, 1.9260216586549488, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4093308377509777, 2);
  sqcRYGate(q, -2.55879964910176, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7572647302703208, 1);
  sqcRYGate(q, -2.6667494681371138, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7716618698277716, 1);
  sqcRYGate(q, 2.9651515246122115, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7814569469490558, 0);
  sqcRYGate(q, -2.5757176688272376, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2947001063457879, 0);
  sqcRYGate(q, -1.3854254958014047, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.607304530346422, 2);
  sqcRYGate(q, 0.561945868523722, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3706444289601514, 2);
  sqcRYGate(q, -2.4064292368741986, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.15210416949805164, 1);
  sqcRYGate(q, -0.9250098611371973, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4304517512889736, 1);
  sqcRYGate(q, 0.2827246458730844, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.43613382867512485, 0);
  sqcRYGate(q, 0.3672953630962872, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.07493209309884251, 0);
  sqcRYGate(q, 2.5109544800305685, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0305554480542805, 2);
  sqcRYGate(q, 2.708032955868115, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.753019855459529, 2);
  sqcRYGate(q, 2.9980690884412984, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.514278252579799, 1);
  sqcRYGate(q, -2.438886502125393, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9822769585726974, 1);
  sqcRYGate(q, -2.8629636920962924, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7934137247309119, 0);
  sqcRYGate(q, -1.8274326280330426, 1);
  sqcRYGate(q, -2.355421542709487, 2);
  sqcRYGate(q, 1.7290700127597551, 3);

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
