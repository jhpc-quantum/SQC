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

  sqcRYGate(q, 2.4457093833493664, 0);
  sqcRZGate(q, 1.5044153510009044, 0);
  sqcRYGate(q, 0.551532840410637, 1);
  sqcRZGate(q, 0.3942241630300597, 1);
  sqcRYGate(q, 0.8624027664650821, 2);
  sqcRZGate(q, 0.8396732179224412, 2);
  sqcRYGate(q, -1.2647171690519416, 3);
  sqcRZGate(q, -0.8121990903896483, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.9166796409344007, 0);
  sqcRZGate(q, -1.3866772313031246, 0);
  sqcRYGate(q, 1.469806035161761, 1);
  sqcRZGate(q, -0.006028533868391325, 1);
  sqcRYGate(q, -2.2483386387268727, 2);
  sqcRZGate(q, -1.12003403254787, 2);
  sqcRYGate(q, 0.5638476663449117, 3);
  sqcRZGate(q, 1.1539177891176795, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8331398780783488, 0);
  sqcRZGate(q, -1.799278878786779, 0);
  sqcRYGate(q, 2.867775126161359, 1);
  sqcRZGate(q, 2.9087783691069142, 1);
  sqcRYGate(q, -2.4740768037098655, 2);
  sqcRZGate(q, -0.33276724836496496, 2);
  sqcRYGate(q, 0.999680733352152, 3);
  sqcRZGate(q, 0.5787944780346725, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2851051944649505, 0);
  sqcRZGate(q, -2.8788481563282544, 0);
  sqcRYGate(q, -1.8633928762780148, 1);
  sqcRZGate(q, -0.41869017160078886, 1);
  sqcRYGate(q, 2.826226214907398, 2);
  sqcRZGate(q, -0.12058166563500361, 2);
  sqcRYGate(q, 0.18309675156343264, 3);
  sqcRZGate(q, -3.1262219249513574, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4853466936952135, 0);
  sqcRZGate(q, -2.736654685113762, 0);
  sqcRYGate(q, 1.2875050680941886, 1);
  sqcRZGate(q, -2.919146850005487, 1);
  sqcRYGate(q, -0.9730764827885326, 2);
  sqcRZGate(q, 0.05689651203164826, 2);
  sqcRYGate(q, 1.8066319101810429, 3);
  sqcRZGate(q, -3.0143350870826877, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.1492972385380225, 0);
  sqcRZGate(q, 0.9594691124665794, 0);
  sqcRYGate(q, -0.949476601825912, 1);
  sqcRZGate(q, 1.648553425370145, 1);
  sqcRYGate(q, 0.5513403478320313, 2);
  sqcRZGate(q, -0.5662833384237941, 2);
  sqcRYGate(q, 0.5291906657924774, 3);
  sqcRZGate(q, 0.2026249091746015, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6940019855175885, 0);
  sqcRZGate(q, -1.2132705187286463, 0);
  sqcRYGate(q, 2.366792700959642, 1);
  sqcRZGate(q, 2.7070674722700168, 1);
  sqcRYGate(q, -0.8763725636277601, 2);
  sqcRZGate(q, 2.9413960813706805, 2);
  sqcRYGate(q, 1.6533076232181572, 3);
  sqcRZGate(q, 0.9750694146048259, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.451119171950322, 0);
  sqcRZGate(q, 2.0284815913680756, 0);
  sqcRYGate(q, -1.535368445910947, 1);
  sqcRZGate(q, -1.0692126122803018, 1);
  sqcRYGate(q, -0.8091536423023591, 2);
  sqcRZGate(q, -0.6696237408107093, 2);
  sqcRYGate(q, -2.07615908375564, 3);
  sqcRZGate(q, 2.901490285479039, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.396596756229509, 0);
  sqcRZGate(q, 0.9495119495723962, 0);
  sqcRYGate(q, -1.9162846172288122, 1);
  sqcRZGate(q, 2.5422816475411736, 1);
  sqcRYGate(q, 2.278153959550849, 2);
  sqcRZGate(q, -3.1217042503865846, 2);
  sqcRYGate(q, 0.7421008357713746, 3);
  sqcRZGate(q, -1.1501877703786674, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2424583641372955, 0);
  sqcRZGate(q, -2.1146355305358844, 0);
  sqcRYGate(q, -1.2344546283354179, 1);
  sqcRZGate(q, 2.945739304388321, 1);
  sqcRYGate(q, 1.172375703633613, 2);
  sqcRZGate(q, -2.4774205702746372, 2);
  sqcRYGate(q, -0.3354103628827368, 3);
  sqcRZGate(q, 2.489725854451527, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5110450556987585, 0);
  sqcRZGate(q, -1.4015136112256388, 0);
  sqcRYGate(q, 0.8079991867651367, 1);
  sqcRZGate(q, -0.19624336834398992, 1);
  sqcRYGate(q, 2.8986304877143234, 2);
  sqcRZGate(q, 2.350030915794728, 2);
  sqcRYGate(q, 1.4275643519170993, 3);
  sqcRZGate(q, -0.46163920574061107, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9130482500829995, 0);
  sqcRZGate(q, 0.24532054019371682, 0);
  sqcRYGate(q, -2.242719595725034, 1);
  sqcRZGate(q, -3.1168688362559487, 1);
  sqcRYGate(q, -1.7754560725321011, 2);
  sqcRZGate(q, 2.22414060837772, 2);
  sqcRYGate(q, 2.5564787003530633, 3);
  sqcRZGate(q, 0.5086353128549701, 3);

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
