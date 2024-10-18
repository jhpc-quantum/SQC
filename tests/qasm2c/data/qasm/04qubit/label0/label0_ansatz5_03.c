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

  sqcRYGate(q, 1.7233284056660523, 0);
  sqcRYGate(q, -1.8300540733762112, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.29526975970496044, 0);
  sqcRYGate(q, 2.9408697608334933, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4447892473114482, 2);
  sqcRYGate(q, -1.888933624145086, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.890646048884362, 2);
  sqcRYGate(q, 2.3297508284031854, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6113751451740745, 1);
  sqcRYGate(q, -1.414528411549213, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8736413086914165, 1);
  sqcRYGate(q, -0.319108621399172, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8129542428648495, 0);
  sqcRYGate(q, 0.9765813239076175, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1051865587199894, 0);
  sqcRYGate(q, -0.4383595661955786, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.23476672802248444, 2);
  sqcRYGate(q, 2.0920120219915805, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9621392996753667, 2);
  sqcRYGate(q, 1.1504742744981131, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.600869809305018, 1);
  sqcRYGate(q, 2.7941822114687143, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6414469011102657, 1);
  sqcRYGate(q, 2.9480453586753286, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.14563222414378, 0);
  sqcRYGate(q, 0.32355130251625297, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4638126939184737, 0);
  sqcRYGate(q, -2.672432384162261, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.343640229459366, 2);
  sqcRYGate(q, 0.7942983297012347, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1336496088030668, 2);
  sqcRYGate(q, -0.30984414369237445, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1248938679696767, 1);
  sqcRYGate(q, -2.9836606389954845, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.283152435702885, 1);
  sqcRYGate(q, 2.3036491769338263, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.406200692050991, 0);
  sqcRYGate(q, 2.682819118032767, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.435570818378274, 0);
  sqcRYGate(q, -2.604723461866168, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8633605983912966, 2);
  sqcRYGate(q, 0.041638240267682924, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.706604460157832, 2);
  sqcRYGate(q, -1.066958001678749, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0127106174793585, 1);
  sqcRYGate(q, -0.15413368731390686, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.02118874026748515, 1);
  sqcRYGate(q, -2.5718471840637913, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.362073152135731, 0);
  sqcRYGate(q, 1.606874502211857, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0690684300755358, 0);
  sqcRYGate(q, 2.0413909085727484, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8500760559971914, 2);
  sqcRYGate(q, 1.464185714300407, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5239640655584434, 2);
  sqcRYGate(q, 0.7610135813534198, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.06385044421059671, 1);
  sqcRYGate(q, 1.751044293545303, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.114744304757422, 1);
  sqcRYGate(q, 2.0040142686900744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.20651397168369168, 0);
  sqcRYGate(q, -2.5526191785893984, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8845173219352844, 0);
  sqcRYGate(q, -2.000866985658737, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5888213796710976, 2);
  sqcRYGate(q, -2.8727562451966695, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6409469020231996, 2);
  sqcRYGate(q, -1.391744278071199, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3943888402051154, 1);
  sqcRYGate(q, -2.8076188935400395, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5652344822703688, 1);
  sqcRYGate(q, -0.4126258027813426, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.333630977631314, 0);
  sqcRYGate(q, 2.4520533552355595, 1);
  sqcRYGate(q, 1.7029606699715316, 2);
  sqcRYGate(q, -2.9982360358492888, 3);

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
