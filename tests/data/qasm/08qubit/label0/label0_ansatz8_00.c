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

  sqcRYGate(q, 0.1311556478015783, 0);
  sqcRYGate(q, 2.6091105177220095, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1377209056520012, 0);
  sqcRYGate(q, -0.019553037894802117, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4153770995314225, 2);
  sqcRYGate(q, -1.9179435158561695, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9298726035944933, 2);
  sqcRYGate(q, 2.625102008987268, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1912778442775191, 4);
  sqcRYGate(q, 1.7124262523217144, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.106638580998954, 4);
  sqcRYGate(q, 2.2990862230435183, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.23833639289337147, 6);
  sqcRYGate(q, 1.9138682527386466, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.10752406205089837, 6);
  sqcRYGate(q, 0.25876570373359264, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6869066352586672, 0);
  sqcRYGate(q, 2.8113185707707595, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0775449052292787, 0);
  sqcRYGate(q, -0.6982991606674136, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6789044774093616, 2);
  sqcRYGate(q, -0.8628309797154277, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.6580397534500967, 2);
  sqcRYGate(q, -3.038864500032048, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.8287517654153445, 4);
  sqcRYGate(q, -1.4276852461353116, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.037092494069075, 4);
  sqcRYGate(q, 0.00023393445035704106, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.1153100137052723, 1);
  sqcRYGate(q, 2.5047339305844027, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.091434003337377, 1);
  sqcRYGate(q, 0.09209079219865668, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3559561841668106, 3);
  sqcRYGate(q, -1.233891452507808, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.23996100039160684, 3);
  sqcRYGate(q, -0.05111240220533019, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.51460891221331, 5);
  sqcRYGate(q, 2.5414377395520495, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.7364488884289884, 5);
  sqcRYGate(q, -0.002899394586531656, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.0424100290518914, 0);
  sqcRYGate(q, -0.838601118885479, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.17943443474171072, 0);
  sqcRYGate(q, 2.8816042125851506, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3838766455761355, 2);
  sqcRYGate(q, 2.075212347512166, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.985508558902029, 2);
  sqcRYGate(q, -2.59253646002575, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0048841077848993, 4);
  sqcRYGate(q, 0.7578641131542754, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.48142320742331274, 4);
  sqcRYGate(q, 2.569535276685481, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4398723612228599, 6);
  sqcRYGate(q, -2.4100051872051624, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.36968243670275214, 6);
  sqcRYGate(q, -0.04568440971107743, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.12676526742659, 0);
  sqcRYGate(q, -1.259239770011277, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.136120561865954, 0);
  sqcRYGate(q, 2.103954926073606, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8310151204828573, 2);
  sqcRYGate(q, -0.12001834175417869, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.4102739597053465, 2);
  sqcRYGate(q, -3.1373469340745976, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.1606077824897003, 4);
  sqcRYGate(q, 1.0369621091489067, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.07916180928919214, 4);
  sqcRYGate(q, -0.0012277680923763626, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.2414649187243563, 1);
  sqcRYGate(q, 2.485889943191482, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.0012072951260534758, 1);
  sqcRYGate(q, 0.0033083119779978164, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.483888265994938, 3);
  sqcRYGate(q, 1.5840695263292606, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.7155496424970543, 3);
  sqcRYGate(q, -0.6486016564687622, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.7037052245324745, 5);
  sqcRYGate(q, -0.8808992088475025, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.1091498926073693, 5);
  sqcRYGate(q, 3.120976201794281, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.303123167848395, 0);
  sqcRYGate(q, 2.1631016287697857, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.794350972885577, 0);
  sqcRYGate(q, 1.6758370293961082, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.15512079659379305, 2);
  sqcRYGate(q, -2.8672414507878288, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9387572470319946, 2);
  sqcRYGate(q, 0.009403222819407198, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5060998125076471, 4);
  sqcRYGate(q, 1.1581190586001728, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.823376955349049, 4);
  sqcRYGate(q, -3.117642147488746, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.744819205707586, 6);
  sqcRYGate(q, -3.0690045097975087, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4360373750196933, 6);
  sqcRYGate(q, -1.5055892760821097, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2509954507715564, 0);
  sqcRYGate(q, -0.3380110091167848, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.954283763077676, 0);
  sqcRYGate(q, 2.6412135728114308, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1233579328873344, 2);
  sqcRYGate(q, 0.33457884352950007, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.135722824328752, 2);
  sqcRYGate(q, -0.011493530076140068, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.1013509183739174, 4);
  sqcRYGate(q, 1.666039147888758, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.23506809444977161, 4);
  sqcRYGate(q, 2.9613590014738205, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.09125701661785, 1);
  sqcRYGate(q, -1.8271602998672873, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.14936936165005124, 1);
  sqcRYGate(q, 3.095847171312968, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5082935477937187, 3);
  sqcRYGate(q, -1.3225156737520318, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.115954139669846, 3);
  sqcRYGate(q, 0.03467004806427365, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.4121380355804902, 5);
  sqcRYGate(q, -0.6702255701877275, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.12088316138038305, 5);
  sqcRYGate(q, -0.16707493533250573, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.1532226402552235, 0);
  sqcRYGate(q, 0.037200641458545895, 1);
  sqcRYGate(q, -0.436927050100949, 2);
  sqcRYGate(q, 0.06733763789568012, 3);
  sqcRYGate(q, 3.000580492473689, 4);
  sqcRYGate(q, 3.0583783323485334, 5);
  sqcRYGate(q, 2.8278621429462976, 6);
  sqcRYGate(q, 2.3820290562787556, 7);

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
