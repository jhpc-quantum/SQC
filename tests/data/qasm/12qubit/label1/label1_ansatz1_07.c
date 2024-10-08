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

  sqcRYGate(q, 1.560914781415197, 0);
  sqcRZGate(q, 1.5288761403407094, 0);
  sqcRYGate(q, -2.747393233282949, 1);
  sqcRZGate(q, 0.5978540505783264, 1);
  sqcRYGate(q, 3.015631135268683, 2);
  sqcRZGate(q, -2.14667349544935, 2);
  sqcRYGate(q, -0.10895248737185792, 3);
  sqcRZGate(q, 2.6322267816012754, 3);
  sqcRYGate(q, -0.7907839529135794, 4);
  sqcRZGate(q, -3.1103296612489144, 4);
  sqcRYGate(q, -1.6612491203959971, 5);
  sqcRZGate(q, 0.62231063438644, 5);
  sqcRYGate(q, -2.006935759472535, 6);
  sqcRZGate(q, 0.4660100750090929, 6);
  sqcRYGate(q, 0.01602093722093123, 7);
  sqcRZGate(q, -0.1831955502436986, 7);
  sqcRYGate(q, 3.0388892979217537, 8);
  sqcRZGate(q, -1.7066234852073177, 8);
  sqcRYGate(q, 0.4550063810005592, 9);
  sqcRZGate(q, 2.474808960852051, 9);
  sqcRYGate(q, 1.0075410693150157, 10);
  sqcRZGate(q, 1.9082669767317713, 10);
  sqcRYGate(q, 2.5278442701692114, 11);
  sqcRZGate(q, -2.2625874871883567, 11);
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
  sqcRYGate(q, 0.8830086362850098, 0);
  sqcRZGate(q, -2.1526036648927462, 0);
  sqcRYGate(q, 2.9422885104456635, 1);
  sqcRZGate(q, 1.667751206591893, 1);
  sqcRYGate(q, -2.8910411982394137, 2);
  sqcRZGate(q, 0.14588169721183064, 2);
  sqcRYGate(q, -2.5313319511363703, 3);
  sqcRZGate(q, -0.328447744492717, 3);
  sqcRYGate(q, 1.2482858770694256, 4);
  sqcRZGate(q, -2.95069243417317, 4);
  sqcRYGate(q, 1.1812983998454527, 5);
  sqcRZGate(q, -3.03533153672399, 5);
  sqcRYGate(q, 2.1646181829399005, 6);
  sqcRZGate(q, -0.6087930332750231, 6);
  sqcRYGate(q, 1.493273681393273, 7);
  sqcRZGate(q, -1.6561682510986655, 7);
  sqcRYGate(q, 1.151830868821839, 8);
  sqcRZGate(q, 2.4938184888864354, 8);
  sqcRYGate(q, -0.7956287762420113, 9);
  sqcRZGate(q, 1.6217494255446732, 9);
  sqcRYGate(q, 2.6437737395835694, 10);
  sqcRZGate(q, 2.133379249136999, 10);
  sqcRYGate(q, 1.5195672141847512, 11);
  sqcRZGate(q, -1.507111138725098, 11);
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
  sqcRYGate(q, 0.7534070484933695, 0);
  sqcRZGate(q, 2.0242169506737584, 0);
  sqcRYGate(q, -0.42096236094140355, 1);
  sqcRZGate(q, 2.3151213307255833, 1);
  sqcRYGate(q, 1.3844147069933772, 2);
  sqcRZGate(q, -1.8938620531601336, 2);
  sqcRYGate(q, 0.5110609178707867, 3);
  sqcRZGate(q, 2.3441447931335606, 3);
  sqcRYGate(q, -2.928162788028898, 4);
  sqcRZGate(q, -2.5533339055562014, 4);
  sqcRYGate(q, -1.4948244598322509, 5);
  sqcRZGate(q, 2.5268116116577595, 5);
  sqcRYGate(q, 1.9452476368349516, 6);
  sqcRZGate(q, 3.0248004334276706, 6);
  sqcRYGate(q, 2.3764368770200197, 7);
  sqcRZGate(q, -1.4274219933842838, 7);
  sqcRYGate(q, 3.1414115654769845, 8);
  sqcRZGate(q, -1.4398379669425139, 8);
  sqcRYGate(q, 2.9236982196553742, 9);
  sqcRZGate(q, 2.0054722722116933, 9);
  sqcRYGate(q, -3.138781553610873, 10);
  sqcRZGate(q, -1.5277448246599654, 10);
  sqcRYGate(q, -1.7535331705488277, 11);
  sqcRZGate(q, 1.5303715410543317, 11);
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
  sqcRYGate(q, -0.4798028079225434, 0);
  sqcRZGate(q, -1.1234717810577597, 0);
  sqcRYGate(q, -0.0914022651351603, 1);
  sqcRZGate(q, 1.1956830667465397, 1);
  sqcRYGate(q, -2.7923104912371457, 2);
  sqcRZGate(q, -1.8658589509414687, 2);
  sqcRYGate(q, -0.25580339218968184, 3);
  sqcRZGate(q, -1.5239198510680518, 3);
  sqcRYGate(q, 2.932189513549772, 4);
  sqcRZGate(q, -1.1226212812447907, 4);
  sqcRYGate(q, -1.2187392591828106, 5);
  sqcRZGate(q, 3.0996376477434486, 5);
  sqcRYGate(q, 0.08045456696160806, 6);
  sqcRZGate(q, -3.0138124877828725, 6);
  sqcRYGate(q, -2.93769375178873, 7);
  sqcRZGate(q, -1.365691173522575, 7);
  sqcRYGate(q, -1.9553549874682417, 8);
  sqcRZGate(q, 0.6734746328060346, 8);
  sqcRYGate(q, 0.756540192640347, 9);
  sqcRZGate(q, -2.6107390568281215, 9);
  sqcRYGate(q, -0.36377320288217235, 10);
  sqcRZGate(q, -3.059263805322572, 10);
  sqcRYGate(q, -2.922475411376393, 11);
  sqcRZGate(q, -1.9641421691318028, 11);
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
  sqcRYGate(q, -2.0758034561554304, 0);
  sqcRZGate(q, 0.0758704111031149, 0);
  sqcRYGate(q, 0.8062146044400956, 1);
  sqcRZGate(q, -1.0792418148116918, 1);
  sqcRYGate(q, -1.3450468105530875, 2);
  sqcRZGate(q, -1.8419991131089413, 2);
  sqcRYGate(q, 1.7374705569691682, 3);
  sqcRZGate(q, 1.6135866922983153, 3);
  sqcRYGate(q, 0.201874178942699, 4);
  sqcRZGate(q, 1.6838839751442143, 4);
  sqcRYGate(q, -1.6502295477071576, 5);
  sqcRZGate(q, 0.05104759365951494, 5);
  sqcRYGate(q, -2.181058739515806, 6);
  sqcRZGate(q, 3.1222133820229874, 6);
  sqcRYGate(q, 0.8652264791746835, 7);
  sqcRZGate(q, -1.7561470684627423, 7);
  sqcRYGate(q, -3.137170871820345, 8);
  sqcRZGate(q, 2.603821092588547, 8);
  sqcRYGate(q, -1.9292747756540989, 9);
  sqcRZGate(q, 1.1394059302992048, 9);
  sqcRYGate(q, -0.8445337384424096, 10);
  sqcRZGate(q, 2.841699503325532, 10);
  sqcRYGate(q, 2.9849609376333794, 11);
  sqcRZGate(q, -2.1231410639853388, 11);
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
  sqcRYGate(q, -3.04246234138289, 0);
  sqcRZGate(q, 1.7433276778746938, 0);
  sqcRYGate(q, -2.33279961464793, 1);
  sqcRZGate(q, 2.3264644245895556, 1);
  sqcRYGate(q, 2.874655080684738, 2);
  sqcRZGate(q, 1.3431569168147233, 2);
  sqcRYGate(q, -1.3992458050170011, 3);
  sqcRZGate(q, 1.9340855698258312, 3);
  sqcRYGate(q, -3.096746161873536, 4);
  sqcRZGate(q, -1.495971023953084, 4);
  sqcRYGate(q, 2.602665353326256, 5);
  sqcRZGate(q, -1.3615517162318709, 5);
  sqcRYGate(q, -0.21171097174063558, 6);
  sqcRZGate(q, 1.5160344411931288, 6);
  sqcRYGate(q, -2.920904335821694, 7);
  sqcRZGate(q, 1.4522758093723396, 7);
  sqcRYGate(q, 2.8159779148863695, 8);
  sqcRZGate(q, 0.20705974648892322, 8);
  sqcRYGate(q, -2.923314243555111, 9);
  sqcRZGate(q, 0.6683094055702384, 9);
  sqcRYGate(q, -1.7492847629776715, 10);
  sqcRZGate(q, 2.9337346742321597, 10);
  sqcRYGate(q, 0.49606991185299965, 11);
  sqcRZGate(q, -2.0267584759951083, 11);
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
  sqcRYGate(q, -0.6469238048008129, 0);
  sqcRZGate(q, -2.1543319048887684, 0);
  sqcRYGate(q, 1.9784853535123847, 1);
  sqcRZGate(q, 0.7577722819592219, 1);
  sqcRYGate(q, 2.3906138086751385, 2);
  sqcRZGate(q, 0.25874403831666637, 2);
  sqcRYGate(q, -2.781321533111718, 3);
  sqcRZGate(q, 1.8819441445063871, 3);
  sqcRYGate(q, -1.5486759042894513, 4);
  sqcRZGate(q, 1.6442543352815338, 4);
  sqcRYGate(q, 1.562067761539675, 5);
  sqcRZGate(q, 2.9708193521371125, 5);
  sqcRYGate(q, 1.563406540805778, 6);
  sqcRZGate(q, 1.369126797870393, 6);
  sqcRYGate(q, 2.099034780592585, 7);
  sqcRZGate(q, 1.579611108686784, 7);
  sqcRYGate(q, -1.5787692379317102, 8);
  sqcRZGate(q, -3.1155348291077827, 8);
  sqcRYGate(q, -0.7954738268670399, 9);
  sqcRZGate(q, 2.776404777657679, 9);
  sqcRYGate(q, -1.09354454499121, 10);
  sqcRZGate(q, 1.0881383622298766, 10);
  sqcRYGate(q, 3.096317974226547, 11);
  sqcRZGate(q, -2.7531773523816048, 11);
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
  sqcRYGate(q, 1.943887339731103, 0);
  sqcRZGate(q, 1.4917792093468245, 0);
  sqcRYGate(q, 0.16907577826136855, 1);
  sqcRZGate(q, -2.451366559955787, 1);
  sqcRYGate(q, -2.5958391050868466, 2);
  sqcRZGate(q, -2.916782101372887, 2);
  sqcRYGate(q, -1.4527139315279358, 3);
  sqcRZGate(q, 0.012961264769624671, 3);
  sqcRYGate(q, -3.070792624731152, 4);
  sqcRZGate(q, -0.8731519255843879, 4);
  sqcRYGate(q, -3.1208160561162135, 5);
  sqcRZGate(q, 1.356171974278845, 5);
  sqcRYGate(q, 0.03505898599230314, 6);
  sqcRZGate(q, 0.37193554657270145, 6);
  sqcRYGate(q, -0.05699445912231926, 7);
  sqcRZGate(q, 1.5851395418541019, 7);
  sqcRYGate(q, 0.1829185572083996, 8);
  sqcRZGate(q, -0.027979542521853418, 8);
  sqcRYGate(q, 1.558391020032885, 9);
  sqcRZGate(q, 3.116989946365154, 9);
  sqcRYGate(q, 1.6974067885331827, 10);
  sqcRZGate(q, -0.3025457781886978, 10);
  sqcRYGate(q, 1.4141263464485867, 11);
  sqcRZGate(q, 2.688682976254133, 11);
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
  sqcRYGate(q, -1.0083663468751356, 0);
  sqcRZGate(q, -1.8623354632723002, 0);
  sqcRYGate(q, 0.5984387240339339, 1);
  sqcRZGate(q, -3.1411993149807693, 1);
  sqcRYGate(q, -1.6790057231886575, 2);
  sqcRZGate(q, 3.027931624396736, 2);
  sqcRYGate(q, 2.5812268550558257, 3);
  sqcRZGate(q, 0.023426066619403944, 3);
  sqcRYGate(q, 3.1245930346453643, 4);
  sqcRZGate(q, -2.6792727426496556, 4);
  sqcRYGate(q, 1.7122493646927872, 5);
  sqcRZGate(q, -1.544948603675759, 5);
  sqcRYGate(q, -1.6435945682064883, 6);
  sqcRZGate(q, -1.4906857982912847, 6);
  sqcRYGate(q, 0.6852425811638305, 7);
  sqcRZGate(q, 0.6033774051922327, 7);
  sqcRYGate(q, 2.9642889331389775, 8);
  sqcRZGate(q, 3.1164003343901143, 8);
  sqcRYGate(q, -0.23598206754320114, 9);
  sqcRZGate(q, 1.5996824315250027, 9);
  sqcRYGate(q, 1.5719769622029287, 10);
  sqcRZGate(q, -3.1412539059151756, 10);
  sqcRYGate(q, 1.6098513136525079, 11);
  sqcRZGate(q, 1.9353406712001542, 11);
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
  sqcRYGate(q, -2.108801284278803, 0);
  sqcRZGate(q, -0.13493100204061115, 0);
  sqcRYGate(q, -1.5782274563042429, 1);
  sqcRZGate(q, -1.5707910148271877, 1);
  sqcRYGate(q, -0.014871831164728455, 2);
  sqcRZGate(q, 1.6987887381904994, 2);
  sqcRYGate(q, 0.5938172033156666, 3);
  sqcRZGate(q, -1.6011253700861694, 3);
  sqcRYGate(q, 0.0072416135619347444, 4);
  sqcRZGate(q, -1.4049547587981683, 4);
  sqcRYGate(q, 0.17628050567662165, 5);
  sqcRZGate(q, 1.5808682129404303, 5);
  sqcRYGate(q, 0.17721570916731882, 6);
  sqcRZGate(q, -1.6571804390959173, 6);
  sqcRYGate(q, 3.126387163258492, 7);
  sqcRZGate(q, -0.9557285941082013, 7);
  sqcRYGate(q, -2.8831889522113707, 8);
  sqcRZGate(q, 3.125354435473796, 8);
  sqcRYGate(q, -1.5571389985221444, 9);
  sqcRZGate(q, 1.5764801918930071, 9);
  sqcRYGate(q, 0.10201128273439418, 10);
  sqcRZGate(q, 3.13416117812643, 10);
  sqcRYGate(q, -1.5625881651835316, 11);
  sqcRZGate(q, -1.5770297270426443, 11);
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
  sqcRYGate(q, -3.139001055726372, 0);
  sqcRZGate(q, 0.2835389055691849, 0);
  sqcRYGate(q, -1.5672212244222719, 1);
  sqcRZGate(q, -1.4754457578865239, 1);
  sqcRYGate(q, 1.5659303188648428, 2);
  sqcRZGate(q, -0.8733002233044249, 2);
  sqcRYGate(q, -1.5524777324199535, 3);
  sqcRZGate(q, -2.190609306285105, 3);
  sqcRYGate(q, -1.5899972735401706, 4);
  sqcRZGate(q, -2.5700109376190623, 4);
  sqcRYGate(q, -1.5672486896705038, 5);
  sqcRZGate(q, -0.16445255919207216, 5);
  sqcRYGate(q, -1.5661536991686624, 6);
  sqcRZGate(q, -1.038744672975528, 6);
  sqcRYGate(q, 1.6107199988941998, 7);
  sqcRZGate(q, -2.038804508826468, 7);
  sqcRYGate(q, 1.577404398014597, 8);
  sqcRZGate(q, 1.9886976958086306, 8);
  sqcRYGate(q, 0.007352119593480922, 9);
  sqcRZGate(q, 1.818774600219306, 9);
  sqcRYGate(q, -1.5712731705818004, 10);
  sqcRZGate(q, -0.6056684537707397, 10);
  sqcRYGate(q, 1.570389394625605, 11);
  sqcRZGate(q, 2.4193303550751866, 11);

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
