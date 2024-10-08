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

  sqcRYGate(q, -2.8311245201029807, 0);
  sqcRYGate(q, -1.9272127724829131, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1706711956280254, 0);
  sqcRYGate(q, -1.5463085531679188, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6719788283074906, 1);
  sqcRYGate(q, 2.5825656876966505, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8540135366934731, 1);
  sqcRYGate(q, -2.1440318027180947, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7904580071552627, 2);
  sqcRYGate(q, -1.3223760788020602, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0212141440407567, 2);
  sqcRYGate(q, -0.7352079667302268, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.19475602769372724, 0);
  sqcRYGate(q, -0.6716118026467375, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.61125599254017, 0);
  sqcRYGate(q, 0.439802885463769, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1000160214054033, 1);
  sqcRYGate(q, 0.8702778333667588, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5944583753116682, 1);
  sqcRYGate(q, 1.0727973661317751, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9806609489646734, 2);
  sqcRYGate(q, -1.0376387284546826, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.083643241038324, 2);
  sqcRYGate(q, -2.3880752094210767, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0020592049066432, 0);
  sqcRYGate(q, -1.769546754776611, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.057597846923576, 0);
  sqcRYGate(q, 2.746438738291422, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5725535033021014, 1);
  sqcRYGate(q, 0.9306008000067783, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4273673737813697, 1);
  sqcRYGate(q, -3.0217431695145005, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8615318432618917, 2);
  sqcRYGate(q, -2.633351489544467, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.025081022351058, 2);
  sqcRYGate(q, 0.0049248540623496595, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.085371112150468, 0);
  sqcRYGate(q, -0.06009315226679606, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.697233512001698, 0);
  sqcRYGate(q, -1.464473219500974, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.705544456318178, 1);
  sqcRYGate(q, -0.6157626245487361, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9117503776329725, 1);
  sqcRYGate(q, -1.7725134050130196, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3130429644779609, 2);
  sqcRYGate(q, 2.0206555189057145, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6798747722769076, 2);
  sqcRYGate(q, 1.546319951370883, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.11944636020293682, 0);
  sqcRYGate(q, -1.7814433397966178, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1083312169237525, 0);
  sqcRYGate(q, 2.6573031870101147, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7427105382959946, 1);
  sqcRYGate(q, 0.36853750576334415, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.37162655004697953, 1);
  sqcRYGate(q, 3.016520125152801, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7604713555363254, 2);
  sqcRYGate(q, -0.942085843696768, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2161659566161607, 2);
  sqcRYGate(q, 1.8826655035516326, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.39559957373704235, 0);
  sqcRYGate(q, 0.694595248441475, 1);
  sqcRYGate(q, -2.885502747635899, 2);
  sqcRYGate(q, 1.094928928569625, 3);

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
