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

  sqcRYGate(q, -3.134923036486953, 0);
  sqcRYGate(q, -0.44698305916956294, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2688567922156935, 0);
  sqcRYGate(q, 1.59098423803629, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1079578446930247, 2);
  sqcRYGate(q, -1.5191746928556034, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5982891814312713, 2);
  sqcRYGate(q, 3.0422148937975426, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.369604642988774, 0);
  sqcRYGate(q, -0.7892533484419809, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.922463123792585, 0);
  sqcRYGate(q, 1.6115631995163586, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9550320005931034, 1);
  sqcRYGate(q, 1.8107717128967424, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8964140678605024, 1);
  sqcRYGate(q, -0.5678630553428039, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.041761166280233, 0);
  sqcRYGate(q, 3.064568907302305, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6290915236160943, 0);
  sqcRYGate(q, 0.9925556492235463, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7159187420006528, 2);
  sqcRYGate(q, 3.106268564933918, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.02463771069555107, 2);
  sqcRYGate(q, -1.015702723414825, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8812190704080711, 0);
  sqcRYGate(q, 2.8059964259022303, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2969158211997218, 0);
  sqcRYGate(q, 0.9434349497915365, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.359034048386183, 1);
  sqcRYGate(q, 0.09231173022021721, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2298721686271519, 1);
  sqcRYGate(q, 1.2802759761410565, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.107710809572023, 0);
  sqcRYGate(q, -2.9812986353061666, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.05406933535036986, 0);
  sqcRYGate(q, -0.3850344067800169, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.749143123370385, 2);
  sqcRYGate(q, 2.52947581364844, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3349957841336062, 2);
  sqcRYGate(q, -1.89980806149031, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1510133381448195, 0);
  sqcRYGate(q, 2.3127679789204945, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3246302781358969, 0);
  sqcRYGate(q, -2.533885467941758, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.47505156402275883, 1);
  sqcRYGate(q, 2.8582482625111103, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5231934270264499, 1);
  sqcRYGate(q, 1.1848472497491926, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8919426986008603, 0);
  sqcRYGate(q, -0.758551493509902, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.716388142007695, 0);
  sqcRYGate(q, -0.5469273961809769, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0351002574092307, 2);
  sqcRYGate(q, -0.619569910563627, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3007417446190788, 2);
  sqcRYGate(q, -2.867386335219387, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6545971429498803, 0);
  sqcRYGate(q, 0.1773518717893232, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.488857149913282, 0);
  sqcRYGate(q, -2.2161194774602366, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2375537595192592, 1);
  sqcRYGate(q, -2.033253309244934, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.019588301328997, 1);
  sqcRYGate(q, 1.4624283195645662, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6103466827259236, 0);
  sqcRYGate(q, 0.6858105355652299, 1);
  sqcRYGate(q, 0.160270792790965, 2);
  sqcRYGate(q, -2.93635869344035, 3);

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
