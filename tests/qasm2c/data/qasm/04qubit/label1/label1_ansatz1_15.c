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

  sqcRYGate(q, 1.9739914615463166, 0);
  sqcRZGate(q, -2.862764637077957, 0);
  sqcRYGate(q, 1.089822353049005, 1);
  sqcRZGate(q, -1.8326876390173081, 1);
  sqcRYGate(q, 2.4759118742279482, 2);
  sqcRZGate(q, -0.8766414031255367, 2);
  sqcRYGate(q, -2.3860492924619128, 3);
  sqcRZGate(q, -2.321022289884984, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.12738996261288893, 0);
  sqcRZGate(q, -1.3251105775884469, 0);
  sqcRYGate(q, 0.6504833278541843, 1);
  sqcRZGate(q, 1.301350531504363, 1);
  sqcRYGate(q, 2.6237922420602007, 2);
  sqcRZGate(q, -1.4328169836172426, 2);
  sqcRYGate(q, -0.292439261600265, 3);
  sqcRZGate(q, 0.6883530469629339, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.526384570582132, 0);
  sqcRZGate(q, 1.973776228018175, 0);
  sqcRYGate(q, -0.5531224902605245, 1);
  sqcRZGate(q, -1.6842312985386814, 1);
  sqcRYGate(q, -2.9424550505010663, 2);
  sqcRZGate(q, 2.4571523668538053, 2);
  sqcRYGate(q, 1.007062415447609, 3);
  sqcRZGate(q, 0.7037652373730312, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6590933794853147, 0);
  sqcRZGate(q, -0.39271284031183384, 0);
  sqcRYGate(q, -0.240779621674597, 1);
  sqcRZGate(q, 2.796205261169917, 1);
  sqcRYGate(q, -0.8496582982902118, 2);
  sqcRZGate(q, 2.986456806623611, 2);
  sqcRYGate(q, 1.2810958661688245, 3);
  sqcRZGate(q, -0.16376841340381798, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8935269350784054, 0);
  sqcRZGate(q, 1.2384076872404561, 0);
  sqcRYGate(q, -1.1367761904787532, 1);
  sqcRZGate(q, -1.6543231354640209, 1);
  sqcRYGate(q, -0.3841898052414913, 2);
  sqcRZGate(q, -0.7212198052793546, 2);
  sqcRYGate(q, 0.47308241154065034, 3);
  sqcRZGate(q, 0.9528968677230063, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5173618079116085, 0);
  sqcRZGate(q, 2.4595124371582706, 0);
  sqcRYGate(q, -1.3343386231034682, 1);
  sqcRZGate(q, 2.222295027389711, 1);
  sqcRYGate(q, -2.133248519521251, 2);
  sqcRZGate(q, -0.8654629878761524, 2);
  sqcRYGate(q, -0.23592182913132778, 3);
  sqcRZGate(q, 0.7440616830289715, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.0582620179306513, 0);
  sqcRZGate(q, -0.015433433443365452, 0);
  sqcRYGate(q, -3.072583905394918, 1);
  sqcRZGate(q, -1.0529078832910752, 1);
  sqcRYGate(q, -1.338474848461527, 2);
  sqcRZGate(q, -0.1786994076022017, 2);
  sqcRYGate(q, 0.2572265198806614, 3);
  sqcRZGate(q, -2.255851752072284, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.038265842223884, 0);
  sqcRZGate(q, 2.3784295514928515, 0);
  sqcRYGate(q, -1.285180155943138, 1);
  sqcRZGate(q, 1.2630589347610854, 1);
  sqcRYGate(q, 1.9781420640652623, 2);
  sqcRZGate(q, 1.610208922077015, 2);
  sqcRYGate(q, 1.4212776481963345, 3);
  sqcRZGate(q, -2.016832631905925, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0214309014790466, 0);
  sqcRZGate(q, 0.5584114015698719, 0);
  sqcRYGate(q, 2.900454799721988, 1);
  sqcRZGate(q, -2.327991293934309, 1);
  sqcRYGate(q, 0.19119045107056828, 2);
  sqcRZGate(q, -2.0363197116568115, 2);
  sqcRYGate(q, -1.890262983364802, 3);
  sqcRZGate(q, 2.9729061791374227, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.230619169558337, 0);
  sqcRZGate(q, 0.805263996865885, 0);
  sqcRYGate(q, 1.234131200113267, 1);
  sqcRZGate(q, -0.31268652367513317, 1);
  sqcRYGate(q, -2.6925257623166954, 2);
  sqcRZGate(q, 2.0177760000959886, 2);
  sqcRYGate(q, 2.725738107733124, 3);
  sqcRZGate(q, 0.22154899380214757, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.327899289195688, 0);
  sqcRZGate(q, 2.316241862438754, 0);
  sqcRYGate(q, 2.103754338872408, 1);
  sqcRZGate(q, 2.4545775736794715, 1);
  sqcRYGate(q, -1.6340381024642396, 2);
  sqcRZGate(q, 0.4594123191262813, 2);
  sqcRYGate(q, -0.29577431089664064, 3);
  sqcRZGate(q, 2.82994586055104, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.130414357244081, 0);
  sqcRZGate(q, 2.5195866578724315, 0);
  sqcRYGate(q, -1.180432818471131, 1);
  sqcRZGate(q, 1.5619898227295845, 1);
  sqcRYGate(q, 0.569296776436227, 2);
  sqcRZGate(q, 2.3777938958433085, 2);
  sqcRYGate(q, -3.1001693297912487, 3);
  sqcRZGate(q, -2.1669619932954127, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.573239867510671, 0);
  sqcRZGate(q, 1.3919497800477991, 0);
  sqcRYGate(q, -0.2682670309281376, 1);
  sqcRZGate(q, -1.7684277402659232, 1);
  sqcRYGate(q, 1.6526677740973703, 2);
  sqcRZGate(q, 0.17918596013730173, 2);
  sqcRYGate(q, 1.245475707916771, 3);
  sqcRZGate(q, -2.4370319486781553, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8470928283983508, 0);
  sqcRZGate(q, 2.5572222941294127, 0);
  sqcRYGate(q, -0.10293586173272384, 1);
  sqcRZGate(q, 0.1348979546866449, 1);
  sqcRYGate(q, 2.798108739674258, 2);
  sqcRZGate(q, -0.9254849978261409, 2);
  sqcRYGate(q, -2.7119215569921598, 3);
  sqcRZGate(q, 2.7511653111357957, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.940060205124848, 0);
  sqcRZGate(q, -2.368981763190446, 0);
  sqcRYGate(q, 2.567727637991714, 1);
  sqcRZGate(q, 1.051204521442945, 1);
  sqcRYGate(q, -2.9628662323395414, 2);
  sqcRZGate(q, 1.6030973811213665, 2);
  sqcRYGate(q, 1.7684189752231338, 3);
  sqcRZGate(q, 0.7329204906546591, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5235460964331717, 0);
  sqcRZGate(q, 2.967835383112535, 0);
  sqcRYGate(q, -1.2589120994259453, 1);
  sqcRZGate(q, -2.2012401245726925, 1);
  sqcRYGate(q, 1.0701678212645787, 2);
  sqcRZGate(q, 2.6268924004131318, 2);
  sqcRYGate(q, -0.9682918346164484, 3);
  sqcRZGate(q, -0.438420420290787, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2912867704795625, 0);
  sqcRZGate(q, -1.887787373882495, 0);
  sqcRYGate(q, -2.0850479566180757, 1);
  sqcRZGate(q, -1.4589374877499641, 1);
  sqcRYGate(q, 3.123792761001931, 2);
  sqcRZGate(q, -2.6157978883495283, 2);
  sqcRYGate(q, 1.660962950470275, 3);
  sqcRZGate(q, -1.6773406293223614, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6048614558930234, 0);
  sqcRZGate(q, 2.513048362410871, 0);
  sqcRYGate(q, 2.316367362523313, 1);
  sqcRZGate(q, 2.9908809126752276, 1);
  sqcRYGate(q, -2.952821484853456, 2);
  sqcRZGate(q, 0.8602358215936461, 2);
  sqcRYGate(q, 3.033080560355164, 3);
  sqcRZGate(q, -1.1806159994084506, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5976217181610535, 0);
  sqcRZGate(q, 0.871137504227173, 0);
  sqcRYGate(q, -2.8940489841783754, 1);
  sqcRZGate(q, -0.5701584811235696, 1);
  sqcRYGate(q, -0.9861069356926428, 2);
  sqcRZGate(q, 0.8271520305041502, 2);
  sqcRYGate(q, -1.3112202859766127, 3);
  sqcRZGate(q, 2.055829072714423, 3);

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
