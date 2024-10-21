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

  sqcRYGate(q, 1.1852384266153466, 0);
  sqcRZGate(q, -2.6125162051936823, 0);
  sqcRYGate(q, 2.6070578552106456, 1);
  sqcRZGate(q, -1.570793898207687, 1);
  sqcRYGate(q, 1.5707961088399873, 2);
  sqcRZGate(q, -1.3611144632522392, 2);
  sqcRYGate(q, -6.087620333274448e-06, 3);
  sqcRZGate(q, -2.4704862973553077, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.4894656794542591e-06, 0);
  sqcRZGate(q, 2.6125174682094645, 0);
  sqcRYGate(q, -1.5707944619271754, 1);
  sqcRZGate(q, 3.1414506538034033, 1);
  sqcRYGate(q, -1.716513025484306e-06, 2);
  sqcRZGate(q, 2.9734384702528223, 2);
  sqcRYGate(q, -1.5707967110159864, 3);
  sqcRZGate(q, 1.1919528374354504, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.5707958703189027, 0);
  sqcRZGate(q, -1.3406765423890088, 0);
  sqcRYGate(q, 3.025314573977269, 1);
  sqcRZGate(q, 3.1004550345518957, 1);
  sqcRYGate(q, 2.6170761087813057, 2);
  sqcRZGate(q, -1.129595445496913, 2);
  sqcRYGate(q, 2.5742657620632423, 3);
  sqcRZGate(q, 1.9346956454296322, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.3989145548620738e-06, 0);
  sqcRZGate(q, -1.058954257442314, 0);
  sqcRYGate(q, 6.041807333545535e-06, 1);
  sqcRZGate(q, 1.6117912339106306, 1);
  sqcRYGate(q, 1.0208700902523522, 2);
  sqcRZGate(q, -0.6173819096073857, 2);
  sqcRYGate(q, 1.2334594412521938e-06, 3);
  sqcRZGate(q, 0.8830088358295791, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.141591698308685, 0);
  sqcRZGate(q, -2.543971687787618, 0);
  sqcRYGate(q, -1.5708009643876135, 1);
  sqcRZGate(q, -2.789060914544353, 1);
  sqcRYGate(q, -0.6827098800059455, 2);
  sqcRZGate(q, 2.4131268069238234, 2);
  sqcRYGate(q, -1.5707927005463207, 3);
  sqcRZGate(q, -0.080475425627192, 3);

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
