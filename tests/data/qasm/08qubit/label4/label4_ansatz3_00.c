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

  sqcRYGate(q, 1.8324251517497938, 0);
  sqcRZGate(q, 9.241982894536704e-07, 0);
  sqcRYGate(q, 5.6973634378420635e-06, 1);
  sqcRZGate(q, -1.29704516912592, 1);
  sqcRYGate(q, 5.3969796989737406e-08, 2);
  sqcRZGate(q, -1.5750004265880633, 2);
  sqcRYGate(q, -1.441598309692636, 3);
  sqcRZGate(q, 1.1183152462330679, 3);
  sqcRYGate(q, -1.5707922487663208, 4);
  sqcRZGate(q, 2.176199385463965, 4);
  sqcRYGate(q, 1.3422048041888957e-06, 5);
  sqcRZGate(q, 0.8811028090670181, 5);
  sqcRYGate(q, -1.683910808261631, 6);
  sqcRZGate(q, 1.3584746553110991, 6);
  sqcRYGate(q, -0.07914966938760128, 7);
  sqcRZGate(q, -0.2503462348239813, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.832425450941068, 0);
  sqcRZGate(q, -0.7244497421505478, 0);
  sqcRYGate(q, -1.570794105459535, 1);
  sqcRZGate(q, 3.047731443450121, 1);
  sqcRYGate(q, -1.570797624081508, 2);
  sqcRZGate(q, 4.130133915155074e-06, 2);
  sqcRYGate(q, -0.28886221119970545, 3);
  sqcRZGate(q, 1.264140601034464, 3);
  sqcRYGate(q, -3.15987322515255e-05, 4);
  sqcRZGate(q, 1.2201480357815297, 4);
  sqcRYGate(q, 1.5707959012365444, 5);
  sqcRZGate(q, 1.660296064468925, 5);
  sqcRYGate(q, 3.1414918294741723, 6);
  sqcRZGate(q, 0.047223668365105824, 6);
  sqcRYGate(q, -0.5463741222425214, 7);
  sqcRZGate(q, 1.228236333726905, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.5707951735749486, 0);
  sqcRZGate(q, -1.9400643026195727, 0);
  sqcRYGate(q, 1.9363228024217394, 1);
  sqcRZGate(q, -0.2574499159676699, 1);
  sqcRYGate(q, -0.46238173197804966, 2);
  sqcRZGate(q, 3.14158707342691, 2);
  sqcRYGate(q, 1.3499515283399433e-08, 3);
  sqcRZGate(q, 0.7410935571517695, 3);
  sqcRYGate(q, 3.141592634002187, 4);
  sqcRZGate(q, -2.8867396373752507, 4);
  sqcRYGate(q, 3.141590505354968, 5);
  sqcRZGate(q, 1.7141203127535534, 5);
  sqcRYGate(q, -2.681258142616438, 6);
  sqcRZGate(q, 0.6592180781287507, 6);
  sqcRYGate(q, 1.570794756710339, 7);
  sqcRZGate(q, -3.1415912435704314, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 9.059838030012202e-06, 0);
  sqcRZGate(q, -1.2150753068053755, 0);
  sqcRYGate(q, -3.0781199510614456, 1);
  sqcRZGate(q, 2.0346279350251075, 1);
  sqcRYGate(q, -1.5707971374767329, 2);
  sqcRZGate(q, -0.013549039823947038, 2);
  sqcRYGate(q, 3.141590160068569, 3);
  sqcRZGate(q, 2.239822469010549, 3);
  sqcRYGate(q, 1.5708001151717348, 4);
  sqcRZGate(q, -0.013550394923343312, 4);
  sqcRYGate(q, -1.5465484555811715, 5);
  sqcRZGate(q, -2.679126318756956, 5);
  sqcRYGate(q, 9.261578304275986e-07, 6);
  sqcRZGate(q, 1.1992130501537133, 6);
  sqcRYGate(q, 2.738356120042292, 7);
  sqcRZGate(q, 0.46377492764954287, 7);

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
