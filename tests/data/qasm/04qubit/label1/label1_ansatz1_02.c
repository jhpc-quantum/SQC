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

  sqcRYGate(q, 1.0151532353015504, 0);
  sqcRZGate(q, 0.05105387851791577, 0);
  sqcRYGate(q, -1.570796818498839, 1);
  sqcRZGate(q, 0.12445599638186434, 1);
  sqcRYGate(q, 1.5707968705761681, 2);
  sqcRZGate(q, 3.048364473539055, 2);
  sqcRYGate(q, -1.6218911902150517, 3);
  sqcRZGate(q, -0.9556617951376436, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.6916542629593763, 0);
  sqcRZGate(q, 0.5941035351636463, 0);
  sqcRYGate(q, -0.8922429791011535, 1);
  sqcRZGate(q, 0.8045920881728291, 1);
  sqcRYGate(q, -1.3525889102580266, 2);
  sqcRZGate(q, -2.6667744514750806, 2);
  sqcRYGate(q, 1.370825702137127, 3);
  sqcRZGate(q, 1.9331263537389223, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2029179149045113, 0);
  sqcRZGate(q, -0.9690256652952914, 0);
  sqcRYGate(q, 7.628376277324378e-07, 1);
  sqcRZGate(q, -0.3382587089478317, 1);
  sqcRYGate(q, 3.1415921016786195, 2);
  sqcRZGate(q, 0.2717453874458968, 2);
  sqcRYGate(q, 1.8853009444706714, 3);
  sqcRZGate(q, -2.2779707045533515, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.6143875315256335, 0);
  sqcRZGate(q, -0.5366591437925123, 0);
  sqcRYGate(q, 2.23977591434263, 1);
  sqcRZGate(q, 0.13594631320440168, 1);
  sqcRYGate(q, -1.5853707854183687, 2);
  sqcRZGate(q, 2.8616967849179007, 2);
  sqcRYGate(q, -0.7579714364513741, 3);
  sqcRZGate(q, -0.44721857891398803, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1300493978928436, 0);
  sqcRZGate(q, 2.9509451178587276, 0);
  sqcRYGate(q, -3.141591911128593, 1);
  sqcRZGate(q, 2.2336704472183655, 1);
  sqcRYGate(q, 2.433160947026223e-06, 2);
  sqcRZGate(q, 1.9516460458864326, 2);
  sqcRYGate(q, -1.030866115176897, 3);
  sqcRZGate(q, -1.2647547489359303, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8533554429023562, 0);
  sqcRZGate(q, 2.1961979111232126, 0);
  sqcRYGate(q, 2.325854306432322, 1);
  sqcRZGate(q, 0.060961217182737365, 1);
  sqcRYGate(q, 1.039740571792142, 2);
  sqcRZGate(q, -0.5329570558410879, 2);
  sqcRYGate(q, 3.067973306650345, 3);
  sqcRZGate(q, -1.5504562819508978, 3);

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
