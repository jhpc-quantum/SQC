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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -1.604087583047215, 0);
  sqcRYGate(q, -1.4067049136445462, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1917074432036387, 0);
  sqcRYGate(q, 2.2407618887167233, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.162616327795738, 2);
  sqcRYGate(q, 1.3181701214127872, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3247157193225085, 2);
  sqcRYGate(q, 2.5596630367909254, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.669184866857985, 4);
  sqcRYGate(q, 2.7833233042089702, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3387268791782905, 4);
  sqcRYGate(q, -2.075110934201226, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4873820056584437, 6);
  sqcRYGate(q, -1.6445501684363715, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3328998122910516, 6);
  sqcRYGate(q, -0.30072767535438477, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3091485672843657, 8);
  sqcRYGate(q, 3.01847752688316, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.1336754602894916, 8);
  sqcRYGate(q, -3.1373010370658374, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.28693023295000114, 10);
  sqcRYGate(q, 1.6434939725403692, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.8705410749455744, 10);
  sqcRYGate(q, -0.07635856490690635, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.069049564069133, 12);
  sqcRYGate(q, 1.3051711317891765, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.1254643394674995, 12);
  sqcRYGate(q, 2.845153058408562, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.139481820440823, 14);
  sqcRYGate(q, -1.163890199445074, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.10092656245261011, 14);
  sqcRYGate(q, 0.31768337521413265, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.0825361383288419, 16);
  sqcRYGate(q, 1.9710595953661687, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.5738818791158335, 16);
  sqcRYGate(q, 2.4128054820901244, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.9356238619042242, 18);
  sqcRYGate(q, 1.3189312506370907, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.9080207931812874, 18);
  sqcRYGate(q, -2.329532012954556, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.7184401720115714, 1);
  sqcRYGate(q, -0.7509693014772978, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.908316234529555, 1);
  sqcRYGate(q, -2.939175636350004, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5407818203653945, 3);
  sqcRYGate(q, -0.9932596112376811, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0273076091732363, 3);
  sqcRYGate(q, -0.005202494636616107, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.503813401905993, 5);
  sqcRYGate(q, -0.5904944857698671, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.112035600724458, 5);
  sqcRYGate(q, 0.013920614369895654, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.110609539902769, 7);
  sqcRYGate(q, -1.9086384016616071, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.8134334207894796, 7);
  sqcRYGate(q, 1.6108812582174137, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.9728840915545196, 9);
  sqcRYGate(q, -2.4955107564221914, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.3532462189307237, 9);
  sqcRYGate(q, -0.8781375321648115, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.07519931255785563, 11);
  sqcRYGate(q, 2.294867620909366, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.9479870390531175, 11);
  sqcRYGate(q, -0.9367987511546312, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.8054718089438548, 13);
  sqcRYGate(q, 0.9148761707150131, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.7128460432178048, 13);
  sqcRYGate(q, -2.948939034541761, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.091101238475245, 15);
  sqcRYGate(q, -0.6779464491213211, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.506023227348461, 15);
  sqcRYGate(q, 2.975997048663624, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.4413676712262813, 17);
  sqcRYGate(q, 2.5533419296684485, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.3702628414303548, 17);
  sqcRYGate(q, 2.1738654255677847, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 3.122085903581055, 0);
  sqcRYGate(q, -2.6434398143304003, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9147173453317707, 0);
  sqcRYGate(q, 1.9443602070311168, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2066305919839433, 2);
  sqcRYGate(q, -2.1820224474035306, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.21764236564340814, 2);
  sqcRYGate(q, -2.1535478610229704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.56061489183947, 4);
  sqcRYGate(q, 0.7264522129934674, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.13655817259137373, 4);
  sqcRYGate(q, -2.200816519987133, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.660862749718751, 6);
  sqcRYGate(q, -1.0529844692889654, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6133295772132143, 6);
  sqcRYGate(q, -0.3309055531373186, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5627296984435843, 8);
  sqcRYGate(q, 0.46770552890149464, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.3110416714857855, 8);
  sqcRYGate(q, -2.305506669482192, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.681570682412405, 10);
  sqcRYGate(q, 1.0678005686935281, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.1650262812649927, 10);
  sqcRYGate(q, 2.585198298906231, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.1493706974651694, 12);
  sqcRYGate(q, 2.4878067890609974, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.1179983114457275, 12);
  sqcRYGate(q, 2.569271200179334, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.647432132698702, 14);
  sqcRYGate(q, -1.4950895782410105, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.671889117013332, 14);
  sqcRYGate(q, 0.027200044294673622, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.063465618925423, 16);
  sqcRYGate(q, -2.078756315071609, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -3.1332655453751768, 16);
  sqcRYGate(q, 0.0024182143607358597, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.6564477500841726, 18);
  sqcRYGate(q, 0.6080076334728927, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.0185071732940436, 18);
  sqcRYGate(q, -0.6832495160291384, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.5473835993032177, 1);
  sqcRYGate(q, 0.2800921295094264, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.15601087514013692, 1);
  sqcRYGate(q, -2.824636212298865, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3697824532418659, 3);
  sqcRYGate(q, -1.2472106991150644, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7634783262511773, 3);
  sqcRYGate(q, -3.136421093449542, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6143213096225626, 5);
  sqcRYGate(q, 0.37777344032685, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0433687856931066, 5);
  sqcRYGate(q, -2.934458999441765, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.06724981524659739, 7);
  sqcRYGate(q, -0.8645592597592453, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.07705228913263706, 7);
  sqcRYGate(q, -1.5010666513496354, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.10009225701451435, 9);
  sqcRYGate(q, -0.6788687003993498, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.03791825360771561, 9);
  sqcRYGate(q, 0.4131217719468144, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.9926954237656305, 11);
  sqcRYGate(q, 1.5268337458961287, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.063567405126025, 11);
  sqcRYGate(q, -0.0017971207155198128, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.711867591642578, 13);
  sqcRYGate(q, -0.10467495413145668, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.008167491237794606, 13);
  sqcRYGate(q, -0.05139729456199435, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.2713963881991557, 15);
  sqcRYGate(q, 2.9077147803113803, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.272082261842292, 15);
  sqcRYGate(q, -0.6850484536224236, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.2755256524620886, 17);
  sqcRYGate(q, -2.4175644389931468, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.9316546827664896, 17);
  sqcRYGate(q, -3.0277662142278907, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.5489021457216436, 0);
  sqcRYGate(q, -2.2828032042666657, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.048255462276571, 0);
  sqcRYGate(q, 0.9277439170570525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8809480212634586, 2);
  sqcRYGate(q, -2.8030558188498818, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6707869930827299, 2);
  sqcRYGate(q, -3.09147841644059, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.26035607058824706, 4);
  sqcRYGate(q, -2.4606842030464406, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.57553605386043, 4);
  sqcRYGate(q, 2.9845908387001305, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4386495209724517, 6);
  sqcRYGate(q, 1.4839612610377662, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.64301091242668, 6);
  sqcRYGate(q, 0.029182740385429007, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1052575809651515, 8);
  sqcRYGate(q, 1.9176501822153327, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.44362475675016805, 8);
  sqcRYGate(q, 0.011808947443747343, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.47847207586940943, 10);
  sqcRYGate(q, -3.0371168591857405, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.35780475032904313, 10);
  sqcRYGate(q, 0.20044703975471911, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.606607368127297, 12);
  sqcRYGate(q, 3.0669726843634613, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.4963785643982774, 12);
  sqcRYGate(q, -1.7927824362279183, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.1252072797569106, 14);
  sqcRYGate(q, -2.1304326206399646, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.782827688789768, 14);
  sqcRYGate(q, -3.1322144778208942, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.4992227059610985, 16);
  sqcRYGate(q, 1.98176506129286, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.0019563134793832695, 16);
  sqcRYGate(q, -0.003983404397229328, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.1285905677227914, 18);
  sqcRYGate(q, -0.8404693951038854, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.17385713692157703, 18);
  sqcRYGate(q, -2.2694510899495923, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.6646261278825438, 1);
  sqcRYGate(q, 2.8420812119409837, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8991679184937411, 1);
  sqcRYGate(q, -2.3632117275541384, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6731367860496407, 3);
  sqcRYGate(q, 0.5442010727478799, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0771078550346966, 3);
  sqcRYGate(q, 3.134861966287942, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0532762375588507, 5);
  sqcRYGate(q, 0.0022624867484466377, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.06964567102915485, 5);
  sqcRYGate(q, 2.896712336852453, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6026751566513826, 7);
  sqcRYGate(q, -0.2605040090357876, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.012709146432135832, 7);
  sqcRYGate(q, -1.6501742854460206, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.2123562186973604, 9);
  sqcRYGate(q, -0.913586903599224, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.9083614256620383, 9);
  sqcRYGate(q, -0.04771241032394791, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.03494643956148025, 11);
  sqcRYGate(q, 0.9639662754142179, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.031341200337410946, 11);
  sqcRYGate(q, -0.1566015041484743, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.0299327353478054, 13);
  sqcRYGate(q, 0.4951283346431246, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.125011711042516, 13);
  sqcRYGate(q, 0.86142416822684, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.4842769405247118, 15);
  sqcRYGate(q, -2.1491685889679397, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.4550482286282315, 15);
  sqcRYGate(q, 2.179529524181482, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.44443435431943357, 17);
  sqcRYGate(q, 1.0529381200177488, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.0272123249573304, 17);
  sqcRYGate(q, 2.046542571686066, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.5003187052348683, 0);
  sqcRYGate(q, 2.962439988541636, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.46327767705233125, 0);
  sqcRYGate(q, -0.8514715055267326, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5338977117935854, 2);
  sqcRYGate(q, 2.505425226952099, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.958185419177723, 2);
  sqcRYGate(q, -2.1135434094879284, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2113258362738306, 4);
  sqcRYGate(q, -2.944714532164063, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8061572764714363, 4);
  sqcRYGate(q, -2.0053437162624768, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.649526232692818, 6);
  sqcRYGate(q, 0.0345705405035126, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.951204469686723, 6);
  sqcRYGate(q, -0.49970718267906294, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0648201711931673, 8);
  sqcRYGate(q, 1.0368446136125193, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.29453661135465287, 8);
  sqcRYGate(q, 0.047439989115894324, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.1781310829930964, 10);
  sqcRYGate(q, -0.4894804060900952, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.7557981779842402, 10);
  sqcRYGate(q, 1.5151871540874617, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.2561505708353904, 12);
  sqcRYGate(q, 2.6148638786038467, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.5106283320295049, 12);
  sqcRYGate(q, 3.024611873838608, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.2875582462568982, 14);
  sqcRYGate(q, -2.2412768333500184, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.6804254170007242, 14);
  sqcRYGate(q, 0.009046385912084206, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.8045983920228341, 16);
  sqcRYGate(q, 2.1552838565405232, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.0010090896285266382, 16);
  sqcRYGate(q, 0.003479371755408245, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.9622340484812097, 18);
  sqcRYGate(q, -0.9919812919802524, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.5945287327248154, 18);
  sqcRYGate(q, -0.2143321551224524, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.8052229906390505, 1);
  sqcRYGate(q, 1.8871173630755624, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.098197642565258, 1);
  sqcRYGate(q, -0.7616365513269098, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.358340916007732, 3);
  sqcRYGate(q, 1.4165237286786174, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1133093552744704, 3);
  sqcRYGate(q, 3.1365065430895926, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.905937394485712, 5);
  sqcRYGate(q, 1.644143637942579, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.080132305603661, 5);
  sqcRYGate(q, -3.1314202751967115, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8370066640891989, 7);
  sqcRYGate(q, -2.8337528946323056, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.7935861254528227, 7);
  sqcRYGate(q, -0.03997688263020706, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5084633650142818, 9);
  sqcRYGate(q, 2.6850739763098534, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.8708492784782416, 9);
  sqcRYGate(q, 0.3449092508329059, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6168583431878956, 11);
  sqcRYGate(q, -0.34191028056909367, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.4978645417549679, 11);
  sqcRYGate(q, -3.1370395249524403, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.935578875519548, 13);
  sqcRYGate(q, -0.08699647956906542, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.9045866845549724, 13);
  sqcRYGate(q, -2.1194138779630864, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.6084982792123093, 15);
  sqcRYGate(q, 2.2430406210298086, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.133975275608262, 15);
  sqcRYGate(q, 3.099549388878345, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.611240953746588, 17);
  sqcRYGate(q, 0.25619255641522987, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.9295524224398547, 17);
  sqcRYGate(q, -1.3206904686292664, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.3537379875940359, 0);
  sqcRYGate(q, 1.892064150318781, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8295673028919746, 0);
  sqcRYGate(q, -0.15766896366806904, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.267959931452928, 2);
  sqcRYGate(q, 0.37653432231434086, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.131072468281102, 2);
  sqcRYGate(q, -1.1796719135920721, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7863535601967291, 4);
  sqcRYGate(q, -2.347758606799841, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3660866609768645, 4);
  sqcRYGate(q, 0.9937694310930447, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.794479947724914, 6);
  sqcRYGate(q, 0.14700932192254282, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0004305244961325, 6);
  sqcRYGate(q, -3.0679636885686143, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9630222409011782, 8);
  sqcRYGate(q, -0.8810167648782559, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3225652268128547, 8);
  sqcRYGate(q, -1.0942822740891867, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.8134528168020683, 10);
  sqcRYGate(q, 1.8324814464387376, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.0999781874295373, 10);
  sqcRYGate(q, -2.100375573645086, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5673339526448347, 12);
  sqcRYGate(q, -0.32313167281566907, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.0008378738875633034, 12);
  sqcRYGate(q, -0.254916477531177, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.8866571723106245, 14);
  sqcRYGate(q, 2.9489223173615753, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.1308754196507653, 14);
  sqcRYGate(q, -0.01717917095069943, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.79541369126548, 16);
  sqcRYGate(q, 1.2498179648741674, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.0032484443803070025, 16);
  sqcRYGate(q, 1.3846882110074286, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.879809906867267, 18);
  sqcRYGate(q, -3.1281140226840445, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.2372025723453213, 18);
  sqcRYGate(q, -0.009138624716722873, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.105017200190951, 1);
  sqcRYGate(q, -0.40858328626496476, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2898313304938336, 1);
  sqcRYGate(q, 2.8874404987180915, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0221258435875478, 3);
  sqcRYGate(q, 2.7971534841886383, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.07674198664876263, 3);
  sqcRYGate(q, -0.03247834907612912, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1605549756342879, 5);
  sqcRYGate(q, 0.30483554530592016, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.077166426517739, 5);
  sqcRYGate(q, -2.9697448855993147, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.16199366536752, 7);
  sqcRYGate(q, -2.892676637346953, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.7553620636060194, 7);
  sqcRYGate(q, 3.134347236680802, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.3006139716899283, 9);
  sqcRYGate(q, 1.81318086141664, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.121671633224941, 9);
  sqcRYGate(q, -0.05515749587586427, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.23098550105729565, 11);
  sqcRYGate(q, -3.1370443934832966, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.978471841462488, 11);
  sqcRYGate(q, -0.00011305551108304731, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.2218494243345417, 13);
  sqcRYGate(q, 1.188084914731151, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.18365292025722, 13);
  sqcRYGate(q, -1.3676912959617087, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.3546893268066498, 15);
  sqcRYGate(q, -1.0838511596254756, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.14929983445143336, 15);
  sqcRYGate(q, -0.17515480329259425, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.110704882081981, 17);
  sqcRYGate(q, 1.5214446963728738, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.6359503114346701, 17);
  sqcRYGate(q, -0.051012707005293374, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.9427796206195858, 0);
  sqcRYGate(q, 0.24911346593340972, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8360318780605618, 0);
  sqcRYGate(q, -0.2230718310153179, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2080666503751667, 2);
  sqcRYGate(q, -2.013175815389034, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7819603907130022, 2);
  sqcRYGate(q, 2.052538490732221, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.176463730178165, 4);
  sqcRYGate(q, 0.5066760701187025, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.570444097893627, 4);
  sqcRYGate(q, -0.6667295602251957, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.045557654100868344, 6);
  sqcRYGate(q, 3.0192229591084407, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.02371279393611756, 6);
  sqcRYGate(q, 0.63597082060595, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0891321361401731, 8);
  sqcRYGate(q, -2.4316752504240204, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.0219607511476894, 8);
  sqcRYGate(q, -1.5560171427838263, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.4055527515132784, 10);
  sqcRYGate(q, 1.4742561127059344, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.036463310206123374, 10);
  sqcRYGate(q, 0.30709806983335497, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.02035840356659424, 12);
  sqcRYGate(q, -2.2309918676071847, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.1407393223587152, 12);
  sqcRYGate(q, -1.2553275381313682, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.4661693872150536, 14);
  sqcRYGate(q, 2.2441550812150752, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.137959406070298, 14);
  sqcRYGate(q, 0.0015616091262149467, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.5346370274041767, 16);
  sqcRYGate(q, -3.0050265668395357, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.3073044634141431, 16);
  sqcRYGate(q, 0.3336904845052621, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.46014183701931394, 18);
  sqcRYGate(q, 2.814983105473231, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.736453315342341, 18);
  sqcRYGate(q, 1.3964445438960003, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.8702341934869167, 1);
  sqcRYGate(q, -2.9318126516402883, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.04758760636207395, 1);
  sqcRYGate(q, 2.1800511766654966, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.13287719372716297, 3);
  sqcRYGate(q, 0.9931161005752922, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.1759550922901587, 3);
  sqcRYGate(q, 2.370156577626411, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7386382205802655, 5);
  sqcRYGate(q, -2.5566572783226014, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.046942829207386794, 5);
  sqcRYGate(q, 0.05097863366953792, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.46804592534037504, 7);
  sqcRYGate(q, -1.7407599079179326, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.6820611803330574, 7);
  sqcRYGate(q, 0.05945632887576786, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.29419981882875135, 9);
  sqcRYGate(q, -1.2247047862127403, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.003331943754932635, 9);
  sqcRYGate(q, -0.02857593173755557, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.956182740123209, 11);
  sqcRYGate(q, -1.473103483977662, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.6199496405942249, 11);
  sqcRYGate(q, -0.04452024703735358, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.10863872528424867, 13);
  sqcRYGate(q, -0.40153188050271993, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.957636373394138, 13);
  sqcRYGate(q, -3.11708493280809, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.9765159335884976, 15);
  sqcRYGate(q, -2.1024238670400734, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.197486192802606, 15);
  sqcRYGate(q, 2.8391785028551912, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.1881773955719819, 17);
  sqcRYGate(q, 2.465024041006576, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 3.0719744679103207, 17);
  sqcRYGate(q, -0.11166443824690919, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 3.0986126964900462, 0);
  sqcRYGate(q, -2.784229152138921, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4629054902224214, 0);
  sqcRYGate(q, -2.8276341111282877, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.109473700238877, 2);
  sqcRYGate(q, -1.6702002151623725, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2952767697186296, 2);
  sqcRYGate(q, 3.0889680465719884, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.385870209061444, 4);
  sqcRYGate(q, 1.5407088621506113, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.07217755098584357, 4);
  sqcRYGate(q, 3.12994549767751, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9181906408778637, 6);
  sqcRYGate(q, 2.6887138493321205, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.913201626822121, 6);
  sqcRYGate(q, 3.0611101491923627, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8359021688771986, 8);
  sqcRYGate(q, -0.3872879572096378, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.8549313908597478, 8);
  sqcRYGate(q, 1.5366434174419812, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.2408980844217659, 10);
  sqcRYGate(q, 1.260318063289291, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6544433263785812, 10);
  sqcRYGate(q, 1.8161005497122256, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.3126481906195062, 12);
  sqcRYGate(q, -2.207734944576215, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.94129540989546, 12);
  sqcRYGate(q, -0.18382339043891968, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.6563129066035513, 14);
  sqcRYGate(q, 2.9117461226577155, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.013158902580344268, 14);
  sqcRYGate(q, -3.0995294841024164, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.3860201941176165, 16);
  sqcRYGate(q, 2.916529006846909, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.006444020546767442, 16);
  sqcRYGate(q, 3.13604565106739, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.467921350032727, 18);
  sqcRYGate(q, 0.8954402688328462, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.2128175444368843, 18);
  sqcRYGate(q, 2.689254728143811, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.6729432334386894, 1);
  sqcRYGate(q, 1.8903876957954484, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1384223996348295, 1);
  sqcRYGate(q, 3.0236489768824995, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6901266133687691, 3);
  sqcRYGate(q, 2.378209524895655, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.15398785989818234, 3);
  sqcRYGate(q, 0.7644309032478996, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.23073412102363353, 5);
  sqcRYGate(q, 0.7088353525151786, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0542225584850443, 5);
  sqcRYGate(q, 0.0415514912344354, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4428301488113442, 7);
  sqcRYGate(q, 2.6761404220417515, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.9688830165307873, 7);
  sqcRYGate(q, 0.009278103320927045, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.0705238167180635, 9);
  sqcRYGate(q, -1.8429109205480723, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.028424656406872795, 9);
  sqcRYGate(q, -0.010347591059223227, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.9197362615373983, 11);
  sqcRYGate(q, 1.6504537314561443, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.07910440391624096, 11);
  sqcRYGate(q, -0.0023301191735398056, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.2812418023356162, 13);
  sqcRYGate(q, -1.2162005051913756, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.112471958943306, 13);
  sqcRYGate(q, -0.004058589027178705, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.3506740668625933, 15);
  sqcRYGate(q, -1.677853557239684, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.0371223806287344, 15);
  sqcRYGate(q, -0.28807299199784353, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.8991079668483746, 17);
  sqcRYGate(q, 1.230962304613111, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.047933841503750664, 17);
  sqcRYGate(q, 0.09943910345531527, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.1355588692014287, 0);
  sqcRYGate(q, -1.7486371422875022, 1);
  sqcRYGate(q, -0.5523204907845161, 2);
  sqcRYGate(q, -2.6900090046143057, 3);
  sqcRYGate(q, -0.94989780117952, 4);
  sqcRYGate(q, -2.1772475244915155, 5);
  sqcRYGate(q, 1.8251741156407844, 6);
  sqcRYGate(q, -2.3446130966473273, 7);
  sqcRYGate(q, 2.677115351982998, 8);
  sqcRYGate(q, 2.952915273828534, 9);
  sqcRYGate(q, 3.110251656119112, 10);
  sqcRYGate(q, 0.9194691944125614, 11);
  sqcRYGate(q, 2.2257570485453018, 12);
  sqcRYGate(q, 1.1154518355202272, 13);
  sqcRYGate(q, 2.5375632807538904, 14);
  sqcRYGate(q, -2.0655533563911073, 15);
  sqcRYGate(q, 0.26172816080235517, 16);
  sqcRYGate(q, 0.4192399288297102, 17);
  sqcRYGate(q, -1.0774021543028285, 18);
  sqcRYGate(q, -0.3347109134953437, 19);

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
