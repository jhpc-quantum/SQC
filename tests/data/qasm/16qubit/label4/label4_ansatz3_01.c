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

  sqcRYGate(q, 2.4286483584212704e-05, 0);
  sqcRZGate(q, -0.10936030653205364, 0);
  sqcRYGate(q, -0.1403051499553465, 1);
  sqcRZGate(q, -6.021855014637367e-07, 1);
  sqcRYGate(q, 3.141592217700442, 2);
  sqcRZGate(q, -1.8516982739392143, 2);
  sqcRYGate(q, 1.5708335154710413, 3);
  sqcRZGate(q, -6.578206657978208e-07, 3);
  sqcRYGate(q, -3.1415863914225266, 4);
  sqcRZGate(q, 2.8682808078864284, 4);
  sqcRYGate(q, -2.600961056085743, 5);
  sqcRZGate(q, 3.2559327427073015e-05, 5);
  sqcRYGate(q, 1.570796457346918, 6);
  sqcRZGate(q, -1.158047548765487, 6);
  sqcRYGate(q, -1.57079447850647, 7);
  sqcRZGate(q, 2.384650931488513, 7);
  sqcRYGate(q, 1.5707934373006003, 8);
  sqcRZGate(q, -0.28211137867868885, 8);
  sqcRYGate(q, 1.5707999036100828, 9);
  sqcRZGate(q, -3.1407130908553533, 9);
  sqcRYGate(q, 3.141592626973585, 10);
  sqcRZGate(q, -3.0897297820069247, 10);
  sqcRYGate(q, -1.5707898880117614, 11);
  sqcRZGate(q, -1.952260624445508e-06, 11);
  sqcRYGate(q, -0.0003333756089860375, 12);
  sqcRZGate(q, 0.036240465033054746, 12);
  sqcRYGate(q, -1.9155424922072393, 13);
  sqcRZGate(q, 2.0383577794079963, 13);
  sqcRYGate(q, -3.1001324078004884, 14);
  sqcRZGate(q, -0.4904509316762235, 14);
  sqcRYGate(q, 3.1415892644328687, 15);
  sqcRZGate(q, 1.6590904511595632, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.5708192975816049, 0);
  sqcRZGate(q, 1.5707831237103078, 0);
  sqcRYGate(q, 1.5708069035418766, 1);
  sqcRZGate(q, -1.0232648929022103, 1);
  sqcRYGate(q, -3.1415912105958133, 2);
  sqcRZGate(q, 2.414345753385844, 2);
  sqcRYGate(q, 1.570750006958698, 3);
  sqcRZGate(q, -3.417715146378514e-05, 3);
  sqcRYGate(q, -1.5707976082083235, 4);
  sqcRZGate(q, -1.0512138673984772, 4);
  sqcRYGate(q, 1.5707988078751, 5);
  sqcRZGate(q, -2.5237565061967726, 5);
  sqcRYGate(q, -3.1415900827967613, 6);
  sqcRZGate(q, 0.41272064867731295, 6);
  sqcRYGate(q, -3.1415913720995756, 7);
  sqcRZGate(q, 0.7973197011027856, 7);
  sqcRYGate(q, -2.3943271732379865e-07, 8);
  sqcRZGate(q, -2.8594841583438297, 8);
  sqcRYGate(q, 2.4533880130245e-06, 9);
  sqcRZGate(q, 1.4585469910436468, 9);
  sqcRYGate(q, 1.570794202534388, 10);
  sqcRZGate(q, -0.517788716615259, 10);
  sqcRYGate(q, -1.5707953093710116, 11);
  sqcRZGate(q, 2.9897190016461113, 11);
  sqcRYGate(q, 0.39861060641609664, 12);
  sqcRZGate(q, -2.2373623219580523, 12);
  sqcRYGate(q, 1.860689906190813e-07, 13);
  sqcRZGate(q, -2.038356213495866, 13);
  sqcRYGate(q, -1.5342301709111523, 14);
  sqcRZGate(q, -3.1220749097695926, 14);
  sqcRYGate(q, -3.180066956431915e-07, 15);
  sqcRZGate(q, 2.3637679255666932, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 0.9869231584748883, 0);
  sqcRZGate(q, -1.570788645955905, 0);
  sqcRYGate(q, 7.940005665396654e-06, 1);
  sqcRZGate(q, 0.036338051814942325, 1);
  sqcRYGate(q, 1.5707982698876803, 2);
  sqcRZGate(q, -0.431615354910603, 2);
  sqcRYGate(q, 1.5707988723391888, 3);
  sqcRZGate(q, -1.1162450770028851, 3);
  sqcRYGate(q, 1.5708064471460892, 4);
  sqcRZGate(q, 3.141572735749678, 4);
  sqcRYGate(q, -3.1415825280366803, 5);
  sqcRZGate(q, 1.954816665927733, 5);
  sqcRYGate(q, -0.8666110855696874, 6);
  sqcRZGate(q, -0.4892509383954229, 6);
  sqcRYGate(q, -7.899978815650854e-05, 7);
  sqcRZGate(q, -0.16143154755055414, 7);
  sqcRYGate(q, -1.5707809250384055, 8);
  sqcRZGate(q, -2.0833368641689556, 8);
  sqcRYGate(q, 3.1415817937047787, 9);
  sqcRZGate(q, -1.6822122854342538, 9);
  sqcRYGate(q, 3.5607006305840737e-07, 10);
  sqcRZGate(q, 2.158208166053765, 10);
  sqcRYGate(q, 3.1415886777172064, 11);
  sqcRZGate(q, -0.1518737314962415, 11);
  sqcRYGate(q, 1.5707987689711258, 12);
  sqcRZGate(q, 1.0648100332362205, 12);
  sqcRYGate(q, 1.570794868079988, 13);
  sqcRZGate(q, 2.706612418545906, 13);
  sqcRYGate(q, -1.570793797509718, 14);
  sqcRZGate(q, 2.2373366298823574, 14);
  sqcRYGate(q, -3.141575692398947, 15);
  sqcRZGate(q, 0.292746240852746, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.5707961993506006, 0);
  sqcRZGate(q, 1.0881084935279466, 0);
  sqcRYGate(q, 1.5707992667747597, 1);
  sqcRZGate(q, -2.9880393725903884, 1);
  sqcRYGate(q, 2.6229970870169534, 2);
  sqcRZGate(q, 3.043786638806806, 2);
  sqcRYGate(q, -5.640728577325186e-07, 3);
  sqcRZGate(q, 1.0536119216198747, 3);
  sqcRYGate(q, -0.13415980791854842, 4);
  sqcRZGate(q, 2.0067640998634484e-05, 4);
  sqcRYGate(q, 1.4466415416691802e-06, 5);
  sqcRZGate(q, -1.74020693400946, 5);
  sqcRYGate(q, 1.2096005701379294e-07, 6);
  sqcRZGate(q, -1.0815294603612478, 6);
  sqcRYGate(q, 3.1415913598380287, 7);
  sqcRZGate(q, -1.7487652780603256, 7);
  sqcRYGate(q, -1.162932941056738e-07, 8);
  sqcRZGate(q, -0.8162951614334539, 8);
  sqcRYGate(q, 2.7329869692777815, 9);
  sqcRZGate(q, 2.4787718754212964, 9);
  sqcRYGate(q, 0.5185919642171746, 10);
  sqcRZGate(q, -1.9721745862374624, 10);
  sqcRYGate(q, -1.8902627449451836, 11);
  sqcRZGate(q, 1.9779253358959348, 11);
  sqcRYGate(q, -3.1415919644633, 12);
  sqcRZGate(q, 1.0648137085879785, 12);
  sqcRYGate(q, 3.1415924502550525, 13);
  sqcRZGate(q, -0.43499246792789314, 13);
  sqcRYGate(q, 1.5707983213681704, 14);
  sqcRZGate(q, 1.0537190888349643, 14);
  sqcRYGate(q, 1.5707940047249034, 15);
  sqcRZGate(q, 2.8292870031597683, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 2.712902897741301e-06, 0);
  sqcRZGate(q, -2.088818921970688, 0);
  sqcRYGate(q, 2.1964981389288593e-07, 1);
  sqcRZGate(q, 0.5984257867641656, 1);
  sqcRYGate(q, 2.0759408905797705e-06, 2);
  sqcRZGate(q, 1.8318428220341607, 2);
  sqcRYGate(q, -3.141580809216927, 3);
  sqcRZGate(q, 0.6893452219379332, 3);
  sqcRYGate(q, -1.5708054606813682, 4);
  sqcRZGate(q, -1.4075556943204877, 4);
  sqcRYGate(q, 1.0354472340878829e-05, 5);
  sqcRZGate(q, 1.1551929989480647, 5);
  sqcRYGate(q, 1.570770353861809, 6);
  sqcRZGate(q, 1.5477998023841717, 6);
  sqcRYGate(q, -1.5707712682851822, 7);
  sqcRZGate(q, 0.7518853892129103, 7);
  sqcRYGate(q, -1.393718932912451e-05, 8);
  sqcRZGate(q, -0.7282393770896991, 8);
  sqcRYGate(q, 6.939969093825546e-06, 9);
  sqcRZGate(q, 1.414699311286566, 9);
  sqcRYGate(q, -1.038340145420591e-06, 10);
  sqcRZGate(q, 2.987067592775042, 10);
  sqcRYGate(q, -2.1225847817163412e-06, 11);
  sqcRZGate(q, 1.9155907983056277, 11);
  sqcRYGate(q, 1.5707991079716668, 12);
  sqcRZGate(q, -2.126696825702682, 12);
  sqcRYGate(q, -1.5708121145409715, 13);
  sqcRZGate(q, 0.7519176904823901, 13);
  sqcRYGate(q, -3.0323824489377348e-06, 14);
  sqcRZGate(q, -0.03882667759985914, 14);
  sqcRYGate(q, 1.9676215264060265e-07, 15);
  sqcRZGate(q, 1.064222319485199, 15);

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
