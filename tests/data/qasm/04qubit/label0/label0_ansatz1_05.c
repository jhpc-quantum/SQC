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

  sqcRYGate(q, -2.330149751888919, 0);
  sqcRZGate(q, 2.95409496602536, 0);
  sqcRYGate(q, -1.6743304324216106, 1);
  sqcRZGate(q, -1.2531315411108768, 1);
  sqcRYGate(q, 0.06607132436263038, 2);
  sqcRZGate(q, -1.0222392964785516, 2);
  sqcRYGate(q, 1.4358111850074984, 3);
  sqcRZGate(q, 2.8115030475926455, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.9761509026087096, 0);
  sqcRZGate(q, -0.5442283044857937, 0);
  sqcRYGate(q, 1.0212523588868576, 1);
  sqcRZGate(q, 1.4018365001621382, 1);
  sqcRYGate(q, 0.8168576766533331, 2);
  sqcRZGate(q, 0.9647129653651954, 2);
  sqcRYGate(q, -1.7539625570857444, 3);
  sqcRZGate(q, -2.3176781609455634, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8836747021107607, 0);
  sqcRZGate(q, 1.3282295570235085, 0);
  sqcRYGate(q, 0.13733074816960308, 1);
  sqcRZGate(q, 0.7919160635683529, 1);
  sqcRYGate(q, 2.3310157934513733, 2);
  sqcRZGate(q, -1.6186806414851713, 2);
  sqcRYGate(q, 2.6893664044725134, 3);
  sqcRZGate(q, -1.5046041113730713, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6125607975315681, 0);
  sqcRZGate(q, -2.813784140095486, 0);
  sqcRYGate(q, 0.2360882724761746, 1);
  sqcRZGate(q, 1.5770322345510186, 1);
  sqcRYGate(q, -3.0689232628897796, 2);
  sqcRZGate(q, 2.2074536939966625, 2);
  sqcRYGate(q, 2.9627759194802405, 3);
  sqcRZGate(q, 2.2033989759674584, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.2687051824486475, 0);
  sqcRZGate(q, -1.4880716519627666, 0);
  sqcRYGate(q, -2.902980289919293, 1);
  sqcRZGate(q, 0.8357517335267328, 1);
  sqcRYGate(q, 0.7946987603385631, 2);
  sqcRZGate(q, 1.8067975790400557, 2);
  sqcRYGate(q, 0.3236256030238534, 3);
  sqcRZGate(q, 0.41366393956528125, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3905047148921688, 0);
  sqcRZGate(q, -2.6031364030403448, 0);
  sqcRYGate(q, -2.924037787218187, 1);
  sqcRZGate(q, 3.0952040687183997, 1);
  sqcRYGate(q, -0.9632801612173809, 2);
  sqcRZGate(q, -2.0785276502775316, 2);
  sqcRYGate(q, 0.5287218910937292, 3);
  sqcRZGate(q, 1.2145302939327465, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.001577760147872, 0);
  sqcRZGate(q, 1.1812758676653923, 0);
  sqcRYGate(q, 0.8868215622738146, 1);
  sqcRZGate(q, -1.6431937016461589, 1);
  sqcRYGate(q, 2.8713347007922567, 2);
  sqcRZGate(q, 0.28333408996336235, 2);
  sqcRYGate(q, -1.1919224280047391, 3);
  sqcRZGate(q, -1.068188649498583, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7890791739133061, 0);
  sqcRZGate(q, 2.2449821469758247, 0);
  sqcRYGate(q, 0.3219447601099692, 1);
  sqcRZGate(q, 0.46213013347559234, 1);
  sqcRYGate(q, -2.487226315584709, 2);
  sqcRZGate(q, -1.2289179859434212, 2);
  sqcRYGate(q, 0.443391333922487, 3);
  sqcRZGate(q, 0.5006511064757257, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7238666536751222, 0);
  sqcRZGate(q, 0.2057985157276813, 0);
  sqcRYGate(q, -1.1211521114548813, 1);
  sqcRZGate(q, 2.9090671599584574, 1);
  sqcRYGate(q, -2.1805564763614447, 2);
  sqcRZGate(q, 0.03952424852571479, 2);
  sqcRYGate(q, 0.6022297403343374, 3);
  sqcRZGate(q, 0.6838477306257396, 3);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
