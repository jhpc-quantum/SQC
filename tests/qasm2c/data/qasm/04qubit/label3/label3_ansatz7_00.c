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

  sqcRYGate(q, 3.0008990693512203, 0);
  sqcRYGate(q, 0.9747407497114738, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9858172875996425, 0);
  sqcRYGate(q, -1.0759378276361842, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.461185588982601, 0);
  sqcRYGate(q, -0.9432241587327131, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.181816754602194, 0);
  sqcRYGate(q, -1.0240585657167054, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4094448244453586, 0);
  sqcRYGate(q, -1.4107243560010705, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.7538508388917746, 0);
  sqcRYGate(q, -1.9900405651383952, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0864552611151264, 1);
  sqcRYGate(q, -2.742463630571422, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8895068882609483, 1);
  sqcRYGate(q, 0.07485876034485951, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.977299663284445, 1);
  sqcRYGate(q, 0.46543926383896606, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1111374148783453, 1);
  sqcRYGate(q, 0.11210812632734429, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.931213057737342, 2);
  sqcRYGate(q, -1.1107647107264125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.025878571289877, 2);
  sqcRYGate(q, -2.3016397956792254, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4997746168714894, 0);
  sqcRYGate(q, 2.941891328394208, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.978142004057288, 0);
  sqcRYGate(q, -1.6493736296624029, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0716440663640783, 0);
  sqcRYGate(q, -1.5966240901468867, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2216409578091163, 0);
  sqcRYGate(q, 0.6665931839490264, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6679654024182522, 0);
  sqcRYGate(q, 1.1540725500933888, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.759171788163157, 0);
  sqcRYGate(q, -1.815407737604525, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1168844347268703, 1);
  sqcRYGate(q, -1.2908928058179439, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.025395482961211, 1);
  sqcRYGate(q, 3.0480709380218745, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4315013887342913, 1);
  sqcRYGate(q, 0.2594257187841942, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6916650203084813, 1);
  sqcRYGate(q, 0.6944088409668495, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5622772371296483, 2);
  sqcRYGate(q, -0.08859228177590683, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3916206893095048, 2);
  sqcRYGate(q, -0.20416417647465046, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.338550285349329, 0);
  sqcRYGate(q, -1.3546330114118534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4933149806136354, 0);
  sqcRYGate(q, -1.8512476274753145, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.091436457615644, 0);
  sqcRYGate(q, 0.32041080200387995, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8078086594279417, 0);
  sqcRYGate(q, 1.0497871618214738, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.381042995215814, 0);
  sqcRYGate(q, -0.380574733630735, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0962965776141507, 0);
  sqcRYGate(q, -2.4490093146119674, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.18760132949062935, 1);
  sqcRYGate(q, -1.0730838875203932, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.148958342597961, 1);
  sqcRYGate(q, 2.7167608912274432, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.06923784338482264, 1);
  sqcRYGate(q, 0.515755906640611, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6946967867224063, 1);
  sqcRYGate(q, 0.6644169909493165, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5698890605843827, 2);
  sqcRYGate(q, -0.3451951249644989, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8581106976744124, 2);
  sqcRYGate(q, -1.9343790874649605, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3447707211868396, 0);
  sqcRYGate(q, -1.9801557671750811, 1);
  sqcRYGate(q, -1.3366761617390717, 2);
  sqcRYGate(q, -2.7345194629085627, 3);

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
