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

  sqcRYGate(q, 1.8365356655681193, 0);
  sqcRYGate(q, -2.396396249883958, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4054782169702076, 0);
  sqcRYGate(q, 0.8021654085012058, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0225545765022543, 1);
  sqcRYGate(q, -0.40874989239653825, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7588807497099408, 1);
  sqcRYGate(q, 1.0021609317986737, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.196567452320905, 2);
  sqcRYGate(q, -2.088331070621783, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.41602064104775227, 2);
  sqcRYGate(q, -1.8811052468854754, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.816347029798566, 0);
  sqcRYGate(q, 1.1104199205088339, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.939011724502043, 0);
  sqcRYGate(q, -0.16313733842992809, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9677460106259885, 1);
  sqcRYGate(q, 1.90865595331323, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3405281024612652, 1);
  sqcRYGate(q, 0.28154512402334353, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.04670408372143342, 2);
  sqcRYGate(q, 2.9370950846500916, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6215336560898945, 2);
  sqcRYGate(q, -2.1121525025791286, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1636624717740176, 0);
  sqcRYGate(q, 2.352682261045443, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3294633856996687, 0);
  sqcRYGate(q, 1.8001634429595406, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8172572934771836, 1);
  sqcRYGate(q, -1.0785243362915367, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.02453936548531784, 1);
  sqcRYGate(q, 0.6338659082413871, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.75410477262922, 2);
  sqcRYGate(q, -0.9347669243509189, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8128501212111462, 2);
  sqcRYGate(q, 2.153840398373786, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6784225578612135, 0);
  sqcRYGate(q, 1.9579054370149644, 1);
  sqcRYGate(q, 2.8379337470833415, 2);
  sqcRYGate(q, -0.30303455332925056, 3);

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
