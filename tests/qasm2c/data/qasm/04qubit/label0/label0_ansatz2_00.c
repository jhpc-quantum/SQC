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

  sqcRYGate(q, 3.1415761329149015, 0);
  sqcRZGate(q, 2.2117625361108484, 0);
  sqcRYGate(q, -1.6349955334123172, 1);
  sqcRZGate(q, -1.9746240917040865, 1);
  sqcRYGate(q, -1.5804442625872452, 2);
  sqcRZGate(q, -3.0010680075162997, 2);
  sqcRYGate(q, 2.882144888481065, 3);
  sqcRZGate(q, -2.7892593097384446, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.1415810954282612, 0);
  sqcRZGate(q, -0.5501804471342682, 0);
  sqcRYGate(q, 1.4452989370466138, 1);
  sqcRZGate(q, -2.21477980714102, 1);
  sqcRYGate(q, 0.9144792458186091, 2);
  sqcRZGate(q, 1.3332427180639685, 2);
  sqcRYGate(q, -0.007367168488723763, 3);
  sqcRZGate(q, 3.0375277509390397, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.5698820559443671, 0);
  sqcRZGate(q, -1.5705731626269008, 0);
  sqcRYGate(q, 1.5515862051251004, 1);
  sqcRZGate(q, -0.12602507149762673, 1);
  sqcRYGate(q, -1.5244402147302312, 2);
  sqcRZGate(q, -0.06297998129201007, 2);
  sqcRYGate(q, 0.02672196133884963, 3);
  sqcRZGate(q, -1.892438714892055, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.3402836755915715, 0);
  sqcRZGate(q, 1.5698248553042853, 0);
  sqcRYGate(q, 1.5707420478812208, 1);
  sqcRZGate(q, 3.1413677564063014, 1);
  sqcRYGate(q, 1.5708125788379723, 2);
  sqcRZGate(q, -3.1415492479196634, 2);
  sqcRYGate(q, 1.5708022686609497, 3);
  sqcRZGate(q, -6.180922726159229e-06, 3);

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
