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

  sqcRYGate(q, 2.9822854468567614, 0);
  sqcRZGate(q, -0.9256757295551951, 0);
  sqcRYGate(q, 1.7121363560820544, 1);
  sqcRZGate(q, 3.02092171430706, 1);
  sqcRYGate(q, -2.937074023875634, 2);
  sqcRZGate(q, -0.3251735618784153, 2);
  sqcRYGate(q, -0.1882054737967689, 3);
  sqcRZGate(q, -2.8429750328792864, 3);
  sqcRYGate(q, 0.1888988585373256, 4);
  sqcRZGate(q, -0.24143192216216858, 4);
  sqcRYGate(q, -0.1941276040164821, 5);
  sqcRZGate(q, -0.25497527977763423, 5);
  sqcRYGate(q, 1.3883248834832305, 6);
  sqcRZGate(q, -2.6948214114339075, 6);
  sqcRYGate(q, -0.14566978327948465, 7);
  sqcRZGate(q, -2.281635672014839, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.34769941266869875, 0);
  sqcRZGate(q, -2.949132761956771, 0);
  sqcRYGate(q, -0.9325025212780542, 1);
  sqcRZGate(q, -1.1445337455780027, 1);
  sqcRYGate(q, -1.2293130745914302, 2);
  sqcRZGate(q, 2.565640723180639, 2);
  sqcRYGate(q, -2.60303377770844, 3);
  sqcRZGate(q, 2.5902294378431154, 3);
  sqcRYGate(q, 0.5364249761577703, 4);
  sqcRZGate(q, 1.7240755008021917, 4);
  sqcRYGate(q, 1.9150611390066112, 5);
  sqcRZGate(q, -1.6040607746152136, 5);
  sqcRYGate(q, -0.7435471082815294, 6);
  sqcRZGate(q, 1.0909314625619746, 6);
  sqcRYGate(q, 1.5252322464281027, 7);
  sqcRZGate(q, -1.2282040780677077, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.83069388134593, 0);
  sqcRZGate(q, -1.4350474876720543, 0);
  sqcRYGate(q, -1.6128878863421097, 1);
  sqcRZGate(q, 2.5322830603641924, 1);
  sqcRYGate(q, -0.00866281069101182, 2);
  sqcRZGate(q, -1.4155264901469424, 2);
  sqcRYGate(q, 3.128258620271123, 3);
  sqcRZGate(q, 0.9582765513288415, 3);
  sqcRYGate(q, -0.03810415741682989, 4);
  sqcRZGate(q, 3.0451094208587666, 4);
  sqcRYGate(q, -3.1321610971339426, 5);
  sqcRZGate(q, -0.3941845505756323, 5);
  sqcRYGate(q, 0.3184192090098579, 6);
  sqcRZGate(q, -0.1453925258060767, 6);
  sqcRYGate(q, -1.5282042158300433, 7);
  sqcRZGate(q, -1.599063987407887, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.667006043020045, 0);
  sqcRZGate(q, 0.8305475926849014, 0);
  sqcRYGate(q, -1.3772103891082859, 1);
  sqcRZGate(q, -0.6621201077304406, 1);
  sqcRYGate(q, 0.2886260826701187, 2);
  sqcRZGate(q, -1.9042224406863377, 2);
  sqcRYGate(q, -2.3128316380017413, 3);
  sqcRZGate(q, 0.8220005400136259, 3);
  sqcRYGate(q, -2.3323377087726396, 4);
  sqcRZGate(q, -2.4044186173029813, 4);
  sqcRYGate(q, 2.834693785774188, 5);
  sqcRZGate(q, -2.7591948211636037, 5);
  sqcRYGate(q, -0.9742933355012361, 6);
  sqcRZGate(q, 0.7852582662663876, 6);
  sqcRYGate(q, 1.1130197000730657, 7);
  sqcRZGate(q, -2.315869337472281, 7);

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
