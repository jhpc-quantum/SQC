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

  sqcRYGate(q, -0.20542524412002638, 0);
  sqcRZGate(q, -0.4311256281986245, 0);
  sqcRYGate(q, 2.267442994442062, 1);
  sqcRZGate(q, 2.3790217310410133, 1);
  sqcRYGate(q, 1.9129132479572324, 2);
  sqcRZGate(q, 1.3760097557766438, 2);
  sqcRYGate(q, 0.31404151156841137, 3);
  sqcRZGate(q, 1.4488131396685011, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.453930970123289, 0);
  sqcRZGate(q, 0.8349022552723159, 0);
  sqcRYGate(q, -1.8693677332461691, 1);
  sqcRZGate(q, -1.624925569790992, 1);
  sqcRYGate(q, 2.333025569907855, 2);
  sqcRZGate(q, 2.7504285515083753, 2);
  sqcRYGate(q, -0.8972071083882671, 3);
  sqcRZGate(q, -0.3387051266244159, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.3065505108494149, 0);
  sqcRZGate(q, 0.598269944973981, 0);
  sqcRYGate(q, 1.029701221940912, 1);
  sqcRZGate(q, -2.158739692648123, 1);
  sqcRYGate(q, -0.3530032792410704, 2);
  sqcRZGate(q, -1.2174861514087087, 2);
  sqcRYGate(q, 2.037093658944206, 3);
  sqcRZGate(q, -2.5813733648375394, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.7539739330841577, 0);
  sqcRZGate(q, 1.3709563382200907, 0);
  sqcRYGate(q, -1.359114031905503, 1);
  sqcRZGate(q, -1.5680802992355924, 1);
  sqcRYGate(q, 2.330678601860398, 2);
  sqcRZGate(q, -2.303872915630824, 2);
  sqcRYGate(q, 2.402331338360791, 3);
  sqcRZGate(q, -0.781056361458969, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -3.016363401271534, 0);
  sqcRZGate(q, -1.9688468237374241, 0);
  sqcRYGate(q, 2.762687063077928, 1);
  sqcRZGate(q, -2.7405494828975114, 1);
  sqcRYGate(q, -0.5636638463698636, 2);
  sqcRZGate(q, 0.3903120541446748, 2);
  sqcRYGate(q, 0.8814181953580995, 3);
  sqcRZGate(q, -2.2284172608689654, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.0909351309348114, 0);
  sqcRZGate(q, -1.1338691581928535, 0);
  sqcRYGate(q, -0.7087407491107124, 1);
  sqcRZGate(q, 2.0596192602152366, 1);
  sqcRYGate(q, -0.718301940695059, 2);
  sqcRZGate(q, 1.7803131067930078, 2);
  sqcRYGate(q, 0.13686690230063991, 3);
  sqcRZGate(q, 1.5552567853493273, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.7928872498229989, 0);
  sqcRZGate(q, -1.4434514025282015, 0);
  sqcRYGate(q, 0.30900635605826565, 1);
  sqcRZGate(q, -0.8282247279499906, 1);
  sqcRYGate(q, 0.8719653251584211, 2);
  sqcRZGate(q, -2.1571409528365866, 2);
  sqcRYGate(q, -0.9922068490087758, 3);
  sqcRZGate(q, -2.698339662324573, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.670115424760457, 0);
  sqcRZGate(q, -0.4268877024985236, 0);
  sqcRYGate(q, -0.9370421355688778, 1);
  sqcRZGate(q, 0.643655746906584, 1);
  sqcRYGate(q, -0.06856353616735696, 2);
  sqcRZGate(q, 0.2615600388822784, 2);
  sqcRYGate(q, 0.9865245077681111, 3);
  sqcRZGate(q, 1.047692605490222, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.683946502496345, 0);
  sqcRZGate(q, -1.9630662992974752, 0);
  sqcRYGate(q, 2.0223760489828333, 1);
  sqcRZGate(q, 1.0007829923261795, 1);
  sqcRYGate(q, -1.0646578438331122, 2);
  sqcRZGate(q, 3.0356683509519384, 2);
  sqcRYGate(q, 1.0794794403369323, 3);
  sqcRZGate(q, 2.183245789921134, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.2805718810292286, 0);
  sqcRZGate(q, 2.730470455973374, 0);
  sqcRYGate(q, 0.01601700402002908, 1);
  sqcRZGate(q, 0.048456943983043683, 1);
  sqcRYGate(q, 0.6304704489609474, 2);
  sqcRZGate(q, 1.2320261337329876, 2);
  sqcRYGate(q, 0.04913527772476483, 3);
  sqcRZGate(q, -2.4703399337251657, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.529252444487601, 0);
  sqcRZGate(q, 1.3521012311291989, 0);
  sqcRYGate(q, 1.5271598938140707, 1);
  sqcRZGate(q, 0.6613715386490363, 1);
  sqcRYGate(q, -2.5553197756735284, 2);
  sqcRZGate(q, 0.23494719957193322, 2);
  sqcRYGate(q, 2.6125804124994296, 3);
  sqcRZGate(q, -1.0762889571457848, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.15815661853327967, 0);
  sqcRZGate(q, 1.7434570669676628, 0);
  sqcRYGate(q, 2.8460735847295076, 1);
  sqcRZGate(q, 3.0018132511656215, 1);
  sqcRYGate(q, -0.14228141450660442, 2);
  sqcRZGate(q, -0.2910454284336623, 2);
  sqcRYGate(q, 2.738385781933273, 3);
  sqcRZGate(q, 2.4072107093152466, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.4827144235532046, 0);
  sqcRZGate(q, -2.03388771779757, 0);
  sqcRYGate(q, -0.1762537280769827, 1);
  sqcRZGate(q, 1.143765593373792, 1);
  sqcRYGate(q, -1.3952790200265106, 2);
  sqcRZGate(q, 0.9208617057087212, 2);
  sqcRYGate(q, -1.025759381734563, 3);
  sqcRZGate(q, -1.8967474758010734, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.0077577612894872, 0);
  sqcRZGate(q, -1.631933675283289, 0);
  sqcRYGate(q, -0.8738076345794124, 1);
  sqcRZGate(q, -1.3053995416084696, 1);
  sqcRYGate(q, -2.572202181149581, 2);
  sqcRZGate(q, 0.5115728449130446, 2);
  sqcRYGate(q, -1.5810674459808487, 3);
  sqcRZGate(q, -1.13954237679011, 3);

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
