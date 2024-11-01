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

  sqcRYGate(q, -1.5754600956086453, 0);
  sqcRZGate(q, -0.33980667477121257, 0);
  sqcRYGate(q, -2.483932137636336, 1);
  sqcRZGate(q, -2.690302985145213, 1);
  sqcRYGate(q, -1.2714385795152947, 2);
  sqcRZGate(q, 1.0137451824095907, 2);
  sqcRYGate(q, 0.9945138179702845, 3);
  sqcRZGate(q, -2.789122181570668, 3);
  sqcRYGate(q, 2.9619997977683097, 4);
  sqcRZGate(q, -2.7432695098904927, 4);
  sqcRYGate(q, 1.6350991762304377, 5);
  sqcRZGate(q, 0.004197315331080809, 5);
  sqcRYGate(q, -0.0005372305603757038, 6);
  sqcRZGate(q, -2.667095363313173, 6);
  sqcRYGate(q, -2.3059453428447885, 7);
  sqcRZGate(q, -2.7967682311549877, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4554870473110797, 0);
  sqcRZGate(q, 0.11300395212341667, 0);
  sqcRYGate(q, -2.413094290193938, 1);
  sqcRZGate(q, 2.7663569633706695, 1);
  sqcRYGate(q, -9.005976239874507e-05, 2);
  sqcRZGate(q, -2.970824157234888, 2);
  sqcRYGate(q, 0.00025740410711166885, 3);
  sqcRZGate(q, -0.5772694960919172, 3);
  sqcRYGate(q, -0.441213241807399, 4);
  sqcRZGate(q, -1.0665215592698258, 4);
  sqcRYGate(q, 1.6469886867587276, 5);
  sqcRZGate(q, -1.30542028523689, 5);
  sqcRYGate(q, -0.007354411608138144, 6);
  sqcRZGate(q, 2.691189375512443, 6);
  sqcRYGate(q, -3.003757013607161, 7);
  sqcRZGate(q, -2.174495881398676, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.4968823857566084, 0);
  sqcRZGate(q, -0.38361103853729295, 0);
  sqcRYGate(q, 1.3754563374149957, 1);
  sqcRZGate(q, -2.4760654916227263, 1);
  sqcRYGate(q, -2.7421394325374746, 2);
  sqcRZGate(q, 3.1183879408949995, 2);
  sqcRYGate(q, -2.1210242344981456, 3);
  sqcRZGate(q, 1.8114988727596715, 3);
  sqcRYGate(q, -1.92434473629468, 4);
  sqcRZGate(q, -1.448005807145234, 4);
  sqcRYGate(q, 1.784995863930453, 5);
  sqcRZGate(q, -0.6104797776285723, 5);
  sqcRYGate(q, -3.0827117418961114, 6);
  sqcRZGate(q, -2.5043753962814206, 6);
  sqcRYGate(q, 2.304255661060418, 7);
  sqcRZGate(q, -1.165235693923325, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.9042752034546098, 0);
  sqcRZGate(q, -0.9943514807456157, 0);
  sqcRYGate(q, -1.289413276721108, 1);
  sqcRZGate(q, 2.6761441748465, 1);
  sqcRYGate(q, 0.008470403646606783, 2);
  sqcRZGate(q, 1.9679525196212815, 2);
  sqcRYGate(q, 1.1159586507553356, 3);
  sqcRZGate(q, -0.527928374831959, 3);
  sqcRYGate(q, -1.2954984258505657, 4);
  sqcRZGate(q, -3.12136151439053, 4);
  sqcRYGate(q, -0.5997735104959859, 5);
  sqcRZGate(q, 0.24707611014832945, 5);
  sqcRYGate(q, -1.608276146190336, 6);
  sqcRZGate(q, -2.3127188731218977, 6);
  sqcRYGate(q, -0.4928196844514199, 7);
  sqcRZGate(q, -0.5114648424617904, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.29048918830583, 0);
  sqcRZGate(q, -1.1260535867778245, 0);
  sqcRYGate(q, 2.883396642573888, 1);
  sqcRZGate(q, -0.14216125508923136, 1);
  sqcRYGate(q, 3.132030146364197, 2);
  sqcRZGate(q, 2.195376668301453, 2);
  sqcRYGate(q, -0.6555893262799495, 3);
  sqcRZGate(q, 2.9823442935336577, 3);
  sqcRYGate(q, 0.0017821306801355519, 4);
  sqcRZGate(q, 2.4131997204489046, 4);
  sqcRYGate(q, -0.06674394511965076, 5);
  sqcRZGate(q, 1.4670081752773019, 5);
  sqcRYGate(q, 1.8926364489600713, 6);
  sqcRZGate(q, -0.3881625480490866, 6);
  sqcRYGate(q, -1.579248881928554, 7);
  sqcRZGate(q, 1.4357528130762667, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8053667371218254, 0);
  sqcRZGate(q, -2.8932472058198013, 0);
  sqcRYGate(q, 1.3225801033683826, 1);
  sqcRZGate(q, -1.6220544725078927, 1);
  sqcRYGate(q, 3.1410319638028104, 2);
  sqcRZGate(q, -2.984271775127817, 2);
  sqcRYGate(q, 0.7395929704964156, 3);
  sqcRZGate(q, -3.0713435658926596, 3);
  sqcRYGate(q, -0.00036254562732061167, 4);
  sqcRZGate(q, 0.7736909784043389, 4);
  sqcRYGate(q, -2.2330298460580575, 5);
  sqcRZGate(q, 0.001007710899860445, 5);
  sqcRYGate(q, 0.12664306312998885, 6);
  sqcRZGate(q, 1.77015597234809, 6);
  sqcRYGate(q, -0.1907349838746632, 7);
  sqcRZGate(q, -1.5267203575818469, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.5430497821864311, 0);
  sqcRZGate(q, 0.01936411043895478, 0);
  sqcRYGate(q, -1.4082624262770533, 1);
  sqcRZGate(q, 2.6384757388053584, 1);
  sqcRYGate(q, -1.9289101356672864, 2);
  sqcRZGate(q, -0.06812556982560383, 2);
  sqcRYGate(q, -0.6330065703737496, 3);
  sqcRZGate(q, -1.3489185572744304, 3);
  sqcRYGate(q, -1.2768920773922057, 4);
  sqcRZGate(q, 0.01777391503373549, 4);
  sqcRYGate(q, -1.622360328310008, 5);
  sqcRZGate(q, 1.4722235536432118, 5);
  sqcRYGate(q, -2.1219836295830277, 6);
  sqcRZGate(q, 3.078867701875784, 6);
  sqcRYGate(q, -1.1223287075021027, 7);
  sqcRZGate(q, 2.771445579972799, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.3370015615811735, 0);
  sqcRZGate(q, 1.7667580429032481, 0);
  sqcRYGate(q, 0.6620030069659331, 1);
  sqcRZGate(q, -1.4002625885970765, 1);
  sqcRYGate(q, 3.1408058582401437, 2);
  sqcRZGate(q, 1.9350424889028812, 2);
  sqcRYGate(q, 3.065798396987312, 3);
  sqcRZGate(q, 2.0337596869009644, 3);
  sqcRYGate(q, -1.8265859686917478, 4);
  sqcRZGate(q, -2.722450979790877, 4);
  sqcRYGate(q, -3.1260991996721694, 5);
  sqcRZGate(q, -1.7122107327181677, 5);
  sqcRYGate(q, 0.9463641657752164, 6);
  sqcRZGate(q, 0.052279830527744764, 6);
  sqcRYGate(q, 2.9129370572666446, 7);
  sqcRZGate(q, -2.115711441521153, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.771213330511745, 0);
  sqcRZGate(q, 1.797466205956403, 0);
  sqcRYGate(q, -1.1940678587885012, 1);
  sqcRZGate(q, 2.9898653053408695, 1);
  sqcRYGate(q, 3.140627397457846, 2);
  sqcRZGate(q, -3.138080802899712, 2);
  sqcRYGate(q, 3.113941043847754, 3);
  sqcRZGate(q, 0.32451694825788924, 3);
  sqcRYGate(q, -1.604406418112431, 4);
  sqcRZGate(q, 1.7332645726361902, 4);
  sqcRYGate(q, -2.98109897351665, 5);
  sqcRZGate(q, -0.7058626503770182, 5);
  sqcRYGate(q, -0.1635828187897328, 6);
  sqcRZGate(q, 1.9136927801702113, 6);
  sqcRYGate(q, 1.3885519432006095, 7);
  sqcRZGate(q, -1.94713111347318, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.0269207674431797, 0);
  sqcRZGate(q, -2.074067989411047, 0);
  sqcRYGate(q, -2.1308527716091925, 1);
  sqcRZGate(q, 2.3063341513928175, 1);
  sqcRYGate(q, -2.9615685866127035, 2);
  sqcRZGate(q, -1.8700659471201477, 2);
  sqcRYGate(q, -2.9427327859990378, 3);
  sqcRZGate(q, -2.52731826222461, 3);
  sqcRYGate(q, -1.9966929715487725, 4);
  sqcRZGate(q, 2.7921212507038553, 4);
  sqcRYGate(q, 0.6498188645433762, 5);
  sqcRZGate(q, -0.7609468048825008, 5);
  sqcRYGate(q, -3.1042543849499644, 6);
  sqcRZGate(q, 1.9350779796792967, 6);
  sqcRYGate(q, 1.181471758010038, 7);
  sqcRZGate(q, -0.08608479338380225, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.475311233932663, 0);
  sqcRZGate(q, 0.09253693668215936, 0);
  sqcRYGate(q, -0.22983329889676904, 1);
  sqcRZGate(q, -2.338227141266727, 1);
  sqcRYGate(q, 3.139801236411607, 2);
  sqcRZGate(q, 2.1821236655966096, 2);
  sqcRYGate(q, 0.8398581480194816, 3);
  sqcRZGate(q, 0.41028393468588376, 3);
  sqcRYGate(q, 2.2687494383418523, 4);
  sqcRZGate(q, 0.6212149500568601, 4);
  sqcRYGate(q, -3.12386013000297, 5);
  sqcRZGate(q, -0.1052319310700226, 5);
  sqcRYGate(q, -2.6820698882019722, 6);
  sqcRZGate(q, -1.8654218548866126, 6);
  sqcRYGate(q, -0.354786208801631, 7);
  sqcRZGate(q, 0.34732406391601606, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.679483283815295, 0);
  sqcRZGate(q, 0.4416821769291255, 0);
  sqcRYGate(q, 1.2803315223558336, 1);
  sqcRZGate(q, -2.1326883294621464, 1);
  sqcRYGate(q, -0.009908599460000111, 2);
  sqcRZGate(q, 0.6155250528570555, 2);
  sqcRYGate(q, 3.072977980268032, 3);
  sqcRZGate(q, -2.6911547917961642, 3);
  sqcRYGate(q, -3.091023459172786, 4);
  sqcRZGate(q, 1.5405137283763528, 4);
  sqcRYGate(q, -0.0007244655223042074, 5);
  sqcRZGate(q, -1.8443627585819309, 5);
  sqcRYGate(q, -0.026355074134850897, 6);
  sqcRZGate(q, -2.542406788539151, 6);
  sqcRYGate(q, 0.8188290474722111, 7);
  sqcRZGate(q, -2.7041259463622627, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.6044859767071591, 0);
  sqcRZGate(q, -0.6952044264239974, 0);
  sqcRYGate(q, 0.12705120849741205, 1);
  sqcRZGate(q, 0.009239139024826044, 1);
  sqcRYGate(q, 0.001838701565965551, 2);
  sqcRZGate(q, 1.5749715464591407, 2);
  sqcRYGate(q, 2.2940689085805035, 3);
  sqcRZGate(q, -0.3538912854630753, 3);
  sqcRYGate(q, -0.9452738105754372, 4);
  sqcRZGate(q, -0.181959836767297, 4);
  sqcRYGate(q, -0.015533494516718703, 5);
  sqcRZGate(q, 0.027065587735055626, 5);
  sqcRYGate(q, 2.3251373755293137, 6);
  sqcRZGate(q, -1.909129578757879, 6);
  sqcRYGate(q, -0.11570108314893712, 7);
  sqcRZGate(q, -1.9386001461904814, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.41934884160039143, 0);
  sqcRZGate(q, -0.14560704123466706, 0);
  sqcRYGate(q, -1.8285380303859806, 1);
  sqcRZGate(q, -0.2842346942250691, 1);
  sqcRYGate(q, 0.6299744696279106, 2);
  sqcRZGate(q, 1.807651860449428, 2);
  sqcRYGate(q, -0.16502929760487955, 3);
  sqcRZGate(q, -1.2540195202507296, 3);
  sqcRYGate(q, 1.1871410056404041, 4);
  sqcRZGate(q, 0.7739883841230814, 4);
  sqcRYGate(q, -3.139787608096517, 5);
  sqcRZGate(q, 0.767518037113912, 5);
  sqcRYGate(q, -3.104276618649464, 6);
  sqcRZGate(q, -1.856239518972686, 6);
  sqcRYGate(q, 3.114414365942769, 7);
  sqcRZGate(q, 1.5575038320117554, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9313094147919729, 0);
  sqcRZGate(q, -1.4653094694097355, 0);
  sqcRYGate(q, 3.1135845095291326, 1);
  sqcRZGate(q, -1.6500497390057403, 1);
  sqcRYGate(q, 3.140178561155852, 2);
  sqcRZGate(q, -0.11322825663150038, 2);
  sqcRYGate(q, 0.026586832426693796, 3);
  sqcRZGate(q, 2.9417717111349617, 3);
  sqcRYGate(q, 1.0722712571518047, 4);
  sqcRZGate(q, 0.19838333294346988, 4);
  sqcRYGate(q, 1.7630169475648516, 5);
  sqcRZGate(q, -0.1932670181495277, 5);
  sqcRYGate(q, -0.6103531566681168, 6);
  sqcRZGate(q, -2.6023240059804604, 6);
  sqcRYGate(q, -2.6561975370180044, 7);
  sqcRZGate(q, 0.13178375093877204, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5530440750063037, 0);
  sqcRZGate(q, -1.4352472022010765, 0);
  sqcRYGate(q, -1.6877549386920163, 1);
  sqcRZGate(q, 0.2183645280110296, 1);
  sqcRYGate(q, -0.7990747506063266, 2);
  sqcRZGate(q, -2.06426357467346, 2);
  sqcRYGate(q, 2.4746402713999136, 3);
  sqcRZGate(q, 1.546849514553541, 3);
  sqcRYGate(q, -0.026799242666293587, 4);
  sqcRZGate(q, -1.677624658859011, 4);
  sqcRYGate(q, 2.846535439539725, 5);
  sqcRZGate(q, 3.011732372795829, 5);
  sqcRYGate(q, -0.01614423788229402, 6);
  sqcRZGate(q, 2.6715083746261494, 6);
  sqcRYGate(q, -2.7790874457085746, 7);
  sqcRZGate(q, -1.0949502280626335, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9664299460790007, 0);
  sqcRZGate(q, 0.5510908548534604, 0);
  sqcRYGate(q, -0.0964314973771345, 1);
  sqcRZGate(q, -2.174130535706575, 1);
  sqcRYGate(q, 3.133422802851381, 2);
  sqcRZGate(q, 2.2820280962692783, 2);
  sqcRYGate(q, -3.1379658988723063, 3);
  sqcRZGate(q, 0.3989208069030165, 3);
  sqcRYGate(q, 3.89927744786774e-06, 4);
  sqcRZGate(q, 2.278619175580274, 4);
  sqcRYGate(q, 1.803973901337237, 5);
  sqcRZGate(q, -1.7750333397142652, 5);
  sqcRYGate(q, 1.8685325867875928, 6);
  sqcRZGate(q, -1.6825544333378117, 6);
  sqcRYGate(q, 0.0013445407650513276, 7);
  sqcRZGate(q, -3.0909504969275896, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.39466322451494, 0);
  sqcRZGate(q, 2.175618257761074, 0);
  sqcRYGate(q, 0.5251971700355389, 1);
  sqcRZGate(q, 0.5438566304715883, 1);
  sqcRYGate(q, -0.003125697883365067, 2);
  sqcRZGate(q, -1.6840189893675364, 2);
  sqcRYGate(q, 1.788051774372633, 3);
  sqcRZGate(q, 0.7560975115189095, 3);
  sqcRYGate(q, 3.0504999238939456, 4);
  sqcRZGate(q, 1.3476363611015472, 4);
  sqcRYGate(q, -2.8920601351827844, 5);
  sqcRZGate(q, -0.9194209131029156, 5);
  sqcRYGate(q, 1.1119498853191727, 6);
  sqcRZGate(q, 2.4024910941744255, 6);
  sqcRYGate(q, -0.7239706141320708, 7);
  sqcRZGate(q, 2.0235609810061153, 7);

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
