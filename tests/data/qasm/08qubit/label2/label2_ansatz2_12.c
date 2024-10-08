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

  sqcRYGate(q, 0.0016057319478652075, 0);
  sqcRZGate(q, -1.3975275868362822, 0);
  sqcRYGate(q, 0.002854535248028449, 1);
  sqcRZGate(q, -1.5010668852413966, 1);
  sqcRYGate(q, 1.5707985164422433, 2);
  sqcRZGate(q, -3.127240837557113, 2);
  sqcRYGate(q, 1.5626816522830933, 3);
  sqcRZGate(q, 0.8324579287606078, 3);
  sqcRYGate(q, 0.4899162361923191, 4);
  sqcRZGate(q, 1.4927920280499398, 4);
  sqcRYGate(q, -0.42138728645518264, 5);
  sqcRZGate(q, -0.1133321871387319, 5);
  sqcRYGate(q, -0.5540573321298244, 6);
  sqcRZGate(q, 1.5455351620429947, 6);
  sqcRYGate(q, -2.680507574533031, 7);
  sqcRZGate(q, 0.8275020709027103, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.5739609115387942, 0);
  sqcRZGate(q, 1.550526541669809, 0);
  sqcRYGate(q, -1.5708870420457413, 1);
  sqcRZGate(q, -3.13938204242103, 1);
  sqcRYGate(q, 1.706514601475873, 2);
  sqcRZGate(q, -1.4987986774114805, 2);
  sqcRYGate(q, 0.006987152279499753, 3);
  sqcRZGate(q, -0.6891995631322265, 3);
  sqcRYGate(q, -1.7230705881615354, 4);
  sqcRZGate(q, -1.5377102470919652, 4);
  sqcRYGate(q, 2.457534024238707, 5);
  sqcRZGate(q, 3.046847100741964, 5);
  sqcRYGate(q, 1.0082589435567342, 6);
  sqcRZGate(q, 1.5640106838834367, 6);
  sqcRYGate(q, 1.093342324147165, 7);
  sqcRZGate(q, -1.0672246907476437, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -3.1405923240431366, 0);
  sqcRZGate(q, 0.9851250941573533, 0);
  sqcRYGate(q, 2.563320657382081, 1);
  sqcRZGate(q, 0.7163117292598923, 1);
  sqcRYGate(q, 0.05340878983914532, 2);
  sqcRZGate(q, -0.3302521752267715, 2);
  sqcRYGate(q, -3.128082006531257, 3);
  sqcRZGate(q, 2.990633608129489, 3);
  sqcRYGate(q, -1.016837252527457, 4);
  sqcRZGate(q, 2.6948898429074664, 4);
  sqcRYGate(q, -1.9085835633827521, 5);
  sqcRZGate(q, 1.1399019576603768, 5);
  sqcRYGate(q, 1.1775402795468075, 6);
  sqcRZGate(q, -2.9719735398848117, 6);
  sqcRYGate(q, 2.433789236402977, 7);
  sqcRZGate(q, 1.8583919069878307, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.0039143566831829745, 0);
  sqcRZGate(q, 1.7172545638879289, 0);
  sqcRYGate(q, 3.1412715769339115, 1);
  sqcRZGate(q, -2.0061103216362275, 1);
  sqcRYGate(q, 0.013350601239292458, 2);
  sqcRZGate(q, 1.0729424062083905, 2);
  sqcRYGate(q, -0.02822057373636487, 3);
  sqcRZGate(q, -1.2112223956366046, 3);
  sqcRYGate(q, 2.4925596611659873, 4);
  sqcRZGate(q, -0.2828473565537167, 4);
  sqcRYGate(q, 1.149067747555205, 5);
  sqcRZGate(q, -2.5529541483336926, 5);
  sqcRYGate(q, 2.928360775871706, 6);
  sqcRZGate(q, 3.0035432634974972, 6);
  sqcRYGate(q, 0.3959206241280653, 7);
  sqcRZGate(q, 2.8682023668145433, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 3.1409890263994757, 0);
  sqcRZGate(q, 2.7256337468390393, 0);
  sqcRYGate(q, 3.135142630681806, 1);
  sqcRZGate(q, 1.9937946318428423, 1);
  sqcRYGate(q, 3.0940838227309606, 2);
  sqcRZGate(q, -0.7021126471404583, 2);
  sqcRYGate(q, -2.879405138008951, 3);
  sqcRZGate(q, -1.5338276336495538, 3);
  sqcRYGate(q, 1.8235920697373913, 4);
  sqcRZGate(q, 1.6758858371695042, 4);
  sqcRYGate(q, 2.1777908939683, 5);
  sqcRZGate(q, -1.1740413466177717, 5);
  sqcRYGate(q, -1.8102666448170668, 6);
  sqcRZGate(q, 1.3908806403059784, 6);
  sqcRYGate(q, 2.5298372890565615, 7);
  sqcRZGate(q, 2.411549956562492, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.092833919020494, 0);
  sqcRZGate(q, -1.5715075738577382, 0);
  sqcRYGate(q, -0.1560896835204515, 1);
  sqcRZGate(q, -1.5857511198161822, 1);
  sqcRYGate(q, 2.8595782652202404, 2);
  sqcRZGate(q, -1.5123519181814986, 2);
  sqcRYGate(q, 2.216466160872141, 3);
  sqcRZGate(q, -1.6013496583707116, 3);
  sqcRYGate(q, -1.4852086814078156, 4);
  sqcRZGate(q, -2.82610043604233, 4);
  sqcRYGate(q, -2.2490942476493645, 5);
  sqcRZGate(q, -1.9804139796094675, 5);
  sqcRYGate(q, 2.160492136588698, 6);
  sqcRZGate(q, -0.7278909984670277, 6);
  sqcRYGate(q, -2.127099458251314, 7);
  sqcRZGate(q, 1.80335458884064, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.561475760048386, 0);
  sqcRZGate(q, 1.579961384244092, 0);
  sqcRYGate(q, 0.33242845761846385, 1);
  sqcRZGate(q, 2.1718913535836686, 1);
  sqcRYGate(q, -2.1017815008652487, 2);
  sqcRZGate(q, 0.5199809533704843, 2);
  sqcRYGate(q, -1.7676415463303996, 3);
  sqcRZGate(q, -1.5571730314063554, 3);
  sqcRYGate(q, -3.0584520475324304, 4);
  sqcRZGate(q, -2.9764058569398673, 4);
  sqcRYGate(q, -2.995435844131744, 5);
  sqcRZGate(q, 1.5358794828184053, 5);
  sqcRYGate(q, -1.2622511449299152, 6);
  sqcRZGate(q, 2.734564021222462, 6);
  sqcRYGate(q, -3.131044453412296, 7);
  sqcRZGate(q, 2.5332958047579397, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.505603302391778, 0);
  sqcRZGate(q, 1.5622154058972937, 0);
  sqcRYGate(q, -3.1395901974706324, 1);
  sqcRZGate(q, 2.161457947109103, 1);
  sqcRYGate(q, 0.005802255846332297, 2);
  sqcRZGate(q, -2.002865680266585, 2);
  sqcRYGate(q, 0.33899012145806307, 3);
  sqcRZGate(q, -1.5996188551484776, 3);
  sqcRYGate(q, 2.0333177014247945, 4);
  sqcRZGate(q, 1.4494819811261406, 4);
  sqcRYGate(q, -2.1680137271080984, 5);
  sqcRZGate(q, -2.2518287246240942, 5);
  sqcRYGate(q, 1.415839199607649, 6);
  sqcRZGate(q, -2.551051090855794, 6);
  sqcRYGate(q, -2.0556954372434477, 7);
  sqcRZGate(q, -1.62080238891213, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.060854772163885, 0);
  sqcRZGate(q, 2.002126184788212, 0);
  sqcRYGate(q, 1.1625246087959002, 1);
  sqcRZGate(q, 1.5675974270817308, 1);
  sqcRYGate(q, -0.009461300968249375, 2);
  sqcRZGate(q, -0.0894663072559599, 2);
  sqcRYGate(q, -0.6674758058529724, 3);
  sqcRZGate(q, -0.15879561829247743, 3);
  sqcRYGate(q, -1.9890481405101053, 4);
  sqcRZGate(q, 1.389209540920933, 4);
  sqcRYGate(q, -2.010076611161766, 5);
  sqcRZGate(q, 2.5737364931952564, 5);
  sqcRYGate(q, -2.2085751177727952, 6);
  sqcRZGate(q, 0.6023543053620938, 6);
  sqcRYGate(q, -2.729053627039207, 7);
  sqcRZGate(q, 2.0263351438215427, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -3.134525072011468, 0);
  sqcRZGate(q, -1.1350594799201217, 0);
  sqcRYGate(q, 1.1210970288767754, 1);
  sqcRZGate(q, 1.6319186638989283, 1);
  sqcRYGate(q, 2.169444126722368, 2);
  sqcRZGate(q, -1.5720596078352758, 2);
  sqcRYGate(q, 0.003935869076238919, 3);
  sqcRZGate(q, -2.959424599656423, 3);
  sqcRYGate(q, 1.9012572493439146, 4);
  sqcRZGate(q, -1.9783125331383955, 4);
  sqcRYGate(q, 1.0192903720730975, 5);
  sqcRZGate(q, -0.8733683377026268, 5);
  sqcRYGate(q, 1.3226555516256617, 6);
  sqcRZGate(q, 1.9902105875260077, 6);
  sqcRYGate(q, -2.1284103288032776, 7);
  sqcRZGate(q, 1.1829110800191052, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.31167182860225495, 0);
  sqcRZGate(q, -1.5722616298806145, 0);
  sqcRYGate(q, -0.004260146533837252, 1);
  sqcRZGate(q, 1.510339440351995, 1);
  sqcRYGate(q, 1.5446713598041475, 2);
  sqcRZGate(q, -1.556207212781799, 2);
  sqcRYGate(q, -0.2502735980883397, 3);
  sqcRZGate(q, 2.546959418869951, 3);
  sqcRYGate(q, 2.2406395219474575, 4);
  sqcRZGate(q, -0.07178773864144233, 4);
  sqcRYGate(q, -1.3316473523268693, 5);
  sqcRZGate(q, -0.8452751458954326, 5);
  sqcRYGate(q, 1.4999423573326176, 6);
  sqcRZGate(q, 2.550479751479488, 6);
  sqcRYGate(q, -1.7769132462920758, 7);
  sqcRZGate(q, 1.7838406125685486, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.6729068662917308, 0);
  sqcRZGate(q, 1.6203175554619342, 0);
  sqcRYGate(q, -1.4379482608424954, 1);
  sqcRZGate(q, 1.7824620251536798, 1);
  sqcRYGate(q, -2.7916449274756023, 2);
  sqcRZGate(q, 1.512215963339064, 2);
  sqcRYGate(q, 3.134822526072288, 3);
  sqcRZGate(q, -2.5085485511136882, 3);
  sqcRYGate(q, 0.5480827587381789, 4);
  sqcRZGate(q, 1.0840997709245155, 4);
  sqcRYGate(q, 0.2642018920166418, 5);
  sqcRZGate(q, 0.11754077037415377, 5);
  sqcRYGate(q, -0.5946503839281112, 6);
  sqcRZGate(q, -1.743343464749776, 6);
  sqcRYGate(q, -2.0835248646891973, 7);
  sqcRZGate(q, -0.3209198643211648, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.3540167750522463, 0);
  sqcRZGate(q, -1.5802809576119503, 0);
  sqcRYGate(q, 3.1361004787972795, 1);
  sqcRZGate(q, 1.7893759887475316, 1);
  sqcRYGate(q, -2.787259146740164, 2);
  sqcRZGate(q, -1.8504077754937667, 2);
  sqcRYGate(q, -2.9432168097021525, 3);
  sqcRZGate(q, 2.5124888177354907, 3);
  sqcRYGate(q, 1.4007126314200313, 4);
  sqcRZGate(q, -2.1540099669748245, 4);
  sqcRYGate(q, 1.6156235447535177, 5);
  sqcRZGate(q, -2.292322466121882, 5);
  sqcRYGate(q, -2.0899608326345556, 6);
  sqcRZGate(q, 0.5358960108100325, 6);
  sqcRYGate(q, 0.6839787346728706, 7);
  sqcRZGate(q, 2.6209267385585804, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.2380950969077151, 0);
  sqcRZGate(q, 1.5610257088557817, 0);
  sqcRYGate(q, -1.6353045623466658, 1);
  sqcRZGate(q, -1.7606837256743566, 1);
  sqcRYGate(q, 1.7912353375483894, 2);
  sqcRZGate(q, -1.6165979545757105, 2);
  sqcRYGate(q, -0.4061361743797356, 3);
  sqcRZGate(q, -1.337103516322797, 3);
  sqcRYGate(q, 3.0558460389806092, 4);
  sqcRZGate(q, 2.6279929189894133, 4);
  sqcRYGate(q, -0.12339719404101858, 5);
  sqcRZGate(q, -2.9850469179414496, 5);
  sqcRYGate(q, -3.136514588751151, 6);
  sqcRZGate(q, 2.6843256578397003, 6);
  sqcRYGate(q, 0.03540287309924928, 7);
  sqcRZGate(q, -3.098249788827134, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.5740652993449133, 0);
  sqcRZGate(q, 0.266052880899427, 0);
  sqcRYGate(q, 3.0986371060657105, 1);
  sqcRZGate(q, 2.5187138848063637, 1);
  sqcRYGate(q, -0.4493262291901861, 2);
  sqcRZGate(q, 1.2653259110150537, 2);
  sqcRYGate(q, 1.521884464672544, 3);
  sqcRZGate(q, -0.19958886064602555, 3);
  sqcRYGate(q, 0.9994836711734543, 4);
  sqcRZGate(q, 2.828622850526405, 4);
  sqcRYGate(q, -2.688627627280753, 5);
  sqcRZGate(q, 3.1025302240208905, 5);
  sqcRYGate(q, -0.8841133499491237, 6);
  sqcRZGate(q, 1.380478372365835, 6);
  sqcRYGate(q, 2.817914390542597, 7);
  sqcRZGate(q, 2.9345518981109313, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.9283569829263496, 0);
  sqcRZGate(q, -3.010464841799121, 0);
  sqcRYGate(q, -2.915934405945804, 1);
  sqcRZGate(q, -0.5845891088077515, 1);
  sqcRYGate(q, 3.1406563163522763, 2);
  sqcRZGate(q, -0.47178015765409625, 2);
  sqcRYGate(q, 3.1337420419423494, 3);
  sqcRZGate(q, 1.2315850001080249, 3);
  sqcRYGate(q, -0.33352161338686687, 4);
  sqcRZGate(q, -0.22415157862023885, 4);
  sqcRYGate(q, 2.7265768423160215, 5);
  sqcRZGate(q, -1.8954201056810387, 5);
  sqcRYGate(q, 0.37749793784959085, 6);
  sqcRZGate(q, 2.6871181392459076, 6);
  sqcRYGate(q, -2.7671501099674245, 7);
  sqcRZGate(q, 0.5406557288822048, 7);

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
