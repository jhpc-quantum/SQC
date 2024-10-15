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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 3.1415774758626065, 0);
  sqcRZGate(q, 1.2284892611047484, 0);
  sqcRYGate(q, 1.4891126839568722, 1);
  sqcRZGate(q, -1.5707993153735447, 1);
  sqcRYGate(q, 8.488359067811187e-06, 2);
  sqcRZGate(q, 2.8950296216965863, 2);
  sqcRYGate(q, 1.5707793057374433, 3);
  sqcRZGate(q, 2.685185930533893, 3);
  sqcRYGate(q, 3.1415924057029105, 4);
  sqcRZGate(q, -2.740467466107193, 4);
  sqcRYGate(q, -0.38870125535177263, 5);
  sqcRZGate(q, 3.141588754658214, 5);
  sqcRYGate(q, -0.0030350423775536684, 6);
  sqcRZGate(q, 3.1192328375374254, 6);
  sqcRYGate(q, -2.927993293995662, 7);
  sqcRZGate(q, -3.1409967309204587, 7);
  sqcRYGate(q, -3.1415834376621015, 8);
  sqcRZGate(q, -2.960172078412808, 8);
  sqcRYGate(q, -1.5045714926067586, 9);
  sqcRZGate(q, 1.5706969634556462, 9);
  sqcRYGate(q, -1.5708067795953595, 10);
  sqcRZGate(q, -0.39105342702238044, 10);
  sqcRYGate(q, -0.49425027442794717, 11);
  sqcRZGate(q, 1.570809569906885, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5475061525767728, 0);
  sqcRZGate(q, 1.5723588309171639, 0);
  sqcRYGate(q, -1.5729981325971423, 1);
  sqcRZGate(q, -3.1415775481483283, 1);
  sqcRYGate(q, 1.1047991873381404, 2);
  sqcRZGate(q, 0.9477704875751235, 2);
  sqcRYGate(q, -1.1412790145675474e-05, 3);
  sqcRZGate(q, -1.116414139766829, 3);
  sqcRYGate(q, -3.0501181688981744, 4);
  sqcRZGate(q, -3.1178888508382316, 4);
  sqcRYGate(q, 1.570821355333932, 5);
  sqcRZGate(q, -3.1311333391961886, 5);
  sqcRYGate(q, 2.6037655341660284, 6);
  sqcRZGate(q, -1.57081121782271, 6);
  sqcRYGate(q, 0.03602038850450412, 7);
  sqcRZGate(q, -1.5714108718014865, 7);
  sqcRYGate(q, -1.5707973678737792, 8);
  sqcRZGate(q, -1.6897838661150175, 8);
  sqcRYGate(q, 0.9843437361763794, 9);
  sqcRZGate(q, 3.6949644342421095e-05, 9);
  sqcRYGate(q, 1.5707774796232723, 10);
  sqcRZGate(q, -5.040289309476975e-06, 10);
  sqcRYGate(q, 0.015609064209805058, 11);
  sqcRZGate(q, -0.26498227939885766, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.1037044273736694, 0);
  sqcRZGate(q, -3.1411554998853846, 0);
  sqcRYGate(q, -1.5702831376651167, 1);
  sqcRZGate(q, 1.5692852730289708, 1);
  sqcRYGate(q, -3.1415872538345546, 2);
  sqcRZGate(q, 2.177314151674574, 2);
  sqcRYGate(q, -3.1350458438038915, 3);
  sqcRZGate(q, 3.1324285095785553, 3);
  sqcRYGate(q, 3.138259127752703, 4);
  sqcRZGate(q, -3.1177160412662785, 4);
  sqcRYGate(q, -0.0033420851631882167, 5);
  sqcRZGate(q, -1.5812955004465294, 5);
  sqcRYGate(q, 3.108344857470036, 6);
  sqcRZGate(q, -1.5707456773441704, 6);
  sqcRYGate(q, -1.731970361693243, 7);
  sqcRZGate(q, 0.49867026246559565, 7);
  sqcRYGate(q, -1.347305927999331e-05, 8);
  sqcRZGate(q, -3.022614939055253, 8);
  sqcRYGate(q, 1.570796045756349, 9);
  sqcRZGate(q, -1.5709623893653548, 9);
  sqcRYGate(q, 1.5707900764729281, 10);
  sqcRZGate(q, -0.2048768490784554, 10);
  sqcRYGate(q, -1.0720510603690059e-06, 11);
  sqcRZGate(q, -1.3058087827498, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.56617793211142, 0);
  sqcRZGate(q, 0.0005968095037252041, 0);
  sqcRYGate(q, 0.9459305629719266, 1);
  sqcRZGate(q, -0.7477606682958097, 1);
  sqcRYGate(q, 0.0030323074924541414, 2);
  sqcRZGate(q, 0.13287522784670983, 2);
  sqcRYGate(q, -2.498555352238753, 3);
  sqcRZGate(q, 1.5651522168886143, 3);
  sqcRYGate(q, 0.10481976371807565, 4);
  sqcRZGate(q, -0.19004456597896213, 4);
  sqcRYGate(q, 1.5708026469470653, 5);
  sqcRZGate(q, 0.0022482066803645685, 5);
  sqcRYGate(q, -1.5708657252522649, 6);
  sqcRZGate(q, -0.00011780806758834746, 6);
  sqcRYGate(q, 0.0003527023846885413, 7);
  sqcRZGate(q, 0.26458692372504355, 7);
  sqcRYGate(q, 1.5036703025074925, 8);
  sqcRZGate(q, 1.5707573349613346, 8);
  sqcRYGate(q, 0.10667869321321977, 9);
  sqcRZGate(q, -1.5700666605548566, 9);
  sqcRYGate(q, -3.1411448816660994, 10);
  sqcRZGate(q, 1.36592109640742, 10);
  sqcRYGate(q, 1.0279797007895546, 11);
  sqcRZGate(q, -2.254955866662705e-05, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.1202487134327055, 0);
  sqcRZGate(q, -1.5702384914647851, 0);
  sqcRYGate(q, -1.448789224266236e-05, 1);
  sqcRZGate(q, 2.3211869046585663, 1);
  sqcRYGate(q, -7.164712645391091e-08, 2);
  sqcRZGate(q, -1.3624588299109601, 2);
  sqcRYGate(q, 1.5707807688402124, 3);
  sqcRZGate(q, -3.240629079126479e-05, 3);
  sqcRYGate(q, -3.1415886580670924, 4);
  sqcRZGate(q, -1.7609132060010517, 4);
  sqcRYGate(q, -0.002574270680579159, 5);
  sqcRZGate(q, 1.7488408166134812, 5);
  sqcRYGate(q, 3.1364495940581114, 6);
  sqcRZGate(q, -2.92745547025523, 6);
  sqcRYGate(q, 3.1415912059282904, 7);
  sqcRZGate(q, -0.8075010555767559, 7);
  sqcRYGate(q, 0.08294505058352342, 8);
  sqcRZGate(q, 0.3607471013703328, 8);
  sqcRYGate(q, 3.1226555020370843, 9);
  sqcRZGate(q, -2.544405102293869, 9);
  sqcRYGate(q, 1.5707969393811458, 10);
  sqcRZGate(q, 2.158846296223996, 10);
  sqcRYGate(q, -1.5708205056821207, 11);
  sqcRZGate(q, 3.821161808152697e-05, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5708154412297588, 0);
  sqcRZGate(q, 1.9371765529795386, 0);
  sqcRYGate(q, 1.5708246570559936, 1);
  sqcRZGate(q, 0.36654440083830847, 1);
  sqcRYGate(q, -1.5708139035508308, 2);
  sqcRZGate(q, 1.937178749136991, 2);
  sqcRYGate(q, -1.5750661739900713, 3);
  sqcRZGate(q, 1.937334997606457, 3);
  sqcRYGate(q, -1.5708115574104529, 4);
  sqcRZGate(q, 1.937185311610692, 4);
  sqcRYGate(q, 4.571888383003607e-05, 5);
  sqcRZGate(q, 0.1862339506878083, 5);
  sqcRYGate(q, 4.787774898436719e-05, 6);
  sqcRZGate(q, 1.7229347333869578, 6);
  sqcRYGate(q, -1.5705869110081698, 7);
  sqcRZGate(q, -1.2039462126267948, 7);
  sqcRYGate(q, 7.36962957015308e-05, 8);
  sqcRZGate(q, 0.005687915554776537, 8);
  sqcRYGate(q, 6.820952546724668e-05, 9);
  sqcRZGate(q, -0.23007879614496446, 9);
  sqcRYGate(q, -5.2042081487687414e-05, 10);
  sqcRZGate(q, 2.919938939833236, 10);
  sqcRYGate(q, 1.5708535780040607, 11);
  sqcRZGate(q, 0.36698532289425234, 11);

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
