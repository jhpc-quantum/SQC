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

  sqcRYGate(q, -2.681893428146751, 0);
  sqcRZGate(q, -1.8301369737767557, 0);
  sqcRYGate(q, 0.5933444392891948, 1);
  sqcRZGate(q, 0.45746849897128344, 1);
  sqcRYGate(q, -2.480416889658336, 2);
  sqcRZGate(q, 1.9601410545572961, 2);
  sqcRYGate(q, -0.7784352353988775, 3);
  sqcRZGate(q, -0.4346035014088292, 3);
  sqcRYGate(q, -0.8273094631082899, 4);
  sqcRZGate(q, 0.9361527394694231, 4);
  sqcRYGate(q, 1.2401905950316179, 5);
  sqcRZGate(q, -1.7799700544660573, 5);
  sqcRYGate(q, -0.003958000164937055, 6);
  sqcRZGate(q, 2.958219103591149, 6);
  sqcRYGate(q, 0.8895808474581051, 7);
  sqcRZGate(q, 2.502189753671182, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.203391320070163, 0);
  sqcRZGate(q, -1.673459892318335, 0);
  sqcRYGate(q, 2.7913521972287807, 1);
  sqcRZGate(q, 2.380685928378629, 1);
  sqcRYGate(q, 3.1406811182933154, 2);
  sqcRZGate(q, -0.21954476464440822, 2);
  sqcRYGate(q, -0.000863971582031553, 3);
  sqcRZGate(q, 0.4346994139008418, 3);
  sqcRYGate(q, 3.140951628580723, 4);
  sqcRZGate(q, -1.0783437488038767, 4);
  sqcRYGate(q, 1.1195275448980386, 5);
  sqcRZGate(q, -0.013995236845750547, 5);
  sqcRYGate(q, 3.132603280436764, 6);
  sqcRZGate(q, -1.4659888460840147, 6);
  sqcRYGate(q, -2.6007902440582913, 7);
  sqcRZGate(q, -2.541785420436863, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.458868359611368, 0);
  sqcRZGate(q, -0.835784500606783, 0);
  sqcRYGate(q, -0.12268772200124012, 1);
  sqcRZGate(q, -1.533985985991156, 1);
  sqcRYGate(q, 2.7517608661475994, 2);
  sqcRZGate(q, -1.773552921824244, 2);
  sqcRYGate(q, 0.7788383482120258, 3);
  sqcRZGate(q, -2.0150886066117506, 3);
  sqcRYGate(q, 2.4558828648665973, 4);
  sqcRZGate(q, 2.749186964021994, 4);
  sqcRYGate(q, -0.6159222017162256, 5);
  sqcRZGate(q, -2.3805061271307086, 5);
  sqcRYGate(q, 0.0024795699109558807, 6);
  sqcRZGate(q, 2.8178070674510227, 6);
  sqcRYGate(q, 2.3573193527982745, 7);
  sqcRZGate(q, -0.0018468717558466354, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.6892644615497776, 0);
  sqcRZGate(q, -1.1644412264009365, 0);
  sqcRYGate(q, -0.21984466112151654, 1);
  sqcRZGate(q, -2.3972340923070883, 1);
  sqcRYGate(q, 1.1402065708164812, 2);
  sqcRZGate(q, -1.1256959799935728, 2);
  sqcRYGate(q, -1.664775006846721, 3);
  sqcRZGate(q, 2.5706191837348173, 3);
  sqcRYGate(q, -0.7541206593809594, 4);
  sqcRZGate(q, -0.7117091605114306, 4);
  sqcRYGate(q, 1.2344724228941628, 5);
  sqcRZGate(q, -0.6765496932622989, 5);
  sqcRYGate(q, -0.025453899516942307, 6);
  sqcRZGate(q, -1.0027271752461586, 6);
  sqcRYGate(q, -0.48834139443482855, 7);
  sqcRZGate(q, -2.1440448015903746, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.3876086686412998, 0);
  sqcRZGate(q, 2.1014031500325325, 0);
  sqcRYGate(q, -2.7403005376240266, 1);
  sqcRZGate(q, -1.4766846942060967, 1);
  sqcRYGate(q, 0.054380809197932756, 2);
  sqcRZGate(q, -0.46491921260767854, 2);
  sqcRYGate(q, 0.0058444037588030184, 3);
  sqcRZGate(q, 0.43737498731552943, 3);
  sqcRYGate(q, -0.016302024789492203, 4);
  sqcRZGate(q, -2.5935614891766523, 4);
  sqcRYGate(q, 1.9081229894213507, 5);
  sqcRZGate(q, 0.8914578786925645, 5);
  sqcRYGate(q, 0.0018142749774368028, 6);
  sqcRZGate(q, -1.0273150452769926, 6);
  sqcRYGate(q, 1.9054607108643182, 7);
  sqcRZGate(q, 1.8756320569207516, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.301551480959329, 0);
  sqcRZGate(q, -1.6763995803070983, 0);
  sqcRYGate(q, 0.005265721971605686, 1);
  sqcRZGate(q, -2.863062155365625, 1);
  sqcRYGate(q, -3.1381666340453425, 2);
  sqcRZGate(q, 0.3436009336365946, 2);
  sqcRYGate(q, 3.0446234784128117, 3);
  sqcRZGate(q, 1.0343325332392228, 3);
  sqcRYGate(q, 0.12433084611585699, 4);
  sqcRZGate(q, 0.7264656223953933, 4);
  sqcRYGate(q, 3.0039380576669803, 5);
  sqcRZGate(q, -0.9526344117402941, 5);
  sqcRYGate(q, 3.1348099838816434, 6);
  sqcRZGate(q, 0.5453941089766555, 6);
  sqcRYGate(q, -1.8510163172087708, 7);
  sqcRZGate(q, 0.7024237764978754, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.0927371545326703, 0);
  sqcRZGate(q, -1.1203438729804196, 0);
  sqcRYGate(q, 1.919577210719523, 1);
  sqcRZGate(q, 0.6709169638142295, 1);
  sqcRYGate(q, -3.1287597067058774, 2);
  sqcRZGate(q, 2.1613841936811116, 2);
  sqcRYGate(q, 0.049116388986504944, 3);
  sqcRZGate(q, 3.051263220139141, 3);
  sqcRYGate(q, -1.5783247705619896, 4);
  sqcRZGate(q, 1.1623029250159955, 4);
  sqcRYGate(q, -1.037241238240833, 5);
  sqcRZGate(q, -2.254044390869537, 5);
  sqcRYGate(q, -0.016094523445013387, 6);
  sqcRZGate(q, 2.9832287180761807, 6);
  sqcRYGate(q, 1.1909948372953831, 7);
  sqcRZGate(q, 1.3836140475930456, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7927497687279106, 0);
  sqcRZGate(q, 2.0247728972798873, 0);
  sqcRYGate(q, 0.49234845157144413, 1);
  sqcRZGate(q, -0.31427297511477026, 1);
  sqcRYGate(q, -0.088678808151114, 2);
  sqcRZGate(q, -0.17077094027272252, 2);
  sqcRYGate(q, 0.34351075972061285, 3);
  sqcRZGate(q, -2.5163949447725518, 3);
  sqcRYGate(q, -2.7099683404471344, 4);
  sqcRZGate(q, 1.531470934464651, 4);
  sqcRYGate(q, 1.5477511545834286, 5);
  sqcRZGate(q, 1.3965385977437403, 5);
  sqcRYGate(q, 3.1115294655040864, 6);
  sqcRZGate(q, 2.4055240381639216, 6);
  sqcRYGate(q, 2.062134036231641, 7);
  sqcRZGate(q, -1.592136547016544, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.7384145466608893, 0);
  sqcRZGate(q, -0.37545168884296043, 0);
  sqcRYGate(q, 0.2871416671375515, 1);
  sqcRZGate(q, 1.8022741571679133, 1);
  sqcRYGate(q, -0.009992196027517991, 2);
  sqcRZGate(q, 1.8603243826532927, 2);
  sqcRYGate(q, -3.1092898437523644, 3);
  sqcRZGate(q, -2.4896411991295118, 3);
  sqcRYGate(q, -2.0770711629624525, 4);
  sqcRZGate(q, 1.6220945370205557, 4);
  sqcRYGate(q, -1.6457955558750434, 5);
  sqcRZGate(q, 0.7982503520528105, 5);
  sqcRYGate(q, -0.021559796688824604, 6);
  sqcRZGate(q, -2.074553986826822, 6);
  sqcRYGate(q, -1.2752258296736851, 7);
  sqcRZGate(q, 2.47374826180362, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.9509480455564914, 0);
  sqcRZGate(q, 2.698171447696459, 0);
  sqcRYGate(q, 0.550910203556891, 1);
  sqcRZGate(q, -2.138600331034727, 1);
  sqcRYGate(q, -0.07482630534320296, 2);
  sqcRZGate(q, -1.0009608629793316, 2);
  sqcRYGate(q, -3.0582665779716787, 3);
  sqcRZGate(q, -2.5780663886432102, 3);
  sqcRYGate(q, -0.07484388993854896, 4);
  sqcRZGate(q, -2.992304749090241, 4);
  sqcRYGate(q, -0.02484779598911313, 5);
  sqcRZGate(q, -3.0510194707740967, 5);
  sqcRYGate(q, -3.138618859093634, 6);
  sqcRZGate(q, -0.7540909836607037, 6);
  sqcRYGate(q, -2.413898830949273, 7);
  sqcRZGate(q, 3.063329361468792, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.2669939808462507, 0);
  sqcRZGate(q, 0.575019196598743, 0);
  sqcRYGate(q, -2.6143258070915905, 1);
  sqcRZGate(q, -1.4589362950523093, 1);
  sqcRYGate(q, -0.006054653674439786, 2);
  sqcRZGate(q, 1.6468533377178267, 2);
  sqcRYGate(q, -3.106192856428243, 3);
  sqcRZGate(q, 1.464532349942292, 3);
  sqcRYGate(q, -0.25980874247013397, 4);
  sqcRZGate(q, -0.7469024360133938, 4);
  sqcRYGate(q, 1.5991212005437274, 5);
  sqcRZGate(q, 1.6415198483486106, 5);
  sqcRYGate(q, 0.5525333378632824, 6);
  sqcRZGate(q, 2.7690980748175598, 6);
  sqcRYGate(q, 2.347491954841809, 7);
  sqcRZGate(q, -1.905411675137942, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.3411236222038016, 0);
  sqcRZGate(q, 0.2520339496656874, 0);
  sqcRYGate(q, 1.411823680420659, 1);
  sqcRZGate(q, -0.22079898846318624, 1);
  sqcRYGate(q, 2.970722522474319, 2);
  sqcRZGate(q, -0.35044786987902654, 2);
  sqcRYGate(q, -2.983948736344084, 3);
  sqcRZGate(q, 1.7840526911167673, 3);
  sqcRYGate(q, -2.9932505256183854, 4);
  sqcRZGate(q, -1.0694131089863443, 4);
  sqcRYGate(q, -1.8627578373585534, 5);
  sqcRZGate(q, 0.7644400205635554, 5);
  sqcRYGate(q, 2.55122541069226, 6);
  sqcRZGate(q, -3.040607394538855, 6);
  sqcRYGate(q, 2.865111447348406, 7);
  sqcRZGate(q, -0.4759360540472173, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.8894646465276876, 0);
  sqcRZGate(q, -0.23158227014869523, 0);
  sqcRYGate(q, 0.15270113339016092, 1);
  sqcRZGate(q, -1.978936135455891, 1);
  sqcRYGate(q, 0.0051155286711981034, 2);
  sqcRZGate(q, 0.27814031221385466, 2);
  sqcRYGate(q, -3.113484456859656, 3);
  sqcRZGate(q, -1.0044653663952532, 3);
  sqcRYGate(q, 0.03232272914203363, 4);
  sqcRZGate(q, -0.48807657188082304, 4);
  sqcRYGate(q, 3.1400235154986746, 5);
  sqcRZGate(q, -2.379196579251442, 5);
  sqcRYGate(q, 0.006829893579565649, 6);
  sqcRZGate(q, -0.10361171517837885, 6);
  sqcRYGate(q, 0.05426252377486396, 7);
  sqcRZGate(q, -1.9194998007009028, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.5682813299824714, 0);
  sqcRZGate(q, 2.745479028747308, 0);
  sqcRYGate(q, -1.5978760058407813, 1);
  sqcRZGate(q, -2.1439322345789797, 1);
  sqcRYGate(q, 0.18629242574279337, 2);
  sqcRZGate(q, -1.8589541404923393, 2);
  sqcRYGate(q, 2.2113690856563304, 3);
  sqcRZGate(q, 2.4388188832679005, 3);
  sqcRYGate(q, -1.7815391484132992, 4);
  sqcRZGate(q, -0.9913755152101086, 4);
  sqcRYGate(q, 1.2825912077478065, 5);
  sqcRZGate(q, -2.9677183121715753, 5);
  sqcRYGate(q, -2.50278392588592, 6);
  sqcRZGate(q, -1.788215277077328, 6);
  sqcRYGate(q, 0.3939064890790452, 7);
  sqcRZGate(q, -0.5365265397386914, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.5256828384725067, 0);
  sqcRZGate(q, -3.0699744843455123, 0);
  sqcRYGate(q, -3.0791683772600456, 1);
  sqcRZGate(q, 1.184322830499761, 1);
  sqcRYGate(q, 0.0004181892082999717, 2);
  sqcRZGate(q, 2.1626972287224664, 2);
  sqcRYGate(q, -2.8016490324552903, 3);
  sqcRZGate(q, 3.075743473793572, 3);
  sqcRYGate(q, 0.3501475888340435, 4);
  sqcRZGate(q, -0.8779805729350114, 4);
  sqcRYGate(q, 1.4924612122536494, 5);
  sqcRZGate(q, 1.3681444615705376, 5);
  sqcRYGate(q, 0.32144673671469626, 6);
  sqcRZGate(q, 1.4092826078456546, 6);
  sqcRYGate(q, -2.073832669358643, 7);
  sqcRZGate(q, 0.3771545640235225, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.8725634416848034, 0);
  sqcRZGate(q, 1.8316150176829789, 0);
  sqcRYGate(q, 2.461229477135093, 1);
  sqcRZGate(q, -0.41014168353280667, 1);
  sqcRYGate(q, 2.930715836876086, 2);
  sqcRZGate(q, 0.58258979125947, 2);
  sqcRYGate(q, -3.1168084324089325, 3);
  sqcRZGate(q, 3.124571146976122, 3);
  sqcRYGate(q, 3.0981299007718035, 4);
  sqcRZGate(q, -2.6522954319434957, 4);
  sqcRYGate(q, -3.1392996923625893, 5);
  sqcRZGate(q, -2.67420690322631, 5);
  sqcRYGate(q, -1.1037721916580852, 6);
  sqcRZGate(q, -3.1086814126313462, 6);
  sqcRYGate(q, -0.2770509303494828, 7);
  sqcRZGate(q, -0.15504011737645318, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.8721090204376316, 0);
  sqcRZGate(q, 2.43206561852448, 0);
  sqcRYGate(q, 1.7412510044833178, 1);
  sqcRZGate(q, 2.2355998353019375, 1);
  sqcRYGate(q, 0.00042548720214163893, 2);
  sqcRZGate(q, 0.22170771651968657, 2);
  sqcRYGate(q, -1.1338416665367888, 3);
  sqcRZGate(q, -0.0958984239740908, 3);
  sqcRYGate(q, -2.813598287629224, 4);
  sqcRZGate(q, 2.9094901848849424, 4);
  sqcRYGate(q, -0.07136439751636864, 5);
  sqcRZGate(q, 2.319574815810753, 5);
  sqcRYGate(q, 0.9884914906311968, 6);
  sqcRZGate(q, -3.1078703767786036, 6);
  sqcRYGate(q, 3.108876324668523, 7);
  sqcRZGate(q, 1.044410909567639, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.137922423234897, 0);
  sqcRZGate(q, 0.3566414932108974, 0);
  sqcRYGate(q, -2.0739143552744794, 1);
  sqcRZGate(q, -0.7977656649445262, 1);
  sqcRYGate(q, -0.016385170714060423, 2);
  sqcRZGate(q, -2.00404299122787, 2);
  sqcRYGate(q, -0.6526042805938372, 3);
  sqcRZGate(q, -1.9948316255815177, 3);
  sqcRYGate(q, -3.1343276177201194, 4);
  sqcRZGate(q, 2.5879658264736296, 4);
  sqcRYGate(q, 0.0022248358635019727, 5);
  sqcRZGate(q, -0.8892025984210079, 5);
  sqcRYGate(q, -1.1044684122061024, 6);
  sqcRZGate(q, 2.4821499678354986, 6);
  sqcRYGate(q, -1.7230541531945347, 7);
  sqcRZGate(q, 0.12750263359122624, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.729889730496127, 0);
  sqcRZGate(q, -1.2472812599886423, 0);
  sqcRYGate(q, -0.7835988524731753, 1);
  sqcRZGate(q, -1.7067087516279675, 1);
  sqcRYGate(q, 1.821697084026478, 2);
  sqcRZGate(q, 2.8477450662320436, 2);
  sqcRYGate(q, 1.0562790078344806, 3);
  sqcRZGate(q, 2.445348900753884, 3);
  sqcRYGate(q, 2.4360114200710137, 4);
  sqcRZGate(q, 1.1081302222176816, 4);
  sqcRYGate(q, -1.4596110284531714, 5);
  sqcRZGate(q, -2.167559916413218, 5);
  sqcRYGate(q, 0.16783829214976098, 6);
  sqcRZGate(q, 0.10289748044309796, 6);
  sqcRYGate(q, 0.23870333541321917, 7);
  sqcRZGate(q, -0.6738125415585935, 7);

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
