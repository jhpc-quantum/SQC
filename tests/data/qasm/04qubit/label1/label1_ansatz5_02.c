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

  sqcRYGate(q, -3.07027598774776, 0);
  sqcRYGate(q, -2.60294056595676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.681559285657879, 0);
  sqcRYGate(q, 2.2669853685825263, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2907735280120884, 2);
  sqcRYGate(q, -0.42570324672229803, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7041519823534432, 2);
  sqcRYGate(q, 0.47822807092005704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7441762217177823, 1);
  sqcRYGate(q, 1.847214333574116, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5694193965111034, 1);
  sqcRYGate(q, 1.116077668774878, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2470911868602048, 0);
  sqcRYGate(q, -2.5073382432638414, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1951641858888404, 0);
  sqcRYGate(q, 2.484535210307374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9147766623841778, 2);
  sqcRYGate(q, 0.26090974348422336, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4302567072419679, 2);
  sqcRYGate(q, -0.9032284182789845, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.00929893067441956, 1);
  sqcRYGate(q, -1.54434554377952, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7181709935980995, 1);
  sqcRYGate(q, -0.4321194892718481, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.341872901231465, 0);
  sqcRYGate(q, -2.3425060508001825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.03477177344390281, 0);
  sqcRYGate(q, -2.9887674310201597, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9156422601948595, 2);
  sqcRYGate(q, -2.178248209400849, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3471594951624193, 2);
  sqcRYGate(q, -0.4771266659279899, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4345005893753515, 1);
  sqcRYGate(q, -2.9799972402058654, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4502480494789989, 1);
  sqcRYGate(q, -1.9005632635619056, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3911286865851844, 0);
  sqcRYGate(q, 2.45562437749606, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.375981664736667, 0);
  sqcRYGate(q, 0.5635939492131713, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.484785765028791, 2);
  sqcRYGate(q, 2.1973846291984067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.515929632787549, 2);
  sqcRYGate(q, -0.7756284444291391, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.019370832457362, 1);
  sqcRYGate(q, -1.7930749900515202, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8645136771442503, 1);
  sqcRYGate(q, 2.0554347061637825, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9349974406482715, 0);
  sqcRYGate(q, 1.2004903235901105, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6579368651506742, 0);
  sqcRYGate(q, 2.842530647770678, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1014277439514981, 2);
  sqcRYGate(q, 2.0177845537792205, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0760099142325585, 2);
  sqcRYGate(q, -0.259897362216452, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4588701365875671, 1);
  sqcRYGate(q, -2.4462092220872718, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9757935204062107, 1);
  sqcRYGate(q, -1.2602472007994754, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6435225891629783, 0);
  sqcRYGate(q, 0.4501644152608125, 1);
  sqcRYGate(q, 2.880667431820593, 2);
  sqcRYGate(q, 0.2996861687156315, 3);

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
