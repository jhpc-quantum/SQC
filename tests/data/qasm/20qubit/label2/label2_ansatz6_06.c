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

  sqcRYGate(q, -1.8454603939984482, 0);
  sqcRYGate(q, -1.6540894847061047, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.26201740918592087, 0);
  sqcRYGate(q, 0.11764503379374688, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5473507703358713, 1);
  sqcRYGate(q, 1.8225546906843795, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0630730196675779, 1);
  sqcRYGate(q, 0.01765291309129985, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0008598298223017783, 2);
  sqcRYGate(q, 0.4087572542919255, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0912927879755796, 2);
  sqcRYGate(q, -0.9656027076483421, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5546632292381379, 3);
  sqcRYGate(q, -2.9360192052385536, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.855880578412091, 3);
  sqcRYGate(q, 2.120041420049642, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0969068485056797, 4);
  sqcRYGate(q, -1.5705584441672078, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1561288975915502, 4);
  sqcRYGate(q, -3.1052016809839715, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7374078185933559, 5);
  sqcRYGate(q, 1.2344938635526823, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.82022058094178, 5);
  sqcRYGate(q, 0.06623105321887035, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.031955231754254854, 6);
  sqcRYGate(q, 2.8334969954284297, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.14795248040707776, 6);
  sqcRYGate(q, 2.9666284779288197, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4015537624717439, 7);
  sqcRYGate(q, 2.1388601958999858, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.2809868097284187, 7);
  sqcRYGate(q, -0.7087979624016906, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.8679263626810547, 8);
  sqcRYGate(q, 0.09765532766452889, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.4154979091710342, 8);
  sqcRYGate(q, 3.00691795181156, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.1275277862317505, 9);
  sqcRYGate(q, -1.5706341522753569, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.751273356986416, 9);
  sqcRYGate(q, 0.00026377864822535457, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.9611283934158754, 10);
  sqcRYGate(q, 0.2752332258776237, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.755303962423136, 10);
  sqcRYGate(q, 0.7457864686005636, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.2767263620760676, 11);
  sqcRYGate(q, -1.5242246381535214, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.35822432479528, 11);
  sqcRYGate(q, 0.4970783509056721, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.7625664778611867, 12);
  sqcRYGate(q, -2.411883545904567, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.2743645689390073, 12);
  sqcRYGate(q, -3.106044989965561, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.7841043092376052, 13);
  sqcRYGate(q, -0.19940676829826032, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.7475752107361227, 13);
  sqcRYGate(q, -2.5568190050627857, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.2112682156485404, 14);
  sqcRYGate(q, -1.7572632718795065, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.1370831150117584, 14);
  sqcRYGate(q, -0.0003011298303094989, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.6118097349350906, 15);
  sqcRYGate(q, 1.2277287323817143, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 3.0130425182940885, 15);
  sqcRYGate(q, 1.1654888860513655, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.4467779918432888, 16);
  sqcRYGate(q, 1.5941551644871912, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.5509699936811803, 16);
  sqcRYGate(q, -2.455981699221319, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.42967930986408404, 17);
  sqcRYGate(q, 1.765684086839915, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 3.0598071635957123, 17);
  sqcRYGate(q, 0.0106757552088517, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.9409352791011658, 18);
  sqcRYGate(q, -2.2436126164302514, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.8527191149096469, 18);
  sqcRYGate(q, 0.3817586800376123, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.2396577399055584, 0);
  sqcRYGate(q, 2.768335784978471, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8196956904659574, 0);
  sqcRYGate(q, -2.0525450957338442, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.542082622517758, 1);
  sqcRYGate(q, -1.99467925040469, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0447423666524926, 1);
  sqcRYGate(q, 0.9778936813916799, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7939269117238175, 2);
  sqcRYGate(q, -1.6149176159103291, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8204928756093133, 2);
  sqcRYGate(q, -0.47257928250525616, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.243569853441449, 3);
  sqcRYGate(q, 1.2133485569676767, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2838541900919769, 3);
  sqcRYGate(q, -1.079647442278155, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9657146530784546, 4);
  sqcRYGate(q, 2.086545647851638, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9201502121032217, 4);
  sqcRYGate(q, -2.118171856299455, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8616710981386282, 5);
  sqcRYGate(q, -0.8858467853102276, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9282328419806785, 5);
  sqcRYGate(q, -0.6502600604763185, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7098517183817794, 6);
  sqcRYGate(q, 2.253464006435955, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.182228230168553, 6);
  sqcRYGate(q, -0.2451405484788971, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.114763296402668, 7);
  sqcRYGate(q, -1.0821288857350093, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.082228404272599, 7);
  sqcRYGate(q, -3.1047923415604015, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.9624936604828623, 8);
  sqcRYGate(q, 2.5100077927817948, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.081356510396439, 8);
  sqcRYGate(q, 1.2978987076337942, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.2397686038886375, 9);
  sqcRYGate(q, -0.04524986818200596, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.0003583393499075882, 9);
  sqcRYGate(q, 0.00043110499767747587, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.24131492844448288, 10);
  sqcRYGate(q, -2.494114031107867, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.011289181749484, 10);
  sqcRYGate(q, 2.1721824836867736, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.118697946659927, 11);
  sqcRYGate(q, -1.4177348952084845, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.1376990581297437, 11);
  sqcRYGate(q, 2.3394580416415236, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5048711603133, 12);
  sqcRYGate(q, 3.1113756484213466, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.669771442906067, 12);
  sqcRYGate(q, 3.1414010800076233, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.759203087509264, 13);
  sqcRYGate(q, -1.0989275515068897, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.736330254001358, 13);
  sqcRYGate(q, 2.3554646114413957, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.100674241051924, 14);
  sqcRYGate(q, 1.4183920867833564, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.0701182713249473, 14);
  sqcRYGate(q, -3.1016752838459185, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.1218302928525152, 15);
  sqcRYGate(q, -3.066640179432527, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.003846435760288609, 15);
  sqcRYGate(q, -3.1404875709075655, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.0360382054037744, 16);
  sqcRYGate(q, 0.2064763469474224, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.9130289390961934, 16);
  sqcRYGate(q, -0.7564826810571513, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.879293644887405, 17);
  sqcRYGate(q, -2.842812287417163, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.10467185588615459, 17);
  sqcRYGate(q, 2.998982424385725, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.8750069244999406, 18);
  sqcRYGate(q, -0.9278308259943264, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.5564499662444609, 18);
  sqcRYGate(q, -3.0746812825904053, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.5128378098264783, 0);
  sqcRYGate(q, -2.264793465268381, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.337659252234905, 0);
  sqcRYGate(q, 1.2018269019432009, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.996938904380177, 1);
  sqcRYGate(q, 3.0768991772675642, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.31404036308704875, 1);
  sqcRYGate(q, 2.8028654221344182, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7187310493153838, 2);
  sqcRYGate(q, 0.31533627202823833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4909522943235607, 2);
  sqcRYGate(q, -3.0214941006539773, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8583279269482795, 3);
  sqcRYGate(q, 0.7333488188294579, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1363144912037435, 3);
  sqcRYGate(q, -0.0008960757828324617, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.3286876330980393, 4);
  sqcRYGate(q, 2.095025406192949, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3902510755288495, 4);
  sqcRYGate(q, -0.21413983019632968, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3220004134221839, 5);
  sqcRYGate(q, 1.7956711663818723, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.013382715565702696, 5);
  sqcRYGate(q, 0.4760925248204364, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.24326130461578366, 6);
  sqcRYGate(q, -1.4285076444812594, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6988584885973355, 6);
  sqcRYGate(q, 1.0401173212355692, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2297575505925993, 7);
  sqcRYGate(q, -2.9510466046826385, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.3443711969996954, 7);
  sqcRYGate(q, 0.0016192130563716291, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.719446307390224, 8);
  sqcRYGate(q, 1.8602591556390742, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.4635773919281667, 8);
  sqcRYGate(q, 1.1510969903832748, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.42349158232881, 9);
  sqcRYGate(q, -0.8909834178800605, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.018962318562040892, 9);
  sqcRYGate(q, -0.011572148296078666, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.8387045797771038, 10);
  sqcRYGate(q, 1.6882676580332072, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.0941044293566318, 10);
  sqcRYGate(q, 2.6224211512313214, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.12025522470209714, 11);
  sqcRYGate(q, 2.3556562608871627, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.00042416262168663523, 11);
  sqcRYGate(q, 2.4921025782550075, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.1555139954025266, 12);
  sqcRYGate(q, -0.4523088810074256, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.730562286409074, 12);
  sqcRYGate(q, -3.1358686519355192, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.4450897733457735, 13);
  sqcRYGate(q, 1.9375133504327318, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.3657009134915725, 13);
  sqcRYGate(q, -0.48750707673481486, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.1374544555213806, 14);
  sqcRYGate(q, -2.0453853762053087, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.8650634827666863, 14);
  sqcRYGate(q, -3.1272949952698457, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.5328563325848761, 15);
  sqcRYGate(q, 0.9848028447885805, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.0851599877294564, 15);
  sqcRYGate(q, -3.14009259525138, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.6760536285224725, 16);
  sqcRYGate(q, -2.9248935656540627, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.5502361267709404, 16);
  sqcRYGate(q, 1.6338473630140007, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.6282620569274986, 17);
  sqcRYGate(q, -1.035934319762971, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.009142856476189083, 17);
  sqcRYGate(q, 1.703656088932922, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.4544824104406766, 18);
  sqcRYGate(q, 2.2948972125152767, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.2529496818857186, 18);
  sqcRYGate(q, 2.6047866404444724, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -3.088936463711385, 0);
  sqcRYGate(q, 1.7246105900231743, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8985668831001323, 0);
  sqcRYGate(q, -0.6544371079949317, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8407953934447505, 1);
  sqcRYGate(q, 0.7874171843793345, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.345411525531811, 1);
  sqcRYGate(q, -2.0507268514143933, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6667948742019216, 2);
  sqcRYGate(q, -2.783834919657464, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9831241814926798, 2);
  sqcRYGate(q, 0.5595625630000498, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1406134097469125, 3);
  sqcRYGate(q, -0.07545341337949064, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.04340355585712993, 3);
  sqcRYGate(q, -0.6762950896745802, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3734015229341825, 4);
  sqcRYGate(q, 0.47997418583501616, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3475752255685114, 4);
  sqcRYGate(q, -0.6316904354728266, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2404299716624103, 5);
  sqcRYGate(q, 2.457836842587029, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.112813565178371, 5);
  sqcRYGate(q, 3.1075117485845687, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4635209693513707, 6);
  sqcRYGate(q, 1.654596015373793, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.02617184978483067, 6);
  sqcRYGate(q, 0.9473293746025818, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5078477486668933, 7);
  sqcRYGate(q, -2.3455338304244417, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5427912418168503, 7);
  sqcRYGate(q, -2.9499946796026353, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.041675269852755825, 8);
  sqcRYGate(q, 0.18605196031397714, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5172618648675681, 8);
  sqcRYGate(q, -0.8856862184807481, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.0966468094743425, 9);
  sqcRYGate(q, 3.052922160315328, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.6594717816673725, 9);
  sqcRYGate(q, 0.7715363346100881, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.6017446636786734, 10);
  sqcRYGate(q, -2.0408914941014884, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.0558271697086408, 10);
  sqcRYGate(q, -3.1356557551498137, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.479340851045609, 11);
  sqcRYGate(q, 2.872195538396879, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.14155098394663, 11);
  sqcRYGate(q, -2.017470549350734, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.894453872231115, 12);
  sqcRYGate(q, -0.9333410907873425, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.2960975036267424, 12);
  sqcRYGate(q, 0.014943485163698256, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.1609034641301896, 13);
  sqcRYGate(q, 1.0306351041818, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.8740046514517665, 13);
  sqcRYGate(q, 1.2997808885790434, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.133987759428554, 14);
  sqcRYGate(q, 2.3125761654266643, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.41610785026732156, 14);
  sqcRYGate(q, 0.48593447561883524, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.5574452316002843, 15);
  sqcRYGate(q, 2.200823776080309, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.1298411548817029, 15);
  sqcRYGate(q, 2.725653328179857, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.0916933487803056, 16);
  sqcRYGate(q, -3.1237636238371507, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 3.1061717690725668, 16);
  sqcRYGate(q, 1.2668491762166534, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.2350955134912804, 17);
  sqcRYGate(q, 1.225140039169182, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.9503396942573539, 17);
  sqcRYGate(q, 3.012017316791899, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.084448410217301, 18);
  sqcRYGate(q, 1.1143745044186695, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.3549520693725103, 18);
  sqcRYGate(q, 2.8559884699250513, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.225049912696414, 0);
  sqcRYGate(q, 0.3567882857793565, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.75786023131993, 0);
  sqcRYGate(q, 0.38995616847260545, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.317654222728803, 1);
  sqcRYGate(q, 0.8387822228804467, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1005753903285198, 1);
  sqcRYGate(q, -1.4946141262591832, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7016663353114607, 2);
  sqcRYGate(q, 1.15795936192543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5120202761553556, 2);
  sqcRYGate(q, -0.6285717777786467, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.183688498407519, 3);
  sqcRYGate(q, -0.43500942951187543, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.002848917797038552, 3);
  sqcRYGate(q, 3.127085024709999, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9626135559900374, 4);
  sqcRYGate(q, 0.5204534628936708, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.427389257659707, 4);
  sqcRYGate(q, 1.4504285530212986, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.538468122300867, 5);
  sqcRYGate(q, 1.3878676808676769, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1118491922994234, 5);
  sqcRYGate(q, 3.0767745479137725, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.862026894201306, 6);
  sqcRYGate(q, -0.43709970746089416, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.220656512168027, 6);
  sqcRYGate(q, -3.0196923802726094, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.317014053161652, 7);
  sqcRYGate(q, -0.6615487554541799, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1350165940228725, 7);
  sqcRYGate(q, 3.04532401932771, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.4500390470149847, 8);
  sqcRYGate(q, -0.46352103042414583, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.94858762026605, 8);
  sqcRYGate(q, 0.7245740608469999, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.460173505977838, 9);
  sqcRYGate(q, 1.1800888579766609, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.061349828047534, 9);
  sqcRYGate(q, -0.3540632931847059, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.042852961740265, 10);
  sqcRYGate(q, 1.344798655147216, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.182241042278539, 10);
  sqcRYGate(q, -0.024294077404274292, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.4321836501681156, 11);
  sqcRYGate(q, -2.548115462374465, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.0991161955874147, 11);
  sqcRYGate(q, 2.8503768347880793, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5500348599998803, 12);
  sqcRYGate(q, -1.617515176088932, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.943404140969791, 12);
  sqcRYGate(q, 1.1810424048992563, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.7335543297855036, 13);
  sqcRYGate(q, -1.105195969056708, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.10955387307956954, 13);
  sqcRYGate(q, 3.0548452734553475, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.8876237685183925, 14);
  sqcRYGate(q, -0.2741787310255832, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.2545715604951067, 14);
  sqcRYGate(q, -1.4344860039059162, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.20425413503250756, 15);
  sqcRYGate(q, 2.3832475242581714, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -3.133010470916973, 15);
  sqcRYGate(q, 1.4174166998745772, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.4122789035729924, 16);
  sqcRYGate(q, -3.128969155939435, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.502243433622437, 16);
  sqcRYGate(q, 0.011909226553363792, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.5738192824552923, 17);
  sqcRYGate(q, -0.6036397961491313, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.21469668324101934, 17);
  sqcRYGate(q, 0.07207010291820648, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.980366639397714, 18);
  sqcRYGate(q, 1.6242660405234104, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.45267232642519684, 18);
  sqcRYGate(q, -2.886826774605143, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.5114061971237422, 0);
  sqcRYGate(q, -2.1565124602523147, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.773861199149139, 0);
  sqcRYGate(q, 2.191332418595419, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.210719043230565, 1);
  sqcRYGate(q, 1.2581720608406182, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3028238879433518, 1);
  sqcRYGate(q, -2.0988078684649905, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.232386837988238, 2);
  sqcRYGate(q, 0.5333818466412845, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.010797345244006, 2);
  sqcRYGate(q, -1.356530986556197, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9692578903904954, 3);
  sqcRYGate(q, -3.0148112226442274, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0798958438455646, 3);
  sqcRYGate(q, -0.010509987231350893, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7507577587795993, 4);
  sqcRYGate(q, -1.5897537144605025, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.871532213160425, 4);
  sqcRYGate(q, 2.7701237570448147, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.462127830370151, 5);
  sqcRYGate(q, 2.6707299400111513, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.412547020742657, 5);
  sqcRYGate(q, -0.14070507888900696, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.122630002568994, 6);
  sqcRYGate(q, -1.599256102969928, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.386798411186725, 6);
  sqcRYGate(q, 1.623409754040071, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1303842535411595, 7);
  sqcRYGate(q, -1.5685809537496436, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.028604815666698778, 7);
  sqcRYGate(q, 0.00032337310451868717, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.7711639961776584, 8);
  sqcRYGate(q, 0.6019073576063576, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.16111587131560423, 8);
  sqcRYGate(q, 0.5090057045514502, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.04770978132309092, 9);
  sqcRYGate(q, -1.7563263368225503, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.1031982127175635, 9);
  sqcRYGate(q, 1.8329231426518644, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.391498858172962, 10);
  sqcRYGate(q, -0.7163216764475141, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.3421450484192299, 10);
  sqcRYGate(q, 0.9465582265488645, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.7691695359200956, 11);
  sqcRYGate(q, -1.6493487071459645, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.3545217701092813, 11);
  sqcRYGate(q, 3.141168851216, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.764251935925277, 12);
  sqcRYGate(q, -2.918522414973578, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.12944127356515356, 12);
  sqcRYGate(q, -3.1063182068430226, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.1061723053282515, 13);
  sqcRYGate(q, -0.22702515285758282, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.09769470070482, 13);
  sqcRYGate(q, 3.1336742879894297, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.48841877837209, 14);
  sqcRYGate(q, -1.577982287489001, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.8498414292117276, 14);
  sqcRYGate(q, 1.0378521131183014, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.014030413484994, 15);
  sqcRYGate(q, -0.9562079558738352, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.028437144563802128, 15);
  sqcRYGate(q, -2.3727108235252774, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.896712118429118, 16);
  sqcRYGate(q, 1.1196496655270454, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.4603931674026476, 16);
  sqcRYGate(q, 2.263035455911783, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.7148354460932929, 17);
  sqcRYGate(q, -2.4542762005116496, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.4859027094500337, 17);
  sqcRYGate(q, -0.00036986486989616505, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.481112186040297, 18);
  sqcRYGate(q, 0.4393952846929415, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.24582173221538373, 18);
  sqcRYGate(q, -2.3636003294472103, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.14030306502626788, 0);
  sqcRYGate(q, 0.38438869358011374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.51189311584746, 0);
  sqcRYGate(q, 2.461841619893444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.678936784666407, 1);
  sqcRYGate(q, -1.4818126810577787, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0663871059918257, 1);
  sqcRYGate(q, 2.931608576647717, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2423714879298182, 2);
  sqcRYGate(q, -1.4336726918029135, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.24821412688832253, 2);
  sqcRYGate(q, -0.7066651072916414, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4980528199836503, 3);
  sqcRYGate(q, 0.7457508425127966, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0931591204628638, 3);
  sqcRYGate(q, 0.056245771626091734, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6644475396855803, 4);
  sqcRYGate(q, 2.497627692449128, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2252895351364552, 4);
  sqcRYGate(q, 1.0642167227929564, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.09682473032876583, 5);
  sqcRYGate(q, 2.8314437960338164, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.049194787359034, 5);
  sqcRYGate(q, 3.076198369422274, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.21087136649067903, 6);
  sqcRYGate(q, -1.1374198535197158, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.936345676994085, 6);
  sqcRYGate(q, -2.8098164344249725, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6579419035780605, 7);
  sqcRYGate(q, -2.317086035567349, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.05384123697778085, 7);
  sqcRYGate(q, -0.06174781898947387, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.5349769890058313, 8);
  sqcRYGate(q, 1.1343333222508887, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.136869441411657, 8);
  sqcRYGate(q, 3.0783741404896743, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.5866026144204975, 9);
  sqcRYGate(q, 1.2855188620850857, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.00010335737966743469, 9);
  sqcRYGate(q, -0.8313709243368005, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3537489758746601, 10);
  sqcRYGate(q, -2.3736669126469994, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.8109450000345912, 10);
  sqcRYGate(q, -1.3270991111836654, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.3166879457280376, 11);
  sqcRYGate(q, -0.9547396608843819, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.6804927837158585, 11);
  sqcRYGate(q, -1.2542325806591967, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.1450647960890423, 12);
  sqcRYGate(q, -1.6639334306005351, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.003975744583462061, 12);
  sqcRYGate(q, 0.02858758239649184, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.211146109286708, 13);
  sqcRYGate(q, -0.6143740418538881, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.1332893605679835, 13);
  sqcRYGate(q, 3.141295542168927, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.28194016791202525, 14);
  sqcRYGate(q, -0.3321687403773855, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.568648995036566, 14);
  sqcRYGate(q, 2.6049863229638084, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.4256028631699756, 15);
  sqcRYGate(q, -0.9321374986511541, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -3.1323698460344387, 15);
  sqcRYGate(q, 0.036429263331212, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.916007046621207, 16);
  sqcRYGate(q, -2.936204863410385, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.608593135220647, 16);
  sqcRYGate(q, 2.2606062047870674, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.7688680285898672, 17);
  sqcRYGate(q, 2.6722662949530185, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.5683166054426936, 17);
  sqcRYGate(q, -0.012324941402992451, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.3662805487173575, 18);
  sqcRYGate(q, 2.1018774237856803, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.174776756903827, 18);
  sqcRYGate(q, 0.20903823353196702, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -3.04788985589081, 0);
  sqcRYGate(q, 0.5254766420798971, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8415213042842198, 0);
  sqcRYGate(q, 1.1000255812420363, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0433404442429173, 1);
  sqcRYGate(q, 1.0301687660355563, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.46734821045794384, 1);
  sqcRYGate(q, 0.24200701372033764, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1280853298365714, 2);
  sqcRYGate(q, -0.06543967602924369, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.741257014846247, 2);
  sqcRYGate(q, 0.3120575400782021, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5950062567475505, 3);
  sqcRYGate(q, -0.01984209207221746, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.100619167128558, 3);
  sqcRYGate(q, -0.021334506696573108, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9062402031422314, 4);
  sqcRYGate(q, -0.5398938932813007, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5656811779032387, 4);
  sqcRYGate(q, -2.0731995023865757, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1718125527366798, 5);
  sqcRYGate(q, -2.6339974853485106, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0696602282286034, 5);
  sqcRYGate(q, 3.139414233268197, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7638287262799355, 6);
  sqcRYGate(q, 0.5409518346971636, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.068145888656719, 6);
  sqcRYGate(q, -2.1116083583934167, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3233125877501602, 7);
  sqcRYGate(q, -1.6842669021209957, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.7848085853127256, 7);
  sqcRYGate(q, 0.017768406569235395, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.8162498594035802, 8);
  sqcRYGate(q, -1.6771992213017946, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.012757952398898988, 8);
  sqcRYGate(q, -3.138408281271405, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6596563675232616, 9);
  sqcRYGate(q, -2.546267927758604, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.06387900459823, 9);
  sqcRYGate(q, -0.31050876663424654, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.3079926339331776, 10);
  sqcRYGate(q, -2.0884012030501924, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.00012771619162244008, 10);
  sqcRYGate(q, 3.140486915114263, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0443208394490497, 11);
  sqcRYGate(q, -0.029560920610431137, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.697686229790644, 11);
  sqcRYGate(q, 1.3686389400503474, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.281161559754285, 12);
  sqcRYGate(q, 2.1840552921856955, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.27237532234999456, 12);
  sqcRYGate(q, 0.9620633912650207, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.989022493061598, 13);
  sqcRYGate(q, 1.44912953270281, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.02685776544666612, 13);
  sqcRYGate(q, 0.001089635294043918, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.1680337989978407, 14);
  sqcRYGate(q, 1.5936253437147236, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.5447165541637884, 14);
  sqcRYGate(q, -1.506853892770425, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.5985848515112036, 15);
  sqcRYGate(q, 2.460851859244108, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 3.133980452676446, 15);
  sqcRYGate(q, -1.641014134149378, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.9959905410089503, 16);
  sqcRYGate(q, -2.7550847931228906, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.8962575059581007, 16);
  sqcRYGate(q, -2.594323317064476, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -3.123471638920836, 17);
  sqcRYGate(q, -0.7226756715147441, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.32992877863933057, 17);
  sqcRYGate(q, 3.11944356960573, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.6270310182396797, 18);
  sqcRYGate(q, 2.8688548752897707, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.7395087067086844, 18);
  sqcRYGate(q, 1.5913486032436783, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.6240892643952254, 0);
  sqcRYGate(q, -1.5569109673452544, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.54589091356388, 0);
  sqcRYGate(q, 0.0389160086729845, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7410462183386737, 1);
  sqcRYGate(q, 3.047876414751661, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.03438901239237424, 1);
  sqcRYGate(q, -3.047035583351777, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3695169552211913, 2);
  sqcRYGate(q, -0.31776066879159987, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6548051083425629, 2);
  sqcRYGate(q, 2.842385129748391, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1321252503180679, 3);
  sqcRYGate(q, 0.3336426939639239, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1386149784369732, 3);
  sqcRYGate(q, 3.1280730368336047, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8170405120785214, 4);
  sqcRYGate(q, -2.9912419109928843, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7000794742689447, 4);
  sqcRYGate(q, 2.0287912140356745, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.939545486664439, 5);
  sqcRYGate(q, -0.09163667569025959, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.008024265163885325, 5);
  sqcRYGate(q, -3.0816555165598607, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3820223181773832, 6);
  sqcRYGate(q, -0.7812580511937042, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.05415005531832495, 6);
  sqcRYGate(q, -1.4175610317345058, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.613069670834646, 7);
  sqcRYGate(q, -0.8216023719391944, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.3799804170689312, 7);
  sqcRYGate(q, 0.03329815745765577, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.7381131055584675, 8);
  sqcRYGate(q, -1.40061896868014, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.26407681347620127, 8);
  sqcRYGate(q, -0.011124285840534043, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5813224135450854, 9);
  sqcRYGate(q, 0.8273402725540823, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.0435567472065665, 9);
  sqcRYGate(q, -1.0216052720608504, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.14458716141928818, 10);
  sqcRYGate(q, -1.46607152502059, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.326737427479985, 10);
  sqcRYGate(q, 0.013991181537560049, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.0393564474540655, 11);
  sqcRYGate(q, -2.598794413200179, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.004013696666087085, 11);
  sqcRYGate(q, 3.0296471622918277, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.043457314080152, 12);
  sqcRYGate(q, 2.184198067786861, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.3193434807714393, 12);
  sqcRYGate(q, 0.9729496416235323, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.8785474743879862, 13);
  sqcRYGate(q, -1.2468434715627108, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.02497259552983344, 13);
  sqcRYGate(q, 0.04074097193077673, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5360653360012986, 14);
  sqcRYGate(q, 1.7282250558945362, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.3467596497772947, 14);
  sqcRYGate(q, 1.5029569327142203, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.058241954883405, 15);
  sqcRYGate(q, 0.6042920881709826, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.012643729086502593, 15);
  sqcRYGate(q, 3.0313264295872564, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.7694124103041583, 16);
  sqcRYGate(q, 3.1093863252795337, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.065523177959164, 16);
  sqcRYGate(q, -1.3554664279800788, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.4284851919173942, 17);
  sqcRYGate(q, 0.1064605456151577, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.09599596428563117, 17);
  sqcRYGate(q, -0.06990186468051533, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.453774469391129, 18);
  sqcRYGate(q, -2.54033349767657, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.5340439570347515, 18);
  sqcRYGate(q, -1.4265413650520278, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.8819603844647851, 0);
  sqcRYGate(q, -2.587203300842593, 1);
  sqcRYGate(q, -1.6665267480545438, 2);
  sqcRYGate(q, -2.552722543015781, 3);
  sqcRYGate(q, 2.9417455184486254, 4);
  sqcRYGate(q, -0.2859777814922971, 5);
  sqcRYGate(q, 2.7334936470140563, 6);
  sqcRYGate(q, 0.023457299375262863, 7);
  sqcRYGate(q, 1.2603847108675215, 8);
  sqcRYGate(q, 0.19685998335340216, 9);
  sqcRYGate(q, -2.783523534879063, 10);
  sqcRYGate(q, -1.1500977259027234, 11);
  sqcRYGate(q, 0.8713883066241762, 12);
  sqcRYGate(q, -0.43001164905195954, 13);
  sqcRYGate(q, 2.5641180193008446, 14);
  sqcRYGate(q, -2.881219475549346, 15);
  sqcRYGate(q, 2.417013957567166, 16);
  sqcRYGate(q, 1.967724784263888, 17);
  sqcRYGate(q, 1.8548527531216052, 18);
  sqcRYGate(q, 2.2415198830943917, 19);

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
