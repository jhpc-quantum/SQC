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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -0.20882516717326371, 0);
  sqcRYGate(q, -0.3190697980461117, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.637559699394083, 0);
  sqcRYGate(q, 2.548420018719127, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.22225362712557659, 2);
  sqcRYGate(q, -0.06574635386854322, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.096957232282472, 2);
  sqcRYGate(q, -0.5036983242760867, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.62552319278554, 4);
  sqcRYGate(q, -0.928519031245523, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4156793658285322, 4);
  sqcRYGate(q, 0.7193342611492043, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.644043228470646, 6);
  sqcRYGate(q, -1.4074824737517782, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.238633791397241, 6);
  sqcRYGate(q, 0.3154544644383945, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.296305935590444, 8);
  sqcRYGate(q, -2.295772706733443, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.9785650243969495, 8);
  sqcRYGate(q, -1.3192603312537896, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.1427957091061055, 10);
  sqcRYGate(q, -2.283554910281747, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.016297321162582534, 10);
  sqcRYGate(q, 3.0588134486227, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6544067294404388, 12);
  sqcRYGate(q, -1.599367318851872, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.8353629547308936, 12);
  sqcRYGate(q, 3.026627882249871, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.8433029791031426, 14);
  sqcRYGate(q, 0.07284053582468851, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.635078599117266, 14);
  sqcRYGate(q, -0.5176308565713843, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.8331372317034014, 0);
  sqcRYGate(q, -1.1428202409612491, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.136207747077072, 0);
  sqcRYGate(q, -2.8341887341801666, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5293567613502876, 2);
  sqcRYGate(q, -1.973036610239937, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.013413438951993761, 2);
  sqcRYGate(q, -3.1411265013379612, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.0705525616044236, 4);
  sqcRYGate(q, 2.747818674695974, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.5925647301160875, 4);
  sqcRYGate(q, 0.8703440694478507, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.42300108546589854, 6);
  sqcRYGate(q, 3.010252267460493, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.0301687271931232, 6);
  sqcRYGate(q, -2.890814365518493, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.9797265283210224, 8);
  sqcRYGate(q, 1.4693763908790523, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.951776552723234, 8);
  sqcRYGate(q, -0.007842320705913782, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.04041005657508201, 10);
  sqcRYGate(q, -2.643785114693611, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.0684710397207184, 10);
  sqcRYGate(q, 0.044351276243672424, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 2.5040706792606167, 12);
  sqcRYGate(q, 0.5417990706249736, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.2977448227601758, 12);
  sqcRYGate(q, -0.6191271753715037, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.2760591501333565, 1);
  sqcRYGate(q, 2.787874407728424, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0153305427011423, 1);
  sqcRYGate(q, -2.341885416290639, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.327781825489299, 3);
  sqcRYGate(q, -2.354362137421205, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.1409771724957585, 3);
  sqcRYGate(q, -9.996556166935733e-05, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.1730059829735309, 5);
  sqcRYGate(q, 1.4734140196890229, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.0283850220049553, 5);
  sqcRYGate(q, 1.1921536970957547, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5747819148877822, 7);
  sqcRYGate(q, 0.8423767855227062, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.7864655119594977, 7);
  sqcRYGate(q, -0.09570355568081634, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.506793943020012, 9);
  sqcRYGate(q, 0.7309316475473865, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.04737403230035545, 9);
  sqcRYGate(q, 3.137356735165894, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.0738502737303492, 11);
  sqcRYGate(q, -1.0554731347560278, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.7386055922424629, 11);
  sqcRYGate(q, 2.5158509803919578, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 2.9463076862156377, 13);
  sqcRYGate(q, 1.5160997600006256, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.11017478433709549, 13);
  sqcRYGate(q, 3.0290008116660836, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.9638947216299796, 0);
  sqcRYGate(q, 0.50407975253155, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6314185843329643, 0);
  sqcRYGate(q, 0.5823059849197142, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9853634128630562, 1);
  sqcRYGate(q, 0.821549745912117, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4392665939259406, 1);
  sqcRYGate(q, 2.928934900767435, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.06409496259903592, 2);
  sqcRYGate(q, -1.4694074436238864, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.006479396222684563, 2);
  sqcRYGate(q, 3.1347183874578977, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.4222110024691457, 3);
  sqcRYGate(q, 2.364895338682608, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.055385476294908254, 3);
  sqcRYGate(q, -0.00022297983060148852, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.22426194393217086, 4);
  sqcRYGate(q, -0.03517531209392235, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.1132620016130983, 4);
  sqcRYGate(q, 3.119918314762205, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.907610712017867, 5);
  sqcRYGate(q, -0.9349467503097149, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.091497465225156, 5);
  sqcRYGate(q, -3.0932977763209313, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8290397118029946, 6);
  sqcRYGate(q, 2.193237853269205, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -1.9644352033865522, 6);
  sqcRYGate(q, -1.1959728037627695, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -0.4503805329875501, 7);
  sqcRYGate(q, 2.34511607076883, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.5766641118715441, 7);
  sqcRYGate(q, 3.1200653590182927, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.7266524775663725, 8);
  sqcRYGate(q, -1.7505736694781806, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -3.1402089927173984, 8);
  sqcRYGate(q, 0.0067925544764809095, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 1.33659314552877, 9);
  sqcRYGate(q, 3.088983019451307, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.19473465980910307, 9);
  sqcRYGate(q, -3.138193229467583, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.345553767736197, 10);
  sqcRYGate(q, -1.9824696303168121, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -0.6903804934840645, 10);
  sqcRYGate(q, -0.4914433825398625, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, 0.08794434333722723, 11);
  sqcRYGate(q, -2.0111258167010275, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.8657530248206539, 11);
  sqcRYGate(q, 2.442287976199675, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.3563141905693898, 12);
  sqcRYGate(q, -2.1576138000655054, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -2.489579624907719, 12);
  sqcRYGate(q, 0.37826622548545163, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, 0.6963361503273707, 13);
  sqcRYGate(q, 1.6859946885421264, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.206212875693339, 13);
  sqcRYGate(q, -1.529211240451799, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.3596180500587476, 0);
  sqcRYGate(q, -3.042742224785349, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0871779779579316, 0);
  sqcRYGate(q, 2.1013619505731165, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3096736811994125, 2);
  sqcRYGate(q, 2.120419335189906, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2575552360542568, 2);
  sqcRYGate(q, -2.808564456115321, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3694542191569645, 4);
  sqcRYGate(q, -1.76839260128643, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.712817871346088, 4);
  sqcRYGate(q, -2.4227347047948857, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4730914809820872, 6);
  sqcRYGate(q, 2.6926476859980175, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3870755569637545, 6);
  sqcRYGate(q, 2.797256238862113, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4815890497093474, 8);
  sqcRYGate(q, -2.087841132290764, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.20416973832642515, 8);
  sqcRYGate(q, -2.7047772994930086, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.800004504565123, 10);
  sqcRYGate(q, 1.6452595582036276, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.029878784263352, 10);
  sqcRYGate(q, -1.7681844040043042, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.4013114961768203, 12);
  sqcRYGate(q, 2.545047354346394, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.8598547811181108, 12);
  sqcRYGate(q, -0.7665513994918959, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.8716234814620343, 14);
  sqcRYGate(q, -1.6408159640018236, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.5516175816380899, 14);
  sqcRYGate(q, -0.8516381867714913, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.111495654879188, 0);
  sqcRYGate(q, 1.3394825100810026, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4502469653373726, 0);
  sqcRYGate(q, -2.789873515207648, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.074179246528124, 2);
  sqcRYGate(q, -2.522884014651871, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.486820978315589, 2);
  sqcRYGate(q, -1.2644425828744295, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.2972227420700042, 4);
  sqcRYGate(q, -2.6505408051697494, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.1149023235686037, 4);
  sqcRYGate(q, -3.066572770085237, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.4406492026883333, 6);
  sqcRYGate(q, 0.34997698129804355, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.0523568861026398, 6);
  sqcRYGate(q, -0.09165418758404272, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.6866513674498105, 8);
  sqcRYGate(q, -2.9721929007561743, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.0003333325918995225, 8);
  sqcRYGate(q, 3.1415277632634533, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.859206012909067, 10);
  sqcRYGate(q, 1.2555694549052574, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.3063170840871396, 10);
  sqcRYGate(q, -1.5424278112137728, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 2.0432804219633, 12);
  sqcRYGate(q, 0.02169327144180844, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 3.129821098693602, 12);
  sqcRYGate(q, -0.022332634199233165, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.898366168924146, 1);
  sqcRYGate(q, -1.3231410624057247, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.009067530043954705, 1);
  sqcRYGate(q, 0.7986224952109962, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3436407149089646, 3);
  sqcRYGate(q, 2.487334307716885, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.005702108322211103, 3);
  sqcRYGate(q, -3.139277389831396, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.7720671135886423, 5);
  sqcRYGate(q, -0.30715828156842073, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.0019090312161896, 5);
  sqcRYGate(q, 0.1433650382703595, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.694025953701523, 7);
  sqcRYGate(q, -2.9955099471720814, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.070994150588932, 7);
  sqcRYGate(q, -0.06022776328269597, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.7018678745212021, 9);
  sqcRYGate(q, 0.5089494947625743, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.139592513543414, 9);
  sqcRYGate(q, -3.1397853191659792, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.16527043382625806, 11);
  sqcRYGate(q, 0.9902798390793874, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -2.284105797734556, 11);
  sqcRYGate(q, -0.3054390204342088, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.3289721157015455, 13);
  sqcRYGate(q, -0.0468738756849989, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.8519931104551928, 13);
  sqcRYGate(q, 0.004597608008600317, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.6239005420129882, 0);
  sqcRYGate(q, -2.6532291534277634, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9345694016724937, 0);
  sqcRYGate(q, -2.0561973000508793, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.23428417986406824, 1);
  sqcRYGate(q, -0.582449485577618, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0005568147496264331, 1);
  sqcRYGate(q, -3.1403803704555653, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0710513587815296, 2);
  sqcRYGate(q, 2.2318809674613638, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.3665617695142487, 2);
  sqcRYGate(q, -2.158134944025681, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.2216264404801014, 3);
  sqcRYGate(q, -2.925834344461297, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0036622744835369905, 3);
  sqcRYGate(q, 3.139401695032036, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.551194497269961, 4);
  sqcRYGate(q, -1.6736327355567888, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.804015916726095, 4);
  sqcRYGate(q, -0.0917936816609252, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.9276076792950165, 5);
  sqcRYGate(q, -2.9205959656699254, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.045948482962575, 5);
  sqcRYGate(q, 0.04635293480099991, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0486427337531288, 6);
  sqcRYGate(q, 2.498807367572371, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 3.112000459829304, 6);
  sqcRYGate(q, -3.108513805914302, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 2.6757036577324156, 7);
  sqcRYGate(q, -0.9831819059529963, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1170093306546582, 7);
  sqcRYGate(q, 3.1405501740249333, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.232520168595383, 8);
  sqcRYGate(q, -3.0208340985147246, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -0.0007185143705582722, 8);
  sqcRYGate(q, 3.1390098880364974, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 2.252483318587214, 9);
  sqcRYGate(q, 1.1106461068768345, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.1389796910788306, 9);
  sqcRYGate(q, -0.0021685678603354016, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.5115699975581238, 10);
  sqcRYGate(q, 0.3292817873270648, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -1.6359575004471743, 10);
  sqcRYGate(q, -1.61697331640449, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, 1.3719102558897254, 11);
  sqcRYGate(q, 1.6681115514838079, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.6308861225640636, 11);
  sqcRYGate(q, -0.1887046187961623, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.273554005197907, 12);
  sqcRYGate(q, -1.6661954130067382, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, 1.6545963589726875, 12);
  sqcRYGate(q, -1.5960570713784632, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -2.057199550632439, 13);
  sqcRYGate(q, 2.7049283378468436, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.587072603901555, 13);
  sqcRYGate(q, -1.7400012247832732, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.8395488220327367, 0);
  sqcRYGate(q, -2.7393806355376555, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5112706782952006, 0);
  sqcRYGate(q, -0.057379450770195906, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4695319598904772, 2);
  sqcRYGate(q, -1.5536127461223472, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.009659854598912875, 2);
  sqcRYGate(q, -0.16579535255427455, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0292753049770444, 4);
  sqcRYGate(q, -1.1603723164811486, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0912586807461135, 4);
  sqcRYGate(q, 1.102533861550394, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2532708388608749, 6);
  sqcRYGate(q, 2.2694378317822097, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.13771085556148496, 6);
  sqcRYGate(q, -1.8319378170433462, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.061188268204809, 8);
  sqcRYGate(q, -2.9885479468364444, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.11465938998240603, 8);
  sqcRYGate(q, 2.5417936897969655, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6458831244110899, 10);
  sqcRYGate(q, -2.8902127337753742, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.4485525576817966, 10);
  sqcRYGate(q, -1.7840695186362021, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.19406743072104415, 12);
  sqcRYGate(q, -0.39629592925591306, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.7699998002867732, 12);
  sqcRYGate(q, 1.524907548576837, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.7633422635041747, 14);
  sqcRYGate(q, 1.3314705962389497, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.0950702959683083, 14);
  sqcRYGate(q, -0.6788759052950826, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.793212982886426, 0);
  sqcRYGate(q, 2.755849476772028, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.05702887206180192, 0);
  sqcRYGate(q, -1.2049809552319186, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5711520121879923, 2);
  sqcRYGate(q, 1.4738241171113027, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.0059974999895752645, 2);
  sqcRYGate(q, -0.11117244354136487, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.7257807503471468, 4);
  sqcRYGate(q, -1.7477494494155208, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.026288816387326903, 4);
  sqcRYGate(q, 0.08050356117981838, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.3792338749268653, 6);
  sqcRYGate(q, -0.8087884470811307, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.0035868620733772046, 6);
  sqcRYGate(q, -3.1346122311282554, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.46107091218419066, 8);
  sqcRYGate(q, 0.8714206853692171, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.1330577520759375, 8);
  sqcRYGate(q, 0.0009692482912511124, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.5041716150135902, 10);
  sqcRYGate(q, 1.48727069736108, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.012983631122760464, 10);
  sqcRYGate(q, 0.022287199855376194, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 2.5733030863914452, 12);
  sqcRYGate(q, 1.4671459081546354, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.8657114893215683, 12);
  sqcRYGate(q, 1.5558021777090287, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.3374563095989401, 1);
  sqcRYGate(q, 0.4183172299176367, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7682815464907035, 1);
  sqcRYGate(q, -1.426537963855881, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1035622493010635, 3);
  sqcRYGate(q, 1.3947553322275463, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.00046941552490749116, 3);
  sqcRYGate(q, -0.0006817276282643501, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.9557813775799016, 5);
  sqcRYGate(q, 3.131365010664896, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.5593160435539836, 5);
  sqcRYGate(q, -2.1696485817342133, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.068332270628348, 7);
  sqcRYGate(q, -1.9842452023804968, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.1020748624531627, 7);
  sqcRYGate(q, 0.16929785015812637, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.130681377668649, 9);
  sqcRYGate(q, 1.7422896500439347, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.042036432923206135, 9);
  sqcRYGate(q, 0.17959984581423427, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.7600215421233152, 11);
  sqcRYGate(q, 1.8095133106103196, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.028844602847683275, 11);
  sqcRYGate(q, -0.0018641710532076102, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.3514888510792442, 13);
  sqcRYGate(q, -0.5920092517432832, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -2.028379533278971, 13);
  sqcRYGate(q, 1.7853051273709868, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.5663816329861935, 0);
  sqcRYGate(q, -0.8639948589605336, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5071214120352, 0);
  sqcRYGate(q, -1.6722425812755946, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1911341030309721, 1);
  sqcRYGate(q, 1.6073129861143614, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2689796088103642, 1);
  sqcRYGate(q, 0.1167703370999912, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5915429298829888, 2);
  sqcRYGate(q, 2.9478241858671006, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.019913519865333722, 2);
  sqcRYGate(q, -3.090363796584467, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.3725918475223313, 3);
  sqcRYGate(q, -1.680906066220938, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.3552816013840081, 3);
  sqcRYGate(q, -3.029736238602164, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6246942254179317, 4);
  sqcRYGate(q, 1.4060744267195329, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.012893397586213773, 4);
  sqcRYGate(q, -0.00019550467755419557, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.1076432837050265, 5);
  sqcRYGate(q, 1.392552298268645, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6445387370879048, 5);
  sqcRYGate(q, 0.7618576846088958, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6247469495234204, 6);
  sqcRYGate(q, -2.8586151272483384, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 3.1410623475083845, 6);
  sqcRYGate(q, 0.002010335709828567, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -1.402408257565349, 7);
  sqcRYGate(q, 3.116769623964385, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.0088242330404, 7);
  sqcRYGate(q, 0.40763050683226965, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.2338954557788377, 8);
  sqcRYGate(q, -1.3397287005041227, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -3.138438702047942, 8);
  sqcRYGate(q, -3.1409117779440363, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -2.8490137137565923, 9);
  sqcRYGate(q, -0.09893341188881168, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.9954028808766684, 9);
  sqcRYGate(q, 0.4240826120417926, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.6587468316385214, 10);
  sqcRYGate(q, -2.837400427409589, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -0.0089129470086369, 10);
  sqcRYGate(q, -0.07777439204077378, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, 2.0327042274832086, 11);
  sqcRYGate(q, 2.7669306412675625, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.9501946022436667, 11);
  sqcRYGate(q, -0.4282393480939799, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.159359777076619, 12);
  sqcRYGate(q, -0.509175894309168, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -3.030231028828266, 12);
  sqcRYGate(q, 0.05223554999450907, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -0.6218339731171713, 13);
  sqcRYGate(q, 2.0877869513323324, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.8294262669107715, 13);
  sqcRYGate(q, -0.41662743685746767, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.3332658937880195, 0);
  sqcRYGate(q, -3.091551961803343, 1);
  sqcRYGate(q, 3.1251256676772385, 2);
  sqcRYGate(q, 0.018866937442324705, 3);
  sqcRYGate(q, -1.0497060741296205, 4);
  sqcRYGate(q, 3.1047027388300297, 5);
  sqcRYGate(q, 0.3305787338737822, 6);
  sqcRYGate(q, -0.013290255207513639, 7);
  sqcRYGate(q, 2.3577086178136972, 8);
  sqcRYGate(q, -3.140784596361258, 9);
  sqcRYGate(q, -0.020666951159622922, 10);
  sqcRYGate(q, 7.11886842559295e-05, 11);
  sqcRYGate(q, -3.081008444345056, 12);
  sqcRYGate(q, -0.0543825572731282, 13);
  sqcRYGate(q, -1.738588883021853, 14);
  sqcRYGate(q, 1.0012659213101223, 15);

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
