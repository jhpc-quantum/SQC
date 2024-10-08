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

  sqcRYGate(q, -2.9537142492869672, 0);
  sqcRZGate(q, -1.1228753788326598, 0);
  sqcRYGate(q, 3.0407741031150652, 1);
  sqcRZGate(q, 2.0805750269815952, 1);
  sqcRYGate(q, -1.5664128652262113, 2);
  sqcRZGate(q, 3.1398128563290686, 2);
  sqcRYGate(q, -2.904414341083469, 3);
  sqcRZGate(q, 0.21917067130491794, 3);
  sqcRYGate(q, -0.010113639791468423, 4);
  sqcRZGate(q, 1.4513669255991992, 4);
  sqcRYGate(q, 0.0010664210669157012, 5);
  sqcRZGate(q, -1.8707384480957632, 5);
  sqcRYGate(q, -1.9228203352752222e-05, 6);
  sqcRZGate(q, 1.7961356249039957, 6);
  sqcRYGate(q, -3.140941141867396, 7);
  sqcRZGate(q, -1.7948520623964026, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 3.1406747508813826, 0);
  sqcRZGate(q, 0.8982218297000983, 0);
  sqcRYGate(q, -8.031242403646711e-05, 1);
  sqcRZGate(q, 2.3311727087937553, 1);
  sqcRYGate(q, -1.5650681651688751, 2);
  sqcRZGate(q, -1.7537569349462767, 2);
  sqcRYGate(q, 3.1355131712099547, 3);
  sqcRZGate(q, 1.4832991109874785, 3);
  sqcRYGate(q, 1.6154994134083065, 4);
  sqcRZGate(q, -0.0008947864926276166, 4);
  sqcRYGate(q, 3.1399426845360012, 5);
  sqcRZGate(q, 0.13718141624253757, 5);
  sqcRYGate(q, -6.828547929600404e-05, 6);
  sqcRZGate(q, -0.28324914508831694, 6);
  sqcRYGate(q, 3.1411730233201713, 7);
  sqcRZGate(q, 0.21938941299498094, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.7881609204899861, 0);
  sqcRZGate(q, -3.1034090887811776, 0);
  sqcRYGate(q, -0.1462817944001893, 1);
  sqcRZGate(q, 0.028513498891179368, 1);
  sqcRYGate(q, -2.99810204261225, 2);
  sqcRZGate(q, 1.4140546074758653, 2);
  sqcRYGate(q, -0.008138071018058746, 3);
  sqcRZGate(q, -2.714174808300261, 3);
  sqcRYGate(q, -1.6155198076239017, 4);
  sqcRZGate(q, 0.09029546654943983, 4);
  sqcRYGate(q, -3.1411992931234693, 5);
  sqcRZGate(q, 1.533591424253433, 5);
  sqcRYGate(q, -3.1415797384597055, 6);
  sqcRZGate(q, 0.8878059366013851, 6);
  sqcRYGate(q, -5.11264784022911e-05, 7);
  sqcRZGate(q, -0.9267210687533941, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.568154052118043, 0);
  sqcRZGate(q, -2.074052416084418, 0);
  sqcRYGate(q, -1.9738850487052844, 1);
  sqcRZGate(q, 3.1123076608076694, 1);
  sqcRYGate(q, 2.934685706959313, 2);
  sqcRZGate(q, 2.1048879714545077, 2);
  sqcRYGate(q, 0.04026556679295635, 3);
  sqcRZGate(q, -1.6719066317298878, 3);
  sqcRYGate(q, -3.1402409222358645, 4);
  sqcRZGate(q, -1.508751676965397, 4);
  sqcRYGate(q, 0.0008816778174875246, 5);
  sqcRZGate(q, -1.595283675176268, 5);
  sqcRYGate(q, 4.225239407240621e-06, 6);
  sqcRZGate(q, 1.8838177264212566, 6);
  sqcRYGate(q, -0.0004469321691661695, 7);
  sqcRZGate(q, -2.1964336845849393, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.021387729698705726, 0);
  sqcRZGate(q, 1.0541415080023524, 0);
  sqcRYGate(q, -1.0762102603330963, 1);
  sqcRZGate(q, 2.3336724405066587, 1);
  sqcRYGate(q, 3.1312355086197456, 2);
  sqcRZGate(q, -2.9612968796808183, 2);
  sqcRYGate(q, 0.24367227585525744, 3);
  sqcRZGate(q, -1.6013743920204624, 3);
  sqcRYGate(q, -1.4450987586531416, 4);
  sqcRZGate(q, 3.0966693887505694, 4);
  sqcRYGate(q, 0.01940844884330062, 5);
  sqcRZGate(q, -0.5126021346911038, 5);
  sqcRYGate(q, -1.3411665823679685e-05, 6);
  sqcRZGate(q, 3.0424992831006996, 6);
  sqcRYGate(q, 3.1262347765306173, 7);
  sqcRZGate(q, 0.08790631182407171, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -3.1412500643187546, 0);
  sqcRZGate(q, 3.030684530005724, 0);
  sqcRYGate(q, -0.0011002517571279354, 1);
  sqcRZGate(q, -1.1966263908806576, 1);
  sqcRYGate(q, -3.138641532712111, 2);
  sqcRZGate(q, -1.2130363738082472, 2);
  sqcRYGate(q, -0.006066531063666503, 3);
  sqcRZGate(q, -1.3005572594631811, 3);
  sqcRYGate(q, 1.9534544784709098, 4);
  sqcRZGate(q, -0.4123701035163485, 4);
  sqcRYGate(q, -1.225928877675246, 5);
  sqcRZGate(q, 3.097820615210059, 5);
  sqcRYGate(q, -3.1414989506368167, 6);
  sqcRZGate(q, 1.7739529263213756, 6);
  sqcRYGate(q, 3.1139197610478395, 7);
  sqcRZGate(q, -3.0133839625703467, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.00016043065342492664, 0);
  sqcRZGate(q, 1.7351702622148526, 0);
  sqcRYGate(q, 3.141156240865576, 1);
  sqcRZGate(q, 0.7322457353243239, 1);
  sqcRYGate(q, -0.001969320967442834, 2);
  sqcRZGate(q, -2.2328360539881245, 2);
  sqcRYGate(q, 0.003996688246615512, 3);
  sqcRZGate(q, -1.8446982770741305, 3);
  sqcRYGate(q, -0.005579720441848402, 4);
  sqcRZGate(q, 1.9520094343833891, 4);
  sqcRYGate(q, -1.4829401067229593, 5);
  sqcRZGate(q, -1.7182392062645775, 5);
  sqcRYGate(q, 1.5700153142985078, 6);
  sqcRZGate(q, 1.570739835599446, 6);
  sqcRYGate(q, 0.2418884742418319, 7);
  sqcRZGate(q, 1.5878258375913876, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.5707920985854662, 0);
  sqcRZGate(q, 3.1415805552450924, 0);
  sqcRYGate(q, 1.5707725247938156, 1);
  sqcRZGate(q, -1.2905817467696615e-05, 1);
  sqcRYGate(q, -1.570784688571182, 2);
  sqcRZGate(q, 1.7337177016685246e-05, 2);
  sqcRYGate(q, -1.5708022506644956, 3);
  sqcRZGate(q, 5.936095952563392e-06, 3);
  sqcRYGate(q, -1.570789880836119, 4);
  sqcRZGate(q, -5.188923744547935e-05, 4);
  sqcRYGate(q, 1.5708978219476528, 5);
  sqcRZGate(q, -3.1414684472394327, 5);
  sqcRYGate(q, -1.5486928840457548, 6);
  sqcRZGate(q, -1.5699697645748145, 6);
  sqcRYGate(q, 1.5707888122078053, 7);
  sqcRZGate(q, -3.1414024996378727, 7);

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
