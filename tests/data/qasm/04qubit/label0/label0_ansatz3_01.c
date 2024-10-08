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

  sqcRYGate(q, -1.9122301340002972, 0);
  sqcRZGate(q, -1.3655159856673977, 0);
  sqcRYGate(q, 1.4783443523786586, 1);
  sqcRZGate(q, -2.691784815173027, 1);
  sqcRYGate(q, 2.1777316218920078, 2);
  sqcRZGate(q, -0.2970442027142056, 2);
  sqcRYGate(q, -1.9364668896544863, 3);
  sqcRZGate(q, -1.4627363747352016, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.20854095123612115, 0);
  sqcRZGate(q, -2.8632404046365516, 0);
  sqcRYGate(q, 0.4724026597420643, 1);
  sqcRZGate(q, -1.8409145139037753, 1);
  sqcRYGate(q, 2.16120781677768, 2);
  sqcRZGate(q, 0.5183520317289272, 2);
  sqcRYGate(q, -0.5872790054542563, 3);
  sqcRZGate(q, 2.682851863499011, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.805982173134135, 0);
  sqcRZGate(q, -1.6209048224191287, 0);
  sqcRYGate(q, -0.46217054731368107, 1);
  sqcRZGate(q, 1.936257517433378, 1);
  sqcRYGate(q, 1.5817317955637866, 2);
  sqcRZGate(q, 1.5866414526092143, 2);
  sqcRYGate(q, -0.5549118211903874, 3);
  sqcRZGate(q, 0.6562744280051653, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 3.043265639747576, 0);
  sqcRZGate(q, 1.5783758082130461, 0);
  sqcRYGate(q, -0.7404030781795454, 1);
  sqcRZGate(q, -3.117321016260808, 1);
  sqcRYGate(q, 2.0454367903749664, 2);
  sqcRZGate(q, -1.177531346480846, 2);
  sqcRYGate(q, 0.34790937740355604, 3);
  sqcRZGate(q, 2.383737107283175, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.7469276823906207, 0);
  sqcRZGate(q, 0.9953498513847813, 0);
  sqcRYGate(q, 0.3215450879732087, 1);
  sqcRZGate(q, -1.1382103582007008, 1);
  sqcRYGate(q, 1.979397667919511, 2);
  sqcRZGate(q, -1.2787719973736196, 2);
  sqcRYGate(q, 2.7833379886210543, 3);
  sqcRZGate(q, 1.071017309783505, 3);

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
