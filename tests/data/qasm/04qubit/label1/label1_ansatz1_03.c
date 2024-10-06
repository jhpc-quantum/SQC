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

  sqcRYGate(q, -0.6596132792750876, 0);
  sqcRZGate(q, 2.9101437853781262, 0);
  sqcRYGate(q, -2.2387111325717166, 1);
  sqcRZGate(q, -1.4176144412877403, 1);
  sqcRYGate(q, 0.9944935751994315, 2);
  sqcRZGate(q, 1.6324078637267867, 2);
  sqcRYGate(q, 2.7741816113865676, 3);
  sqcRZGate(q, -2.671139423502266, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5553401125852242, 0);
  sqcRZGate(q, -0.583068235907982, 0);
  sqcRYGate(q, 1.2191159943856027, 1);
  sqcRZGate(q, 2.5353170178003315, 1);
  sqcRYGate(q, 0.39529159490391935, 2);
  sqcRZGate(q, -0.43559683155921824, 2);
  sqcRYGate(q, -0.20590840869565732, 3);
  sqcRZGate(q, -1.2939597349296719, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.378437548794615, 0);
  sqcRZGate(q, 0.17767986465444174, 0);
  sqcRYGate(q, -1.9560851119305813, 1);
  sqcRZGate(q, -3.1363582512785877, 1);
  sqcRYGate(q, -0.8713483073113889, 2);
  sqcRZGate(q, 2.5407502842740133, 2);
  sqcRYGate(q, 1.232465976309042, 3);
  sqcRZGate(q, -2.979960531685868, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7793267873125218, 0);
  sqcRZGate(q, 2.0921028451496935, 0);
  sqcRYGate(q, 0.8361259475805074, 1);
  sqcRZGate(q, 2.884527745548054, 1);
  sqcRYGate(q, -0.11010797978052089, 2);
  sqcRZGate(q, -2.436162545548936, 2);
  sqcRYGate(q, 2.2981716453707146, 3);
  sqcRZGate(q, -0.7299747153372181, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6292802485444948, 0);
  sqcRZGate(q, 0.3911937416228071, 0);
  sqcRYGate(q, -1.538899181427107, 1);
  sqcRZGate(q, -1.7881200231529946, 1);
  sqcRYGate(q, -0.4153055281561402, 2);
  sqcRZGate(q, 2.6534477050334377, 2);
  sqcRYGate(q, 1.5239536092168264, 3);
  sqcRZGate(q, 0.31238764043989864, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.113136889222523, 0);
  sqcRZGate(q, -2.885067976325362, 0);
  sqcRYGate(q, -2.936042301248409, 1);
  sqcRZGate(q, 2.6873263047889577, 1);
  sqcRYGate(q, -0.9160718922578894, 2);
  sqcRZGate(q, 1.7405025006185637, 2);
  sqcRYGate(q, 0.5171080389526412, 3);
  sqcRZGate(q, -1.8943790276499082, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7085614122143492, 0);
  sqcRZGate(q, -1.9005094356424348, 0);
  sqcRYGate(q, -1.1319095225027, 1);
  sqcRZGate(q, 0.8224287363064215, 1);
  sqcRYGate(q, 1.6536044446842144, 2);
  sqcRZGate(q, 1.2597948575602, 2);
  sqcRYGate(q, 2.8594572097270032, 3);
  sqcRZGate(q, 1.9564572660957678, 3);

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
