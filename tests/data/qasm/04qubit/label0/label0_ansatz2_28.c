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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 0.2319007339527639, 0);
  sqcRZGate(q, -0.897446841583436, 0);
  sqcRYGate(q, -3.0604216046580586, 1);
  sqcRZGate(q, -2.4138833394096615, 1);
  sqcRYGate(q, 2.493500850587442, 2);
  sqcRZGate(q, -0.7551740889812785, 2);
  sqcRYGate(q, -1.465437883630056, 3);
  sqcRZGate(q, -1.8422488234750904, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.399586706706509, 0);
  sqcRZGate(q, -2.28537871811449, 0);
  sqcRYGate(q, -2.055567606832196, 1);
  sqcRZGate(q, 1.033637530793654, 1);
  sqcRYGate(q, 2.7988486557227437, 2);
  sqcRZGate(q, -2.440857172318061, 2);
  sqcRYGate(q, -1.0955581654107593, 3);
  sqcRZGate(q, -1.848595451511832, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.4211464509582177, 0);
  sqcRZGate(q, 0.43831574139327434, 0);
  sqcRYGate(q, -2.2320842288179614, 1);
  sqcRZGate(q, 0.6937030764432445, 1);
  sqcRYGate(q, 2.8282644390835956, 2);
  sqcRZGate(q, 0.21075803912772617, 2);
  sqcRYGate(q, 1.0531344626740056, 3);
  sqcRZGate(q, -1.3837424104572147, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.7038304073752846, 0);
  sqcRZGate(q, 2.1525732898935823, 0);
  sqcRYGate(q, -2.7434503565430655, 1);
  sqcRZGate(q, -1.95505921919289, 1);
  sqcRYGate(q, 1.7087474848966258, 2);
  sqcRZGate(q, 3.0159391238335393, 2);
  sqcRYGate(q, 0.36025627040025215, 3);
  sqcRZGate(q, -1.4881212092269134, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.385540244606418, 0);
  sqcRZGate(q, -1.8047849616733345, 0);
  sqcRYGate(q, 1.4470860472562492, 1);
  sqcRZGate(q, 2.0104966686962675, 1);
  sqcRYGate(q, 2.6309122228230923, 2);
  sqcRZGate(q, -3.065550341658743, 2);
  sqcRYGate(q, -0.7185663632477421, 3);
  sqcRZGate(q, -0.22562789723861704, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.5767075988846482, 0);
  sqcRZGate(q, 0.9364826896097402, 0);
  sqcRYGate(q, 0.7025401772818126, 1);
  sqcRZGate(q, -1.2696290575849116, 1);
  sqcRYGate(q, 1.556794358619522, 2);
  sqcRZGate(q, 2.0841600229054595, 2);
  sqcRYGate(q, 2.6480614998630445, 3);
  sqcRZGate(q, -1.7177697018247138, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.22216983483667008, 0);
  sqcRZGate(q, 2.3890667539696695, 0);
  sqcRYGate(q, 2.145860475926475, 1);
  sqcRZGate(q, -2.4895113453136135, 1);
  sqcRYGate(q, -2.4035197329670552, 2);
  sqcRZGate(q, 0.8202487213593203, 2);
  sqcRYGate(q, 1.6208592945215958, 3);
  sqcRZGate(q, 1.0594848162366606, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.9331698375015894, 0);
  sqcRZGate(q, 2.1525435104687443, 0);
  sqcRYGate(q, 2.2864041939625954, 1);
  sqcRZGate(q, -1.2066952553873715, 1);
  sqcRYGate(q, -0.9231005916204724, 2);
  sqcRZGate(q, -1.2898008174788425, 2);
  sqcRYGate(q, -0.6676199252216843, 3);
  sqcRZGate(q, 2.827903564287944, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.191192257571996, 0);
  sqcRZGate(q, -1.2239035527022628, 0);
  sqcRYGate(q, 0.2181103048514588, 1);
  sqcRZGate(q, -2.9967536939789543, 1);
  sqcRYGate(q, -2.0707835218908865, 2);
  sqcRZGate(q, -1.3406537894401902, 2);
  sqcRYGate(q, 2.162653174632422, 3);
  sqcRZGate(q, -2.8120026160962257, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.17790012795177468, 0);
  sqcRZGate(q, 0.8329060686699341, 0);
  sqcRYGate(q, -0.045966490381596475, 1);
  sqcRZGate(q, 2.117823658920635, 1);
  sqcRYGate(q, 2.55562099067783, 2);
  sqcRZGate(q, -2.9021783519352864, 2);
  sqcRYGate(q, -0.27819327672346045, 3);
  sqcRZGate(q, -0.033168402428476455, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.391065132351965, 0);
  sqcRZGate(q, -2.164406748068608, 0);
  sqcRYGate(q, 0.5623596219732601, 1);
  sqcRZGate(q, -0.2620337163224668, 1);
  sqcRYGate(q, 2.1896748697750663, 2);
  sqcRZGate(q, 0.7808078785395093, 2);
  sqcRYGate(q, -0.08257815228843857, 3);
  sqcRZGate(q, -1.9238805441053504, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.8269251561340396, 0);
  sqcRZGate(q, -2.328529844290891, 0);
  sqcRYGate(q, 3.0276849127970125, 1);
  sqcRZGate(q, -0.8456529300172754, 1);
  sqcRYGate(q, 2.2280816166334256, 2);
  sqcRZGate(q, -0.9778490147010794, 2);
  sqcRYGate(q, 2.33538141592216, 3);
  sqcRZGate(q, -3.062835195619994, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.865641951000576, 0);
  sqcRZGate(q, -2.9501908662254115, 0);
  sqcRYGate(q, 1.5232394636149875, 1);
  sqcRZGate(q, -2.759877966022628, 1);
  sqcRYGate(q, -2.3168319357139473, 2);
  sqcRZGate(q, -2.046346757950021, 2);
  sqcRYGate(q, -2.206884470546259, 3);
  sqcRZGate(q, 0.845614214146619, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.3608553686864677, 0);
  sqcRZGate(q, -2.602160290563244, 0);
  sqcRYGate(q, -1.3390941902249807, 1);
  sqcRZGate(q, 1.4288303943990701, 1);
  sqcRYGate(q, -2.293699123161763, 2);
  sqcRZGate(q, -2.703706105699601, 2);
  sqcRYGate(q, 0.752594377084708, 3);
  sqcRZGate(q, 0.647350082020286, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.0880293054688295, 0);
  sqcRZGate(q, 0.9158806217111286, 0);
  sqcRYGate(q, -0.3660095520782643, 1);
  sqcRZGate(q, 1.8700398215446274, 1);
  sqcRYGate(q, 2.2332131176869368, 2);
  sqcRZGate(q, 0.42239413813537224, 2);
  sqcRYGate(q, -1.3396259518890385, 3);
  sqcRZGate(q, 2.068289949611187, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.7363382949546, 0);
  sqcRZGate(q, -3.022638368661794, 0);
  sqcRYGate(q, 2.872037242027629, 1);
  sqcRZGate(q, 0.8205105710223908, 1);
  sqcRYGate(q, 0.2903017826874619, 2);
  sqcRZGate(q, -1.6342279775186768, 2);
  sqcRYGate(q, -0.72203349975522, 3);
  sqcRZGate(q, 0.0945890406254488, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.9127198387770257, 0);
  sqcRZGate(q, -1.4003403164075037, 0);
  sqcRYGate(q, -2.4162980714803908, 1);
  sqcRZGate(q, 3.1181428940576676, 1);
  sqcRYGate(q, 1.0681580369754808, 2);
  sqcRZGate(q, 0.19255192210742733, 2);
  sqcRYGate(q, -1.2618656361063987, 3);
  sqcRZGate(q, -0.4989213507004715, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.2411425069496502, 0);
  sqcRZGate(q, 1.4985156198319232, 0);
  sqcRYGate(q, 2.0697113042102195, 1);
  sqcRZGate(q, 2.8916974208001345, 1);
  sqcRYGate(q, 0.250193663463203, 2);
  sqcRZGate(q, -2.940074221982433, 2);
  sqcRYGate(q, -0.6144861296784762, 3);
  sqcRZGate(q, 0.946913518638353, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.5673519594123873, 0);
  sqcRZGate(q, -0.6775177781467994, 0);
  sqcRYGate(q, 2.2622286478593887, 1);
  sqcRZGate(q, 1.7276444563873257, 1);
  sqcRYGate(q, -1.4657399153118698, 2);
  sqcRZGate(q, -0.8562369735876906, 2);
  sqcRYGate(q, 1.2039270654614622, 3);
  sqcRZGate(q, -2.460087616293356, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.8027344085413812, 0);
  sqcRZGate(q, -2.508438148261596, 0);
  sqcRYGate(q, 1.8094202626295197, 1);
  sqcRZGate(q, -0.7989246140887886, 1);
  sqcRYGate(q, 1.874367016512596, 2);
  sqcRZGate(q, -3.13993795281966, 2);
  sqcRYGate(q, 1.3383795131388387, 3);
  sqcRZGate(q, 1.2768041169649922, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.091897890410424, 0);
  sqcRZGate(q, 1.605395413893958, 0);
  sqcRYGate(q, -0.04023962481159045, 1);
  sqcRZGate(q, 0.24313082677500172, 1);
  sqcRYGate(q, -1.8060265379400091, 2);
  sqcRZGate(q, -2.286568793387581, 2);
  sqcRYGate(q, 2.96539944965115, 3);
  sqcRZGate(q, 2.485848805970813, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.7391977976005526, 0);
  sqcRZGate(q, -2.46146757372289, 0);
  sqcRYGate(q, -2.281044261538026, 1);
  sqcRZGate(q, -1.471901035327656, 1);
  sqcRYGate(q, 0.888953092532873, 2);
  sqcRZGate(q, 2.615049645430774, 2);
  sqcRYGate(q, -2.4633871890072427, 3);
  sqcRZGate(q, -3.0024578893740994, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.0057687044170263, 0);
  sqcRZGate(q, -2.6414508974471365, 0);
  sqcRYGate(q, 0.6479516276587391, 1);
  sqcRZGate(q, 1.9405766397940463, 1);
  sqcRYGate(q, -1.7441188701473331, 2);
  sqcRZGate(q, -0.843807285993948, 2);
  sqcRYGate(q, -0.8920800541728746, 3);
  sqcRZGate(q, 0.6258324932691339, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.08510288294024, 0);
  sqcRZGate(q, -0.12511760649972178, 0);
  sqcRYGate(q, 1.8360108530580304, 1);
  sqcRZGate(q, 0.8100937229386425, 1);
  sqcRYGate(q, -0.9155369846323593, 2);
  sqcRZGate(q, -2.3046175988265816, 2);
  sqcRYGate(q, -1.7673584194284178, 3);
  sqcRZGate(q, 1.8571966720929032, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.1248245419259657, 0);
  sqcRZGate(q, 0.7811158753609597, 0);
  sqcRYGate(q, -0.5231313718357731, 1);
  sqcRZGate(q, -0.6084205164624077, 1);
  sqcRYGate(q, -1.6264632359293936, 2);
  sqcRZGate(q, -2.038302852293538, 2);
  sqcRYGate(q, 0.34682420245376744, 3);
  sqcRZGate(q, -1.08091660577972, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.216529485503351, 0);
  sqcRZGate(q, -2.9225396150501317, 0);
  sqcRYGate(q, -1.7731435928122945, 1);
  sqcRZGate(q, 1.7149252348716586, 1);
  sqcRYGate(q, 1.615204643978057, 2);
  sqcRZGate(q, -0.7656145448848717, 2);
  sqcRYGate(q, 1.8852027600211512, 3);
  sqcRZGate(q, 0.9817686831393768, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.342375019573245, 0);
  sqcRZGate(q, -1.3631059156823555, 0);
  sqcRYGate(q, 1.2761952413527746, 1);
  sqcRZGate(q, 0.021782654287120447, 1);
  sqcRYGate(q, -3.0899867611047234, 2);
  sqcRZGate(q, -1.6940087567144513, 2);
  sqcRYGate(q, 2.323489401027702, 3);
  sqcRZGate(q, 1.8576851913434984, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.399275769465037, 0);
  sqcRZGate(q, -2.889183710148379, 0);
  sqcRYGate(q, 2.0921954880964457, 1);
  sqcRZGate(q, 0.43989676345215645, 1);
  sqcRYGate(q, -1.751292496951512, 2);
  sqcRZGate(q, -2.7085006898096005, 2);
  sqcRYGate(q, 0.10703014294267632, 3);
  sqcRZGate(q, 0.16442107879569876, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.0146127810974424, 0);
  sqcRZGate(q, -1.2866604149150773, 0);
  sqcRYGate(q, 0.7157390079577531, 1);
  sqcRZGate(q, -1.9644076592288044, 1);
  sqcRYGate(q, -1.2384570229973477, 2);
  sqcRZGate(q, 1.2844149237583213, 2);
  sqcRYGate(q, -0.8901707186319756, 3);
  sqcRZGate(q, -2.722569385179934, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.7807685439436987, 0);
  sqcRZGate(q, 2.805226205285176, 0);
  sqcRYGate(q, 1.956181154949634, 1);
  sqcRZGate(q, -2.327446190197279, 1);
  sqcRYGate(q, 1.974004497551184, 2);
  sqcRZGate(q, -0.692000611693901, 2);
  sqcRYGate(q, 2.996760366422227, 3);
  sqcRZGate(q, 0.9412464224812265, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.665875641888808, 0);
  sqcRZGate(q, -2.291363432650442, 0);
  sqcRYGate(q, 1.1921516225794224, 1);
  sqcRZGate(q, -1.3370084429953415, 1);
  sqcRYGate(q, 0.9980931770757824, 2);
  sqcRZGate(q, -2.1575514406056717, 2);
  sqcRYGate(q, -1.9024096983092305, 3);
  sqcRZGate(q, 0.7265759174132399, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.3786809340789468, 0);
  sqcRZGate(q, 1.8442844455542307, 0);
  sqcRYGate(q, -2.6505484349497865, 1);
  sqcRZGate(q, -0.9121634405175101, 1);
  sqcRYGate(q, 0.9362368307641464, 2);
  sqcRZGate(q, -0.951253401191361, 2);
  sqcRYGate(q, 0.5977442580189506, 3);
  sqcRZGate(q, 1.3188534678794293, 3);

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
