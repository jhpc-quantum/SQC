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

  sqcRYGate(q, -0.9595218885499408, 0);
  sqcRZGate(q, -0.5404892508405942, 0);
  sqcRYGate(q, 1.9509316751666537, 1);
  sqcRZGate(q, 0.19307841968569295, 1);
  sqcRYGate(q, 2.301528602660683, 2);
  sqcRZGate(q, -1.1552602086650925, 2);
  sqcRYGate(q, -2.994374834978498, 3);
  sqcRZGate(q, 0.07778605155863083, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.695082401279274, 0);
  sqcRZGate(q, -0.17212414002770426, 0);
  sqcRYGate(q, 2.38518972299566, 1);
  sqcRZGate(q, -1.7543508651565745, 1);
  sqcRYGate(q, 1.7274250534638034, 2);
  sqcRZGate(q, -2.8089994422296347, 2);
  sqcRYGate(q, 1.8554053894670075, 3);
  sqcRZGate(q, 0.7817067145501655, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.218955994021217, 0);
  sqcRZGate(q, -0.05769095775029776, 0);
  sqcRYGate(q, 0.39767894321492836, 1);
  sqcRZGate(q, 1.1901981364935206, 1);
  sqcRYGate(q, -2.1089253805662462, 2);
  sqcRZGate(q, -0.027009389452874767, 2);
  sqcRYGate(q, -3.1367797717687718, 3);
  sqcRZGate(q, 2.278256927183249, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6331617829071226, 0);
  sqcRZGate(q, 2.754775590502366, 0);
  sqcRYGate(q, -0.6313476788546308, 1);
  sqcRZGate(q, 0.36115293931492237, 1);
  sqcRYGate(q, 0.2650927401379759, 2);
  sqcRZGate(q, 0.8452060885404152, 2);
  sqcRYGate(q, -0.12541048036122238, 3);
  sqcRZGate(q, 2.9423479705629303, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7479834513181043, 0);
  sqcRZGate(q, -0.3581757781182446, 0);
  sqcRYGate(q, 2.0893578097113608, 1);
  sqcRZGate(q, 0.6438219859239993, 1);
  sqcRYGate(q, -0.3732236545917109, 2);
  sqcRZGate(q, 1.1145620379846894, 2);
  sqcRYGate(q, 1.2279897549059573, 3);
  sqcRZGate(q, 1.2129443308577321, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.24050531505712, 0);
  sqcRZGate(q, 1.358055755893987, 0);
  sqcRYGate(q, 2.5162384643363755, 1);
  sqcRZGate(q, -1.9064448188925125, 1);
  sqcRYGate(q, 2.41063231642148, 2);
  sqcRZGate(q, -0.2881918454248821, 2);
  sqcRYGate(q, -2.043540630778338, 3);
  sqcRZGate(q, -2.610847324090087, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4011440401708195, 0);
  sqcRZGate(q, 2.222807194166833, 0);
  sqcRYGate(q, -0.4623783180552333, 1);
  sqcRZGate(q, -1.0633055895208416, 1);
  sqcRYGate(q, 1.2153980612372068, 2);
  sqcRZGate(q, 1.4991201901050426, 2);
  sqcRYGate(q, 1.322438934827662, 3);
  sqcRZGate(q, -1.2743494021975994, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.724913920305012, 0);
  sqcRZGate(q, -0.5021587013117628, 0);
  sqcRYGate(q, -2.5456290190142177, 1);
  sqcRZGate(q, 2.5076795818790405, 1);
  sqcRYGate(q, 0.5538800489769805, 2);
  sqcRZGate(q, 0.5003411955223771, 2);
  sqcRYGate(q, 1.4752965733950933, 3);
  sqcRZGate(q, -1.4955300004426733, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.937728001455929, 0);
  sqcRZGate(q, -0.1115640037635668, 0);
  sqcRYGate(q, -1.4847239578547304, 1);
  sqcRZGate(q, 0.2575599924271632, 1);
  sqcRYGate(q, 0.7801832778986375, 2);
  sqcRZGate(q, 0.8914665157364761, 2);
  sqcRYGate(q, -1.2332021974410852, 3);
  sqcRZGate(q, 0.8858328960692462, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.21552997457967304, 0);
  sqcRZGate(q, -0.33824311958160075, 0);
  sqcRYGate(q, -2.1398752035635082, 1);
  sqcRZGate(q, 0.7318784955017508, 1);
  sqcRYGate(q, -2.879742968002936, 2);
  sqcRZGate(q, 1.987187260827004, 2);
  sqcRYGate(q, 2.719095688549617, 3);
  sqcRZGate(q, -1.0393499175688483, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.4349385084698057, 0);
  sqcRZGate(q, 1.239880118863792, 0);
  sqcRYGate(q, -2.750445081281485, 1);
  sqcRZGate(q, -2.9742535762478255, 1);
  sqcRYGate(q, -2.215148975596696, 2);
  sqcRZGate(q, -0.15594871974045435, 2);
  sqcRYGate(q, -0.6897990975516359, 3);
  sqcRZGate(q, -2.0102623115017555, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5651109339882208, 0);
  sqcRZGate(q, -2.9098265873417164, 0);
  sqcRYGate(q, -1.574287647657296, 1);
  sqcRZGate(q, 1.5945541004929509, 1);
  sqcRYGate(q, -0.9474600747553055, 2);
  sqcRZGate(q, -2.117921215949722, 2);
  sqcRYGate(q, 2.2814806872574276, 3);
  sqcRZGate(q, 1.82292411182332, 3);

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
