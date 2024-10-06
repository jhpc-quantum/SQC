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

  sqcRYGate(q, -0.588884689485308, 0);
  sqcRZGate(q, 2.3320148857170415, 0);
  sqcRYGate(q, 2.7298784343960807, 1);
  sqcRZGate(q, 2.472578007976596, 1);
  sqcRYGate(q, 1.0035618729196463, 2);
  sqcRZGate(q, 1.7402516082197284, 2);
  sqcRYGate(q, 2.7300455938433332, 3);
  sqcRZGate(q, 1.6045897404714449, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.786135646384325, 0);
  sqcRZGate(q, 1.1583090473057878, 0);
  sqcRYGate(q, -2.363663190100315, 1);
  sqcRZGate(q, 1.0543437051957452, 1);
  sqcRYGate(q, 0.2106663487183713, 2);
  sqcRZGate(q, -0.33954003340296646, 2);
  sqcRYGate(q, -1.491915559396425, 3);
  sqcRZGate(q, 0.7502685476973043, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.011364072791828, 0);
  sqcRZGate(q, -0.14780588599827207, 0);
  sqcRYGate(q, -2.2106800550718093, 1);
  sqcRZGate(q, -2.854923414409217, 1);
  sqcRYGate(q, 0.8110521270327276, 2);
  sqcRZGate(q, -0.28545412958289346, 2);
  sqcRYGate(q, 2.430379688424646, 3);
  sqcRZGate(q, 2.279142140163692, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2682626844194438, 0);
  sqcRZGate(q, 0.9532324361431107, 0);
  sqcRYGate(q, -1.3497337004549037, 1);
  sqcRZGate(q, 0.6262012683891899, 1);
  sqcRYGate(q, 2.039205070185672, 2);
  sqcRZGate(q, -0.7955504573376118, 2);
  sqcRYGate(q, 1.9729759112908656, 3);
  sqcRZGate(q, -0.32194711967253653, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.447741069400895, 0);
  sqcRZGate(q, -1.358121551425366, 0);
  sqcRYGate(q, 0.13954749150014223, 1);
  sqcRZGate(q, 1.8692044250262774, 1);
  sqcRYGate(q, -2.198011954132415, 2);
  sqcRZGate(q, -0.03716644269016237, 2);
  sqcRYGate(q, -0.8207843947303953, 3);
  sqcRZGate(q, 2.7499310364640306, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1848134626727926, 0);
  sqcRZGate(q, -1.4335445304280667, 0);
  sqcRYGate(q, 0.7374028060424954, 1);
  sqcRZGate(q, -0.9192623900169316, 1);
  sqcRYGate(q, -1.7733190234148895, 2);
  sqcRZGate(q, 2.226457795006583, 2);
  sqcRYGate(q, -1.9991823177797694, 3);
  sqcRZGate(q, 1.2374007428049367, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6409466081373068, 0);
  sqcRZGate(q, -2.8236957592965513, 0);
  sqcRYGate(q, 0.7629248667056634, 1);
  sqcRZGate(q, 1.6311315277169895, 1);
  sqcRYGate(q, 2.390870006425218, 2);
  sqcRZGate(q, 0.6962541367896478, 2);
  sqcRYGate(q, 0.9548006402216922, 3);
  sqcRZGate(q, -2.279365547832623, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.18897688547778202, 0);
  sqcRZGate(q, -1.6030946512831141, 0);
  sqcRYGate(q, 3.08849729315272, 1);
  sqcRZGate(q, 0.061705994797796926, 1);
  sqcRYGate(q, -2.7267725208568265, 2);
  sqcRZGate(q, -2.338272275076738, 2);
  sqcRYGate(q, -1.2093984102878166, 3);
  sqcRZGate(q, -0.09855872629128283, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1692342815755605, 0);
  sqcRZGate(q, -1.753187333598925, 0);
  sqcRYGate(q, -2.051689682464377, 1);
  sqcRZGate(q, 3.0449492505463165, 1);
  sqcRYGate(q, -1.8069957951157596, 2);
  sqcRZGate(q, -0.6597286437291021, 2);
  sqcRYGate(q, -2.8486276823649512, 3);
  sqcRZGate(q, -0.6299161541258851, 3);

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
