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

  sqcRYGate(q, 2.795100476363728, 0);
  sqcRZGate(q, 1.2129426744895715, 0);
  sqcRYGate(q, 1.37893213072164, 1);
  sqcRZGate(q, 2.571121415654347, 1);
  sqcRYGate(q, 0.0045808158522842035, 2);
  sqcRZGate(q, 2.3375858046983335, 2);
  sqcRYGate(q, -1.5825804656258207, 3);
  sqcRZGate(q, 1.349875549899557, 3);
  sqcRYGate(q, 0.24011160505955623, 4);
  sqcRZGate(q, -2.1094362544465084, 4);
  sqcRYGate(q, 2.879607183891317, 5);
  sqcRZGate(q, 0.2029124939672146, 5);
  sqcRYGate(q, 1.6221457858467323, 6);
  sqcRZGate(q, 1.1115900652087085, 6);
  sqcRYGate(q, 3.141576099485606, 7);
  sqcRZGate(q, 2.105279550456811, 7);
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
  sqcRYGate(q, 1.8329158061120736, 0);
  sqcRZGate(q, 0.3300475069018276, 0);
  sqcRYGate(q, 0.0002487516984874815, 1);
  sqcRZGate(q, -3.0689560048820095, 1);
  sqcRYGate(q, 3.141539291571303, 2);
  sqcRZGate(q, 0.5887914122362404, 2);
  sqcRYGate(q, -0.0007789278785662418, 3);
  sqcRZGate(q, -0.7062244193986716, 3);
  sqcRYGate(q, 0.05295186477948022, 4);
  sqcRZGate(q, -1.3322967731879003, 4);
  sqcRYGate(q, -1.5728067637349923, 5);
  sqcRZGate(q, 2.347714014442242, 5);
  sqcRYGate(q, 0.1385061361713538, 6);
  sqcRZGate(q, -2.742647252456596, 6);
  sqcRYGate(q, 1.5692496636502666, 7);
  sqcRZGate(q, -1.7693717883968532, 7);
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
  sqcRYGate(q, 0.6551532093408392, 0);
  sqcRZGate(q, 0.7331592993110645, 0);
  sqcRYGate(q, 1.8322682333337161, 1);
  sqcRZGate(q, 1.0948008554044288, 1);
  sqcRYGate(q, -2.1112701244379166, 2);
  sqcRZGate(q, 3.118592114943742, 2);
  sqcRYGate(q, -2.796963556720645, 3);
  sqcRZGate(q, -2.6769907651344877, 3);
  sqcRYGate(q, 1.5701949450117825, 4);
  sqcRZGate(q, -1.157336841606666, 4);
  sqcRYGate(q, 1.570769085980972, 5);
  sqcRZGate(q, -1.5709502576539416, 5);
  sqcRYGate(q, -0.5172153314785897, 6);
  sqcRZGate(q, 0.44818646316006033, 6);
  sqcRYGate(q, -4.072843628662751e-05, 7);
  sqcRZGate(q, -2.7319942481985726, 7);
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
  sqcRYGate(q, -0.6119947217747866, 0);
  sqcRZGate(q, 0.22496775014157855, 0);
  sqcRYGate(q, 3.1415708548270507, 1);
  sqcRZGate(q, -3.042390772951701, 1);
  sqcRYGate(q, -3.1409512708331357, 2);
  sqcRZGate(q, -2.9338529871941494, 2);
  sqcRYGate(q, -0.00010530720261670012, 3);
  sqcRZGate(q, -1.3542756564459033, 3);
  sqcRYGate(q, -7.899226086660605e-05, 4);
  sqcRZGate(q, -1.9724146285170507, 4);
  sqcRYGate(q, -1.570782975005745, 5);
  sqcRZGate(q, 1.5924372643882094, 5);
  sqcRYGate(q, -0.0024329630004925004, 6);
  sqcRZGate(q, -1.5380196518823799, 6);
  sqcRYGate(q, 3.091059065243762, 7);
  sqcRZGate(q, -0.13289426048814246, 7);
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
  sqcRYGate(q, -1.7216113116086222, 0);
  sqcRZGate(q, 1.4673649430762286, 0);
  sqcRYGate(q, 2.8937707125277377, 1);
  sqcRZGate(q, 2.525333136057372, 1);
  sqcRYGate(q, 0.912096921413962, 2);
  sqcRZGate(q, -0.7335034130771161, 2);
  sqcRYGate(q, -1.5708648437751034, 3);
  sqcRZGate(q, 1.1420041342201668, 3);
  sqcRYGate(q, -1.596797902727761, 4);
  sqcRZGate(q, -2.6382222166377014, 4);
  sqcRYGate(q, 1.5575353325130346, 5);
  sqcRZGate(q, -0.5738519804043619, 5);
  sqcRYGate(q, 2.1613658030048155, 6);
  sqcRZGate(q, -1.8860931108929737, 6);
  sqcRYGate(q, 3.141437329586284, 7);
  sqcRZGate(q, 2.843094672697324, 7);
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
  sqcRYGate(q, 2.2554691471207047, 0);
  sqcRZGate(q, -1.874621534550001, 0);
  sqcRYGate(q, -3.0301060018204926, 1);
  sqcRZGate(q, -0.14120602338729338, 1);
  sqcRYGate(q, -3.1411135239999357, 2);
  sqcRZGate(q, -1.2019396875043244, 2);
  sqcRYGate(q, -0.000354670548447622, 3);
  sqcRZGate(q, -2.018132257234429, 3);
  sqcRYGate(q, -3.1415711120565524, 4);
  sqcRZGate(q, 1.3830842129523715, 4);
  sqcRYGate(q, -1.5709099896390448, 5);
  sqcRZGate(q, 0.5669381869032463, 5);
  sqcRYGate(q, -3.140989190821942, 6);
  sqcRZGate(q, 2.6346876198426346, 6);
  sqcRYGate(q, -0.06639984673179099, 7);
  sqcRZGate(q, 0.22571309739977596, 7);
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
  sqcRYGate(q, -1.5865760474296056, 0);
  sqcRZGate(q, 1.0458400948602016, 0);
  sqcRYGate(q, 2.810716205698562, 1);
  sqcRZGate(q, -0.8514912522051858, 1);
  sqcRYGate(q, 2.649432563579862, 2);
  sqcRZGate(q, -1.2960685582320899, 2);
  sqcRYGate(q, 0.30894665155514023, 3);
  sqcRZGate(q, -0.5572792539340982, 3);
  sqcRYGate(q, 0.277757925083639, 4);
  sqcRZGate(q, 0.9802070730487428, 4);
  sqcRYGate(q, 0.44632340263691006, 5);
  sqcRZGate(q, 1.261007793895612, 5);
  sqcRYGate(q, -1.6744405449828539, 6);
  sqcRZGate(q, -0.5140034070832252, 6);
  sqcRYGate(q, 1.9694261780860032, 7);
  sqcRZGate(q, 1.9218181449172098, 7);

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
