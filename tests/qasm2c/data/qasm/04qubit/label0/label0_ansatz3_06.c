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

  sqcRYGate(q, -2.006945695646748, 0);
  sqcRZGate(q, 3.006737860400713, 0);
  sqcRYGate(q, -1.8337901169261905, 1);
  sqcRZGate(q, 2.6145763642988604, 1);
  sqcRYGate(q, 2.8844639276573183, 2);
  sqcRZGate(q, -0.6546993816634149, 2);
  sqcRYGate(q, 2.600019827535084, 3);
  sqcRZGate(q, -0.5956210579957552, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.961930076661773, 0);
  sqcRZGate(q, 2.2650937153848183, 0);
  sqcRYGate(q, -0.5645782854243874, 1);
  sqcRZGate(q, -2.4391328318979246, 1);
  sqcRYGate(q, -1.2088722353229835, 2);
  sqcRZGate(q, 2.3525133302383345, 2);
  sqcRYGate(q, 1.7277792556748768, 3);
  sqcRZGate(q, 0.6285815045211179, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.41931516543271335, 0);
  sqcRZGate(q, -2.5080180092242816, 0);
  sqcRYGate(q, -2.888915338865051, 1);
  sqcRZGate(q, 2.9222892322856318, 1);
  sqcRYGate(q, -2.9878423833874295, 2);
  sqcRZGate(q, -0.4676589963219471, 2);
  sqcRYGate(q, 1.4158217027701885, 3);
  sqcRZGate(q, 3.0609207955788778, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.9840506909800233, 0);
  sqcRZGate(q, -1.710267333044552, 0);
  sqcRYGate(q, -1.5375599525105699, 1);
  sqcRZGate(q, 1.5677354706567561, 1);
  sqcRYGate(q, 0.6103384777253987, 2);
  sqcRZGate(q, -2.3674037048252607, 2);
  sqcRYGate(q, 0.5011538565568667, 3);
  sqcRZGate(q, -0.05359137594987475, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.0718601349720762, 0);
  sqcRZGate(q, 2.5609378656105286, 0);
  sqcRYGate(q, -1.2964725413050635, 1);
  sqcRZGate(q, 2.0672027730085394, 1);
  sqcRYGate(q, 1.2075035062285442, 2);
  sqcRZGate(q, -0.8537792485460753, 2);
  sqcRYGate(q, -1.201323776582254, 3);
  sqcRZGate(q, -2.8376287569747825, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.6999837075289324, 0);
  sqcRZGate(q, 1.7112134197364262, 0);
  sqcRYGate(q, -2.0604277785423566, 1);
  sqcRZGate(q, 1.511537529822615, 1);
  sqcRYGate(q, -0.8150845964986072, 2);
  sqcRZGate(q, -1.3100050997684296, 2);
  sqcRYGate(q, 1.0182553514209194, 3);
  sqcRZGate(q, -1.8953252445372806, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.9788661259243101, 0);
  sqcRZGate(q, 2.1013258205790426, 0);
  sqcRYGate(q, -2.469842560032526, 1);
  sqcRZGate(q, -0.0497009776636057, 1);
  sqcRYGate(q, 1.5716542940811937, 2);
  sqcRZGate(q, -2.344443686131722, 2);
  sqcRYGate(q, 1.3793452862917421, 3);
  sqcRZGate(q, 0.747025209523132, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.28536921872067733, 0);
  sqcRZGate(q, 1.2423966993524456, 0);
  sqcRYGate(q, 0.46671190722842215, 1);
  sqcRZGate(q, 2.4266776025733976, 1);
  sqcRYGate(q, -1.1059984557141878, 2);
  sqcRZGate(q, -0.7332206287680963, 2);
  sqcRYGate(q, 1.1576483229168155, 3);
  sqcRZGate(q, -0.11199543116027044, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.855176784776606, 0);
  sqcRZGate(q, 2.4303230896999293, 0);
  sqcRYGate(q, 1.0752756995907804, 1);
  sqcRZGate(q, 1.258844921642324, 1);
  sqcRYGate(q, 0.2118638862134281, 2);
  sqcRZGate(q, -2.4961108294817627, 2);
  sqcRYGate(q, 2.936124871143815, 3);
  sqcRZGate(q, 0.4233333526360319, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 3.0091901470663824, 0);
  sqcRZGate(q, -1.0793067153318856, 0);
  sqcRYGate(q, 0.2644155945796514, 1);
  sqcRZGate(q, 1.158870863255549, 1);
  sqcRYGate(q, 2.800991361991379, 2);
  sqcRZGate(q, -2.915070939573851, 2);
  sqcRYGate(q, 1.194967701795841, 3);
  sqcRZGate(q, 2.412047082204301, 3);

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
