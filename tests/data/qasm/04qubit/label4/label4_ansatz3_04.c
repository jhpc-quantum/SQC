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

  sqcRYGate(q, 0.7309303370171047, 0);
  sqcRZGate(q, -2.4726814693710546, 0);
  sqcRYGate(q, 1.2608299654670725, 1);
  sqcRZGate(q, 1.076754253291732, 1);
  sqcRYGate(q, 0.912565685178456, 2);
  sqcRZGate(q, 2.3248200704190713, 2);
  sqcRYGate(q, -1.3979629947654084, 3);
  sqcRZGate(q, -2.7343188344364258, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.16766122157380942, 0);
  sqcRZGate(q, 2.5654210751527984, 0);
  sqcRYGate(q, -1.1875905483223663, 1);
  sqcRZGate(q, -2.12874798834621, 1);
  sqcRYGate(q, -2.90280495570813, 2);
  sqcRZGate(q, -0.05539352720218824, 2);
  sqcRYGate(q, -2.0000628008132555, 3);
  sqcRZGate(q, -1.2607053234465424, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.015095948944181153, 0);
  sqcRZGate(q, 0.047192078381600666, 0);
  sqcRYGate(q, 0.5651909788050159, 1);
  sqcRZGate(q, 1.0577982112912003, 1);
  sqcRYGate(q, 0.007815638488480658, 2);
  sqcRZGate(q, 2.3098814873712747, 2);
  sqcRYGate(q, -2.9672926086923885, 3);
  sqcRZGate(q, 1.934248820315326, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.781438020062886, 0);
  sqcRZGate(q, 1.2826624183178685, 0);
  sqcRYGate(q, -0.46737353859645747, 1);
  sqcRZGate(q, 1.1053314762134652, 1);
  sqcRYGate(q, 0.3365454197263178, 2);
  sqcRZGate(q, 0.17244155792454216, 2);
  sqcRYGate(q, -1.3355848688677154, 3);
  sqcRZGate(q, 2.1632914029036145, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.9748653177083186, 0);
  sqcRZGate(q, -1.4556737199786527, 0);
  sqcRYGate(q, 0.6092173338288558, 1);
  sqcRZGate(q, -2.551079437053805, 1);
  sqcRYGate(q, 0.07297658591391876, 2);
  sqcRZGate(q, -2.962276840232445, 2);
  sqcRYGate(q, -1.14378047275598, 3);
  sqcRZGate(q, -2.4463578860380846, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.7193491816388409, 0);
  sqcRZGate(q, -2.1123257453765527, 0);
  sqcRYGate(q, 2.500414700624695, 1);
  sqcRZGate(q, 0.48558621465825796, 1);
  sqcRYGate(q, 2.1169253576725113, 2);
  sqcRZGate(q, -0.7182873415521713, 2);
  sqcRYGate(q, 1.0677381695828982, 3);
  sqcRZGate(q, -2.0145761764790233, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.9766903713003199, 0);
  sqcRZGate(q, -1.122742070485912, 0);
  sqcRYGate(q, 2.172451446652701, 1);
  sqcRZGate(q, 1.7699340386364586, 1);
  sqcRYGate(q, -1.433113532852131, 2);
  sqcRZGate(q, 1.5717444531854465, 2);
  sqcRYGate(q, -2.067314588433012, 3);
  sqcRZGate(q, -1.8497561047551345, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.000086966615019, 0);
  sqcRZGate(q, 2.182223625796132, 0);
  sqcRYGate(q, 0.06672942429005263, 1);
  sqcRZGate(q, 2.9988652345010522, 1);
  sqcRYGate(q, -2.413058496445992, 2);
  sqcRZGate(q, -2.6180712906565318, 2);
  sqcRYGate(q, 2.9830539051389238, 3);
  sqcRZGate(q, 1.7939518205984746, 3);

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
