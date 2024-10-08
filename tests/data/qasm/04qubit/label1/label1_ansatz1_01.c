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

  sqcRYGate(q, -0.6653575829932157, 0);
  sqcRZGate(q, -0.8574692425063057, 0);
  sqcRYGate(q, -1.5713236906881658, 1);
  sqcRZGate(q, -1.5741514350734458, 1);
  sqcRYGate(q, 8.342145228338614e-06, 2);
  sqcRZGate(q, -1.3189207386124382, 2);
  sqcRYGate(q, 1.9145692005007264, 3);
  sqcRZGate(q, 2.87135985419021, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6127027797039682, 0);
  sqcRZGate(q, -1.5753627828190198, 0);
  sqcRYGate(q, 2.944141651476193, 1);
  sqcRZGate(q, -0.60550262843113, 1);
  sqcRYGate(q, -1.5707971296511314, 2);
  sqcRZGate(q, -0.8634443944848331, 2);
  sqcRYGate(q, 2.2853141123427725, 3);
  sqcRZGate(q, 0.341120704889307, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.482922089476978, 0);
  sqcRZGate(q, 2.2232783061604717, 0);
  sqcRYGate(q, -2.232063374754686, 1);
  sqcRZGate(q, 1.178165561163654, 1);
  sqcRYGate(q, 2.009682108360098, 2);
  sqcRZGate(q, 2.372743210386212, 2);
  sqcRYGate(q, -1.0134961760227874, 3);
  sqcRZGate(q, -2.851405785261925, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8023884376713193, 0);
  sqcRZGate(q, 1.5531327675896813, 0);
  sqcRYGate(q, 2.1096875574020475e-06, 1);
  sqcRZGate(q, -2.7489616903750735, 1);
  sqcRYGate(q, 6.417976812836797e-07, 2);
  sqcRZGate(q, 2.339638728731326, 2);
  sqcRYGate(q, 2.6912418199978876, 3);
  sqcRZGate(q, 0.3043663261125907, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.9228891196367865, 0);
  sqcRZGate(q, 0.19674653028205333, 0);
  sqcRYGate(q, -1.5707918575783915, 1);
  sqcRZGate(q, 0.534765596811979, 1);
  sqcRYGate(q, -1.5708130979473731, 2);
  sqcRZGate(q, 0.8349972416760107, 2);
  sqcRYGate(q, -1.0358817589621685, 3);
  sqcRZGate(q, 0.19559618054070693, 3);

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
