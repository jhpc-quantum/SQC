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

  sqcRYGate(q, -2.8959677743193963, 0);
  sqcRZGate(q, 1.7349261381021075, 0);
  sqcRYGate(q, -2.9394136931399837, 1);
  sqcRZGate(q, 1.3948066559261436, 1);
  sqcRYGate(q, -2.2601446171814574, 2);
  sqcRZGate(q, -2.9106585675245156, 2);
  sqcRYGate(q, 1.9665029721389797, 3);
  sqcRZGate(q, -1.070134439771837, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.5600662918688684, 0);
  sqcRZGate(q, 0.12279763849523741, 0);
  sqcRYGate(q, 1.0575157674272253, 1);
  sqcRZGate(q, -3.1331950949225993, 1);
  sqcRYGate(q, 1.5654576216503515, 2);
  sqcRZGate(q, 0.573884308991587, 2);
  sqcRYGate(q, -1.0045723093277237, 3);
  sqcRZGate(q, -2.4248041421666446, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 3.0799883295361234, 0);
  sqcRZGate(q, -2.104559427312294, 0);
  sqcRYGate(q, -2.851301250297421, 1);
  sqcRZGate(q, -1.7665931315933134, 1);
  sqcRYGate(q, 1.1971758458035657, 2);
  sqcRZGate(q, -2.9871671436544482, 2);
  sqcRYGate(q, -1.4428438597343245, 3);
  sqcRZGate(q, 2.6459732538379326, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.329988255386139, 0);
  sqcRZGate(q, 2.7906700388783707, 0);
  sqcRYGate(q, -2.4443059883469562, 1);
  sqcRZGate(q, 0.5950142570668014, 1);
  sqcRYGate(q, 0.755171665317401, 2);
  sqcRZGate(q, 0.32816626960074036, 2);
  sqcRYGate(q, 0.05586119976430836, 3);
  sqcRZGate(q, 0.12090678013182288, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.40247242821182816, 0);
  sqcRZGate(q, -0.11828312501052747, 0);
  sqcRYGate(q, -1.1777924967467648, 1);
  sqcRZGate(q, -0.9433395796561753, 1);
  sqcRYGate(q, -1.0269752481461591, 2);
  sqcRZGate(q, 0.811120984051307, 2);
  sqcRYGate(q, 2.1240993826120076, 3);
  sqcRZGate(q, -1.4343625868978054, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.963220227001681, 0);
  sqcRZGate(q, -2.318996997645656, 0);
  sqcRYGate(q, 1.3359273758233297, 1);
  sqcRZGate(q, 0.997919945573111, 1);
  sqcRYGate(q, 0.47023383483828335, 2);
  sqcRZGate(q, 0.5921932954502872, 2);
  sqcRYGate(q, -1.2151345626456083, 3);
  sqcRZGate(q, -0.8354902435759088, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.384612565185074, 0);
  sqcRZGate(q, 2.257691022072372, 0);
  sqcRYGate(q, -1.4606288325066545, 1);
  sqcRZGate(q, 0.47226534325906044, 1);
  sqcRYGate(q, -0.49756816687231514, 2);
  sqcRZGate(q, 2.3244562910446773, 2);
  sqcRYGate(q, 1.1282374657496386, 3);
  sqcRZGate(q, -2.418991137688139, 3);

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
