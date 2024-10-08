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

  sqcRYGate(q, 0.04935632819025937, 0);
  sqcRZGate(q, -0.0029804928666585795, 0);
  sqcRYGate(q, 0.6327474474661652, 1);
  sqcRZGate(q, 3.1415664423723704, 1);
  sqcRYGate(q, -0.419806716077745, 2);
  sqcRZGate(q, -3.2305836070278815e-05, 2);
  sqcRYGate(q, 1.5690815500153974, 3);
  sqcRZGate(q, -1.575685210618861, 3);
  sqcRYGate(q, 1.5706418825929673, 4);
  sqcRZGate(q, -3.13978157790317, 4);
  sqcRYGate(q, -2.9001069758142113, 5);
  sqcRZGate(q, -3.1391740848031584, 5);
  sqcRYGate(q, 1.5701586829694714, 6);
  sqcRZGate(q, -2.3882937133813673, 6);
  sqcRYGate(q, 1.5703929710464806, 7);
  sqcRZGate(q, -3.104539003906277, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.10204753600880057, 0);
  sqcRZGate(q, -3.134482519234434, 0);
  sqcRYGate(q, 0.932371670538545, 1);
  sqcRZGate(q, -3.1415805351104558, 1);
  sqcRYGate(q, 1.5713801810786396, 2);
  sqcRZGate(q, 1.570637328593722, 2);
  sqcRYGate(q, 1.5725090097822383, 3);
  sqcRZGate(q, -0.11824402269008369, 3);
  sqcRYGate(q, -1.5545417952274514, 4);
  sqcRZGate(q, -1.5705619916992752, 4);
  sqcRYGate(q, 1.570802728745896, 5);
  sqcRZGate(q, -1.3623872979349434, 5);
  sqcRYGate(q, -1.6968312878565295, 6);
  sqcRZGate(q, -3.141340409197267, 6);
  sqcRYGate(q, 1.5309264908659581, 7);
  sqcRZGate(q, 0.5619008841881376, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.9834776757312738, 0);
  sqcRZGate(q, -0.006647013127956568, 0);
  sqcRYGate(q, 1.5711694058862227, 1);
  sqcRZGate(q, 3.1368725153238985, 1);
  sqcRYGate(q, -1.4401332653103358, 2);
  sqcRZGate(q, 3.1400874700099046, 2);
  sqcRYGate(q, -1.5714942793219802, 3);
  sqcRZGate(q, -3.141451078731331, 3);
  sqcRYGate(q, 1.5708520929258825, 4);
  sqcRZGate(q, -1.4411128463716534, 4);
  sqcRYGate(q, 2.0821960415252008, 5);
  sqcRZGate(q, 0.0004697983689866818, 5);
  sqcRYGate(q, -1.5708239072837618, 6);
  sqcRZGate(q, -1.7745628790079397, 6);
  sqcRYGate(q, -3.139077147716409, 7);
  sqcRZGate(q, 1.3292372573117464, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5711476225596315, 0);
  sqcRZGate(q, 3.1169557776371817, 0);
  sqcRYGate(q, -0.19985599116714034, 1);
  sqcRZGate(q, -3.0871911298573393, 1);
  sqcRYGate(q, 1.7089814079030017, 2);
  sqcRZGate(q, -1.5705498627852723, 2);
  sqcRYGate(q, -1.5328248021831146, 3);
  sqcRZGate(q, 0.0031233860204231685, 3);
  sqcRYGate(q, 3.108180189743591, 4);
  sqcRZGate(q, 0.01722387838145156, 4);
  sqcRYGate(q, -1.569325703805796, 5);
  sqcRZGate(q, 3.007748404754795, 5);
  sqcRYGate(q, -1.6784528609896168, 6);
  sqcRZGate(q, 0.7491740577673491, 6);
  sqcRYGate(q, -1.5320519969570165, 7);
  sqcRZGate(q, 2.3626258393763147, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.017058064862024658, 0);
  sqcRZGate(q, -0.31089577461811113, 0);
  sqcRYGate(q, 1.6874343053642713, 1);
  sqcRZGate(q, 1.5760248665676775, 1);
  sqcRYGate(q, -1.5707669085951117, 2);
  sqcRZGate(q, 0.04851124462561022, 2);
  sqcRYGate(q, 1.5733586381492242, 3);
  sqcRZGate(q, -3.0878417434943497, 3);
  sqcRYGate(q, 1.570989135837853, 4);
  sqcRZGate(q, -1.5710496177620474, 4);
  sqcRYGate(q, -1.4895884316200017, 5);
  sqcRZGate(q, -1.5680876083303754, 5);
  sqcRYGate(q, 3.077920047464704, 6);
  sqcRZGate(q, -2.0566503735128094, 6);
  sqcRYGate(q, 0.0006627374334815527, 7);
  sqcRZGate(q, -2.7310315302324364, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.5051916760558655e-05, 0);
  sqcRZGate(q, 1.9070320840653816, 0);
  sqcRYGate(q, 1.572583533797909, 1);
  sqcRZGate(q, -3.140819161120229, 1);
  sqcRYGate(q, -0.03188153166854679, 2);
  sqcRZGate(q, 2.7276895788100566, 2);
  sqcRYGate(q, 0.020315053146637396, 3);
  sqcRZGate(q, -2.8975749383622746, 3);
  sqcRYGate(q, -3.1006819020482808, 4);
  sqcRZGate(q, -0.0005610666430920443, 4);
  sqcRYGate(q, 1.5707972649743318, 5);
  sqcRZGate(q, 1.5713799664485075, 5);
  sqcRYGate(q, 0.5218598636699232, 6);
  sqcRZGate(q, 0.9335158954473827, 6);
  sqcRYGate(q, 0.041104465733170954, 7);
  sqcRZGate(q, -0.9371690046126692, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5711223982477094, 0);
  sqcRZGate(q, 0.5079434909083287, 0);
  sqcRYGate(q, -1.5275726197711705, 1);
  sqcRZGate(q, 2.0766674459040564, 1);
  sqcRYGate(q, 3.1408272460236444, 2);
  sqcRZGate(q, 1.7150638730735333, 2);
  sqcRYGate(q, -3.133243633830611, 3);
  sqcRZGate(q, -0.7804452471852548, 3);
  sqcRYGate(q, 1.5712631539650168, 4);
  sqcRZGate(q, 2.100324157148739, 4);
  sqcRYGate(q, -1.5763721194334632, 5);
  sqcRZGate(q, 2.0625037698143025, 5);
  sqcRYGate(q, -0.0010175861557368247, 6);
  sqcRZGate(q, -0.7010249765806843, 6);
  sqcRYGate(q, -0.000537207950158342, 7);
  sqcRZGate(q, 1.7958299059612859, 7);

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
