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

  sqcRYGate(q, 2.9751573542830694, 0);
  sqcRZGate(q, 2.991468881734928, 0);
  sqcRYGate(q, -1.570796423458479, 1);
  sqcRZGate(q, -1.2874999694592768, 1);
  sqcRYGate(q, 1.5707972044172953, 2);
  sqcRZGate(q, 3.1415923929938714, 2);
  sqcRYGate(q, 1.5707967602893467, 3);
  sqcRZGate(q, 2.938506178029143, 3);
  sqcRYGate(q, 3.1415910227336052, 4);
  sqcRZGate(q, -1.4146185116089196, 4);
  sqcRYGate(q, 6.403853770003464e-07, 5);
  sqcRZGate(q, 1.8292700822637933, 5);
  sqcRYGate(q, 1.0813333976158622e-06, 6);
  sqcRZGate(q, -2.273891046174529, 6);
  sqcRYGate(q, -7.033787623392411e-07, 7);
  sqcRZGate(q, 2.881889698543395, 7);
  sqcRYGate(q, -1.574316702633125e-06, 8);
  sqcRZGate(q, -1.2787843289676404, 8);
  sqcRYGate(q, -3.141590689723176, 9);
  sqcRZGate(q, 1.8483523786952487, 9);
  sqcRYGate(q, 3.1415922594732786, 10);
  sqcRZGate(q, 2.8218259933348313, 10);
  sqcRYGate(q, -3.503941137239508e-09, 11);
  sqcRZGate(q, 1.5483175592118623, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 1.2242146670013235e-06, 0);
  sqcRZGate(q, 0.1501119232728483, 0);
  sqcRYGate(q, 3.141592455425879, 1);
  sqcRZGate(q, -1.2875002452146682, 1);
  sqcRYGate(q, 1.5705777392473166, 2);
  sqcRZGate(q, -1.7028097230993573, 2);
  sqcRYGate(q, -3.1413747254815236, 3);
  sqcRZGate(q, -0.2030874683797107, 3);
  sqcRYGate(q, 3.578458338537871e-07, 4);
  sqcRZGate(q, -2.813426482312373, 4);
  sqcRYGate(q, -3.1415906472138606, 5);
  sqcRZGate(q, 2.4477547095464653, 5);
  sqcRYGate(q, -1.5707947179868214, 6);
  sqcRZGate(q, -1.5707965658786074, 6);
  sqcRYGate(q, 1.5708052497948937, 7);
  sqcRZGate(q, -0.12759655978196527, 7);
  sqcRYGate(q, 1.5707959746643194, 8);
  sqcRZGate(q, 1.5707969750767712, 8);
  sqcRYGate(q, -0.128503121488811, 9);
  sqcRZGate(q, 1.571060807758757, 9);
  sqcRYGate(q, -1.7900629157673198e-10, 10);
  sqcRZGate(q, 2.2786871290933326, 10);
  sqcRYGate(q, -7.239931146047351e-07, 11);
  sqcRZGate(q, 1.411727850413687, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 1.5707936476667026, 0);
  sqcRZGate(q, -3.1399009067126085, 0);
  sqcRYGate(q, 1.5707960894767745, 1);
  sqcRZGate(q, -2.8325833733778736, 1);
  sqcRYGate(q, -1.881881809419192, 2);
  sqcRZGate(q, 1.6508028615217478, 2);
  sqcRYGate(q, -1.5707965751136355, 3);
  sqcRZGate(q, -3.0644979780652646, 3);
  sqcRYGate(q, -1.5707937075897291, 4);
  sqcRZGate(q, 3.141555568558319, 4);
  sqcRYGate(q, 1.570798410455312, 5);
  sqcRZGate(q, -0.0001524050047470027, 5);
  sqcRYGate(q, 1.5707961307979332, 6);
  sqcRZGate(q, 3.0078475694324385, 6);
  sqcRYGate(q, -1.7676267328137023, 7);
  sqcRZGate(q, 1.6208354222643724, 7);
  sqcRYGate(q, -1.5707977400695254, 8);
  sqcRZGate(q, 0.9993389076431435, 8);
  sqcRYGate(q, -1.570794564522678, 9);
  sqcRZGate(q, -0.01116263869606606, 9);
  sqcRYGate(q, -1.5709307300717366, 10);
  sqcRZGate(q, -1.570797890857244, 10);
  sqcRYGate(q, -2.6746281690154925, 11);
  sqcRZGate(q, -1.5707976156496313, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -3.141591675148834, 0);
  sqcRZGate(q, 0.13406079289988745, 0);
  sqcRYGate(q, -9.323095628843703e-08, 1);
  sqcRZGate(q, -1.8475508277965185, 1);
  sqcRYGate(q, 6.59154601063261e-07, 2);
  sqcRZGate(q, -3.12985328697304, 2);
  sqcRYGate(q, -6.816903255213447e-07, 3);
  sqcRZGate(q, -0.35847988335566683, 3);
  sqcRYGate(q, -1.9495719326398406, 4);
  sqcRZGate(q, 0.13235376800041193, 4);
  sqcRYGate(q, 0.4056190042153397, 5);
  sqcRZGate(q, -2.1620594349260296, 5);
  sqcRYGate(q, 3.1415923994033355, 6);
  sqcRZGate(q, 0.4647186017474, 6);
  sqcRYGate(q, -4.454197517489433e-07, 7);
  sqcRZGate(q, 0.9042645323825714, 7);
  sqcRYGate(q, -3.1415851983382477, 8);
  sqcRZGate(q, -1.3453885301295638, 8);
  sqcRYGate(q, -1.489913314782805e-05, 9);
  sqcRZGate(q, -2.1510458559230754, 9);
  sqcRYGate(q, -1.5707993125569681, 10);
  sqcRZGate(q, -0.8409790091214083, 10);
  sqcRYGate(q, -1.570799797963261, 11);
  sqcRZGate(q, -0.5914166420454019, 11);

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
