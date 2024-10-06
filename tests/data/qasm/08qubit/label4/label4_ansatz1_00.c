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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 1.5709542719689087, 0);
  sqcRZGate(q, -3.141561155124864, 0);
  sqcRYGate(q, -1.5707961342604708, 1);
  sqcRZGate(q, 2.28322312499859, 1);
  sqcRYGate(q, -1.5709562082354258, 2);
  sqcRZGate(q, -0.0843702235460625, 2);
  sqcRYGate(q, -1.5708010694751555, 3);
  sqcRZGate(q, -1.5707751398064451, 3);
  sqcRYGate(q, 1.74880406221562, 4);
  sqcRZGate(q, -0.27890460605117173, 4);
  sqcRYGate(q, -1.570798135211791, 5);
  sqcRZGate(q, 1.570803892934052, 5);
  sqcRYGate(q, -0.773494389362015, 6);
  sqcRZGate(q, -3.14152226796277, 6);
  sqcRYGate(q, -1.5707727200291715, 7);
  sqcRZGate(q, -0.719560925914065, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5707696921379597, 0);
  sqcRZGate(q, 2.283200067350652, 0);
  sqcRYGate(q, -0.22070061274541874, 1);
  sqcRZGate(q, 1.570777199167404, 1);
  sqcRYGate(q, -1.5707826874248942, 2);
  sqcRZGate(q, -3.124728163475084, 2);
  sqcRYGate(q, -0.26275211001154464, 3);
  sqcRZGate(q, 3.1415865584640685, 3);
  sqcRYGate(q, 1.5708170754902229, 4);
  sqcRZGate(q, 0.005736629659752075, 4);
  sqcRYGate(q, -0.38067224564753593, 5);
  sqcRZGate(q, 2.3507000046663937e-06, 5);
  sqcRYGate(q, 1.5699511962377062, 6);
  sqcRZGate(q, -3.141582049571051, 6);
  sqcRYGate(q, -5.8540978605137184e-05, 7);
  sqcRZGate(q, 2.4736400266659473, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5706925271670658, 0);
  sqcRZGate(q, -0.13057856211505836, 0);
  sqcRYGate(q, 2.2488657168815083, 1);
  sqcRZGate(q, -1.5707941477168816, 1);
  sqcRYGate(q, 3.141424724278302, 2);
  sqcRZGate(q, -1.513227303916877, 2);
  sqcRYGate(q, 0.2585021032757103, 3);
  sqcRZGate(q, 1.5707827203495128, 3);
  sqcRYGate(q, 1.3927826973215756, 4);
  sqcRZGate(q, 2.799655901681507, 4);
  sqcRYGate(q, 2.571106452839416, 5);
  sqcRZGate(q, 1.5708041167697662, 5);
  sqcRYGate(q, -0.8343640053481867, 6);
  sqcRZGate(q, -1.7148924216177095, 6);
  sqcRYGate(q, -8.24861472992211e-06, 7);
  sqcRZGate(q, 1.3875128056795463, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1415909051802227, 0);
  sqcRZGate(q, -1.4263945113246734, 0);
  sqcRYGate(q, 1.5708055482010872, 1);
  sqcRZGate(q, 0.3137159655073489, 1);
  sqcRYGate(q, 1.5707961083944841, 2);
  sqcRZGate(q, 0.2751071913716894, 2);
  sqcRYGate(q, -1.570798063721094, 3);
  sqcRZGate(q, 1.9213212525371346, 3);
  sqcRYGate(q, 3.141563424751376, 4);
  sqcRZGate(q, -1.6371398592993893, 4);
  sqcRYGate(q, 1.5707954747655286, 5);
  sqcRZGate(q, -2.7435212874084076, 5);
  sqcRYGate(q, 1.5706485816482907, 6);
  sqcRZGate(q, 0.27408981656145537, 6);
  sqcRYGate(q, 1.5707679568818171, 7);
  sqcRZGate(q, 1.9213340478630814, 7);

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
