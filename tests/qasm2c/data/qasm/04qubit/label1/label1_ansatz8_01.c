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

  sqcRYGate(q, -0.8529431045348126, 0);
  sqcRYGate(q, -1.100284009773639, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8594235565002974, 0);
  sqcRYGate(q, -2.577059801872329, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7199168588467078, 2);
  sqcRYGate(q, 0.86606102938935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.41892099102828073, 2);
  sqcRYGate(q, 3.090214643868731, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9455231368347896, 0);
  sqcRYGate(q, -0.9502941415792955, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.751578958585002, 0);
  sqcRYGate(q, -1.492328922186502, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0658676059079346, 1);
  sqcRYGate(q, 2.6834800078633387, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6646937002506095, 1);
  sqcRYGate(q, -0.7091643864146886, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8627040926387162, 0);
  sqcRYGate(q, -2.6749529908791634, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.007566493493533, 0);
  sqcRYGate(q, -2.4663245780123186, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9598463716382915, 2);
  sqcRYGate(q, 1.8221187011097184, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9567114556923413, 2);
  sqcRYGate(q, 1.017311989873079, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7554663890264999, 0);
  sqcRYGate(q, -0.43947227467960914, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7284037321678773, 0);
  sqcRYGate(q, 2.175314389399297, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0545438980237414, 1);
  sqcRYGate(q, 0.1264114419139757, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8974938438231606, 1);
  sqcRYGate(q, -2.4637165571336235, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.968183754425145, 0);
  sqcRYGate(q, 3.118260046075554, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6492760409399327, 0);
  sqcRYGate(q, 0.7240925742051041, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.06834613609656029, 2);
  sqcRYGate(q, -2.8230484843403296, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8445203061226803, 2);
  sqcRYGate(q, -1.963073813678468, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6871853844704798, 0);
  sqcRYGate(q, -1.0602944908017793, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3860303349461476, 0);
  sqcRYGate(q, -2.156084858401445, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1177782002448766, 1);
  sqcRYGate(q, 0.12176753817043462, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.49007640766773175, 1);
  sqcRYGate(q, -0.6868363769663419, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2196698539178232, 0);
  sqcRYGate(q, -1.9826383893019939, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.505608917829788, 0);
  sqcRYGate(q, -0.28183911442964055, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9628951226073124, 2);
  sqcRYGate(q, -2.1642180482767075, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4721234066423257, 2);
  sqcRYGate(q, -1.166987249585267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.484271218510908, 0);
  sqcRYGate(q, -2.5745637583787118, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8198591921785435, 0);
  sqcRYGate(q, -2.0297799175061035, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0589116512391747, 1);
  sqcRYGate(q, -2.1136327253905676, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.10845349070217569, 1);
  sqcRYGate(q, -2.3560392291620214, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6149678413944927, 0);
  sqcRYGate(q, 2.3057141759641464, 1);
  sqcRYGate(q, 2.829193132504956, 2);
  sqcRYGate(q, 2.9861577482113284, 3);

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
