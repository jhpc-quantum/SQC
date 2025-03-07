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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -2.7121911160312027, 0);
  sqcRZGate(q, -1.6779749592977389, 0);
  sqcRYGate(q, -1.6399339336058674, 1);
  sqcRZGate(q, 0.10135004225627571, 1);
  sqcRYGate(q, 0.6968663547977305, 2);
  sqcRZGate(q, 0.5594196551246733, 2);
  sqcRYGate(q, -2.06701719008471, 3);
  sqcRZGate(q, 1.8966134631868161, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3333237043363113, 0);
  sqcRZGate(q, -1.8289194967466829, 0);
  sqcRYGate(q, -2.1075983019177613, 1);
  sqcRZGate(q, -1.930381233728161, 1);
  sqcRYGate(q, 2.6637072534323343, 2);
  sqcRZGate(q, 1.4552678824653476, 2);
  sqcRYGate(q, -2.4100660927431785, 3);
  sqcRZGate(q, 0.6754781706035562, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4848421241172236, 0);
  sqcRZGate(q, 2.993155579470132, 0);
  sqcRYGate(q, 0.5725734658047167, 1);
  sqcRZGate(q, 1.7292660001870772, 1);
  sqcRYGate(q, -1.2726142438565526, 2);
  sqcRZGate(q, 0.26705107068741274, 2);
  sqcRYGate(q, 0.1222135057838365, 3);
  sqcRZGate(q, -1.7537707673567438, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3724997747152519, 0);
  sqcRZGate(q, -2.257980854105514, 0);
  sqcRYGate(q, -1.8717824499078217, 1);
  sqcRZGate(q, 2.3362017843424567, 1);
  sqcRYGate(q, -2.4448479406462456, 2);
  sqcRZGate(q, 1.393871096663113, 2);
  sqcRYGate(q, -0.7197513235259759, 3);
  sqcRZGate(q, 2.9786570589673196, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.309186965358175, 0);
  sqcRZGate(q, -1.40773055768407, 0);
  sqcRYGate(q, 0.26371980380270554, 1);
  sqcRZGate(q, 1.1689252348310755, 1);
  sqcRYGate(q, -1.435283341215632, 2);
  sqcRZGate(q, -0.9292769460463948, 2);
  sqcRYGate(q, 0.42677275880382, 3);
  sqcRZGate(q, 2.7133911419346424, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8910196126749188, 0);
  sqcRZGate(q, -3.0117329785732943, 0);
  sqcRYGate(q, -1.4402274872810708, 1);
  sqcRZGate(q, -0.7584967077067084, 1);
  sqcRYGate(q, -2.592795665707604, 2);
  sqcRZGate(q, -2.1308770766250866, 2);
  sqcRYGate(q, -0.758454313364803, 3);
  sqcRZGate(q, -1.9516546755371287, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.565578237318709, 0);
  sqcRZGate(q, -1.2899876101888121, 0);
  sqcRYGate(q, 0.3735884052687338, 1);
  sqcRZGate(q, 2.6185983785656424, 1);
  sqcRYGate(q, -2.1265230330700176, 2);
  sqcRZGate(q, -1.6644398499751478, 2);
  sqcRYGate(q, -0.8700528724900296, 3);
  sqcRZGate(q, -2.30153263676652, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.4213638261609014, 0);
  sqcRZGate(q, 0.19223583735170813, 0);
  sqcRYGate(q, -2.1951042938110112, 1);
  sqcRZGate(q, 1.0646429746140316, 1);
  sqcRYGate(q, 1.2204772282937961, 2);
  sqcRZGate(q, 2.192818117897445, 2);
  sqcRYGate(q, -1.0063474519183142, 3);
  sqcRZGate(q, -2.753224389539462, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.005300910098800067, 0);
  sqcRZGate(q, -0.3057121347962237, 0);
  sqcRYGate(q, -1.9278013652118042, 1);
  sqcRZGate(q, 0.9123838096727042, 1);
  sqcRYGate(q, 0.08778776429887802, 2);
  sqcRZGate(q, -0.04262827923318912, 2);
  sqcRYGate(q, 3.08440204304475, 3);
  sqcRZGate(q, 0.7136177642657254, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.702389086262014, 0);
  sqcRZGate(q, -0.26683498562245445, 0);
  sqcRYGate(q, 0.250798390351731, 1);
  sqcRZGate(q, 2.6993530440493996, 1);
  sqcRYGate(q, -3.027070981871224, 2);
  sqcRZGate(q, 2.224008460362689, 2);
  sqcRYGate(q, -0.5010159538612319, 3);
  sqcRZGate(q, -3.0724712264648155, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.452859372086703, 0);
  sqcRZGate(q, 1.9678831941664507, 0);
  sqcRYGate(q, 0.5471632941164037, 1);
  sqcRZGate(q, -3.035609800334015, 1);
  sqcRYGate(q, -1.5252295700479577, 2);
  sqcRZGate(q, -1.5008615552684281, 2);
  sqcRYGate(q, -2.5103098538988617, 3);
  sqcRZGate(q, -0.8294949686438118, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3718555846956053, 0);
  sqcRZGate(q, -1.3926288267070799, 0);
  sqcRYGate(q, 1.249103216829561, 1);
  sqcRZGate(q, -2.5604950507414785, 1);
  sqcRYGate(q, 0.26954823118614135, 2);
  sqcRZGate(q, 2.59462858329115, 2);
  sqcRYGate(q, 1.0688152180333272, 3);
  sqcRZGate(q, 0.7847255014746494, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0216247597916286, 0);
  sqcRZGate(q, -2.0689688042377417, 0);
  sqcRYGate(q, 0.15482307294740222, 1);
  sqcRZGate(q, 0.22285312250813313, 1);
  sqcRYGate(q, -1.58180694087224, 2);
  sqcRZGate(q, -1.5373067823358184, 2);
  sqcRYGate(q, -2.289180267315209, 3);
  sqcRZGate(q, -0.13531498032555778, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.426426127756704, 0);
  sqcRZGate(q, 1.8659939983794143, 0);
  sqcRYGate(q, -1.7438768404671865, 1);
  sqcRZGate(q, 2.3793319211405675, 1);
  sqcRYGate(q, -0.8048316349714675, 2);
  sqcRZGate(q, -1.6627207894437648, 2);
  sqcRYGate(q, 0.7528440367187711, 3);
  sqcRZGate(q, -0.20049330259706033, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4609512905473387, 0);
  sqcRZGate(q, -2.228013259544551, 0);
  sqcRYGate(q, 0.8030597737529239, 1);
  sqcRZGate(q, -1.6979952999680412, 1);
  sqcRYGate(q, 2.8170286717840414, 2);
  sqcRZGate(q, -1.8776504532100446, 2);
  sqcRYGate(q, 2.219442386895432, 3);
  sqcRZGate(q, -0.8984604148517873, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.15576302200013625, 0);
  sqcRZGate(q, 1.5056343762211304, 0);
  sqcRYGate(q, -0.23214901763476625, 1);
  sqcRZGate(q, -2.2986875238534106, 1);
  sqcRYGate(q, -1.3238576759486183, 2);
  sqcRZGate(q, 0.5385183145699372, 2);
  sqcRYGate(q, 0.46820104658967165, 3);
  sqcRZGate(q, -2.4257703223665645, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.684381583186842, 0);
  sqcRZGate(q, 2.2274272190554125, 0);
  sqcRYGate(q, -1.0002385428336118, 1);
  sqcRZGate(q, 1.6813683584885712, 1);
  sqcRYGate(q, -0.847789568866042, 2);
  sqcRZGate(q, -1.0960526058126794, 2);
  sqcRYGate(q, 0.6725395579387562, 3);
  sqcRZGate(q, 0.9033716939310202, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4523092521726773, 0);
  sqcRZGate(q, 2.3702942294095544, 0);
  sqcRYGate(q, 0.051957350987049004, 1);
  sqcRZGate(q, -1.1562492234070205, 1);
  sqcRYGate(q, 2.791740092486631, 2);
  sqcRZGate(q, -0.36473624590060166, 2);
  sqcRYGate(q, 1.6054902535977602, 3);
  sqcRZGate(q, -2.235856564470463, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.46588376371887824, 0);
  sqcRZGate(q, 1.752491445290571, 0);
  sqcRYGate(q, -2.9943715808373885, 1);
  sqcRZGate(q, 0.9290833348356203, 1);
  sqcRYGate(q, -0.3782253729396316, 2);
  sqcRZGate(q, -1.223903047005641, 2);
  sqcRYGate(q, 1.3405445375426368, 3);
  sqcRZGate(q, 1.3561205559646692, 3);

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
