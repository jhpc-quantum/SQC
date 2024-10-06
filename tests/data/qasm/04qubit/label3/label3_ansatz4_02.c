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

  sqcRYGate(q, -1.0955040200492832, 0);
  sqcRZGate(q, 1.9229157613342078, 0);
  sqcRYGate(q, 2.6343294699178212, 1);
  sqcRZGate(q, -2.9474308550481347, 1);
  sqcRYGate(q, 1.5646784146087527, 2);
  sqcRZGate(q, 0.8393763512950064, 2);
  sqcRYGate(q, 1.1312180484451781, 3);
  sqcRZGate(q, -2.1621254579565026, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.714553636690065, 0);
  sqcRZGate(q, -1.6599861368707862, 0);
  sqcRYGate(q, -1.1246554515365583, 1);
  sqcRZGate(q, -0.005455232783882001, 1);
  sqcRYGate(q, -0.9734279458642501, 2);
  sqcRZGate(q, 1.1895335277539887, 2);
  sqcRYGate(q, -1.9148597556556861, 3);
  sqcRZGate(q, -2.582795369754108, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.48472128425989425, 0);
  sqcRZGate(q, -2.7241232627897234, 0);
  sqcRYGate(q, -1.8903045406864107, 1);
  sqcRZGate(q, -2.173493458709629, 1);
  sqcRYGate(q, 2.8232739055902343, 2);
  sqcRZGate(q, -1.2294185300921958, 2);
  sqcRYGate(q, 0.6912772131238576, 3);
  sqcRZGate(q, -2.711542457921675, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.730314391070905, 0);
  sqcRZGate(q, 2.9721436402662125, 0);
  sqcRYGate(q, 0.6859713190373156, 1);
  sqcRZGate(q, -2.1589904386602643, 1);
  sqcRYGate(q, -1.0733079420236153, 2);
  sqcRZGate(q, 1.6390236013772848, 2);
  sqcRYGate(q, 2.286226796262541, 3);
  sqcRZGate(q, 0.1318028523466714, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8779456198220444, 0);
  sqcRZGate(q, 2.750774865851341, 0);
  sqcRYGate(q, -0.5701210722290924, 1);
  sqcRZGate(q, 0.4826702656850173, 1);
  sqcRYGate(q, -0.9419883566189653, 2);
  sqcRZGate(q, 0.24999994561092986, 2);
  sqcRYGate(q, 0.39378277245008864, 3);
  sqcRZGate(q, -3.029267282916543, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2253401890793276, 0);
  sqcRZGate(q, 1.5970343626458037, 0);
  sqcRYGate(q, -1.327347150014301, 1);
  sqcRZGate(q, -1.6522188254303354, 1);
  sqcRYGate(q, 3.0028750772439015, 2);
  sqcRZGate(q, -3.1161914239863346, 2);
  sqcRYGate(q, 0.3775931220429685, 3);
  sqcRZGate(q, 2.8832360456384163, 3);

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
