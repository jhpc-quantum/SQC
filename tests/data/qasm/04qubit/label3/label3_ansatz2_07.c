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

  sqcRYGate(q, -1.799749697454317, 0);
  sqcRZGate(q, -0.1009480605684585, 0);
  sqcRYGate(q, 2.28304577692957, 1);
  sqcRZGate(q, 0.8904131318123067, 1);
  sqcRYGate(q, -1.480906253146667, 2);
  sqcRZGate(q, -3.011990923874588, 2);
  sqcRYGate(q, -1.2408243223147282, 3);
  sqcRZGate(q, 2.6593536314033233, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.543382677640078, 0);
  sqcRZGate(q, -1.6389450395898875, 0);
  sqcRYGate(q, 0.06977973545257028, 1);
  sqcRZGate(q, -0.1802025916872692, 1);
  sqcRYGate(q, -0.6421944089876153, 2);
  sqcRZGate(q, 1.5220628646814836, 2);
  sqcRYGate(q, 1.2518932747727254, 3);
  sqcRZGate(q, 2.8404143479020347, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.8817931058776516, 0);
  sqcRZGate(q, -1.1145444392871742, 0);
  sqcRYGate(q, -0.7328453365838419, 1);
  sqcRZGate(q, 0.31352930284844394, 1);
  sqcRYGate(q, 0.006705352113578946, 2);
  sqcRZGate(q, 1.159501914816155, 2);
  sqcRYGate(q, -0.39664570580254477, 3);
  sqcRZGate(q, 0.4194099472367281, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.2383020455796707, 0);
  sqcRZGate(q, -0.4456455193138714, 0);
  sqcRYGate(q, 3.07884391625578, 1);
  sqcRZGate(q, 2.4271146594233617, 1);
  sqcRYGate(q, 0.644303999754279, 2);
  sqcRZGate(q, -1.9349198754705168, 2);
  sqcRYGate(q, -2.8918760724875052, 3);
  sqcRZGate(q, 1.7328908924785917, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.8021867501211876, 0);
  sqcRZGate(q, 2.3691942240635258, 0);
  sqcRYGate(q, 1.159869643470144, 1);
  sqcRZGate(q, -0.7896294588259494, 1);
  sqcRYGate(q, -1.4893961325951555, 2);
  sqcRZGate(q, 2.4540806278883314, 2);
  sqcRYGate(q, 0.3101734284975306, 3);
  sqcRZGate(q, 0.07460485998197873, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.09254094713672423, 0);
  sqcRZGate(q, -2.576074816093771, 0);
  sqcRYGate(q, 0.43642638672124434, 1);
  sqcRZGate(q, 3.0262014295144346, 1);
  sqcRYGate(q, 1.47774564918767, 2);
  sqcRZGate(q, 0.6013976937811064, 2);
  sqcRYGate(q, -1.8304007903449329, 3);
  sqcRZGate(q, 1.733548311743732, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.9681531237364555, 0);
  sqcRZGate(q, 2.8281546849157477, 0);
  sqcRYGate(q, -1.5943538112276479, 1);
  sqcRZGate(q, 2.0093752016407747, 1);
  sqcRYGate(q, 0.8596653879059978, 2);
  sqcRZGate(q, -2.5775494637697296, 2);
  sqcRYGate(q, -2.2833339073929917, 3);
  sqcRZGate(q, 0.2989348142790139, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.09074943044613348, 0);
  sqcRZGate(q, -3.035211463640345, 0);
  sqcRYGate(q, 0.8548126842227346, 1);
  sqcRZGate(q, -1.9785095869528457, 1);
  sqcRYGate(q, 1.0111818474955845, 2);
  sqcRZGate(q, -0.36009377754060934, 2);
  sqcRYGate(q, 0.13591455141166714, 3);
  sqcRZGate(q, 0.9330622693650177, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.9089131024266601, 0);
  sqcRZGate(q, 0.5154133427963876, 0);
  sqcRYGate(q, -0.08033078498760293, 1);
  sqcRZGate(q, -1.5085126383618919, 1);
  sqcRYGate(q, -2.4617205009119023, 2);
  sqcRZGate(q, -2.6709479595829717, 2);
  sqcRYGate(q, -1.422824227737057, 3);
  sqcRZGate(q, 1.1443163657294217, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.1892444553656518, 0);
  sqcRZGate(q, 1.8897923859055987, 0);
  sqcRYGate(q, -0.9755053281304459, 1);
  sqcRZGate(q, -0.5329505504274309, 1);
  sqcRYGate(q, -0.07474278018703374, 2);
  sqcRZGate(q, 1.6929209517856165, 2);
  sqcRYGate(q, -0.8048948432299514, 3);
  sqcRZGate(q, -1.4538154100429512, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.06289489117258196, 0);
  sqcRZGate(q, -1.0320120050083892, 0);
  sqcRYGate(q, -0.7342097403010639, 1);
  sqcRZGate(q, 0.34047555816507036, 1);
  sqcRYGate(q, -1.734426576398282, 2);
  sqcRZGate(q, 1.5898717150968955, 2);
  sqcRYGate(q, -3.1401702860709597, 3);
  sqcRZGate(q, -0.7101921761241607, 3);

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
