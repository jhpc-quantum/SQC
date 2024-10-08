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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -2.5413761706207936, 0);
  sqcRZGate(q, 1.5230777768120785, 0);
  sqcRYGate(q, 2.7306879312869192, 1);
  sqcRZGate(q, 2.5880467214012444, 1);
  sqcRYGate(q, 1.5707784907213318, 2);
  sqcRZGate(q, -1.7586384347698403e-05, 2);
  sqcRYGate(q, 1.5687559249789256, 3);
  sqcRZGate(q, -2.9203743129881135, 3);
  sqcRYGate(q, -2.525014443850305, 4);
  sqcRZGate(q, 2.654236861068366, 4);
  sqcRYGate(q, 2.4927847584757057, 5);
  sqcRZGate(q, -2.548885467994581, 5);
  sqcRYGate(q, 1.717052112430582, 6);
  sqcRZGate(q, 1.050374163231205, 6);
  sqcRYGate(q, 1.5647336943888188, 7);
  sqcRZGate(q, 2.2718816438628355, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.24310244659605676, 0);
  sqcRZGate(q, 0.6720077374877275, 0);
  sqcRYGate(q, -0.044146878117166014, 1);
  sqcRZGate(q, 0.17573920122639883, 1);
  sqcRYGate(q, 0.066897401273045, 2);
  sqcRZGate(q, 2.589532414049946, 2);
  sqcRYGate(q, 3.1371343240088514, 3);
  sqcRZGate(q, 0.8088408682270947, 3);
  sqcRYGate(q, 3.05924173470259, 4);
  sqcRZGate(q, -0.39205147413503916, 4);
  sqcRYGate(q, -3.0701826192028037, 5);
  sqcRZGate(q, 2.033093455428866, 5);
  sqcRYGate(q, 1.30135562962468, 6);
  sqcRZGate(q, -1.8459347975120917, 6);
  sqcRYGate(q, -0.08693616397680234, 7);
  sqcRZGate(q, -0.6234660156007505, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.046624005829461, 0);
  sqcRZGate(q, -2.8488784387329957, 0);
  sqcRYGate(q, -0.610475169015418, 1);
  sqcRZGate(q, -1.0863257013601677, 1);
  sqcRYGate(q, 3.1412350173119794, 2);
  sqcRZGate(q, -2.8900516760573787, 2);
  sqcRYGate(q, 3.139779197629871, 3);
  sqcRZGate(q, 0.8715777000742209, 3);
  sqcRYGate(q, -2.7578917688379523, 4);
  sqcRZGate(q, 1.6105297801474976, 4);
  sqcRYGate(q, 1.1200007718667975, 5);
  sqcRZGate(q, 0.23848037973612032, 5);
  sqcRYGate(q, 1.2036876764755284, 6);
  sqcRZGate(q, 1.1580237195248921, 6);
  sqcRYGate(q, 1.7892609737944971, 7);
  sqcRZGate(q, 1.6224530098856018, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.310444567284228, 0);
  sqcRZGate(q, 1.2008571075683987, 0);
  sqcRYGate(q, 0.6435506378582794, 1);
  sqcRZGate(q, -0.05927280031423976, 1);
  sqcRYGate(q, 0.0005247379176962497, 2);
  sqcRZGate(q, 2.3388999191548256, 2);
  sqcRYGate(q, -3.141050679323696, 3);
  sqcRZGate(q, 0.28448370420314445, 3);
  sqcRYGate(q, 0.15677590205566994, 4);
  sqcRZGate(q, -0.7113470311145887, 4);
  sqcRYGate(q, -0.01459844227783227, 5);
  sqcRZGate(q, 0.7277923799527511, 5);
  sqcRYGate(q, -0.8191396246851479, 6);
  sqcRZGate(q, -2.385085735209865, 6);
  sqcRYGate(q, -1.6864809088410204, 7);
  sqcRZGate(q, 2.6795554701168136, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.041363478026831, 0);
  sqcRZGate(q, 2.6348036600425675, 0);
  sqcRYGate(q, 0.03970948541238872, 1);
  sqcRZGate(q, -0.01690234122038341, 1);
  sqcRYGate(q, -1.5712771894288595, 2);
  sqcRZGate(q, -2.9244094209296274, 2);
  sqcRYGate(q, 1.5703813682474592, 3);
  sqcRZGate(q, -0.06534326431430669, 3);
  sqcRYGate(q, -2.2528175251786395, 4);
  sqcRZGate(q, 0.4608992605532798, 4);
  sqcRYGate(q, 0.3792460950541763, 5);
  sqcRZGate(q, -3.086881788667812, 5);
  sqcRYGate(q, 2.8084739011465034, 6);
  sqcRZGate(q, 0.08253794628523964, 6);
  sqcRYGate(q, 1.5387587215707126, 7);
  sqcRZGate(q, 1.16040438228928, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.096142080870104, 0);
  sqcRZGate(q, 2.0562782984754255, 0);
  sqcRYGate(q, 1.3906501332517518, 1);
  sqcRZGate(q, -1.5835807197966447, 1);
  sqcRYGate(q, 0.0005231642766911904, 2);
  sqcRZGate(q, 2.773145723908069, 2);
  sqcRYGate(q, 3.1408786607553565, 3);
  sqcRZGate(q, -2.8326381346352645, 3);
  sqcRYGate(q, 2.127764685010499, 4);
  sqcRZGate(q, 0.6101476404250415, 4);
  sqcRYGate(q, -0.5267659021237027, 5);
  sqcRZGate(q, 2.8978061619504767, 5);
  sqcRYGate(q, 0.02097116330627856, 6);
  sqcRZGate(q, 1.3126381384964922, 6);
  sqcRYGate(q, 1.5084331223978005, 7);
  sqcRZGate(q, -0.6653746527872865, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.7858528225153218, 0);
  sqcRZGate(q, -0.49795522466731773, 0);
  sqcRYGate(q, -0.7260265952374967, 1);
  sqcRZGate(q, -1.3734256210469844, 1);
  sqcRYGate(q, -0.0008547337686195533, 2);
  sqcRZGate(q, -1.181526672331957, 2);
  sqcRYGate(q, -3.1402148944020305, 3);
  sqcRZGate(q, -0.9590962358860412, 3);
  sqcRYGate(q, -0.6211653002117901, 4);
  sqcRZGate(q, 0.0037227788156992043, 4);
  sqcRYGate(q, 2.2185850749881366, 5);
  sqcRZGate(q, 0.06796889459022688, 5);
  sqcRYGate(q, 2.84546706389424, 6);
  sqcRZGate(q, -1.4668679398765418, 6);
  sqcRYGate(q, 0.5576073823236946, 7);
  sqcRZGate(q, -0.18292516678936058, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.5223121619223647, 0);
  sqcRZGate(q, 0.3505748305150478, 0);
  sqcRYGate(q, -2.614809643192481, 1);
  sqcRZGate(q, 1.5405927268848347, 1);
  sqcRYGate(q, -1.567493452203614, 2);
  sqcRZGate(q, -1.6076289806349418, 2);
  sqcRYGate(q, 1.5711044559404563, 3);
  sqcRZGate(q, 1.565144674484309, 3);
  sqcRYGate(q, -0.38777534470400266, 4);
  sqcRZGate(q, -0.5956731581389149, 4);
  sqcRYGate(q, 0.218661780756256, 5);
  sqcRZGate(q, -1.5645875345433415, 5);
  sqcRYGate(q, 1.4310814991126337, 6);
  sqcRZGate(q, 1.8381669982784432, 6);
  sqcRYGate(q, -1.5748810729161864, 7);
  sqcRZGate(q, 2.9757492870654296, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7210188663444672, 0);
  sqcRZGate(q, -2.223156632759572, 0);
  sqcRYGate(q, -0.6273439202001211, 1);
  sqcRZGate(q, 1.6897201370146373, 1);
  sqcRYGate(q, -1.6389165936371042, 2);
  sqcRZGate(q, -2.077025053102171, 2);
  sqcRYGate(q, -1.5817869144415015, 3);
  sqcRZGate(q, -0.19965857773112017, 3);
  sqcRYGate(q, -1.4665568244548026, 4);
  sqcRZGate(q, -0.7602312146333498, 4);
  sqcRYGate(q, 1.9939846495127078, 5);
  sqcRZGate(q, -1.736987667077267, 5);
  sqcRYGate(q, 0.42849927211187655, 6);
  sqcRZGate(q, -0.5014093838705083, 6);
  sqcRYGate(q, 2.364062347299381, 7);
  sqcRZGate(q, -1.2968979095999325, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.185616212267918, 0);
  sqcRZGate(q, 0.21174919744784493, 0);
  sqcRYGate(q, 0.4215849842095718, 1);
  sqcRZGate(q, 0.589747365027358, 1);
  sqcRYGate(q, 3.1409703171392023, 2);
  sqcRZGate(q, 0.6961381849700112, 2);
  sqcRYGate(q, -0.0002021811223192062, 3);
  sqcRZGate(q, -2.7089005382928337, 3);
  sqcRYGate(q, -0.0006230320274463173, 4);
  sqcRZGate(q, 1.0630415826600144, 4);
  sqcRYGate(q, 0.009230998622773432, 5);
  sqcRZGate(q, -2.6056937286791144, 5);
  sqcRYGate(q, 0.5458211610628858, 6);
  sqcRZGate(q, -1.312907595727199, 6);
  sqcRYGate(q, 3.073281680707649, 7);
  sqcRZGate(q, -2.058592604332626, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.0446701819444875, 0);
  sqcRZGate(q, -2.7058077761687582, 0);
  sqcRYGate(q, -1.652140112190011, 1);
  sqcRZGate(q, 1.2964685200024366, 1);
  sqcRYGate(q, -0.002854945679267548, 2);
  sqcRZGate(q, 1.2032047352307063, 2);
  sqcRYGate(q, 3.133582950939372, 3);
  sqcRZGate(q, -3.1165961295510214, 3);
  sqcRYGate(q, 2.7562197355224063, 4);
  sqcRZGate(q, -3.0061928840050465, 4);
  sqcRYGate(q, 1.8637165849023196, 5);
  sqcRZGate(q, 3.1205538235055217, 5);
  sqcRYGate(q, -0.6058955878408068, 6);
  sqcRZGate(q, 2.2887695533254946, 6);
  sqcRYGate(q, -1.0000142217889714, 7);
  sqcRZGate(q, -2.829231087014876, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.234737165806208, 0);
  sqcRZGate(q, -2.918580339531076, 0);
  sqcRYGate(q, -1.1175488061896315, 1);
  sqcRZGate(q, 0.3438230704248122, 1);
  sqcRYGate(q, 3.14142421228664, 2);
  sqcRZGate(q, -2.9240351328623593, 2);
  sqcRYGate(q, 0.0006616542754244233, 3);
  sqcRZGate(q, 0.7421358270712028, 3);
  sqcRYGate(q, 3.140478342563236, 4);
  sqcRZGate(q, -0.33038381034203823, 4);
  sqcRYGate(q, 3.1333489806758035, 5);
  sqcRZGate(q, 1.8496646621485402, 5);
  sqcRYGate(q, 2.532701815256713, 6);
  sqcRZGate(q, 0.5865189005715994, 6);
  sqcRYGate(q, -0.1648725166596288, 7);
  sqcRZGate(q, -1.0428574653300702, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.8344342881305521, 0);
  sqcRZGate(q, -0.8751429373323614, 0);
  sqcRYGate(q, -0.8607651464575699, 1);
  sqcRZGate(q, -1.98448379991543, 1);
  sqcRYGate(q, 0.02203153972195961, 2);
  sqcRZGate(q, 1.3090899773600033, 2);
  sqcRYGate(q, -2.666298420068623, 3);
  sqcRZGate(q, -1.119424090350427, 3);
  sqcRYGate(q, 1.742942068914819, 4);
  sqcRZGate(q, -1.6255323868359097, 4);
  sqcRYGate(q, 1.9090170665536819, 5);
  sqcRZGate(q, 2.820771915849482, 5);
  sqcRYGate(q, -2.629949828046709, 6);
  sqcRZGate(q, -0.9184727763049702, 6);
  sqcRYGate(q, -1.9618182693327073, 7);
  sqcRZGate(q, 0.12741797628109808, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.008395070317317455, 0);
  sqcRZGate(q, -0.2953701035400633, 0);
  sqcRYGate(q, 2.410260561993356, 1);
  sqcRZGate(q, 2.63575496471528, 1);
  sqcRYGate(q, -3.138564293556494, 2);
  sqcRZGate(q, -0.303222543193185, 2);
  sqcRYGate(q, 3.141590993399102, 3);
  sqcRZGate(q, 0.44829305320300195, 3);
  sqcRYGate(q, 0.0013058029998607168, 4);
  sqcRZGate(q, 3.0794064910064707, 4);
  sqcRYGate(q, 3.14085129875797, 5);
  sqcRZGate(q, 2.7698242601157013, 5);
  sqcRYGate(q, 1.2662852646359186, 6);
  sqcRZGate(q, 1.3781838499992398, 6);
  sqcRYGate(q, 1.9136498786625493, 7);
  sqcRZGate(q, -0.9990972477999611, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.036247546005381714, 0);
  sqcRZGate(q, -3.0697200184922684, 0);
  sqcRYGate(q, -0.14021720990931819, 1);
  sqcRZGate(q, -0.16304611831781607, 1);
  sqcRYGate(q, -1.5691635668018995, 2);
  sqcRZGate(q, -2.88080684436926, 2);
  sqcRYGate(q, 1.5678136303109858, 3);
  sqcRZGate(q, -2.7637873193026006, 3);
  sqcRYGate(q, -0.4422480957114336, 4);
  sqcRZGate(q, 2.554826421154341, 4);
  sqcRYGate(q, -3.0892189345324343, 5);
  sqcRZGate(q, 3.1308733029362976, 5);
  sqcRYGate(q, -1.0079164233328246, 6);
  sqcRZGate(q, 1.6086390452247483, 6);
  sqcRYGate(q, 2.8016292603806856, 7);
  sqcRZGate(q, 2.007072278738991, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.020631686826848097, 0);
  sqcRZGate(q, -2.2790963817628933, 0);
  sqcRYGate(q, -1.8665258007412318, 1);
  sqcRZGate(q, 1.4723029583062084, 1);
  sqcRYGate(q, 3.113857474564266, 2);
  sqcRZGate(q, 0.43262484711713334, 2);
  sqcRYGate(q, 2.7529312713004095, 3);
  sqcRZGate(q, 0.5060444047726426, 3);
  sqcRYGate(q, -1.2970118396783041, 4);
  sqcRZGate(q, -1.8912858503851755, 4);
  sqcRYGate(q, -2.300443518889158, 5);
  sqcRZGate(q, -2.958380342705704, 5);
  sqcRYGate(q, 2.7042206917453604, 6);
  sqcRZGate(q, -2.7251035600558797, 6);
  sqcRYGate(q, -3.1206394064330207, 7);
  sqcRZGate(q, -1.0190739443657868, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.1160272020468196, 0);
  sqcRZGate(q, 2.2824726136536344, 0);
  sqcRYGate(q, -2.9696129657462254, 1);
  sqcRZGate(q, -2.3088221170965224, 1);
  sqcRYGate(q, -3.141044865805586, 2);
  sqcRZGate(q, 0.35649440917305064, 2);
  sqcRYGate(q, 3.139491831650785, 3);
  sqcRZGate(q, 2.114626282390261, 3);
  sqcRYGate(q, -0.4908384382368805, 4);
  sqcRZGate(q, 1.3905261250800705, 4);
  sqcRYGate(q, 2.7384578748455053, 5);
  sqcRZGate(q, -1.3015058213252848, 5);
  sqcRYGate(q, 0.3864940888223655, 6);
  sqcRZGate(q, 2.9158074276523425, 6);
  sqcRYGate(q, 3.0054346699636363, 7);
  sqcRZGate(q, 1.838098046401761, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5580017787875688, 0);
  sqcRZGate(q, 1.6118555801235586, 0);
  sqcRYGate(q, 0.4638769237184137, 1);
  sqcRZGate(q, 2.2913707282397064, 1);
  sqcRYGate(q, 1.9950624210378134, 2);
  sqcRZGate(q, -2.663573770627271, 2);
  sqcRYGate(q, 1.9570544855326004, 3);
  sqcRZGate(q, -1.0531778970576076, 3);
  sqcRYGate(q, 2.8260075850117388, 4);
  sqcRZGate(q, -0.8903948341780634, 4);
  sqcRYGate(q, -2.540332693349958, 5);
  sqcRZGate(q, -0.6187347263955914, 5);
  sqcRYGate(q, 1.8036181750193452, 6);
  sqcRZGate(q, 0.849453344296436, 6);
  sqcRYGate(q, 0.26644566433570294, 7);
  sqcRZGate(q, -3.136251188007586, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.7422153339355646, 0);
  sqcRZGate(q, -0.822297595980281, 0);
  sqcRYGate(q, 0.015803618388709733, 1);
  sqcRZGate(q, -0.13727099610641977, 1);
  sqcRYGate(q, 3.141294625906403, 2);
  sqcRZGate(q, -1.1390113125644805, 2);
  sqcRYGate(q, 3.140531709915107, 3);
  sqcRZGate(q, -1.1062248887859942, 3);
  sqcRYGate(q, -0.00014036445222355122, 4);
  sqcRZGate(q, 2.2173908270556666, 4);
  sqcRYGate(q, -0.0010009834462092468, 5);
  sqcRZGate(q, -1.680609467972145, 5);
  sqcRYGate(q, -2.5518334216106418, 6);
  sqcRZGate(q, 1.7806524688740104, 6);
  sqcRYGate(q, 2.9944376421124126, 7);
  sqcRZGate(q, -1.1875691144954714, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.08601863724980344, 0);
  sqcRZGate(q, 2.391998209362481, 0);
  sqcRYGate(q, 1.728535495376084, 1);
  sqcRZGate(q, -3.1340467766423066, 1);
  sqcRYGate(q, 1.5255914313034724, 2);
  sqcRZGate(q, 1.4615154186831543, 2);
  sqcRYGate(q, -1.7784760636797394, 3);
  sqcRZGate(q, 1.3845829545074047, 3);
  sqcRYGate(q, 0.45208363705558435, 4);
  sqcRZGate(q, -0.3884196410212958, 4);
  sqcRYGate(q, 0.7600037127316535, 5);
  sqcRZGate(q, -2.073157642833386, 5);
  sqcRYGate(q, -0.7669587597528543, 6);
  sqcRZGate(q, -1.3687472207896492, 6);
  sqcRYGate(q, -1.8201628405710613, 7);
  sqcRZGate(q, 2.845888541486635, 7);

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
