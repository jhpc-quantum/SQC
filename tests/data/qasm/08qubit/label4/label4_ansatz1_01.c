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

  sqcRYGate(q, 1.557402434596936, 0);
  sqcRZGate(q, 2.966039840210904, 0);
  sqcRYGate(q, 1.5710418650489688, 1);
  sqcRZGate(q, 1.1997434830653237, 1);
  sqcRYGate(q, 0.4364242402806918, 2);
  sqcRZGate(q, -1.5701800036312732, 2);
  sqcRYGate(q, 1.5708004424128736, 3);
  sqcRZGate(q, -4.4154851654987226e-05, 3);
  sqcRYGate(q, 1.5708144959026742, 4);
  sqcRZGate(q, 1.078387817354809e-05, 4);
  sqcRYGate(q, -2.7078969946594063, 5);
  sqcRZGate(q, -1.570787924368382, 5);
  sqcRYGate(q, -1.5707941610314744, 6);
  sqcRZGate(q, 1.3362639062595028, 6);
  sqcRYGate(q, 1.5708732839044073, 7);
  sqcRZGate(q, 2.109542971068339, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.502971433459444, 0);
  sqcRZGate(q, -1.9357735517263133, 0);
  sqcRYGate(q, 3.092933538768594, 1);
  sqcRZGate(q, 3.1415182094043845, 1);
  sqcRYGate(q, 1.5707919264209398, 2);
  sqcRZGate(q, 2.542344888525669e-06, 2);
  sqcRYGate(q, 1.570800022262997, 3);
  sqcRZGate(q, -1.4027134151310108, 3);
  sqcRYGate(q, 1.5708030436360296, 4);
  sqcRZGate(q, -1.011061158923386, 4);
  sqcRYGate(q, 1.5707759388174667, 5);
  sqcRZGate(q, 1.5708048443644713, 5);
  sqcRYGate(q, 1.5708062004435634, 6);
  sqcRZGate(q, 3.1415926284254763, 6);
  sqcRYGate(q, 3.755600923711657e-06, 7);
  sqcRZGate(q, 2.492222108313944, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5659177939018845, 0);
  sqcRZGate(q, 1.5579612828998837, 0);
  sqcRYGate(q, 1.5707960474076483, 1);
  sqcRZGate(q, 1.5707953913859347, 1);
  sqcRYGate(q, -1.5707983795773073, 2);
  sqcRZGate(q, 0.5124774599512181, 2);
  sqcRYGate(q, 1.8222835991759219, 3);
  sqcRZGate(q, 0.7693320483737001, 3);
  sqcRYGate(q, 3.1415874932465377, 4);
  sqcRZGate(q, -0.09400216146579968, 4);
  sqcRYGate(q, 1.570789377443914, 5);
  sqcRZGate(q, -1.5708065639756885, 5);
  sqcRYGate(q, -1.5707908151234942, 6);
  sqcRZGate(q, 1.570803046460681, 6);
  sqcRYGate(q, 3.141533926981546, 7);
  sqcRZGate(q, -1.6814087043836956, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5707958220844633, 0);
  sqcRZGate(q, 3.304122925484876e-06, 0);
  sqcRYGate(q, 1.5707969509139221, 1);
  sqcRZGate(q, 0.9253996964643747, 1);
  sqcRYGate(q, 3.1415899276218076, 2);
  sqcRZGate(q, -2.6291138036717068, 2);
  sqcRYGate(q, -8.248517766372277e-07, 3);
  sqcRZGate(q, 2.970728271537188, 3);
  sqcRYGate(q, 3.141588166615153, 4);
  sqcRZGate(q, 0.9170928615556049, 4);
  sqcRYGate(q, 1.5708079755634576, 5);
  sqcRZGate(q, 3.141571866003341, 5);
  sqcRYGate(q, -1.5708016753733727, 6);
  sqcRZGate(q, 1.5707935916301576, 6);
  sqcRYGate(q, 1.5707838746628182, 7);
  sqcRZGate(q, 1.5707890076596032, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5708017429536119, 0);
  sqcRZGate(q, 1.0801347044329574, 0);
  sqcRYGate(q, -3.141590163748966, 1);
  sqcRZGate(q, -2.525943002794469, 1);
  sqcRYGate(q, 1.570794587086325, 2);
  sqcRZGate(q, -2.0614586863173745, 2);
  sqcRYGate(q, 0.30149048600171285, 3);
  sqcRZGate(q, 0.6838768283691905, 3);
  sqcRYGate(q, -1.5707965246964304, 4);
  sqcRZGate(q, -2.061457168591911, 4);
  sqcRYGate(q, -1.5707952112747634, 5);
  sqcRZGate(q, 2.8318396443431695, 5);
  sqcRYGate(q, 1.570795868122447, 6);
  sqcRZGate(q, 2.650933509343498, 6);
  sqcRYGate(q, -1.570811772720743, 7);
  sqcRZGate(q, -1.8805536770349607, 7);

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
