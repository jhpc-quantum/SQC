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

  sqcRYGate(q, 1.60748482425144, 0);
  sqcRZGate(q, 0.012575913412306837, 0);
  sqcRYGate(q, 1.5663910529617133, 1);
  sqcRZGate(q, -2.728533692449699, 1);
  sqcRYGate(q, 3.1322227401794063, 2);
  sqcRZGate(q, -3.136565512982726, 2);
  sqcRYGate(q, -0.0046957370831040394, 3);
  sqcRZGate(q, 0.022771522340937385, 3);
  sqcRYGate(q, 1.6976853557045422, 4);
  sqcRZGate(q, 3.139363800134305, 4);
  sqcRYGate(q, -1.7341244863094838, 5);
  sqcRZGate(q, 3.1301498559376957, 5);
  sqcRYGate(q, 2.993217998763062, 6);
  sqcRZGate(q, -1.5711733412828384, 6);
  sqcRYGate(q, 3.1208030741797885, 7);
  sqcRZGate(q, -3.129431102731898, 7);
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
  sqcRYGate(q, -1.2805648770790932, 0);
  sqcRZGate(q, 0.0029869290654234645, 0);
  sqcRYGate(q, 3.1082379031093255, 1);
  sqcRZGate(q, 0.41004033134173046, 1);
  sqcRYGate(q, 1.5464370719059426, 2);
  sqcRZGate(q, -3.1414478545432076, 2);
  sqcRYGate(q, -1.830235584574411, 3);
  sqcRZGate(q, -8.251036129980349e-05, 3);
  sqcRYGate(q, -1.5876292686424127, 4);
  sqcRZGate(q, -1.5688818053880045, 4);
  sqcRYGate(q, 0.23729975899841665, 5);
  sqcRZGate(q, -1.5610612135387685, 5);
  sqcRYGate(q, 1.5684411510359357, 6);
  sqcRZGate(q, -1.8210038759792866, 6);
  sqcRYGate(q, 1.3350492792182562, 7);
  sqcRZGate(q, -1.568538242164194, 7);
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
  sqcRYGate(q, 2.6350754750978203, 0);
  sqcRZGate(q, 1.570963348489573, 0);
  sqcRYGate(q, -2.521172056540116, 1);
  sqcRZGate(q, 1.5699498579380309, 1);
  sqcRYGate(q, 2.5264845067186226, 2);
  sqcRZGate(q, -1.5706629003546606, 2);
  sqcRYGate(q, 2.6367503107912023, 3);
  sqcRZGate(q, 1.5705989949659034, 3);
  sqcRYGate(q, 1.5564175440087007, 4);
  sqcRZGate(q, -3.1414939943046014, 4);
  sqcRYGate(q, -1.589508069951835, 5);
  sqcRZGate(q, 0.0001404096168933222, 5);
  sqcRYGate(q, 3.13990510668003, 6);
  sqcRZGate(q, 1.159702755672022, 6);
  sqcRYGate(q, -0.5446892435957107, 7);
  sqcRZGate(q, 3.140676239875831, 7);
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
  sqcRYGate(q, 1.5694024430437592, 0);
  sqcRZGate(q, -2.173631225783828, 0);
  sqcRYGate(q, -1.5693548606482026, 1);
  sqcRZGate(q, -0.6887055011087247, 1);
  sqcRYGate(q, -1.5704540318279978, 2);
  sqcRZGate(q, 0.32215431273223594, 2);
  sqcRYGate(q, -1.5709982896081545, 3);
  sqcRZGate(q, 2.4209630573182555, 3);
  sqcRYGate(q, -1.5709578924749081, 4);
  sqcRZGate(q, -1.3798716556300974, 4);
  sqcRYGate(q, -1.5706767546073204, 5);
  sqcRZGate(q, -2.057131664223961, 5);
  sqcRYGate(q, 0.0026132236262794706, 6);
  sqcRZGate(q, 3.0277190457139427, 6);
  sqcRYGate(q, -1.570087374019421, 7);
  sqcRZGate(q, 1.382575246623734, 7);
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
  sqcRYGate(q, 1.8750165978473086, 0);
  sqcRZGate(q, -3.049268817758635, 0);
  sqcRYGate(q, 1.4584389084562601, 1);
  sqcRZGate(q, 0.04326787276012187, 1);
  sqcRYGate(q, 2.0681070423974575, 2);
  sqcRZGate(q, -2.7835463604378146, 2);
  sqcRYGate(q, 2.0286452082147104, 3);
  sqcRZGate(q, 1.7705427672903413, 3);
  sqcRYGate(q, 1.5072231624207717, 4);
  sqcRZGate(q, -0.0698015070905815, 4);
  sqcRYGate(q, 1.4480015352529891, 5);
  sqcRZGate(q, 3.0392665824495113, 5);
  sqcRYGate(q, 0.0433379296354293, 6);
  sqcRZGate(q, 1.7330142593762696, 6);
  sqcRYGate(q, 1.7268203299130844, 7);
  sqcRZGate(q, 1.9728365479638066, 7);

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
