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

  sqcRYGate(q, -1.2903382008249618, 0);
  sqcRYGate(q, -0.2670783821787186, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.214378149939889, 0);
  sqcRYGate(q, 1.4966454240727018, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4739697678683579, 2);
  sqcRYGate(q, -0.3342571813044537, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1129881332988063, 2);
  sqcRYGate(q, 2.87960886414327, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5418373270056344, 0);
  sqcRYGate(q, -1.2805433983348316, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5824300268617231, 0);
  sqcRYGate(q, -0.3136922982875774, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6242514901300584, 1);
  sqcRYGate(q, 3.005219716509366, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9640826639285862, 1);
  sqcRYGate(q, -3.0969509165546723, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0244976228238087, 0);
  sqcRYGate(q, -3.073645814851179, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4023838222763394, 0);
  sqcRYGate(q, -2.1323826587952883, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3496457877978951, 2);
  sqcRYGate(q, 2.932377248318309, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.016908941111855, 2);
  sqcRYGate(q, 0.4988438632186831, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4734241052620245, 0);
  sqcRYGate(q, -0.05775015886902146, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3976147206094378, 0);
  sqcRYGate(q, -2.665235496825517, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.202569758749942, 1);
  sqcRYGate(q, 2.603149330093783, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5234513126909421, 1);
  sqcRYGate(q, -0.7026773870049885, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3146610203384739, 0);
  sqcRYGate(q, 0.634049163192425, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9577217102720442, 0);
  sqcRYGate(q, 0.6282851011429731, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8571336166856166, 2);
  sqcRYGate(q, -0.8684960820638779, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6296783813202909, 2);
  sqcRYGate(q, -0.42440535476586316, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.04729756253955574, 0);
  sqcRYGate(q, -1.552337203068169, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7915994220706339, 0);
  sqcRYGate(q, 2.303740647655383, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.0860679270626317, 1);
  sqcRYGate(q, 2.1066601058546928, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.592645034449367, 1);
  sqcRYGate(q, -2.418538781979899, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5926300885721885, 0);
  sqcRYGate(q, 2.7628841158662736, 1);
  sqcRYGate(q, -3.093701390021622, 2);
  sqcRYGate(q, 0.3285038080240233, 3);

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
