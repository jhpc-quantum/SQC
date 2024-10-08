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

  sqcRYGate(q, 1.8762016980235703, 0);
  sqcRZGate(q, -1.649511481207422, 0);
  sqcRYGate(q, 1.200309340570549, 1);
  sqcRZGate(q, -1.0951412497786635, 1);
  sqcRYGate(q, -2.3956446543544585, 2);
  sqcRZGate(q, 0.840117204911368, 2);
  sqcRYGate(q, 0.961815730759974, 3);
  sqcRZGate(q, -1.9995397252549776, 3);
  sqcRYGate(q, -2.3456737095549625, 4);
  sqcRZGate(q, -0.9858434888078644, 4);
  sqcRYGate(q, -0.6646827018318816, 5);
  sqcRZGate(q, 2.0723718889939846, 5);
  sqcRYGate(q, 0.1351883468397137, 6);
  sqcRZGate(q, -0.37589070170356387, 6);
  sqcRYGate(q, 2.6209160142529684, 7);
  sqcRZGate(q, -3.1319536740672507, 7);
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
  sqcRYGate(q, 1.2267306671493428, 0);
  sqcRZGate(q, 0.6498101459358683, 0);
  sqcRYGate(q, 2.702251587949359, 1);
  sqcRZGate(q, 2.6700061963624044, 1);
  sqcRYGate(q, -0.810418954467634, 2);
  sqcRZGate(q, 3.120033366684782, 2);
  sqcRYGate(q, -1.3147992662235666, 3);
  sqcRZGate(q, -0.9425816495771479, 3);
  sqcRYGate(q, 2.2605990484447345, 4);
  sqcRZGate(q, -2.974906597922385, 4);
  sqcRYGate(q, -1.626285270646528, 5);
  sqcRZGate(q, -0.9409825305643116, 5);
  sqcRYGate(q, 2.0672930777588, 6);
  sqcRZGate(q, -0.30861798059886686, 6);
  sqcRYGate(q, -2.579505515448844, 7);
  sqcRZGate(q, -0.0181268662492529, 7);
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
  sqcRYGate(q, -1.3351530174239068, 0);
  sqcRZGate(q, -0.9328580705788161, 0);
  sqcRYGate(q, 0.6868378819112291, 1);
  sqcRZGate(q, 0.8041740633576245, 1);
  sqcRYGate(q, 1.9042347045192283, 2);
  sqcRZGate(q, 2.0328890872986225, 2);
  sqcRYGate(q, -2.299447586176152, 3);
  sqcRZGate(q, 2.8798547552455913, 3);
  sqcRYGate(q, 2.1085440920538607, 4);
  sqcRZGate(q, -1.3926632540393369, 4);
  sqcRYGate(q, -2.8666263108559926, 5);
  sqcRZGate(q, -1.6750201641130016, 5);
  sqcRYGate(q, 2.441344494975443, 6);
  sqcRZGate(q, -2.6605947483028305, 6);
  sqcRYGate(q, -1.406763363022183, 7);
  sqcRZGate(q, -2.9405173711340806, 7);
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
  sqcRYGate(q, -2.7516634956536934, 0);
  sqcRZGate(q, 0.6087085773307004, 0);
  sqcRYGate(q, -1.058174605601527, 1);
  sqcRZGate(q, -0.48690794486952976, 1);
  sqcRYGate(q, -0.43625299457552114, 2);
  sqcRZGate(q, -1.5423518117035098, 2);
  sqcRYGate(q, -0.7814442011727759, 3);
  sqcRZGate(q, -2.787318575075446, 3);
  sqcRYGate(q, -2.7344379791751403, 4);
  sqcRZGate(q, 3.0761384233217033, 4);
  sqcRYGate(q, -0.09701114921484422, 5);
  sqcRZGate(q, -1.8109641747433463, 5);
  sqcRYGate(q, -0.7446839783867991, 6);
  sqcRZGate(q, -0.8752439540008914, 6);
  sqcRYGate(q, 1.8485668199439749, 7);
  sqcRZGate(q, -2.529084488981571, 7);
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
  sqcRYGate(q, -3.094307251221889, 0);
  sqcRZGate(q, 0.39635642114774566, 0);
  sqcRYGate(q, 0.08713273658143536, 1);
  sqcRZGate(q, 1.4220265204368587, 1);
  sqcRYGate(q, -2.063980001778225, 2);
  sqcRZGate(q, -0.047171118851827565, 2);
  sqcRYGate(q, 1.3772391954161618, 3);
  sqcRZGate(q, 0.44862308084741154, 3);
  sqcRYGate(q, -1.3217930268657263, 4);
  sqcRZGate(q, -2.1764034028187544, 4);
  sqcRYGate(q, -1.583796101547975, 5);
  sqcRZGate(q, -0.8514498514619095, 5);
  sqcRYGate(q, 0.32087796844673555, 6);
  sqcRZGate(q, -2.7237798182355792, 6);
  sqcRYGate(q, -1.1955928973332357, 7);
  sqcRZGate(q, -0.5022410853830958, 7);
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
  sqcRYGate(q, 2.627361728147237, 0);
  sqcRZGate(q, 0.13498629168248222, 0);
  sqcRYGate(q, 0.20551228723298626, 1);
  sqcRZGate(q, -1.481310568503174, 1);
  sqcRYGate(q, 1.6871186599909178, 2);
  sqcRZGate(q, 1.4267120236274087, 2);
  sqcRYGate(q, -1.829981102909817, 3);
  sqcRZGate(q, -1.9017445506796236, 3);
  sqcRYGate(q, -0.21900565413818732, 4);
  sqcRZGate(q, -2.5119576991055816, 4);
  sqcRYGate(q, 2.2278970543134804, 5);
  sqcRZGate(q, -1.4987538759461585, 5);
  sqcRYGate(q, -2.562200502272084, 6);
  sqcRZGate(q, 2.6326373815580455, 6);
  sqcRYGate(q, 0.12169810602733701, 7);
  sqcRZGate(q, -2.6635450764428623, 7);
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
  sqcRYGate(q, 1.7487740387329849, 0);
  sqcRZGate(q, -3.080161743044016, 0);
  sqcRYGate(q, -1.0245323366748282, 1);
  sqcRZGate(q, 0.7550626366239442, 1);
  sqcRYGate(q, -2.666244106883673, 2);
  sqcRZGate(q, -0.5360609180290181, 2);
  sqcRYGate(q, -1.82759288127977, 3);
  sqcRZGate(q, -2.764760988648845, 3);
  sqcRYGate(q, 0.4960878445960289, 4);
  sqcRZGate(q, -0.7866697763392012, 4);
  sqcRYGate(q, -0.513578153282813, 5);
  sqcRZGate(q, 0.2663524408399632, 5);
  sqcRYGate(q, 1.8216810114790203, 6);
  sqcRZGate(q, 0.7446457684641024, 6);
  sqcRYGate(q, 1.4215163471653813, 7);
  sqcRZGate(q, 2.909189644978494, 7);
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
  sqcRYGate(q, -2.0488899790316983, 0);
  sqcRZGate(q, -0.6833784532359228, 0);
  sqcRYGate(q, -1.337804300800299, 1);
  sqcRZGate(q, 1.4951444253001143, 1);
  sqcRYGate(q, -1.9262808353185283, 2);
  sqcRZGate(q, -1.7763338610789132, 2);
  sqcRYGate(q, -1.8790878022270987, 3);
  sqcRZGate(q, -0.5499250374397482, 3);
  sqcRYGate(q, 0.12348277281652109, 4);
  sqcRZGate(q, -0.6960564792247697, 4);
  sqcRYGate(q, 0.8128299708571411, 5);
  sqcRZGate(q, 2.13181771396161, 5);
  sqcRYGate(q, 0.608325301134603, 6);
  sqcRZGate(q, 1.9772164177511575, 6);
  sqcRYGate(q, -0.7921969907943013, 7);
  sqcRZGate(q, -2.971013506151088, 7);
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
  sqcRYGate(q, 2.7782224232991513, 0);
  sqcRZGate(q, 0.7537128863640409, 0);
  sqcRYGate(q, 0.8610541919119341, 1);
  sqcRZGate(q, 2.530145745542599, 1);
  sqcRYGate(q, 2.105258504585154, 2);
  sqcRZGate(q, 1.3207322991563712, 2);
  sqcRYGate(q, -1.0646597457582623, 3);
  sqcRZGate(q, -1.7358258290038542, 3);
  sqcRYGate(q, 0.3642554068527249, 4);
  sqcRZGate(q, -1.7289040708492367, 4);
  sqcRYGate(q, 1.0227609569723652, 5);
  sqcRZGate(q, -1.0984624496868125, 5);
  sqcRYGate(q, -0.6738356276229925, 6);
  sqcRZGate(q, 1.9713136890423115, 6);
  sqcRYGate(q, -1.9386584164995437, 7);
  sqcRZGate(q, -0.5676349721633347, 7);
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
  sqcRYGate(q, -2.740114001992908, 0);
  sqcRZGate(q, -3.086294854038755, 0);
  sqcRYGate(q, -2.7111382226713183, 1);
  sqcRZGate(q, 1.8690512332136338, 1);
  sqcRYGate(q, -2.905836733162722, 2);
  sqcRZGate(q, -1.9866520341529594, 2);
  sqcRYGate(q, -0.6722466390792398, 3);
  sqcRZGate(q, 2.7543953458546957, 3);
  sqcRYGate(q, 0.7618201011726189, 4);
  sqcRZGate(q, 3.0357684997005334, 4);
  sqcRYGate(q, -1.488102613899706, 5);
  sqcRZGate(q, 0.34050487035155536, 5);
  sqcRYGate(q, 2.625698028353744, 6);
  sqcRZGate(q, 2.511610480429744, 6);
  sqcRYGate(q, -2.7575768618518035, 7);
  sqcRZGate(q, 0.44212234365628694, 7);
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
  sqcRYGate(q, 1.8363219267784352, 0);
  sqcRZGate(q, 0.07570265424306173, 0);
  sqcRYGate(q, 2.256856975023474, 1);
  sqcRZGate(q, 2.8821958664515246, 1);
  sqcRYGate(q, -1.2613203015866092, 2);
  sqcRZGate(q, -1.682846177248502, 2);
  sqcRYGate(q, 0.524746279215786, 3);
  sqcRZGate(q, 0.8081533996520794, 3);
  sqcRYGate(q, 1.3533913687378742, 4);
  sqcRZGate(q, 2.381812852679973, 4);
  sqcRYGate(q, 0.5107841782547755, 5);
  sqcRZGate(q, 1.3912196392544482, 5);
  sqcRYGate(q, 1.2674443573715264, 6);
  sqcRZGate(q, 1.3526309510397483, 6);
  sqcRYGate(q, 0.8811315873310354, 7);
  sqcRZGate(q, -0.17379473421197283, 7);
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
  sqcRYGate(q, -1.9975782430416633, 0);
  sqcRZGate(q, -2.5870739289242572, 0);
  sqcRYGate(q, 2.342354025539382, 1);
  sqcRZGate(q, 1.5737025221656087, 1);
  sqcRYGate(q, -3.0450327271877518, 2);
  sqcRZGate(q, 1.89975382929283, 2);
  sqcRYGate(q, 2.4452290672694765, 3);
  sqcRZGate(q, -2.2513071332648913, 3);
  sqcRYGate(q, 1.1036370621337834, 4);
  sqcRZGate(q, -1.3909245890812305, 4);
  sqcRYGate(q, -2.4832372714499975, 5);
  sqcRZGate(q, -3.0911102051405766, 5);
  sqcRYGate(q, 2.4181643417406002, 6);
  sqcRZGate(q, 1.2595477528303691, 6);
  sqcRYGate(q, 2.026178297017369, 7);
  sqcRZGate(q, -0.3491904676101001, 7);
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
  sqcRYGate(q, 2.1839830376028404, 0);
  sqcRZGate(q, -1.756284124654178, 0);
  sqcRYGate(q, -1.8995250460103938, 1);
  sqcRZGate(q, -1.7730274228851768, 1);
  sqcRYGate(q, -2.1971667694315453, 2);
  sqcRZGate(q, 2.7210576157260213, 2);
  sqcRYGate(q, -2.9674542524975793, 3);
  sqcRZGate(q, -0.18132186191906818, 3);
  sqcRYGate(q, 0.3359176177450234, 4);
  sqcRZGate(q, 1.3298736664124542, 4);
  sqcRYGate(q, -1.8213155112517754, 5);
  sqcRZGate(q, -2.983296608287516, 5);
  sqcRYGate(q, 2.9961077980043553, 6);
  sqcRZGate(q, 1.6712635383344001, 6);
  sqcRYGate(q, -0.39742821580187443, 7);
  sqcRZGate(q, -2.5377956805682627, 7);
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
  sqcRYGate(q, -0.08199799476292391, 0);
  sqcRZGate(q, -0.7105901638993359, 0);
  sqcRYGate(q, 1.21077108749106, 1);
  sqcRZGate(q, 1.7314441728005066, 1);
  sqcRYGate(q, -1.5802840836896848, 2);
  sqcRZGate(q, 1.6782956939600324, 2);
  sqcRYGate(q, -0.8961125640469633, 3);
  sqcRZGate(q, -2.8310943336863117, 3);
  sqcRYGate(q, -2.9098018315124747, 4);
  sqcRZGate(q, -1.7501455023658594, 4);
  sqcRYGate(q, -0.7328326471424632, 5);
  sqcRZGate(q, -0.3574308142529464, 5);
  sqcRYGate(q, 1.5058270255257664, 6);
  sqcRZGate(q, 0.6383825450330335, 6);
  sqcRYGate(q, -1.0738054229548224, 7);
  sqcRZGate(q, 1.7413569982325545, 7);
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
  sqcRYGate(q, 2.6624866977002473, 0);
  sqcRZGate(q, 1.7768188526219784, 0);
  sqcRYGate(q, 0.25572480982250373, 1);
  sqcRZGate(q, -0.6365041681277797, 1);
  sqcRYGate(q, 0.3664232223070906, 2);
  sqcRZGate(q, 1.7645063549599405, 2);
  sqcRYGate(q, -0.6540234044114304, 3);
  sqcRZGate(q, 0.30730202295603953, 3);
  sqcRYGate(q, -1.7219446891582173, 4);
  sqcRZGate(q, -0.7273686204786003, 4);
  sqcRYGate(q, 1.1554596886247548, 5);
  sqcRZGate(q, 2.27302102464232, 5);
  sqcRYGate(q, -0.6074710382175167, 6);
  sqcRZGate(q, 1.4676852170462649, 6);
  sqcRYGate(q, -0.383357986085751, 7);
  sqcRZGate(q, 2.4918264035984627, 7);
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
  sqcRYGate(q, 0.5430786511691066, 0);
  sqcRZGate(q, -1.4168268874711225, 0);
  sqcRYGate(q, 2.076747146030721, 1);
  sqcRZGate(q, -1.7180429455547506, 1);
  sqcRYGate(q, 2.5603930077633223, 2);
  sqcRZGate(q, 0.6520296266381045, 2);
  sqcRYGate(q, -2.5246134130548876, 3);
  sqcRZGate(q, 2.169588837230574, 3);
  sqcRYGate(q, 2.6827707292487304, 4);
  sqcRZGate(q, 0.2249677186530672, 4);
  sqcRYGate(q, 1.5603333884852217, 5);
  sqcRZGate(q, -0.10137835966114732, 5);
  sqcRYGate(q, -1.3962668504177005, 6);
  sqcRZGate(q, 1.1858696969173828, 6);
  sqcRYGate(q, 2.4367069320601895, 7);
  sqcRZGate(q, -0.2633200710776757, 7);
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
  sqcRYGate(q, 0.6333137562915603, 0);
  sqcRZGate(q, 2.178866844405892, 0);
  sqcRYGate(q, 0.13834033333938073, 1);
  sqcRZGate(q, -1.4846915113622798, 1);
  sqcRYGate(q, -2.273487231223027, 2);
  sqcRZGate(q, 2.8727566740065043, 2);
  sqcRYGate(q, -1.0868925072183715, 3);
  sqcRZGate(q, -0.20073796307704392, 3);
  sqcRYGate(q, -1.9687927519210597, 4);
  sqcRZGate(q, -2.007896322182673, 4);
  sqcRYGate(q, 1.4418390489504138, 5);
  sqcRZGate(q, -3.0243850616031156, 5);
  sqcRYGate(q, 2.1359561913550866, 6);
  sqcRZGate(q, -1.047818521191601, 6);
  sqcRYGate(q, -1.0995213800689447, 7);
  sqcRZGate(q, 0.9366582855181995, 7);
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
  sqcRYGate(q, -2.889318690555248, 0);
  sqcRZGate(q, 1.6988984696382823, 0);
  sqcRYGate(q, -1.1806034297777286, 1);
  sqcRZGate(q, -2.230559839108203, 1);
  sqcRYGate(q, 1.460600274106721, 2);
  sqcRZGate(q, 2.091848706687763, 2);
  sqcRYGate(q, -2.799920034080738, 3);
  sqcRZGate(q, -2.9232613292375973, 3);
  sqcRYGate(q, -2.851259573908537, 4);
  sqcRZGate(q, -2.899765566239416, 4);
  sqcRYGate(q, -1.959479827629827, 5);
  sqcRZGate(q, 3.084078865923004, 5);
  sqcRYGate(q, -2.3514261706911563, 6);
  sqcRZGate(q, 0.2574090242243527, 6);
  sqcRYGate(q, -2.182159509619397, 7);
  sqcRZGate(q, 1.4327296206930251, 7);
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
  sqcRYGate(q, 1.7547799345132307, 0);
  sqcRZGate(q, -0.81947159081537, 0);
  sqcRYGate(q, -2.3960420829845757, 1);
  sqcRZGate(q, 0.28831348933802936, 1);
  sqcRYGate(q, 2.0501500991890866, 2);
  sqcRZGate(q, -3.1336000126639356, 2);
  sqcRYGate(q, -0.6271040054877568, 3);
  sqcRZGate(q, -3.0297881534459523, 3);
  sqcRYGate(q, -0.5526094523930765, 4);
  sqcRZGate(q, 2.908835696107502, 4);
  sqcRYGate(q, 0.9929062337832165, 5);
  sqcRZGate(q, 1.588170393638133, 5);
  sqcRYGate(q, -2.717736569314595, 6);
  sqcRZGate(q, 0.4716558297185287, 6);
  sqcRYGate(q, -2.34513655481403, 7);
  sqcRZGate(q, -1.326727945530658, 7);
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
  sqcRYGate(q, -3.0585415896443235, 0);
  sqcRZGate(q, -2.0697126312005287, 0);
  sqcRYGate(q, 2.7848982388286156, 1);
  sqcRZGate(q, 0.09888495670114748, 1);
  sqcRYGate(q, -1.1228999309967707, 2);
  sqcRZGate(q, -0.3896012215593321, 2);
  sqcRYGate(q, 1.9182305844085923, 3);
  sqcRZGate(q, 1.7138536121319357, 3);
  sqcRYGate(q, 0.6470243896587293, 4);
  sqcRZGate(q, 0.5081044564596909, 4);
  sqcRYGate(q, -1.503350275497107, 5);
  sqcRZGate(q, -1.1332130191146843, 5);
  sqcRYGate(q, -0.3951694540175542, 6);
  sqcRZGate(q, -0.1434652046937437, 6);
  sqcRYGate(q, -1.25000875007204, 7);
  sqcRZGate(q, -1.102347680778548, 7);
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
  sqcRYGate(q, -2.3430032464430885, 0);
  sqcRZGate(q, 0.4366853128740917, 0);
  sqcRYGate(q, 0.9474137688772951, 1);
  sqcRZGate(q, -0.7461408429565363, 1);
  sqcRYGate(q, 1.3998050337260253, 2);
  sqcRZGate(q, -0.4465728097447824, 2);
  sqcRYGate(q, -0.4937028588735126, 3);
  sqcRZGate(q, 2.9456870832051765, 3);
  sqcRYGate(q, -0.804174514877925, 4);
  sqcRZGate(q, -0.06977146094999753, 4);
  sqcRYGate(q, -1.6788574323285195, 5);
  sqcRZGate(q, 2.6571749962120395, 5);
  sqcRYGate(q, -0.873230671295462, 6);
  sqcRZGate(q, 1.5132993203773881, 6);
  sqcRYGate(q, -1.9722661556855057, 7);
  sqcRZGate(q, -2.744305724537379, 7);
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
  sqcRYGate(q, 1.5966742185322715, 0);
  sqcRZGate(q, -1.8548097094752694, 0);
  sqcRYGate(q, 2.4118177263685348, 1);
  sqcRZGate(q, 0.7495618006300769, 1);
  sqcRYGate(q, 0.6836303500508191, 2);
  sqcRZGate(q, 1.0447603791278917, 2);
  sqcRYGate(q, 2.6860832785771476, 3);
  sqcRZGate(q, -1.824544464027478, 3);
  sqcRYGate(q, -0.3001587945558281, 4);
  sqcRZGate(q, 0.06661218206220829, 4);
  sqcRYGate(q, -1.1953908409987137, 5);
  sqcRZGate(q, 1.3046899409977588, 5);
  sqcRYGate(q, -1.7494331446628246, 6);
  sqcRZGate(q, 2.856125294381307, 6);
  sqcRYGate(q, 0.285988581495774, 7);
  sqcRZGate(q, 2.7530821839524964, 7);
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
  sqcRYGate(q, -1.7365552742826365, 0);
  sqcRZGate(q, 2.371498567265287, 0);
  sqcRYGate(q, -2.756950051427312, 1);
  sqcRZGate(q, 1.7847338002688096, 1);
  sqcRYGate(q, -1.7790043378007825, 2);
  sqcRZGate(q, -2.65586375827767, 2);
  sqcRYGate(q, -1.5127524479486167, 3);
  sqcRZGate(q, 2.9063684933589955, 3);
  sqcRYGate(q, 2.69379479438927, 4);
  sqcRZGate(q, 1.7246710254528113, 4);
  sqcRYGate(q, 0.6533843519507937, 5);
  sqcRZGate(q, 1.8738197231407736, 5);
  sqcRYGate(q, -1.4000411026356383, 6);
  sqcRZGate(q, -2.686210063370626, 6);
  sqcRYGate(q, 0.40212617331438416, 7);
  sqcRZGate(q, 2.246549201724485, 7);
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
  sqcRYGate(q, -2.8816011732988374, 0);
  sqcRZGate(q, -0.6425076814402688, 0);
  sqcRYGate(q, -2.9311212103898208, 1);
  sqcRZGate(q, 2.879817140129076, 1);
  sqcRYGate(q, -1.5016390457367903, 2);
  sqcRZGate(q, 2.316784775192669, 2);
  sqcRYGate(q, -2.873013227464637, 3);
  sqcRZGate(q, -1.5278701453412111, 3);
  sqcRYGate(q, 2.4807567929158125, 4);
  sqcRZGate(q, -2.438776337804922, 4);
  sqcRYGate(q, -1.4149551495195587, 5);
  sqcRZGate(q, 0.8034828380578405, 5);
  sqcRYGate(q, -1.095687973548676, 6);
  sqcRZGate(q, -2.902835555460576, 6);
  sqcRYGate(q, -2.431482920648016, 7);
  sqcRZGate(q, 0.6229539952245136, 7);
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
  sqcRYGate(q, 2.1137009823053923, 0);
  sqcRZGate(q, -1.4661138842188002, 0);
  sqcRYGate(q, 0.2795737510326721, 1);
  sqcRZGate(q, 2.490135044502501, 1);
  sqcRYGate(q, -2.976384723671044, 2);
  sqcRZGate(q, -3.042195238114905, 2);
  sqcRYGate(q, -2.1363436632197805, 3);
  sqcRZGate(q, -1.1786860823444876, 3);
  sqcRYGate(q, -2.642657382091055, 4);
  sqcRZGate(q, 2.3978184053970137, 4);
  sqcRYGate(q, 2.103838076249229, 5);
  sqcRZGate(q, -1.4700417193410182, 5);
  sqcRYGate(q, 2.210346367905239, 6);
  sqcRZGate(q, -0.1790604144046366, 6);
  sqcRYGate(q, 0.39600728433506127, 7);
  sqcRZGate(q, -2.9558242196059843, 7);
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
  sqcRYGate(q, 0.09087889129299144, 0);
  sqcRZGate(q, 0.3169965204677654, 0);
  sqcRYGate(q, 2.644688194828, 1);
  sqcRZGate(q, -2.244750977709989, 1);
  sqcRYGate(q, 1.2960711396562337, 2);
  sqcRZGate(q, -2.125438386213072, 2);
  sqcRYGate(q, 1.602451952999358, 3);
  sqcRZGate(q, -2.321832758965607, 3);
  sqcRYGate(q, -1.4190141960525529, 4);
  sqcRZGate(q, -0.9821144571434396, 4);
  sqcRYGate(q, 0.3151708242110054, 5);
  sqcRZGate(q, 0.7467641998840548, 5);
  sqcRYGate(q, 0.6222094423034958, 6);
  sqcRZGate(q, 0.20160787350290477, 6);
  sqcRYGate(q, 2.4299938653490676, 7);
  sqcRZGate(q, 1.137403291709953, 7);
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
  sqcRYGate(q, 2.5957720709324223, 0);
  sqcRZGate(q, -0.7019235638271316, 0);
  sqcRYGate(q, -0.1112230658874873, 1);
  sqcRZGate(q, -1.9332924557043483, 1);
  sqcRYGate(q, 2.6972169684651566, 2);
  sqcRZGate(q, -0.7049322352846222, 2);
  sqcRYGate(q, -2.102022329959853, 3);
  sqcRZGate(q, -2.0791798908582138, 3);
  sqcRYGate(q, -1.2698992126782143, 4);
  sqcRZGate(q, 0.630387617893975, 4);
  sqcRYGate(q, 1.184477563869435, 5);
  sqcRZGate(q, -0.863233448305612, 5);
  sqcRYGate(q, 1.1975320577494903, 6);
  sqcRZGate(q, -1.2828520424694465, 6);
  sqcRYGate(q, 1.0791879900806762, 7);
  sqcRZGate(q, 1.5529273923686295, 7);
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
  sqcRYGate(q, -2.0391726881937116, 0);
  sqcRZGate(q, -2.888925949276261, 0);
  sqcRYGate(q, -1.277762532526082, 1);
  sqcRZGate(q, 2.2299660710668805, 1);
  sqcRYGate(q, -2.4503575927971917, 2);
  sqcRZGate(q, 2.8873596415840903, 2);
  sqcRYGate(q, -0.7571225928958657, 3);
  sqcRZGate(q, 2.0340676835168416, 3);
  sqcRYGate(q, 2.7802835163045483, 4);
  sqcRZGate(q, 2.052570347868437, 4);
  sqcRYGate(q, -1.0091613045329666, 5);
  sqcRZGate(q, 1.7220708982286945, 5);
  sqcRYGate(q, -0.11920295509514228, 6);
  sqcRZGate(q, -0.49450723729365986, 6);
  sqcRYGate(q, -2.7555741399025524, 7);
  sqcRZGate(q, 0.6587325191221828, 7);

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
