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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 1.3402478038062577, 0);
  sqcRYGate(q, -2.154952962784735, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6932835268357573, 0);
  sqcRYGate(q, -1.8949194656085255, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9457671549543147, 2);
  sqcRYGate(q, -2.8157897015271796, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0703555809683854, 2);
  sqcRYGate(q, -2.364375214970787, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.438995430727479, 4);
  sqcRYGate(q, 0.8672428181871848, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.455191812651589, 4);
  sqcRYGate(q, -1.5643267714308964, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2973719119018035, 6);
  sqcRYGate(q, -2.326235244331275, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.037924243660103, 6);
  sqcRYGate(q, 0.5218581268598154, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.790871884719629, 1);
  sqcRYGate(q, 2.018981730461412, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9583836736095181, 1);
  sqcRYGate(q, 1.2514892927924386, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8279094529042405, 3);
  sqcRYGate(q, -2.4164835403653373, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6149377684879684, 3);
  sqcRYGate(q, -1.061512961321344, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5631266466305886, 5);
  sqcRYGate(q, 0.6438993463770314, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3469511963494827, 5);
  sqcRYGate(q, 1.9235543546353295, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9242090028888519, 0);
  sqcRYGate(q, -0.5464503644763576, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.51741634685867, 0);
  sqcRYGate(q, -2.71240231645207, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2317026487885707, 2);
  sqcRYGate(q, -2.1563508739843753, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8582328367000915, 2);
  sqcRYGate(q, -2.9792675586032566, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5987206402350105, 4);
  sqcRYGate(q, 0.5193856273241408, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2291554318411535, 4);
  sqcRYGate(q, -0.4621163683119116, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5276007450037319, 6);
  sqcRYGate(q, 1.6697552860663052, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5175241643351525, 6);
  sqcRYGate(q, 1.6957653441101408, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0838535864366023, 1);
  sqcRYGate(q, -1.768571406981461, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5722252604695353, 1);
  sqcRYGate(q, 0.002162961040053979, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8738054004225306, 3);
  sqcRYGate(q, -3.0555286836276636, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.811660189923199, 3);
  sqcRYGate(q, 2.013214278811602, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.45226305361294045, 5);
  sqcRYGate(q, -2.857729939230441, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8310472169659248, 5);
  sqcRYGate(q, 0.7324331491847206, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3333505402211765, 0);
  sqcRYGate(q, 1.958330889972446, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.783089033464202, 0);
  sqcRYGate(q, 2.529113072707202, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5708874228981173, 2);
  sqcRYGate(q, 1.7386022863177897, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5640252415821196, 2);
  sqcRYGate(q, -1.562862342206527, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.570015727109292, 4);
  sqcRYGate(q, 1.4537693605896527, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0415098169803243, 4);
  sqcRYGate(q, 1.7511572416256342, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5002161953794042, 6);
  sqcRYGate(q, -0.5718121479986656, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7461375627620369, 6);
  sqcRYGate(q, -1.8653830535217768, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5728954779414162, 1);
  sqcRYGate(q, -1.545608793763894, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8834317856456213, 1);
  sqcRYGate(q, -1.9451018122095576, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5540901266382259, 3);
  sqcRYGate(q, 1.5210922453716211, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5825013047454766, 3);
  sqcRYGate(q, -0.9203401660250884, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.06491730393967021, 5);
  sqcRYGate(q, -1.5813357345652106, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4913211487171252, 5);
  sqcRYGate(q, -1.808934574507278, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4179972450154139, 0);
  sqcRYGate(q, -3.049992500093499, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6326999337105557, 0);
  sqcRYGate(q, 2.812959273848324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.056310668396908, 2);
  sqcRYGate(q, -1.5689860378286138, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8113699158433079, 2);
  sqcRYGate(q, -1.6078641829935374, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.565966000234316, 4);
  sqcRYGate(q, -1.576895644721148, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5557435312323111, 4);
  sqcRYGate(q, -2.9338019695992634, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0922540447503462, 6);
  sqcRYGate(q, 2.202669046280775, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3867279812168052, 6);
  sqcRYGate(q, 2.590445602711172, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.260967106038395, 1);
  sqcRYGate(q, -0.0784660188513131, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1144837669485574, 1);
  sqcRYGate(q, -3.030203173303714, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.08599245028375066, 3);
  sqcRYGate(q, -1.56119790465518, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.189648616270599, 3);
  sqcRYGate(q, 0.13513630778675, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.570985005025429, 5);
  sqcRYGate(q, -2.048526017484058, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5627610583166367, 5);
  sqcRYGate(q, -1.3407849181919733, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.42701094997577993, 0);
  sqcRYGate(q, 0.0982535489000318, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6164052663104007, 0);
  sqcRYGate(q, 0.2239418454125889, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.848057370270385, 2);
  sqcRYGate(q, 3.058589932899454, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3328141364687403, 2);
  sqcRYGate(q, -1.5796595023440982, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5691468305426028, 4);
  sqcRYGate(q, -1.5698076892530919, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.628999057639274, 4);
  sqcRYGate(q, -1.1964532506117926, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5807935093206599, 6);
  sqcRYGate(q, 2.7362599808099772, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5769072480032715, 6);
  sqcRYGate(q, -3.141251741282189, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6041391009240626, 1);
  sqcRYGate(q, -3.076855593234263, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3807954237089841, 1);
  sqcRYGate(q, -3.136583341654583, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2747483916743367, 3);
  sqcRYGate(q, 1.6064645160214384, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.118331893252259, 3);
  sqcRYGate(q, -0.0019529296082527736, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.570179546791752, 5);
  sqcRYGate(q, -0.578046550753398, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3911512734214293, 5);
  sqcRYGate(q, 1.0501518036550455, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7809791164850186, 0);
  sqcRYGate(q, 0.07045210439647899, 1);
  sqcRYGate(q, -3.1409199801255534, 2);
  sqcRYGate(q, -0.8634657415128687, 3);
  sqcRYGate(q, -3.1076083034902244, 4);
  sqcRYGate(q, 1.5705858862660342, 5);
  sqcRYGate(q, -3.1397608363145357, 6);
  sqcRYGate(q, 1.5605770901423168, 7);

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
