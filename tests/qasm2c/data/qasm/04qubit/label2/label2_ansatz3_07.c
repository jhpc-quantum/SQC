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

  sqcRYGate(q, 1.2580837986234952, 0);
  sqcRZGate(q, 2.1482435174092975, 0);
  sqcRYGate(q, -2.731052078112803, 1);
  sqcRZGate(q, -1.2917390593492337, 1);
  sqcRYGate(q, -0.9926821087886826, 2);
  sqcRZGate(q, 2.422988103083358, 2);
  sqcRYGate(q, -0.9048511851578668, 3);
  sqcRZGate(q, 0.8303794282543873, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.1871937672328565, 0);
  sqcRZGate(q, -1.2662996008548904, 0);
  sqcRYGate(q, -0.8863362184016693, 1);
  sqcRZGate(q, -1.7044954736590907, 1);
  sqcRYGate(q, 0.7111321038076042, 2);
  sqcRZGate(q, -0.017527071499615993, 2);
  sqcRYGate(q, 0.32242453634161183, 3);
  sqcRZGate(q, -0.13874048579234982, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8742465604318257, 0);
  sqcRZGate(q, -2.206515477104401, 0);
  sqcRYGate(q, -1.5192779193822061, 1);
  sqcRZGate(q, 2.494229066136709, 1);
  sqcRYGate(q, -2.7008947741645692, 2);
  sqcRZGate(q, 0.030512615602868998, 2);
  sqcRYGate(q, 2.070787071390287, 3);
  sqcRZGate(q, 3.059179405603874, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.17106017909295, 0);
  sqcRZGate(q, 2.9976605376797822, 0);
  sqcRYGate(q, -1.140047947444299, 1);
  sqcRZGate(q, 1.833252599120656, 1);
  sqcRYGate(q, -1.7604342673376652, 2);
  sqcRZGate(q, -2.6113386218437125, 2);
  sqcRYGate(q, -0.7607983329003605, 3);
  sqcRZGate(q, -1.3064308922168613, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.1466972485396196, 0);
  sqcRZGate(q, 0.703797621209472, 0);
  sqcRYGate(q, -2.7825459686336806, 1);
  sqcRZGate(q, -1.4020913685471514, 1);
  sqcRYGate(q, 2.7463722805239534, 2);
  sqcRZGate(q, -1.872853795393525, 2);
  sqcRYGate(q, 1.1074148524807828, 3);
  sqcRZGate(q, -0.15038456360183244, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.8866369862055614, 0);
  sqcRZGate(q, 0.9004276756500615, 0);
  sqcRYGate(q, -0.44349671365329524, 1);
  sqcRZGate(q, 0.5596963301162786, 1);
  sqcRYGate(q, 2.975911035941854, 2);
  sqcRZGate(q, -0.40364744001386854, 2);
  sqcRYGate(q, 0.0953603117354298, 3);
  sqcRZGate(q, -0.6224140549759012, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.4010381321084244, 0);
  sqcRZGate(q, 0.29871295814757737, 0);
  sqcRYGate(q, -0.08135001180665834, 1);
  sqcRZGate(q, -2.9692482060026344, 1);
  sqcRYGate(q, -2.3396071446663362, 2);
  sqcRZGate(q, -1.5190424152591795, 2);
  sqcRYGate(q, 2.3430878580661774, 3);
  sqcRZGate(q, 2.9288006787234746, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.2812844616466519, 0);
  sqcRZGate(q, 1.717372664292714, 0);
  sqcRYGate(q, 2.863241178903982, 1);
  sqcRZGate(q, -3.093688142480136, 1);
  sqcRYGate(q, 0.6025623424177934, 2);
  sqcRZGate(q, -1.019237180042225, 2);
  sqcRYGate(q, 2.3729775245688964, 3);
  sqcRZGate(q, 1.0187617803578461, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -3.0879632474526475, 0);
  sqcRZGate(q, 0.14980333065575735, 0);
  sqcRYGate(q, 1.8743874652142205, 1);
  sqcRZGate(q, -1.3095422380696649, 1);
  sqcRYGate(q, -2.1778525704030045, 2);
  sqcRZGate(q, -2.609483223086454, 2);
  sqcRYGate(q, -3.114131364846141, 3);
  sqcRZGate(q, -2.8074505706196593, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.6863778301385886, 0);
  sqcRZGate(q, 2.673497030202671, 0);
  sqcRYGate(q, 2.5624769676255164, 1);
  sqcRZGate(q, -0.3931299430898454, 1);
  sqcRYGate(q, -2.178051031675252, 2);
  sqcRZGate(q, -2.343898337054761, 2);
  sqcRYGate(q, -1.4866163149758351, 3);
  sqcRZGate(q, 2.7396555992918232, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.39463778899802726, 0);
  sqcRZGate(q, -1.470555761304278, 0);
  sqcRYGate(q, 0.5018064420201922, 1);
  sqcRZGate(q, -2.61865718060198, 1);
  sqcRYGate(q, -0.6398178813276767, 2);
  sqcRZGate(q, 2.1678706646027823, 2);
  sqcRYGate(q, -2.2349420130637228, 3);
  sqcRZGate(q, -2.0703466681266134, 3);

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
