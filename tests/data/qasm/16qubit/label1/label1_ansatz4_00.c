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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 0.39525238202810176, 0);
  sqcRZGate(q, 3.1354882587102173, 0);
  sqcRYGate(q, -2.3649845733661077, 1);
  sqcRZGate(q, -0.004759371017049535, 1);
  sqcRYGate(q, 3.139723105463851, 2);
  sqcRZGate(q, 1.5213472721779766, 2);
  sqcRYGate(q, 3.138214801937256, 3);
  sqcRZGate(q, -1.550317200769511, 3);
  sqcRYGate(q, 2.438130581593378, 4);
  sqcRZGate(q, 1.5705433290103679, 4);
  sqcRYGate(q, 1.570775627265471, 5);
  sqcRZGate(q, -0.17133691465877565, 5);
  sqcRYGate(q, 2.767148512671028, 6);
  sqcRZGate(q, 1.5707828130093187, 6);
  sqcRYGate(q, 3.109079533974847, 7);
  sqcRZGate(q, 3.1413949729901702, 7);
  sqcRYGate(q, 3.112259622558071, 8);
  sqcRZGate(q, -3.1413688332924425, 8);
  sqcRYGate(q, -0.042574054108579056, 9);
  sqcRZGate(q, 3.1415694742767797, 9);
  sqcRYGate(q, 0.9313119023025065, 10);
  sqcRZGate(q, 3.14089945924235, 10);
  sqcRYGate(q, -1.058366759791277, 11);
  sqcRZGate(q, 0.0001033718655248094, 11);
  sqcRYGate(q, 3.0421504097165664, 12);
  sqcRZGate(q, -4.486229777889149e-06, 12);
  sqcRYGate(q, 2.938138985035077, 13);
  sqcRZGate(q, -3.141396744872139, 13);
  sqcRYGate(q, 2.180280893409029, 14);
  sqcRZGate(q, -1.570841635558855, 14);
  sqcRYGate(q, -0.03967330591726715, 15);
  sqcRZGate(q, 0.00017914585386957782, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.4877233652671844, 0);
  sqcRZGate(q, 0.004918604514851772, 0);
  sqcRYGate(q, 1.9618780282213253, 1);
  sqcRZGate(q, 1.5783097720925687, 1);
  sqcRYGate(q, 1.838901046929756, 2);
  sqcRZGate(q, 0.00011722592604890282, 2);
  sqcRYGate(q, 2.7556883210817027, 3);
  sqcRZGate(q, 8.948057445571464e-06, 3);
  sqcRYGate(q, -3.030398537625568, 4);
  sqcRZGate(q, -1.5709679269085894, 4);
  sqcRYGate(q, -1.5708225167563432, 5);
  sqcRZGate(q, -3.1407435789463967, 5);
  sqcRYGate(q, 2.738840414749981, 6);
  sqcRZGate(q, -1.5707808037587565, 6);
  sqcRYGate(q, -1.5707995675280362, 7);
  sqcRZGate(q, -0.6879412779126373, 7);
  sqcRYGate(q, 2.0218773485565964, 8);
  sqcRZGate(q, 1.5700510447698717, 8);
  sqcRYGate(q, -0.4598955197923491, 9);
  sqcRZGate(q, 1.5709723991005116, 9);
  sqcRYGate(q, 0.09721996931730903, 10);
  sqcRZGate(q, 3.1276707440469407, 10);
  sqcRYGate(q, 0.8096841015828414, 11);
  sqcRZGate(q, -3.104239730331333, 11);
  sqcRYGate(q, 0.3434324086511298, 12);
  sqcRZGate(q, -1.5708281156498316, 12);
  sqcRYGate(q, 1.9203010870979074, 13);
  sqcRZGate(q, 1.5705048940485045, 13);
  sqcRYGate(q, 1.570743915471433, 14);
  sqcRZGate(q, 2.5564453434069128, 14);
  sqcRYGate(q, -2.7995361103171508, 15);
  sqcRZGate(q, 1.57083464142841, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.8570716342348876, 0);
  sqcRZGate(q, 1.5708170386161782, 0);
  sqcRYGate(q, 1.5707942866269216, 1);
  sqcRZGate(q, -0.09892878547059443, 1);
  sqcRYGate(q, -0.09739000212173111, 2);
  sqcRZGate(q, 1.5709007955785639, 2);
  sqcRYGate(q, -0.18192623506492023, 3);
  sqcRZGate(q, 1.5708160935795101, 3);
  sqcRYGate(q, 3.121549514303071, 4);
  sqcRZGate(q, -3.1415047664333575, 4);
  sqcRYGate(q, -3.128567803900911, 5);
  sqcRZGate(q, -3.140729455288714, 5);
  sqcRYGate(q, 2.701823016543279, 6);
  sqcRZGate(q, -3.1415611875978082, 6);
  sqcRYGate(q, 1.570837455147024, 7);
  sqcRZGate(q, 1.5708439920662363, 7);
  sqcRYGate(q, 0.02663398183668697, 8);
  sqcRZGate(q, 0.0006938843464215094, 8);
  sqcRYGate(q, -3.0369091763458753, 9);
  sqcRZGate(q, -3.141480825424103, 9);
  sqcRYGate(q, -0.0136901061109462, 10);
  sqcRZGate(q, 0.01453995029324257, 10);
  sqcRYGate(q, -0.008167480494658956, 11);
  sqcRZGate(q, 3.1034632925163637, 11);
  sqcRYGate(q, -0.8554056748574697, 12);
  sqcRZGate(q, 3.8492669975620816e-05, 12);
  sqcRYGate(q, 3.0619737412075194, 13);
  sqcRZGate(q, 3.1412959831495293, 13);
  sqcRYGate(q, 1.5708430059821303, 14);
  sqcRZGate(q, -1.57081507574562, 14);
  sqcRYGate(q, -0.09710272641384511, 15);
  sqcRZGate(q, 3.14159119075728, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.833206682581828, 0);
  sqcRZGate(q, 1.017261979105098, 0);
  sqcRYGate(q, -1.570725479954582, 1);
  sqcRZGate(q, -0.5535330264886354, 1);
  sqcRYGate(q, -2.9587346213008523, 2);
  sqcRZGate(q, -2.1241105916314584, 2);
  sqcRYGate(q, 2.4729144049017893, 3);
  sqcRZGate(q, 1.0172834803114588, 3);
  sqcRYGate(q, -1.1554636221596999, 4);
  sqcRZGate(q, -2.124295525517776, 4);
  sqcRYGate(q, 1.7701261523156535, 5);
  sqcRZGate(q, 1.0173035404185171, 5);
  sqcRYGate(q, -1.1524344453672555, 6);
  sqcRZGate(q, -2.1242620587843755, 6);
  sqcRYGate(q, 0.9095747151757232, 7);
  sqcRZGate(q, 1.017313514687756, 7);
  sqcRYGate(q, -2.6173282564873563, 8);
  sqcRZGate(q, 1.0172732965035396, 8);
  sqcRYGate(q, 0.6513023798724523, 9);
  sqcRZGate(q, -2.124249984964714, 9);
  sqcRYGate(q, 2.733867933855148, 10);
  sqcRZGate(q, -2.124263813581545, 10);
  sqcRYGate(q, 3.0712769279622005, 11);
  sqcRZGate(q, -2.1249409204340406, 11);
  sqcRYGate(q, 1.0800359433368065, 12);
  sqcRZGate(q, 1.0173604321426781, 12);
  sqcRYGate(q, -0.28566688718860433, 13);
  sqcRZGate(q, 1.0173837614190626, 13);
  sqcRYGate(q, -2.5031649201615687, 14);
  sqcRZGate(q, -2.1241974496045124, 14);
  sqcRYGate(q, 0.24060022613789747, 15);
  sqcRZGate(q, -2.1242037143876535, 15);

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
