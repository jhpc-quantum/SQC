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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -1.57148679415317, 0);
  sqcRZGate(q, -0.0012731996381383527, 0);
  sqcRYGate(q, 3.14153016494622, 1);
  sqcRZGate(q, 0.39052835696619487, 1);
  sqcRYGate(q, -1.90752999168901, 2);
  sqcRZGate(q, -0.2519035901261161, 2);
  sqcRYGate(q, -1.5707227843681304, 3);
  sqcRZGate(q, 1.2914935681554112, 3);
  sqcRYGate(q, 0.43829741446264425, 4);
  sqcRZGate(q, -3.1415479933322144, 4);
  sqcRYGate(q, -1.5708129971579154, 5);
  sqcRZGate(q, -1.5529205898531613, 5);
  sqcRYGate(q, 3.1415672446934844, 6);
  sqcRZGate(q, -2.577502802582408, 6);
  sqcRYGate(q, -0.0031268287203776463, 7);
  sqcRZGate(q, 1.7776746375499668, 7);
  sqcRYGate(q, -0.0015415636967066604, 8);
  sqcRZGate(q, 2.752704882063547, 8);
  sqcRYGate(q, -0.007963748367794565, 9);
  sqcRZGate(q, -2.002354880773538, 9);
  sqcRYGate(q, 1.6207387679896188, 10);
  sqcRZGate(q, -1.2214459208530197, 10);
  sqcRYGate(q, 2.9123669632178957, 11);
  sqcRZGate(q, -1.4319171459243132, 11);
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
  sqcRYGate(q, 1.5704582077407119, 0);
  sqcRZGate(q, -0.23892118514894722, 0);
  sqcRYGate(q, -0.0008170299098191336, 1);
  sqcRZGate(q, -2.6243743486767324, 1);
  sqcRYGate(q, -1.5707857286668236, 2);
  sqcRZGate(q, -1.5717302671674078, 2);
  sqcRYGate(q, -0.006078660887844853, 3);
  sqcRZGate(q, 1.5790602969098169, 3);
  sqcRYGate(q, 1.5709696238996058, 4);
  sqcRZGate(q, -1.7798778969070002, 4);
  sqcRYGate(q, -0.14732221065868123, 5);
  sqcRZGate(q, -0.008823151442652572, 5);
  sqcRYGate(q, -1.5710458723450513, 6);
  sqcRZGate(q, 0.3678001730995133, 6);
  sqcRYGate(q, -1.576968920341104, 7);
  sqcRZGate(q, 2.0484920247980396, 7);
  sqcRYGate(q, 3.139249024765278, 8);
  sqcRZGate(q, -2.8972255166765066, 8);
  sqcRYGate(q, -0.004032285228062094, 9);
  sqcRZGate(q, 1.988545327949243, 9);
  sqcRYGate(q, 0.37534255771348357, 10);
  sqcRZGate(q, 1.9212618514567497, 10);
  sqcRYGate(q, -2.8459112853819644, 11);
  sqcRZGate(q, 1.6203844791858688, 11);
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
  sqcRYGate(q, -3.1415514299101295, 0);
  sqcRZGate(q, 1.584879574842537, 0);
  sqcRYGate(q, 1.5707686746703304, 1);
  sqcRZGate(q, -1.9614965969134674, 1);
  sqcRYGate(q, 1.55986656883048, 2);
  sqcRZGate(q, 2.770583621832801, 2);
  sqcRYGate(q, 0.00010990040513192412, 3);
  sqcRZGate(q, -1.314193196585931, 3);
  sqcRYGate(q, 3.185450532925447e-05, 4);
  sqcRZGate(q, -1.0774436691429674, 4);
  sqcRYGate(q, 1.5714629168639773, 5);
  sqcRZGate(q, 2.7024482276805397, 5);
  sqcRYGate(q, 0.003463540383981112, 6);
  sqcRZGate(q, -2.6480670777300777, 6);
  sqcRYGate(q, -3.1415388904788224, 7);
  sqcRZGate(q, 2.049592047355546, 7);
  sqcRYGate(q, 1.5763325622221478, 8);
  sqcRZGate(q, -0.5687661233461263, 8);
  sqcRYGate(q, 3.140999184322239, 9);
  sqcRZGate(q, 2.5200339520411066, 9);
  sqcRYGate(q, 1.729924378665799, 10);
  sqcRZGate(q, 2.9275900847568366, 10);
  sqcRYGate(q, -3.0162219083383053, 11);
  sqcRZGate(q, 0.23875861044991528, 11);
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
  sqcRYGate(q, 2.334984192765333, 0);
  sqcRZGate(q, 0.00013576928239740976, 0);
  sqcRYGate(q, -1.6005786789680911, 1);
  sqcRZGate(q, 1.949610221846907, 1);
  sqcRYGate(q, 3.1404308492405555, 2);
  sqcRZGate(q, 1.1996589534183109, 2);
  sqcRYGate(q, 0.08154137256822924, 3);
  sqcRZGate(q, 1.986070610417095, 3);
  sqcRYGate(q, -0.19687301033897575, 4);
  sqcRZGate(q, 2.7220472869470522, 4);
  sqcRYGate(q, -1.168516552710621, 5);
  sqcRZGate(q, -0.0875851797361251, 5);
  sqcRYGate(q, 0.1077705766904647, 6);
  sqcRZGate(q, -1.5983874914389604, 6);
  sqcRYGate(q, -1.5786391803355546, 7);
  sqcRZGate(q, 0.5592190389010269, 7);
  sqcRYGate(q, -3.140450485869853, 8);
  sqcRZGate(q, 2.5962258260810254, 8);
  sqcRYGate(q, -0.9616381157187275, 9);
  sqcRZGate(q, 1.1759453210752142, 9);
  sqcRYGate(q, -0.41005343530036503, 10);
  sqcRZGate(q, 1.7003248984107238, 10);
  sqcRYGate(q, -0.45357375638531067, 11);
  sqcRZGate(q, -1.6344824469760564, 11);
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
  sqcRYGate(q, -2.402408554412661, 0);
  sqcRZGate(q, -3.1414139547053024, 0);
  sqcRYGate(q, 0.0003402296369312782, 1);
  sqcRZGate(q, 2.666775886813892, 1);
  sqcRYGate(q, 1.5701230263795813, 2);
  sqcRZGate(q, 2.6010560757822314, 2);
  sqcRYGate(q, 0.00029840636273000367, 3);
  sqcRZGate(q, 0.4476764438403264, 3);
  sqcRYGate(q, -3.1411700665299267, 4);
  sqcRZGate(q, -0.8030147291274751, 4);
  sqcRYGate(q, 3.141106557390131, 5);
  sqcRZGate(q, -1.8922978750341581, 5);
  sqcRYGate(q, 3.1415845740814015, 6);
  sqcRZGate(q, -0.7375216122413479, 6);
  sqcRYGate(q, 3.1412910646920627, 7);
  sqcRZGate(q, 1.6081551514237178, 7);
  sqcRYGate(q, 0.010808985793732795, 8);
  sqcRZGate(q, -1.2839836380960745, 8);
  sqcRYGate(q, -1.5769685986705637, 9);
  sqcRZGate(q, -1.5620872719431633, 9);
  sqcRYGate(q, -0.7236782723187721, 10);
  sqcRZGate(q, 1.923004204261738, 10);
  sqcRYGate(q, -0.0005673607200084494, 11);
  sqcRZGate(q, 0.7445860282717138, 11);
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
  sqcRYGate(q, -1.5711858824458773, 0);
  sqcRZGate(q, -3.135231414649111, 0);
  sqcRYGate(q, 1.037845880144694, 1);
  sqcRZGate(q, -3.0240016954157047, 1);
  sqcRYGate(q, -3.1411694948049695, 2);
  sqcRZGate(q, -2.114588336760243, 2);
  sqcRYGate(q, 3.1413732336948317, 3);
  sqcRZGate(q, -1.6691860616323442, 3);
  sqcRYGate(q, 3.141514112549772, 4);
  sqcRZGate(q, 2.4849337431260814, 4);
  sqcRYGate(q, -1.9684028224087786, 5);
  sqcRZGate(q, -0.2531923119969859, 5);
  sqcRYGate(q, -1.6409917704285704, 6);
  sqcRZGate(q, -2.384595000852791, 6);
  sqcRYGate(q, -8.105649772716106e-05, 7);
  sqcRZGate(q, -0.05774600657859502, 7);
  sqcRYGate(q, 1.5727474750922201, 8);
  sqcRZGate(q, 2.0278065514072074, 8);
  sqcRYGate(q, -1.5535128854255158, 9);
  sqcRZGate(q, -2.0717427515302598, 9);
  sqcRYGate(q, 1.2948460523706993, 10);
  sqcRZGate(q, -0.897932656093512, 10);
  sqcRYGate(q, -3.141551737496118, 11);
  sqcRZGate(q, 2.8861941298649825, 11);
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
  sqcRYGate(q, -3.077032638456825, 0);
  sqcRZGate(q, 0.6958700302491848, 0);
  sqcRYGate(q, -0.47123226884749136, 1);
  sqcRZGate(q, 1.9062329834495237, 1);
  sqcRYGate(q, -1.5660638251341563, 2);
  sqcRZGate(q, -0.6361068609652332, 2);
  sqcRYGate(q, 3.1414982887445664, 3);
  sqcRZGate(q, -0.8460710018924349, 3);
  sqcRYGate(q, 1.7832869741396407, 4);
  sqcRZGate(q, 0.1062326570797474, 4);
  sqcRYGate(q, 1.5661444453214044, 5);
  sqcRZGate(q, 0.234468983283655, 5);
  sqcRYGate(q, -0.00046276777405260695, 6);
  sqcRZGate(q, 1.0117010279935732, 6);
  sqcRYGate(q, -0.00829522017050635, 7);
  sqcRZGate(q, 2.4650817401214886, 7);
  sqcRYGate(q, -0.6725468731609228, 8);
  sqcRZGate(q, 3.1211820026779886, 8);
  sqcRYGate(q, -1.5712229840617384, 9);
  sqcRZGate(q, -1.5707831130065646, 9);
  sqcRYGate(q, 1.2884720893327217, 10);
  sqcRZGate(q, 1.2541015907788244, 10);
  sqcRYGate(q, 3.1415745788663907, 11);
  sqcRZGate(q, -0.005174438652394078, 11);
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
  sqcRYGate(q, 0.0003485712774066788, 0);
  sqcRZGate(q, 2.43968050109689, 0);
  sqcRYGate(q, 0.5668583397493698, 1);
  sqcRZGate(q, 2.7113453698047842, 1);
  sqcRYGate(q, 1.215825263871375, 2);
  sqcRZGate(q, 3.0157364991847615, 2);
  sqcRYGate(q, -3.116844026100678, 3);
  sqcRZGate(q, 1.5350599398735874, 3);
  sqcRYGate(q, 0.19133844697520616, 4);
  sqcRZGate(q, -2.8138280000426046, 4);
  sqcRYGate(q, 3.1411407079231757, 5);
  sqcRZGate(q, -1.697303308234134, 5);
  sqcRYGate(q, 3.1412880351292225, 6);
  sqcRZGate(q, -1.6897909623840885, 6);
  sqcRYGate(q, -3.1415734253238505, 7);
  sqcRZGate(q, 0.611919802564154, 7);
  sqcRYGate(q, 2.594623968090559, 8);
  sqcRZGate(q, -0.01927211396972795, 8);
  sqcRYGate(q, -1.571259173664152, 9);
  sqcRZGate(q, 1.5703875760196475, 9);
  sqcRYGate(q, -1.570696436310332, 10);
  sqcRZGate(q, -0.008014662355834368, 10);
  sqcRYGate(q, 1.0009395596156017, 11);
  sqcRZGate(q, -0.0003613055062006154, 11);
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
  sqcRYGate(q, -3.1414241983165976, 0);
  sqcRZGate(q, 0.6053951445683511, 0);
  sqcRYGate(q, -1.5431891602024992, 1);
  sqcRZGate(q, 1.152772420174567, 1);
  sqcRYGate(q, -0.0013238160520457432, 2);
  sqcRZGate(q, 2.807686112824593, 2);
  sqcRYGate(q, -3.1415643639998745, 3);
  sqcRZGate(q, 0.9055722535665374, 3);
  sqcRYGate(q, 1.6559052647848413, 4);
  sqcRZGate(q, 0.3232500990602386, 4);
  sqcRYGate(q, 0.5579713367929688, 5);
  sqcRZGate(q, 1.778580566474738, 5);
  sqcRYGate(q, -3.140548157823118, 6);
  sqcRZGate(q, 0.7629467356728252, 6);
  sqcRYGate(q, -3.1415841103573565, 7);
  sqcRZGate(q, -0.5515942416683197, 7);
  sqcRYGate(q, -0.027091489816670308, 8);
  sqcRZGate(q, 1.6032446351478569, 8);
  sqcRYGate(q, 0.8397009851505396, 9);
  sqcRZGate(q, 1.5709450659159678, 9);
  sqcRYGate(q, -3.141406896883315, 10);
  sqcRZGate(q, -0.006112736298539367, 10);
  sqcRYGate(q, 1.853675980328267, 11);
  sqcRZGate(q, -1.5710793777551268, 11);
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
  sqcRYGate(q, 0.03259523038274317, 0);
  sqcRZGate(q, 0.06481554763304231, 0);
  sqcRYGate(q, -1.3466867182314617, 1);
  sqcRZGate(q, -1.0614507097706016, 1);
  sqcRYGate(q, -1.3662951238031589, 2);
  sqcRZGate(q, 1.0924552197358757, 2);
  sqcRYGate(q, -3.123211009764507, 3);
  sqcRZGate(q, -2.336134748783149, 3);
  sqcRYGate(q, -0.0028127007695631628, 4);
  sqcRZGate(q, -0.32084957041260276, 4);
  sqcRYGate(q, 3.141359383519468, 5);
  sqcRZGate(q, 2.6929255214796544, 5);
  sqcRYGate(q, -3.140186257203226, 6);
  sqcRZGate(q, -2.7195205470107524, 6);
  sqcRYGate(q, -3.1415536617920945, 7);
  sqcRZGate(q, 0.6953441369629783, 7);
  sqcRYGate(q, 0.4695280206451193, 8);
  sqcRZGate(q, 1.5778405699983769, 8);
  sqcRYGate(q, 1.5720405391819827, 9);
  sqcRZGate(q, 1.5708105623891162, 9);
  sqcRYGate(q, 1.5708042154919022, 10);
  sqcRZGate(q, 1.5802097783348397, 10);
  sqcRYGate(q, -1.5705293873502209, 11);
  sqcRZGate(q, -0.09710808567721951, 11);
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
  sqcRYGate(q, 1.562550828853654, 0);
  sqcRZGate(q, 0.03160733183336541, 0);
  sqcRYGate(q, -3.116285267108228, 1);
  sqcRZGate(q, -2.3645582321999643, 1);
  sqcRYGate(q, 0.0007675623470531079, 2);
  sqcRZGate(q, 2.514495681299281, 2);
  sqcRYGate(q, -3.1415883616256033, 3);
  sqcRZGate(q, -1.8082089670148012, 3);
  sqcRYGate(q, -1.957321137391552, 4);
  sqcRZGate(q, 2.2598889707996124, 4);
  sqcRYGate(q, 1.1897476726229037, 5);
  sqcRZGate(q, 1.6234033538884418, 5);
  sqcRYGate(q, 1.5707228623191698, 6);
  sqcRZGate(q, 0.716520436297863, 6);
  sqcRYGate(q, -1.5717244995686155, 7);
  sqcRZGate(q, 0.00983685337394302, 7);
  sqcRYGate(q, -1.5342646397606559, 8);
  sqcRZGate(q, 3.139039328184533, 8);
  sqcRYGate(q, 1.5706975825797678, 9);
  sqcRZGate(q, -0.00874939788174256, 9);
  sqcRYGate(q, -1.570764562254352, 10);
  sqcRZGate(q, 3.1412187474049977, 10);
  sqcRYGate(q, -1.5669853179711266, 11);
  sqcRZGate(q, 1.5713396956811483, 11);
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
  sqcRYGate(q, 0.03155810054964258, 0);
  sqcRZGate(q, 3.1101775258583153, 0);
  sqcRYGate(q, 3.1412558056868054, 1);
  sqcRZGate(q, -0.2661806243775764, 1);
  sqcRYGate(q, 0.019442705749595113, 2);
  sqcRZGate(q, 0.30276843157287375, 2);
  sqcRYGate(q, 1.5685002863856186, 3);
  sqcRZGate(q, -2.2906820548438076, 3);
  sqcRYGate(q, 0.00011440329736640062, 4);
  sqcRZGate(q, -2.4167940161966515, 4);
  sqcRYGate(q, 3.14135042739124, 5);
  sqcRZGate(q, 0.48827746734218813, 5);
  sqcRYGate(q, 5.8216203314260264e-05, 6);
  sqcRZGate(q, 2.8386160720864604, 6);
  sqcRYGate(q, -0.06417556017084884, 7);
  sqcRZGate(q, -0.34540381130069664, 7);
  sqcRYGate(q, 1.5704383711711385, 8);
  sqcRZGate(q, 0.19645096208623145, 8);
  sqcRYGate(q, 1.571157795283311, 9);
  sqcRZGate(q, 1.8667561098200063, 9);
  sqcRYGate(q, -1.5708132867921398, 10);
  sqcRZGate(q, -1.5729237761846726, 10);
  sqcRYGate(q, 1.571019235308574, 11);
  sqcRZGate(q, 0.00031974837191395267, 11);
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
  sqcRYGate(q, -1.5625987041319318, 0);
  sqcRZGate(q, -1.1456472626592094, 0);
  sqcRYGate(q, 1.57092828547507, 1);
  sqcRZGate(q, 2.813031860060365, 1);
  sqcRYGate(q, -3.1415703618465303, 2);
  sqcRZGate(q, 1.780140341599905, 2);
  sqcRYGate(q, 8.956956402138107e-05, 3);
  sqcRZGate(q, -1.11140636084359, 3);
  sqcRYGate(q, -3.1271669244010263, 4);
  sqcRZGate(q, 2.5094400020588448, 4);
  sqcRYGate(q, 1.57867346053885, 5);
  sqcRZGate(q, -0.326628033688057, 5);
  sqcRYGate(q, 3.1381053412942785, 6);
  sqcRZGate(q, 3.004782779072649, 6);
  sqcRYGate(q, 2.9842216736852833e-05, 7);
  sqcRZGate(q, 0.06541549345660519, 7);
  sqcRYGate(q, -2.233547435892547e-05, 8);
  sqcRZGate(q, -0.746573775910667, 8);
  sqcRYGate(q, -3.141496680664415, 9);
  sqcRZGate(q, 1.5953431262678646, 9);
  sqcRYGate(q, 1.570801146886649, 10);
  sqcRZGate(q, -2.120821871316696, 10);
  sqcRYGate(q, -1.5712792835856408, 11);
  sqcRZGate(q, -1.8396424639171256, 11);

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
