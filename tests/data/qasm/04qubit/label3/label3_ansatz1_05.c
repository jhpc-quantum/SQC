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

  sqcRYGate(q, -1.5813896118047053, 0);
  sqcRZGate(q, -2.2099301907548194, 0);
  sqcRYGate(q, -0.9003398476701933, 1);
  sqcRZGate(q, -0.32655059135173065, 1);
  sqcRYGate(q, 2.3886598160879, 2);
  sqcRZGate(q, -0.8126841391631134, 2);
  sqcRYGate(q, -1.8849335371723062, 3);
  sqcRZGate(q, 2.2506369478505297, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7917066704154954, 0);
  sqcRZGate(q, -1.3516449267409498, 0);
  sqcRYGate(q, 1.1492516312362384, 1);
  sqcRZGate(q, -2.2365758495488786, 1);
  sqcRYGate(q, 0.06859171323118013, 2);
  sqcRZGate(q, -0.16827805787837172, 2);
  sqcRYGate(q, -1.251221086226625, 3);
  sqcRZGate(q, -2.7323548379869105, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.500624817655009, 0);
  sqcRZGate(q, -2.6900767270777677, 0);
  sqcRYGate(q, -2.8949013333052123, 1);
  sqcRZGate(q, -2.1301605377329804, 1);
  sqcRYGate(q, 2.0014615811593854, 2);
  sqcRZGate(q, 2.6574167503926978, 2);
  sqcRYGate(q, 1.6993004772486238, 3);
  sqcRZGate(q, -2.391843370658072, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1828118450064442, 0);
  sqcRZGate(q, -1.7268899531371817, 0);
  sqcRYGate(q, 2.1039143068804433, 1);
  sqcRZGate(q, 1.3715551831486008, 1);
  sqcRYGate(q, -3.0118205039797483, 2);
  sqcRZGate(q, 0.927534116415491, 2);
  sqcRYGate(q, -1.212246325302389, 3);
  sqcRZGate(q, 1.0635032831443683, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.961230179617275, 0);
  sqcRZGate(q, 0.24453081492566991, 0);
  sqcRYGate(q, -0.26300308236290615, 1);
  sqcRZGate(q, 0.8849313999973055, 1);
  sqcRYGate(q, -0.6433891980483264, 2);
  sqcRZGate(q, -0.8780438030413983, 2);
  sqcRYGate(q, 3.104525540621195, 3);
  sqcRZGate(q, 0.48712203224246586, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.210346607411986, 0);
  sqcRZGate(q, -0.1090449950975856, 0);
  sqcRYGate(q, -1.216791716441902, 1);
  sqcRZGate(q, 2.3367169591291894, 1);
  sqcRYGate(q, 0.10270578267623047, 2);
  sqcRZGate(q, 0.5725473182751619, 2);
  sqcRYGate(q, -0.7623733636201475, 3);
  sqcRZGate(q, 2.2728573588393024, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.877819304811189, 0);
  sqcRZGate(q, 2.1476365759487184, 0);
  sqcRYGate(q, 2.4197665192408606, 1);
  sqcRZGate(q, 0.7460564357218623, 1);
  sqcRYGate(q, 1.9877754441396258, 2);
  sqcRZGate(q, 1.3242422046227653, 2);
  sqcRYGate(q, -0.88934098445658, 3);
  sqcRZGate(q, 0.16388619970442342, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0017970816162154, 0);
  sqcRZGate(q, -2.5208257707878605, 0);
  sqcRYGate(q, -2.8815101275096433, 1);
  sqcRZGate(q, -2.334080785562941, 1);
  sqcRYGate(q, 1.168634831116707, 2);
  sqcRZGate(q, -1.1218313315997657, 2);
  sqcRYGate(q, -2.315288359374248, 3);
  sqcRZGate(q, -1.796234576686822, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7032150325372308, 0);
  sqcRZGate(q, 1.0287201384807816, 0);
  sqcRYGate(q, 0.28055366119208447, 1);
  sqcRZGate(q, -0.23650377068502682, 1);
  sqcRYGate(q, 1.9376202889412284, 2);
  sqcRZGate(q, 1.7703225614604738, 2);
  sqcRYGate(q, 1.3258884629854, 3);
  sqcRZGate(q, -2.711057219369217, 3);

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
