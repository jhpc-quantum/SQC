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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 3.082557793044994, 0);
  sqcRZGate(q, 2.9230821051620897, 0);
  sqcRYGate(q, 3.097202232422988, 1);
  sqcRZGate(q, -2.6104012794219607, 1);
  sqcRYGate(q, 3.045523054084896, 2);
  sqcRZGate(q, -1.570886777494481, 2);
  sqcRYGate(q, 1.5666322959276349, 3);
  sqcRZGate(q, 1.8338789341631194, 3);
  sqcRYGate(q, -1.5702735705672484, 4);
  sqcRZGate(q, 1.5311983683654375, 4);
  sqcRYGate(q, 1.5705928261815414, 5);
  sqcRZGate(q, -1.316850034461376, 5);
  sqcRYGate(q, -0.05859235100144211, 6);
  sqcRZGate(q, 1.8145142663392981, 6);
  sqcRYGate(q, 1.1895582934972981, 7);
  sqcRZGate(q, 1.9615523771769423, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.0783220574018912, 0);
  sqcRZGate(q, -0.8365640489843953, 0);
  sqcRYGate(q, 0.07955640849003297, 1);
  sqcRZGate(q, 1.6090162622219708, 1);
  sqcRYGate(q, 2.8618490689802125, 2);
  sqcRZGate(q, -3.123339960357157, 2);
  sqcRYGate(q, -1.6118438027556146, 3);
  sqcRZGate(q, 3.127902743672132, 3);
  sqcRYGate(q, -1.1082864540900266, 4);
  sqcRZGate(q, 7.131936069360023e-05, 4);
  sqcRYGate(q, 1.5759902787955653, 5);
  sqcRZGate(q, 3.0619285032099577, 5);
  sqcRYGate(q, 1.3223311954656785, 6);
  sqcRZGate(q, -0.00041646135939697276, 6);
  sqcRYGate(q, -0.25801554257132064, 7);
  sqcRZGate(q, 1.1745930322854745, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.135388325780977, 0);
  sqcRZGate(q, -1.7921544142241357, 0);
  sqcRYGate(q, -1.5964000621506018, 1);
  sqcRZGate(q, 1.1981486957764078, 1);
  sqcRYGate(q, 1.5725118801170943, 2);
  sqcRZGate(q, -3.1176995833528065, 2);
  sqcRYGate(q, -0.03981430766628821, 3);
  sqcRZGate(q, 0.008822513569755053, 3);
  sqcRYGate(q, -1.5311105686326085, 4);
  sqcRZGate(q, -8.047887281215084e-05, 4);
  sqcRYGate(q, -3.1393452504442134, 5);
  sqcRZGate(q, 3.064781021945969, 5);
  sqcRYGate(q, 1.570635772467693, 6);
  sqcRZGate(q, 3.14149680276548, 6);
  sqcRYGate(q, 2.875359033655554, 7);
  sqcRZGate(q, 1.7977843123065895, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.2578812735252676, 0);
  sqcRZGate(q, 0.0008469619925577376, 0);
  sqcRYGate(q, 1.5747780913464329, 1);
  sqcRZGate(q, -1.7546761168969012, 1);
  sqcRYGate(q, 3.134282027673949, 2);
  sqcRZGate(q, 0.822218488967656, 2);
  sqcRYGate(q, -3.0746644893945305, 3);
  sqcRZGate(q, 0.632109644411321, 3);
  sqcRYGate(q, 2.0335019180165026, 4);
  sqcRZGate(q, 3.1408820370614303, 4);
  sqcRYGate(q, -0.026868312179632786, 5);
  sqcRZGate(q, -0.5252846755867839, 5);
  sqcRYGate(q, -1.9057021145423532, 6);
  sqcRZGate(q, -0.27492773683396343, 6);
  sqcRYGate(q, 1.567826544341722, 7);
  sqcRZGate(q, -3.1415681904244344, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.570944175794579, 0);
  sqcRZGate(q, -0.00012597742483588803, 0);
  sqcRYGate(q, 3.1411616761133634, 1);
  sqcRZGate(q, 2.9590652386352057, 1);
  sqcRYGate(q, -0.0025055244112524022, 2);
  sqcRZGate(q, 0.7721656597169062, 2);
  sqcRYGate(q, -3.1409445297817102, 3);
  sqcRZGate(q, 2.217604584537437, 3);
  sqcRYGate(q, 1.5323106464624678, 4);
  sqcRZGate(q, -1.5732104667285736, 4);
  sqcRYGate(q, -0.0003416149671435717, 5);
  sqcRZGate(q, -1.050452178023694, 5);
  sqcRYGate(q, 0.0008402930784488709, 6);
  sqcRZGate(q, -1.2986734344442203, 6);
  sqcRYGate(q, 0.9143390895289736, 7);
  sqcRZGate(q, 1.5700229259939817, 7);

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
