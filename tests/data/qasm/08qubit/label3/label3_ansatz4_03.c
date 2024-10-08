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

  sqcRYGate(q, -1.4626733098034705, 0);
  sqcRZGate(q, 2.4859324239500315e-06, 0);
  sqcRYGate(q, 1.5707936597558685, 1);
  sqcRZGate(q, 1.701921282764042, 1);
  sqcRYGate(q, 0.24120162103858803, 2);
  sqcRZGate(q, -1.5707939633534789, 2);
  sqcRYGate(q, 2.3526560255504592e-07, 3);
  sqcRZGate(q, -2.798069381643141, 3);
  sqcRYGate(q, -3.1414974422029354, 4);
  sqcRZGate(q, -1.5201494433522447, 4);
  sqcRYGate(q, -1.4900027042686599, 5);
  sqcRZGate(q, -8.757919616186883e-07, 5);
  sqcRYGate(q, 1.5707980607301186, 6);
  sqcRZGate(q, 1.121528641426584, 6);
  sqcRYGate(q, 1.5707993467979111, 7);
  sqcRZGate(q, -1.5707861788181692, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5708105320050332, 0);
  sqcRZGate(q, 2.105427435703782, 0);
  sqcRYGate(q, -1.5707962942534035, 1);
  sqcRZGate(q, -1.570781142900831, 1);
  sqcRYGate(q, -0.24522235179204888, 2);
  sqcRZGate(q, 1.1968663460097053, 2);
  sqcRYGate(q, -3.141592298185788, 3);
  sqcRZGate(q, -0.046083935466751755, 3);
  sqcRYGate(q, 1.5707942925828673, 4);
  sqcRZGate(q, -2.039726259894792e-06, 4);
  sqcRYGate(q, 1.5707970289035578, 5);
  sqcRZGate(q, 2.2561037264009647, 5);
  sqcRYGate(q, 1.905306415040726e-06, 6);
  sqcRZGate(q, 0.5427220426710494, 6);
  sqcRYGate(q, -3.0484272983212897, 7);
  sqcRZGate(q, -3.141582842174098, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1415867592419566, 0);
  sqcRZGate(q, -1.068242006262186, 0);
  sqcRYGate(q, 1.5708044967750823, 1);
  sqcRZGate(q, -1.6796185096758087, 1);
  sqcRYGate(q, -9.134725234005713e-07, 2);
  sqcRZGate(q, -1.1968629598432845, 2);
  sqcRYGate(q, -1.5707962938238067, 3);
  sqcRZGate(q, 2.574150200886549, 3);
  sqcRYGate(q, 1.5707905624271323, 4);
  sqcRZGate(q, 1.5708039841240922, 4);
  sqcRYGate(q, 6.546742550057618e-07, 5);
  sqcRZGate(q, 2.456323119932318, 5);
  sqcRYGate(q, -1.5707604132332056, 6);
  sqcRZGate(q, 3.141592639989873, 6);
  sqcRYGate(q, -1.570855119812828, 7);
  sqcRZGate(q, -0.4119976080112844, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.570796507460071, 0);
  sqcRZGate(q, 4.0864428797606735e-06, 0);
  sqcRYGate(q, 1.5707954333572172, 1);
  sqcRZGate(q, 1.5707963020243252, 1);
  sqcRYGate(q, 2.8016283437424057, 2);
  sqcRZGate(q, -1.570792065843281, 2);
  sqcRYGate(q, -1.0818597750983372e-07, 3);
  sqcRZGate(q, -1.3628615831112274, 3);
  sqcRYGate(q, -0.3429461174864806, 4);
  sqcRZGate(q, -1.57079316874394, 4);
  sqcRYGate(q, 0.03207712822964161, 5);
  sqcRZGate(q, -1.3445995717793182, 5);
  sqcRYGate(q, 1.570795086165866, 6);
  sqcRZGate(q, 1.5707938970140827, 6);
  sqcRYGate(q, -2.985864019696107e-06, 7);
  sqcRZGate(q, -1.1587888778063833, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.4908509927508113, 0);
  sqcRZGate(q, -3.1415859215545368, 0);
  sqcRYGate(q, 1.5707941141284965, 1);
  sqcRZGate(q, -2.1414326952613356, 1);
  sqcRYGate(q, 1.5707954339355297, 2);
  sqcRZGate(q, -1.479264955600014, 2);
  sqcRYGate(q, -3.141591322340652, 3);
  sqcRZGate(q, 0.36654116006473714, 3);
  sqcRYGate(q, -1.570796403315945, 4);
  sqcRZGate(q, -2.6815788706415926, 4);
  sqcRYGate(q, -3.1415924460064804, 5);
  sqcRZGate(q, -0.41474125762205244, 5);
  sqcRYGate(q, -1.570799523807532, 6);
  sqcRZGate(q, -2.247519724376092, 6);
  sqcRYGate(q, -3.1028635247373635, 7);
  sqcRZGate(q, -3.1415827835010313, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5707964667397665, 0);
  sqcRZGate(q, -1.7810892577736401, 0);
  sqcRYGate(q, 8.68607992643433e-07, 1);
  sqcRZGate(q, -0.5509495203837013, 1);
  sqcRYGate(q, -2.939721683113276e-07, 2);
  sqcRZGate(q, -2.7994389194761577, 2);
  sqcRYGate(q, 3.141592528826512, 3);
  sqcRZGate(q, -2.8647528305902004, 3);
  sqcRYGate(q, -2.9737346629588046e-07, 4);
  sqcRZGate(q, 0.6615914842109878, 4);
  sqcRYGate(q, -1.597679186503136e-08, 5);
  sqcRZGate(q, -0.12431909824061624, 5);
  sqcRYGate(q, 3.1415902107717506, 6);
  sqcRZGate(q, 0.46042712001460384, 6);
  sqcRYGate(q, -1.5707951270234775, 7);
  sqcRZGate(q, -2.721399990697534, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.3669679792611618, 0);
  sqcRZGate(q, -2.867387186790257, 0);
  sqcRYGate(q, 0.8175105538655532, 1);
  sqcRZGate(q, -2.5771481718267455, 1);
  sqcRYGate(q, 2.2877272517668668, 2);
  sqcRZGate(q, -1.9632370217687143, 2);
  sqcRYGate(q, -2.3240824744137387, 3);
  sqcRZGate(q, -2.577147736618865, 3);
  sqcRYGate(q, -2.3241036631620955, 4);
  sqcRZGate(q, -2.5771157153095934, 4);
  sqcRYGate(q, 1.8931090650716849, 5);
  sqcRZGate(q, 2.4537758269768286, 5);
  sqcRYGate(q, -0.8538696480421057, 6);
  sqcRZGate(q, -1.9632381415001328, 6);
  sqcRYGate(q, -2.252474648212925, 7);
  sqcRZGate(q, 1.1574041266447805, 7);

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
