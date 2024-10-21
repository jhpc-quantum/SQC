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

  sqcRYGate(q, -0.7149375187177679, 0);
  sqcRYGate(q, -2.6977182478745747, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1076259232947514, 0);
  sqcRYGate(q, -0.6390180511930297, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.379607006319075, 2);
  sqcRYGate(q, 1.68265717260227, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.122239901033875, 2);
  sqcRYGate(q, -0.16189952726150367, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0588860639889635, 1);
  sqcRYGate(q, 1.7252337426868012, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.932685088012683, 1);
  sqcRYGate(q, -1.2430578362424727, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2823421268110988, 0);
  sqcRYGate(q, 1.0667003943989437, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7794763745855278, 0);
  sqcRYGate(q, -1.9143808674574532, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.086931594349948, 2);
  sqcRYGate(q, 2.0353322451378153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.366694962258018, 2);
  sqcRYGate(q, -2.944029408995067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0901766419892889, 1);
  sqcRYGate(q, -0.07289436093634905, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2754328313344168, 1);
  sqcRYGate(q, 0.6095548118665323, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3465771618560576, 0);
  sqcRYGate(q, 2.6137304616714374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1981811674676504, 0);
  sqcRYGate(q, 1.2646757868311234, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.027194185960649264, 2);
  sqcRYGate(q, 2.359907579293548, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.201840967744727, 2);
  sqcRYGate(q, 0.5090268416894419, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3440177896384573, 1);
  sqcRYGate(q, -0.403300308763337, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9870284579184654, 1);
  sqcRYGate(q, -1.892829760009839, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8954783178714631, 0);
  sqcRYGate(q, 2.4097304622250646, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.001647874541101, 0);
  sqcRYGate(q, 0.5764414989856883, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7714543570150361, 2);
  sqcRYGate(q, -0.5588740289180558, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6865749081716048, 2);
  sqcRYGate(q, 1.9098066295649425, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1070369375139268, 1);
  sqcRYGate(q, -2.40517646581281, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2356055084963149, 1);
  sqcRYGate(q, 0.39456460349058986, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1171829980468795, 0);
  sqcRYGate(q, -2.989929667974797, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7335949861018025, 0);
  sqcRYGate(q, -2.3503924959839546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9822296308936895, 2);
  sqcRYGate(q, 1.1536851899601848, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.516491940033859, 2);
  sqcRYGate(q, -1.6710179363168285, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6608220107814038, 1);
  sqcRYGate(q, 0.61496778122821, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.03501620648038717, 1);
  sqcRYGate(q, -1.5830979037362647, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7287911256888586, 0);
  sqcRYGate(q, 2.0678002057249234, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0337237042669627, 0);
  sqcRYGate(q, 3.0805648416353786, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4769385556482293, 2);
  sqcRYGate(q, 2.450914795261868, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.11921107076546528, 2);
  sqcRYGate(q, -3.104540881964959, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.537835787019413, 1);
  sqcRYGate(q, -1.8474927836452217, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4529264927055987, 1);
  sqcRYGate(q, -2.400072745068456, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9285091859053747, 0);
  sqcRYGate(q, -0.10909895321472805, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4071146551722493, 0);
  sqcRYGate(q, 1.7933803668445123, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4131771172412972, 2);
  sqcRYGate(q, 3.0907742747703626, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8689902381645344, 2);
  sqcRYGate(q, 2.84041379865587, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.031204353911648, 1);
  sqcRYGate(q, -0.7618357719494728, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6889520420280366, 1);
  sqcRYGate(q, 0.6851062797238833, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9546688847302605, 0);
  sqcRYGate(q, -1.890540658445384, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.457349740620711, 0);
  sqcRYGate(q, -2.807678214963192, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5370238625551647, 2);
  sqcRYGate(q, 2.088021964970685, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.794710423769671, 2);
  sqcRYGate(q, 2.3564924922081536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.46540595389553, 1);
  sqcRYGate(q, -2.207012168405259, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4506873080984761, 1);
  sqcRYGate(q, 1.889642078616733, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.49758873522397096, 0);
  sqcRYGate(q, 1.644399720194861, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7881020793656851, 0);
  sqcRYGate(q, 3.0579616894127364, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.171968926938054, 2);
  sqcRYGate(q, 2.172182820753521, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4770305871654485, 2);
  sqcRYGate(q, -1.8397625702151332, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.904858073170938, 1);
  sqcRYGate(q, -2.3330797689035037, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0184876905629228, 1);
  sqcRYGate(q, -0.9647562779746917, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2718923312476118, 0);
  sqcRYGate(q, -1.9528696683630482, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0933146817631216, 0);
  sqcRYGate(q, -1.6194486223662452, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.741656306742479, 2);
  sqcRYGate(q, -0.08587576653470741, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.252355270739706, 2);
  sqcRYGate(q, -2.43529933753721, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.06055632005045183, 1);
  sqcRYGate(q, 1.1253577007899453, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.36701209009308267, 1);
  sqcRYGate(q, 1.3724840431783445, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.22309746992072288, 0);
  sqcRYGate(q, 0.3858475980460785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4571197933746767, 0);
  sqcRYGate(q, -0.5858842979984643, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8706830665952863, 2);
  sqcRYGate(q, 0.686725845052633, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.100414386739625, 2);
  sqcRYGate(q, -0.5316014534293538, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0363724202971267, 1);
  sqcRYGate(q, 1.0307354694542312, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4374004987161753, 1);
  sqcRYGate(q, -0.3229592792185274, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9085513988038825, 0);
  sqcRYGate(q, 1.5780807106749306, 1);
  sqcRYGate(q, 3.0401702684521394, 2);
  sqcRYGate(q, -2.6832407195237358, 3);

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
