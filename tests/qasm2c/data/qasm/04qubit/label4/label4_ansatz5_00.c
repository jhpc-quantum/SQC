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

  sqcRYGate(q, 1.464113134410834, 0);
  sqcRYGate(q, -1.5155778177828525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8190692388934182, 0);
  sqcRYGate(q, -1.7129890648146866, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9451514778079668, 2);
  sqcRYGate(q, 0.636711522322538, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2974586977359537, 2);
  sqcRYGate(q, -0.009819173643669419, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.30436379617160725, 1);
  sqcRYGate(q, -2.6754565471384786, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.22516477120958353, 1);
  sqcRYGate(q, 2.0207540575743113, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8078778615450957, 0);
  sqcRYGate(q, 2.7709251767608882, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6351017553242273, 0);
  sqcRYGate(q, -2.8915578185830717, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6729145160628203, 2);
  sqcRYGate(q, 2.6823712344922175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9846460813721922, 2);
  sqcRYGate(q, -0.9509352235487603, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8398137992769985, 1);
  sqcRYGate(q, -2.4723179036112373, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5908717889632369, 1);
  sqcRYGate(q, -1.9321241820168207, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4283858117333725, 0);
  sqcRYGate(q, 2.6719608414479143, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.792201413762482, 0);
  sqcRYGate(q, 1.1874243299801943, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0842343670253145, 2);
  sqcRYGate(q, -1.1244070881535668, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2219162623149824, 2);
  sqcRYGate(q, 0.13780117335106112, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.041253690498039, 1);
  sqcRYGate(q, 2.1101302170132765, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8221855181308118, 1);
  sqcRYGate(q, -0.6942746969400051, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3200256052442234, 0);
  sqcRYGate(q, -1.8965683520912568, 1);
  sqcRYGate(q, -2.468877952678342, 2);
  sqcRYGate(q, -2.0281925188956675, 3);

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
