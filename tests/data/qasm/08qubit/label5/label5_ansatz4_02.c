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

  sqcRYGate(q, -1.5707955567436427, 0);
  sqcRZGate(q, 1.5707957743286196, 0);
  sqcRYGate(q, 1.5707926198089268, 1);
  sqcRZGate(q, -2.326246913841255, 1);
  sqcRYGate(q, 1.5707990091067114, 2);
  sqcRZGate(q, 1.108965141325401, 2);
  sqcRYGate(q, 1.5708327235582284, 3);
  sqcRZGate(q, -1.5707965401980992, 3);
  sqcRYGate(q, -2.271862106632914e-06, 4);
  sqcRZGate(q, 1.5135291281068122, 4);
  sqcRYGate(q, 0.11396966404521257, 5);
  sqcRZGate(q, 1.57077692658999, 5);
  sqcRYGate(q, -1.5707971136099455, 6);
  sqcRZGate(q, 2.0480017658222325, 6);
  sqcRYGate(q, 1.5707960333178745, 7);
  sqcRZGate(q, -1.6289693196401913, 7);
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
  sqcRYGate(q, 1.594485034796247, 0);
  sqcRZGate(q, 1.8109964321882928e-05, 0);
  sqcRYGate(q, -3.977294975843386e-06, 1);
  sqcRZGate(q, 2.7313731500139373, 1);
  sqcRYGate(q, 1.735521712174262e-08, 2);
  sqcRZGate(q, 2.0326271702063154, 2);
  sqcRYGate(q, 1.57079432862162, 3);
  sqcRZGate(q, 3.141583858513341, 3);
  sqcRYGate(q, 1.22004396340708e-07, 4);
  sqcRZGate(q, 1.8520105643189095, 4);
  sqcRYGate(q, -1.5707960834839683, 5);
  sqcRZGate(q, 3.1415809970416655, 5);
  sqcRYGate(q, -1.4366871186802719, 6);
  sqcRZGate(q, 0.2530922132040585, 6);
  sqcRYGate(q, -1.7661723588689107, 7);
  sqcRZGate(q, -0.2914641449150772, 7);
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
  sqcRYGate(q, 1.4651716525472773, 0);
  sqcRZGate(q, -3.616857786070681e-05, 0);
  sqcRYGate(q, -0.060539000018932844, 1);
  sqcRZGate(q, -0.8103949977718933, 1);
  sqcRYGate(q, 1.5708053911865492, 2);
  sqcRZGate(q, -1.2261074021509812, 2);
  sqcRYGate(q, 1.5707947497372574, 3);
  sqcRZGate(q, -0.2941294142865214, 3);
  sqcRYGate(q, 1.5707960440703974, 4);
  sqcRZGate(q, 3.1415575894484653, 4);
  sqcRYGate(q, 1.5707964613212655, 5);
  sqcRZGate(q, 0.5433374256017024, 5);
  sqcRYGate(q, 1.5707861256304125, 6);
  sqcRZGate(q, 2.710251987048665, 6);
  sqcRYGate(q, -2.8148677859680964, 7);
  sqcRZGate(q, -1.5707849600029196, 7);
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
  sqcRYGate(q, -1.5707924862632705, 0);
  sqcRZGate(q, 1.9233544841770032, 0);
  sqcRYGate(q, 3.081868806123698, 1);
  sqcRZGate(q, -1.6751406152967183, 1);
  sqcRYGate(q, -3.1415918297158547, 2);
  sqcRZGate(q, 1.7804329508109777, 2);
  sqcRYGate(q, -3.14159255082687, 3);
  sqcRZGate(q, -0.29412964072426906, 3);
  sqcRYGate(q, 3.0767469729880346, 4);
  sqcRZGate(q, -3.52703889161532e-05, 4);
  sqcRYGate(q, 3.124411840360608e-08, 5);
  sqcRZGate(q, -0.45622998703102063, 5);
  sqcRYGate(q, -1.570804678704929, 6);
  sqcRZGate(q, -3.1415767924713367, 6);
  sqcRYGate(q, -1.5707966269996358, 7);
  sqcRZGate(q, 0.6167123791049898, 7);
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
  sqcRYGate(q, -1.997789007670586, 0);
  sqcRZGate(q, -2.8851294796402542, 0);
  sqcRYGate(q, -2.5161866732403837e-06, 1);
  sqcRZGate(q, 1.3869945999895406, 1);
  sqcRYGate(q, 3.1415489102061707, 2);
  sqcRZGate(q, -1.7058485310364047, 2);
  sqcRYGate(q, -1.5707952349615921, 3);
  sqcRZGate(q, 2.368150813930104, 3);
  sqcRYGate(q, -1.5707951836819474, 4);
  sqcRZGate(q, 1.570795791155839, 4);
  sqcRYGate(q, -1.5385284985790602, 5);
  sqcRZGate(q, 1.5696403628557842, 5);
  sqcRYGate(q, -1.5707896535411856, 6);
  sqcRZGate(q, 0.6668296531049682, 6);
  sqcRYGate(q, -3.1415925825393534, 7);
  sqcRZGate(q, 0.6167285559267636, 7);
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
  sqcRYGate(q, -6.679069745274545e-06, 0);
  sqcRZGate(q, -1.7070027507168164, 0);
  sqcRYGate(q, 3.1415924670828255, 1);
  sqcRZGate(q, -2.858983845950588, 1);
  sqcRYGate(q, 1.5707965059936164, 2);
  sqcRZGate(q, 2.927151018210755, 2);
  sqcRYGate(q, 7.767514372247978e-08, 3);
  sqcRZGate(q, 2.0307395571679323, 3);
  sqcRYGate(q, -1.5707952745914961, 4);
  sqcRZGate(q, -2.982674028154922, 4);
  sqcRYGate(q, 3.3903920776909504e-07, 5);
  sqcRZGate(q, 1.2634628530600258, 5);
  sqcRYGate(q, 4.029137604444344e-05, 6);
  sqcRZGate(q, -0.4373752004473603, 6);
  sqcRYGate(q, -1.570789654947378, 7);
  sqcRZGate(q, 1.9050410308125239, 7);

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
