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

  sqcRYGate(q, 0.9661728191780297, 0);
  sqcRZGate(q, -0.9880171421361599, 0);
  sqcRYGate(q, 1.4137737867100961, 1);
  sqcRZGate(q, -3.099241815140082, 1);
  sqcRYGate(q, 1.1972585419979405, 2);
  sqcRZGate(q, -1.148836844016519, 2);
  sqcRYGate(q, 2.9135296016396035, 3);
  sqcRZGate(q, 2.806066021496078, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8626927742395392, 0);
  sqcRZGate(q, -2.017623494216183, 0);
  sqcRYGate(q, -0.21030244569727072, 1);
  sqcRZGate(q, 1.6546596533515225, 1);
  sqcRYGate(q, -2.52676713967671, 2);
  sqcRZGate(q, -3.0898499254984007, 2);
  sqcRYGate(q, -3.088105175127556, 3);
  sqcRZGate(q, 2.707261869765718, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.408791155934107, 0);
  sqcRZGate(q, 2.4803947941513873, 0);
  sqcRYGate(q, -2.0299557337130896, 1);
  sqcRZGate(q, 0.6536832054798392, 1);
  sqcRYGate(q, -1.3211914714691961, 2);
  sqcRZGate(q, 2.6041841868694213, 2);
  sqcRYGate(q, -2.2599448719235933, 3);
  sqcRZGate(q, -2.1335537226643133, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.3105660279292217, 0);
  sqcRZGate(q, -1.4298192390365703, 0);
  sqcRYGate(q, -1.292600209022568, 1);
  sqcRZGate(q, -0.4766310778007295, 1);
  sqcRYGate(q, -1.3529228222030025, 2);
  sqcRZGate(q, -0.22632281884818892, 2);
  sqcRYGate(q, -1.652559340523332, 3);
  sqcRZGate(q, -0.058802795193702906, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9737521818700494, 0);
  sqcRZGate(q, 1.7935285104844048, 0);
  sqcRYGate(q, -2.121530289345313, 1);
  sqcRZGate(q, 2.4974916101605404, 1);
  sqcRYGate(q, -1.6333708965235598, 2);
  sqcRZGate(q, 1.0162263763121446, 2);
  sqcRYGate(q, -2.5655253605224693, 3);
  sqcRZGate(q, -0.8148563616090962, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9903948648138856, 0);
  sqcRZGate(q, 2.9775323252816754, 0);
  sqcRYGate(q, -0.7720381536432566, 1);
  sqcRZGate(q, -0.07780734984855897, 1);
  sqcRYGate(q, -1.7818265227414092, 2);
  sqcRZGate(q, -1.2955717995397578, 2);
  sqcRYGate(q, 0.08578814598603479, 3);
  sqcRZGate(q, -2.0647209693094517, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7001006441084554, 0);
  sqcRZGate(q, -3.0371840021813696, 0);
  sqcRYGate(q, -0.8190249780257381, 1);
  sqcRZGate(q, 0.22534095889012648, 1);
  sqcRYGate(q, -1.8665023352103374, 2);
  sqcRZGate(q, -2.6927770588389675, 2);
  sqcRYGate(q, 0.0991521971566156, 3);
  sqcRZGate(q, 1.776140962800195, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.0136708172291637, 0);
  sqcRZGate(q, -0.7941601294856856, 0);
  sqcRYGate(q, 2.5515446500606616, 1);
  sqcRZGate(q, 1.6778511660753193, 1);
  sqcRYGate(q, 0.34667023441546, 2);
  sqcRZGate(q, -2.9616697118744106, 2);
  sqcRYGate(q, 1.2925987758235051, 3);
  sqcRZGate(q, -0.9320813212851959, 3);

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
