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

  sqcRYGate(q, -1.0934724885422358, 0);
  sqcRZGate(q, -2.425687689005737, 0);
  sqcRYGate(q, -1.4674161936269492, 1);
  sqcRZGate(q, 2.3922947181420295, 1);
  sqcRYGate(q, -0.5929131961988325, 2);
  sqcRZGate(q, -1.9915187310819609, 2);
  sqcRYGate(q, 1.5744288785669092, 3);
  sqcRZGate(q, -1.564790165895039, 3);
  sqcRYGate(q, -1.5712021486030505, 4);
  sqcRZGate(q, -1.4211527973503546, 4);
  sqcRYGate(q, 1.471696433174924, 5);
  sqcRZGate(q, -3.093035582382406, 5);
  sqcRYGate(q, -3.1407024738871168, 6);
  sqcRZGate(q, -2.9215953662774132, 6);
  sqcRYGate(q, -3.141478173789371, 7);
  sqcRZGate(q, -1.4996287307124923, 7);
  sqcRYGate(q, 0.03957997813861969, 8);
  sqcRZGate(q, 0.37722190588898086, 8);
  sqcRYGate(q, 0.05624749605264956, 9);
  sqcRZGate(q, -1.5797744966619218, 9);
  sqcRYGate(q, 1.7232420299958346, 10);
  sqcRZGate(q, 0.9164857965865697, 10);
  sqcRYGate(q, 2.000683669827676, 11);
  sqcRZGate(q, -2.4663334174122364, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.3843991825411464, 0);
  sqcRZGate(q, -1.618820708603039, 0);
  sqcRYGate(q, 0.004591275512230376, 1);
  sqcRZGate(q, -2.085266675045554, 1);
  sqcRYGate(q, -2.9034940148940587, 2);
  sqcRZGate(q, 2.0421113134859707, 2);
  sqcRYGate(q, -1.726170158147478, 3);
  sqcRZGate(q, -0.06361863870178522, 3);
  sqcRYGate(q, -3.035785009695784, 4);
  sqcRZGate(q, -2.9964608912566053, 4);
  sqcRYGate(q, -2.0433725160650678, 5);
  sqcRZGate(q, 2.346913267237619, 5);
  sqcRYGate(q, 0.3154122211493596, 6);
  sqcRZGate(q, -1.5994953916876609, 6);
  sqcRYGate(q, 3.141516744227585, 7);
  sqcRZGate(q, -0.6809342395180683, 7);
  sqcRYGate(q, -0.006174232784605165, 8);
  sqcRZGate(q, -2.65298885700844, 8);
  sqcRYGate(q, 3.128346952530935, 9);
  sqcRZGate(q, -1.3886330107087457, 9);
  sqcRYGate(q, -2.9846327776794954, 10);
  sqcRZGate(q, 1.8912695020397974, 10);
  sqcRYGate(q, 1.8793176984744757, 11);
  sqcRZGate(q, -2.0586122258255415, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 3.108220889704656, 0);
  sqcRZGate(q, 0.8458551364961256, 0);
  sqcRYGate(q, -3.119181956784781, 1);
  sqcRZGate(q, 1.7603290628458146, 1);
  sqcRYGate(q, -2.523037253356963, 2);
  sqcRZGate(q, -3.1028300345275066, 2);
  sqcRYGate(q, -3.127925319773959, 3);
  sqcRZGate(q, 3.0790091734460545, 3);
  sqcRYGate(q, 1.691049437452885, 4);
  sqcRZGate(q, 1.525277931503311, 4);
  sqcRYGate(q, -1.6125077085234905, 5);
  sqcRZGate(q, 2.070773787484981, 5);
  sqcRYGate(q, 3.1393521899513517, 6);
  sqcRZGate(q, 1.4136914022820402, 6);
  sqcRYGate(q, 3.135164764276377, 7);
  sqcRZGate(q, -2.427748300936087, 7);
  sqcRYGate(q, 3.1115932536054265, 8);
  sqcRZGate(q, 2.8283868364440305, 8);
  sqcRYGate(q, 0.034682742247238885, 9);
  sqcRZGate(q, 1.6616524657426925, 9);
  sqcRYGate(q, 2.554418713255513, 10);
  sqcRZGate(q, 0.8769649261667691, 10);
  sqcRYGate(q, -1.8831822771058913, 11);
  sqcRZGate(q, 1.213967352251612, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.964649164330341, 0);
  sqcRZGate(q, -1.4026926500325674, 0);
  sqcRYGate(q, -0.0070771824220861035, 1);
  sqcRZGate(q, -0.5502029957273383, 1);
  sqcRYGate(q, 2.3957148497553984, 2);
  sqcRZGate(q, 2.497947949696616, 2);
  sqcRYGate(q, 1.157462943115952, 3);
  sqcRZGate(q, 3.134162648419024, 3);
  sqcRYGate(q, 1.5469137931125596, 4);
  sqcRZGate(q, 2.53404007206109, 4);
  sqcRYGate(q, -1.263969429956937, 5);
  sqcRZGate(q, 2.191172481967332, 5);
  sqcRYGate(q, 0.20346367324421788, 6);
  sqcRZGate(q, -1.2974599595203438, 6);
  sqcRYGate(q, 0.0012440077201505196, 7);
  sqcRZGate(q, 2.3500010193055014, 7);
  sqcRYGate(q, 3.1391752184531567, 8);
  sqcRZGate(q, -3.0677616304774653, 8);
  sqcRYGate(q, 0.032739678244993166, 9);
  sqcRZGate(q, 1.7239256173105302, 9);
  sqcRYGate(q, 3.00815453808089, 10);
  sqcRZGate(q, 0.3115465267862384, 10);
  sqcRYGate(q, 0.8495429783786723, 11);
  sqcRZGate(q, -0.3080239625166755, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.4502248390828965, 0);
  sqcRZGate(q, -0.07444713974882335, 0);
  sqcRYGate(q, 1.3554391449706562, 1);
  sqcRZGate(q, -0.27653975341963744, 1);
  sqcRYGate(q, 3.1412489790976434, 2);
  sqcRZGate(q, -1.9238078043978561, 2);
  sqcRYGate(q, -0.30012740274727623, 3);
  sqcRZGate(q, 2.7608291311058832, 3);
  sqcRYGate(q, -3.134169995573374, 4);
  sqcRZGate(q, 1.368799984412072, 4);
  sqcRYGate(q, 1.576320850282987, 5);
  sqcRZGate(q, -3.1366295593027167, 5);
  sqcRYGate(q, -0.14200682921187624, 6);
  sqcRZGate(q, 1.8747324846316458, 6);
  sqcRYGate(q, -3.123867317377135, 7);
  sqcRZGate(q, 0.11461808391496446, 7);
  sqcRYGate(q, 3.1229464409716794, 8);
  sqcRZGate(q, -0.6569784480653649, 8);
  sqcRYGate(q, -0.1540260025688145, 9);
  sqcRZGate(q, 2.857249439512139, 9);
  sqcRYGate(q, 0.3111244191456066, 10);
  sqcRZGate(q, -1.5672711938384785, 10);
  sqcRYGate(q, -1.6047760318989106, 11);
  sqcRZGate(q, 0.23412574418750584, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.166486945342447, 0);
  sqcRZGate(q, 0.6479695140926871, 0);
  sqcRYGate(q, 3.12859783942806, 1);
  sqcRZGate(q, -2.6243099836267794, 1);
  sqcRYGate(q, 1.8830422549427122, 2);
  sqcRZGate(q, 0.9650248660522956, 2);
  sqcRYGate(q, 0.0026469245635896144, 3);
  sqcRZGate(q, 1.9549270260791212, 3);
  sqcRYGate(q, 1.408364795728697, 4);
  sqcRZGate(q, 2.3542983997257503, 4);
  sqcRYGate(q, 2.8417567276581375, 5);
  sqcRZGate(q, 0.010509109055204746, 5);
  sqcRYGate(q, -2.826820789724757, 6);
  sqcRZGate(q, -0.14299291298954128, 6);
  sqcRYGate(q, 3.141099284918257, 7);
  sqcRZGate(q, 2.273767907872978, 7);
  sqcRYGate(q, 1.6036428621767074e-05, 8);
  sqcRZGate(q, 1.9987229789266656, 8);
  sqcRYGate(q, 0.03059124763053033, 9);
  sqcRZGate(q, -2.4803883781955878, 9);
  sqcRYGate(q, 1.5931474440879276, 10);
  sqcRZGate(q, 2.358741712881884, 10);
  sqcRYGate(q, 3.0392468613283845, 11);
  sqcRZGate(q, -2.7887840507157367, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.575913788935125, 0);
  sqcRZGate(q, 1.284015468726593, 0);
  sqcRYGate(q, -0.6695634562689204, 1);
  sqcRZGate(q, 1.5222049354109157, 1);
  sqcRYGate(q, 0.002566733765109293, 2);
  sqcRZGate(q, -2.8433157845516743, 2);
  sqcRYGate(q, -1.5771026726505983, 3);
  sqcRZGate(q, 3.081987413282254, 3);
  sqcRYGate(q, 1.5555907636911774, 4);
  sqcRZGate(q, -1.4919194392167991, 4);
  sqcRYGate(q, 1.5215959887392572, 5);
  sqcRZGate(q, -0.3438974654001411, 5);
  sqcRYGate(q, 0.4012643376280152, 6);
  sqcRZGate(q, 1.7326253978288815, 6);
  sqcRYGate(q, -3.1309268802953767, 7);
  sqcRZGate(q, 1.9060996748454113, 7);
  sqcRYGate(q, -0.03871624600618052, 8);
  sqcRZGate(q, 2.990588713915159, 8);
  sqcRYGate(q, -3.000534461807854, 9);
  sqcRZGate(q, -2.7703394573637814, 9);
  sqcRYGate(q, -2.2317291270418913, 10);
  sqcRZGate(q, 0.38220602691129046, 10);
  sqcRYGate(q, 1.9242188996907101, 11);
  sqcRZGate(q, 1.0967874713362755, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.8620994805066866, 0);
  sqcRZGate(q, 2.785310030564759, 0);
  sqcRYGate(q, -1.0549205400842645, 1);
  sqcRZGate(q, 0.5639916275774227, 1);
  sqcRYGate(q, 0.43440539053142424, 2);
  sqcRZGate(q, 3.084062916528097, 2);
  sqcRYGate(q, -1.578225414530615, 3);
  sqcRZGate(q, -0.4965899062749877, 3);
  sqcRYGate(q, 0.04119113327479518, 4);
  sqcRZGate(q, -0.1071352881620264, 4);
  sqcRYGate(q, 0.600992628194957, 5);
  sqcRZGate(q, -2.0299592547124456, 5);
  sqcRYGate(q, 0.031061151475502816, 6);
  sqcRZGate(q, 0.17847201662953874, 6);
  sqcRYGate(q, -1.561642283427553, 7);
  sqcRZGate(q, 3.0500409921488787, 7);
  sqcRYGate(q, -1.5601646241377125, 8);
  sqcRZGate(q, -3.1140085583823174, 8);
  sqcRYGate(q, -0.06787734481744867, 9);
  sqcRZGate(q, -1.7897275041060743, 9);
  sqcRYGate(q, 0.44652882289326556, 10);
  sqcRZGate(q, 2.135032699459507, 10);
  sqcRYGate(q, 1.904421811045319, 11);
  sqcRZGate(q, 0.8015323124833493, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.6851593738344688, 0);
  sqcRZGate(q, 0.4575709897043717, 0);
  sqcRYGate(q, 0.006481602158477148, 1);
  sqcRZGate(q, 2.622197436467359, 1);
  sqcRYGate(q, -2.4765320341943977, 2);
  sqcRZGate(q, 1.1807875796324891, 2);
  sqcRYGate(q, 3.136663027653929, 3);
  sqcRZGate(q, -2.0704610480110643, 3);
  sqcRYGate(q, 2.9192024244971218, 4);
  sqcRZGate(q, -0.029391828453759313, 4);
  sqcRYGate(q, 1.5698621196832354, 5);
  sqcRZGate(q, 3.061644738023323, 5);
  sqcRYGate(q, 0.016703213413928917, 6);
  sqcRZGate(q, 1.4201848395493342, 6);
  sqcRYGate(q, 0.007322576818958204, 7);
  sqcRZGate(q, -3.054451275662702, 7);
  sqcRYGate(q, 0.03871106776610709, 8);
  sqcRZGate(q, -2.018864659817691, 8);
  sqcRYGate(q, 3.1415545135734018, 9);
  sqcRZGate(q, 2.831732967892182, 9);
  sqcRYGate(q, 1.5834660745887428, 10);
  sqcRZGate(q, 1.1670145812757453, 10);
  sqcRYGate(q, -0.8950102439322363, 11);
  sqcRZGate(q, 0.5246257171682904, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.7829711656970781, 0);
  sqcRZGate(q, 2.757226490364084, 0);
  sqcRYGate(q, -1.0601343224674231, 1);
  sqcRZGate(q, 2.7758595982378815, 1);
  sqcRYGate(q, -2.9488768958254057, 2);
  sqcRZGate(q, 1.1673024639105405, 2);
  sqcRYGate(q, -1.5712914021290176, 3);
  sqcRZGate(q, -3.1404609270681436, 3);
  sqcRYGate(q, -1.5706542880018965, 4);
  sqcRZGate(q, -1.57013156175387, 4);
  sqcRYGate(q, -0.04117671978884536, 5);
  sqcRZGate(q, 1.647462075681939, 5);
  sqcRYGate(q, -1.5708863473181882, 6);
  sqcRZGate(q, -1.6597859668197625, 6);
  sqcRYGate(q, -2.332609627502977, 7);
  sqcRZGate(q, -2.304766377022616, 7);
  sqcRYGate(q, -3.0467075625488826, 8);
  sqcRZGate(q, 2.817733240648714, 8);
  sqcRYGate(q, 2.3768871058577967, 9);
  sqcRZGate(q, 3.024420082406301, 9);
  sqcRYGate(q, 2.6440805535473855, 10);
  sqcRZGate(q, -0.49030665374058297, 10);
  sqcRYGate(q, -1.5758793256556924, 11);
  sqcRZGate(q, 0.8813009379640184, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.995490609760994, 0);
  sqcRZGate(q, 2.2397413731126816, 0);
  sqcRYGate(q, -3.141521639928295, 1);
  sqcRZGate(q, -0.3891124176424569, 1);
  sqcRYGate(q, 2.2589148320002277, 2);
  sqcRZGate(q, 1.0503967642560923, 2);
  sqcRYGate(q, 0.9007434191256412, 3);
  sqcRZGate(q, -1.5729757019733068, 3);
  sqcRYGate(q, 1.5708741947540368, 4);
  sqcRZGate(q, 1.94128666203594, 4);
  sqcRYGate(q, -1.3769276223020555, 5);
  sqcRZGate(q, 0.13864607521917713, 5);
  sqcRYGate(q, 3.141498604844789, 6);
  sqcRZGate(q, 1.7340161466674031, 6);
  sqcRYGate(q, -3.1414448731346494, 7);
  sqcRZGate(q, -2.3526079172922074, 7);
  sqcRYGate(q, -2.478484328642549, 8);
  sqcRZGate(q, 1.556536412340483, 8);
  sqcRYGate(q, -2.473025405506801, 9);
  sqcRZGate(q, -1.566825600961097, 9);
  sqcRYGate(q, 3.0328159089560978, 10);
  sqcRZGate(q, -0.03713638281410826, 10);
  sqcRYGate(q, 0.06311580415811441, 11);
  sqcRZGate(q, -2.913763751859951, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.5178735563532029, 0);
  sqcRZGate(q, 0.7657770289361213, 0);
  sqcRYGate(q, 1.2554254145354387, 1);
  sqcRZGate(q, 0.9581923098575266, 1);
  sqcRYGate(q, -1.5703097899310547, 2);
  sqcRZGate(q, 1.8041500206701846, 2);
  sqcRYGate(q, -1.5760839514350726, 3);
  sqcRZGate(q, 2.443590771278643, 3);
  sqcRYGate(q, 1.4884517703196014, 4);
  sqcRZGate(q, 1.1080235551227064, 4);
  sqcRYGate(q, -1.7416386983774599, 5);
  sqcRZGate(q, 2.4207709272279256, 5);
  sqcRYGate(q, -0.09065727019350606, 6);
  sqcRZGate(q, -0.35500010817111693, 6);
  sqcRYGate(q, -1.5858036415913777, 7);
  sqcRZGate(q, 0.4427829306523803, 7);
  sqcRYGate(q, -1.5707496531509557, 8);
  sqcRZGate(q, 0.12102498331292111, 8);
  sqcRYGate(q, -1.5738066415291971, 9);
  sqcRZGate(q, 0.47952287006229, 9);
  sqcRYGate(q, -1.5658315891786614, 10);
  sqcRZGate(q, 1.562627568721398, 10);
  sqcRYGate(q, -3.1392260658163007, 11);
  sqcRZGate(q, 0.6175180155834453, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.38658892965477143, 0);
  sqcRZGate(q, -0.8063390469386924, 0);
  sqcRYGate(q, 1.9996496708483467, 1);
  sqcRZGate(q, 0.18644153519565196, 1);
  sqcRYGate(q, 0.9488096297330255, 2);
  sqcRZGate(q, 3.0254999255389996, 2);
  sqcRYGate(q, -0.5928777660509175, 3);
  sqcRZGate(q, 0.15659912044938953, 3);
  sqcRYGate(q, -3.1002810418451485, 4);
  sqcRZGate(q, 2.6523468229583367, 4);
  sqcRYGate(q, 3.1397012180958828, 5);
  sqcRZGate(q, -2.002451213117613, 5);
  sqcRYGate(q, 3.1368476449179363, 6);
  sqcRZGate(q, -0.13856093174718698, 6);
  sqcRYGate(q, -3.141420377542649, 7);
  sqcRZGate(q, 0.18283771156040543, 7);
  sqcRYGate(q, -3.1411938880014465, 8);
  sqcRZGate(q, -2.3252508388333752, 8);
  sqcRYGate(q, -0.0017621511455268683, 9);
  sqcRZGate(q, 2.828081875114795, 9);
  sqcRYGate(q, -1.5732220424026178, 10);
  sqcRZGate(q, 0.855405048794727, 10);
  sqcRYGate(q, -1.5682804362268516, 11);
  sqcRZGate(q, 1.356121252107763, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.0025387066607365227, 0);
  sqcRZGate(q, -2.2131072508335725, 0);
  sqcRYGate(q, 3.139732505129073, 1);
  sqcRZGate(q, 1.5143446079212541, 1);
  sqcRYGate(q, -3.1377594179121964, 2);
  sqcRZGate(q, 0.2717794292529412, 2);
  sqcRYGate(q, 3.132867497037396, 3);
  sqcRZGate(q, 0.15845661527234672, 3);
  sqcRYGate(q, 0.5817745693331651, 4);
  sqcRZGate(q, -1.5227025979063906, 4);
  sqcRYGate(q, 3.1412083140493494, 5);
  sqcRZGate(q, 2.3055524900101148, 5);
  sqcRYGate(q, 1.484271304146315, 6);
  sqcRZGate(q, 0.05153269309276976, 6);
  sqcRYGate(q, -0.024401814289034273, 7);
  sqcRZGate(q, 0.00036005740190869773, 7);
  sqcRYGate(q, -3.139200210435442, 8);
  sqcRZGate(q, -1.7204433745029153, 8);
  sqcRYGate(q, -0.02180815543669734, 9);
  sqcRZGate(q, -0.16775120811859257, 9);
  sqcRYGate(q, -1.5717453610481742, 10);
  sqcRZGate(q, -1.5710722025431876, 10);
  sqcRYGate(q, 2.4475005179617146, 11);
  sqcRZGate(q, 2.129129663233166, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.9549574641258385, 0);
  sqcRZGate(q, -2.932594111389535, 0);
  sqcRYGate(q, 1.088425370967646, 1);
  sqcRZGate(q, 0.49118568769206306, 1);
  sqcRYGate(q, 0.7490203439923084, 2);
  sqcRZGate(q, 1.282531871182032, 2);
  sqcRYGate(q, 2.5538287513558338, 3);
  sqcRZGate(q, 0.692918811886007, 3);
  sqcRYGate(q, -0.007030053226726155, 4);
  sqcRZGate(q, -0.010560613175288225, 4);
  sqcRYGate(q, -3.1398871741963474, 5);
  sqcRZGate(q, 0.44901149503581567, 5);
  sqcRYGate(q, -3.136134783469743, 6);
  sqcRZGate(q, -1.8881335278370712, 6);
  sqcRYGate(q, -0.05986809259846019, 7);
  sqcRZGate(q, 2.8932912606952015, 7);
  sqcRYGate(q, 1.5737604051579535, 8);
  sqcRZGate(q, 1.8466353101102595, 8);
  sqcRYGate(q, -1.57363945865161, 9);
  sqcRZGate(q, 1.3885809725689882, 9);
  sqcRYGate(q, 1.5662007616317695, 10);
  sqcRZGate(q, 1.5762093609330095, 10);
  sqcRYGate(q, -3.140787998522294, 11);
  sqcRZGate(q, -0.8268315223845702, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.002197239172034136, 0);
  sqcRZGate(q, -3.1131686233409313, 0);
  sqcRYGate(q, -0.25097819258315796, 1);
  sqcRZGate(q, -2.085752528106683, 1);
  sqcRYGate(q, 1.570166499541636, 2);
  sqcRZGate(q, 0.18977530454813965, 2);
  sqcRYGate(q, -1.3008677753109668, 3);
  sqcRZGate(q, -0.5024260616178429, 3);
  sqcRYGate(q, 1.5525999766327052, 4);
  sqcRZGate(q, 2.2098456639394755, 4);
  sqcRYGate(q, 1.3749692928513602, 5);
  sqcRZGate(q, 0.9158239660859753, 5);
  sqcRYGate(q, 0.003311805843852156, 6);
  sqcRZGate(q, -2.5594280426474962, 6);
  sqcRYGate(q, -3.1400198569020445, 7);
  sqcRZGate(q, 0.5529032256038285, 7);
  sqcRYGate(q, -3.1407866634393393, 8);
  sqcRZGate(q, -2.670896388891664, 8);
  sqcRYGate(q, 3.13810826064773, 9);
  sqcRZGate(q, 2.452180923990411, 9);
  sqcRYGate(q, 1.570980600790408, 10);
  sqcRZGate(q, -2.948656523466553, 10);
  sqcRYGate(q, 1.5491988288819, 11);
  sqcRZGate(q, -0.5127173433857735, 11);

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
