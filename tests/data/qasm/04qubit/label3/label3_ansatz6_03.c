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

  sqcRYGate(q, 0.7273439395094077, 0);
  sqcRYGate(q, 0.11473533050981465, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.621507162637906, 0);
  sqcRYGate(q, -0.8662598534750874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.205744971599067, 1);
  sqcRYGate(q, -0.3519372730534789, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6654708122244264, 1);
  sqcRYGate(q, 2.540071638988159, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.77394686755839, 2);
  sqcRYGate(q, 2.0961334179129203, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3624793798205346, 2);
  sqcRYGate(q, 2.2560462763682714, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.080924369102969, 0);
  sqcRYGate(q, -0.12151101751115956, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.483904441697719, 0);
  sqcRYGate(q, 2.4967136671084207, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0162620590928633, 1);
  sqcRYGate(q, -2.615025618092138, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0101906754164875, 1);
  sqcRYGate(q, -1.313814484565933, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9648130286110876, 2);
  sqcRYGate(q, 3.0187906098798485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2795450003456934, 2);
  sqcRYGate(q, 1.4217410305004847, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9653001039898141, 0);
  sqcRYGate(q, -1.442740690679926, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8766727739193172, 0);
  sqcRYGate(q, 0.3072623898564224, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5261051916829824, 1);
  sqcRYGate(q, -2.8946585854049665, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5190226662443767, 1);
  sqcRYGate(q, -0.0026065558216387423, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.023886615207107, 2);
  sqcRYGate(q, 2.527241263344492, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3663102593505285, 2);
  sqcRYGate(q, 1.4731224163799483, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2517428356910052, 0);
  sqcRYGate(q, 1.1958302722726346, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7798072940117184, 0);
  sqcRYGate(q, -1.3834448073052474, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3978539375155414, 1);
  sqcRYGate(q, -0.482685006213071, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.778094191637675, 1);
  sqcRYGate(q, 1.5153306440313399, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.24037908752275094, 2);
  sqcRYGate(q, -3.120694794831503, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7221294506847675, 2);
  sqcRYGate(q, 0.44953288638487976, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9827697042733106, 0);
  sqcRYGate(q, 1.4944558297946555, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7131021055400555, 0);
  sqcRYGate(q, -0.4049055676479401, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0121177338707206, 1);
  sqcRYGate(q, 2.8217263508062858, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6351671046855685, 1);
  sqcRYGate(q, 2.653233811423857, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7331941287578552, 2);
  sqcRYGate(q, -0.5997415820276174, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0424265926565592, 2);
  sqcRYGate(q, 1.5569447042873397, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0951575227258563, 0);
  sqcRYGate(q, -0.7983065774694662, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.857427420139432, 0);
  sqcRYGate(q, -1.5059305418101574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5646470461740039, 1);
  sqcRYGate(q, -1.8635380869234301, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8416464473764727, 1);
  sqcRYGate(q, -1.7684162229039249, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.665103221944838, 2);
  sqcRYGate(q, 2.1549408203217517, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.103559070111105, 2);
  sqcRYGate(q, 1.6194087769186316, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1223504288855115, 0);
  sqcRYGate(q, -2.4555637768463745, 1);
  sqcRYGate(q, -1.0159738063289838, 2);
  sqcRYGate(q, -0.7672675224425702, 3);

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
