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

  sqcRYGate(q, 2.8047827440484525, 0);
  sqcRZGate(q, 0.24165860485162013, 0);
  sqcRYGate(q, -2.870912010790953, 1);
  sqcRZGate(q, -0.09689805234419013, 1);
  sqcRYGate(q, 1.1147343226269868e-07, 2);
  sqcRZGate(q, -1.5130683025943428, 2);
  sqcRYGate(q, -0.33957548544258115, 3);
  sqcRZGate(q, 1.598415433911938, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.822848034762039, 0);
  sqcRZGate(q, 1.9576868646229384, 0);
  sqcRYGate(q, 1.8189646304744393, 1);
  sqcRZGate(q, 2.729680672993502, 1);
  sqcRYGate(q, -3.1415926088386112, 2);
  sqcRZGate(q, -3.1110236221583087, 2);
  sqcRYGate(q, 1.4831671413540135, 3);
  sqcRZGate(q, 0.39468722692645203, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.5934694514071372, 0);
  sqcRZGate(q, 1.5950577927116867, 0);
  sqcRYGate(q, 2.926533357896, 1);
  sqcRZGate(q, 1.8408209535860838, 1);
  sqcRYGate(q, 1.5707964981829603, 2);
  sqcRZGate(q, 4.390274597484545e-07, 2);
  sqcRYGate(q, -1.359110260953464, 3);
  sqcRZGate(q, 1.00771572938649, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.141592089007796, 0);
  sqcRZGate(q, 0.7501442963032525, 0);
  sqcRYGate(q, -3.1415914677266508, 1);
  sqcRZGate(q, -0.8894416093241482, 1);
  sqcRYGate(q, 1.5707965150116576, 2);
  sqcRZGate(q, -0.8307005776516154, 2);
  sqcRYGate(q, -1.1992622089769905e-06, 3);
  sqcRZGate(q, 2.1542704267283197, 3);

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
