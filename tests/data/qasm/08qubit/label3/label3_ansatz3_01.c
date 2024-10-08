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

  sqcRYGate(q, -1.1405717289487418e-07, 0);
  sqcRZGate(q, -0.6852178656801229, 0);
  sqcRYGate(q, 2.98290614672134, 1);
  sqcRZGate(q, -3.141553137771769, 1);
  sqcRYGate(q, 1.5206530462229433, 2);
  sqcRZGate(q, 2.8789214279121126e-07, 2);
  sqcRYGate(q, -0.12236182470669771, 3);
  sqcRZGate(q, -3.141582545456583, 3);
  sqcRYGate(q, 2.420009112864107, 4);
  sqcRZGate(q, -3.5144043568635656e-06, 4);
  sqcRYGate(q, 3.141589120092395, 5);
  sqcRZGate(q, 0.3961500245859702, 5);
  sqcRYGate(q, 1.5241544236551376, 6);
  sqcRZGate(q, -1.5707959532079665, 6);
  sqcRYGate(q, -1.5707965661168257, 7);
  sqcRZGate(q, 2.244299431588739, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.9640432924461493e-07, 0);
  sqcRZGate(q, -2.2489316178595096, 0);
  sqcRYGate(q, -0.6658300757172447, 1);
  sqcRZGate(q, -3.1415776313476624, 1);
  sqcRYGate(q, -1.6435221511907272, 2);
  sqcRZGate(q, 6.491637341454749e-06, 2);
  sqcRYGate(q, -1.5940411694574206, 3);
  sqcRZGate(q, 2.6301369704384575e-07, 3);
  sqcRYGate(q, -2.957198324833609, 4);
  sqcRZGate(q, -0.33281211159467455, 4);
  sqcRYGate(q, 1.2190038930311493, 5);
  sqcRZGate(q, -1.5707964643917853, 5);
  sqcRYGate(q, -1.5707967316376017, 6);
  sqcRZGate(q, 1.5707965783389266, 6);
  sqcRYGate(q, -1.0710681586090232e-07, 7);
  sqcRZGate(q, 0.8972932073966651, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.9236346238016138e-08, 0);
  sqcRZGate(q, 1.806042995421559, 0);
  sqcRYGate(q, 0.14084236358447397, 1);
  sqcRZGate(q, 3.1415924681051846, 1);
  sqcRYGate(q, -0.11896841981051297, 2);
  sqcRZGate(q, -3.141560415541332, 2);
  sqcRYGate(q, -2.5600562803994333, 3);
  sqcRZGate(q, -1.5707960732581359, 3);
  sqcRYGate(q, -1.0670355443664903e-07, 4);
  sqcRZGate(q, -2.8087938507611647, 4);
  sqcRYGate(q, -1.5707965354749756, 5);
  sqcRZGate(q, -5.424324132278985e-08, 5);
  sqcRYGate(q, -1.570796396833349, 6);
  sqcRZGate(q, 4.67973559724951e-05, 6);
  sqcRYGate(q, -1.5707962014040817, 7);
  sqcRZGate(q, 1.5707935381556355, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.8170522118159733e-07, 0);
  sqcRZGate(q, 1.2880135093337834, 0);
  sqcRYGate(q, 0.8740544013374799, 1);
  sqcRZGate(q, -1.5707877604272982, 1);
  sqcRYGate(q, -3.126656113127172, 2);
  sqcRZGate(q, -1.5707635284237889, 2);
  sqcRYGate(q, -1.5707961895900313, 3);
  sqcRZGate(q, 3.141586822786155, 3);
  sqcRYGate(q, -3.077807524934279, 4);
  sqcRZGate(q, 3.1415767307103284, 4);
  sqcRYGate(q, 1.5593326116724358, 5);
  sqcRZGate(q, 2.6188661650568137, 5);
  sqcRYGate(q, -3.136878852173155, 6);
  sqcRZGate(q, 4.5106432859931544e-05, 6);
  sqcRYGate(q, 1.4310835862573406, 7);
  sqcRZGate(q, 0.8978479479179684, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.5707894806205278, 0);
  sqcRZGate(q, -1.6040668158430618, 0);
  sqcRYGate(q, -1.5707901330523908, 1);
  sqcRZGate(q, 1.537523075804296, 1);
  sqcRYGate(q, 1.5708032721194556, 2);
  sqcRZGate(q, 1.53752600920511, 2);
  sqcRYGate(q, 1.5707878061669822, 3);
  sqcRZGate(q, -0.03327347407694692, 3);
  sqcRYGate(q, -1.5708032005717412, 4);
  sqcRZGate(q, -1.6040669210864686, 4);
  sqcRYGate(q, 3.1415828056011534, 5);
  sqcRZGate(q, -0.5559998917117592, 5);
  sqcRYGate(q, 1.5708030595486262, 6);
  sqcRZGate(q, 1.5375258061764057, 6);
  sqcRYGate(q, 3.1415817353761795, 7);
  sqcRZGate(q, -0.7062214951020443, 7);

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
