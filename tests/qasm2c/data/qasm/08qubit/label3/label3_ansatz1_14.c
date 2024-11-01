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

  sqcRYGate(q, -1.4778973363770627, 0);
  sqcRZGate(q, -0.9087275686468927, 0);
  sqcRYGate(q, 1.6040745385788437, 1);
  sqcRZGate(q, 1.2777812229025933, 1);
  sqcRYGate(q, 0.017509498989612737, 2);
  sqcRZGate(q, 2.949527307769165, 2);
  sqcRYGate(q, 2.9865037063243127, 3);
  sqcRZGate(q, 2.856534725474206, 3);
  sqcRYGate(q, -2.958129932865205, 4);
  sqcRZGate(q, -2.5666375054917276, 4);
  sqcRYGate(q, 1.5331365012093636, 5);
  sqcRZGate(q, 3.0145780621655085, 5);
  sqcRYGate(q, 2.848838752906648, 6);
  sqcRZGate(q, -2.8803420255061547, 6);
  sqcRYGate(q, 2.1954803077818266, 7);
  sqcRZGate(q, -2.997203602838545, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.3087729643001198, 0);
  sqcRZGate(q, -2.023768197627832, 0);
  sqcRYGate(q, -0.8372972676010386, 1);
  sqcRZGate(q, 0.011602518329527252, 1);
  sqcRYGate(q, 1.5713929667756643, 2);
  sqcRZGate(q, -2.61289279454783, 2);
  sqcRYGate(q, 3.039350616810123, 3);
  sqcRZGate(q, -0.1769941513986808, 3);
  sqcRYGate(q, -1.440743530768498, 4);
  sqcRZGate(q, -0.0064688226704232585, 4);
  sqcRYGate(q, -1.5782606030066777, 5);
  sqcRZGate(q, 2.827216807078228, 5);
  sqcRYGate(q, 1.407119436365576, 6);
  sqcRZGate(q, -2.908691737510621, 6);
  sqcRYGate(q, 1.234749825546844, 7);
  sqcRZGate(q, 1.616563307393174, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.42255132126047457, 0);
  sqcRZGate(q, 0.09403525807156377, 0);
  sqcRYGate(q, -0.04222285420517214, 1);
  sqcRZGate(q, -2.5098273010971095, 1);
  sqcRYGate(q, 1.3668556194461745, 2);
  sqcRZGate(q, -0.6617373351542861, 2);
  sqcRYGate(q, 1.5701913979945328, 3);
  sqcRZGate(q, 3.1132590938812714, 3);
  sqcRYGate(q, 1.5694249288405184, 4);
  sqcRZGate(q, 1.3632156281957082, 4);
  sqcRYGate(q, 2.1341890082289554, 5);
  sqcRZGate(q, 3.0828887343307643, 5);
  sqcRYGate(q, 3.0516151561517098, 6);
  sqcRZGate(q, 3.1311487754333154, 6);
  sqcRYGate(q, 0.8471536222541882, 7);
  sqcRZGate(q, -0.01434838231717595, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.27113913312952764, 0);
  sqcRZGate(q, -2.3087327191728955, 0);
  sqcRYGate(q, 0.01045365513872021, 1);
  sqcRZGate(q, -0.9653487478536302, 1);
  sqcRYGate(q, 0.4974463847051437, 2);
  sqcRZGate(q, -0.8280278089621582, 2);
  sqcRYGate(q, -1.7221071616942831, 3);
  sqcRZGate(q, -0.6282600571162852, 3);
  sqcRYGate(q, 3.1338477546064207, 4);
  sqcRZGate(q, 3.0554614032555114, 4);
  sqcRYGate(q, 2.56678401271918, 5);
  sqcRZGate(q, 0.334179766117841, 5);
  sqcRYGate(q, 3.03090424965752, 6);
  sqcRZGate(q, 0.2645933633123959, 6);
  sqcRYGate(q, 0.1224072989329276, 7);
  sqcRZGate(q, -2.2095922008664814, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.5089186201406655, 0);
  sqcRZGate(q, -2.334809549496203, 0);
  sqcRYGate(q, -3.011680898784662, 1);
  sqcRZGate(q, -0.5079478097697999, 1);
  sqcRYGate(q, 2.761157980681211, 2);
  sqcRZGate(q, 2.2539764300402645, 2);
  sqcRYGate(q, -3.1404976152114883, 3);
  sqcRZGate(q, 0.3857678603138355, 3);
  sqcRYGate(q, -0.003031962341880544, 4);
  sqcRZGate(q, -1.7095907033444944, 4);
  sqcRYGate(q, 0.6487608364510544, 5);
  sqcRZGate(q, -0.8310766530105242, 5);
  sqcRYGate(q, -0.05150401156866756, 6);
  sqcRZGate(q, 2.607960820171405, 6);
  sqcRYGate(q, 2.8744154342032027, 7);
  sqcRZGate(q, 1.1154509398191932, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.8363496321550037, 0);
  sqcRZGate(q, 0.7107194298938514, 0);
  sqcRYGate(q, -3.1178405064438928, 1);
  sqcRZGate(q, -0.4774560203515322, 1);
  sqcRYGate(q, 0.5997102036302991, 2);
  sqcRZGate(q, -1.0526096573173414, 2);
  sqcRYGate(q, -1.182638492586463, 3);
  sqcRZGate(q, -1.0243664013839648, 3);
  sqcRYGate(q, 1.5712182107172765, 4);
  sqcRZGate(q, 0.03776355259854244, 4);
  sqcRYGate(q, 0.5184702503241095, 5);
  sqcRZGate(q, -1.112109768783708, 5);
  sqcRYGate(q, -1.4417295741381357, 6);
  sqcRZGate(q, 0.09324736073261607, 6);
  sqcRYGate(q, -1.5842831107645716, 7);
  sqcRZGate(q, 2.5514652985440898, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.012322463724074126, 0);
  sqcRZGate(q, -2.970524838543827, 0);
  sqcRYGate(q, 1.2485096149403356, 1);
  sqcRZGate(q, -1.982009302994908, 1);
  sqcRYGate(q, 2.760532123949687, 2);
  sqcRZGate(q, 2.9439491598550753, 2);
  sqcRYGate(q, 0.8229613890191141, 3);
  sqcRZGate(q, -1.3181798133549492, 3);
  sqcRYGate(q, -0.2592198821795879, 4);
  sqcRZGate(q, 1.708053543371946, 4);
  sqcRYGate(q, 1.571082037957523, 5);
  sqcRZGate(q, -1.5933939557249657, 5);
  sqcRYGate(q, 3.099301513197653, 6);
  sqcRZGate(q, -1.2063097400908467, 6);
  sqcRYGate(q, -1.556082324485705, 7);
  sqcRZGate(q, -2.251025229115842, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4744368062850282, 0);
  sqcRZGate(q, -0.20659445849372668, 0);
  sqcRYGate(q, -0.006945287977948134, 1);
  sqcRZGate(q, -1.639092392169946, 1);
  sqcRYGate(q, 3.1249580286620713, 2);
  sqcRZGate(q, 2.582905559903127, 2);
  sqcRYGate(q, 2.387796770296067, 3);
  sqcRZGate(q, 0.04192364337033894, 3);
  sqcRYGate(q, -1.6332295357818543, 4);
  sqcRZGate(q, 2.9393315605486325, 4);
  sqcRYGate(q, -1.374293273418153, 5);
  sqcRZGate(q, -2.991899188601014, 5);
  sqcRYGate(q, -1.5522058106563714, 6);
  sqcRZGate(q, -1.5773997125196484, 6);
  sqcRYGate(q, -3.1346545940408754, 7);
  sqcRZGate(q, 0.3790483625410541, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.013487720162696172, 0);
  sqcRZGate(q, -1.5220453008922599, 0);
  sqcRYGate(q, -0.18051295882652862, 1);
  sqcRZGate(q, -2.618282194063526, 1);
  sqcRYGate(q, 1.523585984679486, 2);
  sqcRZGate(q, -0.3962855499213422, 2);
  sqcRYGate(q, -1.9022435753432172, 3);
  sqcRZGate(q, -2.600076165087156, 3);
  sqcRYGate(q, -0.053541137252293744, 4);
  sqcRZGate(q, 0.5089521128958463, 4);
  sqcRYGate(q, 6.064770243519036e-05, 5);
  sqcRZGate(q, 0.13896045389750714, 5);
  sqcRYGate(q, -1.3833028953006972, 6);
  sqcRZGate(q, -3.137776168746341, 6);
  sqcRYGate(q, 9.914809197120179e-05, 7);
  sqcRZGate(q, 2.085513993482499, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.250904514759938, 0);
  sqcRZGate(q, -2.1436076821563548, 0);
  sqcRYGate(q, 1.6822566787645163, 1);
  sqcRZGate(q, 1.5138992631301647, 1);
  sqcRYGate(q, -3.0572213265021113, 2);
  sqcRZGate(q, 2.18099668759724, 2);
  sqcRYGate(q, 2.8285356911126014, 3);
  sqcRZGate(q, -0.8520965423642076, 3);
  sqcRYGate(q, 0.2728896973526152, 4);
  sqcRZGate(q, -0.29759296535511126, 4);
  sqcRYGate(q, 1.6626761983171532, 5);
  sqcRZGate(q, -1.476758488815188, 5);
  sqcRYGate(q, 1.869726077021633, 6);
  sqcRZGate(q, 2.6535702367379512, 6);
  sqcRYGate(q, 0.13093881041998578, 7);
  sqcRZGate(q, 3.1252527612131424, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.000576195544557464, 0);
  sqcRZGate(q, -0.9999224691963565, 0);
  sqcRYGate(q, 0.5961091311470925, 1);
  sqcRZGate(q, 1.6379040511074612, 1);
  sqcRYGate(q, -1.6978632287802842, 2);
  sqcRZGate(q, -1.3024754029928616, 2);
  sqcRYGate(q, 1.1584853190531064, 3);
  sqcRZGate(q, -0.3987001817373989, 3);
  sqcRYGate(q, -1.6475935874075385, 4);
  sqcRZGate(q, 2.0130785332599546, 4);
  sqcRYGate(q, -2.8220403040435555, 5);
  sqcRZGate(q, -2.8814786546052398, 5);
  sqcRYGate(q, 1.5208688738756173, 6);
  sqcRZGate(q, -0.535848441408838, 6);
  sqcRYGate(q, -1.2127904026071077, 7);
  sqcRZGate(q, 3.1099535211733236, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.6193050639955227, 0);
  sqcRZGate(q, 1.1697564685343025, 0);
  sqcRYGate(q, -0.7941111329074948, 1);
  sqcRZGate(q, -1.5262726595134106, 1);
  sqcRYGate(q, 0.30764747845148666, 2);
  sqcRZGate(q, 2.1832219230351892, 2);
  sqcRYGate(q, 2.540423654085591, 3);
  sqcRZGate(q, 2.028495340851494, 3);
  sqcRYGate(q, 0.08347414045662394, 4);
  sqcRZGate(q, 0.68221642396486, 4);
  sqcRYGate(q, -0.18980810520954694, 5);
  sqcRZGate(q, -0.3796732449246322, 5);
  sqcRYGate(q, -3.1104590272727104, 6);
  sqcRZGate(q, 0.4163775986439833, 6);
  sqcRYGate(q, 1.1621872346434863, 7);
  sqcRZGate(q, 3.119608296873099, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.004087821423664373, 0);
  sqcRZGate(q, 0.07001285331944873, 0);
  sqcRYGate(q, 1.83537055198689, 1);
  sqcRZGate(q, 2.049898388823924, 1);
  sqcRYGate(q, -0.39624115150634154, 2);
  sqcRZGate(q, -2.416040030228109, 2);
  sqcRYGate(q, -0.005403506958702352, 3);
  sqcRZGate(q, 1.065892496933579, 3);
  sqcRYGate(q, 0.01366741052657705, 4);
  sqcRZGate(q, -2.5595564897718064, 4);
  sqcRYGate(q, -0.8908086593055963, 5);
  sqcRZGate(q, 1.5502823127082979, 5);
  sqcRYGate(q, -1.7214038827237503, 6);
  sqcRZGate(q, -0.28086154328864055, 6);
  sqcRYGate(q, 0.321662177653962, 7);
  sqcRZGate(q, -2.953013272047139, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.5320021883482164, 0);
  sqcRZGate(q, -1.3662350806442118, 0);
  sqcRYGate(q, -3.131793571759624, 1);
  sqcRZGate(q, -1.269673675429563, 1);
  sqcRYGate(q, 1.6786375880100186, 2);
  sqcRZGate(q, -0.0029298295664910157, 2);
  sqcRYGate(q, 1.002200946794222, 3);
  sqcRZGate(q, 2.734427857468471, 3);
  sqcRYGate(q, -0.7722820087514446, 4);
  sqcRZGate(q, 3.0803507988482437, 4);
  sqcRYGate(q, -0.05115161836342974, 5);
  sqcRZGate(q, -1.3603445513717383, 5);
  sqcRYGate(q, -3.0677485031698977, 6);
  sqcRZGate(q, -1.83764186207505, 6);
  sqcRYGate(q, 1.811862598729926, 7);
  sqcRZGate(q, -0.007984005199708604, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.002780642808440703, 0);
  sqcRZGate(q, -2.1338816947117443, 0);
  sqcRYGate(q, -2.3762228039073365, 1);
  sqcRZGate(q, 0.9957104240740889, 1);
  sqcRYGate(q, 1.7387787370225143, 2);
  sqcRZGate(q, 2.089151523225059, 2);
  sqcRYGate(q, -3.1261071296547613, 3);
  sqcRZGate(q, 1.1337506207247665, 3);
  sqcRYGate(q, 1.5786527754845363, 4);
  sqcRZGate(q, -1.5871316256347292, 4);
  sqcRYGate(q, 1.0409103050048163, 5);
  sqcRZGate(q, -1.6864547985882599, 5);
  sqcRYGate(q, 1.8814710364715959, 6);
  sqcRZGate(q, 1.2807689171196979, 6);
  sqcRYGate(q, 0.038190240468371606, 7);
  sqcRZGate(q, -3.064753297603737, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.233382798588236, 0);
  sqcRZGate(q, -0.05838598222779175, 0);
  sqcRYGate(q, -0.10493383173845229, 1);
  sqcRZGate(q, 2.164683843171716, 1);
  sqcRYGate(q, -2.734908164860292, 2);
  sqcRZGate(q, -2.0050714957130698, 2);
  sqcRYGate(q, 1.2583770510369092, 3);
  sqcRZGate(q, -1.942653451169268, 3);
  sqcRYGate(q, 3.074978650386444, 4);
  sqcRZGate(q, 1.6471638883609705, 4);
  sqcRYGate(q, 1.5713596144685904, 5);
  sqcRZGate(q, -0.02131175465068145, 5);
  sqcRYGate(q, -1.6216037944658592, 6);
  sqcRZGate(q, -1.713790730596653, 6);
  sqcRYGate(q, -1.9099508746180496, 7);
  sqcRZGate(q, 3.0476970034535924, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.1382982160089337, 0);
  sqcRZGate(q, 3.0983240294401866, 0);
  sqcRYGate(q, 2.4232588717641455, 1);
  sqcRZGate(q, 0.03208261606079442, 1);
  sqcRYGate(q, -0.0005011269089968399, 2);
  sqcRZGate(q, 0.2686674864403599, 2);
  sqcRYGate(q, 0.015520131555760486, 3);
  sqcRZGate(q, -3.1378557615923324, 3);
  sqcRYGate(q, -3.1311531576107003, 4);
  sqcRZGate(q, 0.13648237602627503, 4);
  sqcRYGate(q, -3.105195534932495, 5);
  sqcRZGate(q, -2.9184369925644207, 5);
  sqcRYGate(q, 1.5730176483161715, 6);
  sqcRZGate(q, -1.64234926677992, 6);
  sqcRYGate(q, 0.0002248211147005724, 7);
  sqcRZGate(q, -1.8253656906353004, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.70869059037685, 0);
  sqcRZGate(q, -1.7412252440776044, 0);
  sqcRYGate(q, -0.24370389917448657, 1);
  sqcRZGate(q, 1.409316735112234, 1);
  sqcRYGate(q, 1.393041034223409, 2);
  sqcRZGate(q, -0.22916139892587303, 2);
  sqcRYGate(q, -3.062959980172617, 3);
  sqcRZGate(q, -0.5311993063350928, 3);
  sqcRYGate(q, 1.0860718289554807, 4);
  sqcRZGate(q, 1.4581865020426115, 4);
  sqcRYGate(q, -2.826213812166094, 5);
  sqcRZGate(q, -1.5052796704720608, 5);
  sqcRYGate(q, -0.07084152851897427, 6);
  sqcRZGate(q, 3.0612962093131157, 6);
  sqcRYGate(q, 1.4986860921294822, 7);
  sqcRZGate(q, 2.9723043987377706, 7);

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
