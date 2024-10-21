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

  sqcRYGate(q, -2.4164276981048265, 0);
  sqcRZGate(q, 1.1664320994554096, 0);
  sqcRYGate(q, -2.6291097768909912, 1);
  sqcRZGate(q, 1.410418735116461e-06, 1);
  sqcRYGate(q, 1.5707749594594846, 2);
  sqcRZGate(q, -0.6765786806130888, 2);
  sqcRYGate(q, -1.5708019220907907, 3);
  sqcRZGate(q, -2.619340799499736, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.141589112511212, 0);
  sqcRZGate(q, -2.5901771607875204, 0);
  sqcRYGate(q, 2.5265732102063643, 1);
  sqcRZGate(q, -0.24800155741778362, 1);
  sqcRYGate(q, -2.246223322110978, 2);
  sqcRZGate(q, -1.5707510437518328, 2);
  sqcRYGate(q, 1.014940806698731, 3);
  sqcRZGate(q, -1.2214705562384163, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.416428764480874, 0);
  sqcRZGate(q, -1.4974679211385684, 0);
  sqcRYGate(q, -1.899444166420552, 1);
  sqcRZGate(q, 1.4892512212559987, 1);
  sqcRYGate(q, 2.9071207880380596, 2);
  sqcRZGate(q, 4.5138240587050404e-05, 2);
  sqcRYGate(q, -1.5707773628937503, 3);
  sqcRZGate(q, 1.3975405571211097, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.741762667428759e-06, 0);
  sqcRZGate(q, -1.2233272913484878, 0);
  sqcRYGate(q, 1.5707953583553413, 1);
  sqcRZGate(q, -0.6636742111918562, 1);
  sqcRYGate(q, -1.5707974592017218, 2);
  sqcRZGate(q, 0.42079084513768006, 2);
  sqcRYGate(q, 5.660637271809321e-06, 3);
  sqcRZGate(q, -2.5475378014026027, 3);

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
