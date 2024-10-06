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

  sqcRYGate(q, -2.691670177652982, 0);
  sqcRYGate(q, -1.5761945023364854, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6328108235984349, 0);
  sqcRYGate(q, -2.4537378814506337, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0113656255333905, 1);
  sqcRYGate(q, 1.5787768747195248, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.965919819333055, 1);
  sqcRYGate(q, -0.007055799534443352, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6899545474147528, 2);
  sqcRYGate(q, 2.5740767937495197, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5860825038365054, 2);
  sqcRYGate(q, 1.6715558059820677, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0922205446329887, 0);
  sqcRYGate(q, 1.9506997807062953, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.059182728175272, 0);
  sqcRYGate(q, -1.003479824786793, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9646466066413737, 1);
  sqcRYGate(q, 0.32764216343823777, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.440375886988967, 1);
  sqcRYGate(q, -3.1101039739232528, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0068265413729804, 2);
  sqcRYGate(q, -2.4964946751361308, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.441810624305795, 2);
  sqcRYGate(q, -2.872690770374153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8295331307350362, 0);
  sqcRYGate(q, 2.412985262576732, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.748916734018269, 0);
  sqcRYGate(q, 1.7069175261277039, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.72023742844066, 1);
  sqcRYGate(q, 2.209454667975147, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.229812592798149, 1);
  sqcRYGate(q, -1.780626827015246, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9461279602932038, 2);
  sqcRYGate(q, 2.3901545830179227, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4759699203001277, 2);
  sqcRYGate(q, 2.6439834143605347, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.16453326847081087, 0);
  sqcRYGate(q, 2.0996836758447435, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8373948490735312, 0);
  sqcRYGate(q, -2.494947101550156, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.536314058276291, 1);
  sqcRYGate(q, -0.7511244481428152, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7428279268406617, 1);
  sqcRYGate(q, -2.0656192604214088, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4093314571251323, 2);
  sqcRYGate(q, -1.5981968406125349, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1982570629264018, 2);
  sqcRYGate(q, 2.252680570793797, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.120148422942574, 0);
  sqcRYGate(q, 2.1125815581638507, 1);
  sqcRYGate(q, -2.079172012257999, 2);
  sqcRYGate(q, 0.4781911439964892, 3);

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
