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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -0.19311943434102116, 0);
  sqcRYGate(q, 2.882961095693018, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3277584360004564, 0);
  sqcRYGate(q, -1.5396599557769814, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3577596296280181, 1);
  sqcRYGate(q, -1.3156935898547006, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5666491226712536, 1);
  sqcRYGate(q, -0.6177048336588495, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0011512900202266, 2);
  sqcRYGate(q, -1.294894939453222, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6205480113208992, 2);
  sqcRYGate(q, 1.5081577153046068, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.02448126730008582, 3);
  sqcRYGate(q, 2.4589005762076073, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.133909620542852, 3);
  sqcRYGate(q, -3.0940619866059853, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6115551274730802, 4);
  sqcRYGate(q, -2.447568172120272, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7101559007970825, 4);
  sqcRYGate(q, 1.703170400811052, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2192216564129783, 5);
  sqcRYGate(q, 0.5524711883916344, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.004835330175439552, 5);
  sqcRYGate(q, -3.1410288443345906, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.802968338989141, 6);
  sqcRYGate(q, 1.9100265893989725, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7808445973914813, 6);
  sqcRYGate(q, -0.8349573599593008, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8599052829018508, 7);
  sqcRYGate(q, 0.946889842913224, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.012510102512154394, 7);
  sqcRYGate(q, 0.006880313913867378, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.3798450478124655, 8);
  sqcRYGate(q, 2.9975020994354153, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.7534376633826624, 8);
  sqcRYGate(q, -2.345674377684785, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8311820736754483, 9);
  sqcRYGate(q, 1.5398100853270522, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6006341380084257, 9);
  sqcRYGate(q, 0.7749946050902675, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.6649525025428353, 10);
  sqcRYGate(q, -0.5007974381357172, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5765846719415827, 10);
  sqcRYGate(q, 0.7566185513462578, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.5940641500203885, 0);
  sqcRYGate(q, -1.0069444892667203, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1850622496388468, 0);
  sqcRYGate(q, 3.0960222523077316, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1105383816223466, 1);
  sqcRYGate(q, -2.150813167784137, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.13473243649295827, 1);
  sqcRYGate(q, 1.269385009121758, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.069474211718453, 2);
  sqcRYGate(q, -0.6100023033114148, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.009580280537370802, 2);
  sqcRYGate(q, 0.07865568974991177, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7825764585724371, 3);
  sqcRYGate(q, 1.2419849744958595, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.001831672240566462, 3);
  sqcRYGate(q, -3.091466820081203, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.708534196956113, 4);
  sqcRYGate(q, 0.19464287589509688, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7938472900265703, 4);
  sqcRYGate(q, -1.4162436131404792, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.341107535803132, 5);
  sqcRYGate(q, -2.9284450434920877, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.127304408694726, 5);
  sqcRYGate(q, 0.07940505103492868, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5148818096820864, 6);
  sqcRYGate(q, 1.6380842896498704, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6926632730631483, 6);
  sqcRYGate(q, -1.446705673587391, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.464067178664389, 7);
  sqcRYGate(q, 0.08555693677890006, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.021113488881591834, 7);
  sqcRYGate(q, 0.05966297916349277, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.876045220597444, 8);
  sqcRYGate(q, -1.8821118926954181, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.2103801448744638, 8);
  sqcRYGate(q, 1.5645184884725378, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.06449776753222095, 9);
  sqcRYGate(q, 2.0456653528750754, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.1384895754230073, 9);
  sqcRYGate(q, 3.1313983547294413, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.912168749351247, 10);
  sqcRYGate(q, -2.4352417079147832, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.359971893723227, 10);
  sqcRYGate(q, 0.9202623587305014, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.8397288906550895, 0);
  sqcRYGate(q, 0.26317523928231884, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4591266954503235, 0);
  sqcRYGate(q, 0.21863232155882087, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5833706460959016, 1);
  sqcRYGate(q, -1.5597240046793672, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.091334574368862, 1);
  sqcRYGate(q, 2.8150774769393037, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1457218927158297, 2);
  sqcRYGate(q, 0.8450628766314434, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.03115707569259385, 2);
  sqcRYGate(q, 0.008847281379837308, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8494853105992588, 3);
  sqcRYGate(q, 0.024251830477406425, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.05969649981751542, 3);
  sqcRYGate(q, 0.009362241108142353, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5909801513435031, 4);
  sqcRYGate(q, -1.5723131857013781, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.518252100133962, 4);
  sqcRYGate(q, -0.00236043369628856, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0384040080513968, 5);
  sqcRYGate(q, 2.3387167624395766, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5624639260890814, 5);
  sqcRYGate(q, -0.0011612020681550802, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3181784815543252, 6);
  sqcRYGate(q, -1.5673227783391888, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5836090407878953, 6);
  sqcRYGate(q, -0.04003997130696302, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.124718729918181, 7);
  sqcRYGate(q, -0.04899932901474635, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.0941663067956067, 7);
  sqcRYGate(q, 3.095259490239901, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.580830888942022, 8);
  sqcRYGate(q, -3.0328174564990373, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5721821806843579, 8);
  sqcRYGate(q, -1.5706812085969686, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.764176996813663, 9);
  sqcRYGate(q, -0.7820423557055491, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.20430561808385914, 9);
  sqcRYGate(q, 3.0887694629974995, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3168860796855855, 10);
  sqcRYGate(q, 1.0751134086287277, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.319935530357248, 10);
  sqcRYGate(q, 1.7199374147236726, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.9352811704300056, 0);
  sqcRYGate(q, -1.2161407085636906, 1);
  sqcRYGate(q, 1.9544982613503197, 2);
  sqcRYGate(q, 0.61113995194791, 3);
  sqcRYGate(q, -1.6286027782524208, 4);
  sqcRYGate(q, 0.13537302843052057, 5);
  sqcRYGate(q, -2.7347940486732116, 6);
  sqcRYGate(q, -2.48955403094169, 7);
  sqcRYGate(q, 0.6596563639339323, 8);
  sqcRYGate(q, -0.8945716980304983, 9);
  sqcRYGate(q, 2.34149882734613, 10);
  sqcRYGate(q, -1.0812728052394425, 11);

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
