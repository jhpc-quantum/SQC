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

  sqcRYGate(q, -1.3694870210261005, 0);
  sqcRZGate(q, 1.0965227908600532, 0);
  sqcRYGate(q, -1.2256445275780248, 1);
  sqcRZGate(q, -0.9327333977517346, 1);
  sqcRYGate(q, -0.0047424312069088625, 2);
  sqcRZGate(q, -1.2914719455040498, 2);
  sqcRYGate(q, 0.012336233841949706, 3);
  sqcRZGate(q, 2.5128558125564155, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0409153944172755, 0);
  sqcRZGate(q, -0.1315908635095857, 0);
  sqcRYGate(q, -1.1698342486630597, 1);
  sqcRZGate(q, -2.0500419219791493, 1);
  sqcRYGate(q, -0.0016195502030065254, 2);
  sqcRZGate(q, -0.2957752941270821, 2);
  sqcRYGate(q, 3.0075110325649743, 3);
  sqcRZGate(q, -2.641632716071558, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7664931353935103, 0);
  sqcRZGate(q, -1.2553143471039871, 0);
  sqcRYGate(q, 1.4349969540083485, 1);
  sqcRZGate(q, 1.5907682419932647, 1);
  sqcRYGate(q, 1.508862876853482, 2);
  sqcRZGate(q, 1.515143939007213, 2);
  sqcRYGate(q, 1.678128784314625, 3);
  sqcRZGate(q, -0.6210821847898279, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.1050092340409936, 0);
  sqcRZGate(q, 0.830768670235252, 0);
  sqcRYGate(q, -3.0368863669593154, 1);
  sqcRZGate(q, -0.8763245658760502, 1);
  sqcRYGate(q, 1.289195410139988, 2);
  sqcRZGate(q, -3.0582773912389682, 2);
  sqcRYGate(q, -3.0385002544922166, 3);
  sqcRZGate(q, -0.9911672373478514, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.945036719066156, 0);
  sqcRZGate(q, 0.024448959918006184, 0);
  sqcRYGate(q, -1.9179358731254492, 1);
  sqcRZGate(q, 1.1002975432896474, 1);
  sqcRYGate(q, -0.5701579517228641, 2);
  sqcRZGate(q, 1.4722907828403784, 2);
  sqcRYGate(q, 3.1307352960271877, 3);
  sqcRZGate(q, -0.7278435024861315, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.0045254299859005505, 0);
  sqcRZGate(q, 2.3641970898648252, 0);
  sqcRYGate(q, -3.1401050124480343, 1);
  sqcRZGate(q, 0.368978448764901, 1);
  sqcRYGate(q, -1.4776788364106856, 2);
  sqcRZGate(q, 1.5266334773013632, 2);
  sqcRYGate(q, 3.0098603922420173, 3);
  sqcRZGate(q, 2.9581316848422854, 3);

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
