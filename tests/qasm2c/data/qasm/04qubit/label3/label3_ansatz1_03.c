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

  sqcRYGate(q, 3.1415926083454955, 0);
  sqcRZGate(q, 0.8688067170544123, 0);
  sqcRYGate(q, -1.0076107312296196, 1);
  sqcRZGate(q, -0.7663452997219166, 1);
  sqcRYGate(q, 2.6152905426595323, 2);
  sqcRZGate(q, 2.670895559553534, 2);
  sqcRYGate(q, -2.979386268669613, 3);
  sqcRZGate(q, 2.9387205519372013, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.141592572272346, 0);
  sqcRZGate(q, -1.11881917027479, 0);
  sqcRYGate(q, -1.0882933482887023, 1);
  sqcRZGate(q, 1.0993379998087915, 1);
  sqcRYGate(q, -1.724845812690111, 2);
  sqcRZGate(q, 0.5533653102690989, 2);
  sqcRYGate(q, -1.5006725196912516, 3);
  sqcRZGate(q, -2.73320017497453, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.498020830188352e-07, 0);
  sqcRZGate(q, 2.76869880798357, 0);
  sqcRYGate(q, -2.6550720576946456, 1);
  sqcRZGate(q, 1.9925615507691548, 1);
  sqcRYGate(q, -1.8161404672970953, 2);
  sqcRZGate(q, -1.9041462105637381, 2);
  sqcRYGate(q, -2.423920048515073, 3);
  sqcRZGate(q, 1.7091236322206746, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5707963503979572, 0);
  sqcRZGate(q, -1.9643652865187118, 0);
  sqcRYGate(q, -2.9181794760861086, 1);
  sqcRZGate(q, -2.21605504551058, 1);
  sqcRYGate(q, -1.2122220326894524, 2);
  sqcRZGate(q, -2.248533573858256, 2);
  sqcRYGate(q, -0.7217730007919165, 3);
  sqcRZGate(q, 1.8178681604446205, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8960969887951817, 0);
  sqcRZGate(q, 1.8781734929403104, 0);
  sqcRYGate(q, 1.6683354270384212, 1);
  sqcRZGate(q, 1.2090983121955547, 1);
  sqcRYGate(q, -2.596226687126767, 2);
  sqcRZGate(q, -2.7151131985795156, 2);
  sqcRYGate(q, 0.7589513102050622, 3);
  sqcRZGate(q, -0.5177585776482044, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.141592454632671, 0);
  sqcRZGate(q, -3.0477671373756237, 0);
  sqcRYGate(q, 2.3977998932428424, 1);
  sqcRZGate(q, 1.8268699486606916, 1);
  sqcRYGate(q, 1.7065018418896218, 2);
  sqcRZGate(q, -1.7063717817327324, 2);
  sqcRYGate(q, 2.2767731651367518, 3);
  sqcRZGate(q, -2.0617346169735624, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4099553995429086, 0);
  sqcRZGate(q, 1.2523151421721823, 0);
  sqcRYGate(q, 2.5081463523622696, 1);
  sqcRZGate(q, 1.9743666704723744, 1);
  sqcRYGate(q, -1.142964622304445, 2);
  sqcRZGate(q, -1.6576084722108249, 2);
  sqcRYGate(q, 1.7497122662246738, 3);
  sqcRZGate(q, 2.653138801647767, 3);

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
