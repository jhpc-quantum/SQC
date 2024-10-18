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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 3.11550024336474, 0);
  sqcRZGate(q, -1.578000021045446, 0);
  sqcRYGate(q, -3.141547587278503, 1);
  sqcRZGate(q, 2.2584319956137624, 1);
  sqcRYGate(q, -1.3809133019826798, 2);
  sqcRZGate(q, 0.24889655648724232, 2);
  sqcRYGate(q, 0.23339742622282184, 3);
  sqcRZGate(q, -2.078133031244188, 3);
  sqcRYGate(q, 3.1415915696579653, 4);
  sqcRZGate(q, 0.034683795467381984, 4);
  sqcRYGate(q, -3.141591626533543, 5);
  sqcRZGate(q, -1.4534452367725734, 5);
  sqcRYGate(q, 2.9021419810043985, 6);
  sqcRZGate(q, 1.2847479630171594, 6);
  sqcRYGate(q, 1.4655897344349622, 7);
  sqcRZGate(q, 2.896541638694579, 7);
  sqcRYGate(q, -0.05449200671794726, 8);
  sqcRZGate(q, -0.0010018584376876014, 8);
  sqcRYGate(q, 3.141592370409662, 9);
  sqcRZGate(q, -1.8370772218842444, 9);
  sqcRYGate(q, -1.5516519454884385, 10);
  sqcRZGate(q, -3.0421361884877522, 10);
  sqcRYGate(q, 0.24987205862718564, 11);
  sqcRZGate(q, 1.4506220014394353, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.2511175449517662, 0);
  sqcRZGate(q, -2.981143459365303, 0);
  sqcRYGate(q, -1.5705885929489556, 1);
  sqcRZGate(q, -2.1494717812764467e-05, 1);
  sqcRYGate(q, 1.3826074109973028, 2);
  sqcRZGate(q, -0.05591365389276782, 2);
  sqcRYGate(q, -3.0511768028042345, 3);
  sqcRZGate(q, 1.0528465450078643, 3);
  sqcRYGate(q, 1.5706735701191863, 4);
  sqcRZGate(q, 0.6514377829016886, 4);
  sqcRYGate(q, -1.5390847662471173e-05, 5);
  sqcRZGate(q, -1.8124983125340686, 5);
  sqcRYGate(q, 3.0535529235436027, 6);
  sqcRZGate(q, -2.365598965913546, 6);
  sqcRYGate(q, 1.469014140436904, 7);
  sqcRZGate(q, -1.3540915263902358, 7);
  sqcRYGate(q, 1.692840558838344, 8);
  sqcRZGate(q, 3.1401256687187127, 8);
  sqcRYGate(q, 0.00012465421773022459, 9);
  sqcRZGate(q, 2.502701218798317, 9);
  sqcRYGate(q, 1.5510328648282758, 10);
  sqcRZGate(q, -1.6143951946515984, 10);
  sqcRYGate(q, -3.1026184696848063, 11);
  sqcRZGate(q, 3.1047147553370955, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.141536613697705, 0);
  sqcRZGate(q, -2.9663115129532445, 0);
  sqcRYGate(q, -1.5710201679120628, 1);
  sqcRZGate(q, -3.136905605197019, 1);
  sqcRYGate(q, 0.08505948706689086, 2);
  sqcRZGate(q, 1.570553360168554, 2);
  sqcRYGate(q, -0.25838085120799165, 3);
  sqcRZGate(q, 1.5708660487745996, 3);
  sqcRYGate(q, -3.1415626992044565, 4);
  sqcRZGate(q, -0.919357660958635, 4);
  sqcRYGate(q, 0.2105561423720106, 5);
  sqcRZGate(q, -1.5707113943225435, 5);
  sqcRYGate(q, -1.3264340445366997e-05, 6);
  sqcRZGate(q, 2.0687034794073353, 6);
  sqcRYGate(q, 1.8061345752329316e-07, 7);
  sqcRZGate(q, 2.960694503174743, 7);
  sqcRYGate(q, 1.933690451133627, 8);
  sqcRZGate(q, 0.005401609781645438, 8);
  sqcRYGate(q, -1.5712898330019698, 9);
  sqcRZGate(q, -1.5118590432553827, 9);
  sqcRYGate(q, -2.9215306573447344, 10);
  sqcRZGate(q, -0.03717997703109472, 10);
  sqcRYGate(q, 3.1168194730074186, 11);
  sqcRZGate(q, -3.0524444000268898, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5707973219978033, 0);
  sqcRZGate(q, -3.1415774347948866, 0);
  sqcRYGate(q, 1.5707982681061192, 1);
  sqcRZGate(q, -3.1415703300426747, 1);
  sqcRYGate(q, -1.5707820168138165, 2);
  sqcRZGate(q, -2.0748250486850244e-05, 2);
  sqcRYGate(q, 1.5707883917887198, 3);
  sqcRZGate(q, -2.572386399801729e-05, 3);
  sqcRYGate(q, 1.5707073957456252, 4);
  sqcRZGate(q, -1.5709023290312862, 4);
  sqcRYGate(q, 1.5708108590303107, 5);
  sqcRZGate(q, -2.147968340882045e-05, 5);
  sqcRYGate(q, -1.570801935378204, 6);
  sqcRZGate(q, -5.5979837654263065e-08, 6);
  sqcRYGate(q, 1.5707763515221074, 7);
  sqcRZGate(q, -3.1415923884672274, 7);
  sqcRYGate(q, 1.5708314195100885, 8);
  sqcRZGate(q, 3.1415188452699057, 8);
  sqcRYGate(q, 3.132507979634646, 9);
  sqcRZGate(q, 1.6297069697599742, 9);
  sqcRYGate(q, 1.570667612901443, 10);
  sqcRZGate(q, 1.0696284933331413e-06, 10);
  sqcRYGate(q, -1.5707539222331663, 11);
  sqcRZGate(q, 4.4106548724442973e-07, 11);

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
