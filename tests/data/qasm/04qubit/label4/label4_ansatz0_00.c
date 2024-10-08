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

  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.462763683597459, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.4142289247480045, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.010645527171208423, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.3898768834040435, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.31393320033691885, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.6711166480316159, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -0.7023584856539137, 0);
  sqcRZGate(q, 3.0398490516292513e-06, 0);
  sqcRXGate(q, 0.05180001860888066, 1);
  sqcRZGate(q, -0.13968171613894517, 1);
  sqcRXGate(q, 6.671453971482497e-05, 2);
  sqcRZGate(q, -0.25176609461365634, 2);
  sqcRXGate(q, -1.3212370723431457, 3);
  sqcRZGate(q, 0.033504028434576436, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.8483668037280446, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -4.52110982909854e-06, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.00012456962437620684, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.9309262786311739, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.005433540419398925, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.027821041803539944, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -1.1424520563777987, 0);
  sqcRZGate(q, -2.096741677547725e-05, 0);
  sqcRXGate(q, -0.19314372511732744, 1);
  sqcRZGate(q, -0.7415119052014687, 1);
  sqcRXGate(q, 2.6278039277613027e-05, 2);
  sqcRZGate(q, -0.23892889007869786, 2);
  sqcRXGate(q, -1.3950032109964408, 3);
  sqcRZGate(q, 0.01594143370195545, 3);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.0887902421302352, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcHGate(q, 2);
  sqcSdgGate(q, 0);
  sqcHGate(q, 0);
  sqcSdgGate(q, 2);
  sqcHGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 5.502984321882062e-06, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 0);
  sqcSGate(q, 0);
  sqcHGate(q, 2);
  sqcSGate(q, 2);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -2.8569829382767973e-06, 1);
  sqcCXGate(q, 0, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.18316742594801677, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcHGate(q, 3);
  sqcSdgGate(q, 1);
  sqcHGate(q, 1);
  sqcSdgGate(q, 3);
  sqcHGate(q, 3);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.001064946558146895, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 1, 2);
  sqcHGate(q, 1);
  sqcSGate(q, 1);
  sqcHGate(q, 3);
  sqcSGate(q, 3);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.2296983936197273, 3);
  sqcCXGate(q, 2, 3);
  sqcRXGate(q, -1.296819596313496, 0);
  sqcRZGate(q, 0.3533015964992349, 0);
  sqcRXGate(q, 0.06509561842849904, 1);
  sqcRZGate(q, -0.2707269241386918, 1);
  sqcRXGate(q, -1.1867178019659823e-05, 2);
  sqcRZGate(q, -0.41536394095861384, 2);
  sqcRXGate(q, -0.41388433640028643, 3);
  sqcRZGate(q, 0.2083082919484992, 3);

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
