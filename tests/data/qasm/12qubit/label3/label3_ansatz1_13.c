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

  sqcRYGate(q, 1.6635494547223852, 0);
  sqcRZGate(q, -3.074707062901504, 0);
  sqcRYGate(q, 1.284856005741422, 1);
  sqcRZGate(q, -0.05574484292164136, 1);
  sqcRYGate(q, -2.6615868597977794, 2);
  sqcRZGate(q, 0.0025368262021920884, 2);
  sqcRYGate(q, -1.5700161828368895, 3);
  sqcRZGate(q, -1.844945635128326, 3);
  sqcRYGate(q, -1.570925494928022, 4);
  sqcRZGate(q, -0.03941923576401862, 4);
  sqcRYGate(q, 0.04129022724448063, 5);
  sqcRZGate(q, 0.023093800596656774, 5);
  sqcRYGate(q, 3.1381315553242763, 6);
  sqcRZGate(q, -1.5455615621666732, 6);
  sqcRYGate(q, 0.6570437361738675, 7);
  sqcRZGate(q, 0.9768141358381959, 7);
  sqcRYGate(q, 0.8102511173202522, 8);
  sqcRZGate(q, 1.9041166474913864, 8);
  sqcRYGate(q, 2.969327481159612, 9);
  sqcRZGate(q, -1.56699806707185, 9);
  sqcRYGate(q, -3.0347002324873062, 10);
  sqcRZGate(q, 2.7485049487854467, 10);
  sqcRYGate(q, -0.1262111814342273, 11);
  sqcRZGate(q, 2.7764236383497383, 11);
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
  sqcRYGate(q, -0.22602096089173163, 0);
  sqcRZGate(q, 0.38065297991603586, 0);
  sqcRYGate(q, 1.0785397194465356, 1);
  sqcRZGate(q, 1.4280441249238605, 1);
  sqcRYGate(q, -1.5712416462476266, 2);
  sqcRZGate(q, -1.7934434912985182, 2);
  sqcRYGate(q, 2.7996633951481646, 3);
  sqcRZGate(q, -0.03796112653916416, 3);
  sqcRYGate(q, 2.5216784891294375, 4);
  sqcRZGate(q, -2.0333419817296767, 4);
  sqcRYGate(q, -1.570831989225944, 5);
  sqcRZGate(q, -0.6306126825045363, 5);
  sqcRYGate(q, -0.0003810238246355624, 6);
  sqcRZGate(q, -0.5681982999357045, 6);
  sqcRYGate(q, -0.5290617006417611, 7);
  sqcRZGate(q, 0.009413997718792366, 7);
  sqcRYGate(q, -0.7387196067797747, 8);
  sqcRZGate(q, 0.07417646945164158, 8);
  sqcRYGate(q, 2.63601204763425, 9);
  sqcRZGate(q, -2.16271191479084, 9);
  sqcRYGate(q, 0.46330664751620887, 10);
  sqcRZGate(q, 1.300338890439285, 10);
  sqcRYGate(q, -1.7139928769010437, 11);
  sqcRZGate(q, -2.056690960214655, 11);
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
  sqcRYGate(q, -0.024192166270676607, 0);
  sqcRZGate(q, -0.42277102681294404, 0);
  sqcRYGate(q, 1.5329667398829874, 1);
  sqcRZGate(q, 1.5562643980574569, 1);
  sqcRYGate(q, 3.0348117334033833, 2);
  sqcRZGate(q, 0.8497712225933519, 2);
  sqcRYGate(q, -0.018174890908901113, 3);
  sqcRZGate(q, -1.721659466430724, 3);
  sqcRYGate(q, 0.23583021229551807, 4);
  sqcRZGate(q, -1.9085648425751298, 4);
  sqcRYGate(q, -1.3404266212434195, 5);
  sqcRZGate(q, 0.8579721397000154, 5);
  sqcRYGate(q, 1.5693073063475655, 6);
  sqcRZGate(q, -1.5687644386669144, 6);
  sqcRYGate(q, -2.229722420484685, 7);
  sqcRZGate(q, 0.674228159154347, 7);
  sqcRYGate(q, -2.021461256987755, 8);
  sqcRZGate(q, 0.21390941865462448, 8);
  sqcRYGate(q, 1.9707828799559233, 9);
  sqcRZGate(q, -1.4988895832479379, 9);
  sqcRYGate(q, 0.3322602465254425, 10);
  sqcRZGate(q, 1.9358417619957837, 10);
  sqcRYGate(q, 0.612085952593632, 11);
  sqcRZGate(q, -2.718307434185104, 11);
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
  sqcRYGate(q, 2.768051954556084, 0);
  sqcRZGate(q, -3.10770863529896, 0);
  sqcRYGate(q, 1.9502475971189617, 1);
  sqcRZGate(q, -0.03935131766289501, 1);
  sqcRYGate(q, 3.1359641473478077, 2);
  sqcRZGate(q, 0.6179220512846229, 2);
  sqcRYGate(q, -1.8188438823327322, 3);
  sqcRZGate(q, -2.072982028284707, 3);
  sqcRYGate(q, 1.9297369027448037, 4);
  sqcRZGate(q, 2.451869440316966, 4);
  sqcRYGate(q, 0.0004004398165715628, 5);
  sqcRZGate(q, 0.11212656335905447, 5);
  sqcRYGate(q, -1.5806497772672303, 6);
  sqcRZGate(q, -0.0002616394494016439, 6);
  sqcRYGate(q, -3.1406437292036795, 7);
  sqcRZGate(q, 1.985526365814769, 7);
  sqcRYGate(q, -1.4990400378460598, 8);
  sqcRZGate(q, -3.134992599250829, 8);
  sqcRYGate(q, -0.8560130606757712, 9);
  sqcRZGate(q, 1.4881226509784031, 9);
  sqcRYGate(q, 1.1407161396009844, 10);
  sqcRZGate(q, 2.330125764916008, 10);
  sqcRYGate(q, 0.40619289391365854, 11);
  sqcRZGate(q, -0.7966688142631336, 11);
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
  sqcRYGate(q, 2.566030469567726, 0);
  sqcRZGate(q, -3.132542911312355, 0);
  sqcRYGate(q, -1.421305502726774, 1);
  sqcRZGate(q, 0.718165725869058, 1);
  sqcRYGate(q, 2.744980709232054, 2);
  sqcRZGate(q, -1.5697590303695397, 2);
  sqcRYGate(q, -3.098547627518574, 3);
  sqcRZGate(q, 1.64198822590118, 3);
  sqcRYGate(q, -1.1671423023116898, 4);
  sqcRZGate(q, 1.7858760723637082, 4);
  sqcRYGate(q, -1.5751949171506698, 5);
  sqcRZGate(q, -1.6066927098276758, 5);
  sqcRYGate(q, 2.4532445150131665, 6);
  sqcRZGate(q, 0.02847263278088169, 6);
  sqcRYGate(q, -3.141419390255065, 7);
  sqcRZGate(q, 2.0343769457620304, 7);
  sqcRYGate(q, 1.749147518370898, 8);
  sqcRZGate(q, 1.2634894454547487, 8);
  sqcRYGate(q, -0.4908283579641157, 9);
  sqcRZGate(q, -3.0818749167470183, 9);
  sqcRYGate(q, 0.3517424509228295, 10);
  sqcRZGate(q, 0.724994538491052, 10);
  sqcRYGate(q, 2.1841260449279405, 11);
  sqcRZGate(q, 2.3705813603344805, 11);
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
  sqcRYGate(q, 1.6239492652745506, 0);
  sqcRZGate(q, -3.087280927794639, 0);
  sqcRYGate(q, -2.3520375423950646, 1);
  sqcRZGate(q, -0.3632694571526161, 1);
  sqcRYGate(q, 1.8551741183630173, 2);
  sqcRZGate(q, 1.640612755862965, 2);
  sqcRYGate(q, -3.0480915052366777, 3);
  sqcRZGate(q, -2.1476552845568913, 3);
  sqcRYGate(q, 1.0050563439685465, 4);
  sqcRZGate(q, 1.6743790556885065, 4);
  sqcRYGate(q, -3.1415339118497867, 5);
  sqcRZGate(q, -2.3646254824237807, 5);
  sqcRYGate(q, 0.6993742438762762, 6);
  sqcRZGate(q, 1.5569362228141066, 6);
  sqcRYGate(q, -1.570159257012783, 7);
  sqcRZGate(q, -2.2931406208177147, 7);
  sqcRYGate(q, -2.231478837123308, 8);
  sqcRZGate(q, -0.9304521813257889, 8);
  sqcRYGate(q, 1.2305301526048025, 9);
  sqcRZGate(q, -2.9256053832656805, 9);
  sqcRYGate(q, 0.5891731928898833, 10);
  sqcRZGate(q, -2.548961393422635, 10);
  sqcRYGate(q, 2.0647948140365804, 11);
  sqcRZGate(q, 1.8793771740025016, 11);
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
  sqcRYGate(q, -1.0395203294010429, 0);
  sqcRZGate(q, -1.8960355012250139, 0);
  sqcRYGate(q, 1.700044610365031, 1);
  sqcRZGate(q, 0.6257758452201512, 1);
  sqcRYGate(q, 3.0518953105263327, 2);
  sqcRZGate(q, 0.6572356376070774, 2);
  sqcRYGate(q, 1.531168829750121, 3);
  sqcRZGate(q, -2.1482337403736427, 3);
  sqcRYGate(q, -1.7451366768401604, 4);
  sqcRZGate(q, 2.1578046839674734, 4);
  sqcRYGate(q, -1.7212462890286753, 5);
  sqcRZGate(q, 3.137771674172928, 5);
  sqcRYGate(q, 1.572825955968104, 6);
  sqcRZGate(q, -1.2355565166643645, 6);
  sqcRYGate(q, -3.1412870642241995, 7);
  sqcRZGate(q, 2.7227703292826178, 7);
  sqcRYGate(q, 3.141586860686133, 8);
  sqcRZGate(q, 0.6121289656001175, 8);
  sqcRYGate(q, 2.032096277020811, 9);
  sqcRZGate(q, -0.3132189573133237, 9);
  sqcRYGate(q, 2.3059893663146336, 10);
  sqcRZGate(q, 1.8312807610128337, 10);
  sqcRYGate(q, -1.388518780932542, 11);
  sqcRZGate(q, 0.08877328256155524, 11);
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
  sqcRYGate(q, 3.1401576128494044, 0);
  sqcRZGate(q, -2.850852020679726, 0);
  sqcRYGate(q, -0.6440009920998702, 1);
  sqcRZGate(q, 2.3215038748373065, 1);
  sqcRYGate(q, 2.838511109772221, 2);
  sqcRZGate(q, 0.03761188788050493, 2);
  sqcRYGate(q, -2.8776047668024347, 3);
  sqcRZGate(q, -0.53540293253164, 3);
  sqcRYGate(q, 0.1560239865914692, 4);
  sqcRZGate(q, -1.6505102816050161, 4);
  sqcRYGate(q, 1.5650607201571893, 5);
  sqcRZGate(q, 1.2366322133270913, 5);
  sqcRYGate(q, 3.1037284277462835, 6);
  sqcRZGate(q, -1.2398531380722098, 6);
  sqcRYGate(q, -3.1412268559578758, 7);
  sqcRZGate(q, -1.5199519225859495, 7);
  sqcRYGate(q, 1.7631526862234217, 8);
  sqcRZGate(q, -1.8183420240614696, 8);
  sqcRYGate(q, 0.8865935735572646, 9);
  sqcRZGate(q, -2.9814285844813235, 9);
  sqcRYGate(q, 1.747101268409612, 10);
  sqcRZGate(q, 2.033957447882633, 10);
  sqcRYGate(q, 0.37340415754914075, 11);
  sqcRZGate(q, 2.1940834509087273, 11);
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
  sqcRYGate(q, 2.8369409412805173, 0);
  sqcRZGate(q, -3.0141283698073926, 0);
  sqcRYGate(q, 1.7790040659174815, 1);
  sqcRZGate(q, -1.8720158136006209, 1);
  sqcRYGate(q, 0.2088891035931952, 2);
  sqcRZGate(q, -2.0580325586614974, 2);
  sqcRYGate(q, -1.5289954942530204, 3);
  sqcRZGate(q, -0.010370472479573678, 3);
  sqcRYGate(q, 1.4841249981045321, 4);
  sqcRZGate(q, -2.034474690074869, 4);
  sqcRYGate(q, -1.473726395953499, 5);
  sqcRZGate(q, 0.8669827958574343, 5);
  sqcRYGate(q, -1.5697313921205724, 6);
  sqcRZGate(q, -2.6718538522775352, 6);
  sqcRYGate(q, 3.1405446129291192, 7);
  sqcRZGate(q, -1.7632255052862194, 7);
  sqcRYGate(q, -1.571486089422659, 8);
  sqcRZGate(q, -0.000869540670202308, 8);
  sqcRYGate(q, -1.4432891175752454, 9);
  sqcRZGate(q, -2.6466715922799313, 9);
  sqcRYGate(q, 1.574577320313285, 10);
  sqcRZGate(q, -0.42356474382095316, 10);
  sqcRYGate(q, 2.7397153982709455, 11);
  sqcRZGate(q, -0.3426326406147371, 11);
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
  sqcRYGate(q, 3.138921957099822, 0);
  sqcRZGate(q, -2.5586562449878687, 0);
  sqcRYGate(q, 1.2477331742566662, 1);
  sqcRZGate(q, -0.0906959939146299, 1);
  sqcRYGate(q, 0.3112525188718136, 2);
  sqcRZGate(q, -1.3024929655751802, 2);
  sqcRYGate(q, 1.766816196418688, 3);
  sqcRZGate(q, 1.5595616378306236, 3);
  sqcRYGate(q, -0.016543831643452078, 4);
  sqcRZGate(q, -1.0410178139756041, 4);
  sqcRYGate(q, -2.8219740658815664, 5);
  sqcRZGate(q, -3.116704845485441, 5);
  sqcRYGate(q, -0.1749309671726147, 6);
  sqcRZGate(q, -1.8851541603634097, 6);
  sqcRYGate(q, -1.7250165285857955, 7);
  sqcRZGate(q, 2.7493609226055193, 7);
  sqcRYGate(q, 2.4657920314868917, 8);
  sqcRZGate(q, -2.679656315409828, 8);
  sqcRYGate(q, -0.0009457421119254404, 9);
  sqcRZGate(q, -0.25405201001597894, 9);
  sqcRYGate(q, -1.4120492028535359, 10);
  sqcRZGate(q, 1.6166874717880821, 10);
  sqcRYGate(q, 1.5129474786591386, 11);
  sqcRZGate(q, -3.044137971303022, 11);
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
  sqcRYGate(q, -0.9670782809179277, 0);
  sqcRZGate(q, -0.978589351141034, 0);
  sqcRYGate(q, -2.0526304373457123, 1);
  sqcRZGate(q, 2.0843408081553214, 1);
  sqcRYGate(q, -0.0017653004265016446, 2);
  sqcRZGate(q, 0.789263300258447, 2);
  sqcRYGate(q, 1.2786402628572269, 3);
  sqcRZGate(q, 0.12007476571660214, 3);
  sqcRYGate(q, -0.05716840349070296, 4);
  sqcRZGate(q, 1.5228329034890695, 4);
  sqcRYGate(q, 3.0186834387941532, 5);
  sqcRZGate(q, -3.1165552382235093, 5);
  sqcRYGate(q, -0.0015200018184575728, 6);
  sqcRZGate(q, -0.937725620190619, 6);
  sqcRYGate(q, -3.136875118979449, 7);
  sqcRZGate(q, 2.2527822588568025, 7);
  sqcRYGate(q, -0.00024474874877267183, 8);
  sqcRZGate(q, -0.4658212575786838, 8);
  sqcRYGate(q, -2.1630208682912855, 9);
  sqcRZGate(q, -1.985953049693598, 9);
  sqcRYGate(q, 1.9497477827717837, 10);
  sqcRZGate(q, 0.37813323921134334, 10);
  sqcRYGate(q, 1.6619722823828544, 11);
  sqcRZGate(q, 1.865382912725121, 11);
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
  sqcRYGate(q, -0.002246003455118384, 0);
  sqcRZGate(q, 2.214482629410117, 0);
  sqcRYGate(q, 2.132188406437151, 1);
  sqcRZGate(q, 0.7084222021272266, 1);
  sqcRYGate(q, -0.003155959605926739, 2);
  sqcRZGate(q, -3.0582560423105876, 2);
  sqcRYGate(q, -1.6344926319947835, 3);
  sqcRZGate(q, 1.7410089347102762, 3);
  sqcRYGate(q, 0.0022876095438667697, 4);
  sqcRZGate(q, 1.551571870236498, 4);
  sqcRYGate(q, -0.317901504427315, 5);
  sqcRZGate(q, -0.8783031570208272, 5);
  sqcRYGate(q, -0.1278518884108717, 6);
  sqcRZGate(q, 2.2591436247219745, 6);
  sqcRYGate(q, 0.119043485612259, 7);
  sqcRZGate(q, 2.063345051394985, 7);
  sqcRYGate(q, 2.5506382954731412, 8);
  sqcRZGate(q, 1.5684333999749862, 8);
  sqcRYGate(q, -1.5707871039235266, 9);
  sqcRZGate(q, 1.5709260681391624, 9);
  sqcRYGate(q, -0.33358049236954584, 10);
  sqcRZGate(q, 1.7124965860046073, 10);
  sqcRYGate(q, 1.2267752890594619, 11);
  sqcRZGate(q, 0.41536455252190363, 11);
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
  sqcRYGate(q, 0.4451125737222572, 0);
  sqcRZGate(q, 2.923460333031229, 0);
  sqcRYGate(q, 1.658460082498936, 1);
  sqcRZGate(q, 1.8111422985333903, 1);
  sqcRYGate(q, -0.002097383617053694, 2);
  sqcRZGate(q, -0.23630433178299892, 2);
  sqcRYGate(q, -1.4218858193362416, 3);
  sqcRZGate(q, 2.832850296680316, 3);
  sqcRYGate(q, -1.6422941475509922, 4);
  sqcRZGate(q, 1.598994827738518, 4);
  sqcRYGate(q, -1.7257067901974938, 5);
  sqcRZGate(q, -1.5004825527877685, 5);
  sqcRYGate(q, 0.0007041371367142446, 6);
  sqcRZGate(q, 0.15921726053220733, 6);
  sqcRYGate(q, 1.5692071900100388, 7);
  sqcRZGate(q, -0.0029020387091795996, 7);
  sqcRYGate(q, -1.5725576195121835, 8);
  sqcRZGate(q, 1.5950354855274025, 8);
  sqcRYGate(q, -1.5726531626338625, 9);
  sqcRZGate(q, 0.8404601925777977, 9);
  sqcRYGate(q, 1.5701211213704864, 10);
  sqcRZGate(q, 0.7850551356304244, 10);
  sqcRYGate(q, 1.296874508531709, 11);
  sqcRZGate(q, 2.6153002038520183, 11);
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
  sqcRYGate(q, 3.1413204679733426, 0);
  sqcRZGate(q, -2.8254211161280076, 0);
  sqcRYGate(q, -0.2642766338325915, 1);
  sqcRZGate(q, 0.29041996415453136, 1);
  sqcRYGate(q, 0.09965025205313525, 2);
  sqcRZGate(q, 1.7060268448225904, 2);
  sqcRYGate(q, -1.682029833835019, 3);
  sqcRZGate(q, -3.0412711886820567, 3);
  sqcRYGate(q, 1.7590875983615089, 4);
  sqcRZGate(q, -0.013063526779666402, 4);
  sqcRYGate(q, -1.8283606999764617, 5);
  sqcRZGate(q, -2.3868080027551075, 5);
  sqcRYGate(q, -3.141205186068759, 6);
  sqcRZGate(q, 1.1562188020638926, 6);
  sqcRYGate(q, 1.6331900977144942, 7);
  sqcRZGate(q, 0.00023314653966988175, 7);
  sqcRYGate(q, 1.5702897838217622, 8);
  sqcRZGate(q, 1.561875892771731, 8);
  sqcRYGate(q, -1.6088013447667973, 9);
  sqcRZGate(q, -1.6419234421418731, 9);
  sqcRYGate(q, 3.134711117673519, 10);
  sqcRZGate(q, -0.7404676368482916, 10);
  sqcRYGate(q, 1.571658058864041, 11);
  sqcRZGate(q, -0.7853420127713922, 11);
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
  sqcRYGate(q, -1.4326356640838025, 0);
  sqcRZGate(q, 1.4955148311168087, 0);
  sqcRYGate(q, -2.097853181482943, 1);
  sqcRZGate(q, -0.2180557902037341, 1);
  sqcRYGate(q, -1.5710836673585407, 2);
  sqcRZGate(q, -0.04777641172633306, 2);
  sqcRYGate(q, -0.14982983493722293, 3);
  sqcRZGate(q, 1.4634738861909125, 3);
  sqcRYGate(q, 0.005433779072037125, 4);
  sqcRZGate(q, -0.008254353421214616, 4);
  sqcRYGate(q, -3.1384010460792555, 5);
  sqcRZGate(q, -2.377622683297489, 5);
  sqcRYGate(q, 3.134935055461197, 6);
  sqcRZGate(q, -1.480262463804162, 6);
  sqcRYGate(q, -1.5173949978740113, 7);
  sqcRZGate(q, -1.5503831936818655, 7);
  sqcRYGate(q, -1.5702205071288389, 8);
  sqcRZGate(q, -1.5653659196490732, 8);
  sqcRYGate(q, -1.5703914832792207, 9);
  sqcRZGate(q, -2.0938884330378356, 9);
  sqcRYGate(q, -1.5744099604515265, 10);
  sqcRZGate(q, 1.4879290382183292, 10);
  sqcRYGate(q, -3.1402265697620235, 11);
  sqcRZGate(q, -0.5439003288248498, 11);
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
  sqcRYGate(q, -3.1402126636080325, 0);
  sqcRZGate(q, 1.747705806354009, 0);
  sqcRYGate(q, 1.5666199550575086, 1);
  sqcRZGate(q, 1.5729833289076545, 1);
  sqcRYGate(q, 0.06698094026335122, 2);
  sqcRZGate(q, -3.0871329056051975, 2);
  sqcRYGate(q, -0.0135226117976055, 3);
  sqcRZGate(q, 0.08975249165288622, 3);
  sqcRYGate(q, -1.3847284429387297, 4);
  sqcRZGate(q, -1.5390876808165102, 4);
  sqcRYGate(q, -1.8269594471882584, 5);
  sqcRZGate(q, -3.043746021177311, 5);
  sqcRYGate(q, -3.1389057503732998, 6);
  sqcRZGate(q, -1.014560902452458, 6);
  sqcRYGate(q, -0.0756514467841134, 7);
  sqcRZGate(q, -0.4357772187611371, 7);
  sqcRYGate(q, 1.5707252024069194, 8);
  sqcRZGate(q, 1.525446425219762, 8);
  sqcRYGate(q, -0.0010052979151815578, 9);
  sqcRZGate(q, 3.0739286885674892, 9);
  sqcRYGate(q, -1.57009262355791, 10);
  sqcRZGate(q, 3.01410374798793, 10);
  sqcRYGate(q, 3.1414060763337748, 11);
  sqcRZGate(q, -1.3366202894629253, 11);
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
  sqcRYGate(q, 1.5741473154479226, 0);
  sqcRZGate(q, 2.100816047542684, 0);
  sqcRYGate(q, -0.007774233055434898, 1);
  sqcRZGate(q, -1.040095670119343, 1);
  sqcRYGate(q, -1.2150243231272104, 2);
  sqcRZGate(q, 0.5261887014943841, 2);
  sqcRYGate(q, 1.595076508865913, 3);
  sqcRZGate(q, -2.5907523793222293, 3);
  sqcRYGate(q, -0.6219678007893163, 4);
  sqcRZGate(q, 0.5270242101890101, 4);
  sqcRYGate(q, -0.028012262318316772, 5);
  sqcRZGate(q, 0.9350969511001911, 5);
  sqcRYGate(q, 1.5842669776876388, 6);
  sqcRZGate(q, 2.093174492244896, 6);
  sqcRYGate(q, -0.01143160414737884, 7);
  sqcRZGate(q, -0.619770468560053, 7);
  sqcRYGate(q, -3.124942053203138, 8);
  sqcRZGate(q, 2.0519995372345607, 8);
  sqcRYGate(q, -0.010186104780432359, 9);
  sqcRZGate(q, -0.4467102957578142, 9);
  sqcRYGate(q, 0.06073468816002093, 10);
  sqcRZGate(q, 2.226221583869597, 10);
  sqcRYGate(q, -1.5656035369177652, 11);
  sqcRZGate(q, -2.60690606782198, 11);

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
