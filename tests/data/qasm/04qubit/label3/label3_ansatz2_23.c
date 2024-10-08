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

  sqcRYGate(q, 0.7442759915089258, 0);
  sqcRZGate(q, 1.1363702635557411, 0);
  sqcRYGate(q, -2.6653390094829716, 1);
  sqcRZGate(q, 1.8892980540565574, 1);
  sqcRYGate(q, 0.29933130681507336, 2);
  sqcRZGate(q, 1.3991001662874032, 2);
  sqcRYGate(q, -2.143770184334814, 3);
  sqcRZGate(q, -0.8364050580552763, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.4785272134513519, 0);
  sqcRZGate(q, -1.9349900637991029, 0);
  sqcRYGate(q, -0.1748251747469345, 1);
  sqcRZGate(q, -1.284329431346288, 1);
  sqcRYGate(q, 0.06924320987087462, 2);
  sqcRZGate(q, 1.0743972592058908, 2);
  sqcRYGate(q, -1.5264116093074827, 3);
  sqcRZGate(q, -0.335376922082804, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.6244295119278545, 0);
  sqcRZGate(q, -0.3529307000817766, 0);
  sqcRYGate(q, -1.8424938107381132, 1);
  sqcRZGate(q, -2.19635699801898, 1);
  sqcRYGate(q, 0.13438131856303226, 2);
  sqcRZGate(q, 0.06691934390986543, 2);
  sqcRYGate(q, 0.7156795011022339, 3);
  sqcRZGate(q, -0.734293716499156, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.637625706926313, 0);
  sqcRZGate(q, -2.6958269978520306, 0);
  sqcRYGate(q, -1.0688602090842565, 1);
  sqcRZGate(q, -3.1006156365626967, 1);
  sqcRYGate(q, -2.9644378727326974, 2);
  sqcRZGate(q, 1.052554553829137, 2);
  sqcRYGate(q, 3.0502391456624354, 3);
  sqcRZGate(q, -0.33040033390207846, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.139969782095923, 0);
  sqcRZGate(q, -1.3925795843342612, 0);
  sqcRYGate(q, 1.2521628528923312, 1);
  sqcRZGate(q, 1.2841796096909797, 1);
  sqcRYGate(q, -0.37109032441232426, 2);
  sqcRZGate(q, 1.3254147268203127, 2);
  sqcRYGate(q, 2.977330257706417, 3);
  sqcRZGate(q, -0.8596860151261096, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.933838556600242, 0);
  sqcRZGate(q, 1.5080582051893865, 0);
  sqcRYGate(q, -2.7182144672107884, 1);
  sqcRZGate(q, 2.9200909088041134, 1);
  sqcRYGate(q, 2.039442155052602, 2);
  sqcRZGate(q, -1.2916583523103498, 2);
  sqcRYGate(q, 0.24572189899459362, 3);
  sqcRZGate(q, 0.19297419115721848, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.4110659858920904, 0);
  sqcRZGate(q, -2.4622065552046934, 0);
  sqcRYGate(q, -1.4184223876157938, 1);
  sqcRZGate(q, -1.1756922270803614, 1);
  sqcRYGate(q, -0.6282927742828236, 2);
  sqcRZGate(q, 1.5187024038711434, 2);
  sqcRYGate(q, 2.3129898520933465, 3);
  sqcRZGate(q, -2.1623866925754163, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.22409434209467, 0);
  sqcRZGate(q, -1.3635692877084507, 0);
  sqcRYGate(q, 1.8952647679693255, 1);
  sqcRZGate(q, -3.0523776117112185, 1);
  sqcRYGate(q, 2.9428677870804476, 2);
  sqcRZGate(q, -0.008829814531228664, 2);
  sqcRYGate(q, 3.0645293281480113, 3);
  sqcRZGate(q, 0.5604446901879829, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.728799659558879, 0);
  sqcRZGate(q, 0.7065157510270872, 0);
  sqcRYGate(q, 0.9700152888336335, 1);
  sqcRZGate(q, -0.05848852291068325, 1);
  sqcRYGate(q, 0.5614952453867625, 2);
  sqcRZGate(q, 2.9716477553121647, 2);
  sqcRYGate(q, -0.6194538972368129, 3);
  sqcRZGate(q, 1.6201783072869909, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.5364087385552616, 0);
  sqcRZGate(q, 0.5508617767727984, 0);
  sqcRYGate(q, 1.641331651296486, 1);
  sqcRZGate(q, -3.0083780581838844, 1);
  sqcRYGate(q, -0.2704913059559462, 2);
  sqcRZGate(q, 0.006698014862852818, 2);
  sqcRYGate(q, 2.859489511583718, 3);
  sqcRZGate(q, -1.9091823077831818, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.867955537243044, 0);
  sqcRZGate(q, 0.24374834948231075, 0);
  sqcRYGate(q, -0.9777545514881618, 1);
  sqcRZGate(q, -1.2987752231278717, 1);
  sqcRYGate(q, 0.9485600959864152, 2);
  sqcRZGate(q, -2.8698294155742743, 2);
  sqcRYGate(q, -2.160734421841167, 3);
  sqcRZGate(q, 2.531884594727777, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.5387780052186074, 0);
  sqcRZGate(q, -2.48224841994302, 0);
  sqcRYGate(q, 1.5791349226732885, 1);
  sqcRZGate(q, 1.9984955180228299, 1);
  sqcRYGate(q, -0.03468149362548267, 2);
  sqcRZGate(q, 0.08830118520655894, 2);
  sqcRYGate(q, 1.5400101792241276, 3);
  sqcRZGate(q, 0.9811904591965641, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.7576874284677584, 0);
  sqcRZGate(q, -0.6401178182592506, 0);
  sqcRYGate(q, 2.247475730298886, 1);
  sqcRZGate(q, -0.36329202422693185, 1);
  sqcRYGate(q, 1.799686093645219, 2);
  sqcRZGate(q, 2.7359914585033436, 2);
  sqcRYGate(q, 2.961294988910859, 3);
  sqcRZGate(q, 1.4828827799397564, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.2541121859847664, 0);
  sqcRZGate(q, -1.3266359274966615, 0);
  sqcRYGate(q, 1.0645482675167595, 1);
  sqcRZGate(q, 1.173023252163457, 1);
  sqcRYGate(q, 2.5923226018199887, 2);
  sqcRZGate(q, 2.138801078437706, 2);
  sqcRYGate(q, 2.392701599114394, 3);
  sqcRZGate(q, 0.5004201009366674, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.047639989056722, 0);
  sqcRZGate(q, -1.6765171284752762, 0);
  sqcRYGate(q, 1.585153836980736, 1);
  sqcRZGate(q, 1.4180849398255884, 1);
  sqcRYGate(q, -2.8294299482506817, 2);
  sqcRZGate(q, -1.752136759090667, 2);
  sqcRYGate(q, 1.9188376189275271, 3);
  sqcRZGate(q, 2.6517350587983506, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.81280246841785, 0);
  sqcRZGate(q, -2.8219346154355023, 0);
  sqcRYGate(q, -1.488308879949772, 1);
  sqcRZGate(q, -0.8550123804144584, 1);
  sqcRYGate(q, 3.031147004988207, 2);
  sqcRZGate(q, 0.9539743252788596, 2);
  sqcRYGate(q, -1.259782720967977, 3);
  sqcRZGate(q, -0.728345571683378, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.0135517940201888, 0);
  sqcRZGate(q, 2.0397251839345065, 0);
  sqcRYGate(q, 2.940125464414601, 1);
  sqcRZGate(q, -1.1740985914842306, 1);
  sqcRYGate(q, -1.650132393239999, 2);
  sqcRZGate(q, -0.8807100941256323, 2);
  sqcRYGate(q, 0.14172164026859235, 3);
  sqcRZGate(q, -1.9321600407307686, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.4850498018741405, 0);
  sqcRZGate(q, -2.9662600196474154, 0);
  sqcRYGate(q, -2.964736989102482, 1);
  sqcRZGate(q, -2.864466971524964, 1);
  sqcRYGate(q, 0.27109685263093125, 2);
  sqcRZGate(q, -1.737778389688382, 2);
  sqcRYGate(q, -2.3206502011066075, 3);
  sqcRZGate(q, 0.5755272106395755, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.2146140098803262, 0);
  sqcRZGate(q, -2.99613727547534, 0);
  sqcRYGate(q, 2.328585915682133, 1);
  sqcRZGate(q, 2.9085255589671726, 1);
  sqcRYGate(q, 0.32789760135377755, 2);
  sqcRZGate(q, -1.5186082827557434, 2);
  sqcRYGate(q, -0.17618205836161493, 3);
  sqcRZGate(q, 0.48154663137817527, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.8112859301958646, 0);
  sqcRZGate(q, -0.5262598640009435, 0);
  sqcRYGate(q, -0.4482850842300444, 1);
  sqcRZGate(q, -1.5516839877060127, 1);
  sqcRYGate(q, -2.139197647922564, 2);
  sqcRZGate(q, 0.03172370669678504, 2);
  sqcRYGate(q, -0.5080227356307924, 3);
  sqcRZGate(q, 1.6476005112776586, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.6738743555676034, 0);
  sqcRZGate(q, 0.14643390664519218, 0);
  sqcRYGate(q, -0.1396556148921488, 1);
  sqcRZGate(q, 2.251997177647259, 1);
  sqcRYGate(q, -2.3356981170276807, 2);
  sqcRZGate(q, -0.7827795792379211, 2);
  sqcRYGate(q, -0.20030096854862378, 3);
  sqcRZGate(q, 3.06206132740575, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.90055805438969, 0);
  sqcRZGate(q, 2.286235335949151, 0);
  sqcRYGate(q, 0.8516241809305588, 1);
  sqcRZGate(q, 2.964005377250955, 1);
  sqcRYGate(q, -2.7274975805419293, 2);
  sqcRZGate(q, -0.7154573313093896, 2);
  sqcRYGate(q, -0.0579143696028421, 3);
  sqcRZGate(q, -2.1769891851166268, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.0208713814479164, 0);
  sqcRZGate(q, 0.32696130482578045, 0);
  sqcRYGate(q, 0.8691028264194899, 1);
  sqcRZGate(q, 3.010818021616969, 1);
  sqcRYGate(q, -1.9570074969335485, 2);
  sqcRZGate(q, 0.8279700532326902, 2);
  sqcRYGate(q, -0.06350460609822688, 3);
  sqcRZGate(q, 1.9618471441850311, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.8691160133103351, 0);
  sqcRZGate(q, 2.658644449779275, 0);
  sqcRYGate(q, 0.06812713710314301, 1);
  sqcRZGate(q, -2.095124683046164, 1);
  sqcRYGate(q, -3.02486230805347, 2);
  sqcRZGate(q, 1.5276431237633252, 2);
  sqcRYGate(q, -1.2985312997223408, 3);
  sqcRZGate(q, -1.349839233531719, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.21801595238617, 0);
  sqcRZGate(q, -2.5750224699872333, 0);
  sqcRYGate(q, 2.1270821732781258, 1);
  sqcRZGate(q, -2.6419317841209415, 1);
  sqcRYGate(q, 0.018732114973611935, 2);
  sqcRZGate(q, 0.4792351428683821, 2);
  sqcRYGate(q, -2.0618362576759823, 3);
  sqcRZGate(q, -1.9939392370921336, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.220966137104991, 0);
  sqcRZGate(q, 0.49304989150954565, 0);
  sqcRYGate(q, 0.020475404359453903, 1);
  sqcRZGate(q, -0.8066565608145614, 1);
  sqcRYGate(q, 1.2171937576998781, 2);
  sqcRZGate(q, -2.0516526489285667, 2);
  sqcRYGate(q, 0.7553173579951621, 3);
  sqcRZGate(q, 1.6950856406860695, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.4270514884223884, 0);
  sqcRZGate(q, -1.7552774852750912, 0);
  sqcRYGate(q, -0.7546920711466385, 1);
  sqcRZGate(q, 1.719549990975223, 1);
  sqcRYGate(q, 0.7596161510809367, 2);
  sqcRZGate(q, 2.8803759571758043, 2);
  sqcRYGate(q, 1.758048700314309, 3);
  sqcRZGate(q, -2.689686806415769, 3);

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
