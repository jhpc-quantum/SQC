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

  sqcRYGate(q, -2.065182262554607, 0);
  sqcRZGate(q, 2.182646729620993, 0);
  sqcRYGate(q, -1.8016746768494025, 1);
  sqcRZGate(q, -1.0066163326607471, 1);
  sqcRYGate(q, 0.5785209552907027, 2);
  sqcRZGate(q, 1.5876487880321042, 2);
  sqcRYGate(q, -2.2751566240291208, 3);
  sqcRZGate(q, -1.2440352987127565, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.965455114034334, 0);
  sqcRZGate(q, -1.1486492319967727, 0);
  sqcRYGate(q, -2.1541695615218543, 1);
  sqcRZGate(q, -1.5662888438917009, 1);
  sqcRYGate(q, -0.8060806120300771, 2);
  sqcRZGate(q, -0.8290958766996431, 2);
  sqcRYGate(q, 1.8997854802292302, 3);
  sqcRZGate(q, -2.8362853706240556, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.00032244833944261586, 0);
  sqcRZGate(q, -2.7450967618968405, 0);
  sqcRYGate(q, 2.4488282132309562, 1);
  sqcRZGate(q, -1.758194208934361, 1);
  sqcRYGate(q, 0.25869516423891703, 2);
  sqcRZGate(q, -0.5211294383970372, 2);
  sqcRYGate(q, -1.4885934912932406, 3);
  sqcRZGate(q, 3.087282606036298, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.5685751035878965, 0);
  sqcRZGate(q, 0.9835922970845381, 0);
  sqcRYGate(q, 1.4156156067715773, 1);
  sqcRZGate(q, -1.3181651578258813, 1);
  sqcRYGate(q, -1.0126512426276846, 2);
  sqcRZGate(q, 1.0481292305043555, 2);
  sqcRYGate(q, 2.2737158831395607, 3);
  sqcRZGate(q, 2.9191274344371525, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.20141337302790557, 0);
  sqcRZGate(q, 1.018071817179654, 0);
  sqcRYGate(q, 2.8786737948343104, 1);
  sqcRZGate(q, 2.969938742481682, 1);
  sqcRYGate(q, -1.913815887884045, 2);
  sqcRZGate(q, 3.0371439011830916, 2);
  sqcRYGate(q, -1.0298280850832517, 3);
  sqcRZGate(q, -1.88115368470869, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.7261234019111797, 0);
  sqcRZGate(q, -1.5421079066605792, 0);
  sqcRYGate(q, -0.07861226505751784, 1);
  sqcRZGate(q, -1.545589712378188, 1);
  sqcRYGate(q, -0.11586359401639879, 2);
  sqcRZGate(q, 3.05463126837273, 2);
  sqcRYGate(q, 1.0003931343039607, 3);
  sqcRZGate(q, 0.57346242076777, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.09680329187512893, 0);
  sqcRZGate(q, 2.717931311944398, 0);
  sqcRYGate(q, -0.8326917824605244, 1);
  sqcRZGate(q, -3.090697129713961, 1);
  sqcRYGate(q, -2.2519557685104763, 2);
  sqcRZGate(q, 2.0651654225820106, 2);
  sqcRYGate(q, -3.070912305952768, 3);
  sqcRZGate(q, -1.1167155066638568, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.7576676377683456, 0);
  sqcRZGate(q, -1.063844007551538, 0);
  sqcRYGate(q, -2.3387738716936677, 1);
  sqcRZGate(q, 1.9548156647739638, 1);
  sqcRYGate(q, -0.9016969579582793, 2);
  sqcRZGate(q, -0.19441172875256732, 2);
  sqcRYGate(q, -2.307764043754949, 3);
  sqcRZGate(q, 2.3935577947283657, 3);

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
