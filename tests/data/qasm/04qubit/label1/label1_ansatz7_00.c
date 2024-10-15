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

  sqcRYGate(q, 1.4508185982732755, 0);
  sqcRYGate(q, -1.0985381970627022, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2019971441772705, 0);
  sqcRYGate(q, 1.8561894096651468, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.113331709688527, 0);
  sqcRYGate(q, -2.8186120898070777, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4158998313691873, 0);
  sqcRYGate(q, -1.6898133804760376, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.915297457781368, 0);
  sqcRYGate(q, -0.0001396896332410691, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6677076733442302, 0);
  sqcRYGate(q, 2.019086826461537, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0339981797396405, 1);
  sqcRYGate(q, 0.9947601649907234, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5865898118068635, 1);
  sqcRYGate(q, -1.6757260582603823, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7543778756926813, 1);
  sqcRYGate(q, -2.58814715861818, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3518522849204286, 1);
  sqcRYGate(q, -0.4722593330928371, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9410899004707547, 2);
  sqcRYGate(q, -3.0728422276867193, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4583261277126058, 2);
  sqcRYGate(q, -0.7870931844898581, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8744169312745746, 0);
  sqcRYGate(q, -1.2937765129566539, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.078732213124415, 0);
  sqcRYGate(q, 1.1727446899804974, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4928589244814203, 0);
  sqcRYGate(q, 0.5960765348882892, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3665210971250694, 0);
  sqcRYGate(q, 1.4320043162502556, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3194045478881815, 0);
  sqcRYGate(q, 1.3814757454469015, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6612719062586612, 0);
  sqcRYGate(q, 2.450237712504789, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.15990238847271243, 1);
  sqcRYGate(q, -0.36662613495023955, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2478347396152434, 1);
  sqcRYGate(q, -0.09371113775953784, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3485885821289436, 1);
  sqcRYGate(q, -1.931074235607248, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.310874059107709, 1);
  sqcRYGate(q, -3.0889544766746933, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9504677903215084, 2);
  sqcRYGate(q, 2.9305978952904397, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.41490251135123746, 2);
  sqcRYGate(q, 2.295832241596655, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8430112105740815, 0);
  sqcRYGate(q, -0.7877145580657068, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7332497091441996, 0);
  sqcRYGate(q, -1.4141614878423079, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6218921066595886, 0);
  sqcRYGate(q, 2.499248889343792, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8323298157233419, 0);
  sqcRYGate(q, -1.649722206466158, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8696875283719687, 0);
  sqcRYGate(q, -1.6779886403567206, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9613329787177278, 0);
  sqcRYGate(q, -0.18918730167243974, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.943404085760091, 1);
  sqcRYGate(q, 0.3859866809309906, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9937011400478402, 1);
  sqcRYGate(q, 1.9672104937461268, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.277204027142796, 1);
  sqcRYGate(q, -2.335763146753059, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.072461651952489, 1);
  sqcRYGate(q, -2.3423252227402247, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3329016511954825, 2);
  sqcRYGate(q, 1.654796329624281, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8455322599853026, 2);
  sqcRYGate(q, 0.49444752464713826, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.17375229184895, 0);
  sqcRYGate(q, 3.0910145513528597, 1);
  sqcRYGate(q, 0.4714719472685962, 2);
  sqcRYGate(q, 1.7636102351653093, 3);

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
