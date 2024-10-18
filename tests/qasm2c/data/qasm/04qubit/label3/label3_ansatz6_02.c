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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 2.5932663601025383, 0);
  sqcRYGate(q, 1.231618352697537, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.49402389483113, 0);
  sqcRYGate(q, 1.9336314890547517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9852710533842924, 1);
  sqcRYGate(q, -1.691203493319682, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.042007649241646, 1);
  sqcRYGate(q, 0.937465338751644, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7856850676163702, 2);
  sqcRYGate(q, -2.2528021438015613, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5983373911598444, 2);
  sqcRYGate(q, 1.059291079543133, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.967115515503638, 0);
  sqcRYGate(q, -1.7365391464009818, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.23528684998727734, 0);
  sqcRYGate(q, 0.04205002128147005, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5158387358571814, 1);
  sqcRYGate(q, -0.3222055588361605, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8021771674320872, 1);
  sqcRYGate(q, -1.7558369989467888, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.142000606833952, 2);
  sqcRYGate(q, -2.592199591408499, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.665791222796465, 2);
  sqcRYGate(q, 3.0121769738278257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2805410533637007, 0);
  sqcRYGate(q, -3.115672560663977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5435019510932124, 0);
  sqcRYGate(q, 3.061295237251847, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1333302675332333, 1);
  sqcRYGate(q, -1.1054984929768015, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.903203285531057, 1);
  sqcRYGate(q, 0.06444857240682822, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.42697880252923426, 2);
  sqcRYGate(q, 0.060277029293159146, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.423028656799411, 2);
  sqcRYGate(q, -1.4045718863616363, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5538125612389564, 0);
  sqcRYGate(q, 2.4371830151513905, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5181413744456425, 0);
  sqcRYGate(q, -2.8811909074507405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.25601018784010293, 1);
  sqcRYGate(q, 0.5448892125724011, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9639805421335224, 1);
  sqcRYGate(q, 2.3491615330138504, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5741798970561273, 2);
  sqcRYGate(q, 2.361911173578791, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5143893514405562, 2);
  sqcRYGate(q, -2.631359848276131, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2003290704586096, 0);
  sqcRYGate(q, -0.11481524472581553, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9460638692539913, 0);
  sqcRYGate(q, 1.3463292522779948, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9865074789412338, 1);
  sqcRYGate(q, 2.168114378250564, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8502837974829462, 1);
  sqcRYGate(q, -1.5718154786005807, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9450831899597913, 2);
  sqcRYGate(q, 2.195285959815358, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4467285482488164, 2);
  sqcRYGate(q, -2.9117032347987464, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5265725800177505, 0);
  sqcRYGate(q, -1.0360359637792502, 1);
  sqcRYGate(q, 1.979859335699081, 2);
  sqcRYGate(q, 2.4271136918571425, 3);

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
