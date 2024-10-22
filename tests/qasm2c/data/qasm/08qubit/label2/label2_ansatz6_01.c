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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 1.480178334150045, 0);
  sqcRYGate(q, 1.1772823796384442, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.610308311728478, 0);
  sqcRYGate(q, -1.4052800061639017, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7943431217140513, 1);
  sqcRYGate(q, -1.9923323115534837, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8518694135580551, 1);
  sqcRYGate(q, 1.3594510138492062, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.471437264500831, 2);
  sqcRYGate(q, -1.570730953723509, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.513644846044667, 2);
  sqcRYGate(q, -3.1404800118070133, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.12803574272732732, 3);
  sqcRYGate(q, 2.920678653221282, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4588619626619454, 3);
  sqcRYGate(q, 1.429526954338324, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6077814609591332, 4);
  sqcRYGate(q, 1.5740285359924726, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7939031048543517, 4);
  sqcRYGate(q, -0.5527005104239349, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6834520514586178, 5);
  sqcRYGate(q, -0.42127540818703496, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.529102804157183, 5);
  sqcRYGate(q, -1.9318002608371496, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.139175794270241, 6);
  sqcRYGate(q, 1.5096771684338537, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.14769284837429417, 6);
  sqcRYGate(q, 0.08722731515244272, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.379156314183955, 0);
  sqcRYGate(q, 2.1762621251144862, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.414190111795729, 0);
  sqcRYGate(q, -0.8327480426164245, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.329853328551283, 1);
  sqcRYGate(q, -1.2928737880849759, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5083054754797294, 1);
  sqcRYGate(q, -2.312733308792939, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2512779704659298, 2);
  sqcRYGate(q, 2.96453055669032, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1415707488326645, 2);
  sqcRYGate(q, -1.067104433410751, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.25260055230268674, 3);
  sqcRYGate(q, 1.5707853831629153, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3077680897980914, 3);
  sqcRYGate(q, -0.05102649984745266, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5128662137883122, 4);
  sqcRYGate(q, 2.057363234763539, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.813450091984944, 4);
  sqcRYGate(q, -1.4721789250506265, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.05912373630077905, 5);
  sqcRYGate(q, -1.3645831180309982, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.721188000578075, 5);
  sqcRYGate(q, 3.1389317991018566, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5328636261876665, 6);
  sqcRYGate(q, 0.06831192011070986, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9829500682219815, 6);
  sqcRYGate(q, 1.1371455174335194, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9088873431335274, 0);
  sqcRYGate(q, -0.847353379772541, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6791032939837884, 0);
  sqcRYGate(q, 0.9180568825528868, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9286897714820785, 1);
  sqcRYGate(q, -1.462326231948938, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4304161064892638, 1);
  sqcRYGate(q, 0.5254224229728269, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.078372270153688, 2);
  sqcRYGate(q, -1.8098844631282511, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.603703831653891, 2);
  sqcRYGate(q, -3.134775703700342, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0746848896695935, 3);
  sqcRYGate(q, 0.48801827797344277, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0010946856632383375, 3);
  sqcRYGate(q, -3.0949112170352637, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.1111957399188843, 4);
  sqcRYGate(q, -0.27956521186021377, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.315237815314082, 4);
  sqcRYGate(q, 1.529236714100561, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.34937015330322346, 5);
  sqcRYGate(q, 1.6365176111662718, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5882559727908723, 5);
  sqcRYGate(q, -0.08728036705054532, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.221693812261153, 6);
  sqcRYGate(q, 2.2578176163274883, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1593756692557493, 6);
  sqcRYGate(q, -1.4007154512461266, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.107849465687023, 0);
  sqcRYGate(q, -1.4444417629684638, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8715382329635764, 0);
  sqcRYGate(q, 2.3225440233443884, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7148109528339182, 1);
  sqcRYGate(q, 1.3093094889404029, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.043976445746533054, 1);
  sqcRYGate(q, -2.7362522629788657, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1909016742118386, 2);
  sqcRYGate(q, 1.6831244616762302, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1249460359769223, 2);
  sqcRYGate(q, -0.06895308533943643, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9805509408964447, 3);
  sqcRYGate(q, -2.3003897255136168, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.07516454947022216, 3);
  sqcRYGate(q, -0.003915363372429955, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2673340119885153, 4);
  sqcRYGate(q, -1.5715572905844715, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6347204014480312, 4);
  sqcRYGate(q, 0.03129925084051726, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7973316609841001, 5);
  sqcRYGate(q, -2.3917211728456924, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5845760821070893, 5);
  sqcRYGate(q, -0.012702097875266105, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.282710077244665, 6);
  sqcRYGate(q, 0.7877720973397819, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.665497745115096, 6);
  sqcRYGate(q, 2.9935612852415, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2151626047927877, 0);
  sqcRYGate(q, -2.9652155816641526, 1);
  sqcRYGate(q, -2.4686692357077082, 2);
  sqcRYGate(q, 3.007722607554575, 3);
  sqcRYGate(q, 0.9259179270999629, 4);
  sqcRYGate(q, 1.100069669060492, 5);
  sqcRYGate(q, 2.6458385885285103, 6);
  sqcRYGate(q, -1.2197516440117209, 7);

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
