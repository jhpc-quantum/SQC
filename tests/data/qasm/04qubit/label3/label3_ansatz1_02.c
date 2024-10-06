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

  sqcRYGate(q, 3.003268540539962e-06, 0);
  sqcRZGate(q, -1.4365309026017428, 0);
  sqcRYGate(q, 2.1496843735647895, 1);
  sqcRZGate(q, -1.728287799250234, 1);
  sqcRYGate(q, -3.0037891118499713, 2);
  sqcRZGate(q, 1.9641012546531398, 2);
  sqcRYGate(q, 1.6748872809872015, 3);
  sqcRZGate(q, 2.4124135989889126, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.617502478064821, 0);
  sqcRZGate(q, -3.118129099054511, 0);
  sqcRYGate(q, 1.846048806001285, 1);
  sqcRZGate(q, 1.3262966225440183, 1);
  sqcRYGate(q, 1.5687982598737409, 2);
  sqcRZGate(q, 2.2666699887772745, 2);
  sqcRYGate(q, -0.25647153673257606, 3);
  sqcRZGate(q, 0.057504955629074324, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5835579899606875, 0);
  sqcRZGate(q, -1.8672751522406514, 0);
  sqcRYGate(q, -4.171446299494619e-08, 1);
  sqcRZGate(q, -1.069457757165507, 1);
  sqcRYGate(q, 1.6573399415480228, 2);
  sqcRZGate(q, -1.2740887072805265, 2);
  sqcRYGate(q, 0.06825660622190899, 3);
  sqcRZGate(q, -0.622288284046592, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.3716043168679204, 0);
  sqcRZGate(q, 1.001543098114774, 0);
  sqcRYGate(q, -1.5633525960573729, 1);
  sqcRZGate(q, 1.4690222227538665, 1);
  sqcRYGate(q, 3.130452839835029, 2);
  sqcRZGate(q, -0.5226653494827778, 2);
  sqcRYGate(q, -0.1017725625305602, 3);
  sqcRZGate(q, -2.8938760020111958, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.9762514564362812, 0);
  sqcRZGate(q, 1.4690640761509506, 0);
  sqcRYGate(q, -1.6334890531234978, 1);
  sqcRZGate(q, 2.555241085148474, 1);
  sqcRYGate(q, -0.10189053899334422, 2);
  sqcRZGate(q, 0.43319523172005603, 2);
  sqcRYGate(q, -0.9852238672165248, 3);
  sqcRZGate(q, -0.13403350574881165, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3891313137760946, 0);
  sqcRZGate(q, 1.6423968757135778, 0);
  sqcRYGate(q, -0.3609600978800822, 1);
  sqcRZGate(q, -2.515777794166252, 1);
  sqcRYGate(q, -2.9435911948183193, 2);
  sqcRZGate(q, 1.1502239599194304, 2);
  sqcRYGate(q, 1.1712863136078138, 3);
  sqcRZGate(q, 3.1324741827134206, 3);

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
