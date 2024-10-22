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

  sqcRYGate(q, -0.9839931239629167, 0);
  sqcRYGate(q, -2.486830758825084, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7998688736861492, 0);
  sqcRYGate(q, 1.6096634863281043, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1443240241868677, 2);
  sqcRYGate(q, -1.8059980016137551, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0691724432101775, 2);
  sqcRYGate(q, -0.9006107788824299, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3666236575453894, 1);
  sqcRYGate(q, 1.7092800365760021, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0720027606444194, 1);
  sqcRYGate(q, -2.297074741676505, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.38854788524962736, 0);
  sqcRYGate(q, -2.127854168484358, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3176421196343364, 0);
  sqcRYGate(q, -0.0992379158190886, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5180629587445913, 2);
  sqcRYGate(q, -0.22691729223968965, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.000657217211029, 2);
  sqcRYGate(q, -3.1137591848463853, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5585859501597925, 1);
  sqcRYGate(q, -2.589209253985913, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8235068689767653, 1);
  sqcRYGate(q, -0.6801697913271214, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.895939335280927, 0);
  sqcRYGate(q, 1.7093783585654707, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3410328838410153, 0);
  sqcRYGate(q, -2.930084699140328, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.636184367611884, 2);
  sqcRYGate(q, 2.318191481208158, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9516848142502623, 2);
  sqcRYGate(q, -1.155776465826376, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9622104764562494, 1);
  sqcRYGate(q, 0.7290834408234543, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1717496912072551, 1);
  sqcRYGate(q, 2.500577231148981, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2942912557715136, 0);
  sqcRYGate(q, 0.3703980479913547, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9115039957582036, 0);
  sqcRYGate(q, 1.7870506906297237, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.09128274914523575, 2);
  sqcRYGate(q, 1.3294397681470356, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.136145149130437, 2);
  sqcRYGate(q, 2.256594089480405, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6043672126735877, 1);
  sqcRYGate(q, 1.1434051871265072, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6212310890124667, 1);
  sqcRYGate(q, -2.223801144299766, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2679408794651985, 0);
  sqcRYGate(q, 2.870647963084652, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.179858259328675, 0);
  sqcRYGate(q, 2.4173104163954946, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7415220745604723, 2);
  sqcRYGate(q, 2.5181090524814183, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5848184859187757, 2);
  sqcRYGate(q, -2.67030626049464, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2493849550203207, 1);
  sqcRYGate(q, 2.7124886890307582, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3011345716619975, 1);
  sqcRYGate(q, -3.011087158290887, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.983267905708078, 0);
  sqcRYGate(q, -2.4417968024615826, 1);
  sqcRYGate(q, -1.3458163056942603, 2);
  sqcRYGate(q, 1.877252398757417, 3);

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
