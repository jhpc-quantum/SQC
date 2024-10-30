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

  sqcRYGate(q, 1.2692866143736055, 0);
  sqcRYGate(q, -0.04097204608658434, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9115617043688363, 0);
  sqcRYGate(q, -0.7082720653053984, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.762954370213444, 2);
  sqcRYGate(q, -0.8215340426781719, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.001346478475879, 2);
  sqcRYGate(q, -2.2855713449777317, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.159994329086941, 0);
  sqcRYGate(q, -3.031816622202946, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.712684885099915, 0);
  sqcRYGate(q, -0.5179225890614706, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4204704284127865, 1);
  sqcRYGate(q, -1.7705528518714688, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.22939675455988842, 1);
  sqcRYGate(q, -2.2762749478140822, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9860673753530593, 0);
  sqcRYGate(q, 0.427051693622138, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.385399409875929, 0);
  sqcRYGate(q, 2.855928480698934, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7409221531704582, 2);
  sqcRYGate(q, -0.2818443738155467, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.43558946236431345, 2);
  sqcRYGate(q, 2.2253161556102494, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0219716685972227, 0);
  sqcRYGate(q, -0.22056435877034886, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.862367833171163, 0);
  sqcRYGate(q, -0.45502846945098163, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5365736194149974, 1);
  sqcRYGate(q, -2.82623294655689, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.35148326972953203, 1);
  sqcRYGate(q, -2.7312856190612798, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0716271092110405, 0);
  sqcRYGate(q, 2.0657514770244534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6442124709481147, 0);
  sqcRYGate(q, 1.8635950391991765, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7026271892867033, 2);
  sqcRYGate(q, -0.02725154885004457, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2173353968082012, 2);
  sqcRYGate(q, 3.050249339687825, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7008747562721647, 0);
  sqcRYGate(q, 0.35724619500683197, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8740433816987905, 0);
  sqcRYGate(q, -0.7357266722155233, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.962682751198508, 1);
  sqcRYGate(q, -1.1761614264978975, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.604121732115438, 1);
  sqcRYGate(q, -2.1923790734265305, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5936837301924802, 0);
  sqcRYGate(q, 2.5396916293940053, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0406437736334437, 0);
  sqcRYGate(q, 2.579869689437485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5566297410071224, 2);
  sqcRYGate(q, -2.9633423477194056, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9330338860136611, 2);
  sqcRYGate(q, 2.040083762179049, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.953235119549631, 0);
  sqcRYGate(q, 0.38967228715753244, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3360829722076093, 0);
  sqcRYGate(q, 2.4494996843418555, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.900518533098762, 1);
  sqcRYGate(q, -1.1344949128209443, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8523221525094092, 1);
  sqcRYGate(q, 0.6576608494196341, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0796280602838793, 0);
  sqcRYGate(q, 1.3546518426503955, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.35434701904243415, 0);
  sqcRYGate(q, 0.040440398295812585, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3615965809040813, 2);
  sqcRYGate(q, 0.7123928713730802, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3814238756193906, 2);
  sqcRYGate(q, -0.6486273021374983, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1859360447214797, 0);
  sqcRYGate(q, 0.9680498683434534, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7443633273588213, 0);
  sqcRYGate(q, -0.8597413178732164, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9492710816074745, 1);
  sqcRYGate(q, 2.3687155411021763, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9303140199562983, 1);
  sqcRYGate(q, -2.5990085632666062, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.25022269111240786, 0);
  sqcRYGate(q, 2.7048959777817596, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.586263738948316, 0);
  sqcRYGate(q, -0.4863941901084896, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9116178174815774, 2);
  sqcRYGate(q, -1.7099189042528575, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.552969912925669, 2);
  sqcRYGate(q, -1.6460079366568667, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2136411197084171, 0);
  sqcRYGate(q, -0.5259175963565061, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.666415036290242, 0);
  sqcRYGate(q, 0.609655484682559, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4781512274265, 1);
  sqcRYGate(q, 1.450320728877931, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.33306728815077485, 1);
  sqcRYGate(q, 0.6909064743970984, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7962409295533188, 0);
  sqcRYGate(q, 2.6103766019555694, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6002313670700881, 0);
  sqcRYGate(q, -1.8833052296465338, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9874686584138592, 2);
  sqcRYGate(q, -2.972250753656019, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7390401647157194, 2);
  sqcRYGate(q, -2.393718421406535, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.49090136589537525, 0);
  sqcRYGate(q, -2.2166516988157996, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5553968790534896, 0);
  sqcRYGate(q, -2.7993008210570642, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6793032430851893, 1);
  sqcRYGate(q, -3.129717674279844, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9310054331557494, 1);
  sqcRYGate(q, 2.0032875845182296, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.250402505918996, 0);
  sqcRYGate(q, -0.6869919724236416, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5849663497692372, 0);
  sqcRYGate(q, -1.668451913673036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9775447614414557, 2);
  sqcRYGate(q, 1.5924462672813124, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.874830210021231, 2);
  sqcRYGate(q, 0.9278336206020317, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0400449449808415, 0);
  sqcRYGate(q, -1.8584540365144884, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0314144560480676, 0);
  sqcRYGate(q, 2.4417305829582325, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4472485641451036, 1);
  sqcRYGate(q, -1.4461540814880127, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2774521830012748, 1);
  sqcRYGate(q, 2.1969701486068782, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6951601684447792, 0);
  sqcRYGate(q, -0.655762012706686, 1);
  sqcRYGate(q, 1.4431953880081876, 2);
  sqcRYGate(q, -2.958704024327458, 3);

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
