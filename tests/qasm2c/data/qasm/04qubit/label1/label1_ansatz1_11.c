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

  sqcRYGate(q, -1.511325321641748, 0);
  sqcRZGate(q, -2.006637708195849, 0);
  sqcRYGate(q, -1.2849819181339697, 1);
  sqcRZGate(q, -0.30914032045775086, 1);
  sqcRYGate(q, -1.4886552834101667, 2);
  sqcRZGate(q, 1.3762839334496706, 2);
  sqcRYGate(q, -1.1300888580509885, 3);
  sqcRZGate(q, 1.7139280553754972, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4248141774771312, 0);
  sqcRZGate(q, 1.2170456357004678, 0);
  sqcRYGate(q, 1.7908178149177978, 1);
  sqcRZGate(q, -0.36524744077857646, 1);
  sqcRYGate(q, 0.8957183229976965, 2);
  sqcRZGate(q, -1.7104352707063182, 2);
  sqcRYGate(q, 0.24177060867809266, 3);
  sqcRZGate(q, 2.2665593504090555, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2769589313021275, 0);
  sqcRZGate(q, 2.8030292839922186, 0);
  sqcRYGate(q, -0.48209752041621173, 1);
  sqcRZGate(q, -2.639870304923228, 1);
  sqcRYGate(q, -0.6599675416007527, 2);
  sqcRZGate(q, 2.81537328133545, 2);
  sqcRYGate(q, -0.41066963610625695, 3);
  sqcRZGate(q, 0.6994107580032852, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.2505066582175832, 0);
  sqcRZGate(q, 1.3060249292945514, 0);
  sqcRYGate(q, 1.598357311036951, 1);
  sqcRZGate(q, -2.499263099049475, 1);
  sqcRYGate(q, -1.8571458395904814, 2);
  sqcRZGate(q, 1.226341299027829, 2);
  sqcRYGate(q, 0.03371121816645686, 3);
  sqcRZGate(q, -0.6669109304807784, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5711871350976994, 0);
  sqcRZGate(q, -1.820964055423763, 0);
  sqcRYGate(q, -2.573534027809183, 1);
  sqcRZGate(q, 0.8936816872771471, 1);
  sqcRYGate(q, -0.7659158536589716, 2);
  sqcRZGate(q, 2.384898426091118, 2);
  sqcRYGate(q, -2.5910831243571324, 3);
  sqcRZGate(q, -0.9075049747445254, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.2477307002805245, 0);
  sqcRZGate(q, -0.955110315227921, 0);
  sqcRYGate(q, 1.9229827819330916, 1);
  sqcRZGate(q, 0.950459147366806, 1);
  sqcRYGate(q, -1.0781809105008087, 2);
  sqcRZGate(q, 0.9484702340924619, 2);
  sqcRYGate(q, -1.094002569981658, 3);
  sqcRZGate(q, -0.9120684179162317, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6709302972875867, 0);
  sqcRZGate(q, 1.3961788823270904, 0);
  sqcRYGate(q, 1.0951575586722664, 1);
  sqcRZGate(q, -2.1971917199773174, 1);
  sqcRYGate(q, 2.831291213240891, 2);
  sqcRZGate(q, -2.1002794958168, 2);
  sqcRYGate(q, 2.804958043622831, 3);
  sqcRZGate(q, 2.286366056695466, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.523502349014399, 0);
  sqcRZGate(q, -1.7748932180020558, 0);
  sqcRYGate(q, -1.0776829688153393, 1);
  sqcRZGate(q, 2.4280909088853804, 1);
  sqcRYGate(q, 0.8440667508443971, 2);
  sqcRZGate(q, 2.674480038231218, 2);
  sqcRYGate(q, 2.246535677846634, 3);
  sqcRZGate(q, 0.5765272682639999, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.49223471891282, 0);
  sqcRZGate(q, 1.153718678213408, 0);
  sqcRYGate(q, 2.233364365827255, 1);
  sqcRZGate(q, 0.36341739810683116, 1);
  sqcRYGate(q, -0.7615970544860957, 2);
  sqcRZGate(q, -2.5530124426421335, 2);
  sqcRYGate(q, 2.4365794711321156, 3);
  sqcRZGate(q, 0.11672975416759979, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8882496426000401, 0);
  sqcRZGate(q, 1.7094999541880478, 0);
  sqcRYGate(q, -0.9010355006493606, 1);
  sqcRZGate(q, 2.3306592993615878, 1);
  sqcRYGate(q, 2.027677822417912, 2);
  sqcRZGate(q, 2.39147022203524, 2);
  sqcRYGate(q, 3.118792728422347, 3);
  sqcRZGate(q, 2.9628234290667845, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.3649929726560508, 0);
  sqcRZGate(q, -0.7213769211001929, 0);
  sqcRYGate(q, 2.4120418277314046, 1);
  sqcRZGate(q, 2.9184258233189246, 1);
  sqcRYGate(q, -1.762258190786427, 2);
  sqcRZGate(q, -2.764144779071107, 2);
  sqcRYGate(q, 1.1599886374518995, 3);
  sqcRZGate(q, -0.08791320887758654, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6995031418364986, 0);
  sqcRZGate(q, 3.1025858204825516, 0);
  sqcRYGate(q, 1.7201130292440432, 1);
  sqcRZGate(q, -0.4897111746783498, 1);
  sqcRYGate(q, 2.0066505257482077, 2);
  sqcRZGate(q, -1.552981208829224, 2);
  sqcRYGate(q, 1.4402268381857857, 3);
  sqcRZGate(q, 2.253719198331865, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7006863906916212, 0);
  sqcRZGate(q, 0.4990250834140942, 0);
  sqcRYGate(q, 0.49377035864949237, 1);
  sqcRZGate(q, -3.0015722812431136, 1);
  sqcRYGate(q, 2.5620172454942356, 2);
  sqcRZGate(q, -1.2303944166111702, 2);
  sqcRYGate(q, -2.8176805217048266, 3);
  sqcRZGate(q, -1.3325259856272984, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.866434356927801, 0);
  sqcRZGate(q, -3.051104666993477, 0);
  sqcRYGate(q, -0.8709101134679225, 1);
  sqcRZGate(q, 0.35533285904842854, 1);
  sqcRYGate(q, 1.3914998065143305, 2);
  sqcRZGate(q, -0.9638193392960439, 2);
  sqcRYGate(q, -1.5649327504032515, 3);
  sqcRZGate(q, -0.24440720006033878, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9122573675295813, 0);
  sqcRZGate(q, -2.4365353243963144, 0);
  sqcRYGate(q, 1.9301845769523824, 1);
  sqcRZGate(q, 0.6419959033704958, 1);
  sqcRYGate(q, -2.5174180483054904, 2);
  sqcRZGate(q, -3.127301107454658, 2);
  sqcRYGate(q, 1.9183159759132018, 3);
  sqcRZGate(q, 3.141153397693491, 3);

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
