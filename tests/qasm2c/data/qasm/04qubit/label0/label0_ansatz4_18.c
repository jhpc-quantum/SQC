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

  sqcRYGate(q, 1.0344013398397733, 0);
  sqcRZGate(q, 1.3963808787797958, 0);
  sqcRYGate(q, 2.564699867014522, 1);
  sqcRZGate(q, 2.1291610366294753, 1);
  sqcRYGate(q, 0.4756486433853837, 2);
  sqcRZGate(q, 2.466096309593512, 2);
  sqcRYGate(q, -0.41491711592124675, 3);
  sqcRZGate(q, -1.813359042191136, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.9641576168469101, 0);
  sqcRZGate(q, -0.3176794597532844, 0);
  sqcRYGate(q, 0.9218613819627022, 1);
  sqcRZGate(q, -0.45967245681513075, 1);
  sqcRYGate(q, 1.7045147938863277, 2);
  sqcRZGate(q, -2.899489916374555, 2);
  sqcRYGate(q, -1.291227395085838, 3);
  sqcRZGate(q, 2.026877805688522, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4402533405299047, 0);
  sqcRZGate(q, 2.9503988558831926, 0);
  sqcRYGate(q, 1.009453475738188, 1);
  sqcRZGate(q, -1.2123333099176203, 1);
  sqcRYGate(q, -0.9929707041410994, 2);
  sqcRZGate(q, 1.853451896161384, 2);
  sqcRYGate(q, -3.0886585015863535, 3);
  sqcRZGate(q, -1.774697454211106, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1412758037029267, 0);
  sqcRZGate(q, -2.224208133485157, 0);
  sqcRYGate(q, -0.6538924348249608, 1);
  sqcRZGate(q, 3.1295207541043233, 1);
  sqcRYGate(q, 1.7657277127099382, 2);
  sqcRZGate(q, -0.2939008969522811, 2);
  sqcRYGate(q, -2.4505822708066423, 3);
  sqcRZGate(q, 0.9679517302496645, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2755027417203797, 0);
  sqcRZGate(q, -2.737436837758271, 0);
  sqcRYGate(q, -2.58083409181068, 1);
  sqcRZGate(q, -1.487576146427777, 1);
  sqcRYGate(q, 1.4415393496643332, 2);
  sqcRZGate(q, 0.5465988969668073, 2);
  sqcRYGate(q, 1.3597282578049397, 3);
  sqcRZGate(q, -1.9790940585718957, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.1695453644063738, 0);
  sqcRZGate(q, -1.9612518940802008, 0);
  sqcRYGate(q, -1.7725580487579817, 1);
  sqcRZGate(q, 2.459023559897523, 1);
  sqcRYGate(q, 3.1069281213052045, 2);
  sqcRZGate(q, 0.09497863099236348, 2);
  sqcRYGate(q, 0.6004697260247923, 3);
  sqcRZGate(q, -1.5340469273235895, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.26941231439492697, 0);
  sqcRZGate(q, -2.468553612497197, 0);
  sqcRYGate(q, 1.3836008421077137, 1);
  sqcRZGate(q, 2.1804532096391718, 1);
  sqcRYGate(q, -0.3143229258069911, 2);
  sqcRZGate(q, 2.2314767088535223, 2);
  sqcRYGate(q, -1.6229040095627267, 3);
  sqcRZGate(q, 1.1218872337576613, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.8601627656351396, 0);
  sqcRZGate(q, -0.6887637637467529, 0);
  sqcRYGate(q, -2.8091163221419646, 1);
  sqcRZGate(q, 2.003412607373963, 1);
  sqcRYGate(q, 1.9403233875001193, 2);
  sqcRZGate(q, -0.5101827784919393, 2);
  sqcRYGate(q, 1.5939822810819786, 3);
  sqcRZGate(q, -2.6131697257258444, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.193914439712997, 0);
  sqcRZGate(q, -2.179246030092206, 0);
  sqcRYGate(q, -1.0891768441510692, 1);
  sqcRZGate(q, 0.289974345465481, 1);
  sqcRYGate(q, 2.385288224913549, 2);
  sqcRZGate(q, -2.531244376070929, 2);
  sqcRYGate(q, -0.003366026466845362, 3);
  sqcRZGate(q, 1.6960478380411468, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6045684089162853, 0);
  sqcRZGate(q, -2.731727305540158, 0);
  sqcRYGate(q, 2.040545131664783, 1);
  sqcRZGate(q, -0.3859791605905283, 1);
  sqcRYGate(q, -1.989806788904074, 2);
  sqcRZGate(q, 2.360253000957343, 2);
  sqcRYGate(q, -1.806881324376106, 3);
  sqcRZGate(q, -1.7296653927380874, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.2704013217574577, 0);
  sqcRZGate(q, -0.13545607242534619, 0);
  sqcRYGate(q, 3.1406834092913853, 1);
  sqcRZGate(q, 2.760404581132185, 1);
  sqcRYGate(q, 1.9164226348925766, 2);
  sqcRZGate(q, 0.09584628513734339, 2);
  sqcRYGate(q, 2.548712358019078, 3);
  sqcRZGate(q, -0.5101716144460458, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7184643818983929, 0);
  sqcRZGate(q, 0.6278990096176447, 0);
  sqcRYGate(q, -0.542773537787954, 1);
  sqcRZGate(q, -0.9086160456443275, 1);
  sqcRYGate(q, -2.653396976871707, 2);
  sqcRZGate(q, -2.9350436605665227, 2);
  sqcRYGate(q, 2.4239150054815317, 3);
  sqcRZGate(q, -3.022648574636915, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.2626259215416022, 0);
  sqcRZGate(q, -0.5223367439067469, 0);
  sqcRYGate(q, 1.8297828169160892, 1);
  sqcRZGate(q, 0.31579790066498986, 1);
  sqcRYGate(q, 0.14159861139823735, 2);
  sqcRZGate(q, -2.9981978921914756, 2);
  sqcRYGate(q, 0.6585011005466291, 3);
  sqcRZGate(q, -1.3866983671958346, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.640443740816548, 0);
  sqcRZGate(q, 2.1406874445217774, 0);
  sqcRYGate(q, -2.471140072453287, 1);
  sqcRZGate(q, -2.456966488478696, 1);
  sqcRYGate(q, -0.6920602864859946, 2);
  sqcRZGate(q, -0.12217873360937268, 2);
  sqcRYGate(q, -2.965098596060033, 3);
  sqcRZGate(q, -2.0389778324252044, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0870276044405776, 0);
  sqcRZGate(q, 2.487564612110732, 0);
  sqcRYGate(q, 1.1541336427873075, 1);
  sqcRZGate(q, -1.2991299231404954, 1);
  sqcRYGate(q, -1.5427172785446512, 2);
  sqcRZGate(q, -2.741125353045915, 2);
  sqcRYGate(q, 0.03840401696699036, 3);
  sqcRZGate(q, -2.210001634889358, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.917228907393545, 0);
  sqcRZGate(q, 1.1044449811241737, 0);
  sqcRYGate(q, -1.1001543011060702, 1);
  sqcRZGate(q, 0.967074776309345, 1);
  sqcRYGate(q, -1.4956292576850103, 2);
  sqcRZGate(q, -2.7689766595935335, 2);
  sqcRYGate(q, -2.740725887313512, 3);
  sqcRZGate(q, 0.5029992304987269, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5811924905686544, 0);
  sqcRZGate(q, -2.682520488781376, 0);
  sqcRYGate(q, -1.1573187998352958, 1);
  sqcRZGate(q, -2.873827137092734, 1);
  sqcRYGate(q, 0.8737036826478113, 2);
  sqcRZGate(q, -1.8600108372534407, 2);
  sqcRYGate(q, -1.0559904071333828, 3);
  sqcRZGate(q, 1.317714898734113, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.0755791198297744, 0);
  sqcRZGate(q, 0.7493275960394283, 0);
  sqcRYGate(q, -3.0503478988583397, 1);
  sqcRZGate(q, 1.6393870522140634, 1);
  sqcRYGate(q, 1.6315449960807855, 2);
  sqcRZGate(q, 1.7571832474273679, 2);
  sqcRYGate(q, -1.5099596077111759, 3);
  sqcRZGate(q, 1.5524280316173495, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1755089118668083, 0);
  sqcRZGate(q, -1.6923860929589338, 0);
  sqcRYGate(q, -1.3959168410179321, 1);
  sqcRZGate(q, 0.3043821022479758, 1);
  sqcRYGate(q, 1.499917060215387, 2);
  sqcRZGate(q, -2.474941315009189, 2);
  sqcRYGate(q, -3.0778060613921085, 3);
  sqcRZGate(q, -1.9386014096441926, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0808758135300747, 0);
  sqcRZGate(q, 0.5178678807978319, 0);
  sqcRYGate(q, 0.7097989565100908, 1);
  sqcRZGate(q, -1.3100142399391959, 1);
  sqcRYGate(q, -2.5884271633040075, 2);
  sqcRZGate(q, 0.3710711029347145, 2);
  sqcRYGate(q, -0.6398871601093985, 3);
  sqcRZGate(q, 1.8079265370377122, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7849510048744937, 0);
  sqcRZGate(q, -2.7243444448895255, 0);
  sqcRYGate(q, -1.621310801238583, 1);
  sqcRZGate(q, 1.788190511613344, 1);
  sqcRYGate(q, -1.8808478111210016, 2);
  sqcRZGate(q, 2.625194262684035, 2);
  sqcRYGate(q, 1.9339618851509233, 3);
  sqcRZGate(q, -2.04685265162277, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8921373848613796, 0);
  sqcRZGate(q, 0.26847460277533924, 0);
  sqcRYGate(q, -3.114880839373797, 1);
  sqcRZGate(q, 1.0052432420115425, 1);
  sqcRYGate(q, 0.4340714140361035, 2);
  sqcRZGate(q, -3.119895096861428, 2);
  sqcRYGate(q, -1.1263811778309973, 3);
  sqcRZGate(q, 2.8424551308671733, 3);

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
