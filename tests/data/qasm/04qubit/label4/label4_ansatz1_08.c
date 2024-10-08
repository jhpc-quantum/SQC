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

  sqcRYGate(q, 1.34103739992298, 0);
  sqcRZGate(q, 2.736626430555056, 0);
  sqcRYGate(q, 2.9913351154250742, 1);
  sqcRZGate(q, 0.9390441083813851, 1);
  sqcRYGate(q, 1.0586563489921157, 2);
  sqcRZGate(q, 0.5484617608146706, 2);
  sqcRYGate(q, 2.0035534501466166, 3);
  sqcRZGate(q, 1.3963591759324956, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.3023765797558673, 0);
  sqcRZGate(q, -0.7215468783850193, 0);
  sqcRYGate(q, 1.0920498232001499, 1);
  sqcRZGate(q, 2.359252261829396, 1);
  sqcRYGate(q, 0.2535359938951674, 2);
  sqcRZGate(q, -0.148224483251003, 2);
  sqcRYGate(q, -0.844254694827189, 3);
  sqcRZGate(q, -2.7281709161248737, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.6281071974844172, 0);
  sqcRZGate(q, -0.08180754454717752, 0);
  sqcRYGate(q, -1.6035018104493384, 1);
  sqcRZGate(q, -1.0944584134383295, 1);
  sqcRYGate(q, -0.37298021922362407, 2);
  sqcRZGate(q, 0.9838455565415449, 2);
  sqcRYGate(q, -2.264668295787648, 3);
  sqcRZGate(q, -1.5295245139075226, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9563520460989023, 0);
  sqcRZGate(q, 0.08624543673415185, 0);
  sqcRYGate(q, 1.4642315175163354, 1);
  sqcRZGate(q, -1.6085020331169826, 1);
  sqcRYGate(q, -1.5133337256938988, 2);
  sqcRZGate(q, 2.843615087104626, 2);
  sqcRYGate(q, -2.6762443299041982, 3);
  sqcRZGate(q, 0.8128009398013826, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.8584959145650504, 0);
  sqcRZGate(q, -2.262800258577493, 0);
  sqcRYGate(q, 2.6617457433713754, 1);
  sqcRZGate(q, 2.799761967542934, 1);
  sqcRYGate(q, 2.711771607695568, 2);
  sqcRZGate(q, -1.9595415352877765, 2);
  sqcRYGate(q, -2.390777828580774, 3);
  sqcRZGate(q, 3.0451557765859922, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7097193563314455, 0);
  sqcRZGate(q, -0.5624174167136482, 0);
  sqcRYGate(q, -2.6016820485812175, 1);
  sqcRZGate(q, -2.5654206512040805, 1);
  sqcRYGate(q, 0.828286495836771, 2);
  sqcRZGate(q, 0.8298415097040603, 2);
  sqcRYGate(q, 2.859418541416914, 3);
  sqcRZGate(q, 0.8415254758296502, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6070187280811494, 0);
  sqcRZGate(q, 0.38853068516854533, 0);
  sqcRYGate(q, 1.3946995131236184, 1);
  sqcRZGate(q, 0.8933250891527029, 1);
  sqcRYGate(q, 0.0782264511053361, 2);
  sqcRZGate(q, -2.1279007446207308, 2);
  sqcRYGate(q, -1.2782963399996723, 3);
  sqcRZGate(q, 1.7941503476758325, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.064041235209058, 0);
  sqcRZGate(q, -0.2939993202259506, 0);
  sqcRYGate(q, -1.198289362239466, 1);
  sqcRZGate(q, -0.3488857685951844, 1);
  sqcRYGate(q, 0.2441461113688388, 2);
  sqcRZGate(q, 1.3560242722049605, 2);
  sqcRYGate(q, 0.9074472858311319, 3);
  sqcRZGate(q, -1.4099361641893156, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.4718206371767164, 0);
  sqcRZGate(q, -2.4096630958790133, 0);
  sqcRYGate(q, 1.0085352444271922, 1);
  sqcRZGate(q, -2.55524392206911, 1);
  sqcRYGate(q, -2.380507128907213, 2);
  sqcRZGate(q, -1.7450658024302317, 2);
  sqcRYGate(q, -2.9019409242932586, 3);
  sqcRZGate(q, 0.05892951658819179, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0563217556856292, 0);
  sqcRZGate(q, 2.6411217649688896, 0);
  sqcRYGate(q, -0.005079603725563153, 1);
  sqcRZGate(q, 1.118435114402959, 1);
  sqcRYGate(q, 2.391296140115352, 2);
  sqcRZGate(q, -1.7329581821757634, 2);
  sqcRYGate(q, -1.6619889213338948, 3);
  sqcRZGate(q, 2.492387172943213, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.1175592669673744, 0);
  sqcRZGate(q, -2.815726370819911, 0);
  sqcRYGate(q, 2.2886977945904867, 1);
  sqcRZGate(q, -1.1882105749191467, 1);
  sqcRYGate(q, -0.8826978473043733, 2);
  sqcRZGate(q, -2.0727284741479837, 2);
  sqcRYGate(q, 2.2632019049557544, 3);
  sqcRZGate(q, 1.1376810486689264, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.139594465758314, 0);
  sqcRZGate(q, 2.690736847175, 0);
  sqcRYGate(q, 0.9078103435281624, 1);
  sqcRZGate(q, -1.264798885157684, 1);
  sqcRYGate(q, 1.8126938974457485, 2);
  sqcRZGate(q, -3.0830526437712242, 2);
  sqcRYGate(q, 2.626565745988789, 3);
  sqcRZGate(q, -0.7506745673636877, 3);

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
