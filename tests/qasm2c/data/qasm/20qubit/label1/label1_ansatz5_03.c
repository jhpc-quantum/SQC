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

  sqcRYGate(q, -0.37465696677563365, 0);
  sqcRYGate(q, 1.7334709355848066, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7633004659850463, 0);
  sqcRYGate(q, -0.9623024569887288, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4080313748708866, 2);
  sqcRYGate(q, 0.7297178105678739, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5454030679777322, 2);
  sqcRYGate(q, 1.6241465932725134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.103591950074666, 4);
  sqcRYGate(q, -0.5693408221627809, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.393422683962482, 4);
  sqcRYGate(q, -2.366579515946715, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.276582004735159, 6);
  sqcRYGate(q, -1.3391630657427473, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.049167977539143, 6);
  sqcRYGate(q, -2.6708862566714555, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8132357196992226, 8);
  sqcRYGate(q, -3.052218738220644, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.3265802607581701, 8);
  sqcRYGate(q, 2.697345673955175, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.9120769473434942, 10);
  sqcRYGate(q, -2.9308083556292095, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.2337072326649858, 10);
  sqcRYGate(q, 2.761540845052604, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.7143565847521955, 12);
  sqcRYGate(q, -0.00012446076224011983, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.9805906847637207, 12);
  sqcRYGate(q, -1.4453591956529466, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.5784110955633964, 14);
  sqcRYGate(q, 3.1135019381913134, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.0979653026340173, 14);
  sqcRYGate(q, -0.47390873667991945, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.093564037881451, 16);
  sqcRYGate(q, -1.3254824854674485, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.949597639053407, 16);
  sqcRYGate(q, 0.07276261193336442, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.3854303080437499, 18);
  sqcRYGate(q, 1.1441568347503495, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.0536867204580749, 18);
  sqcRYGate(q, 2.4096779505710586, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.9602339739632482, 1);
  sqcRYGate(q, 0.5475541816686785, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.19220494026364235, 1);
  sqcRYGate(q, 0.13745439367402368, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8277532324440715, 3);
  sqcRYGate(q, -1.8052858578858455, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.80712870916632, 3);
  sqcRYGate(q, -1.8607098233565729, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.933765353041204, 5);
  sqcRYGate(q, -2.183147970620969, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.607671579627199, 5);
  sqcRYGate(q, 2.5483460511500553, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2362112890971622, 7);
  sqcRYGate(q, 2.3894283601036204, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.1339078968528968, 7);
  sqcRYGate(q, -2.9769165374627824, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.0881676726426956, 9);
  sqcRYGate(q, 0.7669910195612237, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.4848842383635663, 9);
  sqcRYGate(q, 1.294763109111825, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.706439697163625, 11);
  sqcRYGate(q, 1.32157742890762, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.575218252522216, 11);
  sqcRYGate(q, 0.6150066003815331, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.04230198283886864, 13);
  sqcRYGate(q, 1.5330726169568747, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.754955548910116, 13);
  sqcRYGate(q, 3.028411729891331, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.556722582679613, 15);
  sqcRYGate(q, 0.5506754118019535, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -3.0106581140233297, 15);
  sqcRYGate(q, 0.055251077955245594, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.9250945021138026, 17);
  sqcRYGate(q, 2.439741744273011, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.06289362808062257, 17);
  sqcRYGate(q, 1.2935844118824078, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.770483476177025, 0);
  sqcRYGate(q, 0.6475315537536781, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3691694874695673, 0);
  sqcRYGate(q, 0.161321906514342, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4325764353836057, 2);
  sqcRYGate(q, 1.6981692255543215, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.06349221286569419, 2);
  sqcRYGate(q, -2.8308900539596427, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5902339411609682, 4);
  sqcRYGate(q, -0.7961515710589002, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1897931229555363, 4);
  sqcRYGate(q, -1.1694147613128205, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3393244574779817, 6);
  sqcRYGate(q, 2.939717340745666, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.057900710027611, 6);
  sqcRYGate(q, 2.940947746010851, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8592610881394087, 8);
  sqcRYGate(q, 0.5535068930161424, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9806233352487261, 8);
  sqcRYGate(q, -2.1173047553563293, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5686117911208397, 10);
  sqcRYGate(q, 2.8731411578433237, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0317072034613384, 10);
  sqcRYGate(q, -1.448747149371394, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.8815122498922774, 12);
  sqcRYGate(q, 0.4020687781913962, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.6547992418779094, 12);
  sqcRYGate(q, -2.4782960190555725, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.118730332691525, 14);
  sqcRYGate(q, 0.9221590154470638, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.2925714825884067, 14);
  sqcRYGate(q, 1.0454944822966177, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.8227186346778588, 16);
  sqcRYGate(q, 1.9969660300544958, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.27080942466598934, 16);
  sqcRYGate(q, -2.2817332935308325, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.0227525513927977, 18);
  sqcRYGate(q, 0.09968572786099283, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.6709269275305593, 18);
  sqcRYGate(q, 1.4373425756155385, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.6274230642174029, 1);
  sqcRYGate(q, -1.6311593217133724, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2446422890629796, 1);
  sqcRYGate(q, 3.074124593603251, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.13961542154308537, 3);
  sqcRYGate(q, -1.6919091088014895, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.075646151931645, 3);
  sqcRYGate(q, -2.3967473451691546, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.269684453570096, 5);
  sqcRYGate(q, 0.019573362661542495, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.074307843129753, 5);
  sqcRYGate(q, 1.4542450203148547, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3974788261696989, 7);
  sqcRYGate(q, -1.5864359336836795, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.6801387030206492, 7);
  sqcRYGate(q, -1.2160895117289694, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.6084116877400192, 9);
  sqcRYGate(q, -0.05428979263339784, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.7516091602314807, 9);
  sqcRYGate(q, 0.2940283068589613, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9570521577877898, 11);
  sqcRYGate(q, 0.6748124795174286, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.1301526360696736, 11);
  sqcRYGate(q, 2.591689428408589, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.2709994865607657, 13);
  sqcRYGate(q, -2.922300349204395, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.05528736633519049, 13);
  sqcRYGate(q, -3.064528648729652, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.7402111257277895, 15);
  sqcRYGate(q, 1.2540215706978532, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.677349741604134, 15);
  sqcRYGate(q, 3.111561997626411, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.40704738055311235, 17);
  sqcRYGate(q, -2.4570495136919623, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.9645680237305516, 17);
  sqcRYGate(q, 1.4421261020009886, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.3411924209960473, 0);
  sqcRYGate(q, -2.9521367265900067, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4755582388390787, 0);
  sqcRYGate(q, -1.10307568953293, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1944856455425095, 2);
  sqcRYGate(q, -0.6881968963028555, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.925400283402885, 2);
  sqcRYGate(q, -0.24859627432409237, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1719016149204506, 4);
  sqcRYGate(q, 0.011841837144149103, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1091166246015955, 4);
  sqcRYGate(q, -0.6718990234000123, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3224060723118263, 6);
  sqcRYGate(q, 1.6413280915445467, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1155610156594817, 6);
  sqcRYGate(q, -1.0333084731549833, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4245268473453532, 8);
  sqcRYGate(q, -1.828069287656131, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.9578492743788076, 8);
  sqcRYGate(q, 0.016562933435094074, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.53092154853018, 10);
  sqcRYGate(q, 0.44512130336673056, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.5743332843045756, 10);
  sqcRYGate(q, -2.344597956399076, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.6017128842995177, 12);
  sqcRYGate(q, 0.44523735769477374, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.8478143806789156, 12);
  sqcRYGate(q, 0.8142382280680716, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.48526058704335645, 14);
  sqcRYGate(q, 1.1029810613474373, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.005136972975812, 14);
  sqcRYGate(q, -1.5069164978283638, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.3721233284519534, 16);
  sqcRYGate(q, -1.343042914007869, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.8644849147423543, 16);
  sqcRYGate(q, 2.946955276010812, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.9793643897909146, 18);
  sqcRYGate(q, 1.483607343715083, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.2503412021571956, 18);
  sqcRYGate(q, 2.973281738835124, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.8235091907080578, 1);
  sqcRYGate(q, 0.5611042610408526, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1220413916268894, 1);
  sqcRYGate(q, -0.4660366335939727, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6853809969443923, 3);
  sqcRYGate(q, -2.508376380725419, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8250208157355887, 3);
  sqcRYGate(q, 1.0541140327105543, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0920330065297903, 5);
  sqcRYGate(q, 1.4078391691073828, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.840976193129703, 5);
  sqcRYGate(q, 1.3311417522500775, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2959732619893918, 7);
  sqcRYGate(q, 2.7116418810016234, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.8110042745933013, 7);
  sqcRYGate(q, -3.039653653174866, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.9967328129427864, 9);
  sqcRYGate(q, 1.7461687744913201, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.1814070116054154, 9);
  sqcRYGate(q, 0.3300229374306651, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.604736480233629, 11);
  sqcRYGate(q, -1.6955666066244006, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.1337287953031043, 11);
  sqcRYGate(q, 0.6938433765696213, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.21230262739473726, 13);
  sqcRYGate(q, -2.6409083007475993, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5030423413428795, 13);
  sqcRYGate(q, -0.8270926146733144, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.570178091166043, 15);
  sqcRYGate(q, -1.3371773267295903, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.4364578925438902, 15);
  sqcRYGate(q, 0.05983806471344533, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.693717484680766, 17);
  sqcRYGate(q, -1.242630286119051, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.5977930916817558, 17);
  sqcRYGate(q, -0.9731772407672761, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.980757061839017, 0);
  sqcRYGate(q, -0.8103161290629766, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4778863777323212, 0);
  sqcRYGate(q, 2.9329550097432513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.388443094989642, 2);
  sqcRYGate(q, -2.5445329933333114, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9752541756893027, 2);
  sqcRYGate(q, 0.3309932010605973, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2705107294933815, 4);
  sqcRYGate(q, -1.4180467924038722, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9575272213249955, 4);
  sqcRYGate(q, 1.554034188616129, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.602032986215221, 6);
  sqcRYGate(q, 1.664402154180374, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.30186605749434, 6);
  sqcRYGate(q, -1.7243715806204012, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8114509308586033, 8);
  sqcRYGate(q, -3.0927891114733304, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.16446333258436852, 8);
  sqcRYGate(q, -0.18568075308984983, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.5165316680013987, 10);
  sqcRYGate(q, -0.6686473230611272, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.17167676325939804, 10);
  sqcRYGate(q, -0.28878265209938725, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.26941740772907036, 12);
  sqcRYGate(q, -1.959463045436938, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5428731410263952, 12);
  sqcRYGate(q, -2.7347470911314797, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.526513169671409, 14);
  sqcRYGate(q, -3.029710119810561, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.3346869780666681, 14);
  sqcRYGate(q, -2.0332583183824293, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.0454481077774407, 16);
  sqcRYGate(q, -1.9673793079898667, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.3375892762256236, 16);
  sqcRYGate(q, -0.09503257384471997, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.1630617977755744, 18);
  sqcRYGate(q, -2.2811706389459196, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.8143598002539838, 18);
  sqcRYGate(q, 1.092120772216457, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.057354484557994, 1);
  sqcRYGate(q, 1.4769323717055043, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5248479388501015, 1);
  sqcRYGate(q, 2.681591684860969, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7206236939088901, 3);
  sqcRYGate(q, -1.8941066844423924, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.25096150899701, 3);
  sqcRYGate(q, 1.6747742005653965, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8285290036492925, 5);
  sqcRYGate(q, 1.1292841831432954, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1969800723689294, 5);
  sqcRYGate(q, -2.5628381186682114, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.021261842074342674, 7);
  sqcRYGate(q, 1.7617958567681589, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.6105589458075267, 7);
  sqcRYGate(q, -1.1953145650201424, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.872721766700924, 9);
  sqcRYGate(q, -1.6841565517468502, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.04899935372189, 9);
  sqcRYGate(q, 0.11364010623140697, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.360145884459894, 11);
  sqcRYGate(q, 2.3221058797863248, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.133754398154599, 11);
  sqcRYGate(q, 3.1364675858753963, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.1476709874809767, 13);
  sqcRYGate(q, -2.7730427544349103, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.712616194267398, 13);
  sqcRYGate(q, -0.8907906069288023, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.7441343579268205, 15);
  sqcRYGate(q, 2.2513202742823655, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.4774065610460951, 15);
  sqcRYGate(q, -0.5680422151607092, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.877911963624074, 17);
  sqcRYGate(q, -1.4780518048946218, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.9555952113000643, 17);
  sqcRYGate(q, -3.0703961640803787, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.5491189160374766, 0);
  sqcRYGate(q, -1.4412635357509207, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3074778199039761, 0);
  sqcRYGate(q, 0.268553180718724, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.047822970177031, 2);
  sqcRYGate(q, 1.4283100757958902, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6818546827212666, 2);
  sqcRYGate(q, 1.7696447984860297, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3610200024939116, 4);
  sqcRYGate(q, 1.0850944555839204, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.33126580458890764, 4);
  sqcRYGate(q, 2.913098849142858, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9039916471958843, 6);
  sqcRYGate(q, 2.1703563876152434, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.10387258184371097, 6);
  sqcRYGate(q, 3.09843858551367, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.684186957935653, 8);
  sqcRYGate(q, 2.1132904511076496, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.0419840685453228, 8);
  sqcRYGate(q, 2.281585274707247, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.42050782260438574, 10);
  sqcRYGate(q, -0.1960930751700669, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.9931910629198786, 10);
  sqcRYGate(q, 2.8252672193404242, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5690081736265882, 12);
  sqcRYGate(q, 1.63971835399916, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.1571593636838973, 12);
  sqcRYGate(q, -0.026128529285677438, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.16361152042263938, 14);
  sqcRYGate(q, -2.8285100947935113, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.012712149690298248, 14);
  sqcRYGate(q, -0.2585271888866405, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.4880488615523424, 16);
  sqcRYGate(q, 0.3442629109973708, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.3978334539443245, 16);
  sqcRYGate(q, 2.2502891216657153, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.3594327923612415, 18);
  sqcRYGate(q, -0.16350405124373374, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -3.0400110431773584, 18);
  sqcRYGate(q, -2.0752687871316375, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.5198604166873877, 1);
  sqcRYGate(q, -2.221762065228818, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6773807532638232, 1);
  sqcRYGate(q, 1.2748601423073698, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6089970421319757, 3);
  sqcRYGate(q, -1.038215382768108, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.599107006848862, 3);
  sqcRYGate(q, -0.36817039549157826, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.001887425518513, 5);
  sqcRYGate(q, 1.3432771223568354, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5268263556846229, 5);
  sqcRYGate(q, 2.5542279664593357, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.612989821093285, 7);
  sqcRYGate(q, -2.161792756417112, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.22225132645651513, 7);
  sqcRYGate(q, -2.5233594450020767, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.361228888577322, 9);
  sqcRYGate(q, 0.5678206826446512, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.0050000854833914, 9);
  sqcRYGate(q, 3.0675226120481245, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9751562577192459, 11);
  sqcRYGate(q, -2.8049863201744474, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.06772419651546117, 11);
  sqcRYGate(q, -2.9717285235925424, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.9468644782490948, 13);
  sqcRYGate(q, 0.49426667718036565, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.523954698832017, 13);
  sqcRYGate(q, -2.357770937529849, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.7213804581856245, 15);
  sqcRYGate(q, -0.7738004764029851, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.029359920707968962, 15);
  sqcRYGate(q, 0.59553025152585, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.2837033057747789, 17);
  sqcRYGate(q, -2.731203936892787, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.3133245480311622, 17);
  sqcRYGate(q, -1.6668544898094506, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.9704968519604593, 0);
  sqcRYGate(q, 2.464421272911103, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.525563451281399, 0);
  sqcRYGate(q, 0.7399565128195833, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7793696420118819, 2);
  sqcRYGate(q, -0.31327788348733654, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9038706899603435, 2);
  sqcRYGate(q, -1.4047616709350566, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2386301093478824, 4);
  sqcRYGate(q, -2.1409605174312, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.27112457556712055, 4);
  sqcRYGate(q, -3.123985434700608, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.22373420366895402, 6);
  sqcRYGate(q, -1.1667171852772662, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.007274483318394, 6);
  sqcRYGate(q, 0.010857811408580886, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9776939872270975, 8);
  sqcRYGate(q, -1.2320969900270944, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.9446947554342788, 8);
  sqcRYGate(q, 0.8230444198140496, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.4593121384011324, 10);
  sqcRYGate(q, 2.3589338931013075, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.1947216213808716, 10);
  sqcRYGate(q, -2.8976995051545082, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.7571318508531197, 12);
  sqcRYGate(q, 2.6238710911692884, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.29863208068690233, 12);
  sqcRYGate(q, 2.8369645024391956, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5272776556467624, 14);
  sqcRYGate(q, 1.5002876935581915, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.17476594481081908, 14);
  sqcRYGate(q, -2.989785668454326, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.2439548744106945, 16);
  sqcRYGate(q, 1.3366120691470167, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.0988195372790308, 16);
  sqcRYGate(q, -2.9215880532546787, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.7675196590895692, 18);
  sqcRYGate(q, 2.3683240275521675, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.372011212246232, 18);
  sqcRYGate(q, -2.5119793386274614, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.2629491224176341, 1);
  sqcRYGate(q, 2.245977108327695, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7253078535155812, 1);
  sqcRYGate(q, 2.771841618755425, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0393011001045136, 3);
  sqcRYGate(q, -0.6392608298823538, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5410846027786382, 3);
  sqcRYGate(q, -3.066467491219147, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5257625719083063, 5);
  sqcRYGate(q, -2.2438747165976842, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0874578604723748, 5);
  sqcRYGate(q, -2.9601332932928797, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.238783380078002, 7);
  sqcRYGate(q, -1.4421605469840082, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.4741724396681972, 7);
  sqcRYGate(q, -1.4850807114731475, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.5778228559971565, 9);
  sqcRYGate(q, 1.3333455446263036, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.24949427391801807, 9);
  sqcRYGate(q, 2.948123772321172, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.8271613655619001, 11);
  sqcRYGate(q, 2.4834829777952208, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.828531933833489, 11);
  sqcRYGate(q, 2.9993969829415104, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5963136818457258, 13);
  sqcRYGate(q, 1.9421222074891622, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.6732856664171374, 13);
  sqcRYGate(q, -1.9553800871164133, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.10723830969731, 15);
  sqcRYGate(q, -2.6732354670162515, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.207495307617534, 15);
  sqcRYGate(q, 0.5054967752130501, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.156176379255569, 17);
  sqcRYGate(q, 1.9154788854598594, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.800771326566441, 17);
  sqcRYGate(q, -2.7581268609757448, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.9215660967888915, 0);
  sqcRYGate(q, 1.2052776704955965, 1);
  sqcRYGate(q, 0.5516854485172772, 2);
  sqcRYGate(q, 1.7282233214659506, 3);
  sqcRYGate(q, 1.6358154926153468, 4);
  sqcRYGate(q, 1.9872920864895676, 5);
  sqcRYGate(q, 0.27164519623547995, 6);
  sqcRYGate(q, 0.3635847268338406, 7);
  sqcRYGate(q, -0.12597618543501068, 8);
  sqcRYGate(q, -1.7360786221328213, 9);
  sqcRYGate(q, -0.03703031293817638, 10);
  sqcRYGate(q, 0.9235491060711779, 11);
  sqcRYGate(q, 2.2963913539413348, 12);
  sqcRYGate(q, 1.811035550179771, 13);
  sqcRYGate(q, -1.1679275437536611, 14);
  sqcRYGate(q, 2.8467604836047973, 15);
  sqcRYGate(q, 2.4363537301460396, 16);
  sqcRYGate(q, 0.99295703691459, 17);
  sqcRYGate(q, -2.829080415201836, 18);
  sqcRYGate(q, -2.367107911707001, 19);

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
