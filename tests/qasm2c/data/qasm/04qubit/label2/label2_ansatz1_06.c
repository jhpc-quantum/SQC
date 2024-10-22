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

  sqcRYGate(q, -0.8913295705658789, 0);
  sqcRZGate(q, -1.7375932090684083, 0);
  sqcRYGate(q, -1.162052343033385, 1);
  sqcRZGate(q, -0.15301554068991358, 1);
  sqcRYGate(q, 1.1412651380282592, 2);
  sqcRZGate(q, 0.751809941836755, 2);
  sqcRYGate(q, -0.7364772663883228, 3);
  sqcRZGate(q, -0.20367142741212074, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3143680406173257, 0);
  sqcRZGate(q, 2.1591289550921395, 0);
  sqcRYGate(q, -2.9360251443535343, 1);
  sqcRZGate(q, -2.4692981090408903, 1);
  sqcRYGate(q, -3.1308757431345393, 2);
  sqcRZGate(q, -0.821186689151333, 2);
  sqcRYGate(q, 1.586397323670714, 3);
  sqcRZGate(q, -1.0350517605895346, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6488415139981198, 0);
  sqcRZGate(q, -1.2982524815920797, 0);
  sqcRYGate(q, -1.220829817198358, 1);
  sqcRZGate(q, 0.6282719986347898, 1);
  sqcRYGate(q, -0.28851814566886347, 2);
  sqcRZGate(q, 2.083951869754169, 2);
  sqcRYGate(q, -1.3552320275053644, 3);
  sqcRZGate(q, 2.3823552057818844, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.105900464417564, 0);
  sqcRZGate(q, 2.3141898626044792, 0);
  sqcRYGate(q, 0.8879969041757377, 1);
  sqcRZGate(q, -0.9071860393063461, 1);
  sqcRYGate(q, -2.1840995075840537, 2);
  sqcRZGate(q, 0.41535388736364615, 2);
  sqcRYGate(q, -0.0990770910678711, 3);
  sqcRZGate(q, 1.839959886018838, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9526337570460126, 0);
  sqcRZGate(q, -2.6162445049507586, 0);
  sqcRYGate(q, -3.0734888453581104, 1);
  sqcRZGate(q, -3.0620267996868313, 1);
  sqcRYGate(q, 2.354417322170668, 2);
  sqcRZGate(q, -1.4607422133415957, 2);
  sqcRYGate(q, 1.5626500808139678, 3);
  sqcRZGate(q, 2.2868769042098216, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.244442527867804, 0);
  sqcRZGate(q, 0.513954158715193, 0);
  sqcRYGate(q, -1.2910151303305373, 1);
  sqcRZGate(q, -1.462810572419647, 1);
  sqcRYGate(q, 2.209926807893938, 2);
  sqcRZGate(q, -3.014314509841153, 2);
  sqcRYGate(q, -1.497645353724105, 3);
  sqcRZGate(q, 3.0520251318162464, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7640798320694357, 0);
  sqcRZGate(q, -2.089486566892992, 0);
  sqcRYGate(q, 0.15354744034930667, 1);
  sqcRZGate(q, -2.591178391672716, 1);
  sqcRYGate(q, 3.094914082889492, 2);
  sqcRZGate(q, 1.2733047596068872, 2);
  sqcRYGate(q, 0.47775947092540827, 3);
  sqcRZGate(q, -1.2762731653923527, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.024113389242080174, 0);
  sqcRZGate(q, 0.17491163053890646, 0);
  sqcRYGate(q, -2.7667771606244664, 1);
  sqcRZGate(q, 0.32061357880783703, 1);
  sqcRYGate(q, -0.8731175647188706, 2);
  sqcRZGate(q, 1.0602944994921548, 2);
  sqcRYGate(q, 2.613586299853822, 3);
  sqcRZGate(q, 0.20167398385711782, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.15362489358335, 0);
  sqcRZGate(q, 2.0384716789543638, 0);
  sqcRYGate(q, 0.019378178354033278, 1);
  sqcRZGate(q, 2.687882056275298, 1);
  sqcRYGate(q, 1.046529307931136, 2);
  sqcRZGate(q, -1.444574172618867, 2);
  sqcRYGate(q, 2.9803703762082394, 3);
  sqcRZGate(q, -1.9795982577330689, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.07135024411870422, 0);
  sqcRZGate(q, 2.834821904523572, 0);
  sqcRYGate(q, -3.028662662987937, 1);
  sqcRZGate(q, -2.5506001675485797, 1);
  sqcRYGate(q, 0.37334632292844017, 2);
  sqcRZGate(q, 1.062633935771066, 2);
  sqcRYGate(q, -3.057990842156314, 3);
  sqcRZGate(q, 2.349185389486342, 3);

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
