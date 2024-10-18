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

  sqcRYGate(q, -0.31736304221447487, 0);
  sqcRZGate(q, -0.7050833804467631, 0);
  sqcRYGate(q, -0.5553641731706085, 1);
  sqcRZGate(q, 2.3946334076404368, 1);
  sqcRYGate(q, 2.761227517185775, 2);
  sqcRZGate(q, -1.400971758149844, 2);
  sqcRYGate(q, -1.6684940782698139, 3);
  sqcRZGate(q, -1.9118995987714076, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.1042155854247668, 0);
  sqcRZGate(q, 2.5400575560098573, 0);
  sqcRYGate(q, 2.1428690219297346, 1);
  sqcRZGate(q, -1.3286238793719924, 1);
  sqcRYGate(q, 0.7567242198894456, 2);
  sqcRZGate(q, -2.8588247318360716, 2);
  sqcRYGate(q, -1.1905458424847792, 3);
  sqcRZGate(q, -1.008073389695107, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.129707166915234, 0);
  sqcRZGate(q, -2.803630400816538, 0);
  sqcRYGate(q, -0.667598693158252, 1);
  sqcRZGate(q, 0.8364858582308754, 1);
  sqcRYGate(q, 0.44610001710743924, 2);
  sqcRZGate(q, 1.3341265675469822, 2);
  sqcRYGate(q, 1.126714045525431, 3);
  sqcRZGate(q, -2.397719979632461, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.43336193462638445, 0);
  sqcRZGate(q, -2.1449880689783147, 0);
  sqcRYGate(q, 2.8351842773634948, 1);
  sqcRZGate(q, 1.9388837653336533, 1);
  sqcRYGate(q, -2.7118432526776717, 2);
  sqcRZGate(q, 2.6296508451605205, 2);
  sqcRYGate(q, -0.49878018334516316, 3);
  sqcRZGate(q, 1.7319475250715513, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.1993358327783128, 0);
  sqcRZGate(q, 1.7384655858082718, 0);
  sqcRYGate(q, -0.5934168915503656, 1);
  sqcRZGate(q, -0.9695964409526434, 1);
  sqcRYGate(q, 2.9869568413786567, 2);
  sqcRZGate(q, 0.3865759715261065, 2);
  sqcRYGate(q, 1.60719061300965, 3);
  sqcRZGate(q, 2.7249233921195315, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.550018096165374, 0);
  sqcRZGate(q, -2.633463498258772, 0);
  sqcRYGate(q, 1.2076733372987865, 1);
  sqcRZGate(q, 2.660424555538278, 1);
  sqcRYGate(q, -3.0971949365223126, 2);
  sqcRZGate(q, -0.4768672933625346, 2);
  sqcRYGate(q, -2.2919777252868587, 3);
  sqcRZGate(q, 0.5751666991233921, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.8941897978118238, 0);
  sqcRZGate(q, -0.6553572536990401, 0);
  sqcRYGate(q, 2.419545734431779, 1);
  sqcRZGate(q, 0.3247937395197189, 1);
  sqcRYGate(q, 0.4074130812768004, 2);
  sqcRZGate(q, 1.2492287298947558, 2);
  sqcRYGate(q, -1.2581295989135084, 3);
  sqcRZGate(q, 1.358672627741334, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.43128622457073, 0);
  sqcRZGate(q, -1.5573416476390989, 0);
  sqcRYGate(q, 0.3282889877651755, 1);
  sqcRZGate(q, -2.4749719417218192, 1);
  sqcRYGate(q, -3.0756952996847655, 2);
  sqcRZGate(q, -0.6427527668710118, 2);
  sqcRYGate(q, -0.5397130914272834, 3);
  sqcRZGate(q, 1.9597539604923686, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 3.0189290982183437, 0);
  sqcRZGate(q, -2.6034043213870075, 0);
  sqcRYGate(q, -1.3301338263714806, 1);
  sqcRZGate(q, 2.2397606473955642, 1);
  sqcRYGate(q, -0.13824329218479914, 2);
  sqcRZGate(q, 1.1267380347793292, 2);
  sqcRYGate(q, 2.7036097330280437, 3);
  sqcRZGate(q, 1.6635244812570429, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.8011379861184762, 0);
  sqcRZGate(q, -1.4454757880295792, 0);
  sqcRYGate(q, -1.1077773273446239, 1);
  sqcRZGate(q, 2.704663874131618, 1);
  sqcRYGate(q, 0.604336589053936, 2);
  sqcRZGate(q, -1.3164154563059958, 2);
  sqcRYGate(q, -2.8325882507987235, 3);
  sqcRZGate(q, 2.107973664347669, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.7517103182407077, 0);
  sqcRZGate(q, 1.2432102696879825, 0);
  sqcRYGate(q, -3.048298391691157, 1);
  sqcRZGate(q, -0.4123292278234859, 1);
  sqcRYGate(q, 1.897598097753492, 2);
  sqcRZGate(q, -1.826747603720766, 2);
  sqcRYGate(q, 1.120818834248878, 3);
  sqcRZGate(q, 3.133268123972346, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.16026377572046524, 0);
  sqcRZGate(q, -2.658464584026325, 0);
  sqcRYGate(q, 2.9554061909801015, 1);
  sqcRZGate(q, -1.9617859774497675, 1);
  sqcRYGate(q, -0.14806441321403696, 2);
  sqcRZGate(q, 0.5563444872409428, 2);
  sqcRYGate(q, -2.330259289258655, 3);
  sqcRZGate(q, -1.282476975287639, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.8076735092319036, 0);
  sqcRZGate(q, -2.2329787182421796, 0);
  sqcRYGate(q, -1.7297711272464253, 1);
  sqcRZGate(q, 3.095392252536304, 1);
  sqcRYGate(q, 0.1046935702644177, 2);
  sqcRZGate(q, 0.4208350416594195, 2);
  sqcRYGate(q, 1.8594556004917218, 3);
  sqcRZGate(q, 3.0273613756304587, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.0355659154508094, 0);
  sqcRZGate(q, 1.2407892670491325, 0);
  sqcRYGate(q, 0.7806736516851602, 1);
  sqcRZGate(q, 1.904109159953003, 1);
  sqcRYGate(q, -2.5520384316634366, 2);
  sqcRZGate(q, -2.6695239256811214, 2);
  sqcRYGate(q, 1.5640697759168722, 3);
  sqcRZGate(q, -2.0774598060989087, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.9303949084843026, 0);
  sqcRZGate(q, -2.369649028315995, 0);
  sqcRYGate(q, -2.0839728189551705, 1);
  sqcRZGate(q, 0.47096468758573806, 1);
  sqcRYGate(q, 0.3996963806300034, 2);
  sqcRZGate(q, -3.039270932170888, 2);
  sqcRYGate(q, 2.1505274093068696, 3);
  sqcRZGate(q, 2.7188410595768016, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.1736354815345278, 0);
  sqcRZGate(q, 0.7498884071614791, 0);
  sqcRYGate(q, 0.5223125868898757, 1);
  sqcRZGate(q, 1.883132041739767, 1);
  sqcRYGate(q, 0.44079157195622093, 2);
  sqcRZGate(q, 0.47280371142488237, 2);
  sqcRYGate(q, 0.17934054388579934, 3);
  sqcRZGate(q, 3.0002526911600853, 3);

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
