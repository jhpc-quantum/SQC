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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -2.299800951949265, 0);
  sqcRYGate(q, 0.17605674141987213, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0954781401173994, 0);
  sqcRYGate(q, 0.8052041613667447, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.26099965462633623, 2);
  sqcRYGate(q, 1.0844458773295211, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.204029408156754, 2);
  sqcRYGate(q, -2.9316773004940746, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5005652717149932, 1);
  sqcRYGate(q, 1.8528127527654847, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.970523898995409, 1);
  sqcRYGate(q, -1.6755888822209561, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2612121563539853, 0);
  sqcRYGate(q, -2.1102730763960813, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7419787836839982, 0);
  sqcRYGate(q, 0.38402116801253217, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3001455574833085, 2);
  sqcRYGate(q, -2.003223872167257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6897599083834063, 2);
  sqcRYGate(q, 0.9201834369402162, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3475023292584205, 1);
  sqcRYGate(q, 0.8713726384207879, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.648160833141722, 1);
  sqcRYGate(q, -0.3193598071166367, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6891001721492676, 0);
  sqcRYGate(q, 2.8518053926423357, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7567742728652433, 0);
  sqcRYGate(q, -1.8765841393281821, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3985531821187136, 2);
  sqcRYGate(q, 3.1186341569170435, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4825261998877624, 2);
  sqcRYGate(q, 1.5848944659790423, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7102245196328516, 1);
  sqcRYGate(q, 2.5207823934309674, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3868347365194964, 1);
  sqcRYGate(q, -2.8390599227917828, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1146631466707366, 0);
  sqcRYGate(q, 2.7539690925877376, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0619108804337003, 0);
  sqcRYGate(q, 1.3547343593262178, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.499233853105306, 2);
  sqcRYGate(q, -2.6864940906100223, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7120609643216032, 2);
  sqcRYGate(q, 3.140674224752927, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1036596969328007, 1);
  sqcRYGate(q, -0.6449045274766074, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.44926628670932506, 1);
  sqcRYGate(q, -1.504692104998776, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.046924667096853, 0);
  sqcRYGate(q, 1.678896967451653, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9459600544795228, 0);
  sqcRYGate(q, 2.0544541175720363, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.07518384013276247, 2);
  sqcRYGate(q, -1.1847866081051783, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8235704426417232, 2);
  sqcRYGate(q, -2.928887480682592, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.083082294706858, 1);
  sqcRYGate(q, 1.0786963369747071, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5940651090665696, 1);
  sqcRYGate(q, 0.02484608873125754, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.20689690080417386, 0);
  sqcRYGate(q, -2.8931873006348243, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.965066289510352, 0);
  sqcRYGate(q, 1.3726256867071271, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.581935033987045, 2);
  sqcRYGate(q, 1.9418329419630442, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4549913017060856, 2);
  sqcRYGate(q, -1.0159661683949963, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9557797562488508, 1);
  sqcRYGate(q, 1.5617744756056897, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8838056198346527, 1);
  sqcRYGate(q, -3.046414645834334, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9044512043758735, 0);
  sqcRYGate(q, -1.6793659428407095, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.43144271920678723, 0);
  sqcRYGate(q, -3.127405254954202, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2969787454939654, 2);
  sqcRYGate(q, 1.3619748044757494, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6308619952453061, 2);
  sqcRYGate(q, -1.6853140257713801, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.46473442764111156, 1);
  sqcRYGate(q, -3.067628263881224, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1503029310150268, 1);
  sqcRYGate(q, 1.8177078024387718, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1812679962002313, 0);
  sqcRYGate(q, 3.1307642381456557, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7365007605606477, 0);
  sqcRYGate(q, 2.0733176664797917, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9550216831121936, 2);
  sqcRYGate(q, -1.077469133002518, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4328738233765609, 2);
  sqcRYGate(q, 1.376642999666032, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2417382414107396, 1);
  sqcRYGate(q, 0.2255473073447618, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.598321788467454, 1);
  sqcRYGate(q, 2.479553376784853, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.12629234343904022, 0);
  sqcRYGate(q, 2.872423786861112, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5045420974320869, 0);
  sqcRYGate(q, 2.193206099687394, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4287727848837395, 2);
  sqcRYGate(q, 1.4857208804125053, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7402103437413835, 2);
  sqcRYGate(q, 1.0068133189669979, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4204983493375174, 1);
  sqcRYGate(q, 0.1814783245147078, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4834544431444403, 1);
  sqcRYGate(q, 0.29827322855605987, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.47198593165815605, 0);
  sqcRYGate(q, 2.448705143983481, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1045885554130157, 0);
  sqcRYGate(q, -1.7727509683574523, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.089246455920537, 2);
  sqcRYGate(q, -2.6440928042576783, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3831662816801558, 2);
  sqcRYGate(q, -1.7463923675923763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.08869972750227895, 1);
  sqcRYGate(q, 2.444512843848593, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.376270698341608, 1);
  sqcRYGate(q, 3.114307409988861, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4510032825156665, 0);
  sqcRYGate(q, -2.247975199407394, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.47489889350002557, 0);
  sqcRYGate(q, 0.5260866173550657, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8099054251032065, 2);
  sqcRYGate(q, 3.00948154878854, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6367966066192465, 2);
  sqcRYGate(q, 0.7727416636701614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1274118800529838, 1);
  sqcRYGate(q, -0.5289092513972965, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.024182734741812314, 1);
  sqcRYGate(q, -3.0945075637111645, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.22912874238755795, 0);
  sqcRYGate(q, 0.4536423674817609, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8053306924368008, 0);
  sqcRYGate(q, 2.0304147814855167, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.056527243402446, 2);
  sqcRYGate(q, 3.1234056500999614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7288443301719758, 2);
  sqcRYGate(q, -0.4871340651207894, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.05675620293675046, 1);
  sqcRYGate(q, -0.19530752003510798, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9742002403639543, 1);
  sqcRYGate(q, 0.2479192063240374, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9060834314222577, 0);
  sqcRYGate(q, -2.4430539166426857, 1);
  sqcRYGate(q, 2.559810726689658, 2);
  sqcRYGate(q, -2.174244959463066, 3);

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
