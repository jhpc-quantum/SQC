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

  sqcRYGate(q, 1.5050787794734217, 0);
  sqcRYGate(q, -3.1311297403935954, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.258310541424161, 0);
  sqcRYGate(q, -3.0438710032806218, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5300484893808933, 0);
  sqcRYGate(q, 1.459813158409263, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1679270757957254, 0);
  sqcRYGate(q, 1.2750965663536722, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.986552124038656, 0);
  sqcRYGate(q, 1.7401070778605625, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.010804619355542958, 0);
  sqcRYGate(q, -1.4456244316008524, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6078315852826929, 1);
  sqcRYGate(q, 3.029116273643325, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.610011520742816, 1);
  sqcRYGate(q, -1.5074291295841282, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1102558562241707, 1);
  sqcRYGate(q, -2.769501051202532, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7257556578196279, 1);
  sqcRYGate(q, -2.9291907685845637, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6133220980317802, 2);
  sqcRYGate(q, 1.6949479714832787, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3391888479310108, 2);
  sqcRYGate(q, -0.6989007071086588, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3717855296779744, 0);
  sqcRYGate(q, -0.2508789344956943, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.978812566317001, 0);
  sqcRYGate(q, -2.1506894874993026, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3673194530383866, 0);
  sqcRYGate(q, 1.694035492945211, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0310989464752103, 0);
  sqcRYGate(q, 2.5366422875845696, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7280144897940319, 0);
  sqcRYGate(q, 1.4072715199130816, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.528925633991127, 0);
  sqcRYGate(q, -1.5645589725822289, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.05742778529540959, 1);
  sqcRYGate(q, -1.144057764002638, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1619069677186613, 1);
  sqcRYGate(q, 0.1706463044921547, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1256714030612494, 1);
  sqcRYGate(q, -1.6699006674631853, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.433593878261863, 1);
  sqcRYGate(q, -0.143394492320442, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6266303002155906, 2);
  sqcRYGate(q, -2.806289534439429, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0704729723079236, 2);
  sqcRYGate(q, -2.457420283770474, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8267780940392613, 0);
  sqcRYGate(q, 1.9577466172073656, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0103001450995963, 0);
  sqcRYGate(q, 1.8474032080229836, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5178364736636238, 0);
  sqcRYGate(q, -2.8338064306382873, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8525525233653051, 0);
  sqcRYGate(q, 0.5936261756401714, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.090562089323522, 0);
  sqcRYGate(q, -0.4807327341293554, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9354790338970618, 0);
  sqcRYGate(q, -2.5506576272128654, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7658075263474313, 1);
  sqcRYGate(q, -2.146608006842215, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9358179844537177, 1);
  sqcRYGate(q, 1.2039026915471416, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.66370969088998, 1);
  sqcRYGate(q, -1.4443468723147777, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0260814879064526, 1);
  sqcRYGate(q, 1.931780241626159, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8206951643256861, 2);
  sqcRYGate(q, 2.859922925410229, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.055376163807817846, 2);
  sqcRYGate(q, 2.618738435267781, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6675640660823605, 0);
  sqcRYGate(q, 1.6346948568490145, 1);
  sqcRYGate(q, -0.2665131914156058, 2);
  sqcRYGate(q, 2.1404033663172397, 3);

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
