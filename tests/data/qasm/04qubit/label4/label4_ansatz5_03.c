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

  sqcRYGate(q, 1.1968323911220387, 0);
  sqcRYGate(q, -2.8282938058134888, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.41472467028649884, 0);
  sqcRYGate(q, 0.5929732569712602, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.647476843931665, 2);
  sqcRYGate(q, 2.7114474676028957, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9315365597250005, 2);
  sqcRYGate(q, 1.7211146812325002, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8978551058568536, 1);
  sqcRYGate(q, 1.674384911743993, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0658194828407845, 1);
  sqcRYGate(q, -2.6029461379386847, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1522470428820104, 0);
  sqcRYGate(q, -0.35304000564370447, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.909433869758175, 0);
  sqcRYGate(q, 1.886429354378615, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.701835960036775, 2);
  sqcRYGate(q, 2.6520592486943233, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6264259974543744, 2);
  sqcRYGate(q, -2.318437867929422, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.550837003464369, 1);
  sqcRYGate(q, 1.19770243754403, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5127373744436667, 1);
  sqcRYGate(q, -0.5381508948355882, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1787769551976384, 0);
  sqcRYGate(q, 0.13317167736369043, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8790699503379142, 0);
  sqcRYGate(q, -2.932134417698122, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8065629283492268, 2);
  sqcRYGate(q, 1.0573695942227366, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5413054607290837, 2);
  sqcRYGate(q, 1.5388875345531676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7617428735976495, 1);
  sqcRYGate(q, 2.0676073445637138, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8200002372966044, 1);
  sqcRYGate(q, 1.150071582961058, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8957342198340577, 0);
  sqcRYGate(q, 0.5110405795651545, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6221679799335266, 0);
  sqcRYGate(q, 1.3623084696501322, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.357369591023585, 2);
  sqcRYGate(q, -1.7938335049558578, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2609920654213658, 2);
  sqcRYGate(q, 2.0314254135651657, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4482358950723523, 1);
  sqcRYGate(q, 0.033659088564369305, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.854379837996487, 1);
  sqcRYGate(q, -2.4931795108283072, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2399878665622257, 0);
  sqcRYGate(q, 0.19194335635044268, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1270052960866797, 0);
  sqcRYGate(q, 1.2266511922781078, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6863338431376919, 2);
  sqcRYGate(q, -2.1922829068547482, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.317529977804993, 2);
  sqcRYGate(q, -2.165905302339624, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9569459211497848, 1);
  sqcRYGate(q, -0.7654138803928038, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8255376874012637, 1);
  sqcRYGate(q, 1.4300451953629727, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.036441619021529, 0);
  sqcRYGate(q, -2.7993973203131386, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7382392849937203, 0);
  sqcRYGate(q, -2.6908569431053575, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1070644226625141, 2);
  sqcRYGate(q, -1.249623785026638, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.553940341519697, 2);
  sqcRYGate(q, -2.5010674391019445, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8003361355726741, 1);
  sqcRYGate(q, 0.5454236260208916, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8921100169204577, 1);
  sqcRYGate(q, 1.8458585135374284, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7602679635773804, 0);
  sqcRYGate(q, 0.36264239245188623, 1);
  sqcRYGate(q, 1.518135704011737, 2);
  sqcRYGate(q, -2.1620349943922674, 3);

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
