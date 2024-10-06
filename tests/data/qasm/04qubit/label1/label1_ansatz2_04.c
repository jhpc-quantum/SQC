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

  sqcRYGate(q, -1.9260512405158323, 0);
  sqcRZGate(q, -1.2740003116366065, 0);
  sqcRYGate(q, 1.4565786829940879, 1);
  sqcRZGate(q, -1.4483190980194713, 1);
  sqcRYGate(q, 0.6193910435814666, 2);
  sqcRZGate(q, 2.6258519727583147, 2);
  sqcRYGate(q, 2.0778528853846754, 3);
  sqcRZGate(q, -2.5498727453134764, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.354031836297711, 0);
  sqcRZGate(q, 0.30954901546358055, 0);
  sqcRYGate(q, -1.963585470874416, 1);
  sqcRZGate(q, 2.85874831072781, 1);
  sqcRYGate(q, -2.178216829677278, 2);
  sqcRZGate(q, -2.2213195952755123, 2);
  sqcRYGate(q, 0.4706314696908658, 3);
  sqcRZGate(q, -2.963257487490705, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.671702844234788, 0);
  sqcRZGate(q, -1.3250396460468865, 0);
  sqcRYGate(q, 3.0235504115721996, 1);
  sqcRZGate(q, 0.4287340543677293, 1);
  sqcRYGate(q, -2.5275855927859285, 2);
  sqcRZGate(q, 0.1157436700823261, 2);
  sqcRYGate(q, -3.0145367359405113, 3);
  sqcRZGate(q, -0.6948976028710705, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.5730654800984007, 0);
  sqcRZGate(q, -2.887230585639076, 0);
  sqcRYGate(q, 1.4458212567371358, 1);
  sqcRZGate(q, -1.0814993717422805, 1);
  sqcRYGate(q, 1.4127493405864013, 2);
  sqcRZGate(q, 2.162039257754453, 2);
  sqcRYGate(q, -1.7926982064509864, 3);
  sqcRZGate(q, 2.463597349851614, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.840930728846091, 0);
  sqcRZGate(q, 2.3617013103546944, 0);
  sqcRYGate(q, 2.6173552569412024, 1);
  sqcRZGate(q, 0.21090260977345743, 1);
  sqcRYGate(q, -2.9879621411794672, 2);
  sqcRZGate(q, -1.7409511910403257, 2);
  sqcRYGate(q, -2.208297984669648, 3);
  sqcRZGate(q, -2.4025102537095497, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.6444077245960963, 0);
  sqcRZGate(q, 2.556143514655308, 0);
  sqcRYGate(q, -2.224191214053519, 1);
  sqcRZGate(q, -1.9028607547705985, 1);
  sqcRYGate(q, 2.016598944547704, 2);
  sqcRZGate(q, -0.36208150056204264, 2);
  sqcRYGate(q, -2.0530285672316513, 3);
  sqcRZGate(q, 1.3795896492334592, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.5275373711558387, 0);
  sqcRZGate(q, 2.11904694881781, 0);
  sqcRYGate(q, 1.472181147738427, 1);
  sqcRZGate(q, 2.7817809538380662, 1);
  sqcRYGate(q, 2.5762933214470674, 2);
  sqcRZGate(q, 1.1981962705317741, 2);
  sqcRYGate(q, -1.3798303862458885, 3);
  sqcRZGate(q, 1.1249914224824131, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.44333501504983186, 0);
  sqcRZGate(q, 1.8291651206470805, 0);
  sqcRYGate(q, 2.4675475424675963, 1);
  sqcRZGate(q, 2.5816225133416046, 1);
  sqcRYGate(q, 2.228454447920223, 2);
  sqcRZGate(q, -0.32092799859881893, 2);
  sqcRYGate(q, -2.969564939598602, 3);
  sqcRZGate(q, -2.725723119099692, 3);

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
