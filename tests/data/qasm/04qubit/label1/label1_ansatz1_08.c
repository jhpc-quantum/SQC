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

  sqcRYGate(q, -0.043648865875697995, 0);
  sqcRZGate(q, 0.11379675309473608, 0);
  sqcRYGate(q, -0.29537353459765997, 1);
  sqcRZGate(q, -2.6406843060092613, 1);
  sqcRYGate(q, -2.2379337734966063, 2);
  sqcRZGate(q, 0.4714784748980483, 2);
  sqcRYGate(q, -1.8955894954343693, 3);
  sqcRZGate(q, -0.07553526099816331, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.693063517205568, 0);
  sqcRZGate(q, 2.492068516951731, 0);
  sqcRYGate(q, 0.39559483863789774, 1);
  sqcRZGate(q, 2.4985789364000404, 1);
  sqcRYGate(q, -1.939150918114134, 2);
  sqcRZGate(q, 0.25629316331623825, 2);
  sqcRYGate(q, -1.7448143235959765, 3);
  sqcRZGate(q, -1.3833496075749956, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.16464622743980986, 0);
  sqcRZGate(q, -3.042916457910889, 0);
  sqcRYGate(q, -1.4237930281470776, 1);
  sqcRZGate(q, -1.4956121370094588, 1);
  sqcRYGate(q, 1.6861673523163139, 2);
  sqcRZGate(q, -1.757804279908302, 2);
  sqcRYGate(q, -2.158037821094119, 3);
  sqcRZGate(q, -3.1238353452938004, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.697387159352635, 0);
  sqcRZGate(q, -2.619692015322796, 0);
  sqcRYGate(q, 1.757328525853012, 1);
  sqcRZGate(q, -3.1216997065023704, 1);
  sqcRYGate(q, 0.9376762522285996, 2);
  sqcRZGate(q, -1.5130762198677195, 2);
  sqcRYGate(q, 3.0702274338061124, 3);
  sqcRZGate(q, 1.8573682039412187, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5853359217621454, 0);
  sqcRZGate(q, 1.2224382635353663, 0);
  sqcRYGate(q, -2.6418451166302606, 1);
  sqcRZGate(q, 1.4732229604708689, 1);
  sqcRYGate(q, 2.7325885456079355, 2);
  sqcRZGate(q, -0.7537779242973971, 2);
  sqcRYGate(q, -1.5203941308279105, 3);
  sqcRZGate(q, 1.7510811151346803, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.49372303893787084, 0);
  sqcRZGate(q, -1.5212364275870662, 0);
  sqcRYGate(q, -0.8198186466183568, 1);
  sqcRZGate(q, 1.6024488876107101, 1);
  sqcRYGate(q, -0.23696058320567648, 2);
  sqcRZGate(q, -0.4088100094035294, 2);
  sqcRYGate(q, 0.23026818717935615, 3);
  sqcRZGate(q, -0.07599619568205274, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.17926956724015017, 0);
  sqcRZGate(q, 0.16468657150106303, 0);
  sqcRYGate(q, -1.017479126652084, 1);
  sqcRZGate(q, -0.25547023997754525, 1);
  sqcRYGate(q, 1.8249007243909545, 2);
  sqcRZGate(q, 1.6033246355553479, 2);
  sqcRYGate(q, 1.0828850549693467, 3);
  sqcRZGate(q, -2.172719138120822, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5050786743418123, 0);
  sqcRZGate(q, 2.4167101809786757, 0);
  sqcRYGate(q, -1.9834526947755622, 1);
  sqcRZGate(q, -0.18123443534185418, 1);
  sqcRYGate(q, 2.5850921081696994, 2);
  sqcRZGate(q, 2.7175512375404356, 2);
  sqcRYGate(q, -2.630862207820666, 3);
  sqcRZGate(q, 2.3279279452109733, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4475060064693572, 0);
  sqcRZGate(q, -2.5847481083374952, 0);
  sqcRYGate(q, 1.0015543022887563, 1);
  sqcRZGate(q, 2.6981414950118925, 1);
  sqcRYGate(q, 2.4727267488319997, 2);
  sqcRZGate(q, -2.7835441404213594, 2);
  sqcRYGate(q, 1.8503918248208546, 3);
  sqcRZGate(q, 2.132385668770784, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7945485436610362, 0);
  sqcRZGate(q, -0.6650469158937148, 0);
  sqcRYGate(q, 0.07501937652615168, 1);
  sqcRZGate(q, -0.35298807571362706, 1);
  sqcRYGate(q, -1.990599713672118, 2);
  sqcRZGate(q, -0.43890277299324687, 2);
  sqcRYGate(q, 1.832964212027672, 3);
  sqcRZGate(q, 3.0561835922336273, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8127482066274153, 0);
  sqcRZGate(q, 0.41206504262952054, 0);
  sqcRYGate(q, 2.044767811088885, 1);
  sqcRZGate(q, -1.9366250315665494, 1);
  sqcRYGate(q, 2.0826171527338033, 2);
  sqcRZGate(q, 1.8568687393475538, 2);
  sqcRYGate(q, -1.0294262881701235, 3);
  sqcRZGate(q, -1.8978442379718736, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7188853293692445, 0);
  sqcRZGate(q, -2.6489627065790273, 0);
  sqcRYGate(q, -1.16905807567729, 1);
  sqcRZGate(q, 1.6034903021745477, 1);
  sqcRYGate(q, -2.2475108093297007, 2);
  sqcRZGate(q, 1.6539721557902363, 2);
  sqcRYGate(q, 0.9538807953536307, 3);
  sqcRZGate(q, -0.2840687845750773, 3);

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
