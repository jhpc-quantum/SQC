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

  sqcRYGate(q, -0.3246130402975673, 0);
  sqcRYGate(q, -1.1481176389687002, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1179983446628516, 0);
  sqcRYGate(q, -2.303777275305894, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9344809261271605, 0);
  sqcRYGate(q, -2.4144853731763165, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.1777139700533752, 0);
  sqcRYGate(q, -0.012279758500991826, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0524081508853174, 0);
  sqcRYGate(q, -0.38350055384060866, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.908467815278795, 0);
  sqcRYGate(q, -1.954612442753941, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.110075248990649, 1);
  sqcRYGate(q, -1.8992714669590467, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.295480728437585, 1);
  sqcRYGate(q, 0.4269201963771809, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2004572711613135, 1);
  sqcRYGate(q, -2.9354809147981284, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1348133418872908, 1);
  sqcRYGate(q, -2.9486513523524676, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.113723239546454, 2);
  sqcRYGate(q, 2.4477723773049918, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7099980787236667, 2);
  sqcRYGate(q, 0.6378870843909992, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4966425807360562, 0);
  sqcRYGate(q, 1.996135127504538, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2733865436100504, 0);
  sqcRYGate(q, 0.9426196288926558, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3615044042292355, 0);
  sqcRYGate(q, -1.13098359121922, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1248779708830203, 0);
  sqcRYGate(q, -2.8287102190767763, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6420809772336553, 0);
  sqcRYGate(q, -2.197514937647517, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.03569114230265, 0);
  sqcRYGate(q, 2.310563811005554, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8002343971502868, 1);
  sqcRYGate(q, 0.8137328787374196, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9741961876854455, 1);
  sqcRYGate(q, -0.94829795615117, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2720561137829263, 1);
  sqcRYGate(q, -0.8211125971227871, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.48781403482833413, 1);
  sqcRYGate(q, 3.0430453869215053, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5209463984155376, 2);
  sqcRYGate(q, -2.8500034537591272, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7994707370646353, 2);
  sqcRYGate(q, 0.7357418855942198, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4767798249199302, 0);
  sqcRYGate(q, 0.7156390415233487, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6870745308601158, 0);
  sqcRYGate(q, 1.1593933504835316, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6962194036580533, 0);
  sqcRYGate(q, 1.1988964644992095, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1433550816037199, 0);
  sqcRYGate(q, -1.3481617762423377, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0377791858260323, 0);
  sqcRYGate(q, 0.5019348951443332, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0636351862440145, 0);
  sqcRYGate(q, -1.6915062870198925, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5628726800120005, 1);
  sqcRYGate(q, 2.9469595845023044, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0498227625313155, 1);
  sqcRYGate(q, 1.703143442590929, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8830226397616714, 1);
  sqcRYGate(q, -1.659677121026916, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.442810396629915, 1);
  sqcRYGate(q, -1.6842633864316428, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.49696665014034114, 2);
  sqcRYGate(q, 1.405396671776657, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.27540283607448757, 2);
  sqcRYGate(q, -2.011368747525239, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.59837103490183, 0);
  sqcRYGate(q, -0.6025127492560074, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.397409612086056, 0);
  sqcRYGate(q, -1.3437807533125932, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1736269667047656, 0);
  sqcRYGate(q, 0.7143979196710819, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3374155093443223, 0);
  sqcRYGate(q, -0.309837905084838, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8389622659831568, 0);
  sqcRYGate(q, -0.16015813850964647, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.136348233823803, 0);
  sqcRYGate(q, 2.112725979343426, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5657251855811177, 1);
  sqcRYGate(q, 0.23777140999602603, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.08197734430522184, 1);
  sqcRYGate(q, -0.5624917178003809, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.038251510838081655, 1);
  sqcRYGate(q, 2.1243711708599085, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.151051777493372, 1);
  sqcRYGate(q, -0.32240608396554477, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.042500740976976, 2);
  sqcRYGate(q, -3.061609805045286, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1101294386452905, 2);
  sqcRYGate(q, -0.0638276600430227, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0335871192932053, 0);
  sqcRYGate(q, -2.369289031608335, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5353367456106923, 0);
  sqcRYGate(q, 1.9474674664086677, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7717430352788686, 0);
  sqcRYGate(q, -0.7776907903338757, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6399004387997786, 0);
  sqcRYGate(q, -1.754333604383349, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6117600606670812, 0);
  sqcRYGate(q, 1.5121152711415329, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7991292941697994, 0);
  sqcRYGate(q, 3.037289586484019, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.3465979585655321, 1);
  sqcRYGate(q, -1.826687907752799, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3183537298377557, 1);
  sqcRYGate(q, 2.1063709601342895, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8695445487266221, 1);
  sqcRYGate(q, -1.862849887710644, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.03127310884096675, 1);
  sqcRYGate(q, 1.5963077988271597, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9595670829397607, 2);
  sqcRYGate(q, 2.455601767543538, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3893932859681266, 2);
  sqcRYGate(q, -0.21634175513385934, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.11965556578249696, 0);
  sqcRYGate(q, -2.789995593173622, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1793709568323507, 0);
  sqcRYGate(q, 0.49628628380870854, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0694573918142636, 0);
  sqcRYGate(q, -0.4726764036465964, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.503862821928936, 0);
  sqcRYGate(q, 2.161565037365131, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2901241977514372, 0);
  sqcRYGate(q, -1.6908627476994191, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4214435473946864, 0);
  sqcRYGate(q, 2.9839178395890644, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7326839112796129, 1);
  sqcRYGate(q, -1.3357405477822384, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2747602029134999, 1);
  sqcRYGate(q, -3.0700129753755543, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.143472871526942, 1);
  sqcRYGate(q, 0.5904892624504205, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3469294400295464, 1);
  sqcRYGate(q, 2.7330144081858823, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9645282669306372, 2);
  sqcRYGate(q, 1.6076003703557247, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.572576390113421, 2);
  sqcRYGate(q, 0.9974412044780514, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2133002526806065, 0);
  sqcRYGate(q, -2.3167074556278844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.613401336409753, 0);
  sqcRYGate(q, 2.9631692500592117, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4128253438829743, 0);
  sqcRYGate(q, 1.8687501077055624, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1060357879756433, 0);
  sqcRYGate(q, 0.16357353811143938, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.883486657500144, 0);
  sqcRYGate(q, 1.612987092386337, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2609866130298153, 0);
  sqcRYGate(q, -2.4715975119323383, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6184883888291791, 1);
  sqcRYGate(q, -1.833464946162016, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.22846563641319761, 1);
  sqcRYGate(q, 0.03328045028333619, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4259129842005427, 1);
  sqcRYGate(q, 0.07631422003255128, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2493332847007388, 1);
  sqcRYGate(q, -0.4091568334529837, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9448661518680127, 2);
  sqcRYGate(q, -1.3745375846749532, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7555724457698227, 2);
  sqcRYGate(q, -2.2751734942886026, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7597912727988119, 0);
  sqcRYGate(q, 0.13102534426346946, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0915104949300902, 0);
  sqcRYGate(q, 1.0533467421956058, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8287259930574827, 0);
  sqcRYGate(q, -1.7905231722450314, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.445136532197024, 0);
  sqcRYGate(q, -1.4879495718601905, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0637528966900263, 0);
  sqcRYGate(q, 1.295946936316696, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0847522954611017, 0);
  sqcRYGate(q, 1.127507961018292, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0499409644359345, 1);
  sqcRYGate(q, 1.181262325061544, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8255844127029097, 1);
  sqcRYGate(q, 1.2452272474167758, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.526901335362602, 1);
  sqcRYGate(q, -2.071344571389962, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.06824053771734917, 1);
  sqcRYGate(q, -0.9468603040481821, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0923082711684406, 2);
  sqcRYGate(q, -2.737350252649354, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.13261533582227927, 2);
  sqcRYGate(q, -1.421209623911892, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.03881573788981301, 0);
  sqcRYGate(q, 0.3520693338761653, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.73731789945532, 0);
  sqcRYGate(q, -2.631663802086251, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7685914054641945, 0);
  sqcRYGate(q, 0.48653199141814607, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4121399244489514, 0);
  sqcRYGate(q, -2.4197142793288755, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.21390507169202572, 0);
  sqcRYGate(q, -0.3915516378117268, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.728566817707379, 0);
  sqcRYGate(q, 0.18710216145417302, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5648059728126658, 1);
  sqcRYGate(q, 1.148284606451945, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9483450273591827, 1);
  sqcRYGate(q, 2.197167320514109, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1716830965250167, 1);
  sqcRYGate(q, 2.040516859436958, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.541254614902516, 1);
  sqcRYGate(q, 0.188286929463259, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4182472355869047, 2);
  sqcRYGate(q, -2.9339787222274594, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4876916077337072, 2);
  sqcRYGate(q, -2.406054508825544, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.694804320792059, 0);
  sqcRYGate(q, -0.8763144404902763, 1);
  sqcRYGate(q, -1.1296206922996632, 2);
  sqcRYGate(q, 0.6119304163184913, 3);

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
