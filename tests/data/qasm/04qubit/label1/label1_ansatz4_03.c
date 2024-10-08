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

  sqcRYGate(q, -2.3530101192420325, 0);
  sqcRZGate(q, -1.6028182356254743, 0);
  sqcRYGate(q, -3.0965720748280257, 1);
  sqcRZGate(q, 1.266565751547418, 1);
  sqcRYGate(q, 0.9945731377846424, 2);
  sqcRZGate(q, 2.7721288502197425, 2);
  sqcRYGate(q, -0.1603270039984042, 3);
  sqcRZGate(q, -1.079392819410755, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3485000883991065, 0);
  sqcRZGate(q, 0.7820419662814841, 0);
  sqcRYGate(q, 1.4435390849043657, 1);
  sqcRZGate(q, -0.1542386493140237, 1);
  sqcRYGate(q, 0.7640157222417194, 2);
  sqcRZGate(q, -2.2526937576426294, 2);
  sqcRYGate(q, -0.36298206125001375, 3);
  sqcRZGate(q, -3.066589332869197, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6975797894563174, 0);
  sqcRZGate(q, 1.3240861834692288, 0);
  sqcRYGate(q, -3.016432560128759, 1);
  sqcRZGate(q, 0.7354085285487209, 1);
  sqcRYGate(q, 1.1627400238592527, 2);
  sqcRZGate(q, 0.45225951015022225, 2);
  sqcRYGate(q, 0.6209361316478595, 3);
  sqcRZGate(q, 2.940270970298237, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.486143957376797, 0);
  sqcRZGate(q, -2.6790317130334698, 0);
  sqcRYGate(q, 3.0863335887604193, 1);
  sqcRZGate(q, -2.2535039956002367, 1);
  sqcRYGate(q, -1.6350346325594147, 2);
  sqcRZGate(q, 1.60894159546035, 2);
  sqcRYGate(q, -3.026363366553737, 3);
  sqcRZGate(q, -1.3580135289347695, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.2251059337749437, 0);
  sqcRZGate(q, 2.6425130724282195, 0);
  sqcRYGate(q, -1.1739889630745148, 1);
  sqcRZGate(q, 0.9960636393049581, 1);
  sqcRYGate(q, 2.790127509379096, 2);
  sqcRZGate(q, 2.3736042371976076, 2);
  sqcRYGate(q, -0.26538881962289634, 3);
  sqcRZGate(q, -0.050466118132758815, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9080198197967817, 0);
  sqcRZGate(q, -0.6597152658959083, 0);
  sqcRYGate(q, 0.20851628857473428, 1);
  sqcRZGate(q, -2.1663045613990803, 1);
  sqcRYGate(q, 2.5149415763710308, 2);
  sqcRZGate(q, 2.8564531118202483, 2);
  sqcRYGate(q, 3.128499318811689, 3);
  sqcRZGate(q, 2.3475687117505593, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5581026242636487, 0);
  sqcRZGate(q, 0.2856729436455297, 0);
  sqcRYGate(q, -0.5255988715421269, 1);
  sqcRZGate(q, 0.6122448114430127, 1);
  sqcRYGate(q, 0.09887741242405083, 2);
  sqcRZGate(q, -2.714353576872617, 2);
  sqcRYGate(q, 2.66307353147376, 3);
  sqcRZGate(q, 2.954979430645108, 3);

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
