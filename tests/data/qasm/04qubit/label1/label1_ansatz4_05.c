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

  sqcRYGate(q, 1.2148069358739042, 0);
  sqcRZGate(q, -1.1801849294299824, 0);
  sqcRYGate(q, -1.6003321126297985, 1);
  sqcRZGate(q, 1.0833788021060222, 1);
  sqcRYGate(q, -2.63615354240398, 2);
  sqcRZGate(q, 3.08954475515715, 2);
  sqcRYGate(q, 1.2638401873124019, 3);
  sqcRZGate(q, -1.6542094207209113, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.717619363636233, 0);
  sqcRZGate(q, 0.4274716630519029, 0);
  sqcRYGate(q, -1.6346650675099619, 1);
  sqcRZGate(q, 1.4669701733131755, 1);
  sqcRYGate(q, 1.0536616030025208, 2);
  sqcRZGate(q, 0.7491788212791269, 2);
  sqcRYGate(q, 2.656350744484269, 3);
  sqcRZGate(q, -1.6024545189098598, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3660987526910113, 0);
  sqcRZGate(q, -2.9673608707287884, 0);
  sqcRYGate(q, -2.826131873062262, 1);
  sqcRZGate(q, -0.5606727714056651, 1);
  sqcRYGate(q, -2.5404114862497753, 2);
  sqcRZGate(q, -2.9306168872800233, 2);
  sqcRYGate(q, 1.3014437014256526, 3);
  sqcRZGate(q, -0.9253578265144905, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.157993161530585, 0);
  sqcRZGate(q, -1.5539734963011296, 0);
  sqcRYGate(q, 2.0961933667356445, 1);
  sqcRZGate(q, 1.333115963583471, 1);
  sqcRYGate(q, 2.210205397343666, 2);
  sqcRZGate(q, 0.821963853198298, 2);
  sqcRYGate(q, -0.8919300126674489, 3);
  sqcRZGate(q, 0.8120837091802326, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.6019399938801113, 0);
  sqcRZGate(q, 1.824485061914995, 0);
  sqcRYGate(q, 1.6334584830187904, 1);
  sqcRZGate(q, 1.6524570376671812, 1);
  sqcRYGate(q, 0.16747184415686434, 2);
  sqcRZGate(q, -0.07066654393894112, 2);
  sqcRYGate(q, -2.266064603321102, 3);
  sqcRZGate(q, -0.42775227141429706, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.9006638216349256, 0);
  sqcRZGate(q, -1.9708238331521029, 0);
  sqcRYGate(q, -1.9671028678532745, 1);
  sqcRZGate(q, -3.0954469597934304, 1);
  sqcRYGate(q, -0.35906149182917524, 2);
  sqcRZGate(q, 3.076781323202045, 2);
  sqcRYGate(q, 0.43494732014359444, 3);
  sqcRZGate(q, 2.4557074889971977, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0136264528210397, 0);
  sqcRZGate(q, -0.41833805269268604, 0);
  sqcRYGate(q, -2.397632510576142, 1);
  sqcRZGate(q, -1.4061520669660679, 1);
  sqcRYGate(q, -1.0619518523100426, 2);
  sqcRZGate(q, 2.4502884155563702, 2);
  sqcRYGate(q, -0.9791309423643249, 3);
  sqcRZGate(q, -1.355099480378212, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0915748649003305, 0);
  sqcRZGate(q, -1.7880620194921324, 0);
  sqcRYGate(q, -1.7994319319008927, 1);
  sqcRZGate(q, 0.027448268715313508, 1);
  sqcRYGate(q, 1.1971068578941957, 2);
  sqcRZGate(q, 0.5264124404823719, 2);
  sqcRYGate(q, -0.7753668001854656, 3);
  sqcRZGate(q, 1.3947039036207398, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0059438371186638, 0);
  sqcRZGate(q, -2.3735609380468534, 0);
  sqcRYGate(q, -1.9354300858058704, 1);
  sqcRZGate(q, -2.262161922966477, 1);
  sqcRYGate(q, 2.569863448100005, 2);
  sqcRZGate(q, 1.679459395244089, 2);
  sqcRYGate(q, -2.103810617452826, 3);
  sqcRZGate(q, 0.58893492251085, 3);

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
