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

  sqcRYGate(q, 1.4651971580824, 0);
  sqcRZGate(q, -3.1415798850370544, 0);
  sqcRYGate(q, -1.5368635549194716, 1);
  sqcRZGate(q, 5.808590811007264e-06, 1);
  sqcRYGate(q, -1.570796286158552, 2);
  sqcRZGate(q, 0.03522078932482931, 2);
  sqcRYGate(q, -1.5707961886077626, 3);
  sqcRZGate(q, -1.297325918775825, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.3767068100166547, 0);
  sqcRZGate(q, -1.3664285241862556e-05, 0);
  sqcRYGate(q, -1.5707964887471653, 1);
  sqcRZGate(q, -2.0304700001473517, 1);
  sqcRYGate(q, 1.6791408340680212, 2);
  sqcRZGate(q, 1.792796639393611, 2);
  sqcRYGate(q, 0.783267758351136, 3);
  sqcRZGate(q, -1.3278664458479241, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5707961241395565, 0);
  sqcRZGate(q, -0.887482173743094, 0);
  sqcRYGate(q, -0.5859354263150688, 1);
  sqcRZGate(q, 0.4527225138065179, 1);
  sqcRYGate(q, 1.2075283380310113, 2);
  sqcRZGate(q, -3.00786602313871, 2);
  sqcRYGate(q, -3.1415920798951436, 3);
  sqcRZGate(q, 1.5865551256952821, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.334709087251346, 0);
  sqcRZGate(q, 1.0758275028729503, 0);
  sqcRYGate(q, 1.3265251693211235, 1);
  sqcRZGate(q, 1.9494045167606653, 1);
  sqcRYGate(q, -1.6875073818916873, 2);
  sqcRZGate(q, -2.8261775481744498, 2);
  sqcRYGate(q, 0.10618421079278262, 3);
  sqcRZGate(q, 2.537525562578857, 3);

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
