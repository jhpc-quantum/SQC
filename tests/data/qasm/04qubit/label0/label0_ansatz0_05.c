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

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.037553355109157985, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.06494123063440795, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.02664985046184638, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.843204113832776, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 1.3417161339079453, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.6164390721906247, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.12528767451378803, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.464459491523574, 0);
  sqcRZGate(q, 0.2695915446900474, 1);
  sqcRZGate(q, -0.11936935346388347, 2);
  sqcRZGate(q, 0.07788976232398666, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.17931977672720129, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.04901884595331619, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.11727359880720409, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.4094797628264667, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.25560116292138746, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.18061700023305954, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.6804776449295782, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.4026602712981361, 0);
  sqcRZGate(q, 0.40029429199615174, 1);
  sqcRZGate(q, -0.22903391174111074, 2);
  sqcRZGate(q, 0.08843443447406027, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.6427763383055101, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.12284092442733827, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.25563559483253334, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.04988888787180837, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.05810681911430334, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.32758239279246143, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.9237472638882539, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.24328750790002351, 0);
  sqcRZGate(q, 0.11309454511928102, 1);
  sqcRZGate(q, -0.6721695503654073, 2);
  sqcRZGate(q, -0.003789565323056615, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.7734603837626806, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.10216640352434794, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.14251195558121815, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.34937461185371843, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.7736568671672693, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.6935444712774297, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.8909637340130704, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.08221712513766768, 0);
  sqcRZGate(q, -0.674818940271099, 1);
  sqcRZGate(q, -0.23090552458669175, 2);
  sqcRZGate(q, 0.3164101375923601, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.43322227525667933, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.4609582767891625, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.15984277815596226, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.03721775548768073, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.007092225134785, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -1.257403252990228, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.48853432212833175, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.07111058206040761, 0);
  sqcRZGate(q, -0.4682307785888126, 1);
  sqcRZGate(q, -0.12603620198033552, 2);
  sqcRZGate(q, 0.812756680277061, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.36283555614187507, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.008185383696140658, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.09695690383304706, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.23275125320071974, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.4700222471411752, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -1.5885236009791404, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -1.1122158807317657, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.3641162455412023, 0);
  sqcRZGate(q, 0.6218092788655728, 1);
  sqcRZGate(q, -0.3769932890124841, 2);
  sqcRZGate(q, 0.5117727336715159, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.5543646725275861, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.9115899649116973, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.09163171042791099, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.3451029160510999, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.7600018145429328, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -1.3967121095441313, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -1.5885975801326055, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.3995637352603078, 0);
  sqcRZGate(q, 0.27474074441203, 1);
  sqcRZGate(q, -0.008872925154234374, 2);
  sqcRZGate(q, 0.7422705719312354, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.8296738547676432, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 2.8115852945159165, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 1.8984182334423447, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.4439184157967954, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.9037305793187023, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.028207298982588027, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -1.5728127720896887, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.8550797662264676, 0);
  sqcRZGate(q, 0.9213044928101322, 1);
  sqcRZGate(q, -0.05052638432449135, 2);
  sqcRZGate(q, 1.4391332437503837, 3);

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
