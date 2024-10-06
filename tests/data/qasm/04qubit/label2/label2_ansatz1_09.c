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

  sqcRYGate(q, 2.8650488239881864, 0);
  sqcRZGate(q, -0.8148019958027731, 0);
  sqcRYGate(q, -1.6586743880448802, 1);
  sqcRZGate(q, 1.8101898089507422, 1);
  sqcRYGate(q, -0.636257812214056, 2);
  sqcRZGate(q, 2.641371963004471, 2);
  sqcRYGate(q, 2.9223575903606926, 3);
  sqcRZGate(q, -1.6214431644529592, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8883160283106508, 0);
  sqcRZGate(q, -3.093247203312111, 0);
  sqcRYGate(q, -2.98980855067819, 1);
  sqcRZGate(q, 1.2034243186004383, 1);
  sqcRYGate(q, 1.5283950095909855, 2);
  sqcRZGate(q, -0.6958892861819901, 2);
  sqcRYGate(q, -3.0796417102348728, 3);
  sqcRZGate(q, -2.222567328956928, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.4913803454949866, 0);
  sqcRZGate(q, 1.8991820501304686, 0);
  sqcRYGate(q, 2.291992933980388, 1);
  sqcRZGate(q, -0.5460419491816517, 1);
  sqcRYGate(q, 0.8133997645039774, 2);
  sqcRZGate(q, -0.2758354264031384, 2);
  sqcRYGate(q, 0.2343090514949247, 3);
  sqcRZGate(q, -2.313426137000621, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.0874084333169214, 0);
  sqcRZGate(q, 0.8708609772151208, 0);
  sqcRYGate(q, 0.17795594443245832, 1);
  sqcRZGate(q, 0.7445160780640395, 1);
  sqcRYGate(q, -3.1361812081087637, 2);
  sqcRZGate(q, -0.577740609776103, 2);
  sqcRYGate(q, -2.2232329444832546, 3);
  sqcRZGate(q, 0.09017041616088405, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1858820787804154, 0);
  sqcRZGate(q, 2.05299040302423, 0);
  sqcRYGate(q, -2.6958735224008388, 1);
  sqcRZGate(q, 0.3647103605789513, 1);
  sqcRYGate(q, -2.0288568147860127, 2);
  sqcRZGate(q, 2.292225282181651, 2);
  sqcRYGate(q, -0.5762801819621934, 3);
  sqcRZGate(q, -1.9277420556360108, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.768699881092028, 0);
  sqcRZGate(q, 2.733998189755646, 0);
  sqcRYGate(q, -1.352673825544426, 1);
  sqcRZGate(q, 1.961888930857101, 1);
  sqcRYGate(q, -0.45708006002734614, 2);
  sqcRZGate(q, -2.371700895194436, 2);
  sqcRYGate(q, -2.545927232708158, 3);
  sqcRZGate(q, -1.2452094554344335, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5915554872281916, 0);
  sqcRZGate(q, -2.378424632660441, 0);
  sqcRYGate(q, 2.2930755355734727, 1);
  sqcRZGate(q, -2.392174404711115, 1);
  sqcRYGate(q, -2.9619026662546206, 2);
  sqcRZGate(q, 1.8785317738637548, 2);
  sqcRYGate(q, -1.625266324107965, 3);
  sqcRZGate(q, -2.3797898048208888, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0563857968207004, 0);
  sqcRZGate(q, -2.2145706784734838, 0);
  sqcRYGate(q, -2.153919666113987, 1);
  sqcRZGate(q, -1.0404036681604962, 1);
  sqcRYGate(q, 2.9120312927902225, 2);
  sqcRZGate(q, -1.4601993392762496, 2);
  sqcRYGate(q, 2.5432530946735983, 3);
  sqcRZGate(q, -1.2292993482506365, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0805359492273041, 0);
  sqcRZGate(q, 2.11675645333329, 0);
  sqcRYGate(q, 1.5914801500912887, 1);
  sqcRZGate(q, 2.876369544424066, 1);
  sqcRYGate(q, 0.8916293825830675, 2);
  sqcRZGate(q, 1.1227955150186304, 2);
  sqcRYGate(q, 0.30779939616669205, 3);
  sqcRZGate(q, -0.6113673775139014, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6063987283990606, 0);
  sqcRZGate(q, 2.7170677614846075, 0);
  sqcRYGate(q, 2.4462584851632245, 1);
  sqcRZGate(q, -1.4168442805625794, 1);
  sqcRYGate(q, 2.9871365922546214, 2);
  sqcRZGate(q, -0.21434951959338558, 2);
  sqcRYGate(q, -3.087086749215036, 3);
  sqcRZGate(q, -1.979757701985693, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0122497791526452, 0);
  sqcRZGate(q, -0.2510387833842426, 0);
  sqcRYGate(q, -2.5052325705828338, 1);
  sqcRZGate(q, -0.8988524990284305, 1);
  sqcRYGate(q, 2.2190341649359118, 2);
  sqcRZGate(q, -1.973606364976171, 2);
  sqcRYGate(q, 0.5963853994936326, 3);
  sqcRZGate(q, -0.7820850639055785, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5142963616797278, 0);
  sqcRZGate(q, 2.121518986992966, 0);
  sqcRYGate(q, -2.8973560413358257, 1);
  sqcRZGate(q, -0.8412784893087807, 1);
  sqcRYGate(q, 1.2618876399388341, 2);
  sqcRZGate(q, -2.069858801580641, 2);
  sqcRYGate(q, -3.082027219456284, 3);
  sqcRZGate(q, -0.46722562921532695, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.285723015174265, 0);
  sqcRZGate(q, -0.7375130226866834, 0);
  sqcRYGate(q, 0.6634447178424911, 1);
  sqcRZGate(q, 2.112726679834439, 1);
  sqcRYGate(q, -2.794772379388357, 2);
  sqcRZGate(q, 2.2182543053405754, 2);
  sqcRYGate(q, -0.6501790332420754, 3);
  sqcRZGate(q, 2.4501245000308205, 3);

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
