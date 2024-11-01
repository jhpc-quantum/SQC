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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 0.13878780204022156, 0);
  sqcRZGate(q, 0.6370198405661105, 0);
  sqcRYGate(q, -3.1078357153308818, 1);
  sqcRZGate(q, 1.7733930094353625, 1);
  sqcRYGate(q, 0.9877768480421176, 2);
  sqcRZGate(q, 2.079594391536264, 2);
  sqcRYGate(q, 2.9090521629198602, 3);
  sqcRZGate(q, 0.5823408066760472, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.9234672000330333, 0);
  sqcRZGate(q, -1.9620074113723636, 0);
  sqcRYGate(q, -0.2992785852751299, 1);
  sqcRZGate(q, 0.45517786102887836, 1);
  sqcRYGate(q, 0.6944731852161599, 2);
  sqcRZGate(q, -1.229652763092893, 2);
  sqcRYGate(q, -2.568434463300505, 3);
  sqcRZGate(q, -1.0461481093101987, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.9486674555744004, 0);
  sqcRZGate(q, -1.5804067595706541, 0);
  sqcRYGate(q, -2.4407321710853065, 1);
  sqcRZGate(q, -2.1993146433814026, 1);
  sqcRYGate(q, -0.800651502410171, 2);
  sqcRZGate(q, 2.0356771097959925, 2);
  sqcRYGate(q, 1.049518589224152, 3);
  sqcRZGate(q, 0.4125101524445048, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.3525201703767937, 0);
  sqcRZGate(q, 1.1824760373478762, 0);
  sqcRYGate(q, -3.0918937703038156, 1);
  sqcRZGate(q, 2.8487296409766443, 1);
  sqcRYGate(q, -2.404064539976372, 2);
  sqcRZGate(q, 2.4357409853714564, 2);
  sqcRYGate(q, -0.6841859138179283, 3);
  sqcRZGate(q, -1.373905793915136, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.584891293511083, 0);
  sqcRZGate(q, -0.6402161577182364, 0);
  sqcRYGate(q, 1.8140639515462942, 1);
  sqcRZGate(q, -0.3150535835472992, 1);
  sqcRYGate(q, 1.054858007376625, 2);
  sqcRZGate(q, -0.8455795879929258, 2);
  sqcRYGate(q, 0.5380239971382346, 3);
  sqcRZGate(q, -0.7070612008769874, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6369580142176354, 0);
  sqcRZGate(q, -2.9595728604385596, 0);
  sqcRYGate(q, 2.406211977534139, 1);
  sqcRZGate(q, 2.6467742767967968, 1);
  sqcRYGate(q, 2.8657057918000293, 2);
  sqcRZGate(q, 2.483059420789692, 2);
  sqcRYGate(q, -0.5314680701340433, 3);
  sqcRZGate(q, 0.6459016887949122, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.27000671478099303, 0);
  sqcRZGate(q, -1.0882564038303224, 0);
  sqcRYGate(q, 0.33866081256555614, 1);
  sqcRZGate(q, 1.9464884890943792, 1);
  sqcRYGate(q, -0.7239366228429639, 2);
  sqcRZGate(q, -2.0330941889118295, 2);
  sqcRYGate(q, -0.495410814822845, 3);
  sqcRZGate(q, -0.41496830043687444, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.4961598901804285, 0);
  sqcRZGate(q, -0.6793091009932617, 0);
  sqcRYGate(q, 2.188465690803497, 1);
  sqcRZGate(q, -1.5356599097294394, 1);
  sqcRYGate(q, 2.685082370166142, 2);
  sqcRZGate(q, -1.207542254786085, 2);
  sqcRYGate(q, 2.7754039462264086, 3);
  sqcRZGate(q, 2.052325320417898, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0329202950852836, 0);
  sqcRZGate(q, -3.046739318290283, 0);
  sqcRYGate(q, -2.5461542095203225, 1);
  sqcRZGate(q, 0.31156602066035255, 1);
  sqcRYGate(q, 2.650168858220403, 2);
  sqcRZGate(q, -1.8075699282514024, 2);
  sqcRYGate(q, -2.2970942351091437, 3);
  sqcRZGate(q, -0.38436188078180505, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0458504816600778, 0);
  sqcRZGate(q, 2.6472134424272875, 0);
  sqcRYGate(q, 0.40812374842402305, 1);
  sqcRZGate(q, 1.8343669169811863, 1);
  sqcRYGate(q, 2.4975329967831574, 2);
  sqcRZGate(q, 2.096778970310719, 2);
  sqcRYGate(q, 1.7333357810559533, 3);
  sqcRZGate(q, -2.6225906829942036, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.960400841704684, 0);
  sqcRZGate(q, -1.3957918027125265, 0);
  sqcRYGate(q, -0.25661743827064415, 1);
  sqcRZGate(q, -3.0856648925581287, 1);
  sqcRYGate(q, -2.639188725537398, 2);
  sqcRZGate(q, 3.010907642088333, 2);
  sqcRYGate(q, -1.342502692722032, 3);
  sqcRZGate(q, 1.9381362124328214, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.875259762351628, 0);
  sqcRZGate(q, 2.615213488806024, 0);
  sqcRYGate(q, 0.7843012695190614, 1);
  sqcRZGate(q, -1.8519108289713055, 1);
  sqcRYGate(q, -1.6070769061295027, 2);
  sqcRZGate(q, 0.9082648316973322, 2);
  sqcRYGate(q, -2.1106839026244058, 3);
  sqcRZGate(q, 2.510834673877607, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.4297385320694607, 0);
  sqcRZGate(q, 1.0891940899377581, 0);
  sqcRYGate(q, -1.8391543723780728, 1);
  sqcRZGate(q, 0.6963274854628847, 1);
  sqcRYGate(q, 0.8861593932631706, 2);
  sqcRZGate(q, -1.4434046403872411, 2);
  sqcRYGate(q, -0.32553067934781676, 3);
  sqcRZGate(q, 0.23878785604034117, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8758777390262162, 0);
  sqcRZGate(q, 0.21180800049512738, 0);
  sqcRYGate(q, 0.8093957902547712, 1);
  sqcRZGate(q, 1.2832175418864862, 1);
  sqcRYGate(q, 0.20298723097320798, 2);
  sqcRZGate(q, -2.4553111600129385, 2);
  sqcRYGate(q, 0.7276473941734477, 3);
  sqcRZGate(q, 2.4940712478949596, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1837186147613883, 0);
  sqcRZGate(q, 0.7501584692887694, 0);
  sqcRYGate(q, 2.2127272176502286, 1);
  sqcRZGate(q, 2.242931224789226, 1);
  sqcRYGate(q, -1.1411528835021754, 2);
  sqcRZGate(q, 2.975503472896537, 2);
  sqcRYGate(q, 1.8622521909920382, 3);
  sqcRZGate(q, 2.3595430085017512, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.337154301947418, 0);
  sqcRZGate(q, 2.347407189843992, 0);
  sqcRYGate(q, 1.6646081013760872, 1);
  sqcRZGate(q, -2.8679158918920877, 1);
  sqcRYGate(q, 0.761239259146159, 2);
  sqcRZGate(q, -2.745933102974511, 2);
  sqcRYGate(q, 0.941117095809659, 3);
  sqcRZGate(q, 1.7151859819620512, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3407631302307612, 0);
  sqcRZGate(q, 2.7785072241893567, 0);
  sqcRYGate(q, -1.2954266373250847, 1);
  sqcRZGate(q, -2.4677781814802997, 1);
  sqcRYGate(q, 1.017742932735037, 2);
  sqcRZGate(q, 0.2724029103892538, 2);
  sqcRYGate(q, -0.010253396778996837, 3);
  sqcRZGate(q, 2.884732894190522, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4139097076769573, 0);
  sqcRZGate(q, 1.1334684627595089, 0);
  sqcRYGate(q, 3.136432856620429, 1);
  sqcRZGate(q, 0.5396278831084933, 1);
  sqcRYGate(q, -2.413352477682115, 2);
  sqcRZGate(q, 0.6749479149493993, 2);
  sqcRYGate(q, -0.9443348956385983, 3);
  sqcRZGate(q, 1.695091573982174, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4553285305151715, 0);
  sqcRZGate(q, -2.2063634354231625, 0);
  sqcRYGate(q, 1.3641127088743898, 1);
  sqcRZGate(q, -1.9022386257043093, 1);
  sqcRYGate(q, 3.0701099436400887, 2);
  sqcRZGate(q, -1.72039248037452, 2);
  sqcRYGate(q, 0.5847412340603002, 3);
  sqcRZGate(q, -2.601912286734009, 3);

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
