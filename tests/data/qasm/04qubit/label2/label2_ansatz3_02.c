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

  sqcRYGate(q, -0.7398628529441211, 0);
  sqcRZGate(q, -3.002043658061201, 0);
  sqcRYGate(q, -1.2894482979621333, 1);
  sqcRZGate(q, 1.4304958043903988, 1);
  sqcRYGate(q, 0.31940260685399746, 2);
  sqcRZGate(q, -2.5251675175444244, 2);
  sqcRYGate(q, -0.40293466342376405, 3);
  sqcRZGate(q, -1.348461461333441, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.2577097722382637, 0);
  sqcRZGate(q, -2.938461658773531, 0);
  sqcRYGate(q, -3.1291069024539673, 1);
  sqcRZGate(q, -1.141323769428367, 1);
  sqcRYGate(q, 0.0017412153764344235, 2);
  sqcRZGate(q, -0.08826638182880896, 2);
  sqcRYGate(q, -2.1988514407144457, 3);
  sqcRZGate(q, 2.9013868362375037, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.840700766160012, 0);
  sqcRZGate(q, -1.8141639549334556, 0);
  sqcRYGate(q, 1.7162382551441133, 1);
  sqcRZGate(q, 1.3012794533131606, 1);
  sqcRYGate(q, 1.3427522571160342, 2);
  sqcRZGate(q, -1.6962172698439089, 2);
  sqcRYGate(q, 1.6985298239387716, 3);
  sqcRZGate(q, -2.9830473496647723, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.9524175879159396, 0);
  sqcRZGate(q, 0.905923168245554, 0);
  sqcRYGate(q, 2.1006788445948956, 1);
  sqcRZGate(q, 2.4505568360833245, 1);
  sqcRYGate(q, 2.6190146643045544, 2);
  sqcRZGate(q, 3.0244192389347053, 2);
  sqcRYGate(q, -2.4036447941993258, 3);
  sqcRZGate(q, -1.9407213637182739, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.39325747883249207, 0);
  sqcRZGate(q, 0.9290472920877385, 0);
  sqcRYGate(q, 0.7320134831870841, 1);
  sqcRZGate(q, -0.08762300295948133, 1);
  sqcRYGate(q, -1.569353857796923, 2);
  sqcRZGate(q, -2.4020283526026636, 2);
  sqcRYGate(q, 0.13535471042854305, 3);
  sqcRZGate(q, -0.18430626869803757, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.5045409029917751, 0);
  sqcRZGate(q, 1.0507048397453165, 0);
  sqcRYGate(q, -1.678748817808667, 1);
  sqcRZGate(q, 3.036471792583796, 1);
  sqcRYGate(q, -0.25495895569382476, 2);
  sqcRZGate(q, -2.480546146493243, 2);
  sqcRYGate(q, -1.7022258822630105, 3);
  sqcRZGate(q, -0.5289246222449595, 3);

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
