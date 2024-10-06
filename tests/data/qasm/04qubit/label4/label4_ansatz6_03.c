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

  sqcRYGate(q, 2.525873988927193, 0);
  sqcRYGate(q, 1.8193660304451846, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5654581111733563, 0);
  sqcRYGate(q, 1.3849450905813123, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1726149144945417, 1);
  sqcRYGate(q, 0.2855040970731916, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9464752152494103, 1);
  sqcRYGate(q, 1.8089603205994091, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.118053919054021, 2);
  sqcRYGate(q, 2.637010586672072, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2608530877903741, 2);
  sqcRYGate(q, 0.839274538524128, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3158401815332608, 0);
  sqcRYGate(q, 1.44465373747434, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.343371814257381, 0);
  sqcRYGate(q, -2.1063064575412715, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2440966428883264, 1);
  sqcRYGate(q, -1.1611437172682475, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.260604675661221, 1);
  sqcRYGate(q, 2.8994994135102177, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8361952328286717, 2);
  sqcRYGate(q, -2.787021865183374, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.14993201817538804, 2);
  sqcRYGate(q, -2.8306512067429734, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9044857654506187, 0);
  sqcRYGate(q, 2.2740522644165226, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3836332262369456, 0);
  sqcRYGate(q, -2.957370476339036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1218739892879106, 1);
  sqcRYGate(q, -0.8301814824680491, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7339924347257631, 1);
  sqcRYGate(q, 0.7478450879576882, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0321642663012485, 2);
  sqcRYGate(q, -0.6417682931607052, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6160734066726903, 2);
  sqcRYGate(q, -0.7882498490315335, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8190682233353836, 0);
  sqcRYGate(q, 0.8898860718073685, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.642647091462595, 0);
  sqcRYGate(q, 2.9229441950313677, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.16791539402167535, 1);
  sqcRYGate(q, 2.280600370525305, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5069263420017167, 1);
  sqcRYGate(q, -0.169770903834982, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7394911660902084, 2);
  sqcRYGate(q, -1.4246286002174626, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6243063435334775, 2);
  sqcRYGate(q, -2.7216668763494525, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0240099342769353, 0);
  sqcRYGate(q, -1.555059965607849, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8909642501790266, 0);
  sqcRYGate(q, 0.37548858321698236, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.939448627112383, 1);
  sqcRYGate(q, 2.231350783682363, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8630279523800617, 1);
  sqcRYGate(q, 0.9693791556026907, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1554513736763239, 2);
  sqcRYGate(q, 2.430786681931935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3702190486914674, 2);
  sqcRYGate(q, -2.669075821689916, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2610164797969361, 0);
  sqcRYGate(q, 0.1052172834081011, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5577143159142435, 0);
  sqcRYGate(q, 2.6939221948952072, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6937632157003386, 1);
  sqcRYGate(q, 0.06786083236421803, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.38282559031983515, 1);
  sqcRYGate(q, -1.3530638075922967, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5548756904669645, 2);
  sqcRYGate(q, 2.5621466544750033, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9875325502000023, 2);
  sqcRYGate(q, -1.4090149387254292, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8185465426255396, 0);
  sqcRYGate(q, 2.740174109153414, 1);
  sqcRYGate(q, 0.05521127525223335, 2);
  sqcRYGate(q, 1.0247372460302762, 3);

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
