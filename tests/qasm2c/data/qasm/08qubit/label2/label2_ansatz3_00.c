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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -1.5551160628188514, 0);
  sqcRZGate(q, 2.2374564895624056, 0);
  sqcRYGate(q, -1.5708020201092325, 1);
  sqcRZGate(q, 1.5707857244411443, 1);
  sqcRYGate(q, 1.5708432212275873, 2);
  sqcRZGate(q, -1.5706938884191164, 2);
  sqcRYGate(q, 3.141591507988205, 3);
  sqcRZGate(q, -0.7269686356846341, 3);
  sqcRYGate(q, -2.6970773092310143, 4);
  sqcRZGate(q, -0.07289162871850655, 4);
  sqcRYGate(q, -1.5712035780479474, 5);
  sqcRZGate(q, -1.2688750623097909, 5);
  sqcRYGate(q, -2.993080067839241, 6);
  sqcRZGate(q, 0.8464820854577708, 6);
  sqcRYGate(q, -1.502243756653481, 7);
  sqcRZGate(q, 3.1237174124750227, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -3.0781141520862585, 0);
  sqcRZGate(q, -2.5149512674809302, 0);
  sqcRYGate(q, -2.870569269829896, 1);
  sqcRZGate(q, -2.1472012541348887e-05, 1);
  sqcRYGate(q, 3.0587763275955946, 2);
  sqcRZGate(q, -1.5706856380733778, 2);
  sqcRYGate(q, -0.3134431432190889, 3);
  sqcRZGate(q, -2.493790966316615, 3);
  sqcRYGate(q, -0.003202222587762371, 4);
  sqcRZGate(q, 0.08732358622464086, 4);
  sqcRYGate(q, -0.029296394592321015, 5);
  sqcRZGate(q, -1.3417114040327065, 5);
  sqcRYGate(q, 5.726912884881211e-06, 6);
  sqcRZGate(q, 2.2953713334483044, 6);
  sqcRYGate(q, 1.5137154232077563, 7);
  sqcRZGate(q, -0.3054555680666416, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.5855087521608242, 0);
  sqcRZGate(q, -2.8678094646654584, 0);
  sqcRYGate(q, -2.7942634931482098, 1);
  sqcRZGate(q, 1.5707691440364957, 1);
  sqcRYGate(q, 1.570843041223438, 2);
  sqcRZGate(q, 2.593918591567526, 2);
  sqcRYGate(q, -1.6292877834255638e-07, 3);
  sqcRZGate(q, -2.8417208200177235, 3);
  sqcRYGate(q, 0.18106627874583403, 4);
  sqcRZGate(q, 2.4258717259465894, 4);
  sqcRYGate(q, -9.063949599763532e-06, 5);
  sqcRZGate(q, -0.22971164409367265, 5);
  sqcRYGate(q, 1.2393306476239239, 6);
  sqcRZGate(q, -2.3403575093563624, 6);
  sqcRYGate(q, 1.636293475796121, 7);
  sqcRZGate(q, 3.1209050316212394, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -3.14157969261959, 0);
  sqcRZGate(q, 2.069384199661627, 0);
  sqcRYGate(q, -1.5707907540825206, 1);
  sqcRZGate(q, -2.905829439416293, 1);
  sqcRYGate(q, -3.1415902059121223, 2);
  sqcRZGate(q, -2.2302346250397402, 2);
  sqcRYGate(q, 1.6310374398642576e-05, 3);
  sqcRZGate(q, -2.282905333574477, 3);
  sqcRYGate(q, 8.186448476428606e-06, 4);
  sqcRZGate(q, -1.0454429241331669, 4);
  sqcRYGate(q, 1.5717881891337384, 5);
  sqcRZGate(q, -1.7362894688432908, 5);
  sqcRYGate(q, 3.14153633417821, 6);
  sqcRZGate(q, 0.6364750030964315, 6);
  sqcRYGate(q, 1.4208408310230354, 7);
  sqcRZGate(q, 2.9768415391544814, 7);

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
