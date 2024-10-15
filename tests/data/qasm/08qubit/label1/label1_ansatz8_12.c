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

  sqcRYGate(q, 1.0324057200974894, 0);
  sqcRYGate(q, 0.8504950109142966, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.548166161220707, 0);
  sqcRYGate(q, 2.4106558187341376, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.08007476265482391, 2);
  sqcRYGate(q, -0.965399135838876, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4244018693857508, 2);
  sqcRYGate(q, 2.6939340553073934, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2037078478391976, 4);
  sqcRYGate(q, 2.1665369127429077, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.050588255128291, 4);
  sqcRYGate(q, 0.03969876042861564, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.725820023931718, 6);
  sqcRYGate(q, -0.23507505598209644, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6264844812748365, 6);
  sqcRYGate(q, -1.2377465901331737, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7362494011625413, 0);
  sqcRYGate(q, 0.8546716081168828, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6081019601038715, 0);
  sqcRYGate(q, 2.3105263289615525, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4560569672624304, 2);
  sqcRYGate(q, 0.2208958550587449, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.063775005456641, 2);
  sqcRYGate(q, 2.805657252841837, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.1598355212984947, 4);
  sqcRYGate(q, -1.6399206670045583, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.5562164696453786, 4);
  sqcRYGate(q, 2.2691432563110263, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5156463309916806, 1);
  sqcRYGate(q, -1.097900708388881, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9639637998916377, 1);
  sqcRYGate(q, -3.1156198277678633, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0507822872844832, 3);
  sqcRYGate(q, -2.0572240951109118, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.966341649523831, 3);
  sqcRYGate(q, -2.0758687731159253, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.18966151627509192, 5);
  sqcRYGate(q, 1.2778560508885537, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.8432190465109768, 5);
  sqcRYGate(q, -1.6442529881108277, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.8326032422476217, 0);
  sqcRYGate(q, 2.806420709277302, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4877446572229016, 0);
  sqcRYGate(q, 1.731094098516361, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5912942890069592, 2);
  sqcRYGate(q, 1.9709881961235487, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.263108358937118, 2);
  sqcRYGate(q, -0.17451132598782998, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2496884551656455, 4);
  sqcRYGate(q, 1.3971746458712575, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3599365498754685, 4);
  sqcRYGate(q, 0.5083430908584112, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9043928885820776, 6);
  sqcRYGate(q, -0.9636702044474282, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8345385191471275, 6);
  sqcRYGate(q, -2.4979234422625276, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8368679278503803, 0);
  sqcRYGate(q, 1.5848626177249951, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6649304052487153, 0);
  sqcRYGate(q, -0.06581112967920433, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2992129729626596, 2);
  sqcRYGate(q, 2.7537647188883936, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.2401172944949548, 2);
  sqcRYGate(q, 1.8097619331084038, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.5739346352808181, 4);
  sqcRYGate(q, -0.1578533782284084, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.1046382382505584, 4);
  sqcRYGate(q, 1.235829728584055, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.44136883649575387, 1);
  sqcRYGate(q, -1.0835658960404626, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9151872064384062, 1);
  sqcRYGate(q, 2.749189965565713, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9352760238150786, 3);
  sqcRYGate(q, -1.577915192370134, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.3500495128847052, 3);
  sqcRYGate(q, 2.388442381871514, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.6677961286731833, 5);
  sqcRYGate(q, -1.995073787612018, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.7270806256004105, 5);
  sqcRYGate(q, -1.7618238787484035, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.5831696533097368, 0);
  sqcRYGate(q, -0.2652904052720945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9046563883595184, 0);
  sqcRYGate(q, -2.391470559860083, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5625150411432394, 2);
  sqcRYGate(q, 2.902319081641846, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.479610727380602, 2);
  sqcRYGate(q, -2.0568596860856987, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.957915893588949, 4);
  sqcRYGate(q, -1.884809047719492, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6741708502488615, 4);
  sqcRYGate(q, 0.4774966078942943, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.231860471384978, 6);
  sqcRYGate(q, 2.3101479144435344, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7917020849833714, 6);
  sqcRYGate(q, 1.6323477523942809, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2539032881321814, 0);
  sqcRYGate(q, 2.1088480506784695, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6433895730306303, 0);
  sqcRYGate(q, 1.479753364927736, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4449399390447542, 2);
  sqcRYGate(q, -1.775011375075291, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.065852190264307, 2);
  sqcRYGate(q, 0.8057710419643858, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.3710317276919657, 4);
  sqcRYGate(q, 2.9494831675560436, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.936409786215607, 4);
  sqcRYGate(q, -1.565864909846935, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.243060829427163, 1);
  sqcRYGate(q, 0.21832186175210191, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.650239162388169, 1);
  sqcRYGate(q, 2.9178914244710237, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0295543627110693, 3);
  sqcRYGate(q, -2.7722347207165243, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.23869284044728348, 3);
  sqcRYGate(q, -2.8680909226557323, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.3196752315751992, 5);
  sqcRYGate(q, 2.952688788536996, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.8541407375258876, 5);
  sqcRYGate(q, -2.2711609674406805, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.7081787716402987, 0);
  sqcRYGate(q, 1.9044582936278347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4803602678263399, 0);
  sqcRYGate(q, -2.5576283114265563, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8013051225675047, 2);
  sqcRYGate(q, 0.803869142717714, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.429393900943345, 2);
  sqcRYGate(q, -2.1006028154099203, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.478832507851945, 4);
  sqcRYGate(q, -2.7522268352581225, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1188647475878666, 4);
  sqcRYGate(q, 0.32100062349313063, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7174907353241817, 6);
  sqcRYGate(q, -2.126351102975251, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.3589372512907687, 6);
  sqcRYGate(q, 0.4500002265398181, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1419284008951074, 0);
  sqcRYGate(q, 2.441228145048735, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3751254212582263, 0);
  sqcRYGate(q, 1.4391713524215586, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5548566765811591, 2);
  sqcRYGate(q, -2.7125295354467003, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.10863957304031, 2);
  sqcRYGate(q, -2.8078807466884554, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.8565605663551832, 4);
  sqcRYGate(q, -1.2528088197034348, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.996230886340841, 4);
  sqcRYGate(q, 2.787406441374064, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.682289948340268, 1);
  sqcRYGate(q, -2.747395939525541, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.0856933987991697, 1);
  sqcRYGate(q, 1.2273775698833385, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5367346144308254, 3);
  sqcRYGate(q, 0.5253246073616324, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.30052490799870735, 3);
  sqcRYGate(q, 3.0304138409032797, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.447248314772061, 5);
  sqcRYGate(q, 2.3817026809145827, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.5194537591125047, 5);
  sqcRYGate(q, 1.0978176796852388, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.2919130893513646, 0);
  sqcRYGate(q, 2.9574974201989668, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.136900712757428, 0);
  sqcRYGate(q, 3.133572891360906, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.934308816149123, 2);
  sqcRYGate(q, 2.834079881695741, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0810160227939214, 2);
  sqcRYGate(q, 1.6519297916822413, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.856016179728513, 4);
  sqcRYGate(q, -2.5433997742167285, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6242322338316988, 4);
  sqcRYGate(q, 2.221486775034109, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9650584034807974, 6);
  sqcRYGate(q, 2.4179930091783897, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.875225712277631, 6);
  sqcRYGate(q, -0.46004961185192883, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.247154844152755, 0);
  sqcRYGate(q, -2.8373295936191134, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9696143158400644, 0);
  sqcRYGate(q, 1.9904733139645778, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3832198511345606, 2);
  sqcRYGate(q, 2.1776286869245878, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.2569697699865736, 2);
  sqcRYGate(q, -1.6891688728790202, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.6983065871046747, 4);
  sqcRYGate(q, -2.5904440460145923, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.046518444406513, 4);
  sqcRYGate(q, 0.6674281651250205, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.6040200530935877, 1);
  sqcRYGate(q, 1.7821712384968906, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.138486282918991, 1);
  sqcRYGate(q, 0.46364712205686326, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9960078603161868, 3);
  sqcRYGate(q, 0.4612521120629113, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.409830060895619, 3);
  sqcRYGate(q, -0.09702960306488849, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.4015890180083763, 5);
  sqcRYGate(q, -1.4534836968403875, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.9083123093041192, 5);
  sqcRYGate(q, 1.1749201638804487, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.8194481742079727, 0);
  sqcRYGate(q, 0.6994623303317189, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3787202573034669, 0);
  sqcRYGate(q, 1.700949741074368, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4530928540375916, 2);
  sqcRYGate(q, -1.0494222887637097, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8245778093248197, 2);
  sqcRYGate(q, -3.091124022616116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9407773682845906, 4);
  sqcRYGate(q, 1.733257379857463, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.076973235959005, 4);
  sqcRYGate(q, 1.5890763915376036, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.115011003386554, 6);
  sqcRYGate(q, 1.4523290299953517, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.374429663289599, 6);
  sqcRYGate(q, 0.826488614364405, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7392714148047739, 0);
  sqcRYGate(q, -0.9998738263889734, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1687567581555494, 0);
  sqcRYGate(q, 2.7548932271717606, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2331584435316865, 2);
  sqcRYGate(q, -2.019460293529698, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.5855450069935096, 2);
  sqcRYGate(q, 0.19644748844908033, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.9763015870043077, 4);
  sqcRYGate(q, -0.05812138940581857, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.3896703084896584, 4);
  sqcRYGate(q, 1.8406684573866636, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.7519851046060255, 1);
  sqcRYGate(q, 3.062354149560279, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7640218828359941, 1);
  sqcRYGate(q, 0.025910985056029977, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8447946529730341, 3);
  sqcRYGate(q, 2.59614733831881, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.894441189674752, 3);
  sqcRYGate(q, 1.9834027266542957, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.495524668233095, 5);
  sqcRYGate(q, -1.6506892244283042, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5458091854883156, 5);
  sqcRYGate(q, -2.170534698708385, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.983101051732051, 0);
  sqcRYGate(q, 2.7182820782559145, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9048913416376028, 0);
  sqcRYGate(q, 1.213726261709657, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5650911507278524, 2);
  sqcRYGate(q, -2.278170738339041, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.475270535046882, 2);
  sqcRYGate(q, -2.3177137018665603, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9841087173822904, 4);
  sqcRYGate(q, -1.2354837161494894, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7170696036003532, 4);
  sqcRYGate(q, -2.1360601099078256, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.274785850328655, 6);
  sqcRYGate(q, -2.008979829608096, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.009819264360994, 6);
  sqcRYGate(q, 1.5458083438459314, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5292686791902868, 0);
  sqcRYGate(q, 2.911240507908108, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.528945006188371, 0);
  sqcRYGate(q, -1.7976257059322949, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2526643844123457, 2);
  sqcRYGate(q, -2.9484087306467877, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.72986822355778, 2);
  sqcRYGate(q, -1.5730792471131327, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.8301619110692322, 4);
  sqcRYGate(q, 2.420927069762699, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.62736800899875, 4);
  sqcRYGate(q, -1.7501966150923116, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.3434591625281576, 1);
  sqcRYGate(q, -0.15608773663026287, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4763144743708705, 1);
  sqcRYGate(q, 0.12390886823468161, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1652734137227787, 3);
  sqcRYGate(q, 0.2262248851520976, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8343334054592797, 3);
  sqcRYGate(q, -1.3353594823831083, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.275110131199468, 5);
  sqcRYGate(q, 2.672223278446672, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.5022099062617316, 5);
  sqcRYGate(q, -1.4071279374254342, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.5855631313807121, 0);
  sqcRYGate(q, 2.288109934425929, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7202053906636552, 0);
  sqcRYGate(q, 1.3459906800660333, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4964203006378734, 2);
  sqcRYGate(q, 0.7273507008215354, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4505605151738858, 2);
  sqcRYGate(q, 1.2280361081822417, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9567684179966336, 4);
  sqcRYGate(q, 1.1794398891330733, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.168722017606095, 4);
  sqcRYGate(q, -2.505347882585069, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3217991160974103, 6);
  sqcRYGate(q, 1.8132142820204802, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0441312848070408, 6);
  sqcRYGate(q, -3.067768816543589, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.498443345205019, 0);
  sqcRYGate(q, -2.6431620486338585, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7208866214165291, 0);
  sqcRYGate(q, -2.490567020096194, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6775571795516353, 2);
  sqcRYGate(q, -1.9212609405357346, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.657011892392727, 2);
  sqcRYGate(q, 0.7142356399596445, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.347809652678403, 4);
  sqcRYGate(q, -2.993279031886966, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.29500180058666403, 4);
  sqcRYGate(q, -0.23374250771414398, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.7632170779764703, 1);
  sqcRYGate(q, 0.029160863459219755, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4983964780086096, 1);
  sqcRYGate(q, 2.057980864671001, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3050832122410547, 3);
  sqcRYGate(q, -2.833002972052912, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.556422320948005, 3);
  sqcRYGate(q, -1.4446863918621933, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.3402371373981277, 5);
  sqcRYGate(q, 2.5507994276240717, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.8514749378490202, 5);
  sqcRYGate(q, 0.7897070026773678, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.4300896593075691, 0);
  sqcRYGate(q, -3.033976511887765, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7287971831555411, 0);
  sqcRYGate(q, -0.7669097666088138, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7323079792187628, 2);
  sqcRYGate(q, 2.195980891333338, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9268185116757415, 2);
  sqcRYGate(q, 1.5756384846294917, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.10133291255743161, 4);
  sqcRYGate(q, -2.991009749254806, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.93927534901717, 4);
  sqcRYGate(q, 2.422217981111772, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7203082013449604, 6);
  sqcRYGate(q, -2.6043742239843004, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.385761499048328, 6);
  sqcRYGate(q, 1.0748669401567719, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.927507885245778, 0);
  sqcRYGate(q, 1.0563489128073391, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6802927804081005, 0);
  sqcRYGate(q, 2.2594535718079665, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8024713222647213, 2);
  sqcRYGate(q, 0.5913421363384703, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.05348650117643215, 2);
  sqcRYGate(q, -1.586301594307848, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.6731829770651734, 4);
  sqcRYGate(q, -0.0971746227802388, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.6467540844959248, 4);
  sqcRYGate(q, 2.5691510680955973, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.2713312348602903, 1);
  sqcRYGate(q, -0.5951088707597835, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.16185633294221713, 1);
  sqcRYGate(q, 1.7021256279178747, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6244389824202886, 3);
  sqcRYGate(q, -0.7760755348153872, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.131544464732786, 3);
  sqcRYGate(q, 0.5570752004300639, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.06353287632710465, 5);
  sqcRYGate(q, -2.5049518245134106, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.40115868832240764, 5);
  sqcRYGate(q, -1.8251250174839297, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.0084319767049648, 0);
  sqcRYGate(q, -0.9239572814892316, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.485430845594401, 0);
  sqcRYGate(q, 0.12800946962380258, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5656753802451124, 2);
  sqcRYGate(q, 2.5172178847497073, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.376707522820605, 2);
  sqcRYGate(q, -0.6368184215118751, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.34767137839142787, 4);
  sqcRYGate(q, -0.2360752491272544, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8855810207939153, 4);
  sqcRYGate(q, -1.7587467775563081, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8356623091326845, 6);
  sqcRYGate(q, 1.1654490302787543, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3221400659537337, 6);
  sqcRYGate(q, 1.8743861686470962, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.167973465413863, 0);
  sqcRYGate(q, -0.489734797674605, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9936640343290346, 0);
  sqcRYGate(q, -2.982398295788601, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4670032664844346, 2);
  sqcRYGate(q, 1.8584248790360152, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.38476063550051, 2);
  sqcRYGate(q, -0.313604211157334, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.9567017899042052, 4);
  sqcRYGate(q, 1.5029039956073464, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.832988213199024, 4);
  sqcRYGate(q, -0.012032335591283251, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.090782135484705, 1);
  sqcRYGate(q, 1.1062789650601874, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3953188795467817, 1);
  sqcRYGate(q, 0.019880893295515466, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7441866067467338, 3);
  sqcRYGate(q, 2.0274399621267323, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.11987762827793642, 3);
  sqcRYGate(q, -2.2582472861416156, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.7091513404643552, 5);
  sqcRYGate(q, -2.496694685391693, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.18862365630147143, 5);
  sqcRYGate(q, -0.15989455758495108, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.9658062429322484, 0);
  sqcRYGate(q, 0.8236964151929174, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7952124284142243, 0);
  sqcRYGate(q, -1.801441151160818, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0718632903979706, 2);
  sqcRYGate(q, -1.7466584726255565, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.36498191352083575, 2);
  sqcRYGate(q, -2.919884968510717, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1606622827424253, 4);
  sqcRYGate(q, -2.710073157731869, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9072356759652803, 4);
  sqcRYGate(q, -3.0583070644275705, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4873340300098459, 6);
  sqcRYGate(q, 2.7763383009703415, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4337052642921764, 6);
  sqcRYGate(q, 3.1354818878693345, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8780191185950605, 0);
  sqcRYGate(q, -2.737059915012412, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.109242701717701, 0);
  sqcRYGate(q, 1.550822383904154, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.418831399792575, 2);
  sqcRYGate(q, -1.0132055735976895, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.6515807798460083, 2);
  sqcRYGate(q, 1.5993592344484533, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.9103187298158468, 4);
  sqcRYGate(q, -1.7380258350680986, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.2719083522747333, 4);
  sqcRYGate(q, -0.9619700154402343, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.7014203672680908, 1);
  sqcRYGate(q, -1.4191475306155084, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7805631486201232, 1);
  sqcRYGate(q, -0.4426425214724193, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.402678758265604, 3);
  sqcRYGate(q, 0.4236606256894211, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.2525998639580833, 3);
  sqcRYGate(q, 0.6367605348829312, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.2697401590931685, 5);
  sqcRYGate(q, -0.40520078047717245, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.2773181049577635, 5);
  sqcRYGate(q, 3.1029801431013966, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.3674589898800353, 0);
  sqcRYGate(q, -1.2731924139647788, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6662507899202397, 0);
  sqcRYGate(q, 0.26002072849533153, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1296935303980238, 2);
  sqcRYGate(q, 2.5421439852109957, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1126926132730164, 2);
  sqcRYGate(q, 2.0538841609083454, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5823379813142026, 4);
  sqcRYGate(q, 2.755625615671781, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4682030090637945, 4);
  sqcRYGate(q, -0.07911109277252393, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.20578130470151657, 6);
  sqcRYGate(q, -1.4648267792527943, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9611713420443833, 6);
  sqcRYGate(q, -1.5996098858817707, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9430268338124986, 0);
  sqcRYGate(q, 2.6468860270089896, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8708760255218884, 0);
  sqcRYGate(q, 1.9463660923382065, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1734066042753533, 2);
  sqcRYGate(q, -1.5231045304172188, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.3971588537129058, 2);
  sqcRYGate(q, 0.9843445235096464, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.2222386221759107, 4);
  sqcRYGate(q, 2.147589617162477, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.644121145508569, 4);
  sqcRYGate(q, 1.338894033080246, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.15446219794578794, 1);
  sqcRYGate(q, 0.9591248448346468, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0452305389954883, 1);
  sqcRYGate(q, 1.1298391587070373, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0689154786116823, 3);
  sqcRYGate(q, -1.291603763400584, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.0393469092669254, 3);
  sqcRYGate(q, 0.6892889565597331, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.5475016118833153, 5);
  sqcRYGate(q, -2.1252412904763602, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.4932736371125719, 5);
  sqcRYGate(q, -1.0369665354468562, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.5444937515820376, 0);
  sqcRYGate(q, -0.1529633092066831, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3985424860815718, 0);
  sqcRYGate(q, 1.922306083674962, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.313182884973348, 2);
  sqcRYGate(q, -1.9931572620714801, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.813358048335696, 2);
  sqcRYGate(q, 0.22002351781024812, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3984352689947881, 4);
  sqcRYGate(q, -2.8177147848112596, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2153023156691747, 4);
  sqcRYGate(q, 1.9812210656125944, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.43711037030684885, 6);
  sqcRYGate(q, 2.736726214241326, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0115012305925877, 6);
  sqcRYGate(q, -1.9756653336704313, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.78486665943836, 0);
  sqcRYGate(q, -1.4214217647604608, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.11423203644313329, 0);
  sqcRYGate(q, -1.6761767678601878, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8852582787519394, 2);
  sqcRYGate(q, 0.11687596808163375, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.04356447007141312, 2);
  sqcRYGate(q, -1.9647359853603845, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.759998449432187, 4);
  sqcRYGate(q, -0.4134436329454419, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.7864022191646036, 4);
  sqcRYGate(q, -2.559257195375506, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.335504191277855, 1);
  sqcRYGate(q, 0.9062582317361435, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1499437094373422, 1);
  sqcRYGate(q, 2.4502958832062087, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9117668234954373, 3);
  sqcRYGate(q, 2.7750784220961604, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.112207114042263, 3);
  sqcRYGate(q, 0.33334585304829645, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.616832385507985, 5);
  sqcRYGate(q, -0.26005744578941964, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.278274965509084, 5);
  sqcRYGate(q, 2.1873981139745746, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.611954420589334, 0);
  sqcRYGate(q, 3.1075137112086644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.877133199711248, 0);
  sqcRYGate(q, -1.3011745373357861, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5283946663975074, 2);
  sqcRYGate(q, -0.5573962938373214, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2678133484261203, 2);
  sqcRYGate(q, -0.6532182560385582, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9674286793833575, 4);
  sqcRYGate(q, -1.8254154169729695, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2957019800285972, 4);
  sqcRYGate(q, 1.5877061781776776, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.441789678658914, 6);
  sqcRYGate(q, -1.9235040567522548, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.18373012382144793, 6);
  sqcRYGate(q, 1.6376613949842107, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7164590907350141, 0);
  sqcRYGate(q, 1.5370697218229932, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.433697145038859, 0);
  sqcRYGate(q, 1.6829340561364952, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2645583786006871, 2);
  sqcRYGate(q, -0.483857431760808, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.0004092474943667, 2);
  sqcRYGate(q, -1.395049206154076, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.8456826786405172, 4);
  sqcRYGate(q, 1.4279774675007078, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.317357331383854, 4);
  sqcRYGate(q, -1.766018096366938, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.817213583171899, 1);
  sqcRYGate(q, -2.0279815721288275, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8233510044890294, 1);
  sqcRYGate(q, -2.6466740563456126, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.894555966438726, 3);
  sqcRYGate(q, -1.034333884907391, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.08791916349867, 3);
  sqcRYGate(q, 0.08522526786848594, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.6557509013105032, 5);
  sqcRYGate(q, 1.590193157937719, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.9460372036720869, 5);
  sqcRYGate(q, 2.420497348580922, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.29868751043102737, 0);
  sqcRYGate(q, -2.241207217268288, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.315177056302382, 0);
  sqcRYGate(q, -1.0282696289832645, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9640562934276113, 2);
  sqcRYGate(q, -0.6934460142336601, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5395702960894653, 2);
  sqcRYGate(q, -1.5965747949055098, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.14935599335914684, 4);
  sqcRYGate(q, -0.2179766746119742, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9535801644047137, 4);
  sqcRYGate(q, 2.8051429880583214, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2323737360927174, 6);
  sqcRYGate(q, 0.547448147100769, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1527846296197177, 6);
  sqcRYGate(q, 0.22485950826500847, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2666879884264441, 0);
  sqcRYGate(q, 1.06639458060317, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.030240482810835, 0);
  sqcRYGate(q, -2.9789557539450966, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7513731046700153, 2);
  sqcRYGate(q, 1.4519590437203114, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.4041430249066833, 2);
  sqcRYGate(q, 1.1032469556060798, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.2986711292457792, 4);
  sqcRYGate(q, -2.379020321816279, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.013317871626904, 4);
  sqcRYGate(q, -2.4044991805922504, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.9881001236129567, 1);
  sqcRYGate(q, -2.5961127705420317, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.032467603254409, 1);
  sqcRYGate(q, 1.5122100902336522, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7520369128860949, 3);
  sqcRYGate(q, -0.8284504667108675, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.669737941212101, 3);
  sqcRYGate(q, 0.9709395754601484, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.0934130794675747, 5);
  sqcRYGate(q, -0.024307049519548648, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.7475753639883246, 5);
  sqcRYGate(q, 2.002275567867394, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.324612817149763, 0);
  sqcRYGate(q, -2.767065221578455, 1);
  sqcRYGate(q, -1.930336014147528, 2);
  sqcRYGate(q, -1.0213118431907593, 3);
  sqcRYGate(q, -2.298687992654101, 4);
  sqcRYGate(q, 2.8955977422464065, 5);
  sqcRYGate(q, -2.938511699937185, 6);
  sqcRYGate(q, 1.673913055569293, 7);

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
