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

  sqcRYGate(q, 0.720395605911462, 0);
  sqcRZGate(q, -2.845353392261002, 0);
  sqcRYGate(q, -0.12316419752493868, 1);
  sqcRZGate(q, 1.3185998597563282, 1);
  sqcRYGate(q, -0.5933515805395483, 2);
  sqcRZGate(q, -2.1804726788094198, 2);
  sqcRYGate(q, 3.0991503924551753, 3);
  sqcRZGate(q, -2.5627045483377118, 3);
  sqcRYGate(q, -2.889173724623431, 4);
  sqcRZGate(q, 0.7671765766731635, 4);
  sqcRYGate(q, -3.043467451757484, 5);
  sqcRZGate(q, -1.8028258191282185, 5);
  sqcRYGate(q, -2.340149484980622, 6);
  sqcRZGate(q, 0.5724816719633042, 6);
  sqcRYGate(q, 1.11284524630368, 7);
  sqcRZGate(q, 1.1695620111521041, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.30913814880139395, 0);
  sqcRZGate(q, 3.0803406427609232, 0);
  sqcRYGate(q, 2.9959546108341946, 1);
  sqcRZGate(q, 0.5027855277718958, 1);
  sqcRYGate(q, -0.15396832269298585, 2);
  sqcRZGate(q, 0.673353065277147, 2);
  sqcRYGate(q, 0.013080603644585027, 3);
  sqcRZGate(q, -0.9313478382937043, 3);
  sqcRYGate(q, -2.897400035126089, 4);
  sqcRZGate(q, -2.8705605242606853, 4);
  sqcRYGate(q, -3.0984496758672235, 5);
  sqcRZGate(q, 1.9350532785216115, 5);
  sqcRYGate(q, 2.0693921816550906, 6);
  sqcRZGate(q, 1.461553374214658, 6);
  sqcRYGate(q, 0.8752102388199727, 7);
  sqcRZGate(q, 1.9818505897915706, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.5658525591311463, 0);
  sqcRZGate(q, -1.4129559564687193, 0);
  sqcRYGate(q, 1.336151489408218, 1);
  sqcRZGate(q, -2.5013540483461627, 1);
  sqcRYGate(q, 2.888866485644524, 2);
  sqcRZGate(q, -1.4977163821544046, 2);
  sqcRYGate(q, -3.1301067586853857, 3);
  sqcRZGate(q, -0.8127113067223631, 3);
  sqcRYGate(q, 1.728504642580611, 4);
  sqcRZGate(q, 2.87031059419039, 4);
  sqcRYGate(q, 0.07135103203048399, 5);
  sqcRZGate(q, -1.097700419963712, 5);
  sqcRYGate(q, 3.0867874394275763, 6);
  sqcRZGate(q, -2.0341176312949862, 6);
  sqcRYGate(q, 0.902854793408369, 7);
  sqcRZGate(q, -1.7629310951852808, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.2875340273673554, 0);
  sqcRZGate(q, 2.1226379612935924, 0);
  sqcRYGate(q, 3.0874612009395253, 1);
  sqcRZGate(q, 2.0706022537232083, 1);
  sqcRYGate(q, 0.7063819272007815, 2);
  sqcRZGate(q, 2.036854653619372, 2);
  sqcRYGate(q, -0.0020424755175509875, 3);
  sqcRZGate(q, 1.428010976261925, 3);
  sqcRYGate(q, -0.14665424425303897, 4);
  sqcRZGate(q, -0.43285411547506725, 4);
  sqcRYGate(q, -0.022162863581335228, 5);
  sqcRZGate(q, -1.6120115753164213, 5);
  sqcRYGate(q, 0.5030262894418295, 6);
  sqcRZGate(q, -2.1077282112684435, 6);
  sqcRYGate(q, -1.2826843526421186, 7);
  sqcRZGate(q, -1.3726003574687502, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.5911122558539903, 0);
  sqcRZGate(q, 1.0445964589059082, 0);
  sqcRYGate(q, 1.9866654454711883, 1);
  sqcRZGate(q, -1.7053982745733085, 1);
  sqcRYGate(q, -0.1423217872113146, 2);
  sqcRZGate(q, 2.6026212513600173, 2);
  sqcRYGate(q, -3.1355291302386696, 3);
  sqcRZGate(q, -2.561054308360221, 3);
  sqcRYGate(q, -0.676940849691306, 4);
  sqcRZGate(q, -1.7839933122463778, 4);
  sqcRYGate(q, -0.01322559927790542, 5);
  sqcRZGate(q, 0.9574860270194656, 5);
  sqcRYGate(q, 1.8514724837360967, 6);
  sqcRZGate(q, -0.7176288219345126, 6);
  sqcRYGate(q, -2.922623356356577, 7);
  sqcRZGate(q, 0.7409835901758832, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.3726525996548675, 0);
  sqcRZGate(q, -3.038890780703516, 0);
  sqcRYGate(q, 2.8380051229430814, 1);
  sqcRZGate(q, 0.06380186486685258, 1);
  sqcRYGate(q, -2.76241496151741, 2);
  sqcRZGate(q, -0.023664721238124426, 2);
  sqcRYGate(q, 3.134909622411067, 3);
  sqcRZGate(q, -1.1953563849679494, 3);
  sqcRYGate(q, 2.188001142511591, 4);
  sqcRZGate(q, -2.8988870630984285, 4);
  sqcRYGate(q, -3.137099077625505, 5);
  sqcRZGate(q, 2.3333994003053338, 5);
  sqcRYGate(q, 1.0228289749285158, 6);
  sqcRZGate(q, -1.150400026917402, 6);
  sqcRYGate(q, -2.455178493645795, 7);
  sqcRZGate(q, 0.5022373879447919, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.749806551182132, 0);
  sqcRZGate(q, 0.2827441041028572, 0);
  sqcRYGate(q, -0.6945778469085173, 1);
  sqcRZGate(q, 0.3278683770770321, 1);
  sqcRYGate(q, 2.3186336042002744, 2);
  sqcRZGate(q, -2.5834123963374283, 2);
  sqcRYGate(q, 0.08963447329138409, 3);
  sqcRZGate(q, 1.367129340174868, 3);
  sqcRYGate(q, -2.208895706277194, 4);
  sqcRZGate(q, 0.239800635875359, 4);
  sqcRYGate(q, -2.7349205888890413, 5);
  sqcRZGate(q, -0.9489252997613742, 5);
  sqcRYGate(q, 1.3591512775683323, 6);
  sqcRZGate(q, -2.6939919828414696, 6);
  sqcRYGate(q, 1.7134838201371596, 7);
  sqcRZGate(q, 1.9846348316990285, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.0264550145966833, 0);
  sqcRZGate(q, 1.1175870865832385, 0);
  sqcRYGate(q, 0.16186599479731267, 1);
  sqcRZGate(q, -2.7736678776404258, 1);
  sqcRYGate(q, 3.003310743226291, 2);
  sqcRZGate(q, 2.485587765893745, 2);
  sqcRYGate(q, -0.004873470131785886, 3);
  sqcRZGate(q, -2.653436089094012, 3);
  sqcRYGate(q, 3.1354135155424814, 4);
  sqcRZGate(q, -1.6962793976328285, 4);
  sqcRYGate(q, 0.8527785092132982, 5);
  sqcRZGate(q, 2.289245276331642, 5);
  sqcRYGate(q, -2.9421461373859996, 6);
  sqcRZGate(q, -0.7224126031223896, 6);
  sqcRYGate(q, 0.10034050222519471, 7);
  sqcRZGate(q, 1.0794297734887754, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.5515079814655963, 0);
  sqcRZGate(q, -1.4359865399362246, 0);
  sqcRYGate(q, -1.112182313410203, 1);
  sqcRZGate(q, 1.8817288111574735, 1);
  sqcRYGate(q, 1.0365241930152624, 2);
  sqcRZGate(q, -1.7921480454542555, 2);
  sqcRYGate(q, -2.0381380134287683, 3);
  sqcRZGate(q, -0.9968589337002529, 3);
  sqcRYGate(q, -3.1318277691365135, 4);
  sqcRZGate(q, 1.539333970454376, 4);
  sqcRYGate(q, 0.013437631758416835, 5);
  sqcRZGate(q, -2.2796052870523527, 5);
  sqcRYGate(q, 3.114248010718144, 6);
  sqcRZGate(q, 0.22466716499304423, 6);
  sqcRYGate(q, 0.4248384786480415, 7);
  sqcRZGate(q, -1.8836699105860983, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.10736092442542125, 0);
  sqcRZGate(q, -2.131029909206961, 0);
  sqcRYGate(q, -0.393696665755189, 1);
  sqcRZGate(q, -3.079085181143169, 1);
  sqcRYGate(q, 0.4155316979785295, 2);
  sqcRZGate(q, 0.6479481374535372, 2);
  sqcRYGate(q, 0.09818446391685764, 3);
  sqcRZGate(q, -1.664522571298541, 3);
  sqcRYGate(q, -6.345160724663401e-05, 4);
  sqcRZGate(q, 2.3600345703217283, 4);
  sqcRYGate(q, -0.8760318307751217, 5);
  sqcRZGate(q, 0.7531260828947454, 5);
  sqcRYGate(q, 0.44755557564788884, 6);
  sqcRZGate(q, 0.2576377165599355, 6);
  sqcRYGate(q, -1.1045215193341607, 7);
  sqcRZGate(q, -0.6426335403738132, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.489044362170362, 0);
  sqcRZGate(q, 0.6622765380109007, 0);
  sqcRYGate(q, 3.07717913275354, 1);
  sqcRZGate(q, -1.4747331962888994, 1);
  sqcRYGate(q, 0.05033019621344865, 2);
  sqcRZGate(q, -2.4312741161204805, 2);
  sqcRYGate(q, -1.976336144323163, 3);
  sqcRZGate(q, -3.1244039633751783, 3);
  sqcRYGate(q, -2.296204783349569, 4);
  sqcRZGate(q, -1.7058465324219105, 4);
  sqcRYGate(q, 2.7171262114732375, 5);
  sqcRZGate(q, 1.6830869795466286, 5);
  sqcRYGate(q, -0.9391372295813339, 6);
  sqcRZGate(q, -2.9900762756465635, 6);
  sqcRYGate(q, -0.2184836438524845, 7);
  sqcRZGate(q, 2.557697462118485, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.03113340380122054, 0);
  sqcRZGate(q, 0.5920575541414781, 0);
  sqcRYGate(q, -2.478553999492129, 1);
  sqcRZGate(q, -0.6281449862207662, 1);
  sqcRYGate(q, -1.0784015977238768, 2);
  sqcRZGate(q, -2.1701256665963697, 2);
  sqcRYGate(q, -2.9023494885391274, 3);
  sqcRZGate(q, 1.245937378346813, 3);
  sqcRYGate(q, 2.1111415353240712, 4);
  sqcRZGate(q, 1.0055794855366562, 4);
  sqcRYGate(q, 3.133256278668198, 5);
  sqcRZGate(q, 0.9551490546967951, 5);
  sqcRYGate(q, -2.0696058210839086, 6);
  sqcRZGate(q, 0.9156189703367028, 6);
  sqcRYGate(q, 0.6407443318260038, 7);
  sqcRZGate(q, 3.1277903181102933, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.1013620002513047, 0);
  sqcRZGate(q, -1.5690104319189595, 0);
  sqcRYGate(q, -2.0936707065127167, 1);
  sqcRZGate(q, 1.813465615395394, 1);
  sqcRYGate(q, -0.00962544693438332, 2);
  sqcRZGate(q, 0.24210978884493226, 2);
  sqcRYGate(q, -0.05670156677155358, 3);
  sqcRZGate(q, 2.475892033587805, 3);
  sqcRYGate(q, 0.22793698428446255, 4);
  sqcRZGate(q, -1.3937161884450635, 4);
  sqcRYGate(q, 3.094962028464676, 5);
  sqcRZGate(q, 0.7568001500418782, 5);
  sqcRYGate(q, -2.9979848826766458, 6);
  sqcRZGate(q, 1.3967479603411856, 6);
  sqcRYGate(q, 0.7371340221798137, 7);
  sqcRZGate(q, 1.5999734316984726, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.33476508935233007, 0);
  sqcRZGate(q, 1.769352294150167, 0);
  sqcRYGate(q, -2.3365140445736094, 1);
  sqcRZGate(q, -2.5794529681209513, 1);
  sqcRYGate(q, 3.1303045995556826, 2);
  sqcRZGate(q, 0.7385394329170487, 2);
  sqcRYGate(q, 3.1045228976326613, 3);
  sqcRZGate(q, 0.5504350717058353, 3);
  sqcRYGate(q, -0.37767602116129817, 4);
  sqcRZGate(q, -3.058929950070386, 4);
  sqcRYGate(q, -0.01176904983370405, 5);
  sqcRZGate(q, 0.49279407743048825, 5);
  sqcRYGate(q, 0.18477239311720434, 6);
  sqcRZGate(q, -1.6485032243129838, 6);
  sqcRYGate(q, -0.5213162947259224, 7);
  sqcRZGate(q, 1.5031548637771597, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.8816369002374492, 0);
  sqcRZGate(q, -3.0090983375442297, 0);
  sqcRYGate(q, -2.325274984590955, 1);
  sqcRZGate(q, -2.775791638470673, 1);
  sqcRYGate(q, 0.015055921677022077, 2);
  sqcRZGate(q, 0.5085380277982999, 2);
  sqcRYGate(q, 0.07930266276921573, 3);
  sqcRZGate(q, -1.15772713541881, 3);
  sqcRYGate(q, -1.906792522200311, 4);
  sqcRZGate(q, 1.8044517595166818, 4);
  sqcRYGate(q, -0.02393839117156179, 5);
  sqcRZGate(q, -1.6700082584724703, 5);
  sqcRYGate(q, 1.4818587179112575, 6);
  sqcRZGate(q, 2.66970326343239, 6);
  sqcRYGate(q, 1.4096250533725756, 7);
  sqcRZGate(q, 0.7493816388570443, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.9069658360780575, 0);
  sqcRZGate(q, -2.421944668805824, 0);
  sqcRYGate(q, -1.3777188105506752, 1);
  sqcRZGate(q, -1.1741081951103496, 1);
  sqcRYGate(q, -3.094982697809581, 2);
  sqcRZGate(q, -2.86207180579457, 2);
  sqcRYGate(q, -1.9190049599027326, 3);
  sqcRZGate(q, -1.2212483647531855, 3);
  sqcRYGate(q, 0.03380905508248975, 4);
  sqcRZGate(q, -2.170203684995467, 4);
  sqcRYGate(q, 2.496947094704751, 5);
  sqcRZGate(q, -0.5425103416919351, 5);
  sqcRYGate(q, 1.9752572379684905, 6);
  sqcRZGate(q, -3.0793692216454027, 6);
  sqcRYGate(q, 1.2579853624549275, 7);
  sqcRZGate(q, -2.970244987612852, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.383367204703731, 0);
  sqcRZGate(q, -2.7388625015906958, 0);
  sqcRYGate(q, 0.29579657127900827, 1);
  sqcRZGate(q, 1.0960831369117796, 1);
  sqcRYGate(q, 0.11396394305411547, 2);
  sqcRZGate(q, -1.510975677028811, 2);
  sqcRYGate(q, 0.03202309964782035, 3);
  sqcRZGate(q, 0.06869733501232388, 3);
  sqcRYGate(q, -0.0067325712858385955, 4);
  sqcRZGate(q, -1.074017269353928, 4);
  sqcRYGate(q, 3.09014812826623, 5);
  sqcRZGate(q, -2.350177076614421, 5);
  sqcRYGate(q, -0.37386812911216794, 6);
  sqcRZGate(q, -0.22822911967937554, 6);
  sqcRYGate(q, -1.0874629420556765, 7);
  sqcRZGate(q, 0.6930754705839755, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.501312922689991, 0);
  sqcRZGate(q, -2.9587343185875596, 0);
  sqcRYGate(q, -2.162041563872563, 1);
  sqcRZGate(q, -0.7188593189577209, 1);
  sqcRYGate(q, 0.09087251849301155, 2);
  sqcRZGate(q, -0.35171786394496884, 2);
  sqcRYGate(q, 0.05919622744248988, 3);
  sqcRZGate(q, 2.1735712975910912, 3);
  sqcRYGate(q, 0.42252505203283874, 4);
  sqcRZGate(q, -0.8879237274070269, 4);
  sqcRYGate(q, 0.08311821894220785, 5);
  sqcRZGate(q, 0.25479315336907504, 5);
  sqcRYGate(q, 3.0658051851972936, 6);
  sqcRZGate(q, 2.825756320120393, 6);
  sqcRYGate(q, -2.4290921422470073, 7);
  sqcRZGate(q, 0.5592306449750108, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.9912497654777699, 0);
  sqcRZGate(q, -2.3028722741313583, 0);
  sqcRYGate(q, -1.875127878737488, 1);
  sqcRZGate(q, 2.928181304505571, 1);
  sqcRYGate(q, -2.8283835210437136, 2);
  sqcRZGate(q, 1.5291997066524077, 2);
  sqcRYGate(q, -3.130688944902896, 3);
  sqcRZGate(q, 2.2330155319819545, 3);
  sqcRYGate(q, 3.139936580994732, 4);
  sqcRZGate(q, -1.3107709794041675, 4);
  sqcRYGate(q, -0.00199733526857828, 5);
  sqcRZGate(q, 1.6022944021900638, 5);
  sqcRYGate(q, 1.853474133989321, 6);
  sqcRZGate(q, -1.9879803575884485, 6);
  sqcRYGate(q, 2.180107236072543, 7);
  sqcRZGate(q, -2.9751094905710227, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.753584166446934, 0);
  sqcRZGate(q, 0.14965581310899784, 0);
  sqcRYGate(q, 1.8366306501802436, 1);
  sqcRZGate(q, -1.8029762091244754, 1);
  sqcRYGate(q, 0.46667883103904334, 2);
  sqcRZGate(q, -0.12527419909810586, 2);
  sqcRYGate(q, 3.0824324309814743, 3);
  sqcRZGate(q, -2.395505233466388, 3);
  sqcRYGate(q, 0.9223699547267801, 4);
  sqcRZGate(q, 1.1291960648451114, 4);
  sqcRYGate(q, -1.417425433562056, 5);
  sqcRZGate(q, -2.0699276282204124, 5);
  sqcRYGate(q, -3.0519450850106544, 6);
  sqcRZGate(q, -3.089416041986232, 6);
  sqcRYGate(q, -0.2068081332925812, 7);
  sqcRZGate(q, -1.072742856327717, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.6307279973992945, 0);
  sqcRZGate(q, 0.4431998683270546, 0);
  sqcRYGate(q, -0.8325495117764641, 1);
  sqcRZGate(q, -3.091893048891936, 1);
  sqcRYGate(q, -0.20072975940088877, 2);
  sqcRZGate(q, -3.0452150247269616, 2);
  sqcRYGate(q, 0.023327277983340444, 3);
  sqcRZGate(q, -2.879238708144041, 3);
  sqcRYGate(q, -3.1351889261912302, 4);
  sqcRZGate(q, -0.24998189143434946, 4);
  sqcRYGate(q, -0.0020117768163049393, 5);
  sqcRZGate(q, -2.1329560946227897, 5);
  sqcRYGate(q, -1.4072480109772219, 6);
  sqcRZGate(q, 1.2909204554654925, 6);
  sqcRYGate(q, 0.06566219543728202, 7);
  sqcRZGate(q, 0.8024848792698105, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5633399675861899, 0);
  sqcRZGate(q, 3.1382303349516154, 0);
  sqcRYGate(q, -2.7073528043921247, 1);
  sqcRZGate(q, 2.544049842007921, 1);
  sqcRYGate(q, 1.6497054596203151, 2);
  sqcRZGate(q, -0.09074640348348041, 2);
  sqcRYGate(q, -0.47776096205151575, 3);
  sqcRZGate(q, 3.0785363691950036, 3);
  sqcRYGate(q, -0.27339348955735754, 4);
  sqcRZGate(q, -3.090506001869429, 4);
  sqcRYGate(q, 0.07943775998229066, 5);
  sqcRZGate(q, -0.5119289839905203, 5);
  sqcRYGate(q, -0.11992881197049741, 6);
  sqcRZGate(q, -2.194085759943781, 6);
  sqcRYGate(q, -1.556436962714085, 7);
  sqcRZGate(q, 3.126881084628084, 7);

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
