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

  sqcRYGate(q, -2.7371575694763974, 0);
  sqcRZGate(q, 1.7548181912047935, 0);
  sqcRYGate(q, 0.03287555645265496, 1);
  sqcRZGate(q, 1.5658472489222963, 1);
  sqcRYGate(q, -1.5120394134972805, 2);
  sqcRZGate(q, 3.135513108987021, 2);
  sqcRYGate(q, 1.5975705930505175, 3);
  sqcRZGate(q, 0.15902846973937004, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.9810723249066224, 0);
  sqcRZGate(q, -0.818856962445434, 0);
  sqcRYGate(q, 0.6366526751276673, 1);
  sqcRZGate(q, 1.6089301609336377, 1);
  sqcRYGate(q, -1.4686840189028487, 2);
  sqcRZGate(q, 1.2093009745105263, 2);
  sqcRYGate(q, -3.129756671335655, 3);
  sqcRZGate(q, 2.850977137337196, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.7216838868846578, 0);
  sqcRZGate(q, -2.4397253599682527, 0);
  sqcRYGate(q, 0.7535900133542229, 1);
  sqcRZGate(q, -0.3160564649252872, 1);
  sqcRYGate(q, -1.4546889114094812, 2);
  sqcRZGate(q, -2.0238395078539058, 2);
  sqcRYGate(q, -0.47904867341242063, 3);
  sqcRZGate(q, 0.8203441402389805, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.940151344620045, 0);
  sqcRZGate(q, -0.6144654722345129, 0);
  sqcRYGate(q, 0.3514237776029585, 1);
  sqcRZGate(q, -1.7805921096077226, 1);
  sqcRYGate(q, -0.9825835827591775, 2);
  sqcRZGate(q, -2.705472416362461, 2);
  sqcRYGate(q, -2.5837435430213103, 3);
  sqcRZGate(q, 0.574543824650629, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.0852921065403685, 0);
  sqcRZGate(q, -2.88446000341249, 0);
  sqcRYGate(q, -1.1547495416046227, 1);
  sqcRZGate(q, 0.9415040571549096, 1);
  sqcRYGate(q, 0.985788553436234, 2);
  sqcRZGate(q, -0.6163723292457954, 2);
  sqcRYGate(q, -1.8525157528314875, 3);
  sqcRZGate(q, -1.744898077901355, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.2899375503517416, 0);
  sqcRZGate(q, -0.8840413712162938, 0);
  sqcRYGate(q, -2.867852314597754, 1);
  sqcRZGate(q, 0.7954113527280899, 1);
  sqcRYGate(q, 1.8644559550112785, 2);
  sqcRZGate(q, 2.7299595527543263, 2);
  sqcRYGate(q, -1.7269920469930566, 3);
  sqcRZGate(q, -0.45335929311420486, 3);

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
