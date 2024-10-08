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

  sqcRYGate(q, -3.023976069996557, 0);
  sqcRZGate(q, 0.5764926805991056, 0);
  sqcRYGate(q, 2.378889051420513, 1);
  sqcRZGate(q, -2.595813656006688, 1);
  sqcRYGate(q, 2.334163298771912, 2);
  sqcRZGate(q, -0.7980434235104953, 2);
  sqcRYGate(q, -1.126675076357917, 3);
  sqcRZGate(q, -2.537902853741765, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8341844509565278, 0);
  sqcRZGate(q, -0.8069301310504845, 0);
  sqcRYGate(q, -1.8233119631424517, 1);
  sqcRZGate(q, -2.165098273624526, 1);
  sqcRYGate(q, 1.4403039619405698, 2);
  sqcRZGate(q, 1.4451260090135385, 2);
  sqcRYGate(q, -2.08253918380585, 3);
  sqcRZGate(q, 0.7971405955287248, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3883227430740925, 0);
  sqcRZGate(q, 1.8598434146278962, 0);
  sqcRYGate(q, 0.9969163013241195, 1);
  sqcRZGate(q, -1.3465890853101286, 1);
  sqcRYGate(q, 2.219311771208397, 2);
  sqcRZGate(q, -2.172545721932785, 2);
  sqcRYGate(q, 0.4187040742302215, 3);
  sqcRZGate(q, -2.8892241811699373, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.2664383413619436, 0);
  sqcRZGate(q, 2.774120223338532, 0);
  sqcRYGate(q, -0.20130674985927666, 1);
  sqcRZGate(q, 1.6872751066353961, 1);
  sqcRYGate(q, -0.9011426625240251, 2);
  sqcRZGate(q, -2.38477726107573, 2);
  sqcRYGate(q, 0.20513327181599886, 3);
  sqcRZGate(q, 0.6890360643243243, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.10654466976705379, 0);
  sqcRZGate(q, 0.8012692969866911, 0);
  sqcRYGate(q, 2.4269315921304586, 1);
  sqcRZGate(q, 2.497958649618089, 1);
  sqcRYGate(q, 1.3218323444005333, 2);
  sqcRZGate(q, -0.8411757327072729, 2);
  sqcRYGate(q, 1.9013228425649507, 3);
  sqcRZGate(q, -1.1272697067202442, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3840538822171617, 0);
  sqcRZGate(q, 2.668885896782889, 0);
  sqcRYGate(q, -1.2925265303655074, 1);
  sqcRZGate(q, 2.074357280946149, 1);
  sqcRYGate(q, 1.4436076099099209, 2);
  sqcRZGate(q, -1.7091505277964836, 2);
  sqcRYGate(q, 2.5936185881308833, 3);
  sqcRZGate(q, -0.05165934608938282, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2726970472841508, 0);
  sqcRZGate(q, 3.0285042174946013, 0);
  sqcRYGate(q, 1.9122922265299906, 1);
  sqcRZGate(q, 0.5669943489851839, 1);
  sqcRYGate(q, -1.3577119560447652, 2);
  sqcRZGate(q, 0.17111286176621776, 2);
  sqcRYGate(q, 0.5389026423407958, 3);
  sqcRZGate(q, -1.1988191817144678, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.3460553271965217, 0);
  sqcRZGate(q, -2.5659466541506877, 0);
  sqcRYGate(q, 0.13744724138736597, 1);
  sqcRZGate(q, -1.3319352402659976, 1);
  sqcRYGate(q, -2.10757270853229, 2);
  sqcRZGate(q, 1.484169340896922, 2);
  sqcRYGate(q, -2.589591809064233, 3);
  sqcRZGate(q, 3.015288103328257, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.8042993375560281, 0);
  sqcRZGate(q, -0.2606494169100459, 0);
  sqcRYGate(q, 3.044288981140345, 1);
  sqcRZGate(q, -1.0796443979435741, 1);
  sqcRYGate(q, 3.0531653153804865, 2);
  sqcRZGate(q, 1.267784247264598, 2);
  sqcRYGate(q, -2.6443410100943683, 3);
  sqcRZGate(q, -1.7913326085535302, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.1114596151192653, 0);
  sqcRZGate(q, 1.5186048314926879, 0);
  sqcRYGate(q, 2.387822185586992, 1);
  sqcRZGate(q, -2.8196759370674678, 1);
  sqcRYGate(q, 2.3049791418134467, 2);
  sqcRZGate(q, 0.37195919104229674, 2);
  sqcRYGate(q, -2.22043775545934, 3);
  sqcRZGate(q, 1.56832042145831, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.34114115876393036, 0);
  sqcRZGate(q, 0.8971834971252504, 0);
  sqcRYGate(q, 1.8017045867341182, 1);
  sqcRZGate(q, 1.4860507440403652, 1);
  sqcRYGate(q, 2.317841432485302, 2);
  sqcRZGate(q, -1.0714271215049207, 2);
  sqcRYGate(q, -2.4818860989657354, 3);
  sqcRZGate(q, 1.6572067392487408, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.226648562215503, 0);
  sqcRZGate(q, 1.6024858221943594, 0);
  sqcRYGate(q, -0.31211927297627884, 1);
  sqcRZGate(q, -0.3043254709604096, 1);
  sqcRYGate(q, 2.670907455851557, 2);
  sqcRZGate(q, 2.3385245479410544, 2);
  sqcRYGate(q, 1.7371683480892903, 3);
  sqcRZGate(q, 2.6813348864090583, 3);

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
