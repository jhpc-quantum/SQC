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

  sqcRYGate(q, -3.0873370005855696, 0);
  sqcRYGate(q, 0.012248469217517323, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.197355361278067, 0);
  sqcRYGate(q, -0.05553562409904612, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9901048812667437, 2);
  sqcRYGate(q, 1.1851335513946417, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8338927446502744, 2);
  sqcRYGate(q, 1.0621729193241025, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4069223264790762, 0);
  sqcRYGate(q, 2.104349246269228, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.16401670052824482, 0);
  sqcRYGate(q, -1.980779967692696, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.069357582890306, 1);
  sqcRYGate(q, -0.7677041626581368, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3039168719667535, 1);
  sqcRYGate(q, 0.8356510570135804, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4976507361244638, 0);
  sqcRYGate(q, -2.211197954402112, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8285465057075594, 0);
  sqcRYGate(q, -0.04571224002154097, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7903424698823764, 1);
  sqcRYGate(q, -1.722754503579927, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.772939817182237, 1);
  sqcRYGate(q, 2.3245411891289223, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2273186506295843, 0);
  sqcRYGate(q, 1.7665478947462994, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5106633146669757, 0);
  sqcRYGate(q, -0.19737574148125958, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7679972038516407, 2);
  sqcRYGate(q, 1.228566288768703, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.850410034430283, 2);
  sqcRYGate(q, -1.6796993186197267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4203715196383049, 0);
  sqcRYGate(q, -0.0014295179355270915, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2059676481722839, 0);
  sqcRYGate(q, 1.271425478893517, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6391228770747603, 1);
  sqcRYGate(q, 1.8971652385326847, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1658978339227486, 1);
  sqcRYGate(q, 0.8988256150042433, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.008534149746885156, 0);
  sqcRYGate(q, -2.3103046501621414, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.989336348905302, 0);
  sqcRYGate(q, 2.9404673307366234, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5647006292294168, 1);
  sqcRYGate(q, 0.9823000175995952, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.685545656062528, 1);
  sqcRYGate(q, -1.8371231521391638, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7319557950390556, 0);
  sqcRYGate(q, -2.5330195943666998, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.078936590507296, 0);
  sqcRYGate(q, 1.7195543660135941, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.044109635864065, 2);
  sqcRYGate(q, 2.493945010619376, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0703006870708474, 2);
  sqcRYGate(q, -2.048696072220973, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9803674578194688, 0);
  sqcRYGate(q, -0.2992693839498998, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1731963350317134, 0);
  sqcRYGate(q, -2.2583217763168513, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9289654561227145, 1);
  sqcRYGate(q, 1.699114023909058, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4298896915970563, 1);
  sqcRYGate(q, 2.142970963084524, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.12931003808543728, 0);
  sqcRYGate(q, 0.12972065928828583, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.15119983034931372, 0);
  sqcRYGate(q, 0.07119070498877811, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.165438419477645, 1);
  sqcRYGate(q, 2.0600554789087777, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7262694350085945, 1);
  sqcRYGate(q, -2.347509321277361, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5799878478123854, 0);
  sqcRYGate(q, 2.1928303259690125, 1);
  sqcRYGate(q, 0.987065035392515, 2);
  sqcRYGate(q, 0.3729212489801652, 3);

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
