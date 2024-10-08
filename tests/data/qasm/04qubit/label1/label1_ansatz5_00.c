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

  sqcRYGate(q, -2.657148436569135, 0);
  sqcRYGate(q, 1.3976203572983181, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0246398824365934, 0);
  sqcRYGate(q, 0.4084573847747093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8782023571012654, 2);
  sqcRYGate(q, 0.21314329612595861, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3760061828663965, 2);
  sqcRYGate(q, -1.1586224754169878, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.97965834169881, 1);
  sqcRYGate(q, -1.5965871058890544, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5675759810761267, 1);
  sqcRYGate(q, -2.1069520766149985, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0278768885321936, 0);
  sqcRYGate(q, 2.5188484394367703, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4238532643958006, 0);
  sqcRYGate(q, 2.5346655250773567, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0127380250850329, 2);
  sqcRYGate(q, 2.858548969912385, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0221256133342576, 2);
  sqcRYGate(q, 2.72817281315869, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7495626353053773, 1);
  sqcRYGate(q, 0.4781518507199891, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8863601697098132, 1);
  sqcRYGate(q, -2.3056395458226295, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1229801957560195, 0);
  sqcRYGate(q, 0.2991381787007974, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.14968768630404, 0);
  sqcRYGate(q, 2.1892814813425403, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.891402640424959, 2);
  sqcRYGate(q, 2.2496445100612377, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7465489710105526, 2);
  sqcRYGate(q, -2.5580769566009662, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.043945605622497, 1);
  sqcRYGate(q, 1.7817499269067585, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1100033741811193, 1);
  sqcRYGate(q, -1.1473113368270376, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0464971075862755, 0);
  sqcRYGate(q, -3.0301474854246395, 1);
  sqcRYGate(q, 0.912337962235928, 2);
  sqcRYGate(q, 0.08205484636225258, 3);

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
