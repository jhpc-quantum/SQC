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

  sqcRYGate(q, -1.4740759618760566, 0);
  sqcRZGate(q, 2.058489598034635, 0);
  sqcRYGate(q, 4.16837519491678e-06, 1);
  sqcRZGate(q, 0.5046659593013496, 1);
  sqcRYGate(q, 7.986148907512813e-06, 2);
  sqcRZGate(q, 0.4617584565181021, 2);
  sqcRYGate(q, 0.40055514674678516, 3);
  sqcRZGate(q, -2.072126202697994, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.9374259558299127, 0);
  sqcRZGate(q, 2.067228768689282, 0);
  sqcRYGate(q, -1.9788440384184236e-06, 1);
  sqcRZGate(q, -0.5220156978348561, 1);
  sqcRYGate(q, 1.5707951386517776, 2);
  sqcRZGate(q, 0.11052635746189547, 2);
  sqcRYGate(q, 1.7715614379671483, 3);
  sqcRZGate(q, 1.9197851276673301, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.5707902390669308, 0);
  sqcRZGate(q, -3.0828008345490248, 0);
  sqcRYGate(q, -1.5707990767356654, 1);
  sqcRZGate(q, 0.8928694909128051, 1);
  sqcRYGate(q, -2.443790805273238e-07, 2);
  sqcRZGate(q, -0.9495408506825472, 2);
  sqcRYGate(q, 2.7905294393363866, 3);
  sqcRZGate(q, -1.5707953853028913, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 3.1415915415396722, 0);
  sqcRZGate(q, 0.46672580714129985, 0);
  sqcRYGate(q, -4.366718728751892e-07, 1);
  sqcRZGate(q, 0.14530509999227004, 1);
  sqcRYGate(q, -3.3351401125258917e-06, 2);
  sqcRZGate(q, -1.5435817283165973, 2);
  sqcRYGate(q, 1.5707981950720171, 3);
  sqcRZGate(q, -2.1034185014935494, 3);

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
