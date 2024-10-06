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

  sqcRYGate(q, 2.980998970638266, 0);
  sqcRYGate(q, 2.2381455242194965, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6018565750308662, 0);
  sqcRYGate(q, 1.0953943475675914, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.86309899144299, 1);
  sqcRYGate(q, -1.4709733872245618, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.48318174602793346, 1);
  sqcRYGate(q, -0.18086757375998008, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7430931937095098, 2);
  sqcRYGate(q, 1.6697739403578067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.875759447830059, 2);
  sqcRYGate(q, 2.6649978996100208, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1310643698543266, 0);
  sqcRYGate(q, -3.0278712436724176, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6838403043157273, 0);
  sqcRYGate(q, -2.8169521077670545, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4457661660488297, 1);
  sqcRYGate(q, -2.557472361925226, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8093529339861756, 1);
  sqcRYGate(q, 1.7658957913008904, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8466578924494526, 2);
  sqcRYGate(q, -1.300654169631131, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7518001913573583, 2);
  sqcRYGate(q, 0.25290892215539973, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.060165651472229555, 0);
  sqcRYGate(q, -2.187226875246571, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4071865429502757, 0);
  sqcRYGate(q, 1.2145745199023672, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2199975028722772, 1);
  sqcRYGate(q, -0.9002998782386884, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8395870893820283, 1);
  sqcRYGate(q, 0.5180803210644893, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1651043806178354, 2);
  sqcRYGate(q, 2.8385362649497896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.750296015388785, 2);
  sqcRYGate(q, 0.6079004804507564, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0575384919290336, 0);
  sqcRYGate(q, 2.766976595837914, 1);
  sqcRYGate(q, 2.571415637192332, 2);
  sqcRYGate(q, 0.13505834586592647, 3);

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
