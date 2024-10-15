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

  sqcRYGate(q, -0.28607925283317265, 0);
  sqcRZGate(q, 2.9380816394769123, 0);
  sqcRYGate(q, 2.154213756248012, 1);
  sqcRZGate(q, 2.7765497790818636, 1);
  sqcRYGate(q, -0.9865918000751488, 2);
  sqcRZGate(q, -2.0842196011545235, 2);
  sqcRYGate(q, -0.024855883320282324, 3);
  sqcRZGate(q, -2.9176215776485486, 3);
  sqcRYGate(q, -2.1011027326269636, 4);
  sqcRZGate(q, -1.9687433802142078, 4);
  sqcRYGate(q, 0.12416318824770568, 5);
  sqcRZGate(q, -2.582111428601028, 5);
  sqcRYGate(q, 1.4522963773291624, 6);
  sqcRZGate(q, -0.7441752762445869, 6);
  sqcRYGate(q, -1.8715483767627907, 7);
  sqcRZGate(q, 0.20341508799042807, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.3979066746960918, 0);
  sqcRZGate(q, -1.183221179578185, 0);
  sqcRYGate(q, -1.6386445721045328, 1);
  sqcRZGate(q, -2.512173819877064, 1);
  sqcRYGate(q, 0.1672212491080458, 2);
  sqcRZGate(q, 2.2241106394935772, 2);
  sqcRYGate(q, -2.0968596109633717, 3);
  sqcRZGate(q, -0.6873007948735038, 3);
  sqcRYGate(q, -1.7535732695458852, 4);
  sqcRZGate(q, 2.862269538381721, 4);
  sqcRYGate(q, -1.0116911060125184, 5);
  sqcRZGate(q, 1.5219834484596515, 5);
  sqcRYGate(q, 0.7441260789188751, 6);
  sqcRZGate(q, -1.8525916385507957, 6);
  sqcRYGate(q, -2.90415162930553, 7);
  sqcRZGate(q, -2.716612220162799, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.6001440631638125, 0);
  sqcRZGate(q, -1.1512384713919221, 0);
  sqcRYGate(q, 0.6819828511950448, 1);
  sqcRZGate(q, 1.5831081705483872, 1);
  sqcRYGate(q, 1.3483981650488899, 2);
  sqcRZGate(q, 1.8984691356124448, 2);
  sqcRYGate(q, -1.809123448078048, 3);
  sqcRZGate(q, -2.652293444400285, 3);
  sqcRYGate(q, -2.393792875824212, 4);
  sqcRZGate(q, -0.3726060663281939, 4);
  sqcRYGate(q, -1.3120993350812489, 5);
  sqcRZGate(q, -3.13210672717694, 5);
  sqcRYGate(q, -0.9491168808262772, 6);
  sqcRZGate(q, 2.6438293828048693, 6);
  sqcRYGate(q, -2.16741907240018, 7);
  sqcRZGate(q, 2.624573129988451, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.411784276693106, 0);
  sqcRZGate(q, 1.6269341939427369, 0);
  sqcRYGate(q, 0.9584864090139927, 1);
  sqcRZGate(q, -2.753850126276956, 1);
  sqcRYGate(q, 0.2370025053605662, 2);
  sqcRZGate(q, -2.5786061441038046, 2);
  sqcRYGate(q, -0.6847623829698354, 3);
  sqcRZGate(q, -2.78149249496706, 3);
  sqcRYGate(q, -1.897269409019004, 4);
  sqcRZGate(q, 1.2740186786355308, 4);
  sqcRYGate(q, -1.2568521585403039, 5);
  sqcRZGate(q, 1.4973463899090411, 5);
  sqcRYGate(q, 1.950222513410772, 6);
  sqcRZGate(q, -0.0914678724120713, 6);
  sqcRYGate(q, -2.0944338379919243, 7);
  sqcRZGate(q, -1.2348988808586734, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.41319304718376687, 0);
  sqcRZGate(q, 2.827747638053234, 0);
  sqcRYGate(q, 0.6670664323108948, 1);
  sqcRZGate(q, -0.46172854709821687, 1);
  sqcRYGate(q, 2.6016236740134757, 2);
  sqcRZGate(q, -0.1586992834446826, 2);
  sqcRYGate(q, 0.4587321980606456, 3);
  sqcRZGate(q, -1.8361325885131743, 3);
  sqcRYGate(q, 2.400182492497448, 4);
  sqcRZGate(q, -1.4786452915117687, 4);
  sqcRYGate(q, 3.0181473991976353, 5);
  sqcRZGate(q, 0.3387818688429167, 5);
  sqcRYGate(q, -1.3723110955562712, 6);
  sqcRZGate(q, 1.2703642217320406, 6);
  sqcRYGate(q, 0.853308507636747, 7);
  sqcRZGate(q, 2.0784979798013707, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.4943405786595907, 0);
  sqcRZGate(q, -0.32835509774085564, 0);
  sqcRYGate(q, 1.9197957367802747, 1);
  sqcRZGate(q, 2.6931709567493716, 1);
  sqcRYGate(q, 1.274660454085426, 2);
  sqcRZGate(q, -0.22897055335434757, 2);
  sqcRYGate(q, -0.8903082753553235, 3);
  sqcRZGate(q, 1.6174366581808926, 3);
  sqcRYGate(q, 0.37278640700379206, 4);
  sqcRZGate(q, -1.6883278354909015, 4);
  sqcRYGate(q, 0.9558561481148056, 5);
  sqcRZGate(q, -0.9981425661240267, 5);
  sqcRYGate(q, 0.16603088843371278, 6);
  sqcRZGate(q, 2.8465337957943175, 6);
  sqcRYGate(q, -0.4848055519700978, 7);
  sqcRZGate(q, -2.39713213143544, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.9806186222774933, 0);
  sqcRZGate(q, -1.59307818121807, 0);
  sqcRYGate(q, 1.2903138996666375, 1);
  sqcRZGate(q, -1.3685775753253482, 1);
  sqcRYGate(q, -0.32624502431023844, 2);
  sqcRZGate(q, -3.0870194694994506, 2);
  sqcRYGate(q, -1.1550144673784892, 3);
  sqcRZGate(q, -2.5880353713685187, 3);
  sqcRYGate(q, 0.2241631903401551, 4);
  sqcRZGate(q, 1.411665561123792, 4);
  sqcRYGate(q, 2.989392877694429, 5);
  sqcRZGate(q, 0.3911899736170449, 5);
  sqcRYGate(q, 0.8181401453564279, 6);
  sqcRZGate(q, 1.6255782623911523, 6);
  sqcRYGate(q, -1.646047970834351, 7);
  sqcRZGate(q, -2.401729155818976, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.6565873969360458, 0);
  sqcRZGate(q, -1.455272538544643, 0);
  sqcRYGate(q, -2.4945258433988005, 1);
  sqcRZGate(q, -2.904436777912365, 1);
  sqcRYGate(q, -1.755719197936093, 2);
  sqcRZGate(q, 2.6550580052592143, 2);
  sqcRYGate(q, 1.2150918811128948, 3);
  sqcRZGate(q, 0.7712952703769184, 3);
  sqcRYGate(q, 1.3542346954951308, 4);
  sqcRZGate(q, 1.7525740711843119, 4);
  sqcRYGate(q, -1.9537806124566286, 5);
  sqcRZGate(q, -0.35972214472701136, 5);
  sqcRYGate(q, -2.644040943690192, 6);
  sqcRZGate(q, -0.595571417250908, 6);
  sqcRYGate(q, 0.24954964129980703, 7);
  sqcRZGate(q, 0.48077803798559066, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.2557671802016657, 0);
  sqcRZGate(q, 2.0269958241662787, 0);
  sqcRYGate(q, -1.9803840400485262, 1);
  sqcRZGate(q, -2.0097973908946525, 1);
  sqcRYGate(q, 1.2298374599149744, 2);
  sqcRZGate(q, -2.0155461592126604, 2);
  sqcRYGate(q, -1.398228275167729, 3);
  sqcRZGate(q, -1.2107437666718288, 3);
  sqcRYGate(q, 1.0730165442765793, 4);
  sqcRZGate(q, 1.4778903232984504, 4);
  sqcRYGate(q, -2.934643672396423, 5);
  sqcRZGate(q, -1.7070265019196897, 5);
  sqcRYGate(q, -2.896371034232757, 6);
  sqcRZGate(q, 1.7028588705876453, 6);
  sqcRYGate(q, 1.9650368984162965, 7);
  sqcRZGate(q, -2.037733269956701, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.3192552629223553, 0);
  sqcRZGate(q, -2.120720931896428, 0);
  sqcRYGate(q, 2.2637944031028523, 1);
  sqcRZGate(q, -2.5319016346795986, 1);
  sqcRYGate(q, 2.1457500496560433, 2);
  sqcRZGate(q, 2.055930718156235, 2);
  sqcRYGate(q, -1.142897310038303, 3);
  sqcRZGate(q, -1.9492024791830076, 3);
  sqcRYGate(q, -1.2412248991382024, 4);
  sqcRZGate(q, 1.1853867628431676, 4);
  sqcRYGate(q, -1.4644370110994862, 5);
  sqcRZGate(q, 2.0443357978719683, 5);
  sqcRYGate(q, 2.3649078814529387, 6);
  sqcRZGate(q, -0.03318199144358516, 6);
  sqcRYGate(q, -2.718311874912872, 7);
  sqcRZGate(q, 0.27209893250879275, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.8172022494122867, 0);
  sqcRZGate(q, 1.8328888079630632, 0);
  sqcRYGate(q, 0.36763650643217044, 1);
  sqcRZGate(q, 0.9678842620756543, 1);
  sqcRYGate(q, 0.6433290911583616, 2);
  sqcRZGate(q, 0.3285535185278116, 2);
  sqcRYGate(q, -1.7074756709854038, 3);
  sqcRZGate(q, 0.876051977486015, 3);
  sqcRYGate(q, 1.205102247004348, 4);
  sqcRZGate(q, 0.23932336767251972, 4);
  sqcRYGate(q, 2.343469742101939, 5);
  sqcRZGate(q, -2.1607499237737966, 5);
  sqcRYGate(q, 0.6572354901440194, 6);
  sqcRZGate(q, 1.3461815787703215, 6);
  sqcRYGate(q, -0.652513572036808, 7);
  sqcRZGate(q, 1.4044366612080907, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.382099911631328, 0);
  sqcRZGate(q, 2.5251689707189726, 0);
  sqcRYGate(q, -0.7932533311715579, 1);
  sqcRZGate(q, -0.36349327364643097, 1);
  sqcRYGate(q, -0.6432875408837501, 2);
  sqcRZGate(q, 2.216269795788629, 2);
  sqcRYGate(q, 2.6842735022447157, 3);
  sqcRZGate(q, -1.6199788635736303, 3);
  sqcRYGate(q, 2.1584100242799833, 4);
  sqcRZGate(q, 1.6304395536191634, 4);
  sqcRYGate(q, -1.9359698157857228, 5);
  sqcRZGate(q, -0.8459003277336974, 5);
  sqcRYGate(q, 2.59266762845231, 6);
  sqcRZGate(q, 1.207915774616721, 6);
  sqcRYGate(q, 2.0706405336896605, 7);
  sqcRZGate(q, -0.7530159931927207, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.0116137574403559, 0);
  sqcRZGate(q, -1.0442040617473767, 0);
  sqcRYGate(q, 3.0259552554015667, 1);
  sqcRZGate(q, 2.6548850245853726, 1);
  sqcRYGate(q, 2.1932131102618464, 2);
  sqcRZGate(q, -0.642015579758808, 2);
  sqcRYGate(q, 0.21854395168001925, 3);
  sqcRZGate(q, -1.6550124701608793, 3);
  sqcRYGate(q, 2.1338001163354106, 4);
  sqcRZGate(q, 2.527196988476346, 4);
  sqcRYGate(q, -2.491383052638056, 5);
  sqcRZGate(q, 2.437882460683248, 5);
  sqcRYGate(q, -1.7884069505083549, 6);
  sqcRZGate(q, -1.0332364885296252, 6);
  sqcRYGate(q, -1.8517741599333688, 7);
  sqcRZGate(q, 1.1363939861812051, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.964191364198088, 0);
  sqcRZGate(q, 2.1674229318826503, 0);
  sqcRYGate(q, 0.2800709956903926, 1);
  sqcRZGate(q, -2.216335560001866, 1);
  sqcRYGate(q, 0.27183096183746525, 2);
  sqcRZGate(q, 1.590938152248472, 2);
  sqcRYGate(q, -1.5453882246925845, 3);
  sqcRZGate(q, 0.1098154149528907, 3);
  sqcRYGate(q, -2.2756024669741244, 4);
  sqcRZGate(q, 2.100830307457242, 4);
  sqcRYGate(q, 1.9933460807114673, 5);
  sqcRZGate(q, -0.720055515551536, 5);
  sqcRYGate(q, 0.35968925463503076, 6);
  sqcRZGate(q, -0.11888509799224196, 6);
  sqcRYGate(q, 1.515456159520763, 7);
  sqcRZGate(q, -1.5672106236086003, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.8478181622025804, 0);
  sqcRZGate(q, -2.0278921230486615, 0);
  sqcRYGate(q, 0.14086682490621527, 1);
  sqcRZGate(q, 2.7459322406192097, 1);
  sqcRYGate(q, -1.4626124378557686, 2);
  sqcRZGate(q, -2.5884791988805977, 2);
  sqcRYGate(q, 1.5124108395285665, 3);
  sqcRZGate(q, 0.8503566816857715, 3);
  sqcRYGate(q, 0.6658707376780857, 4);
  sqcRZGate(q, -2.500660558686378, 4);
  sqcRYGate(q, -2.690962951361557, 5);
  sqcRZGate(q, -2.6840410611797862, 5);
  sqcRYGate(q, -1.191589504514468, 6);
  sqcRZGate(q, 1.4432601658981439, 6);
  sqcRYGate(q, 2.420479702337961, 7);
  sqcRZGate(q, 2.5278747462868547, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.7662310790315625, 0);
  sqcRZGate(q, 2.943916885398374, 0);
  sqcRYGate(q, 1.5630755311257036, 1);
  sqcRZGate(q, 1.3704218741125955, 1);
  sqcRYGate(q, 2.5411786520645916, 2);
  sqcRZGate(q, -0.9918368577293684, 2);
  sqcRYGate(q, -1.9210345766740136, 3);
  sqcRZGate(q, -1.2361729302662572, 3);
  sqcRYGate(q, -1.7519344377524044, 4);
  sqcRZGate(q, -2.692338814783772, 4);
  sqcRYGate(q, 2.1188940600090165, 5);
  sqcRZGate(q, -2.349513274686124, 5);
  sqcRYGate(q, -1.7226315912165557, 6);
  sqcRZGate(q, -1.927404384404639, 6);
  sqcRYGate(q, 0.4201446710906991, 7);
  sqcRZGate(q, -0.7452286033951789, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.7699194850575841, 0);
  sqcRZGate(q, -1.2355960384558715, 0);
  sqcRYGate(q, -2.891767671330771, 1);
  sqcRZGate(q, 0.9911061064474542, 1);
  sqcRYGate(q, -1.6388352695245016, 2);
  sqcRZGate(q, 1.8885171997844132, 2);
  sqcRYGate(q, 1.6089328039809605, 3);
  sqcRZGate(q, -0.6603236914111177, 3);
  sqcRYGate(q, -0.726420532409496, 4);
  sqcRZGate(q, 1.823225970192696, 4);
  sqcRYGate(q, -0.31281098062456425, 5);
  sqcRZGate(q, 2.4479068187680126, 5);
  sqcRYGate(q, 1.5294129249938413, 6);
  sqcRZGate(q, -2.342485603698809, 6);
  sqcRYGate(q, 2.643409047794366, 7);
  sqcRZGate(q, -1.5712804146551695, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.162579774657076, 0);
  sqcRZGate(q, -2.6333578544452756, 0);
  sqcRYGate(q, -1.902500173348642, 1);
  sqcRZGate(q, -0.8289872828358296, 1);
  sqcRYGate(q, -0.5879048739679176, 2);
  sqcRZGate(q, 2.4509935392501285, 2);
  sqcRYGate(q, 1.5428717054394294, 3);
  sqcRZGate(q, 0.005512312192195168, 3);
  sqcRYGate(q, 1.1427945726828597, 4);
  sqcRZGate(q, -1.6582717413106245, 4);
  sqcRYGate(q, 1.640557252768658, 5);
  sqcRZGate(q, 1.9270322274122051, 5);
  sqcRYGate(q, 2.263684727824943, 6);
  sqcRZGate(q, 3.0623715485276937, 6);
  sqcRYGate(q, -2.224734962828741, 7);
  sqcRZGate(q, 0.9917511514557074, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.9583568472519541, 0);
  sqcRZGate(q, -1.6790221274434916, 0);
  sqcRYGate(q, -2.060378300823837, 1);
  sqcRZGate(q, 1.9429704438365185, 1);
  sqcRYGate(q, 2.7483317184816163, 2);
  sqcRZGate(q, -2.953296543192549, 2);
  sqcRYGate(q, 1.6766298252041825, 3);
  sqcRZGate(q, 2.6015052606317357, 3);
  sqcRYGate(q, 1.5409349948035727, 4);
  sqcRZGate(q, 3.036372913070987, 4);
  sqcRYGate(q, -0.8650755417303417, 5);
  sqcRZGate(q, -3.0757349751471983, 5);
  sqcRYGate(q, -1.4208469297790796, 6);
  sqcRZGate(q, -0.7663316489781228, 6);
  sqcRYGate(q, 0.2987241728670052, 7);
  sqcRZGate(q, -2.266045164647003, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.7230843984810763, 0);
  sqcRZGate(q, -1.4303295786054013, 0);
  sqcRYGate(q, 0.4364252793459015, 1);
  sqcRZGate(q, 2.545292178778578, 1);
  sqcRYGate(q, 0.9193402749182262, 2);
  sqcRZGate(q, 0.480283521816217, 2);
  sqcRYGate(q, 0.8198957493422924, 3);
  sqcRZGate(q, -2.719423341781456, 3);
  sqcRYGate(q, -1.9914400981389688, 4);
  sqcRZGate(q, 2.7505156342230928, 4);
  sqcRYGate(q, 2.686335873126086, 5);
  sqcRZGate(q, 0.9482645764714137, 5);
  sqcRYGate(q, 0.4892708582550695, 6);
  sqcRZGate(q, -1.1785008420009424, 6);
  sqcRYGate(q, -2.1998496673967525, 7);
  sqcRZGate(q, 2.7772287392010337, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.4859085649000143, 0);
  sqcRZGate(q, 1.268929342663734, 0);
  sqcRYGate(q, -0.388459358850902, 1);
  sqcRZGate(q, 1.0747648373439684, 1);
  sqcRYGate(q, 3.126444565328135, 2);
  sqcRZGate(q, -2.734465228208162, 2);
  sqcRYGate(q, 2.8157964185071545, 3);
  sqcRZGate(q, 2.358637186343252, 3);
  sqcRYGate(q, -2.9371174919331606, 4);
  sqcRZGate(q, 2.3664373670260406, 4);
  sqcRYGate(q, 1.8023231169129101, 5);
  sqcRZGate(q, 3.0368715315050134, 5);
  sqcRYGate(q, -2.2871459105014518, 6);
  sqcRZGate(q, 0.07487588851093911, 6);
  sqcRYGate(q, -2.407833352666095, 7);
  sqcRZGate(q, -1.467116062559108, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.7816850651596746, 0);
  sqcRZGate(q, 1.0585524539835025, 0);
  sqcRYGate(q, -1.0496978116645153, 1);
  sqcRZGate(q, 2.1956891666387746, 1);
  sqcRYGate(q, 1.5614999468496584, 2);
  sqcRZGate(q, 2.1306596167391687, 2);
  sqcRYGate(q, -0.6220007361844396, 3);
  sqcRZGate(q, 0.38043466348788463, 3);
  sqcRYGate(q, 1.0997257929555246, 4);
  sqcRZGate(q, 1.1119894216148243, 4);
  sqcRYGate(q, -1.56943557383994, 5);
  sqcRZGate(q, 0.7114755151418041, 5);
  sqcRYGate(q, -2.8243744564889095, 6);
  sqcRZGate(q, -0.7236992532120109, 6);
  sqcRYGate(q, -2.817719983626168, 7);
  sqcRZGate(q, -0.0888541718958269, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.3942505576163846, 0);
  sqcRZGate(q, 2.079888314762064, 0);
  sqcRYGate(q, 2.6112121047223473, 1);
  sqcRZGate(q, 2.9998101166367324, 1);
  sqcRYGate(q, -2.113370623933851, 2);
  sqcRZGate(q, 2.653546725200766, 2);
  sqcRYGate(q, 0.6821222872579913, 3);
  sqcRZGate(q, 0.8455438709322767, 3);
  sqcRYGate(q, 0.7497189826448325, 4);
  sqcRZGate(q, -0.6043644572914231, 4);
  sqcRYGate(q, 2.9946030516137605, 5);
  sqcRZGate(q, 1.673347246826344, 5);
  sqcRYGate(q, -1.312194249011215, 6);
  sqcRZGate(q, 2.6183606296991497, 6);
  sqcRYGate(q, 1.406464774929215, 7);
  sqcRZGate(q, 3.036937371483038, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.2979112713455194, 0);
  sqcRZGate(q, -1.6082777735902445, 0);
  sqcRYGate(q, 2.948866560490425, 1);
  sqcRZGate(q, 3.014566342395839, 1);
  sqcRYGate(q, 0.9470237742653483, 2);
  sqcRZGate(q, -1.0822948819057405, 2);
  sqcRYGate(q, 1.3146318310415137, 3);
  sqcRZGate(q, -2.7074207630560303, 3);
  sqcRYGate(q, 0.9221137141521316, 4);
  sqcRZGate(q, 0.244414380423982, 4);
  sqcRYGate(q, 0.7754756231805595, 5);
  sqcRZGate(q, 1.496623177204969, 5);
  sqcRYGate(q, -0.7940702174949978, 6);
  sqcRZGate(q, -0.8543069512369135, 6);
  sqcRYGate(q, 1.208231293578913, 7);
  sqcRZGate(q, -0.9696014842794317, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.5089137601430944, 0);
  sqcRZGate(q, 0.971771703930929, 0);
  sqcRYGate(q, -2.34127787358522, 1);
  sqcRZGate(q, 2.2386458677220524, 1);
  sqcRYGate(q, -1.903504014691527, 2);
  sqcRZGate(q, 2.416213199998325, 2);
  sqcRYGate(q, 1.5469526273883778, 3);
  sqcRZGate(q, -1.5543261978111307, 3);
  sqcRYGate(q, -1.3680794564503103, 4);
  sqcRZGate(q, -2.156783970469564, 4);
  sqcRYGate(q, -1.093670237189021, 5);
  sqcRZGate(q, 2.320750682108139, 5);
  sqcRYGate(q, 1.956194277075495, 6);
  sqcRZGate(q, 0.3903907081105755, 6);
  sqcRYGate(q, -0.5789442147399572, 7);
  sqcRZGate(q, -0.5734455139465683, 7);

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
