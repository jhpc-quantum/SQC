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

  sqcRYGate(q, -1.3132167456712205, 0);
  sqcRZGate(q, 2.6325515679860785, 0);
  sqcRYGate(q, 1.068908553399946, 1);
  sqcRZGate(q, 1.7157647972403574, 1);
  sqcRYGate(q, 0.03677303926316888, 2);
  sqcRZGate(q, -0.42482463384795427, 2);
  sqcRYGate(q, 0.0402952348151717, 3);
  sqcRZGate(q, 2.3646152069224815, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.240272281764998, 0);
  sqcRZGate(q, -2.96523975245317, 0);
  sqcRYGate(q, -2.7243284883871177, 1);
  sqcRZGate(q, -0.011175877990889326, 1);
  sqcRYGate(q, 2.6795525075743147, 2);
  sqcRZGate(q, 2.1218944201836765, 2);
  sqcRYGate(q, 0.6718098819852251, 3);
  sqcRZGate(q, 0.41682524105863245, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8492581119863702, 0);
  sqcRZGate(q, -1.4110068577233763, 0);
  sqcRYGate(q, -3.0224701034192925, 1);
  sqcRZGate(q, -2.1162532633841193, 1);
  sqcRYGate(q, 1.8575330561040797, 2);
  sqcRZGate(q, 1.0992550922291286, 2);
  sqcRYGate(q, -0.9921162398500787, 3);
  sqcRZGate(q, -1.6447626968171805, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.8803575382677469, 0);
  sqcRZGate(q, -0.13097062271929527, 0);
  sqcRYGate(q, -1.4970382150384411, 1);
  sqcRZGate(q, 1.3779143747162912, 1);
  sqcRYGate(q, -1.9259134965447755, 2);
  sqcRZGate(q, 1.8337818258567928, 2);
  sqcRYGate(q, 0.20177521667962062, 3);
  sqcRZGate(q, -1.8278976706734236, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.30191854729294404, 0);
  sqcRZGate(q, 0.5227222390494533, 0);
  sqcRYGate(q, -0.45563378548130196, 1);
  sqcRZGate(q, 2.785619242987777, 1);
  sqcRYGate(q, 0.786867142345421, 2);
  sqcRZGate(q, -2.3113000769990073, 2);
  sqcRYGate(q, 0.1830466798578773, 3);
  sqcRZGate(q, 2.2920217709714645, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.36243459797974864, 0);
  sqcRZGate(q, 2.5241326066922776, 0);
  sqcRYGate(q, 1.563339933146274, 1);
  sqcRZGate(q, -1.5356959892128756, 1);
  sqcRYGate(q, -1.7318197038821734, 2);
  sqcRZGate(q, -1.387708211492158, 2);
  sqcRYGate(q, 3.0368714491959765, 3);
  sqcRZGate(q, -3.1186014722748614, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4653438286622107, 0);
  sqcRZGate(q, 1.8453000932839148, 0);
  sqcRYGate(q, 0.6601756063425093, 1);
  sqcRZGate(q, -0.28102644279705113, 1);
  sqcRYGate(q, -3.067750335471028, 2);
  sqcRZGate(q, -0.09783043279593429, 2);
  sqcRYGate(q, -1.3667507219909822, 3);
  sqcRZGate(q, 0.09173711816153408, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.4985367808275532, 0);
  sqcRZGate(q, 0.04125158893798275, 0);
  sqcRYGate(q, 2.754910860259019, 1);
  sqcRZGate(q, -2.117483418030755, 1);
  sqcRYGate(q, -0.853739114456828, 2);
  sqcRZGate(q, 1.028970556337891, 2);
  sqcRYGate(q, 0.5073237721780668, 3);
  sqcRZGate(q, 0.3154731971868552, 3);

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
