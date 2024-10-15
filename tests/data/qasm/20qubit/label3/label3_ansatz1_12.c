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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -2.5624975548053963, 0);
  sqcRZGate(q, 2.1810325248013536, 0);
  sqcRYGate(q, -1.4727430038982918, 1);
  sqcRZGate(q, -1.6677826296137797, 1);
  sqcRYGate(q, 1.9374098711101473, 2);
  sqcRZGate(q, -2.7004114915993314, 2);
  sqcRYGate(q, 0.7632257409695171, 3);
  sqcRZGate(q, -3.0305751284580666, 3);
  sqcRYGate(q, -0.2607422559451651, 4);
  sqcRZGate(q, -0.07669488087524963, 4);
  sqcRYGate(q, 1.7254404079477257, 5);
  sqcRZGate(q, -2.617493954424326, 5);
  sqcRYGate(q, -2.6301226943101352, 6);
  sqcRZGate(q, -1.289721266203851, 6);
  sqcRYGate(q, 0.28785618137154323, 7);
  sqcRZGate(q, 2.7401339444245343, 7);
  sqcRYGate(q, 1.628282623204119, 8);
  sqcRZGate(q, 1.6660334810385076, 8);
  sqcRYGate(q, 2.7195331098849076, 9);
  sqcRZGate(q, 2.1273200410743685, 9);
  sqcRYGate(q, -0.1178522612810271, 10);
  sqcRZGate(q, -2.7400061157955817, 10);
  sqcRYGate(q, 2.594347498143642, 11);
  sqcRZGate(q, 3.1386751704930718, 11);
  sqcRYGate(q, -1.601444532511179, 12);
  sqcRZGate(q, -1.0123875011235777, 12);
  sqcRYGate(q, -1.6306946292429294, 13);
  sqcRZGate(q, -0.07644243320128084, 13);
  sqcRYGate(q, -0.5898612044828828, 14);
  sqcRZGate(q, 1.1057202754683004, 14);
  sqcRYGate(q, 1.4566077002613764, 15);
  sqcRZGate(q, -2.046748594243109, 15);
  sqcRYGate(q, -0.8768476174648541, 16);
  sqcRZGate(q, 1.8076383220153645, 16);
  sqcRYGate(q, -1.748470633841576, 17);
  sqcRZGate(q, -1.449751722732527, 17);
  sqcRYGate(q, 0.05993626475039893, 18);
  sqcRZGate(q, 1.3101984680884666, 18);
  sqcRYGate(q, -0.40171460082561594, 19);
  sqcRZGate(q, 2.9855465263601952, 19);
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
  sqcRYGate(q, 1.9015562795345202, 0);
  sqcRZGate(q, 2.6028511751023133, 0);
  sqcRYGate(q, -1.0571040366580373, 1);
  sqcRZGate(q, -0.694388815222135, 1);
  sqcRYGate(q, 0.32203585522804573, 2);
  sqcRZGate(q, 1.776909629491845, 2);
  sqcRYGate(q, 1.8024932683460468, 3);
  sqcRZGate(q, -2.9403529821702827, 3);
  sqcRYGate(q, 1.5397863638921994, 4);
  sqcRZGate(q, -2.887821982912097, 4);
  sqcRYGate(q, 1.6678607455499763, 5);
  sqcRZGate(q, -1.3800236476785592, 5);
  sqcRYGate(q, -1.4830039471486982, 6);
  sqcRZGate(q, -1.7401534388717574, 6);
  sqcRYGate(q, 1.7637392238118892, 7);
  sqcRZGate(q, -3.008684295068348, 7);
  sqcRYGate(q, -0.901425101575481, 8);
  sqcRZGate(q, 1.566760341992457, 8);
  sqcRYGate(q, 2.4524776856301496, 9);
  sqcRZGate(q, 1.6923899876417856, 9);
  sqcRYGate(q, 2.9962931847059404, 10);
  sqcRZGate(q, 0.4844462126479079, 10);
  sqcRYGate(q, 1.47566124497855, 11);
  sqcRZGate(q, 0.04237232514117739, 11);
  sqcRYGate(q, -3.0680143508936446, 12);
  sqcRZGate(q, -1.0054625044858445, 12);
  sqcRYGate(q, -1.5832441139213254, 13);
  sqcRZGate(q, -0.03972726399284809, 13);
  sqcRYGate(q, -0.42105788347678175, 14);
  sqcRZGate(q, -0.9716539343400183, 14);
  sqcRYGate(q, -0.5042563204093952, 15);
  sqcRZGate(q, -1.551411410712439, 15);
  sqcRYGate(q, 1.6805602628709166, 16);
  sqcRZGate(q, -0.8388490191944024, 16);
  sqcRYGate(q, 1.0193226239295, 17);
  sqcRZGate(q, 1.9154731616511382, 17);
  sqcRYGate(q, 0.008601360037815198, 18);
  sqcRZGate(q, 1.3516306669964484, 18);
  sqcRYGate(q, -1.7938695122224324, 19);
  sqcRZGate(q, 2.3297766106767512, 19);
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
  sqcRYGate(q, 1.8326841674783045, 0);
  sqcRZGate(q, -1.3289146269708534, 0);
  sqcRYGate(q, -2.1452526713277047, 1);
  sqcRZGate(q, 2.4884730696058908, 1);
  sqcRYGate(q, -1.3853303158737549, 2);
  sqcRZGate(q, 2.785705017249523, 2);
  sqcRYGate(q, -0.04219775526653946, 3);
  sqcRZGate(q, 0.13799810616619054, 3);
  sqcRYGate(q, -2.5041620657980928, 4);
  sqcRZGate(q, 2.899127112468016, 4);
  sqcRYGate(q, 2.719825709305797, 5);
  sqcRZGate(q, -0.08758296451110052, 5);
  sqcRYGate(q, -1.6727252105246961, 6);
  sqcRZGate(q, 0.015620384918849872, 6);
  sqcRYGate(q, -0.33200562357362884, 7);
  sqcRZGate(q, 3.0630172661824955, 7);
  sqcRYGate(q, -1.6067313089808468, 8);
  sqcRZGate(q, 2.6441213825492103, 8);
  sqcRYGate(q, -2.065572054948392, 9);
  sqcRZGate(q, 1.7930909898779692, 9);
  sqcRYGate(q, 3.119459127250558, 10);
  sqcRZGate(q, -2.081246505695491, 10);
  sqcRYGate(q, 2.995411735488234, 11);
  sqcRZGate(q, 0.0275743131270921, 11);
  sqcRYGate(q, -1.5535611542806393, 12);
  sqcRZGate(q, -1.8618707642977093, 12);
  sqcRYGate(q, -3.0554054082523177, 13);
  sqcRZGate(q, 1.5015744114186826, 13);
  sqcRYGate(q, -0.009185907653371572, 14);
  sqcRZGate(q, 0.6356694786210078, 14);
  sqcRYGate(q, 1.9139090025373802, 15);
  sqcRZGate(q, -0.08462910770134169, 15);
  sqcRYGate(q, -1.5141913043785094, 16);
  sqcRZGate(q, -1.1470345792236523, 16);
  sqcRYGate(q, 1.669905714336437, 17);
  sqcRZGate(q, 0.9355937373401951, 17);
  sqcRYGate(q, -0.06130927279254239, 18);
  sqcRZGate(q, 2.869239310556244, 18);
  sqcRYGate(q, 2.587653506339445, 19);
  sqcRZGate(q, -2.479828163589975, 19);
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
  sqcRYGate(q, -1.8960986549050938, 0);
  sqcRZGate(q, 1.2719281242400324, 0);
  sqcRYGate(q, 2.902981662094838, 1);
  sqcRZGate(q, -1.9065508449348423, 1);
  sqcRYGate(q, -0.9583255537437215, 2);
  sqcRZGate(q, 0.6057320261319887, 2);
  sqcRYGate(q, 0.1749779041909748, 3);
  sqcRZGate(q, -0.3015202928892222, 3);
  sqcRYGate(q, -1.3121146961744687, 4);
  sqcRZGate(q, -0.1313195255252686, 4);
  sqcRYGate(q, -0.007971441700791278, 5);
  sqcRZGate(q, 1.976779095133893, 5);
  sqcRYGate(q, 1.590074689323231, 6);
  sqcRZGate(q, 3.1209266275059027, 6);
  sqcRYGate(q, -0.09693854956219078, 7);
  sqcRZGate(q, 1.5132251550327318, 7);
  sqcRYGate(q, 1.6618006226228133, 8);
  sqcRZGate(q, -1.6339991603407715, 8);
  sqcRYGate(q, -1.9581397494467665, 9);
  sqcRZGate(q, -1.4399270154766561, 9);
  sqcRYGate(q, 2.6739245335571473, 10);
  sqcRZGate(q, 0.4049891080258812, 10);
  sqcRYGate(q, 1.6597288837026896, 11);
  sqcRZGate(q, -1.3448344959056868, 11);
  sqcRYGate(q, 1.9138826284502388, 12);
  sqcRZGate(q, -2.7524641217546653, 12);
  sqcRYGate(q, -1.7283699170633278, 13);
  sqcRZGate(q, 1.385058635948372, 13);
  sqcRYGate(q, -0.7616427702479386, 14);
  sqcRZGate(q, -2.5717871026069106, 14);
  sqcRYGate(q, -3.0520009838438473, 15);
  sqcRZGate(q, -2.4306575299595994, 15);
  sqcRYGate(q, -2.016005656568803, 16);
  sqcRZGate(q, 1.7397915986836292, 16);
  sqcRYGate(q, -0.976616854455667, 17);
  sqcRZGate(q, -1.2400384962988236, 17);
  sqcRYGate(q, 1.2098090538221395, 18);
  sqcRZGate(q, 1.5937091573650777, 18);
  sqcRYGate(q, 1.606486575331951, 19);
  sqcRZGate(q, -1.3212704820948, 19);
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
  sqcRYGate(q, -0.5142659291911293, 0);
  sqcRZGate(q, 0.5471877944583198, 0);
  sqcRYGate(q, 1.6259731066784198, 1);
  sqcRZGate(q, -1.8518976162332974, 1);
  sqcRYGate(q, -2.7610941199382513, 2);
  sqcRZGate(q, -0.1496777797772015, 2);
  sqcRYGate(q, -2.2037940669934706, 3);
  sqcRZGate(q, 0.12804713023942327, 3);
  sqcRYGate(q, -2.4985330244355386, 4);
  sqcRZGate(q, -1.0110157465656888, 4);
  sqcRYGate(q, 0.6624616356295306, 5);
  sqcRZGate(q, 0.5031053983704341, 5);
  sqcRYGate(q, 1.4653921667944791, 6);
  sqcRZGate(q, -1.1514501680563187, 6);
  sqcRYGate(q, -0.13009387003091888, 7);
  sqcRZGate(q, 1.780493260530427, 7);
  sqcRYGate(q, 1.637923772159636, 8);
  sqcRZGate(q, 2.96295889720385, 8);
  sqcRYGate(q, 1.4797751618733348, 9);
  sqcRZGate(q, 0.14400777467631767, 9);
  sqcRYGate(q, -1.5271644097978792, 10);
  sqcRZGate(q, -1.657109207848956, 10);
  sqcRYGate(q, -0.018899993019199535, 11);
  sqcRZGate(q, -1.7868206519911247, 11);
  sqcRYGate(q, 0.04099315186254813, 12);
  sqcRZGate(q, 0.20445398541138005, 12);
  sqcRYGate(q, -3.134125094084938, 13);
  sqcRZGate(q, -1.2043368868380908, 13);
  sqcRYGate(q, -2.7119596174441085, 14);
  sqcRZGate(q, 2.7311393853879475, 14);
  sqcRYGate(q, -2.649106246387414, 15);
  sqcRZGate(q, 1.1620323182343617, 15);
  sqcRYGate(q, -2.0261372531148796, 16);
  sqcRZGate(q, -1.070318443586812, 16);
  sqcRYGate(q, 2.1153933313959654, 17);
  sqcRZGate(q, 3.0141736364451615, 17);
  sqcRYGate(q, 0.15064274683305978, 18);
  sqcRZGate(q, -1.9265188544228031, 18);
  sqcRYGate(q, -0.6405086698722532, 19);
  sqcRZGate(q, -1.5487317666166724, 19);
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
  sqcRYGate(q, -2.695969843882081, 0);
  sqcRZGate(q, 1.575574048008085, 0);
  sqcRYGate(q, 2.0462904931150914, 1);
  sqcRZGate(q, 1.378256323702277, 1);
  sqcRYGate(q, -0.5272032552431707, 2);
  sqcRZGate(q, 0.7727023459089432, 2);
  sqcRYGate(q, 1.606582971309316, 3);
  sqcRZGate(q, 2.729991652275775, 3);
  sqcRYGate(q, 3.1164282248784123, 4);
  sqcRZGate(q, -1.623365417900701, 4);
  sqcRYGate(q, -1.76079077909771, 5);
  sqcRZGate(q, 2.1066031635212026, 5);
  sqcRYGate(q, 1.4016902215264653, 6);
  sqcRZGate(q, 3.1364153583405248, 6);
  sqcRYGate(q, 1.4173656056805901, 7);
  sqcRZGate(q, -2.167862864302319, 7);
  sqcRYGate(q, -1.5648578341947108, 8);
  sqcRZGate(q, 1.4362173383873031, 8);
  sqcRYGate(q, 3.1391887808066916, 9);
  sqcRZGate(q, -1.3788893024724285, 9);
  sqcRYGate(q, -3.013732205759981, 10);
  sqcRZGate(q, -0.4936329390411687, 10);
  sqcRYGate(q, 2.5182955304879813, 11);
  sqcRZGate(q, -2.907411855562771, 11);
  sqcRYGate(q, 1.9535972265347494, 12);
  sqcRZGate(q, -2.0850577310860547, 12);
  sqcRYGate(q, 3.1004374394458916, 13);
  sqcRZGate(q, -0.26433940914959475, 13);
  sqcRYGate(q, 2.3330266389943146, 14);
  sqcRZGate(q, 2.0272566716247122, 14);
  sqcRYGate(q, 0.6324048694673543, 15);
  sqcRZGate(q, -1.240058473237792, 15);
  sqcRYGate(q, 1.5423309967064722, 16);
  sqcRZGate(q, 2.3248402592359896, 16);
  sqcRYGate(q, -0.6946258531781465, 17);
  sqcRZGate(q, -1.2792765714296248, 17);
  sqcRYGate(q, -2.0377317905968293, 18);
  sqcRZGate(q, -0.9038170922296108, 18);
  sqcRYGate(q, 1.419273733756335, 19);
  sqcRZGate(q, -1.1441777635287824, 19);
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
  sqcRYGate(q, 1.754796528865472, 0);
  sqcRZGate(q, 1.989035371954249, 0);
  sqcRYGate(q, -2.105109732907069, 1);
  sqcRZGate(q, 1.7530536762593725, 1);
  sqcRYGate(q, -2.985840658593208, 2);
  sqcRZGate(q, 2.902684223895279, 2);
  sqcRYGate(q, -0.9798134746854608, 3);
  sqcRZGate(q, 0.8888406744706555, 3);
  sqcRYGate(q, 0.31568500534802446, 4);
  sqcRZGate(q, 0.7359457280221154, 4);
  sqcRYGate(q, -1.7006891846929373, 5);
  sqcRZGate(q, 0.019363825253831464, 5);
  sqcRYGate(q, 0.011633331469045773, 6);
  sqcRZGate(q, 0.3574528192309227, 6);
  sqcRYGate(q, -1.5197060417143748, 7);
  sqcRZGate(q, -0.40564733462432395, 7);
  sqcRYGate(q, -1.5800567776913725, 8);
  sqcRZGate(q, -1.5726088221006547, 8);
  sqcRYGate(q, -2.042637886545534, 9);
  sqcRZGate(q, 1.7146986884695397, 9);
  sqcRYGate(q, -0.14855794393884025, 10);
  sqcRZGate(q, -2.4273158105748047, 10);
  sqcRYGate(q, -0.027429964499147638, 11);
  sqcRZGate(q, -0.2344004911909889, 11);
  sqcRYGate(q, 2.8895009647210106, 12);
  sqcRZGate(q, 0.34878316834010814, 12);
  sqcRYGate(q, -0.020136041433198137, 13);
  sqcRZGate(q, -2.668146006090774, 13);
  sqcRYGate(q, 0.46576473725947215, 14);
  sqcRZGate(q, 2.889845147031982, 14);
  sqcRYGate(q, 3.0371602184734074, 15);
  sqcRZGate(q, 1.9735386447029946, 15);
  sqcRYGate(q, -3.1137425277924016, 16);
  sqcRZGate(q, 2.521423805264549, 16);
  sqcRYGate(q, -1.2318827095132976, 17);
  sqcRZGate(q, -1.787970658867727, 17);
  sqcRYGate(q, -2.1218728095790436, 18);
  sqcRZGate(q, 1.5061817531349002, 18);
  sqcRYGate(q, -2.8113779718649874, 19);
  sqcRZGate(q, 2.0538060280049066, 19);
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
  sqcRYGate(q, 0.937910346067917, 0);
  sqcRZGate(q, -2.1615789789615674, 0);
  sqcRYGate(q, 2.362800985119963, 1);
  sqcRZGate(q, 3.0046973020904963, 1);
  sqcRYGate(q, -1.7798565606723011, 2);
  sqcRZGate(q, 1.4822202050992788, 2);
  sqcRYGate(q, 1.0500296282915818, 3);
  sqcRZGate(q, 2.3198339736162756, 3);
  sqcRYGate(q, -0.27158458315857686, 4);
  sqcRZGate(q, -2.4171110007081595, 4);
  sqcRYGate(q, -0.4379191482414702, 5);
  sqcRZGate(q, -0.13148505064076269, 5);
  sqcRYGate(q, -0.0010909845126365687, 6);
  sqcRZGate(q, -2.471274673414896, 6);
  sqcRYGate(q, -0.16851128305209162, 7);
  sqcRZGate(q, -2.447336448448628, 7);
  sqcRYGate(q, -1.5259857022221235, 8);
  sqcRZGate(q, -0.062083383879056875, 8);
  sqcRYGate(q, -0.3036831967413931, 9);
  sqcRZGate(q, 3.047862072953878, 9);
  sqcRYGate(q, 2.9788456972903505, 10);
  sqcRZGate(q, 0.6288711967301328, 10);
  sqcRYGate(q, -2.493382040326239, 11);
  sqcRZGate(q, -3.1059134495372627, 11);
  sqcRYGate(q, 0.8650792718467262, 12);
  sqcRZGate(q, -2.563336005867305, 12);
  sqcRYGate(q, 1.7103375496556144, 13);
  sqcRZGate(q, -0.010707953812135074, 13);
  sqcRYGate(q, -0.888377077217829, 14);
  sqcRZGate(q, -2.428724539434128, 14);
  sqcRYGate(q, -0.9096828433686435, 15);
  sqcRZGate(q, 1.3234825559591479, 15);
  sqcRYGate(q, 1.5575154318250135, 16);
  sqcRZGate(q, 1.4081175375326693, 16);
  sqcRYGate(q, 0.37834325813666947, 17);
  sqcRZGate(q, 2.442305070390896, 17);
  sqcRYGate(q, 2.13616431725942, 18);
  sqcRZGate(q, 1.7487722195158748, 18);
  sqcRYGate(q, 1.7356568930566363, 19);
  sqcRZGate(q, -0.0415326422540021, 19);
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
  sqcRYGate(q, 0.252219700357859, 0);
  sqcRZGate(q, -0.561652406824309, 0);
  sqcRYGate(q, 1.5393707042311542, 1);
  sqcRZGate(q, 0.20867206585089182, 1);
  sqcRYGate(q, 0.43056291221532383, 2);
  sqcRZGate(q, 0.07253744362419656, 2);
  sqcRYGate(q, -0.36451452502987125, 3);
  sqcRZGate(q, -0.8232749102045965, 3);
  sqcRYGate(q, -3.049198578804201, 4);
  sqcRZGate(q, 2.45646773784318, 4);
  sqcRYGate(q, -1.067586845799682, 5);
  sqcRZGate(q, 2.9936438534755614, 5);
  sqcRYGate(q, -0.007119512838673181, 6);
  sqcRZGate(q, -2.9096115659711934, 6);
  sqcRYGate(q, 1.6564446316655133, 7);
  sqcRZGate(q, 1.2824820310036547, 7);
  sqcRYGate(q, 2.6360965750792973, 8);
  sqcRZGate(q, 3.0809709298078376, 8);
  sqcRYGate(q, -1.436613468661041, 9);
  sqcRZGate(q, 0.025054139010550525, 9);
  sqcRYGate(q, 0.465018157627787, 10);
  sqcRZGate(q, -2.0278275481682075, 10);
  sqcRYGate(q, 1.740881575627939, 11);
  sqcRZGate(q, 2.069123432345218, 11);
  sqcRYGate(q, 2.6270808431400665, 12);
  sqcRZGate(q, 0.7993058325712287, 12);
  sqcRYGate(q, 1.5404261826468075, 13);
  sqcRZGate(q, 1.8615519753563563, 13);
  sqcRYGate(q, 1.5601511555809444, 14);
  sqcRZGate(q, -1.5520937134339836, 14);
  sqcRYGate(q, -2.859211869754582, 15);
  sqcRZGate(q, 1.3406751742595477, 15);
  sqcRYGate(q, -3.0199493562451125, 16);
  sqcRZGate(q, 1.660567701998164, 16);
  sqcRYGate(q, -1.9809281214123937, 17);
  sqcRZGate(q, -1.219379445729036, 17);
  sqcRYGate(q, -1.3893812246357709, 18);
  sqcRZGate(q, 2.3832906847465005, 18);
  sqcRYGate(q, -1.2438724521933755, 19);
  sqcRZGate(q, -1.2985865090971316, 19);
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
  sqcRYGate(q, 2.0472193699670886, 0);
  sqcRZGate(q, 2.1670104994305874, 0);
  sqcRYGate(q, 1.602616074901702, 1);
  sqcRZGate(q, -0.7184203251421488, 1);
  sqcRYGate(q, 2.6053452244395836, 2);
  sqcRZGate(q, 0.8434491169509998, 2);
  sqcRYGate(q, 1.638356446062243, 3);
  sqcRZGate(q, -0.6830442094011205, 3);
  sqcRYGate(q, 0.19282969026593655, 4);
  sqcRZGate(q, -1.0229973062405735, 4);
  sqcRYGate(q, 2.2948097795951106, 5);
  sqcRZGate(q, -0.38043745016389185, 5);
  sqcRYGate(q, -1.5384506730574188, 6);
  sqcRZGate(q, 1.585587069254025, 6);
  sqcRYGate(q, -1.2694972103865116, 7);
  sqcRZGate(q, 2.3599394389489246, 7);
  sqcRYGate(q, 1.412127711451311, 8);
  sqcRZGate(q, -1.5808926818213456, 8);
  sqcRYGate(q, 0.29430464078998386, 9);
  sqcRZGate(q, -0.03813484239850151, 9);
  sqcRYGate(q, 0.14185213014673528, 10);
  sqcRZGate(q, -3.0923431307974893, 10);
  sqcRYGate(q, 0.0015549157203491573, 11);
  sqcRZGate(q, -2.0668729396362555, 11);
  sqcRYGate(q, -3.125169030256783, 12);
  sqcRZGate(q, -1.222500108249351, 12);
  sqcRYGate(q, -0.05493859181190906, 13);
  sqcRZGate(q, -1.8702914704463494, 13);
  sqcRYGate(q, 0.4232947114571908, 14);
  sqcRZGate(q, -0.006790560802949357, 14);
  sqcRYGate(q, 1.582756857843553, 15);
  sqcRZGate(q, 3.1369819742599847, 15);
  sqcRYGate(q, -2.337797696715326, 16);
  sqcRZGate(q, -0.34245106408707837, 16);
  sqcRYGate(q, 2.825254326374624, 17);
  sqcRZGate(q, -2.073116120658551, 17);
  sqcRYGate(q, -2.1983646529959024, 18);
  sqcRZGate(q, -1.255716274527615, 18);
  sqcRYGate(q, -1.2600467757752476, 19);
  sqcRZGate(q, -1.5163285832793945, 19);
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
  sqcRYGate(q, 2.39728489777211, 0);
  sqcRZGate(q, 2.8666593613357296, 0);
  sqcRYGate(q, -1.914989308533551, 1);
  sqcRZGate(q, 0.9892804032681272, 1);
  sqcRYGate(q, 0.42780337903844234, 2);
  sqcRZGate(q, -0.6151145030686366, 2);
  sqcRYGate(q, 2.9748770494677914, 3);
  sqcRZGate(q, -3.0979787431508505, 3);
  sqcRYGate(q, 0.23060992705415903, 4);
  sqcRZGate(q, 1.3218194986470861, 4);
  sqcRYGate(q, 1.5582391245333416, 5);
  sqcRZGate(q, 3.133547155429418, 5);
  sqcRYGate(q, 3.0286168235138002, 6);
  sqcRZGate(q, -1.5357146753310733, 6);
  sqcRYGate(q, 0.021592638301386028, 7);
  sqcRZGate(q, -2.3239062227583513, 7);
  sqcRYGate(q, 1.6076237744701545, 8);
  sqcRZGate(q, 0.014721678012653549, 8);
  sqcRYGate(q, -1.654963978934478, 9);
  sqcRZGate(q, 1.5446460231303991, 9);
  sqcRYGate(q, 2.6941282171718015, 10);
  sqcRZGate(q, -0.07093847283130827, 10);
  sqcRYGate(q, 1.6759402995853527, 11);
  sqcRZGate(q, 2.7972635301349422, 11);
  sqcRYGate(q, 1.2700036534310564, 12);
  sqcRZGate(q, 1.1706797018578554, 12);
  sqcRYGate(q, -1.599286311642687, 13);
  sqcRZGate(q, -3.118741214955649, 13);
  sqcRYGate(q, 1.5844734419567723, 14);
  sqcRZGate(q, -2.1719298685561106, 14);
  sqcRYGate(q, 3.0275896802661597, 15);
  sqcRZGate(q, 1.4695247860451728, 15);
  sqcRYGate(q, -1.5732356695628729, 16);
  sqcRZGate(q, -0.2397863606013157, 16);
  sqcRYGate(q, -1.798394988554644, 17);
  sqcRZGate(q, 0.9336740831474559, 17);
  sqcRYGate(q, -0.6168497163012923, 18);
  sqcRZGate(q, 2.4414115205597855, 18);
  sqcRYGate(q, 1.9036698915422565, 19);
  sqcRZGate(q, 1.3242903652071059, 19);
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
  sqcRYGate(q, 0.9884826801830242, 0);
  sqcRZGate(q, -1.7784441013950107, 0);
  sqcRYGate(q, 1.8397996125012135, 1);
  sqcRZGate(q, 1.524744678416294, 1);
  sqcRYGate(q, -0.5994156143916145, 2);
  sqcRZGate(q, -1.4584221770033081, 2);
  sqcRYGate(q, 2.5895624898699703, 3);
  sqcRZGate(q, -1.2560861755014017, 3);
  sqcRYGate(q, -1.550997042394071, 4);
  sqcRZGate(q, 2.7356980431902738, 4);
  sqcRYGate(q, 2.6201292984171674, 5);
  sqcRZGate(q, 0.011340818241588835, 5);
  sqcRYGate(q, 0.4570756092706665, 6);
  sqcRZGate(q, 3.0921804911464816, 6);
  sqcRYGate(q, 1.5612869738471138, 7);
  sqcRZGate(q, 1.591158753662187, 7);
  sqcRYGate(q, 1.5560077603095788, 8);
  sqcRZGate(q, -0.043441830198236, 8);
  sqcRYGate(q, -3.1146808622273223, 9);
  sqcRZGate(q, 0.7104477971241792, 9);
  sqcRYGate(q, 1.5758170164339598, 10);
  sqcRZGate(q, 0.04444030200979789, 10);
  sqcRYGate(q, -3.1346507797253995, 11);
  sqcRZGate(q, 1.264704360837558, 11);
  sqcRYGate(q, 2.098858311593225, 12);
  sqcRZGate(q, -0.01958804673756236, 12);
  sqcRYGate(q, -3.063333329549576, 13);
  sqcRZGate(q, -3.126906903692891, 13);
  sqcRYGate(q, 1.5669047135621863, 14);
  sqcRZGate(q, -1.554034185149029, 14);
  sqcRYGate(q, 0.02383754118980086, 15);
  sqcRZGate(q, -2.981150859115492, 15);
  sqcRYGate(q, -0.08738652007797422, 16);
  sqcRZGate(q, 1.8226716610682252, 16);
  sqcRYGate(q, -1.5800245661250312, 17);
  sqcRZGate(q, 1.5707454636947649, 17);
  sqcRYGate(q, 1.4876622318104182, 18);
  sqcRZGate(q, -2.2043601899853367, 18);
  sqcRYGate(q, 1.9708081382026275, 19);
  sqcRZGate(q, -1.5446443510330825, 19);
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
  sqcRYGate(q, 2.800092148217095, 0);
  sqcRZGate(q, 1.9054339956055504, 0);
  sqcRYGate(q, -2.234211008758911, 1);
  sqcRZGate(q, 1.5555282697311759, 1);
  sqcRYGate(q, -2.8036039359298104, 2);
  sqcRZGate(q, 1.3156468960692096, 2);
  sqcRYGate(q, 1.5734506098630048, 3);
  sqcRZGate(q, 3.1170637984558045, 3);
  sqcRYGate(q, -3.1290590995311507, 4);
  sqcRZGate(q, 2.650567605016262, 4);
  sqcRYGate(q, -2.8547408838665214, 5);
  sqcRZGate(q, -3.125670576070058, 5);
  sqcRYGate(q, -0.6971373039298362, 6);
  sqcRZGate(q, -0.003009909623671093, 6);
  sqcRYGate(q, 0.18158045345756102, 7);
  sqcRZGate(q, -0.05302479509071034, 7);
  sqcRYGate(q, -1.8355195738928858, 8);
  sqcRZGate(q, 1.5335474757819956, 8);
  sqcRYGate(q, -0.009201526616435807, 9);
  sqcRZGate(q, 0.955112869857126, 9);
  sqcRYGate(q, -1.2141628581500383, 10);
  sqcRZGate(q, 1.5716629304658534, 10);
  sqcRYGate(q, -2.838620967131627, 11);
  sqcRZGate(q, -0.0036586693528841436, 11);
  sqcRYGate(q, -2.5354896323241722, 12);
  sqcRZGate(q, -3.1202168375190706, 12);
  sqcRYGate(q, 2.8604113313221653, 13);
  sqcRZGate(q, -3.0222319752696123, 13);
  sqcRYGate(q, -1.7799772030791785, 14);
  sqcRZGate(q, -0.06785560583835082, 14);
  sqcRYGate(q, 0.03453078577605684, 15);
  sqcRZGate(q, 1.354438293206349, 15);
  sqcRYGate(q, -1.572020196988639, 16);
  sqcRZGate(q, 0.44818470664910043, 16);
  sqcRYGate(q, -1.5714688468970062, 17);
  sqcRZGate(q, -1.033020658757229, 17);
  sqcRYGate(q, 1.5821090579932768, 18);
  sqcRZGate(q, -3.1308205226265544, 18);
  sqcRYGate(q, -2.363648712189133, 19);
  sqcRZGate(q, -1.8643943326140162, 19);
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
  sqcRYGate(q, 2.2905681758299377, 0);
  sqcRZGate(q, -2.9740485462904016, 0);
  sqcRYGate(q, -2.178571085748981, 1);
  sqcRZGate(q, 2.253635977867253, 1);
  sqcRYGate(q, -1.571618870567953, 2);
  sqcRZGate(q, -2.6221078287495807, 2);
  sqcRYGate(q, 1.751115598955054, 3);
  sqcRZGate(q, 1.8917366473811865, 3);
  sqcRYGate(q, 0.968616284038586, 4);
  sqcRZGate(q, -3.104431675021693, 4);
  sqcRYGate(q, 0.32475236481232894, 5);
  sqcRZGate(q, -3.1229020458543855, 5);
  sqcRYGate(q, 2.455255373379905, 6);
  sqcRZGate(q, -0.013429963457366485, 6);
  sqcRYGate(q, 2.709037711562224, 7);
  sqcRZGate(q, 3.1235007099209415, 7);
  sqcRYGate(q, -2.522579674655956, 8);
  sqcRZGate(q, -0.014767803399164059, 8);
  sqcRYGate(q, 1.5927973507573236, 9);
  sqcRZGate(q, 1.604702821658193, 9);
  sqcRYGate(q, 0.8473205280338125, 10);
  sqcRZGate(q, 3.123404389236967, 10);
  sqcRYGate(q, 2.0174832617002276, 11);
  sqcRZGate(q, 3.1108353072539394, 11);
  sqcRYGate(q, -0.6104545240428356, 12);
  sqcRZGate(q, -3.0325688168346705, 12);
  sqcRYGate(q, -0.723097786552826, 13);
  sqcRZGate(q, 2.9684470480051512, 13);
  sqcRYGate(q, 1.2209185903996318, 14);
  sqcRZGate(q, 0.4934768212270041, 14);
  sqcRYGate(q, -3.102268543420422, 15);
  sqcRZGate(q, 1.3562369014350857, 15);
  sqcRYGate(q, 0.9146541059564983, 16);
  sqcRZGate(q, 3.032541578224597, 16);
  sqcRYGate(q, 0.28248930845651327, 17);
  sqcRZGate(q, -0.45623069851580234, 17);
  sqcRYGate(q, 1.5751178784734519, 18);
  sqcRZGate(q, -2.050310277244921, 18);
  sqcRYGate(q, -1.574382990259128, 19);
  sqcRZGate(q, -1.576725281615408, 19);
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
  sqcRYGate(q, 2.8031651525860326, 0);
  sqcRZGate(q, 0.5277488976802419, 0);
  sqcRYGate(q, -1.56861435358213, 1);
  sqcRZGate(q, -0.31789165603704983, 1);
  sqcRYGate(q, 3.133658354514624, 2);
  sqcRZGate(q, 1.3339914455041768, 2);
  sqcRYGate(q, -0.0005819342817532901, 3);
  sqcRZGate(q, 3.0845767377521454, 3);
  sqcRYGate(q, -3.0586874223019374, 4);
  sqcRZGate(q, -2.7304513335889147, 4);
  sqcRYGate(q, -0.04926989486069366, 5);
  sqcRZGate(q, 2.783317463043454, 5);
  sqcRYGate(q, 2.365870390181787, 6);
  sqcRZGate(q, 0.30779428007349097, 6);
  sqcRYGate(q, 0.19916719318947962, 7);
  sqcRZGate(q, 2.626407007068622, 7);
  sqcRYGate(q, -0.255274105648171, 8);
  sqcRZGate(q, 2.4997801219790072, 8);
  sqcRYGate(q, -2.8862581075100606, 9);
  sqcRZGate(q, -0.434633430856048, 9);
  sqcRYGate(q, 2.8239096822661294, 10);
  sqcRZGate(q, -2.8573234883195116, 10);
  sqcRYGate(q, -2.8293040853559623, 11);
  sqcRZGate(q, -2.8161335215816967, 11);
  sqcRYGate(q, -0.09189727771340017, 12);
  sqcRZGate(q, 0.2976411521877244, 12);
  sqcRYGate(q, 3.100928909766054, 13);
  sqcRZGate(q, 0.23825012057499514, 13);
  sqcRYGate(q, 3.1202013736099365, 14);
  sqcRZGate(q, 0.08411594756088042, 14);
  sqcRYGate(q, -3.0713274661171033, 15);
  sqcRZGate(q, 0.5719382108993835, 15);
  sqcRYGate(q, -1.5644015270135485, 16);
  sqcRZGate(q, 2.7103839211757235, 16);
  sqcRYGate(q, 2.4699628855688305, 17);
  sqcRZGate(q, -1.0815850966761906, 17);
  sqcRYGate(q, -1.9948157801042208, 18);
  sqcRZGate(q, 1.9697182549405978, 18);
  sqcRYGate(q, 0.2901130052115692, 19);
  sqcRZGate(q, -1.1460154443239838, 19);
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
  sqcRYGate(q, -1.8662894378049857, 0);
  sqcRZGate(q, 0.3201999653642362, 0);
  sqcRYGate(q, 1.7095401628948617, 1);
  sqcRZGate(q, 1.8350738183823534, 1);
  sqcRYGate(q, 2.7367470316777633, 2);
  sqcRZGate(q, -0.4795760746701525, 2);
  sqcRYGate(q, -0.35041297067672217, 3);
  sqcRZGate(q, 0.026645452357622723, 3);
  sqcRYGate(q, -2.5558929928400196, 4);
  sqcRZGate(q, 2.2102183714664347, 4);
  sqcRYGate(q, -1.1473912961386028, 5);
  sqcRZGate(q, -1.120480230769089, 5);
  sqcRYGate(q, -2.0222869679635576, 6);
  sqcRZGate(q, 2.016518622775182, 6);
  sqcRYGate(q, 0.7587301580593229, 7);
  sqcRZGate(q, 2.3213775236978234, 7);
  sqcRYGate(q, 0.4829572404664715, 8);
  sqcRZGate(q, 2.4569752593139977, 8);
  sqcRYGate(q, 2.337570460732145, 9);
  sqcRZGate(q, 1.5426493835432549, 9);
  sqcRYGate(q, -1.3296035200285412, 10);
  sqcRZGate(q, 1.8346741763535581, 10);
  sqcRYGate(q, -2.1683497199747888, 11);
  sqcRZGate(q, 2.042736765902395, 11);
  sqcRYGate(q, 0.7145639225759625, 12);
  sqcRZGate(q, -1.5358624030516443, 12);
  sqcRYGate(q, -1.5682829994915721, 13);
  sqcRZGate(q, 1.7846175137000162, 13);
  sqcRYGate(q, -0.8984095072986292, 14);
  sqcRZGate(q, -1.033868313483255, 14);
  sqcRYGate(q, -0.5350847678286274, 15);
  sqcRZGate(q, 1.3184238050082397, 15);
  sqcRYGate(q, 2.327916347197572, 16);
  sqcRZGate(q, 1.5815292927886266, 16);
  sqcRYGate(q, 1.2727015451184645, 17);
  sqcRZGate(q, 0.31727628956347514, 17);
  sqcRYGate(q, 1.8797850747886073, 18);
  sqcRZGate(q, -2.829169318150427, 18);
  sqcRYGate(q, 2.8159576604619416, 19);
  sqcRZGate(q, 0.7604401298115553, 19);

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
