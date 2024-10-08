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

  sqcRYGate(q, 0.013608265509390094, 0);
  sqcRZGate(q, 1.6778491473914565, 0);
  sqcRYGate(q, -2.68757853725442, 1);
  sqcRZGate(q, -0.2943586233690567, 1);
  sqcRYGate(q, 0.9741895737690183, 2);
  sqcRZGate(q, 2.572433252977301, 2);
  sqcRYGate(q, 0.3047413574259316, 3);
  sqcRZGate(q, -0.59398293656227, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6388330589252281, 0);
  sqcRZGate(q, -1.8699099723549253, 0);
  sqcRYGate(q, 2.5926023171036783, 1);
  sqcRZGate(q, 0.9742311975611547, 1);
  sqcRYGate(q, 0.573360144127808, 2);
  sqcRZGate(q, 3.0875257522859463, 2);
  sqcRYGate(q, -2.7259519663792786, 3);
  sqcRZGate(q, 1.1851140008763723, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.9740539759656412, 0);
  sqcRZGate(q, -2.051410608658202, 0);
  sqcRYGate(q, -3.1175368050524486, 1);
  sqcRZGate(q, -1.3756643350685795, 1);
  sqcRYGate(q, -1.5435953486988614, 2);
  sqcRZGate(q, 2.3447072649905314, 2);
  sqcRYGate(q, -1.9663351695179803, 3);
  sqcRZGate(q, 1.0016132482355302, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.508717221076507, 0);
  sqcRZGate(q, 2.6008994365246694, 0);
  sqcRYGate(q, 0.8400719115836675, 1);
  sqcRZGate(q, 1.1423150163262967, 1);
  sqcRYGate(q, -0.7561893680796175, 2);
  sqcRZGate(q, -2.80011092425663, 2);
  sqcRYGate(q, 2.179401148684084, 3);
  sqcRZGate(q, -2.218140736813991, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.616917824924225, 0);
  sqcRZGate(q, 0.6472495368738883, 0);
  sqcRYGate(q, -2.0114125206600253, 1);
  sqcRZGate(q, -0.9735744152279174, 1);
  sqcRYGate(q, 0.056202599202670456, 2);
  sqcRZGate(q, -0.025499659064553773, 2);
  sqcRYGate(q, -2.568474643117218, 3);
  sqcRZGate(q, 0.726575872095168, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.5780797527956247, 0);
  sqcRZGate(q, -2.2245379708617614, 0);
  sqcRYGate(q, 0.046286619683415076, 1);
  sqcRZGate(q, 1.099595572675871, 1);
  sqcRYGate(q, -2.9631846109596056, 2);
  sqcRZGate(q, -0.7360079787031282, 2);
  sqcRYGate(q, -1.8011554244634724, 3);
  sqcRZGate(q, -0.6151080590838998, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.9199668361592455, 0);
  sqcRZGate(q, 0.8167355569289203, 0);
  sqcRYGate(q, -0.9413756806843746, 1);
  sqcRZGate(q, -0.48475469535455407, 1);
  sqcRYGate(q, 2.7104101442933537, 2);
  sqcRZGate(q, -0.5958143951751024, 2);
  sqcRYGate(q, 2.3528505392351895, 3);
  sqcRZGate(q, -1.4695781260774623, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.03168027269236677, 0);
  sqcRZGate(q, 2.313718453064292, 0);
  sqcRYGate(q, -1.1340331927817768, 1);
  sqcRZGate(q, 0.3238612542816101, 1);
  sqcRYGate(q, 0.8705256309049679, 2);
  sqcRZGate(q, 1.2227237286778996, 2);
  sqcRYGate(q, 0.40063100972326104, 3);
  sqcRZGate(q, 1.780077280523151, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.7144604730809763, 0);
  sqcRZGate(q, -2.108742137457559, 0);
  sqcRYGate(q, -2.8610553676647146, 1);
  sqcRZGate(q, -1.705817322041745, 1);
  sqcRYGate(q, -1.2207562904259293, 2);
  sqcRZGate(q, 0.22466068124517768, 2);
  sqcRYGate(q, -0.06331041223148404, 3);
  sqcRZGate(q, 3.0069007227183877, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.7745891883350848, 0);
  sqcRZGate(q, 1.5865753769312816, 0);
  sqcRYGate(q, 0.8310344735093206, 1);
  sqcRZGate(q, 1.056784747108339, 1);
  sqcRYGate(q, -2.5269227646197714, 2);
  sqcRZGate(q, -1.5511144973994564, 2);
  sqcRYGate(q, 0.030761377780977307, 3);
  sqcRZGate(q, 0.3039212274223759, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.013295325577214355, 0);
  sqcRZGate(q, 1.825836842227142, 0);
  sqcRYGate(q, 2.3436852425270414, 1);
  sqcRZGate(q, 2.348113768279738, 1);
  sqcRYGate(q, -2.160976547437423, 2);
  sqcRZGate(q, 1.7569323775893355, 2);
  sqcRYGate(q, 2.8152127172005206, 3);
  sqcRZGate(q, 0.13443082233660728, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.13699531992877298, 0);
  sqcRZGate(q, -2.5906570783728164, 0);
  sqcRYGate(q, 1.4519006587321683, 1);
  sqcRZGate(q, -1.769440080049306, 1);
  sqcRYGate(q, 1.4326354434606252, 2);
  sqcRZGate(q, -0.6137932979353176, 2);
  sqcRYGate(q, -2.3818411561037767, 3);
  sqcRZGate(q, 1.7559428689438314, 3);

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
