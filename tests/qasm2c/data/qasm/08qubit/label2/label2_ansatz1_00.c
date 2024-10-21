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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 3.0806520039717156, 0);
  sqcRZGate(q, 1.700861345260086, 0);
  sqcRYGate(q, -1.9684500609834663, 1);
  sqcRZGate(q, 3.110702416826925, 1);
  sqcRYGate(q, 1.5710918742975108, 2);
  sqcRZGate(q, -1.722395861914196, 2);
  sqcRYGate(q, -2.37452279296752, 3);
  sqcRZGate(q, -0.2787514387442379, 3);
  sqcRYGate(q, -0.7668597965935602, 4);
  sqcRZGate(q, -0.0668410400761184, 4);
  sqcRYGate(q, -1.5732299781521526, 5);
  sqcRZGate(q, 1.432276888863556, 5);
  sqcRYGate(q, 1.6731261592051956, 6);
  sqcRZGate(q, 0.031231607561908518, 6);
  sqcRYGate(q, 0.06117411391360202, 7);
  sqcRZGate(q, -1.1871425908580184, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.013117173258426538, 0);
  sqcRZGate(q, -1.7122632317097803, 0);
  sqcRYGate(q, 1.574641059199491, 1);
  sqcRZGate(q, -1.436911056444982, 1);
  sqcRYGate(q, 0.6610427193088642, 2);
  sqcRZGate(q, -3.1401838905474726, 2);
  sqcRYGate(q, -1.5473132748282366, 3);
  sqcRZGate(q, -1.524084986933226, 3);
  sqcRYGate(q, 1.5588464103039372, 4);
  sqcRZGate(q, 1.5565955040801482, 4);
  sqcRYGate(q, 0.6140921840079182, 5);
  sqcRZGate(q, -0.00043997600543210774, 5);
  sqcRYGate(q, 1.5743035911931358, 6);
  sqcRZGate(q, 1.4314208068714835, 6);
  sqcRYGate(q, -3.12834476504641, 7);
  sqcRZGate(q, -1.196441360381701, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5731902965334408, 0);
  sqcRZGate(q, -2.5475843311245803, 0);
  sqcRYGate(q, 1.5138427088623143, 1);
  sqcRZGate(q, 2.8144334654485146, 1);
  sqcRYGate(q, 2.6077664319166876, 2);
  sqcRZGate(q, -2.531789466433717, 2);
  sqcRYGate(q, 0.04487256237573517, 3);
  sqcRZGate(q, -2.234871330015155, 3);
  sqcRYGate(q, -3.0963975849252203, 4);
  sqcRZGate(q, 2.132740785454323, 4);
  sqcRYGate(q, -0.5400298486327308, 5);
  sqcRZGate(q, 2.563241683149636, 5);
  sqcRYGate(q, -1.554160497314947, 6);
  sqcRZGate(q, 0.7598203392622469, 6);
  sqcRYGate(q, -1.567085063411833, 7);
  sqcRZGate(q, 0.6551891510711368, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.0709226815053619, 0);
  sqcRZGate(q, -2.2923699281340943, 0);
  sqcRYGate(q, 0.7493350980459725, 1);
  sqcRZGate(q, -1.3292809445183646, 1);
  sqcRYGate(q, 2.020122454472024, 2);
  sqcRZGate(q, -0.378044379884197, 2);
  sqcRYGate(q, 1.1116436885948273, 3);
  sqcRZGate(q, 2.7797579363678735, 3);
  sqcRYGate(q, 1.0381977663239752, 4);
  sqcRZGate(q, 0.9011025006238513, 4);
  sqcRYGate(q, 2.105652893264474, 5);
  sqcRZGate(q, -2.23824280983135, 5);
  sqcRYGate(q, -0.7808050585821075, 6);
  sqcRZGate(q, 1.7920377842180137, 6);
  sqcRYGate(q, 2.043723898435122, 7);
  sqcRZGate(q, -0.3031333856812273, 7);

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
