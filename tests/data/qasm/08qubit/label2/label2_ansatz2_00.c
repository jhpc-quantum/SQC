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

  sqcRYGate(q, -0.00013967893486225316, 0);
  sqcRZGate(q, 2.0089847219853314, 0);
  sqcRYGate(q, -3.0914052411555466, 1);
  sqcRZGate(q, -0.0004911198445501076, 1);
  sqcRYGate(q, -1.6278429613465484, 2);
  sqcRZGate(q, -0.0005360696556228549, 2);
  sqcRYGate(q, 1.6669194558696787, 3);
  sqcRZGate(q, 3.134479815759781, 3);
  sqcRYGate(q, 0.07396580596297486, 4);
  sqcRZGate(q, -0.010903688617011874, 4);
  sqcRYGate(q, -3.1169513633207067, 5);
  sqcRZGate(q, 2.8866879754194428, 5);
  sqcRYGate(q, -0.0011035507736523302, 6);
  sqcRZGate(q, 2.0940761296126458, 6);
  sqcRYGate(q, 6.70356739007616e-08, 7);
  sqcRZGate(q, 2.277932799549673, 7);
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
  sqcRYGate(q, -1.570892880288124, 0);
  sqcRZGate(q, -0.0023097934256481874, 0);
  sqcRYGate(q, 1.5614910039962617, 1);
  sqcRZGate(q, 1.9689598990223613, 1);
  sqcRYGate(q, -1.6450266634386785, 2);
  sqcRZGate(q, 2.5394384650088146, 2);
  sqcRYGate(q, 0.07520232038534798, 3);
  sqcRZGate(q, 2.5440200889121547, 3);
  sqcRYGate(q, -3.138375145074422, 4);
  sqcRZGate(q, 2.0109117363310505, 4);
  sqcRYGate(q, 3.14039069605966, 5);
  sqcRZGate(q, 1.7635272723696378, 5);
  sqcRYGate(q, 3.141579673956952, 6);
  sqcRZGate(q, 0.5637367205818099, 6);
  sqcRYGate(q, -3.141592624875238, 7);
  sqcRZGate(q, 1.060247117598222, 7);
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
  sqcRYGate(q, -1.5717799846574965, 0);
  sqcRZGate(q, 2.8517938120428687, 0);
  sqcRYGate(q, -0.0025069063465492647, 1);
  sqcRZGate(q, 0.857519653949142, 1);
  sqcRYGate(q, 3.1301979609066857, 2);
  sqcRZGate(q, -1.2692607977405488, 2);
  sqcRYGate(q, 0.011391583831234843, 3);
  sqcRZGate(q, 1.1747499765462839, 3);
  sqcRYGate(q, 3.116846060613355, 4);
  sqcRZGate(q, 2.8810549816251494, 4);
  sqcRYGate(q, -3.0674278828418555, 5);
  sqcRZGate(q, 1.3965883150023675, 5);
  sqcRYGate(q, 1.4720070470741438, 6);
  sqcRZGate(q, 0.10827252752274641, 6);
  sqcRYGate(q, -1.5707993095550625, 7);
  sqcRZGate(q, -3.67408144619219e-06, 7);
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
  sqcRYGate(q, -1.1995631064465329e-05, 0);
  sqcRZGate(q, -0.10147406473746784, 0);
  sqcRYGate(q, 1.1899946735341062e-05, 1);
  sqcRZGate(q, 3.0654353602694466, 1);
  sqcRYGate(q, -1.6582521552217787e-07, 2);
  sqcRZGate(q, 0.2753897830214371, 2);
  sqcRYGate(q, 3.1415925440345602, 3);
  sqcRZGate(q, 0.17832642397885526, 3);
  sqcRYGate(q, 2.1664254923337012e-07, 4);
  sqcRZGate(q, 1.890735663093695, 4);
  sqcRYGate(q, -3.7324764488620453e-07, 5);
  sqcRZGate(q, 0.23127493749511616, 5);
  sqcRYGate(q, -3.382955889694347e-05, 6);
  sqcRZGate(q, 1.5194593365921403, 6);
  sqcRYGate(q, 1.570762466865781, 7);
  sqcRZGate(q, 1.6277315037993416, 7);

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
