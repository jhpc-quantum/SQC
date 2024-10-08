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

  sqcRYGate(q, -0.30197753648266, 0);
  sqcRZGate(q, -1.7343632905463595, 0);
  sqcRYGate(q, -0.0003794483409358211, 1);
  sqcRZGate(q, -0.07215713463697959, 1);
  sqcRYGate(q, 0.0016168282017154922, 2);
  sqcRZGate(q, 2.5328187921174123, 2);
  sqcRYGate(q, 0.019863208228485085, 3);
  sqcRZGate(q, 1.5961651276204873, 3);
  sqcRYGate(q, -2.059225489647896, 4);
  sqcRZGate(q, 1.069112543222488, 4);
  sqcRYGate(q, -3.141339381590948, 5);
  sqcRZGate(q, -2.0658761997332267, 5);
  sqcRYGate(q, -1.5651425714003508, 6);
  sqcRZGate(q, -0.004231945872381799, 6);
  sqcRYGate(q, 0.003670542846838544, 7);
  sqcRZGate(q, -1.8426626480077348, 7);
  sqcRYGate(q, 1.572084259104574, 8);
  sqcRZGate(q, 2.9742481443960505, 8);
  sqcRYGate(q, -3.140452249672258, 9);
  sqcRZGate(q, -0.35998234879290253, 9);
  sqcRYGate(q, -8.574590594712106e-05, 10);
  sqcRZGate(q, 0.30122409004636896, 10);
  sqcRYGate(q, -3.138310235196412, 11);
  sqcRZGate(q, -2.243565807791108, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.013704942950270471, 0);
  sqcRZGate(q, -1.3140906051539298, 0);
  sqcRYGate(q, 3.14044379677097, 1);
  sqcRZGate(q, -2.648218342961801, 1);
  sqcRYGate(q, 0.00015053255131292076, 2);
  sqcRZGate(q, -1.6033418150377718, 2);
  sqcRYGate(q, -2.6984070569965755, 3);
  sqcRZGate(q, 2.2308739211838966, 3);
  sqcRYGate(q, 3.136193809333025, 4);
  sqcRZGate(q, -2.479691522792025, 4);
  sqcRYGate(q, 1.5718130030511666, 5);
  sqcRZGate(q, 2.1916439209339407, 5);
  sqcRYGate(q, 1.607175232654036, 6);
  sqcRZGate(q, 1.0982908623452445, 6);
  sqcRYGate(q, 1.2218096039259285, 7);
  sqcRZGate(q, 0.0026850994076133, 7);
  sqcRYGate(q, 3.1105814816465425, 8);
  sqcRZGate(q, 2.440039105931558, 8);
  sqcRYGate(q, 0.0009253820429482762, 9);
  sqcRZGate(q, 2.5986505566859757, 9);
  sqcRYGate(q, -3.1241571910239747, 10);
  sqcRZGate(q, 0.9870564737086936, 10);
  sqcRYGate(q, 0.3533693573901475, 11);
  sqcRZGate(q, -0.003324364489967294, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 0.00012772977729945954, 0);
  sqcRZGate(q, 3.0411782697186234, 0);
  sqcRYGate(q, -0.0003921528205759366, 1);
  sqcRZGate(q, -2.4358073168270313, 1);
  sqcRYGate(q, 3.1399775779051975, 2);
  sqcRZGate(q, -0.45634770356808213, 2);
  sqcRYGate(q, -0.0005824256995914106, 3);
  sqcRZGate(q, 0.828366571906147, 3);
  sqcRYGate(q, -0.0003636772739774585, 4);
  sqcRZGate(q, -2.737167033187658, 4);
  sqcRYGate(q, -3.1381755454228504, 5);
  sqcRZGate(q, 0.6204989271015418, 5);
  sqcRYGate(q, -3.14076365139003, 6);
  sqcRZGate(q, -1.1385851108653766, 6);
  sqcRYGate(q, 1.5693333073224451, 7);
  sqcRZGate(q, 1.5709003327041502, 7);
  sqcRYGate(q, -0.0016421877181604927, 8);
  sqcRZGate(q, -2.6855838533557383, 8);
  sqcRYGate(q, 1.578776183977717, 9);
  sqcRZGate(q, -1.5647793271131833, 9);
  sqcRYGate(q, 3.14142104606914, 10);
  sqcRZGate(q, -1.2358637623790427, 10);
  sqcRYGate(q, -1.5717369928484624, 11);
  sqcRZGate(q, 1.568568763279779, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -1.7220028320841232, 0);
  sqcRZGate(q, 1.4324240403183026, 0);
  sqcRYGate(q, 0.001368091916661207, 1);
  sqcRZGate(q, -0.13960286003225694, 1);
  sqcRYGate(q, 1.5703535578928456, 2);
  sqcRZGate(q, 0.008571827893723214, 2);
  sqcRYGate(q, -0.02872901502914826, 3);
  sqcRZGate(q, -0.9558517505988557, 3);
  sqcRYGate(q, 0.8400061069219183, 4);
  sqcRZGate(q, -1.6316942503943368, 4);
  sqcRYGate(q, -1.56534383161042, 5);
  sqcRZGate(q, 1.234326655338533, 5);
  sqcRYGate(q, -3.1152697579463355, 6);
  sqcRZGate(q, -0.36987814144612924, 6);
  sqcRYGate(q, 1.564458438652107, 7);
  sqcRZGate(q, 1.0108627203588911, 7);
  sqcRYGate(q, 2.420251206314634, 8);
  sqcRZGate(q, -2.9580154628076487, 8);
  sqcRYGate(q, -1.5726106175011445, 9);
  sqcRZGate(q, -1.2412445715059481, 9);
  sqcRYGate(q, 3.1415364988058916, 10);
  sqcRZGate(q, -2.8188114709203336, 10);
  sqcRYGate(q, -1.5648486921770655, 11);
  sqcRZGate(q, -0.32419643788556307, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.1316909520552776, 0);
  sqcRZGate(q, 0.5872042654960676, 0);
  sqcRYGate(q, -0.0003140308291876185, 1);
  sqcRZGate(q, -2.759031488320671, 1);
  sqcRYGate(q, 1.5718674471638199, 2);
  sqcRZGate(q, -2.298191576472679, 2);
  sqcRYGate(q, -0.0005259919223998821, 3);
  sqcRZGate(q, 2.574457914324787, 3);
  sqcRYGate(q, 0.02211251579239981, 4);
  sqcRZGate(q, 0.7942481510343491, 4);
  sqcRYGate(q, 3.1258793271284038, 5);
  sqcRZGate(q, -2.402187185064836, 5);
  sqcRYGate(q, 2.0351832188353463, 6);
  sqcRZGate(q, 0.15219837730947905, 6);
  sqcRYGate(q, 0.016406748807839655, 7);
  sqcRZGate(q, -3.0806670496271362, 7);
  sqcRYGate(q, -1.69566261465111, 8);
  sqcRZGate(q, 2.655226130179366, 8);
  sqcRYGate(q, 3.107484506503276, 9);
  sqcRZGate(q, 1.6135170681305455, 9);
  sqcRYGate(q, -3.141163627712818, 10);
  sqcRZGate(q, 1.1124460476605753, 10);
  sqcRYGate(q, 0.03576738660114387, 11);
  sqcRZGate(q, -1.3985629469828629, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 1.5799289510280143, 0);
  sqcRZGate(q, 3.1085414743696527, 0);
  sqcRYGate(q, -3.1414820692353906, 1);
  sqcRZGate(q, 0.05691936322575583, 1);
  sqcRYGate(q, -1.5973932361826926, 2);
  sqcRZGate(q, -0.8590376808278731, 2);
  sqcRYGate(q, 3.134873644559912, 3);
  sqcRZGate(q, -1.6004093377211723, 3);
  sqcRYGate(q, 1.5612170597050359, 4);
  sqcRZGate(q, -0.1718774811551933, 4);
  sqcRYGate(q, -3.1385077109374455, 5);
  sqcRZGate(q, -0.5097364733652201, 5);
  sqcRYGate(q, 0.8405842148102671, 6);
  sqcRZGate(q, -2.907859040825958, 6);
  sqcRYGate(q, -0.0012827377345274726, 7);
  sqcRZGate(q, -1.063404813503328, 7);
  sqcRYGate(q, -0.8374503496277399, 8);
  sqcRZGate(q, 2.6515552105213294, 8);
  sqcRYGate(q, 0.0005415169079707738, 9);
  sqcRZGate(q, 1.8512222849428062, 9);
  sqcRYGate(q, 1.5705634263764254, 10);
  sqcRZGate(q, 0.0029140376511894097, 10);
  sqcRYGate(q, -3.1406441568705925, 11);
  sqcRZGate(q, 1.4247142819753824, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 0.06743564091261543, 0);
  sqcRZGate(q, -2.277088878299378, 0);
  sqcRYGate(q, 0.11021303602613847, 1);
  sqcRZGate(q, 1.6428630068077654, 1);
  sqcRYGate(q, 0.005703370629217553, 2);
  sqcRZGate(q, 0.5633043572766523, 2);
  sqcRYGate(q, 1.996723778765273, 3);
  sqcRZGate(q, -1.5618918503146504, 3);
  sqcRYGate(q, -3.082833702238899, 4);
  sqcRZGate(q, -1.9622316361265193, 4);
  sqcRYGate(q, 2.5106398256891276, 5);
  sqcRZGate(q, 1.0494037786426793, 5);
  sqcRYGate(q, 0.008037186435010802, 6);
  sqcRZGate(q, -1.849172557609835, 6);
  sqcRYGate(q, 0.9423436250944999, 7);
  sqcRZGate(q, 1.083650817531612, 7);
  sqcRYGate(q, 0.004613357303806965, 8);
  sqcRZGate(q, -1.9527119502425825, 8);
  sqcRYGate(q, -0.9910432625862742, 9);
  sqcRZGate(q, 2.0469985046570773, 9);
  sqcRYGate(q, -1.5619214190309938, 10);
  sqcRZGate(q, -1.8744824904714228, 10);
  sqcRYGate(q, 2.138791496115699, 11);
  sqcRZGate(q, 1.9813829586159226, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.139581445182443, 0);
  sqcRZGate(q, -1.2141857436318277, 0);
  sqcRYGate(q, -1.5652326680491067, 1);
  sqcRZGate(q, 0.02240136951825189, 1);
  sqcRYGate(q, 0.003264700351029326, 2);
  sqcRZGate(q, 1.3338417032541976, 2);
  sqcRYGate(q, 1.5581310615212012, 3);
  sqcRZGate(q, 1.332794600735764, 3);
  sqcRYGate(q, 0.0011428158662960541, 4);
  sqcRZGate(q, -0.9801469234767497, 4);
  sqcRYGate(q, -3.1237591986203412, 5);
  sqcRZGate(q, 1.4077767425354644, 5);
  sqcRYGate(q, 3.1341778639864017, 6);
  sqcRZGate(q, -2.991569962989707, 6);
  sqcRYGate(q, -0.0178401555444779, 7);
  sqcRZGate(q, 1.1601729030416095, 7);
  sqcRYGate(q, -3.1359513797745437, 8);
  sqcRZGate(q, -2.7080589348994475, 8);
  sqcRYGate(q, 0.023087683038010086, 9);
  sqcRZGate(q, -0.9568318706805351, 9);
  sqcRYGate(q, -3.130749301040159, 10);
  sqcRZGate(q, 0.125392314431521, 10);
  sqcRYGate(q, 0.02300029565876649, 11);
  sqcRZGate(q, -3.077291181002319, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.1395465904636937, 0);
  sqcRZGate(q, 2.840040305667563, 0);
  sqcRYGate(q, 1.5852431814288181, 1);
  sqcRZGate(q, -0.28249678199801487, 1);
  sqcRYGate(q, 3.1399419613769095, 2);
  sqcRZGate(q, 2.79781203836568, 2);
  sqcRYGate(q, 3.024117533880679, 3);
  sqcRZGate(q, 3.048906175988395, 3);
  sqcRYGate(q, -4.1749555522940796e-05, 4);
  sqcRZGate(q, -1.7687509577155156, 4);
  sqcRYGate(q, -3.127394851156919, 5);
  sqcRZGate(q, -1.0866410752845361, 5);
  sqcRYGate(q, -3.1414906405802263, 6);
  sqcRZGate(q, 1.926408941085791, 6);
  sqcRYGate(q, -0.009498288600649156, 7);
  sqcRZGate(q, 2.597427435905257, 7);
  sqcRYGate(q, -0.0036067439056239555, 8);
  sqcRZGate(q, -2.72308820179098, 8);
  sqcRYGate(q, 3.1389512631834875, 9);
  sqcRZGate(q, 2.786094178637397, 9);
  sqcRYGate(q, 3.1378179612403594, 10);
  sqcRZGate(q, -2.5632711430995205, 10);
  sqcRYGate(q, -3.139940157873418, 11);
  sqcRZGate(q, 0.6019808308248494, 11);

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
