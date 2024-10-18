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

  sqcRYGate(q, -2.766348871743389, 0);
  sqcRZGate(q, -2.2006929923140897, 0);
  sqcRYGate(q, -0.8869186512084082, 1);
  sqcRZGate(q, -3.042162661030059, 1);
  sqcRYGate(q, 2.46424113914242, 2);
  sqcRZGate(q, 0.6834604454661763, 2);
  sqcRYGate(q, -0.8523196587749465, 3);
  sqcRZGate(q, 1.6514646091156144, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.9082039748355504, 0);
  sqcRZGate(q, 1.543036628001138, 0);
  sqcRYGate(q, -0.9267848521387921, 1);
  sqcRZGate(q, -2.6425269139186445, 1);
  sqcRYGate(q, 0.41404653874097264, 2);
  sqcRZGate(q, -0.4199845436698322, 2);
  sqcRYGate(q, 0.6737047468071059, 3);
  sqcRZGate(q, 0.3023315015342611, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.10783944123221213, 0);
  sqcRZGate(q, -2.0874612140892284, 0);
  sqcRYGate(q, -2.5820844691898963, 1);
  sqcRZGate(q, 0.9310728297039094, 1);
  sqcRYGate(q, -1.700286542462158, 2);
  sqcRZGate(q, -1.7833790685759434, 2);
  sqcRYGate(q, 2.4453519672423893, 3);
  sqcRZGate(q, -0.6704104345246771, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.96324555240661, 0);
  sqcRZGate(q, -1.0747898661335114, 0);
  sqcRYGate(q, 1.1937619364156569, 1);
  sqcRZGate(q, -2.022841901004406, 1);
  sqcRYGate(q, -2.7302023718750945, 2);
  sqcRZGate(q, -0.5668915031819981, 2);
  sqcRYGate(q, -1.4587801954285975, 3);
  sqcRZGate(q, -1.7936169220039166, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.08406394855313845, 0);
  sqcRZGate(q, -1.4572684457863296, 0);
  sqcRYGate(q, -1.3360573513114677, 1);
  sqcRZGate(q, 2.74162061881661, 1);
  sqcRYGate(q, 0.5640632625638391, 2);
  sqcRZGate(q, -0.8320212433937514, 2);
  sqcRYGate(q, 2.4338067099108986, 3);
  sqcRZGate(q, -0.5837817585944887, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.40731432968162, 0);
  sqcRZGate(q, 1.817015428426905, 0);
  sqcRYGate(q, 0.46702716653509585, 1);
  sqcRZGate(q, 3.0461869152683505, 1);
  sqcRYGate(q, 0.8627406968724368, 2);
  sqcRZGate(q, -2.724794571396835, 2);
  sqcRYGate(q, -2.9533772221414956, 3);
  sqcRZGate(q, 3.1225811458974118, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.538818834056377, 0);
  sqcRZGate(q, 2.379600606531365, 0);
  sqcRYGate(q, -0.4523695336579338, 1);
  sqcRZGate(q, 2.928452028674352, 1);
  sqcRYGate(q, 0.1715888703171076, 2);
  sqcRZGate(q, -0.48255795357433584, 2);
  sqcRYGate(q, 1.7259247337200556, 3);
  sqcRZGate(q, 1.9755210965216499, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7254609333672307, 0);
  sqcRZGate(q, 2.6483971263159587, 0);
  sqcRYGate(q, -2.548960421699662, 1);
  sqcRZGate(q, -2.573471237344955, 1);
  sqcRYGate(q, 0.29723719046080527, 2);
  sqcRZGate(q, 1.7779122492114736, 2);
  sqcRYGate(q, -2.668485387978916, 3);
  sqcRZGate(q, 1.3834902478324052, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.012450746916283, 0);
  sqcRZGate(q, -2.784527990794803, 0);
  sqcRYGate(q, 0.2832033491421366, 1);
  sqcRZGate(q, 1.4140343338870118, 1);
  sqcRYGate(q, 1.6080647691215253, 2);
  sqcRZGate(q, 1.5228802408288928, 2);
  sqcRYGate(q, 1.5380578302037087, 3);
  sqcRZGate(q, 1.8804466307247034, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2358736662678174, 0);
  sqcRZGate(q, 3.1367079063863534, 0);
  sqcRYGate(q, -2.3009335604010497, 1);
  sqcRZGate(q, 0.25581231230599166, 1);
  sqcRYGate(q, -2.6755721605451708, 2);
  sqcRZGate(q, 1.7467235979618494, 2);
  sqcRYGate(q, 0.17455407131829667, 3);
  sqcRZGate(q, -1.871758137169826, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.112379926042605, 0);
  sqcRZGate(q, 1.9616995973530091, 0);
  sqcRYGate(q, 1.5004704356697358, 1);
  sqcRZGate(q, -1.2353311797219404, 1);
  sqcRYGate(q, 0.9933747099539243, 2);
  sqcRZGate(q, -2.167397024748613, 2);
  sqcRYGate(q, 1.8638554421145779, 3);
  sqcRZGate(q, 0.8355760419482418, 3);

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
