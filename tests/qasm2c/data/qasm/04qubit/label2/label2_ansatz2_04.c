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

  sqcRYGate(q, 0.222557902093443, 0);
  sqcRZGate(q, 3.016071603784813, 0);
  sqcRYGate(q, 1.023545453143722, 1);
  sqcRZGate(q, -0.8377791069584184, 1);
  sqcRYGate(q, 1.751195907076321, 2);
  sqcRZGate(q, 2.9342041017368947, 2);
  sqcRYGate(q, 1.6338810531271684, 3);
  sqcRZGate(q, 2.6128362995925922, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.14645265132492166, 0);
  sqcRZGate(q, 1.3532038349212965, 0);
  sqcRYGate(q, 0.33905589464901453, 1);
  sqcRZGate(q, -2.6798211307185262, 1);
  sqcRYGate(q, 1.6600097842973627, 2);
  sqcRZGate(q, 1.8403508952703422, 2);
  sqcRYGate(q, 0.7629059796080639, 3);
  sqcRZGate(q, -2.3667763865737337, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.7890453622630758, 0);
  sqcRZGate(q, 2.543637686393856, 0);
  sqcRYGate(q, -2.1129239973349248, 1);
  sqcRZGate(q, 0.9991307768454771, 1);
  sqcRYGate(q, -3.062405676817347, 2);
  sqcRZGate(q, -1.751453246022489, 2);
  sqcRYGate(q, -2.8079960008201255, 3);
  sqcRZGate(q, -2.770869489393288, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.5493358856874826, 0);
  sqcRZGate(q, -1.4777537736246042, 0);
  sqcRYGate(q, -1.9944036788649557, 1);
  sqcRZGate(q, -0.4422827955786026, 1);
  sqcRYGate(q, 1.0083777259073212, 2);
  sqcRZGate(q, -2.609306709849294, 2);
  sqcRYGate(q, 3.0666036224360624, 3);
  sqcRZGate(q, -0.22786873667323349, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.6786357589408243, 0);
  sqcRZGate(q, 0.8974541728052652, 0);
  sqcRYGate(q, -0.24889247434928488, 1);
  sqcRZGate(q, 0.5542577227210811, 1);
  sqcRYGate(q, 2.007837784569602, 2);
  sqcRZGate(q, 1.1645673423202014, 2);
  sqcRYGate(q, 1.2382595785746302, 3);
  sqcRZGate(q, -0.6385411795274173, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.8680457793156613, 0);
  sqcRZGate(q, -2.624556987172059, 0);
  sqcRYGate(q, 0.16501870306680289, 1);
  sqcRZGate(q, -1.7122743250195003, 1);
  sqcRYGate(q, -2.0314531266386693, 2);
  sqcRZGate(q, 0.38505623500295183, 2);
  sqcRYGate(q, 1.4632108291877746, 3);
  sqcRZGate(q, 1.9094622876168381, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.9645688496562899, 0);
  sqcRZGate(q, 2.0833908140735007, 0);
  sqcRYGate(q, -2.5830989450266952, 1);
  sqcRZGate(q, 2.0616930919775776, 1);
  sqcRYGate(q, -0.14495408649444774, 2);
  sqcRZGate(q, 1.7546458739951607, 2);
  sqcRYGate(q, -2.8762590983739327, 3);
  sqcRZGate(q, 0.6261493450366734, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.8425093563267038, 0);
  sqcRZGate(q, 0.6303169987979835, 0);
  sqcRYGate(q, 1.9361626497364393, 1);
  sqcRZGate(q, 0.4330330592047715, 1);
  sqcRYGate(q, -2.496844955779252, 2);
  sqcRZGate(q, 0.4574059063212785, 2);
  sqcRYGate(q, 0.1991257578338831, 3);
  sqcRZGate(q, 2.648263289143115, 3);

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
