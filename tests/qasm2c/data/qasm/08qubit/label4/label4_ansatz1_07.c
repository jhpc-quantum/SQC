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

  sqcRYGate(q, 2.1886225816087177, 0);
  sqcRZGate(q, 0.6058949622656311, 0);
  sqcRYGate(q, 1.8711612670451987, 1);
  sqcRZGate(q, 2.7442909793896684, 1);
  sqcRYGate(q, 0.9086807784464427, 2);
  sqcRZGate(q, -2.0589339735877035, 2);
  sqcRYGate(q, -2.6982244738145202, 3);
  sqcRZGate(q, 0.1404704404292092, 3);
  sqcRYGate(q, 1.4678663900386788, 4);
  sqcRZGate(q, -2.736898568534154, 4);
  sqcRYGate(q, -0.02677231945469885, 5);
  sqcRZGate(q, 1.5057084859993592, 5);
  sqcRYGate(q, -1.1659033104119272, 6);
  sqcRZGate(q, -2.062083894053606, 6);
  sqcRYGate(q, -2.3000379685673233, 7);
  sqcRZGate(q, 0.8158128342730172, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.096932537375988, 0);
  sqcRZGate(q, 0.05364927981604505, 0);
  sqcRYGate(q, -0.5737328956873045, 1);
  sqcRZGate(q, 0.5808017146150483, 1);
  sqcRYGate(q, 3.0349123749764924, 2);
  sqcRZGate(q, 1.3110458307233979, 2);
  sqcRYGate(q, 0.025439297797341, 3);
  sqcRZGate(q, 1.2695126514960016, 3);
  sqcRYGate(q, 3.105923328078034, 4);
  sqcRZGate(q, 1.077592607239063, 4);
  sqcRYGate(q, -1.5661968470289693, 5);
  sqcRZGate(q, 1.5627707950716259, 5);
  sqcRYGate(q, -0.9377508196130524, 6);
  sqcRZGate(q, -2.974148971680766, 6);
  sqcRYGate(q, -1.9002886047631486, 7);
  sqcRZGate(q, 0.38742926292107605, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4617704927168063, 0);
  sqcRZGate(q, 2.528244446044562, 0);
  sqcRYGate(q, 1.6578985309227647, 1);
  sqcRZGate(q, 1.3724268601985468, 1);
  sqcRYGate(q, 0.9043431108477237, 2);
  sqcRZGate(q, 1.7888178241707764, 2);
  sqcRYGate(q, -1.6500966485151387, 3);
  sqcRZGate(q, -3.1087055657579423, 3);
  sqcRYGate(q, 3.127798348984803, 4);
  sqcRZGate(q, 0.7964280732369025, 4);
  sqcRYGate(q, 1.5706029810802578, 5);
  sqcRZGate(q, -1.3763447717757684, 5);
  sqcRYGate(q, 1.5714996025565255, 6);
  sqcRZGate(q, -0.8623998881051729, 6);
  sqcRYGate(q, -2.2324398584014173, 7);
  sqcRZGate(q, -0.5911725265291724, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.462187366992009, 0);
  sqcRZGate(q, -0.9925929271486672, 0);
  sqcRYGate(q, 1.8646499302104527, 1);
  sqcRZGate(q, -1.7186050855221673, 1);
  sqcRYGate(q, 1.6422463555185507, 2);
  sqcRZGate(q, -0.02411176315021102, 2);
  sqcRYGate(q, 3.1408201282740977, 3);
  sqcRZGate(q, 1.1596737212552783, 3);
  sqcRYGate(q, -1.5917920955997462, 4);
  sqcRZGate(q, 0.06511870969128972, 4);
  sqcRYGate(q, -1.5695337758646777, 5);
  sqcRZGate(q, 1.644602662276729, 5);
  sqcRYGate(q, -2.8502579833872863, 6);
  sqcRZGate(q, 0.7826163968536862, 6);
  sqcRYGate(q, -1.7557575067566398, 7);
  sqcRZGate(q, 2.8376746211251938, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.6443468394738676, 0);
  sqcRZGate(q, -2.8120291734473737, 0);
  sqcRYGate(q, 1.6539941820492263, 1);
  sqcRZGate(q, -2.989971281747869, 1);
  sqcRYGate(q, -0.12433526589017953, 2);
  sqcRZGate(q, -1.6561383335015416, 2);
  sqcRYGate(q, -2.713047170187598, 3);
  sqcRZGate(q, -3.141581967773724, 3);
  sqcRYGate(q, -2.176767545709257, 4);
  sqcRZGate(q, -0.030552528716891413, 4);
  sqcRYGate(q, -2.677133375691798, 5);
  sqcRZGate(q, -0.6775306166311034, 5);
  sqcRYGate(q, 1.548073981525028, 6);
  sqcRZGate(q, -0.6399584876334697, 6);
  sqcRYGate(q, 1.7830643865721625, 7);
  sqcRZGate(q, 0.07673640118624991, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.5557589777352714, 0);
  sqcRZGate(q, -0.23843475666347677, 0);
  sqcRYGate(q, -1.2530061038734628, 1);
  sqcRZGate(q, -0.09394919725144835, 1);
  sqcRYGate(q, 0.6994338908329475, 2);
  sqcRZGate(q, -1.58697371767277, 2);
  sqcRYGate(q, 1.5690564254041057, 3);
  sqcRZGate(q, -3.08881143802281, 3);
  sqcRYGate(q, -0.33306571703661003, 4);
  sqcRZGate(q, 0.009148513542128535, 4);
  sqcRYGate(q, -3.138233693048584, 5);
  sqcRZGate(q, 0.7031089434807987, 5);
  sqcRYGate(q, 0.0015059457720742245, 6);
  sqcRZGate(q, -2.859814466482096, 6);
  sqcRYGate(q, 1.8572787664792099, 7);
  sqcRZGate(q, -3.0553700280672675, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5813392600711476, 0);
  sqcRZGate(q, -3.0941687564368654, 0);
  sqcRYGate(q, -1.5661743818628917, 1);
  sqcRZGate(q, -2.0660664553862342, 1);
  sqcRYGate(q, 0.653188421441457, 2);
  sqcRZGate(q, 0.9969861439918352, 2);
  sqcRYGate(q, -3.114865373442833, 3);
  sqcRZGate(q, 0.050450595582508306, 3);
  sqcRYGate(q, 1.5795560662234494, 4);
  sqcRZGate(q, -3.141570442619064, 4);
  sqcRYGate(q, -0.0544366964888523, 5);
  sqcRZGate(q, -0.6896163091550499, 5);
  sqcRYGate(q, -0.5844890182696272, 6);
  sqcRZGate(q, 0.5356535297530646, 6);
  sqcRYGate(q, 1.807387713856178, 7);
  sqcRZGate(q, -0.8684780864420808, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5602381664384186, 0);
  sqcRZGate(q, -3.115331968555345, 0);
  sqcRYGate(q, -0.0019971779375691032, 1);
  sqcRZGate(q, -2.6510584433259807, 1);
  sqcRYGate(q, 0.003027611380906895, 2);
  sqcRZGate(q, -0.9862078977329176, 2);
  sqcRYGate(q, -2.3723648985349364, 3);
  sqcRZGate(q, -2.691992280787932, 3);
  sqcRYGate(q, -1.2037147179679966, 4);
  sqcRZGate(q, 0.00047424563108133816, 4);
  sqcRYGate(q, -0.00017819200727791528, 5);
  sqcRZGate(q, -1.6915531347061252, 5);
  sqcRYGate(q, 0.000823377352544341, 6);
  sqcRZGate(q, 2.8377878468191207, 6);
  sqcRYGate(q, 0.46795408763997776, 7);
  sqcRZGate(q, -3.01984205552348, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.1377457560677815, 0);
  sqcRZGate(q, -2.2886366714402877, 0);
  sqcRYGate(q, 1.5858175213896843, 1);
  sqcRZGate(q, -0.5876617427495603, 1);
  sqcRYGate(q, 2.0735379234219127, 2);
  sqcRZGate(q, 0.0054308991722626125, 2);
  sqcRYGate(q, -3.140453757787958, 3);
  sqcRZGate(q, 0.8676762745754466, 3);
  sqcRYGate(q, -1.5804665406804685, 4);
  sqcRZGate(q, -3.108034277078871, 4);
  sqcRYGate(q, -0.02251815677281612, 5);
  sqcRZGate(q, -2.2420198997997205, 5);
  sqcRYGate(q, 1.2442792383132912, 6);
  sqcRZGate(q, 1.4101755669594365, 6);
  sqcRYGate(q, 3.0378545773466787, 7);
  sqcRZGate(q, 0.5945778074718221, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.141177247222222, 0);
  sqcRZGate(q, 1.1934866272140463, 0);
  sqcRYGate(q, -1.5698316728574033, 1);
  sqcRZGate(q, -1.5702024415188554, 1);
  sqcRYGate(q, 1.5802801217936107, 2);
  sqcRZGate(q, -1.5708281638523254, 2);
  sqcRYGate(q, -3.141293408283412, 3);
  sqcRZGate(q, -1.1537224780049697, 3);
  sqcRYGate(q, 3.128708359322688, 4);
  sqcRZGate(q, 1.6053208574218951, 4);
  sqcRYGate(q, 1.5674487000609945, 5);
  sqcRZGate(q, 1.5712735211040068, 5);
  sqcRYGate(q, -1.574947656953432, 6);
  sqcRZGate(q, -1.5379712290723306, 6);
  sqcRYGate(q, 0.5527403058570224, 7);
  sqcRZGate(q, 0.30380225598421035, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.0020583265254763413, 0);
  sqcRZGate(q, 3.0931080881460704, 0);
  sqcRYGate(q, 1.5708263011673056, 1);
  sqcRZGate(q, -0.5053430812524906, 1);
  sqcRYGate(q, -1.5707889329686688, 2);
  sqcRZGate(q, 3.1317551110978163, 2);
  sqcRYGate(q, 1.5707925977871262, 3);
  sqcRZGate(q, 0.07870601100756246, 3);
  sqcRYGate(q, -1.5704609600171369, 4);
  sqcRZGate(q, 1.5534187671792408, 4);
  sqcRYGate(q, 1.5701283085451356, 5);
  sqcRZGate(q, 1.6514644207497975, 5);
  sqcRYGate(q, -1.5726228907493143, 6);
  sqcRZGate(q, -1.7396138136032775, 6);
  sqcRYGate(q, 1.5752517051372867, 7);
  sqcRZGate(q, -1.4747637014835526, 7);

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
