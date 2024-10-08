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

  sqcRYGate(q, 1.1928416289745973, 0);
  sqcRZGate(q, -1.541861570788984, 0);
  sqcRYGate(q, -0.08588687219841326, 1);
  sqcRZGate(q, -2.5487922223925366, 1);
  sqcRYGate(q, 2.623346156662643, 2);
  sqcRZGate(q, 0.10020303360057604, 2);
  sqcRYGate(q, 2.600944296958659, 3);
  sqcRZGate(q, -2.4547258129370624, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.3653199949795949, 0);
  sqcRZGate(q, -0.30053104029882055, 0);
  sqcRYGate(q, -2.6808140500645696, 1);
  sqcRZGate(q, -1.1010803646228478, 1);
  sqcRYGate(q, 0.01656160636393099, 2);
  sqcRZGate(q, 0.8841470762586803, 2);
  sqcRYGate(q, 0.055294066882454335, 3);
  sqcRZGate(q, -2.2723352385366526, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.75454816468408, 0);
  sqcRZGate(q, 0.14670705565070905, 0);
  sqcRYGate(q, 0.9337988455987007, 1);
  sqcRZGate(q, 1.2706340011070747, 1);
  sqcRYGate(q, 0.013143626225582558, 2);
  sqcRZGate(q, 2.4064532247948622, 2);
  sqcRYGate(q, -2.7716452087821333, 3);
  sqcRZGate(q, 1.22506361694494, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.205802215731282, 0);
  sqcRZGate(q, 0.3289517304884991, 0);
  sqcRYGate(q, 0.0547322152713523, 1);
  sqcRZGate(q, -1.1600243604717786, 1);
  sqcRYGate(q, 3.0364699674490363, 2);
  sqcRZGate(q, -2.4017297511309543, 2);
  sqcRYGate(q, -0.24241344928649236, 3);
  sqcRZGate(q, 2.882015127106384, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.7730465870723666, 0);
  sqcRZGate(q, -1.2107491991515071, 0);
  sqcRYGate(q, -2.2374365257671993, 1);
  sqcRZGate(q, -2.3174586530523262, 1);
  sqcRYGate(q, 1.5757462204965256, 2);
  sqcRZGate(q, 2.8094006909832347, 2);
  sqcRYGate(q, -1.6591222316253305, 3);
  sqcRZGate(q, 0.043855654841126857, 3);

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
