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

  sqcRYGate(q, 0.11033357591220483, 0);
  sqcRZGate(q, -2.2471239409217176, 0);
  sqcRYGate(q, 2.035186443601079, 1);
  sqcRZGate(q, -0.28179395863451084, 1);
  sqcRYGate(q, 3.076562112837231, 2);
  sqcRZGate(q, -1.853708440535708, 2);
  sqcRYGate(q, -0.3944945637837236, 3);
  sqcRZGate(q, -0.12021325612455147, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5383524439182485, 0);
  sqcRZGate(q, -1.602799636878718, 0);
  sqcRYGate(q, -1.2998300827137397, 1);
  sqcRZGate(q, 2.8627886917711702, 1);
  sqcRYGate(q, -1.8874121321234494, 2);
  sqcRZGate(q, -0.17961209960624258, 2);
  sqcRYGate(q, -2.2080873140100294, 3);
  sqcRZGate(q, -1.1350859553141674, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.797360378435755, 0);
  sqcRZGate(q, 0.18904802970369813, 0);
  sqcRYGate(q, -3.0187563959324812, 1);
  sqcRZGate(q, -1.6727030975544543, 1);
  sqcRYGate(q, -2.931133861198159, 2);
  sqcRZGate(q, 2.0470629505588134, 2);
  sqcRYGate(q, -1.4103636290546928, 3);
  sqcRZGate(q, 1.3377597928601892, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6196296978818054, 0);
  sqcRZGate(q, 2.0394267815512386, 0);
  sqcRYGate(q, -2.3118311639773736, 1);
  sqcRZGate(q, 0.11072050348232486, 1);
  sqcRYGate(q, 0.17360805224558273, 2);
  sqcRZGate(q, -1.8951975146337592, 2);
  sqcRYGate(q, 3.074374013825368, 3);
  sqcRZGate(q, 0.37257808521276253, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8817430798682606, 0);
  sqcRZGate(q, 2.1601613844919543, 0);
  sqcRYGate(q, 1.6688658159221106, 1);
  sqcRZGate(q, -1.0830493764687263, 1);
  sqcRYGate(q, 1.4438327142766556, 2);
  sqcRZGate(q, 1.6649790757389553, 2);
  sqcRYGate(q, -2.1983520976954187, 3);
  sqcRZGate(q, 0.8653893275452068, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.2925279553650962, 0);
  sqcRZGate(q, 2.2437927089754224, 0);
  sqcRYGate(q, -0.8448264649630443, 1);
  sqcRZGate(q, 0.401491660829378, 1);
  sqcRYGate(q, -2.4670593938985155, 2);
  sqcRZGate(q, 3.040145359316944, 2);
  sqcRYGate(q, 0.6118352999500158, 3);
  sqcRZGate(q, 1.148262049227797, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9700831383724804, 0);
  sqcRZGate(q, -0.880044244841697, 0);
  sqcRYGate(q, -1.2066157434094222, 1);
  sqcRZGate(q, 2.285097690608532, 1);
  sqcRYGate(q, 1.8036173455593092, 2);
  sqcRZGate(q, 2.20853626190498, 2);
  sqcRYGate(q, -2.6064242240081117, 3);
  sqcRZGate(q, 2.230665149133052, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5421105020194739, 0);
  sqcRZGate(q, -2.4945167301857976, 0);
  sqcRYGate(q, 2.4343925056661426, 1);
  sqcRZGate(q, -0.4370378927736099, 1);
  sqcRYGate(q, -2.617800149957308, 2);
  sqcRZGate(q, -0.08409536605606402, 2);
  sqcRYGate(q, -1.4832684134956384, 3);
  sqcRZGate(q, 0.9346132721752675, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1223792461736992, 0);
  sqcRZGate(q, -0.0012516643578511359, 0);
  sqcRYGate(q, -0.7809671046575026, 1);
  sqcRZGate(q, 0.9872663720065635, 1);
  sqcRYGate(q, 2.1101819954905334, 2);
  sqcRZGate(q, -2.9095793902999167, 2);
  sqcRYGate(q, -0.7847250086186117, 3);
  sqcRZGate(q, 0.593755344314702, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.121228583020989, 0);
  sqcRZGate(q, -0.8215059660654597, 0);
  sqcRYGate(q, 2.7181019557122643, 1);
  sqcRZGate(q, 2.8543256556744505, 1);
  sqcRYGate(q, -2.6366489744379447, 2);
  sqcRZGate(q, 2.160134960923125, 2);
  sqcRYGate(q, 2.845339891358456, 3);
  sqcRZGate(q, -2.124232102075804, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6227049716840671, 0);
  sqcRZGate(q, 0.7419182578142839, 0);
  sqcRYGate(q, -2.8258151841563905, 1);
  sqcRZGate(q, 0.8490054377871127, 1);
  sqcRYGate(q, -0.4711852439812172, 2);
  sqcRZGate(q, 0.5409222450074154, 2);
  sqcRYGate(q, -3.0360939644951803, 3);
  sqcRZGate(q, -2.7602392059184386, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.6558526728847105, 0);
  sqcRZGate(q, -2.5296793634280283, 0);
  sqcRYGate(q, -1.0085103068954657, 1);
  sqcRZGate(q, 1.1608082817435728, 1);
  sqcRYGate(q, -0.1771034391721281, 2);
  sqcRZGate(q, -3.072554644042744, 2);
  sqcRYGate(q, -2.205171277149799, 3);
  sqcRZGate(q, -1.7334931812545982, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1179613403328696, 0);
  sqcRZGate(q, -1.6723002363892618, 0);
  sqcRYGate(q, -3.0525550500057483, 1);
  sqcRZGate(q, 3.0865262015001393, 1);
  sqcRYGate(q, 2.9246557524171255, 2);
  sqcRZGate(q, -1.9464692177629557, 2);
  sqcRYGate(q, 1.445815656286766, 3);
  sqcRZGate(q, -2.8070087564409736, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.44749742251637054, 0);
  sqcRZGate(q, 1.7422582001247617, 0);
  sqcRYGate(q, -2.871055128990329, 1);
  sqcRZGate(q, -0.10873080435972061, 1);
  sqcRYGate(q, -1.3527478462663307, 2);
  sqcRZGate(q, -2.28140968722401, 2);
  sqcRYGate(q, 2.022927406580078, 3);
  sqcRZGate(q, 1.3110845819254353, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.137666272312223, 0);
  sqcRZGate(q, 1.2952763068171667, 0);
  sqcRYGate(q, -2.531819354935114, 1);
  sqcRZGate(q, 2.044224671596146, 1);
  sqcRYGate(q, -3.112437087966624, 2);
  sqcRZGate(q, 2.5944885935791318, 2);
  sqcRYGate(q, 2.3404212801954203, 3);
  sqcRZGate(q, 0.9039331069217935, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7159492129105813, 0);
  sqcRZGate(q, -0.2603170652471235, 0);
  sqcRYGate(q, -0.9646263754772351, 1);
  sqcRZGate(q, -3.083060601613235, 1);
  sqcRYGate(q, 2.966633999486169, 2);
  sqcRZGate(q, 2.636923977665803, 2);
  sqcRYGate(q, 2.4464162369048728, 3);
  sqcRZGate(q, 0.029110126764538613, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0113682478642865, 0);
  sqcRZGate(q, -0.7111343052584997, 0);
  sqcRYGate(q, -2.5640409286571013, 1);
  sqcRZGate(q, 2.508686249463788, 1);
  sqcRYGate(q, -0.7755473745820209, 2);
  sqcRZGate(q, -3.1212555756902782, 2);
  sqcRYGate(q, 1.10410093830449, 3);
  sqcRZGate(q, 2.949622036298416, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.499287290881313, 0);
  sqcRZGate(q, 0.30145319654940056, 0);
  sqcRYGate(q, 0.6366337151645491, 1);
  sqcRZGate(q, 2.6489530419080087, 1);
  sqcRYGate(q, 0.19733259392316133, 2);
  sqcRZGate(q, 1.3168835421542768, 2);
  sqcRYGate(q, 1.5065608682725307, 3);
  sqcRZGate(q, 2.187486313624491, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1399398719751859, 0);
  sqcRZGate(q, 0.4680150493619587, 0);
  sqcRYGate(q, -1.792492818483801, 1);
  sqcRZGate(q, 1.2976270212682401, 1);
  sqcRYGate(q, -1.284856091746857, 2);
  sqcRZGate(q, 1.9182383133629362, 2);
  sqcRYGate(q, 0.7937579405880832, 3);
  sqcRZGate(q, 1.2807070765318462, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.403100362222326, 0);
  sqcRZGate(q, 1.6937174816684308, 0);
  sqcRYGate(q, 1.2256634974183287, 1);
  sqcRZGate(q, -0.6076846294807868, 1);
  sqcRYGate(q, 0.42744074569169666, 2);
  sqcRZGate(q, -1.2453233066808618, 2);
  sqcRYGate(q, 0.35469584271871213, 3);
  sqcRZGate(q, 2.6164095938328726, 3);

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
