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

  sqcRYGate(q, 1.874622143838653, 0);
  sqcRZGate(q, -1.2613948816403737, 0);
  sqcRYGate(q, -1.5732363813643688, 1);
  sqcRZGate(q, 0.7967647066415195, 1);
  sqcRYGate(q, -2.0791708693850524, 2);
  sqcRZGate(q, -0.02884342734805561, 2);
  sqcRYGate(q, 0.8201326281121926, 3);
  sqcRZGate(q, -0.5299200112797449, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7439332424880662, 0);
  sqcRZGate(q, 1.620144670433905, 0);
  sqcRYGate(q, -0.04882142932511524, 1);
  sqcRZGate(q, -1.1537571084790397, 1);
  sqcRYGate(q, 3.017266559216053, 2);
  sqcRZGate(q, -0.4836100435250552, 2);
  sqcRYGate(q, -0.9237398741061695, 3);
  sqcRZGate(q, 1.1207989052844551, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3420607442368881, 0);
  sqcRZGate(q, -2.3361538155952535, 0);
  sqcRYGate(q, 0.8263618629951882, 1);
  sqcRZGate(q, -2.0562868053869323, 1);
  sqcRYGate(q, -0.29618784867395503, 2);
  sqcRZGate(q, -1.8858714740189795, 2);
  sqcRYGate(q, 0.89526113887867, 3);
  sqcRZGate(q, -0.324579013287356, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.39926267122904835, 0);
  sqcRZGate(q, 1.5146304913894673, 0);
  sqcRYGate(q, -1.4327167124650815, 1);
  sqcRZGate(q, -0.31934926327458385, 1);
  sqcRYGate(q, -2.064829195378656, 2);
  sqcRZGate(q, -0.542385599766659, 2);
  sqcRYGate(q, 1.5299290342714864, 3);
  sqcRZGate(q, 0.4237701022062934, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.990535249420912, 0);
  sqcRZGate(q, 1.8386619829810331, 0);
  sqcRYGate(q, 2.676427476695344, 1);
  sqcRZGate(q, 0.652698188144444, 1);
  sqcRYGate(q, 0.43838374186724227, 2);
  sqcRZGate(q, -2.140105928341751, 2);
  sqcRYGate(q, -2.0885579957388702, 3);
  sqcRZGate(q, -0.4645580714238437, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9566781791338421, 0);
  sqcRZGate(q, -2.5279655235239424, 0);
  sqcRYGate(q, 0.07665022244633274, 1);
  sqcRZGate(q, 1.8250323055895177, 1);
  sqcRYGate(q, -2.994659693878805, 2);
  sqcRZGate(q, 0.9009963651301894, 2);
  sqcRYGate(q, 2.0596626754242147, 3);
  sqcRZGate(q, 2.7587131889027985, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.814198060444698, 0);
  sqcRZGate(q, 0.3254424202628838, 0);
  sqcRYGate(q, -2.5633753929819525, 1);
  sqcRZGate(q, -3.003624492865872, 1);
  sqcRYGate(q, 1.6102334922453734, 2);
  sqcRZGate(q, 2.495569327397819, 2);
  sqcRYGate(q, 0.4117053314702823, 3);
  sqcRZGate(q, -3.06639188121375, 3);

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
