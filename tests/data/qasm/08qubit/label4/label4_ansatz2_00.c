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

  sqcRYGate(q, 3.1415912703510336, 0);
  sqcRZGate(q, -0.1943705273988048, 0);
  sqcRYGate(q, 0.8006201906685959, 1);
  sqcRZGate(q, 8.161633634973242e-05, 1);
  sqcRYGate(q, 2.35192401820683e-06, 2);
  sqcRZGate(q, 1.6316738841446528, 2);
  sqcRYGate(q, 1.6501033495832704, 3);
  sqcRZGate(q, 1.2931058085146253e-05, 3);
  sqcRYGate(q, -3.141591709178971, 4);
  sqcRZGate(q, 0.9640282399897678, 4);
  sqcRYGate(q, 0.5370861180714206, 5);
  sqcRZGate(q, -1.570892352915068, 5);
  sqcRYGate(q, -3.141592306228472, 6);
  sqcRZGate(q, -0.8617997280666415, 6);
  sqcRYGate(q, -2.9336219153887835, 7);
  sqcRZGate(q, 3.141179859405971, 7);
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
  sqcRYGate(q, -1.9034720448729558e-06, 0);
  sqcRZGate(q, 1.1745863058887696, 0);
  sqcRYGate(q, 0.08547235171590106, 1);
  sqcRZGate(q, -0.0005086105332189387, 1);
  sqcRYGate(q, 9.192151684249085e-07, 2);
  sqcRZGate(q, -2.304218085800434, 2);
  sqcRYGate(q, 1.4076740367333833, 3);
  sqcRZGate(q, 1.5685063926157694, 3);
  sqcRYGate(q, -1.570793326446024, 4);
  sqcRZGate(q, -1.5923998353423978, 4);
  sqcRYGate(q, -1.5707890715960895, 5);
  sqcRZGate(q, 2.4394242711377463, 5);
  sqcRYGate(q, -1.5707967501889053, 6);
  sqcRZGate(q, 3.14159192118623, 6);
  sqcRYGate(q, -0.167377924619175, 7);
  sqcRZGate(q, 1.93601203084322, 7);
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
  sqcRYGate(q, 1.5707918509647962, 0);
  sqcRZGate(q, 1.5707954509783695, 0);
  sqcRYGate(q, -1.5711844514124458, 1);
  sqcRZGate(q, 2.8319859363600366, 1);
  sqcRYGate(q, -1.5707991732954865, 2);
  sqcRZGate(q, 1.5707977487767966, 2);
  sqcRYGate(q, -2.877615473772251, 3);
  sqcRZGate(q, 1.5687950175879304, 3);
  sqcRYGate(q, 3.141590168676892, 4);
  sqcRZGate(q, 1.549193752636664, 4);
  sqcRYGate(q, -0.0007240297848083443, 5);
  sqcRZGate(q, -0.6815706606069086, 5);
  sqcRYGate(q, 1.5705205724204385, 6);
  sqcRZGate(q, 3.1415917446291663, 6);
  sqcRYGate(q, 3.1365721767863395, 7);
  sqcRZGate(q, -1.2057228257408912, 7);
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
  sqcRYGate(q, 1.5707934419003937, 0);
  sqcRZGate(q, -1.34696713543054, 0);
  sqcRYGate(q, -1.570795421810896, 1);
  sqcRZGate(q, 2.5412497473850624, 1);
  sqcRYGate(q, -1.5707950788582747, 2);
  sqcRZGate(q, 1.7946233958979814, 2);
  sqcRYGate(q, -1.5707986684458182, 3);
  sqcRZGate(q, 0.9704503082040532, 3);
  sqcRYGate(q, 1.570794678574244, 4);
  sqcRZGate(q, -1.665273479958876, 4);
  sqcRYGate(q, 1.5707994655042992, 5);
  sqcRZGate(q, -0.6003507028961373, 5);
  sqcRYGate(q, 1.5707962624700778, 6);
  sqcRZGate(q, 3.047111443617881, 6);
  sqcRYGate(q, 1.5707953604652776, 7);
  sqcRZGate(q, 0.9704395588097455, 7);

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
