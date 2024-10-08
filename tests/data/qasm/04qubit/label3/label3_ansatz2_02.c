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

  sqcRYGate(q, 1.4364168701752444, 0);
  sqcRZGate(q, -3.0286922107073346, 0);
  sqcRYGate(q, -1.3368123263364824, 1);
  sqcRZGate(q, -1.9662705016610442, 1);
  sqcRYGate(q, 1.4823784763886654, 2);
  sqcRZGate(q, 3.1110654012409644, 2);
  sqcRYGate(q, -1.4968348746399807, 3);
  sqcRZGate(q, -1.438915149873523, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.5718631565633814, 0);
  sqcRZGate(q, -1.3499197340784506, 0);
  sqcRYGate(q, -2.1896861927069855, 1);
  sqcRZGate(q, 1.0426982259602258, 1);
  sqcRYGate(q, -1.0312581042334887, 2);
  sqcRZGate(q, -1.7589750290672646, 2);
  sqcRYGate(q, 1.6009760480964008, 3);
  sqcRZGate(q, -0.3422788406585849, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.2154946652644476, 0);
  sqcRZGate(q, -1.3881762433403138, 0);
  sqcRYGate(q, 1.442379145341615, 1);
  sqcRZGate(q, 0.08873080559471269, 1);
  sqcRYGate(q, 0.9440030661719423, 2);
  sqcRZGate(q, -2.1511840482606432, 2);
  sqcRYGate(q, -1.5887033108424131, 3);
  sqcRZGate(q, -0.6384057546349219, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.25363367445919, 0);
  sqcRZGate(q, 0.10434040806211708, 0);
  sqcRYGate(q, 2.186099795903215, 1);
  sqcRZGate(q, 3.0100401083497497, 1);
  sqcRYGate(q, 3.116222760964966, 2);
  sqcRZGate(q, -0.6323316193302355, 2);
  sqcRYGate(q, -2.9682488798842352, 3);
  sqcRZGate(q, -1.3169743419856814, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.6965088834006283, 0);
  sqcRZGate(q, -0.7371990787597467, 0);
  sqcRYGate(q, -2.5655252091006067, 1);
  sqcRZGate(q, -1.4161008239912878, 1);
  sqcRYGate(q, -0.3783008913440904, 2);
  sqcRZGate(q, -1.742503953032486, 2);
  sqcRYGate(q, 1.0829306121643634, 3);
  sqcRZGate(q, -2.5399367144297544, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.677133540388581, 0);
  sqcRZGate(q, -0.38165313613734325, 0);
  sqcRYGate(q, -3.053582527827847, 1);
  sqcRZGate(q, 0.5794068621266596, 1);
  sqcRYGate(q, -0.3835777052650782, 2);
  sqcRZGate(q, 2.049369318291195, 2);
  sqcRYGate(q, 1.0444875482300953, 3);
  sqcRZGate(q, 1.767133339492168, 3);

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
