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

  sqcRYGate(q, 0.0013322287194545979, 0);
  sqcRZGate(q, 1.31227887006841, 0);
  sqcRYGate(q, 2.7599399520412775, 1);
  sqcRZGate(q, 2.1755837850253315, 1);
  sqcRYGate(q, 1.572202327331341, 2);
  sqcRZGate(q, 0.7383911575579081, 2);
  sqcRYGate(q, -1.2650444907588243, 3);
  sqcRZGate(q, -0.6962200964383555, 3);
  sqcRYGate(q, -1.816998130424195, 4);
  sqcRZGate(q, 1.1025467909759215, 4);
  sqcRYGate(q, -1.5689258135454176, 5);
  sqcRZGate(q, 3.128421397007014, 5);
  sqcRYGate(q, 1.572275310409771, 6);
  sqcRZGate(q, 2.8300357332362807, 6);
  sqcRYGate(q, 0.0003021999425705246, 7);
  sqcRZGate(q, -0.19792111901176349, 7);
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
  sqcRYGate(q, 1.3588543586325486, 0);
  sqcRZGate(q, 1.4437364663768335, 0);
  sqcRYGate(q, -2.20742298264596, 1);
  sqcRZGate(q, 2.41348791773099, 1);
  sqcRYGate(q, 3.1388115184362233, 2);
  sqcRZGate(q, -2.402775469121366, 2);
  sqcRYGate(q, 0.00022520034505529206, 3);
  sqcRZGate(q, -0.8858524995785328, 3);
  sqcRYGate(q, -0.00016681174666206494, 4);
  sqcRZGate(q, 0.2563252160394507, 4);
  sqcRYGate(q, 2.280952209967319, 5);
  sqcRZGate(q, 3.113885498953644, 5);
  sqcRYGate(q, 0.0029064941676706373, 6);
  sqcRZGate(q, 0.24033348974263102, 6);
  sqcRYGate(q, 0.9792849895924921, 7);
  sqcRZGate(q, 0.5058715225137914, 7);
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
  sqcRYGate(q, -3.1378296133757697, 0);
  sqcRZGate(q, 0.9359370276273052, 0);
  sqcRYGate(q, -1.5689306832399152, 1);
  sqcRZGate(q, -3.0518405545956564, 1);
  sqcRYGate(q, 1.5695221021520454, 2);
  sqcRZGate(q, 0.8697917258459027, 2);
  sqcRYGate(q, 2.1737686055507957, 3);
  sqcRZGate(q, -1.586408144223325, 3);
  sqcRYGate(q, -3.02183030340875, 4);
  sqcRZGate(q, 2.827411245836819, 4);
  sqcRYGate(q, -1.5655387453073746, 5);
  sqcRZGate(q, -1.0474430903622836, 5);
  sqcRYGate(q, -3.140267127974572, 6);
  sqcRZGate(q, 3.071608382467428, 6);
  sqcRYGate(q, 0.0002819372191273928, 7);
  sqcRZGate(q, 1.2238228502745092, 7);
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
  sqcRYGate(q, -0.0014372233311350515, 0);
  sqcRZGate(q, -1.431953973586209, 0);
  sqcRYGate(q, -0.1091605527641466, 1);
  sqcRZGate(q, 3.0535410964027783, 1);
  sqcRYGate(q, 0.0016799029667717846, 2);
  sqcRZGate(q, 0.7775668280130345, 2);
  sqcRYGate(q, -0.4683045858398822, 3);
  sqcRZGate(q, -3.135291978570571, 3);
  sqcRYGate(q, -3.1414116790678106, 4);
  sqcRZGate(q, 0.7084021615688153, 4);
  sqcRYGate(q, 2.1597879215457496, 5);
  sqcRZGate(q, -2.0058136230129824, 5);
  sqcRYGate(q, 1.5663478281880183, 6);
  sqcRZGate(q, -2.007388216733106, 6);
  sqcRYGate(q, -0.04307726482625467, 7);
  sqcRZGate(q, -0.10649746603480627, 7);
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
  sqcRYGate(q, -0.0013916194875117603, 0);
  sqcRZGate(q, 0.11194486791280502, 0);
  sqcRYGate(q, 1.6479339982712287, 1);
  sqcRZGate(q, 0.13890204712838372, 1);
  sqcRYGate(q, 3.141338332824672, 2);
  sqcRZGate(q, 2.960913128681751, 2);
  sqcRYGate(q, -1.5291612156210876, 3);
  sqcRZGate(q, -2.940214068409054, 3);
  sqcRYGate(q, 3.140561712055994, 4);
  sqcRZGate(q, -2.9253071364354266, 4);
  sqcRYGate(q, -0.008430139020349614, 5);
  sqcRZGate(q, 2.9723770491826516, 5);
  sqcRYGate(q, -3.140121454440861, 6);
  sqcRZGate(q, -1.0182958846842354, 6);
  sqcRYGate(q, -0.5244256024096918, 7);
  sqcRZGate(q, 0.11248805869807477, 7);

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
