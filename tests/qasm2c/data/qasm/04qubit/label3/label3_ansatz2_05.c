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

  sqcRYGate(q, 2.569024632656137, 0);
  sqcRZGate(q, 0.43255272312243764, 0);
  sqcRYGate(q, 1.1006177212432888, 1);
  sqcRZGate(q, 0.1810529666406655, 1);
  sqcRYGate(q, 2.221589278448098, 2);
  sqcRZGate(q, -2.415905878161382, 2);
  sqcRYGate(q, -0.1949436073768371, 3);
  sqcRZGate(q, -1.9518686354952515, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.761189118666809, 0);
  sqcRZGate(q, -0.914058441160117, 0);
  sqcRYGate(q, 0.4111420709201422, 1);
  sqcRZGate(q, 2.9860062345972302, 1);
  sqcRYGate(q, 1.521461435668351, 2);
  sqcRZGate(q, 1.5213907761210064, 2);
  sqcRYGate(q, 3.081324488606225, 3);
  sqcRZGate(q, 1.3585530887787227, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.222187408570008, 0);
  sqcRZGate(q, -0.40672609954200034, 0);
  sqcRYGate(q, -0.28669696673943434, 1);
  sqcRZGate(q, 0.20808636837796166, 1);
  sqcRYGate(q, -0.1502011865801555, 2);
  sqcRZGate(q, 2.1583665381112542, 2);
  sqcRYGate(q, -3.1334663070569073, 3);
  sqcRZGate(q, 1.7981002196476066, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.5258195649409916, 0);
  sqcRZGate(q, -1.3351663669675462, 0);
  sqcRYGate(q, -1.8561727322856856, 1);
  sqcRZGate(q, 1.270893705825566, 1);
  sqcRYGate(q, -1.5623536455349587, 2);
  sqcRZGate(q, 1.682042202463758, 2);
  sqcRYGate(q, -1.6556353611180608, 3);
  sqcRZGate(q, 3.103134491164214, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.279861625015805, 0);
  sqcRZGate(q, -0.831179953013188, 0);
  sqcRYGate(q, -1.5535648145761913, 1);
  sqcRZGate(q, 0.5080838814475074, 1);
  sqcRYGate(q, -3.0206067626187787, 2);
  sqcRZGate(q, -1.1869532119991684, 2);
  sqcRYGate(q, -1.6201093275237959, 3);
  sqcRZGate(q, 2.8026130291091165, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.6700955461088904, 0);
  sqcRZGate(q, 1.525920253736338, 0);
  sqcRYGate(q, 1.6254753581392987, 1);
  sqcRZGate(q, -0.23760838907319543, 1);
  sqcRYGate(q, 2.356973509750504, 2);
  sqcRZGate(q, 1.7726957192701196, 2);
  sqcRYGate(q, 0.6463071870461032, 3);
  sqcRZGate(q, -1.6876413131114587, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.7709411211812971, 0);
  sqcRZGate(q, 0.4386898407123221, 0);
  sqcRYGate(q, -1.8920817825884952, 1);
  sqcRZGate(q, -2.825431648086275, 1);
  sqcRYGate(q, -1.6852729352869062, 2);
  sqcRZGate(q, 1.36362607292007, 2);
  sqcRYGate(q, 0.8419845659868663, 3);
  sqcRZGate(q, 0.8220552860213619, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.4659547036008205, 0);
  sqcRZGate(q, 1.5825784815933739, 0);
  sqcRYGate(q, -2.2860158422452153, 1);
  sqcRZGate(q, 0.6818781860024109, 1);
  sqcRYGate(q, -1.8501803830034247, 2);
  sqcRZGate(q, 0.8985689919965836, 2);
  sqcRYGate(q, -2.657081465208321, 3);
  sqcRZGate(q, 0.6229693985463243, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.5503201433992437, 0);
  sqcRZGate(q, -0.09035814032310172, 0);
  sqcRYGate(q, 2.467781485522543, 1);
  sqcRZGate(q, 2.0085495345544446, 1);
  sqcRYGate(q, -0.5724164413175963, 2);
  sqcRZGate(q, -2.3066366192843097, 2);
  sqcRYGate(q, 2.941477577599918, 3);
  sqcRZGate(q, -1.2981602870945084, 3);

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
