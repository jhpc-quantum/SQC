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

  sqcRYGate(q, -2.3022939876791217, 0);
  sqcRZGate(q, -1.7342407279729937, 0);
  sqcRYGate(q, -1.6819252561718303, 1);
  sqcRZGate(q, 2.4671176442368417, 1);
  sqcRYGate(q, 0.9157000386888666, 2);
  sqcRZGate(q, -2.1506448177585873, 2);
  sqcRYGate(q, 1.4071793070508418, 3);
  sqcRZGate(q, 1.4827387763173558, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6058839045680138, 0);
  sqcRZGate(q, 1.705235658043959, 0);
  sqcRYGate(q, 2.597662210525711, 1);
  sqcRZGate(q, -1.6550707414763313, 1);
  sqcRYGate(q, 2.616082664855387, 2);
  sqcRZGate(q, -0.30792634905993493, 2);
  sqcRYGate(q, -2.1725762571688545, 3);
  sqcRZGate(q, -2.071968381884836, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.36390564013248583, 0);
  sqcRZGate(q, -0.8543531785657822, 0);
  sqcRYGate(q, -2.962113181608289, 1);
  sqcRZGate(q, 1.8499341754569953, 1);
  sqcRYGate(q, -1.5053711164966064, 2);
  sqcRZGate(q, 2.6043838627925884, 2);
  sqcRYGate(q, 0.9173997325372163, 3);
  sqcRZGate(q, -0.7908971924899664, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.3097668057599585, 0);
  sqcRZGate(q, -1.670157136649153, 0);
  sqcRYGate(q, -1.139414297134502, 1);
  sqcRZGate(q, 2.802187467955837, 1);
  sqcRYGate(q, -2.8850635712104684, 2);
  sqcRZGate(q, 2.5173364975819053, 2);
  sqcRYGate(q, 2.09391874001306, 3);
  sqcRZGate(q, -1.499935516682621, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.234096623326888, 0);
  sqcRZGate(q, 1.6447324652038824, 0);
  sqcRYGate(q, 0.5392678244351323, 1);
  sqcRZGate(q, -0.9079669902281439, 1);
  sqcRYGate(q, -0.925362088273327, 2);
  sqcRZGate(q, -0.36792578969686757, 2);
  sqcRYGate(q, 1.8859120574333277, 3);
  sqcRZGate(q, 1.1599941109929972, 3);

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
