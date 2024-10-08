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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 3.1415923928275338, 0);
  sqcRZGate(q, 1.228234110340769, 0);
  sqcRYGate(q, -1.8099859269035379, 1);
  sqcRZGate(q, 0.5490627870592047, 1);
  sqcRYGate(q, 1.5707959772854816, 2);
  sqcRZGate(q, 3.085980850857179, 2);
  sqcRYGate(q, -0.047604187803397376, 3);
  sqcRZGate(q, -1.5732163889033786, 3);
  sqcRYGate(q, 1.6395399013006218, 4);
  sqcRZGate(q, 1.5707925190721146, 4);
  sqcRYGate(q, -1.5707962980491694, 5);
  sqcRZGate(q, -1.5707922649660953, 5);
  sqcRYGate(q, -3.1415926313446785, 6);
  sqcRZGate(q, 1.0458886480098597, 6);
  sqcRYGate(q, -3.1415564654184633, 7);
  sqcRZGate(q, 2.5764456508973663, 7);
  sqcRYGate(q, -0.18644732551599802, 8);
  sqcRZGate(q, -1.5986552023780094, 8);
  sqcRYGate(q, -1.5441266003796086, 9);
  sqcRZGate(q, 0.505141776479853, 9);
  sqcRYGate(q, 1.547530676120412, 10);
  sqcRZGate(q, -1.5710144850555583, 10);
  sqcRYGate(q, -1.5699359273320712, 11);
  sqcRZGate(q, -2.953186284941775, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.14159224541929, 0);
  sqcRZGate(q, -0.5374829364234723, 0);
  sqcRYGate(q, -8.383905433161514e-07, 1);
  sqcRZGate(q, -2.1198613709097316, 1);
  sqcRYGate(q, -3.1331205913002353, 2);
  sqcRZGate(q, -0.06099841251890606, 2);
  sqcRYGate(q, -1.5707946062857088, 3);
  sqcRZGate(q, -3.0686351893608745, 3);
  sqcRYGate(q, 1.5708023529052282, 4);
  sqcRZGate(q, -0.4884967687606662, 4);
  sqcRYGate(q, 1.5707952752486927, 5);
  sqcRZGate(q, -1.0811420482350351, 5);
  sqcRYGate(q, -1.5707980206988916, 6);
  sqcRZGate(q, -1.9227574253195883, 6);
  sqcRYGate(q, 3.141529796772795, 7);
  sqcRZGate(q, -2.9963961109004433, 7);
  sqcRYGate(q, 1.5708074778191294, 8);
  sqcRZGate(q, -3.0016465086570703, 8);
  sqcRYGate(q, -3.1395453388706223, 9);
  sqcRZGate(q, 1.1623734873368394, 9);
  sqcRYGate(q, -1.5715415711415588, 10);
  sqcRZGate(q, 1.5721600260006112, 10);
  sqcRYGate(q, 3.1414182179743726, 11);
  sqcRZGate(q, 1.7161542174357658, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5708003479550268, 0);
  sqcRZGate(q, -1.5707967511276841, 0);
  sqcRYGate(q, 2.12171115031757, 1);
  sqcRZGate(q, 1.5707963317638782, 1);
  sqcRYGate(q, 1.5708203006808281, 2);
  sqcRZGate(q, 1.5707962766233936, 2);
  sqcRYGate(q, 1.5080963366997935e-06, 3);
  sqcRZGate(q, 1.6929809103571336, 3);
  sqcRYGate(q, -1.5707963733372718, 4);
  sqcRZGate(q, -1.570797098921911, 4);
  sqcRYGate(q, 1.5707965046534778, 5);
  sqcRZGate(q, -1.571192772381745, 5);
  sqcRYGate(q, 1.8311152381045304e-06, 6);
  sqcRZGate(q, 0.3831598928490944, 6);
  sqcRYGate(q, 3.141316307103098, 7);
  sqcRZGate(q, 0.09150926044306612, 7);
  sqcRYGate(q, 7.394738318232037e-07, 8);
  sqcRZGate(q, -1.7051787141035843, 8);
  sqcRYGate(q, 2.117556000386048e-07, 9);
  sqcRZGate(q, 0.9135692327758284, 9);
  sqcRYGate(q, -1.3833509094325112, 10);
  sqcRZGate(q, -2.6355991730340214, 10);
  sqcRYGate(q, -1.7889263809089815, 11);
  sqcRZGate(q, -0.6770307739413642, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5704603519875966, 0);
  sqcRZGate(q, -2.072599411868283, 0);
  sqcRYGate(q, 1.5707960176018225, 1);
  sqcRZGate(q, 0.15522900344864163, 1);
  sqcRYGate(q, 1.5707962426072448, 2);
  sqcRZGate(q, -2.0726003275794085, 2);
  sqcRYGate(q, 1.5707792784349488, 3);
  sqcRZGate(q, 1.726018657593041, 3);
  sqcRYGate(q, 1.5707962384874543, 4);
  sqcRZGate(q, -0.5018540166709045, 4);
  sqcRYGate(q, 2.9891033355324517, 5);
  sqcRZGate(q, 0.15480099446112303, 5);
  sqcRYGate(q, -0.005394847425746838, 6);
  sqcRZGate(q, 1.0378121776422873, 6);
  sqcRYGate(q, 1.5707935523686243, 7);
  sqcRZGate(q, -2.986392940550608, 7);
  sqcRYGate(q, -3.1177019297019677, 8);
  sqcRZGate(q, -0.3273297116572435, 8);
  sqcRYGate(q, -1.5699175482248329, 9);
  sqcRZGate(q, -0.8497810700746169, 9);
  sqcRYGate(q, -0.0012485080331042207, 10);
  sqcRZGate(q, -2.409737674438889, 10);
  sqcRYGate(q, 1.9444650188296317, 11);
  sqcRZGate(q, -0.9820326760299107, 11);

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
