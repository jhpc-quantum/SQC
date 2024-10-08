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

  sqcRYGate(q, 1.4587637406093226, 0);
  sqcRZGate(q, 0.00409865886108667, 0);
  sqcRYGate(q, 3.1415896942147596, 1);
  sqcRZGate(q, 0.002471790720186107, 1);
  sqcRYGate(q, 1.4632253585498036, 2);
  sqcRZGate(q, 3.020961827394427, 2);
  sqcRYGate(q, 0.0003965642703917451, 3);
  sqcRZGate(q, -2.157498543609896, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6491731918386439, 0);
  sqcRZGate(q, 3.1371842088119983, 0);
  sqcRYGate(q, -2.569620704484521e-05, 1);
  sqcRZGate(q, 3.1393503653858703, 1);
  sqcRYGate(q, 0.037925404203180045, 2);
  sqcRZGate(q, 0.11629173927872662, 2);
  sqcRYGate(q, 1.5726629380371755, 3);
  sqcRZGate(q, 3.0564750197062054, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5710198910973099, 0);
  sqcRZGate(q, 0.9278801758317129, 0);
  sqcRYGate(q, -1.570796352028207, 1);
  sqcRZGate(q, -3.14159137519628, 1);
  sqcRYGate(q, 1.57078963130307, 2);
  sqcRZGate(q, 0.05515946703508, 2);
  sqcRYGate(q, 0.00189884070073192, 3);
  sqcRZGate(q, 2.030100241577786, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 6.14778373986269e-07, 0);
  sqcRZGate(q, 2.2606060070362517, 0);
  sqcRYGate(q, 1.5707707535731639, 1);
  sqcRZGate(q, 0.04720568916448539, 1);
  sqcRYGate(q, 3.1415900575317868, 2);
  sqcRZGate(q, -3.0392074966796283, 2);
  sqcRYGate(q, -3.141591386466651, 3);
  sqcRZGate(q, -1.1493660915348964, 3);

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
