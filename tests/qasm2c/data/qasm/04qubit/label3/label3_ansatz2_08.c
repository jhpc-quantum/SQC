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

  sqcRYGate(q, -2.295488141721201, 0);
  sqcRZGate(q, -2.898678704082924, 0);
  sqcRYGate(q, -0.0885593785308849, 1);
  sqcRZGate(q, 0.6060572076275443, 1);
  sqcRYGate(q, 0.9329362046023536, 2);
  sqcRZGate(q, -2.6025705723268695, 2);
  sqcRYGate(q, -0.8950841865232171, 3);
  sqcRZGate(q, 1.6084179172205637, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.0305133020024144, 0);
  sqcRZGate(q, -0.5768245347967832, 0);
  sqcRYGate(q, 2.9535830452202014, 1);
  sqcRZGate(q, -0.20133930744017814, 1);
  sqcRYGate(q, -1.7496915515421607, 2);
  sqcRZGate(q, -1.4146069922172744, 2);
  sqcRYGate(q, -0.11928057536056007, 3);
  sqcRZGate(q, 1.6134312594483298, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.8716300952919833, 0);
  sqcRZGate(q, -2.4432937700471946, 0);
  sqcRYGate(q, -0.6038848196977947, 1);
  sqcRZGate(q, 1.0386543580241208, 1);
  sqcRYGate(q, 1.715803455732706, 2);
  sqcRZGate(q, 2.148972422646457, 2);
  sqcRYGate(q, 0.3581304712572848, 3);
  sqcRZGate(q, 2.458407671370145, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.0322668567876283, 0);
  sqcRZGate(q, 0.45949373300088864, 0);
  sqcRYGate(q, -2.2618155008090257, 1);
  sqcRZGate(q, -1.3105282688726885, 1);
  sqcRYGate(q, 2.2696707134831993, 2);
  sqcRZGate(q, -1.347378237606979, 2);
  sqcRYGate(q, 2.966004823780315, 3);
  sqcRZGate(q, -1.291023834282832, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.8170299845182676, 0);
  sqcRZGate(q, -1.712578091308817, 0);
  sqcRYGate(q, 1.8417391673175052, 1);
  sqcRZGate(q, -2.13291940689256, 1);
  sqcRYGate(q, 2.367497906744911, 2);
  sqcRZGate(q, -2.831819831124532, 2);
  sqcRYGate(q, -0.7155442861097816, 3);
  sqcRZGate(q, 0.039880031733497585, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.7553636216614223, 0);
  sqcRZGate(q, 0.5122080823632473, 0);
  sqcRYGate(q, 1.6749481923300529, 1);
  sqcRZGate(q, 0.7448425563327871, 1);
  sqcRYGate(q, -2.194625719529209, 2);
  sqcRZGate(q, -0.47954768288881944, 2);
  sqcRYGate(q, 3.028888725127614, 3);
  sqcRZGate(q, -1.918052382324066, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.9355925619993517, 0);
  sqcRZGate(q, -2.964868843028066, 0);
  sqcRYGate(q, -1.5211882752669845, 1);
  sqcRZGate(q, -1.85405087114831, 1);
  sqcRYGate(q, -0.9874976194167432, 2);
  sqcRZGate(q, -1.620396107147766, 2);
  sqcRYGate(q, 2.1599445679436897, 3);
  sqcRZGate(q, 0.6792982549848094, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.3297029831211695, 0);
  sqcRZGate(q, 0.9554866822010109, 0);
  sqcRYGate(q, 2.9047015985125197, 1);
  sqcRZGate(q, -1.751106400315543, 1);
  sqcRYGate(q, 2.576086314779, 2);
  sqcRZGate(q, -2.044006229379538, 2);
  sqcRYGate(q, -1.0044069638532296, 3);
  sqcRZGate(q, -2.814221334496415, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.7425464316756472, 0);
  sqcRZGate(q, 0.2472126824194056, 0);
  sqcRYGate(q, 0.41436653775142546, 1);
  sqcRZGate(q, 0.6099865213372789, 1);
  sqcRYGate(q, -0.33953315249738575, 2);
  sqcRZGate(q, 0.09120112447494756, 2);
  sqcRYGate(q, -0.35665163183552906, 3);
  sqcRZGate(q, 0.7049854489993345, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.0187783171197382, 0);
  sqcRZGate(q, -1.7514114089840642, 0);
  sqcRYGate(q, 2.053920396355843, 1);
  sqcRZGate(q, -1.5494832025000103, 1);
  sqcRYGate(q, -0.0023296548138426426, 2);
  sqcRZGate(q, 0.6092762734864671, 2);
  sqcRYGate(q, -3.000220903246829, 3);
  sqcRZGate(q, 1.0851741435995512, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.6439541281803802, 0);
  sqcRZGate(q, -0.27845688687796166, 0);
  sqcRYGate(q, 0.5886097996295712, 1);
  sqcRZGate(q, -2.165982353327414, 1);
  sqcRYGate(q, 0.36654648265507905, 2);
  sqcRZGate(q, -1.7581158893085207, 2);
  sqcRYGate(q, 2.0927668268895774, 3);
  sqcRZGate(q, 2.1655116433676804, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.24573659138176837, 0);
  sqcRZGate(q, 0.8253693355870855, 0);
  sqcRYGate(q, 2.09695059127162, 1);
  sqcRZGate(q, 0.13262956158402156, 1);
  sqcRYGate(q, 1.0087645407339654, 2);
  sqcRZGate(q, -0.0945396748389907, 2);
  sqcRYGate(q, -2.582456428251547, 3);
  sqcRZGate(q, -2.976360431539041, 3);

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
