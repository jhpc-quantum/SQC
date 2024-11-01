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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -0.0038928545632036155, 0);
  sqcRZGate(q, 2.0487975480676983, 0);
  sqcRYGate(q, -1.6725993408114022, 1);
  sqcRZGate(q, -0.7875232307346138, 1);
  sqcRYGate(q, -1.009542911291582, 2);
  sqcRZGate(q, -1.051860351351841, 2);
  sqcRYGate(q, -1.3051506543071413e-05, 3);
  sqcRZGate(q, -2.2156437558110493, 3);
  sqcRYGate(q, 2.309063666170001, 4);
  sqcRZGate(q, 3.1415832673007955, 4);
  sqcRYGate(q, 1.5708102990582713, 5);
  sqcRZGate(q, -0.6650705777530952, 5);
  sqcRYGate(q, -1.5708008316277917, 6);
  sqcRZGate(q, -2.572996640176295, 6);
  sqcRYGate(q, -3.139585646607953, 7);
  sqcRZGate(q, 1.5921960056836157, 7);
  sqcRYGate(q, 0.004818894975694654, 8);
  sqcRZGate(q, -1.4076106125186802, 8);
  sqcRYGate(q, 0.147104662984936, 9);
  sqcRZGate(q, 2.028228727211161, 9);
  sqcRYGate(q, -3.133673282535225, 10);
  sqcRZGate(q, 2.4198627727761886, 10);
  sqcRYGate(q, 1.9140918587772073, 11);
  sqcRZGate(q, -0.22514070104944484, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.6315875175672376, 0);
  sqcRZGate(q, 0.8735933813502595, 0);
  sqcRYGate(q, 1.4904145812560778, 1);
  sqcRZGate(q, 2.2490865443665635, 1);
  sqcRYGate(q, -0.9450523997348963, 2);
  sqcRZGate(q, 2.866361619087009, 2);
  sqcRYGate(q, 0.00017751136755695998, 3);
  sqcRZGate(q, 2.925515300048087, 3);
  sqcRYGate(q, 1.570775383690905, 4);
  sqcRZGate(q, 0.4970496464932461, 4);
  sqcRYGate(q, -0.6920172165420295, 5);
  sqcRZGate(q, -2.0768101212751136, 5);
  sqcRYGate(q, -0.370346833682643, 6);
  sqcRZGate(q, 2.5275128267250953, 6);
  sqcRYGate(q, -1.480953765621889, 7);
  sqcRZGate(q, 1.561621670010183, 7);
  sqcRYGate(q, -3.1377379840393944, 8);
  sqcRZGate(q, 0.4669854105717848, 8);
  sqcRYGate(q, 1.4482522265748194, 9);
  sqcRZGate(q, 0.6058056265863454, 9);
  sqcRYGate(q, -0.09065207829760437, 10);
  sqcRZGate(q, 2.164162038414984, 10);
  sqcRYGate(q, -2.0012841448938623, 11);
  sqcRZGate(q, -1.9485444573719313, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.1512675696217762, 0);
  sqcRZGate(q, -2.851757222836863, 0);
  sqcRYGate(q, 3.0321056700787605, 1);
  sqcRZGate(q, 1.4926963146854826, 1);
  sqcRYGate(q, -1.1331137018219049, 2);
  sqcRZGate(q, -3.015404770109691, 2);
  sqcRYGate(q, -1.5706888360036393, 3);
  sqcRZGate(q, 1.1321825943007249, 3);
  sqcRYGate(q, 2.779146331107174, 4);
  sqcRZGate(q, 1.6670873098100731, 4);
  sqcRYGate(q, 0.7200836028252509, 5);
  sqcRZGate(q, 1.8706888578342458, 5);
  sqcRYGate(q, 3.1415374436695864, 6);
  sqcRZGate(q, -2.7400985691976296, 6);
  sqcRYGate(q, -1.2985802751428226, 7);
  sqcRZGate(q, 3.1414712047908098, 7);
  sqcRYGate(q, -3.1012894833524545, 8);
  sqcRZGate(q, 0.6573995584619574, 8);
  sqcRYGate(q, -0.055686278935195455, 9);
  sqcRZGate(q, -0.17320426904766703, 9);
  sqcRYGate(q, 3.1411530402437924, 10);
  sqcRZGate(q, 2.7575582816365576, 10);
  sqcRYGate(q, 3.0440892488811073, 11);
  sqcRZGate(q, -1.3159543354142342, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.32520434123062, 0);
  sqcRZGate(q, 2.9131933816357605, 0);
  sqcRYGate(q, -0.7327230841331146, 1);
  sqcRZGate(q, -0.8028249642829399, 1);
  sqcRYGate(q, 1.573241847058604, 2);
  sqcRZGate(q, 2.3602233441018696, 2);
  sqcRYGate(q, 3.132216922894576, 3);
  sqcRZGate(q, -2.871348673645496, 3);
  sqcRYGate(q, 1.3197077210081907, 4);
  sqcRZGate(q, 0.5069787160201544, 4);
  sqcRYGate(q, 2.4312575692227454, 5);
  sqcRZGate(q, 2.2005464613934587, 5);
  sqcRYGate(q, 0.9385420921392145, 6);
  sqcRZGate(q, -0.724880373228479, 6);
  sqcRYGate(q, -1.6723250598921204, 7);
  sqcRZGate(q, 0.6991974565866121, 7);
  sqcRYGate(q, -3.1415830162369667, 8);
  sqcRZGate(q, -1.958274903225763, 8);
  sqcRYGate(q, -2.0057423667872065, 9);
  sqcRZGate(q, -0.7506594483165109, 9);
  sqcRYGate(q, 2.956203541106169, 10);
  sqcRZGate(q, -1.2236385382268558, 10);
  sqcRYGate(q, -2.3691184741359095, 11);
  sqcRZGate(q, 1.4721420936440346, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.01142469895626837, 0);
  sqcRZGate(q, 2.5766539297760382, 0);
  sqcRYGate(q, 2.988786989082498, 1);
  sqcRZGate(q, 3.080371247347123, 1);
  sqcRYGate(q, 0.005465366662379545, 2);
  sqcRZGate(q, -1.0028297962092998, 2);
  sqcRYGate(q, -0.01975166241344707, 3);
  sqcRZGate(q, 0.29397579339828006, 3);
  sqcRYGate(q, -3.132100047061654, 4);
  sqcRZGate(q, -2.600509734684309, 4);
  sqcRYGate(q, -0.008934896904961768, 5);
  sqcRZGate(q, -1.7250305461317348, 5);
  sqcRYGate(q, -0.014938339833865309, 6);
  sqcRZGate(q, 1.0178301470843172, 6);
  sqcRYGate(q, 3.1229137088455814, 7);
  sqcRZGate(q, -1.3921207338046768, 7);
  sqcRYGate(q, -1.5678989505552763, 8);
  sqcRZGate(q, -3.0049676446155753, 8);
  sqcRYGate(q, -0.04629500070526671, 9);
  sqcRZGate(q, -1.91317066405914, 9);
  sqcRYGate(q, 0.0021486218812656337, 10);
  sqcRZGate(q, 2.5259589803332143, 10);
  sqcRYGate(q, 0.0545530544357452, 11);
  sqcRZGate(q, 1.1069049470740417, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.5071638873765901, 0);
  sqcRZGate(q, 2.8451878072547743, 0);
  sqcRYGate(q, -1.8422601223008168, 1);
  sqcRZGate(q, -1.1664962172288815, 1);
  sqcRYGate(q, -3.128841373889034, 2);
  sqcRZGate(q, -2.2885484936991554, 2);
  sqcRYGate(q, 3.1175547517130067, 3);
  sqcRZGate(q, -1.1035928411326097, 3);
  sqcRYGate(q, 1.432663442160287, 4);
  sqcRZGate(q, 0.23059436907700978, 4);
  sqcRYGate(q, -1.9942669023423774, 5);
  sqcRZGate(q, 1.0714351631201056, 5);
  sqcRYGate(q, 0.6944890581438536, 6);
  sqcRZGate(q, -0.26692584100634675, 6);
  sqcRYGate(q, -2.0719695786660175, 7);
  sqcRZGate(q, 0.45449343181939533, 7);
  sqcRYGate(q, 0.496152293286074, 8);
  sqcRZGate(q, 0.39576665140104256, 8);
  sqcRYGate(q, 1.5692570544154845, 9);
  sqcRZGate(q, -2.9427699744265303, 9);
  sqcRYGate(q, -3.127215917469422, 10);
  sqcRZGate(q, -1.9185007606645448, 10);
  sqcRYGate(q, 2.752122223871441, 11);
  sqcRZGate(q, 0.05016924136588668, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.8535414582953917, 0);
  sqcRZGate(q, -1.3134802390164495, 0);
  sqcRYGate(q, -1.6033056717069112, 1);
  sqcRZGate(q, 2.968202785309872, 1);
  sqcRYGate(q, 0.05391531160025779, 2);
  sqcRZGate(q, -0.6518372948936637, 2);
  sqcRYGate(q, -1.821399791273919, 3);
  sqcRZGate(q, 2.1696669765887973, 3);
  sqcRYGate(q, -2.00655895198682, 4);
  sqcRZGate(q, -2.1143225316256817, 4);
  sqcRYGate(q, -2.2154433403331257, 5);
  sqcRZGate(q, -0.8431795308975926, 5);
  sqcRYGate(q, 0.010906440498566816, 6);
  sqcRZGate(q, -1.5711409713953612, 6);
  sqcRYGate(q, -0.3770632810109738, 7);
  sqcRZGate(q, 2.7530163156982757, 7);
  sqcRYGate(q, -0.1701708728165503, 8);
  sqcRZGate(q, 2.8339619780133436, 8);
  sqcRYGate(q, -0.025509054669903723, 9);
  sqcRZGate(q, 3.1186564983446843, 9);
  sqcRYGate(q, -1.5714469639669986, 10);
  sqcRZGate(q, 0.48000441271507566, 10);
  sqcRYGate(q, 2.5382666596970798, 11);
  sqcRZGate(q, -1.9989263907120183, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.8279878615275233, 0);
  sqcRZGate(q, 1.3821313116574343, 0);
  sqcRYGate(q, 2.8544096656845075, 1);
  sqcRZGate(q, -0.6332148707411634, 1);
  sqcRYGate(q, 0.006298699711651423, 2);
  sqcRZGate(q, -0.3378202827767823, 2);
  sqcRYGate(q, 0.05413246034075847, 3);
  sqcRZGate(q, -1.8410192734662472, 3);
  sqcRYGate(q, -3.103577698218257, 4);
  sqcRZGate(q, 1.0458277542833094, 4);
  sqcRYGate(q, -2.0980923124964765, 5);
  sqcRZGate(q, 2.988570529673132, 5);
  sqcRYGate(q, -1.346411168212756, 6);
  sqcRZGate(q, -2.984497497001923, 6);
  sqcRYGate(q, -2.2548250918268327, 7);
  sqcRZGate(q, 1.2064083952598859, 7);
  sqcRYGate(q, -2.867743971931965, 8);
  sqcRZGate(q, -0.9067580711765747, 8);
  sqcRYGate(q, 0.020921654341399882, 9);
  sqcRZGate(q, -2.2450378075791892, 9);
  sqcRYGate(q, -3.0252096126054933, 10);
  sqcRZGate(q, -1.674970256577165, 10);
  sqcRYGate(q, -1.5699948609325327, 11);
  sqcRZGate(q, 2.4651820581490744, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.3116680681303572, 0);
  sqcRZGate(q, -1.3909051184631245, 0);
  sqcRYGate(q, 2.656316730845596, 1);
  sqcRZGate(q, 2.3053088745760895, 1);
  sqcRYGate(q, -1.1724394870878045, 2);
  sqcRZGate(q, 2.689260870808479, 2);
  sqcRYGate(q, 1.290118771436089, 3);
  sqcRZGate(q, 2.0429888376136542, 3);
  sqcRYGate(q, 3.1208101548870992, 4);
  sqcRZGate(q, -2.628960857558482, 4);
  sqcRYGate(q, -0.06586892088223682, 5);
  sqcRZGate(q, -2.8175424552342205, 5);
  sqcRYGate(q, -0.023610223137397753, 6);
  sqcRZGate(q, 2.7762329535931185, 6);
  sqcRYGate(q, 2.8225773652451855, 7);
  sqcRZGate(q, 1.9541259451298458, 7);
  sqcRYGate(q, 2.668937796331651, 8);
  sqcRZGate(q, 1.9672089420420722, 8);
  sqcRYGate(q, 1.278274883280301, 9);
  sqcRZGate(q, 0.7895614840771875, 9);
  sqcRYGate(q, 2.105074926302146, 10);
  sqcRZGate(q, -0.3217898746488874, 10);
  sqcRYGate(q, -2.4442655322737594, 11);
  sqcRZGate(q, 0.8119651956997286, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.7763199770815525, 0);
  sqcRZGate(q, 2.6676716945135848, 0);
  sqcRYGate(q, -0.08248879223664578, 1);
  sqcRZGate(q, 0.2062560456794769, 1);
  sqcRYGate(q, 3.1384409343572433, 2);
  sqcRZGate(q, 0.91958807462885, 2);
  sqcRYGate(q, -0.012678832200049506, 3);
  sqcRZGate(q, 2.6937132173978173, 3);
  sqcRYGate(q, -0.043290944499806285, 4);
  sqcRZGate(q, 0.4301959891509908, 4);
  sqcRYGate(q, -2.34403962850959, 5);
  sqcRZGate(q, -1.0986265087070468, 5);
  sqcRYGate(q, 0.08193794336252846, 6);
  sqcRZGate(q, -1.2572492294946167, 6);
  sqcRYGate(q, 0.00846906525177715, 7);
  sqcRZGate(q, 1.1110468171477805, 7);
  sqcRYGate(q, 0.01897632629941004, 8);
  sqcRZGate(q, -0.6865799840589528, 8);
  sqcRYGate(q, 0.012399915611242207, 9);
  sqcRZGate(q, -2.149497381134639, 9);
  sqcRYGate(q, 2.943026240998311, 10);
  sqcRZGate(q, -1.3168402592301272, 10);
  sqcRYGate(q, 3.1404409424591377, 11);
  sqcRZGate(q, 2.3588852007456524, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.362698921500226, 0);
  sqcRZGate(q, 2.853608782116824, 0);
  sqcRYGate(q, -0.7280818655868401, 1);
  sqcRZGate(q, 0.7134643241554235, 1);
  sqcRYGate(q, 0.9636315263663376, 2);
  sqcRZGate(q, 1.3862585268550773, 2);
  sqcRYGate(q, 1.9759156319531095, 3);
  sqcRZGate(q, -1.2306853183737205, 3);
  sqcRYGate(q, -0.9822805331776124, 4);
  sqcRZGate(q, -1.1248630008800204, 4);
  sqcRYGate(q, 3.1368139506561183, 5);
  sqcRZGate(q, -3.141176979372682, 5);
  sqcRYGate(q, 3.0950295135977703, 6);
  sqcRZGate(q, -1.3931107491838017, 6);
  sqcRYGate(q, 2.80338421275634, 7);
  sqcRZGate(q, 1.074507798105361, 7);
  sqcRYGate(q, -2.457841398244021, 8);
  sqcRZGate(q, 3.090718649918455, 8);
  sqcRYGate(q, -2.7480873188570625, 9);
  sqcRZGate(q, 0.054661641684266904, 9);
  sqcRYGate(q, -0.7792835704070626, 10);
  sqcRZGate(q, 2.4181532903793928, 10);
  sqcRYGate(q, 2.5806770817435116, 11);
  sqcRZGate(q, 1.5488292297299373, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.7608392567306477, 0);
  sqcRZGate(q, 1.5079694218164421, 0);
  sqcRYGate(q, -0.08023652915326585, 1);
  sqcRZGate(q, 0.9692962137723119, 1);
  sqcRYGate(q, 3.13002738975565, 2);
  sqcRZGate(q, 2.709460168616172, 2);
  sqcRYGate(q, 0.01246092321912891, 3);
  sqcRZGate(q, 1.1324726272819188, 3);
  sqcRYGate(q, -3.137282149794408, 4);
  sqcRZGate(q, 0.883086446796205, 4);
  sqcRYGate(q, 0.07328681219874991, 5);
  sqcRZGate(q, 2.385617145766074, 5);
  sqcRYGate(q, -1.4346916224512694, 6);
  sqcRZGate(q, 0.2774886610799676, 6);
  sqcRYGate(q, -0.09332835597731125, 7);
  sqcRZGate(q, -2.853893053303964, 7);
  sqcRYGate(q, -3.132208185483998, 8);
  sqcRZGate(q, 2.3762840866542643, 8);
  sqcRYGate(q, 3.1407606526947003, 9);
  sqcRZGate(q, 2.1435696241399405, 9);
  sqcRYGate(q, -0.1849959278912298, 10);
  sqcRZGate(q, 0.2992703445018294, 10);
  sqcRYGate(q, 6.523565204474835e-06, 11);
  sqcRZGate(q, -2.583998744322465, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5159743402399308, 0);
  sqcRZGate(q, 2.095642325414678, 0);
  sqcRYGate(q, -1.417709327922438, 1);
  sqcRZGate(q, -0.5078460881731122, 1);
  sqcRYGate(q, -2.405255788095939, 2);
  sqcRZGate(q, -0.047722410795503656, 2);
  sqcRYGate(q, -3.0740612631076254, 3);
  sqcRZGate(q, -2.2422037960666286, 3);
  sqcRYGate(q, -0.9005685877892519, 4);
  sqcRZGate(q, 0.24647055519001082, 4);
  sqcRYGate(q, -1.1731011482945028, 5);
  sqcRZGate(q, 1.7750403820590666, 5);
  sqcRYGate(q, -2.044483375519972, 6);
  sqcRZGate(q, 0.4398979862242669, 6);
  sqcRYGate(q, 2.7194607654185714, 7);
  sqcRZGate(q, -0.8496896001592882, 7);
  sqcRYGate(q, -1.872446318741848, 8);
  sqcRZGate(q, -1.4919272293988417, 8);
  sqcRYGate(q, -0.11917182272094706, 9);
  sqcRZGate(q, -1.6944445221118303, 9);
  sqcRYGate(q, 2.566987829800202, 10);
  sqcRZGate(q, -2.4532221851755374, 10);
  sqcRYGate(q, 2.5636915152287814, 11);
  sqcRZGate(q, 1.143775273196042, 11);

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
