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

  sqcRYGate(q, 1.5787360586222157, 0);
  sqcRZGate(q, 3.116390945570805, 0);
  sqcRYGate(q, 1.52665157388468, 1);
  sqcRZGate(q, -1.559213831506029, 1);
  sqcRYGate(q, -0.055129131547154486, 2);
  sqcRZGate(q, -1.6519148679996745, 2);
  sqcRYGate(q, -3.1298909281370078, 3);
  sqcRZGate(q, 1.8599865736470553, 3);
  sqcRYGate(q, 0.03085566524804495, 4);
  sqcRZGate(q, 1.556414161423059, 4);
  sqcRYGate(q, 1.571129974305505, 5);
  sqcRZGate(q, -1.570833583058591, 5);
  sqcRYGate(q, 1.567648992938631, 6);
  sqcRZGate(q, 1.5707101966618824, 6);
  sqcRYGate(q, 1.6979285976672365, 7);
  sqcRZGate(q, -3.0144186737399994, 7);
  sqcRYGate(q, 0.02207552179691857, 8);
  sqcRZGate(q, -0.005532925323457503, 8);
  sqcRYGate(q, -0.054043197261094626, 9);
  sqcRZGate(q, 1.4668740540744956, 9);
  sqcRYGate(q, 3.1266502828940568, 10);
  sqcRZGate(q, 0.8910632751822131, 10);
  sqcRYGate(q, -3.1363624553596243, 11);
  sqcRZGate(q, 3.1214841653316276, 11);
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
  sqcRYGate(q, -1.2869986505790845, 0);
  sqcRZGate(q, -2.0624233382315795, 0);
  sqcRYGate(q, -1.8787635097130417, 1);
  sqcRZGate(q, 3.0111768404955246, 1);
  sqcRYGate(q, 1.5261235560516926, 2);
  sqcRZGate(q, 2.446927851201348, 2);
  sqcRYGate(q, -0.034675907835365116, 3);
  sqcRZGate(q, 1.1944465788800267, 3);
  sqcRYGate(q, 0.72507016432921, 4);
  sqcRZGate(q, 1.64245621473788, 4);
  sqcRYGate(q, -2.5985279752483974, 5);
  sqcRZGate(q, 1.5706678253583826, 5);
  sqcRYGate(q, -0.6481374230604198, 6);
  sqcRZGate(q, 1.5734587253892107, 6);
  sqcRYGate(q, -3.11052431669434, 7);
  sqcRZGate(q, 0.7555822184317601, 7);
  sqcRYGate(q, 1.5747648285750375, 8);
  sqcRZGate(q, -0.015801723771862508, 8);
  sqcRYGate(q, -3.093155450268953, 9);
  sqcRZGate(q, -1.5577832056231884, 9);
  sqcRYGate(q, 1.7110634099784174, 10);
  sqcRZGate(q, -0.014161786034007423, 10);
  sqcRYGate(q, -1.5755104768653565, 11);
  sqcRZGate(q, -5.009201983759235e-05, 11);
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
  sqcRYGate(q, -3.0653417688285725, 0);
  sqcRZGate(q, -0.6017782714717805, 0);
  sqcRYGate(q, 0.13915415502802286, 1);
  sqcRZGate(q, 2.999239493358746, 1);
  sqcRYGate(q, -3.140564040086509, 2);
  sqcRZGate(q, 2.406747519318548, 2);
  sqcRYGate(q, 0.06693561039568063, 3);
  sqcRZGate(q, -1.7858089982764618, 3);
  sqcRYGate(q, 1.6898231893769378e-05, 4);
  sqcRZGate(q, -1.497486072510554, 4);
  sqcRYGate(q, -1.571141399608429, 5);
  sqcRZGate(q, -1.07405283316742, 5);
  sqcRYGate(q, 3.11583057323926, 6);
  sqcRZGate(q, 0.0021547507965973267, 6);
  sqcRYGate(q, 1.6723181608874216, 7);
  sqcRZGate(q, -0.9287207838595458, 7);
  sqcRYGate(q, -0.0006022284940150305, 8);
  sqcRZGate(q, -3.12586220462055, 8);
  sqcRYGate(q, -3.0717262752933614, 9);
  sqcRZGate(q, 0.6634592978724844, 9);
  sqcRYGate(q, -3.1198237836593106, 10);
  sqcRZGate(q, 2.3263893552766803, 10);
  sqcRYGate(q, -1.5707126509290648, 11);
  sqcRZGate(q, 2.343947534749257, 11);
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
  sqcRYGate(q, -1.9087344120823098, 0);
  sqcRZGate(q, -1.8090899520168726, 0);
  sqcRYGate(q, -3.1226403405789696, 1);
  sqcRZGate(q, 1.361310518810412, 1);
  sqcRYGate(q, -1.615772916455435, 2);
  sqcRZGate(q, -1.5172572610701636, 2);
  sqcRYGate(q, -0.00039927063034448344, 3);
  sqcRZGate(q, -2.873742692905996, 3);
  sqcRYGate(q, -3.1415546126947924, 4);
  sqcRZGate(q, 2.939641342035, 4);
  sqcRYGate(q, -3.1415529544955145, 5);
  sqcRZGate(q, 1.7205387344442373, 5);
  sqcRYGate(q, -1.5737579132192094, 6);
  sqcRZGate(q, 1.228294268695949, 6);
  sqcRYGate(q, -1.4191939080809846e-05, 7);
  sqcRZGate(q, -2.47784152940836, 7);
  sqcRYGate(q, 1.5666983586693117, 8);
  sqcRZGate(q, -1.8849260537748664, 8);
  sqcRYGate(q, 0.00023872292747206814, 9);
  sqcRZGate(q, 0.5936373724604616, 9);
  sqcRYGate(q, 3.141269886613763, 10);
  sqcRZGate(q, -2.700917220227877, 10);
  sqcRYGate(q, 0.0003509154338932064, 11);
  sqcRZGate(q, -1.0904778689810313, 11);

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
