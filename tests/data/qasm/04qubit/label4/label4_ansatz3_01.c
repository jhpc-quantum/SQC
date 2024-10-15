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

  sqcRYGate(q, 3.141590148263893, 0);
  sqcRZGate(q, -0.8179051300028296, 0);
  sqcRYGate(q, -3.1415893169070404, 1);
  sqcRZGate(q, -0.32349117026061563, 1);
  sqcRYGate(q, -1.5708094557802816, 2);
  sqcRZGate(q, 0.25596594716239807, 2);
  sqcRYGate(q, 1.5707856459397869, 3);
  sqcRZGate(q, 0.7970118375389109, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.5708235510285826, 0);
  sqcRZGate(q, 0.21181435840256402, 0);
  sqcRYGate(q, -1.674921477863557, 1);
  sqcRZGate(q, 1.527711004497859, 1);
  sqcRYGate(q, 0.8006723598743976, 2);
  sqcRZGate(q, 1.426231569405597, 2);
  sqcRYGate(q, -2.0451494208518817, 3);
  sqcRZGate(q, -0.8956728243778518, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.3635690504462383, 0);
  sqcRZGate(q, -2.9908988627959134, 0);
  sqcRYGate(q, 5.374093382937965e-06, 1);
  sqcRZGate(q, 1.7047654765730633, 1);
  sqcRYGate(q, 0.8689671294247452, 2);
  sqcRZGate(q, 0.8261090421068572, 2);
  sqcRYGate(q, 0.09082177927337383, 3);
  sqcRZGate(q, -3.141588142450191, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -3.141552647723575, 0);
  sqcRZGate(q, -2.9909020539857023, 0);
  sqcRYGate(q, 0.14567238918902642, 1);
  sqcRZGate(q, 1.4873282418446778, 1);
  sqcRYGate(q, -3.1415909678988334, 2);
  sqcRZGate(q, -2.0089480238004764, 2);
  sqcRYGate(q, -0.8553544247133322, 3);
  sqcRZGate(q, -1.570797288845285, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.368892025589524, 0);
  sqcRZGate(q, 0.9594976118987671, 0);
  sqcRYGate(q, -5.799062350556003e-06, 1);
  sqcRZGate(q, -1.0635825505296301, 1);
  sqcRYGate(q, -2.1504768105772634, 2);
  sqcRZGate(q, -1.613679261247973, 2);
  sqcRYGate(q, -1.570796136457087, 3);
  sqcRZGate(q, -2.7177840597483898, 3);

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
