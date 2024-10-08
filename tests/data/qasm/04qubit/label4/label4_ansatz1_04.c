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

  sqcRYGate(q, -1.6562688731891015, 0);
  sqcRZGate(q, -2.5269795025577975, 0);
  sqcRYGate(q, -1.5172686461465332, 1);
  sqcRZGate(q, 1.1804745447854528, 1);
  sqcRYGate(q, 2.099945058247335, 2);
  sqcRZGate(q, -2.2154389828268863, 2);
  sqcRYGate(q, 2.0059394234236647, 3);
  sqcRZGate(q, -2.219828236420007, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.10613842002519112, 0);
  sqcRZGate(q, -0.22957769469297243, 0);
  sqcRYGate(q, -2.5982650041565916, 1);
  sqcRZGate(q, -2.3942469313944694, 1);
  sqcRYGate(q, 1.295792985218509, 2);
  sqcRZGate(q, 0.742205035361396, 2);
  sqcRYGate(q, -0.2603278363796395, 3);
  sqcRZGate(q, 0.06766983202881251, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.4295748413607274, 0);
  sqcRZGate(q, 1.9641932479103303, 0);
  sqcRYGate(q, 2.875331406055159, 1);
  sqcRZGate(q, -2.7575670828053016, 1);
  sqcRYGate(q, -0.962687922910459, 2);
  sqcRZGate(q, -1.937520056800988, 2);
  sqcRYGate(q, -1.8841002926260826, 3);
  sqcRZGate(q, -1.5584470515262474, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6980945315730818, 0);
  sqcRZGate(q, -0.1646782798105547, 0);
  sqcRYGate(q, -2.1746079937495555, 1);
  sqcRZGate(q, 0.9764150190074715, 1);
  sqcRYGate(q, -0.1506208802754214, 2);
  sqcRZGate(q, 1.5769806296273199, 2);
  sqcRYGate(q, -2.1267629767096077, 3);
  sqcRZGate(q, -2.617931293564029, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.640588474528613, 0);
  sqcRZGate(q, -2.554115016695332, 0);
  sqcRYGate(q, -2.9276971006525696, 1);
  sqcRZGate(q, -2.4481984509849477, 1);
  sqcRYGate(q, -0.45382911045418656, 2);
  sqcRZGate(q, 0.2321269859646954, 2);
  sqcRYGate(q, 2.4162597306789544, 3);
  sqcRZGate(q, -2.350933313240196, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.560414636928836, 0);
  sqcRZGate(q, 0.6652880598438564, 0);
  sqcRYGate(q, -1.377200247495125, 1);
  sqcRZGate(q, -1.447223032646273, 1);
  sqcRYGate(q, 2.0072651814825364, 2);
  sqcRZGate(q, -2.668309439079777, 2);
  sqcRYGate(q, -1.3457311411049995, 3);
  sqcRZGate(q, -0.8385152961379736, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9895594779291352, 0);
  sqcRZGate(q, 0.5250775692849938, 0);
  sqcRYGate(q, 1.4727019430317023, 1);
  sqcRZGate(q, -1.525118235272968, 1);
  sqcRYGate(q, 1.3977754429715865, 2);
  sqcRZGate(q, 0.647795890801841, 2);
  sqcRYGate(q, 2.2928735852772433, 3);
  sqcRZGate(q, -0.07583700425733678, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.584104611631294, 0);
  sqcRZGate(q, -0.9838029572741078, 0);
  sqcRYGate(q, -0.334726072160187, 1);
  sqcRZGate(q, -2.290148203305918, 1);
  sqcRYGate(q, 0.06256345730734254, 2);
  sqcRZGate(q, 1.6521754633517887, 2);
  sqcRYGate(q, -2.82995021655797, 3);
  sqcRZGate(q, -1.6925447432870087, 3);

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
