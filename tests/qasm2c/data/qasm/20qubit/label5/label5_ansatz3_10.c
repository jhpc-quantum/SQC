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

  sqcRYGate(q, -0.3528307192146274, 0);
  sqcRZGate(q, -2.1686769046266168, 0);
  sqcRYGate(q, 1.7196202444273674, 1);
  sqcRZGate(q, 0.2702156537410705, 1);
  sqcRYGate(q, 0.7260700111349542, 2);
  sqcRZGate(q, 2.878257411445426, 2);
  sqcRYGate(q, 1.113027760752563, 3);
  sqcRZGate(q, -2.1855494728449014, 3);
  sqcRYGate(q, 0.2032863750932048, 4);
  sqcRZGate(q, 1.7978276361079866, 4);
  sqcRYGate(q, -0.42116158822474636, 5);
  sqcRZGate(q, 0.18638395082226733, 5);
  sqcRYGate(q, 0.001782637814477099, 6);
  sqcRZGate(q, 2.2295738712471813, 6);
  sqcRYGate(q, -0.036104176264499625, 7);
  sqcRZGate(q, -2.206687519590563, 7);
  sqcRYGate(q, -0.15987284030864737, 8);
  sqcRZGate(q, 1.109800228744862, 8);
  sqcRYGate(q, -2.973326868536644, 9);
  sqcRZGate(q, 2.861608370930389, 9);
  sqcRYGate(q, 1.4822324008448071, 10);
  sqcRZGate(q, 2.48120813339899, 10);
  sqcRYGate(q, 1.1673616799637534, 11);
  sqcRZGate(q, -1.8330880451620608, 11);
  sqcRYGate(q, 3.141558964216435, 12);
  sqcRZGate(q, 2.664520758054367, 12);
  sqcRYGate(q, 0.08822507990801069, 13);
  sqcRZGate(q, 1.0892877296747108, 13);
  sqcRYGate(q, 3.1401362341851766, 14);
  sqcRZGate(q, -0.3830827278384704, 14);
  sqcRYGate(q, -0.22897891523455052, 15);
  sqcRZGate(q, 1.992987188858515, 15);
  sqcRYGate(q, -1.511133888104003, 16);
  sqcRZGate(q, 0.15316517399071297, 16);
  sqcRYGate(q, -2.1441398874252906, 17);
  sqcRZGate(q, -1.653999657938888, 17);
  sqcRYGate(q, -3.0082650933090114, 18);
  sqcRZGate(q, 1.9487727028662476, 18);
  sqcRYGate(q, 3.0564824355564486, 19);
  sqcRZGate(q, 3.091377626526037, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.6552206317167997, 0);
  sqcRZGate(q, -0.7707712095430237, 0);
  sqcRYGate(q, 0.8599216960467678, 1);
  sqcRZGate(q, -2.3686389626489484, 1);
  sqcRYGate(q, -1.7105086047527767, 2);
  sqcRZGate(q, -2.692219291921825, 2);
  sqcRYGate(q, 2.1239701717794692, 3);
  sqcRZGate(q, -1.6392301504215325, 3);
  sqcRYGate(q, -0.9364810110638767, 4);
  sqcRZGate(q, -2.0822371067972947, 4);
  sqcRYGate(q, -1.0772763105251144, 5);
  sqcRZGate(q, 0.8526487144592024, 5);
  sqcRYGate(q, -0.0009705868467285107, 6);
  sqcRZGate(q, -0.21558755739996838, 6);
  sqcRYGate(q, 1.9065966010590774, 7);
  sqcRZGate(q, -0.9212730760735219, 7);
  sqcRYGate(q, 2.731609973114425, 8);
  sqcRZGate(q, 1.820885090968059, 8);
  sqcRYGate(q, 3.108628639558445, 9);
  sqcRZGate(q, -2.7041847746682888, 9);
  sqcRYGate(q, -0.08800871817742006, 10);
  sqcRZGate(q, -0.7552581535546488, 10);
  sqcRYGate(q, 0.06111643974628181, 11);
  sqcRZGate(q, -0.9509495834945042, 11);
  sqcRYGate(q, -3.1393583944680294, 12);
  sqcRZGate(q, -0.6097278325048382, 12);
  sqcRYGate(q, 2.717180338821717, 13);
  sqcRZGate(q, -2.3581078422051336, 13);
  sqcRYGate(q, 0.0008658331621542398, 14);
  sqcRZGate(q, 0.045441400139422335, 14);
  sqcRYGate(q, 1.163922368491864, 15);
  sqcRZGate(q, -2.97537652103557, 15);
  sqcRYGate(q, 0.08343707193095007, 16);
  sqcRZGate(q, 0.1538240043183663, 16);
  sqcRYGate(q, 0.14891575349336253, 17);
  sqcRZGate(q, -2.475933176987356, 17);
  sqcRYGate(q, -2.368750255353859, 18);
  sqcRZGate(q, -1.5415658345494487, 18);
  sqcRYGate(q, -3.130604063308494, 19);
  sqcRZGate(q, 0.7887223583131558, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 2.017367914279956, 0);
  sqcRZGate(q, 0.12320450106281908, 0);
  sqcRYGate(q, -1.2891999335034736, 1);
  sqcRZGate(q, 0.6045718794769818, 1);
  sqcRYGate(q, 0.8758423579332861, 2);
  sqcRZGate(q, -3.058155947267375, 2);
  sqcRYGate(q, 2.310738574914382, 3);
  sqcRZGate(q, -2.3873346556124413, 3);
  sqcRYGate(q, 0.6493160229343954, 4);
  sqcRZGate(q, 2.103925798727117, 4);
  sqcRYGate(q, -3.128394100193997, 5);
  sqcRZGate(q, -2.4210056908230633, 5);
  sqcRYGate(q, 0.0014850800627393824, 6);
  sqcRZGate(q, 0.8977969515255533, 6);
  sqcRYGate(q, -2.7250736262411532, 7);
  sqcRZGate(q, 0.6450694841255754, 7);
  sqcRYGate(q, -0.11539632208558183, 8);
  sqcRZGate(q, 0.6131023232475741, 8);
  sqcRYGate(q, 0.009485900701104133, 9);
  sqcRZGate(q, -1.1719063201673192, 9);
  sqcRYGate(q, -0.7371280949258522, 10);
  sqcRZGate(q, 2.9409265497755936, 10);
  sqcRYGate(q, -0.7859209948169585, 11);
  sqcRZGate(q, -0.3861343172032111, 11);
  sqcRYGate(q, 0.0015822325014367422, 12);
  sqcRZGate(q, -2.8457141343981327, 12);
  sqcRYGate(q, -3.134363210099254, 13);
  sqcRZGate(q, 2.234971785755148, 13);
  sqcRYGate(q, -0.0026262888203490405, 14);
  sqcRZGate(q, 0.30063320794112336, 14);
  sqcRYGate(q, 1.9715161049403669, 15);
  sqcRZGate(q, -2.098878677890006, 15);
  sqcRYGate(q, -0.08643279907650481, 16);
  sqcRZGate(q, -1.7204118285338295, 16);
  sqcRYGate(q, -1.8322031919455268, 17);
  sqcRZGate(q, 1.60884028285037, 17);
  sqcRYGate(q, 2.9832063041115906, 18);
  sqcRZGate(q, 1.4828670389227199, 18);
  sqcRYGate(q, -3.0940221560671457, 19);
  sqcRZGate(q, -2.029860986061588, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -2.6010496129075915, 0);
  sqcRZGate(q, 0.3705311191153087, 0);
  sqcRYGate(q, 0.6099087327133932, 1);
  sqcRZGate(q, 1.722141632359369, 1);
  sqcRYGate(q, -1.7202168547583159, 2);
  sqcRZGate(q, -0.27839535212167554, 2);
  sqcRYGate(q, 1.0098760914446663, 3);
  sqcRZGate(q, 0.5825309560928105, 3);
  sqcRYGate(q, 0.7148769766335199, 4);
  sqcRZGate(q, -2.4595012147331587, 4);
  sqcRYGate(q, -2.827589269471607, 5);
  sqcRZGate(q, -0.8183531654665618, 5);
  sqcRYGate(q, -3.1377985242870303, 6);
  sqcRZGate(q, -0.43960008645072607, 6);
  sqcRYGate(q, 1.9828626290093885, 7);
  sqcRZGate(q, -0.28859127931453654, 7);
  sqcRYGate(q, 2.7389599402387765, 8);
  sqcRZGate(q, 2.260226416990669, 8);
  sqcRYGate(q, 1.6055303455963976, 9);
  sqcRZGate(q, -2.472402103186757, 9);
  sqcRYGate(q, 1.9536803603361215, 10);
  sqcRZGate(q, 2.993379092804132, 10);
  sqcRYGate(q, -0.028305820465649664, 11);
  sqcRZGate(q, 2.8993654225756207, 11);
  sqcRYGate(q, 3.1406573492287935, 12);
  sqcRZGate(q, -2.8291804321879077, 12);
  sqcRYGate(q, -1.6252786536926758, 13);
  sqcRZGate(q, -1.688614703270348, 13);
  sqcRYGate(q, 0.0005442682359958468, 14);
  sqcRZGate(q, 1.2301181635790706, 14);
  sqcRYGate(q, 2.2560971556781064, 15);
  sqcRZGate(q, -2.533110284847446, 15);
  sqcRYGate(q, -1.1718885497150957, 16);
  sqcRZGate(q, 1.7567846775289495, 16);
  sqcRYGate(q, 1.5515509298667898, 17);
  sqcRZGate(q, -0.11371558425238514, 17);
  sqcRYGate(q, 0.8081879673868222, 18);
  sqcRZGate(q, -1.4798813962051032, 18);
  sqcRYGate(q, 0.0007981870343954877, 19);
  sqcRZGate(q, -1.4790705521231606, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -0.6955750334126998, 0);
  sqcRZGate(q, -2.8135295806688565, 0);
  sqcRYGate(q, 2.8135113080818233, 1);
  sqcRZGate(q, 1.7361910700882213, 1);
  sqcRYGate(q, 1.1569077458531734, 2);
  sqcRZGate(q, -2.409963008825924, 2);
  sqcRYGate(q, -0.809750949858757, 3);
  sqcRZGate(q, 0.6221690942922997, 3);
  sqcRYGate(q, 0.3086721116457238, 4);
  sqcRZGate(q, 2.910632232852781, 4);
  sqcRYGate(q, 0.01915423342101885, 5);
  sqcRZGate(q, 0.3636105450927755, 5);
  sqcRYGate(q, 3.1389969599469483, 6);
  sqcRZGate(q, 2.435502313952764, 6);
  sqcRYGate(q, 3.08214315545566, 7);
  sqcRZGate(q, 0.7344767822124593, 7);
  sqcRYGate(q, -3.1336929169708334, 8);
  sqcRZGate(q, -1.6109494083420097, 8);
  sqcRYGate(q, -2.2004730274661446, 9);
  sqcRZGate(q, -0.9248301775649039, 9);
  sqcRYGate(q, -0.07004402750647522, 10);
  sqcRZGate(q, -2.9918511934560796, 10);
  sqcRYGate(q, 1.561762032231139, 11);
  sqcRZGate(q, 1.7175366240058851, 11);
  sqcRYGate(q, 3.1408791828834723, 12);
  sqcRZGate(q, 1.5366921323680633, 12);
  sqcRYGate(q, -1.3416998649468208, 13);
  sqcRZGate(q, -1.5253349345502625, 13);
  sqcRYGate(q, -3.1413458948064035, 14);
  sqcRZGate(q, -2.7793490430083896, 14);
  sqcRYGate(q, -3.1262225680117566, 15);
  sqcRZGate(q, 3.136307121722763, 15);
  sqcRYGate(q, -0.01990395579067883, 16);
  sqcRZGate(q, -2.1272208188802475, 16);
  sqcRYGate(q, -0.16408915302182228, 17);
  sqcRZGate(q, 1.6565608985515974, 17);
  sqcRYGate(q, 2.9321858450390086, 18);
  sqcRZGate(q, -0.678579371438893, 18);
  sqcRYGate(q, 1.5797452174349715, 19);
  sqcRZGate(q, 1.5589361230369514, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -1.0722752677913459, 0);
  sqcRZGate(q, -3.0692530857386875, 0);
  sqcRYGate(q, -1.8005349645212947, 1);
  sqcRZGate(q, -2.054422043919089, 1);
  sqcRYGate(q, -3.0799931391335376, 2);
  sqcRZGate(q, -1.8129613392274422, 2);
  sqcRYGate(q, 0.7220405248618372, 3);
  sqcRZGate(q, 2.7665655802752562, 3);
  sqcRYGate(q, 1.9382477028097718, 4);
  sqcRZGate(q, 0.39263354962058356, 4);
  sqcRYGate(q, 0.20217593747270968, 5);
  sqcRZGate(q, -0.87630579622527, 5);
  sqcRYGate(q, 0.003788974187066252, 6);
  sqcRZGate(q, 1.2854119135392112, 6);
  sqcRYGate(q, -0.12283744667726762, 7);
  sqcRZGate(q, 2.169505813581627, 7);
  sqcRYGate(q, -3.1410460856673255, 8);
  sqcRZGate(q, 1.3695387347132972, 8);
  sqcRYGate(q, 0.6359191228184402, 9);
  sqcRZGate(q, -1.3888082324652367, 9);
  sqcRYGate(q, 3.0468197998428774, 10);
  sqcRZGate(q, -1.6016412294279243, 10);
  sqcRYGate(q, 0.009446634060930492, 11);
  sqcRZGate(q, -3.08013854811976, 11);
  sqcRYGate(q, -1.5696583795887458, 12);
  sqcRZGate(q, 2.662231250719703, 12);
  sqcRYGate(q, 1.539878292355528, 13);
  sqcRZGate(q, 1.170458176567923, 13);
  sqcRYGate(q, 0.00021478273561825747, 14);
  sqcRZGate(q, 1.25787268581837, 14);
  sqcRYGate(q, 0.7500177014115126, 15);
  sqcRZGate(q, 1.4251726144838102, 15);
  sqcRYGate(q, -1.6343207074203245, 16);
  sqcRZGate(q, -3.018449400619262, 16);
  sqcRYGate(q, -1.5794872075483557, 17);
  sqcRZGate(q, 0.7669412416806987, 17);
  sqcRYGate(q, -0.01922265169879278, 18);
  sqcRZGate(q, 2.288574020997388, 18);
  sqcRYGate(q, -1.5587917604787305, 19);
  sqcRZGate(q, -3.090669955339901, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -1.6559654592034823, 0);
  sqcRZGate(q, -0.8879429513302908, 0);
  sqcRYGate(q, -2.716752563275119, 1);
  sqcRZGate(q, 0.22328373304130247, 1);
  sqcRYGate(q, -1.3154441079646864, 2);
  sqcRZGate(q, 2.224218580522339, 2);
  sqcRYGate(q, -1.4108665736662727, 3);
  sqcRZGate(q, 0.6589043184836836, 3);
  sqcRYGate(q, -0.26046218279448463, 4);
  sqcRZGate(q, 2.7844152677381615, 4);
  sqcRYGate(q, -3.125756648732908, 5);
  sqcRZGate(q, -2.669548746119633, 5);
  sqcRYGate(q, -1.971954421400886, 6);
  sqcRZGate(q, -0.0008477223759881528, 6);
  sqcRYGate(q, 3.0992893100268724, 7);
  sqcRZGate(q, -1.9246193651475547, 7);
  sqcRYGate(q, -1.5644535950241811, 8);
  sqcRZGate(q, 2.602543936671339, 8);
  sqcRYGate(q, 1.133101713646418, 9);
  sqcRZGate(q, -1.2130400907653485, 9);
  sqcRYGate(q, -1.5708014082706807, 10);
  sqcRZGate(q, 0.014812361693275728, 10);
  sqcRYGate(q, 0.19310870833940805, 11);
  sqcRZGate(q, -1.0958217571947528, 11);
  sqcRYGate(q, -0.0019851373139102794, 12);
  sqcRZGate(q, 2.4179516116104054, 12);
  sqcRYGate(q, 1.5705030300085439, 13);
  sqcRZGate(q, 1.5704766168406046, 13);
  sqcRYGate(q, -0.000358348963321653, 14);
  sqcRZGate(q, -1.8348827392803422, 14);
  sqcRYGate(q, 3.141439362561316, 15);
  sqcRZGate(q, -1.7235989093290938, 15);
  sqcRYGate(q, 1.3304746452860055, 16);
  sqcRZGate(q, -1.7883953997512274, 16);
  sqcRYGate(q, 0.0016559338571342508, 17);
  sqcRZGate(q, 2.445537489531352, 17);
  sqcRYGate(q, -0.5584130278428666, 18);
  sqcRZGate(q, -0.02587898286625033, 18);
  sqcRYGate(q, 1.5723775961275457, 19);
  sqcRZGate(q, -0.9168990204858497, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -1.3123388313025544, 0);
  sqcRZGate(q, -0.40521971003724033, 0);
  sqcRYGate(q, -0.5388306306948315, 1);
  sqcRZGate(q, -1.1989280959286805, 1);
  sqcRYGate(q, -0.9904152001789199, 2);
  sqcRZGate(q, -1.7339658842160437, 2);
  sqcRYGate(q, -0.830915348817908, 3);
  sqcRZGate(q, -0.3555653584517116, 3);
  sqcRYGate(q, -0.0014466347198576202, 4);
  sqcRZGate(q, -1.688983897190754, 4);
  sqcRYGate(q, -0.00530017399638627, 5);
  sqcRZGate(q, 0.6526788651244595, 5);
  sqcRYGate(q, 2.3723645647881537, 6);
  sqcRZGate(q, -0.00017132798518737502, 6);
  sqcRYGate(q, 0.0006946204996145511, 7);
  sqcRZGate(q, -0.28817077434580174, 7);
  sqcRYGate(q, -3.1410241951780904, 8);
  sqcRZGate(q, 0.7662502810352327, 8);
  sqcRYGate(q, -3.1222446541588855, 9);
  sqcRZGate(q, 2.768978946708788, 9);
  sqcRYGate(q, -0.0007464328567605705, 10);
  sqcRZGate(q, 1.1880829722376691, 10);
  sqcRYGate(q, -1.5900814819443627, 11);
  sqcRZGate(q, -1.2535118488191819, 11);
  sqcRYGate(q, 1.5676099366396548, 12);
  sqcRZGate(q, -0.017432240998791926, 12);
  sqcRYGate(q, -1.5724732611796022, 13);
  sqcRZGate(q, 2.405468649209338, 13);
  sqcRYGate(q, -3.141571157974107, 14);
  sqcRZGate(q, -1.6977089701161827, 14);
  sqcRYGate(q, 1.5715219203944395, 15);
  sqcRZGate(q, -0.7887732976684984, 15);
  sqcRYGate(q, 3.13575378966408, 16);
  sqcRZGate(q, 1.3755783680860165, 16);
  sqcRYGate(q, -1.2323144875202416, 17);
  sqcRZGate(q, -1.5750334127571755, 17);
  sqcRYGate(q, 1.562144630175862, 18);
  sqcRZGate(q, -0.09583123863524445, 18);
  sqcRYGate(q, -3.111721319524813, 19);
  sqcRZGate(q, -2.4214915282932052, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -0.4903702493682083, 0);
  sqcRZGate(q, -1.1108977101050865, 0);
  sqcRYGate(q, -1.1448578786371506, 1);
  sqcRZGate(q, 1.5509369180975972, 1);
  sqcRYGate(q, -0.9179102096082732, 2);
  sqcRZGate(q, 0.32733444080237994, 2);
  sqcRYGate(q, 2.154526786353135, 3);
  sqcRZGate(q, -1.2665663307077617, 3);
  sqcRYGate(q, 1.4982024028688334, 4);
  sqcRZGate(q, 0.006129182882768092, 4);
  sqcRYGate(q, -3.113352295418777, 5);
  sqcRZGate(q, -2.979678812544665, 5);
  sqcRYGate(q, -1.9714750478504732, 6);
  sqcRZGate(q, 0.056693984325674414, 6);
  sqcRYGate(q, -2.217652704440461, 7);
  sqcRZGate(q, 2.956672171519534, 7);
  sqcRYGate(q, 2.9026811380977438, 8);
  sqcRZGate(q, 2.5952534586422717, 8);
  sqcRYGate(q, -0.000176170864136086, 9);
  sqcRZGate(q, 1.2079750323869058, 9);
  sqcRYGate(q, 1.29371995395333, 10);
  sqcRZGate(q, 0.3407675550921179, 10);
  sqcRYGate(q, 0.0002381374800799533, 11);
  sqcRZGate(q, -1.8980811236516892, 11);
  sqcRYGate(q, 1.5642409806961464, 12);
  sqcRZGate(q, -1.3068817645556041, 12);
  sqcRYGate(q, 0.0004834456527005315, 13);
  sqcRZGate(q, 0.4485078095592073, 13);
  sqcRYGate(q, 0.0001478513026693662, 14);
  sqcRZGate(q, -0.7620754266917723, 14);
  sqcRYGate(q, 0.0001349127050982446, 15);
  sqcRZGate(q, 2.361265744990606, 15);
  sqcRYGate(q, 1.639974164137298, 16);
  sqcRZGate(q, 1.5800026705891865, 16);
  sqcRYGate(q, 1.5716625547331269, 17);
  sqcRZGate(q, -1.4106539781000267, 17);
  sqcRYGate(q, -1.0160758703558992, 18);
  sqcRZGate(q, -1.286659665912693, 18);
  sqcRYGate(q, 0.04758437491064882, 19);
  sqcRZGate(q, -0.16056202309361467, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 0.5777337511277302, 0);
  sqcRZGate(q, -1.0980170210094427, 0);
  sqcRYGate(q, -2.3984540856745338, 1);
  sqcRZGate(q, 0.9480116494048092, 1);
  sqcRYGate(q, 3.1255603592507226, 2);
  sqcRZGate(q, 2.080392785614821, 2);
  sqcRYGate(q, 2.9888556777131288, 3);
  sqcRZGate(q, 0.8074644496473397, 3);
  sqcRYGate(q, 2.298535475670983, 4);
  sqcRZGate(q, 1.0911897817595457, 4);
  sqcRYGate(q, 0.0013637052504504865, 5);
  sqcRZGate(q, 0.3087573846179286, 5);
  sqcRYGate(q, 3.140488543103879, 6);
  sqcRZGate(q, -1.8168846040830287, 6);
  sqcRYGate(q, 3.122136186978477, 7);
  sqcRZGate(q, -0.18648579330521287, 7);
  sqcRYGate(q, -3.14123104398186, 8);
  sqcRZGate(q, 2.496245910141408, 8);
  sqcRYGate(q, -3.1217251945982865, 9);
  sqcRZGate(q, 2.8521796723427006, 9);
  sqcRYGate(q, 3.136747401353468, 10);
  sqcRZGate(q, 2.047573249953798, 10);
  sqcRYGate(q, -1.58479033313486, 11);
  sqcRZGate(q, 0.4643547272338174, 11);
  sqcRYGate(q, 1.6501002654443653, 12);
  sqcRZGate(q, -1.6809271599078084, 12);
  sqcRYGate(q, 0.007859648376050465, 13);
  sqcRZGate(q, -1.6343293017393679, 13);
  sqcRYGate(q, 0.0009393732892817078, 14);
  sqcRZGate(q, -2.0032658652422226, 14);
  sqcRYGate(q, -1.5713418029451018, 15);
  sqcRZGate(q, 1.5568152359832927, 15);
  sqcRYGate(q, -1.5686275473670683, 16);
  sqcRZGate(q, -3.0040327194046097, 16);
  sqcRYGate(q, 3.048567048707072, 17);
  sqcRZGate(q, 2.1204932334949596, 17);
  sqcRYGate(q, -1.3600047249478866, 18);
  sqcRZGate(q, -0.5460254436265268, 18);
  sqcRYGate(q, -3.113639692036774, 19);
  sqcRZGate(q, -0.10198865901343074, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.0599163366565048, 0);
  sqcRZGate(q, 2.5519518080871317, 0);
  sqcRYGate(q, 0.4497286306024826, 1);
  sqcRZGate(q, -2.5870005767621196, 1);
  sqcRYGate(q, 2.1393330836578333, 2);
  sqcRZGate(q, 1.309557370070661, 2);
  sqcRYGate(q, 0.23470193474413445, 3);
  sqcRZGate(q, -0.5223345462694436, 3);
  sqcRYGate(q, 3.0642861225896776, 4);
  sqcRZGate(q, 0.7786049459503482, 4);
  sqcRYGate(q, 0.29680808819635934, 5);
  sqcRZGate(q, -0.13806965409235694, 5);
  sqcRYGate(q, 3.141270026733132, 6);
  sqcRZGate(q, -0.14089113120191232, 6);
  sqcRYGate(q, 0.9233787968913054, 7);
  sqcRZGate(q, -0.4462837522177759, 7);
  sqcRYGate(q, 2.948558029052209, 8);
  sqcRZGate(q, -2.9537824981214076, 8);
  sqcRYGate(q, 1.621773210015977, 9);
  sqcRZGate(q, -2.8083436476238504, 9);
  sqcRYGate(q, 1.5698646065865, 10);
  sqcRZGate(q, -3.137888052605937, 10);
  sqcRYGate(q, -0.0001156284608040259, 11);
  sqcRZGate(q, 2.302923838156311, 11);
  sqcRYGate(q, 3.004606440886676, 12);
  sqcRZGate(q, -1.6775231224764715, 12);
  sqcRYGate(q, -3.1254626639453176, 13);
  sqcRZGate(q, 0.13028679324957704, 13);
  sqcRYGate(q, -1.5684424100312608, 14);
  sqcRZGate(q, -1.4185123700661169, 14);
  sqcRYGate(q, -1.7289262495021485, 15);
  sqcRZGate(q, -3.0480709969445265, 15);
  sqcRYGate(q, 3.13513350188576, 16);
  sqcRZGate(q, 0.3071707995166359, 16);
  sqcRYGate(q, -3.1234514791725574, 17);
  sqcRZGate(q, -2.756661970266974, 17);
  sqcRYGate(q, -3.135808037172241, 18);
  sqcRZGate(q, 0.37690955149081673, 18);
  sqcRYGate(q, -1.579799701719426, 19);
  sqcRZGate(q, -1.3536960472325494, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 0.4861718844705427, 0);
  sqcRZGate(q, 0.17725628642351485, 0);
  sqcRYGate(q, -1.318706828561572, 1);
  sqcRZGate(q, 2.897216614107724, 1);
  sqcRYGate(q, 1.6487966402597265, 2);
  sqcRZGate(q, 2.7761781598551716, 2);
  sqcRYGate(q, 2.0979589799555223, 3);
  sqcRZGate(q, -1.1442425687034838, 3);
  sqcRYGate(q, -3.1247290658341016, 4);
  sqcRZGate(q, -1.8741377036886062, 4);
  sqcRYGate(q, -0.0007496460226123125, 5);
  sqcRZGate(q, -0.9766520706715083, 5);
  sqcRYGate(q, 2.416357528918184, 6);
  sqcRZGate(q, -2.040085565185724, 6);
  sqcRYGate(q, -1.8303326370061894, 7);
  sqcRZGate(q, 0.5762151686751302, 7);
  sqcRYGate(q, 3.1404526169879543, 8);
  sqcRZGate(q, 2.26894204289671, 8);
  sqcRYGate(q, -1.5648854164603314, 9);
  sqcRZGate(q, -2.9616917242285723, 9);
  sqcRYGate(q, 1.5725971279865618, 10);
  sqcRZGate(q, 3.140986750364641, 10);
  sqcRYGate(q, 3.139107452176798, 11);
  sqcRZGate(q, -1.6262709763835763, 11);
  sqcRYGate(q, -0.7531397028820114, 12);
  sqcRZGate(q, -2.084939301964207, 12);
  sqcRYGate(q, 0.0002646167217445956, 13);
  sqcRZGate(q, -2.380885709530542, 13);
  sqcRYGate(q, -3.141386436066716, 14);
  sqcRZGate(q, 0.15249353944680658, 14);
  sqcRYGate(q, 3.1319011394086216, 15);
  sqcRZGate(q, 0.0939183229562361, 15);
  sqcRYGate(q, -0.00023484645408980808, 16);
  sqcRZGate(q, 0.020372436618006695, 16);
  sqcRYGate(q, -0.12534719636570557, 17);
  sqcRZGate(q, 2.9908777731930325, 17);
  sqcRYGate(q, 1.590344259465029, 18);
  sqcRZGate(q, -1.0784074664972076, 18);
  sqcRYGate(q, -1.568760742637635, 19);
  sqcRZGate(q, 1.57243212277007, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.5907194614563176, 0);
  sqcRZGate(q, 1.5460308486478098, 0);
  sqcRYGate(q, 3.0845886488625727, 1);
  sqcRZGate(q, -0.5292142754011696, 1);
  sqcRYGate(q, 0.06030116700665692, 2);
  sqcRZGate(q, 1.8552091357116174, 2);
  sqcRYGate(q, -1.563917310180159, 3);
  sqcRZGate(q, -1.5803790261794999, 3);
  sqcRYGate(q, -1.561217323257674, 4);
  sqcRZGate(q, -3.0307625976539425, 4);
  sqcRYGate(q, 0.46377654177239425, 5);
  sqcRZGate(q, -2.9152096658395674, 5);
  sqcRYGate(q, -0.00077907643842412, 6);
  sqcRZGate(q, 2.3673403879887913, 6);
  sqcRYGate(q, -3.1386807688636833, 7);
  sqcRZGate(q, 2.1387504043152488, 7);
  sqcRYGate(q, 3.537807560061168e-05, 8);
  sqcRZGate(q, 0.3689954850723165, 8);
  sqcRYGate(q, -3.1412561048125647, 9);
  sqcRZGate(q, -2.9791511641784343, 9);
  sqcRYGate(q, 1.5704062867950126, 10);
  sqcRZGate(q, 2.007090146610374, 10);
  sqcRYGate(q, 1.5731730194242124, 11);
  sqcRZGate(q, -0.5434362752590343, 11);
  sqcRYGate(q, -0.002251187740360372, 12);
  sqcRZGate(q, -1.8980336266911824, 12);
  sqcRYGate(q, -3.1403073844628824, 13);
  sqcRZGate(q, -2.0025717833728383, 13);
  sqcRYGate(q, -1.568113986149795, 14);
  sqcRZGate(q, -0.00250201598538613, 14);
  sqcRYGate(q, 1.730074189217837, 15);
  sqcRZGate(q, 1.4162981975950766, 15);
  sqcRYGate(q, -0.004433330541257319, 16);
  sqcRZGate(q, 2.9211716406429944, 16);
  sqcRYGate(q, 0.002515586540577708, 17);
  sqcRZGate(q, 0.1537420239497118, 17);
  sqcRYGate(q, -3.0585458822753537, 18);
  sqcRZGate(q, 0.48958286686443603, 18);
  sqcRYGate(q, 1.5718391922982153, 19);
  sqcRZGate(q, -1.5343146266457668, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.3438529119563718, 0);
  sqcRZGate(q, -2.6883277454277072, 0);
  sqcRYGate(q, 1.6358702104413938, 1);
  sqcRZGate(q, -2.769927773068832, 1);
  sqcRYGate(q, 0.007308305864286518, 2);
  sqcRZGate(q, 0.4159155469716299, 2);
  sqcRYGate(q, -1.5904197671733065, 3);
  sqcRZGate(q, -0.8974241124018176, 3);
  sqcRYGate(q, 0.013603636971451394, 4);
  sqcRZGate(q, 1.7960607967286357, 4);
  sqcRYGate(q, 3.114303642040683, 5);
  sqcRZGate(q, -0.6623621188892289, 5);
  sqcRYGate(q, 3.139245364938903, 6);
  sqcRZGate(q, -1.0694385053603832, 6);
  sqcRYGate(q, 1.5747222824227354, 7);
  sqcRZGate(q, 1.9983994711219475, 7);
  sqcRYGate(q, -0.0007396962597069814, 8);
  sqcRZGate(q, -2.275425765131197, 8);
  sqcRYGate(q, -1.5589867522644882, 9);
  sqcRZGate(q, 0.6832122354886144, 9);
  sqcRYGate(q, -0.00032052535248405854, 10);
  sqcRZGate(q, 2.5217039140204425, 10);
  sqcRYGate(q, -3.1341098665718263, 11);
  sqcRZGate(q, 1.6932654555814892, 11);
  sqcRYGate(q, 0.0002578869559589603, 12);
  sqcRZGate(q, 0.6552500990603699, 12);
  sqcRYGate(q, -3.133969556186396, 13);
  sqcRZGate(q, -0.7159514286907616, 13);
  sqcRYGate(q, -1.5709868482178424, 14);
  sqcRZGate(q, 2.9586599476219857, 14);
  sqcRYGate(q, -0.00556705647188484, 15);
  sqcRZGate(q, -0.7623560381411235, 15);
  sqcRYGate(q, 1.5697208988330023, 16);
  sqcRZGate(q, -1.7542922468831197, 16);
  sqcRYGate(q, -1.5690362272200487, 17);
  sqcRZGate(q, -0.8896677550277927, 17);
  sqcRYGate(q, -1.571599473901358, 18);
  sqcRZGate(q, 2.963250038196565, 18);
  sqcRYGate(q, 1.6018001717110437, 19);
  sqcRZGate(q, 2.576390377322765, 19);

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
