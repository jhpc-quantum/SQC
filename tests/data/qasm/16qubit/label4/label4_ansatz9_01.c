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

  sqcRYGate(q, 0.4972347201184019, 0);
  sqcRYGate(q, 2.8914643535920725, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4651756816472172, 0);
  sqcRYGate(q, 1.5618127491273885, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.033126317468037916, 2);
  sqcRYGate(q, 1.4005186123491655, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5452590053595305, 2);
  sqcRYGate(q, -0.6220380971568812, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.223337408669602, 4);
  sqcRYGate(q, -0.33561462741202597, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.058379613834714, 4);
  sqcRYGate(q, 2.2880907217317827, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8275848313238893, 6);
  sqcRYGate(q, 1.516881973948666, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.444823553259053, 6);
  sqcRYGate(q, -2.8269053396664128, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1401019595497477, 8);
  sqcRYGate(q, 3.1407977562846288, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.406447554743558, 8);
  sqcRYGate(q, -1.432135266800672, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.426823525343419, 10);
  sqcRYGate(q, -1.589490147757846, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.7117168177818086, 10);
  sqcRYGate(q, -1.4646320850855021, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.808418966013852, 12);
  sqcRYGate(q, -1.5288592763399544, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.4242563717627268, 12);
  sqcRYGate(q, -2.6711320461743915, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.0403767146795633, 14);
  sqcRYGate(q, 2.717258105353182, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.42010594136041696, 14);
  sqcRYGate(q, -2.193390761814343, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.8278207277463094, 0);
  sqcRYGate(q, -0.5064488178793186, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9330354839939243, 0);
  sqcRYGate(q, -2.581334472664147, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.11084590279822137, 2);
  sqcRYGate(q, -1.0363663800373546, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.2119836539710975, 2);
  sqcRYGate(q, -3.001361197380402, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.9448292013688706, 4);
  sqcRYGate(q, 1.7579668750379733, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.030244657037366448, 4);
  sqcRYGate(q, 3.1217388952557115, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.7533467786612364, 6);
  sqcRYGate(q, -1.5994853266592888, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.011929205537169807, 6);
  sqcRYGate(q, 1.0719241624776084, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.7059701928777038, 8);
  sqcRYGate(q, -0.24175551011629712, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.89587240072898, 8);
  sqcRYGate(q, 2.525701154650539, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.5722614228441695, 10);
  sqcRYGate(q, 0.723553331009593, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 2.851120162683005, 10);
  sqcRYGate(q, 2.6637837041659385, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 2.9111292700825855, 12);
  sqcRYGate(q, 2.165999974277523, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.001715420624194941, 12);
  sqcRYGate(q, -0.0012885766353129624, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.920832570311026, 1);
  sqcRYGate(q, -0.8494359786403439, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.532345103846765, 1);
  sqcRYGate(q, 1.849401356669831, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7176592238840483, 3);
  sqcRYGate(q, -3.037246613153136, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.5570817812737414, 3);
  sqcRYGate(q, 2.933558161331908, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.3855030429849573, 5);
  sqcRYGate(q, 0.36957577341823455, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.530044545140141, 5);
  sqcRYGate(q, -0.017492979539800047, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.941776587959314, 7);
  sqcRYGate(q, -0.5644810735328214, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.5812462373062717, 7);
  sqcRYGate(q, -1.5659405963612265, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.3467203313317188, 9);
  sqcRYGate(q, 0.20118965802820427, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.5140594388921846, 9);
  sqcRYGate(q, 1.0905197316553463, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.10155575832386798, 11);
  sqcRYGate(q, -0.8671566841177683, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.024333142240717365, 11);
  sqcRYGate(q, -0.00554181404919607, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.8369007625990807, 13);
  sqcRYGate(q, 1.8375614159067588, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.07805834079983784, 13);
  sqcRYGate(q, 1.5057143310123626, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.9222369221386708, 0);
  sqcRYGate(q, -2.443023152581377, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.849094885323387, 0);
  sqcRYGate(q, 1.899171001968133, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.225794928059332, 1);
  sqcRYGate(q, -1.3345664707048372, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1753014604640324, 1);
  sqcRYGate(q, 1.532411121333329, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.398077593623588, 2);
  sqcRYGate(q, -0.8035809586870141, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.8168253003193837, 2);
  sqcRYGate(q, -2.4578864625660892, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.4704742862979376, 3);
  sqcRYGate(q, 1.8009034465148908, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.09915439278378901, 3);
  sqcRYGate(q, 0.23981833636680425, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5797147371640894, 4);
  sqcRYGate(q, 0.06907390717309969, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.07916090153234112, 4);
  sqcRYGate(q, -0.0017607344489052321, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.6057744432302665, 5);
  sqcRYGate(q, -2.9713780073741862, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5776553828606978, 5);
  sqcRYGate(q, -1.557038028333408, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.506924301158028, 6);
  sqcRYGate(q, 1.1189211094436982, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 3.0896232009663276, 6);
  sqcRYGate(q, 2.902970787326287, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 1.5881623225322246, 7);
  sqcRYGate(q, 1.9060974250085128, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5478283686990835, 7);
  sqcRYGate(q, 0.23262863135952472, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.122347487676162, 8);
  sqcRYGate(q, 2.633841264346989, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -0.008882820696634042, 8);
  sqcRYGate(q, 1.5633619945674107, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -0.45104118352729994, 9);
  sqcRYGate(q, -1.0197710648557505, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.6095975995113387, 9);
  sqcRYGate(q, -2.686687327337797, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.04972339736698572, 10);
  sqcRYGate(q, 0.7926190863222607, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -3.110718690341418, 10);
  sqcRYGate(q, 3.001471905866705, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -2.7961753935219638, 11);
  sqcRYGate(q, 2.6527549836746296, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5573367741186352, 11);
  sqcRYGate(q, -3.1397495437048817, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.852920839603913, 12);
  sqcRYGate(q, 1.1354855967899438, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -1.0100889300791556, 12);
  sqcRYGate(q, -2.8922028470180337, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, 1.9104672672206728, 13);
  sqcRYGate(q, 1.2241046019736643, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.13428340314977, 13);
  sqcRYGate(q, -0.005327921225788401, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.6926108670427573, 0);
  sqcRYGate(q, 2.615320175927408, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5987002666561283, 0);
  sqcRYGate(q, 0.5068178815155799, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3969721299203588, 2);
  sqcRYGate(q, 2.994337950529168, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8026717470521574, 2);
  sqcRYGate(q, -1.5040780606223443, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.767179007351085, 4);
  sqcRYGate(q, 0.19655049825329166, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.028420484060499795, 4);
  sqcRYGate(q, -0.010773238638087587, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6561409090525812, 6);
  sqcRYGate(q, 0.04904697491031175, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.124487689080727, 6);
  sqcRYGate(q, 1.576740432691457, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8321230928219043, 8);
  sqcRYGate(q, -1.6098754583760526, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.733179372220861, 8);
  sqcRYGate(q, -0.0007583845310827897, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.085700184886299, 10);
  sqcRYGate(q, -1.1548480528986893, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.1413496445012554, 10);
  sqcRYGate(q, 2.851443318663315, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.3384520632297626, 12);
  sqcRYGate(q, 1.8355680651852568, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.5318975835658595, 12);
  sqcRYGate(q, -0.1908418506123546, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.409259380761243, 14);
  sqcRYGate(q, -2.19458956181854, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.139048029114313, 14);
  sqcRYGate(q, 0.4648968517179425, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.1808474891954805, 0);
  sqcRYGate(q, -1.115516302455017, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8054757073805181, 0);
  sqcRYGate(q, -1.036865594092677, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6613723008506454, 2);
  sqcRYGate(q, -0.35946044167616803, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.029310344477241, 2);
  sqcRYGate(q, 2.613640744068151, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.16613061162952913, 4);
  sqcRYGate(q, -1.5210078634426103, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.20190997696822416, 4);
  sqcRYGate(q, 3.138625549929328, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.0513770658235249, 6);
  sqcRYGate(q, 1.3449708442937887, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.7452618550866483, 6);
  sqcRYGate(q, 3.128498387871362, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.096963514558542, 8);
  sqcRYGate(q, 1.6978571161215763, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 3.140315614707275, 8);
  sqcRYGate(q, -3.1404997439636406, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.4054469566107317, 10);
  sqcRYGate(q, 1.876482628987445, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.120697108620781, 10);
  sqcRYGate(q, 1.3397203621960594, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.5881170857271127, 12);
  sqcRYGate(q, -2.3725015174770068, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.016318794163971972, 12);
  sqcRYGate(q, -1.577006461531127, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 3.0772026360698903, 1);
  sqcRYGate(q, -2.502328209124301, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7502091767468406, 1);
  sqcRYGate(q, -1.7560201240400488, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.41431008388418, 3);
  sqcRYGate(q, 0.5208545479083115, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.1383072046914506, 3);
  sqcRYGate(q, -3.137064032009755, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.7498461533444383, 5);
  sqcRYGate(q, 2.899781650612317, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.1386289492497177, 5);
  sqcRYGate(q, -0.003413223214832506, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.666947715767298, 7);
  sqcRYGate(q, 1.1764676794623619, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.141107655104531, 7);
  sqcRYGate(q, 3.1282045579372473, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.985010556098016, 9);
  sqcRYGate(q, -0.25402964416200025, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.5730304597048794, 9);
  sqcRYGate(q, 1.5654325508731812, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.00875700851559813, 11);
  sqcRYGate(q, -1.7258715730101963, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -3.1409777777047414, 11);
  sqcRYGate(q, 3.1200851464216766, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.007689147284875019, 13);
  sqcRYGate(q, 1.3078424020942778, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.8343989113873684, 13);
  sqcRYGate(q, -1.600016709823484, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.9916756704746046, 0);
  sqcRYGate(q, 2.4079971540717326, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5965947227830621, 0);
  sqcRYGate(q, -2.5232075549004653, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5261742682732846, 1);
  sqcRYGate(q, 1.8822846923801502, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.637495275205602, 1);
  sqcRYGate(q, -2.244682667073329, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2420251521458883, 2);
  sqcRYGate(q, 0.9183170709035879, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -3.0628103443853214, 2);
  sqcRYGate(q, -3.1356238254086723, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.7666194560832116, 3);
  sqcRYGate(q, 1.621619521485516, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.3542222160519245, 3);
  sqcRYGate(q, 2.877309463802777, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.21064014444451662, 4);
  sqcRYGate(q, -1.8136471990752288, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.103299462104193, 4);
  sqcRYGate(q, 0.001540920496346132, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.0152335298282344, 5);
  sqcRYGate(q, 2.141874254362921, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7129223500636046, 5);
  sqcRYGate(q, 1.5702725248072253, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0024250047801367717, 6);
  sqcRYGate(q, -1.0195863762752564, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -0.07405664722402158, 6);
  sqcRYGate(q, 1.1090558139395839, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 1.6523194129606413, 7);
  sqcRYGate(q, 2.6531936816820227, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.6514661938197124, 7);
  sqcRYGate(q, 0.024789532538305882, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.8244367161307868, 8);
  sqcRYGate(q, -1.5594696662068372, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -2.579508449413768, 8);
  sqcRYGate(q, -3.1407990632516696, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 2.0910110413605008, 9);
  sqcRYGate(q, -1.5960144010141817, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.4311759656285425, 9);
  sqcRYGate(q, 3.14001129475819, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3825848582215619, 10);
  sqcRYGate(q, 0.187565093888832, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -0.03179855904789419, 10);
  sqcRYGate(q, -1.2379860050891676, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, 0.006495044820936435, 11);
  sqcRYGate(q, 1.6534058727179815, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5713865175191088, 11);
  sqcRYGate(q, 3.0276395261323326, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.7749321498281345, 12);
  sqcRYGate(q, 2.119290978562854, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -3.1257119973076586, 12);
  sqcRYGate(q, -1.2996465488469644, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, 0.2588882078348913, 13);
  sqcRYGate(q, -0.8171541950225834, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.547092943787793, 13);
  sqcRYGate(q, -0.011443340716969175, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.027028155758029, 0);
  sqcRYGate(q, 2.1509213049379285, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2033137671047023, 0);
  sqcRYGate(q, -0.7734461730806046, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8873573353069615, 2);
  sqcRYGate(q, 1.040022302895598, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4801976683571745, 2);
  sqcRYGate(q, 0.4020489635370046, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2998008355062967, 4);
  sqcRYGate(q, -1.5772242929135052, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5724310891554316, 4);
  sqcRYGate(q, 1.5679408189369204, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1130754364671596, 6);
  sqcRYGate(q, 2.1807167946598027, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1331117904037944, 6);
  sqcRYGate(q, -3.1346017712576337, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2826603535549501, 8);
  sqcRYGate(q, -1.3420966830394232, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.141436539292172, 8);
  sqcRYGate(q, 3.139710261044274, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.118775451125666, 10);
  sqcRYGate(q, -2.5353986125497743, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.107968278731891, 10);
  sqcRYGate(q, -3.12926391974869, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.45444779058209406, 12);
  sqcRYGate(q, 2.5351484824637267, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.994654784304921, 12);
  sqcRYGate(q, -1.3878833277958735, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.4956005470896567, 14);
  sqcRYGate(q, 2.3796710681270183, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.565621979769893, 14);
  sqcRYGate(q, 2.2944173515956416, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.363653145175009, 0);
  sqcRYGate(q, 2.5258036337394896, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4346351374299253, 0);
  sqcRYGate(q, -3.0483716858242293, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.084586401607906, 2);
  sqcRYGate(q, 1.9961013552666325, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.01628554528497102, 2);
  sqcRYGate(q, -3.137555600893825, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.42747296898694115, 4);
  sqcRYGate(q, -1.0221284726899214, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.124833850670333, 4);
  sqcRYGate(q, -3.094959306775168, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.050916686800052, 6);
  sqcRYGate(q, 2.522714895015119, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.0432300261840862, 6);
  sqcRYGate(q, -1.6502073320731183, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.3546494321898903, 8);
  sqcRYGate(q, 1.989549627326153, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.008312890053253625, 8);
  sqcRYGate(q, 0.0028269195254662094, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.0631336251668004, 10);
  sqcRYGate(q, -2.6645178519164388, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 3.1377288919940582, 10);
  sqcRYGate(q, 0.0017674753191796455, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.5385595876132836, 12);
  sqcRYGate(q, 3.0408920375659103, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.4602131202030937, 12);
  sqcRYGate(q, -1.5632112124136954, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.654934875911515, 1);
  sqcRYGate(q, -0.8559098751327255, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3799988142396002, 1);
  sqcRYGate(q, 0.8822336126677979, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3305432336110927, 3);
  sqcRYGate(q, 3.009194896744205, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.1344456967937235, 3);
  sqcRYGate(q, -1.571236961613959, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.26884745602101834, 5);
  sqcRYGate(q, -0.6077178879837968, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.12253611707833, 5);
  sqcRYGate(q, -3.1357752654806985, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.11469229237920746, 7);
  sqcRYGate(q, -1.8833821867013607, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.03539174924237637, 7);
  sqcRYGate(q, -0.036635604350426024, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.9810090496411231, 9);
  sqcRYGate(q, -1.0603385270813899, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.025475735775529546, 9);
  sqcRYGate(q, 0.05523545573675411, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.9938359393275575, 11);
  sqcRYGate(q, 2.3477480002728934, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 3.139464266340815, 11);
  sqcRYGate(q, -3.1379696344888783, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 2.5520746255596407, 13);
  sqcRYGate(q, -3.108798310625094, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -2.6578878642631367, 13);
  sqcRYGate(q, -1.5775876046534483, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -2.3630110184230926, 0);
  sqcRYGate(q, -1.5703265335196628, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.983989857405672, 0);
  sqcRYGate(q, -1.565214523871839, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.115626952413297, 1);
  sqcRYGate(q, 0.08359216345038571, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.065232239475579, 1);
  sqcRYGate(q, -2.0029808802609947, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7403205884569717, 2);
  sqcRYGate(q, 3.015045621410719, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.707112118335682, 2);
  sqcRYGate(q, -1.565078724211565, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.7517699713019308, 3);
  sqcRYGate(q, 1.5656375617322098, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2010051248313944, 3);
  sqcRYGate(q, -0.007197249530517746, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5774352372790925, 4);
  sqcRYGate(q, 0.11021377210331094, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -3.1292600631052325, 4);
  sqcRYGate(q, 1.578886826312656, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.5576949173751802, 5);
  sqcRYGate(q, -0.04194138687922688, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1130281389593506, 5);
  sqcRYGate(q, -2.871127582231722, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.034315257219252, 6);
  sqcRYGate(q, -1.971446871498772, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -3.113970272293895, 6);
  sqcRYGate(q, -0.0058392007768140455, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 0.10803265419282765, 7);
  sqcRYGate(q, -1.7596739051980936, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5929913484203597, 7);
  sqcRYGate(q, 1.660156908257969, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.0722874899527883, 8);
  sqcRYGate(q, -2.853784935854943, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 3.141558887309929, 8);
  sqcRYGate(q, 3.1250183271479397, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 1.338547586748928, 9);
  sqcRYGate(q, -1.4818675712786211, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.126068410901788, 9);
  sqcRYGate(q, -3.13970722197937, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.29661157420714485, 10);
  sqcRYGate(q, 0.2507000771120959, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -3.1402145453274737, 10);
  sqcRYGate(q, -3.1415330157920516, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, 1.360821944636947, 11);
  sqcRYGate(q, 2.6057118282767826, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.004708528445440151, 11);
  sqcRYGate(q, 0.4321205646018109, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.594621682245572, 12);
  sqcRYGate(q, 2.5230464859859607, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -3.1144099078669303, 12);
  sqcRYGate(q, -1.5670018265704613, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -2.8817463940044803, 13);
  sqcRYGate(q, -1.5749063018496527, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5630958848742722, 13);
  sqcRYGate(q, 1.5746297609272761, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5732338105845893, 0);
  sqcRYGate(q, 2.306691619906975, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.140954610546706, 0);
  sqcRYGate(q, 1.5738107061556308, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5740974208911895, 2);
  sqcRYGate(q, 1.3690161669712673, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2758258604102428, 2);
  sqcRYGate(q, 0.9884467097839158, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.574924855266236, 4);
  sqcRYGate(q, -3.1274548353146567, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.565966263102906, 4);
  sqcRYGate(q, -1.5758233601896885, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5805031962517218, 6);
  sqcRYGate(q, 0.0064064416692435336, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.545443973058851, 6);
  sqcRYGate(q, 0.048497170318960205, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.42396551816384154, 8);
  sqcRYGate(q, -0.15256225220905062, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.139538602844431, 8);
  sqcRYGate(q, 3.1404375430523577, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.2604367041810836, 10);
  sqcRYGate(q, 2.4613791102937532, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.0932930755872925, 10);
  sqcRYGate(q, -1.5570485862438703, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.1216925920533143, 12);
  sqcRYGate(q, -3.1393836697675224, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5771710779520984, 12);
  sqcRYGate(q, -2.957920075676202, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.1823986042816053, 14);
  sqcRYGate(q, -2.7586131323441174, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.025791092510246867, 14);
  sqcRYGate(q, 0.2694381623770071, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.2421978770734103, 0);
  sqcRYGate(q, -0.000647997411171275, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7755480079446655, 0);
  sqcRYGate(q, 1.8719520404293997, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5004659684828159, 2);
  sqcRYGate(q, 1.3440720250115101, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.10890064475875327, 2);
  sqcRYGate(q, -0.09587498695811103, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.2352629083119533, 4);
  sqcRYGate(q, -3.104408858413761, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.031075296312115697, 4);
  sqcRYGate(q, -0.2613076122573806, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5894939165111817, 6);
  sqcRYGate(q, 1.2637063200856817, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.0129252152411112, 6);
  sqcRYGate(q, -1.5873857197771206, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.7044087045099046, 8);
  sqcRYGate(q, 1.4152188254295863, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.004694581996504077, 8);
  sqcRYGate(q, 3.1143215578401677, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.6194013044117077, 10);
  sqcRYGate(q, 2.333414668052521, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.0826514533823963, 10);
  sqcRYGate(q, -3.139645888648274, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.277737304763214, 12);
  sqcRYGate(q, -3.0669368985271928, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 3.127775434977478, 12);
  sqcRYGate(q, 3.1376088715570747, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.3376754407437632, 1);
  sqcRYGate(q, -1.2976842002913225, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.1276418045275673, 1);
  sqcRYGate(q, -1.9421416202450652, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7433087685049058, 3);
  sqcRYGate(q, -1.4473258643455784, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.0388255840747376, 3);
  sqcRYGate(q, 0.06402831492160033, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.7741556770972124, 5);
  sqcRYGate(q, 1.5672007277357531, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.9516576639976115, 5);
  sqcRYGate(q, 0.0017301974698751181, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5506288959366863, 7);
  sqcRYGate(q, -1.9182550548241473, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.027213263780961228, 7);
  sqcRYGate(q, -3.012629439107614, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.4675900713735857, 9);
  sqcRYGate(q, 0.5014244661365499, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.1365531344826674, 9);
  sqcRYGate(q, -0.009121688517304884, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.753320397044317, 11);
  sqcRYGate(q, 2.567006298456492, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 3.126448836364209, 11);
  sqcRYGate(q, 2.6667021290249475, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.555364783874664, 13);
  sqcRYGate(q, -2.619605251641333, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 1.5465689316125042, 13);
  sqcRYGate(q, -1.5738212292867761, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.3609882722580733, 0);
  sqcRYGate(q, -2.1027648778152552, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.1365583390312515, 0);
  sqcRYGate(q, -0.1222081786479324, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.554936021088517, 1);
  sqcRYGate(q, 1.645308018558462, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3803453299319382, 1);
  sqcRYGate(q, 2.035028549170157, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2545092502107522, 2);
  sqcRYGate(q, 1.0006391680511264, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.0336858133440856, 2);
  sqcRYGate(q, -0.02132630253925403, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.181924302669012, 3);
  sqcRYGate(q, -2.622237223508672, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7352108378870907, 3);
  sqcRYGate(q, 2.634786250048121, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6725722121316373, 4);
  sqcRYGate(q, -1.990560167678742, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.007624196128487481, 4);
  sqcRYGate(q, 3.1362597806017276, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.7636524222724266, 5);
  sqcRYGate(q, -1.5559935576329122, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5806232722946554, 5);
  sqcRYGate(q, -3.1412449178190003, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5423432898614253, 6);
  sqcRYGate(q, -0.7312963552867284, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 0.00041864618239895174, 6);
  sqcRYGate(q, 3.13881129529879, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -1.1636856075351427, 7);
  sqcRYGate(q, 2.2525972311324196, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.03384985055446926, 7);
  sqcRYGate(q, 1.5739782284390624, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.3617119367926045, 8);
  sqcRYGate(q, -0.14404346740293866, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -3.1262503917628965, 8);
  sqcRYGate(q, 3.134810872968733, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 1.0695719562360428, 9);
  sqcRYGate(q, 0.35233042194251885, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.11957234135911456, 9);
  sqcRYGate(q, 3.1312698478984076, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.4623576706792574, 10);
  sqcRYGate(q, 1.7520564724472987, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -3.1408401948027747, 10);
  sqcRYGate(q, -3.1239118853426326, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -1.7411034769885942, 11);
  sqcRYGate(q, 0.05483346628713995, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5700507432741746, 11);
  sqcRYGate(q, 3.1266059205248222, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.104525050186477, 12);
  sqcRYGate(q, 2.8308393437333192, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, 3.140663272924835, 12);
  sqcRYGate(q, -0.05164231950965359, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -1.3768593763413062, 13);
  sqcRYGate(q, 1.251797528476044, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5706788727729768, 13);
  sqcRYGate(q, -1.5787123312739348, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.3117178167925916, 0);
  sqcRYGate(q, 2.513193461216445, 1);
  sqcRYGate(q, -1.890550632770761, 2);
  sqcRYGate(q, -1.5751176425430995, 3);
  sqcRYGate(q, -0.06475527887091773, 4);
  sqcRYGate(q, -1.003085381845884, 5);
  sqcRYGate(q, -1.5458063804725848, 6);
  sqcRYGate(q, -1.5892892450205398, 7);
  sqcRYGate(q, -3.045472208323156, 8);
  sqcRYGate(q, 2.7702105152785164, 9);
  sqcRYGate(q, 1.6660284185208467, 10);
  sqcRYGate(q, -1.5942802018690772, 11);
  sqcRYGate(q, 0.0462361082984975, 12);
  sqcRYGate(q, 1.3226890668952482, 13);
  sqcRYGate(q, 1.5793102764622813, 14);
  sqcRYGate(q, -0.3066512269251517, 15);

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
