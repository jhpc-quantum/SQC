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

  sqcRYGate(q, -2.90793460629288, 0);
  sqcRYGate(q, -1.7899408449124792, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.42528722403282376, 0);
  sqcRYGate(q, 0.7624720487096468, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9165652971839195, 2);
  sqcRYGate(q, -0.4257045867412399, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5094919087515746, 2);
  sqcRYGate(q, -0.738897679930793, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7769956873966288, 4);
  sqcRYGate(q, -1.9931687811860546, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.30936256907379217, 4);
  sqcRYGate(q, -0.08208477287516036, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0447478533347248, 6);
  sqcRYGate(q, 1.384935988180648, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7393677188546439, 6);
  sqcRYGate(q, 0.25534259309130913, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0343946897182956, 0);
  sqcRYGate(q, -1.7193674619446342, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.061833041325575, 0);
  sqcRYGate(q, 3.0475638955705073, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.565498417603454, 2);
  sqcRYGate(q, -1.1276251354739542, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.8799386307555284, 2);
  sqcRYGate(q, -3.098918789715415, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.2377532864501672, 4);
  sqcRYGate(q, 1.1180326790463586, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.578164439881615, 4);
  sqcRYGate(q, 3.0775371224462487, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.7276009625599995, 1);
  sqcRYGate(q, 0.8164462558689242, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2279015076340249, 1);
  sqcRYGate(q, 1.005749180776454, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0991692336999304, 3);
  sqcRYGate(q, -2.321874098683404, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.86883593832519, 3);
  sqcRYGate(q, 3.1086215392673884, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.2885835404552903, 5);
  sqcRYGate(q, -2.8414248866661915, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.566643468028819, 5);
  sqcRYGate(q, -3.138653993628412, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.6205632965431516, 0);
  sqcRYGate(q, 1.5433399437540798, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0282792127460239, 0);
  sqcRYGate(q, -2.9330204414790293, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3331943528259391, 2);
  sqcRYGate(q, -1.4522151691007776, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.927614589486021, 2);
  sqcRYGate(q, -0.5002925031935357, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.04440551085098842, 4);
  sqcRYGate(q, -0.30602192256066674, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9733516480807154, 4);
  sqcRYGate(q, -1.3938163015322882, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3324251242531737, 6);
  sqcRYGate(q, 3.0889408971044388, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2101452339197363, 6);
  sqcRYGate(q, 3.010413695420045, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6030348159218528, 0);
  sqcRYGate(q, -0.4582920406627711, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.03583743591445021, 0);
  sqcRYGate(q, 0.12345253859607234, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3809251642673712, 2);
  sqcRYGate(q, 0.38204212448863123, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.105333821249036, 2);
  sqcRYGate(q, 3.0527200627686164, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.4507810672306345, 4);
  sqcRYGate(q, -0.9706041372785945, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.7572710124448006, 4);
  sqcRYGate(q, 3.1375982768597233, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.49455969203752126, 1);
  sqcRYGate(q, 1.956064282249712, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0845284637340757, 1);
  sqcRYGate(q, 0.16833609399663807, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.05703317773981113, 3);
  sqcRYGate(q, -1.2964224376084292, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.0019964695733802884, 3);
  sqcRYGate(q, -3.0732086038055764, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.42343919452083084, 5);
  sqcRYGate(q, -1.726641435939478, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.0879385714205254, 5);
  sqcRYGate(q, -3.084508988711183, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.4966474257718687, 0);
  sqcRYGate(q, 1.521475270466059, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.224329178371865, 0);
  sqcRYGate(q, -2.620545313277562, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2060258226967795, 2);
  sqcRYGate(q, -1.7951506689122878, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4285435797429615, 2);
  sqcRYGate(q, 1.3507442743703937, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.13953497112404153, 4);
  sqcRYGate(q, -1.8755979255809463, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5042272201158056, 4);
  sqcRYGate(q, -0.11196113964319654, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7262275716625557, 6);
  sqcRYGate(q, -1.66330711691183, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2833717136599045, 6);
  sqcRYGate(q, 1.5035652235461, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8898892363483135, 0);
  sqcRYGate(q, -2.1190751165829695, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.1026433987481945, 0);
  sqcRYGate(q, 3.12455404797736, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4095202116094416, 2);
  sqcRYGate(q, -1.484850420110439, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.1346995431281672, 2);
  sqcRYGate(q, 3.1081628757227575, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.8244119884911338, 4);
  sqcRYGate(q, 1.7128489090024024, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.8557876458285993, 4);
  sqcRYGate(q, 3.122771482461081, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.186929187986416, 1);
  sqcRYGate(q, -0.24964999019335457, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0937393394251314, 1);
  sqcRYGate(q, -0.024753537885138194, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7270832046103817, 3);
  sqcRYGate(q, -1.9890160828888472, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.008535191947451167, 3);
  sqcRYGate(q, 3.1219290281313454, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.4900497916439146, 5);
  sqcRYGate(q, 3.037946993210878, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.100492053886166, 5);
  sqcRYGate(q, -3.1323969368384126, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.542230260112239, 0);
  sqcRYGate(q, 1.6046653632407675, 1);
  sqcRYGate(q, -0.6415547544364986, 2);
  sqcRYGate(q, 1.7080069569125047, 3);
  sqcRYGate(q, 2.3504615739691115, 4);
  sqcRYGate(q, 2.4623171302241693, 5);
  sqcRYGate(q, -1.6109350328442362, 6);
  sqcRYGate(q, 2.992345266380329, 7);

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
