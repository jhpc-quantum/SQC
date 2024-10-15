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

  sqcRYGate(q, -3.0064725116265687, 0);
  sqcRZGate(q, -1.1789832065221137, 0);
  sqcRYGate(q, 1.5700126946309965, 1);
  sqcRZGate(q, -1.1768353122388446, 1);
  sqcRYGate(q, 1.0772669934077015, 2);
  sqcRZGate(q, -3.127998140145158, 2);
  sqcRYGate(q, 1.5708227979848806, 3);
  sqcRZGate(q, -1.57101532894582, 3);
  sqcRYGate(q, 2.3976561383989057, 4);
  sqcRZGate(q, -0.13651309255317584, 4);
  sqcRYGate(q, -1.570815750545261, 5);
  sqcRZGate(q, -1.5710867134900233, 5);
  sqcRYGate(q, 1.5740177947517697, 6);
  sqcRZGate(q, -1.9509483012656752, 6);
  sqcRYGate(q, -1.5707824772541377, 7);
  sqcRZGate(q, -1.5708618324094257, 7);
  sqcRYGate(q, -2.7277863452090423, 8);
  sqcRZGate(q, -1.5706373622179237, 8);
  sqcRYGate(q, -1.5707963296678678, 9);
  sqcRZGate(q, 1.5707988168824216, 9);
  sqcRYGate(q, 1.571365451941259, 10);
  sqcRZGate(q, 0.4426908928070805, 10);
  sqcRYGate(q, 1.5707986038656572, 11);
  sqcRZGate(q, 1.5707947919485603, 11);
  sqcRYGate(q, 1.5707730594712723, 12);
  sqcRZGate(q, -1.5700520608074955, 12);
  sqcRYGate(q, -1.5707942297853235, 13);
  sqcRZGate(q, 1.57079132530935, 13);
  sqcRYGate(q, -2.912179738538272, 14);
  sqcRZGate(q, 8.450975730145417e-05, 14);
  sqcRYGate(q, -3.0832589938315302, 15);
  sqcRZGate(q, 3.1140105317352904, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.48772415790819174, 0);
  sqcRZGate(q, -3.141147894490209, 0);
  sqcRYGate(q, 3.137263796813848, 1);
  sqcRZGate(q, 0.46019839962592807, 1);
  sqcRYGate(q, 1.5732644191103824, 2);
  sqcRZGate(q, -0.0003949600334072643, 2);
  sqcRYGate(q, 2.853982677447422, 3);
  sqcRZGate(q, -0.00017344478809544484, 3);
  sqcRYGate(q, -2.251574153623205, 4);
  sqcRZGate(q, -3.1333711406842926, 4);
  sqcRYGate(q, -0.5093005166628101, 5);
  sqcRZGate(q, 0.0002645954741197256, 5);
  sqcRYGate(q, -1.5714516654423594, 6);
  sqcRZGate(q, -0.6807245184053441, 6);
  sqcRYGate(q, -1.5710808432420675, 7);
  sqcRZGate(q, 6.429009875219548e-05, 7);
  sqcRYGate(q, 2.8562145784974167, 8);
  sqcRZGate(q, -1.570707712346608, 8);
  sqcRYGate(q, -0.12279682978938682, 9);
  sqcRZGate(q, 3.1415896855982384, 9);
  sqcRYGate(q, 1.570691504044449, 10);
  sqcRZGate(q, -3.12695829309817e-05, 10);
  sqcRYGate(q, 1.569756639307543, 11);
  sqcRZGate(q, -3.141585973591991, 11);
  sqcRYGate(q, 1.5707053065653038, 12);
  sqcRZGate(q, -0.1586466322546327, 12);
  sqcRYGate(q, 1.5702580095070768, 13);
  sqcRZGate(q, 1.5707991345326704, 13);
  sqcRYGate(q, 1.57079205393549, 14);
  sqcRZGate(q, 1.5707871392409098, 14);
  sqcRYGate(q, -2.3907841576039366, 15);
  sqcRZGate(q, 1.4789514393680436, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.5184381956783466, 0);
  sqcRZGate(q, 1.711935471925976, 0);
  sqcRYGate(q, -2.6599707915429107, 1);
  sqcRZGate(q, 1.5704217140003682, 1);
  sqcRYGate(q, -0.5099646293675505, 2);
  sqcRZGate(q, 2.9146903626777183, 2);
  sqcRYGate(q, -2.758840858722343, 3);
  sqcRZGate(q, 0.0006700126481362397, 3);
  sqcRYGate(q, 1.3293305909131714, 4);
  sqcRZGate(q, 3.133909297962717, 4);
  sqcRYGate(q, -0.3818555180130965, 5);
  sqcRZGate(q, -3.1184868081490666, 5);
  sqcRYGate(q, -3.1322815744209183, 6);
  sqcRZGate(q, 0.27342241650351534, 6);
  sqcRYGate(q, 1.5709654891533775, 7);
  sqcRZGate(q, -3.1407614364230336, 7);
  sqcRYGate(q, -1.5707282319392686, 8);
  sqcRZGate(q, 3.140391370227442, 8);
  sqcRYGate(q, -1.5704993718784208, 9);
  sqcRZGate(q, 3.141589283957847, 9);
  sqcRYGate(q, 1.5706475627369905, 10);
  sqcRZGate(q, -3.141591282682926, 10);
  sqcRYGate(q, -0.3978724096656645, 11);
  sqcRZGate(q, 3.1415854179038876, 11);
  sqcRYGate(q, 0.1442317943680198, 12);
  sqcRZGate(q, -2.8882125673143224, 12);
  sqcRYGate(q, -2.670213491767395, 13);
  sqcRZGate(q, -4.632020387695945e-06, 13);
  sqcRYGate(q, 1.570799509962943, 14);
  sqcRZGate(q, -1.0449925041565897e-05, 14);
  sqcRYGate(q, 6.322686912696439e-06, 15);
  sqcRZGate(q, 0.08991555265536189, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.571294786591313, 0);
  sqcRZGate(q, 1.4577642184341966, 0);
  sqcRYGate(q, -2.304881137089058, 1);
  sqcRZGate(q, 1.5705044431251638, 1);
  sqcRYGate(q, -3.1394784926939163, 2);
  sqcRZGate(q, -1.8387498827132547, 2);
  sqcRYGate(q, 0.23137261322560573, 3);
  sqcRZGate(q, 1.5704295993756057, 3);
  sqcRYGate(q, 0.8899027436125042, 4);
  sqcRZGate(q, -3.140770038857682, 4);
  sqcRYGate(q, -3.1295855328543754, 5);
  sqcRZGate(q, 1.5938777215922428, 5);
  sqcRYGate(q, -0.00010235811724612633, 6);
  sqcRZGate(q, 0.7279149985441453, 6);
  sqcRYGate(q, 3.0906724473452174, 7);
  sqcRZGate(q, -1.5697343039232936, 7);
  sqcRYGate(q, -2.8432649745689966, 8);
  sqcRZGate(q, 1.0210587738605001, 8);
  sqcRYGate(q, -0.3313894151604544, 9);
  sqcRZGate(q, -1.5707939743882342, 9);
  sqcRYGate(q, -1.5708409655115678, 10);
  sqcRZGate(q, 1.4531686099373242, 10);
  sqcRYGate(q, -1.5714570222480568, 11);
  sqcRZGate(q, 1.5707946970929507, 11);
  sqcRYGate(q, -1.5705403573507215, 12);
  sqcRZGate(q, -1.5708308466780467, 12);
  sqcRYGate(q, 1.5707534499849594, 13);
  sqcRZGate(q, -1.5707900832930184, 13);
  sqcRYGate(q, -1.570771083275376, 14);
  sqcRZGate(q, 1.5707919288147727, 14);
  sqcRYGate(q, 1.5707988071398171, 15);
  sqcRZGate(q, 1.985258311520965e-06, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -3.1412117312272527, 0);
  sqcRZGate(q, 1.6457502983996593, 0);
  sqcRYGate(q, -1.5708066972297496, 1);
  sqcRZGate(q, 2.365924759159205, 1);
  sqcRYGate(q, 1.570876972668939, 2);
  sqcRZGate(q, -2.517789211424913, 2);
  sqcRYGate(q, 1.5717114399732204, 3);
  sqcRZGate(q, -2.531899685911545, 3);
  sqcRYGate(q, 2.192386112549076, 4);
  sqcRZGate(q, -0.9503900441765536, 4);
  sqcRYGate(q, 1.5708558307041152, 5);
  sqcRZGate(q, -1.2087925002575206, 5);
  sqcRYGate(q, -1.5757674719813608, 6);
  sqcRZGate(q, 0.6346499849406443, 6);
  sqcRYGate(q, -1.570818306899067, 7);
  sqcRZGate(q, -0.9609638183550847, 7);
  sqcRYGate(q, -7.540236774151172e-05, 8);
  sqcRZGate(q, 1.1730511517262574, 8);
  sqcRYGate(q, 1.5707964285765093, 9);
  sqcRZGate(q, -0.9608748102289484, 9);
  sqcRYGate(q, 1.5708825647186018, 10);
  sqcRZGate(q, -2.5171071861793113, 10);
  sqcRYGate(q, -1.570796713461073, 11);
  sqcRZGate(q, -0.9609502441790272, 11);
  sqcRYGate(q, 1.5708907223951432, 12);
  sqcRZGate(q, 0.6234891195344296, 12);
  sqcRYGate(q, 1.5707969035871274, 13);
  sqcRZGate(q, -2.5317389050987944, 13);
  sqcRYGate(q, -1.869213368941491, 14);
  sqcRZGate(q, -0.9473582099332098, 14);
  sqcRYGate(q, -1.5707937932312062, 15);
  sqcRZGate(q, -2.5316990586839854, 15);

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
