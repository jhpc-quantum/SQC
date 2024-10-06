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

  sqcRYGate(q, -2.650363877758421, 0);
  sqcRZGate(q, -1.8870091535309144, 0);
  sqcRYGate(q, 2.216702210609724, 1);
  sqcRZGate(q, -2.5403980473153096, 1);
  sqcRYGate(q, -2.5129644712632078, 2);
  sqcRZGate(q, 0.7310723289085423, 2);
  sqcRYGate(q, 1.6004832534380027, 3);
  sqcRZGate(q, 1.7811818930057723, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3843198595549155, 0);
  sqcRZGate(q, -0.5483651932045112, 0);
  sqcRYGate(q, 2.9908247601280604, 1);
  sqcRZGate(q, 1.7629725076591007, 1);
  sqcRYGate(q, 0.8289897049410042, 2);
  sqcRZGate(q, 2.443779812729992, 2);
  sqcRYGate(q, -2.9656049427435414, 3);
  sqcRZGate(q, -2.871410347817024, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.09809635290669227, 0);
  sqcRZGate(q, -0.5416506431531074, 0);
  sqcRYGate(q, 1.319169691041842, 1);
  sqcRZGate(q, 1.1456679175174633, 1);
  sqcRYGate(q, -1.7615947811989088, 2);
  sqcRZGate(q, -2.85743064460197, 2);
  sqcRYGate(q, 2.4970926811989487, 3);
  sqcRZGate(q, -1.463154246331958, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.355084867746287, 0);
  sqcRZGate(q, -1.5779891479450112, 0);
  sqcRYGate(q, 1.9817871968026337, 1);
  sqcRZGate(q, 0.4494014693299855, 1);
  sqcRYGate(q, 1.7446152446820804, 2);
  sqcRZGate(q, -1.9314077457502623, 2);
  sqcRYGate(q, -2.6712928285973208, 3);
  sqcRZGate(q, 0.4071490479029907, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5754410802961967, 0);
  sqcRZGate(q, -1.9244164476581114, 0);
  sqcRYGate(q, -2.798821415147345, 1);
  sqcRZGate(q, 1.7769544365884182, 1);
  sqcRYGate(q, -1.0921226488039162, 2);
  sqcRZGate(q, 2.067580848036073, 2);
  sqcRYGate(q, -0.0830374869634536, 3);
  sqcRZGate(q, -2.570925693207871, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.33158557556920787, 0);
  sqcRZGate(q, 2.2614189692532345, 0);
  sqcRYGate(q, -0.8066609812746872, 1);
  sqcRZGate(q, -2.51354212848881, 1);
  sqcRYGate(q, 1.1644137242178498, 2);
  sqcRZGate(q, 1.6828595988964667, 2);
  sqcRYGate(q, -0.28720541111654607, 3);
  sqcRZGate(q, -1.706247376199281, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7440842559534928, 0);
  sqcRZGate(q, 2.2422699055594686, 0);
  sqcRYGate(q, 1.5043758446891369, 1);
  sqcRZGate(q, 0.5313810031639865, 1);
  sqcRYGate(q, -0.4139033215564878, 2);
  sqcRZGate(q, -2.8348057028154314, 2);
  sqcRYGate(q, 0.06545912952177244, 3);
  sqcRZGate(q, 0.4206585877351751, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5867188848015576, 0);
  sqcRZGate(q, -1.9655729995155176, 0);
  sqcRYGate(q, -2.6756094150606793, 1);
  sqcRZGate(q, -2.1833036705533253, 1);
  sqcRYGate(q, -1.2602635596187641, 2);
  sqcRZGate(q, -1.1316856834676239, 2);
  sqcRYGate(q, -2.011927966585098, 3);
  sqcRZGate(q, -0.5011699414315807, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.0005601533868167826, 0);
  sqcRZGate(q, 0.01908587840626339, 0);
  sqcRYGate(q, 1.3799403263498025, 1);
  sqcRZGate(q, -1.5049217588522528, 1);
  sqcRYGate(q, 0.7238948011395556, 2);
  sqcRZGate(q, -2.18369001686527, 2);
  sqcRYGate(q, -1.1566980610734223, 3);
  sqcRZGate(q, 2.0843465808904176, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1869601775290017, 0);
  sqcRZGate(q, 2.549821372087933, 0);
  sqcRYGate(q, -1.7376442856728087, 1);
  sqcRZGate(q, -2.29111259122554, 1);
  sqcRYGate(q, -1.6600554486585268, 2);
  sqcRZGate(q, -2.862805288407261, 2);
  sqcRYGate(q, 1.095152679713625, 3);
  sqcRZGate(q, -0.6984395769632588, 3);

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
