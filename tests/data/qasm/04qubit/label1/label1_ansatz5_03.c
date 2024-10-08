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

  sqcRYGate(q, 0.4299778706114272, 0);
  sqcRYGate(q, -0.31918834596402706, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7039362430561197, 0);
  sqcRYGate(q, -2.13074223807919, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4792540972057484, 2);
  sqcRYGate(q, -2.0078130444430506, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8366252992302129, 2);
  sqcRYGate(q, -1.9975922679000169, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1787260043569574, 1);
  sqcRYGate(q, 3.071774220664187, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1833120026844677, 1);
  sqcRYGate(q, 2.837730081652782, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2689413252043486, 0);
  sqcRYGate(q, -2.4701134301456924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0049920002860424, 0);
  sqcRYGate(q, 0.007170452350459975, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8788120647129083, 2);
  sqcRYGate(q, 1.602217812484196, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0625356032059923, 2);
  sqcRYGate(q, 2.4328166727104947, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0864583665018777, 1);
  sqcRYGate(q, 0.026191041571133056, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.464172685391647, 1);
  sqcRYGate(q, 1.0270164918035973, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.47337051773459715, 0);
  sqcRYGate(q, 1.261592474875365, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1512709961891856, 0);
  sqcRYGate(q, 1.0636338313684737, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5930031349200238, 2);
  sqcRYGate(q, -2.1606249552753196, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5175747533728128, 2);
  sqcRYGate(q, -0.9638559070174607, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6639478219785806, 1);
  sqcRYGate(q, 0.5170945906865315, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4652543196835229, 1);
  sqcRYGate(q, 1.636622266478695, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.539432734185376, 0);
  sqcRYGate(q, 0.3820260770678825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2734709769222725, 0);
  sqcRYGate(q, -2.816361845447804, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2901643349512095, 2);
  sqcRYGate(q, -2.408828739688091, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9301310740640965, 2);
  sqcRYGate(q, -2.48823834607969, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.569392540061245, 1);
  sqcRYGate(q, -1.4246045222992345, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7803127362026157, 1);
  sqcRYGate(q, -0.8601084162108439, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.18394678782950946, 0);
  sqcRYGate(q, -1.8358369905450427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6605946512195588, 0);
  sqcRYGate(q, -2.621048806207459, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0797573382243595, 2);
  sqcRYGate(q, 2.4869523173081056, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8230947948312677, 2);
  sqcRYGate(q, -0.23125035692284748, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0759072353196555, 1);
  sqcRYGate(q, 0.8670147077287416, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.41812576381439376, 1);
  sqcRYGate(q, -1.9840078231915115, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.20333974767132634, 0);
  sqcRYGate(q, 1.20041379038118, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8395591990530518, 0);
  sqcRYGate(q, -1.8954405519020643, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4668768748776224, 2);
  sqcRYGate(q, 2.9564268553572934, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.24950796253945207, 2);
  sqcRYGate(q, 1.1334876005744272, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4688556825399037, 1);
  sqcRYGate(q, 1.8559393327548204, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.722122553058024, 1);
  sqcRYGate(q, -0.7308592944339638, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.768113023000202, 0);
  sqcRYGate(q, 0.0018950077087836995, 1);
  sqcRYGate(q, 2.7835048147358505, 2);
  sqcRYGate(q, -2.4639166254304867, 3);

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
