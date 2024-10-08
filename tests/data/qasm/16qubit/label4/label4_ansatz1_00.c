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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -1.570794088019623, 0);
  sqcRZGate(q, -3.1415915993743324, 0);
  sqcRYGate(q, 1.5706889960878514, 1);
  sqcRZGate(q, -2.9223134141737863, 1);
  sqcRYGate(q, 1.5707942469650904, 2);
  sqcRZGate(q, 1.5707948355633683, 2);
  sqcRYGate(q, 1.5707982016220368, 3);
  sqcRZGate(q, 0.00012386255674265263, 3);
  sqcRYGate(q, 0.36176389191666836, 4);
  sqcRZGate(q, -7.258165197754352e-07, 4);
  sqcRYGate(q, 3.141592160247645, 5);
  sqcRZGate(q, 0.5955317477442719, 5);
  sqcRYGate(q, 1.5708050382203007, 6);
  sqcRZGate(q, -1.570810668932463, 6);
  sqcRYGate(q, -2.817376371063893, 7);
  sqcRZGate(q, -0.6246065046499948, 7);
  sqcRYGate(q, -1.5707971703015706, 8);
  sqcRZGate(q, -2.026909770803325, 8);
  sqcRYGate(q, 1.571141855381324, 9);
  sqcRZGate(q, 1.570944870676109, 9);
  sqcRYGate(q, 1.5707957072300076, 10);
  sqcRZGate(q, 1.0891728475736864, 10);
  sqcRYGate(q, 3.1062604471593103, 11);
  sqcRZGate(q, 1.5715151751380718, 11);
  sqcRYGate(q, -1.5707903511840784, 12);
  sqcRZGate(q, -1.5707984688741643, 12);
  sqcRYGate(q, 2.5699244627827342, 13);
  sqcRZGate(q, -1.5705464369676028, 13);
  sqcRYGate(q, 1.5708060571547025, 14);
  sqcRZGate(q, 3.1076715504740977, 14);
  sqcRYGate(q, 1.570827026941041, 15);
  sqcRZGate(q, 0.06289212573092406, 15);
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
  sqcRYGate(q, -1.5708096847600341, 0);
  sqcRZGate(q, 2.9223204630676, 0);
  sqcRYGate(q, 0.16698869771146518, 1);
  sqcRZGate(q, 3.1415862041108906, 1);
  sqcRYGate(q, -0.8550975574791558, 2);
  sqcRZGate(q, 2.1109395734123737, 2);
  sqcRYGate(q, -1.5707949349401387, 3);
  sqcRZGate(q, 1.518462637680894, 3);
  sqcRYGate(q, 1.5707967554375608, 4);
  sqcRZGate(q, -1.5707940882832088, 4);
  sqcRYGate(q, 1.570804051156793, 5);
  sqcRZGate(q, -3.141590625335455, 5);
  sqcRYGate(q, -2.5169888577302935, 6);
  sqcRZGate(q, -1.751853372270597e-05, 6);
  sqcRYGate(q, 1.5707560988194311, 7);
  sqcRZGate(q, 1.671204009816731, 7);
  sqcRYGate(q, -8.501974336698466e-06, 8);
  sqcRZGate(q, 0.45611063280031333, 8);
  sqcRYGate(q, 1.5707979553038491, 9);
  sqcRZGate(q, 2.702661483949226, 9);
  sqcRYGate(q, -3.1415776622047673, 10);
  sqcRZGate(q, -0.4816255930575153, 10);
  sqcRYGate(q, 1.5707139151948235, 11);
  sqcRZGate(q, -3.141585346275464, 11);
  sqcRYGate(q, 1.571049035533857, 12);
  sqcRZGate(q, -3.141587022601454, 12);
  sqcRYGate(q, 1.5707928949004346, 13);
  sqcRZGate(q, -1.5404604646373539, 13);
  sqcRYGate(q, 0.4105594466631306, 14);
  sqcRZGate(q, -1.570767742355753, 14);
  sqcRYGate(q, -2.646905082283104, 15);
  sqcRZGate(q, 0.07142744249693414, 15);
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
  sqcRYGate(q, -1.57079690157482, 0);
  sqcRZGate(q, -0.08622089847554104, 0);
  sqcRYGate(q, -1.5707955433525262, 1);
  sqcRZGate(q, 1.6331997936466038, 1);
  sqcRYGate(q, -1.5707966321228453, 2);
  sqcRZGate(q, -9.8357546374217e-07, 2);
  sqcRYGate(q, -2.940925728046439, 3);
  sqcRZGate(q, -1.2361345537729649, 3);
  sqcRYGate(q, -2.9188514210029046, 4);
  sqcRZGate(q, 1.570798583761994, 4);
  sqcRYGate(q, 1.5708591841717041, 5);
  sqcRZGate(q, -1.4512911228834318, 5);
  sqcRYGate(q, -0.3697432620003892, 6);
  sqcRZGate(q, 1.5707964019037621, 6);
  sqcRYGate(q, 1.391903286851459e-06, 7);
  sqcRZGate(q, 1.9472623983010917, 7);
  sqcRYGate(q, 0.32758933861948175, 8);
  sqcRZGate(q, 1.5707987345517056, 8);
  sqcRYGate(q, -5.756050950328908e-06, 9);
  sqcRZGate(q, -1.2450137683164408, 9);
  sqcRYGate(q, 0.38326803524326714, 10);
  sqcRZGate(q, -1.5707940776379856, 10);
  sqcRYGate(q, 2.8490263721207287, 11);
  sqcRZGate(q, 0.11071622410195688, 11);
  sqcRYGate(q, 2.8218576739969237, 12);
  sqcRZGate(q, 1.5707952259740308, 12);
  sqcRYGate(q, -1.58886622715859, 13);
  sqcRZGate(q, -2.0623621939819063, 13);
  sqcRYGate(q, 1.5473279569468656, 14);
  sqcRZGate(q, 1.5707982247313792, 14);
  sqcRYGate(q, 1.5707663891274009, 15);
  sqcRZGate(q, -5.113058479491355e-06, 15);
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
  sqcRYGate(q, 3.1414291752194603, 0);
  sqcRZGate(q, -2.274297084655273, 0);
  sqcRYGate(q, -1.6830653473661243, 1);
  sqcRZGate(q, 2.847083410072299, 1);
  sqcRYGate(q, 1.5707956111375034, 2);
  sqcRZGate(q, 2.524308739647739, 2);
  sqcRYGate(q, 1.047988211645444e-06, 3);
  sqcRZGate(q, 2.648760524900518, 3);
  sqcRYGate(q, 1.570795458269455, 4);
  sqcRZGate(q, -0.6172817689089963, 4);
  sqcRYGate(q, -1.5707945483558636, 5);
  sqcRZGate(q, 0.7675001348981652, 5);
  sqcRYGate(q, 1.5707964744464327, 6);
  sqcRZGate(q, -2.1880752599088544, 6);
  sqcRYGate(q, -1.6756322008149027e-05, 7);
  sqcRZGate(q, -1.280164270382735, 7);
  sqcRYGate(q, -1.5707997988037192, 8);
  sqcRZGate(q, -2.1880832083903785, 8);
  sqcRYGate(q, 1.5707948930751057, 9);
  sqcRZGate(q, -2.37408500595899, 9);
  sqcRYGate(q, 1.5707910901201423, 10);
  sqcRZGate(q, -2.187941218145541, 10);
  sqcRYGate(q, 3.141579605398218, 11);
  sqcRZGate(q, -0.6925783803700822, 11);
  sqcRYGate(q, 1.5707863513197877, 12);
  sqcRZGate(q, 0.9536540303382415, 12);
  sqcRYGate(q, 1.5707962624513168, 13);
  sqcRZGate(q, -2.3740791895498745, 13);
  sqcRYGate(q, -1.5707931935993031, 14);
  sqcRZGate(q, 2.524450502638593, 14);
  sqcRYGate(q, 1.544461302882362, 15);
  sqcRZGate(q, -0.8032837028883781, 15);

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
