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

  sqcRYGate(q, -0.10160727798351488, 0);
  sqcRZGate(q, 2.069223026945177, 0);
  sqcRYGate(q, 1.1247472719617149, 1);
  sqcRZGate(q, 1.688318204555305, 1);
  sqcRYGate(q, -1.2621340657268147, 2);
  sqcRZGate(q, 2.987053120863436, 2);
  sqcRYGate(q, -1.2272775923488517, 3);
  sqcRZGate(q, 0.5158084085209375, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6864931792163302, 0);
  sqcRZGate(q, 3.0443920945226384, 0);
  sqcRYGate(q, -0.11452461554068762, 1);
  sqcRZGate(q, 3.001249008628431, 1);
  sqcRYGate(q, 2.340884985587616, 2);
  sqcRZGate(q, 1.3654001612380884, 2);
  sqcRYGate(q, 0.9790111399514343, 3);
  sqcRZGate(q, -1.3942751896127854, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.06736932410871913, 0);
  sqcRZGate(q, -1.9496385359408395, 0);
  sqcRYGate(q, -1.2479605826312694, 1);
  sqcRZGate(q, -0.309993969175582, 1);
  sqcRYGate(q, 2.3784381608083156, 2);
  sqcRZGate(q, -2.469977707848478, 2);
  sqcRYGate(q, -0.2667615876871022, 3);
  sqcRZGate(q, -2.538736847008929, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.20116475880857987, 0);
  sqcRZGate(q, 0.6404760405621633, 0);
  sqcRYGate(q, -3.012063457206627, 1);
  sqcRZGate(q, -2.929761736699398, 1);
  sqcRYGate(q, -2.8595800501320507, 2);
  sqcRZGate(q, -2.6027380103103, 2);
  sqcRYGate(q, 1.505691060725046, 3);
  sqcRZGate(q, -1.3395521208881174, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9844664172971427, 0);
  sqcRZGate(q, 2.3786505145738466, 0);
  sqcRYGate(q, 2.2889070491150427, 1);
  sqcRZGate(q, 1.2008238315417041, 1);
  sqcRYGate(q, -1.7513494538180705, 2);
  sqcRZGate(q, -0.5017852298585915, 2);
  sqcRYGate(q, -0.3480878857690746, 3);
  sqcRZGate(q, 0.8733551191694324, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.352047542490591, 0);
  sqcRZGate(q, 0.8439442244168702, 0);
  sqcRYGate(q, 0.792287559385383, 1);
  sqcRZGate(q, -1.1812606322561272, 1);
  sqcRYGate(q, 2.0682473804809094, 2);
  sqcRZGate(q, 3.0892977868050044, 2);
  sqcRYGate(q, -1.2521537725834548, 3);
  sqcRZGate(q, -1.062319834744871, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5191005396407516, 0);
  sqcRZGate(q, 0.2752572943938349, 0);
  sqcRYGate(q, -1.6580251378264845, 1);
  sqcRZGate(q, 2.814544559265761, 1);
  sqcRYGate(q, 1.8146602017404236, 2);
  sqcRZGate(q, -0.1669401079151601, 2);
  sqcRYGate(q, 1.1448921285662301, 3);
  sqcRZGate(q, 0.875897763718477, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9056515748835576, 0);
  sqcRZGate(q, -1.443711483757269, 0);
  sqcRYGate(q, 3.0617404943916826, 1);
  sqcRZGate(q, 3.0693715953565053, 1);
  sqcRYGate(q, 1.8992963458832124, 2);
  sqcRZGate(q, 1.1786150399230495, 2);
  sqcRYGate(q, -1.159973291224682, 3);
  sqcRZGate(q, 2.5021656670062833, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8092577347810272, 0);
  sqcRZGate(q, -1.2729365394954335, 0);
  sqcRYGate(q, -2.7960934203491377, 1);
  sqcRZGate(q, -0.8587213665532429, 1);
  sqcRYGate(q, 1.0059563605927728, 2);
  sqcRZGate(q, 2.389144018103887, 2);
  sqcRYGate(q, 2.1176990520407215, 3);
  sqcRZGate(q, 0.2119318564044166, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.8892707973640763, 0);
  sqcRZGate(q, 2.617970056075244, 0);
  sqcRYGate(q, -0.1563022918696659, 1);
  sqcRZGate(q, 2.4375869466526545, 1);
  sqcRYGate(q, 2.954306915428215, 2);
  sqcRZGate(q, -1.9693579358810784, 2);
  sqcRYGate(q, 1.2178308739984995, 3);
  sqcRZGate(q, -1.030181701440586, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5857798993205678, 0);
  sqcRZGate(q, -2.524417339786256, 0);
  sqcRYGate(q, -0.08184756133552144, 1);
  sqcRZGate(q, 2.1480728709286403, 1);
  sqcRYGate(q, 3.003362903853603, 2);
  sqcRZGate(q, -0.3734165050577296, 2);
  sqcRYGate(q, 0.5364283023610535, 3);
  sqcRZGate(q, -1.965703262616931, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4035473047026439, 0);
  sqcRZGate(q, 2.6876914731232473, 0);
  sqcRYGate(q, -1.9543298071163573, 1);
  sqcRZGate(q, 3.054937095131296, 1);
  sqcRYGate(q, -2.3124015167098246, 2);
  sqcRZGate(q, 1.26333245413995, 2);
  sqcRYGate(q, -1.669764406717711, 3);
  sqcRZGate(q, 0.797008631934915, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9830127908814537, 0);
  sqcRZGate(q, -1.1262236769115126, 0);
  sqcRYGate(q, 1.9374014399004529, 1);
  sqcRZGate(q, 1.961015635283075, 1);
  sqcRYGate(q, -1.254178176301012, 2);
  sqcRZGate(q, 0.08759980086407103, 2);
  sqcRYGate(q, -0.3045443282589143, 3);
  sqcRZGate(q, 3.0587464530508237, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.700736178295468, 0);
  sqcRZGate(q, 2.929477702562553, 0);
  sqcRYGate(q, 0.6232771817069604, 1);
  sqcRZGate(q, 0.31167588315759936, 1);
  sqcRYGate(q, 2.2645324000512916, 2);
  sqcRZGate(q, 1.0783566877582436, 2);
  sqcRYGate(q, 0.6841606261043331, 3);
  sqcRZGate(q, 0.5146233067827083, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4098332153867763, 0);
  sqcRZGate(q, 2.0375389460655566, 0);
  sqcRYGate(q, 1.1744152842438842, 1);
  sqcRZGate(q, 1.23296137984683, 1);
  sqcRYGate(q, -0.37945541675242467, 2);
  sqcRZGate(q, 2.6906262622003267, 2);
  sqcRYGate(q, -0.02024395361732534, 3);
  sqcRZGate(q, 1.6291128685926461, 3);

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
