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

  sqcRYGate(q, -0.3569161043209421, 0);
  sqcRZGate(q, -0.8873007386688149, 0);
  sqcRYGate(q, -1.376817946379717, 1);
  sqcRZGate(q, -0.20511135464754737, 1);
  sqcRYGate(q, 1.7874671658885433, 2);
  sqcRZGate(q, -1.7420770651238688, 2);
  sqcRYGate(q, -2.145760466647178, 3);
  sqcRZGate(q, -1.0426940346449411, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.3478163739360813, 0);
  sqcRZGate(q, -2.322637515247589, 0);
  sqcRYGate(q, -2.265293951682982, 1);
  sqcRZGate(q, 3.0966944286898386, 1);
  sqcRYGate(q, 0.01446803314640821, 2);
  sqcRZGate(q, -2.316406621848227, 2);
  sqcRYGate(q, 0.25535756729966064, 3);
  sqcRZGate(q, 0.1968585255276638, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.053557922354898, 0);
  sqcRZGate(q, -0.24517347066710823, 0);
  sqcRYGate(q, -1.0531462659349717, 1);
  sqcRZGate(q, 1.8326666974692931, 1);
  sqcRYGate(q, 1.8546581502368786, 2);
  sqcRZGate(q, -1.7078279392353082, 2);
  sqcRYGate(q, 2.881788948894399, 3);
  sqcRZGate(q, -0.5914097153422525, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3358291892915377, 0);
  sqcRZGate(q, 2.0257616544735506, 0);
  sqcRYGate(q, 1.5806263814273376, 1);
  sqcRZGate(q, 1.3224672919815823, 1);
  sqcRYGate(q, 1.133054205432063, 2);
  sqcRZGate(q, 0.6110488748479987, 2);
  sqcRYGate(q, -0.5860159284377174, 3);
  sqcRZGate(q, 0.639447467894614, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.064816540813889, 0);
  sqcRZGate(q, -0.7134998618714937, 0);
  sqcRYGate(q, 2.503679264307578, 1);
  sqcRZGate(q, 0.057345639439627914, 1);
  sqcRYGate(q, 0.10065276208984651, 2);
  sqcRZGate(q, 2.7318979282513642, 2);
  sqcRYGate(q, 2.4609735732438835, 3);
  sqcRZGate(q, 0.6340479645361743, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.530858979035803, 0);
  sqcRZGate(q, -2.286263761444823, 0);
  sqcRYGate(q, -2.565526631057534, 1);
  sqcRZGate(q, 1.6700445573432756, 1);
  sqcRYGate(q, 1.5904753855494622, 2);
  sqcRZGate(q, -1.245871401800795, 2);
  sqcRYGate(q, -0.6087042288578504, 3);
  sqcRZGate(q, -1.6778105666881284, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4075241378654857, 0);
  sqcRZGate(q, 2.955985311279919, 0);
  sqcRYGate(q, -1.5405359947666502, 1);
  sqcRZGate(q, 3.12156661901836, 1);
  sqcRYGate(q, -3.037589096286409, 2);
  sqcRZGate(q, -1.878300564987649, 2);
  sqcRYGate(q, 2.017847918164592, 3);
  sqcRZGate(q, 0.7208014827596783, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7748302931904574, 0);
  sqcRZGate(q, 2.4884336865514944, 0);
  sqcRYGate(q, 2.60717093976299, 1);
  sqcRZGate(q, 0.655312405936294, 1);
  sqcRYGate(q, 2.7135531294942745, 2);
  sqcRZGate(q, 2.058179986040451, 2);
  sqcRYGate(q, -3.118237694152188, 3);
  sqcRZGate(q, -0.08254690023135856, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7184276175033724, 0);
  sqcRZGate(q, 0.4850509786462311, 0);
  sqcRYGate(q, -0.9667640101874201, 1);
  sqcRZGate(q, -2.095876999465262, 1);
  sqcRYGate(q, -1.7396330225334653, 2);
  sqcRZGate(q, 1.7580519844519449, 2);
  sqcRYGate(q, 2.3898848764781464, 3);
  sqcRZGate(q, 1.7719110275614778, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.011199765205604645, 0);
  sqcRZGate(q, 1.898545758918515, 0);
  sqcRYGate(q, 0.06250418155625859, 1);
  sqcRZGate(q, -1.2676306308135639, 1);
  sqcRYGate(q, -1.6975386308646634, 2);
  sqcRZGate(q, -1.789354577635125, 2);
  sqcRYGate(q, 3.0636230389793164, 3);
  sqcRZGate(q, -2.7833843537129104, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.3522424716641428, 0);
  sqcRZGate(q, 1.4168784054321468, 0);
  sqcRYGate(q, 3.0834226350661984, 1);
  sqcRZGate(q, 1.7290661348484244, 1);
  sqcRYGate(q, -0.9802010997768962, 2);
  sqcRZGate(q, -0.1300617205245569, 2);
  sqcRYGate(q, 2.126590774392172, 3);
  sqcRZGate(q, 0.5353944180258497, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7716731190158717, 0);
  sqcRZGate(q, -2.986328133217628, 0);
  sqcRYGate(q, 1.6613136278241531, 1);
  sqcRZGate(q, -0.639154017971654, 1);
  sqcRYGate(q, -0.3440619999844246, 2);
  sqcRZGate(q, 2.6712788189346957, 2);
  sqcRYGate(q, 1.3136813580334188, 3);
  sqcRZGate(q, -0.5328728248890959, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.1075921061301717, 0);
  sqcRZGate(q, 2.028466059606263, 0);
  sqcRYGate(q, -0.8396691260710707, 1);
  sqcRZGate(q, -2.487744337658351, 1);
  sqcRYGate(q, -0.2268086197906087, 2);
  sqcRZGate(q, 0.5792415752298907, 2);
  sqcRYGate(q, 1.0803657809848732, 3);
  sqcRZGate(q, 2.7939191711363276, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.38437670541926, 0);
  sqcRZGate(q, -1.5899583467838683, 0);
  sqcRYGate(q, -0.1007247792313164, 1);
  sqcRZGate(q, -1.9756018656057648, 1);
  sqcRYGate(q, 1.1701240832506066, 2);
  sqcRZGate(q, -0.9051816548525382, 2);
  sqcRYGate(q, -1.395741629339164, 3);
  sqcRZGate(q, -2.676088534830495, 3);

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
