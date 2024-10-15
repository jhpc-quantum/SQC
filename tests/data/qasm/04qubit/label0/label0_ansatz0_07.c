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

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.039972707969935094, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.07592461467186545, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.005433145748899179, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.3803400913087796, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.8211751640379128, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.2658691496285317, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.7086535287242293, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.18003218994995648, 0);
  sqcRZGate(q, -0.13991281391274402, 1);
  sqcRZGate(q, 0.06576279758902104, 2);
  sqcRZGate(q, -0.057548781695480763, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.20656467715614035, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.1501822285327191, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.052416937083230544, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.34183112802382076, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.730144300350209, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.12368766597265123, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.44179431482299736, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.38680368705129653, 0);
  sqcRZGate(q, -0.467850323010353, 1);
  sqcRZGate(q, -0.007795773960830663, 2);
  sqcRZGate(q, -0.2441512704453664, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.5040386046770204, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.4700771621983629, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.405089913056563, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.4380184626691306, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.0616136474126158, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.07379680843555382, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.2304721538023742, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.5576515713552789, 0);
  sqcRZGate(q, -0.3582421295825236, 1);
  sqcRZGate(q, 0.08423019003550415, 2);
  sqcRZGate(q, -0.01230226168533373, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.4078283747580498, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.3347915365968975, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.07879079373104637, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.16020196352289498, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.03143515766730668, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.20449018351101766, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.4004806383175508, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.35380570933679806, 0);
  sqcRZGate(q, -0.3284795924253186, 1);
  sqcRZGate(q, -0.03173909680500933, 2);
  sqcRZGate(q, 0.08982643350254994, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.10479655416230604, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.3424134171946517, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.25274036465999195, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.3854148114505194, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.08677451018860304, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.33553657446594787, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.4986351621252483, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.5009952255555089, 0);
  sqcRZGate(q, -0.05142516085621169, 1);
  sqcRZGate(q, -0.26646173499407766, 2);
  sqcRZGate(q, 0.16475914204300032, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.37728518337634775, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.23135685842603862, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.5669999871598412, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.06350143611102427, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.11164490845858037, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.2506381101490384, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.32363457674983964, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.3280353454442609, 0);
  sqcRZGate(q, 0.16304549671021834, 1);
  sqcRZGate(q, -0.3737766086745963, 2);
  sqcRZGate(q, 0.15084714584579006, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.3435229537733465, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.003726272805958274, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.6204048270863614, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.3386853191368861, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.042552828369756296, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.49100726834051617, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.044372177421584114, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.08348013211657081, 0);
  sqcRZGate(q, 0.12822427500828887, 1);
  sqcRZGate(q, 0.0781466675708178, 2);
  sqcRZGate(q, 0.46297119439899015, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.051651883600174954, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.2050486854273415, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.0759083818193914, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.4086589204433648, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.22171176893989472, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.428380954303947, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.13688967312386904, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.033817353065379176, 0);
  sqcRZGate(q, 0.5498841304787314, 1);
  sqcRZGate(q, 0.5276462373289962, 2);
  sqcRZGate(q, 0.3799094359654297, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.5112010357135444, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.06423881860272515, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.045557158036073825, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.1745763332931636, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.5769159847563973, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.23024439161689278, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.7178783238865607, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.13217141713265837, 0);
  sqcRZGate(q, 0.6549766399466971, 1);
  sqcRZGate(q, 0.9188740403935449, 2);
  sqcRZGate(q, 0.30650230441885834, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.5988048567110195, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.10116067539741186, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.3943466623371477, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.5006932057288904, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.5592876035709534, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.3405514454305117, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.16541931220652795, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.4830546353737193, 0);
  sqcRZGate(q, 0.6916463239225138, 1);
  sqcRZGate(q, 0.7195927004837428, 2);
  sqcRZGate(q, 0.3444137796706349, 3);

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
