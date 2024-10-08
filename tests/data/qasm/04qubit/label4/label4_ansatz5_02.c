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

  sqcRYGate(q, 0.5533478669404316, 0);
  sqcRYGate(q, 3.121014117499129, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2425900225385242, 0);
  sqcRYGate(q, -0.8656614267262812, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1045010867346474, 2);
  sqcRYGate(q, -0.4827913734672827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.34459217936504777, 2);
  sqcRYGate(q, 1.2790699107051398, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4985303922756077, 1);
  sqcRYGate(q, 0.5494025149502137, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.621059463588814, 1);
  sqcRYGate(q, -0.686830679976195, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.20784822150637083, 0);
  sqcRYGate(q, -2.7566467294026378, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.857893159815909, 0);
  sqcRYGate(q, -2.8186084475692703, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2504701755331586, 2);
  sqcRYGate(q, -2.9006555240361314, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9975981369741085, 2);
  sqcRYGate(q, -1.850871228296266, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9974850408657323, 1);
  sqcRYGate(q, 1.415684706013396, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8149470644433077, 1);
  sqcRYGate(q, 0.13897147847661007, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9626081421502057, 0);
  sqcRYGate(q, 3.02205745467268, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1110933648829713, 0);
  sqcRYGate(q, -2.920860638377995, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.093926015581138, 2);
  sqcRYGate(q, 2.1072038914730524, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.311495673529607, 2);
  sqcRYGate(q, -2.341270959502595, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4946344036972375, 1);
  sqcRYGate(q, 0.570392338905391, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.28995056268592695, 1);
  sqcRYGate(q, 2.5677711041644145, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7442024411331207, 0);
  sqcRYGate(q, 2.148180332903883, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1180920736477686, 0);
  sqcRYGate(q, 2.606272361863002, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2625432934709429, 2);
  sqcRYGate(q, -2.77283363313378, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4735905017674042, 2);
  sqcRYGate(q, 2.5478769959752703, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7260070207451124, 1);
  sqcRYGate(q, 2.953972297934173, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3723655921672937, 1);
  sqcRYGate(q, 0.9816683812103809, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.275223276299057, 0);
  sqcRYGate(q, -1.568027457526402, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2354916133436176, 0);
  sqcRYGate(q, -0.283095692120356, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7611546572067056, 2);
  sqcRYGate(q, 2.8607370975876245, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2803368528146518, 2);
  sqcRYGate(q, 2.6666405858323756, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.55315409600352, 1);
  sqcRYGate(q, 0.12782159206818466, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2543397909334482, 1);
  sqcRYGate(q, -1.5025947420102348, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1208052845155487, 0);
  sqcRYGate(q, 1.401390889563368, 1);
  sqcRYGate(q, 0.5754437860200463, 2);
  sqcRYGate(q, 1.318278797039901, 3);

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
