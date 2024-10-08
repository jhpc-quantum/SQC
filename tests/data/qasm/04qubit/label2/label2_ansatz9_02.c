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

  sqcRYGate(q, 2.501814536107273, 0);
  sqcRYGate(q, -2.563096766867087, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8945528126494433, 0);
  sqcRYGate(q, 2.8899639985404444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7503831816298876, 2);
  sqcRYGate(q, 1.2302686735460124, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4801765675691994, 2);
  sqcRYGate(q, -2.9177360762400877, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.673130765796267, 0);
  sqcRYGate(q, 1.6536122686250305, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6964771623199812, 0);
  sqcRYGate(q, -2.9802198591327254, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.10831823751437974, 1);
  sqcRYGate(q, 1.295204593757762, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2012458223218234, 1);
  sqcRYGate(q, 1.0747337392876872, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8421881074735893, 0);
  sqcRYGate(q, -1.8985243964974527, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.13132036911038766, 0);
  sqcRYGate(q, -1.8462048216174693, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.11938364063442, 1);
  sqcRYGate(q, -1.38196123718199, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.506338148189566, 1);
  sqcRYGate(q, 2.795843045890572, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5673270681808574, 0);
  sqcRYGate(q, -0.3297945886507865, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7710843339177536, 0);
  sqcRYGate(q, -0.03951304704640655, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8577010186699043, 2);
  sqcRYGate(q, 0.18369296218743872, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3601298707577707, 2);
  sqcRYGate(q, 0.07292522976908716, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6094491315976375, 0);
  sqcRYGate(q, 0.839134008933728, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.003638210187491, 0);
  sqcRYGate(q, -2.845783487299317, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.13100323773447986, 1);
  sqcRYGate(q, 0.6904438976617299, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.49512753976760604, 1);
  sqcRYGate(q, -1.89882866942136, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.529792032026319, 0);
  sqcRYGate(q, -1.8518663987671935, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7714913943828492, 0);
  sqcRYGate(q, -1.2083770241566842, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.1152954755011635, 1);
  sqcRYGate(q, 0.7507930333826066, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.717191827469071, 1);
  sqcRYGate(q, 0.08709038731816764, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8278602245452187, 0);
  sqcRYGate(q, -1.0274168654421612, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5101255209917052, 0);
  sqcRYGate(q, -2.2557925133720973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.36369596011916916, 2);
  sqcRYGate(q, 2.205423628551066, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.26063742492571684, 2);
  sqcRYGate(q, -1.7984532542983613, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1147111343056095, 0);
  sqcRYGate(q, 1.9441363394533255, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.953053023973372, 0);
  sqcRYGate(q, 2.0706604252226284, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6934622811282007, 1);
  sqcRYGate(q, -0.4130257748596815, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9610247486200967, 1);
  sqcRYGate(q, 1.0084136964788293, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7835524084726417, 0);
  sqcRYGate(q, 0.9385637435225714, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.49329387271185626, 0);
  sqcRYGate(q, 1.4719998994305392, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8228302312758893, 1);
  sqcRYGate(q, 1.1231613294767933, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6889302639096339, 1);
  sqcRYGate(q, 2.8987217666278084, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5364904045469685, 0);
  sqcRYGate(q, 1.4002373385086646, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4107471090909118, 0);
  sqcRYGate(q, -0.8874341454563891, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6755469740175987, 2);
  sqcRYGate(q, 0.5525473977763067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1042653674405836, 2);
  sqcRYGate(q, -3.0693952092935177, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3777993356738407, 0);
  sqcRYGate(q, -1.9651141351408905, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4120261963794629, 0);
  sqcRYGate(q, 1.9403741830829455, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.34516799708004425, 1);
  sqcRYGate(q, 0.2553295765207204, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1602698298659124, 1);
  sqcRYGate(q, 2.285392636751093, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7767948533078738, 0);
  sqcRYGate(q, -2.2515896748905266, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5844113421379626, 0);
  sqcRYGate(q, -1.0590924380840399, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.12653022066338, 1);
  sqcRYGate(q, -2.0256473166269733, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9247503715303638, 1);
  sqcRYGate(q, 1.687370425113782, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.113464166528651, 0);
  sqcRYGate(q, -2.048569982536044, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.072805491564259, 0);
  sqcRYGate(q, 1.2877773330350641, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6732740813699414, 2);
  sqcRYGate(q, 2.708158579338394, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.53459753755363, 2);
  sqcRYGate(q, 3.118063249481776, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9909978733139395, 0);
  sqcRYGate(q, 1.4878063372163888, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5773719856855704, 0);
  sqcRYGate(q, -1.4769432604269874, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8300599381045086, 1);
  sqcRYGate(q, 1.677947216679157, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3977300131856563, 1);
  sqcRYGate(q, 1.9029646979243489, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8112465227108343, 0);
  sqcRYGate(q, -1.698753446573225, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.1662360783235879, 0);
  sqcRYGate(q, -0.8922764387478708, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0220724588007473, 1);
  sqcRYGate(q, 0.4173612328067131, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.16818362762505856, 1);
  sqcRYGate(q, 1.875800187382025, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0590965860658113, 0);
  sqcRYGate(q, 2.5694998337999237, 1);
  sqcRYGate(q, 2.232417282020764, 2);
  sqcRYGate(q, -1.8266352920489197, 3);

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
