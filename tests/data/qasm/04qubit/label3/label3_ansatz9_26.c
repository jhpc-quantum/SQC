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

  sqcRYGate(q, -0.7597531580739927, 0);
  sqcRYGate(q, 2.3673157544285797, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5138000039392205, 0);
  sqcRYGate(q, -0.9616528440095284, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.118738552817482, 2);
  sqcRYGate(q, 2.727245741506441, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9616121573639795, 2);
  sqcRYGate(q, -0.08177697121027784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5628543033182645, 0);
  sqcRYGate(q, -2.9188688285549134, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1058625203960215, 0);
  sqcRYGate(q, -1.307770488032296, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.591672446238622, 1);
  sqcRYGate(q, -1.2570331667693766, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5967408950327986, 1);
  sqcRYGate(q, -1.8853753436383798, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.396784169168003, 0);
  sqcRYGate(q, 1.395960571515681, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9069488520655127, 0);
  sqcRYGate(q, 2.559358153698763, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.16444882542605743, 1);
  sqcRYGate(q, 2.6179260728459743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.012577630662942088, 1);
  sqcRYGate(q, 0.4633976420206558, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6016592542465466, 0);
  sqcRYGate(q, -1.3260959716171081, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.058591507480886, 0);
  sqcRYGate(q, 2.5256204103465163, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9857565900296255, 2);
  sqcRYGate(q, 2.7432341534491527, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.05791738186551676, 2);
  sqcRYGate(q, 0.7999105817227861, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9285678083987774, 0);
  sqcRYGate(q, -2.4437133307636327, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8355454353940717, 0);
  sqcRYGate(q, 1.57505560662523, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8922442659463184, 1);
  sqcRYGate(q, -0.7269626393743884, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1083118908453335, 1);
  sqcRYGate(q, -0.27421335121833135, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4464294877705317, 0);
  sqcRYGate(q, -1.2380628554238107, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.186804029006781, 0);
  sqcRYGate(q, 1.7169193712483315, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6467834904736853, 1);
  sqcRYGate(q, -2.7294796914490296, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.33154286528211063, 1);
  sqcRYGate(q, 0.8725135531583259, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8711919175703207, 0);
  sqcRYGate(q, 1.9854492993213506, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0955773550689543, 0);
  sqcRYGate(q, 2.4314069509543113, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8012739366354595, 2);
  sqcRYGate(q, 0.8076809181538174, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.368911002491082, 2);
  sqcRYGate(q, -0.8067802015203797, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1482911390226884, 0);
  sqcRYGate(q, -1.314052265461815, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6390278146862447, 0);
  sqcRYGate(q, -0.9257766125255941, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7451670796249381, 1);
  sqcRYGate(q, -1.9954108755455993, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.402173373729212, 1);
  sqcRYGate(q, -2.1770400238428134, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4542990183977165, 0);
  sqcRYGate(q, -2.5920810277075708, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8637662007361069, 0);
  sqcRYGate(q, -0.09114337797068453, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0968302771447456, 1);
  sqcRYGate(q, 0.9836419198307595, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.525205964252482, 1);
  sqcRYGate(q, 0.6132388126816385, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6458537671166877, 0);
  sqcRYGate(q, -0.7255462512577183, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0508956307830135, 0);
  sqcRYGate(q, -1.9588171767347673, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8210194174392003, 2);
  sqcRYGate(q, 2.851871731850484, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3677272860475278, 2);
  sqcRYGate(q, -1.6238372673437178, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1304016938924384, 0);
  sqcRYGate(q, -1.5837260509244844, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9999108544618487, 0);
  sqcRYGate(q, 0.8430924908399593, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8444736006087687, 1);
  sqcRYGate(q, 0.9888877256588628, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9326154868309224, 1);
  sqcRYGate(q, -1.9156790294285047, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7157278781121628, 0);
  sqcRYGate(q, -1.9746833709125626, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2812509836612653, 0);
  sqcRYGate(q, -2.920596541538826, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8914949576929647, 1);
  sqcRYGate(q, 0.4226242993446947, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8815941611323387, 1);
  sqcRYGate(q, 0.8655227144081793, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.35800471300981224, 0);
  sqcRYGate(q, -0.15177067258792398, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2466654403901514, 0);
  sqcRYGate(q, 0.37780395043820114, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.801091018432876, 2);
  sqcRYGate(q, -1.7588500554083204, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9837390476891255, 2);
  sqcRYGate(q, -1.7316643159411287, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6110194265976254, 0);
  sqcRYGate(q, 0.49838872005784346, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0427964391755715, 0);
  sqcRYGate(q, 1.2701638574726317, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.176848599003052, 1);
  sqcRYGate(q, -0.42633194685707365, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7677257973048158, 1);
  sqcRYGate(q, -2.2833695875145277, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4089553414306488, 0);
  sqcRYGate(q, -1.2771623421849774, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1159570803883843, 0);
  sqcRYGate(q, 1.9999117982114356, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.04752883060753277, 1);
  sqcRYGate(q, 0.5530210828462696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1412379985390113, 1);
  sqcRYGate(q, -0.01940672305409459, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7809097042631166, 0);
  sqcRYGate(q, 0.15047418587883596, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9080354564748845, 0);
  sqcRYGate(q, -2.6242038977267663, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9532297294718681, 2);
  sqcRYGate(q, -1.909068608795628, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9518691476988881, 2);
  sqcRYGate(q, -3.0483625332038176, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7073806016085893, 0);
  sqcRYGate(q, -1.12781081661529, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7963611327108064, 0);
  sqcRYGate(q, 1.1784413974063674, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2642930956231311, 1);
  sqcRYGate(q, -0.05637215065000678, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7819713425408075, 1);
  sqcRYGate(q, 0.5796953753954668, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.558373197021177, 0);
  sqcRYGate(q, 0.03880551598051596, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.725839843006768, 0);
  sqcRYGate(q, -0.8389809516861406, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6944979594053802, 1);
  sqcRYGate(q, -0.7607824917400192, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3363896212576325, 1);
  sqcRYGate(q, 1.581996372000515, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.830336336889182, 0);
  sqcRYGate(q, -2.2165165837580743, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3420591087352323, 0);
  sqcRYGate(q, 1.0987475583326782, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0256636443327445, 2);
  sqcRYGate(q, -2.7265367217790404, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6632741266784534, 2);
  sqcRYGate(q, -1.7620815558319043, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4217014440504805, 0);
  sqcRYGate(q, 0.5782711568611849, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8254233041998713, 0);
  sqcRYGate(q, -0.12072547371528448, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.129145103970838, 1);
  sqcRYGate(q, 0.7508664347655999, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9016634781439826, 1);
  sqcRYGate(q, 3.0509750640198714, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.053471043944763, 0);
  sqcRYGate(q, 2.6079039657706757, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8141927484898428, 0);
  sqcRYGate(q, 0.7696526323335864, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.639076458121909, 1);
  sqcRYGate(q, 3.0620576917173516, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7270136480415537, 1);
  sqcRYGate(q, -2.6547625412322042, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.16109479012514516, 0);
  sqcRYGate(q, -2.7315579704381956, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.226868722732373, 0);
  sqcRYGate(q, 1.4175264434324415, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.775942540021587, 2);
  sqcRYGate(q, 1.7080345850497796, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3412916304741475, 2);
  sqcRYGate(q, -1.9711400399495949, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0593066508241535, 0);
  sqcRYGate(q, -0.06585168115520457, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.116964975916435, 0);
  sqcRYGate(q, 0.9773007557574482, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6566204252007104, 1);
  sqcRYGate(q, -1.4487765077744301, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1782141529962873, 1);
  sqcRYGate(q, -1.4746585996903283, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9554203634843008, 0);
  sqcRYGate(q, 2.082805992167624, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.7240927229630407, 0);
  sqcRYGate(q, -1.7199156211148001, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.06757029230067396, 1);
  sqcRYGate(q, -3.0523601238694953, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4447293485660504, 1);
  sqcRYGate(q, -1.991504680103663, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7403795740150139, 0);
  sqcRYGate(q, 3.1207391004435667, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2476996084412963, 0);
  sqcRYGate(q, -1.414134783699259, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7725708965950417, 2);
  sqcRYGate(q, 0.6303767127777613, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1625311394011213, 2);
  sqcRYGate(q, -1.9619123279254447, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9368446246266346, 0);
  sqcRYGate(q, -1.4794034439813446, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0239466564846664, 0);
  sqcRYGate(q, 1.41368692366763, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.118035828920699, 1);
  sqcRYGate(q, 1.0744300095684143, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1084281352569538, 1);
  sqcRYGate(q, -0.9960514462910841, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.46305037996639076, 0);
  sqcRYGate(q, -1.2007934006110803, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.066436757559053, 0);
  sqcRYGate(q, 0.3581575476116945, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8450380862999758, 1);
  sqcRYGate(q, 1.2591336558108752, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4447250199798907, 1);
  sqcRYGate(q, 2.042682827318771, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1678112910715754, 0);
  sqcRYGate(q, -2.6495649573400977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5093733181570537, 0);
  sqcRYGate(q, -1.4520546924393138, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2562133993286304, 2);
  sqcRYGate(q, -2.2237453228228015, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9537528850766391, 2);
  sqcRYGate(q, 1.1320586348343564, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4765935002506225, 0);
  sqcRYGate(q, -1.4452994081981947, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7709854927290785, 0);
  sqcRYGate(q, -0.017742541804370553, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5199084310451165, 1);
  sqcRYGate(q, 2.8078087222396584, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4651486414376893, 1);
  sqcRYGate(q, -2.681032971490749, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9546982070770332, 0);
  sqcRYGate(q, -1.8690370477838956, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.11385934133323615, 0);
  sqcRYGate(q, 0.6614251729953922, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.2370587156710315, 1);
  sqcRYGate(q, -1.6322432009775623, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9040974367824852, 1);
  sqcRYGate(q, 1.710750804639868, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.962701391132946, 0);
  sqcRYGate(q, -2.4653997907403644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4365481983627968, 0);
  sqcRYGate(q, 2.186354820175297, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5910166278946853, 2);
  sqcRYGate(q, 0.7312848257378141, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8366185841502369, 2);
  sqcRYGate(q, -1.9785306536220402, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8453961668911574, 0);
  sqcRYGate(q, -0.04225345932792113, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.39481787945095465, 0);
  sqcRYGate(q, -2.1935836319211477, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.635821179816603, 1);
  sqcRYGate(q, -2.0262908340006867, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5462193347492637, 1);
  sqcRYGate(q, -1.4639792448122924, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2306246062482957, 0);
  sqcRYGate(q, -2.3387099866403256, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8675730638532286, 0);
  sqcRYGate(q, -1.674847426289898, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6543468640554158, 1);
  sqcRYGate(q, 1.427751676680801, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5616478298797074, 1);
  sqcRYGate(q, 0.8665368967573155, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.41123700739211166, 0);
  sqcRYGate(q, 2.091169590455875, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6032742291745148, 0);
  sqcRYGate(q, -1.5267678462498953, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.479017533020249, 2);
  sqcRYGate(q, 2.9722265812615363, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.22523305991941722, 2);
  sqcRYGate(q, 2.5907395915933304, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.19721270277369207, 0);
  sqcRYGate(q, 1.6546043348688197, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.272231181190649, 0);
  sqcRYGate(q, -2.5204543064076663, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0396608599069705, 1);
  sqcRYGate(q, 1.6589069809063415, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1794958493579202, 1);
  sqcRYGate(q, -3.108277426825491, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4364270523878027, 0);
  sqcRYGate(q, 0.2683764689773813, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.559058616648731, 0);
  sqcRYGate(q, -2.3231007761704694, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.923621361860702, 1);
  sqcRYGate(q, 1.5199668048188224, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2471259524549472, 1);
  sqcRYGate(q, 2.9599370863838654, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7990492464087002, 0);
  sqcRYGate(q, 3.08139374363773, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.45355680952114535, 0);
  sqcRYGate(q, 0.7331900133825023, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.583568906414834, 2);
  sqcRYGate(q, 2.2299230911044514, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0290632647154219, 2);
  sqcRYGate(q, -2.297491707792313, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9650279464984566, 0);
  sqcRYGate(q, -0.8869549280813269, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8066630488130812, 0);
  sqcRYGate(q, -0.5383123674361094, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0320673144303316, 1);
  sqcRYGate(q, -2.059390873446187, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.06789146399307, 1);
  sqcRYGate(q, -2.7210715810932378, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.419702797719662, 0);
  sqcRYGate(q, -1.4833466358480651, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9599225039528019, 0);
  sqcRYGate(q, 1.2682906044431703, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.435664872517586, 1);
  sqcRYGate(q, 1.2276125908471123, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1206706382131462, 1);
  sqcRYGate(q, -0.896221117446901, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8373747904959128, 0);
  sqcRYGate(q, 1.4322537366759063, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.521996290274057, 0);
  sqcRYGate(q, 2.2058790462425937, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6498369320249888, 2);
  sqcRYGate(q, 1.414576302521525, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9599402258975385, 2);
  sqcRYGate(q, 0.5737178972125685, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6423725359303047, 0);
  sqcRYGate(q, -2.3541255875784737, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9733782831702724, 0);
  sqcRYGate(q, 0.6509112951475035, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.306247099526538, 1);
  sqcRYGate(q, 1.7079651149923607, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6941665839342175, 1);
  sqcRYGate(q, 2.7600310000415096, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4747463502332332, 0);
  sqcRYGate(q, -0.8757981840480724, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6180577280180044, 0);
  sqcRYGate(q, 2.954351300897566, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.24952195776992572, 1);
  sqcRYGate(q, -0.7817668123458833, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.532726855411753, 1);
  sqcRYGate(q, -0.48957335690518977, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6837269458668467, 0);
  sqcRYGate(q, -2.871261419103059, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8817257361619455, 0);
  sqcRYGate(q, -0.8085588187337046, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7476589118759204, 2);
  sqcRYGate(q, -0.12238155727697997, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0575798916429582, 2);
  sqcRYGate(q, -2.0233295734954604, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0018298386135416, 0);
  sqcRYGate(q, 1.2566747370223519, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7702932131592433, 0);
  sqcRYGate(q, 2.6413854852957255, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1001765533271097, 1);
  sqcRYGate(q, -0.1312679468747131, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2947336228387064, 1);
  sqcRYGate(q, 1.6997913481845623, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7673165772413273, 0);
  sqcRYGate(q, -1.468469625556195, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7136160580861042, 0);
  sqcRYGate(q, -1.0320652491852023, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.2968277628760656, 1);
  sqcRYGate(q, 1.6965871237756387, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7497888448991752, 1);
  sqcRYGate(q, -2.8934111752102636, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.636844518028295, 0);
  sqcRYGate(q, 1.0768029493840965, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6916514608122942, 0);
  sqcRYGate(q, 0.9399268030807413, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9657935351958455, 2);
  sqcRYGate(q, 0.3522605591968682, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4526161558779767, 2);
  sqcRYGate(q, -0.41658517269684897, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.553191406883955, 0);
  sqcRYGate(q, 1.593025560431002, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1092924463083118, 0);
  sqcRYGate(q, -0.5821964389829118, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5033671059132026, 1);
  sqcRYGate(q, -1.6717314109875734, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6685436315003148, 1);
  sqcRYGate(q, -1.481289208532045, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.884212567883267, 0);
  sqcRYGate(q, 2.709780100257134, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9491147606573955, 0);
  sqcRYGate(q, -0.7380161388028537, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8667299779837436, 1);
  sqcRYGate(q, 1.8837986226758616, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.08332265173518037, 1);
  sqcRYGate(q, -0.977431693659307, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.20790915706812382, 0);
  sqcRYGate(q, -0.07639384169275586, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7951337385791453, 0);
  sqcRYGate(q, -0.731202471298306, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6902575498214505, 2);
  sqcRYGate(q, 2.4012351509396916, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9858985694916731, 2);
  sqcRYGate(q, 1.7356023365208264, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2636989493399491, 0);
  sqcRYGate(q, -1.3964044754114404, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2853407992235666, 0);
  sqcRYGate(q, -2.4387276821372503, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0584304542818774, 1);
  sqcRYGate(q, -3.1026869228947183, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6603912721769252, 1);
  sqcRYGate(q, 1.285825450260396, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2387930238750469, 0);
  sqcRYGate(q, -1.986003338537019, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.157818207490048, 0);
  sqcRYGate(q, 1.874505382758585, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1059464523241958, 1);
  sqcRYGate(q, 2.28483949746162, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1982759765329438, 1);
  sqcRYGate(q, 2.231860948525463, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8763370563117365, 0);
  sqcRYGate(q, -0.48907707493089525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7048607040765846, 0);
  sqcRYGate(q, 2.320321011090885, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4203438867711036, 2);
  sqcRYGate(q, -0.9075871963289989, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.378709218605912, 2);
  sqcRYGate(q, 0.0386066678935837, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.074980209252407, 0);
  sqcRYGate(q, -1.3460736346538567, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0228224798765944, 0);
  sqcRYGate(q, 1.2923370934314145, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.49709785473045714, 1);
  sqcRYGate(q, 2.949938426416489, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.19106447372698, 1);
  sqcRYGate(q, -0.6436141413410743, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0879525273095265, 0);
  sqcRYGate(q, -1.1007250559548707, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7501769249808814, 0);
  sqcRYGate(q, -0.3631258032096165, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.06314213372076782, 1);
  sqcRYGate(q, -2.7323307687973792, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9880102716025063, 1);
  sqcRYGate(q, 2.196339968654555, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.736229265489868, 0);
  sqcRYGate(q, 1.8023406117691882, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5160434954591633, 0);
  sqcRYGate(q, -1.4562031566850937, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.538694190802903, 2);
  sqcRYGate(q, -0.7859920295389512, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9360915156265156, 2);
  sqcRYGate(q, -2.3791576804293206, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.275086125647386, 0);
  sqcRYGate(q, 1.1111107349238418, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7283879992662283, 0);
  sqcRYGate(q, 0.923671813635722, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.394410097063524, 1);
  sqcRYGate(q, 1.328182574215674, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1859048641658934, 1);
  sqcRYGate(q, -1.5835540002465824, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9523144907950005, 0);
  sqcRYGate(q, 1.1222385465334062, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6626141231177387, 0);
  sqcRYGate(q, 2.7646479922573794, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8323358868111529, 1);
  sqcRYGate(q, 2.82819647228263, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.455674234102779, 1);
  sqcRYGate(q, -2.664184791854701, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.22847595147749453, 0);
  sqcRYGate(q, 0.050991983129894614, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4843793296614296, 0);
  sqcRYGate(q, 0.05106493285580971, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.205391864245346, 2);
  sqcRYGate(q, -1.826736991454516, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7065109715830906, 2);
  sqcRYGate(q, -2.930217767120257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2013184444527178, 0);
  sqcRYGate(q, 2.4787670409707685, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.45593189486880087, 0);
  sqcRYGate(q, 2.2678928933339613, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.11380083861088443, 1);
  sqcRYGate(q, 2.4086036635973396, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.123055628648569, 1);
  sqcRYGate(q, -0.8923481072348209, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9852404538359862, 0);
  sqcRYGate(q, -0.052621857043352975, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.622875801085004, 0);
  sqcRYGate(q, 2.664486224905583, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8850940126831426, 1);
  sqcRYGate(q, 1.5794592482259635, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1219869183939597, 1);
  sqcRYGate(q, 0.7053510592632417, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.81971181299643, 0);
  sqcRYGate(q, 1.0922870805400342, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2212492015204766, 0);
  sqcRYGate(q, -1.8056221894470017, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4585830891322154, 2);
  sqcRYGate(q, 0.45124111874708284, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.557113212108294, 2);
  sqcRYGate(q, 1.2275586743967537, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.723924431966771, 0);
  sqcRYGate(q, -2.6260949549825305, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0004365384908542, 0);
  sqcRYGate(q, -2.704536506148938, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.017049967173574, 1);
  sqcRYGate(q, 0.8882269598134515, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0494853580953205, 1);
  sqcRYGate(q, 2.9516434453634433, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8948578964380764, 0);
  sqcRYGate(q, -0.5885079134832081, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9147256993960666, 0);
  sqcRYGate(q, 1.831906536990358, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.09298113777841888, 1);
  sqcRYGate(q, 2.812174194875238, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4430993966437624, 1);
  sqcRYGate(q, 1.4751244885340862, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2853384590043726, 0);
  sqcRYGate(q, 1.528405617988953, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4865313445541611, 0);
  sqcRYGate(q, 2.7199929072584554, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7014833450433724, 2);
  sqcRYGate(q, -1.9175752561871109, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.78375441151011, 2);
  sqcRYGate(q, -2.774398552806838, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7825769190223664, 0);
  sqcRYGate(q, 1.281731776498279, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.12851391502403417, 0);
  sqcRYGate(q, -1.7919912873922086, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8403288510644784, 1);
  sqcRYGate(q, -2.8033273712127387, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2260430554054924, 1);
  sqcRYGate(q, -1.2608079480797938, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5457000982839466, 0);
  sqcRYGate(q, -1.311793607708215, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6738656188106961, 0);
  sqcRYGate(q, -1.1638622438602402, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0335536219636943, 1);
  sqcRYGate(q, 0.7158110224945923, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.422226040876767, 1);
  sqcRYGate(q, 3.0943644128728813, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9192433016000012, 0);
  sqcRYGate(q, 0.6040518145359801, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.428329353000273, 0);
  sqcRYGate(q, 2.859464327310045, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9895594953226876, 2);
  sqcRYGate(q, -1.5099062225544286, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.090626108009177, 2);
  sqcRYGate(q, -2.1482614971497576, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.109287668373077, 0);
  sqcRYGate(q, -0.3723767628254223, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1880187928319641, 0);
  sqcRYGate(q, 0.6634113260703742, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.161733246760762, 1);
  sqcRYGate(q, 0.9785205249954422, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9766717429857534, 1);
  sqcRYGate(q, 0.9738950188807509, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1441121289062812, 0);
  sqcRYGate(q, 2.2769388000612887, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.137190054425033, 0);
  sqcRYGate(q, -1.3898580401805145, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.311395347843681, 1);
  sqcRYGate(q, -0.1452879391921538, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3010377879447514, 1);
  sqcRYGate(q, 0.31285037071791744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4926636258772055, 0);
  sqcRYGate(q, -1.721882301221937, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8781072091885413, 0);
  sqcRYGate(q, -1.0976660516194183, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8728746609567883, 2);
  sqcRYGate(q, -1.4201364954180953, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0928887187558214, 2);
  sqcRYGate(q, 3.1240485315215185, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1171033273747693, 0);
  sqcRYGate(q, 1.7563654817433374, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8365254928729793, 0);
  sqcRYGate(q, -0.5115067965119745, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0236675831314246, 1);
  sqcRYGate(q, 0.5504772900079811, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0461686354365298, 1);
  sqcRYGate(q, -0.24659257648785135, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9443798425208927, 0);
  sqcRYGate(q, -0.10063081595967929, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.650489205712674, 0);
  sqcRYGate(q, 2.451893952093975, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.684049148429021, 1);
  sqcRYGate(q, 1.7546545852859745, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7108053631766253, 1);
  sqcRYGate(q, 1.0024142719804638, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.08514275682378614, 0);
  sqcRYGate(q, -2.8174782114629355, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5175844647112777, 0);
  sqcRYGate(q, -2.502777844827198, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0487993523613044, 2);
  sqcRYGate(q, -0.08539049976008188, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1209356485482176, 2);
  sqcRYGate(q, -2.3681004468317672, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5412343577280794, 0);
  sqcRYGate(q, -2.322357172261961, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5710634013589337, 0);
  sqcRYGate(q, 2.15922131392706, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.804692031092402, 1);
  sqcRYGate(q, 2.5494350614835866, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.831656086600483, 1);
  sqcRYGate(q, -1.5889832133214281, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.08618648690703, 0);
  sqcRYGate(q, -0.47869358025073416, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.34876487733557493, 0);
  sqcRYGate(q, -2.412917722322569, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3725666050818477, 1);
  sqcRYGate(q, 1.613109496901019, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6513602468179549, 1);
  sqcRYGate(q, 2.072607473141897, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4910223409149905, 0);
  sqcRYGate(q, 0.30482233729510966, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2836909063812753, 0);
  sqcRYGate(q, -0.6696050175172577, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2583429666304915, 2);
  sqcRYGate(q, 1.1848559455578815, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5274844017780487, 2);
  sqcRYGate(q, -2.092917197911625, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2240340589265104, 0);
  sqcRYGate(q, 2.1031611096164804, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.16244588586903055, 0);
  sqcRYGate(q, 0.5774651974740168, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.995675899435339, 1);
  sqcRYGate(q, -1.7488880551997938, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1960310966397, 1);
  sqcRYGate(q, -2.978717734051935, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.10563641230969445, 0);
  sqcRYGate(q, -2.639562682595153, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9782250379108692, 0);
  sqcRYGate(q, 1.7993922636112858, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2035562738597407, 1);
  sqcRYGate(q, 2.923990210528185, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.991739858778936, 1);
  sqcRYGate(q, -0.6225783114788962, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.629313771531995, 0);
  sqcRYGate(q, -2.3403318942137368, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9677665856190751, 0);
  sqcRYGate(q, -2.606622357613536, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0285035490289407, 2);
  sqcRYGate(q, 1.5735614488294447, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8576926524089616, 2);
  sqcRYGate(q, -2.0901551644998078, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5040836582278524, 0);
  sqcRYGate(q, 1.068416406922827, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.804078446803668, 0);
  sqcRYGate(q, 2.0000047941809536, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6678529010356344, 1);
  sqcRYGate(q, 1.2491398548629504, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7980402800950257, 1);
  sqcRYGate(q, 0.42846640811569614, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.576871750890899, 0);
  sqcRYGate(q, -1.8236001449430876, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.21638551922182495, 0);
  sqcRYGate(q, -2.964308593204878, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6239629743364423, 1);
  sqcRYGate(q, -0.9653849285343261, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8754936967886473, 1);
  sqcRYGate(q, -1.5139621986038119, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7828945660137945, 0);
  sqcRYGate(q, -0.38256644254205324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3994847959158463, 0);
  sqcRYGate(q, 1.788016716541582, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3361409332830245, 2);
  sqcRYGate(q, -0.7168298304006308, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5423390381659283, 2);
  sqcRYGate(q, 3.1157589218349067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.135700445715681, 0);
  sqcRYGate(q, -1.5596372660454287, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5508158798725473, 0);
  sqcRYGate(q, -2.020347342318976, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5837569777138047, 1);
  sqcRYGate(q, 1.6013538949345953, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9916761620105303, 1);
  sqcRYGate(q, 1.2004102107467098, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9635067460165468, 0);
  sqcRYGate(q, 0.5287562064380521, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.03349755696592993, 0);
  sqcRYGate(q, 1.5372549928846384, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0307765010772645, 1);
  sqcRYGate(q, 0.21361999565030199, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.005444249705747, 1);
  sqcRYGate(q, 2.0382031940752388, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7053579434935027, 0);
  sqcRYGate(q, -0.1035850819927993, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0148424475833604, 0);
  sqcRYGate(q, 0.6909828620496885, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6533036575159006, 2);
  sqcRYGate(q, 2.1687583408162614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.523422466232964, 2);
  sqcRYGate(q, 2.959203178144149, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4824292291850103, 0);
  sqcRYGate(q, 3.1263624516585207, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5881192567537843, 0);
  sqcRYGate(q, 3.0673871110091193, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9906726176901097, 1);
  sqcRYGate(q, -2.363571823282147, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.907080734077196, 1);
  sqcRYGate(q, 2.092943853707312, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7584136454743025, 0);
  sqcRYGate(q, 1.586591084841876, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.42898728777940365, 0);
  sqcRYGate(q, -0.7956640669567331, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8672481454532743, 1);
  sqcRYGate(q, 2.076620523139175, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8651838871448987, 1);
  sqcRYGate(q, 2.487410593963561, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6883070507129377, 0);
  sqcRYGate(q, 2.910205842947834, 1);
  sqcRYGate(q, -2.8610150173426723, 2);
  sqcRYGate(q, 0.4500995372670857, 3);

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
