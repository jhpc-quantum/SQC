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

  sqcRYGate(q, -1.662267509095676, 0);
  sqcRZGate(q, -0.5105197253091989, 0);
  sqcRYGate(q, -1.1793742916781549, 1);
  sqcRZGate(q, -2.8537114467526727, 1);
  sqcRYGate(q, 2.8129748308458597e-07, 2);
  sqcRZGate(q, -1.9219055625962733, 2);
  sqcRYGate(q, -0.8983840802505734, 3);
  sqcRZGate(q, 2.7717917775912313, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5773206980263197, 0);
  sqcRZGate(q, 1.5323861347379986, 0);
  sqcRYGate(q, 1.2784505966061115, 1);
  sqcRZGate(q, -2.270875382396432, 1);
  sqcRYGate(q, 3.0647358318816416, 2);
  sqcRZGate(q, 0.24848415619992917, 2);
  sqcRYGate(q, 0.12010646886619901, 3);
  sqcRZGate(q, -2.801344383571407, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.05655376192127667, 0);
  sqcRZGate(q, 2.1418275074126, 0);
  sqcRYGate(q, 2.2372778689802155, 1);
  sqcRZGate(q, -1.0318336470347635, 1);
  sqcRYGate(q, -1.563365961169256, 2);
  sqcRZGate(q, 2.3455221069414156, 2);
  sqcRYGate(q, -0.34864954977595247, 3);
  sqcRZGate(q, 3.1415336897644033, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7415855955071184, 0);
  sqcRZGate(q, -0.9430822756238151, 0);
  sqcRYGate(q, 3.0264302727772696, 1);
  sqcRZGate(q, 2.1569629082886155, 1);
  sqcRYGate(q, -3.036212163325316, 2);
  sqcRZGate(q, -0.08200708112452482, 2);
  sqcRYGate(q, -1.5826532956537145, 3);
  sqcRZGate(q, 2.120643306618395, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3046627564758042, 0);
  sqcRZGate(q, 0.46572659235894426, 0);
  sqcRYGate(q, 0.7766547061501852, 1);
  sqcRZGate(q, -2.9256937925643536, 1);
  sqcRYGate(q, -1.544198403931059, 2);
  sqcRZGate(q, -1.3476543190218306, 2);
  sqcRYGate(q, 1.011982575327158, 3);
  sqcRZGate(q, -0.6110070560501688, 3);

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
