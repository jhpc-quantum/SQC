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

  sqcRYGate(q, 0.7740178193655174, 0);
  sqcRZGate(q, 0.838196798240038, 0);
  sqcRYGate(q, -0.5395652638521324, 1);
  sqcRZGate(q, 1.7984218885062628, 1);
  sqcRYGate(q, -2.7977877756623144, 2);
  sqcRZGate(q, 0.7052529104979346, 2);
  sqcRYGate(q, -0.5482277779754307, 3);
  sqcRZGate(q, -0.9708494998540173, 3);
  sqcRYGate(q, -1.6922272068380861, 4);
  sqcRZGate(q, 0.8546243104932753, 4);
  sqcRYGate(q, -3.0732517408864983, 5);
  sqcRZGate(q, -2.9336304646191143, 5);
  sqcRYGate(q, 1.704190822053241, 6);
  sqcRZGate(q, -0.13542229644549308, 6);
  sqcRYGate(q, -0.8282163955901071, 7);
  sqcRZGate(q, -1.6769807108242978, 7);
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
  sqcRYGate(q, -2.833547293010438, 0);
  sqcRZGate(q, 2.397740334265073, 0);
  sqcRYGate(q, 1.6086701274056208, 1);
  sqcRZGate(q, -0.920848417712623, 1);
  sqcRYGate(q, 1.4924242423812624, 2);
  sqcRZGate(q, 1.9895350050799427, 2);
  sqcRYGate(q, 1.8909755498288376, 3);
  sqcRZGate(q, -1.6540332076280935, 3);
  sqcRYGate(q, -1.0008086953136186, 4);
  sqcRZGate(q, 3.038928707206273, 4);
  sqcRYGate(q, -0.7706586657110748, 5);
  sqcRZGate(q, -1.0345198905152724, 5);
  sqcRYGate(q, 1.9034695496382028, 6);
  sqcRZGate(q, -0.28386187690778186, 6);
  sqcRYGate(q, -2.084647425346029, 7);
  sqcRZGate(q, 2.6782652535196867, 7);
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
  sqcRYGate(q, -2.423557152514883, 0);
  sqcRZGate(q, -1.0055201182426838, 0);
  sqcRYGate(q, -1.8950421524075047, 1);
  sqcRZGate(q, 2.2503659688374995, 1);
  sqcRYGate(q, -1.555495713415928, 2);
  sqcRZGate(q, 1.810999215888287, 2);
  sqcRYGate(q, -2.0480686202058234, 3);
  sqcRZGate(q, -0.22208981210518086, 3);
  sqcRYGate(q, 0.4403496247585063, 4);
  sqcRZGate(q, 1.0832181306352229, 4);
  sqcRYGate(q, 2.630424971636776, 5);
  sqcRZGate(q, -2.895580978351741, 5);
  sqcRYGate(q, 2.523034852571433, 6);
  sqcRZGate(q, 0.9359422427185866, 6);
  sqcRYGate(q, -2.6186146990533374, 7);
  sqcRZGate(q, 3.065668789322957, 7);
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
  sqcRYGate(q, -1.223042219006973, 0);
  sqcRZGate(q, -2.0375206916132833, 0);
  sqcRYGate(q, -0.6795557355203862, 1);
  sqcRZGate(q, -2.566734458831878, 1);
  sqcRYGate(q, 1.8086924791545638, 2);
  sqcRZGate(q, 0.8255751001179747, 2);
  sqcRYGate(q, 1.482764190094921, 3);
  sqcRZGate(q, 0.24672776538841515, 3);
  sqcRYGate(q, 2.6998640099975098, 4);
  sqcRZGate(q, 1.2840811994811154, 4);
  sqcRYGate(q, 2.8518398694778764, 5);
  sqcRZGate(q, -1.6684548068093612, 5);
  sqcRYGate(q, 2.060330089992244, 6);
  sqcRZGate(q, -2.6005627343697064, 6);
  sqcRYGate(q, 2.2247735208529607, 7);
  sqcRZGate(q, -2.902103527955106, 7);
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
  sqcRYGate(q, 2.30654532441832, 0);
  sqcRZGate(q, 1.1618602606170576, 0);
  sqcRYGate(q, 0.2816614873718707, 1);
  sqcRZGate(q, -1.5033351885182702, 1);
  sqcRYGate(q, 1.8353785156733924, 2);
  sqcRZGate(q, -2.968812616263247, 2);
  sqcRYGate(q, 0.13979579915200802, 3);
  sqcRZGate(q, -0.23826996671609438, 3);
  sqcRYGate(q, -1.4971715153291267, 4);
  sqcRZGate(q, 1.4919753005871088, 4);
  sqcRYGate(q, -2.6841625546906984, 5);
  sqcRZGate(q, 1.6527809940700902, 5);
  sqcRYGate(q, -0.9020311619168863, 6);
  sqcRZGate(q, -2.459994020604492, 6);
  sqcRYGate(q, -2.073131141263296, 7);
  sqcRZGate(q, 2.5756437776000722, 7);
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
  sqcRYGate(q, 0.9408273608937543, 0);
  sqcRZGate(q, -0.5405509619332669, 0);
  sqcRYGate(q, -1.5856316721720023, 1);
  sqcRZGate(q, 1.8785557195838736, 1);
  sqcRYGate(q, 2.948543016795477, 2);
  sqcRZGate(q, -0.2814871721752414, 2);
  sqcRYGate(q, 1.3892531157263686, 3);
  sqcRZGate(q, 0.1568405663032108, 3);
  sqcRYGate(q, -1.9121416010016379, 4);
  sqcRZGate(q, 2.5339328245053525, 4);
  sqcRYGate(q, -1.154380009752762, 5);
  sqcRZGate(q, -0.6208644583545313, 5);
  sqcRYGate(q, -1.8415576157687856, 6);
  sqcRZGate(q, 1.6163038933811187, 6);
  sqcRYGate(q, -1.0300403224947878, 7);
  sqcRZGate(q, 1.206314083149056, 7);
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
  sqcRYGate(q, -2.8805904900090753, 0);
  sqcRZGate(q, 2.6599465455776827, 0);
  sqcRYGate(q, 1.724140032787112, 1);
  sqcRZGate(q, -2.1054465634631745, 1);
  sqcRYGate(q, 1.0214224137869792, 2);
  sqcRZGate(q, 1.9046879004674264, 2);
  sqcRYGate(q, 2.3984008578246017, 3);
  sqcRZGate(q, 1.006063276284854, 3);
  sqcRYGate(q, 1.0098104187848553, 4);
  sqcRZGate(q, 1.6112531267890655, 4);
  sqcRYGate(q, 2.7736846041158842, 5);
  sqcRZGate(q, -1.857097419247471, 5);
  sqcRYGate(q, -0.30821113211169493, 6);
  sqcRZGate(q, 0.6981740037394316, 6);
  sqcRYGate(q, -1.3051154858481562, 7);
  sqcRZGate(q, -0.7690449682255842, 7);
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
  sqcRYGate(q, 0.4895481104275063, 0);
  sqcRZGate(q, -1.920090240383937, 0);
  sqcRYGate(q, 0.2832266447002466, 1);
  sqcRZGate(q, 2.16357529151279, 1);
  sqcRYGate(q, -2.3632748038670974, 2);
  sqcRZGate(q, -2.2403641476841374, 2);
  sqcRYGate(q, 0.8516989008210174, 3);
  sqcRZGate(q, 2.1339594505787685, 3);
  sqcRYGate(q, 0.2771364262670728, 4);
  sqcRZGate(q, -1.566170286672057, 4);
  sqcRYGate(q, 0.7455118097713138, 5);
  sqcRZGate(q, 0.23730529565992406, 5);
  sqcRYGate(q, 1.7939941868096225, 6);
  sqcRZGate(q, -1.9674981105776208, 6);
  sqcRYGate(q, -0.4190223543366969, 7);
  sqcRZGate(q, 2.3098911088781975, 7);
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
  sqcRYGate(q, 1.8487851132905035, 0);
  sqcRZGate(q, -3.0098350070530766, 0);
  sqcRYGate(q, 1.1751931713743495, 1);
  sqcRZGate(q, 0.6828690119133354, 1);
  sqcRYGate(q, 1.646983995397392, 2);
  sqcRZGate(q, 0.8229432401006046, 2);
  sqcRYGate(q, -1.4917044259752235, 3);
  sqcRZGate(q, -0.2802540108932508, 3);
  sqcRYGate(q, -2.35257642224255, 4);
  sqcRZGate(q, 2.9529508197381458, 4);
  sqcRYGate(q, -0.8341118323445088, 5);
  sqcRZGate(q, 2.4238406702078943, 5);
  sqcRYGate(q, -1.9833672109457687, 6);
  sqcRZGate(q, -1.5092296646463577, 6);
  sqcRYGate(q, 1.583873278154956, 7);
  sqcRZGate(q, 0.10362286900089933, 7);
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
  sqcRYGate(q, -0.6899576994963263, 0);
  sqcRZGate(q, -3.0952031977463115, 0);
  sqcRYGate(q, -1.6743388635507541, 1);
  sqcRZGate(q, -2.4575907705409628, 1);
  sqcRYGate(q, -2.431462625648859, 2);
  sqcRZGate(q, 2.330815851288421, 2);
  sqcRYGate(q, 2.578777292468319, 3);
  sqcRZGate(q, 1.8108660483647705, 3);
  sqcRYGate(q, -1.8474599187165301, 4);
  sqcRZGate(q, -2.8311180633941766, 4);
  sqcRYGate(q, 0.6215498906410399, 5);
  sqcRZGate(q, 1.543839809669649, 5);
  sqcRYGate(q, 1.2217186658611665, 6);
  sqcRZGate(q, -0.32834553977331354, 6);
  sqcRYGate(q, 0.5148901135506723, 7);
  sqcRZGate(q, -1.759738528191586, 7);
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
  sqcRYGate(q, -1.9565732923839316, 0);
  sqcRZGate(q, -2.886777931880363, 0);
  sqcRYGate(q, -0.8623464384374115, 1);
  sqcRZGate(q, 3.1015184194370087, 1);
  sqcRYGate(q, 2.5645800542969353, 2);
  sqcRZGate(q, 1.2464397359731363, 2);
  sqcRYGate(q, 0.6699085184520044, 3);
  sqcRZGate(q, -2.8801520501070423, 3);
  sqcRYGate(q, 1.844621042368697, 4);
  sqcRZGate(q, -2.37497447561695, 4);
  sqcRYGate(q, -2.1773329669029247, 5);
  sqcRZGate(q, 0.7386847191006432, 5);
  sqcRYGate(q, 1.4148963016675986, 6);
  sqcRZGate(q, -2.9465545079574733, 6);
  sqcRYGate(q, -2.421830157560625, 7);
  sqcRZGate(q, 2.3642230777028375, 7);
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
  sqcRYGate(q, 0.1768964415891059, 0);
  sqcRZGate(q, -2.115842673858732, 0);
  sqcRYGate(q, 0.4425931327540433, 1);
  sqcRZGate(q, 3.1034032589597853, 1);
  sqcRYGate(q, 0.704376103767485, 2);
  sqcRZGate(q, 2.6576648815090187, 2);
  sqcRYGate(q, -0.2792073604706582, 3);
  sqcRZGate(q, -2.298220210311931, 3);
  sqcRYGate(q, -1.57743199005849, 4);
  sqcRZGate(q, 0.02269515652167709, 4);
  sqcRYGate(q, -1.0575486075808982, 5);
  sqcRZGate(q, -1.013931111752166, 5);
  sqcRYGate(q, 2.518235992842818, 6);
  sqcRZGate(q, -1.406188126783026, 6);
  sqcRYGate(q, 0.6373090310353557, 7);
  sqcRZGate(q, 1.4888941628183892, 7);
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
  sqcRYGate(q, 1.5546917982319801, 0);
  sqcRZGate(q, -1.9260321299398617, 0);
  sqcRYGate(q, 0.6918678662642842, 1);
  sqcRZGate(q, 0.2800622923935407, 1);
  sqcRYGate(q, -0.9877171073693097, 2);
  sqcRZGate(q, -2.751080996404368, 2);
  sqcRYGate(q, -0.7806970491828462, 3);
  sqcRZGate(q, -2.8275008509565587, 3);
  sqcRYGate(q, -1.49320572458337, 4);
  sqcRZGate(q, 0.9535549591388263, 4);
  sqcRYGate(q, -2.7253189530891078, 5);
  sqcRZGate(q, -3.126244171952792, 5);
  sqcRYGate(q, 0.8744687217537169, 6);
  sqcRZGate(q, -1.5352498641840073, 6);
  sqcRYGate(q, -2.412596000508071, 7);
  sqcRZGate(q, -0.09220123667664293, 7);
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
  sqcRYGate(q, 2.7483628678908714, 0);
  sqcRZGate(q, -1.9348911626837246, 0);
  sqcRYGate(q, 0.5010604955123626, 1);
  sqcRZGate(q, -0.684720059317753, 1);
  sqcRYGate(q, -0.5088001253684702, 2);
  sqcRZGate(q, 0.23652472961504858, 2);
  sqcRYGate(q, -1.5451896971451777, 3);
  sqcRZGate(q, 0.8726829720789315, 3);
  sqcRYGate(q, -2.5900751109012856, 4);
  sqcRZGate(q, 2.047272686446736, 4);
  sqcRYGate(q, 1.6988044548896282, 5);
  sqcRZGate(q, 0.9633291897829097, 5);
  sqcRYGate(q, -1.9430891564698054, 6);
  sqcRZGate(q, -1.945879704669284, 6);
  sqcRYGate(q, -2.7417938407691707, 7);
  sqcRZGate(q, -0.7712448708515908, 7);
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
  sqcRYGate(q, -1.7290879169766802, 0);
  sqcRZGate(q, 1.2384085835599228, 0);
  sqcRYGate(q, -2.485165764339922, 1);
  sqcRZGate(q, 1.586846919163101, 1);
  sqcRYGate(q, 2.358312002135705, 2);
  sqcRZGate(q, 1.001019370406208, 2);
  sqcRYGate(q, -2.663925782438829, 3);
  sqcRZGate(q, 1.1564202826763101, 3);
  sqcRYGate(q, -0.8629137578454973, 4);
  sqcRZGate(q, 3.129810789664796, 4);
  sqcRYGate(q, -0.4335784275761121, 5);
  sqcRZGate(q, 0.04901352111757795, 5);
  sqcRYGate(q, 0.2951009628175054, 6);
  sqcRZGate(q, -3.12744808054555, 6);
  sqcRYGate(q, 2.202147686325121, 7);
  sqcRZGate(q, -2.0721436859887237, 7);
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
  sqcRYGate(q, -2.623171456576735, 0);
  sqcRZGate(q, -0.9984477936982648, 0);
  sqcRYGate(q, 0.44790915694926703, 1);
  sqcRZGate(q, 0.5019423189289318, 1);
  sqcRYGate(q, 1.2591100278244998, 2);
  sqcRZGate(q, -1.2491650969065855, 2);
  sqcRYGate(q, -0.38876839395884755, 3);
  sqcRZGate(q, 3.081474680301596, 3);
  sqcRYGate(q, 1.3369848308264123, 4);
  sqcRZGate(q, 1.2876779652102082, 4);
  sqcRYGate(q, 0.4630153150264382, 5);
  sqcRZGate(q, 1.7582941947383386, 5);
  sqcRYGate(q, -1.8936306709687383, 6);
  sqcRZGate(q, -1.9217879313852242, 6);
  sqcRYGate(q, -1.2228724924921694, 7);
  sqcRZGate(q, -0.4679036643384249, 7);
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
  sqcRYGate(q, -2.533827626523688, 0);
  sqcRZGate(q, -1.3806734456237446, 0);
  sqcRYGate(q, 2.253316958635878, 1);
  sqcRZGate(q, 1.138037341282641, 1);
  sqcRYGate(q, -2.3994970663662545, 2);
  sqcRZGate(q, 2.5275788301022444, 2);
  sqcRYGate(q, -2.4654430439772437, 3);
  sqcRZGate(q, -3.03343131920516, 3);
  sqcRYGate(q, 2.456325536534284, 4);
  sqcRZGate(q, 0.8929243509886913, 4);
  sqcRYGate(q, 0.07647445041603158, 5);
  sqcRZGate(q, -1.741096223578448, 5);
  sqcRYGate(q, -1.1271471647830609, 6);
  sqcRZGate(q, 2.109639943656645, 6);
  sqcRYGate(q, 2.0955130149323455, 7);
  sqcRZGate(q, -0.7484765608408708, 7);
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
  sqcRYGate(q, -1.098283758919373, 0);
  sqcRZGate(q, -1.0508958748070019, 0);
  sqcRYGate(q, -1.2093432660662566, 1);
  sqcRZGate(q, -3.013380054407099, 1);
  sqcRYGate(q, 1.3556980575531035, 2);
  sqcRZGate(q, 1.2514062922724658, 2);
  sqcRYGate(q, 2.0107904313472096, 3);
  sqcRZGate(q, -1.2267361198845617, 3);
  sqcRYGate(q, 0.49548828946600665, 4);
  sqcRZGate(q, 1.4679220135963877, 4);
  sqcRYGate(q, -2.3510556915534684, 5);
  sqcRZGate(q, 1.4695710495707832, 5);
  sqcRYGate(q, -0.8817829686278733, 6);
  sqcRZGate(q, -0.178776073450563, 6);
  sqcRYGate(q, 2.7501785803962715, 7);
  sqcRZGate(q, 1.7286500794488524, 7);
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
  sqcRYGate(q, -1.0329687891670303, 0);
  sqcRZGate(q, 0.21008767413713778, 0);
  sqcRYGate(q, -2.6271277017718315, 1);
  sqcRZGate(q, -0.5209271502636175, 1);
  sqcRYGate(q, 2.699384876946965, 2);
  sqcRZGate(q, 1.4444778935286677, 2);
  sqcRYGate(q, 0.17615237882906776, 3);
  sqcRZGate(q, 2.283325936105341, 3);
  sqcRYGate(q, 0.6372493776767717, 4);
  sqcRZGate(q, -2.864206753786655, 4);
  sqcRYGate(q, -0.7550596026752112, 5);
  sqcRZGate(q, 1.1250735439408723, 5);
  sqcRYGate(q, -0.3894727640076194, 6);
  sqcRZGate(q, -3.0098003408088108, 6);
  sqcRYGate(q, 2.5013198745806364, 7);
  sqcRZGate(q, -2.8384492599878497, 7);
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
  sqcRYGate(q, -2.2444232505109607, 0);
  sqcRZGate(q, 1.3061399540889613, 0);
  sqcRYGate(q, -2.4254333330234434, 1);
  sqcRZGate(q, 2.208318796297821, 1);
  sqcRYGate(q, 2.431708787544854, 2);
  sqcRZGate(q, 1.918112366845419, 2);
  sqcRYGate(q, 0.6247445878403259, 3);
  sqcRZGate(q, 1.4908442161927482, 3);
  sqcRYGate(q, -0.7340338221153013, 4);
  sqcRZGate(q, -2.7257650742327426, 4);
  sqcRYGate(q, -0.5779569129751199, 5);
  sqcRZGate(q, -0.8597861266323692, 5);
  sqcRYGate(q, -2.3341986479552124, 6);
  sqcRZGate(q, 2.7098290795095337, 6);
  sqcRYGate(q, 2.81081428187026, 7);
  sqcRZGate(q, 0.3358088932213122, 7);

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
