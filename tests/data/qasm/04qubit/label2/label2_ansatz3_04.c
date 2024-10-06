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

  sqcRYGate(q, 1.5105344931447224, 0);
  sqcRZGate(q, -0.13412452987471044, 0);
  sqcRYGate(q, -1.9385428961796851, 1);
  sqcRZGate(q, -1.0437475024021359, 1);
  sqcRYGate(q, -0.7770405920348777, 2);
  sqcRZGate(q, 1.3105845539240741, 2);
  sqcRYGate(q, -0.41379505917048265, 3);
  sqcRZGate(q, 1.0942862329416767, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.535311235510081, 0);
  sqcRZGate(q, 1.4595783457249938, 0);
  sqcRYGate(q, -0.7090157678584683, 1);
  sqcRZGate(q, -0.799464467689659, 1);
  sqcRYGate(q, -0.6880364545714645, 2);
  sqcRZGate(q, 0.40274609346371576, 2);
  sqcRYGate(q, -1.418630721478249, 3);
  sqcRZGate(q, -1.8958963932995854, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.733454054257058, 0);
  sqcRZGate(q, -2.9142669270514445, 0);
  sqcRYGate(q, -0.3024674173121976, 1);
  sqcRZGate(q, 0.37828820778539024, 1);
  sqcRYGate(q, 2.6988884794161185, 2);
  sqcRZGate(q, -1.4511281193243668, 2);
  sqcRYGate(q, -1.9424100818287662, 3);
  sqcRZGate(q, 1.6243067659269965, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.2362576601728046, 0);
  sqcRZGate(q, 2.53026359608403, 0);
  sqcRYGate(q, 2.4603748268337244, 1);
  sqcRZGate(q, -2.5183603218045443, 1);
  sqcRYGate(q, -2.133407548255107, 2);
  sqcRZGate(q, 2.899878049766725, 2);
  sqcRYGate(q, 2.6770521819729316, 3);
  sqcRZGate(q, -2.5976451201870727, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.87638996129115, 0);
  sqcRZGate(q, -1.4945354780216011, 0);
  sqcRYGate(q, -1.3782462033848675, 1);
  sqcRZGate(q, 0.46613197629191294, 1);
  sqcRYGate(q, -1.6671592460418685, 2);
  sqcRZGate(q, 0.18212315698410375, 2);
  sqcRYGate(q, 0.857795847646081, 3);
  sqcRZGate(q, -1.8072994934886932, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.826279506540381, 0);
  sqcRZGate(q, 1.8512710474445015, 0);
  sqcRYGate(q, 2.753743533534645, 1);
  sqcRZGate(q, -2.632969723480653, 1);
  sqcRYGate(q, -0.9893171270450614, 2);
  sqcRZGate(q, 2.285969795215145, 2);
  sqcRYGate(q, -1.093722711799363, 3);
  sqcRZGate(q, -1.5273584138576464, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.321520390192263, 0);
  sqcRZGate(q, 1.5369707412564002, 0);
  sqcRYGate(q, 3.030261246928547, 1);
  sqcRZGate(q, 2.003320547819583, 1);
  sqcRYGate(q, 1.42317038534485, 2);
  sqcRZGate(q, 0.8249633630041053, 2);
  sqcRYGate(q, 1.2424518425302342, 3);
  sqcRZGate(q, -1.333751686701512, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.1143258283313715, 0);
  sqcRZGate(q, -0.6157312886629457, 0);
  sqcRYGate(q, 0.36459241655958363, 1);
  sqcRZGate(q, 0.2177090891000315, 1);
  sqcRYGate(q, -1.7570113168132937, 2);
  sqcRZGate(q, -1.295345995378985, 2);
  sqcRYGate(q, 0.013271543044030871, 3);
  sqcRZGate(q, -0.3280569323896583, 3);

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
