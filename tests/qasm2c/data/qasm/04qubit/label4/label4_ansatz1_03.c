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
  sqcInitialize(NULL, NULL);

  sqcQC* q;
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 0.9156624087584309, 0);
  sqcRZGate(q, -2.401223679775111, 0);
  sqcRYGate(q, 2.635595153091959, 1);
  sqcRZGate(q, 0.07214582003598659, 1);
  sqcRYGate(q, 1.1894295270742516, 2);
  sqcRZGate(q, 1.4986859981908678, 2);
  sqcRYGate(q, -1.7570648642203106, 3);
  sqcRZGate(q, 1.5152086975708, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9853312839320214, 0);
  sqcRZGate(q, 3.0167125411504636, 0);
  sqcRYGate(q, -1.815402532979679, 1);
  sqcRZGate(q, 1.5625611207938281, 1);
  sqcRYGate(q, 1.9447317151267443, 2);
  sqcRZGate(q, 0.5123082723285481, 2);
  sqcRYGate(q, 1.700608481411723, 3);
  sqcRZGate(q, 0.30298241132463144, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.02236771520950409, 0);
  sqcRZGate(q, 1.4999673948725705, 0);
  sqcRYGate(q, 1.493422821689453, 1);
  sqcRZGate(q, 1.8601516331625918, 1);
  sqcRYGate(q, -0.7095009647272212, 2);
  sqcRZGate(q, 2.248430754686195, 2);
  sqcRYGate(q, 0.00560776536109664, 3);
  sqcRZGate(q, 2.079852932146709, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5264613134706826, 0);
  sqcRZGate(q, 1.9401999131135677, 0);
  sqcRYGate(q, -0.6845930630932582, 1);
  sqcRZGate(q, 0.6505236247307026, 1);
  sqcRYGate(q, -2.5127865982569837, 2);
  sqcRZGate(q, -1.1345561995762632, 2);
  sqcRYGate(q, 2.209816304634921, 3);
  sqcRZGate(q, -0.9075282576775452, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.517769923841569, 0);
  sqcRZGate(q, -0.4430854772305235, 0);
  sqcRYGate(q, -0.24801613613157336, 1);
  sqcRZGate(q, 1.2388471753583659, 1);
  sqcRYGate(q, -0.49373848552347394, 2);
  sqcRZGate(q, -1.935036329238394, 2);
  sqcRYGate(q, 0.6876244333650989, 3);
  sqcRZGate(q, 2.2687239456646804, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3608629625795629, 0);
  sqcRZGate(q, -1.857125682080981, 0);
  sqcRYGate(q, -0.8419127891662805, 1);
  sqcRZGate(q, -2.7303183616619635, 1);
  sqcRYGate(q, 1.8785012487868387, 2);
  sqcRZGate(q, -1.5595997252999247, 2);
  sqcRYGate(q, 2.8482649178813784, 3);
  sqcRZGate(q, -2.1987089533924076, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.1296586807781126, 0);
  sqcRZGate(q, -1.2980170716317385, 0);
  sqcRYGate(q, 1.2346529348905628, 1);
  sqcRZGate(q, -1.0511267675677338, 1);
  sqcRYGate(q, 1.310174295552264, 2);
  sqcRZGate(q, 2.1782713927463027, 2);
  sqcRYGate(q, -1.9957119016334761, 3);
  sqcRZGate(q, 2.9948571315222523, 3);

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
