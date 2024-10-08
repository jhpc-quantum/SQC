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

  sqcRYGate(q, 1.0665119619293049, 0);
  sqcRZGate(q, 2.2463987428268135, 0);
  sqcRYGate(q, 0.026633202093886865, 1);
  sqcRZGate(q, 1.0335519836267169, 1);
  sqcRYGate(q, -1.5614460017128957, 2);
  sqcRZGate(q, -2.44788565434491, 2);
  sqcRYGate(q, 1.7353120010816434, 3);
  sqcRZGate(q, -0.1594664097730556, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.3420154833798209, 0);
  sqcRZGate(q, 0.24711964953001253, 0);
  sqcRYGate(q, -1.862989819963008, 1);
  sqcRZGate(q, 2.163178227308463, 1);
  sqcRYGate(q, 1.7223278141058298, 2);
  sqcRZGate(q, -1.6609424025413144, 2);
  sqcRYGate(q, 1.0425799681282255, 3);
  sqcRZGate(q, 0.8756147735723677, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.9780104625266541, 0);
  sqcRZGate(q, 2.8127469593043006, 0);
  sqcRYGate(q, -2.4421976588939525, 1);
  sqcRZGate(q, -0.9431850064305678, 1);
  sqcRYGate(q, -0.38190953582183285, 2);
  sqcRZGate(q, 0.8396652812804328, 2);
  sqcRYGate(q, 0.971180564127538, 3);
  sqcRZGate(q, -1.144538148378837, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.08135832778182, 0);
  sqcRZGate(q, 2.9232314331586875, 0);
  sqcRYGate(q, 1.2260187621957788, 1);
  sqcRZGate(q, 0.7692680616877531, 1);
  sqcRYGate(q, 1.5990092443152149, 2);
  sqcRZGate(q, 2.2343868678255863, 2);
  sqcRYGate(q, 0.9793290688787555, 3);
  sqcRZGate(q, -2.0864731967303634, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7264253766132907, 0);
  sqcRZGate(q, 3.1281096651626057, 0);
  sqcRYGate(q, -1.118140288465071, 1);
  sqcRZGate(q, 2.590227324634135, 1);
  sqcRYGate(q, 1.9777737381842426, 2);
  sqcRZGate(q, 0.5375333257786209, 2);
  sqcRYGate(q, 1.4935565764607162, 3);
  sqcRZGate(q, 0.528150670232499, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6766178764995305, 0);
  sqcRZGate(q, 0.6059717242639477, 0);
  sqcRYGate(q, -0.5864739614571413, 1);
  sqcRZGate(q, 0.795454788574837, 1);
  sqcRYGate(q, 2.7102699771900927, 2);
  sqcRZGate(q, -1.4791649525853223, 2);
  sqcRYGate(q, -1.5697507071548158, 3);
  sqcRZGate(q, -0.822453226245007, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.873599683162009, 0);
  sqcRZGate(q, 2.7342001021112807, 0);
  sqcRYGate(q, -0.5565004084846255, 1);
  sqcRZGate(q, 0.12302199848798119, 1);
  sqcRYGate(q, -0.42028847187307417, 2);
  sqcRZGate(q, 1.972218833651838, 2);
  sqcRYGate(q, -2.5042419395779363, 3);
  sqcRZGate(q, -0.7608989888804302, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3752706124028675, 0);
  sqcRZGate(q, -1.355522238706597, 0);
  sqcRYGate(q, 0.24424084133171942, 1);
  sqcRZGate(q, 1.1233543324842081, 1);
  sqcRYGate(q, 0.9691305940074263, 2);
  sqcRZGate(q, 2.0431052790802324, 2);
  sqcRYGate(q, 2.686344016946076, 3);
  sqcRZGate(q, -0.7392536589211655, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.8059374351935205, 0);
  sqcRZGate(q, 1.882841672374561, 0);
  sqcRYGate(q, -1.4638665710178387, 1);
  sqcRZGate(q, -2.31165315347927, 1);
  sqcRYGate(q, -1.3705550155025894, 2);
  sqcRZGate(q, 2.663565940010046, 2);
  sqcRYGate(q, -1.691997460730665, 3);
  sqcRZGate(q, -0.07981195629477991, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.9291493800311965, 0);
  sqcRZGate(q, 1.3003186736362957, 0);
  sqcRYGate(q, -2.49531090050327, 1);
  sqcRZGate(q, -1.0440907150146712, 1);
  sqcRYGate(q, 0.19006869928591996, 2);
  sqcRZGate(q, -0.7380638569656456, 2);
  sqcRYGate(q, 2.8654776317365647, 3);
  sqcRZGate(q, 2.138133203708908, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7201567932868418, 0);
  sqcRZGate(q, -2.7598038234079376, 0);
  sqcRYGate(q, -3.036386815914073, 1);
  sqcRZGate(q, 2.640478262094764, 1);
  sqcRYGate(q, -1.9584789582208206, 2);
  sqcRZGate(q, 1.6823586055910678, 2);
  sqcRYGate(q, 0.81348352488008, 3);
  sqcRZGate(q, -2.4609567031493595, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.1391568534799044, 0);
  sqcRZGate(q, 0.28122194652840005, 0);
  sqcRYGate(q, -0.5047024606146842, 1);
  sqcRZGate(q, -2.9685401821528705, 1);
  sqcRYGate(q, 0.057168853596174074, 2);
  sqcRZGate(q, -2.5107170837221333, 2);
  sqcRYGate(q, 2.530473810154152, 3);
  sqcRZGate(q, -0.5552623430133189, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0059813982693093, 0);
  sqcRZGate(q, 2.3773405395744276, 0);
  sqcRYGate(q, -1.3794855151592045, 1);
  sqcRZGate(q, 0.04657368383011478, 1);
  sqcRYGate(q, 1.7855094240582294, 2);
  sqcRZGate(q, 2.315697882806613, 2);
  sqcRYGate(q, -0.8708875571193536, 3);
  sqcRZGate(q, 3.070307209644175, 3);

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
