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

  sqcRYGate(q, -0.37848991306143837, 0);
  sqcRYGate(q, -2.5149420190905025, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.055833362793516327, 0);
  sqcRYGate(q, 2.5112420294667683, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8814504574891266, 2);
  sqcRYGate(q, 0.24708437854106347, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4386872271734945, 2);
  sqcRYGate(q, -3.0751711890524445, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.956929542399666, 1);
  sqcRYGate(q, 0.4233994169610496, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7528182993338945, 1);
  sqcRYGate(q, -2.357603723137828, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0073587915001543, 0);
  sqcRYGate(q, 1.9451544874618552, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2695918590343584, 0);
  sqcRYGate(q, 0.7111212358238397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5181037078783559, 2);
  sqcRYGate(q, -1.3775308130433714, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.18436687516845976, 2);
  sqcRYGate(q, -2.9126624012590985, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3399435838098954, 1);
  sqcRYGate(q, 2.2886901179570884, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6989577371217432, 1);
  sqcRYGate(q, 1.643377260672465, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6902355827323055, 0);
  sqcRYGate(q, -0.8370862318526244, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.196746153849675, 0);
  sqcRYGate(q, -2.535167644054544, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0589123831298664, 2);
  sqcRYGate(q, -1.1648682876163212, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.03200036053297097, 2);
  sqcRYGate(q, -0.6327423774986167, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.08322122456432698, 1);
  sqcRYGate(q, 0.14087493174861443, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5696332765921032, 1);
  sqcRYGate(q, -0.6688477427643412, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4128377517446937, 0);
  sqcRYGate(q, -0.25698904853368, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8511664516782044, 0);
  sqcRYGate(q, 2.4620675515178805, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9608917627962286, 2);
  sqcRYGate(q, 1.484864801339994, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.262668256214573, 2);
  sqcRYGate(q, -1.1904684548914808, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3321367773099188, 1);
  sqcRYGate(q, 1.5062598023143612, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9304116686721686, 1);
  sqcRYGate(q, -1.5631523144039097, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8107786499951954, 0);
  sqcRYGate(q, 3.0383575847828053, 1);
  sqcRYGate(q, 0.6077859846420265, 2);
  sqcRYGate(q, 2.4474051295767376, 3);

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
