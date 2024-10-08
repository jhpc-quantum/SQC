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

  sqcRYGate(q, 3.021768533220072, 0);
  sqcRZGate(q, 0.4467553259055828, 0);
  sqcRYGate(q, 2.654126642877844, 1);
  sqcRZGate(q, -0.5917104030502189, 1);
  sqcRYGate(q, 1.484295482419626, 2);
  sqcRZGate(q, -2.9781664746298846, 2);
  sqcRYGate(q, -0.002725298083659105, 3);
  sqcRZGate(q, -0.5504279256248221, 3);
  sqcRYGate(q, 0.22398140576135717, 4);
  sqcRZGate(q, 3.040701218237605, 4);
  sqcRYGate(q, 1.546242498100094, 5);
  sqcRZGate(q, 2.4220232923057563, 5);
  sqcRYGate(q, -1.400329832936553, 6);
  sqcRZGate(q, -0.970901542151311, 6);
  sqcRYGate(q, 1.7302079466652107, 7);
  sqcRZGate(q, 1.987178132527288, 7);
  sqcRYGate(q, 1.8425925391408766, 8);
  sqcRZGate(q, -1.0396699190128542, 8);
  sqcRYGate(q, -0.08252891680113272, 9);
  sqcRZGate(q, -0.6305705600360297, 9);
  sqcRYGate(q, 0.019730219575120778, 10);
  sqcRZGate(q, 1.3025075242102595, 10);
  sqcRYGate(q, -1.8171531790567075, 11);
  sqcRZGate(q, 1.8993587766455977, 11);
  sqcRYGate(q, 0.35651829955728953, 12);
  sqcRZGate(q, 0.9663655524446471, 12);
  sqcRYGate(q, 1.5273010030139789, 13);
  sqcRZGate(q, 3.0688624838521283, 13);
  sqcRYGate(q, -1.9909359891096052, 14);
  sqcRZGate(q, -0.8795478623505948, 14);
  sqcRYGate(q, 0.017130244581724338, 15);
  sqcRZGate(q, 1.3387901474952555, 15);
  sqcRYGate(q, 2.5226518472248354, 16);
  sqcRZGate(q, -3.132103604656962, 16);
  sqcRYGate(q, -3.131263021975294, 17);
  sqcRZGate(q, -2.731172394969572, 17);
  sqcRYGate(q, -3.0681254217177596, 18);
  sqcRZGate(q, -2.173797782503456, 18);
  sqcRYGate(q, 1.7671775330098107, 19);
  sqcRZGate(q, 0.37690597118598335, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.4287477714772499, 0);
  sqcRZGate(q, -1.4923028477559728, 0);
  sqcRYGate(q, 1.548617619601938, 1);
  sqcRZGate(q, -2.4044563174156255, 1);
  sqcRYGate(q, -2.7963751406580144, 2);
  sqcRZGate(q, -3.0416413742968373, 2);
  sqcRYGate(q, -3.1052525467114096, 3);
  sqcRZGate(q, 0.1920001404631988, 3);
  sqcRYGate(q, -1.5516057278018067, 4);
  sqcRZGate(q, 1.1647896843716181, 4);
  sqcRYGate(q, 1.163027653121202, 5);
  sqcRZGate(q, 1.1620021414188324, 5);
  sqcRYGate(q, 0.15499522291642887, 6);
  sqcRZGate(q, 3.064697044632668, 6);
  sqcRYGate(q, 3.1382553976380536, 7);
  sqcRZGate(q, -2.5019518337628535, 7);
  sqcRYGate(q, -0.059984520500276695, 8);
  sqcRZGate(q, 0.052775094200709916, 8);
  sqcRYGate(q, -1.7724402880282741, 9);
  sqcRZGate(q, 1.1587066792019414, 9);
  sqcRYGate(q, 0.022690647128374954, 10);
  sqcRZGate(q, 1.4986243988692038, 10);
  sqcRYGate(q, 3.1155344134818748, 11);
  sqcRZGate(q, 1.9142328416924341, 11);
  sqcRYGate(q, -0.14856744124223376, 12);
  sqcRZGate(q, 1.9839374317603298, 12);
  sqcRYGate(q, -1.4689464599615467, 13);
  sqcRZGate(q, -1.2762834589923504, 13);
  sqcRYGate(q, -1.563506554361986, 14);
  sqcRZGate(q, -0.06629881990703976, 14);
  sqcRYGate(q, -1.5706109108914115, 15);
  sqcRZGate(q, -2.347937926364086, 15);
  sqcRYGate(q, 0.6277854470519744, 16);
  sqcRZGate(q, 2.098453990962951, 16);
  sqcRYGate(q, -0.945650075920686, 17);
  sqcRZGate(q, 3.016951261028511, 17);
  sqcRYGate(q, -0.46421735482302573, 18);
  sqcRZGate(q, -0.9812406483553558, 18);
  sqcRYGate(q, -2.5406547497042022, 19);
  sqcRZGate(q, -2.0445788912927867, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.167521705107741, 0);
  sqcRZGate(q, -0.4002963997900092, 0);
  sqcRYGate(q, 1.687546249096071, 1);
  sqcRZGate(q, 1.175519279808022, 1);
  sqcRYGate(q, 1.9797950129661313, 2);
  sqcRZGate(q, 0.01760208064706616, 2);
  sqcRYGate(q, 0.0006844723003652049, 3);
  sqcRZGate(q, -2.5982761006993003, 3);
  sqcRYGate(q, 3.136025854530118, 4);
  sqcRZGate(q, 1.139340485718699, 4);
  sqcRYGate(q, 1.691873362493653, 5);
  sqcRZGate(q, 1.2055505766378085, 5);
  sqcRYGate(q, 2.8860686032638876, 6);
  sqcRZGate(q, -2.376658844385296, 6);
  sqcRYGate(q, -3.113060927935957, 7);
  sqcRZGate(q, -3.091536867220086, 7);
  sqcRYGate(q, -2.8361551259010627, 8);
  sqcRZGate(q, 1.5943809638149453, 8);
  sqcRYGate(q, 1.2210933639997679, 9);
  sqcRZGate(q, 1.5402371194703832, 9);
  sqcRYGate(q, 0.13144190788001353, 10);
  sqcRZGate(q, -0.3309762077335056, 10);
  sqcRYGate(q, -1.3368610685830518, 11);
  sqcRZGate(q, 2.170890638689719, 11);
  sqcRYGate(q, -1.547903628721878, 12);
  sqcRZGate(q, 3.018811274715598, 12);
  sqcRYGate(q, 2.102667985840668, 13);
  sqcRZGate(q, 2.3521573588533466, 13);
  sqcRYGate(q, -0.45118644958202125, 14);
  sqcRZGate(q, 0.05386303644710512, 14);
  sqcRYGate(q, -0.7154828752311465, 15);
  sqcRZGate(q, 1.7219622524225167, 15);
  sqcRYGate(q, -1.567415721490188, 16);
  sqcRZGate(q, 2.2110130494887583, 16);
  sqcRYGate(q, -2.0249100530122632, 17);
  sqcRZGate(q, -1.69876474824285, 17);
  sqcRYGate(q, 1.5981219449380113, 18);
  sqcRZGate(q, -2.4686022006039945, 18);
  sqcRYGate(q, -2.733561084846484, 19);
  sqcRZGate(q, 1.1342591768837904, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.6094042972062814, 0);
  sqcRZGate(q, 2.6805638659109796, 0);
  sqcRYGate(q, 0.01773420989376273, 1);
  sqcRZGate(q, 1.4826064500162475, 1);
  sqcRYGate(q, 1.593450641997702, 2);
  sqcRZGate(q, 3.139116556560837, 2);
  sqcRYGate(q, -1.327148807926347, 3);
  sqcRZGate(q, 2.76083401894323, 3);
  sqcRYGate(q, 1.5507717600872257, 4);
  sqcRZGate(q, 1.8479393477942754, 4);
  sqcRYGate(q, -2.1197462724234306, 5);
  sqcRZGate(q, 2.1798023200636836, 5);
  sqcRYGate(q, 3.1172587861998986, 6);
  sqcRZGate(q, 1.582751482931017, 6);
  sqcRYGate(q, -3.1343557597960747, 7);
  sqcRZGate(q, -2.1687808592557127, 7);
  sqcRYGate(q, 3.137219173222722, 8);
  sqcRZGate(q, -1.6142742130809191, 8);
  sqcRYGate(q, -1.4816367426420551, 9);
  sqcRZGate(q, 1.2551526114059757, 9);
  sqcRYGate(q, 0.013952395226877362, 10);
  sqcRZGate(q, 0.7999438224731236, 10);
  sqcRYGate(q, -1.5061026570735274, 11);
  sqcRZGate(q, 1.8267117773619868, 11);
  sqcRYGate(q, -0.09366968270438797, 12);
  sqcRZGate(q, 0.10690274141604021, 12);
  sqcRYGate(q, 0.27679806183397593, 13);
  sqcRZGate(q, -0.7932024026871584, 13);
  sqcRYGate(q, -3.0970216069505487, 14);
  sqcRZGate(q, 0.5017614182420679, 14);
  sqcRYGate(q, -0.011080110136545862, 15);
  sqcRZGate(q, 0.5354900132168591, 15);
  sqcRYGate(q, -3.139953308386167, 16);
  sqcRZGate(q, 1.3564884413766594, 16);
  sqcRYGate(q, 1.5944586538022403, 17);
  sqcRZGate(q, -0.9550338130789335, 17);
  sqcRYGate(q, -0.032527353396005515, 18);
  sqcRZGate(q, 0.5083644515526321, 18);
  sqcRYGate(q, -3.1000287578810184, 19);
  sqcRZGate(q, -2.340905001105407, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.02864126912534331, 0);
  sqcRZGate(q, 0.4283871021174388, 0);
  sqcRYGate(q, 0.020756204761105856, 1);
  sqcRZGate(q, 0.5410317315249181, 1);
  sqcRYGate(q, -0.036552376807846086, 2);
  sqcRZGate(q, 1.6582950741054432, 2);
  sqcRYGate(q, -2.6446630185099242, 3);
  sqcRZGate(q, 2.7470578362781803, 3);
  sqcRYGate(q, -1.5319262283300856, 4);
  sqcRZGate(q, -3.0890701625542434, 4);
  sqcRYGate(q, -3.090472040940992, 5);
  sqcRZGate(q, 0.5449603956831499, 5);
  sqcRYGate(q, -0.5384301608125999, 6);
  sqcRZGate(q, 2.888201792917154, 6);
  sqcRYGate(q, 0.12405439975606924, 7);
  sqcRZGate(q, 3.0113341977210757, 7);
  sqcRYGate(q, 1.217870740317954, 8);
  sqcRZGate(q, 2.375445486990143, 8);
  sqcRYGate(q, 1.3741491635640362, 9);
  sqcRZGate(q, 2.3258682308536125, 9);
  sqcRYGate(q, -2.9608900486173537, 10);
  sqcRZGate(q, 1.5961175832945258, 10);
  sqcRYGate(q, -0.021696831099807884, 11);
  sqcRZGate(q, -0.2537791931494412, 11);
  sqcRYGate(q, -1.5689594918097223, 12);
  sqcRZGate(q, 2.8326066170994153, 12);
  sqcRYGate(q, -0.24181875127878705, 13);
  sqcRZGate(q, 1.2881852586773905, 13);
  sqcRYGate(q, -2.7489741126668528, 14);
  sqcRZGate(q, -1.1082791710878073, 14);
  sqcRYGate(q, 1.1390074429007886, 15);
  sqcRZGate(q, -0.9768229139653989, 15);
  sqcRYGate(q, 0.058101378404227404, 16);
  sqcRZGate(q, -0.6641213559998169, 16);
  sqcRYGate(q, 1.5489584060883272, 17);
  sqcRZGate(q, 1.6510195291369842, 17);
  sqcRYGate(q, 0.8829178339782755, 18);
  sqcRZGate(q, -0.639018837112352, 18);
  sqcRYGate(q, -2.5768862345659964, 19);
  sqcRZGate(q, -1.1214312309832135, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.9097317471605137, 0);
  sqcRZGate(q, 0.28273931212200476, 0);
  sqcRYGate(q, -1.2005613170371778, 1);
  sqcRZGate(q, 1.5077347487321227, 1);
  sqcRYGate(q, 1.4818960219371893, 2);
  sqcRZGate(q, 2.8660239822833713, 2);
  sqcRYGate(q, 2.8631139245989123, 3);
  sqcRZGate(q, -0.4456263187109455, 3);
  sqcRYGate(q, 3.08116118699297, 4);
  sqcRZGate(q, -3.0496585860306493, 4);
  sqcRYGate(q, -1.7810710126443654, 5);
  sqcRZGate(q, 2.6278193623339985, 5);
  sqcRYGate(q, 0.006410012779320389, 6);
  sqcRZGate(q, -1.381384273253353, 6);
  sqcRYGate(q, -0.008297013155954068, 7);
  sqcRZGate(q, -1.0431995793850124, 7);
  sqcRYGate(q, -0.004114644527853834, 8);
  sqcRZGate(q, -0.47153980688715724, 8);
  sqcRYGate(q, -3.106677812927828, 9);
  sqcRZGate(q, -2.1372603174338813, 9);
  sqcRYGate(q, -1.5536890231776466, 10);
  sqcRZGate(q, 1.4126829988818235, 10);
  sqcRYGate(q, 1.5667723064191463, 11);
  sqcRZGate(q, -1.603789632226075, 11);
  sqcRYGate(q, 3.113577777315712, 12);
  sqcRZGate(q, -0.2569521517367743, 12);
  sqcRYGate(q, -3.138393218969773, 13);
  sqcRZGate(q, 0.4693838069573486, 13);
  sqcRYGate(q, 1.2498975526192941, 14);
  sqcRZGate(q, 2.5836274256356027, 14);
  sqcRYGate(q, -2.6486618040575305, 15);
  sqcRZGate(q, 1.1072227500473861, 15);
  sqcRYGate(q, -1.085560218326746, 16);
  sqcRZGate(q, -0.03156787726726051, 16);
  sqcRYGate(q, -1.3441591785398648, 17);
  sqcRZGate(q, 0.04829407646694463, 17);
  sqcRYGate(q, 3.050658676743058, 18);
  sqcRZGate(q, 0.6854507150225418, 18);
  sqcRYGate(q, 1.55373706898134, 19);
  sqcRZGate(q, -2.7531317335241408, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.6644671520410723, 0);
  sqcRZGate(q, -0.5514448709470585, 0);
  sqcRYGate(q, 0.13775397702891737, 1);
  sqcRZGate(q, 1.4588864855473092, 1);
  sqcRYGate(q, 0.0017783782495186529, 2);
  sqcRZGate(q, -0.21531421874510612, 2);
  sqcRYGate(q, -1.7221454179332167, 3);
  sqcRZGate(q, -1.0048952173311307, 3);
  sqcRYGate(q, 3.0775536293006676, 4);
  sqcRZGate(q, 0.03653984814467863, 4);
  sqcRYGate(q, 0.03457148231980888, 5);
  sqcRZGate(q, 0.3985622391135921, 5);
  sqcRYGate(q, 0.0004884878873384966, 6);
  sqcRZGate(q, 0.5800425738544522, 6);
  sqcRYGate(q, 3.015253700747264, 7);
  sqcRZGate(q, -1.373333618628723, 7);
  sqcRYGate(q, 2.637074345910005, 8);
  sqcRZGate(q, 0.9572408803735694, 8);
  sqcRYGate(q, 3.0839391532824068, 9);
  sqcRZGate(q, -3.004591255028543, 9);
  sqcRYGate(q, -1.5643770046673104, 10);
  sqcRZGate(q, -0.000689373226188117, 10);
  sqcRYGate(q, -1.4580303029851012, 11);
  sqcRZGate(q, 2.9604792926203505, 11);
  sqcRYGate(q, 1.6331254301565172, 12);
  sqcRZGate(q, 0.033158605649097866, 12);
  sqcRYGate(q, 0.4243031150246699, 13);
  sqcRZGate(q, 1.116066929377756, 13);
  sqcRYGate(q, -1.129680435509556, 14);
  sqcRZGate(q, 0.022267674046448686, 14);
  sqcRYGate(q, 0.0027582166716721888, 15);
  sqcRZGate(q, -1.0896191540316587, 15);
  sqcRYGate(q, 0.01177288134234189, 16);
  sqcRZGate(q, 1.777934204117356, 16);
  sqcRYGate(q, -3.1056729097006883, 17);
  sqcRZGate(q, -3.118971045688187, 17);
  sqcRYGate(q, -2.4873677034908135, 18);
  sqcRZGate(q, 0.08680654036293303, 18);
  sqcRYGate(q, 1.2728772598191096, 19);
  sqcRZGate(q, -1.6896140176433674, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.8233868920354965, 0);
  sqcRZGate(q, 2.628021698530971, 0);
  sqcRYGate(q, -2.993650936181127, 1);
  sqcRZGate(q, 1.406582336260274, 1);
  sqcRYGate(q, -0.01576855942602151, 2);
  sqcRZGate(q, -1.2016780038378783, 2);
  sqcRYGate(q, -0.8944293093514153, 3);
  sqcRZGate(q, -2.1213369657986503, 3);
  sqcRYGate(q, 2.8840201180948304, 4);
  sqcRZGate(q, 2.2799913974763504, 4);
  sqcRYGate(q, 1.7211145532956116, 5);
  sqcRZGate(q, -2.1034480304025296, 5);
  sqcRYGate(q, 0.00991865085676141, 6);
  sqcRZGate(q, -1.3368422268311473, 6);
  sqcRYGate(q, 3.136278627035413, 7);
  sqcRZGate(q, 2.137605645466249, 7);
  sqcRYGate(q, 3.137467838828497, 8);
  sqcRZGate(q, -2.3762648824147177, 8);
  sqcRYGate(q, 1.5709145532741386, 9);
  sqcRZGate(q, -2.7318149332169805, 9);
  sqcRYGate(q, 1.6320198195674624, 10);
  sqcRZGate(q, 0.00013858364643137835, 10);
  sqcRYGate(q, 0.24001439672454172, 11);
  sqcRZGate(q, 1.0722075176479973, 11);
  sqcRYGate(q, 2.816567530496189, 12);
  sqcRZGate(q, 2.1449774019603547, 12);
  sqcRYGate(q, 3.1402831198975703, 13);
  sqcRZGate(q, -0.3633903363397876, 13);
  sqcRYGate(q, -0.4054977914593998, 14);
  sqcRZGate(q, 1.5904707558224767, 14);
  sqcRYGate(q, -0.09306232873036535, 15);
  sqcRZGate(q, 2.8817410858225694, 15);
  sqcRYGate(q, 0.15825846704955132, 16);
  sqcRZGate(q, -1.6605036858842368, 16);
  sqcRYGate(q, 1.5766973391656687, 17);
  sqcRZGate(q, 1.7076120999953828, 17);
  sqcRYGate(q, 1.1919637753852976, 18);
  sqcRZGate(q, 2.642055738498014, 18);
  sqcRYGate(q, 1.1948452689419224, 19);
  sqcRZGate(q, 2.8486120941078727, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.381927481373201, 0);
  sqcRZGate(q, -1.6229192311328822, 0);
  sqcRYGate(q, 1.6031372277931557, 1);
  sqcRZGate(q, 1.6923028356682766, 1);
  sqcRYGate(q, 3.1354907029606154, 2);
  sqcRZGate(q, -0.13920471963912728, 2);
  sqcRYGate(q, 0.16989775804592266, 3);
  sqcRZGate(q, -0.0177051263579191, 3);
  sqcRYGate(q, 0.00021259720124877646, 4);
  sqcRZGate(q, 0.8603249219571109, 4);
  sqcRYGate(q, 1.569890757308798, 5);
  sqcRZGate(q, -0.08395258310137467, 5);
  sqcRYGate(q, -0.2668534038072483, 6);
  sqcRZGate(q, 0.14759372085946476, 6);
  sqcRYGate(q, -0.15622745115742748, 7);
  sqcRZGate(q, -0.3280242483212223, 7);
  sqcRYGate(q, 1.5715814831411867, 8);
  sqcRZGate(q, -1.5438207641885564, 8);
  sqcRYGate(q, 0.18883727596400882, 9);
  sqcRZGate(q, -0.4046871423610634, 9);
  sqcRYGate(q, -1.6064050010031554, 10);
  sqcRZGate(q, -0.002944411798510238, 10);
  sqcRYGate(q, 1.6048385254469506, 11);
  sqcRZGate(q, 1.5030678039098178, 11);
  sqcRYGate(q, 0.002889867319743722, 12);
  sqcRZGate(q, -2.1428930282171486, 12);
  sqcRYGate(q, 1.5957304120611622, 13);
  sqcRZGate(q, -2.39929604339061, 13);
  sqcRYGate(q, 2.112453684482867, 14);
  sqcRZGate(q, 1.8241163887879874, 14);
  sqcRYGate(q, 0.008354626353351158, 15);
  sqcRZGate(q, -3.009799886138795, 15);
  sqcRYGate(q, -1.5310122252580305, 16);
  sqcRZGate(q, 0.4698064273964324, 16);
  sqcRYGate(q, 3.1361040976265646, 17);
  sqcRZGate(q, 1.685142943807576, 17);
  sqcRYGate(q, 3.0821073680135758, 18);
  sqcRZGate(q, 2.6428655067459594, 18);
  sqcRYGate(q, 2.5613902178678147, 19);
  sqcRZGate(q, 2.680636624071766, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.6591987624058646, 0);
  sqcRZGate(q, 1.6611641674335476, 0);
  sqcRYGate(q, -0.015047723563131221, 1);
  sqcRZGate(q, 1.5043131116954314, 1);
  sqcRYGate(q, -1.5906149674053085, 2);
  sqcRZGate(q, -2.801631862033037, 2);
  sqcRYGate(q, -1.3328311326662496, 3);
  sqcRZGate(q, -1.7554155369126354, 3);
  sqcRYGate(q, -1.5595756547569382, 4);
  sqcRZGate(q, -1.1852679202752971, 4);
  sqcRYGate(q, -0.3590193148780493, 5);
  sqcRZGate(q, 2.9828140892684214, 5);
  sqcRYGate(q, -3.0486536370226687, 6);
  sqcRZGate(q, -3.131748031623793, 6);
  sqcRYGate(q, -0.43698667768812793, 7);
  sqcRZGate(q, -0.020559811744021772, 7);
  sqcRYGate(q, 2.857101384316326, 8);
  sqcRZGate(q, -3.1115539716638163, 8);
  sqcRYGate(q, -1.5362605347320462, 9);
  sqcRZGate(q, 0.018069750764874826, 9);
  sqcRYGate(q, 1.593921205673087, 10);
  sqcRZGate(q, 2.350979859610519, 10);
  sqcRYGate(q, 0.004046715526399481, 11);
  sqcRZGate(q, 0.15649971052827502, 11);
  sqcRYGate(q, 3.0028868468850334, 12);
  sqcRZGate(q, -3.1225024822083585, 12);
  sqcRYGate(q, 1.5539584322476747, 13);
  sqcRZGate(q, 3.135398029029916, 13);
  sqcRYGate(q, -1.5748976310191898, 14);
  sqcRZGate(q, -0.0009410016980108922, 14);
  sqcRYGate(q, 0.0579622737057397, 15);
  sqcRZGate(q, 0.1062052933183206, 15);
  sqcRYGate(q, 3.115288407615916, 16);
  sqcRZGate(q, 0.40237221625694103, 16);
  sqcRYGate(q, -0.07091621587108012, 17);
  sqcRZGate(q, 1.4926082563777356, 17);
  sqcRYGate(q, 2.024562019017037, 18);
  sqcRZGate(q, -2.520889891587774, 18);
  sqcRYGate(q, 2.0624826685266315, 19);
  sqcRZGate(q, -2.6767448013549098, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.5235686597369726, 0);
  sqcRZGate(q, 2.0393315676081345, 0);
  sqcRYGate(q, 2.832273997730991, 1);
  sqcRZGate(q, 1.9425074695347155, 1);
  sqcRYGate(q, 0.4705881000144425, 2);
  sqcRZGate(q, 2.5422376980297607, 2);
  sqcRYGate(q, 0.5743137604601024, 3);
  sqcRZGate(q, -1.098451258578728, 3);
  sqcRYGate(q, 0.017473354105574046, 4);
  sqcRZGate(q, -1.0617851672472949, 4);
  sqcRYGate(q, -0.3347017330070313, 5);
  sqcRZGate(q, 1.819345959936162, 5);
  sqcRYGate(q, 1.6168244982132813, 6);
  sqcRZGate(q, 3.13789401731263, 6);
  sqcRYGate(q, 1.1090980750438375, 7);
  sqcRZGate(q, 3.1380963603018954, 7);
  sqcRYGate(q, -1.5082748554396697, 8);
  sqcRZGate(q, 3.1387696439791726, 8);
  sqcRYGate(q, 0.1540710972041186, 9);
  sqcRZGate(q, -3.124479708647316, 9);
  sqcRYGate(q, 3.1348351335897227, 10);
  sqcRZGate(q, -0.7856582327942795, 10);
  sqcRYGate(q, 1.6827416700064095, 11);
  sqcRZGate(q, 1.761736586111951, 11);
  sqcRYGate(q, -2.4766916798260192, 12);
  sqcRZGate(q, -3.1267661454860676, 12);
  sqcRYGate(q, 1.726856976210379, 13);
  sqcRZGate(q, 1.262680469577685, 13);
  sqcRYGate(q, -2.958439119986064, 14);
  sqcRZGate(q, 3.1399293923433698, 14);
  sqcRYGate(q, -0.3086134469964996, 15);
  sqcRZGate(q, 3.1376897479834547, 15);
  sqcRYGate(q, 3.120224129693184, 16);
  sqcRZGate(q, 3.0816451313023614, 16);
  sqcRYGate(q, 1.5621858573614655, 17);
  sqcRZGate(q, -1.1671831577830816, 17);
  sqcRYGate(q, -0.572892894779894, 18);
  sqcRZGate(q, 2.304027210579464, 18);
  sqcRYGate(q, 0.15895528630165354, 19);
  sqcRZGate(q, 2.6175918960153775, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.4911744836126142, 0);
  sqcRZGate(q, 0.9290341501720714, 0);
  sqcRYGate(q, -0.005979083203574131, 1);
  sqcRZGate(q, -1.9291557210039576, 1);
  sqcRYGate(q, -3.1411891606475337, 2);
  sqcRZGate(q, -2.327976050619225, 2);
  sqcRYGate(q, 3.1354437308133245, 3);
  sqcRZGate(q, -1.6146966340453262, 3);
  sqcRYGate(q, 3.1398067793930142, 4);
  sqcRZGate(q, 1.1139501914320291, 4);
  sqcRYGate(q, 0.0013632662139526086, 5);
  sqcRZGate(q, 1.5374378230770551, 5);
  sqcRYGate(q, -2.374073350748284, 6);
  sqcRZGate(q, -0.000863674866067754, 6);
  sqcRYGate(q, -2.7177436809632862, 7);
  sqcRZGate(q, -0.035376124798927044, 7);
  sqcRYGate(q, -0.1449761088317405, 8);
  sqcRZGate(q, 0.00284040446632307, 8);
  sqcRYGate(q, 1.9818869183159915, 9);
  sqcRZGate(q, 1.4557358842369146, 9);
  sqcRYGate(q, -0.42649876242925444, 10);
  sqcRZGate(q, -0.38539968217305454, 10);
  sqcRYGate(q, -3.110257782888248, 11);
  sqcRZGate(q, 1.7151912938798057, 11);
  sqcRYGate(q, 0.4346140431803027, 12);
  sqcRZGate(q, 0.0004434605982389164, 12);
  sqcRYGate(q, -0.18879947400356656, 13);
  sqcRZGate(q, -2.833409929880046, 13);
  sqcRYGate(q, 1.559932510272839, 14);
  sqcRZGate(q, 1.2449535019285616, 14);
  sqcRYGate(q, -1.120099178545622, 15);
  sqcRZGate(q, 0.07379908012761671, 15);
  sqcRYGate(q, 1.5509272017792752, 16);
  sqcRZGate(q, -1.9511703752604053, 16);
  sqcRYGate(q, 3.1406796537568002, 17);
  sqcRZGate(q, -2.2159771724750623, 17);
  sqcRYGate(q, -1.5747012882442784, 18);
  sqcRZGate(q, 0.036066350738211184, 18);
  sqcRYGate(q, 2.214537525766845, 19);
  sqcRZGate(q, -2.274572992034738, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.9521755223030626, 0);
  sqcRZGate(q, -2.4180928056483295, 0);
  sqcRYGate(q, -1.9488704588457528, 1);
  sqcRZGate(q, 2.4851653249590044, 1);
  sqcRYGate(q, 2.9706502493275195, 2);
  sqcRZGate(q, 1.575748614549993, 2);
  sqcRYGate(q, 2.368792916077302, 3);
  sqcRZGate(q, 0.7841205477659301, 3);
  sqcRYGate(q, 3.095356507041625, 4);
  sqcRZGate(q, -1.5565477683052862, 4);
  sqcRYGate(q, 2.3879537692873245, 5);
  sqcRZGate(q, -0.01238407420669496, 5);
  sqcRYGate(q, -1.4658867231087804, 6);
  sqcRZGate(q, -0.0016716569858041884, 6);
  sqcRYGate(q, 0.9018004957775245, 7);
  sqcRZGate(q, -2.7030393164421693, 7);
  sqcRYGate(q, -1.5040516666998536, 8);
  sqcRZGate(q, 3.1188694619152253, 8);
  sqcRYGate(q, 1.9861058225868466, 9);
  sqcRZGate(q, 0.8355387840504295, 9);
  sqcRYGate(q, -0.004525647945036561, 10);
  sqcRZGate(q, 0.27780373360099114, 10);
  sqcRYGate(q, -1.7441014693073944, 11);
  sqcRZGate(q, 1.5885763244727442, 11);
  sqcRYGate(q, 0.9151241381789266, 12);
  sqcRZGate(q, 0.01721156347598196, 12);
  sqcRYGate(q, 1.7477661638413613, 13);
  sqcRZGate(q, 1.2928516411565127, 13);
  sqcRYGate(q, 3.088447014585899, 14);
  sqcRZGate(q, -1.9978630738526322, 14);
  sqcRYGate(q, 1.978201062476101, 15);
  sqcRZGate(q, 1.4412732035160971, 15);
  sqcRYGate(q, 3.1400512332926453, 16);
  sqcRZGate(q, 2.410505290227453, 16);
  sqcRYGate(q, -0.0603557256977755, 17);
  sqcRZGate(q, -0.1406296730376262, 17);
  sqcRYGate(q, -1.6955533112250398, 18);
  sqcRZGate(q, 1.588028262339325, 18);
  sqcRYGate(q, -0.041205908116343615, 19);
  sqcRZGate(q, -3.1404228539267134, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.903383698608935, 0);
  sqcRZGate(q, -2.738737165721983, 0);
  sqcRYGate(q, -0.0052536666314395575, 1);
  sqcRZGate(q, -0.03370790777536692, 1);
  sqcRYGate(q, -1.2361047267618614, 2);
  sqcRZGate(q, -2.8423206580577016, 2);
  sqcRYGate(q, -0.09033398748434075, 3);
  sqcRZGate(q, 0.45892887181774694, 3);
  sqcRYGate(q, -3.1404358205895173, 4);
  sqcRZGate(q, 1.3669352165176771, 4);
  sqcRYGate(q, -0.16052187272195995, 5);
  sqcRZGate(q, -3.123736806962152, 5);
  sqcRYGate(q, -1.2010293230541398, 6);
  sqcRZGate(q, -0.0396298641466828, 6);
  sqcRYGate(q, -2.93114160863361, 7);
  sqcRZGate(q, 1.0489196814963233, 7);
  sqcRYGate(q, -3.087195326066417, 8);
  sqcRZGate(q, -2.2638125358487153, 8);
  sqcRYGate(q, -3.139045271356301, 9);
  sqcRZGate(q, -2.1592005672486074, 9);
  sqcRYGate(q, -3.1334584286127427, 10);
  sqcRZGate(q, 3.0378019414165918, 10);
  sqcRYGate(q, 2.8221944373106003, 11);
  sqcRZGate(q, -1.5428467053010166, 11);
  sqcRYGate(q, 3.1276654379884277, 12);
  sqcRZGate(q, -1.5768746234573012, 12);
  sqcRYGate(q, -0.007035982901121508, 13);
  sqcRZGate(q, 1.8468658192211382, 13);
  sqcRYGate(q, -0.031093259119357494, 14);
  sqcRZGate(q, 0.0014304532700581414, 14);
  sqcRYGate(q, -3.1408716463672968, 15);
  sqcRZGate(q, 1.4696888746170158, 15);
  sqcRYGate(q, -2.065227302949779e-06, 16);
  sqcRZGate(q, 1.8658504754992904, 16);
  sqcRYGate(q, 3.1389822584203997, 17);
  sqcRZGate(q, 0.9077861299213357, 17);
  sqcRYGate(q, -0.0411297918640221, 18);
  sqcRZGate(q, 0.08964952996317165, 18);
  sqcRYGate(q, 2.481187820215499, 19);
  sqcRZGate(q, -0.221846829604344, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.1197084922012377, 0);
  sqcRZGate(q, -2.230521521401749, 0);
  sqcRYGate(q, 0.011518796777922724, 1);
  sqcRZGate(q, -2.4549435807291857, 1);
  sqcRYGate(q, 0.0052835816900165256, 2);
  sqcRZGate(q, -1.3034329543327938, 2);
  sqcRYGate(q, 3.1403718589192464, 3);
  sqcRZGate(q, 0.4090630802112125, 3);
  sqcRYGate(q, 1.2641715464563754, 4);
  sqcRZGate(q, 3.135492056500056, 4);
  sqcRYGate(q, -2.7953162725658296, 5);
  sqcRZGate(q, -3.123145609448085, 5);
  sqcRYGate(q, 0.21961356317201108, 6);
  sqcRZGate(q, 2.3595556901644934, 6);
  sqcRYGate(q, 3.112426673334223, 7);
  sqcRZGate(q, 2.1638412166707948, 7);
  sqcRYGate(q, 0.009450425697091328, 8);
  sqcRZGate(q, 3.0628948206173314, 8);
  sqcRYGate(q, 1.999454123503744, 9);
  sqcRZGate(q, -1.6268112237413899, 9);
  sqcRYGate(q, -1.5751671558260032, 10);
  sqcRZGate(q, 3.13713102033002, 10);
  sqcRYGate(q, -1.6001774524377086, 11);
  sqcRZGate(q, 3.040457832276096, 11);
  sqcRYGate(q, -3.1387433960397026, 12);
  sqcRZGate(q, 1.5721696367225153, 12);
  sqcRYGate(q, 1.399575257267438, 13);
  sqcRZGate(q, -1.5714564907297834, 13);
  sqcRYGate(q, -2.6683288231022906, 14);
  sqcRZGate(q, 1.3218913929165206, 14);
  sqcRYGate(q, -2.5670067001792534, 15);
  sqcRZGate(q, 0.0378777284130587, 15);
  sqcRYGate(q, -0.05061441992638116, 16);
  sqcRZGate(q, 3.1335823484565433, 16);
  sqcRYGate(q, 0.12766903759146467, 17);
  sqcRZGate(q, 3.0930378147820106, 17);
  sqcRYGate(q, -1.9970701698663804, 18);
  sqcRZGate(q, -1.243292501991434, 18);
  sqcRYGate(q, -0.036979583889939605, 19);
  sqcRZGate(q, -2.9990164610114745, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.5833614224853978, 0);
  sqcRZGate(q, -1.1528316197128152, 0);
  sqcRYGate(q, -1.5712824021079062, 1);
  sqcRZGate(q, 2.161403827453466, 1);
  sqcRYGate(q, 2.5865936607264746, 2);
  sqcRZGate(q, 0.6480855635712968, 2);
  sqcRYGate(q, 1.5755896243462992, 3);
  sqcRZGate(q, 1.5719335555825407, 3);
  sqcRYGate(q, -1.5533457217209201, 4);
  sqcRZGate(q, 1.5716778983894752, 4);
  sqcRYGate(q, 0.043319159595519977, 5);
  sqcRZGate(q, 1.5713468592403113, 5);
  sqcRYGate(q, -0.004845250004386514, 6);
  sqcRZGate(q, 2.391522393117904, 6);
  sqcRYGate(q, 3.0411875422151735, 7);
  sqcRZGate(q, -0.04866459293392414, 7);
  sqcRYGate(q, -0.0011947939474259426, 8);
  sqcRZGate(q, 0.7490299980604381, 8);
  sqcRYGate(q, 1.5757563945783755, 9);
  sqcRZGate(q, 1.532840620923107, 9);
  sqcRYGate(q, -2.976255834714934, 10);
  sqcRZGate(q, -1.57942054490257, 10);
  sqcRYGate(q, 3.0094261303746244, 11);
  sqcRZGate(q, -2.727547015540999, 11);
  sqcRYGate(q, 3.037286661542874, 12);
  sqcRZGate(q, 1.6038221568843307, 12);
  sqcRYGate(q, 1.571997188050429, 13);
  sqcRZGate(q, 1.7197067869018379, 13);
  sqcRYGate(q, -0.0016046411055494758, 14);
  sqcRZGate(q, 0.13878860513439698, 14);
  sqcRYGate(q, -1.1401730320327852, 15);
  sqcRZGate(q, -1.5518355386175484, 15);
  sqcRYGate(q, -0.004054649426511681, 16);
  sqcRZGate(q, -1.507298986852958, 16);
  sqcRYGate(q, 0.002301791763622933, 17);
  sqcRZGate(q, -0.45524961297437994, 17);
  sqcRYGate(q, 3.1285692084814753, 18);
  sqcRZGate(q, 1.6621255248223048, 18);
  sqcRYGate(q, 3.137641050585975, 19);
  sqcRZGate(q, 2.0729872768142235, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.5678256044054892, 0);
  sqcRZGate(q, -2.877995315010234, 0);
  sqcRYGate(q, -1.5804131970760391, 1);
  sqcRZGate(q, -2.287930973237321, 1);
  sqcRYGate(q, -1.5713122647902331, 2);
  sqcRZGate(q, -2.900047427658328, 2);
  sqcRYGate(q, -1.5711878922184646, 3);
  sqcRZGate(q, 0.8591265010232702, 3);
  sqcRYGate(q, 1.5695220246816883, 4);
  sqcRZGate(q, -1.4197726003198432, 4);
  sqcRYGate(q, 1.64448780755035, 5);
  sqcRZGate(q, 2.4261144972074655, 5);
  sqcRYGate(q, -1.5590812424993103, 6);
  sqcRZGate(q, 2.014026272792355, 6);
  sqcRYGate(q, 1.5633452631995823, 7);
  sqcRZGate(q, -1.7643493456263997, 7);
  sqcRYGate(q, -1.5705559304350931, 8);
  sqcRZGate(q, -2.7964889634031818, 8);
  sqcRYGate(q, 1.5561947564412457, 9);
  sqcRZGate(q, -2.5141150706511675, 9);
  sqcRYGate(q, 1.5710170334158662, 10);
  sqcRZGate(q, 1.94192674881275, 10);
  sqcRYGate(q, -0.03668316005881834, 11);
  sqcRZGate(q, 1.948669434698511, 11);
  sqcRYGate(q, 1.5710701664851112, 12);
  sqcRZGate(q, -1.2416599686652736, 12);
  sqcRYGate(q, 1.5673373897928304, 13);
  sqcRZGate(q, -2.250530517553674, 13);
  sqcRYGate(q, -1.5701992984640158, 14);
  sqcRZGate(q, 1.9202160088698184, 14);
  sqcRYGate(q, -1.5602037382195575, 15);
  sqcRZGate(q, -1.6706277153117144, 15);
  sqcRYGate(q, -1.571281967333591, 16);
  sqcRZGate(q, 0.3407874825380466, 16);
  sqcRYGate(q, 1.4964609874996384, 17);
  sqcRZGate(q, 2.546585343981449, 17);
  sqcRYGate(q, -2.6742001039110974, 18);
  sqcRZGate(q, -1.3313229685973818, 18);
  sqcRYGate(q, 0.010920103355330113, 19);
  sqcRZGate(q, 0.940162579995112, 19);

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
