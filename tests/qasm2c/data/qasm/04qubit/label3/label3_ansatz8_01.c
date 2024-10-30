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

  sqcRYGate(q, 1.0279097468610932, 0);
  sqcRYGate(q, 0.8459714972761142, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5381753859915581, 0);
  sqcRYGate(q, -1.0649745282783103, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.986913622616846, 2);
  sqcRYGate(q, -1.1582171554140315, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.930073867987362, 2);
  sqcRYGate(q, -2.83738110053649, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5567647633509782, 0);
  sqcRYGate(q, -2.7529760312743288, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7494333595525745, 0);
  sqcRYGate(q, -0.7865358315507319, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.35836600618712, 1);
  sqcRYGate(q, -2.135151532736196, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3381407152016327, 1);
  sqcRYGate(q, -1.9298213400289408, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9318786181665569, 0);
  sqcRYGate(q, 0.05570522425404789, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4900050893855186, 0);
  sqcRYGate(q, 2.9231779697137688, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2716907681716494, 2);
  sqcRYGate(q, -0.802711061758381, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8519688313013463, 2);
  sqcRYGate(q, 1.7640677732527001, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0492546807368885, 0);
  sqcRYGate(q, -0.4860613581607973, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0875542985506748, 0);
  sqcRYGate(q, 0.2117771717203345, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.002126897512916415, 1);
  sqcRYGate(q, -2.7445310982389075, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7596637230942687, 1);
  sqcRYGate(q, -2.922561856776052, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0425892929470555, 0);
  sqcRYGate(q, 1.4766185427321616, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.800787702495287, 0);
  sqcRYGate(q, 2.48464657938788, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.966353776298897, 2);
  sqcRYGate(q, 0.023430627354289097, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0800923677592849, 2);
  sqcRYGate(q, -2.744209434478813, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8065811688450522, 0);
  sqcRYGate(q, 0.17968177438843647, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0386768031746247, 0);
  sqcRYGate(q, -1.0273364567338195, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9175577320495654, 1);
  sqcRYGate(q, -1.3911973542707397, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9905297342058903, 1);
  sqcRYGate(q, -2.5886023415785866, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9090110129629272, 0);
  sqcRYGate(q, 1.7634279950228096, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.669520307317031, 0);
  sqcRYGate(q, 2.602442654862219, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9330695361507315, 2);
  sqcRYGate(q, -3.0169655158453375, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.902827963852251, 2);
  sqcRYGate(q, 2.033671205204695, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6749232234082414, 0);
  sqcRYGate(q, -0.533019540904383, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9286108341547337, 0);
  sqcRYGate(q, 2.683459069952756, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.849473942115006, 1);
  sqcRYGate(q, -0.9049418098030495, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9716246188306403, 1);
  sqcRYGate(q, 1.0624623823841564, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7205643984546786, 0);
  sqcRYGate(q, 1.3128206014651662, 1);
  sqcRYGate(q, -0.5662642546974115, 2);
  sqcRYGate(q, 0.4075260118227684, 3);

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
