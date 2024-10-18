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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -0.5248593343765933, 0);
  sqcRYGate(q, 0.9789519584717441, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0942320539462963, 0);
  sqcRYGate(q, -2.6922657103172267, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9306554243897462, 1);
  sqcRYGate(q, 1.8352336885214937, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.14405835057316718, 1);
  sqcRYGate(q, 0.0006123902455659191, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5011648318080244, 2);
  sqcRYGate(q, 2.261144094500721, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3580199195503528, 2);
  sqcRYGate(q, -2.6034615996673542, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3511205823627852, 3);
  sqcRYGate(q, 2.796836677773951, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0338009610329304, 3);
  sqcRYGate(q, 1.9820596830595845, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.221948802664885, 4);
  sqcRYGate(q, 1.569323132079517, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.019082026537572, 4);
  sqcRYGate(q, -0.0006119195442195746, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2477225106199317, 5);
  sqcRYGate(q, 2.837621795365078, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8589323587676785, 5);
  sqcRYGate(q, -2.4577754403184056, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.83770282920107, 6);
  sqcRYGate(q, 0.1939374121121853, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5488176730981091, 6);
  sqcRYGate(q, 0.007805905229653526, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.470756985174853, 0);
  sqcRYGate(q, 0.6288867890411769, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1372603207303755, 0);
  sqcRYGate(q, -2.925477947067573, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.31628497801950495, 1);
  sqcRYGate(q, -0.5301657626970863, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.12030792606099507, 1);
  sqcRYGate(q, -2.9983222285235, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1054074635239495, 2);
  sqcRYGate(q, -2.04239469103322, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0709308031494795, 2);
  sqcRYGate(q, 2.598064280711462, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8627727283505588, 3);
  sqcRYGate(q, -0.6651275953129865, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7421940318049316, 3);
  sqcRYGate(q, -1.5804412290380299, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.757747002549603, 4);
  sqcRYGate(q, 1.5522871117392412, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7253647186123886, 4);
  sqcRYGate(q, -2.85901729851605, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6383424873081895, 5);
  sqcRYGate(q, 1.1606635000657282, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7961508262217807, 5);
  sqcRYGate(q, -0.8847072238917324, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.122789206118404, 6);
  sqcRYGate(q, 0.2824257917962383, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4011484497202114, 6);
  sqcRYGate(q, -3.134696588182634, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.253458936888702, 0);
  sqcRYGate(q, -0.8386972228358021, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0004655367295133584, 0);
  sqcRYGate(q, -0.8270206303287956, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2269178200192253, 1);
  sqcRYGate(q, -0.4891263937523931, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.948379756345069, 1);
  sqcRYGate(q, 0.43856677814216327, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4222567081494686, 2);
  sqcRYGate(q, 0.44840214872501777, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7580863865703005, 2);
  sqcRYGate(q, -2.6762022732198205, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9494230858909054, 3);
  sqcRYGate(q, -1.4186954616924132, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1247050706746293, 3);
  sqcRYGate(q, -0.0029952101114982805, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.42307047155927, 4);
  sqcRYGate(q, -2.7955438994850064, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1398705651522962, 4);
  sqcRYGate(q, -0.03712091602039, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8164136813093372, 5);
  sqcRYGate(q, 0.5908293777303841, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.97586619739989, 5);
  sqcRYGate(q, -1.8121122149963227, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5788831637348171, 6);
  sqcRYGate(q, -1.958737330183336, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.34700556352692313, 6);
  sqcRYGate(q, 1.909587752310414, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3972948285610904, 0);
  sqcRYGate(q, -0.6687245871278745, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4172065622295269, 0);
  sqcRYGate(q, -0.24885585131208407, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6091343828177618, 1);
  sqcRYGate(q, 0.6665012736998107, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.011586807070602077, 1);
  sqcRYGate(q, -3.0855399379548523, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5762950973783054, 2);
  sqcRYGate(q, -1.3567773811305184, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.516556328255397, 2);
  sqcRYGate(q, -0.35276493678260035, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1203479000667191, 3);
  sqcRYGate(q, 1.5864338100056363, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.07112730685755775, 3);
  sqcRYGate(q, 3.141464664859169, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5860241828424966, 4);
  sqcRYGate(q, -2.8084421227342338, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1383159650489585, 4);
  sqcRYGate(q, -2.518386104792366, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7197321500037974, 5);
  sqcRYGate(q, -3.0193305520407434, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.646592292048349, 5);
  sqcRYGate(q, 0.1608517225176307, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2780138762085125, 6);
  sqcRYGate(q, 2.0177566972662593, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4923073060377186, 6);
  sqcRYGate(q, -0.7821965096997441, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8387450528021647, 0);
  sqcRYGate(q, 3.1074675598204493, 1);
  sqcRYGate(q, -3.1235188751905416, 2);
  sqcRYGate(q, 0.5713402431683479, 3);
  sqcRYGate(q, 3.140017872594811, 4);
  sqcRYGate(q, -1.0378858778833804, 5);
  sqcRYGate(q, -2.2590969509214682, 6);
  sqcRYGate(q, -1.4937968432436843, 7);

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
