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

  sqcRYGate(q, -1.6461678311915062, 0);
  sqcRYGate(q, -0.13879368483803045, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3308277435997838, 0);
  sqcRYGate(q, 2.4277804041031836, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8399526946398587, 1);
  sqcRYGate(q, -2.590388855062243, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.45719830782361726, 1);
  sqcRYGate(q, 0.25452543919571186, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5693687971483548, 2);
  sqcRYGate(q, -1.0642686131445913, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.131398537773003, 2);
  sqcRYGate(q, -2.4800426003864673, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7511394348130382, 0);
  sqcRYGate(q, 0.02469323073337266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7549136944668106, 0);
  sqcRYGate(q, 0.7850732362493471, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.378613352092678, 1);
  sqcRYGate(q, -0.8560390542399201, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.041628939700211, 1);
  sqcRYGate(q, 1.031075739461818, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1676418037699445, 2);
  sqcRYGate(q, -0.47250003118001516, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1840249631441413, 2);
  sqcRYGate(q, 1.6011264559775824, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0329942264228178, 0);
  sqcRYGate(q, 1.7084685808196607, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0973437442501712, 0);
  sqcRYGate(q, 0.05818051767449135, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.026057629286207806, 1);
  sqcRYGate(q, -0.48050858651368245, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1044312757030583, 1);
  sqcRYGate(q, 2.5322979571569144, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.312976207377309, 2);
  sqcRYGate(q, -0.5450405569963852, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1077767136401986, 2);
  sqcRYGate(q, -2.1284716373374932, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.872365294896766, 0);
  sqcRYGate(q, -2.9979101341834586, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.021428479554018, 0);
  sqcRYGate(q, -1.3643847896644317, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8112822536346127, 1);
  sqcRYGate(q, -0.09105959102095529, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8954095398620252, 1);
  sqcRYGate(q, 2.483820784175032, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.662801557453769, 2);
  sqcRYGate(q, -1.4855890463801362, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9157442475389264, 2);
  sqcRYGate(q, 0.46646083448093556, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.207405663175595, 0);
  sqcRYGate(q, 1.383051618603983, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.843646899130106, 0);
  sqcRYGate(q, 1.2766088404851237, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5644402740233732, 1);
  sqcRYGate(q, 2.503490055422096, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3314408348822209, 1);
  sqcRYGate(q, 2.6464555700655144, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1195188417041906, 2);
  sqcRYGate(q, 1.823618959464091, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.476494673455831, 2);
  sqcRYGate(q, -2.2454639992377654, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.057379195869853, 0);
  sqcRYGate(q, -2.353184519503315, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.39611207286726025, 0);
  sqcRYGate(q, -1.8051926343088072, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6056984001761772, 1);
  sqcRYGate(q, -1.7186542191072502, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8459627438803956, 1);
  sqcRYGate(q, 1.3864324664553231, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7793364454547413, 2);
  sqcRYGate(q, -1.4123751305832235, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.35460519470764407, 2);
  sqcRYGate(q, -0.9621735576132765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.24363539673940338, 0);
  sqcRYGate(q, 0.9505701722156648, 1);
  sqcRYGate(q, -1.8266142366861766, 2);
  sqcRYGate(q, 1.214569715474823, 3);

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
