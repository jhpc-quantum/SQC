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

  sqcRYGate(q, 0.0018239851979835464, 0);
  sqcRZGate(q, 0.4254274847421854, 0);
  sqcRYGate(q, -1.5099238184627213, 1);
  sqcRZGate(q, -1.4897264185146077, 1);
  sqcRYGate(q, -1.1369640597567487, 2);
  sqcRZGate(q, 1.4680931103631654, 2);
  sqcRYGate(q, 2.3982411364801615, 3);
  sqcRZGate(q, -0.4085327764854268, 3);
  sqcRYGate(q, 3.0695903473583965, 4);
  sqcRZGate(q, 3.1216794016010905, 4);
  sqcRYGate(q, -3.1108258291720827, 5);
  sqcRZGate(q, -2.7676758423331465, 5);
  sqcRYGate(q, -1.3843078527759864, 6);
  sqcRZGate(q, -2.5865466014484806, 6);
  sqcRYGate(q, -2.770559727610377, 7);
  sqcRZGate(q, 0.4156592815099453, 7);
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
  sqcRYGate(q, 3.1037229278673686, 0);
  sqcRZGate(q, -2.8211520455645225, 0);
  sqcRYGate(q, 0.15093553974778154, 1);
  sqcRZGate(q, -0.12947639868687233, 1);
  sqcRYGate(q, -2.972035575737454, 2);
  sqcRZGate(q, 3.1036123179791697, 2);
  sqcRYGate(q, -0.0018303737850695612, 3);
  sqcRZGate(q, -2.131275300238429, 3);
  sqcRYGate(q, 3.138771548318189, 4);
  sqcRZGate(q, 1.9206651297747346, 4);
  sqcRYGate(q, 1.5643037631504215, 5);
  sqcRZGate(q, -0.5922480575434274, 5);
  sqcRYGate(q, 0.02485355349444838, 6);
  sqcRZGate(q, 0.16385472312440835, 6);
  sqcRYGate(q, -1.8705997162989656, 7);
  sqcRZGate(q, -0.6110525304905661, 7);
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
  sqcRYGate(q, -1.3872415426363993, 0);
  sqcRZGate(q, 1.7655888921981768, 0);
  sqcRYGate(q, 2.9909758883216266, 1);
  sqcRZGate(q, -1.9956525809376293, 1);
  sqcRYGate(q, 1.4172794932787065, 2);
  sqcRZGate(q, -0.7358919413361562, 2);
  sqcRYGate(q, -1.9096746305262755, 3);
  sqcRZGate(q, 0.2826452036725156, 3);
  sqcRYGate(q, 1.5565227910603585, 4);
  sqcRZGate(q, -1.08004706165823, 4);
  sqcRYGate(q, -1.9922555916050277, 5);
  sqcRZGate(q, -0.13929925957839817, 5);
  sqcRYGate(q, -1.9423692590965267, 6);
  sqcRZGate(q, 1.5224827161347678, 6);
  sqcRYGate(q, -0.017105861538732656, 7);
  sqcRZGate(q, 0.34258411666738586, 7);
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
  sqcRYGate(q, -0.3630832032416631, 0);
  sqcRZGate(q, 1.2813167186841106, 0);
  sqcRYGate(q, -3.139554285229318, 1);
  sqcRZGate(q, -0.327965617669685, 1);
  sqcRYGate(q, -0.00016422870785248733, 2);
  sqcRZGate(q, 1.867957214851245, 2);
  sqcRYGate(q, 3.141513837658162, 3);
  sqcRZGate(q, -0.8235739621128414, 3);
  sqcRYGate(q, -0.008947845047154665, 4);
  sqcRZGate(q, 0.2534673697178773, 4);
  sqcRYGate(q, -1.1641940357944887, 5);
  sqcRZGate(q, -3.0091819851574404, 5);
  sqcRYGate(q, -1.5419663643789674, 6);
  sqcRZGate(q, -1.5690105988702379, 6);
  sqcRYGate(q, 0.00974275435495579, 7);
  sqcRZGate(q, 0.7694127035455621, 7);
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
  sqcRYGate(q, 1.4284996310443507, 0);
  sqcRZGate(q, 2.5428684372677144, 0);
  sqcRYGate(q, -1.6068484151027802, 1);
  sqcRZGate(q, 2.0508346815731278, 1);
  sqcRYGate(q, -1.7320181506496706, 2);
  sqcRZGate(q, -0.054054928217649664, 2);
  sqcRYGate(q, -0.9597844859455549, 3);
  sqcRZGate(q, 1.4808727978206768, 3);
  sqcRYGate(q, -0.09253036096795696, 4);
  sqcRZGate(q, 2.04071095954437, 4);
  sqcRYGate(q, 2.000365267700082, 5);
  sqcRZGate(q, -1.4153315246790175, 5);
  sqcRYGate(q, -0.07530550957806968, 6);
  sqcRZGate(q, -1.4496330681946763, 6);
  sqcRYGate(q, -0.002886800256551843, 7);
  sqcRZGate(q, 1.2847796075872076, 7);
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
  sqcRYGate(q, 1.4349526452850714, 0);
  sqcRZGate(q, 2.2337226824209253, 0);
  sqcRYGate(q, -2.5780793038849614, 1);
  sqcRZGate(q, 3.11555779216028, 1);
  sqcRYGate(q, 3.1359298950488195, 2);
  sqcRZGate(q, 1.5012808038827874, 2);
  sqcRYGate(q, -1.2438348910133732, 3);
  sqcRZGate(q, -1.1480431283823709, 3);
  sqcRYGate(q, -0.0026686897799710796, 4);
  sqcRZGate(q, -0.32572733400450105, 4);
  sqcRYGate(q, -1.7013909049361864, 5);
  sqcRZGate(q, -2.4396161426401375, 5);
  sqcRYGate(q, -1.623171096157803, 6);
  sqcRZGate(q, 0.39269528465645376, 6);
  sqcRYGate(q, 0.8780970007518274, 7);
  sqcRZGate(q, -0.09614779411834729, 7);
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
  sqcRYGate(q, -0.1546661198567027, 0);
  sqcRZGate(q, 0.1112148584470889, 0);
  sqcRYGate(q, -0.7685259383114361, 1);
  sqcRZGate(q, -0.007147725333918941, 1);
  sqcRYGate(q, -1.3275526808974243, 2);
  sqcRZGate(q, 3.1360309592449243, 2);
  sqcRYGate(q, -0.002795391355133958, 3);
  sqcRZGate(q, 0.1245512568737483, 3);
  sqcRYGate(q, -1.5979006197179366, 4);
  sqcRZGate(q, -3.0959788380755398, 4);
  sqcRYGate(q, -2.132193777199751, 5);
  sqcRZGate(q, 0.331731012421203, 5);
  sqcRYGate(q, 1.2473711931695017, 6);
  sqcRZGate(q, 0.11603254036092718, 6);
  sqcRYGate(q, -1.513752619658569, 7);
  sqcRZGate(q, -0.7073789170686648, 7);
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
  sqcRYGate(q, 0.020778008236893422, 0);
  sqcRZGate(q, -1.595019727161328, 0);
  sqcRYGate(q, -1.0122472481881868, 1);
  sqcRZGate(q, 3.1211352657239297, 1);
  sqcRYGate(q, 2.8114107227352823, 2);
  sqcRZGate(q, -1.3288152156306001, 2);
  sqcRYGate(q, -0.0003619544714821288, 3);
  sqcRZGate(q, 2.8489888745245726, 3);
  sqcRYGate(q, 3.1415495145031067, 4);
  sqcRZGate(q, -2.433448422929608, 4);
  sqcRYGate(q, 1.2208907220189849, 5);
  sqcRZGate(q, -2.458550527106882, 5);
  sqcRYGate(q, -2.9914303369429063, 6);
  sqcRZGate(q, 0.38314055614423387, 6);
  sqcRYGate(q, 0.34374663709156206, 7);
  sqcRZGate(q, -2.4819267284059934, 7);
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
  sqcRYGate(q, 1.5558191794865681, 0);
  sqcRZGate(q, -1.476014238193149, 0);
  sqcRYGate(q, -2.3331932120541916, 1);
  sqcRZGate(q, 0.9931219100846809, 1);
  sqcRYGate(q, -0.8250210633543578, 2);
  sqcRZGate(q, -1.7155433073778363, 2);
  sqcRYGate(q, -3.1412331039777324, 3);
  sqcRZGate(q, 0.3591051611478253, 3);
  sqcRYGate(q, -3.1329095371135414, 4);
  sqcRZGate(q, 2.6280186312608267, 4);
  sqcRYGate(q, -0.047210268997468496, 5);
  sqcRZGate(q, 1.8989367343888401, 5);
  sqcRYGate(q, -2.3235493404738112, 6);
  sqcRZGate(q, -2.1371338346327824, 6);
  sqcRYGate(q, 0.0006351413016993171, 7);
  sqcRZGate(q, 0.8179051733226665, 7);
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
  sqcRYGate(q, -1.5740730296589467, 0);
  sqcRZGate(q, 1.796253587977128, 0);
  sqcRYGate(q, 3.0951670516449723, 1);
  sqcRZGate(q, -3.0479377147864097, 1);
  sqcRYGate(q, 3.056115567703042, 2);
  sqcRZGate(q, 1.7582989427610924, 2);
  sqcRYGate(q, -3.14148977637416, 3);
  sqcRZGate(q, 2.0869589644829203, 3);
  sqcRYGate(q, -0.00022877318548530923, 4);
  sqcRZGate(q, -2.659825764688894, 4);
  sqcRYGate(q, 2.076840135933171, 5);
  sqcRZGate(q, -0.07672051882358931, 5);
  sqcRYGate(q, -0.3249544066946183, 6);
  sqcRZGate(q, 1.6103844350953205, 6);
  sqcRYGate(q, 0.5353725587021341, 7);
  sqcRZGate(q, 2.480550945533655, 7);
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
  sqcRYGate(q, 1.8781868756770823, 0);
  sqcRZGate(q, 1.8029338312129803, 0);
  sqcRYGate(q, -0.1284417937582063, 1);
  sqcRZGate(q, 0.10162038479616951, 1);
  sqcRYGate(q, -1.5763288728315104, 2);
  sqcRZGate(q, -2.5394798723408076, 2);
  sqcRYGate(q, -0.006669195491966206, 3);
  sqcRZGate(q, -1.1361725897932526, 3);
  sqcRYGate(q, -0.04304906579301804, 4);
  sqcRZGate(q, -3.055764998847604, 4);
  sqcRYGate(q, 2.17821696056705, 5);
  sqcRZGate(q, -2.9901834626259554, 5);
  sqcRYGate(q, -0.5636053338548095, 6);
  sqcRZGate(q, -1.4968099057292221, 6);
  sqcRYGate(q, -3.0757769470372853, 7);
  sqcRZGate(q, 1.5962244799667538, 7);
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
  sqcRYGate(q, -1.1035954658684588, 0);
  sqcRZGate(q, 1.2824265186618904, 0);
  sqcRYGate(q, -0.5796988518096815, 1);
  sqcRZGate(q, -1.1005487435318457, 1);
  sqcRYGate(q, 2.966548355502832, 2);
  sqcRZGate(q, 2.5119602609483214, 2);
  sqcRYGate(q, 0.005676682596615024, 3);
  sqcRZGate(q, 0.9302362915557383, 3);
  sqcRYGate(q, -1.5796566804430707, 4);
  sqcRZGate(q, -0.6047130546166208, 4);
  sqcRYGate(q, 0.23500965788616932, 5);
  sqcRZGate(q, -0.3239858567298023, 5);
  sqcRYGate(q, 2.2838911006705565, 6);
  sqcRZGate(q, 0.06263760354909564, 6);
  sqcRYGate(q, -1.881597922278817, 7);
  sqcRZGate(q, 1.7810280214169234, 7);
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
  sqcRYGate(q, -2.962993360583774, 0);
  sqcRZGate(q, 1.127512079635912, 0);
  sqcRYGate(q, -0.0676552408049842, 1);
  sqcRZGate(q, 0.5726384097890066, 1);
  sqcRYGate(q, 0.0007941818374613618, 2);
  sqcRZGate(q, 1.9572151725439828, 2);
  sqcRYGate(q, 3.1391411417259834, 3);
  sqcRZGate(q, -2.3456117053288508, 3);
  sqcRYGate(q, 0.003455592047837186, 4);
  sqcRZGate(q, -2.5479285856840233, 4);
  sqcRYGate(q, 1.6178238732097965, 5);
  sqcRZGate(q, -0.03187386748692411, 5);
  sqcRYGate(q, -1.4985813956613825, 6);
  sqcRZGate(q, 3.1408284029481317, 6);
  sqcRYGate(q, -3.1237136601155453, 7);
  sqcRZGate(q, -2.9745566910657204, 7);
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
  sqcRYGate(q, 1.4077793150814157, 0);
  sqcRZGate(q, 1.0086192003871108, 0);
  sqcRYGate(q, -1.8757988778722805, 1);
  sqcRZGate(q, 0.4102523364664515, 1);
  sqcRYGate(q, 3.0274718764465804, 2);
  sqcRZGate(q, 2.1249381621596304, 2);
  sqcRYGate(q, -3.136005248587771, 3);
  sqcRZGate(q, 1.16006658817849, 3);
  sqcRYGate(q, 0.846366282990842, 4);
  sqcRZGate(q, -3.1289110911494853, 4);
  sqcRYGate(q, -0.30432469309550053, 5);
  sqcRZGate(q, 1.88257605544526, 5);
  sqcRYGate(q, 0.684668051378326, 6);
  sqcRZGate(q, -2.2371946084401353, 6);
  sqcRYGate(q, 1.6502117200653044, 7);
  sqcRZGate(q, -0.04959322928287424, 7);
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
  sqcRYGate(q, -3.132366483363725, 0);
  sqcRZGate(q, 2.7541152718784514, 0);
  sqcRYGate(q, 1.4951636431484152, 1);
  sqcRZGate(q, 3.1249306995909647, 1);
  sqcRYGate(q, 0.00021429434178621423, 2);
  sqcRZGate(q, -1.2444327451520882, 2);
  sqcRYGate(q, -3.135508425418017, 3);
  sqcRZGate(q, 2.7433776609287244, 3);
  sqcRYGate(q, 1.5956460418211584, 4);
  sqcRZGate(q, -0.06995790957936894, 4);
  sqcRYGate(q, -1.528862312866301, 5);
  sqcRZGate(q, -0.7266162265203587, 5);
  sqcRYGate(q, 1.5273538656026475, 6);
  sqcRZGate(q, 1.6324675134387068, 6);
  sqcRYGate(q, -2.570681511394907, 7);
  sqcRZGate(q, -3.1292920241224333, 7);
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
  sqcRYGate(q, -3.0145485778642103, 0);
  sqcRZGate(q, -0.42028305129051446, 0);
  sqcRYGate(q, -0.7950961013918093, 1);
  sqcRZGate(q, -0.8956123986842188, 1);
  sqcRYGate(q, 1.5690622842065514, 2);
  sqcRZGate(q, 0.13150512596126251, 2);
  sqcRYGate(q, 0.028918919998107917, 3);
  sqcRZGate(q, -0.39612579649458796, 3);
  sqcRYGate(q, 1.502107548786762, 4);
  sqcRZGate(q, 1.893582546942338, 4);
  sqcRYGate(q, 0.0034998745255646244, 5);
  sqcRZGate(q, -2.420747625195591, 5);
  sqcRYGate(q, -2.8718254736646296, 6);
  sqcRZGate(q, -0.2397195085227093, 6);
  sqcRYGate(q, -1.5189895328119905, 7);
  sqcRZGate(q, -1.432606733691272, 7);
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
  sqcRYGate(q, -1.5823044226987852, 0);
  sqcRZGate(q, -3.140090714948623, 0);
  sqcRYGate(q, 3.102988244449479, 1);
  sqcRZGate(q, -2.4021624172560245, 1);
  sqcRYGate(q, -3.1387520535848945, 2);
  sqcRZGate(q, -2.996413785527196, 2);
  sqcRYGate(q, -1.6391401128191518, 3);
  sqcRZGate(q, 0.40770398032459737, 3);
  sqcRYGate(q, 3.138729955211871, 4);
  sqcRZGate(q, -0.9839275114104299, 4);
  sqcRYGate(q, -1.6243647247078217, 5);
  sqcRZGate(q, 2.73920994880869, 5);
  sqcRYGate(q, 0.36262704848894867, 6);
  sqcRZGate(q, -1.4950507167209808, 6);
  sqcRYGate(q, 1.5492196964527878, 7);
  sqcRZGate(q, -1.5113351393114596, 7);
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
  sqcRYGate(q, -2.7698231517892276, 0);
  sqcRZGate(q, -1.5730797138321284, 0);
  sqcRYGate(q, -1.5710751466514103, 1);
  sqcRZGate(q, 0.00037934013591023325, 1);
  sqcRYGate(q, 1.9124528689808569, 2);
  sqcRZGate(q, -1.5626962968954832, 2);
  sqcRYGate(q, 1.5868572539489185, 3);
  sqcRZGate(q, 3.1303703947153934, 3);
  sqcRYGate(q, -1.2226717724535499, 4);
  sqcRZGate(q, 3.0540993085984827, 4);
  sqcRYGate(q, 1.5762649521421457, 5);
  sqcRZGate(q, -3.1400167558018626, 5);
  sqcRYGate(q, -1.5899831228732801, 6);
  sqcRZGate(q, 0.007806016814810307, 6);
  sqcRYGate(q, -1.458694169688815, 7);
  sqcRZGate(q, 0.010470929017719224, 7);

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
