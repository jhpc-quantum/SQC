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

  sqcRYGate(q, 1.4503692642554942, 0);
  sqcRYGate(q, -1.354193957222893, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.05684860338480835, 0);
  sqcRYGate(q, 0.6341183789046694, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5764303145686336, 1);
  sqcRYGate(q, -0.5690327424726478, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.08550246018663277, 1);
  sqcRYGate(q, 1.9410310325740676, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7478761510073084, 2);
  sqcRYGate(q, -3.0000524079149002, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4413650188662872, 2);
  sqcRYGate(q, -1.1927367802909048, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.016872709294363908, 0);
  sqcRYGate(q, 0.5407841360530558, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2574150794614702, 0);
  sqcRYGate(q, -0.8703683120607124, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.694750067661489, 1);
  sqcRYGate(q, 1.1384353236740428, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5875929991965542, 1);
  sqcRYGate(q, -1.914430696579572, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8996183029182223, 2);
  sqcRYGate(q, 1.734701258825222, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.681079212290987, 2);
  sqcRYGate(q, -2.168259756223838, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0637200222372147, 0);
  sqcRYGate(q, 3.042093899131146, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.829414562283299, 0);
  sqcRYGate(q, 0.9788661715048513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1687614260393664, 1);
  sqcRYGate(q, -1.6837488782589096, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3046593129469577, 1);
  sqcRYGate(q, -2.1951019993843586, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.058846254889051, 2);
  sqcRYGate(q, -1.5988757633211321, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.38538959336308226, 2);
  sqcRYGate(q, 2.3517388851305387, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.975324039568719, 0);
  sqcRYGate(q, 2.400360299985199, 1);
  sqcRYGate(q, 2.9803771512494226, 2);
  sqcRYGate(q, -2.966138671138055, 3);

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
