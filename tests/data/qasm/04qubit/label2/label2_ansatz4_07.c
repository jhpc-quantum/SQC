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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 2.036909965421702, 0);
  sqcRZGate(q, -2.149968467880029, 0);
  sqcRYGate(q, -0.32339988325714764, 1);
  sqcRZGate(q, 1.7535383006301064, 1);
  sqcRYGate(q, -2.8342554838852463, 2);
  sqcRZGate(q, -0.022759222804265455, 2);
  sqcRYGate(q, 1.8820004393033072, 3);
  sqcRZGate(q, 3.0689004615700415, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5974153991741256, 0);
  sqcRZGate(q, -1.0544785810134947, 0);
  sqcRYGate(q, -1.7326498150997898, 1);
  sqcRZGate(q, 0.1283452631030529, 1);
  sqcRYGate(q, 2.9022976943341217, 2);
  sqcRZGate(q, -1.4879826645716872, 2);
  sqcRYGate(q, -0.5599050446166851, 3);
  sqcRZGate(q, -1.5451895713496775, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.4844930103562968, 0);
  sqcRZGate(q, -2.6292103797711834, 0);
  sqcRYGate(q, -2.514186866055209, 1);
  sqcRZGate(q, -1.0067766104269469, 1);
  sqcRYGate(q, 2.35094450919563, 2);
  sqcRZGate(q, 1.4562411570817257, 2);
  sqcRYGate(q, -1.0355105271881841, 3);
  sqcRZGate(q, -0.8501017537583655, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7829483363714898, 0);
  sqcRZGate(q, 2.7397587317130414, 0);
  sqcRYGate(q, 2.4433314802757153, 1);
  sqcRZGate(q, -0.7793448247991898, 1);
  sqcRYGate(q, -1.6211707851572943, 2);
  sqcRZGate(q, -0.5506199427813617, 2);
  sqcRYGate(q, 2.335537633032025, 3);
  sqcRZGate(q, 0.45564331119157936, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4946487496404934, 0);
  sqcRZGate(q, 2.0898442543831077, 0);
  sqcRYGate(q, 2.319938922618007, 1);
  sqcRZGate(q, 2.5630796388455894, 1);
  sqcRYGate(q, 1.6162324916417097, 2);
  sqcRZGate(q, 2.713505381814946, 2);
  sqcRYGate(q, 1.9192025844622451, 3);
  sqcRZGate(q, -0.7106357944362771, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.136626646960252, 0);
  sqcRZGate(q, -3.1316052218907493, 0);
  sqcRYGate(q, 1.1053143408221633, 1);
  sqcRZGate(q, -1.2088915552380053, 1);
  sqcRYGate(q, -2.934404098302691, 2);
  sqcRZGate(q, 1.2516858738711591, 2);
  sqcRYGate(q, -1.6260639738234202, 3);
  sqcRZGate(q, -2.2738780555410383, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0216117618397944, 0);
  sqcRZGate(q, -1.6712330859083222, 0);
  sqcRYGate(q, -1.4340662585963395, 1);
  sqcRZGate(q, -0.7238131098357781, 1);
  sqcRYGate(q, 1.2158126066180275, 2);
  sqcRZGate(q, 0.8298023812964991, 2);
  sqcRYGate(q, 2.9977191214342254, 3);
  sqcRZGate(q, 0.42550883012329027, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.059382232719271, 0);
  sqcRZGate(q, 1.9065911217889582, 0);
  sqcRYGate(q, 3.0250690334361585, 1);
  sqcRZGate(q, 0.946565334460951, 1);
  sqcRYGate(q, 1.5535636478970938, 2);
  sqcRZGate(q, 0.7805606714466594, 2);
  sqcRYGate(q, -2.4922111340154567, 3);
  sqcRZGate(q, 2.540762258717466, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.7580920186548867, 0);
  sqcRZGate(q, -2.3631280355696056, 0);
  sqcRYGate(q, 0.2404934539253949, 1);
  sqcRZGate(q, -2.9220291301519494, 1);
  sqcRYGate(q, -1.887032511621082, 2);
  sqcRZGate(q, 2.7014540910105285, 2);
  sqcRYGate(q, -0.8427689958469416, 3);
  sqcRZGate(q, -0.7097153254138939, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.79967219314815, 0);
  sqcRZGate(q, -2.1897798290786836, 0);
  sqcRYGate(q, 3.039280504308347, 1);
  sqcRZGate(q, -0.8793226833729145, 1);
  sqcRYGate(q, -0.9160840026719139, 2);
  sqcRZGate(q, 0.2371505393322024, 2);
  sqcRYGate(q, 2.5682211765397027, 3);
  sqcRZGate(q, -0.012658965040038161, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9188506593087044, 0);
  sqcRZGate(q, 3.043560784846724, 0);
  sqcRYGate(q, 0.6740736817200021, 1);
  sqcRZGate(q, -0.42238596481327656, 1);
  sqcRYGate(q, 3.1274847022762446, 2);
  sqcRZGate(q, 1.8835520805826518, 2);
  sqcRYGate(q, -2.0320102104182807, 3);
  sqcRZGate(q, 1.5453445362639386, 3);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
