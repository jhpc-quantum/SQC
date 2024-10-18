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

  sqcRYGate(q, -0.2803186358146301, 0);
  sqcRZGate(q, -1.0507250320150971, 0);
  sqcRYGate(q, 1.6835284407118687, 1);
  sqcRZGate(q, -1.3881951852504262, 1);
  sqcRYGate(q, 3.6249813568645095e-06, 2);
  sqcRZGate(q, -2.414274877785559, 2);
  sqcRYGate(q, -0.3194342628731537, 3);
  sqcRZGate(q, 1.392428549399046, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.22543363143409678, 0);
  sqcRZGate(q, -0.18452092431459907, 0);
  sqcRYGate(q, 0.11312553754390553, 1);
  sqcRZGate(q, -2.9896436664931247, 1);
  sqcRYGate(q, -3.1415872610916318, 2);
  sqcRZGate(q, -2.8422962581251516, 2);
  sqcRYGate(q, 0.36875290730289045, 3);
  sqcRZGate(q, 0.6276557839839051, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.21672443777439232, 0);
  sqcRZGate(q, 1.3860270315019954, 0);
  sqcRYGate(q, 0.10167170337785271, 1);
  sqcRZGate(q, 1.4699189742579675, 1);
  sqcRYGate(q, -1.2901245699303841e-05, 2);
  sqcRZGate(q, -0.3166656441434661, 2);
  sqcRYGate(q, 0.33959806473465814, 3);
  sqcRZGate(q, 0.8962519251299711, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.9320002923877917, 0);
  sqcRZGate(q, 1.5819562385572692, 0);
  sqcRYGate(q, -3.1328777643976533, 1);
  sqcRZGate(q, -1.8792619586007115, 1);
  sqcRYGate(q, -1.5707915332546447, 2);
  sqcRZGate(q, 1.5941440754119185e-06, 2);
  sqcRYGate(q, 2.9911818562185846, 3);
  sqcRZGate(q, 0.9402778880824592, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -7.498662411009605e-07, 0);
  sqcRZGate(q, 0.564598673718999, 0);
  sqcRYGate(q, 3.141592318198024, 1);
  sqcRZGate(q, -0.5083315771321499, 1);
  sqcRYGate(q, -1.570806832803835, 2);
  sqcRZGate(q, -1.6127564675691266, 2);
  sqcRYGate(q, 5.859082378704355e-07, 3);
  sqcRZGate(q, -0.691203622669939, 3);

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
