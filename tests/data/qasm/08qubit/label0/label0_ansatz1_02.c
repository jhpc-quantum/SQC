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

  sqcRYGate(q, 0.5168974527595193, 0);
  sqcRZGate(q, -2.98111340029556, 0);
  sqcRYGate(q, -0.03775097075706135, 1);
  sqcRZGate(q, -1.36240106971348, 1);
  sqcRYGate(q, -0.02353394639766293, 2);
  sqcRZGate(q, -2.9083492802763984, 2);
  sqcRYGate(q, 1.5926057141868495, 3);
  sqcRZGate(q, -1.2058427127575406, 3);
  sqcRYGate(q, -1.5232584933634197, 4);
  sqcRZGate(q, -2.4659021951213367, 4);
  sqcRYGate(q, -1.5707494141344136, 5);
  sqcRZGate(q, -1.5952441028683455, 5);
  sqcRYGate(q, -2.8784678318737424, 6);
  sqcRZGate(q, 1.3400070519178733, 6);
  sqcRYGate(q, -3.1393603442444986, 7);
  sqcRZGate(q, 1.8525413795315187, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.927861803052533, 0);
  sqcRZGate(q, 1.3313035621498956, 0);
  sqcRYGate(q, -0.25397714413499645, 1);
  sqcRZGate(q, -0.5574800441853859, 1);
  sqcRYGate(q, -0.01071911949172133, 2);
  sqcRZGate(q, -0.17965074517838378, 2);
  sqcRYGate(q, 0.7766751096910411, 3);
  sqcRZGate(q, -0.013369206411452703, 3);
  sqcRYGate(q, 1.5689283521064759, 4);
  sqcRZGate(q, -3.1412646893243537, 4);
  sqcRYGate(q, 3.108122881016195, 5);
  sqcRZGate(q, -0.02460568739775736, 5);
  sqcRYGate(q, 2.5631481295397847, 6);
  sqcRZGate(q, -1.9374709368257719, 6);
  sqcRYGate(q, 1.4684496453936648, 7);
  sqcRZGate(q, 2.427525598275766, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5672774189012448, 0);
  sqcRZGate(q, 1.6847546229403845, 0);
  sqcRYGate(q, -3.0861975133407804, 1);
  sqcRZGate(q, -1.2017183084300522, 1);
  sqcRYGate(q, -0.27985796350964787, 2);
  sqcRZGate(q, 3.1385817318970894, 2);
  sqcRYGate(q, -1.5206999247344788, 3);
  sqcRZGate(q, -0.013705050220640187, 3);
  sqcRYGate(q, 1.6213941501935913, 4);
  sqcRZGate(q, 3.1393235990402224, 4);
  sqcRYGate(q, -0.06204055024766397, 5);
  sqcRZGate(q, 0.10921587755036641, 5);
  sqcRYGate(q, 3.111546207999659, 6);
  sqcRZGate(q, -0.006310216491288157, 6);
  sqcRYGate(q, 2.8312324086877485, 7);
  sqcRZGate(q, 2.192195789792078, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7458899630702396, 0);
  sqcRZGate(q, 0.6625208832821176, 0);
  sqcRYGate(q, 1.4458295029271264, 1);
  sqcRZGate(q, 1.0799509026322056, 1);
  sqcRYGate(q, -1.5705123815252648, 2);
  sqcRZGate(q, 4.093736121379293e-05, 2);
  sqcRYGate(q, -2.416769082573846, 3);
  sqcRZGate(q, -0.002328255851705485, 3);
  sqcRYGate(q, -1.178866429824863, 4);
  sqcRZGate(q, 1.6451309971025254, 4);
  sqcRYGate(q, -3.0883192253122833, 5);
  sqcRZGate(q, -0.22384008482663245, 5);
  sqcRYGate(q, 1.6698494328501416, 6);
  sqcRZGate(q, 0.9365253057266543, 6);
  sqcRYGate(q, -2.6746482838100305, 7);
  sqcRZGate(q, -1.8269130691477438, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.879403278176789, 0);
  sqcRZGate(q, -3.1305447035908807, 0);
  sqcRYGate(q, 1.5707912480434683, 1);
  sqcRZGate(q, -0.5229734430564033, 1);
  sqcRYGate(q, -3.093425015085442, 2);
  sqcRZGate(q, 1.4431179447174785, 2);
  sqcRYGate(q, 0.03589433891225481, 3);
  sqcRZGate(q, 0.00385968031588718, 3);
  sqcRYGate(q, 0.00015080086118129382, 4);
  sqcRZGate(q, 1.4989704245849513, 4);
  sqcRYGate(q, -3.140113961684511, 5);
  sqcRZGate(q, -2.2982959649111585, 5);
  sqcRYGate(q, -3.1409880434542643, 6);
  sqcRZGate(q, -0.27226551496107554, 6);
  sqcRYGate(q, 2.08265547970851, 7);
  sqcRZGate(q, 3.1191555002467677, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5708109191554682, 0);
  sqcRZGate(q, -1.0186271534706748e-05, 0);
  sqcRYGate(q, -0.00010473531055943396, 1);
  sqcRZGate(q, -1.0478036603099083, 1);
  sqcRYGate(q, -6.0749705993499254e-06, 2);
  sqcRZGate(q, 0.12776823230345216, 2);
  sqcRYGate(q, 0.7205473034932054, 3);
  sqcRZGate(q, -1.5714038652389108, 3);
  sqcRYGate(q, -1.8529351802356506, 4);
  sqcRZGate(q, 1.567717521121561, 4);
  sqcRYGate(q, 3.1368379355692673, 5);
  sqcRZGate(q, -0.40673868154513926, 5);
  sqcRYGate(q, -3.1393141260265276, 6);
  sqcRZGate(q, -2.765836584758922, 6);
  sqcRYGate(q, -1.5789120137042278, 7);
  sqcRZGate(q, -1.2788691290044838, 7);

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
