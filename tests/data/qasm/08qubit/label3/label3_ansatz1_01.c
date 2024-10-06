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

  sqcRYGate(q, -2.444620728873911, 0);
  sqcRZGate(q, -1.1305825022024194, 0);
  sqcRYGate(q, -3.1415925760491348, 1);
  sqcRZGate(q, 1.1199923979134723, 1);
  sqcRYGate(q, -1.570789991088153, 2);
  sqcRZGate(q, -5.592392859909978e-08, 2);
  sqcRYGate(q, -1.570796308696278, 3);
  sqcRZGate(q, -1.9668663902118835, 3);
  sqcRYGate(q, 1.5707964179795426, 4);
  sqcRZGate(q, -1.5707983856332954, 4);
  sqcRYGate(q, 2.81891283556626, 5);
  sqcRZGate(q, -6.527773965814276e-08, 5);
  sqcRYGate(q, 1.5707954931986159, 6);
  sqcRZGate(q, -3.1415926215669074, 6);
  sqcRYGate(q, 1.5707966476180137, 7);
  sqcRZGate(q, -2.760493578318604, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.334755999289695, 0);
  sqcRZGate(q, 0.622281325859202, 0);
  sqcRYGate(q, -1.6987119315995813, 1);
  sqcRZGate(q, -5.157587494863947e-07, 1);
  sqcRYGate(q, -1.5707963668098648, 2);
  sqcRZGate(q, 0.39608085575596513, 2);
  sqcRYGate(q, -2.823914960432744, 3);
  sqcRZGate(q, -7.205403780990554e-07, 3);
  sqcRYGate(q, 1.5707810631913095, 4);
  sqcRZGate(q, 3.141590093163885, 4);
  sqcRYGate(q, 1.570796324165789, 5);
  sqcRZGate(q, -3.028350644366394, 5);
  sqcRYGate(q, -1.570795913218734, 6);
  sqcRZGate(q, 8.985518360506976e-08, 6);
  sqcRYGate(q, 9.567399050780522e-08, 7);
  sqcRZGate(q, 2.7604934829479983, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.9037959390942523, 0);
  sqcRZGate(q, 3.1415906364533526, 0);
  sqcRYGate(q, 1.570796317516037, 1);
  sqcRZGate(q, -1.5707963114825243, 1);
  sqcRYGate(q, 1.5707966695513387, 2);
  sqcRZGate(q, -1.0284711438237205e-06, 2);
  sqcRYGate(q, 1.5707996641182178, 3);
  sqcRZGate(q, -1.9166404354692055, 3);
  sqcRYGate(q, -1.5938397333639376, 4);
  sqcRZGate(q, -1.5707963770327764, 4);
  sqcRYGate(q, 1.686443758213483, 5);
  sqcRZGate(q, 1.4646576945611498, 5);
  sqcRYGate(q, -1.570796455110046, 6);
  sqcRZGate(q, 1.2870434873196038e-07, 6);
  sqcRYGate(q, 1.570795246699637, 7);
  sqcRZGate(q, -3.141592642490398, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5707963154471232, 0);
  sqcRZGate(q, -0.28696628309263544, 0);
  sqcRYGate(q, -1.5707960439143513, 1);
  sqcRZGate(q, -1.5397011571663861, 1);
  sqcRYGate(q, 0.1253812096192535, 2);
  sqcRZGate(q, 1.6758220726530393, 2);
  sqcRYGate(q, -3.5493058270219535e-08, 3);
  sqcRZGate(q, -1.119924491729494, 3);
  sqcRYGate(q, -3.097300018556438, 4);
  sqcRZGate(q, 1.4657687549599654, 4);
  sqcRYGate(q, -1.5707959822183728, 5);
  sqcRZGate(q, -3.11050288369466, 5);
  sqcRYGate(q, 1.5707960625579938, 6);
  sqcRZGate(q, -0.031093103827814713, 6);
  sqcRYGate(q, -1.5707963580165014, 7);
  sqcRZGate(q, 1.6018855177912439, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.032125028363577, 0);
  sqcRZGate(q, -1.2857494298899992, 0);
  sqcRYGate(q, -1.6757712517103496, 1);
  sqcRZGate(q, -0.9971490167068257, 1);
  sqcRYGate(q, 1.539869149653576, 2);
  sqcRZGate(q, -2.57120564624972, 2);
  sqcRYGate(q, 1.5398746260868235, 3);
  sqcRZGate(q, -2.5711997787921246, 3);
  sqcRYGate(q, -1.6017182723036303, 4);
  sqcRZGate(q, -2.571201931296901, 4);
  sqcRYGate(q, -1.6757712577580186, 5);
  sqcRZGate(q, -0.9971438456224414, 5);
  sqcRYGate(q, -1.4658193081677307, 6);
  sqcRZGate(q, 2.144446274609216, 6);
  sqcRYGate(q, 1.6757732349230317, 7);
  sqcRZGate(q, 2.1444436781869887, 7);

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
