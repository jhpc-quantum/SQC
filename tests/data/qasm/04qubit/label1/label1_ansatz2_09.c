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

  sqcRYGate(q, 1.0008230110588041, 0);
  sqcRZGate(q, -0.6825685980098645, 0);
  sqcRYGate(q, -2.306919371120745, 1);
  sqcRZGate(q, -1.6745166351337875, 1);
  sqcRYGate(q, -1.5087229113439682, 2);
  sqcRZGate(q, 0.9201800244535185, 2);
  sqcRYGate(q, 3.001108608008715, 3);
  sqcRZGate(q, 2.0840150944844438, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.3742226929965025, 0);
  sqcRZGate(q, -3.0337943574699993, 0);
  sqcRYGate(q, 2.3289352050854433, 1);
  sqcRZGate(q, 0.5465889487651241, 1);
  sqcRYGate(q, -1.1801535719481007, 2);
  sqcRZGate(q, -2.7311508601114043, 2);
  sqcRYGate(q, -2.1443995280561374, 3);
  sqcRZGate(q, -1.342498249976762, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.257509757172306, 0);
  sqcRZGate(q, 2.4523237531634825, 0);
  sqcRYGate(q, 1.640020310435549, 1);
  sqcRZGate(q, 0.6097443461566961, 1);
  sqcRYGate(q, -1.4445938964583362, 2);
  sqcRZGate(q, 2.718620890898862, 2);
  sqcRYGate(q, -1.1620575089957934, 3);
  sqcRZGate(q, -2.7572687604167756, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.9661861378473315, 0);
  sqcRZGate(q, -2.6197265172481883, 0);
  sqcRYGate(q, 2.9766254948937223, 1);
  sqcRZGate(q, 0.7174300151489775, 1);
  sqcRYGate(q, 0.7524925982121058, 2);
  sqcRZGate(q, 2.2121238720039496, 2);
  sqcRYGate(q, -0.7481628588359232, 3);
  sqcRZGate(q, 0.7088856120178084, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.2387741331878237, 0);
  sqcRZGate(q, -0.9906060310451377, 0);
  sqcRYGate(q, 0.6923560191041558, 1);
  sqcRZGate(q, 1.7860646023955153, 1);
  sqcRYGate(q, -1.357766992882909, 2);
  sqcRZGate(q, 0.8058380653585697, 2);
  sqcRYGate(q, -1.417965776814067, 3);
  sqcRZGate(q, -2.009870597894853, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.935858768652918, 0);
  sqcRZGate(q, 2.887825073900005, 0);
  sqcRYGate(q, -0.7132803261799157, 1);
  sqcRZGate(q, -2.212030135072216, 1);
  sqcRYGate(q, -0.12005886843332694, 2);
  sqcRZGate(q, -0.11411693084062109, 2);
  sqcRYGate(q, -1.7060182252723164, 3);
  sqcRZGate(q, 2.3811504261204193, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.9520920381060135, 0);
  sqcRZGate(q, -2.4877995969313784, 0);
  sqcRYGate(q, 0.5443621795195447, 1);
  sqcRZGate(q, 0.16952498678200534, 1);
  sqcRYGate(q, -2.4789536438985458, 2);
  sqcRZGate(q, 1.5530980558092526, 2);
  sqcRYGate(q, 0.15745340042134764, 3);
  sqcRZGate(q, -1.2395270400742135, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.092333755760257, 0);
  sqcRZGate(q, -2.4202661744555627, 0);
  sqcRYGate(q, 0.6367193986213051, 1);
  sqcRZGate(q, 0.5669282131276105, 1);
  sqcRYGate(q, -2.4829780271374258, 2);
  sqcRZGate(q, 2.231726293779769, 2);
  sqcRYGate(q, 2.631117683382646, 3);
  sqcRZGate(q, 2.2894189897979245, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.13929589391261565, 0);
  sqcRZGate(q, 1.375345553908934, 0);
  sqcRYGate(q, 0.7786951999632397, 1);
  sqcRZGate(q, -1.6329187970511896, 1);
  sqcRYGate(q, -0.8467947402087344, 2);
  sqcRZGate(q, -1.7228465884428887, 2);
  sqcRYGate(q, -2.5099509389022305, 3);
  sqcRZGate(q, -1.4311288867176775, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.4310786799963076, 0);
  sqcRZGate(q, -1.4742872282419623, 0);
  sqcRYGate(q, -1.5902174611422313, 1);
  sqcRZGate(q, 2.045793252655967, 1);
  sqcRYGate(q, -0.13641256438296256, 2);
  sqcRZGate(q, -1.4506821622549508, 2);
  sqcRYGate(q, -1.390585576770007, 3);
  sqcRZGate(q, 2.067292000232559, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.2015929201654245, 0);
  sqcRZGate(q, 1.783933919528673, 0);
  sqcRYGate(q, -0.914534954563841, 1);
  sqcRZGate(q, -0.03152246794454694, 1);
  sqcRYGate(q, -3.0342176585201406, 2);
  sqcRZGate(q, -1.6415613076854116, 2);
  sqcRYGate(q, -2.3658974187718593, 3);
  sqcRZGate(q, -2.68516055037182, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.905078438616272, 0);
  sqcRZGate(q, -0.2534532489755769, 0);
  sqcRYGate(q, 1.056638615846114, 1);
  sqcRZGate(q, -0.014290181703464631, 1);
  sqcRYGate(q, 1.5949399162699658, 2);
  sqcRZGate(q, 1.130810963941287, 2);
  sqcRYGate(q, 0.5859093876856023, 3);
  sqcRZGate(q, 2.2170820141622842, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.9371816282645401, 0);
  sqcRZGate(q, 1.5730264064672452, 0);
  sqcRYGate(q, -2.59856983339694, 1);
  sqcRZGate(q, 2.905362674231527, 1);
  sqcRYGate(q, -1.4838044559334382, 2);
  sqcRZGate(q, 2.6651668079960382, 2);
  sqcRYGate(q, -1.7319762215165697, 3);
  sqcRZGate(q, -0.35121124035373086, 3);

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
