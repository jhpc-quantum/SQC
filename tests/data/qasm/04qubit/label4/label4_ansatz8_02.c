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

  sqcRYGate(q, -0.9411402240186016, 0);
  sqcRYGate(q, -2.9192789444674436, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8358267993301727, 0);
  sqcRYGate(q, 1.237743300679849, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6324119374870518, 2);
  sqcRYGate(q, 2.531370633258006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9641458105938057, 2);
  sqcRYGate(q, 0.5400345578438426, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.938417196010095, 0);
  sqcRYGate(q, 0.6173488333390401, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6103958898975168, 0);
  sqcRYGate(q, -0.7469732934200072, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7178017032901636, 1);
  sqcRYGate(q, -0.6897850515861128, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6776485158801835, 1);
  sqcRYGate(q, -0.41030288399773235, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0059501738898255, 0);
  sqcRYGate(q, -1.336903339695729, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8046653734428304, 0);
  sqcRYGate(q, 2.2436896227085983, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0020548664202757, 2);
  sqcRYGate(q, -1.4566433256664955, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1086653541860496, 2);
  sqcRYGate(q, 0.9837042798374375, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.06499165794151233, 0);
  sqcRYGate(q, 2.2399863756149685, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4579034517154644, 0);
  sqcRYGate(q, 1.6768051685246008, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.378391535941156, 1);
  sqcRYGate(q, -1.064397613444547, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1624512791229575, 1);
  sqcRYGate(q, -1.5590138485560856, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5613444172568878, 0);
  sqcRYGate(q, 0.9181148148266098, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2073287498791787, 0);
  sqcRYGate(q, 1.4933358438396507, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9671835082816458, 2);
  sqcRYGate(q, -2.5675083123820124, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.166752019371061, 2);
  sqcRYGate(q, 1.9079685637378727, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.750245044113484, 0);
  sqcRYGate(q, 0.9620151168467553, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.26155601726597594, 0);
  sqcRYGate(q, -3.0535682165283333, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0750809705689717, 1);
  sqcRYGate(q, -2.536266185647626, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.507838028902335, 1);
  sqcRYGate(q, 0.806207369326227, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1184477317741908, 0);
  sqcRYGate(q, 2.8733414899975878, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5807746034548393, 0);
  sqcRYGate(q, -0.7933388390709526, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7338599979885663, 2);
  sqcRYGate(q, -1.1372527636277834, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7150063566369148, 2);
  sqcRYGate(q, 0.2539579330391114, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.388787615005385, 0);
  sqcRYGate(q, 3.0422415564154326, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.01009846868382, 0);
  sqcRYGate(q, 0.04254464411216485, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1582196169058614, 1);
  sqcRYGate(q, -2.357862345084368, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3264656367808432, 1);
  sqcRYGate(q, 0.5546075159482093, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6174837244500608, 0);
  sqcRYGate(q, -2.117995540149969, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.129493842518081, 0);
  sqcRYGate(q, -0.8097674977410576, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.519212030175807, 2);
  sqcRYGate(q, 0.9884655016510342, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0809546022623622, 2);
  sqcRYGate(q, -2.5355522811648403, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.940696247410986, 0);
  sqcRYGate(q, 2.1807781979956324, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3296576517638099, 0);
  sqcRYGate(q, 1.1995269936568391, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6221704975940914, 1);
  sqcRYGate(q, -2.5332684957548, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.10018803458349979, 1);
  sqcRYGate(q, -0.9998409301337521, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2563671677985626, 0);
  sqcRYGate(q, -2.417355862019902, 1);
  sqcRYGate(q, -2.137202469194426, 2);
  sqcRYGate(q, -2.4000923550376676, 3);

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
