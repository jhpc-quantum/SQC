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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -9.085597412195057e-07, 0);
  sqcRZGate(q, 2.9939801330937463, 0);
  sqcRYGate(q, 1.5707072990774722, 1);
  sqcRZGate(q, 0.30887903743981515, 1);
  sqcRYGate(q, 3.1409210450030307, 2);
  sqcRZGate(q, -0.899668635395409, 2);
  sqcRYGate(q, 0.2635046341830387, 3);
  sqcRZGate(q, 1.5574662758557885, 3);
  sqcRYGate(q, 3.0463470780859927, 4);
  sqcRZGate(q, 2.422167564135863e-05, 4);
  sqcRYGate(q, -0.7027384932408066, 5);
  sqcRZGate(q, -3.141291335603304, 5);
  sqcRYGate(q, 3.1415922445812203, 6);
  sqcRZGate(q, -2.9798759190829434, 6);
  sqcRYGate(q, 1.7500785384496131, 7);
  sqcRZGate(q, 3.141588389545518, 7);
  sqcRYGate(q, -0.07910738386238178, 8);
  sqcRZGate(q, -7.673044252065607e-05, 8);
  sqcRYGate(q, 0.5936840114854548, 9);
  sqcRZGate(q, 3.141493533779638, 9);
  sqcRYGate(q, -6.855029157648573e-07, 10);
  sqcRZGate(q, -2.35562962115071, 10);
  sqcRYGate(q, 3.141591993897417, 11);
  sqcRZGate(q, -2.4102544347276673, 11);
  sqcRYGate(q, 2.2693882814663993, 12);
  sqcRZGate(q, 3.1415840579571577, 12);
  sqcRYGate(q, 3.084992025014294, 13);
  sqcRZGate(q, 1.1700204683329218e-05, 13);
  sqcRYGate(q, 1.6378213394006957, 14);
  sqcRZGate(q, -7.25556082902188e-07, 14);
  sqcRYGate(q, -2.952312327999696, 15);
  sqcRZGate(q, -1.5708002172069435, 15);
  sqcRYGate(q, -0.16350447665349013, 16);
  sqcRZGate(q, -8.799789095625956e-06, 16);
  sqcRYGate(q, -3.5593328814509653e-09, 17);
  sqcRZGate(q, 1.0119454282182376, 17);
  sqcRYGate(q, 1.2094293620550247, 18);
  sqcRZGate(q, 2.290279872418921e-06, 18);
  sqcRYGate(q, 3.0184051758625072, 19);
  sqcRZGate(q, -1.5707909147885668, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.5707946363233898, 0);
  sqcRZGate(q, 1.570758782819146, 0);
  sqcRYGate(q, -8.897205987953612e-05, 1);
  sqcRZGate(q, -1.8764581477231532, 1);
  sqcRYGate(q, 1.1860170843987903, 2);
  sqcRZGate(q, -2.162560112986777, 2);
  sqcRYGate(q, -0.10454684180173392, 3);
  sqcRZGate(q, 3.0173360769318838, 3);
  sqcRYGate(q, -0.7992896027828105, 4);
  sqcRZGate(q, 3.141334748041162, 4);
  sqcRYGate(q, -0.009239070672544258, 5);
  sqcRZGate(q, -0.6903795608767062, 5);
  sqcRYGate(q, 3.1415901693107102, 6);
  sqcRZGate(q, 0.2861366799111641, 6);
  sqcRYGate(q, 1.610122935016213, 7);
  sqcRZGate(q, 0.000227682972716896, 7);
  sqcRYGate(q, -0.466180709422237, 8);
  sqcRZGate(q, -7.6429743939066e-05, 8);
  sqcRYGate(q, 0.04180040066655888, 9);
  sqcRZGate(q, 8.412104150194205e-05, 9);
  sqcRYGate(q, 3.1415926018811353, 10);
  sqcRZGate(q, -1.911782431913403, 10);
  sqcRYGate(q, 3.1415925098099167, 11);
  sqcRZGate(q, -1.1715064040329077, 11);
  sqcRYGate(q, 3.044160105906995, 12);
  sqcRZGate(q, -1.5708030537100681, 12);
  sqcRYGate(q, 3.0696981105685315, 13);
  sqcRZGate(q, -1.5707993783440162, 13);
  sqcRYGate(q, 1.6870938062086127, 14);
  sqcRZGate(q, -2.4888333388583064, 14);
  sqcRYGate(q, 1.5707962024139892, 15);
  sqcRZGate(q, 1.2528191519708756, 15);
  sqcRYGate(q, 3.128427933624651, 16);
  sqcRZGate(q, 2.5135330367251476, 16);
  sqcRYGate(q, -1.5707966479307602, 17);
  sqcRZGate(q, -0.7304058452203864, 17);
  sqcRYGate(q, 1.4242866316575713, 18);
  sqcRZGate(q, -3.141588205738497, 18);
  sqcRYGate(q, 1.570796559045152, 19);
  sqcRZGate(q, -0.14371154199709388, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -3.035341383355168, 0);
  sqcRZGate(q, -4.3019145238964995e-05, 0);
  sqcRYGate(q, -1.5707948594209276, 1);
  sqcRZGate(q, 1.5707994517049793, 1);
  sqcRYGate(q, 3.141592553856796, 2);
  sqcRZGate(q, 0.3967137624127413, 2);
  sqcRYGate(q, -3.141592470505836, 3);
  sqcRZGate(q, -1.713391951451861, 3);
  sqcRYGate(q, 0.09148209088043369, 4);
  sqcRZGate(q, 1.4100345905381422, 4);
  sqcRYGate(q, -3.141527077121645, 5);
  sqcRZGate(q, 0.8808020228801415, 5);
  sqcRYGate(q, -1.5707977542226175, 6);
  sqcRZGate(q, -1.6322833586064582, 6);
  sqcRYGate(q, -0.07706763598637462, 7);
  sqcRZGate(q, 3.1412813910829205, 7);
  sqcRYGate(q, 0.03347126313002313, 8);
  sqcRZGate(q, 1.5708654208435084, 8);
  sqcRYGate(q, 0.08137093166629583, 9);
  sqcRZGate(q, 1.5708832724294632, 9);
  sqcRYGate(q, -9.772980895661474e-07, 10);
  sqcRZGate(q, 0.9738793590536686, 10);
  sqcRYGate(q, -1.5707962156763708, 11);
  sqcRZGate(q, -3.14159201000622, 11);
  sqcRYGate(q, 0.1103839528075028, 12);
  sqcRZGate(q, -3.141560310905158, 12);
  sqcRYGate(q, -2.45038965133035, 13);
  sqcRZGate(q, -3.1415473722620963, 13);
  sqcRYGate(q, -3.141592645425891, 14);
  sqcRZGate(q, -1.1061817192767294, 14);
  sqcRYGate(q, -1.570791908175794, 15);
  sqcRZGate(q, 1.5707969568220088, 15);
  sqcRYGate(q, 2.0571338676944606e-07, 16);
  sqcRZGate(q, 0.6280535540650227, 16);
  sqcRYGate(q, -3.141592645617168, 17);
  sqcRZGate(q, -3.0282700269567417, 17);
  sqcRYGate(q, -1.5707971741106814, 18);
  sqcRZGate(q, -0.027191422090163897, 18);
  sqcRYGate(q, 1.5707965477891452, 19);
  sqcRZGate(q, 2.295684392347703, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.5707998226206916, 0);
  sqcRZGate(q, -2.8953823506886676, 0);
  sqcRYGate(q, 1.570798649823275, 1);
  sqcRZGate(q, 0.005024897030915266, 1);
  sqcRYGate(q, -5.91474131095282e-06, 2);
  sqcRZGate(q, -1.1033571433995906, 2);
  sqcRYGate(q, 1.5707969637330843, 3);
  sqcRZGate(q, 1.1697343351713132e-06, 3);
  sqcRYGate(q, 2.0448029778506392e-08, 4);
  sqcRZGate(q, 0.4256256207484494, 4);
  sqcRYGate(q, -1.5707972575893965, 5);
  sqcRZGate(q, 3.13696196866655, 5);
  sqcRYGate(q, 3.1414765758394596, 6);
  sqcRZGate(q, -0.06148809079412845, 6);
  sqcRYGate(q, 1.5707770027667873, 7);
  sqcRZGate(q, -1.5707530709042477, 7);
  sqcRYGate(q, 2.6379865044196764, 8);
  sqcRZGate(q, -0.00011036639550265903, 8);
  sqcRYGate(q, -0.025588402573815117, 9);
  sqcRZGate(q, -3.1415825690163315, 9);
  sqcRYGate(q, -1.593161968241947, 10);
  sqcRZGate(q, 3.141592524599529, 10);
  sqcRYGate(q, 1.5707963912677085, 11);
  sqcRZGate(q, -4.286521954181204e-07, 11);
  sqcRYGate(q, -2.6805361857630503, 12);
  sqcRZGate(q, -1.3407380681401294e-05, 12);
  sqcRYGate(q, 0.02676782912004644, 13);
  sqcRZGate(q, -2.0535523406195466e-06, 13);
  sqcRYGate(q, -3.1415925036264265, 14);
  sqcRZGate(q, -2.460686621765655, 14);
  sqcRYGate(q, 1.5707945818832574, 15);
  sqcRZGate(q, 0.7190301993887268, 15);
  sqcRYGate(q, 1.5707963414247548, 16);
  sqcRZGate(q, -3.1415921988202453, 16);
  sqcRYGate(q, -7.80670721844956e-07, 17);
  sqcRZGate(q, 0.7270674572516036, 17);
  sqcRYGate(q, -9.089358590230744e-07, 18);
  sqcRZGate(q, -3.1144011717171534, 18);
  sqcRYGate(q, 3.1415917122275845, 19);
  sqcRZGate(q, -0.8459080062245667, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.007961882148472377, 0);
  sqcRZGate(q, -2.4415146379333184, 0);
  sqcRYGate(q, 1.6687136366743311, 1);
  sqcRZGate(q, -1.1798677044863284, 1);
  sqcRYGate(q, 7.561044235160352e-09, 2);
  sqcRZGate(q, -1.3280339580503866, 2);
  sqcRYGate(q, -2.9472454375421546, 3);
  sqcRZGate(q, -3.141585010158862, 3);
  sqcRYGate(q, -3.558382895008095e-07, 4);
  sqcRZGate(q, 0.5032244880321155, 4);
  sqcRYGate(q, 3.1372581246280915, 5);
  sqcRZGate(q, 3.1369547002519362, 5);
  sqcRYGate(q, 2.937483661417646, 6);
  sqcRZGate(q, -1.5707977844820302, 6);
  sqcRYGate(q, -3.1283550943395744, 7);
  sqcRZGate(q, -1.5707553269902048, 7);
  sqcRYGate(q, 0.02455772569609873, 8);
  sqcRZGate(q, -0.11088336427747691, 8);
  sqcRYGate(q, 0.020576639585744516, 9);
  sqcRZGate(q, 2.152637380461777, 9);
  sqcRYGate(q, 1.574493734374105, 10);
  sqcRZGate(q, -2.441648445683347, 10);
  sqcRYGate(q, 1.570796304927752, 11);
  sqcRZGate(q, 1.8245379036693466e-06, 11);
  sqcRYGate(q, 0.013914366140615364, 12);
  sqcRZGate(q, -1.3186442437713488, 12);
  sqcRYGate(q, 2.7843580865848954, 13);
  sqcRZGate(q, -0.5149577958859725, 13);
  sqcRYGate(q, 8.44104366942958e-09, 14);
  sqcRZGate(q, 0.17976541917046351, 14);
  sqcRYGate(q, -3.1415926103718603, 15);
  sqcRZGate(q, -0.8959669929347591, 15);
  sqcRYGate(q, -3.0710982771133275, 16);
  sqcRZGate(q, -1.5949923071190142e-07, 16);
  sqcRYGate(q, 3.087595790928015, 17);
  sqcRZGate(q, 3.1415886078291573, 17);
  sqcRYGate(q, -1.7607895154118187, 18);
  sqcRZGate(q, 3.1415918780830796, 18);
  sqcRYGate(q, -2.690640374340023, 19);
  sqcRZGate(q, -3.141591374198528, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.3796265091746704e-06, 0);
  sqcRZGate(q, -2.3247018412632894, 0);
  sqcRYGate(q, 3.1415844584812667, 1);
  sqcRZGate(q, 0.5817385134503302, 1);
  sqcRYGate(q, 3.1415899372618434, 2);
  sqcRZGate(q, 0.3202194141412888, 2);
  sqcRYGate(q, 1.5708016258046973, 3);
  sqcRZGate(q, -1.3798861196051826, 3);
  sqcRYGate(q, -3.141591610697763, 4);
  sqcRZGate(q, -0.611917074947339, 4);
  sqcRYGate(q, 1.5707928842271102, 5);
  sqcRZGate(q, 1.7617067862920024, 5);
  sqcRYGate(q, 1.5708044247830784, 6);
  sqcRZGate(q, -2.9506505483633205, 6);
  sqcRYGate(q, 1.5708210601487789, 7);
  sqcRZGate(q, -2.9505396080631354, 7);
  sqcRYGate(q, 3.1415923942573114, 8);
  sqcRZGate(q, 1.6508627823971782, 8);
  sqcRYGate(q, 3.1415889117100138, 9);
  sqcRZGate(q, 0.7728826880449159, 9);
  sqcRYGate(q, -3.141592448952506, 10);
  sqcRZGate(q, 2.4617814175602843, 10);
  sqcRYGate(q, 1.5707985740325237, 11);
  sqcRZGate(q, -1.3797666905105412, 11);
  sqcRYGate(q, 3.141592443934779, 12);
  sqcRZGate(q, -2.69841232621002, 12);
  sqcRYGate(q, 3.141590241010016, 13);
  sqcRZGate(q, 1.2468681610355983, 13);
  sqcRYGate(q, -3.1415923900124905, 14);
  sqcRZGate(q, -0.33090410362619416, 14);
  sqcRYGate(q, -3.141592591916132, 15);
  sqcRZGate(q, -2.9947207207473845, 15);
  sqcRYGate(q, 1.5707964182826548, 16);
  sqcRZGate(q, 0.19107483140441767, 16);
  sqcRYGate(q, -1.5707973737303795, 17);
  sqcRZGate(q, 1.7618692894428598, 17);
  sqcRYGate(q, 1.5707963447680235, 18);
  sqcRZGate(q, 0.1910747126514236, 18);
  sqcRYGate(q, 1.5707973469954066, 19);
  sqcRZGate(q, -1.3797232184371453, 19);

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
