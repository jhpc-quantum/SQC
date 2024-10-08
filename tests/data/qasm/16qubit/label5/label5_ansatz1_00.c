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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -1.5708031167388627, 0);
  sqcRZGate(q, 1.9104018525315336, 0);
  sqcRYGate(q, 2.3544098558120594, 1);
  sqcRZGate(q, -1.7791214788042593, 1);
  sqcRYGate(q, -1.5707836030760254, 2);
  sqcRZGate(q, 0.22808753352412392, 2);
  sqcRYGate(q, -1.570796064066446, 3);
  sqcRZGate(q, 1.5707988174676661, 3);
  sqcRYGate(q, 0.026933371793690597, 4);
  sqcRZGate(q, 0.000800289820419131, 4);
  sqcRYGate(q, -1.5708070590743173, 5);
  sqcRZGate(q, -1.3391045047774306, 5);
  sqcRYGate(q, 1.5707756439182754, 6);
  sqcRZGate(q, 1.570068433422406, 6);
  sqcRYGate(q, -1.5707970001104008, 7);
  sqcRZGate(q, 1.8583369259291738, 7);
  sqcRYGate(q, -1.5709038944113676, 8);
  sqcRZGate(q, 0.5735961095290758, 8);
  sqcRYGate(q, -1.5707902917137888, 9);
  sqcRZGate(q, -1.5707904779946276, 9);
  sqcRYGate(q, 1.9127720238260932, 10);
  sqcRZGate(q, 2.5593389475425368, 10);
  sqcRYGate(q, 1.5708074003083938, 11);
  sqcRZGate(q, 1.5707993824540223, 11);
  sqcRYGate(q, 0.5884573178627736, 12);
  sqcRZGate(q, -1.485284658862795, 12);
  sqcRYGate(q, 1.5708330351603186, 13);
  sqcRZGate(q, 1.5704602542170087, 13);
  sqcRYGate(q, 0.844209755657489, 14);
  sqcRZGate(q, 0.032146173102236164, 14);
  sqcRYGate(q, -1.570738767132634, 15);
  sqcRZGate(q, 2.113707345055492, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.21893402292662573, 0);
  sqcRZGate(q, -1.8839139140107823, 0);
  sqcRYGate(q, 1.5707966391813049, 1);
  sqcRZGate(q, -1.3132453845647698, 1);
  sqcRYGate(q, -1.5707964057553, 2);
  sqcRZGate(q, 1.570793514563773, 2);
  sqcRYGate(q, 1.6550705045947591, 3);
  sqcRZGate(q, 1.5707934740572576, 3);
  sqcRYGate(q, 1.5708089153799718, 4);
  sqcRZGate(q, 0.060138747171404994, 4);
  sqcRYGate(q, -3.1406822806922357, 5);
  sqcRZGate(q, -0.6314827832214011, 5);
  sqcRYGate(q, 1.5708047503440876, 6);
  sqcRZGate(q, 0.7094211115502359, 6);
  sqcRYGate(q, -3.141358690303347, 7);
  sqcRZGate(q, -2.8548657197510936, 7);
  sqcRYGate(q, 3.174551138229731e-05, 8);
  sqcRZGate(q, 0.9968313233799062, 8);
  sqcRYGate(q, -1.571230965251822, 9);
  sqcRZGate(q, -3.14158575680023, 9);
  sqcRYGate(q, 7.569765280379671e-06, 10);
  sqcRZGate(q, -2.346160722295932, 10);
  sqcRYGate(q, 1.5711080153752326, 11);
  sqcRZGate(q, -1.6957889146240746e-06, 11);
  sqcRYGate(q, 1.570887647693338, 12);
  sqcRZGate(q, 0.011115483198122613, 12);
  sqcRYGate(q, 3.013172807330305, 13);
  sqcRZGate(q, -1.571135584156759, 13);
  sqcRYGate(q, 1.5707945592738373, 14);
  sqcRZGate(q, 1.5707788212256122, 14);
  sqcRYGate(q, -3.141413325055743, 15);
  sqcRZGate(q, -1.891595747140613, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.26324509699858667, 0);
  sqcRZGate(q, -3.1388786300100002, 0);
  sqcRYGate(q, -2.4762775971964857e-06, 1);
  sqcRZGate(q, -0.24356591937422412, 1);
  sqcRYGate(q, -1.570795087391328, 2);
  sqcRZGate(q, 0.004978638525924062, 2);
  sqcRYGate(q, -2.6742247166475877, 3);
  sqcRZGate(q, 1.5707934802615169, 3);
  sqcRYGate(q, 0.28494606197212796, 4);
  sqcRZGate(q, 1.5709918993114582, 4);
  sqcRYGate(q, -1.5707997865617926, 5);
  sqcRZGate(q, -1.570795666608137, 5);
  sqcRYGate(q, -0.16649272103421706, 6);
  sqcRZGate(q, -2.2733440572142607, 6);
  sqcRYGate(q, 1.5701085634494714, 7);
  sqcRZGate(q, -0.7076226267636226, 7);
  sqcRYGate(q, -1.5707095808066702, 8);
  sqcRZGate(q, 2.9280837015925507, 8);
  sqcRYGate(q, 0.5750355199098109, 9);
  sqcRZGate(q, 1.5707919724802064, 9);
  sqcRYGate(q, 1.5707860028488472, 10);
  sqcRZGate(q, -1.5707838858843752, 10);
  sqcRYGate(q, 0.7665829576167341, 11);
  sqcRZGate(q, -1.5707914819355147, 11);
  sqcRYGate(q, -2.5705426806324065, 12);
  sqcRZGate(q, 1.5798600858106215, 12);
  sqcRYGate(q, -1.5707918096439073, 13);
  sqcRZGate(q, 1.5707962414923404, 13);
  sqcRYGate(q, -1.570816038761398, 14);
  sqcRZGate(q, 2.4126058975900904, 14);
  sqcRYGate(q, 3.605900413194973e-05, 15);
  sqcRZGate(q, 0.2633142351269306, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -3.0691576930540396, 0);
  sqcRZGate(q, 2.2141212718389185, 0);
  sqcRYGate(q, 5.780336875861334e-07, 1);
  sqcRZGate(q, -3.1242934011155583, 1);
  sqcRYGate(q, -1.480113653398797, 2);
  sqcRZGate(q, -0.9487880307959057, 2);
  sqcRYGate(q, -1.5708006936954984, 3);
  sqcRZGate(q, 1.6020394582316888, 3);
  sqcRYGate(q, -1.5708485861316364, 4);
  sqcRZGate(q, -2.5208947284920895, 4);
  sqcRYGate(q, 1.5707984485432396, 5);
  sqcRZGate(q, -3.1100789677410376, 5);
  sqcRYGate(q, 1.570796431087, 6);
  sqcRZGate(q, -0.9497191588068148, 6);
  sqcRYGate(q, 1.570794960946957, 7);
  sqcRZGate(q, 0.031317688854307406, 7);
  sqcRYGate(q, 1.5707995126198764, 8);
  sqcRZGate(q, -0.9489305427520738, 8);
  sqcRYGate(q, -1.570802960668213, 9);
  sqcRZGate(q, 0.03165066494164796, 9);
  sqcRYGate(q, -1.4993544697559171, 10);
  sqcRZGate(q, 2.1926581356815698, 10);
  sqcRYGate(q, -1.5707943240814526, 11);
  sqcRZGate(q, -1.5391715541786448, 11);
  sqcRYGate(q, -1.570795433638125, 12);
  sqcRZGate(q, -2.5196436496845176, 12);
  sqcRYGate(q, 1.570795643020392, 13);
  sqcRZGate(q, -3.110298539998387, 13);
  sqcRYGate(q, 1.5707958417856052, 14);
  sqcRZGate(q, -0.9488725781500652, 14);
  sqcRYGate(q, 3.141589140521533, 15);
  sqcRZGate(q, 1.0016719969885246, 15);

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
