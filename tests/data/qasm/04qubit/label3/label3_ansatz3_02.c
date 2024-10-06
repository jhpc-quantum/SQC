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

  sqcRYGate(q, -1.0484298607278044, 0);
  sqcRZGate(q, -3.0430249390431294, 0);
  sqcRYGate(q, 2.1280813042371154, 1);
  sqcRZGate(q, 1.7723318597184567, 1);
  sqcRYGate(q, -3.111066775801761, 2);
  sqcRZGate(q, -0.8294470247164192, 2);
  sqcRYGate(q, 2.2951730372196724, 3);
  sqcRZGate(q, 0.21402951016935462, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.6600591541501595, 0);
  sqcRZGate(q, 2.988051559709012, 0);
  sqcRYGate(q, 2.0714324886823894, 1);
  sqcRZGate(q, -2.304827292607679, 1);
  sqcRYGate(q, 0.6853229303130046, 2);
  sqcRZGate(q, 2.6145266033497103, 2);
  sqcRYGate(q, -2.6340969659590776, 3);
  sqcRZGate(q, -2.0252497759223216, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 3.0844635696704765, 0);
  sqcRZGate(q, -2.622630656294666, 0);
  sqcRYGate(q, 1.6345302972935576, 1);
  sqcRZGate(q, -1.279698141895456, 1);
  sqcRYGate(q, 0.679998432571506, 2);
  sqcRZGate(q, 0.06637150447641459, 2);
  sqcRYGate(q, -2.8845210462091555, 3);
  sqcRZGate(q, 1.9667031326918547, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.0035621181472693664, 0);
  sqcRZGate(q, 1.9345433290388634, 0);
  sqcRYGate(q, 2.5299023623779178, 1);
  sqcRZGate(q, 0.9286178793684271, 1);
  sqcRYGate(q, -2.360009518089167, 2);
  sqcRZGate(q, -1.4274976216745845, 2);
  sqcRYGate(q, -0.06083407588553058, 3);
  sqcRZGate(q, 0.4875220871978554, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.8788394553537936, 0);
  sqcRZGate(q, -0.7385778939946583, 0);
  sqcRYGate(q, -2.4953268083216757, 1);
  sqcRZGate(q, -1.6748615094630077, 1);
  sqcRYGate(q, -2.89729871287671, 2);
  sqcRZGate(q, -1.7099567378751437, 2);
  sqcRYGate(q, -2.9577272037984774, 3);
  sqcRZGate(q, -2.111754243856865, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.6029785344855212, 0);
  sqcRZGate(q, 1.6633994727800432, 0);
  sqcRYGate(q, 0.34126719102691006, 1);
  sqcRZGate(q, 0.8631071341957205, 1);
  sqcRYGate(q, -2.986401582509144, 2);
  sqcRZGate(q, 0.8841560502146305, 2);
  sqcRYGate(q, 3.120298519285329, 3);
  sqcRZGate(q, -3.122071809288529, 3);

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
