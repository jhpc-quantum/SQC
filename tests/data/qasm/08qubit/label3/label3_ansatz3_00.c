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

  sqcRYGate(q, 1.570794771499817, 0);
  sqcRZGate(q, 1.5707981446293062, 0);
  sqcRYGate(q, -1.5783205702368497, 1);
  sqcRZGate(q, -1.4884598071107629, 1);
  sqcRYGate(q, -0.6120642473088056, 2);
  sqcRZGate(q, 2.5150078156879645, 2);
  sqcRYGate(q, -3.0587544759595082, 3);
  sqcRZGate(q, 1.508476102246875, 3);
  sqcRYGate(q, -1.5707946562591006, 4);
  sqcRZGate(q, 1.8175928049712292e-05, 4);
  sqcRYGate(q, 0.10168224298973089, 5);
  sqcRZGate(q, 2.999815717730172, 5);
  sqcRYGate(q, 1.5707958357681475, 6);
  sqcRZGate(q, -1.5707960624801505, 6);
  sqcRYGate(q, 3.1119677315403367, 7);
  sqcRZGate(q, 0.16116867581453853, 7);
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
  sqcRYGate(q, 2.9031888165888646, 0);
  sqcRZGate(q, 3.1415924266493795, 0);
  sqcRYGate(q, -1.5707942350412791, 1);
  sqcRZGate(q, -1.570796559101578, 1);
  sqcRYGate(q, 0.27654080763036276, 2);
  sqcRZGate(q, 1.9354311347180462, 2);
  sqcRYGate(q, 0.9194704418589534, 3);
  sqcRZGate(q, -2.838973590059486, 3);
  sqcRYGate(q, -0.23765766282974088, 4);
  sqcRZGate(q, 1.5707285221531022, 4);
  sqcRYGate(q, 1.5707965314142096, 5);
  sqcRZGate(q, 4.010370184498236e-06, 5);
  sqcRYGate(q, -1.5708157703914187, 6);
  sqcRZGate(q, 1.3393987544621127, 6);
  sqcRYGate(q, 3.141592603843818, 7);
  sqcRZGate(q, -1.746190777484495, 7);
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
  sqcRYGate(q, 1.570797883090325, 0);
  sqcRZGate(q, -1.767394033856469, 0);
  sqcRYGate(q, 1.5707963134169918, 1);
  sqcRZGate(q, -1.4552418412869734, 1);
  sqcRYGate(q, 3.1114245287970053, 2);
  sqcRZGate(q, 0.16970476761436615, 2);
  sqcRYGate(q, 0.2200087496919858, 3);
  sqcRZGate(q, -1.7406258728900028, 3);
  sqcRYGate(q, 3.118391758758411, 4);
  sqcRZGate(q, -2.3344911056652022, 4);
  sqcRYGate(q, -0.022266426801180295, 5);
  sqcRZGate(q, -2.2885367682087128, 5);
  sqcRYGate(q, 1.5527479745150279, 6);
  sqcRZGate(q, 2.646710125317205, 6);
  sqcRYGate(q, 2.3568676396468717, 7);
  sqcRZGate(q, 1.393783955822658, 7);
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
  sqcRYGate(q, 0.8607635092129384, 0);
  sqcRZGate(q, 1.391422611594578, 0);
  sqcRYGate(q, -2.280828803884603, 1);
  sqcRZGate(q, 1.3914226587203553, 1);
  sqcRYGate(q, -0.860762823774929, 2);
  sqcRZGate(q, -1.7501695496885186, 2);
  sqcRYGate(q, -2.280829353911047, 3);
  sqcRZGate(q, 1.3914223740892722, 3);
  sqcRYGate(q, -1.2303697460713556, 4);
  sqcRZGate(q, 0.13001925049525398, 4);
  sqcRYGate(q, -1.4376303955534004, 5);
  sqcRZGate(q, -0.0639695964779321, 5);
  sqcRYGate(q, 2.2808287909011287, 6);
  sqcRZGate(q, -1.750170990335828, 6);
  sqcRYGate(q, 2.280830789938901, 7);
  sqcRZGate(q, -1.7501698596905646, 7);

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
