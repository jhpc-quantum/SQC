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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 2.711358183406727, 0);
  sqcRZGate(q, -1.2165919140488746, 0);
  sqcRYGate(q, 2.685098781791525, 1);
  sqcRZGate(q, 0.9399801192576618, 1);
  sqcRYGate(q, 0.05782308956775194, 2);
  sqcRZGate(q, -0.02920403713584197, 2);
  sqcRYGate(q, 3.1311740957831735, 3);
  sqcRZGate(q, 2.5382774908383183, 3);
  sqcRYGate(q, 0.6177897274037032, 4);
  sqcRZGate(q, -2.849525541142788, 4);
  sqcRYGate(q, 0.9884195526632005, 5);
  sqcRZGate(q, -1.1850542178532926, 5);
  sqcRYGate(q, -3.1379271708364684, 6);
  sqcRZGate(q, 0.7479639622189631, 6);
  sqcRYGate(q, 1.0882224043961388, 7);
  sqcRZGate(q, 0.8804648335613399, 7);
  sqcRYGate(q, 0.45869041750408623, 8);
  sqcRZGate(q, 1.050504001526521, 8);
  sqcRYGate(q, -1.8477972314850426, 9);
  sqcRZGate(q, -2.620684127639973, 9);
  sqcRYGate(q, -0.050262179476955986, 10);
  sqcRZGate(q, 0.45593187518584866, 10);
  sqcRYGate(q, 0.24192316967209937, 11);
  sqcRZGate(q, 1.6089706004662645, 11);
  sqcRYGate(q, 0.3637502053513595, 12);
  sqcRZGate(q, -2.5453482990872494, 12);
  sqcRYGate(q, -1.4988702678852013, 13);
  sqcRZGate(q, 1.8087540449790553, 13);
  sqcRYGate(q, -0.007060962690574003, 14);
  sqcRZGate(q, 2.514502409501761, 14);
  sqcRYGate(q, -0.47954452840839784, 15);
  sqcRZGate(q, 0.09949000731717743, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.3365369471879123, 0);
  sqcRZGate(q, -1.7706865316857385, 0);
  sqcRYGate(q, -2.4329194223218695, 1);
  sqcRZGate(q, -0.8451903073697092, 1);
  sqcRYGate(q, -0.04839545633164999, 2);
  sqcRZGate(q, 0.6814826668278755, 2);
  sqcRYGate(q, -0.02120200726861286, 3);
  sqcRZGate(q, 0.47556710921994944, 3);
  sqcRYGate(q, 1.1564402307095571, 4);
  sqcRZGate(q, -2.2080142489269856, 4);
  sqcRYGate(q, 1.8918838720802995, 5);
  sqcRZGate(q, -1.8924355308543426, 5);
  sqcRYGate(q, -0.00024920810706105984, 6);
  sqcRZGate(q, -1.6061604430750123, 6);
  sqcRYGate(q, 3.13134666337847, 7);
  sqcRZGate(q, -2.212994791717138, 7);
  sqcRYGate(q, 3.123764334695386, 8);
  sqcRZGate(q, 2.468206545766906, 8);
  sqcRYGate(q, -1.5637853395124368, 9);
  sqcRZGate(q, 0.6464973116201684, 9);
  sqcRYGate(q, 1.487960786010942, 10);
  sqcRZGate(q, 0.04688974019751691, 10);
  sqcRYGate(q, 2.1743900827193485, 11);
  sqcRZGate(q, 0.36135360558830065, 11);
  sqcRYGate(q, 3.1047740126314523, 12);
  sqcRZGate(q, -1.9094771754098518, 12);
  sqcRYGate(q, 0.9018149551386037, 13);
  sqcRZGate(q, 1.9876011007686076, 13);
  sqcRYGate(q, 3.1287167593176215, 14);
  sqcRZGate(q, 1.8949704079797405, 14);
  sqcRYGate(q, -2.4892819576435654, 15);
  sqcRZGate(q, -2.9278597109001696, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.1820420058744845, 0);
  sqcRZGate(q, 2.539166515734781, 0);
  sqcRYGate(q, -1.1005148084805922, 1);
  sqcRZGate(q, 1.433325144890972, 1);
  sqcRYGate(q, 0.023307176291572005, 2);
  sqcRZGate(q, -0.7363761357828504, 2);
  sqcRYGate(q, 2.875054312357659, 3);
  sqcRZGate(q, 1.7957230262800261, 3);
  sqcRYGate(q, -0.9958050335912176, 4);
  sqcRZGate(q, 1.1163235641786402, 4);
  sqcRYGate(q, 0.9429328738901769, 5);
  sqcRZGate(q, 1.3152384094145795, 5);
  sqcRYGate(q, 0.34331202824043583, 6);
  sqcRZGate(q, -2.322221322770209, 6);
  sqcRYGate(q, 1.6898569271051025, 7);
  sqcRZGate(q, 0.06282159728558537, 7);
  sqcRYGate(q, -0.37762318372636244, 8);
  sqcRZGate(q, 1.6863467588885603, 8);
  sqcRYGate(q, -3.084092293836604, 9);
  sqcRZGate(q, 0.2245889523065347, 9);
  sqcRYGate(q, -2.6609574509232323, 10);
  sqcRZGate(q, -0.8875656504853812, 10);
  sqcRYGate(q, 0.02770099374613988, 11);
  sqcRZGate(q, 2.3674635140357467, 11);
  sqcRYGate(q, -0.5302978005006205, 12);
  sqcRZGate(q, 1.0892306755457382, 12);
  sqcRYGate(q, -0.8350331227389143, 13);
  sqcRZGate(q, -2.726692509554889, 13);
  sqcRYGate(q, -2.7288230749834654, 14);
  sqcRZGate(q, 0.35275076723124155, 14);
  sqcRYGate(q, -0.4083134687917037, 15);
  sqcRZGate(q, 2.5659398246335385, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.127306637850971, 0);
  sqcRZGate(q, -0.3258036440171925, 0);
  sqcRYGate(q, 1.8621412350975737, 1);
  sqcRZGate(q, 1.5641906620683486, 1);
  sqcRYGate(q, -0.012686453664139563, 2);
  sqcRZGate(q, -2.3704624289674885, 2);
  sqcRYGate(q, -0.8053625386097686, 3);
  sqcRZGate(q, 2.740031723769851, 3);
  sqcRYGate(q, -1.686500516244652, 4);
  sqcRZGate(q, 0.4722414302549157, 4);
  sqcRYGate(q, -3.122326096634944, 5);
  sqcRZGate(q, -2.700065148180722, 5);
  sqcRYGate(q, -3.135146620515027, 6);
  sqcRZGate(q, 0.4522468856401378, 6);
  sqcRYGate(q, -2.7408100844972076, 7);
  sqcRZGate(q, 2.1531561851456944, 7);
  sqcRYGate(q, 1.868229802148015, 8);
  sqcRZGate(q, -3.126542378734629, 8);
  sqcRYGate(q, 2.9404725696465754, 9);
  sqcRZGate(q, 2.769796435636241, 9);
  sqcRYGate(q, -2.928310599115077, 10);
  sqcRZGate(q, -0.8951931731418403, 10);
  sqcRYGate(q, -3.1358053523362637, 11);
  sqcRZGate(q, -0.42707087519621106, 11);
  sqcRYGate(q, 0.010131823902654906, 12);
  sqcRZGate(q, 2.1171212449807815, 12);
  sqcRYGate(q, -3.131685683222527, 13);
  sqcRZGate(q, 0.7351084091727793, 13);
  sqcRYGate(q, 0.005655193722377244, 14);
  sqcRZGate(q, 2.143539708414901, 14);
  sqcRYGate(q, -0.025385987762933698, 15);
  sqcRZGate(q, -1.4076904938197965, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.2210764343258145, 0);
  sqcRZGate(q, -0.3155005317180803, 0);
  sqcRYGate(q, 1.4956381348552537, 1);
  sqcRZGate(q, -2.0404865861945676, 1);
  sqcRYGate(q, 0.020921344369334325, 2);
  sqcRZGate(q, -0.13016531791453473, 2);
  sqcRYGate(q, 2.2124252029465863, 3);
  sqcRZGate(q, -3.1307622072987633, 3);
  sqcRYGate(q, -3.107435181493609, 4);
  sqcRZGate(q, -3.037837940021911, 4);
  sqcRYGate(q, 0.46095915907000806, 5);
  sqcRZGate(q, -1.6769902875708294, 5);
  sqcRYGate(q, 0.9706043992905, 6);
  sqcRZGate(q, 2.144843919315327, 6);
  sqcRYGate(q, -2.6807976124058155, 7);
  sqcRZGate(q, -2.7125652348109774, 7);
  sqcRYGate(q, 1.5757615606405475, 8);
  sqcRZGate(q, -1.2110079643829055, 8);
  sqcRYGate(q, -0.0019249276896431409, 9);
  sqcRZGate(q, 2.873613266068141, 9);
  sqcRYGate(q, 2.6361397824828137, 10);
  sqcRZGate(q, 0.11227619062881809, 10);
  sqcRYGate(q, 3.1015403861535056, 11);
  sqcRZGate(q, -3.135496822247696, 11);
  sqcRYGate(q, -0.43102983943875905, 12);
  sqcRZGate(q, -0.901479617823952, 12);
  sqcRYGate(q, 2.4936914175992864, 13);
  sqcRZGate(q, -2.1888710798548736, 13);
  sqcRYGate(q, 2.4269364722547526, 14);
  sqcRZGate(q, 2.03797004782118, 14);
  sqcRYGate(q, -1.3682379768532968, 15);
  sqcRZGate(q, 1.3923692953373625, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.040941078328851, 0);
  sqcRZGate(q, -2.5838267844207525, 0);
  sqcRYGate(q, -2.3131205745634724, 1);
  sqcRZGate(q, 1.231805741307999, 1);
  sqcRYGate(q, -3.1281715256792464, 2);
  sqcRZGate(q, 0.023043417685861378, 2);
  sqcRYGate(q, 2.0025001543291028, 3);
  sqcRZGate(q, -0.7425596872534864, 3);
  sqcRYGate(q, 1.3402564186855903, 4);
  sqcRZGate(q, -3.089648699933104, 4);
  sqcRYGate(q, 3.106338034136199, 5);
  sqcRZGate(q, 1.9694348772837111, 5);
  sqcRYGate(q, -3.1123937253600764, 6);
  sqcRZGate(q, -0.31628340236646846, 6);
  sqcRYGate(q, -2.446882729318218, 7);
  sqcRZGate(q, -0.1632153691381273, 7);
  sqcRYGate(q, 0.062047011862119916, 8);
  sqcRZGate(q, -2.498448552608388, 8);
  sqcRYGate(q, 0.6895194118071687, 9);
  sqcRZGate(q, 2.8371350866235825, 9);
  sqcRYGate(q, 1.7276428245225668, 10);
  sqcRZGate(q, 2.8492081658037587, 10);
  sqcRYGate(q, -1.5440475487872434, 11);
  sqcRZGate(q, 0.6627000221533282, 11);
  sqcRYGate(q, 0.07216113624641451, 12);
  sqcRZGate(q, -0.46421275996013556, 12);
  sqcRYGate(q, 0.014257827311164926, 13);
  sqcRZGate(q, 0.5689673366535786, 13);
  sqcRYGate(q, -0.026007579994215217, 14);
  sqcRZGate(q, -0.0257151637199193, 14);
  sqcRYGate(q, -1.4117105341920988, 15);
  sqcRZGate(q, -2.8798932139127786, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.6538968775104756, 0);
  sqcRZGate(q, 1.964793813042287, 0);
  sqcRYGate(q, -1.2238962754392348, 1);
  sqcRZGate(q, -2.808493908726413, 1);
  sqcRYGate(q, 3.1316694320791845, 2);
  sqcRZGate(q, -0.29962597305907757, 2);
  sqcRYGate(q, 3.1107930746485963, 3);
  sqcRZGate(q, -0.8496635817047826, 3);
  sqcRYGate(q, -0.02177655670449319, 4);
  sqcRZGate(q, -3.0294297492069355, 4);
  sqcRYGate(q, 3.12253662399033, 5);
  sqcRZGate(q, -0.15275973012953337, 5);
  sqcRYGate(q, -2.454919123486508, 6);
  sqcRZGate(q, -2.6327361613996882, 6);
  sqcRYGate(q, -0.3417817933674172, 7);
  sqcRZGate(q, 2.3217218285043484, 7);
  sqcRYGate(q, 2.9347885921902637, 8);
  sqcRZGate(q, -0.9597867025712334, 8);
  sqcRYGate(q, -2.3313186291875705, 9);
  sqcRZGate(q, -0.3127129618983994, 9);
  sqcRYGate(q, 1.564576510151073, 10);
  sqcRZGate(q, -0.34158048379173606, 10);
  sqcRYGate(q, 0.5632550677978921, 11);
  sqcRZGate(q, 1.3218474489254421, 11);
  sqcRYGate(q, 2.2826926658423172, 12);
  sqcRZGate(q, 1.5036488698394574, 12);
  sqcRYGate(q, -2.902589887895729, 13);
  sqcRZGate(q, 0.8288084931185317, 13);
  sqcRYGate(q, 0.44622851835519417, 14);
  sqcRZGate(q, -3.1004555074575406, 14);
  sqcRYGate(q, -0.6197611036373756, 15);
  sqcRZGate(q, -0.17050119464566293, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.4718588967827984, 0);
  sqcRZGate(q, -0.9580361107645786, 0);
  sqcRYGate(q, 3.0248357770779744, 1);
  sqcRZGate(q, -2.035184517720273, 1);
  sqcRYGate(q, 0.09931879734535626, 2);
  sqcRZGate(q, 0.9689971671247387, 2);
  sqcRYGate(q, -0.9816984956120094, 3);
  sqcRZGate(q, 0.2720086417237946, 3);
  sqcRYGate(q, 1.1691779177052926, 4);
  sqcRZGate(q, 0.7781978732893073, 4);
  sqcRYGate(q, 0.1315816732847681, 5);
  sqcRZGate(q, -2.786313560875878, 5);
  sqcRYGate(q, 2.8884077601466727, 6);
  sqcRZGate(q, -2.9325088119732983, 6);
  sqcRYGate(q, 0.8888599366941078, 7);
  sqcRZGate(q, -0.33750104674364684, 7);
  sqcRYGate(q, 2.3822521972244233, 8);
  sqcRZGate(q, -0.949974079775891, 8);
  sqcRYGate(q, -2.957236600529797, 9);
  sqcRZGate(q, -1.53047033851497, 9);
  sqcRYGate(q, 3.102233242833503, 10);
  sqcRZGate(q, 0.7873534278734633, 10);
  sqcRYGate(q, -2.8397955145467013, 11);
  sqcRZGate(q, -2.0436285784891144, 11);
  sqcRYGate(q, -3.11362688077246, 12);
  sqcRZGate(q, -1.925238693764693, 12);
  sqcRYGate(q, -0.14331750259622494, 13);
  sqcRZGate(q, 1.6380433652593593, 13);
  sqcRYGate(q, -2.504174310157357, 14);
  sqcRZGate(q, 0.9416832216619112, 14);
  sqcRYGate(q, -1.3608775767626264, 15);
  sqcRZGate(q, 3.0378333391916965, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.2644010902156857, 0);
  sqcRZGate(q, 2.873997907044219, 0);
  sqcRYGate(q, -2.9292000761234545, 1);
  sqcRZGate(q, -2.3991271972756802, 1);
  sqcRYGate(q, -0.39596748949770444, 2);
  sqcRZGate(q, -0.9587666565740613, 2);
  sqcRYGate(q, 3.0089337588143836, 3);
  sqcRZGate(q, -0.47967065742762216, 3);
  sqcRYGate(q, -0.06397809928120678, 4);
  sqcRZGate(q, -0.15493434101226367, 4);
  sqcRYGate(q, 3.136518258875147, 5);
  sqcRZGate(q, 1.9705083413748996, 5);
  sqcRYGate(q, 0.26273418819729066, 6);
  sqcRZGate(q, -0.2511819570505099, 6);
  sqcRYGate(q, 2.990908136076328, 7);
  sqcRZGate(q, -0.09966526006339561, 7);
  sqcRYGate(q, 2.5967192621529565, 8);
  sqcRZGate(q, 2.3451201541756497, 8);
  sqcRYGate(q, -0.031859294644458844, 9);
  sqcRZGate(q, -2.4670372329668595, 9);
  sqcRYGate(q, -0.523055641241478, 10);
  sqcRZGate(q, 0.5931249964300518, 10);
  sqcRYGate(q, 1.044748773858056, 11);
  sqcRZGate(q, 2.8735350506971127, 11);
  sqcRYGate(q, 1.5346798018562635, 12);
  sqcRZGate(q, -0.22955467789587658, 12);
  sqcRYGate(q, 0.023150475811459792, 13);
  sqcRZGate(q, 1.191630425565467, 13);
  sqcRYGate(q, 0.0011520877098138982, 14);
  sqcRZGate(q, -0.21372239802286508, 14);
  sqcRYGate(q, 0.6830622937026423, 15);
  sqcRZGate(q, 0.011620807445956682, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.26570730280052746, 0);
  sqcRZGate(q, -1.182088978373434, 0);
  sqcRYGate(q, -3.133905761047424, 1);
  sqcRZGate(q, -2.188972049032643, 1);
  sqcRYGate(q, 3.0313206661527423, 2);
  sqcRZGate(q, -0.939612728690678, 2);
  sqcRYGate(q, -0.013453743978804944, 3);
  sqcRZGate(q, -2.2040490104762673, 3);
  sqcRYGate(q, -2.067197286651049, 4);
  sqcRZGate(q, -0.743896725734995, 4);
  sqcRYGate(q, -3.1290551605659953, 5);
  sqcRZGate(q, 2.978939862416301, 5);
  sqcRYGate(q, 3.0222938686645215, 6);
  sqcRZGate(q, -1.7559824077236748, 6);
  sqcRYGate(q, -2.4278535575711726, 7);
  sqcRZGate(q, 2.6689213091035064, 7);
  sqcRYGate(q, -0.11675941635799199, 8);
  sqcRZGate(q, -2.3487392293274043, 8);
  sqcRYGate(q, -0.020947476037978422, 9);
  sqcRZGate(q, 2.166203053421287, 9);
  sqcRYGate(q, -3.0677791061358413, 10);
  sqcRZGate(q, 0.7220450196313397, 10);
  sqcRYGate(q, -2.9704816580333637, 11);
  sqcRZGate(q, 0.5917626613871274, 11);
  sqcRYGate(q, 0.15166190862076823, 12);
  sqcRZGate(q, 1.1612016228792683, 12);
  sqcRYGate(q, -0.36900068504572975, 13);
  sqcRZGate(q, 2.372761660057699, 13);
  sqcRYGate(q, 2.531632631168287, 14);
  sqcRZGate(q, 3.0003821150164276, 14);
  sqcRYGate(q, -1.4084400603022063, 15);
  sqcRZGate(q, -0.40339921497125797, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.4538170712151892, 0);
  sqcRZGate(q, 0.25177896283182927, 0);
  sqcRYGate(q, 3.0951570173101213, 1);
  sqcRZGate(q, -2.8730282318864293, 1);
  sqcRYGate(q, 1.0231263744213526, 2);
  sqcRZGate(q, 1.9803741878962655, 2);
  sqcRYGate(q, 2.713304954063402, 3);
  sqcRZGate(q, -3.1058601036328617, 3);
  sqcRYGate(q, -0.06859390203873739, 4);
  sqcRZGate(q, 2.8395749680862483, 4);
  sqcRYGate(q, -0.007074262604400694, 5);
  sqcRZGate(q, 0.9993228044882567, 5);
  sqcRYGate(q, -1.5696737811674966, 6);
  sqcRZGate(q, -1.3921824604396011, 6);
  sqcRYGate(q, 0.6346946863209402, 7);
  sqcRZGate(q, -1.2960058040104259, 7);
  sqcRYGate(q, -2.417716480439023, 8);
  sqcRZGate(q, -1.8348931060207954, 8);
  sqcRYGate(q, -3.102721387793344, 9);
  sqcRZGate(q, 1.0033211927735344, 9);
  sqcRYGate(q, -0.6643119021269656, 10);
  sqcRZGate(q, -1.8030718989857017, 10);
  sqcRYGate(q, 2.9458988675364255, 11);
  sqcRZGate(q, -1.4492321237871688, 11);
  sqcRYGate(q, 0.5426644038194937, 12);
  sqcRZGate(q, -1.8777982152226675, 12);
  sqcRYGate(q, -2.454384895131075, 13);
  sqcRZGate(q, -0.024254337517262862, 13);
  sqcRYGate(q, 3.1378799158632633, 14);
  sqcRZGate(q, -1.0033279414564156, 14);
  sqcRYGate(q, 1.3885971272545827, 15);
  sqcRZGate(q, -1.0182396411757395, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.2975564951478316, 0);
  sqcRZGate(q, -0.7168113714349298, 0);
  sqcRYGate(q, -0.00637959786490061, 1);
  sqcRZGate(q, -2.8416518174777257, 1);
  sqcRYGate(q, 0.9480141177363093, 2);
  sqcRZGate(q, -2.978813543250926, 2);
  sqcRYGate(q, 3.1392717088059876, 3);
  sqcRZGate(q, 0.8584188862626815, 3);
  sqcRYGate(q, 2.2087487275120683, 4);
  sqcRZGate(q, 2.21753456049004, 4);
  sqcRYGate(q, 0.35329246086492994, 5);
  sqcRZGate(q, 1.3247363530892766, 5);
  sqcRYGate(q, 3.094869164423479, 6);
  sqcRZGate(q, -3.081715011647716, 6);
  sqcRYGate(q, 0.09394711915674506, 7);
  sqcRZGate(q, 1.0077448024614508, 7);
  sqcRYGate(q, 0.012062489897110673, 8);
  sqcRZGate(q, 1.7523827083807815, 8);
  sqcRYGate(q, 0.7811413764988834, 9);
  sqcRZGate(q, 1.1336210448844621, 9);
  sqcRYGate(q, -0.3223081848841973, 10);
  sqcRZGate(q, -2.0712990539253955, 10);
  sqcRYGate(q, 2.99845826284091, 11);
  sqcRZGate(q, 0.605996411149651, 11);
  sqcRYGate(q, 2.666328947233484, 12);
  sqcRZGate(q, 2.537460113949454, 12);
  sqcRYGate(q, 2.4783965420733702, 13);
  sqcRZGate(q, -2.6267689053630727, 13);
  sqcRYGate(q, -3.1391724518646194, 14);
  sqcRZGate(q, -1.2244443931490527, 14);
  sqcRYGate(q, -2.6425017716267116, 15);
  sqcRZGate(q, -2.6798335315676054, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.546879016848771, 0);
  sqcRZGate(q, -2.003283421551706, 0);
  sqcRYGate(q, 0.5791070846864876, 1);
  sqcRZGate(q, 2.10042102751788, 1);
  sqcRYGate(q, 1.63291259140175, 2);
  sqcRZGate(q, 0.8651046059763677, 2);
  sqcRYGate(q, -0.2539828602047321, 3);
  sqcRZGate(q, -2.9980403885044966, 3);
  sqcRYGate(q, -1.1875442052643261, 4);
  sqcRZGate(q, -0.9320868609101582, 4);
  sqcRYGate(q, 0.19147003311750682, 5);
  sqcRZGate(q, -1.8147937873970443, 5);
  sqcRYGate(q, 1.4644473934197566, 6);
  sqcRZGate(q, 2.417000754189436, 6);
  sqcRYGate(q, -2.640329515662582, 7);
  sqcRZGate(q, -2.7868511144789614, 7);
  sqcRYGate(q, 3.1211009982871833, 8);
  sqcRZGate(q, -1.524714134259864, 8);
  sqcRYGate(q, -3.0795347339223733, 9);
  sqcRZGate(q, -0.8739594124163963, 9);
  sqcRYGate(q, -0.012347439762349654, 10);
  sqcRZGate(q, -1.0248232652901033, 10);
  sqcRYGate(q, 0.03373569380035449, 11);
  sqcRZGate(q, 1.2062602330863053, 11);
  sqcRYGate(q, 2.3501156138046113, 12);
  sqcRZGate(q, -0.45340255689362596, 12);
  sqcRYGate(q, 0.2848319122539298, 13);
  sqcRZGate(q, 1.6238608522874047, 13);
  sqcRYGate(q, 1.8799683989133105, 14);
  sqcRZGate(q, 0.580050678069163, 14);
  sqcRYGate(q, 2.4647299398258906, 15);
  sqcRZGate(q, 2.907335936447829, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.028390777250534956, 0);
  sqcRZGate(q, 2.372891945893154, 0);
  sqcRYGate(q, 3.1408523391038847, 1);
  sqcRZGate(q, -0.9936895550029439, 1);
  sqcRYGate(q, 3.111235413833843, 2);
  sqcRZGate(q, -0.7263830297925067, 2);
  sqcRYGate(q, -0.7510366005714593, 3);
  sqcRZGate(q, -2.688886015171217, 3);
  sqcRYGate(q, 2.9569776090384923, 4);
  sqcRZGate(q, -1.556731542575252, 4);
  sqcRYGate(q, -3.1375667649680383, 5);
  sqcRZGate(q, -1.8270990540271412, 5);
  sqcRYGate(q, -2.2102866405050277, 6);
  sqcRZGate(q, 0.27361891057036836, 6);
  sqcRYGate(q, -1.4124214950313594, 7);
  sqcRZGate(q, -1.0077185955346168, 7);
  sqcRYGate(q, 2.382552130225314, 8);
  sqcRZGate(q, -0.14055888434582542, 8);
  sqcRYGate(q, 2.078752081146881, 9);
  sqcRZGate(q, -2.610559900030542, 9);
  sqcRYGate(q, -2.734612577383762, 10);
  sqcRZGate(q, 0.6693596329824562, 10);
  sqcRYGate(q, -0.2616976229042724, 11);
  sqcRZGate(q, 2.122164040260092, 11);
  sqcRYGate(q, -1.684673992023118, 12);
  sqcRZGate(q, -1.5022004215212768, 12);
  sqcRYGate(q, 3.121261698290524, 13);
  sqcRZGate(q, -1.2164164905486796, 13);
  sqcRYGate(q, 0.04342999504546434, 14);
  sqcRZGate(q, -1.7083974981584138, 14);
  sqcRYGate(q, 1.6043301637483522, 15);
  sqcRZGate(q, -1.4103410880240261, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.5087592697513561, 0);
  sqcRZGate(q, 1.0450382483096516, 0);
  sqcRYGate(q, -0.5662427480713592, 1);
  sqcRZGate(q, -2.8363637610119867, 1);
  sqcRYGate(q, -2.593797569409533, 2);
  sqcRZGate(q, 2.43035384450322, 2);
  sqcRYGate(q, 0.09134580653786144, 3);
  sqcRZGate(q, 1.5685069440566837, 3);
  sqcRYGate(q, -3.1336437190475435, 4);
  sqcRZGate(q, 1.3849729511662792, 4);
  sqcRYGate(q, 3.133499662729713, 5);
  sqcRZGate(q, -2.9534215817752987, 5);
  sqcRYGate(q, -3.13029240514873, 6);
  sqcRZGate(q, -2.584543645314996, 6);
  sqcRYGate(q, 0.018085055401632744, 7);
  sqcRZGate(q, 1.0922301968298822, 7);
  sqcRYGate(q, 0.007146408286472727, 8);
  sqcRZGate(q, 1.2037650828810327, 8);
  sqcRYGate(q, -3.0853866011559132, 9);
  sqcRZGate(q, 0.10916211889002535, 9);
  sqcRYGate(q, -3.1345884729556244, 10);
  sqcRZGate(q, -0.785014473539776, 10);
  sqcRYGate(q, -3.111540682741215, 11);
  sqcRZGate(q, -0.5428250938009719, 11);
  sqcRYGate(q, -0.016386146199475426, 12);
  sqcRZGate(q, -2.5044610234139872, 12);
  sqcRYGate(q, -0.04922275399316753, 13);
  sqcRZGate(q, -2.484807198400435, 13);
  sqcRYGate(q, -0.3459946429228689, 14);
  sqcRZGate(q, 1.3099038098672546, 14);
  sqcRYGate(q, 0.8128750491080511, 15);
  sqcRZGate(q, 1.946755016310482, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.47654245025281483, 0);
  sqcRZGate(q, -2.9223414757783104, 0);
  sqcRYGate(q, -3.136916237221939, 1);
  sqcRZGate(q, -1.0410291523207649, 1);
  sqcRYGate(q, 0.7969827418385627, 2);
  sqcRZGate(q, 0.7919901698669278, 2);
  sqcRYGate(q, 2.3569431199438027, 3);
  sqcRZGate(q, -0.6639500503659539, 3);
  sqcRYGate(q, 0.3246147056737483, 4);
  sqcRZGate(q, -1.4228466856014825, 4);
  sqcRYGate(q, 3.1279529795197543, 5);
  sqcRZGate(q, 0.06628020449480465, 5);
  sqcRYGate(q, -1.4729019897695093, 6);
  sqcRZGate(q, 0.4686241724281998, 6);
  sqcRYGate(q, 1.7509332751209818, 7);
  sqcRZGate(q, -0.6512820704060066, 7);
  sqcRYGate(q, 2.7425472722759787, 8);
  sqcRZGate(q, 2.715996865862576, 8);
  sqcRYGate(q, 1.385516984110786, 9);
  sqcRZGate(q, 0.2809305740091383, 9);
  sqcRYGate(q, -0.16018843094867025, 10);
  sqcRZGate(q, 3.008257962709978, 10);
  sqcRYGate(q, -2.917611817316085, 11);
  sqcRZGate(q, -1.4800524106240982, 11);
  sqcRYGate(q, 0.21029351994955905, 12);
  sqcRZGate(q, -0.5400262292232655, 12);
  sqcRYGate(q, -0.03222721786041749, 13);
  sqcRZGate(q, -1.448631849934415, 13);
  sqcRYGate(q, 2.316706494307208, 14);
  sqcRZGate(q, 2.834513480189228, 14);
  sqcRYGate(q, 1.7888606574096415, 15);
  sqcRZGate(q, -3.1389446072822635, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.825325971035464, 0);
  sqcRZGate(q, -2.8046150795634976, 0);
  sqcRYGate(q, 0.0562400454512213, 1);
  sqcRZGate(q, 2.1613071120478438, 1);
  sqcRYGate(q, -2.806487329383386, 2);
  sqcRZGate(q, -0.9075969202243074, 2);
  sqcRYGate(q, -0.9366557731661473, 3);
  sqcRZGate(q, 3.1318167772057097, 3);
  sqcRYGate(q, -0.03580977654659477, 4);
  sqcRZGate(q, -1.9093316179135027, 4);
  sqcRYGate(q, -0.04312207768827481, 5);
  sqcRZGate(q, -2.9996302338813514, 5);
  sqcRYGate(q, -1.6590750573520037, 6);
  sqcRZGate(q, -0.6219450982728579, 6);
  sqcRYGate(q, -0.026160069519029872, 7);
  sqcRZGate(q, 1.0065297072043837, 7);
  sqcRYGate(q, 0.007154777235112596, 8);
  sqcRZGate(q, 1.7451764135637466, 8);
  sqcRYGate(q, 0.013244683817567724, 9);
  sqcRZGate(q, -1.250029743188408, 9);
  sqcRYGate(q, -3.0680101569883105, 10);
  sqcRZGate(q, -2.72562015705618, 10);
  sqcRYGate(q, 3.1354057029133564, 11);
  sqcRZGate(q, 1.347766447540609, 11);
  sqcRYGate(q, 2.9915509270745555, 12);
  sqcRZGate(q, 1.7531139243447142, 12);
  sqcRYGate(q, -0.006738782090052918, 13);
  sqcRZGate(q, 2.453022507258966, 13);
  sqcRYGate(q, -2.7447719011263656, 14);
  sqcRZGate(q, 2.955275766913311, 14);
  sqcRYGate(q, 2.602299986143364, 15);
  sqcRZGate(q, 0.9990000660491924, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 3.1412381265006286, 0);
  sqcRZGate(q, -2.521201144238769, 0);
  sqcRYGate(q, 0.2721052178200658, 1);
  sqcRZGate(q, -1.4000371161441698, 1);
  sqcRYGate(q, -0.7578643837560071, 2);
  sqcRZGate(q, -0.1952576700611855, 2);
  sqcRYGate(q, -1.9812303716103392, 3);
  sqcRZGate(q, -2.86478006735034, 3);
  sqcRYGate(q, -0.011758509939720163, 4);
  sqcRZGate(q, -0.5566373571578849, 4);
  sqcRYGate(q, -3.091169064535287, 5);
  sqcRZGate(q, -0.2331587275666651, 5);
  sqcRYGate(q, -2.5177033617901707, 6);
  sqcRZGate(q, -1.8655264302615522, 6);
  sqcRYGate(q, -0.06562551552605456, 7);
  sqcRZGate(q, 0.6217435420269743, 7);
  sqcRYGate(q, -2.5587483496892682, 8);
  sqcRZGate(q, 2.123953441171778, 8);
  sqcRYGate(q, 1.3755569893460509, 9);
  sqcRZGate(q, 1.959583073639803, 9);
  sqcRYGate(q, 2.8759286745407358, 10);
  sqcRZGate(q, 0.435583009719891, 10);
  sqcRYGate(q, 0.040159382529128825, 11);
  sqcRZGate(q, 0.7883685260560469, 11);
  sqcRYGate(q, 1.19661690760605, 12);
  sqcRZGate(q, -0.7835925063639504, 12);
  sqcRYGate(q, -2.021143801028879, 13);
  sqcRZGate(q, 3.108568006749801, 13);
  sqcRYGate(q, -1.7444550238375571, 14);
  sqcRZGate(q, -1.7694265124305513, 14);
  sqcRYGate(q, 1.4145310587734912, 15);
  sqcRZGate(q, 1.0295560743681698, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.4471580375271418, 0);
  sqcRZGate(q, 1.5590515146983677, 0);
  sqcRYGate(q, 1.8014331618045785, 1);
  sqcRZGate(q, 2.1048507952804383, 1);
  sqcRYGate(q, 2.816031048230522, 2);
  sqcRZGate(q, -2.824897051022536, 2);
  sqcRYGate(q, -0.6093644137332408, 3);
  sqcRZGate(q, -1.139154338364516, 3);
  sqcRYGate(q, 2.3988878477515096, 4);
  sqcRZGate(q, 0.32867488276335716, 4);
  sqcRYGate(q, -3.064805821512837, 5);
  sqcRZGate(q, -1.9219926776444538, 5);
  sqcRYGate(q, -0.3226921167540642, 6);
  sqcRZGate(q, -0.519150238313772, 6);
  sqcRYGate(q, 0.24262964676521914, 7);
  sqcRZGate(q, -2.8932094721361543, 7);
  sqcRYGate(q, 1.5767356500626093, 8);
  sqcRZGate(q, 1.8298574082755337, 8);
  sqcRYGate(q, -2.620609294327737, 9);
  sqcRZGate(q, -0.9425753720310377, 9);
  sqcRYGate(q, -1.9799291928662177, 10);
  sqcRZGate(q, 3.0655996613072287, 10);
  sqcRYGate(q, 0.8218768135717415, 11);
  sqcRZGate(q, -0.2514786986719239, 11);
  sqcRYGate(q, -3.1367928009559702, 12);
  sqcRZGate(q, -1.168803881657605, 12);
  sqcRYGate(q, -2.622325115780334, 13);
  sqcRZGate(q, -0.012078908920353904, 13);
  sqcRYGate(q, -3.128424737520752, 14);
  sqcRZGate(q, 1.1285163211529483, 14);
  sqcRYGate(q, 2.7516926932478825, 15);
  sqcRZGate(q, 0.6079091440035326, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.5584446630221587, 0);
  sqcRZGate(q, -0.2202086455817474, 0);
  sqcRYGate(q, -0.009160120962526814, 1);
  sqcRZGate(q, -2.07736194524648, 1);
  sqcRYGate(q, -3.0631675548920403, 2);
  sqcRZGate(q, 3.085805993084277, 2);
  sqcRYGate(q, -0.03391234946755747, 3);
  sqcRZGate(q, 0.8514688355352735, 3);
  sqcRYGate(q, -0.025741504343813837, 4);
  sqcRZGate(q, 2.625638112879397, 4);
  sqcRYGate(q, 3.1369226439302094, 5);
  sqcRZGate(q, 2.654954456867531, 5);
  sqcRYGate(q, 2.865396085175124, 6);
  sqcRZGate(q, 2.937260767872287, 6);
  sqcRYGate(q, -0.22466921507187632, 7);
  sqcRZGate(q, -3.1012535493521947, 7);
  sqcRYGate(q, -0.003779710916127964, 8);
  sqcRZGate(q, 1.3706723293206462, 8);
  sqcRYGate(q, -0.0006322780345113799, 9);
  sqcRZGate(q, -3.061640724923611, 9);
  sqcRYGate(q, -3.1243648040473833, 10);
  sqcRZGate(q, -0.06090624154346988, 10);
  sqcRYGate(q, -3.106853242422734, 11);
  sqcRZGate(q, -2.732754986711768, 11);
  sqcRYGate(q, 3.138770462236043, 12);
  sqcRZGate(q, 0.34537412484773083, 12);
  sqcRYGate(q, -2.008599139298078, 13);
  sqcRZGate(q, 1.2976331870531785, 13);
  sqcRYGate(q, -2.0462152950214296, 14);
  sqcRZGate(q, 2.534426114174716, 14);
  sqcRYGate(q, -1.3044297136715688, 15);
  sqcRZGate(q, 0.23121402608009292, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.06494773624996064, 0);
  sqcRZGate(q, 1.7305821137436732, 0);
  sqcRYGate(q, -1.4965633630395265, 1);
  sqcRZGate(q, 1.3740079294908325, 1);
  sqcRYGate(q, -2.9783870734502287, 2);
  sqcRZGate(q, -1.3210225546511163, 2);
  sqcRYGate(q, -2.9145171598442965, 3);
  sqcRZGate(q, 1.378429899026595, 3);
  sqcRYGate(q, -1.2245149218223697, 4);
  sqcRZGate(q, 1.2958534380084712, 4);
  sqcRYGate(q, 0.07600621275503996, 5);
  sqcRZGate(q, 0.6573165194508, 5);
  sqcRYGate(q, -2.2665486582633747, 6);
  sqcRZGate(q, 0.28601923340262536, 6);
  sqcRYGate(q, 1.5955056010074666, 7);
  sqcRZGate(q, 0.3296168609100583, 7);
  sqcRYGate(q, -2.173284798743517, 8);
  sqcRZGate(q, -2.4923720350761824, 8);
  sqcRYGate(q, 1.48811482502908, 9);
  sqcRZGate(q, 0.7148189769726925, 9);
  sqcRYGate(q, -1.4655320194782868, 10);
  sqcRZGate(q, -1.8104410395816761, 10);
  sqcRYGate(q, 2.8020086497689776, 11);
  sqcRZGate(q, -1.813650988392741, 11);
  sqcRYGate(q, 2.6073352201771525, 12);
  sqcRZGate(q, 2.058946215589042, 12);
  sqcRYGate(q, -0.008825899378156699, 13);
  sqcRZGate(q, 0.27283027255328357, 13);
  sqcRYGate(q, 2.5826345236287818, 14);
  sqcRZGate(q, 1.3703528122591946, 14);
  sqcRYGate(q, -1.7233619244192075, 15);
  sqcRZGate(q, 3.12313681323199, 15);

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
