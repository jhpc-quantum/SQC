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

  sqcRYGate(q, -1.027977345720685, 0);
  sqcRZGate(q, 2.8699095266130583, 0);
  sqcRYGate(q, 1.1712831582234635, 1);
  sqcRZGate(q, 1.5031821043391878, 1);
  sqcRYGate(q, 0.718673874809142, 2);
  sqcRZGate(q, 2.817704802855669, 2);
  sqcRYGate(q, -2.2289902353572764, 3);
  sqcRZGate(q, 1.4327829713791351, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5813662262570484, 0);
  sqcRZGate(q, -0.7215062185852643, 0);
  sqcRYGate(q, -1.6954023404481873, 1);
  sqcRZGate(q, 0.8711006867408508, 1);
  sqcRYGate(q, 1.393358668323935, 2);
  sqcRZGate(q, -2.9795868055719485, 2);
  sqcRYGate(q, -3.091274367794445, 3);
  sqcRZGate(q, -1.7513029156049686, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.2885257398816967, 0);
  sqcRZGate(q, -2.7390230754540372, 0);
  sqcRYGate(q, -0.08702107850297924, 1);
  sqcRZGate(q, -2.9252872049107617, 1);
  sqcRYGate(q, -1.6208842143318893, 2);
  sqcRZGate(q, 1.2354454803218473, 2);
  sqcRYGate(q, 1.6930073154592822, 3);
  sqcRZGate(q, 2.805250721578101, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.7604430438524972, 0);
  sqcRZGate(q, 1.6237356944065997, 0);
  sqcRYGate(q, 1.8028542480381171, 1);
  sqcRZGate(q, 1.9657989544337895, 1);
  sqcRYGate(q, 1.3414734755289404, 2);
  sqcRZGate(q, -0.5929181044086322, 2);
  sqcRYGate(q, 2.5285626161774384, 3);
  sqcRZGate(q, 1.82058077449364, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.922781417788927, 0);
  sqcRZGate(q, -0.8743390937238278, 0);
  sqcRYGate(q, -0.6037417377228746, 1);
  sqcRZGate(q, -3.1062243904640723, 1);
  sqcRYGate(q, 3.0340334433833904, 2);
  sqcRZGate(q, 3.0765002095428997, 2);
  sqcRYGate(q, 2.7379170437667923, 3);
  sqcRZGate(q, 1.8607398376188569, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5874157236376158, 0);
  sqcRZGate(q, 0.20942026428314708, 0);
  sqcRYGate(q, 1.670814077295477, 1);
  sqcRZGate(q, 2.973896544831179, 1);
  sqcRYGate(q, -0.21559328251558416, 2);
  sqcRZGate(q, 1.8987060026755007, 2);
  sqcRYGate(q, 1.2278248481113234, 3);
  sqcRZGate(q, -0.7593744149346391, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.1244830984021883, 0);
  sqcRZGate(q, 2.4266429693357088, 0);
  sqcRYGate(q, -1.5172406665749982, 1);
  sqcRZGate(q, 3.123882101946219, 1);
  sqcRYGate(q, -3.0045725503412215, 2);
  sqcRZGate(q, 1.4018256453251619, 2);
  sqcRYGate(q, -1.6042885634854382, 3);
  sqcRZGate(q, 2.0129959744165618, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2784661707045357, 0);
  sqcRZGate(q, -2.5598804111562363, 0);
  sqcRYGate(q, 3.0809336285412114, 1);
  sqcRZGate(q, 0.8648786516662006, 1);
  sqcRYGate(q, 0.61277345756345, 2);
  sqcRZGate(q, -1.235020979103662, 2);
  sqcRYGate(q, -1.413209516360522, 3);
  sqcRZGate(q, 2.0465083037870615, 3);

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
