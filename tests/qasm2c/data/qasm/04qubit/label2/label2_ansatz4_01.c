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

  sqcRYGate(q, 1.561519319400829, 0);
  sqcRZGate(q, -1.7803453569672518, 0);
  sqcRYGate(q, 1.5420762471153753, 1);
  sqcRZGate(q, 1.0946906558715401, 1);
  sqcRYGate(q, -3.1415924285372747, 2);
  sqcRZGate(q, 2.612437971154039, 2);
  sqcRYGate(q, -3.0757097708950045, 3);
  sqcRZGate(q, -0.35116437648057147, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.4038862742296745, 0);
  sqcRZGate(q, -2.8970217561850893, 0);
  sqcRYGate(q, 0.3920228817889289, 1);
  sqcRZGate(q, -0.20517770860673323, 1);
  sqcRYGate(q, -3.1415916815301217, 2);
  sqcRZGate(q, -0.832580890948675, 2);
  sqcRYGate(q, -1.8472132223377793, 3);
  sqcRZGate(q, -0.9619727263858313, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.414010125588072, 0);
  sqcRZGate(q, 0.9456787763448268, 0);
  sqcRYGate(q, 2.701302197669716, 1);
  sqcRZGate(q, 0.06779451948004707, 1);
  sqcRYGate(q, 4.1547428543939186e-07, 2);
  sqcRZGate(q, 2.8635915570107096, 2);
  sqcRYGate(q, 3.1284045083615064, 3);
  sqcRZGate(q, -1.9037517304407565, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5471809736885882, 0);
  sqcRZGate(q, 1.9962745135679985, 0);
  sqcRYGate(q, -2.5087616576734604, 1);
  sqcRZGate(q, 0.403767325671965, 1);
  sqcRYGate(q, 1.5707963235785452, 2);
  sqcRZGate(q, 1.2865343736874664e-05, 2);
  sqcRYGate(q, 2.6343281941403554, 3);
  sqcRZGate(q, 2.477050069364811, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -8.793279651087005e-07, 0);
  sqcRZGate(q, 2.5707258269296696, 0);
  sqcRYGate(q, -1.2811869769182183e-06, 1);
  sqcRZGate(q, 2.569932433904085, 1);
  sqcRYGate(q, 1.5707963915765522, 2);
  sqcRZGate(q, 2.366261051901959, 2);
  sqcRYGate(q, 3.141580137295417, 3);
  sqcRZGate(q, -2.412793684268109, 3);

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
