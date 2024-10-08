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

  sqcRYGate(q, -0.7719791197461507, 0);
  sqcRYGate(q, -2.3780435925215366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2490831526744328, 0);
  sqcRYGate(q, 1.0231228953105098, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5597160730817068, 2);
  sqcRYGate(q, -1.835241209663991, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.651633632475737, 2);
  sqcRYGate(q, -1.221780197566536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9913357220046657, 0);
  sqcRYGate(q, -2.5189838361650523, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6088836698545825, 0);
  sqcRYGate(q, -0.7982230672134518, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9479006290798272, 1);
  sqcRYGate(q, -0.07314803861519151, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9370835435569822, 1);
  sqcRYGate(q, 2.0036476579097746, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3095302859875653, 0);
  sqcRYGate(q, -2.497299572980135, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0088859675181068, 0);
  sqcRYGate(q, 0.3688276003444644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.071036097046799, 2);
  sqcRYGate(q, -1.190334899656973, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.18462948503337, 2);
  sqcRYGate(q, -2.25488307892762, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.107126951916529, 0);
  sqcRYGate(q, 0.8740201650465149, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3942109083626897, 0);
  sqcRYGate(q, 1.7372711627712762, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9077356201852416, 1);
  sqcRYGate(q, 2.5988686386384123, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5384995829275585, 1);
  sqcRYGate(q, -2.361467182057451, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.36821043985348645, 0);
  sqcRYGate(q, 0.9802365728191758, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4193405669783701, 0);
  sqcRYGate(q, -0.729437413493863, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.12221138072685, 2);
  sqcRYGate(q, -2.918872402279804, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2652723782441862, 2);
  sqcRYGate(q, -0.819422761099245, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1043401193764675, 0);
  sqcRYGate(q, 1.248516387224634, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.007137980509615, 0);
  sqcRYGate(q, -3.0983096060057718, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5949318180804806, 1);
  sqcRYGate(q, -2.8692759737318867, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7054004364725768, 1);
  sqcRYGate(q, -0.5727561078526247, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2796676754126948, 0);
  sqcRYGate(q, 0.6038788362396863, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.319767713908589, 0);
  sqcRYGate(q, -2.1756118199958117, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3244449118850137, 2);
  sqcRYGate(q, -2.497904045547896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7917406250951444, 2);
  sqcRYGate(q, -1.9302213174168505, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7455615483916596, 0);
  sqcRYGate(q, 0.9669766987997122, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0226990060486614, 0);
  sqcRYGate(q, -0.3893434864342895, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.219117268114205, 1);
  sqcRYGate(q, 0.616462108022116, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5491659550977838, 1);
  sqcRYGate(q, -0.9273427220914359, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.188845612095592, 0);
  sqcRYGate(q, -1.2097782093787846, 1);
  sqcRYGate(q, -2.1960670317119204, 2);
  sqcRYGate(q, 0.08714518600105325, 3);

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
