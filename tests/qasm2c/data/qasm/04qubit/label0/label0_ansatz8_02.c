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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 0.8775348556559543, 0);
  sqcRYGate(q, -2.8897985877057577, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0051789106099576, 0);
  sqcRYGate(q, -0.1354053809265899, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6974079922300351, 2);
  sqcRYGate(q, 2.012296855935149, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.11130632094448066, 2);
  sqcRYGate(q, 0.11848785110670741, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6148861845884329, 0);
  sqcRYGate(q, -0.1487085198818301, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.083105367988166, 0);
  sqcRYGate(q, -1.8691541190867746, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6568490040773215, 1);
  sqcRYGate(q, 0.8592085842412717, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6530241476487557, 1);
  sqcRYGate(q, -0.39728247965041036, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.397686752643891, 0);
  sqcRYGate(q, -1.2172833752816508, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3473100407388725, 0);
  sqcRYGate(q, -0.6978659444927922, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.30975061086801486, 2);
  sqcRYGate(q, -2.8586563705766266, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.27464942204002085, 2);
  sqcRYGate(q, -1.261373651755378, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2496592457515026, 0);
  sqcRYGate(q, -1.7089629227863872, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.00317102696056093, 0);
  sqcRYGate(q, 1.7276580873113834, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5986305499709546, 1);
  sqcRYGate(q, -1.9385509087014459, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6855286867544934, 1);
  sqcRYGate(q, -1.2784451741039682, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.19903909102474682, 0);
  sqcRYGate(q, -3.0939640619595488, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1693514864653691, 0);
  sqcRYGate(q, -2.368770421103352, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4217243938945603, 2);
  sqcRYGate(q, -2.8084495285364315, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5367684034512985, 2);
  sqcRYGate(q, 2.6162851792115656, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0966913389320563, 0);
  sqcRYGate(q, 0.2792155259994604, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3654494401907788, 0);
  sqcRYGate(q, 2.9137342372896144, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1389593439695744, 1);
  sqcRYGate(q, 1.2355842065681746, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.227168617138677, 1);
  sqcRYGate(q, -2.907607610019449, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2985787836374634, 0);
  sqcRYGate(q, -0.9643728296242454, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0508149620267329, 0);
  sqcRYGate(q, 0.8022155120798955, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0731666217055604, 2);
  sqcRYGate(q, -2.2771204228196447, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9444797459162366, 2);
  sqcRYGate(q, -0.32853301389503675, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.505183067568426, 0);
  sqcRYGate(q, 0.995572185806854, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.23256099305443, 0);
  sqcRYGate(q, -2.588370547890974, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.871827581775826, 1);
  sqcRYGate(q, -0.4343465331912135, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5606089418039337, 1);
  sqcRYGate(q, 0.6275218424009317, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.31739675643287946, 0);
  sqcRYGate(q, -1.3062783672342875, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9667597375480074, 0);
  sqcRYGate(q, -3.0667671083575776, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3718104017299, 2);
  sqcRYGate(q, 0.2672860317740158, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1884973506167968, 2);
  sqcRYGate(q, 2.2588537434223745, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.305104843538209, 0);
  sqcRYGate(q, 0.6302335175825032, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5644598327419218, 0);
  sqcRYGate(q, -2.570399820237173, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.23256045206722042, 1);
  sqcRYGate(q, -1.4333674979427418, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.25289977901972804, 1);
  sqcRYGate(q, -1.0483458955596436, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1199442618628934, 0);
  sqcRYGate(q, 2.249362022588356, 1);
  sqcRYGate(q, -2.651670025546595, 2);
  sqcRYGate(q, -0.2854005417225787, 3);

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
