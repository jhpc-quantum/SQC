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

  sqcRYGate(q, 2.2943491627097465, 0);
  sqcRYGate(q, -1.4391553242698274, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.00268884370346, 0);
  sqcRYGate(q, 2.482351762991295, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.407989663711704, 2);
  sqcRYGate(q, -0.4971710807886289, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2247036221362764, 2);
  sqcRYGate(q, -0.09493970180853228, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.09609682313521017, 1);
  sqcRYGate(q, 0.5579678851007248, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7539821986129471, 1);
  sqcRYGate(q, 2.9225656879569137, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5628239839694946, 0);
  sqcRYGate(q, -2.0394319629399833, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7527833268082538, 0);
  sqcRYGate(q, 0.9432491883558782, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.439310200845997, 2);
  sqcRYGate(q, 1.456317555560196, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.536786997539921, 2);
  sqcRYGate(q, -2.618658495906303, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9443135762457606, 1);
  sqcRYGate(q, -0.5942837241865178, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9808449719915684, 1);
  sqcRYGate(q, 2.01121928888237, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.767981281135559, 0);
  sqcRYGate(q, 1.9019499607175465, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.273389782754374, 0);
  sqcRYGate(q, -3.0430706307939275, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5286509984603853, 2);
  sqcRYGate(q, -1.8307009648897603, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5383973163470435, 2);
  sqcRYGate(q, -0.47405096922104933, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6356963036278696, 1);
  sqcRYGate(q, -0.754983538138232, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2675393932310324, 1);
  sqcRYGate(q, 1.7551204728317655, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3285594049375657, 0);
  sqcRYGate(q, -1.2847177211720497, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1788492354911417, 0);
  sqcRYGate(q, -0.001936264811589261, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6913908895073178, 2);
  sqcRYGate(q, 1.0890859025131114, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.567546378894516, 2);
  sqcRYGate(q, -2.5209173482030485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8906737625673703, 1);
  sqcRYGate(q, -1.5396159504528297, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4697600217042344, 1);
  sqcRYGate(q, -2.9903632361904124, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8351134375171858, 0);
  sqcRYGate(q, -1.4485920239515298, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4375546353933188, 0);
  sqcRYGate(q, 0.7275622325895613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2912633433546057, 2);
  sqcRYGate(q, -2.621458016625675, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8660921373684101, 2);
  sqcRYGate(q, -2.2247376081502335, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5289133237319419, 1);
  sqcRYGate(q, 2.341145410161817, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.156061417237842, 1);
  sqcRYGate(q, 2.5913520758024253, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6436732432067308, 0);
  sqcRYGate(q, -2.6419171843157567, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2961376102726136, 0);
  sqcRYGate(q, 0.4724259250526926, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6219696736150455, 2);
  sqcRYGate(q, 2.6585504538568525, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5365179492089323, 2);
  sqcRYGate(q, 2.8310829594853555, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.42507120195729886, 1);
  sqcRYGate(q, -0.11841930470951312, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1694727688340247, 1);
  sqcRYGate(q, 1.471425274516763, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.297781859745752, 0);
  sqcRYGate(q, 3.0187333280009057, 1);
  sqcRYGate(q, -0.9192038544145296, 2);
  sqcRYGate(q, 3.132738468799112, 3);

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
