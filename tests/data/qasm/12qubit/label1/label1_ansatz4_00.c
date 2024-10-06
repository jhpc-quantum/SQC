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

  sqcRYGate(q, -0.4187028827628856, 0);
  sqcRZGate(q, -0.9112754764036994, 0);
  sqcRYGate(q, 0.610421172814089, 1);
  sqcRZGate(q, -0.784411848182664, 1);
  sqcRYGate(q, -2.1122732606513273, 2);
  sqcRZGate(q, -0.6398567506426878, 2);
  sqcRYGate(q, -2.8668828212739528, 3);
  sqcRZGate(q, -1.1744464768990373, 3);
  sqcRYGate(q, -3.7949739791542925e-05, 4);
  sqcRZGate(q, -0.2913110950778597, 4);
  sqcRYGate(q, 3.1381638079647196, 5);
  sqcRZGate(q, 0.3114762335198397, 5);
  sqcRYGate(q, 2.124824069826305, 6);
  sqcRZGate(q, 3.138268103565608, 6);
  sqcRYGate(q, -1.9994732065854413, 7);
  sqcRZGate(q, 0.001263793170865668, 7);
  sqcRYGate(q, -3.034922526248659, 8);
  sqcRZGate(q, -0.00029030114958494835, 8);
  sqcRYGate(q, 0.19017687651241036, 9);
  sqcRZGate(q, 0.0008000642253120916, 9);
  sqcRYGate(q, 2.216967097397326, 10);
  sqcRZGate(q, 1.5710655312627182, 10);
  sqcRYGate(q, -0.06257326071191649, 11);
  sqcRZGate(q, -3.141241260376314, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 0.9835090161593989, 0);
  sqcRZGate(q, -0.39484048704151237, 0);
  sqcRYGate(q, -1.9752187603494853, 1);
  sqcRZGate(q, -0.4124376868426859, 1);
  sqcRYGate(q, -1.4534611387195069, 2);
  sqcRZGate(q, -0.8114292733747819, 2);
  sqcRYGate(q, -0.20504837800840206, 3);
  sqcRZGate(q, -0.88826602324521, 3);
  sqcRYGate(q, 1.863539547625478, 4);
  sqcRZGate(q, -0.26105195766441014, 4);
  sqcRYGate(q, -0.2610952446575663, 5);
  sqcRZGate(q, -3.1382042235799354, 5);
  sqcRYGate(q, 2.950885455902237, 6);
  sqcRZGate(q, 0.01354507980162942, 6);
  sqcRYGate(q, -0.7895350862073984, 7);
  sqcRZGate(q, -2.6285102129190085, 7);
  sqcRYGate(q, 0.3589333369344134, 8);
  sqcRZGate(q, -1.570919723185152, 8);
  sqcRYGate(q, -1.2578775177817292, 9);
  sqcRZGate(q, -1.5705954347524997, 9);
  sqcRYGate(q, 1.5712067822769846, 10);
  sqcRZGate(q, 2.6058515671221567, 10);
  sqcRYGate(q, -2.834328417187416, 11);
  sqcRZGate(q, 1.5705728468572486, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, -2.554620661511028, 0);
  sqcRZGate(q, 2.750666439438581, 0);
  sqcRYGate(q, 2.2007724718821677, 1);
  sqcRZGate(q, -0.31197757672190457, 1);
  sqcRYGate(q, 0.009021455452261629, 2);
  sqcRZGate(q, 2.959345812652507, 2);
  sqcRYGate(q, -1.5567068821429544, 3);
  sqcRZGate(q, 1.4466033368692264, 3);
  sqcRYGate(q, 3.1410548166394756, 4);
  sqcRZGate(q, 1.2763938873335592, 4);
  sqcRYGate(q, 0.036599688345656745, 5);
  sqcRZGate(q, 1.5067950940694503, 5);
  sqcRYGate(q, 0.014583037581841195, 6);
  sqcRZGate(q, -0.016124892486840646, 6);
  sqcRYGate(q, -3.1406327059472297, 7);
  sqcRZGate(q, -2.6273165671553897, 7);
  sqcRYGate(q, 0.9374491207408262, 8);
  sqcRZGate(q, 4.327557167727036e-06, 8);
  sqcRYGate(q, 3.046816841553208, 9);
  sqcRZGate(q, -3.1413265242940898, 9);
  sqcRYGate(q, -1.5709312651030796, 10);
  sqcRZGate(q, 1.5708530254370525, 10);
  sqcRYGate(q, 3.06612656163746, 11);
  sqcRZGate(q, 3.14139365339578, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
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
  sqcRYGate(q, 0.08189165147439897, 0);
  sqcRZGate(q, 1.6173222752985372, 0);
  sqcRYGate(q, -0.15467020444487023, 1);
  sqcRZGate(q, -1.4714579458009323, 1);
  sqcRYGate(q, -0.10392316532170476, 2);
  sqcRZGate(q, -1.3604057421879971, 2);
  sqcRYGate(q, -1.6007003779549975, 3);
  sqcRZGate(q, -3.051852877696124, 3);
  sqcRYGate(q, 1.6114381999126621, 4);
  sqcRZGate(q, -1.5188562105568257, 4);
  sqcRYGate(q, 0.403977145381293, 5);
  sqcRZGate(q, -1.4666640367765398, 5);
  sqcRYGate(q, -2.768060175482207, 6);
  sqcRZGate(q, 1.6866089814030565, 6);
  sqcRYGate(q, -3.0360477123266425, 7);
  sqcRZGate(q, 1.6867866807361762, 7);
  sqcRYGate(q, -1.1445299836432214, 8);
  sqcRZGate(q, -1.4551349793656803, 8);
  sqcRYGate(q, -0.2212439101357111, 9);
  sqcRZGate(q, 1.6862025620865306, 9);
  sqcRYGate(q, -0.5782979440947544, 10);
  sqcRZGate(q, 1.6861975820457673, 10);
  sqcRYGate(q, 2.9484737716721234, 11);
  sqcRZGate(q, 1.6863130950013347, 11);

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
