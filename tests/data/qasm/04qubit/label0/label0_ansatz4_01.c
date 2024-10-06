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

  sqcRYGate(q, -0.6452964104195384, 0);
  sqcRZGate(q, 2.3323436879057278, 0);
  sqcRYGate(q, 1.9710658559846905, 1);
  sqcRZGate(q, -1.6989754838808033, 1);
  sqcRYGate(q, -0.5109933981925049, 2);
  sqcRZGate(q, -2.0557321075473545, 2);
  sqcRYGate(q, -1.4490528461088141, 3);
  sqcRZGate(q, 2.7215546827882395, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.153414776188788, 0);
  sqcRZGate(q, 2.3552720580978828, 0);
  sqcRYGate(q, -2.6580796348784377, 1);
  sqcRZGate(q, 0.4700045274883137, 1);
  sqcRYGate(q, 2.688561436132368, 2);
  sqcRZGate(q, 1.61852199743098, 2);
  sqcRYGate(q, -1.976878866699117, 3);
  sqcRZGate(q, 0.5102437171876026, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6591212658889187, 0);
  sqcRZGate(q, 1.1801661048288579, 0);
  sqcRYGate(q, -0.0069814185832053404, 1);
  sqcRZGate(q, -1.4589833354728166, 1);
  sqcRYGate(q, 0.054761206487469856, 2);
  sqcRZGate(q, -1.4370182789608623, 2);
  sqcRYGate(q, -2.8011196847503417, 3);
  sqcRZGate(q, -0.2315115751656554, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0374647104018324, 0);
  sqcRZGate(q, -0.6027109932548624, 0);
  sqcRYGate(q, -2.3180762363975886, 1);
  sqcRZGate(q, -0.5014241214625237, 1);
  sqcRYGate(q, 2.646953255481742, 2);
  sqcRZGate(q, 3.1135289756845403, 2);
  sqcRYGate(q, 2.172532067703263, 3);
  sqcRZGate(q, 0.5201840102145843, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5583885673336688, 0);
  sqcRZGate(q, 0.5712598743644746, 0);
  sqcRYGate(q, -0.7961129190703661, 1);
  sqcRZGate(q, -2.285720230177423, 1);
  sqcRYGate(q, 2.0518206674108517, 2);
  sqcRZGate(q, -2.925173411255143, 2);
  sqcRYGate(q, 3.016599591348275, 3);
  sqcRZGate(q, -1.8202673141219794, 3);

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
