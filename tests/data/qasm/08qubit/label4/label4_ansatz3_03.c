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

  sqcRYGate(q, -3.0130069576854943, 0);
  sqcRZGate(q, 2.028797104389962, 0);
  sqcRYGate(q, 1.1806206356513376e-06, 1);
  sqcRZGate(q, -0.268234345112347, 1);
  sqcRYGate(q, -1.5512822153477002, 2);
  sqcRZGate(q, -1.8099899689636771, 2);
  sqcRYGate(q, 1.794195090094732, 3);
  sqcRZGate(q, 1.6965654100907814, 3);
  sqcRYGate(q, 1.851368226539889e-05, 4);
  sqcRZGate(q, -1.0602058982381282, 4);
  sqcRYGate(q, -0.9212456624221933, 5);
  sqcRZGate(q, 2.3282836605574038, 5);
  sqcRYGate(q, 9.073621744785082e-07, 6);
  sqcRZGate(q, 2.969041456114041, 6);
  sqcRYGate(q, -1.8820096177407395, 7);
  sqcRZGate(q, 1.606756838766944, 7);
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
  sqcRYGate(q, 1.121090731337442, 0);
  sqcRZGate(q, 2.987591350456824, 0);
  sqcRYGate(q, -3.141580575321182, 1);
  sqcRZGate(q, 0.24350821628305575, 1);
  sqcRYGate(q, -2.0030966451756175e-05, 2);
  sqcRZGate(q, -2.2053666422929314, 2);
  sqcRYGate(q, -3.1415922500035642, 3);
  sqcRZGate(q, 1.555600824532421, 3);
  sqcRYGate(q, 2.1484412836456775e-06, 4);
  sqcRZGate(q, -0.3611266835496934, 4);
  sqcRYGate(q, -0.6753662451043816, 5);
  sqcRZGate(q, 1.311512159735458, 5);
  sqcRYGate(q, 1.354822214055913e-05, 6);
  sqcRZGate(q, -3.1386515102432764, 6);
  sqcRYGate(q, -2.7015526412386834, 7);
  sqcRZGate(q, -1.5624195161900785, 7);
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
  sqcRYGate(q, 1.5464759551126388, 0);
  sqcRZGate(q, -0.30883746118788474, 0);
  sqcRYGate(q, -1.5707964633126499, 1);
  sqcRZGate(q, -1.8283776237809974, 1);
  sqcRYGate(q, 1.3994754026920928, 2);
  sqcRZGate(q, -1.6077958842040774, 2);
  sqcRYGate(q, -1.29019526030961, 3);
  sqcRZGate(q, -2.8149205909984487, 3);
  sqcRYGate(q, -1.5707929960881888, 4);
  sqcRZGate(q, 2.350484378774972, 4);
  sqcRYGate(q, -0.7993753098566749, 5);
  sqcRZGate(q, 1.3279234730191751, 5);
  sqcRYGate(q, -3.1415911976151225, 6);
  sqcRZGate(q, -2.8290891130113627, 6);
  sqcRYGate(q, 3.1415853532251994, 7);
  sqcRZGate(q, -2.628140018581172, 7);
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
  sqcRYGate(q, 8.20819788862473e-06, 0);
  sqcRZGate(q, -3.0922810800015705, 0);
  sqcRYGate(q, 3.1415875119177903, 1);
  sqcRZGate(q, 2.6328639455250884, 1);
  sqcRYGate(q, 1.5708138310690725, 2);
  sqcRZGate(q, 1.5708004440160264, 2);
  sqcRYGate(q, 1.5707896655413378, 3);
  sqcRZGate(q, -1.3024209199230954, 3);
  sqcRYGate(q, -6.3571669781692475e-06, 4);
  sqcRZGate(q, 0.7910999037970443, 4);
  sqcRYGate(q, 9.489269467977124e-07, 5);
  sqcRZGate(q, -2.793597430711942, 5);
  sqcRYGate(q, 1.5708020234164897, 6);
  sqcRZGate(q, 0.06786597566549936, 6);
  sqcRYGate(q, 1.1646085666392858, 7);
  sqcRZGate(q, -1.6610498738121708, 7);
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
  sqcRYGate(q, 1.5707908080350137, 0);
  sqcRZGate(q, -2.915791347433692, 0);
  sqcRYGate(q, 1.9245481743521775, 1);
  sqcRZGate(q, -0.10755180771926742, 1);
  sqcRYGate(q, -1.245708555543476, 2);
  sqcRZGate(q, -3.1415811227157233, 2);
  sqcRYGate(q, 2.293448974726517e-06, 3);
  sqcRZGate(q, 2.52495961886435, 3);
  sqcRYGate(q, -1.570795407894229, 4);
  sqcRZGate(q, 2.143210119328651, 4);
  sqcRYGate(q, -1.570798748341634, 5);
  sqcRZGate(q, 2.1506227850379727, 5);
  sqcRYGate(q, 4.871325863575748e-06, 6);
  sqcRZGate(q, -0.06787044854001678, 6);
  sqcRYGate(q, -3.14159154687629, 7);
  sqcRZGate(q, 2.8480125445155826, 7);
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
  sqcRYGate(q, -3.1415914928105324, 0);
  sqcRZGate(q, -1.3449823610760923, 0);
  sqcRYGate(q, -3.141586978626037, 1);
  sqcRZGate(q, -1.5896996123792353, 1);
  sqcRYGate(q, 1.5707890562084812, 2);
  sqcRZGate(q, -3.141589837093959, 2);
  sqcRYGate(q, 3.1415923084913153, 3);
  sqcRZGate(q, 3.0332405104721634, 3);
  sqcRYGate(q, -2.1325238440696418e-07, 4);
  sqcRZGate(q, 0.9983840808965967, 4);
  sqcRYGate(q, 3.1415920485742928, 5);
  sqcRZGate(q, 2.15062429562092, 5);
  sqcRYGate(q, 1.5708063393950225, 6);
  sqcRZGate(q, 0.42905586164527887, 6);
  sqcRYGate(q, -1.5707975141811361, 7);
  sqcRZGate(q, 3.1404025939438194, 7);
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
  sqcRYGate(q, 1.570792348895665, 0);
  sqcRZGate(q, 0.30915284591580033, 0);
  sqcRYGate(q, 1.8060983411466713, 1);
  sqcRZGate(q, 2.0975360349020735, 1);
  sqcRYGate(q, 1.2457093065967468, 2);
  sqcRZGate(q, -1.2616412756113922, 2);
  sqcRYGate(q, 3.1415918788378354, 3);
  sqcRZGate(q, -1.1683873828623248, 3);
  sqcRYGate(q, 1.570790439857415, 4);
  sqcRZGate(q, 1.879958533866324, 4);
  sqcRYGate(q, -1.2604825286425474, 5);
  sqcRZGate(q, 0.1625043068979214, 5);
  sqcRYGate(q, 2.037411715688754e-06, 6);
  sqcRZGate(q, -0.11990417299152499, 6);
  sqcRYGate(q, 3.294143701815244e-06, 7);
  sqcRZGate(q, -2.977898723990369, 7);

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
