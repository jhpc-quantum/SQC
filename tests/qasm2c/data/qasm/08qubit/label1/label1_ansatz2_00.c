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

  sqcRYGate(q, 0.003950990315142621, 0);
  sqcRZGate(q, 3.1414013548930706, 0);
  sqcRYGate(q, -3.629218980725002e-07, 1);
  sqcRZGate(q, -2.2629517651191677, 1);
  sqcRYGate(q, -0.0315042193705759, 2);
  sqcRZGate(q, 6.445371509400388e-06, 2);
  sqcRYGate(q, -2.9370928955868725, 3);
  sqcRZGate(q, 3.1415915167306077, 3);
  sqcRYGate(q, -0.0841517557632745, 4);
  sqcRZGate(q, 5.366876051046856e-06, 4);
  sqcRYGate(q, -0.7262346478965097, 5);
  sqcRZGate(q, 3.141592234279749, 5);
  sqcRYGate(q, -1.592631156440042, 6);
  sqcRZGate(q, -9.669146159296815e-07, 6);
  sqcRYGate(q, 2.462321543630257, 7);
  sqcRZGate(q, -3.1415841844928654, 7);
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
  sqcRYGate(q, 3.0367553189947643, 0);
  sqcRZGate(q, -1.3555665739239942e-05, 0);
  sqcRYGate(q, 5.226624407526392e-08, 1);
  sqcRZGate(q, 1.1430055493050622, 1);
  sqcRYGate(q, -2.8491279379520935, 2);
  sqcRZGate(q, 1.903883058318456e-06, 2);
  sqcRYGate(q, 1.8094677338254888, 3);
  sqcRZGate(q, -3.1415894999544474, 3);
  sqcRYGate(q, -1.833830746772982, 4);
  sqcRZGate(q, -3.141590424549093, 4);
  sqcRYGate(q, 2.7275045242180016, 5);
  sqcRZGate(q, -8.458354603391172e-06, 5);
  sqcRYGate(q, 1.2798291763681862, 6);
  sqcRZGate(q, 3.141584889106014, 6);
  sqcRYGate(q, 0.13810243322388868, 7);
  sqcRZGate(q, 3.1415831939733305, 7);
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
  sqcRYGate(q, 2.522837694460541, 0);
  sqcRZGate(q, -0.04446880555854123, 0);
  sqcRYGate(q, -1.5707960334189206, 1);
  sqcRZGate(q, 4.456781133681107e-07, 1);
  sqcRYGate(q, -2.2797771090721537, 2);
  sqcRZGate(q, -0.26588146090605846, 2);
  sqcRYGate(q, 2.6462542066311583, 3);
  sqcRZGate(q, -2.617182923857226, 3);
  sqcRYGate(q, -1.0307192450138083, 4);
  sqcRZGate(q, 0.1008209465937088, 4);
  sqcRYGate(q, -0.13139773724079173, 5);
  sqcRZGate(q, -2.647886665005679, 5);
  sqcRYGate(q, 0.12869437115165108, 6);
  sqcRZGate(q, 0.8921341616238775, 6);
  sqcRYGate(q, 3.0861984400764357, 7);
  sqcRZGate(q, -0.10385953542416705, 7);
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
  sqcRYGate(q, -3.1415922118315365, 0);
  sqcRZGate(q, -0.6372673610962183, 0);
  sqcRYGate(q, 1.5707949334603688, 1);
  sqcRZGate(q, 2.548794103781162, 1);
  sqcRYGate(q, 3.141592049033904, 2);
  sqcRZGate(q, 2.2829136169950117, 2);
  sqcRYGate(q, -2.794031368625207e-07, 3);
  sqcRZGate(q, 2.0243885849102856, 3);
  sqcRYGate(q, 1.4530167913306968e-07, 4);
  sqcRZGate(q, 2.447973534296843, 4);
  sqcRYGate(q, 3.017151701811826e-07, 5);
  sqcRZGate(q, 2.055099244554893, 5);
  sqcRYGate(q, 9.329727918086948e-07, 6);
  sqcRZGate(q, 1.6566709193705558, 6);
  sqcRYGate(q, -3.1415919198923437, 7);
  sqcRZGate(q, 2.4449387527412134, 7);

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
