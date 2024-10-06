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

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.05274167563188951, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.0019366170158155072, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.04118288203264802, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.06446409793076871, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.04353051891307383, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.5879143291735153, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.18144464906580218, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.17140621362504824, 0);
  sqcRZGate(q, -0.03099060338518499, 1);
  sqcRZGate(q, -0.028596725826501506, 2);
  sqcRZGate(q, -0.10099420702494334, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.17952317507305354, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.05489765810299514, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.017981338905478813, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.2456152145191099, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.16669081512877165, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.3033466141928268, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.10802489150134942, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.21604754331115467, 0);
  sqcRZGate(q, 0.0018151856006238865, 1);
  sqcRZGate(q, 0.1273450188439879, 2);
  sqcRZGate(q, 0.2918560284854844, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.34354806531181564, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.35290205320344226, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.40543336737951513, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.4335685541628318, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.1783506454438587, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.20569435395401664, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.08753692707041807, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.2739438253210645, 0);
  sqcRZGate(q, 0.18012172376878793, 1);
  sqcRZGate(q, 0.23848419129221965, 2);
  sqcRZGate(q, 0.5472163498846802, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.8516415559201382, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.6977580446525947, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.804056698296111, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.8154442618639057, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.05317096708704468, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.5481079654933197, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.3234991066193318, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.27187215521515423, 0);
  sqcRZGate(q, 0.29579877042301744, 1);
  sqcRZGate(q, 0.28038756742244314, 2);
  sqcRZGate(q, 0.3556461660212701, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.381623794621733, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.6212762791091961, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.8141021992367645, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -1.0167283766923638, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.220104930505118, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -1.4873260516801259, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.5352155943626918, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.37619930752110725, 0);
  sqcRZGate(q, -0.008492709358547977, 1);
  sqcRZGate(q, -0.006182194367672608, 2);
  sqcRZGate(q, 0.5717166170020713, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.5568574054685902, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.2565703642613676, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.21580459981089717, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.9630233837298018, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.0418516707536276, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -1.9077756997544066, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.7170865140755638, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.762998124210533, 0);
  sqcRZGate(q, 0.001770411954221251, 1);
  sqcRZGate(q, -0.00013777747538432363, 2);
  sqcRZGate(q, 0.587465051625039, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.5298776899791234, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.48546810933290935, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.1998255404527736, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.9776826226321952, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.4024449339705614, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -2.2606326269849957, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.6533527877239876, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.0194303504844355, 0);
  sqcRZGate(q, 0.005284041731259162, 1);
  sqcRZGate(q, -0.0014585787158925946, 2);
  sqcRZGate(q, 0.9374192766628713, 3);

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
