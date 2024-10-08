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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -1.5707712439630073, 0);
  sqcRZGate(q, -0.8802554357440592, 0);
  sqcRYGate(q, 1.5707976282558171, 1);
  sqcRZGate(q, -0.04665372011705937, 1);
  sqcRYGate(q, 1.5707551617387727, 2);
  sqcRZGate(q, 3.06455842297022, 2);
  sqcRYGate(q, -2.9149118593310632, 3);
  sqcRZGate(q, 3.1415804281206556, 3);
  sqcRYGate(q, -0.22667942473078373, 4);
  sqcRZGate(q, -1.5413969169500375e-06, 4);
  sqcRYGate(q, 1.5707937310198092, 5);
  sqcRZGate(q, -2.730243968792962, 5);
  sqcRYGate(q, -1.5707954255141887, 6);
  sqcRZGate(q, -1.646089399496486, 6);
  sqcRYGate(q, -1.570848930750309, 7);
  sqcRZGate(q, 7.23352786188709e-05, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.0811695310668252, 0);
  sqcRZGate(q, -0.8811995470637972, 0);
  sqcRYGate(q, -1.5708003971419298, 1);
  sqcRZGate(q, -2.677325688820135, 1);
  sqcRYGate(q, -1.5707578994799132, 2);
  sqcRZGate(q, 1.5708429259355332, 2);
  sqcRYGate(q, -1.570785111756944, 3);
  sqcRZGate(q, 2.6567791844873936, 3);
  sqcRYGate(q, -1.570795822960174, 4);
  sqcRZGate(q, 2.295240443132316, 4);
  sqcRYGate(q, 1.5707765360794905, 5);
  sqcRZGate(q, -1.5708001953368935, 5);
  sqcRYGate(q, -1.5707482092783316, 6);
  sqcRZGate(q, -0.006932713003651576, 6);
  sqcRYGate(q, -1.5707876532773224, 7);
  sqcRZGate(q, -1.646080728995913, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5707524643245254, 0);
  sqcRZGate(q, 3.1415402628530207, 0);
  sqcRYGate(q, 3.141544159774116, 1);
  sqcRZGate(q, -1.1065379966224844, 1);
  sqcRYGate(q, 1.5708597029782323, 2);
  sqcRZGate(q, 1.5707970666889457, 2);
  sqcRYGate(q, 3.1415924768381096, 3);
  sqcRZGate(q, -0.14285383365083082, 3);
  sqcRYGate(q, 2.841480890580783e-07, 4);
  sqcRZGate(q, -2.530296468757653, 4);
  sqcRYGate(q, 1.5708859368419823, 5);
  sqcRZGate(q, -1.5707900711298322, 5);
  sqcRYGate(q, -3.141562404418915, 6);
  sqcRZGate(q, 1.5638502823851008, 6);
  sqcRYGate(q, -1.570776625877806, 7);
  sqcRZGate(q, -1.0888084556937176, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5322552544589856, 0);
  sqcRZGate(q, -1.9429740627557874, 0);
  sqcRYGate(q, 1.570789979303772, 1);
  sqcRZGate(q, -2.4706881306354225, 1);
  sqcRYGate(q, 1.5707964711924423, 2);
  sqcRZGate(q, 2.692376909451404, 2);
  sqcRYGate(q, 3.141586903490584, 3);
  sqcRZGate(q, 2.5836603000743747, 3);
  sqcRYGate(q, 1.864840665717459e-05, 4);
  sqcRZGate(q, -2.252583627967133, 4);
  sqcRYGate(q, 1.5707899311856917, 5);
  sqcRZGate(q, -0.8943101670328976, 5);
  sqcRYGate(q, 1.5707971739716902, 6);
  sqcRZGate(q, 2.224747443650119, 6);
  sqcRYGate(q, 5.202799082299507e-05, 7);
  sqcRZGate(q, 1.3539448845978048, 7);

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
