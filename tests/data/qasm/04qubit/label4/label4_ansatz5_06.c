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

  sqcRYGate(q, 2.8699448350859065, 0);
  sqcRYGate(q, -0.40727446045996896, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5990294122331876, 0);
  sqcRYGate(q, -1.0732626250720054, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.045860116301723, 2);
  sqcRYGate(q, 2.549799449874712, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.954295170306469, 2);
  sqcRYGate(q, 0.8537140032149763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6560786196333046, 1);
  sqcRYGate(q, 2.079939433147982, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1111592293761108, 1);
  sqcRYGate(q, -2.3749075250908893, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6387019076557972, 0);
  sqcRYGate(q, -2.7079373000336555, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.44301479405435157, 0);
  sqcRYGate(q, 3.029156086002749, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7943550173788507, 2);
  sqcRYGate(q, 1.5551555357810294, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1578533866479978, 2);
  sqcRYGate(q, -0.5594883271392835, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.908054538273202, 1);
  sqcRYGate(q, 0.12591633413511172, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.22536930579994605, 1);
  sqcRYGate(q, 1.6537049331733364, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4648997808638988, 0);
  sqcRYGate(q, 1.0885919345328416, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6645269578235244, 0);
  sqcRYGate(q, -0.340877883727015, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9215519786001938, 2);
  sqcRYGate(q, 1.6911139983078058, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.32360048338945013, 2);
  sqcRYGate(q, -0.24687297392124918, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8045115430923375, 1);
  sqcRYGate(q, -0.2571538684691923, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.842061507547018, 1);
  sqcRYGate(q, -1.086246170163987, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8809410831095985, 0);
  sqcRYGate(q, -1.7852160873888934, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.716714866200043, 0);
  sqcRYGate(q, -1.6253802707103624, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7953991116223982, 2);
  sqcRYGate(q, -1.7608735729340257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7111602730095418, 2);
  sqcRYGate(q, 1.5856710358127097, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5206178958900392, 1);
  sqcRYGate(q, 0.7840708198966231, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.042540830779115, 1);
  sqcRYGate(q, 1.4416244324121585, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.671968865179821, 0);
  sqcRYGate(q, 1.4015446211626077, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.889136373586597, 0);
  sqcRYGate(q, -0.30913400270712366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6548522237510548, 2);
  sqcRYGate(q, -1.9686918831662874, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5292907327259675, 2);
  sqcRYGate(q, -1.8327479247115317, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7990684085722328, 1);
  sqcRYGate(q, -2.193249337123441, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.653820748762364, 1);
  sqcRYGate(q, 0.8069064863991944, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8290160224153853, 0);
  sqcRYGate(q, -1.4716377572949497, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5420535484640041, 0);
  sqcRYGate(q, -0.5786950281676464, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7157182201150873, 2);
  sqcRYGate(q, -1.3281425448765392, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.28498495118200823, 2);
  sqcRYGate(q, 1.401217633173313, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8617300534163226, 1);
  sqcRYGate(q, 2.6182154798712793, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6884812874493265, 1);
  sqcRYGate(q, -0.09764725903448923, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.837762577247446, 0);
  sqcRYGate(q, 2.5676821718545773, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6521570799609497, 0);
  sqcRYGate(q, -1.661389588144473, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5600058153445504, 2);
  sqcRYGate(q, -2.2995243610528644, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9020943288474577, 2);
  sqcRYGate(q, -0.08007358175351342, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5572616976434794, 1);
  sqcRYGate(q, -0.548946595844674, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4506835949996866, 1);
  sqcRYGate(q, -1.6697106054714101, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5381450853280514, 0);
  sqcRYGate(q, 1.7488687858357208, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0218263610472293, 0);
  sqcRYGate(q, 2.440716820632278, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9658652526453864, 2);
  sqcRYGate(q, -1.5744205339470174, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.461398011427605, 2);
  sqcRYGate(q, -1.1150767391937597, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.058126593505289, 1);
  sqcRYGate(q, 1.1870140983757074, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3043379229059677, 1);
  sqcRYGate(q, -2.060756487286226, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5850560334313855, 0);
  sqcRYGate(q, 1.470680479883625, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2749931071550304, 0);
  sqcRYGate(q, -0.1453501160750834, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.812327635818546, 2);
  sqcRYGate(q, -1.5769720557752345, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6666355019956827, 2);
  sqcRYGate(q, -0.21510543793127646, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7474699658432489, 1);
  sqcRYGate(q, -1.4120607057627872, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7165277482915027, 1);
  sqcRYGate(q, -0.7394383355051407, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6842209094986051, 0);
  sqcRYGate(q, 1.9017629468906483, 1);
  sqcRYGate(q, -0.23993440240757735, 2);
  sqcRYGate(q, -2.0292376207579395, 3);

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
