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

  sqcRYGate(q, -0.9886436733152104, 0);
  sqcRZGate(q, 1.4841710518386293, 0);
  sqcRYGate(q, -0.12603378884171157, 1);
  sqcRZGate(q, -1.6143812072614727, 1);
  sqcRYGate(q, -3.058947206993795, 2);
  sqcRZGate(q, -2.578055425566116, 2);
  sqcRYGate(q, 0.05598355282330498, 3);
  sqcRZGate(q, -2.400928114167423, 3);
  sqcRYGate(q, 2.3518120711658828, 4);
  sqcRZGate(q, -3.0057243460457945, 4);
  sqcRYGate(q, 1.5941724451114696, 5);
  sqcRZGate(q, 1.5926771631750274, 5);
  sqcRYGate(q, -1.565932825492536, 6);
  sqcRZGate(q, 1.5673399855845007, 6);
  sqcRYGate(q, 3.1411462095796985, 7);
  sqcRZGate(q, 1.954813959405402, 7);
  sqcRYGate(q, 0.32203668386619905, 8);
  sqcRZGate(q, -1.5687578049591995, 8);
  sqcRYGate(q, -1.5709804926403352, 9);
  sqcRZGate(q, 1.5711493918766906, 9);
  sqcRYGate(q, 1.571197745417754, 10);
  sqcRZGate(q, 1.005095020687837, 10);
  sqcRYGate(q, 3.102019195481846, 11);
  sqcRZGate(q, 0.97838672472859, 11);
  sqcRYGate(q, -0.10675233070075096, 12);
  sqcRZGate(q, -2.996447443289721, 12);
  sqcRYGate(q, -0.06407905452267393, 13);
  sqcRZGate(q, -1.3350038277743677, 13);
  sqcRYGate(q, -1.4501831348924954, 14);
  sqcRZGate(q, -2.1279023503420595, 14);
  sqcRYGate(q, 1.5354593990731356, 15);
  sqcRZGate(q, 1.9736690661592562, 15);
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
  sqcRYGate(q, -1.734652646364131, 0);
  sqcRZGate(q, -2.162341253202311, 0);
  sqcRYGate(q, -1.6875942502446568, 1);
  sqcRZGate(q, 0.098253247280462, 1);
  sqcRYGate(q, 3.053452639782373, 2);
  sqcRZGate(q, -0.8218279579635901, 2);
  sqcRYGate(q, -0.4297032593791451, 3);
  sqcRZGate(q, -1.357239002479234, 3);
  sqcRYGate(q, 0.04849941494827625, 4);
  sqcRZGate(q, 0.8900359781624658, 4);
  sqcRYGate(q, 2.232299908084589, 5);
  sqcRZGate(q, 2.2229935343211658, 5);
  sqcRYGate(q, 2.8814496210496157, 6);
  sqcRZGate(q, -1.5753560036163334, 6);
  sqcRYGate(q, 0.3705625849582339, 7);
  sqcRZGate(q, -0.18084134736957264, 7);
  sqcRYGate(q, 3.6965673073652283e-06, 8);
  sqcRZGate(q, 0.6305300800182613, 8);
  sqcRYGate(q, -2.571466238002891, 9);
  sqcRZGate(q, 1.2840506974325576, 9);
  sqcRYGate(q, 0.014746352069852975, 10);
  sqcRZGate(q, -1.005768319053916, 10);
  sqcRYGate(q, -1.0426775528281675, 11);
  sqcRZGate(q, -1.629540571003761, 11);
  sqcRYGate(q, -3.091651361345508, 12);
  sqcRZGate(q, -3.007001760930849, 12);
  sqcRYGate(q, 0.26594923150745253, 13);
  sqcRZGate(q, -1.2745473641188552, 13);
  sqcRYGate(q, -3.085480747802001, 14);
  sqcRZGate(q, -0.03865861766155724, 14);
  sqcRYGate(q, 0.5258003339207997, 15);
  sqcRZGate(q, 2.7183022458166524, 15);
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
  sqcRYGate(q, 1.7168057485287243, 0);
  sqcRZGate(q, 0.8463839548684042, 0);
  sqcRYGate(q, -3.0932559249141685, 1);
  sqcRZGate(q, -1.5444347608894469, 1);
  sqcRYGate(q, 3.0672763647522725, 2);
  sqcRZGate(q, -0.3347214335243782, 2);
  sqcRYGate(q, 3.1385947488035786, 3);
  sqcRZGate(q, 1.7998037297049647, 3);
  sqcRYGate(q, 0.7016489272240616, 4);
  sqcRZGate(q, -2.221837114421174, 4);
  sqcRYGate(q, 3.1168821754747866, 5);
  sqcRZGate(q, -2.4897462023280093, 5);
  sqcRYGate(q, 1.575241231755107, 6);
  sqcRZGate(q, -2.400250188329675, 6);
  sqcRYGate(q, 0.00039111506173661326, 7);
  sqcRZGate(q, -2.0068101004365113, 7);
  sqcRYGate(q, -0.31583032298358693, 8);
  sqcRZGate(q, 2.1521218938313034, 8);
  sqcRYGate(q, -3.1415148449143793, 9);
  sqcRZGate(q, -0.287083895703469, 9);
  sqcRYGate(q, 1.5690591224940809, 10);
  sqcRZGate(q, 2.7802069267449645, 10);
  sqcRYGate(q, -3.1129455033964883, 11);
  sqcRZGate(q, 0.9225778617798784, 11);
  sqcRYGate(q, -0.11066401817344751, 12);
  sqcRZGate(q, 0.2936422786038202, 12);
  sqcRYGate(q, 0.0002780627199872821, 13);
  sqcRZGate(q, -2.602773003076619, 13);
  sqcRYGate(q, -2.305185996796003, 14);
  sqcRZGate(q, -2.070472735094457, 14);
  sqcRYGate(q, 0.7622256900933319, 15);
  sqcRZGate(q, -1.530527713776905, 15);
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
  sqcRYGate(q, -0.004112545876382433, 0);
  sqcRZGate(q, 1.829210232540215, 0);
  sqcRYGate(q, 3.120255532002645, 1);
  sqcRZGate(q, -2.0392454509843185, 1);
  sqcRYGate(q, 0.011414190367015742, 2);
  sqcRZGate(q, 3.0077992591375913, 2);
  sqcRYGate(q, -2.7140012788345866, 3);
  sqcRZGate(q, -0.46730001564083573, 3);
  sqcRYGate(q, 3.1354475503727466, 4);
  sqcRZGate(q, -0.5020965079956277, 4);
  sqcRYGate(q, 1.5566040031020556, 5);
  sqcRZGate(q, 2.6554860232003756, 5);
  sqcRYGate(q, -3.1405767633145216, 6);
  sqcRZGate(q, 1.7526149306332215, 6);
  sqcRYGate(q, 3.139849788013356, 7);
  sqcRZGate(q, -1.1901862475067928, 7);
  sqcRYGate(q, 0.0013700721835485652, 8);
  sqcRZGate(q, 2.5106509566113133, 8);
  sqcRYGate(q, 1.5692557706463068, 9);
  sqcRZGate(q, -0.6911281710326006, 9);
  sqcRYGate(q, 3.1367017609302676, 10);
  sqcRZGate(q, 0.525577179219022, 10);
  sqcRYGate(q, 0.0027952811559481816, 11);
  sqcRZGate(q, 1.476455365462228, 11);
  sqcRYGate(q, 3.13996055575585, 12);
  sqcRZGate(q, -1.0031145372972854, 12);
  sqcRYGate(q, 2.88060930313154, 13);
  sqcRZGate(q, -1.2629466280000676, 13);
  sqcRYGate(q, 3.1295272490543877, 14);
  sqcRZGate(q, 0.16421727984015977, 14);
  sqcRYGate(q, -1.3707762977638076, 15);
  sqcRZGate(q, -2.5405158950284026, 15);

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
