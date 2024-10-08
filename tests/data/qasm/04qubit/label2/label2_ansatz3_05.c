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

  sqcRYGate(q, -1.7782901588947606, 0);
  sqcRZGate(q, -2.945997059873186, 0);
  sqcRYGate(q, 0.9737623679419306, 1);
  sqcRZGate(q, -0.36439946696154496, 1);
  sqcRYGate(q, -1.9578813984626338, 2);
  sqcRZGate(q, -0.09859633192000405, 2);
  sqcRYGate(q, -1.1054215705287405, 3);
  sqcRZGate(q, 2.472416313919482, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.1382350590544008, 0);
  sqcRZGate(q, -0.1684568308356317, 0);
  sqcRYGate(q, -2.4664966902597243, 1);
  sqcRZGate(q, 2.0749972923237596, 1);
  sqcRYGate(q, 0.7291436039819459, 2);
  sqcRZGate(q, -0.30094486166625956, 2);
  sqcRYGate(q, 1.0052227941249772, 3);
  sqcRZGate(q, -0.8290337622878043, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.919304202200932, 0);
  sqcRZGate(q, 0.8669170274527884, 0);
  sqcRYGate(q, 1.852178209131754, 1);
  sqcRZGate(q, 0.34651981616475225, 1);
  sqcRYGate(q, -0.09951318540952414, 2);
  sqcRZGate(q, 1.9849914054007554, 2);
  sqcRYGate(q, 2.082329265151662, 3);
  sqcRZGate(q, -0.8620063444251286, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.263842957515489, 0);
  sqcRZGate(q, 0.6470995007535708, 0);
  sqcRYGate(q, -2.478918322910126, 1);
  sqcRZGate(q, -0.7926268188276813, 1);
  sqcRYGate(q, -1.5674021156273863, 2);
  sqcRZGate(q, 2.6446680082646785, 2);
  sqcRYGate(q, -0.3955521454690093, 3);
  sqcRZGate(q, -2.0785286762601394, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8598197578819073, 0);
  sqcRZGate(q, -1.6978594793582937, 0);
  sqcRYGate(q, -0.39901944620735463, 1);
  sqcRZGate(q, -0.13662048739826926, 1);
  sqcRYGate(q, 0.9294922867398412, 2);
  sqcRZGate(q, 1.1256321205881779, 2);
  sqcRYGate(q, 0.0654727906812439, 3);
  sqcRZGate(q, 0.444690600103921, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.7310491326733464, 0);
  sqcRZGate(q, 1.744499968835422, 0);
  sqcRYGate(q, -3.1012619297415727, 1);
  sqcRZGate(q, -2.2159226212251832, 1);
  sqcRYGate(q, 2.925327968844573, 2);
  sqcRZGate(q, 0.7964394253383965, 2);
  sqcRYGate(q, -2.421561169685644, 3);
  sqcRZGate(q, 1.396053488393705, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.5350094948338333, 0);
  sqcRZGate(q, 2.434492962720159, 0);
  sqcRYGate(q, 1.9065528753902137, 1);
  sqcRZGate(q, -1.9513043343099707, 1);
  sqcRYGate(q, 0.09536377127847769, 2);
  sqcRZGate(q, 0.15839221533949122, 2);
  sqcRYGate(q, 1.2016916373219593, 3);
  sqcRZGate(q, 0.5737740751171958, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.25563807489734586, 0);
  sqcRZGate(q, 2.8862615894815495, 0);
  sqcRYGate(q, -1.2810433296435495, 1);
  sqcRZGate(q, -0.3293529414065608, 1);
  sqcRYGate(q, -0.41420753533684446, 2);
  sqcRZGate(q, 2.626142752593454, 2);
  sqcRYGate(q, 1.1441037762818782, 3);
  sqcRZGate(q, -1.2421881911205466, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.390717438479318, 0);
  sqcRZGate(q, -2.107073993537269, 0);
  sqcRYGate(q, 2.4985229417520087, 1);
  sqcRZGate(q, 2.6607463271499636, 1);
  sqcRYGate(q, -0.6857852794191793, 2);
  sqcRZGate(q, 1.2436596805766207, 2);
  sqcRYGate(q, 0.3152167183272816, 3);
  sqcRZGate(q, -3.0692967391527928, 3);

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
