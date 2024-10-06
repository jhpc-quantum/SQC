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

  sqcRYGate(q, 2.7853854955283137, 0);
  sqcRZGate(q, 1.1117040960057447, 0);
  sqcRYGate(q, 0.8951471637993909, 1);
  sqcRZGate(q, 2.6954452180332162, 1);
  sqcRYGate(q, 2.1565863124222, 2);
  sqcRZGate(q, -0.8925507255297361, 2);
  sqcRYGate(q, -0.41682732517780874, 3);
  sqcRZGate(q, 0.21070749354739843, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.1561163166236845, 0);
  sqcRZGate(q, 2.3103745673499474, 0);
  sqcRYGate(q, 1.7002669661758052, 1);
  sqcRZGate(q, 1.275441903694138, 1);
  sqcRYGate(q, 2.6476598884943643, 2);
  sqcRZGate(q, 2.966577304496246, 2);
  sqcRYGate(q, 2.120683245628279, 3);
  sqcRZGate(q, -2.3067462065851077, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.13136432768175174, 0);
  sqcRZGate(q, 1.6833134752758476, 0);
  sqcRYGate(q, 0.8014714437956613, 1);
  sqcRZGate(q, 0.10649291779003374, 1);
  sqcRYGate(q, -1.1618705691309108, 2);
  sqcRZGate(q, 2.5869724643410086, 2);
  sqcRYGate(q, 2.5019401003829382, 3);
  sqcRZGate(q, 1.7734915479148192, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.6635728961552783, 0);
  sqcRZGate(q, -0.9953418509463442, 0);
  sqcRYGate(q, -1.6237473137767555, 1);
  sqcRZGate(q, -1.197923960765694, 1);
  sqcRYGate(q, -1.2922992565849665, 2);
  sqcRZGate(q, 0.9997645952816494, 2);
  sqcRYGate(q, 1.6776077104197507, 3);
  sqcRZGate(q, 0.9928032398714466, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.4756584757293303, 0);
  sqcRZGate(q, -2.40777394982163, 0);
  sqcRYGate(q, -1.7015020980637452, 1);
  sqcRZGate(q, -1.7050741569150694, 1);
  sqcRYGate(q, -1.2929817831822565, 2);
  sqcRZGate(q, -0.07226659015338166, 2);
  sqcRYGate(q, 1.290533775760504, 3);
  sqcRZGate(q, -1.9225462218108396, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.14599615206926805, 0);
  sqcRZGate(q, 2.585312206209946, 0);
  sqcRYGate(q, 2.5054046598181623, 1);
  sqcRZGate(q, 0.949667758621814, 1);
  sqcRYGate(q, 2.1437597036181, 2);
  sqcRZGate(q, 1.2327163685230769, 2);
  sqcRYGate(q, 1.303461023102642, 3);
  sqcRZGate(q, 1.6072481040310083, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.642357822457028, 0);
  sqcRZGate(q, 3.108480306860792, 0);
  sqcRYGate(q, 0.5971180556076101, 1);
  sqcRZGate(q, 2.9048000908444704, 1);
  sqcRYGate(q, 1.4010600577706436, 2);
  sqcRZGate(q, 3.014801871870288, 2);
  sqcRYGate(q, -1.3691437909340645, 3);
  sqcRZGate(q, 1.6196585782129325, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.9676225522654682, 0);
  sqcRZGate(q, 2.8518268826383255, 0);
  sqcRYGate(q, 2.7307776370157795, 1);
  sqcRZGate(q, 1.2136367032519155, 1);
  sqcRYGate(q, -2.8684448480402414, 2);
  sqcRZGate(q, -0.4448114634961807, 2);
  sqcRYGate(q, -1.7140772498861727, 3);
  sqcRZGate(q, 1.3916912625755031, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.3463798809870724, 0);
  sqcRZGate(q, -0.024650544596172445, 0);
  sqcRYGate(q, -2.6752936823722653, 1);
  sqcRZGate(q, 1.1948660677882932, 1);
  sqcRYGate(q, -3.038330023052785, 2);
  sqcRZGate(q, -1.8426382961000431, 2);
  sqcRYGate(q, 1.0285676821543561, 3);
  sqcRZGate(q, -1.2542704721390923, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.6300232345054262, 0);
  sqcRZGate(q, 0.6670010669725022, 0);
  sqcRYGate(q, 1.7133588209769357, 1);
  sqcRZGate(q, -2.138169285933877, 1);
  sqcRYGate(q, 0.06319727965788413, 2);
  sqcRZGate(q, 0.5457834977053375, 2);
  sqcRYGate(q, -0.10553578515143566, 3);
  sqcRZGate(q, -1.0386120621141979, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.9984073370245363, 0);
  sqcRZGate(q, 1.2533410883805685, 0);
  sqcRYGate(q, -2.3053685263383996, 1);
  sqcRZGate(q, -0.37417325024670284, 1);
  sqcRYGate(q, 0.9056844064967178, 2);
  sqcRZGate(q, -1.4741363925068447, 2);
  sqcRYGate(q, 0.7654674098124747, 3);
  sqcRZGate(q, -1.026033778026552, 3);

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
