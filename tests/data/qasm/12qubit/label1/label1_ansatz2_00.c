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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 4.09068377393742e-06, 0);
  sqcRZGate(q, -3.1262897545118946, 0);
  sqcRYGate(q, 3.1382560605427257, 1);
  sqcRZGate(q, 2.772259522106785, 1);
  sqcRYGate(q, 0.007870028025915292, 2);
  sqcRZGate(q, -1.5667737138121156, 2);
  sqcRYGate(q, 3.1318647763586065, 3);
  sqcRZGate(q, -1.8764438591199228, 3);
  sqcRYGate(q, 0.04340911994953966, 4);
  sqcRZGate(q, -1.5760188767855619, 4);
  sqcRYGate(q, 0.16758847642709984, 5);
  sqcRZGate(q, -1.570534285183361, 5);
  sqcRYGate(q, 0.6619064539967108, 6);
  sqcRZGate(q, 1.570909632574413, 6);
  sqcRYGate(q, -1.5708031981479627, 7);
  sqcRZGate(q, -2.9828794306785413, 7);
  sqcRYGate(q, 0.5452157380556857, 8);
  sqcRZGate(q, -1.570729305012701, 8);
  sqcRYGate(q, 0.05894034694988016, 9);
  sqcRZGate(q, -1.571603899236293, 9);
  sqcRYGate(q, -3.1313846019531897, 10);
  sqcRZGate(q, -0.0006993173510991823, 10);
  sqcRYGate(q, 3.141421000879863, 11);
  sqcRZGate(q, -0.14065496843534464, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -3.1391128724333415, 0);
  sqcRZGate(q, 1.602870063205538, 0);
  sqcRYGate(q, 0.00013774542312630395, 1);
  sqcRZGate(q, -2.760896141662428, 1);
  sqcRYGate(q, 0.008633430122927166, 2);
  sqcRZGate(q, 1.5675973733420407, 2);
  sqcRYGate(q, -0.001555436934905785, 3);
  sqcRZGate(q, -1.2657052470464167, 3);
  sqcRYGate(q, 0.007638294199208494, 4);
  sqcRZGate(q, -1.5654982587243118, 4);
  sqcRYGate(q, 0.029344047092635606, 5);
  sqcRZGate(q, 1.5703448100780035, 5);
  sqcRYGate(q, -0.08888357911370812, 6);
  sqcRZGate(q, -1.5839410795859115, 6);
  sqcRYGate(q, 1.5707728997930763, 7);
  sqcRZGate(q, 3.139825277591705, 7);
  sqcRYGate(q, -2.8993693551959434, 8);
  sqcRZGate(q, 1.5717886588085859, 8);
  sqcRYGate(q, 0.9019096647761139, 9);
  sqcRZGate(q, -1.5706018929433565, 9);
  sqcRYGate(q, -1.5708028023014065, 10);
  sqcRZGate(q, -0.09402440063539602, 10);
  sqcRYGate(q, 2.677681558743283, 11);
  sqcRZGate(q, -1.5705956930682947, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.3356561008066139, 0);
  sqcRZGate(q, -6.146643229953952e-07, 0);
  sqcRYGate(q, 2.2243120229767372, 1);
  sqcRZGate(q, -4.401532852860157e-06, 1);
  sqcRYGate(q, 1.068337655401156, 2);
  sqcRZGate(q, -3.1415892951831474, 2);
  sqcRYGate(q, 0.5882415468964775, 3);
  sqcRZGate(q, -1.670270143439012e-05, 3);
  sqcRYGate(q, -0.24726869841711357, 4);
  sqcRZGate(q, -1.0428812417195843e-05, 4);
  sqcRYGate(q, 0.07656343566060109, 5);
  sqcRZGate(q, -3.1414251857911353, 5);
  sqcRYGate(q, -0.009595843560653069, 6);
  sqcRZGate(q, -3.12852952159199, 6);
  sqcRYGate(q, 3.0911392548929073, 7);
  sqcRZGate(q, -0.001805369858202788, 7);
  sqcRYGate(q, 3.1059449858885357, 8);
  sqcRZGate(q, -3.1406254055855576, 8);
  sqcRYGate(q, 0.06439999576160815, 9);
  sqcRZGate(q, -0.00011385906912320111, 9);
  sqcRYGate(q, 1.5707793821249512, 10);
  sqcRZGate(q, -1.5708613881130136, 10);
  sqcRYGate(q, 3.1106202591648655, 11);
  sqcRZGate(q, 0.00013953403697186673, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.30023515349632035, 0);
  sqcRZGate(q, -2.792842616860507, 0);
  sqcRYGate(q, -2.325907479026306, 1);
  sqcRZGate(q, -2.7928473345619955, 1);
  sqcRYGate(q, -2.6185705167050957, 2);
  sqcRZGate(q, 0.34874945110942873, 2);
  sqcRYGate(q, 0.767412767933272, 3);
  sqcRZGate(q, -2.79284433758141, 3);
  sqcRYGate(q, -2.18736407703286, 4);
  sqcRZGate(q, 0.3487513562287159, 4);
  sqcRYGate(q, -2.209907463245268, 5);
  sqcRZGate(q, -2.792834137897957, 5);
  sqcRYGate(q, -2.1467315752646328, 6);
  sqcRZGate(q, 0.34873760980461926, 6);
  sqcRYGate(q, 1.4460670645624374, 7);
  sqcRZGate(q, 0.3487668809088609, 7);
  sqcRYGate(q, -2.3183709202896385, 8);
  sqcRZGate(q, 0.3487636827647389, 8);
  sqcRYGate(q, -2.343180633958952, 9);
  sqcRZGate(q, -2.7928102942303368, 9);
  sqcRYGate(q, -1.0256299182587543, 10);
  sqcRZGate(q, 0.3487800511340362, 10);
  sqcRYGate(q, 0.32791683954042394, 11);
  sqcRZGate(q, -2.7928144179559298, 11);

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
