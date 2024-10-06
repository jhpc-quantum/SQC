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

  sqcRYGate(q, -0.9665830541237822, 0);
  sqcRZGate(q, 7.819686391741243e-07, 0);
  sqcRYGate(q, -1.570796111759848, 1);
  sqcRZGate(q, -2.848999977484958, 1);
  sqcRYGate(q, -1.570796030171511, 2);
  sqcRZGate(q, 2.626782242648117, 2);
  sqcRYGate(q, 1.4990302718431723, 3);
  sqcRZGate(q, 5.021666877880192e-07, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5707964245162307, 0);
  sqcRZGate(q, 1.374473892575117, 0);
  sqcRYGate(q, 0.044467741716644284, 1);
  sqcRZGate(q, 1.4944512508113301, 1);
  sqcRYGate(q, -1.561000377825452, 2);
  sqcRZGate(q, 1.6480149304471532, 2);
  sqcRYGate(q, 1.5707959831640868, 3);
  sqcRZGate(q, -0.8313339921037833, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4152175370956215, 0);
  sqcRZGate(q, 1.148296151413785, 0);
  sqcRYGate(q, 1.464961509228047, 1);
  sqcRZGate(q, -0.9768518458220319, 1);
  sqcRYGate(q, -2.5355709348353974, 2);
  sqcRZGate(q, 0.24562651449256825, 2);
  sqcRYGate(q, -1.1251312910187616, 3);
  sqcRZGate(q, 1.6542301441809062, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.1415923969923263, 0);
  sqcRZGate(q, -0.6783903368265722, 0);
  sqcRYGate(q, 1.6390462104433254, 1);
  sqcRZGate(q, 1.14903009236833, 1);
  sqcRYGate(q, -0.6545896813228129, 2);
  sqcRZGate(q, 1.301291966851609, 2);
  sqcRYGate(q, 1.789549983568045e-07, 3);
  sqcRZGate(q, -1.246975533480636, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.439657195820125, 0);
  sqcRZGate(q, 0.1384957027836137, 0);
  sqcRYGate(q, 0.403744426594527, 1);
  sqcRZGate(q, 2.0196210022989884, 1);
  sqcRYGate(q, 2.242552018400086, 2);
  sqcRZGate(q, 1.4283829013331382, 2);
  sqcRYGate(q, 1.5233352211218207, 3);
  sqcRZGate(q, 1.6916486560754147, 3);

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
