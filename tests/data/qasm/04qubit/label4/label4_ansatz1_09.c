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

  sqcRYGate(q, -2.5440999526223993, 0);
  sqcRZGate(q, -1.9590796684756346, 0);
  sqcRYGate(q, 1.5581435897649074, 1);
  sqcRZGate(q, -1.789280003964893, 1);
  sqcRYGate(q, -1.4968633579917514, 2);
  sqcRZGate(q, -2.2502858925117373, 2);
  sqcRYGate(q, -0.1513030382868503, 3);
  sqcRZGate(q, 2.615574930934625, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.534918356853829, 0);
  sqcRZGate(q, 1.9615381010680588, 0);
  sqcRYGate(q, 0.4103508597122394, 1);
  sqcRZGate(q, 0.6738613633470115, 1);
  sqcRYGate(q, -0.2516720565859494, 2);
  sqcRZGate(q, 2.987322715301465, 2);
  sqcRYGate(q, 1.6616758047082083, 3);
  sqcRZGate(q, 2.8050698580852393, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2339506371799591, 0);
  sqcRZGate(q, -2.1044357535631297, 0);
  sqcRYGate(q, -1.8509629404525842, 1);
  sqcRZGate(q, -1.9151520427445374, 1);
  sqcRYGate(q, 0.54841354328493, 2);
  sqcRZGate(q, 0.26721561081977896, 2);
  sqcRYGate(q, -0.12999321050900384, 3);
  sqcRZGate(q, 1.123603519495303, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.89376124896408, 0);
  sqcRZGate(q, 1.2025913774901498, 0);
  sqcRYGate(q, 2.213694652450638, 1);
  sqcRZGate(q, 2.8824045303297696, 1);
  sqcRYGate(q, 1.5615029018323598, 2);
  sqcRZGate(q, -2.6625800171411877, 2);
  sqcRYGate(q, -2.3691384792095587, 3);
  sqcRZGate(q, -0.9932637982844658, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6558453004559368, 0);
  sqcRZGate(q, -3.0478011083712797, 0);
  sqcRYGate(q, -0.15559086174786224, 1);
  sqcRZGate(q, -1.312888232567368, 1);
  sqcRYGate(q, -1.0366610047939266, 2);
  sqcRZGate(q, -0.26198615662194585, 2);
  sqcRYGate(q, -2.0019638673117512, 3);
  sqcRZGate(q, 1.455032686864409, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7982787647624865, 0);
  sqcRZGate(q, 0.9335299281983344, 0);
  sqcRYGate(q, -1.6302945837923652, 1);
  sqcRZGate(q, 0.4247709342078201, 1);
  sqcRYGate(q, -1.2287205025591257, 2);
  sqcRZGate(q, -0.5128385274820557, 2);
  sqcRYGate(q, -0.30073716473760803, 3);
  sqcRZGate(q, -1.7528148281391056, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7212774106759245, 0);
  sqcRZGate(q, -1.2370194535509453, 0);
  sqcRYGate(q, 2.199184478898272, 1);
  sqcRZGate(q, 0.4707080097424026, 1);
  sqcRYGate(q, 0.47024533576144406, 2);
  sqcRZGate(q, 2.6665412753806192, 2);
  sqcRYGate(q, 2.968141782170984, 3);
  sqcRZGate(q, -0.14950089019503937, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.9405193322459158, 0);
  sqcRZGate(q, -2.560471524071286, 0);
  sqcRYGate(q, -0.08156395184292364, 1);
  sqcRZGate(q, -1.3422357807397265, 1);
  sqcRYGate(q, 2.1630169778622186, 2);
  sqcRZGate(q, 0.3421113061042831, 2);
  sqcRYGate(q, 1.4708097343390865, 3);
  sqcRZGate(q, -2.8544056461643725, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.26779073860128055, 0);
  sqcRZGate(q, 2.94964368284102, 0);
  sqcRYGate(q, -1.424053828941842, 1);
  sqcRZGate(q, -1.2416772523533277, 1);
  sqcRYGate(q, -1.0743037432181741, 2);
  sqcRZGate(q, 1.5914636491156644, 2);
  sqcRYGate(q, -2.3206707637368775, 3);
  sqcRZGate(q, 2.970040373247269, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.05462797047317203, 0);
  sqcRZGate(q, -2.607527264008787, 0);
  sqcRYGate(q, -1.7217063396958672, 1);
  sqcRZGate(q, 2.3227320849240405, 1);
  sqcRYGate(q, -2.3017744820381347, 2);
  sqcRZGate(q, 1.8620100227750411, 2);
  sqcRYGate(q, -2.4199409300706574, 3);
  sqcRZGate(q, -2.592601267844347, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5719863553413713, 0);
  sqcRZGate(q, 0.07781827891592202, 0);
  sqcRYGate(q, 0.5778220628478028, 1);
  sqcRZGate(q, 2.3975199227350767, 1);
  sqcRYGate(q, -1.0893364889657275, 2);
  sqcRZGate(q, 1.8457584074425712, 2);
  sqcRYGate(q, -0.19140937229373892, 3);
  sqcRZGate(q, 1.116385261604521, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3313537628060723, 0);
  sqcRZGate(q, -3.1233004799216313, 0);
  sqcRYGate(q, 1.420965581761056, 1);
  sqcRZGate(q, 2.8179559379618806, 1);
  sqcRYGate(q, 1.5224335041996204, 2);
  sqcRZGate(q, 2.9665693907404465, 2);
  sqcRYGate(q, 1.4742022592019757, 3);
  sqcRZGate(q, -2.4971892308236456, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9589623720415208, 0);
  sqcRZGate(q, 0.011674974439260133, 0);
  sqcRYGate(q, 0.681460075574206, 1);
  sqcRZGate(q, -0.32699812895442637, 1);
  sqcRYGate(q, 2.033148467408764, 2);
  sqcRZGate(q, -1.2352424735520522, 2);
  sqcRYGate(q, 0.7030258973895985, 3);
  sqcRZGate(q, -0.13499510406910975, 3);

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
