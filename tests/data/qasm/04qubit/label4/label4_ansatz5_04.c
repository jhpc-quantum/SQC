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

  sqcRYGate(q, -2.0982177933685398, 0);
  sqcRYGate(q, 1.4820784683940798, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.027937307211233, 0);
  sqcRYGate(q, -1.806828735905902, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9406032518294412, 2);
  sqcRYGate(q, 1.995855807064375, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9507447595090319, 2);
  sqcRYGate(q, -1.616560877050459, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.087739822202798, 1);
  sqcRYGate(q, -1.6151684001241775, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2486213549613767, 1);
  sqcRYGate(q, 0.8173739731288234, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.033434502759041, 0);
  sqcRYGate(q, -0.926219507424503, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.922968281376728, 0);
  sqcRYGate(q, -2.551534622677525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3078704638904222, 2);
  sqcRYGate(q, 0.1142357356536543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.04633404526759233, 2);
  sqcRYGate(q, 2.9917702143979183, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4290296587537537, 1);
  sqcRYGate(q, -1.8898823053485507, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0558911662092197, 1);
  sqcRYGate(q, 0.3348276041150068, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0362376876081354, 0);
  sqcRYGate(q, -0.5859123394848396, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.019661627679378794, 0);
  sqcRYGate(q, -2.2534640087071978, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8230095826236462, 2);
  sqcRYGate(q, 2.167487962092477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2949585312435157, 2);
  sqcRYGate(q, 1.4851119400789274, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2600214691203027, 1);
  sqcRYGate(q, -3.0412832440971136, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6395838790704065, 1);
  sqcRYGate(q, -3.0332474852477325, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.23042470668643936, 0);
  sqcRYGate(q, 2.267335165892878, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.47788491413501794, 0);
  sqcRYGate(q, -2.644937739458982, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.31051329067721944, 2);
  sqcRYGate(q, -0.28353056085640294, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.708936692911993, 2);
  sqcRYGate(q, 1.9739313572713595, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.60858875203375, 1);
  sqcRYGate(q, 1.8397212230765314, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.196886644165611, 1);
  sqcRYGate(q, -1.5041264805144543, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.79977102702542, 0);
  sqcRYGate(q, -2.4462214431691973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7073682606318661, 0);
  sqcRYGate(q, 1.554400425753714, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.10369792691801027, 2);
  sqcRYGate(q, 1.6517720189285718, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.413228159331072, 2);
  sqcRYGate(q, 0.05714247679348716, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1475491049908988, 1);
  sqcRYGate(q, -1.3169238873451923, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9311451953234187, 1);
  sqcRYGate(q, 1.1835527344545065, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.506016742323645, 0);
  sqcRYGate(q, 0.368216491099733, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.23676136724651364, 0);
  sqcRYGate(q, -0.3488234692911714, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.08536515346940732, 2);
  sqcRYGate(q, 1.2351372375031933, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0118022561360305, 2);
  sqcRYGate(q, 2.6985164140371736, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3769846854038838, 1);
  sqcRYGate(q, -0.5857294181085754, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.08677614108031939, 1);
  sqcRYGate(q, 2.565471572806273, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.520659024956049, 0);
  sqcRYGate(q, 2.168361153719018, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.91458866773206, 0);
  sqcRYGate(q, -2.631671608844986, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4426782956612172, 2);
  sqcRYGate(q, 2.050942810989866, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3717154306782369, 2);
  sqcRYGate(q, 2.2337647872260273, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0484948837958115, 1);
  sqcRYGate(q, -1.5142639904750474, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8060153514323973, 1);
  sqcRYGate(q, -0.11303457965356055, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.889832415441471, 0);
  sqcRYGate(q, 2.923475806034067, 1);
  sqcRYGate(q, -1.4299750510145692, 2);
  sqcRYGate(q, -3.0796146660193378, 3);

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
