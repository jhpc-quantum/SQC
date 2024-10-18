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

  sqcRYGate(q, -0.41875767266592584, 0);
  sqcRYGate(q, -1.9369424720703836, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2243716143337834, 0);
  sqcRYGate(q, 2.9997911961303614, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.166387560786839, 1);
  sqcRYGate(q, 0.43477197148041574, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.190467703218613, 1);
  sqcRYGate(q, -2.0640376868841717, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7237990548393562, 2);
  sqcRYGate(q, 2.5648819157861933, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1558403624130396, 2);
  sqcRYGate(q, -1.6738602188143323, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7431278041027762, 0);
  sqcRYGate(q, 2.951407866627409, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.018004509067370833, 0);
  sqcRYGate(q, 2.2905117117870835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.260330917888375, 1);
  sqcRYGate(q, 0.6377937395794332, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8312645235061664, 1);
  sqcRYGate(q, -1.7960072493770545, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.134702825016909, 2);
  sqcRYGate(q, 1.2366352864020298, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6455869763172084, 2);
  sqcRYGate(q, 2.107523672536275, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7002726419425347, 0);
  sqcRYGate(q, 1.7804897703151266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5658456844681243, 0);
  sqcRYGate(q, 1.1705428570518783, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.166456075525775, 1);
  sqcRYGate(q, -2.9448604324753913, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.707716674121591, 1);
  sqcRYGate(q, -1.2349287266056594, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.819441129597747, 2);
  sqcRYGate(q, 0.6210596600634247, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1270449607061521, 2);
  sqcRYGate(q, -0.2672328269975024, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.856287774651603, 0);
  sqcRYGate(q, 2.168221377728268, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.24536743782653403, 0);
  sqcRYGate(q, -2.7122028400619134, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5497467156285439, 1);
  sqcRYGate(q, 0.7682446762014472, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.946687728110732, 1);
  sqcRYGate(q, -0.238495735509467, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8535064913549775, 2);
  sqcRYGate(q, 0.7741337166682355, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6356265182232415, 2);
  sqcRYGate(q, 2.5734434890367135, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7378470359791796, 0);
  sqcRYGate(q, -1.617584763619294, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.875775892442854, 0);
  sqcRYGate(q, -1.579731367122505, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3686314964137356, 1);
  sqcRYGate(q, 2.7164433921787454, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5049396232764797, 1);
  sqcRYGate(q, 1.9339793121200088, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4239644360988512, 2);
  sqcRYGate(q, 1.2314973585911817, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3736359124089756, 2);
  sqcRYGate(q, -0.7985208466248972, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.910917822156445, 0);
  sqcRYGate(q, -0.5056796940825823, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1176792350061326, 0);
  sqcRYGate(q, 1.3822135284061106, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8798248275147267, 1);
  sqcRYGate(q, -0.31207186739027354, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6446723967824113, 1);
  sqcRYGate(q, 0.9587978915638856, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7905135777759857, 2);
  sqcRYGate(q, 1.661548848669355, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4405210251989486, 2);
  sqcRYGate(q, -2.1381473494650782, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.547452839659284, 0);
  sqcRYGate(q, 2.7570158625497783, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.683142386868213, 0);
  sqcRYGate(q, -3.0051343218473914, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.704716953231982, 1);
  sqcRYGate(q, -2.1806684575200785, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.696210555463395, 1);
  sqcRYGate(q, -3.0581678726547263, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4829024296260815, 2);
  sqcRYGate(q, -1.247357638777933, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5361761459696173, 2);
  sqcRYGate(q, -1.152872266589235, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2076449219778913, 0);
  sqcRYGate(q, 0.03849042170263761, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4946061237481407, 0);
  sqcRYGate(q, 0.8173021987431941, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0196528746229383, 1);
  sqcRYGate(q, 1.6397832388852964, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6880305529163415, 1);
  sqcRYGate(q, -0.4592037429437255, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3245689471924938, 2);
  sqcRYGate(q, -2.385925790102319, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8007804815710802, 2);
  sqcRYGate(q, -2.7499851918808607, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2575221574075233, 0);
  sqcRYGate(q, 0.7144334660567123, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5903484478796113, 0);
  sqcRYGate(q, 2.6245648106284474, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.217427329067805, 1);
  sqcRYGate(q, 1.8041840184532303, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.944973325386827, 1);
  sqcRYGate(q, 0.7603390960785824, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.253988649879015, 2);
  sqcRYGate(q, 1.1918708570834897, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4846824443158866, 2);
  sqcRYGate(q, 0.606235489022318, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5679222528427668, 0);
  sqcRYGate(q, 0.28969828918611795, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.49355245492914457, 0);
  sqcRYGate(q, -0.6398857108521381, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3054978535158641, 1);
  sqcRYGate(q, 0.41524348407027206, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1959918352784209, 1);
  sqcRYGate(q, 2.1732535786656104, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1584743326111848, 2);
  sqcRYGate(q, 3.084089885343403, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9047134187455135, 2);
  sqcRYGate(q, 1.9552782448309918, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0698702976488175, 0);
  sqcRYGate(q, -2.368845717087692, 1);
  sqcRYGate(q, 2.1083670234655854, 2);
  sqcRYGate(q, 1.691150554519866, 3);

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
