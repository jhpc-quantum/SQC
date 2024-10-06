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

  sqcRYGate(q, 1.5009331404404724, 0);
  sqcRZGate(q, 2.846523840531543, 0);
  sqcRYGate(q, 2.105823595453688, 1);
  sqcRZGate(q, -1.2156685767988824, 1);
  sqcRYGate(q, -1.6503206877969123, 2);
  sqcRZGate(q, 2.437425514642834, 2);
  sqcRYGate(q, 0.1491729369116923, 3);
  sqcRZGate(q, -3.1056546701788315, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.34361438345705e-05, 0);
  sqcRZGate(q, 1.8063970221665278, 0);
  sqcRYGate(q, -4.082273554824001e-06, 1);
  sqcRZGate(q, 2.4600075981737466, 1);
  sqcRYGate(q, 3.198775246104901e-05, 2);
  sqcRZGate(q, 0.7041645898635902, 2);
  sqcRYGate(q, 4.534285360093744e-06, 3);
  sqcRZGate(q, -0.7533665497666603, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.866747986943044, 0);
  sqcRZGate(q, 0.2659873937708497, 0);
  sqcRYGate(q, -1.0748253390791627, 1);
  sqcRZGate(q, 2.189176653742881, 1);
  sqcRYGate(q, 1.4912735272559743, 2);
  sqcRZGate(q, -0.1942367033238126, 2);
  sqcRYGate(q, 1.683558787267606, 3);
  sqcRZGate(q, 3.0437411040292166, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7438469134365187, 0);
  sqcRZGate(q, 2.367312131750064, 0);
  sqcRYGate(q, -1.8543343271720012, 1);
  sqcRZGate(q, -3.141592123332546, 1);
  sqcRYGate(q, 1.570790044323524, 2);
  sqcRZGate(q, 0.08664447004994535, 2);
  sqcRYGate(q, -2.0686235103615065, 3);
  sqcRZGate(q, -3.141565186827133, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5707895106512302, 0);
  sqcRZGate(q, 1.3691087861012292, 0);
  sqcRYGate(q, -1.5707969657267478, 1);
  sqcRZGate(q, 0.2725784762022432, 1);
  sqcRYGate(q, 3.1415899678794252, 2);
  sqcRZGate(q, -0.11504136840163334, 2);
  sqcRYGate(q, 1.5707889921340876, 3);
  sqcRZGate(q, 1.8433679813059036, 3);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
