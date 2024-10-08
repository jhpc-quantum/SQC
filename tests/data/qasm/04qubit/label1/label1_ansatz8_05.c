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

  sqcRYGate(q, -2.0355202164659114, 0);
  sqcRYGate(q, -2.678294102758047, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0354736426160116, 0);
  sqcRYGate(q, 2.22258587252654, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1301948349226973, 2);
  sqcRYGate(q, 2.1901665650718702, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.053446952769595275, 2);
  sqcRYGate(q, -2.766853922878814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.37055125807842354, 0);
  sqcRYGate(q, 2.365129128551319, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4841528206793875, 0);
  sqcRYGate(q, -3.0338495592728463, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.10410338894420766, 1);
  sqcRYGate(q, 0.06369769057378608, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0448650815767326, 1);
  sqcRYGate(q, 2.094351317293224, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2312179141459536, 0);
  sqcRYGate(q, 0.17013680576270487, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.845168099986069, 0);
  sqcRYGate(q, -2.867250387419066, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.264980573174787, 2);
  sqcRYGate(q, -1.6558452452778827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.19891830183268944, 2);
  sqcRYGate(q, -2.4358027103615107, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0695582620493727, 0);
  sqcRYGate(q, -0.5856901349152743, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6575400646779572, 0);
  sqcRYGate(q, -2.205747698611571, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1777063102277987, 1);
  sqcRYGate(q, -2.745873493332515, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.668331607892159, 1);
  sqcRYGate(q, 0.590384371963733, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.985069816237572, 0);
  sqcRYGate(q, -0.17224375638564815, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0927791461336145, 0);
  sqcRYGate(q, 1.5625045993047841, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.07587114272503204, 2);
  sqcRYGate(q, -2.0292916024494376, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1420072123350957, 2);
  sqcRYGate(q, -1.6243649287412492, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0428954184787245, 0);
  sqcRYGate(q, 0.3114272856183509, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.303130319878803, 0);
  sqcRYGate(q, -2.2252144347859195, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7999849185617569, 1);
  sqcRYGate(q, -1.4830848741535752, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5139861772806444, 1);
  sqcRYGate(q, -2.1038408243785813, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4243074298801326, 0);
  sqcRYGate(q, 2.443378288518163, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.051972193112580285, 0);
  sqcRYGate(q, 0.5628195985363228, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3491819568545642, 2);
  sqcRYGate(q, -2.4077442059021714, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3990795994097955, 2);
  sqcRYGate(q, -3.0065732006790915, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0334607034365568, 0);
  sqcRYGate(q, -1.4756863809176846, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.34956812395158476, 0);
  sqcRYGate(q, -0.9565403321856303, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8149169907186646, 1);
  sqcRYGate(q, 0.4120857425457132, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7206636893344236, 1);
  sqcRYGate(q, 0.8749694389745843, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9855125496349881, 0);
  sqcRYGate(q, -0.7095975573876343, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0740726526731521, 0);
  sqcRYGate(q, -2.9987198732248244, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.568832817078294, 2);
  sqcRYGate(q, -1.0955669250345235, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.052677823348470376, 2);
  sqcRYGate(q, -1.207942115817564, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1189665589493556, 0);
  sqcRYGate(q, -2.9294418825307904, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.43071024891808457, 0);
  sqcRYGate(q, -1.5902181245847578, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7187876901938538, 1);
  sqcRYGate(q, -2.1278697443361607, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.879561249159811, 1);
  sqcRYGate(q, 2.9034110462762324, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6831448928911523, 0);
  sqcRYGate(q, -0.12014319316763, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2230119647590074, 0);
  sqcRYGate(q, -2.225305277061751, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.06699526761388874, 2);
  sqcRYGate(q, -0.9339951540442177, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4836444205976558, 2);
  sqcRYGate(q, 1.313510108175344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8177418856074796, 0);
  sqcRYGate(q, 2.8177391935107963, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3845068920240863, 0);
  sqcRYGate(q, -1.7418623215233415, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.36904346733738436, 1);
  sqcRYGate(q, -2.111651572882598, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6284623833200518, 1);
  sqcRYGate(q, 0.017593212505223353, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7854757417082399, 0);
  sqcRYGate(q, -2.0581594590067223, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.746051009656259, 0);
  sqcRYGate(q, -0.7211992144334944, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.13003755235902087, 2);
  sqcRYGate(q, 1.2780612411801389, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.279766401048197, 2);
  sqcRYGate(q, 1.4985399537346318, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.30534858597095715, 0);
  sqcRYGate(q, 0.3359377606913885, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.01841956407261, 0);
  sqcRYGate(q, 0.40437041796657525, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.860957757399838, 1);
  sqcRYGate(q, 0.31959552695994553, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2833288082490286, 1);
  sqcRYGate(q, -0.44981076386657204, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3161345853981303, 0);
  sqcRYGate(q, -0.5203608660779486, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1562676905590215, 0);
  sqcRYGate(q, 0.8600387545635533, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5030433080878947, 2);
  sqcRYGate(q, -0.2520739112326817, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5139367064387734, 2);
  sqcRYGate(q, 0.676165535482413, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.854685821231802, 0);
  sqcRYGate(q, -1.0805270608086754, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7872544798977867, 0);
  sqcRYGate(q, 2.06759563574984, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.122629607784437, 1);
  sqcRYGate(q, 2.202247571299658, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.39455611453225053, 1);
  sqcRYGate(q, -0.6810879535203934, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.226734621757891, 0);
  sqcRYGate(q, -2.530584364629429, 1);
  sqcRYGate(q, 2.002648248177538, 2);
  sqcRYGate(q, 1.088732417074425, 3);

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
