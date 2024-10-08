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

  sqcRYGate(q, -1.4156618121631048, 0);
  sqcRZGate(q, 0.18166053871434684, 0);
  sqcRYGate(q, 2.9552150182514665, 1);
  sqcRZGate(q, -0.44656279160877227, 1);
  sqcRYGate(q, -0.06960043717791567, 2);
  sqcRZGate(q, 0.6647699307143166, 2);
  sqcRYGate(q, -0.14947629328471237, 3);
  sqcRZGate(q, -0.10515618243343601, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.9241058996434997, 0);
  sqcRZGate(q, -1.5714705418064128, 0);
  sqcRYGate(q, -2.180081075809411, 1);
  sqcRZGate(q, -0.4709424209858551, 1);
  sqcRYGate(q, -3.0969946233579835, 2);
  sqcRZGate(q, -1.4373293326454706, 2);
  sqcRYGate(q, -2.79913759732137, 3);
  sqcRZGate(q, -1.6744668563082863, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.414777472160052, 0);
  sqcRZGate(q, -2.431641815610149, 0);
  sqcRYGate(q, -1.0823173105140338, 1);
  sqcRZGate(q, -2.79102984377977, 1);
  sqcRYGate(q, -0.12869076115357636, 2);
  sqcRZGate(q, -1.283957407250594, 2);
  sqcRYGate(q, -0.35534039262319295, 3);
  sqcRZGate(q, -0.6872167108097972, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.848035734189521, 0);
  sqcRZGate(q, 2.5190166744543725, 0);
  sqcRYGate(q, -1.6275350005519575, 1);
  sqcRZGate(q, -2.8732319334849366, 1);
  sqcRYGate(q, -0.8596176894215671, 2);
  sqcRZGate(q, 0.09636137333075465, 2);
  sqcRYGate(q, 1.4240163338785932, 3);
  sqcRZGate(q, -2.7056356524661993, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0058505269057099, 0);
  sqcRZGate(q, -1.7219826932399354, 0);
  sqcRYGate(q, 0.8823191626584151, 1);
  sqcRZGate(q, -0.26296291721699555, 1);
  sqcRYGate(q, -1.705545799668701, 2);
  sqcRZGate(q, 0.952125890659659, 2);
  sqcRYGate(q, 3.0124284684047824, 3);
  sqcRZGate(q, -3.111293021296403, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.1546063549229868, 0);
  sqcRZGate(q, 0.8525635469813917, 0);
  sqcRYGate(q, -0.09027106115428002, 1);
  sqcRZGate(q, 2.6867357972564023, 1);
  sqcRYGate(q, -3.1131678969330925, 2);
  sqcRZGate(q, -2.184322286491457, 2);
  sqcRYGate(q, 1.8813586732053016, 3);
  sqcRZGate(q, 1.886675904752372, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8019412181665315, 0);
  sqcRZGate(q, -3.120405941236424, 0);
  sqcRYGate(q, -0.014250053924212303, 1);
  sqcRZGate(q, 0.7183635126667134, 1);
  sqcRYGate(q, 1.6071847703085291, 2);
  sqcRZGate(q, -0.11820136852210729, 2);
  sqcRYGate(q, 2.3783018750955067, 3);
  sqcRZGate(q, -2.8434545878812543, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.981340746960414, 0);
  sqcRZGate(q, 1.8426006307173146, 0);
  sqcRYGate(q, -0.6069738114900581, 1);
  sqcRZGate(q, 0.8498661881314079, 1);
  sqcRYGate(q, 2.3769291789260767, 2);
  sqcRZGate(q, 0.7381844481430626, 2);
  sqcRYGate(q, 0.28590479346503683, 3);
  sqcRZGate(q, -0.2876288393765849, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8076059127228641, 0);
  sqcRZGate(q, 0.8936999495913804, 0);
  sqcRYGate(q, 0.767169125078231, 1);
  sqcRZGate(q, 0.5765095930240732, 1);
  sqcRYGate(q, -3.0214188069292587, 2);
  sqcRZGate(q, -0.4475748599651485, 2);
  sqcRYGate(q, -2.4995499162826356, 3);
  sqcRZGate(q, 2.851524369060141, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.637264822782777, 0);
  sqcRZGate(q, 2.203072388368091, 0);
  sqcRYGate(q, -3.1009535556285828, 1);
  sqcRZGate(q, -1.5646139033355446, 1);
  sqcRYGate(q, 3.000306580181352, 2);
  sqcRZGate(q, 2.762708151515479, 2);
  sqcRYGate(q, 2.666682318010216, 3);
  sqcRZGate(q, -0.306160272486252, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0246272452752025, 0);
  sqcRZGate(q, -1.1588332483737789, 0);
  sqcRYGate(q, 0.8242735435126326, 1);
  sqcRZGate(q, 2.1136831555625193, 1);
  sqcRYGate(q, 2.0232545228799386, 2);
  sqcRZGate(q, 0.6767903555153034, 2);
  sqcRYGate(q, -1.0576397871149075, 3);
  sqcRZGate(q, 2.557642229662519, 3);

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
