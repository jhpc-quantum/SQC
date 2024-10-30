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

  sqcRYGate(q, 0.6097725567755887, 0);
  sqcRZGate(q, 3.1194268417615953, 0);
  sqcRYGate(q, -1.5423985618985834, 1);
  sqcRZGate(q, 0.4774777088000697, 1);
  sqcRYGate(q, 1.032855498473599, 2);
  sqcRZGate(q, 1.69551652926288, 2);
  sqcRYGate(q, -2.540285561534648, 3);
  sqcRZGate(q, -2.8093238182132882, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.439652721869597, 0);
  sqcRZGate(q, 0.5187230266039116, 0);
  sqcRYGate(q, 1.7933813347430547, 1);
  sqcRZGate(q, 0.34518521834826205, 1);
  sqcRYGate(q, 2.2693889456713316, 2);
  sqcRZGate(q, 2.559216884996717, 2);
  sqcRYGate(q, 2.083188819577577, 3);
  sqcRZGate(q, -2.2875869989087825, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.8089068951268674, 0);
  sqcRZGate(q, 1.9904000137491944, 0);
  sqcRYGate(q, -0.143203028268703, 1);
  sqcRZGate(q, -1.9318147452653038, 1);
  sqcRYGate(q, -2.040680573310528, 2);
  sqcRZGate(q, -1.6143642660446973, 2);
  sqcRYGate(q, -0.4689636954145689, 3);
  sqcRZGate(q, 2.415020402598879, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.121044721826788, 0);
  sqcRZGate(q, 0.010827107929977197, 0);
  sqcRYGate(q, -0.18343464611973498, 1);
  sqcRZGate(q, -1.2172977533078901, 1);
  sqcRYGate(q, -1.5833359255809158, 2);
  sqcRZGate(q, -2.2292858434801355, 2);
  sqcRYGate(q, 1.1548724711915428, 3);
  sqcRZGate(q, 1.3939118963464183, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.7151132153173174, 0);
  sqcRZGate(q, 1.0384428264726628, 0);
  sqcRYGate(q, 1.805460301539012, 1);
  sqcRZGate(q, -2.987727943229407, 1);
  sqcRYGate(q, 1.1505300267613845, 2);
  sqcRZGate(q, 2.982480609650663, 2);
  sqcRYGate(q, -0.41157451849962745, 3);
  sqcRZGate(q, 2.2248620837426762, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.022210500398721, 0);
  sqcRZGate(q, 0.19535113295101472, 0);
  sqcRYGate(q, -0.8599377351414466, 1);
  sqcRZGate(q, 2.6957693797425626, 1);
  sqcRYGate(q, 0.7219041924143158, 2);
  sqcRZGate(q, 0.2822082652988856, 2);
  sqcRYGate(q, 1.0731308711656808, 3);
  sqcRZGate(q, -2.602706370003342, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.39234902882389733, 0);
  sqcRZGate(q, -2.157337575862578, 0);
  sqcRYGate(q, -1.433750095617673, 1);
  sqcRZGate(q, 0.9622381608681155, 1);
  sqcRYGate(q, -1.9173614979564748, 2);
  sqcRZGate(q, -3.054399752791252, 2);
  sqcRYGate(q, 2.820452921986665, 3);
  sqcRZGate(q, 2.596623883933478, 3);

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
