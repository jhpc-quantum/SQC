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

  sqcRYGate(q, -2.919895311812978, 0);
  sqcRZGate(q, -2.0365043005598062, 0);
  sqcRYGate(q, 1.4768364010046084, 1);
  sqcRZGate(q, -1.8098062786171067, 1);
  sqcRYGate(q, 1.5963615001747575, 2);
  sqcRZGate(q, -0.0062364960813470205, 2);
  sqcRYGate(q, 1.7012356598834975, 3);
  sqcRZGate(q, -2.2053346737451758, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.2784718206036813, 0);
  sqcRZGate(q, 0.45288444952356066, 0);
  sqcRYGate(q, -0.2787710008057635, 1);
  sqcRZGate(q, -1.6734742833003493, 1);
  sqcRYGate(q, 1.3177911489341176, 2);
  sqcRZGate(q, 0.6974852945962436, 2);
  sqcRYGate(q, -2.780338290332999, 3);
  sqcRZGate(q, -0.9573074063615471, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.081414975387535, 0);
  sqcRZGate(q, -1.2322212158168397, 0);
  sqcRYGate(q, 0.44201268798640925, 1);
  sqcRZGate(q, -1.478669017447896, 1);
  sqcRYGate(q, -1.977028136477342, 2);
  sqcRZGate(q, 2.4217648196839154, 2);
  sqcRYGate(q, -0.9828522551531398, 3);
  sqcRZGate(q, 2.946230433315827, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.026142169019855745, 0);
  sqcRZGate(q, -1.503935194743944, 0);
  sqcRYGate(q, 1.7633856328412392, 1);
  sqcRZGate(q, 1.1945485556961615, 1);
  sqcRYGate(q, 1.1228214121770441, 2);
  sqcRZGate(q, -2.546748550162984, 2);
  sqcRYGate(q, -2.492218751758781, 3);
  sqcRZGate(q, 2.572871635255164, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.825631872384487, 0);
  sqcRZGate(q, -0.4270573456628348, 0);
  sqcRYGate(q, 1.8340648311630101, 1);
  sqcRZGate(q, 0.9005274644922155, 1);
  sqcRYGate(q, 0.19953199394910082, 2);
  sqcRZGate(q, 1.0156873793190764, 2);
  sqcRYGate(q, 1.2955935076194214, 3);
  sqcRZGate(q, -0.7718541524508487, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.552322490601479, 0);
  sqcRZGate(q, 0.7623561367086288, 0);
  sqcRYGate(q, 1.7273076370980824, 1);
  sqcRZGate(q, -1.564059591366755, 1);
  sqcRYGate(q, -1.6000522252398612, 2);
  sqcRZGate(q, 1.075443117035503, 2);
  sqcRYGate(q, 0.6260329966200466, 3);
  sqcRZGate(q, -3.02188437091894, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.065086676245529, 0);
  sqcRZGate(q, -1.2216136405869726, 0);
  sqcRYGate(q, 1.823363425222213, 1);
  sqcRZGate(q, 0.28684890618903286, 1);
  sqcRYGate(q, 0.1333998332725388, 2);
  sqcRZGate(q, -1.485099127560737, 2);
  sqcRYGate(q, -0.808146741980357, 3);
  sqcRZGate(q, -0.5826897710281749, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3417794662440698, 0);
  sqcRZGate(q, 1.089745089399685, 0);
  sqcRYGate(q, 2.638072394864252, 1);
  sqcRZGate(q, 2.5932782434798676, 1);
  sqcRYGate(q, 2.764730749117043, 2);
  sqcRZGate(q, 0.7432634756870505, 2);
  sqcRYGate(q, 0.9537449697975842, 3);
  sqcRZGate(q, -1.7722361778443843, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8763018827002536, 0);
  sqcRZGate(q, -1.163240492095298, 0);
  sqcRYGate(q, -0.8598175071379124, 1);
  sqcRZGate(q, 0.6278522852080912, 1);
  sqcRYGate(q, -0.6331747223924857, 2);
  sqcRZGate(q, 0.6058573342230212, 2);
  sqcRYGate(q, -1.041205287178631, 3);
  sqcRZGate(q, -2.225129461223374, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.32922057275283745, 0);
  sqcRZGate(q, -2.793601913164902, 0);
  sqcRYGate(q, -1.1858041613582282, 1);
  sqcRZGate(q, -1.7777850648313818, 1);
  sqcRYGate(q, -2.9239522004862333, 2);
  sqcRZGate(q, 0.17960358328990006, 2);
  sqcRYGate(q, 0.4258800149924338, 3);
  sqcRZGate(q, -2.5540807768412037, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.10255763603843, 0);
  sqcRZGate(q, -2.7350192643522817, 0);
  sqcRYGate(q, 0.6696882304300995, 1);
  sqcRZGate(q, -0.8068596394352936, 1);
  sqcRYGate(q, -0.33750459099515323, 2);
  sqcRZGate(q, 1.682948064412131, 2);
  sqcRYGate(q, 2.5036517418370026, 3);
  sqcRZGate(q, -1.3262554057827405, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9038958619773662, 0);
  sqcRZGate(q, 2.8404659117434186, 0);
  sqcRYGate(q, -0.19674128400454885, 1);
  sqcRZGate(q, 0.3480661242604785, 1);
  sqcRYGate(q, -1.3014404335001122, 2);
  sqcRZGate(q, 1.425036475386448, 2);
  sqcRYGate(q, -1.5015138526275429, 3);
  sqcRZGate(q, -2.693357373576119, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.508351177942487, 0);
  sqcRZGate(q, 2.3687863573292396, 0);
  sqcRYGate(q, -0.8997512019425006, 1);
  sqcRZGate(q, -2.011112526863414, 1);
  sqcRYGate(q, 2.7939160301883037, 2);
  sqcRZGate(q, 2.0774627986750396, 2);
  sqcRYGate(q, 0.14858778434764092, 3);
  sqcRZGate(q, -2.975380499498981, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1983639530477, 0);
  sqcRZGate(q, 0.807963217307066, 0);
  sqcRYGate(q, -3.114818199271229, 1);
  sqcRZGate(q, 0.5010378873579056, 1);
  sqcRYGate(q, 1.3774685905929278, 2);
  sqcRZGate(q, -2.026914692132169, 2);
  sqcRYGate(q, -0.340705245441121, 3);
  sqcRZGate(q, -2.2648448339061957, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8386255671351237, 0);
  sqcRZGate(q, -2.1644008601920213, 0);
  sqcRYGate(q, 1.897640661058147, 1);
  sqcRZGate(q, -2.603985664716404, 1);
  sqcRYGate(q, -0.15650541820463423, 2);
  sqcRZGate(q, -0.22004122830962292, 2);
  sqcRYGate(q, 1.3548409631519995, 3);
  sqcRZGate(q, -2.4710553694353568, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8549954113223599, 0);
  sqcRZGate(q, 1.14967546563459, 0);
  sqcRYGate(q, -1.6162856484157508, 1);
  sqcRZGate(q, -2.864945547223424, 1);
  sqcRYGate(q, 0.14757181488890048, 2);
  sqcRZGate(q, -0.5642105566374492, 2);
  sqcRYGate(q, -0.042588698314061695, 3);
  sqcRZGate(q, 2.3473834112919474, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.40595508603612895, 0);
  sqcRZGate(q, 2.74594055953482, 0);
  sqcRYGate(q, -2.8128037204534047, 1);
  sqcRZGate(q, -0.044041853694064007, 1);
  sqcRYGate(q, -3.0865206924140085, 2);
  sqcRZGate(q, -2.838924790493502, 2);
  sqcRYGate(q, -1.6142575821185172, 3);
  sqcRZGate(q, -2.0986541192681245, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7698529136241055, 0);
  sqcRZGate(q, 2.3292523847874627, 0);
  sqcRYGate(q, -1.696352911471799, 1);
  sqcRZGate(q, -1.5180081109340882, 1);
  sqcRYGate(q, 1.2698850131501167, 2);
  sqcRZGate(q, 2.630530429561472, 2);
  sqcRYGate(q, 0.1235921920962341, 3);
  sqcRZGate(q, 0.7914137353922106, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.423784881170019, 0);
  sqcRZGate(q, -2.6675530656147157, 0);
  sqcRYGate(q, 1.032313102506168, 1);
  sqcRZGate(q, 2.487697089083548, 1);
  sqcRYGate(q, -2.971582489144969, 2);
  sqcRZGate(q, -1.687446968187957, 2);
  sqcRYGate(q, 2.565681089672725, 3);
  sqcRZGate(q, 2.953257320482661, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.926644041630106, 0);
  sqcRZGate(q, -0.6160096049917629, 0);
  sqcRYGate(q, -1.6405292258084634, 1);
  sqcRZGate(q, 1.9280502921423464, 1);
  sqcRYGate(q, -2.095083531437388, 2);
  sqcRZGate(q, 2.875099942617617, 2);
  sqcRYGate(q, -2.55733656831648, 3);
  sqcRZGate(q, 2.45236321017707, 3);

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
