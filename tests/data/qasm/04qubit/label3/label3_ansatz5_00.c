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

  sqcRYGate(q, -1.7137671739251892, 0);
  sqcRYGate(q, 0.7521728606576081, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9471352584452317, 0);
  sqcRYGate(q, -0.8075085487946765, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.45226997641702915, 2);
  sqcRYGate(q, 0.9922045899413782, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4589335324332966, 2);
  sqcRYGate(q, -1.4763795504282935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.507966742419479, 1);
  sqcRYGate(q, 1.6231937555574119, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9766676861688085, 1);
  sqcRYGate(q, -3.117869965841527, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8889633683388842, 0);
  sqcRYGate(q, -0.6934376436704266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.348911209137231, 0);
  sqcRYGate(q, 0.6661364633953495, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.05878660907983567, 2);
  sqcRYGate(q, -2.8348801967836286, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.13985454768811403, 2);
  sqcRYGate(q, 2.1937137265427604, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9931367126100772, 1);
  sqcRYGate(q, -2.396964225025105, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3150794851695569, 1);
  sqcRYGate(q, 1.270044351948294, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5380409328249236, 0);
  sqcRYGate(q, 0.6394758833115857, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4352087475259565, 0);
  sqcRYGate(q, 1.8786612701712408, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.295110981220744, 2);
  sqcRYGate(q, 0.6865542830791027, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0482454914229566, 2);
  sqcRYGate(q, 1.1933181905421069, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7862178249492554, 1);
  sqcRYGate(q, 2.858330388057653, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8978067302953106, 1);
  sqcRYGate(q, -1.0329095354933058, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0982006115687253, 0);
  sqcRYGate(q, 1.4933407718774976, 1);
  sqcRYGate(q, -0.5875151129033912, 2);
  sqcRYGate(q, -0.21474646243988654, 3);

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
