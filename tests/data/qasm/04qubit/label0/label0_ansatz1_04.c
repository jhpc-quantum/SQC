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

  sqcRYGate(q, 1.5996202798388097, 0);
  sqcRZGate(q, 1.286932305595652, 0);
  sqcRYGate(q, 0.33955170819550295, 1);
  sqcRZGate(q, -1.769057692418606, 1);
  sqcRYGate(q, 2.9032449997012284, 2);
  sqcRZGate(q, -2.218441828032689, 2);
  sqcRYGate(q, -1.160235532514827, 3);
  sqcRZGate(q, -1.254167035823187, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.28892795983107256, 0);
  sqcRZGate(q, 2.8297259366450613, 0);
  sqcRYGate(q, 0.15439163583814786, 1);
  sqcRZGate(q, 1.5480819503177154, 1);
  sqcRYGate(q, 2.1767136728316405, 2);
  sqcRZGate(q, 2.020108376795358, 2);
  sqcRYGate(q, -0.6887863767821081, 3);
  sqcRZGate(q, 2.5883164400184873, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2994576285596873, 0);
  sqcRZGate(q, -2.2010036896435983, 0);
  sqcRYGate(q, 0.14964795028974442, 1);
  sqcRZGate(q, -2.573806140593113, 1);
  sqcRYGate(q, -2.915997211040834, 2);
  sqcRZGate(q, -0.8132803869232864, 2);
  sqcRYGate(q, 1.3048988033963393, 3);
  sqcRZGate(q, 0.9940026631507897, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3603435121005541, 0);
  sqcRZGate(q, 1.7680570972978682, 0);
  sqcRYGate(q, 0.9969833251177153, 1);
  sqcRZGate(q, -2.7827822991288285, 1);
  sqcRYGate(q, -0.13418060367604756, 2);
  sqcRZGate(q, -1.6768234250111227, 2);
  sqcRYGate(q, -2.642757102154987, 3);
  sqcRZGate(q, 0.035368705674190266, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.8009674651558498, 0);
  sqcRZGate(q, 2.7695463258102713, 0);
  sqcRYGate(q, 3.010150485056423, 1);
  sqcRZGate(q, -3.1081450584522403, 1);
  sqcRYGate(q, -0.36780581675275287, 2);
  sqcRZGate(q, -2.981997251617314, 2);
  sqcRYGate(q, 1.906014693990942, 3);
  sqcRZGate(q, 2.306632335197872, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.8964354439844486, 0);
  sqcRZGate(q, 2.975310317560833, 0);
  sqcRYGate(q, -2.1117063884507554, 1);
  sqcRZGate(q, -1.2628515844672332, 1);
  sqcRYGate(q, 1.017483149224163, 2);
  sqcRZGate(q, -2.9480105406023087, 2);
  sqcRYGate(q, 1.3442409793239047, 3);
  sqcRZGate(q, 1.2376525646568395, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.962552148653274, 0);
  sqcRZGate(q, 0.6090903604774962, 0);
  sqcRYGate(q, 3.1274068468139546, 1);
  sqcRZGate(q, -1.8335988801409338, 1);
  sqcRYGate(q, -0.20500065621559407, 2);
  sqcRZGate(q, 2.8731186424314528, 2);
  sqcRYGate(q, -1.2307589975969206, 3);
  sqcRZGate(q, 0.1290082782939977, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.2332201918304665, 0);
  sqcRZGate(q, -2.579313741792353, 0);
  sqcRYGate(q, 2.1234104057771113, 1);
  sqcRZGate(q, 1.3306834496722428, 1);
  sqcRYGate(q, -0.6127385289379763, 2);
  sqcRZGate(q, 2.813081892996353, 2);
  sqcRYGate(q, 0.4255665165053218, 3);
  sqcRZGate(q, 0.33228151193535277, 3);

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
