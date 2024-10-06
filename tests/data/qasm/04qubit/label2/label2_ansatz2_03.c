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

  sqcRYGate(q, 0.3742019249868506, 0);
  sqcRZGate(q, -2.6775514387904864, 0);
  sqcRYGate(q, 0.7406241443253729, 1);
  sqcRZGate(q, 2.0262012164391505, 1);
  sqcRYGate(q, 0.47548033711010884, 2);
  sqcRZGate(q, -2.865250298999395, 2);
  sqcRYGate(q, -1.1598206253448504, 3);
  sqcRZGate(q, -0.5954694032156298, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.07491890839636284, 0);
  sqcRZGate(q, 0.28099175693706324, 0);
  sqcRYGate(q, -0.5356385720742344, 1);
  sqcRZGate(q, 1.9830577231388444, 1);
  sqcRYGate(q, 1.5173712662068457, 2);
  sqcRZGate(q, -1.2356667895359532, 2);
  sqcRYGate(q, -1.3521290695189867, 3);
  sqcRZGate(q, 1.2930936847786478, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.03345320671935, 0);
  sqcRZGate(q, 2.119963587650064, 0);
  sqcRYGate(q, 0.8612061618945196, 1);
  sqcRZGate(q, 2.9109836580717574, 1);
  sqcRYGate(q, 2.391852273736859, 2);
  sqcRZGate(q, -0.37583546089828906, 2);
  sqcRYGate(q, 0.251508201617031, 3);
  sqcRZGate(q, 2.038557736030244, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.6028107515293784, 0);
  sqcRZGate(q, 1.4626499955065455, 0);
  sqcRYGate(q, 2.2054423797264215, 1);
  sqcRZGate(q, -0.1847154006804039, 1);
  sqcRYGate(q, -0.9952944676257323, 2);
  sqcRZGate(q, 1.770906572786211, 2);
  sqcRYGate(q, -2.9921528765243925, 3);
  sqcRZGate(q, 0.3964459210744824, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.098016218326519, 0);
  sqcRZGate(q, -2.800422475466372, 0);
  sqcRYGate(q, -2.138599949998624, 1);
  sqcRZGate(q, -2.8195555907432355, 1);
  sqcRYGate(q, -1.9513233386437336, 2);
  sqcRZGate(q, 2.780701503376106, 2);
  sqcRYGate(q, -1.1555634433620567, 3);
  sqcRZGate(q, -1.4669716893182976, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.537702473122095, 0);
  sqcRZGate(q, -2.275757340124983, 0);
  sqcRYGate(q, -0.7106481002513847, 1);
  sqcRZGate(q, 1.6705970395358225, 1);
  sqcRYGate(q, -2.3563729158056286, 2);
  sqcRZGate(q, -1.8746776451770295, 2);
  sqcRYGate(q, 0.973357045735913, 3);
  sqcRZGate(q, -0.5290558530178576, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.9321637788879883, 0);
  sqcRZGate(q, -2.3640137100935488, 0);
  sqcRYGate(q, 0.07198884545259532, 1);
  sqcRZGate(q, 0.5617288149173438, 1);
  sqcRYGate(q, -1.45341844901642, 2);
  sqcRZGate(q, 1.9001635846635567, 2);
  sqcRYGate(q, 1.770583014026861, 3);
  sqcRZGate(q, 1.0120595351484223, 3);

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
