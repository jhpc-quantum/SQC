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

  sqcRYGate(q, -1.5579033167916483, 0);
  sqcRZGate(q, 2.5275687028482334, 0);
  sqcRYGate(q, -1.7694869530314352, 1);
  sqcRZGate(q, 1.3435143896441182, 1);
  sqcRYGate(q, 1.7836744656960175, 2);
  sqcRZGate(q, 3.0518406149917534, 2);
  sqcRYGate(q, 1.6190878560089437, 3);
  sqcRZGate(q, -2.748225302482208, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.4584455705234909, 0);
  sqcRZGate(q, -2.1571713643473114, 0);
  sqcRYGate(q, -0.9686129925213928, 1);
  sqcRZGate(q, 1.6614988376208601, 1);
  sqcRYGate(q, -1.6613181567735542, 2);
  sqcRZGate(q, 0.03873870568113614, 2);
  sqcRYGate(q, -2.288556524331186, 3);
  sqcRZGate(q, 3.1091833547030707, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.6390514517226458, 0);
  sqcRZGate(q, -1.8927407864318693, 0);
  sqcRYGate(q, -1.1074015713074552, 1);
  sqcRZGate(q, 1.5477255502425127, 1);
  sqcRYGate(q, 3.0426211069830673, 2);
  sqcRZGate(q, 0.6604078476483964, 2);
  sqcRYGate(q, 0.09550538889760585, 3);
  sqcRZGate(q, 1.5773950002781572, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.7839252758642454, 0);
  sqcRZGate(q, 1.8911003822349308, 0);
  sqcRYGate(q, 1.59304574240824, 1);
  sqcRZGate(q, 1.8059286415906175, 1);
  sqcRYGate(q, 0.3082019466427388, 2);
  sqcRZGate(q, 0.5097120129361361, 2);
  sqcRYGate(q, 0.0016632937176961347, 3);
  sqcRZGate(q, -0.2906640952059707, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.8567385333015812, 0);
  sqcRZGate(q, -1.8094413543722068, 0);
  sqcRYGate(q, 2.2650067787145725, 1);
  sqcRZGate(q, 1.2328743958914536, 1);
  sqcRYGate(q, 2.2943246538328013, 2);
  sqcRZGate(q, 1.8596057205614518, 2);
  sqcRYGate(q, -1.1134917694383315, 3);
  sqcRZGate(q, 0.01663991697430678, 3);

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
