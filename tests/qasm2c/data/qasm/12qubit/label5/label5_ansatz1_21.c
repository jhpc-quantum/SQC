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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -0.8292049366754703, 0);
  sqcRZGate(q, 2.8948473262038488, 0);
  sqcRYGate(q, 2.626987020626658, 1);
  sqcRZGate(q, -1.118897925376495, 1);
  sqcRYGate(q, 3.1332821823655164, 2);
  sqcRZGate(q, -2.5196900677587646, 2);
  sqcRYGate(q, 3.021419225645846, 3);
  sqcRZGate(q, 1.0819123392595758, 3);
  sqcRYGate(q, 0.12921237919420744, 4);
  sqcRZGate(q, 2.7549111778069437, 4);
  sqcRYGate(q, -1.8148483496177226, 5);
  sqcRZGate(q, -1.4641996925858949, 5);
  sqcRYGate(q, 1.5683496974084525, 6);
  sqcRZGate(q, -1.5306868614980464, 6);
  sqcRYGate(q, 0.55054580863504, 7);
  sqcRZGate(q, -1.1754514862324148, 7);
  sqcRYGate(q, -2.6654974266994644, 8);
  sqcRZGate(q, -1.3249354280511196, 8);
  sqcRYGate(q, 1.3335392714528265, 9);
  sqcRZGate(q, 1.1461934770378468, 9);
  sqcRYGate(q, 1.7558424583336638, 10);
  sqcRZGate(q, -0.9407763519744972, 10);
  sqcRYGate(q, 0.837471592750579, 11);
  sqcRZGate(q, -0.10799144277470596, 11);
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
  sqcRYGate(q, -0.36496501000407905, 0);
  sqcRZGate(q, -1.5878677657173659, 0);
  sqcRYGate(q, 2.4691339837165542, 1);
  sqcRZGate(q, -0.015964240586605175, 1);
  sqcRYGate(q, 3.086125061980405, 2);
  sqcRZGate(q, 0.683101041807614, 2);
  sqcRYGate(q, -2.8672208991219486, 3);
  sqcRZGate(q, 1.9908300513009043, 3);
  sqcRYGate(q, -1.637278502384965, 4);
  sqcRZGate(q, 1.61146357187544, 4);
  sqcRYGate(q, -0.04337617172371465, 5);
  sqcRZGate(q, 0.970070957522301, 5);
  sqcRYGate(q, 1.4106956872390473, 6);
  sqcRZGate(q, 0.8534589667964625, 6);
  sqcRYGate(q, 0.013591910030756833, 7);
  sqcRZGate(q, 1.27482783452827, 7);
  sqcRYGate(q, 0.9921481223709411, 8);
  sqcRZGate(q, -2.4308268699310305, 8);
  sqcRYGate(q, -2.2457629284404264, 9);
  sqcRZGate(q, 2.677561185886706, 9);
  sqcRYGate(q, -2.348405591863921, 10);
  sqcRZGate(q, -2.9170443150083782, 10);
  sqcRYGate(q, -0.4669061122199647, 11);
  sqcRZGate(q, 2.2043336700621596, 11);
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
  sqcRYGate(q, -0.2599179535264979, 0);
  sqcRZGate(q, -2.0825589569712504, 0);
  sqcRYGate(q, 0.2501730886837086, 1);
  sqcRZGate(q, 1.6139112010925503, 1);
  sqcRYGate(q, 3.140469812368371, 2);
  sqcRZGate(q, 1.5973399811327278, 2);
  sqcRYGate(q, 3.0385989204538384, 3);
  sqcRZGate(q, 0.7489458856405902, 3);
  sqcRYGate(q, -1.6066577714646888, 4);
  sqcRZGate(q, -2.225077044401985, 4);
  sqcRYGate(q, -1.5761726496601414, 5);
  sqcRZGate(q, 2.500504260488178, 5);
  sqcRYGate(q, 2.406469900895346, 6);
  sqcRZGate(q, 0.3035383552523632, 6);
  sqcRYGate(q, -2.862103186712657, 7);
  sqcRZGate(q, -2.8877740663765086, 7);
  sqcRYGate(q, -2.3744784308163633, 8);
  sqcRZGate(q, -0.2636262167593726, 8);
  sqcRYGate(q, -0.583325133368484, 9);
  sqcRZGate(q, -0.9649671391985867, 9);
  sqcRYGate(q, -2.8203595644880712, 10);
  sqcRZGate(q, -2.084559447242211, 10);
  sqcRYGate(q, -2.1929238146995838, 11);
  sqcRZGate(q, -1.7817335519119308, 11);
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
  sqcRYGate(q, -0.2937483476070533, 0);
  sqcRZGate(q, 1.1419138047054078, 0);
  sqcRYGate(q, 3.08137563538707, 1);
  sqcRZGate(q, 2.775762557560822, 1);
  sqcRYGate(q, -0.023398254266196603, 2);
  sqcRZGate(q, 0.1344389625516609, 2);
  sqcRYGate(q, -1.4985210599503158, 3);
  sqcRZGate(q, 0.5359797066977148, 3);
  sqcRYGate(q, -0.8571878840484439, 4);
  sqcRZGate(q, -1.062555942379313, 4);
  sqcRYGate(q, 3.1335424797344626, 5);
  sqcRZGate(q, 3.133519319936823, 5);
  sqcRYGate(q, -0.05265320973620825, 6);
  sqcRZGate(q, 1.9705609699051667, 6);
  sqcRYGate(q, -0.0018102729701112708, 7);
  sqcRZGate(q, -1.5201238345021766, 7);
  sqcRYGate(q, 0.01358461149202706, 8);
  sqcRZGate(q, -2.993707246754991, 8);
  sqcRYGate(q, 1.60380601126507, 9);
  sqcRZGate(q, 1.1571912953536119, 9);
  sqcRYGate(q, -1.214447831092755, 10);
  sqcRZGate(q, -0.6369404449883307, 10);
  sqcRYGate(q, 0.7655513175839976, 11);
  sqcRZGate(q, -0.4461827050082077, 11);
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
  sqcRYGate(q, 3.0733191431076756, 0);
  sqcRZGate(q, -2.899051301656427, 0);
  sqcRYGate(q, 3.1263267542537676, 1);
  sqcRZGate(q, 1.0762902758102904, 1);
  sqcRYGate(q, -0.0030372238727824907, 2);
  sqcRZGate(q, 1.8363677872702677, 2);
  sqcRYGate(q, 0.15386979590413322, 3);
  sqcRZGate(q, 2.5544380377644886, 3);
  sqcRYGate(q, 2.596865210179813, 4);
  sqcRZGate(q, -3.1103501920638035, 4);
  sqcRYGate(q, 0.1570652737264222, 5);
  sqcRZGate(q, 0.006131124230496, 5);
  sqcRYGate(q, -1.0363986255102884, 6);
  sqcRZGate(q, -0.2819505735132392, 6);
  sqcRYGate(q, 2.0412812859949088, 7);
  sqcRZGate(q, -2.5267713779040544, 7);
  sqcRYGate(q, 0.9303880787907923, 8);
  sqcRZGate(q, 1.1242472031607722, 8);
  sqcRYGate(q, -3.0096691341006934, 9);
  sqcRZGate(q, 0.22734378003472866, 9);
  sqcRYGate(q, 2.279451303880914, 10);
  sqcRZGate(q, -1.8255152650979785, 10);
  sqcRYGate(q, -0.8584248274801656, 11);
  sqcRZGate(q, -1.0248640031153489, 11);
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
  sqcRYGate(q, -2.315345321337716, 0);
  sqcRZGate(q, -0.4913683284765962, 0);
  sqcRYGate(q, 3.048544596585308, 1);
  sqcRZGate(q, -1.30479543709402, 1);
  sqcRYGate(q, 3.0960783291168066, 2);
  sqcRZGate(q, -1.193702379457875, 2);
  sqcRYGate(q, -1.278493439506872, 3);
  sqcRZGate(q, 1.4147717194468985, 3);
  sqcRYGate(q, 1.089705179160805, 4);
  sqcRZGate(q, -1.874273022931428, 4);
  sqcRYGate(q, -0.07936020851047942, 5);
  sqcRZGate(q, 3.04773215774242, 5);
  sqcRYGate(q, -3.1120109759009322, 6);
  sqcRZGate(q, -1.7906615171194735, 6);
  sqcRYGate(q, 0.36707501078362625, 7);
  sqcRZGate(q, 1.0570306028329428, 7);
  sqcRYGate(q, -1.825398866267375, 8);
  sqcRZGate(q, 2.8198081613556742, 8);
  sqcRYGate(q, -1.1359772499365177, 9);
  sqcRZGate(q, 0.15198021074665116, 9);
  sqcRYGate(q, -3.097132930176274, 10);
  sqcRZGate(q, 1.9136672982375122, 10);
  sqcRYGate(q, -1.8362182331757682, 11);
  sqcRZGate(q, -0.27357927770043305, 11);
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
  sqcRYGate(q, -1.4800941214835899, 0);
  sqcRZGate(q, -1.677525854502809, 0);
  sqcRYGate(q, 1.3526426870568873, 1);
  sqcRZGate(q, -0.9132021366168761, 1);
  sqcRYGate(q, 0.011182659451175136, 2);
  sqcRZGate(q, 2.249539023139874, 2);
  sqcRYGate(q, -1.0223964304627742, 3);
  sqcRZGate(q, 0.2032528027876719, 3);
  sqcRYGate(q, 1.7467281592467705, 4);
  sqcRZGate(q, 2.394976284354699, 4);
  sqcRYGate(q, 0.045779632041109686, 5);
  sqcRZGate(q, -2.2599123152649514, 5);
  sqcRYGate(q, -3.0887729479389003, 6);
  sqcRZGate(q, 0.14193121240062848, 6);
  sqcRYGate(q, -2.5803783388226327, 7);
  sqcRZGate(q, 2.06931004643969, 7);
  sqcRYGate(q, 1.976114749918474, 8);
  sqcRZGate(q, 2.472110141428816, 8);
  sqcRYGate(q, -3.019903513443519, 9);
  sqcRZGate(q, 0.7508258012667648, 9);
  sqcRYGate(q, 1.481571389601429, 10);
  sqcRZGate(q, 0.962251352433845, 10);
  sqcRYGate(q, 0.6533288075448945, 11);
  sqcRZGate(q, 0.3051768890587706, 11);
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
  sqcRYGate(q, -2.035964981256629, 0);
  sqcRZGate(q, 0.6294301417153898, 0);
  sqcRYGate(q, 2.9025280882852673, 1);
  sqcRZGate(q, 1.9092720225626627, 1);
  sqcRYGate(q, -0.0028832220791770373, 2);
  sqcRZGate(q, -3.0319819420112473, 2);
  sqcRYGate(q, 0.5801804434589045, 3);
  sqcRZGate(q, 1.2581976823302066, 3);
  sqcRYGate(q, -3.1356485408959553, 4);
  sqcRZGate(q, 2.1219479855639256, 4);
  sqcRYGate(q, 3.1157003743869143, 5);
  sqcRZGate(q, 2.8434083516049418, 5);
  sqcRYGate(q, 0.011895503058481971, 6);
  sqcRZGate(q, 2.9419503861724814, 6);
  sqcRYGate(q, 0.7115541536186205, 7);
  sqcRZGate(q, -1.6006767112626599, 7);
  sqcRYGate(q, 1.8505192390053278, 8);
  sqcRZGate(q, 2.140376872994037, 8);
  sqcRYGate(q, 2.513422777561044, 9);
  sqcRZGate(q, 0.9274415989949817, 9);
  sqcRYGate(q, 0.7337459114149452, 10);
  sqcRZGate(q, 1.016884290038952, 10);
  sqcRYGate(q, -2.1648927949553, 11);
  sqcRZGate(q, -2.048142745268578, 11);
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
  sqcRYGate(q, -1.930067186104627, 0);
  sqcRZGate(q, 2.0361489515079567, 0);
  sqcRYGate(q, -2.0582937155185768, 1);
  sqcRZGate(q, 2.3433217727234235, 1);
  sqcRYGate(q, 2.416178995431464, 2);
  sqcRZGate(q, 3.032336310955091, 2);
  sqcRYGate(q, -1.8449013022043514, 3);
  sqcRZGate(q, -2.132827104278377, 3);
  sqcRYGate(q, -0.056872728649581816, 4);
  sqcRZGate(q, 1.1152517077184019, 4);
  sqcRYGate(q, 3.0886221910541605, 5);
  sqcRZGate(q, -1.229360810582509, 5);
  sqcRYGate(q, 3.087692059346136, 6);
  sqcRZGate(q, -2.4419036600892703, 6);
  sqcRYGate(q, -2.6548058651598123, 7);
  sqcRZGate(q, -1.4851266514735806, 7);
  sqcRYGate(q, 1.8443577907940973, 8);
  sqcRZGate(q, -2.727659309200179, 8);
  sqcRYGate(q, -2.809549282670143, 9);
  sqcRZGate(q, -1.4181402174960374, 9);
  sqcRYGate(q, 0.2793612809760502, 10);
  sqcRZGate(q, 0.7096956227694707, 10);
  sqcRYGate(q, -2.546337503884269, 11);
  sqcRZGate(q, 2.4002353477489757, 11);
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
  sqcRYGate(q, 0.44018204528723676, 0);
  sqcRZGate(q, -0.3670924481781004, 0);
  sqcRYGate(q, -0.07135249696579359, 1);
  sqcRZGate(q, -2.0111861945360623, 1);
  sqcRYGate(q, 1.599493942112593, 2);
  sqcRZGate(q, -0.8915523277058427, 2);
  sqcRYGate(q, -0.010248340560469915, 3);
  sqcRZGate(q, -2.021067594368396, 3);
  sqcRYGate(q, 0.014068350218531478, 4);
  sqcRZGate(q, 0.41886377053784773, 4);
  sqcRYGate(q, -0.2477681169054958, 5);
  sqcRZGate(q, -0.9697580072806316, 5);
  sqcRYGate(q, 3.128853972040804, 6);
  sqcRZGate(q, -0.31942517680912363, 6);
  sqcRYGate(q, 1.4185322236535622, 7);
  sqcRZGate(q, -1.664593905184832, 7);
  sqcRYGate(q, 1.28650364525397, 8);
  sqcRZGate(q, -1.8334039891462073, 8);
  sqcRYGate(q, -1.0916366928121415, 9);
  sqcRZGate(q, -2.0784155843637016, 9);
  sqcRYGate(q, -0.8498360949452671, 10);
  sqcRZGate(q, -0.9452990686592395, 10);
  sqcRYGate(q, -2.320337080015794, 11);
  sqcRZGate(q, 0.6584255429887635, 11);
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
  sqcRYGate(q, 1.6760667686345911, 0);
  sqcRZGate(q, -0.9105852418690593, 0);
  sqcRYGate(q, 3.136133527748237, 1);
  sqcRZGate(q, 2.9321872430750817, 1);
  sqcRYGate(q, -2.181006986705117, 2);
  sqcRZGate(q, -2.5363785408427915, 2);
  sqcRYGate(q, -0.1110760131661621, 3);
  sqcRZGate(q, -3.1013551414333214, 3);
  sqcRYGate(q, 1.6442458173888475, 4);
  sqcRZGate(q, -0.6628393436006927, 4);
  sqcRYGate(q, -2.8788062278015834, 5);
  sqcRZGate(q, 1.142484661251392, 5);
  sqcRYGate(q, 0.0014535343046313542, 6);
  sqcRZGate(q, 2.979714817312712, 6);
  sqcRYGate(q, -1.153068401654198, 7);
  sqcRZGate(q, -0.6578015810070899, 7);
  sqcRYGate(q, -0.7612874772719662, 8);
  sqcRZGate(q, -2.432802518927133, 8);
  sqcRYGate(q, 1.7860650300518883, 9);
  sqcRZGate(q, 1.7519221679014827, 9);
  sqcRYGate(q, -2.840103656530637, 10);
  sqcRZGate(q, 0.8333031114148733, 10);
  sqcRYGate(q, -1.0241308233195419, 11);
  sqcRZGate(q, 0.9916781721588582, 11);
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
  sqcRYGate(q, 2.1125671976092857, 0);
  sqcRZGate(q, -0.2639097545893749, 0);
  sqcRYGate(q, 3.0881472162726404, 1);
  sqcRZGate(q, 1.8764357227989905, 1);
  sqcRYGate(q, 3.0326892684036304, 2);
  sqcRZGate(q, 0.8443044490093775, 2);
  sqcRYGate(q, 1.5417337722974789, 3);
  sqcRZGate(q, 2.149303030308391, 3);
  sqcRYGate(q, -0.008700631981064263, 4);
  sqcRZGate(q, -0.45770733692362714, 4);
  sqcRYGate(q, -1.7770535182088116, 5);
  sqcRZGate(q, 0.07825606021598562, 5);
  sqcRYGate(q, 0.04514368921293168, 6);
  sqcRZGate(q, -3.066034355590022, 6);
  sqcRYGate(q, 0.3812659141637065, 7);
  sqcRZGate(q, 2.9817111235265883, 7);
  sqcRYGate(q, 1.708032177938607, 8);
  sqcRZGate(q, -1.5619577784242784, 8);
  sqcRYGate(q, 1.540524031590774, 9);
  sqcRZGate(q, -0.6675306153379265, 9);
  sqcRYGate(q, -1.1476436899445623, 10);
  sqcRZGate(q, -1.3113703143483195, 10);
  sqcRYGate(q, 3.0731192104308063, 11);
  sqcRZGate(q, 0.7531772831698608, 11);
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
  sqcRYGate(q, -1.8402809356751788, 0);
  sqcRZGate(q, -1.7733383284951953, 0);
  sqcRYGate(q, 0.7627750011601151, 1);
  sqcRZGate(q, -1.0314380829225949, 1);
  sqcRYGate(q, 0.8019884916929173, 2);
  sqcRZGate(q, 2.5919000232168337, 2);
  sqcRYGate(q, 2.949770792194014, 3);
  sqcRZGate(q, -2.660980315780904, 3);
  sqcRYGate(q, -3.0828697622273324, 4);
  sqcRZGate(q, 3.111681743349936, 4);
  sqcRYGate(q, 1.6359107085268705, 5);
  sqcRZGate(q, 1.758256511857747, 5);
  sqcRYGate(q, 0.019538713364982918, 6);
  sqcRZGate(q, -3.1053242555226133, 6);
  sqcRYGate(q, 1.3016240250092368, 7);
  sqcRZGate(q, -1.4584192668162066, 7);
  sqcRYGate(q, -1.3845221263978962, 8);
  sqcRZGate(q, 0.7536077320888256, 8);
  sqcRYGate(q, 3.1092266340226318, 9);
  sqcRZGate(q, -2.948676604345257, 9);
  sqcRYGate(q, 1.7885945172090594, 10);
  sqcRZGate(q, 2.342906064362256, 10);
  sqcRYGate(q, 0.018075435588449373, 11);
  sqcRZGate(q, -2.2746393093945674, 11);
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
  sqcRYGate(q, -1.6598805815818585, 0);
  sqcRZGate(q, 0.011372730961602961, 0);
  sqcRYGate(q, 3.1360936109340725, 1);
  sqcRZGate(q, -0.9819708952121682, 1);
  sqcRYGate(q, 3.1193120919925437, 2);
  sqcRZGate(q, 2.5624831250724887, 2);
  sqcRYGate(q, 2.3646970834547365, 3);
  sqcRZGate(q, -0.07817305942394004, 3);
  sqcRYGate(q, 0.6514850561160817, 4);
  sqcRZGate(q, -0.15884859627266565, 4);
  sqcRYGate(q, 0.29197494504831134, 5);
  sqcRZGate(q, 2.7748797621040553, 5);
  sqcRYGate(q, 1.5755995827797495, 6);
  sqcRZGate(q, 1.5771272109650323, 6);
  sqcRYGate(q, -1.658244753655591, 7);
  sqcRZGate(q, 1.625016833869819, 7);
  sqcRYGate(q, 1.637719479021043, 8);
  sqcRZGate(q, 2.029317623364138, 8);
  sqcRYGate(q, 2.6838046128828847, 9);
  sqcRZGate(q, -1.2541908023029453, 9);
  sqcRYGate(q, 0.6826351963478179, 10);
  sqcRZGate(q, 0.20480910517983728, 10);
  sqcRYGate(q, -2.863882196839703, 11);
  sqcRZGate(q, -3.016425450533519, 11);
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
  sqcRYGate(q, 3.101729440330481, 0);
  sqcRZGate(q, -1.12849790435181, 0);
  sqcRYGate(q, 2.674624228487597, 1);
  sqcRZGate(q, 1.4436806633971022, 1);
  sqcRYGate(q, -1.2097478415036675, 2);
  sqcRZGate(q, -1.8700497226772201, 2);
  sqcRYGate(q, 0.040043297125255936, 3);
  sqcRZGate(q, 3.0541836884913964, 3);
  sqcRYGate(q, 3.110123544864043, 4);
  sqcRZGate(q, 2.648609800431358, 4);
  sqcRYGate(q, 1.7159120668079448, 5);
  sqcRZGate(q, 0.009000276204461316, 5);
  sqcRYGate(q, 1.0712906796648085, 6);
  sqcRZGate(q, -0.8954330471418314, 6);
  sqcRYGate(q, -3.139046262046883, 7);
  sqcRZGate(q, -2.615084924031337, 7);
  sqcRYGate(q, 1.8607121869743137, 8);
  sqcRZGate(q, 0.4507041490002495, 8);
  sqcRYGate(q, 0.21672939195742644, 9);
  sqcRZGate(q, 3.0803821427049627, 9);
  sqcRYGate(q, 1.1893090108503293, 10);
  sqcRZGate(q, -2.8275205998182136, 10);
  sqcRYGate(q, 2.4801819615179705, 11);
  sqcRZGate(q, 1.8478171154354435, 11);
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
  sqcRYGate(q, -0.26467260341511145, 0);
  sqcRZGate(q, 1.3749110974855867, 0);
  sqcRYGate(q, 0.01843294978975953, 1);
  sqcRZGate(q, 2.545112372766107, 1);
  sqcRYGate(q, 1.5324791204737378, 2);
  sqcRZGate(q, 3.0677066454668234, 2);
  sqcRYGate(q, 2.2569043793728096, 3);
  sqcRZGate(q, 1.7237751886756554, 3);
  sqcRYGate(q, -0.0010151439744099378, 4);
  sqcRZGate(q, -1.2440720499963431, 4);
  sqcRYGate(q, 1.4114063910799315, 5);
  sqcRZGate(q, -2.9446217795482874, 5);
  sqcRYGate(q, -0.0012379512837714657, 6);
  sqcRZGate(q, 0.892383837151109, 6);
  sqcRYGate(q, 1.5820592854375581, 7);
  sqcRZGate(q, 1.5780874680860786, 7);
  sqcRYGate(q, 2.4738226762937674, 8);
  sqcRZGate(q, 0.7303358956866735, 8);
  sqcRYGate(q, 0.3395940984506428, 9);
  sqcRZGate(q, -1.7259454444787403, 9);
  sqcRYGate(q, -0.8766978341126729, 10);
  sqcRZGate(q, -1.9557896581964567, 10);
  sqcRYGate(q, -0.2027590556550205, 11);
  sqcRZGate(q, -1.1969885412973706, 11);
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
  sqcRYGate(q, 2.103487032508725, 0);
  sqcRZGate(q, -0.1077776732870591, 0);
  sqcRYGate(q, 1.375955607418153, 1);
  sqcRZGate(q, -2.3817860974560463, 1);
  sqcRYGate(q, -1.7364680832664812, 2);
  sqcRZGate(q, 2.269028089731413, 2);
  sqcRYGate(q, 0.0021807652114954786, 3);
  sqcRZGate(q, 1.370024201088635, 3);
  sqcRYGate(q, 1.5696287395072768, 4);
  sqcRZGate(q, 1.277849458808227, 4);
  sqcRYGate(q, -2.9882255544817884, 5);
  sqcRZGate(q, -2.8059768611259566, 5);
  sqcRYGate(q, 1.5619287463566396, 6);
  sqcRZGate(q, -2.713388743442762, 6);
  sqcRYGate(q, -3.1346938861728044, 7);
  sqcRZGate(q, -3.0880389037999287, 7);
  sqcRYGate(q, -3.1307729600012393, 8);
  sqcRZGate(q, -2.3350433556075587, 8);
  sqcRYGate(q, -0.10760660196455173, 9);
  sqcRZGate(q, -2.217078166694714, 9);
  sqcRYGate(q, 0.8012913693382436, 10);
  sqcRZGate(q, 2.612834627882212, 10);
  sqcRYGate(q, -2.601204124539181, 11);
  sqcRZGate(q, 2.8254815948229783, 11);
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
  sqcRYGate(q, -3.123591660122081, 0);
  sqcRZGate(q, 0.09844411909003714, 0);
  sqcRYGate(q, -0.028751926334274, 1);
  sqcRZGate(q, 2.365294418079047, 1);
  sqcRYGate(q, -3.1246504515812044, 2);
  sqcRZGate(q, -2.4589907986711648, 2);
  sqcRYGate(q, -2.52393226870492, 3);
  sqcRZGate(q, -0.00327803129333738, 3);
  sqcRYGate(q, 1.61907312477453, 4);
  sqcRZGate(q, 1.475060998017006, 4);
  sqcRYGate(q, -1.511893635221349, 5);
  sqcRZGate(q, -1.4944611042083427, 5);
  sqcRYGate(q, -0.277258569934134, 6);
  sqcRZGate(q, -2.6684836629944373, 6);
  sqcRYGate(q, 0.7608611421141935, 7);
  sqcRZGate(q, -0.5393681100839424, 7);
  sqcRYGate(q, -3.0652025243791505, 8);
  sqcRZGate(q, 1.3170700904924262, 8);
  sqcRYGate(q, 1.7146346626651205, 9);
  sqcRZGate(q, -2.837050144525607, 9);
  sqcRYGate(q, -2.4703995857249486, 10);
  sqcRZGate(q, -0.7693669518244574, 10);
  sqcRYGate(q, 1.669188808446788, 11);
  sqcRZGate(q, 0.28995036375165556, 11);
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
  sqcRYGate(q, -3.140971280954838, 0);
  sqcRZGate(q, -1.6026738448276607, 0);
  sqcRYGate(q, -1.3808996439482675, 1);
  sqcRZGate(q, -2.5156087025133727, 1);
  sqcRYGate(q, 1.554228621604486, 2);
  sqcRZGate(q, -3.135828941066582, 2);
  sqcRYGate(q, -3.115878762445598, 3);
  sqcRZGate(q, -1.7399600494260739, 3);
  sqcRYGate(q, 0.007643665119053954, 4);
  sqcRZGate(q, 0.08028809392412832, 4);
  sqcRYGate(q, -3.1400927858269054, 5);
  sqcRZGate(q, -0.2664332323855852, 5);
  sqcRYGate(q, 0.0008114485298058581, 6);
  sqcRZGate(q, -0.5214535371138084, 6);
  sqcRYGate(q, 3.136200243070258, 7);
  sqcRZGate(q, -0.9518457467569069, 7);
  sqcRYGate(q, -3.1214200244655617, 8);
  sqcRZGate(q, -0.7411914929496254, 8);
  sqcRYGate(q, 3.0339263854878715, 9);
  sqcRZGate(q, -2.0022671814074933, 9);
  sqcRYGate(q, 1.408911898178526, 10);
  sqcRZGate(q, 0.3200205942354994, 10);
  sqcRYGate(q, 0.48476845236085286, 11);
  sqcRZGate(q, -2.5188842104894764, 11);
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
  sqcRYGate(q, 1.6232026288272081, 0);
  sqcRZGate(q, -2.2390215164490543, 0);
  sqcRYGate(q, 1.584332677481562, 1);
  sqcRZGate(q, 1.8634605446875256, 1);
  sqcRYGate(q, -1.8385716150369307, 2);
  sqcRZGate(q, -0.27208989713467524, 2);
  sqcRYGate(q, -3.1411182916275706, 3);
  sqcRZGate(q, -1.7359676700606788, 3);
  sqcRYGate(q, -1.2773919774826128, 4);
  sqcRZGate(q, -1.520347956776292, 4);
  sqcRYGate(q, 2.989328222297335, 5);
  sqcRZGate(q, -2.849687153722467, 5);
  sqcRYGate(q, -0.3109246571383347, 6);
  sqcRZGate(q, -0.3735986119010054, 6);
  sqcRYGate(q, 0.8161382955375336, 7);
  sqcRZGate(q, 1.905498785164638, 7);
  sqcRYGate(q, -2.2598563608627042, 8);
  sqcRZGate(q, -0.6108533552407716, 8);
  sqcRYGate(q, -1.8598940322660342, 9);
  sqcRZGate(q, -1.3907038283283013, 9);
  sqcRYGate(q, 0.4908557973483916, 10);
  sqcRZGate(q, 0.940498375594015, 10);
  sqcRYGate(q, 2.536275768522104, 11);
  sqcRZGate(q, -1.9909764701812456, 11);
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
  sqcRYGate(q, -2.8631412176527116, 0);
  sqcRZGate(q, -3.1403919789660284, 0);
  sqcRYGate(q, 2.8286026706949854, 1);
  sqcRZGate(q, -1.0837469452342372, 1);
  sqcRYGate(q, -1.434529182550735, 2);
  sqcRZGate(q, -1.3412152063522536, 2);
  sqcRYGate(q, 2.297621957236508, 3);
  sqcRZGate(q, 0.0005996404653547196, 3);
  sqcRYGate(q, -1.5672539240345418, 4);
  sqcRZGate(q, -0.8719704487975195, 4);
  sqcRYGate(q, -3.141209453221639, 5);
  sqcRZGate(q, -0.9314709245102355, 5);
  sqcRYGate(q, 1.5769363832910561, 6);
  sqcRZGate(q, -0.0005329405888308812, 6);
  sqcRYGate(q, 1.562175761267389, 7);
  sqcRZGate(q, -3.1331449061475065, 7);
  sqcRYGate(q, 1.5799374249245517, 8);
  sqcRZGate(q, 0.0018161012507107446, 8);
  sqcRYGate(q, 2.3568011948145586, 9);
  sqcRZGate(q, 1.0953735541991607, 9);
  sqcRYGate(q, -0.9247485070874478, 10);
  sqcRZGate(q, -1.4675728778951294, 10);
  sqcRYGate(q, 0.4436340771668448, 11);
  sqcRZGate(q, -1.5543522015785864, 11);
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
  sqcRYGate(q, 1.3379296165907162, 0);
  sqcRZGate(q, -3.13381342956918, 0);
  sqcRYGate(q, -0.01672761370936016, 1);
  sqcRZGate(q, 2.947856468147658, 1);
  sqcRYGate(q, 3.140698890758622, 2);
  sqcRZGate(q, 1.808973486887406, 2);
  sqcRYGate(q, -2.366045934970228, 3);
  sqcRZGate(q, 3.1319773513008613, 3);
  sqcRYGate(q, 3.141191497068534, 4);
  sqcRZGate(q, 2.2761085720598198, 4);
  sqcRYGate(q, -1.5707106403395246, 5);
  sqcRZGate(q, -3.141533574602766, 5);
  sqcRYGate(q, -1.5717897435471526, 6);
  sqcRZGate(q, 0.9004359954116002, 6);
  sqcRYGate(q, -0.7475876394883598, 7);
  sqcRZGate(q, -1.6272720984793525, 7);
  sqcRYGate(q, 2.159293083229002, 8);
  sqcRZGate(q, -2.9792745761822204, 8);
  sqcRYGate(q, 3.136641106609599, 9);
  sqcRZGate(q, 1.5355316320939107, 9);
  sqcRYGate(q, 0.5487658388529476, 10);
  sqcRZGate(q, -1.0787333516095075, 10);
  sqcRYGate(q, -0.6557802490060264, 11);
  sqcRZGate(q, -1.654286219377171, 11);
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
  sqcRYGate(q, 1.2814376400078715, 0);
  sqcRZGate(q, 3.1067599714720275, 0);
  sqcRYGate(q, 1.4664317690662043, 1);
  sqcRZGate(q, 3.0712211324392085, 1);
  sqcRYGate(q, -1.6893178819540902, 2);
  sqcRZGate(q, 1.8170918841696544, 2);
  sqcRYGate(q, 0.08278814035202942, 3);
  sqcRZGate(q, 0.009798649246971713, 3);
  sqcRYGate(q, 1.4006040300087488, 4);
  sqcRZGate(q, -3.133999557224984, 4);
  sqcRYGate(q, 0.6116041955123385, 5);
  sqcRZGate(q, 0.1868243601205829, 5);
  sqcRYGate(q, -1.7589638485538337, 6);
  sqcRZGate(q, -0.016714651699730965, 6);
  sqcRYGate(q, 1.6645786861200724, 7);
  sqcRZGate(q, -2.6885608831910797, 7);
  sqcRYGate(q, 2.176255809629877, 8);
  sqcRZGate(q, -1.3876357506627945, 8);
  sqcRYGate(q, 3.1398782630317705, 9);
  sqcRZGate(q, -2.6734446305764, 9);
  sqcRYGate(q, -2.121520366298089, 10);
  sqcRZGate(q, -1.7735552547922566, 10);
  sqcRYGate(q, -1.684374058450474, 11);
  sqcRZGate(q, -1.7822988491649934, 11);
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
  sqcRYGate(q, 0.06815309183981462, 0);
  sqcRZGate(q, 1.404989828589903, 0);
  sqcRYGate(q, 1.5249204279158883, 1);
  sqcRZGate(q, 1.5707448881248618, 1);
  sqcRYGate(q, -0.00031494162891591273, 2);
  sqcRZGate(q, -0.24087529999676693, 2);
  sqcRYGate(q, -0.6228744679762336, 3);
  sqcRZGate(q, 1.5709623448255123, 3);
  sqcRYGate(q, 1.604458138934163, 4);
  sqcRZGate(q, 1.5709061129888529, 4);
  sqcRYGate(q, -0.0028857185306614018, 5);
  sqcRZGate(q, -1.7577472332259279, 5);
  sqcRYGate(q, 3.140219609032572, 6);
  sqcRZGate(q, -1.819562685465245, 6);
  sqcRYGate(q, 3.1391732151691683, 7);
  sqcRZGate(q, 0.991467549420439, 7);
  sqcRYGate(q, -0.003532324965019207, 8);
  sqcRZGate(q, -0.09103922248185813, 8);
  sqcRYGate(q, 3.1255104069408057, 9);
  sqcRZGate(q, -1.6117374850401713, 9);
  sqcRYGate(q, -1.4453383755869256, 10);
  sqcRZGate(q, 3.034719763156425, 10);
  sqcRYGate(q, 1.9103723705486295, 11);
  sqcRZGate(q, -2.5481499862892125, 11);
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
  sqcRYGate(q, 3.1383123748324526, 0);
  sqcRZGate(q, -1.1581702500031028, 0);
  sqcRYGate(q, -1.5713740255438902, 1);
  sqcRZGate(q, -0.5270238298521217, 1);
  sqcRYGate(q, -1.5712132036404125, 2);
  sqcRZGate(q, -0.9737563332118402, 2);
  sqcRYGate(q, -1.5696388180522922, 3);
  sqcRZGate(q, -0.6341125307244172, 3);
  sqcRYGate(q, -1.569373291817688, 4);
  sqcRZGate(q, 0.8076970810879347, 4);
  sqcRYGate(q, 1.570752315375523, 5);
  sqcRZGate(q, 2.479107556549542, 5);
  sqcRYGate(q, 0.6921688919890586, 6);
  sqcRZGate(q, 0.9060122398741915, 6);
  sqcRYGate(q, -0.11002343474922238, 7);
  sqcRZGate(q, -1.1230662645997942, 7);
  sqcRYGate(q, -1.4430615364160584, 8);
  sqcRZGate(q, -1.5760717096501455, 8);
  sqcRYGate(q, -1.5785107359604797, 9);
  sqcRZGate(q, -2.2261891603474693, 9);
  sqcRYGate(q, 1.7254660191471252, 10);
  sqcRZGate(q, -2.0113265146850203, 10);
  sqcRYGate(q, 2.940629203566417, 11);
  sqcRZGate(q, -1.600012522924332, 11);

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
