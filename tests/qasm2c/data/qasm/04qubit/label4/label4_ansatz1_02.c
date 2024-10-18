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

  sqcRYGate(q, 2.8956460406612656, 0);
  sqcRZGate(q, 1.4145304002381074, 0);
  sqcRYGate(q, -1.659608178539906, 1);
  sqcRZGate(q, 1.6049167004377862, 1);
  sqcRYGate(q, -0.09522996868369443, 2);
  sqcRZGate(q, -2.7643367613217946, 2);
  sqcRYGate(q, 0.18398860349081847, 3);
  sqcRZGate(q, -2.73187710091842, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8017656604030208e-05, 0);
  sqcRZGate(q, -1.904045031262716, 0);
  sqcRYGate(q, -0.0006319083592278983, 1);
  sqcRZGate(q, 0.2305989607243788, 1);
  sqcRYGate(q, -1.464702913202114, 2);
  sqcRZGate(q, 1.6080074477538684, 2);
  sqcRYGate(q, -1.688947925744591, 3);
  sqcRZGate(q, -0.0955621570781773, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3527036930416285, 0);
  sqcRZGate(q, -0.865981394562582, 0);
  sqcRYGate(q, 1.5200924294957057, 1);
  sqcRZGate(q, 2.537457916614287, 1);
  sqcRYGate(q, 1.4408724086709075, 2);
  sqcRZGate(q, 1.2226981592108768, 2);
  sqcRYGate(q, -1.1386806802962977, 3);
  sqcRZGate(q, 1.6228021479916328, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6180086232356946e-05, 0);
  sqcRZGate(q, -2.161013067213123, 0);
  sqcRYGate(q, 1.5708019936255688, 1);
  sqcRZGate(q, -1.5707993976996883, 1);
  sqcRYGate(q, 0.655987358673741, 2);
  sqcRZGate(q, 2.424307466164992, 2);
  sqcRYGate(q, -1.2822799999092798, 3);
  sqcRZGate(q, 0.34582809067894793, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4107240564019978, 0);
  sqcRZGate(q, -1.5707942610380625, 0);
  sqcRYGate(q, 1.570796278254698, 1);
  sqcRZGate(q, -1.5742057099790656, 1);
  sqcRYGate(q, 3.141586906514881, 2);
  sqcRZGate(q, -2.28021173315551, 2);
  sqcRYGate(q, 1.3561410007007133, 3);
  sqcRZGate(q, -3.0192751010711008, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5708018675308077, 0);
  sqcRZGate(q, -1.710492996108032, 0);
  sqcRYGate(q, -1.3106139976878222, 1);
  sqcRZGate(q, 2.3285246005349753, 1);
  sqcRYGate(q, -9.543120083613077e-06, 2);
  sqcRZGate(q, -2.1299253436371925, 2);
  sqcRYGate(q, -3.007673099902172, 3);
  sqcRZGate(q, -0.3345005701537433, 3);

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
