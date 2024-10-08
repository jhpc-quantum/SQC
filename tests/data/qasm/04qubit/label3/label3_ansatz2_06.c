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

  sqcRYGate(q, 2.635129412821227, 0);
  sqcRZGate(q, -0.13501031009743716, 0);
  sqcRYGate(q, 2.2912502528112495, 1);
  sqcRZGate(q, -0.05164160906011617, 1);
  sqcRYGate(q, -0.8043415298101775, 2);
  sqcRZGate(q, -2.593154246314105, 2);
  sqcRYGate(q, 0.6990959118233642, 3);
  sqcRZGate(q, 1.7188193985414795, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.1931338812653047, 0);
  sqcRZGate(q, -0.11715158464558743, 0);
  sqcRYGate(q, -1.2072411720029756, 1);
  sqcRZGate(q, -0.8883211433749363, 1);
  sqcRYGate(q, 0.29851026091974886, 2);
  sqcRZGate(q, 3.1207567706371253, 2);
  sqcRYGate(q, -0.4492557212365835, 3);
  sqcRZGate(q, -0.3303625007756281, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.8687547625019123, 0);
  sqcRZGate(q, -0.6632629638967096, 0);
  sqcRYGate(q, 1.1917386603213527, 1);
  sqcRZGate(q, 2.2226863002445323, 1);
  sqcRYGate(q, -0.2550362025040828, 2);
  sqcRZGate(q, 0.08478426733572425, 2);
  sqcRYGate(q, 2.750340340956795, 3);
  sqcRZGate(q, 2.1724945520029486, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.987411593268524, 0);
  sqcRZGate(q, 1.3403418647171925, 0);
  sqcRYGate(q, 3.0214315468078423, 1);
  sqcRZGate(q, -2.6363986261308363, 1);
  sqcRYGate(q, -0.7054843647331559, 2);
  sqcRZGate(q, 0.6130703155955444, 2);
  sqcRYGate(q, -0.7565054690014622, 3);
  sqcRZGate(q, -0.9419646533862664, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.9419723971476697, 0);
  sqcRZGate(q, 0.06273028975248353, 0);
  sqcRYGate(q, 0.2289196834833046, 1);
  sqcRZGate(q, 0.9780617111549167, 1);
  sqcRYGate(q, 1.4404912523779114, 2);
  sqcRZGate(q, 2.1712406567590112, 2);
  sqcRYGate(q, 0.4581111207940177, 3);
  sqcRZGate(q, -0.7087046759460324, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.7400696458224432, 0);
  sqcRZGate(q, 2.310608511799548, 0);
  sqcRYGate(q, 1.4456172364155182, 1);
  sqcRZGate(q, -2.8541994836743023, 1);
  sqcRYGate(q, -2.7037224084635194, 2);
  sqcRZGate(q, -1.5530436927714282, 2);
  sqcRYGate(q, -2.903034122643153, 3);
  sqcRZGate(q, -0.09721175680037206, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.8596770914683542, 0);
  sqcRZGate(q, -1.876934024741231, 0);
  sqcRYGate(q, 2.6435052002122585, 1);
  sqcRZGate(q, 1.0831790257595044, 1);
  sqcRYGate(q, 1.6927963999807067, 2);
  sqcRZGate(q, -1.229016298331165, 2);
  sqcRYGate(q, 1.9340888981657318, 3);
  sqcRZGate(q, -0.11291400060326495, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.0119789297263533, 0);
  sqcRZGate(q, -0.5173458746552404, 0);
  sqcRYGate(q, -0.4572360974660752, 1);
  sqcRZGate(q, 3.053227162827243, 1);
  sqcRYGate(q, -1.8164420826220917, 2);
  sqcRZGate(q, -0.0729886760793525, 2);
  sqcRYGate(q, -1.5831413287500449, 3);
  sqcRZGate(q, -0.29093502777498964, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.3278681133332184, 0);
  sqcRZGate(q, 2.6759969265312242, 0);
  sqcRYGate(q, 1.1545552960292023, 1);
  sqcRZGate(q, -1.2720664913627653, 1);
  sqcRYGate(q, 1.789339376074742, 2);
  sqcRZGate(q, 3.0028677606322987, 2);
  sqcRYGate(q, -2.521338764127815, 3);
  sqcRZGate(q, 1.1380017235511377, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.3882734758305784, 0);
  sqcRZGate(q, 1.804106809654815, 0);
  sqcRYGate(q, -2.7973846254653356, 1);
  sqcRZGate(q, -2.507192695494053, 1);
  sqcRYGate(q, -2.3969139956270507, 2);
  sqcRZGate(q, 1.6046887247393036, 2);
  sqcRYGate(q, 1.7564317770712838, 3);
  sqcRZGate(q, 2.7680094885016926, 3);

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
