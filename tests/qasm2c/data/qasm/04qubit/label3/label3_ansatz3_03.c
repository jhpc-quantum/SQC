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

  sqcRYGate(q, 0.9130714973240925, 0);
  sqcRZGate(q, 0.2934279785689551, 0);
  sqcRYGate(q, -1.648666721922153, 1);
  sqcRZGate(q, -0.528094042794044, 1);
  sqcRYGate(q, 2.064238900326535, 2);
  sqcRZGate(q, -0.526935818643291, 2);
  sqcRYGate(q, 1.6406381527084146, 3);
  sqcRZGate(q, -2.5560521667867326, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.6258621078033855, 0);
  sqcRZGate(q, -2.799713738598187, 0);
  sqcRYGate(q, -0.4366598064093654, 1);
  sqcRZGate(q, -0.3825094589346789, 1);
  sqcRYGate(q, -2.086147756253097, 2);
  sqcRZGate(q, -1.2812757294091028, 2);
  sqcRYGate(q, 0.04793532423318615, 3);
  sqcRZGate(q, -1.9918604838710088, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.7692573090640843, 0);
  sqcRZGate(q, 0.3902161604054122, 0);
  sqcRYGate(q, -1.3952140737076764, 1);
  sqcRZGate(q, -2.975881090855021, 1);
  sqcRYGate(q, -1.473161881969437, 2);
  sqcRZGate(q, -0.2407585142224866, 2);
  sqcRYGate(q, 0.5757106650559702, 3);
  sqcRZGate(q, 2.2395925483787305, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.933532283549932, 0);
  sqcRZGate(q, -0.5431477727879859, 0);
  sqcRYGate(q, -0.7838324326975075, 1);
  sqcRZGate(q, -0.19868060574265375, 1);
  sqcRYGate(q, -0.23997695082213047, 2);
  sqcRZGate(q, -2.5909604891871236, 2);
  sqcRYGate(q, -0.8917845798684344, 3);
  sqcRZGate(q, 3.0688799844102213, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.7131292746635004, 0);
  sqcRZGate(q, 1.54340489745349, 0);
  sqcRYGate(q, -2.2624240341946535, 1);
  sqcRZGate(q, 1.871817186432378, 1);
  sqcRYGate(q, -2.790128893828296, 2);
  sqcRZGate(q, -0.1085092138812911, 2);
  sqcRYGate(q, 1.0898573967628258, 3);
  sqcRZGate(q, -2.9630963788676934, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.9437758700562641, 0);
  sqcRZGate(q, 0.298504800322065, 0);
  sqcRYGate(q, 1.948658202387448, 1);
  sqcRZGate(q, 0.015421627846940388, 1);
  sqcRYGate(q, -2.714067421101204, 2);
  sqcRZGate(q, -1.6208977347996212, 2);
  sqcRYGate(q, -2.799609995722827, 3);
  sqcRZGate(q, -2.307684430554935, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.4224037135634715, 0);
  sqcRZGate(q, 2.778227083805787, 0);
  sqcRYGate(q, 3.139980328053253, 1);
  sqcRZGate(q, 2.1933643944402252, 1);
  sqcRYGate(q, -2.645667834338641, 2);
  sqcRZGate(q, -3.031798733227068, 2);
  sqcRYGate(q, -0.9345723122229276, 3);
  sqcRZGate(q, 2.5476037056802068, 3);

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
