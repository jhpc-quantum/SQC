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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -0.27608698088153805, 0);
  sqcRYGate(q, -2.1417636785383447, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2234387669892082, 0);
  sqcRYGate(q, -1.158333601049022, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8568083266347917, 1);
  sqcRYGate(q, -2.2305252680682175, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4891015702302215, 1);
  sqcRYGate(q, -1.3387647284703021, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0464051823016272, 2);
  sqcRYGate(q, 2.0237892557297616, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5393330796637839, 2);
  sqcRYGate(q, 1.573889832133017, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.707708552591201, 3);
  sqcRYGate(q, -0.8665282902645637, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0007318849253671614, 3);
  sqcRYGate(q, 1.5717692311338887, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8651675557310405, 4);
  sqcRYGate(q, -2.256950452584679, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.141523884258856, 4);
  sqcRYGate(q, 0.10381220528088667, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6860310510408878, 5);
  sqcRYGate(q, -0.3090517904288877, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1414953725767836, 5);
  sqcRYGate(q, -1.5709353677527453, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.874892594452523, 6);
  sqcRYGate(q, -3.137504597428773, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5167431083531813, 6);
  sqcRYGate(q, 1.5686819319789571, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.513324158311541, 0);
  sqcRYGate(q, 1.4953194377247678, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4840549632198696, 0);
  sqcRYGate(q, -0.8413519049947268, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2003663945257177, 1);
  sqcRYGate(q, -2.717356210535876, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6115076463772549, 1);
  sqcRYGate(q, 2.310028816987795, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7356337562585957, 2);
  sqcRYGate(q, -2.8367155002212368, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.671207762212818, 2);
  sqcRYGate(q, 1.197560066359066, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8934995960549026, 3);
  sqcRYGate(q, -1.569148573206896, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5444723811587702, 3);
  sqcRYGate(q, 1.5722331269357845, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5715794225553426, 4);
  sqcRYGate(q, -3.0665428859226265, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5647915354867683, 4);
  sqcRYGate(q, 0.22130539842637023, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.456059113381637, 5);
  sqcRYGate(q, 2.3411110516181814, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4890794017252968, 5);
  sqcRYGate(q, 0.4043934861546524, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0557207444412, 6);
  sqcRYGate(q, -0.320129587079653, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.01309724053164718, 6);
  sqcRYGate(q, -1.5668551859601554, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.37541335771751516, 0);
  sqcRYGate(q, 3.0001447514059607, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.26881704441540677, 0);
  sqcRYGate(q, 0.9577277434533796, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.159132536406383, 1);
  sqcRYGate(q, 0.5861240347134713, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.01108116806915227, 1);
  sqcRYGate(q, -1.5706047640009668, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.15896835477733, 2);
  sqcRYGate(q, 1.559811542281878, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.396838998970168, 2);
  sqcRYGate(q, 1.4834401978230594, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.139673394876612, 3);
  sqcRYGate(q, -3.140498331877312, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0790210238695721, 3);
  sqcRYGate(q, 0.8256527064527281, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.00031234155968048853, 4);
  sqcRYGate(q, -0.25241067835907227, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.009990891877746745, 4);
  sqcRYGate(q, 1.669809705028884, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.884688451676596, 5);
  sqcRYGate(q, 2.6761547622059894, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.139699014698102, 5);
  sqcRYGate(q, 1.5699942814185954, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.264824136627106, 6);
  sqcRYGate(q, -1.6417114502911563, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5786894474596989, 6);
  sqcRYGate(q, 2.788908060095518, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9053604220945637, 0);
  sqcRYGate(q, -1.5695531985471347, 1);
  sqcRYGate(q, -1.5704069500380287, 2);
  sqcRYGate(q, -1.5709459227579845, 3);
  sqcRYGate(q, 3.1413636855394884, 4);
  sqcRYGate(q, -0.00025215862464869046, 5);
  sqcRYGate(q, -1.57158214723518, 6);
  sqcRYGate(q, -1.5656072566096668, 7);

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
