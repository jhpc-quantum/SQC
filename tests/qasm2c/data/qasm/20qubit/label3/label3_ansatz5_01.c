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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 1.5978742059858577, 0);
  sqcRYGate(q, 1.6423240669527606, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.121081070336449, 0);
  sqcRYGate(q, 1.5944768088249939, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.776530057815593, 2);
  sqcRYGate(q, -2.142397854815118, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.053271515519281, 2);
  sqcRYGate(q, -0.1245232235258315, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8586627779188305, 4);
  sqcRYGate(q, 1.7263339911048643, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.21465887681929008, 4);
  sqcRYGate(q, -2.1601455508141987, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3337575032014268, 6);
  sqcRYGate(q, 1.0846998359583022, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4568949631507316, 6);
  sqcRYGate(q, -3.053611559082931, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2399926804360426, 8);
  sqcRYGate(q, -2.5106108208697226, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.7705141639371975, 8);
  sqcRYGate(q, 1.5844394904279149, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.8452548287194155, 10);
  sqcRYGate(q, -0.2905099766669927, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.665092823917041, 10);
  sqcRYGate(q, -1.062716707348625, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.1675921991345497, 12);
  sqcRYGate(q, -1.8438908493262005, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.8313008073717953, 12);
  sqcRYGate(q, -1.1730702441282346, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.7647760356029671, 14);
  sqcRYGate(q, 2.038657187422938, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.094680511863717, 14);
  sqcRYGate(q, -2.0600748237251816, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.116419292329061, 16);
  sqcRYGate(q, -2.9092998533687897, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.7827892697157521, 16);
  sqcRYGate(q, 2.8326586369166558, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.1685325945236953, 18);
  sqcRYGate(q, -1.6173802630841427, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.015928473469545, 18);
  sqcRYGate(q, 2.1521863067620224, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.5986946000716266, 1);
  sqcRYGate(q, -3.068421306304389, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0850692549119465, 1);
  sqcRYGate(q, -2.141365091426337, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4319007880120626, 3);
  sqcRYGate(q, -0.5693226776402882, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.198058996855656, 3);
  sqcRYGate(q, 1.5613096606145425, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1125497567244973, 5);
  sqcRYGate(q, -0.884019242623403, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1813172164778736, 5);
  sqcRYGate(q, -2.162045166764379, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6833358663040743, 7);
  sqcRYGate(q, -2.591857553666454, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4015752039495157, 7);
  sqcRYGate(q, -0.3395835906991982, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.3749023419192898, 9);
  sqcRYGate(q, 2.3390408861263574, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.129438821122522, 9);
  sqcRYGate(q, 0.05232910508782129, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.2970855127080987, 11);
  sqcRYGate(q, -0.6028784884788614, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.2602031855620246, 11);
  sqcRYGate(q, -0.6477209553968647, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.0061848631221304, 13);
  sqcRYGate(q, -0.5290854710955184, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.4494854790786196, 13);
  sqcRYGate(q, -2.578027833592301, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.4969920879272696, 15);
  sqcRYGate(q, 2.6480567512787108, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.121555685143151, 15);
  sqcRYGate(q, 2.5724084735463797, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 3.0217830310510667, 17);
  sqcRYGate(q, 0.06412349364585965, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.3542729444207087, 17);
  sqcRYGate(q, 2.632469167492098, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.0170958772613252, 0);
  sqcRYGate(q, -0.2106455014685098, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.535776823976203, 0);
  sqcRYGate(q, -2.539934156849919, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.130476483468949, 2);
  sqcRYGate(q, 1.2580127351003814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.034434132050541, 2);
  sqcRYGate(q, 1.9639162417206828, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6061491427547376, 4);
  sqcRYGate(q, -1.649714648457314, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3527463642894193, 4);
  sqcRYGate(q, 2.4381383380406594, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.03380288407902356, 6);
  sqcRYGate(q, 0.0006273614800260674, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5760452859550975, 6);
  sqcRYGate(q, -1.5963571101567018, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9980327166004652, 8);
  sqcRYGate(q, -1.1126861434152018, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6389314933696237, 8);
  sqcRYGate(q, 2.9316544668425446, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.681774908916541, 10);
  sqcRYGate(q, -2.792297916436178, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.450591230203083, 10);
  sqcRYGate(q, 2.3985555688180016, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.02417384501097075, 12);
  sqcRYGate(q, 0.45302878786039164, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.546037933534848, 12);
  sqcRYGate(q, 1.523222149158677, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.0850452471371479, 14);
  sqcRYGate(q, 2.750261121990813, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5815850723157465, 14);
  sqcRYGate(q, -0.09152157950092932, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.2359411180957203, 16);
  sqcRYGate(q, 2.6610051889097215, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.19302757285571026, 16);
  sqcRYGate(q, 1.590431363093829, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.313857439081968, 18);
  sqcRYGate(q, 0.26847233406053744, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -3.1079022284478848, 18);
  sqcRYGate(q, -0.8514524872474579, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.6393433434903004, 1);
  sqcRYGate(q, -2.526699184143687, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7230933379126452, 1);
  sqcRYGate(q, 2.6856162754318076, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0488498858243145, 3);
  sqcRYGate(q, 3.084309835949032, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5465721605441791, 3);
  sqcRYGate(q, -1.5854185307553395, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.103364765252383, 5);
  sqcRYGate(q, 0.7762877765682836, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.37925257444055344, 5);
  sqcRYGate(q, 2.423022891462699, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.382503852191875, 7);
  sqcRYGate(q, -0.48248614919725263, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5928595345116783, 7);
  sqcRYGate(q, -0.3189181677115802, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.07511106646252777, 9);
  sqcRYGate(q, 0.11534112977914435, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.4348187287625716, 9);
  sqcRYGate(q, 1.3584292299071041, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.870314344688327, 11);
  sqcRYGate(q, 1.841932593121414, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.3100818712717134, 11);
  sqcRYGate(q, 3.052761609004468, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.040856401228982, 13);
  sqcRYGate(q, 1.3033883100876498, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.582835915538709, 13);
  sqcRYGate(q, -1.7274539216929776, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.028473211508213962, 15);
  sqcRYGate(q, 0.09250064668516167, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.5908778889864035, 15);
  sqcRYGate(q, -1.5552930868875992, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.375031756110824, 17);
  sqcRYGate(q, -2.399741612951849, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.6488327180965123, 17);
  sqcRYGate(q, 0.9749549921808902, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.6630087725958447, 0);
  sqcRYGate(q, -1.6225762694415904, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.583662919487976, 0);
  sqcRYGate(q, 0.11010982046711693, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7144674231260469, 2);
  sqcRYGate(q, 0.22594213635481175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.785788340877717, 2);
  sqcRYGate(q, -1.6831631169272034, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2141498469249035, 4);
  sqcRYGate(q, 2.786439549136876, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.139824285186871, 4);
  sqcRYGate(q, -2.6879123581575377, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1406352100289983, 6);
  sqcRYGate(q, -2.9916413781385143, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5685836223719836, 6);
  sqcRYGate(q, 1.6067034987958637, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.652317566083915, 8);
  sqcRYGate(q, 3.1078544069574305, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5040870844639045, 8);
  sqcRYGate(q, 1.6218150758926217, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.637561423753537, 10);
  sqcRYGate(q, 0.43644075942431476, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.8186969306742284, 10);
  sqcRYGate(q, 0.4031253650751938, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.687004004221605, 12);
  sqcRYGate(q, -0.10849067362872829, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.5806177791282803, 12);
  sqcRYGate(q, -2.4075317131457394, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.2329542368161156, 14);
  sqcRYGate(q, -2.44734780457544, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.16599072381489055, 14);
  sqcRYGate(q, 1.5378035646778967, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.01588657214689086, 16);
  sqcRYGate(q, 1.9921732742411802, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.5465479853740298, 16);
  sqcRYGate(q, 0.508287928747317, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.8252363589379677, 18);
  sqcRYGate(q, -0.5366061927244825, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.7349550486176153, 18);
  sqcRYGate(q, 1.3477051383009346, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.2855244176610516, 1);
  sqcRYGate(q, -3.1137248429220583, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5104651102815199, 1);
  sqcRYGate(q, 2.9434644373920222, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.116739351952013, 3);
  sqcRYGate(q, 1.8616031710892997, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.14819843254511955, 3);
  sqcRYGate(q, -1.5859749210147203, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.32655717757884195, 5);
  sqcRYGate(q, -0.06184851398981643, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5199434281022208, 5);
  sqcRYGate(q, -1.553798387636777, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.739921485254125, 7);
  sqcRYGate(q, 0.9821561316612009, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.02168054971308647, 7);
  sqcRYGate(q, -0.00556542948307559, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.0435294983400865, 9);
  sqcRYGate(q, -0.07193179119303128, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.41543022499939747, 9);
  sqcRYGate(q, -0.3692045815935714, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.9754759541009324, 11);
  sqcRYGate(q, 0.731190331032444, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.6091000001591347, 11);
  sqcRYGate(q, -1.711552330140594, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.109987937457161, 13);
  sqcRYGate(q, 1.587742777539627, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.197822159578216, 13);
  sqcRYGate(q, 0.06498330274103253, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.41556323750744095, 15);
  sqcRYGate(q, -0.0252895002404953, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.741580635004942, 15);
  sqcRYGate(q, 2.6711082817473035, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.5896718640966698, 17);
  sqcRYGate(q, -2.9551715275383996, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.5715855488778434, 17);
  sqcRYGate(q, -0.9514739332518389, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.2629387404386856, 0);
  sqcRYGate(q, 2.5520771541078053, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2385019450904675, 0);
  sqcRYGate(q, 1.6954908308573584, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.835015014786015, 2);
  sqcRYGate(q, 2.942522120256522, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.121305325973931, 2);
  sqcRYGate(q, -0.5294640992805782, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.10395908354127076, 4);
  sqcRYGate(q, -2.5371455197488384, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1212766517658865, 4);
  sqcRYGate(q, 3.0858420487425646, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.127066392977206, 6);
  sqcRYGate(q, -1.8187681846122286, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1389672241620623, 6);
  sqcRYGate(q, -0.6688465468596562, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1862682437215213, 8);
  sqcRYGate(q, -0.01687947337768738, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6445290850889882, 8);
  sqcRYGate(q, 1.644398789574156, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6934135801247616, 10);
  sqcRYGate(q, -0.06850883616772724, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.30670098239278737, 10);
  sqcRYGate(q, -0.16193649741724683, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.278429058605502, 12);
  sqcRYGate(q, -0.4631124748764126, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.066730698973991, 12);
  sqcRYGate(q, 0.004519803189436011, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5972297648714484, 14);
  sqcRYGate(q, 1.2271034687839018, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.137887528193659, 14);
  sqcRYGate(q, 1.587062794490759, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.1283088889390713, 16);
  sqcRYGate(q, -1.5755355958965798, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.9030739456512938, 16);
  sqcRYGate(q, 0.2411042253681637, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.5934713130744882, 18);
  sqcRYGate(q, -1.1207083142337666, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.5745884261304282, 18);
  sqcRYGate(q, 0.5348431839210104, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -3.06925770509108, 1);
  sqcRYGate(q, 0.20078820880716802, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.568922567529353, 1);
  sqcRYGate(q, -1.5532930861813004, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2369153874022096, 3);
  sqcRYGate(q, -1.5949930491573334, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5509826402163842, 3);
  sqcRYGate(q, 3.0410394497588484, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6690933654549376, 5);
  sqcRYGate(q, 3.1257178066768603, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7259709612278558, 5);
  sqcRYGate(q, 1.58618846112431, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.046999976966352726, 7);
  sqcRYGate(q, -0.3448703469551572, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.00965576181847183, 7);
  sqcRYGate(q, 0.004255535307908836, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.06635959310435435, 9);
  sqcRYGate(q, -2.8642791286886076, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.00794634534462719, 9);
  sqcRYGate(q, 1.4269090458080598, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.141148633135569, 11);
  sqcRYGate(q, -2.2763880464230497, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.6719372462130204, 11);
  sqcRYGate(q, -1.7339769498550397, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.8754749411431613, 13);
  sqcRYGate(q, 0.10485307256772548, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.6972856128710845, 13);
  sqcRYGate(q, -1.5686714332685066, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.9465488580235428, 15);
  sqcRYGate(q, -3.12909970917318, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.7199679027507329, 15);
  sqcRYGate(q, -1.605884505363683, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.5703087423446291, 17);
  sqcRYGate(q, 1.5937599879177318, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.0010223299219914, 17);
  sqcRYGate(q, 1.0531303728841777, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.6963650959575127, 0);
  sqcRYGate(q, -1.7624410001711468, 1);
  sqcRYGate(q, 2.8762153594053923, 2);
  sqcRYGate(q, 2.766483209028483, 3);
  sqcRYGate(q, 3.0517864646141675, 4);
  sqcRYGate(q, 1.3124637948392355, 5);
  sqcRYGate(q, 1.2854334543930537, 6);
  sqcRYGate(q, -2.3432798729230218, 7);
  sqcRYGate(q, -1.447510856639336, 8);
  sqcRYGate(q, 3.0023621631921453, 9);
  sqcRYGate(q, 1.0885802642165925, 10);
  sqcRYGate(q, 1.380571414791453, 11);
  sqcRYGate(q, -0.2395871356501934, 12);
  sqcRYGate(q, 1.3722932772741214, 13);
  sqcRYGate(q, -1.1175806044398051, 14);
  sqcRYGate(q, -1.8011385012036536, 15);
  sqcRYGate(q, -1.7053280540147289, 16);
  sqcRYGate(q, 2.926978461381231, 17);
  sqcRYGate(q, -1.728067894841462, 18);
  sqcRYGate(q, 2.9290916901185713, 19);

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
