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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -1.5415313293644455, 0);
  sqcRZGate(q, -1.0121840750350148, 0);
  sqcRYGate(q, 3.07135892077438, 1);
  sqcRZGate(q, 2.956971170996029, 1);
  sqcRYGate(q, 1.3919548684079626, 2);
  sqcRZGate(q, 0.10824311010612318, 2);
  sqcRYGate(q, -1.2245958360171503, 3);
  sqcRZGate(q, -0.4921825592095724, 3);
  sqcRYGate(q, -3.140595937641433, 4);
  sqcRZGate(q, -1.559030483242127, 4);
  sqcRYGate(q, -0.0006085507691988568, 5);
  sqcRZGate(q, 2.921269829192879, 5);
  sqcRYGate(q, -0.8373436569026981, 6);
  sqcRZGate(q, 1.2196395789525702, 6);
  sqcRYGate(q, -2.227109579835993, 7);
  sqcRZGate(q, 0.9681321530289079, 7);
  sqcRYGate(q, -0.7519218405338282, 8);
  sqcRZGate(q, 1.0109962059471511, 8);
  sqcRYGate(q, -0.00020045398567832668, 9);
  sqcRZGate(q, -1.5276663109806048, 9);
  sqcRYGate(q, 0.00012298743014316216, 10);
  sqcRZGate(q, 2.187756937693006, 10);
  sqcRYGate(q, -2.394327856244118, 11);
  sqcRZGate(q, -1.591796158010273, 11);
  sqcRYGate(q, -3.1331040763399436, 12);
  sqcRZGate(q, 0.5973963801528763, 12);
  sqcRYGate(q, 0.9136961424937935, 13);
  sqcRZGate(q, -0.04332466083505787, 13);
  sqcRYGate(q, -0.00025692590155925284, 14);
  sqcRZGate(q, 2.5494822661982064, 14);
  sqcRYGate(q, -1.373308354737592, 15);
  sqcRZGate(q, 1.5663264456563524, 15);
  sqcRYGate(q, 1.565784459281521, 16);
  sqcRZGate(q, 1.5704558757791318, 16);
  sqcRYGate(q, 1.5759438582152243, 17);
  sqcRZGate(q, 1.0383305205061302, 17);
  sqcRYGate(q, 3.0952826819982513, 18);
  sqcRZGate(q, -0.33909983074309297, 18);
  sqcRYGate(q, -1.648789948543353, 19);
  sqcRZGate(q, -0.04282623329260283, 19);
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
  sqcRYGate(q, 3.1198137882347043, 0);
  sqcRZGate(q, -2.6291968350171073, 0);
  sqcRYGate(q, 1.5729491716006319, 1);
  sqcRZGate(q, 1.558271368400752, 1);
  sqcRYGate(q, 1.5755579196040967, 2);
  sqcRZGate(q, -1.51943699021177, 2);
  sqcRYGate(q, 1.540788581218448, 3);
  sqcRZGate(q, -0.008357592289906516, 3);
  sqcRYGate(q, -3.140826637469003, 4);
  sqcRZGate(q, 1.8515441418202458, 4);
  sqcRYGate(q, -3.1406956382867377, 5);
  sqcRZGate(q, -1.3065520549111005, 5);
  sqcRYGate(q, 2.1546526383394498, 6);
  sqcRZGate(q, -1.7162543145368456, 6);
  sqcRYGate(q, 1.331864046262158, 7);
  sqcRZGate(q, -2.152859834002431, 7);
  sqcRYGate(q, -1.5828494988198136, 8);
  sqcRZGate(q, 1.1288941218657351, 8);
  sqcRYGate(q, 3.141481559540301, 9);
  sqcRZGate(q, 2.1213059825774363, 9);
  sqcRYGate(q, -3.1414486472688523, 10);
  sqcRZGate(q, -2.1942769334785766, 10);
  sqcRYGate(q, 1.5831785367465516, 11);
  sqcRZGate(q, -2.7124548338842516, 11);
  sqcRYGate(q, 1.5681565699472375, 12);
  sqcRZGate(q, 2.260832571778741, 12);
  sqcRYGate(q, -1.4638832279978307, 13);
  sqcRZGate(q, 0.9918522227728497, 13);
  sqcRYGate(q, 0.0027078671339602067, 14);
  sqcRZGate(q, -1.523924215756061, 14);
  sqcRYGate(q, -0.15453836897588058, 15);
  sqcRZGate(q, -1.5598951754077683, 15);
  sqcRYGate(q, 1.448164501111721, 16);
  sqcRZGate(q, -0.021366048465474154, 16);
  sqcRYGate(q, -0.9963442625961253, 17);
  sqcRZGate(q, 2.661198392880319, 17);
  sqcRYGate(q, 1.7521664790334572, 18);
  sqcRZGate(q, -2.005992821778834, 18);
  sqcRYGate(q, 1.49518119625702, 19);
  sqcRZGate(q, 0.7713656894515966, 19);
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
  sqcRYGate(q, -2.6188914298761627, 0);
  sqcRZGate(q, -0.010686598020627434, 0);
  sqcRYGate(q, -1.5852806732726377, 1);
  sqcRZGate(q, 2.6005825672434377, 1);
  sqcRYGate(q, 0.18850082615404226, 2);
  sqcRZGate(q, 2.9396750733579737, 2);
  sqcRYGate(q, 1.3134747224364436, 3);
  sqcRZGate(q, 2.9965640032697487, 3);
  sqcRYGate(q, 1.5695220016710885, 4);
  sqcRZGate(q, -3.023847694454856, 4);
  sqcRYGate(q, 1.6937995595660746, 5);
  sqcRZGate(q, -0.538496066287955, 5);
  sqcRYGate(q, -1.449208181832487, 6);
  sqcRZGate(q, -1.7829036676890866, 6);
  sqcRYGate(q, 1.4441719201876007, 7);
  sqcRZGate(q, 1.7722009273837203, 7);
  sqcRYGate(q, -2.4598154354095816, 8);
  sqcRZGate(q, -0.0070417715979278475, 8);
  sqcRYGate(q, -3.1409636731451096, 9);
  sqcRZGate(q, 0.22387666453470928, 9);
  sqcRYGate(q, 2.6215276468100828, 10);
  sqcRZGate(q, 0.38969666605227515, 10);
  sqcRYGate(q, 1.4781078224824897, 11);
  sqcRZGate(q, 1.2677340414339575, 11);
  sqcRYGate(q, -0.0011265534878095451, 12);
  sqcRZGate(q, -0.6943644589430076, 12);
  sqcRYGate(q, 3.140879361379899, 13);
  sqcRZGate(q, -0.6181073288883754, 13);
  sqcRYGate(q, -1.2054365077217657, 14);
  sqcRZGate(q, -1.4019242664164135, 14);
  sqcRYGate(q, 1.8222088269286392, 15);
  sqcRZGate(q, 1.9435619935670374, 15);
  sqcRYGate(q, 3.127263782055828, 16);
  sqcRZGate(q, 1.7899563891409542, 16);
  sqcRYGate(q, 1.5962053037628074, 17);
  sqcRZGate(q, -3.1319127872485377, 17);
  sqcRYGate(q, -0.0006897257163951381, 18);
  sqcRZGate(q, 0.5819693811268135, 18);
  sqcRYGate(q, -0.0032437523114330342, 19);
  sqcRZGate(q, -0.42187064832884946, 19);
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
  sqcRYGate(q, 1.5015688324326186, 0);
  sqcRZGate(q, 0.6643232665988658, 0);
  sqcRYGate(q, 2.2739446305172786, 1);
  sqcRZGate(q, -1.9126960471259578, 1);
  sqcRYGate(q, 1.2660863396895206, 2);
  sqcRZGate(q, -2.9267124888667224, 2);
  sqcRYGate(q, 0.0032515787779328065, 3);
  sqcRZGate(q, -0.7982023193875899, 3);
  sqcRYGate(q, -3.1387558660506474, 4);
  sqcRZGate(q, 0.12562501389145006, 4);
  sqcRYGate(q, 3.125008361756381, 5);
  sqcRZGate(q, 0.8282452898720767, 5);
  sqcRYGate(q, -1.5705306339231104, 6);
  sqcRZGate(q, -2.992476627817465, 6);
  sqcRYGate(q, 0.6136520480536793, 7);
  sqcRZGate(q, -2.4761494790278196, 7);
  sqcRYGate(q, 0.0016783534957712616, 8);
  sqcRZGate(q, -2.207026111116419, 8);
  sqcRYGate(q, 0.0011436100923836179, 9);
  sqcRZGate(q, 0.016865057362282165, 9);
  sqcRYGate(q, 3.141488840003354, 10);
  sqcRZGate(q, 0.37460684813790573, 10);
  sqcRYGate(q, 3.089392817086332, 11);
  sqcRZGate(q, -1.7529786229263244, 11);
  sqcRYGate(q, 1.7462395872340775, 12);
  sqcRZGate(q, 2.900076815270609, 12);
  sqcRYGate(q, 1.6401805623113197, 13);
  sqcRZGate(q, 1.697067556618446, 13);
  sqcRYGate(q, 0.30639231948242956, 14);
  sqcRZGate(q, 1.3391749201555916, 14);
  sqcRYGate(q, 3.14076122371851, 15);
  sqcRZGate(q, 1.930879878361889, 15);
  sqcRYGate(q, 0.0007970599476072593, 16);
  sqcRZGate(q, 1.333501527536781, 16);
  sqcRYGate(q, -2.8978050029185924, 17);
  sqcRZGate(q, -3.1224763919593035, 17);
  sqcRYGate(q, -1.6305373659360525, 18);
  sqcRZGate(q, 0.19359629621188146, 18);
  sqcRYGate(q, 1.5869764045869204, 19);
  sqcRZGate(q, -0.2310177766379035, 19);
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
  sqcRYGate(q, 0.10969852286194502, 0);
  sqcRZGate(q, 2.752114676150763, 0);
  sqcRYGate(q, 3.058371153695463, 1);
  sqcRZGate(q, 2.84666331779638, 1);
  sqcRYGate(q, 1.0940398480972862, 2);
  sqcRZGate(q, 2.2477815414216176, 2);
  sqcRYGate(q, 0.010974618586825358, 3);
  sqcRZGate(q, -0.7570427368198903, 3);
  sqcRYGate(q, -2.7947247027392415, 4);
  sqcRZGate(q, -1.7494381241717, 4);
  sqcRYGate(q, 0.6965208523664321, 5);
  sqcRZGate(q, 0.2728918856901178, 5);
  sqcRYGate(q, -0.03026824627727051, 6);
  sqcRZGate(q, 1.4247453899738742, 6);
  sqcRYGate(q, -0.0035556630174378157, 7);
  sqcRZGate(q, 0.1674260086698771, 7);
  sqcRYGate(q, 1.5728977053359134, 8);
  sqcRZGate(q, -1.3314251312063716, 8);
  sqcRYGate(q, 0.0006011254994024995, 9);
  sqcRZGate(q, 1.4644570908278522, 9);
  sqcRYGate(q, -1.4277615091048548, 10);
  sqcRZGate(q, 1.9369992984069078, 10);
  sqcRYGate(q, -0.7507581263418691, 11);
  sqcRZGate(q, 2.975883105621367, 11);
  sqcRYGate(q, -3.1399240869407747, 12);
  sqcRZGate(q, -0.2386553869429466, 12);
  sqcRYGate(q, 0.0008555218734828493, 13);
  sqcRZGate(q, 1.4244034978676645, 13);
  sqcRYGate(q, 1.482849074714566, 14);
  sqcRZGate(q, -0.4184433349465064, 14);
  sqcRYGate(q, -2.659286939355409, 15);
  sqcRZGate(q, 1.8698916065362026, 15);
  sqcRYGate(q, 1.5784562899265948, 16);
  sqcRZGate(q, -1.588406932254259, 16);
  sqcRYGate(q, 1.489559653833627, 17);
  sqcRZGate(q, -1.3938253725296574, 17);
  sqcRYGate(q, -1.5703383829572832, 18);
  sqcRZGate(q, 3.132544998479861, 18);
  sqcRYGate(q, -3.024178654332063, 19);
  sqcRZGate(q, -2.5840891375171293, 19);
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
  sqcRYGate(q, -3.0044323873943464, 0);
  sqcRZGate(q, -0.8436562453983107, 0);
  sqcRYGate(q, -2.8022359891220066, 1);
  sqcRZGate(q, 2.387988032249664, 1);
  sqcRYGate(q, -1.1721242244145975, 2);
  sqcRZGate(q, -2.8554057114126414, 2);
  sqcRYGate(q, 3.1415678062433603, 3);
  sqcRZGate(q, -3.0917070756464153, 3);
  sqcRYGate(q, -3.131486055573277, 4);
  sqcRZGate(q, 1.3924049997398265, 4);
  sqcRYGate(q, 3.1282882084514707, 5);
  sqcRZGate(q, -3.134831906238606, 5);
  sqcRYGate(q, -1.5675083167552972, 6);
  sqcRZGate(q, 1.8680370809579523, 6);
  sqcRYGate(q, 1.925116945107601, 7);
  sqcRZGate(q, -1.588329367876061, 7);
  sqcRYGate(q, -0.00024736145310552324, 8);
  sqcRZGate(q, 1.3346114140196326, 8);
  sqcRYGate(q, 0.00013602963298176007, 9);
  sqcRZGate(q, -0.22185113190106254, 9);
  sqcRYGate(q, -3.140815919273789, 10);
  sqcRZGate(q, 1.7812396536170536, 10);
  sqcRYGate(q, -1.5710854683736004, 11);
  sqcRZGate(q, -0.0038909712954359184, 11);
  sqcRYGate(q, -1.565616960467806, 12);
  sqcRZGate(q, 3.1353633272904347, 12);
  sqcRYGate(q, -1.4505878721954544, 13);
  sqcRZGate(q, -0.29349263093030786, 13);
  sqcRYGate(q, -1.581250653548727, 14);
  sqcRZGate(q, -0.9234552341000947, 14);
  sqcRYGate(q, -3.140501448948647, 15);
  sqcRZGate(q, -0.46158934672557184, 15);
  sqcRYGate(q, -0.36613425661938565, 16);
  sqcRZGate(q, -1.5533564469863506, 16);
  sqcRYGate(q, 0.002934176641003988, 17);
  sqcRZGate(q, 0.564753187642544, 17);
  sqcRYGate(q, -0.4529447835144626, 18);
  sqcRZGate(q, 2.150744627928551, 18);
  sqcRYGate(q, -1.6515455673963164, 19);
  sqcRZGate(q, -1.6524536382472712, 19);
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
  sqcRYGate(q, -1.6327133205120612, 0);
  sqcRZGate(q, 3.1278209923986293, 0);
  sqcRYGate(q, -1.1692431840595832, 1);
  sqcRZGate(q, -0.025445969701617964, 1);
  sqcRYGate(q, -1.7743679160638055, 2);
  sqcRZGate(q, -0.4774415150995077, 2);
  sqcRYGate(q, 1.578040486013153, 3);
  sqcRZGate(q, -2.346758821422353, 3);
  sqcRYGate(q, -1.5707028768415467, 4);
  sqcRZGate(q, 3.008787328000165, 4);
  sqcRYGate(q, 2.8798279870722117, 5);
  sqcRZGate(q, -0.008225383591210722, 5);
  sqcRYGate(q, -0.0015898511162138111, 6);
  sqcRZGate(q, -0.28641865192556826, 6);
  sqcRYGate(q, 3.1023828604991746, 7);
  sqcRZGate(q, 2.2275163610872224, 7);
  sqcRYGate(q, -1.5875923553931488, 8);
  sqcRZGate(q, -1.2370379019978457, 8);
  sqcRYGate(q, 2.21287877990356, 9);
  sqcRZGate(q, 0.2736898841667994, 9);
  sqcRYGate(q, 3.1412477108232535, 10);
  sqcRZGate(q, 3.0049843747422162, 10);
  sqcRYGate(q, 1.5413279258241097, 11);
  sqcRZGate(q, 1.5654646037364648, 11);
  sqcRYGate(q, -3.1333100617184493, 12);
  sqcRZGate(q, 1.5646781413151125, 12);
  sqcRYGate(q, 0.0005772066397407015, 13);
  sqcRZGate(q, -1.2383759476096177, 13);
  sqcRYGate(q, 0.9165627305046877, 14);
  sqcRZGate(q, 0.21328509876586385, 14);
  sqcRYGate(q, 0.001321170166322716, 15);
  sqcRZGate(q, -0.8844077190884497, 15);
  sqcRYGate(q, 0.34565963822105183, 16);
  sqcRZGate(q, 1.5448054792450545, 16);
  sqcRYGate(q, -3.140252739205853, 17);
  sqcRZGate(q, 0.43457544912864615, 17);
  sqcRYGate(q, -3.1248449489299364, 18);
  sqcRZGate(q, 0.5766745955425434, 18);
  sqcRYGate(q, -1.5892989603497563, 19);
  sqcRZGate(q, 1.6734724243826646, 19);
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
  sqcRYGate(q, -1.6027234804207113, 0);
  sqcRZGate(q, 3.1379082966495035, 0);
  sqcRYGate(q, -1.5455819382751876, 1);
  sqcRZGate(q, -2.3491588667140118, 1);
  sqcRYGate(q, -3.133879027757629, 2);
  sqcRZGate(q, 3.0147343322364013, 2);
  sqcRYGate(q, 3.1375503982165265, 3);
  sqcRZGate(q, 0.7944289596793661, 3);
  sqcRYGate(q, 3.1401772639400125, 4);
  sqcRZGate(q, 2.2767298423579385, 4);
  sqcRYGate(q, 1.657920125101907, 5);
  sqcRZGate(q, 1.9701441628233838, 5);
  sqcRYGate(q, -1.3958661734605733, 6);
  sqcRZGate(q, -2.502560407341144, 6);
  sqcRYGate(q, 3.141361035490972, 7);
  sqcRZGate(q, -3.090176355579311, 7);
  sqcRYGate(q, -2.7032906547042046e-05, 8);
  sqcRZGate(q, -0.3305617980231433, 8);
  sqcRYGate(q, 0.00012250418678494412, 9);
  sqcRZGate(q, -0.29862708282611183, 9);
  sqcRYGate(q, 0.0003710185254650611, 10);
  sqcRZGate(q, -1.6701568720360096, 10);
  sqcRYGate(q, 0.20293453510207993, 11);
  sqcRZGate(q, -3.137765016851917, 11);
  sqcRYGate(q, -1.572225057809665, 12);
  sqcRZGate(q, -0.7553340923728685, 12);
  sqcRYGate(q, 1.4748634316508955, 13);
  sqcRZGate(q, 2.3677601495726512, 13);
  sqcRYGate(q, 1.5573509889548756, 14);
  sqcRZGate(q, -2.4714144803846465, 14);
  sqcRYGate(q, 3.1325355564912454, 15);
  sqcRZGate(q, 0.5975756019536389, 15);
  sqcRYGate(q, 0.2404598583120947, 16);
  sqcRZGate(q, -3.1192092517859176, 16);
  sqcRYGate(q, -0.0003529489586689943, 17);
  sqcRZGate(q, 0.9477299857053891, 17);
  sqcRYGate(q, -2.974817531305903, 18);
  sqcRZGate(q, -3.140349675729723, 18);
  sqcRYGate(q, -1.506347213474831, 19);
  sqcRZGate(q, 2.4398912075471513, 19);
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
  sqcRYGate(q, 1.587896457773309, 0);
  sqcRZGate(q, 0.2277032557943065, 0);
  sqcRYGate(q, 3.0820248841507705, 1);
  sqcRZGate(q, -0.3212711460740788, 1);
  sqcRYGate(q, -3.129730573625096, 2);
  sqcRZGate(q, -0.7771669073454461, 2);
  sqcRYGate(q, 1.634866420765888, 3);
  sqcRZGate(q, -0.41618525028741343, 3);
  sqcRYGate(q, 0.000655964806889564, 4);
  sqcRZGate(q, -0.5168821808930868, 4);
  sqcRYGate(q, 3.127542573298814, 5);
  sqcRZGate(q, -3.134039515154034, 5);
  sqcRYGate(q, 3.1402920169596205, 6);
  sqcRZGate(q, -0.6317464887084132, 6);
  sqcRYGate(q, -0.0045189411371446865, 7);
  sqcRZGate(q, -2.549891958630396, 7);
  sqcRYGate(q, 1.5694103414031861, 8);
  sqcRZGate(q, 1.90147579227252, 8);
  sqcRYGate(q, -2.4818499187104597, 9);
  sqcRZGate(q, -0.42167154253004746, 9);
  sqcRYGate(q, 3.141146493214831, 10);
  sqcRZGate(q, -1.532487153336704, 10);
  sqcRYGate(q, 1.6582564124919061, 11);
  sqcRZGate(q, -0.3846723826914227, 11);
  sqcRYGate(q, 4.152641690069459e-05, 12);
  sqcRZGate(q, -2.0699700174231195, 12);
  sqcRYGate(q, 0.00840178583635609, 13);
  sqcRZGate(q, -0.38829759042533846, 13);
  sqcRYGate(q, -3.1402965399759015, 14);
  sqcRZGate(q, 0.990377529350107, 14);
  sqcRYGate(q, 0.0011727383255308865, 15);
  sqcRZGate(q, 2.0507842289988516, 15);
  sqcRYGate(q, -1.572009278451056, 16);
  sqcRZGate(q, -1.24321430208507, 16);
  sqcRYGate(q, -0.007696804486470064, 17);
  sqcRZGate(q, 0.5150339828347636, 17);
  sqcRYGate(q, -1.5712309243365454, 18);
  sqcRZGate(q, -1.259141679941262, 18);
  sqcRYGate(q, -0.9055410777154567, 19);
  sqcRZGate(q, 2.5888007578385404, 19);

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
