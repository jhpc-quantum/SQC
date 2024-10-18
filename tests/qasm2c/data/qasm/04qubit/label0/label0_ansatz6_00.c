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

  sqcRYGate(q, 3.1293386605885813, 0);
  sqcRYGate(q, 0.349646164100191, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4098758727754976, 0);
  sqcRYGate(q, 2.4806610051193303, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7910785596589855, 1);
  sqcRYGate(q, 1.579170121105002, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4644241973927423, 1);
  sqcRYGate(q, -0.06672279178072395, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9442398926732344, 2);
  sqcRYGate(q, -2.614083832843535, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6894076747984715, 2);
  sqcRYGate(q, 2.286682048122611, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6649944322696886, 0);
  sqcRYGate(q, 2.335134119726227, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9490940801181749, 0);
  sqcRYGate(q, 0.00010069324827345375, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2967276677893302, 1);
  sqcRYGate(q, 2.054888403137437, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.887354160601356, 1);
  sqcRYGate(q, 0.6740413326354687, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8202555044966315, 2);
  sqcRYGate(q, 2.67145471961702, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.691482673407539, 2);
  sqcRYGate(q, -2.616298006296413, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5042371373242902, 0);
  sqcRYGate(q, -0.1671881235672628, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7266697427866706, 0);
  sqcRYGate(q, -0.4497495164597087, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4039759356096577, 1);
  sqcRYGate(q, 0.9325322874068783, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4966696383110749, 1);
  sqcRYGate(q, -0.06079995416175041, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.035465431685491, 2);
  sqcRYGate(q, -2.271050445177314, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9462128711575213, 2);
  sqcRYGate(q, -2.930765218687254, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0869349248003504, 0);
  sqcRYGate(q, -2.839401620174248, 1);
  sqcRYGate(q, -1.8849606124599767, 2);
  sqcRYGate(q, -2.3417862975070736, 3);

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
