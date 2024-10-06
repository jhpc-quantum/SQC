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

  sqcRYGate(q, -2.3583827050876085, 0);
  sqcRZGate(q, -2.5826853354477795, 0);
  sqcRYGate(q, -1.393296626197839, 1);
  sqcRZGate(q, 0.23263825827556797, 1);
  sqcRYGate(q, 0.41692455410145973, 2);
  sqcRZGate(q, 2.661606881112915, 2);
  sqcRYGate(q, -0.9322002149817471, 3);
  sqcRZGate(q, -2.929789138731022, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.0000331410202161, 0);
  sqcRZGate(q, -2.688721503066126, 0);
  sqcRYGate(q, 0.464205306518112, 1);
  sqcRZGate(q, -2.338499023912633, 1);
  sqcRYGate(q, 0.9718288097928578, 2);
  sqcRZGate(q, 2.228491241081735, 2);
  sqcRYGate(q, -2.099300131677203, 3);
  sqcRZGate(q, 1.6038324592209594, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.008973702689521, 0);
  sqcRZGate(q, -1.037420663054801, 0);
  sqcRYGate(q, 1.5360654966517169, 1);
  sqcRZGate(q, 0.15245638512607793, 1);
  sqcRYGate(q, 2.9194220391353833, 2);
  sqcRZGate(q, -1.6601248723986126, 2);
  sqcRYGate(q, 3.1158138483921864, 3);
  sqcRZGate(q, -0.8529093423026466, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.45436069353688063, 0);
  sqcRZGate(q, -1.7652237452977557, 0);
  sqcRYGate(q, 1.3111392122649272, 1);
  sqcRZGate(q, -2.7226284124969315, 1);
  sqcRYGate(q, -2.345176440568968, 2);
  sqcRZGate(q, 0.9255508189454584, 2);
  sqcRYGate(q, -2.9456897672488367, 3);
  sqcRZGate(q, -1.7637854445798433, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.9888777505628545, 0);
  sqcRZGate(q, 1.2955170913088363, 0);
  sqcRYGate(q, 1.5320528064301284, 1);
  sqcRZGate(q, 2.101465903209645, 1);
  sqcRYGate(q, 1.5489257506494418, 2);
  sqcRZGate(q, 1.4039545492416199, 2);
  sqcRYGate(q, -1.8130197439662727, 3);
  sqcRZGate(q, -2.5396284455961746, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.9851049457929977, 0);
  sqcRZGate(q, 0.5766679725473631, 0);
  sqcRYGate(q, -1.1738170227096398, 1);
  sqcRZGate(q, -1.704325139703235, 1);
  sqcRYGate(q, 2.452755620089867, 2);
  sqcRZGate(q, 0.9426213791600341, 2);
  sqcRYGate(q, 3.059378908542362, 3);
  sqcRZGate(q, -2.8607785038628437, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.5088199874492485, 0);
  sqcRZGate(q, 2.54402389193662, 0);
  sqcRYGate(q, -0.8017034046496816, 1);
  sqcRZGate(q, 0.8390755116997637, 1);
  sqcRYGate(q, 0.4946887548048999, 2);
  sqcRZGate(q, 2.3049371519071307, 2);
  sqcRYGate(q, 1.3167207661490417, 3);
  sqcRZGate(q, -1.5585394264819141, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.3354616576601117, 0);
  sqcRZGate(q, -1.9064483500300502, 0);
  sqcRYGate(q, -1.6623397715527741, 1);
  sqcRZGate(q, -0.14092829240652713, 1);
  sqcRYGate(q, 2.954086339086318, 2);
  sqcRZGate(q, 1.2500705915427854, 2);
  sqcRYGate(q, -1.2755189640606301, 3);
  sqcRZGate(q, 1.3622018936358933, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.8734685082592275, 0);
  sqcRZGate(q, 0.16462911737921868, 0);
  sqcRYGate(q, -1.0502584459466027, 1);
  sqcRZGate(q, -2.7414149153125225, 1);
  sqcRYGate(q, 2.717895890596975, 2);
  sqcRZGate(q, -1.3839846068751047, 2);
  sqcRYGate(q, -2.9688744626820798, 3);
  sqcRZGate(q, -2.979120740948504, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.3755393811277485, 0);
  sqcRZGate(q, -2.860178141033682, 0);
  sqcRYGate(q, -1.9079053908592394, 1);
  sqcRZGate(q, -0.9694176347040466, 1);
  sqcRYGate(q, -0.0985029779923856, 2);
  sqcRZGate(q, -1.5943534286826107, 2);
  sqcRYGate(q, 0.047687066018735715, 3);
  sqcRZGate(q, -2.785031588103065, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.8710144639801091, 0);
  sqcRZGate(q, -0.881180441110776, 0);
  sqcRYGate(q, 2.3031082375085488, 1);
  sqcRZGate(q, -0.6060461460726634, 1);
  sqcRYGate(q, 0.6072141814516295, 2);
  sqcRZGate(q, 2.111361985298921, 2);
  sqcRYGate(q, 0.27596949624688083, 3);
  sqcRZGate(q, -1.4753928850712295, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.01986217190481998, 0);
  sqcRZGate(q, 0.8974341850824655, 0);
  sqcRYGate(q, -0.940074821231013, 1);
  sqcRZGate(q, 2.000295384756913, 1);
  sqcRYGate(q, 2.4043373505454273, 2);
  sqcRZGate(q, -0.8153690535445655, 2);
  sqcRYGate(q, 0.7038784447929404, 3);
  sqcRZGate(q, -2.773014976400348, 3);

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
