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

  sqcRYGate(q, 1.361806669863787, 0);
  sqcRZGate(q, 2.1255462222585595, 0);
  sqcRYGate(q, 1.570794239777879, 1);
  sqcRZGate(q, -1.5708008472330155, 1);
  sqcRYGate(q, -1.6257557619876772, 2);
  sqcRZGate(q, 1.7796441418967976, 2);
  sqcRYGate(q, -1.5707958116266014, 3);
  sqcRZGate(q, -1.5707898731054417, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.995342090489383e-06, 0);
  sqcRZGate(q, 2.478843087974036, 0);
  sqcRYGate(q, -1.6873024679019029, 1);
  sqcRZGate(q, 1.5707941802413916, 1);
  sqcRYGate(q, 1.5707948998350574, 2);
  sqcRZGate(q, -2.422521336384676, 2);
  sqcRYGate(q, 2.4191368990261393, 3);
  sqcRZGate(q, 1.570801799579173, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3766133928005193, 0);
  sqcRZGate(q, -2.6296916193769055, 0);
  sqcRYGate(q, 1.5707966693651265, 1);
  sqcRZGate(q, -2.797240199378788, 1);
  sqcRYGate(q, 2.794746312559423, 2);
  sqcRZGate(q, -2.444502112356184, 2);
  sqcRYGate(q, 1.5707833260076756, 3);
  sqcRZGate(q, 0.9924357617601051, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5707969279101102, 0);
  sqcRZGate(q, -2.245499209828408, 0);
  sqcRYGate(q, -3.5713891612942916e-06, 1);
  sqcRZGate(q, -2.8280270060545574, 1);
  sqcRYGate(q, -1.5346557130081753, 2);
  sqcRZGate(q, 0.6701188972691025, 2);
  sqcRYGate(q, 2.899012376536889e-06, 3);
  sqcRZGate(q, -0.3345171152340521, 3);

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
