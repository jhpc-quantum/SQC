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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 1.5803986276235478, 0);
  sqcRZGate(q, 0.024981425037024895, 0);
  sqcRYGate(q, 0.04849753412820856, 1);
  sqcRZGate(q, 2.775936336249357, 1);
  sqcRYGate(q, 1.5705652470306115, 2);
  sqcRZGate(q, -1.6870981514233048, 2);
  sqcRYGate(q, -1.5725679343259227, 3);
  sqcRZGate(q, -1.5346490973416342, 3);
  sqcRYGate(q, -0.052252386061419465, 4);
  sqcRZGate(q, -0.31298900683543884, 4);
  sqcRYGate(q, -1.2231415893565571, 5);
  sqcRZGate(q, 0.727358688449219, 5);
  sqcRYGate(q, -3.0858294756963245, 6);
  sqcRZGate(q, -1.0921988788206738, 6);
  sqcRYGate(q, 3.056000911228022, 7);
  sqcRZGate(q, 1.417977406513371, 7);
  sqcRYGate(q, -1.892440365820546, 8);
  sqcRZGate(q, -2.336982245843164, 8);
  sqcRYGate(q, -3.071222139610906, 9);
  sqcRZGate(q, 2.902141897972058, 9);
  sqcRYGate(q, -1.530070312098316, 10);
  sqcRZGate(q, -1.2083836126881022, 10);
  sqcRYGate(q, -1.5838951917618553, 11);
  sqcRZGate(q, 1.9707388848646117, 11);
  sqcRYGate(q, -3.0704732063432894, 12);
  sqcRZGate(q, 0.019800226756458095, 12);
  sqcRYGate(q, -2.4696907167545694, 13);
  sqcRZGate(q, 3.125382147479552, 13);
  sqcRYGate(q, 2.314093536134218, 14);
  sqcRZGate(q, -0.16303542477715274, 14);
  sqcRYGate(q, 2.4563588293378174, 15);
  sqcRZGate(q, -0.014463531346623705, 15);
  sqcRYGate(q, -1.5685669184292224, 16);
  sqcRZGate(q, 2.1116478015189655, 16);
  sqcRYGate(q, 1.5366006248373907, 17);
  sqcRZGate(q, -2.901937317815527, 17);
  sqcRYGate(q, 3.093133200035, 18);
  sqcRZGate(q, -0.19459436777454628, 18);
  sqcRYGate(q, 1.573320542487541, 19);
  sqcRZGate(q, -0.01575466637058914, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.6454167148341545, 0);
  sqcRZGate(q, -2.77456487833214, 0);
  sqcRYGate(q, -1.5707473814907997, 1);
  sqcRZGate(q, 1.5762928251952435, 1);
  sqcRYGate(q, -1.5780812362239036, 2);
  sqcRZGate(q, -2.293991219560805, 2);
  sqcRYGate(q, 1.7748334492108158, 3);
  sqcRZGate(q, 1.2263994886483989, 3);
  sqcRYGate(q, 1.5712673225402893, 4);
  sqcRZGate(q, -1.7784461640322098, 4);
  sqcRYGate(q, -2.665605379074177, 5);
  sqcRZGate(q, 0.7695059215434412, 5);
  sqcRYGate(q, -0.052293811186236744, 6);
  sqcRZGate(q, 2.960262937042365, 6);
  sqcRYGate(q, 3.085993918773601, 7);
  sqcRZGate(q, 1.0688937468278026, 7);
  sqcRYGate(q, -0.34350476322406553, 8);
  sqcRZGate(q, -0.8531417000200956, 8);
  sqcRYGate(q, -1.5669702447498872, 9);
  sqcRZGate(q, 2.4030683418583827, 9);
  sqcRYGate(q, -0.798401799389818, 10);
  sqcRZGate(q, -1.2557895676286357, 10);
  sqcRYGate(q, -1.752635473709491, 11);
  sqcRZGate(q, 2.2537920633916086, 11);
  sqcRYGate(q, 0.9713954204062842, 12);
  sqcRZGate(q, 1.5010450282637633, 12);
  sqcRYGate(q, 3.097769369504375, 13);
  sqcRZGate(q, 3.12526667256257, 13);
  sqcRYGate(q, 0.001989523838087592, 14);
  sqcRZGate(q, 0.1635863059598951, 14);
  sqcRYGate(q, 0.9142420083177702, 15);
  sqcRZGate(q, 3.053399330669209, 15);
  sqcRYGate(q, 3.042793295420435, 16);
  sqcRZGate(q, 2.065403282644816, 16);
  sqcRYGate(q, -1.555320484324839, 17);
  sqcRZGate(q, 2.1559332712155412, 17);
  sqcRYGate(q, 1.5741046188852361, 18);
  sqcRZGate(q, 1.5852311568980273, 18);
  sqcRYGate(q, -1.4856041306342052, 19);
  sqcRZGate(q, -2.952300713630312, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.5707878065761314, 0);
  sqcRZGate(q, 1.6505854968155174, 0);
  sqcRYGate(q, 2.410352938499429, 1);
  sqcRZGate(q, 3.114368345276588, 1);
  sqcRYGate(q, -3.0955475849243697, 2);
  sqcRZGate(q, -2.75274964631227, 2);
  sqcRYGate(q, 3.0921594529643457, 3);
  sqcRZGate(q, 3.022521470452708, 3);
  sqcRYGate(q, -0.046999592957194025, 4);
  sqcRZGate(q, 0.210334651678543, 4);
  sqcRYGate(q, -1.5707277058231384, 5);
  sqcRZGate(q, -1.5697955057734323, 5);
  sqcRYGate(q, 0.024440100804794973, 6);
  sqcRZGate(q, 2.3389427714306255, 6);
  sqcRYGate(q, 0.03173993538000186, 7);
  sqcRZGate(q, -1.2283124016599791, 7);
  sqcRYGate(q, -1.5820928624179647, 8);
  sqcRZGate(q, -1.4913113247537126, 8);
  sqcRYGate(q, 3.073387819172801, 9);
  sqcRZGate(q, -2.2140104211926532, 9);
  sqcRYGate(q, -3.0888618449254532, 10);
  sqcRZGate(q, -1.627749919335082, 10);
  sqcRYGate(q, 3.081249108473914, 11);
  sqcRZGate(q, -2.4358305040448167, 11);
  sqcRYGate(q, 3.0730380774628827, 12);
  sqcRZGate(q, -3.1153023151464225, 12);
  sqcRYGate(q, 2.157310373901728, 13);
  sqcRZGate(q, -1.8746739319444663, 13);
  sqcRYGate(q, 2.0824613638230067, 14);
  sqcRZGate(q, 1.9162820356030237, 14);
  sqcRYGate(q, -2.4555156586375397, 15);
  sqcRZGate(q, -1.6557189052266315, 15);
  sqcRYGate(q, -0.05384591305554842, 16);
  sqcRZGate(q, -0.6138507557374161, 16);
  sqcRYGate(q, 3.094845341608723, 17);
  sqcRZGate(q, -1.1701305959729844, 17);
  sqcRYGate(q, -0.5857715222482983, 18);
  sqcRZGate(q, 2.719205870975574, 18);
  sqcRYGate(q, -1.56600516627128, 19);
  sqcRZGate(q, -1.357059221784476, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.599906078940455, 0);
  sqcRZGate(q, -2.4117736228569298, 0);
  sqcRYGate(q, 1.648947349766775, 1);
  sqcRZGate(q, 2.2462524246068623, 1);
  sqcRYGate(q, -3.0485872356002313, 2);
  sqcRZGate(q, 2.629738272447132, 2);
  sqcRYGate(q, -0.008334297433869153, 3);
  sqcRZGate(q, -2.695923043512125, 3);
  sqcRYGate(q, 1.5654455574637038, 4);
  sqcRZGate(q, -2.4709728304369523, 4);
  sqcRYGate(q, 1.5760660438953105, 5);
  sqcRZGate(q, 0.6888429479783946, 5);
  sqcRYGate(q, -3.1415124352978903, 6);
  sqcRZGate(q, -2.151129940995898, 6);
  sqcRYGate(q, 3.1409099044483755, 7);
  sqcRZGate(q, 2.3132431388147516, 7);
  sqcRYGate(q, 1.553437443566584, 8);
  sqcRZGate(q, 1.221255606697605, 8);
  sqcRYGate(q, -1.5471471147183964, 9);
  sqcRZGate(q, -1.8423426577684137, 9);
  sqcRYGate(q, -2.955495265041725, 10);
  sqcRZGate(q, -0.6504368146825684, 10);
  sqcRYGate(q, -2.5885816158435486, 11);
  sqcRZGate(q, -0.09962050847293646, 11);
  sqcRYGate(q, -2.1026365258057726, 12);
  sqcRZGate(q, -3.0702361734229267, 12);
  sqcRYGate(q, 2.0202194616951945, 13);
  sqcRZGate(q, -0.7053405147868195, 13);
  sqcRYGate(q, 1.11951460699205, 14);
  sqcRZGate(q, 2.4368264763508702, 14);
  sqcRYGate(q, 2.1313153722738543, 15);
  sqcRZGate(q, -0.06296268588356746, 15);
  sqcRYGate(q, -0.5736856507708998, 16);
  sqcRZGate(q, 3.107064981151379, 16);
  sqcRYGate(q, 2.7024736313492013, 17);
  sqcRZGate(q, 2.8492524297226254, 17);
  sqcRYGate(q, 1.4005904166302219, 18);
  sqcRZGate(q, -2.2300649444070677, 18);
  sqcRYGate(q, 1.1831740356692217, 19);
  sqcRZGate(q, 2.3347732395110974, 19);

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
