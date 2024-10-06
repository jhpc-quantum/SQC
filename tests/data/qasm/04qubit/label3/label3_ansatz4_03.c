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

  sqcRYGate(q, 2.3648164282090773, 0);
  sqcRZGate(q, -2.368559654231668, 0);
  sqcRYGate(q, 2.6444494792091153, 1);
  sqcRZGate(q, 3.0713575745169757, 1);
  sqcRYGate(q, -1.5472832603578925, 2);
  sqcRZGate(q, 2.109311277893134, 2);
  sqcRYGate(q, 2.304251744088921, 3);
  sqcRZGate(q, 1.3044462077274972, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4719902258794937, 0);
  sqcRZGate(q, -1.4616615998603364, 0);
  sqcRYGate(q, -0.13091510207646095, 1);
  sqcRZGate(q, -0.26920602903820345, 1);
  sqcRYGate(q, -0.23351967797113288, 2);
  sqcRZGate(q, 0.765714390349192, 2);
  sqcRYGate(q, -1.3612501595573754, 3);
  sqcRZGate(q, -1.2713064253902262, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.763778862450536, 0);
  sqcRZGate(q, 1.2705837695370894, 0);
  sqcRYGate(q, -2.237895755569671, 1);
  sqcRZGate(q, -0.8198935859918528, 1);
  sqcRYGate(q, -1.18583843360104, 2);
  sqcRZGate(q, -0.757309525029047, 2);
  sqcRYGate(q, 2.220007994019023, 3);
  sqcRZGate(q, -0.9383543057775325, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.482012570832984, 0);
  sqcRZGate(q, 1.1755175805770086, 0);
  sqcRYGate(q, 0.5109304008885648, 1);
  sqcRZGate(q, -2.3964837580770064, 1);
  sqcRYGate(q, 1.5468783081140458, 2);
  sqcRZGate(q, 3.0725836314096178, 2);
  sqcRYGate(q, -1.530102010994903, 3);
  sqcRZGate(q, 1.1890842802591401, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.690256738102189, 0);
  sqcRZGate(q, -1.1923228431706354, 0);
  sqcRYGate(q, 1.301661413786215, 1);
  sqcRZGate(q, 1.691461181426562, 1);
  sqcRYGate(q, -2.5206797857727423, 2);
  sqcRZGate(q, 2.389387093818743, 2);
  sqcRYGate(q, 1.4105681973310407, 3);
  sqcRZGate(q, -2.905952667657406, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6422636358610445, 0);
  sqcRZGate(q, -0.24018912690541888, 0);
  sqcRYGate(q, 2.4941820025430275, 1);
  sqcRZGate(q, -2.238542611943655, 1);
  sqcRYGate(q, 1.0575479809589954, 2);
  sqcRZGate(q, -1.2532875503490153, 2);
  sqcRYGate(q, 0.8108792598664796, 3);
  sqcRZGate(q, 2.149059983203168, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.966864774899359, 0);
  sqcRZGate(q, 1.8543239114180796, 0);
  sqcRYGate(q, -2.907234058139553, 1);
  sqcRZGate(q, 2.1975107251826156, 1);
  sqcRYGate(q, -2.599987428166471, 2);
  sqcRZGate(q, 1.3646861093527791, 2);
  sqcRYGate(q, -1.194924902856924, 3);
  sqcRZGate(q, -1.4554091677061005, 3);

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
