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

  sqcRYGate(q, 2.899945749126546, 0);
  sqcRZGate(q, 1.2100466134815102, 0);
  sqcRYGate(q, -3.1415032600730077, 1);
  sqcRZGate(q, -0.09172160926537536, 1);
  sqcRYGate(q, 1.5690961825430114, 2);
  sqcRZGate(q, 1.569437308962834, 2);
  sqcRYGate(q, -1.7674032224057652, 3);
  sqcRZGate(q, 0.13510829693443555, 3);
  sqcRYGate(q, 0.05890944699125101, 4);
  sqcRZGate(q, 2.3119028428562602, 4);
  sqcRYGate(q, -2.9544890115842337, 5);
  sqcRZGate(q, -1.7051203476272372, 5);
  sqcRYGate(q, 1.8926361044872404, 6);
  sqcRZGate(q, 2.129851187803151, 6);
  sqcRYGate(q, 3.131843883677543, 7);
  sqcRZGate(q, 2.1105020370504706, 7);
  sqcRYGate(q, -2.3140850156703596, 8);
  sqcRZGate(q, -0.8898769001355209, 8);
  sqcRYGate(q, -2.077813237796697, 9);
  sqcRZGate(q, -1.5369734712656085, 9);
  sqcRYGate(q, 0.004201023596451665, 10);
  sqcRZGate(q, 1.679192826665509, 10);
  sqcRYGate(q, -0.10291428820228089, 11);
  sqcRZGate(q, 0.40239980080967, 11);
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
  sqcRYGate(q, -0.5747606931010762, 0);
  sqcRZGate(q, -0.5520796418086287, 0);
  sqcRYGate(q, -0.16717808758496217, 1);
  sqcRZGate(q, -1.623301490415833, 1);
  sqcRYGate(q, -0.4546921056581752, 2);
  sqcRZGate(q, -1.1770094899335843, 2);
  sqcRYGate(q, 0.0036412539966888965, 3);
  sqcRZGate(q, -0.5872584051778302, 3);
  sqcRYGate(q, -3.1415506706849428, 4);
  sqcRZGate(q, 1.9364805832786496, 4);
  sqcRYGate(q, -1.392391230804047, 5);
  sqcRZGate(q, 0.31121591746686245, 5);
  sqcRYGate(q, 1.3289532473659698, 6);
  sqcRZGate(q, -2.6059076470129874, 6);
  sqcRYGate(q, -1.2085543135142984e-06, 7);
  sqcRZGate(q, -1.4453382194563433, 7);
  sqcRYGate(q, -0.3910339552609834, 8);
  sqcRZGate(q, 1.4491188996595408, 8);
  sqcRYGate(q, -0.43284428388586593, 9);
  sqcRZGate(q, 0.664223132723817, 9);
  sqcRYGate(q, -3.122840426231203, 10);
  sqcRZGate(q, -2.7603981333156486, 10);
  sqcRYGate(q, -2.188239216648187, 11);
  sqcRZGate(q, -1.0837583936416417, 11);
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
  sqcRYGate(q, -0.03463546792353967, 0);
  sqcRZGate(q, 0.9709500572223005, 0);
  sqcRYGate(q, 2.9091080503546785, 1);
  sqcRZGate(q, 1.6581584652133678, 1);
  sqcRYGate(q, 1.898729916373588, 2);
  sqcRZGate(q, -0.44649230107284055, 2);
  sqcRYGate(q, 1.3714273554537737, 3);
  sqcRZGate(q, -0.236038098273424, 3);
  sqcRYGate(q, 0.02859182813054945, 4);
  sqcRZGate(q, 2.7403077036175936, 4);
  sqcRYGate(q, 2.6758415614889293, 5);
  sqcRZGate(q, 0.07504826337311792, 5);
  sqcRYGate(q, -1.3940511643489417, 6);
  sqcRZGate(q, 0.25866723056103696, 6);
  sqcRYGate(q, -3.1279306118153416, 7);
  sqcRZGate(q, -2.656808861782714, 7);
  sqcRYGate(q, 2.372215153891332, 8);
  sqcRZGate(q, -1.8877586155472024, 8);
  sqcRYGate(q, -0.57557396852875, 9);
  sqcRZGate(q, 0.5015531490911782, 9);
  sqcRYGate(q, -0.5115957069738535, 10);
  sqcRZGate(q, 0.9028966441135681, 10);
  sqcRYGate(q, -1.8055617274523266, 11);
  sqcRZGate(q, 0.4913520137297913, 11);
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
  sqcRYGate(q, 1.0041362775032772, 0);
  sqcRZGate(q, 0.5954879634839284, 0);
  sqcRYGate(q, 2.6364209946652997, 1);
  sqcRZGate(q, -0.04981448450286201, 1);
  sqcRYGate(q, 0.3887353725003279, 2);
  sqcRZGate(q, 0.675624741688944, 2);
  sqcRYGate(q, -0.17995689975143758, 3);
  sqcRZGate(q, -2.078234523543257, 3);
  sqcRYGate(q, 0.06570180100658174, 4);
  sqcRZGate(q, 0.8822702420549291, 4);
  sqcRYGate(q, -0.021837004034124804, 5);
  sqcRZGate(q, 0.8827640039670062, 5);
  sqcRYGate(q, -1.4098775913707817, 6);
  sqcRZGate(q, 0.45223491426262175, 6);
  sqcRYGate(q, -3.1088402844169134, 7);
  sqcRZGate(q, 0.6974688860473837, 7);
  sqcRYGate(q, -1.2796901393655478, 8);
  sqcRZGate(q, -0.47820713124987346, 8);
  sqcRYGate(q, -0.8358341650650588, 9);
  sqcRZGate(q, -1.8200437613051834, 9);
  sqcRYGate(q, 1.8383482433679623, 10);
  sqcRZGate(q, -2.668241753597436, 10);
  sqcRYGate(q, -1.7914537253221887, 11);
  sqcRZGate(q, -2.3399786357672494, 11);
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
  sqcRYGate(q, -2.612704247424068, 0);
  sqcRZGate(q, -2.11839894606442, 0);
  sqcRYGate(q, -0.27143727785149707, 1);
  sqcRZGate(q, 2.9243690683061856, 1);
  sqcRYGate(q, -0.00904110262045954, 2);
  sqcRZGate(q, -1.2212355427073307, 2);
  sqcRYGate(q, -3.1387911077076778, 3);
  sqcRZGate(q, 2.05285913698924, 3);
  sqcRYGate(q, 3.140913261912339, 4);
  sqcRZGate(q, -3.0658049683367596, 4);
  sqcRYGate(q, -0.5304281011019301, 5);
  sqcRZGate(q, -2.518613258260698, 5);
  sqcRYGate(q, 0.2982042377747237, 6);
  sqcRZGate(q, 2.5996458417175896, 6);
  sqcRYGate(q, -3.1409366689334077, 7);
  sqcRZGate(q, -1.8375373902008176, 7);
  sqcRYGate(q, 0.006391304091359906, 8);
  sqcRZGate(q, -2.710833072855423, 8);
  sqcRYGate(q, -3.14034774611346, 9);
  sqcRZGate(q, -1.3824531847014243, 9);
  sqcRYGate(q, 1.741223762945474, 10);
  sqcRZGate(q, 3.1205991206411348, 10);
  sqcRYGate(q, -0.14363128222957666, 11);
  sqcRZGate(q, -2.8179375377014884, 11);
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
  sqcRYGate(q, 1.3250695232266594, 0);
  sqcRZGate(q, 0.9159369364645759, 0);
  sqcRYGate(q, -0.6773012027269365, 1);
  sqcRZGate(q, -1.1813333195587468, 1);
  sqcRYGate(q, -2.364382647889812, 2);
  sqcRZGate(q, -2.330499258946606, 2);
  sqcRYGate(q, -2.6833126538140717, 3);
  sqcRZGate(q, 1.7765419888275076, 3);
  sqcRYGate(q, -0.047183251465570564, 4);
  sqcRZGate(q, -0.5422234633772636, 4);
  sqcRYGate(q, -1.2916983341172588, 5);
  sqcRZGate(q, 2.847319009116679, 5);
  sqcRYGate(q, 2.1971872931953165, 6);
  sqcRZGate(q, 3.114202593148673, 6);
  sqcRYGate(q, -1.5710868115656156, 7);
  sqcRZGate(q, -3.0404931856537787, 7);
  sqcRYGate(q, 1.7681257047946008, 8);
  sqcRZGate(q, 0.7583383618634025, 8);
  sqcRYGate(q, -2.805667165230176, 9);
  sqcRZGate(q, 2.1854352445148573, 9);
  sqcRYGate(q, -0.14736036188058235, 10);
  sqcRZGate(q, -3.116045838444084, 10);
  sqcRYGate(q, 1.9638182929936923, 11);
  sqcRZGate(q, -0.024634510723916318, 11);
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
  sqcRYGate(q, 1.2795917550514422, 0);
  sqcRZGate(q, -1.6196616326059134, 0);
  sqcRYGate(q, -1.8857866268072012, 1);
  sqcRZGate(q, -0.46834140483282544, 1);
  sqcRYGate(q, -0.0005332326902084041, 2);
  sqcRZGate(q, 2.9902958222860425, 2);
  sqcRYGate(q, 3.141509546598142, 3);
  sqcRZGate(q, -0.9439253406856362, 3);
  sqcRYGate(q, 3.1412545321906813, 4);
  sqcRZGate(q, -1.1335978852906834, 4);
  sqcRYGate(q, -2.6759762178775195, 5);
  sqcRZGate(q, -2.0343502144324566, 5);
  sqcRYGate(q, -1.54556372866232, 6);
  sqcRZGate(q, -1.3118099949580015, 6);
  sqcRYGate(q, 1.2470026759625972, 7);
  sqcRZGate(q, -0.32949235572962066, 7);
  sqcRYGate(q, -3.137077825052607, 8);
  sqcRZGate(q, -2.381295534286566, 8);
  sqcRYGate(q, -0.7345739728330143, 9);
  sqcRZGate(q, 2.9144014235511695, 9);
  sqcRYGate(q, -2.0327365107447672, 10);
  sqcRZGate(q, 2.9441051065588484, 10);
  sqcRYGate(q, 2.0838601361376665, 11);
  sqcRZGate(q, -1.3758681674279152, 11);
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
  sqcRYGate(q, -2.2610606520604257, 0);
  sqcRZGate(q, 2.8701147673659406, 0);
  sqcRYGate(q, 2.6215170250717317, 1);
  sqcRZGate(q, 1.5442774005725315, 1);
  sqcRYGate(q, -1.7027070147351973, 2);
  sqcRZGate(q, 1.158888775329178, 2);
  sqcRYGate(q, 2.753924283912286, 3);
  sqcRZGate(q, 2.506767499575776, 3);
  sqcRYGate(q, -1.6237276165377548, 4);
  sqcRZGate(q, -2.761579818318741, 4);
  sqcRYGate(q, -0.3711784023046358, 5);
  sqcRZGate(q, 1.7534179935818548, 5);
  sqcRYGate(q, 3.1035864550765155, 6);
  sqcRZGate(q, -2.326450991849784, 6);
  sqcRYGate(q, -1.8898436133238206, 7);
  sqcRZGate(q, -2.47788787039726, 7);
  sqcRYGate(q, 3.115058514428443, 8);
  sqcRZGate(q, 0.30495925556862774, 8);
  sqcRYGate(q, 1.1370900731037992, 9);
  sqcRZGate(q, 2.766110803322374, 9);
  sqcRYGate(q, 0.9078277292283822, 10);
  sqcRZGate(q, 0.07037207477560603, 10);
  sqcRYGate(q, -3.0959126933388523, 11);
  sqcRZGate(q, 2.7205337005732817, 11);
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
  sqcRYGate(q, 0.4209069468740872, 0);
  sqcRZGate(q, 0.8538547243538658, 0);
  sqcRYGate(q, -2.6807972660482204, 1);
  sqcRZGate(q, -0.42875762167548626, 1);
  sqcRYGate(q, 2.819795195259222, 2);
  sqcRZGate(q, 0.9084859531051571, 2);
  sqcRYGate(q, 3.1337914410453203, 3);
  sqcRZGate(q, 2.5501687289012724, 3);
  sqcRYGate(q, -2.4859484886500853, 4);
  sqcRZGate(q, 0.04727464419254425, 4);
  sqcRYGate(q, -2.4604282060650293, 5);
  sqcRZGate(q, -3.022370160136618, 5);
  sqcRYGate(q, 0.012746620811988407, 6);
  sqcRZGate(q, -3.1108385469185182, 6);
  sqcRYGate(q, 0.03947258597790348, 7);
  sqcRZGate(q, 2.224032762064148, 7);
  sqcRYGate(q, -1.5951951040536885, 8);
  sqcRZGate(q, 2.666187358394361, 8);
  sqcRYGate(q, -2.377481313730786, 9);
  sqcRZGate(q, 0.9247983707687147, 9);
  sqcRYGate(q, -2.823921539823033, 10);
  sqcRZGate(q, -2.41210871042003, 10);
  sqcRYGate(q, 1.6992434250448845, 11);
  sqcRZGate(q, -1.36070250942126, 11);
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
  sqcRYGate(q, -2.1054710441988194, 0);
  sqcRZGate(q, -1.9896084344282379, 0);
  sqcRYGate(q, -1.0977806752275887, 1);
  sqcRZGate(q, -0.8988914041593142, 1);
  sqcRYGate(q, -2.823710987977977, 2);
  sqcRZGate(q, -1.8403966282995783, 2);
  sqcRYGate(q, -3.1412936940696214, 3);
  sqcRZGate(q, 2.900693788493607, 3);
  sqcRYGate(q, -3.1412035586082845, 4);
  sqcRZGate(q, -0.07331161519063843, 4);
  sqcRYGate(q, 0.03874035239207707, 5);
  sqcRZGate(q, 0.7683359418667424, 5);
  sqcRYGate(q, -2.982023419923467, 6);
  sqcRZGate(q, 0.7739044637483972, 6);
  sqcRYGate(q, -0.10482299090585911, 7);
  sqcRZGate(q, 2.579482214091704, 7);
  sqcRYGate(q, -0.8363542335323375, 8);
  sqcRZGate(q, -1.6051720313671165, 8);
  sqcRYGate(q, 0.021699652688106353, 9);
  sqcRZGate(q, -1.6921000622128515, 9);
  sqcRYGate(q, -1.8981378638086577, 10);
  sqcRZGate(q, -2.9470236553987355, 10);
  sqcRYGate(q, 0.20425620405987238, 11);
  sqcRZGate(q, 1.5920883040964726, 11);
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
  sqcRYGate(q, 1.827510627750193, 0);
  sqcRZGate(q, -2.4186087224888833, 0);
  sqcRYGate(q, 0.5414627873790292, 1);
  sqcRZGate(q, 2.821221664964051, 1);
  sqcRYGate(q, -3.03714750986275, 2);
  sqcRZGate(q, 1.0272760160830032, 2);
  sqcRYGate(q, -1.5621743478658638, 3);
  sqcRZGate(q, 1.6157127524446002, 3);
  sqcRYGate(q, 2.336946200144844, 4);
  sqcRZGate(q, -1.0428286106702735, 4);
  sqcRYGate(q, 2.21183315272006, 5);
  sqcRZGate(q, -1.1972475563697516, 5);
  sqcRYGate(q, 1.3207473467495272, 6);
  sqcRZGate(q, -0.012268161994343886, 6);
  sqcRYGate(q, -3.141385780272973, 7);
  sqcRZGate(q, 0.3608099702644038, 7);
  sqcRYGate(q, -0.009219221328121918, 8);
  sqcRZGate(q, -1.6469563215940743, 8);
  sqcRYGate(q, -0.9401037087393105, 9);
  sqcRZGate(q, 0.4709340532409934, 9);
  sqcRYGate(q, -0.6019957465361694, 10);
  sqcRZGate(q, 0.9912773325376687, 10);
  sqcRYGate(q, -0.6655189796473309, 11);
  sqcRZGate(q, -1.729554120557979, 11);
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
  sqcRYGate(q, 2.811172046015727, 0);
  sqcRZGate(q, -1.338137577694817, 0);
  sqcRYGate(q, 3.0387167978790406, 1);
  sqcRZGate(q, -3.0651980366234577, 1);
  sqcRYGate(q, -1.806624764909587, 2);
  sqcRZGate(q, -2.137022484626682, 2);
  sqcRYGate(q, -3.1415016604078123, 3);
  sqcRZGate(q, -0.6527604839684907, 3);
  sqcRYGate(q, -0.01876442251451427, 4);
  sqcRZGate(q, 0.0865367684260432, 4);
  sqcRYGate(q, 2.8158926568566818, 5);
  sqcRZGate(q, -1.3278958437935309, 5);
  sqcRYGate(q, 0.5813564349348112, 6);
  sqcRZGate(q, -0.07704023683687478, 6);
  sqcRYGate(q, 0.013699188808430816, 7);
  sqcRZGate(q, -0.4781549999797763, 7);
  sqcRYGate(q, -0.3796148859265287, 8);
  sqcRZGate(q, 0.21600969874385412, 8);
  sqcRYGate(q, -0.033583903387441806, 9);
  sqcRZGate(q, -2.810579668790236, 9);
  sqcRYGate(q, -0.24144928761197884, 10);
  sqcRZGate(q, 2.6291351626727435, 10);
  sqcRYGate(q, 0.41914098844118985, 11);
  sqcRZGate(q, -2.8631505440152454, 11);
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
  sqcRYGate(q, 0.0756170949324699, 0);
  sqcRZGate(q, 2.3728276077944965, 0);
  sqcRYGate(q, 1.7964274617455436, 1);
  sqcRZGate(q, 1.7656844652494086, 1);
  sqcRYGate(q, -2.6296861006107837, 2);
  sqcRZGate(q, -0.06853989371508275, 2);
  sqcRYGate(q, 3.118293157654891, 3);
  sqcRZGate(q, 1.6353178230268182, 3);
  sqcRYGate(q, 0.24815857416119586, 4);
  sqcRZGate(q, -0.28436542219365474, 4);
  sqcRYGate(q, 0.18957193008730988, 5);
  sqcRZGate(q, 0.21392737614738166, 5);
  sqcRYGate(q, -0.890027562264938, 6);
  sqcRZGate(q, -1.1842973006452833, 6);
  sqcRYGate(q, -0.00038643525412613265, 7);
  sqcRZGate(q, 2.09875602619385, 7);
  sqcRYGate(q, -3.11074953491293, 8);
  sqcRZGate(q, 0.8106785444246493, 8);
  sqcRYGate(q, -0.5705341061626719, 9);
  sqcRZGate(q, 2.533796349872772, 9);
  sqcRYGate(q, -2.9289070434175, 10);
  sqcRZGate(q, -2.370415705326502, 10);
  sqcRYGate(q, 1.8293245671226281, 11);
  sqcRZGate(q, 1.6704633216913356, 11);
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
  sqcRYGate(q, -2.631614445743483, 0);
  sqcRZGate(q, -0.8944016982195784, 0);
  sqcRYGate(q, -1.5888748323897517, 1);
  sqcRZGate(q, -1.3542383376323803, 1);
  sqcRYGate(q, 0.6880382755138439, 2);
  sqcRZGate(q, -1.3443508085692064, 2);
  sqcRYGate(q, -0.000617429725950025, 3);
  sqcRZGate(q, -2.346365841846178, 3);
  sqcRYGate(q, -0.05632162525948191, 4);
  sqcRZGate(q, -0.7513525153125585, 4);
  sqcRYGate(q, -0.6665538653497126, 5);
  sqcRZGate(q, 3.125877802389571, 5);
  sqcRYGate(q, 0.6937021915687297, 6);
  sqcRZGate(q, 0.5563835375940026, 6);
  sqcRYGate(q, -1.289723260480435, 7);
  sqcRZGate(q, 1.5259929730506492, 7);
  sqcRYGate(q, 2.8444255363847475, 8);
  sqcRZGate(q, 2.06467012113221, 8);
  sqcRYGate(q, 0.11367963142860127, 9);
  sqcRZGate(q, -2.542295603558241, 9);
  sqcRYGate(q, 2.524281571902146, 10);
  sqcRZGate(q, -0.36746953617843686, 10);
  sqcRYGate(q, 2.059808872554037, 11);
  sqcRZGate(q, 2.4083410688288387, 11);
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
  sqcRYGate(q, -1.2736332560960637, 0);
  sqcRZGate(q, -2.7523999354797306, 0);
  sqcRYGate(q, -0.9718586575870527, 1);
  sqcRZGate(q, 2.5633628430655846, 1);
  sqcRYGate(q, -1.4081654627588174, 2);
  sqcRZGate(q, -2.2653575048712016, 2);
  sqcRYGate(q, -3.089315712931989, 3);
  sqcRZGate(q, 2.0672853946296685, 3);
  sqcRYGate(q, 0.4967760948142601, 4);
  sqcRZGate(q, -0.47701752653779733, 4);
  sqcRYGate(q, 3.096153414055209, 5);
  sqcRZGate(q, 2.218817667341777, 5);
  sqcRYGate(q, -3.131633597551864, 6);
  sqcRZGate(q, -0.24392147566340494, 6);
  sqcRYGate(q, -3.1412828580846477, 7);
  sqcRZGate(q, -0.2562543554214438, 7);
  sqcRYGate(q, 0.07025869023432398, 8);
  sqcRZGate(q, 1.7147823393526525, 8);
  sqcRYGate(q, -2.721270789775886, 9);
  sqcRZGate(q, -2.6082022462875347, 9);
  sqcRYGate(q, 1.2810529378414888, 10);
  sqcRZGate(q, 1.0334244343669656, 10);
  sqcRYGate(q, 0.2799171372192069, 11);
  sqcRZGate(q, -2.9282288212237892, 11);
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
  sqcRYGate(q, 2.3818492568350234, 0);
  sqcRZGate(q, -2.198306788223859, 0);
  sqcRYGate(q, -0.12653868514006916, 1);
  sqcRZGate(q, -0.42646884630590165, 1);
  sqcRYGate(q, 0.4783665273700297, 2);
  sqcRZGate(q, 1.1306350411287795, 2);
  sqcRYGate(q, 3.1378589365177674, 3);
  sqcRZGate(q, -3.029563041366649, 3);
  sqcRYGate(q, 0.007401289952045254, 4);
  sqcRZGate(q, 2.169168979605569, 4);
  sqcRYGate(q, 0.35862306154934653, 5);
  sqcRZGate(q, -0.6435881749629022, 5);
  sqcRYGate(q, -1.2181345903119263, 6);
  sqcRZGate(q, 0.16951536706019696, 6);
  sqcRYGate(q, 2.16328247697328, 7);
  sqcRZGate(q, -1.172728116910294, 7);
  sqcRYGate(q, 0.6202990807283567, 8);
  sqcRZGate(q, -1.5307389198500205, 8);
  sqcRYGate(q, 0.4487342150728679, 9);
  sqcRZGate(q, -1.9106642544137564, 9);
  sqcRYGate(q, 2.6843847605156324, 10);
  sqcRZGate(q, -0.6136795035834437, 10);
  sqcRYGate(q, 0.7394908368036284, 11);
  sqcRZGate(q, -2.6153248334002366, 11);
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
  sqcRYGate(q, -1.5798442772321684, 0);
  sqcRZGate(q, -0.19784411716155018, 0);
  sqcRYGate(q, 1.6356777733339802, 1);
  sqcRZGate(q, -0.26823762464096973, 1);
  sqcRYGate(q, 0.18483331893831512, 2);
  sqcRZGate(q, -0.39257048395052774, 2);
  sqcRYGate(q, 1.615574428934788, 3);
  sqcRZGate(q, -0.12887199359196444, 3);
  sqcRYGate(q, 2.5065023491039233, 4);
  sqcRZGate(q, 0.6393348653115096, 4);
  sqcRYGate(q, 0.9247666934589684, 5);
  sqcRZGate(q, 2.7444714594468222, 5);
  sqcRYGate(q, -2.75605197320356, 6);
  sqcRZGate(q, -2.8771927233963215, 6);
  sqcRYGate(q, -1.6168289950568475, 7);
  sqcRZGate(q, -0.5303746197880672, 7);
  sqcRYGate(q, -0.03817734959438468, 8);
  sqcRZGate(q, 2.7484767528639162, 8);
  sqcRYGate(q, 1.8783246638096482, 9);
  sqcRZGate(q, -2.53720034036881, 9);
  sqcRYGate(q, 0.20109170540583213, 10);
  sqcRZGate(q, 1.6424010500919488, 10);
  sqcRYGate(q, -2.6636499380138132, 11);
  sqcRZGate(q, -2.937980986891507, 11);
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
  sqcRYGate(q, -2.10113997428316, 0);
  sqcRZGate(q, 1.9984005736393833, 0);
  sqcRYGate(q, 3.0972937001763645, 1);
  sqcRZGate(q, 0.5813432057281617, 1);
  sqcRYGate(q, -3.122349622234436, 2);
  sqcRZGate(q, -2.0169612137394477, 2);
  sqcRYGate(q, 0.009547833501312792, 3);
  sqcRZGate(q, -2.4371056400798095, 3);
  sqcRYGate(q, -0.0034394279512328383, 4);
  sqcRZGate(q, -0.21659389862066905, 4);
  sqcRYGate(q, 2.3353512187671646, 5);
  sqcRZGate(q, -2.7498886724953127, 5);
  sqcRYGate(q, -1.76368798354974, 6);
  sqcRZGate(q, -1.3726557647052875, 6);
  sqcRYGate(q, -0.05894792257108161, 7);
  sqcRZGate(q, -0.3191164245136464, 7);
  sqcRYGate(q, 3.1298575662750205, 8);
  sqcRZGate(q, -2.6508291785793774, 8);
  sqcRYGate(q, 1.5382125380178486, 9);
  sqcRZGate(q, -2.007351159130627, 9);
  sqcRYGate(q, -0.3766500381506521, 10);
  sqcRZGate(q, -1.410078115803022, 10);
  sqcRYGate(q, 0.7920600185010748, 11);
  sqcRZGate(q, -1.2608197564962649, 11);
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
  sqcRYGate(q, 0.03160243347403391, 0);
  sqcRZGate(q, -0.25826454107855884, 0);
  sqcRYGate(q, 2.609684062208047, 1);
  sqcRZGate(q, -0.9454275982090204, 1);
  sqcRYGate(q, 2.0676346246360624, 2);
  sqcRZGate(q, -0.5025462695221323, 2);
  sqcRYGate(q, 1.504095032872328, 3);
  sqcRZGate(q, -1.794698189796279, 3);
  sqcRYGate(q, 2.9386049794085864, 4);
  sqcRZGate(q, -0.509506298971052, 4);
  sqcRYGate(q, 0.0073290929986748075, 5);
  sqcRZGate(q, 1.1450287004470405, 5);
  sqcRYGate(q, 3.139724055109234, 6);
  sqcRZGate(q, -1.371903981516291, 6);
  sqcRYGate(q, -0.0035380268393978695, 7);
  sqcRZGate(q, -0.06824916461985796, 7);
  sqcRYGate(q, 0.012282994406622503, 8);
  sqcRZGate(q, -1.1081963808513673, 8);
  sqcRYGate(q, -0.012680197875835296, 9);
  sqcRZGate(q, 2.623678032557174, 9);
  sqcRYGate(q, -3.103776057619005, 10);
  sqcRZGate(q, -2.3961725738833692, 10);
  sqcRYGate(q, -0.587236305858662, 11);
  sqcRZGate(q, -1.9526402471413293, 11);
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
  sqcRYGate(q, 0.7830562935418719, 0);
  sqcRZGate(q, 0.5875678955402776, 0);
  sqcRYGate(q, 0.5664496163622417, 1);
  sqcRZGate(q, -1.0733136404721255, 1);
  sqcRYGate(q, 0.19016998119226008, 2);
  sqcRZGate(q, -1.3172350702552134, 2);
  sqcRYGate(q, 3.1380234332239785, 3);
  sqcRZGate(q, 1.2599598815064361, 3);
  sqcRYGate(q, 2.090314220288359, 4);
  sqcRZGate(q, -2.8188752016130394, 4);
  sqcRYGate(q, 2.7909920508765813, 5);
  sqcRZGate(q, 2.377178405029398, 5);
  sqcRYGate(q, -1.3775465845627328, 6);
  sqcRZGate(q, 2.929819555247558, 6);
  sqcRYGate(q, -0.04728612468565412, 7);
  sqcRZGate(q, 0.9125395243482579, 7);
  sqcRYGate(q, 3.1366666968659787, 8);
  sqcRZGate(q, -2.9343839229618345, 8);
  sqcRYGate(q, -2.692090920951196, 9);
  sqcRZGate(q, -2.6972879162014385, 9);
  sqcRYGate(q, -2.6863104566041804, 10);
  sqcRZGate(q, 0.08061538828443648, 10);
  sqcRYGate(q, 0.13205575433493702, 11);
  sqcRZGate(q, 1.6505638327595848, 11);
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
  sqcRYGate(q, -1.9986759540026817, 0);
  sqcRZGate(q, -0.8315676788868825, 0);
  sqcRYGate(q, -1.5478955959901592, 1);
  sqcRZGate(q, 1.0022481096013003, 1);
  sqcRYGate(q, -2.402683382114717, 2);
  sqcRZGate(q, -2.9364239737440543, 2);
  sqcRYGate(q, -3.0850204955010327, 3);
  sqcRZGate(q, 0.07306631388994422, 3);
  sqcRYGate(q, 3.139798741295757, 4);
  sqcRZGate(q, -2.898148653193781, 4);
  sqcRYGate(q, -0.0023349217091836794, 5);
  sqcRZGate(q, 2.5977855033856083, 5);
  sqcRYGate(q, 0.4032120583785589, 6);
  sqcRZGate(q, 1.3313746504139976, 6);
  sqcRYGate(q, 1.5215702218085143, 7);
  sqcRZGate(q, 2.54993616025292, 7);
  sqcRYGate(q, -3.001269084829404, 8);
  sqcRZGate(q, -0.08888000796393936, 8);
  sqcRYGate(q, 1.754198057788111, 9);
  sqcRZGate(q, -2.966291893224565, 9);
  sqcRYGate(q, -2.2938948362481044, 10);
  sqcRZGate(q, -0.37690869316548975, 10);
  sqcRYGate(q, 3.101821394472379, 11);
  sqcRZGate(q, 1.758082372230752, 11);
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
  sqcRYGate(q, 1.6373424309523723, 0);
  sqcRZGate(q, 1.978238980141931, 0);
  sqcRYGate(q, -3.1145146511752557, 1);
  sqcRZGate(q, -0.389050298894414, 1);
  sqcRYGate(q, -3.1377901009605944, 2);
  sqcRZGate(q, 1.2846009550186601, 2);
  sqcRYGate(q, 3.128060177861677, 3);
  sqcRZGate(q, -0.01285796700908115, 3);
  sqcRYGate(q, 2.0793157899678922, 4);
  sqcRZGate(q, -2.983976681570379, 4);
  sqcRYGate(q, -0.46911577670439547, 5);
  sqcRZGate(q, 0.693387223183719, 5);
  sqcRYGate(q, 3.117752075682796, 6);
  sqcRZGate(q, -1.4000239020585932, 6);
  sqcRYGate(q, -3.032534219323479, 7);
  sqcRZGate(q, -0.02526100221993044, 7);
  sqcRYGate(q, 2.5704144027261555, 8);
  sqcRZGate(q, -0.8044985992740136, 8);
  sqcRYGate(q, -0.17839300375821346, 9);
  sqcRZGate(q, -0.5255863271397584, 9);
  sqcRYGate(q, 3.0820611945206253, 10);
  sqcRZGate(q, 1.38944515797323, 10);
  sqcRYGate(q, -2.7329450451389263, 11);
  sqcRZGate(q, -0.852826479673663, 11);
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
  sqcRYGate(q, 0.0729250843696995, 0);
  sqcRZGate(q, -1.3775387091952602, 0);
  sqcRYGate(q, -1.3612082481617644, 1);
  sqcRZGate(q, -1.681466608428189, 1);
  sqcRYGate(q, 1.1819003753947914, 2);
  sqcRZGate(q, 0.9710068782946745, 2);
  sqcRYGate(q, -1.1554539130194952, 3);
  sqcRZGate(q, -0.8948899870842569, 3);
  sqcRYGate(q, 0.28104575869607373, 4);
  sqcRZGate(q, 2.595950386936871, 4);
  sqcRYGate(q, -2.07807334479776, 5);
  sqcRZGate(q, -2.4973799060559694, 5);
  sqcRYGate(q, 0.3073103476207963, 6);
  sqcRZGate(q, 0.746467263693442, 6);
  sqcRYGate(q, -0.0003986693598649893, 7);
  sqcRZGate(q, -1.6121474784786243, 7);
  sqcRYGate(q, -2.9641928060998404, 8);
  sqcRZGate(q, -1.4492364726891482, 8);
  sqcRYGate(q, -0.7513203454841215, 9);
  sqcRZGate(q, -2.7440433067413124, 9);
  sqcRYGate(q, -1.1600569688080478, 10);
  sqcRZGate(q, -1.833984139076129, 10);
  sqcRYGate(q, -0.09712393634778316, 11);
  sqcRZGate(q, -1.8113866174671394, 11);
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
  sqcRYGate(q, 0.40156354641674685, 0);
  sqcRZGate(q, 1.86873595677943, 0);
  sqcRYGate(q, 3.0319876745206047, 1);
  sqcRZGate(q, 0.5450550386005668, 1);
  sqcRYGate(q, -1.2907082854563345, 2);
  sqcRZGate(q, 0.017619966433144008, 2);
  sqcRYGate(q, 3.1036821610260508, 3);
  sqcRZGate(q, 2.9486796664011976, 3);
  sqcRYGate(q, 3.1410098277703993, 4);
  sqcRZGate(q, 1.0418693706632036, 4);
  sqcRYGate(q, -0.01006902135726872, 5);
  sqcRZGate(q, 1.5253612253994466, 5);
  sqcRYGate(q, -0.08353549207811373, 6);
  sqcRZGate(q, -1.5516886974038693, 6);
  sqcRYGate(q, -3.1399772925985876, 7);
  sqcRZGate(q, 3.0206310433432426, 7);
  sqcRYGate(q, -1.2464964210592795, 8);
  sqcRZGate(q, -1.8280385713360054, 8);
  sqcRYGate(q, 3.0441094683125702, 9);
  sqcRZGate(q, -2.294155304520565, 9);
  sqcRYGate(q, -0.06808528066890851, 10);
  sqcRZGate(q, 0.2105120504203564, 10);
  sqcRYGate(q, -1.071421892051668, 11);
  sqcRZGate(q, -2.9148053650021666, 11);
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
  sqcRYGate(q, 1.043393124332823, 0);
  sqcRZGate(q, 0.8201195942563766, 0);
  sqcRYGate(q, 0.0016120466765672248, 1);
  sqcRZGate(q, -1.3657342479468664, 1);
  sqcRYGate(q, -0.6893572645435633, 2);
  sqcRZGate(q, -3.1393950460166296, 2);
  sqcRYGate(q, -3.1324932490805995, 3);
  sqcRZGate(q, 1.8433484726908107, 3);
  sqcRYGate(q, -2.331857115255425, 4);
  sqcRZGate(q, -0.17330350640993686, 4);
  sqcRYGate(q, -1.8002629566602073, 5);
  sqcRZGate(q, -1.5152157693652626, 5);
  sqcRYGate(q, 1.6762588507038239, 6);
  sqcRZGate(q, 3.1013745720201658, 6);
  sqcRYGate(q, 0.012983792423127171, 7);
  sqcRZGate(q, -0.9631440067134402, 7);
  sqcRYGate(q, -1.518300973305822, 8);
  sqcRZGate(q, 2.088772301408256, 8);
  sqcRYGate(q, 3.0247532634301284, 9);
  sqcRZGate(q, -2.0205857261126754, 9);
  sqcRYGate(q, -2.239017554144576, 10);
  sqcRZGate(q, 2.0347469532553513, 10);
  sqcRYGate(q, -0.4363441341269212, 11);
  sqcRZGate(q, 0.9899272000651435, 11);
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
  sqcRYGate(q, 0.9290455876598347, 0);
  sqcRZGate(q, 1.2652435514629392, 0);
  sqcRYGate(q, -0.3745592814936243, 1);
  sqcRZGate(q, 2.167984520710636, 1);
  sqcRYGate(q, -1.8637826445937866, 2);
  sqcRZGate(q, 2.0036651462991215, 2);
  sqcRYGate(q, -3.114955764265904, 3);
  sqcRZGate(q, 2.874305404923953, 3);
  sqcRYGate(q, -0.0014676537175413507, 4);
  sqcRZGate(q, -1.6883874274178465, 4);
  sqcRYGate(q, -0.002204164980296032, 5);
  sqcRZGate(q, -1.3550678316088478, 5);
  sqcRYGate(q, 3.071788326397074, 6);
  sqcRZGate(q, -0.6538112598894549, 6);
  sqcRYGate(q, 0.013203876246652868, 7);
  sqcRZGate(q, -2.8572086385246154, 7);
  sqcRYGate(q, 2.2788154305314645, 8);
  sqcRZGate(q, -1.883889690415616, 8);
  sqcRYGate(q, 3.1361931692013196, 9);
  sqcRZGate(q, -0.13917341451866178, 9);
  sqcRYGate(q, 3.0521217788190222, 10);
  sqcRZGate(q, 2.748782170010667, 10);
  sqcRYGate(q, 2.2397082035195974, 11);
  sqcRZGate(q, 2.0568154777601366, 11);
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
  sqcRYGate(q, 2.659602262405412, 0);
  sqcRZGate(q, -1.0832538469144786, 0);
  sqcRYGate(q, 1.240601327950609, 1);
  sqcRZGate(q, -1.2892025830674756, 1);
  sqcRYGate(q, 0.1587137574435562, 2);
  sqcRZGate(q, 2.3990386447674887, 2);
  sqcRYGate(q, 2.6375965020781598, 3);
  sqcRZGate(q, -0.9241594692842048, 3);
  sqcRYGate(q, 0.9821176460803845, 4);
  sqcRZGate(q, -1.5454846681634296, 4);
  sqcRYGate(q, -2.8009119587457425, 5);
  sqcRZGate(q, -2.117037167608453, 5);
  sqcRYGate(q, -2.7180698938378502, 6);
  sqcRZGate(q, -1.829730819628118, 6);
  sqcRYGate(q, 1.1804517548090516, 7);
  sqcRZGate(q, -1.3339495080428712, 7);
  sqcRYGate(q, -0.2116020899976059, 8);
  sqcRZGate(q, -2.0130703793559945, 8);
  sqcRYGate(q, 2.6971245763369094, 9);
  sqcRZGate(q, -2.6068134624898405, 9);
  sqcRYGate(q, 1.9753600954766823, 10);
  sqcRZGate(q, -2.7646883204983, 10);
  sqcRYGate(q, -2.997206975189857, 11);
  sqcRZGate(q, 1.7183825849661192, 11);

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
