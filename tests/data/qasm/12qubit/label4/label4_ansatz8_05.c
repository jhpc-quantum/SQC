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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -1.958935497425126, 0);
  sqcRYGate(q, 2.007094172589643, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6194501171348195, 0);
  sqcRYGate(q, 2.8561132838125856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.806314199015235, 2);
  sqcRYGate(q, -3.1141040290189093, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.430297891668156, 2);
  sqcRYGate(q, 1.2221291689004223, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.416049354464738, 4);
  sqcRYGate(q, 1.4129882617339637, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5653160214852166, 4);
  sqcRYGate(q, -2.2545540469236567, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.945556946220413, 6);
  sqcRYGate(q, -1.0752879569573144, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4851133116672904, 6);
  sqcRYGate(q, 1.6155418715155014, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.033624295565189, 8);
  sqcRYGate(q, -3.030970501304999, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.172019925269439, 8);
  sqcRYGate(q, 1.3544411847574678, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.1971169211559685, 10);
  sqcRYGate(q, -2.9813486965274087, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.5434929050576942, 10);
  sqcRYGate(q, 2.4665771908978775, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.0340684865935428, 0);
  sqcRYGate(q, 3.1365329621764526, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.05966358395886129, 0);
  sqcRYGate(q, -3.082200696518764, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7761999421541589, 2);
  sqcRYGate(q, 2.382398371968618, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.093441337079521, 2);
  sqcRYGate(q, -1.217748510527647, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.880067870917351, 4);
  sqcRYGate(q, 2.0394923899054387, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.716817455051464, 4);
  sqcRYGate(q, -2.859952396537733, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.0285507643672185, 6);
  sqcRYGate(q, 1.583065894846846, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.0429820025417085, 6);
  sqcRYGate(q, -3.002432740894002, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.8486404270326258, 8);
  sqcRYGate(q, 0.916405795009041, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.22155625898272024, 8);
  sqcRYGate(q, -0.18540115117566006, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.7626120371619356, 1);
  sqcRYGate(q, -0.5758453928590167, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9850919321044527, 1);
  sqcRYGate(q, 2.122342337170918, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6261579383837315, 3);
  sqcRYGate(q, -0.48955014144060455, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.0208110043608416, 3);
  sqcRYGate(q, 3.065162898512188, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.5523372502531085, 5);
  sqcRYGate(q, -1.7775936363996352, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.5083760908518085, 5);
  sqcRYGate(q, 0.3970589342221582, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.8320265576802609, 7);
  sqcRYGate(q, 0.5673368914118126, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.0225486615434143, 7);
  sqcRYGate(q, 0.08977452442795987, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.028553650166647, 9);
  sqcRYGate(q, -1.2742436688540406, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.8572214676758714, 9);
  sqcRYGate(q, 0.1178617939783119, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.6503133237052929, 0);
  sqcRYGate(q, -1.6951020828476573, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6397087849876133, 0);
  sqcRYGate(q, -1.5604688283823684, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5660202134721153, 2);
  sqcRYGate(q, -2.790636959834105, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7153421843245438, 2);
  sqcRYGate(q, -1.6421918236762227, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.691769619455988, 4);
  sqcRYGate(q, -2.436630879823657, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5746916140017593, 4);
  sqcRYGate(q, 0.8722131293232525, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0741813429118237, 6);
  sqcRYGate(q, -0.8723323908330421, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.134787273119607, 6);
  sqcRYGate(q, 0.4744317378174756, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.902870374428432, 8);
  sqcRYGate(q, -0.49587925650233644, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.600115753362508, 8);
  sqcRYGate(q, 1.8334411323625037, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.7867292893424235, 10);
  sqcRYGate(q, -2.1828116592507776, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.2814898952137135, 10);
  sqcRYGate(q, -2.5054913077022904, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.57276363982899, 0);
  sqcRYGate(q, -1.928042488798922, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.0006846323595484094, 0);
  sqcRYGate(q, 0.016799046629574654, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9310394644561004, 2);
  sqcRYGate(q, -2.804297249470305, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.9381471555695855, 2);
  sqcRYGate(q, -2.692352510761967, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.785389111959256, 4);
  sqcRYGate(q, 2.576645077207561, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.6183813288057807, 4);
  sqcRYGate(q, 2.6303775261539393, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.1107818889405583, 6);
  sqcRYGate(q, -2.130609772670722, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.012938132806537472, 6);
  sqcRYGate(q, 0.05337397724301152, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.8559723262117864, 8);
  sqcRYGate(q, -2.3360753863158945, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.5885106796976842, 8);
  sqcRYGate(q, 0.07573143633233759, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.4847895194873195, 1);
  sqcRYGate(q, -1.1877872080906098, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.003125034620657, 1);
  sqcRYGate(q, 1.70251745747424, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.719290949110246, 3);
  sqcRYGate(q, -0.5827815286674944, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.1153269672773742, 3);
  sqcRYGate(q, 3.090899042525817, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.355980821721967, 5);
  sqcRYGate(q, -3.086274676051336, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.9208839895595995, 5);
  sqcRYGate(q, 2.400415867243375, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.8513897221246944, 7);
  sqcRYGate(q, -2.9622345793788445, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.1038582611660286, 7);
  sqcRYGate(q, 2.89788949320403, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.30812063773155796, 9);
  sqcRYGate(q, -0.9753433556208683, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.35789847431701016, 9);
  sqcRYGate(q, 0.012048458778605388, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.8751311794165857, 0);
  sqcRYGate(q, 2.092517683377915, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.01698456674796405, 0);
  sqcRYGate(q, -1.529602028244195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8598066244681322, 2);
  sqcRYGate(q, -2.7165052222987716, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.15509042560370725, 2);
  sqcRYGate(q, -3.1214845718098623, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.64957401537606, 4);
  sqcRYGate(q, 2.103758369275653, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7465801983622924, 4);
  sqcRYGate(q, 0.14373685846769213, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.737445567932199, 6);
  sqcRYGate(q, 1.8686826150350178, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.25439319677625294, 6);
  sqcRYGate(q, 2.9783982216594924, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.23263186638188849, 8);
  sqcRYGate(q, 0.9419035769573069, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.22786962334704164, 8);
  sqcRYGate(q, 3.0974980622473294, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.7256313585164076, 10);
  sqcRYGate(q, 1.9820490938782687, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.2439367809612429, 10);
  sqcRYGate(q, 0.7860961421525682, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.7012085794415178, 0);
  sqcRYGate(q, 1.9703803300729872, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.0007013060439270962, 0);
  sqcRYGate(q, 3.139698289573721, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.58513926327729, 2);
  sqcRYGate(q, 3.131736678106823, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.6002715069131277, 2);
  sqcRYGate(q, -1.2191635540991639, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.4520145358572676, 4);
  sqcRYGate(q, -1.7273164311041462, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.023632975635297367, 4);
  sqcRYGate(q, 1.11514963585242, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.2541919930216399, 6);
  sqcRYGate(q, 1.6599538731711343, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.119792653193332, 6);
  sqcRYGate(q, 0.024011580843469403, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.121123030369049, 8);
  sqcRYGate(q, -1.2139373637260595, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.3144730375508331, 8);
  sqcRYGate(q, 1.221846230290513, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.0856522483604363, 1);
  sqcRYGate(q, -1.3872363889812949, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1578237953033073, 1);
  sqcRYGate(q, -2.008299956273702, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7335471638636175, 3);
  sqcRYGate(q, 3.0993714346751573, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.02842885910779369, 3);
  sqcRYGate(q, 2.565289857723801, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.987415162455866, 5);
  sqcRYGate(q, 0.5402861380443782, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.41007689700508454, 5);
  sqcRYGate(q, -2.8761049918249317, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.2291257258825894, 7);
  sqcRYGate(q, -0.025691014047570057, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.007502020866095, 7);
  sqcRYGate(q, -0.236932840561868, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.0469085860067429, 9);
  sqcRYGate(q, 2.583248054728085, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.2340682957039215, 9);
  sqcRYGate(q, -0.29222618097813235, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.7614627251852522, 0);
  sqcRYGate(q, 0.2648867339249996, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0019361848729631808, 0);
  sqcRYGate(q, 2.5831252811811716, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8365087721596765, 2);
  sqcRYGate(q, -1.9404112439263594, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6627148685334805, 2);
  sqcRYGate(q, -1.426526099522381, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3563755353779632, 4);
  sqcRYGate(q, 2.6078098778915635, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0899581763191941, 4);
  sqcRYGate(q, -2.7956812938072977, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8818236412810125, 6);
  sqcRYGate(q, -0.20915632240911083, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8254259772010102, 6);
  sqcRYGate(q, 1.4062578837120183, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7863517291335254, 8);
  sqcRYGate(q, 2.5511637287516846, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.2623375417455742, 8);
  sqcRYGate(q, 1.38668405116598, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.3235916883168874, 10);
  sqcRYGate(q, -1.0242180291913972, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.944240562905697, 10);
  sqcRYGate(q, -1.4334545641169671, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.4281760394163193, 0);
  sqcRYGate(q, 1.3962197746019018, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.005771299809131491, 0);
  sqcRYGate(q, -3.1400972087286823, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4525989643374877, 2);
  sqcRYGate(q, 0.393822766617791, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.022120411039459, 2);
  sqcRYGate(q, -2.7786075241344554, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.9551525852440939, 4);
  sqcRYGate(q, -1.10876603629585, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.0136108756007531, 4);
  sqcRYGate(q, -1.9208354840895574, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.9703129382370217, 6);
  sqcRYGate(q, -1.4088535361581949, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.1283569601278383, 6);
  sqcRYGate(q, 0.001516989099666688, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.213076615851531, 8);
  sqcRYGate(q, 0.07109392923930644, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.7992433107292678, 8);
  sqcRYGate(q, -0.7310572295640597, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.2000424848678235, 1);
  sqcRYGate(q, 1.4079141716601864, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5706303122833993, 1);
  sqcRYGate(q, 0.15051003553600975, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6550887375842382, 3);
  sqcRYGate(q, -2.5236421706493117, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.131574787159376, 3);
  sqcRYGate(q, -3.1357396122975287, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.5095620484430894, 5);
  sqcRYGate(q, 2.254897426249609, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.9633135227927216, 5);
  sqcRYGate(q, 0.8356789341276505, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.389783378811857, 7);
  sqcRYGate(q, 0.34148875041557636, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.01030338617707649, 7);
  sqcRYGate(q, -3.136123253089154, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.8594574935479464, 9);
  sqcRYGate(q, -2.1420280120481303, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.2556198486348864, 9);
  sqcRYGate(q, 1.0588736142476014, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.8947098986666782, 0);
  sqcRYGate(q, 0.8691710885062589, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.747442548475215, 0);
  sqcRYGate(q, -0.0188455542124899, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6055653847843692, 2);
  sqcRYGate(q, -0.4261899182805894, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5058170473727577, 2);
  sqcRYGate(q, 2.0626430916129888, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1217627711831766, 4);
  sqcRYGate(q, -0.28064613025109786, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8805887483047143, 4);
  sqcRYGate(q, -0.5607367305419012, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.061273293039136, 6);
  sqcRYGate(q, 2.977021260026272, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6680555364975629, 6);
  sqcRYGate(q, -1.0513752218696888, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.59407805746937, 8);
  sqcRYGate(q, -0.5325305453806086, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.14539307524008738, 8);
  sqcRYGate(q, -1.4089174905504287, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.0314984359036123, 10);
  sqcRYGate(q, 0.511685791492994, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.7453576007216284, 10);
  sqcRYGate(q, 0.8396500235724556, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5825153595511772, 0);
  sqcRYGate(q, -3.139786137605775, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.006081698804785346, 0);
  sqcRYGate(q, -3.1392565020222953, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.18077474292389795, 2);
  sqcRYGate(q, -2.4407264626938883, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.8788788222829065, 2);
  sqcRYGate(q, -0.21011186535626822, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.5278394450548647, 4);
  sqcRYGate(q, 2.7148774883643783, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.9717934266025865, 4);
  sqcRYGate(q, -1.5078449746121478, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.497410337177741, 6);
  sqcRYGate(q, -1.8512996486268818, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.136193332393187, 6);
  sqcRYGate(q, 3.1170761288805227, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.39807065019799825, 8);
  sqcRYGate(q, 2.303323816261598, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.0164282345670266, 8);
  sqcRYGate(q, -1.4242084597739053, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.565124502703388, 1);
  sqcRYGate(q, -2.2028607329999437, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.016880280771850453, 1);
  sqcRYGate(q, 1.5305677244232663, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.95233898358238, 3);
  sqcRYGate(q, -1.3867685792932365, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.1283522697066846, 3);
  sqcRYGate(q, 3.113488074087914, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.1609823987872456, 5);
  sqcRYGate(q, -0.7634964651958684, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.8081601162252472, 5);
  sqcRYGate(q, -2.453538317487313, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.332131879951836, 7);
  sqcRYGate(q, 0.7914443619357039, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.04738429801546318, 7);
  sqcRYGate(q, -2.795764436485789, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.0762584387343825, 9);
  sqcRYGate(q, -0.928220246420234, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.7464745194967524, 9);
  sqcRYGate(q, -0.2888627901379168, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.883723614336921, 0);
  sqcRYGate(q, 2.487982345217262, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8675364110747337, 0);
  sqcRYGate(q, -1.5716297193582698, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6216671860060855, 2);
  sqcRYGate(q, 0.223310454998784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9649762215272673, 2);
  sqcRYGate(q, -0.00036707224579490827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5127518406671707, 4);
  sqcRYGate(q, -2.1522746790063927, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8761759881419615, 4);
  sqcRYGate(q, -1.59659299174873, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.862157632811182, 6);
  sqcRYGate(q, 0.7498167687128413, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1320578319301378, 6);
  sqcRYGate(q, 1.5889267000746286, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8771939052089788, 8);
  sqcRYGate(q, 1.7894974834975317, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5310197751111203, 8);
  sqcRYGate(q, -2.839753160363485, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.3819009493814525, 10);
  sqcRYGate(q, 2.461486494181823, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.16639842120661733, 10);
  sqcRYGate(q, -1.6193748867160382, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.49583164937904883, 0);
  sqcRYGate(q, -0.106332605313241, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.08654444025425434, 0);
  sqcRYGate(q, 0.508362424578933, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2619342315163788, 2);
  sqcRYGate(q, 1.1410843845152652, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.0656945743444397, 2);
  sqcRYGate(q, -3.0879731222540125, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.712321503044238, 4);
  sqcRYGate(q, 1.5574968966787646, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.7721388788023487, 4);
  sqcRYGate(q, -3.128758613178017, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5896213512342845, 6);
  sqcRYGate(q, 1.682343069296893, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.3222054340710838, 6);
  sqcRYGate(q, -2.8710090045448315, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.6919667316982052, 8);
  sqcRYGate(q, -0.23365556723305403, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.079514779248547, 8);
  sqcRYGate(q, -1.6031538118757456, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.263044105264175, 1);
  sqcRYGate(q, -2.8281684204524957, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.0237865396823033, 1);
  sqcRYGate(q, -0.8545201660373891, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1740591482759946, 3);
  sqcRYGate(q, -1.7740223826792387, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.00668105524833873, 3);
  sqcRYGate(q, 0.0667018322313142, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.9885254324604302, 5);
  sqcRYGate(q, 0.8003318411180551, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.8933553034138804, 5);
  sqcRYGate(q, 3.1076962079252577, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.0949172733516574, 7);
  sqcRYGate(q, 0.5514441232044219, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.131006066538629, 7);
  sqcRYGate(q, 3.1299883530474704, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.667916088486252, 9);
  sqcRYGate(q, -1.243712123715544, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.6290062666471012, 9);
  sqcRYGate(q, 2.0086396589227293, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.648306381203719, 0);
  sqcRYGate(q, 0.44128275881580153, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.003704017274821254, 0);
  sqcRYGate(q, -3.140322219616531, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3773894724907376, 2);
  sqcRYGate(q, 0.3754695907248353, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2459664807648041, 2);
  sqcRYGate(q, -3.040060748436789, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.603476206774962, 4);
  sqcRYGate(q, -0.7472700290681766, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3825160640925338, 4);
  sqcRYGate(q, -1.5879351284187821, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.878153836693616, 6);
  sqcRYGate(q, 2.580651244362683, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.535548611766691, 6);
  sqcRYGate(q, -2.3618721104661695, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5884654893138346, 8);
  sqcRYGate(q, 2.7687599162442584, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.1861645464563244, 8);
  sqcRYGate(q, -1.5859090264407671, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9052980298321827, 10);
  sqcRYGate(q, 2.7050705206861423, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.7742989863734442, 10);
  sqcRYGate(q, 3.115553580239482, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.8195488556829154, 0);
  sqcRYGate(q, -0.2410726692052254, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.005684813251858323, 0);
  sqcRYGate(q, 0.909814138817131, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0455563635348073, 2);
  sqcRYGate(q, 2.7476076115858827, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.36594352947120984, 2);
  sqcRYGate(q, 2.564115800932581, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.4066431469503735, 4);
  sqcRYGate(q, 0.5540138751928692, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.14078268542347, 4);
  sqcRYGate(q, -0.008254672492858677, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.7403347959278737, 6);
  sqcRYGate(q, -2.364881970665648, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.01254787151329051, 6);
  sqcRYGate(q, -0.0015944094053614813, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.7789864403617244, 8);
  sqcRYGate(q, -0.11972571067346847, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.7475385944714388, 8);
  sqcRYGate(q, -2.236120436474401, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.1185075620066147, 1);
  sqcRYGate(q, -1.3381968019684143, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.137046935261651, 1);
  sqcRYGate(q, -0.0055165588185793835, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3764186701485714, 3);
  sqcRYGate(q, -1.5026064632028566, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.006896965859719819, 3);
  sqcRYGate(q, 0.0027367950575556505, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.8141144844683907, 5);
  sqcRYGate(q, -0.718109427436191, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.1369471524379215, 5);
  sqcRYGate(q, 3.1302307677640178, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.4375582905608852, 7);
  sqcRYGate(q, -1.8641461300428979, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.7533157704757123, 7);
  sqcRYGate(q, 3.125169383919964, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.0733979663106923, 9);
  sqcRYGate(q, -2.6045911499017986, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.00018907498152920255, 9);
  sqcRYGate(q, 0.01830754150021852, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.5578939778733127, 0);
  sqcRYGate(q, 0.13056782506045828, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2860077675025217, 0);
  sqcRYGate(q, 3.1415465954900816, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.31018015998901627, 2);
  sqcRYGate(q, 0.9342535165735955, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4240253052585921, 2);
  sqcRYGate(q, -0.0812652384258068, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.06682888540866028, 4);
  sqcRYGate(q, -3.1210700138032195, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0568709408396382, 4);
  sqcRYGate(q, -0.5580968203209805, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.302166979749513, 6);
  sqcRYGate(q, -0.7081075092599515, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5838367364106354, 6);
  sqcRYGate(q, 0.7667122787546452, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.559746838782198, 8);
  sqcRYGate(q, 1.8636419612466806, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.046188811966589, 8);
  sqcRYGate(q, 1.5943171210844824, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.2061283847964335, 10);
  sqcRYGate(q, -0.5823793547476468, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.8261169776317265, 10);
  sqcRYGate(q, 1.5501962101587092, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.3084137181300735, 0);
  sqcRYGate(q, -1.2689550891868242, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7630857720913022, 0);
  sqcRYGate(q, -1.6606188058860396, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.083784026285745, 2);
  sqcRYGate(q, -0.725594828285808, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.0730964703126205, 2);
  sqcRYGate(q, -0.023795558370748537, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.7618998258058542, 4);
  sqcRYGate(q, 2.9759489801184418, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.010594519785613874, 4);
  sqcRYGate(q, -0.009376879954969839, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.4866922999644965, 6);
  sqcRYGate(q, 2.400879023969099, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.127551622467684, 6);
  sqcRYGate(q, -3.0506061693428097, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.4425965182343496, 8);
  sqcRYGate(q, 1.6436330960424481, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.5612548233065437, 8);
  sqcRYGate(q, 0.02986841139667984, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.3839740212526168, 1);
  sqcRYGate(q, -1.3764456531207543, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5739677354154904, 1);
  sqcRYGate(q, -0.013981527024050422, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.427997684950995, 3);
  sqcRYGate(q, -0.12331782945294166, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.5723421615249666, 3);
  sqcRYGate(q, -3.1363088973956104, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.5662970298671142, 5);
  sqcRYGate(q, 1.5532338512025037, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5706143831111197, 5);
  sqcRYGate(q, -0.021084167411101973, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5707945443086067, 7);
  sqcRYGate(q, 0.16566615901995618, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.570891135113563, 7);
  sqcRYGate(q, -2.3875555817820118, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.5707585969974562, 9);
  sqcRYGate(q, 2.0204192254278417, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.5707811420480031, 9);
  sqcRYGate(q, 1.7629307902605582, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.5027523021542335, 0);
  sqcRYGate(q, -1.7602913911056355, 1);
  sqcRYGate(q, 2.0550615654409934, 2);
  sqcRYGate(q, 1.4294415115947752, 3);
  sqcRYGate(q, -1.3976315923238287, 4);
  sqcRYGate(q, -1.5658223493213486, 5);
  sqcRYGate(q, -1.5520806204610023, 6);
  sqcRYGate(q, 1.5709965754520667, 7);
  sqcRYGate(q, -1.4452325597087903, 8);
  sqcRYGate(q, 1.57082256350051, 9);
  sqcRYGate(q, 1.5658605574564683, 10);
  sqcRYGate(q, 1.5709146102272995, 11);

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
