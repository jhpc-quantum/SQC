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

  sqcRYGate(q, -2.8310904468822127, 0);
  sqcRZGate(q, -2.9058320132140967, 0);
  sqcRYGate(q, 1.9891350148467843, 1);
  sqcRZGate(q, -1.191635045871097, 1);
  sqcRYGate(q, -2.628116337420295, 2);
  sqcRZGate(q, 1.8490037028865967, 2);
  sqcRYGate(q, -1.6063847779093972, 3);
  sqcRZGate(q, 1.4426620769996517, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.118210283301865, 0);
  sqcRZGate(q, -2.6751586889431542, 0);
  sqcRYGate(q, 1.0481923002898448, 1);
  sqcRZGate(q, 0.6283908008839766, 1);
  sqcRYGate(q, 1.6360323706882212, 2);
  sqcRZGate(q, 0.1974335631181214, 2);
  sqcRYGate(q, -0.030872949805749172, 3);
  sqcRZGate(q, 2.4532010857558295, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.971068946730691, 0);
  sqcRZGate(q, 0.5725209371400043, 0);
  sqcRYGate(q, 2.869411209185793, 1);
  sqcRZGate(q, 0.8426187827691572, 1);
  sqcRYGate(q, 3.107551699643077, 2);
  sqcRZGate(q, -1.5225236866854397, 2);
  sqcRYGate(q, -2.136359635708281, 3);
  sqcRZGate(q, 2.953672047572409, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.239828337860237, 0);
  sqcRZGate(q, 1.874188997700743, 0);
  sqcRYGate(q, 1.2775577124986777, 1);
  sqcRZGate(q, -1.865612004073702, 1);
  sqcRYGate(q, -1.3327326220523297, 2);
  sqcRZGate(q, -0.5441028428328639, 2);
  sqcRYGate(q, -0.31391135931809827, 3);
  sqcRZGate(q, -0.8295980786694176, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7682128037579387, 0);
  sqcRZGate(q, 3.12980456756815, 0);
  sqcRYGate(q, -0.5345152145430957, 1);
  sqcRZGate(q, 2.8519336680744467, 1);
  sqcRYGate(q, 1.650958119052249, 2);
  sqcRZGate(q, -2.030972306665692, 2);
  sqcRYGate(q, 3.0531413246628465, 3);
  sqcRZGate(q, -3.0266667186951848, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0282006722501107, 0);
  sqcRZGate(q, -2.4551717333834255, 0);
  sqcRYGate(q, 1.856278864078243, 1);
  sqcRZGate(q, -0.19560166762560527, 1);
  sqcRYGate(q, 0.14081933712694733, 2);
  sqcRZGate(q, -1.8338413760354484, 2);
  sqcRYGate(q, -2.3246221387053962, 3);
  sqcRZGate(q, 0.6462322823633855, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.11489529939771881, 0);
  sqcRZGate(q, 1.542950978604154, 0);
  sqcRYGate(q, 1.672711182345251, 1);
  sqcRZGate(q, 0.05219899959183394, 1);
  sqcRYGate(q, 2.929671661006989, 2);
  sqcRZGate(q, 1.2917515418205747, 2);
  sqcRYGate(q, 2.377341224778051, 3);
  sqcRZGate(q, 2.801574404284819, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.9142680197310766, 0);
  sqcRZGate(q, -0.8794188254594388, 0);
  sqcRYGate(q, -1.4105526003220388, 1);
  sqcRZGate(q, 1.3577626333867907, 1);
  sqcRYGate(q, -0.0820459576299697, 2);
  sqcRZGate(q, 1.6310669062807133, 2);
  sqcRYGate(q, 2.4435639762637944, 3);
  sqcRZGate(q, -0.496556811095763, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.993549727333594, 0);
  sqcRZGate(q, -2.863166590332928, 0);
  sqcRYGate(q, -1.602429768705661, 1);
  sqcRZGate(q, 2.871033472833318, 1);
  sqcRYGate(q, 1.9916827196242082, 2);
  sqcRZGate(q, -1.5662688132225344, 2);
  sqcRYGate(q, 1.0817206376566295, 3);
  sqcRZGate(q, 1.5992184450961124, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.1197633370423614, 0);
  sqcRZGate(q, -1.5440065563415648, 0);
  sqcRYGate(q, 1.6192539332168776, 1);
  sqcRZGate(q, -1.4908688549060027, 1);
  sqcRYGate(q, 0.6774824171840897, 2);
  sqcRZGate(q, 1.0420312276804318, 2);
  sqcRYGate(q, 2.2333236968640184, 3);
  sqcRZGate(q, 1.1730096802983088, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.458689776462119, 0);
  sqcRZGate(q, -0.9068958358852246, 0);
  sqcRYGate(q, 3.017595146570239, 1);
  sqcRZGate(q, 2.8506612296311222, 1);
  sqcRYGate(q, -0.047037906061579086, 2);
  sqcRZGate(q, 2.6339666390157594, 2);
  sqcRYGate(q, 2.6801601444999856, 3);
  sqcRZGate(q, 0.6477063671376444, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6586714220616435, 0);
  sqcRZGate(q, 0.14159162425163882, 0);
  sqcRYGate(q, 1.4571614742096755, 1);
  sqcRZGate(q, 1.6071057901247006, 1);
  sqcRYGate(q, 0.20468119411187136, 2);
  sqcRZGate(q, -1.9822714292613275, 2);
  sqcRYGate(q, 1.1334446814014933, 3);
  sqcRZGate(q, -1.2207305130393589, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.470735592234782, 0);
  sqcRZGate(q, 0.0009273372186645337, 0);
  sqcRYGate(q, 0.9576095757726177, 1);
  sqcRZGate(q, 2.6533734864814593, 1);
  sqcRYGate(q, -0.9429342128468182, 2);
  sqcRZGate(q, 2.0261617133275935, 2);
  sqcRYGate(q, -0.5299348013574782, 3);
  sqcRZGate(q, 1.9094514630454604, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.674345029191869, 0);
  sqcRZGate(q, -1.7800341173936598, 0);
  sqcRYGate(q, 1.7617880378520825, 1);
  sqcRZGate(q, 2.3437240677508684, 1);
  sqcRYGate(q, 2.3298757335460585, 2);
  sqcRZGate(q, -1.2013038249707044, 2);
  sqcRYGate(q, -2.378900887033935, 3);
  sqcRZGate(q, -2.09668393169859, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.241495798424649, 0);
  sqcRZGate(q, 1.80771835777021, 0);
  sqcRYGate(q, 3.015920641920322, 1);
  sqcRZGate(q, 2.5363715024334796, 1);
  sqcRYGate(q, 0.21893186179674243, 2);
  sqcRZGate(q, -2.576282107071024, 2);
  sqcRYGate(q, -2.7855346233818636, 3);
  sqcRZGate(q, -0.045070396489322075, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5634968488293071, 0);
  sqcRZGate(q, -0.5059971875602519, 0);
  sqcRYGate(q, 2.9144329873227974, 1);
  sqcRZGate(q, 1.3385818007394716, 1);
  sqcRYGate(q, -1.031834514894978, 2);
  sqcRZGate(q, 2.4415775232949817, 2);
  sqcRYGate(q, 3.0123661788643346, 3);
  sqcRZGate(q, 3.093377038955749, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9348825983275546, 0);
  sqcRZGate(q, -0.7089965871791621, 0);
  sqcRYGate(q, 0.00019752497386695914, 1);
  sqcRZGate(q, 2.361015977086053, 1);
  sqcRYGate(q, -2.418259262728559, 2);
  sqcRZGate(q, -0.24917441738636845, 2);
  sqcRYGate(q, -1.4968100839726768, 3);
  sqcRZGate(q, -1.0156428793077683, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9793832973837758, 0);
  sqcRZGate(q, 0.42559357349559906, 0);
  sqcRYGate(q, 0.7615711975629301, 1);
  sqcRZGate(q, 0.8088800903043789, 1);
  sqcRYGate(q, 2.091450225327494, 2);
  sqcRZGate(q, 2.493397874498623, 2);
  sqcRYGate(q, -1.5897235612856435, 3);
  sqcRZGate(q, 1.6806421105137819, 3);

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
