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

  sqcRYGate(q, -2.4612747208412413, 0);
  sqcRYGate(q, 1.2829146894932997, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2646113664094942, 0);
  sqcRYGate(q, 0.8694968762982498, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8557260139227205, 2);
  sqcRYGate(q, -1.138443992920826, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8685309447063039, 2);
  sqcRYGate(q, 1.9210589037851915, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4819289126210453, 1);
  sqcRYGate(q, -0.7218432887153521, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.559843454780509, 1);
  sqcRYGate(q, 2.99200790192649, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8222360513133466, 0);
  sqcRYGate(q, 2.2484161210856812, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8787151181748767, 0);
  sqcRYGate(q, -0.7234266301563806, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.920545248649692, 2);
  sqcRYGate(q, 0.5068500114008413, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.025400682633832, 2);
  sqcRYGate(q, 2.161984026861572, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6332322489808229, 1);
  sqcRYGate(q, 0.899927456469504, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.10204199688233562, 1);
  sqcRYGate(q, -0.8065152444235327, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.059021084653584, 0);
  sqcRYGate(q, 1.4040247637371168, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1229248887097283, 0);
  sqcRYGate(q, -1.2773303693185918, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4247496001679334, 2);
  sqcRYGate(q, 0.7920793802249921, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.17149806149914376, 2);
  sqcRYGate(q, -0.6020119745921013, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4630036290784973, 1);
  sqcRYGate(q, 1.220989626327241, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9486982736972155, 1);
  sqcRYGate(q, 0.36873743768749506, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.987500127820704, 0);
  sqcRYGate(q, -1.2542532709226748, 1);
  sqcRYGate(q, -1.2065994203340353, 2);
  sqcRYGate(q, 1.4012247905134556, 3);

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
