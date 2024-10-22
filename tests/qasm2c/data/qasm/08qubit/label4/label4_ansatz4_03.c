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

  sqcRYGate(q, 1.003274299478738e-07, 0);
  sqcRZGate(q, -0.9444587494571443, 0);
  sqcRYGate(q, 1.5707869334516067, 1);
  sqcRZGate(q, -3.141586981702139, 1);
  sqcRYGate(q, 2.785849254769109, 2);
  sqcRZGate(q, 1.1891053083993786, 2);
  sqcRYGate(q, 9.500710676886328e-08, 3);
  sqcRZGate(q, -0.07156769779199693, 3);
  sqcRYGate(q, -0.004984408129647733, 4);
  sqcRZGate(q, -0.6899848238072703, 4);
  sqcRYGate(q, -1.5707998495907995, 5);
  sqcRZGate(q, 3.1415898327856753, 5);
  sqcRYGate(q, 0.18317304631788645, 6);
  sqcRZGate(q, -3.1415908520820826, 6);
  sqcRYGate(q, -1.5707954317902957, 7);
  sqcRZGate(q, 2.859125871806308, 7);
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
  sqcRYGate(q, -1.5707947064307812, 0);
  sqcRZGate(q, -1.5707964878688498, 0);
  sqcRYGate(q, 1.5707971404485424, 1);
  sqcRZGate(q, -0.6943500729997659, 1);
  sqcRYGate(q, 2.7084380678545177, 2);
  sqcRZGate(q, 2.704583993837053, 2);
  sqcRYGate(q, -1.4281181080933296e-07, 3);
  sqcRZGate(q, -0.0850937573891691, 3);
  sqcRYGate(q, 3.14145208293669, 4);
  sqcRZGate(q, -2.2584193130798718, 4);
  sqcRYGate(q, -1.5708013302025297, 5);
  sqcRZGate(q, -1.5707963489442887, 5);
  sqcRYGate(q, -1.570785248402406, 6);
  sqcRZGate(q, 1.6553430120438826, 6);
  sqcRYGate(q, -1.1667190519059339e-05, 7);
  sqcRZGate(q, 2.5822256046514944, 7);
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
  sqcRYGate(q, 1.5707965468033445, 0);
  sqcRZGate(q, -2.7617067969801137, 0);
  sqcRYGate(q, 0.03035275066686348, 1);
  sqcRZGate(q, 3.141561710804604, 1);
  sqcRYGate(q, -1.3389414457165572e-06, 2);
  sqcRZGate(q, -0.8641044599489449, 2);
  sqcRYGate(q, -1.5707961915217306, 3);
  sqcRZGate(q, -1.7472886917353057, 3);
  sqcRYGate(q, -1.570794653851756, 4);
  sqcRZGate(q, -0.07315786362644273, 4);
  sqcRYGate(q, -1.5707965018529784, 5);
  sqcRZGate(q, -2.5413885820834814, 5);
  sqcRYGate(q, 1.0775663895497543, 6);
  sqcRZGate(q, -1.6109131372469676, 6);
  sqcRYGate(q, -3.141592210543761, 7);
  sqcRZGate(q, 3.1023343396976215, 7);
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
  sqcRYGate(q, -9.561425722282024e-07, 0);
  sqcRZGate(q, -0.3798872081286727, 0);
  sqcRYGate(q, -1.5707965245078404, 1);
  sqcRZGate(q, -1.7278044432221429, 1);
  sqcRYGate(q, -3.1415925213174702, 2);
  sqcRZGate(q, -2.8719085070476686, 2);
  sqcRYGate(q, -3.141592302211681, 3);
  sqcRZGate(q, -1.7472878136999421, 3);
  sqcRYGate(q, -3.1415926101646714, 4);
  sqcRZGate(q, -2.775762276774449, 4);
  sqcRYGate(q, 3.1415924952844514, 5);
  sqcRZGate(q, 1.9359273343004677, 5);
  sqcRYGate(q, 1.5707949824442673, 6);
  sqcRZGate(q, 1.5708067286594953, 6);
  sqcRYGate(q, 0.0001903247358597419, 7);
  sqcRZGate(q, -1.42637459115981, 7);
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
  sqcRYGate(q, 1.5707982793614594, 0);
  sqcRZGate(q, 1.570778874794672, 0);
  sqcRYGate(q, 2.949800035788596, 1);
  sqcRZGate(q, 2.981701652024999, 1);
  sqcRYGate(q, -1.5707960117139788, 2);
  sqcRZGate(q, -1.5707915353872655, 2);
  sqcRYGate(q, 1.5707993788794261, 3);
  sqcRZGate(q, 2.9252572202610536, 3);
  sqcRYGate(q, -1.5707824289685899, 4);
  sqcRZGate(q, 1.1697587479098106e-05, 4);
  sqcRYGate(q, 3.1415848988422215, 5);
  sqcRZGate(q, -2.128410202677384, 5);
  sqcRYGate(q, 1.5707809091377003, 6);
  sqcRZGate(q, -3.0670955748576567, 6);
  sqcRYGate(q, 3.1415654510292783, 7);
  sqcRZGate(q, -0.06196869186329313, 7);
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
  sqcRYGate(q, 1.5707964768709548, 0);
  sqcRZGate(q, 5.7918164059995286e-08, 0);
  sqcRYGate(q, 1.5707966859104925, 1);
  sqcRZGate(q, 3.141592603701448, 1);
  sqcRYGate(q, 2.780017121812482, 2);
  sqcRZGate(q, 4.4631495246250105e-06, 2);
  sqcRYGate(q, 2.408655644521402e-08, 3);
  sqcRZGate(q, 1.095558765455357, 3);
  sqcRYGate(q, 1.5707975080211147, 4);
  sqcRZGate(q, -1.157721278935024, 4);
  sqcRYGate(q, 5.651471557399646e-08, 5);
  sqcRZGate(q, -1.2482559545082612, 5);
  sqcRYGate(q, -0.05269069421437589, 6);
  sqcRZGate(q, -1.5708067851537566, 6);
  sqcRYGate(q, -5.608202408817929e-05, 7);
  sqcRZGate(q, -0.5618304233109258, 7);
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
  sqcRYGate(q, 1.5707949615991714, 0);
  sqcRZGate(q, -0.5119206401300134, 0);
  sqcRYGate(q, -1.5707964375050452, 1);
  sqcRZGate(q, -1.9699153075070461, 1);
  sqcRYGate(q, -1.5707962034831562, 2);
  sqcRZGate(q, -0.5119214952053596, 2);
  sqcRYGate(q, 3.1415918958180837, 3);
  sqcRZGate(q, -2.6614856052976035, 3);
  sqcRYGate(q, 3.1415921145976973, 4);
  sqcRZGate(q, 1.4719499176945874, 4);
  sqcRYGate(q, 1.570796384056867, 5);
  sqcRZGate(q, -1.9699135849499723, 5);
  sqcRYGate(q, 1.57079619200335, 6);
  sqcRZGate(q, 2.6296713647479324, 6);
  sqcRYGate(q, -1.5707961744894394, 7);
  sqcRZGate(q, 2.742475486133719, 7);

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
