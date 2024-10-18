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

  sqcRYGate(q, 3.1004462968905777, 0);
  sqcRZGate(q, 9.513053813791031e-06, 0);
  sqcRYGate(q, 2.2795374719307455, 1);
  sqcRZGate(q, 3.1415718370887955, 1);
  sqcRYGate(q, -3.0860284812265677, 2);
  sqcRZGate(q, 3.141580298506375, 2);
  sqcRYGate(q, 1.5975086858749252, 3);
  sqcRZGate(q, -3.141590962552393, 3);
  sqcRYGate(q, 3.1060601187891725, 4);
  sqcRZGate(q, -2.2745395218762922e-05, 4);
  sqcRYGate(q, -0.582844944849664, 5);
  sqcRZGate(q, -3.1415764418058054, 5);
  sqcRYGate(q, -3.141592617101716, 6);
  sqcRZGate(q, -2.147004508609382, 6);
  sqcRYGate(q, 2.985309156264043, 7);
  sqcRZGate(q, -3.1415777795319784, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.1780217923407905, 0);
  sqcRZGate(q, -3.141587372186287, 0);
  sqcRYGate(q, -3.0758927639697755, 1);
  sqcRZGate(q, 3.141422927660805, 1);
  sqcRYGate(q, 1.6406392978796154, 2);
  sqcRZGate(q, -1.0262287488238542e-05, 2);
  sqcRYGate(q, -1.6403157918361186, 3);
  sqcRZGate(q, -4.413724181695499e-05, 3);
  sqcRYGate(q, 0.33657904043059267, 4);
  sqcRZGate(q, -3.1415875460785125, 4);
  sqcRYGate(q, -0.0439649434241689, 5);
  sqcRZGate(q, -3.141581716793388, 5);
  sqcRYGate(q, 3.141592648047188, 6);
  sqcRZGate(q, -2.774585770422924, 6);
  sqcRYGate(q, -0.05669765583924059, 7);
  sqcRZGate(q, -3.1415881860164045, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.0220032976584759, 0);
  sqcRZGate(q, 0.2966561607868572, 0);
  sqcRYGate(q, -3.123225244215937, 1);
  sqcRZGate(q, 1.6636088746177824, 1);
  sqcRYGate(q, -2.64381274641993, 2);
  sqcRZGate(q, -0.06203194059193251, 2);
  sqcRYGate(q, -3.1174650036869256, 3);
  sqcRZGate(q, 2.2086506045826564, 3);
  sqcRYGate(q, 1.7742171939912588, 4);
  sqcRZGate(q, 0.46800237269813777, 4);
  sqcRYGate(q, -3.1011593747557944, 5);
  sqcRZGate(q, 2.68003765841677, 5);
  sqcRYGate(q, 1.5707966845560772, 6);
  sqcRZGate(q, 3.343013486662382e-07, 6);
  sqcRYGate(q, 0.1704734822953297, 7);
  sqcRZGate(q, -2.9393059335392473, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.2858771914137782e-07, 0);
  sqcRZGate(q, 0.5484891473638438, 0);
  sqcRYGate(q, 3.1415926488821393, 1);
  sqcRZGate(q, -0.632672479601351, 1);
  sqcRYGate(q, 3.1415926279653337, 2);
  sqcRZGate(q, -2.358467551262081, 2);
  sqcRYGate(q, -3.1415926313571676, 3);
  sqcRZGate(q, -0.0877354994687334, 3);
  sqcRYGate(q, -3.141592409925446, 4);
  sqcRZGate(q, -1.8284447323843862, 4);
  sqcRYGate(q, -3.1415925950774226, 5);
  sqcRZGate(q, -2.758012467958861, 5);
  sqcRYGate(q, 1.570796788797849, 6);
  sqcRZGate(q, -2.2964469739095863, 6);
  sqcRYGate(q, 2.108987780119747e-07, 7);
  sqcRZGate(q, 0.6428563526070595, 7);

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
