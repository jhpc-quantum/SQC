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

  sqcRYGate(q, -2.697142554197999, 0);
  sqcRZGate(q, -2.952050501597127, 0);
  sqcRYGate(q, 0.37507819361682504, 1);
  sqcRZGate(q, 0.5244300247426148, 1);
  sqcRYGate(q, 0.44965099978464446, 2);
  sqcRZGate(q, 2.8011831624558656, 2);
  sqcRYGate(q, -2.8097230380659433, 3);
  sqcRZGate(q, 2.1856905140146305, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.1340315340324727, 0);
  sqcRZGate(q, 1.8033338894582087, 0);
  sqcRYGate(q, -2.9502152731844595, 1);
  sqcRZGate(q, -1.6340454730979415, 1);
  sqcRYGate(q, 0.9899235835148952, 2);
  sqcRZGate(q, 2.732789742300292, 2);
  sqcRYGate(q, -0.8302450709425102, 3);
  sqcRZGate(q, -2.2704964762278683, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.260528339098774, 0);
  sqcRZGate(q, 2.4008161543088664, 0);
  sqcRYGate(q, -0.05504013721814285, 1);
  sqcRZGate(q, 1.6371431825858727, 1);
  sqcRYGate(q, 0.09079206840696818, 2);
  sqcRZGate(q, 2.5714105043910194, 2);
  sqcRYGate(q, 0.2001784574933732, 3);
  sqcRZGate(q, -2.2704334766050316, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.20489144390596545, 0);
  sqcRZGate(q, 2.1281218190693956, 0);
  sqcRYGate(q, -1.87397066363807, 1);
  sqcRZGate(q, -2.8672799864891307, 1);
  sqcRYGate(q, -1.3633456626285456, 2);
  sqcRZGate(q, -0.5499230728837511, 2);
  sqcRYGate(q, -1.5069659074682367, 3);
  sqcRZGate(q, 2.243370207864542, 3);

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
