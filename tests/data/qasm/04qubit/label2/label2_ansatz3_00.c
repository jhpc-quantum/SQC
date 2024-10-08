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

  sqcRYGate(q, -0.5326302065274024, 0);
  sqcRZGate(q, -1.5662545725355432, 0);
  sqcRYGate(q, -0.15333628421090228, 1);
  sqcRZGate(q, 1.1000761551157985, 1);
  sqcRYGate(q, 0.6511851270206312, 2);
  sqcRZGate(q, -3.133580139797756, 2);
  sqcRYGate(q, -1.8150701172263288, 3);
  sqcRZGate(q, -0.34565164526991493, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.9935129623809857, 0);
  sqcRZGate(q, -1.707942125115434, 0);
  sqcRYGate(q, 3.1074677855331894, 1);
  sqcRZGate(q, -2.0645222305838535, 1);
  sqcRYGate(q, 1.6947542640551878, 2);
  sqcRZGate(q, -0.007624283556838688, 2);
  sqcRYGate(q, -1.5600354015104392, 3);
  sqcRZGate(q, 2.314872308009244, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.1018948903028467, 0);
  sqcRZGate(q, -2.481311974507677, 0);
  sqcRYGate(q, 2.344472598055255, 1);
  sqcRZGate(q, 0.6342284117689881, 1);
  sqcRYGate(q, 0.809254450383929, 2);
  sqcRZGate(q, -1.6753051276763413, 2);
  sqcRYGate(q, 2.152432909996583, 3);
  sqcRZGate(q, -2.2918524861263028, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.5042371581248175, 0);
  sqcRZGate(q, 1.2238463256555905, 0);
  sqcRYGate(q, 1.4021599367296043, 1);
  sqcRZGate(q, 3.0076757182796667, 1);
  sqcRYGate(q, -2.882183703126355, 2);
  sqcRZGate(q, -3.0743183865763606, 2);
  sqcRYGate(q, -1.9704591471806834, 3);
  sqcRZGate(q, 2.935303489195741, 3);

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
