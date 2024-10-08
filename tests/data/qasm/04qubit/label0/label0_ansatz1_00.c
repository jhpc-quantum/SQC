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

  sqcRYGate(q, 2.1181575293166652, 0);
  sqcRZGate(q, -1.8191598287727766, 0);
  sqcRYGate(q, -0.47739488018967075, 1);
  sqcRZGate(q, 1.8454618388666617, 1);
  sqcRYGate(q, -1.5639123515252367, 2);
  sqcRZGate(q, -1.475125021962099, 2);
  sqcRYGate(q, -0.4200755216688904, 3);
  sqcRZGate(q, -3.109602265687799, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.479348455917214, 0);
  sqcRZGate(q, 2.633140612420019, 0);
  sqcRYGate(q, 1.5713869073252067, 1);
  sqcRZGate(q, 4.164634100031132e-06, 1);
  sqcRYGate(q, -0.09372809854691866, 2);
  sqcRZGate(q, 3.1415305941739153, 2);
  sqcRYGate(q, 1.617094321573087, 3);
  sqcRZGate(q, -2.6484271848936634, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.567392233132514, 0);
  sqcRZGate(q, -0.47559290323208986, 0);
  sqcRYGate(q, -0.3993850045040253, 1);
  sqcRZGate(q, 3.141575128048535, 1);
  sqcRYGate(q, -3.1090763166626263, 2);
  sqcRZGate(q, -0.00024468502873720155, 2);
  sqcRYGate(q, 0.19766091640595373, 3);
  sqcRZGate(q, 0.34178655842602623, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.1414276280519116, 0);
  sqcRZGate(q, 1.098282771313831, 0);
  sqcRYGate(q, 1.6457936156680324, 1);
  sqcRZGate(q, 1.5707002131774903, 1);
  sqcRYGate(q, -0.16120191212424828, 2);
  sqcRZGate(q, -1.5705559868671852, 2);
  sqcRYGate(q, 3.0734277561763568, 3);
  sqcRZGate(q, 0.8025327368002914, 3);

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
