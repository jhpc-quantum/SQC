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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 1.6324305839601048, 0);
  sqcRZGate(q, -2.570002149232342, 0);
  sqcRYGate(q, 1.5157903855106403, 1);
  sqcRZGate(q, -0.7687377113618609, 1);
  sqcRYGate(q, -3.0699478648021907, 2);
  sqcRZGate(q, -0.12750372471422194, 2);
  sqcRYGate(q, 1.5524538927861822, 3);
  sqcRZGate(q, -1.5577877189194957, 3);
  sqcRYGate(q, -0.0007099944153736716, 4);
  sqcRZGate(q, 2.513722694761134, 4);
  sqcRYGate(q, 2.2164979698970937, 5);
  sqcRZGate(q, 0.02614661707692125, 5);
  sqcRYGate(q, 3.141069512395196, 6);
  sqcRZGate(q, -2.72497605138533, 6);
  sqcRYGate(q, -0.03997221373538906, 7);
  sqcRZGate(q, -0.5748886642195057, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.0199769181667966, 0);
  sqcRZGate(q, -1.8955619801026105, 0);
  sqcRYGate(q, -2.2409785667199156, 1);
  sqcRZGate(q, 1.6220505076127933, 1);
  sqcRYGate(q, 1.5447518583704287, 2);
  sqcRZGate(q, -2.527331310558492, 2);
  sqcRYGate(q, 2.1818159386358933, 3);
  sqcRZGate(q, 0.22602235340311563, 3);
  sqcRYGate(q, -2.6970547984936952, 4);
  sqcRZGate(q, -1.5719016923836975, 4);
  sqcRYGate(q, -2.494850961050885, 5);
  sqcRZGate(q, -1.638490746743043, 5);
  sqcRYGate(q, 1.5709752026122539, 6);
  sqcRZGate(q, 3.133251151877356, 6);
  sqcRYGate(q, 1.5372450022713569, 7);
  sqcRZGate(q, -3.119856145283541, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.0643572554872094, 0);
  sqcRZGate(q, 1.905543197848469, 0);
  sqcRYGate(q, 2.1473021154772445, 1);
  sqcRZGate(q, -1.544900500795496, 1);
  sqcRYGate(q, -0.41054210707357086, 2);
  sqcRZGate(q, 2.7087866448784212, 2);
  sqcRYGate(q, -0.010381483350236032, 3);
  sqcRZGate(q, 2.93842215128345, 3);
  sqcRYGate(q, 1.5704958181989637, 4);
  sqcRZGate(q, 1.5282911384666282, 4);
  sqcRYGate(q, -1.3427834759029333, 5);
  sqcRZGate(q, 0.45095206109477903, 5);
  sqcRYGate(q, -1.5708263238292846, 6);
  sqcRZGate(q, -3.054865457013091, 6);
  sqcRYGate(q, 1.5708426757556628, 7);
  sqcRZGate(q, -3.1305811534572294, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8384900560210484, 0);
  sqcRZGate(q, 0.04890947612781189, 0);
  sqcRYGate(q, 1.5995128232786548, 1);
  sqcRZGate(q, -1.9270267592836845, 1);
  sqcRYGate(q, -0.10277967563721457, 2);
  sqcRZGate(q, -2.7475912434761103, 2);
  sqcRYGate(q, -1.5328651003114508, 3);
  sqcRZGate(q, -0.002623116292546404, 3);
  sqcRYGate(q, 1.5491264879473055, 4);
  sqcRZGate(q, 0.00015409934616528176, 4);
  sqcRYGate(q, -1.5708018719257415, 5);
  sqcRZGate(q, -2.5595945318678393, 5);
  sqcRYGate(q, 1.553348078648141, 6);
  sqcRZGate(q, 2.081168254155754, 6);
  sqcRYGate(q, -1.5726761755263035, 7);
  sqcRZGate(q, 0.7574259769022725, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5439941751955453, 0);
  sqcRZGate(q, 1.6339018009133608, 0);
  sqcRYGate(q, 3.1413860117392516, 1);
  sqcRZGate(q, 1.2136840484716374, 1);
  sqcRYGate(q, 2.585904071399948, 2);
  sqcRZGate(q, -3.1412233582768256, 2);
  sqcRYGate(q, 2.6969351905928196, 3);
  sqcRZGate(q, -3.1414304603337078, 3);
  sqcRYGate(q, 1.570791812735672, 4);
  sqcRZGate(q, 1.215396951330272, 4);
  sqcRYGate(q, 5.117362258921788e-05, 5);
  sqcRZGate(q, -0.7763277037062534, 5);
  sqcRYGate(q, 1.397385715180424, 6);
  sqcRZGate(q, 2.77197950550834, 6);
  sqcRYGate(q, 0.001035302027019807, 7);
  sqcRZGate(q, -1.6820306151850983, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5948243422538273, 0);
  sqcRZGate(q, 2.8511576309259454, 0);
  sqcRYGate(q, 2.1875090687047383, 1);
  sqcRZGate(q, -1.5442232543216479, 1);
  sqcRYGate(q, -1.5699634323754932, 2);
  sqcRZGate(q, -3.141137624356605, 2);
  sqcRYGate(q, -1.570799995507331, 3);
  sqcRZGate(q, 0.5607981495544192, 3);
  sqcRYGate(q, 3.0170964451580944, 4);
  sqcRZGate(q, 2.158411871648232, 4);
  sqcRYGate(q, 3.140373115718976, 5);
  sqcRZGate(q, -0.36010753942409574, 5);
  sqcRYGate(q, -2.320663836058067, 6);
  sqcRZGate(q, 3.0048903167679994, 6);
  sqcRYGate(q, -3.127314549148485, 7);
  sqcRZGate(q, -0.08710129549687196, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5707329311966338, 0);
  sqcRZGate(q, 0.0007924415241904187, 0);
  sqcRYGate(q, 0.16288839634567429, 1);
  sqcRZGate(q, 1.5497269659182535, 1);
  sqcRYGate(q, 1.5708006072363387, 2);
  sqcRZGate(q, 3.085957598734913, 2);
  sqcRYGate(q, -3.141583487490568, 3);
  sqcRZGate(q, -2.580782110057911, 3);
  sqcRYGate(q, -3.4653179373376295e-05, 4);
  sqcRZGate(q, 2.198316544607563, 4);
  sqcRYGate(q, 3.1415780644208193, 5);
  sqcRZGate(q, -2.4790571296276838, 5);
  sqcRYGate(q, -2.9174742427386535, 6);
  sqcRZGate(q, 1.690357464349513, 6);
  sqcRYGate(q, -5.0351823699824195e-05, 7);
  sqcRZGate(q, -0.7489807795166148, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5757908028281085, 0);
  sqcRZGate(q, 3.0238588832729585, 0);
  sqcRYGate(q, -1.5707837516440915, 1);
  sqcRZGate(q, -1.5707953288848113, 1);
  sqcRYGate(q, -3.140753585328851, 2);
  sqcRZGate(q, -1.6264315293870744, 2);
  sqcRYGate(q, -0.34478139318786205, 3);
  sqcRZGate(q, -1.5708206767456563, 3);
  sqcRYGate(q, -1.5902422251365762, 4);
  sqcRZGate(q, 1.687483392784381, 4);
  sqcRYGate(q, 3.1412711561938464, 5);
  sqcRZGate(q, -0.7427069733664701, 5);
  sqcRYGate(q, 1.8344670891324677, 6);
  sqcRZGate(q, -2.2723042737633667, 6);
  sqcRYGate(q, 1.5802621458959507, 7);
  sqcRZGate(q, -3.1352866630440954, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.5756475105230834e-06, 0);
  sqcRZGate(q, -0.08731739321633863, 0);
  sqcRYGate(q, -1.570795966361387, 1);
  sqcRZGate(q, -0.22488718345788014, 1);
  sqcRYGate(q, -1.57079759341043, 2);
  sqcRZGate(q, -1.7819204542582598, 2);
  sqcRYGate(q, -1.5707983483653425, 3);
  sqcRZGate(q, 2.9063968533700058, 3);
  sqcRYGate(q, 1.570768499952214, 4);
  sqcRZGate(q, 1.323742710298732, 4);
  sqcRYGate(q, -1.5707433501787307, 5);
  sqcRZGate(q, -1.8069257461177086, 5);
  sqcRYGate(q, 1.5710645631718452, 6);
  sqcRZGate(q, -1.776429304199631, 6);
  sqcRYGate(q, 1.155017313175802e-05, 7);
  sqcRZGate(q, -1.8128176819031916, 7);

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
