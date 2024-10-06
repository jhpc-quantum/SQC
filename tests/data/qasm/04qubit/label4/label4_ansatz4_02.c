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

  sqcRYGate(q, 1.3213614578602472e-05, 0);
  sqcRZGate(q, 2.695901639901142, 0);
  sqcRYGate(q, 1.5708020768366666, 1);
  sqcRZGate(q, 0.640603713466225, 1);
  sqcRYGate(q, -1.5707951197488743, 2);
  sqcRZGate(q, 2.0013918905367056, 2);
  sqcRYGate(q, -1.305307857061673, 3);
  sqcRZGate(q, -3.1415922732676824, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.1415893725864206, 0);
  sqcRZGate(q, 0.010733146543051575, 0);
  sqcRYGate(q, -3.141584269506832, 1);
  sqcRZGate(q, -0.27777557440116557, 1);
  sqcRYGate(q, -7.200788920584268e-07, 2);
  sqcRZGate(q, 0.09972097400507444, 2);
  sqcRYGate(q, 1.5707828320749444, 3);
  sqcRZGate(q, -1.3996884778043066, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.082217012884437, 0);
  sqcRZGate(q, 2.651184737860518, 0);
  sqcRYGate(q, 2.3734989886592506, 1);
  sqcRZGate(q, -1.849079888987914, 1);
  sqcRYGate(q, 0.18932647375053602, 2);
  sqcRZGate(q, 1.0548107979043326, 2);
  sqcRYGate(q, -2.0069318434952326, 3);
  sqcRZGate(q, -2.7589638847572133, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 6.045771233560522e-06, 0);
  sqcRZGate(q, -0.7322694224394007, 0);
  sqcRYGate(q, 1.4816501042957952e-05, 1);
  sqcRZGate(q, -2.360835838787859, 1);
  sqcRYGate(q, 3.141586426262681, 2);
  sqcRZGate(q, 0.5332128678037114, 2);
  sqcRYGate(q, 1.493003417004429e-06, 3);
  sqcRZGate(q, -1.6409085803705716, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1169528144666, 0);
  sqcRZGate(q, -0.9609665819704646, 0);
  sqcRYGate(q, 2.0062240449540525, 1);
  sqcRZGate(q, 1.7862594724154297, 1);
  sqcRYGate(q, -0.39410446508316627, 2);
  sqcRZGate(q, -0.17126474667762626, 2);
  sqcRYGate(q, 1.5327014645666188, 3);
  sqcRZGate(q, -1.7114343908411567, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.57079772903759, 0);
  sqcRZGate(q, -2.0518569205561983, 0);
  sqcRYGate(q, -1.3270387997366129e-06, 1);
  sqcRZGate(q, 2.3923264645688627, 1);
  sqcRYGate(q, -3.1415915587130803, 2);
  sqcRZGate(q, 1.4604280020830709, 2);
  sqcRYGate(q, -3.1415911391693716, 3);
  sqcRZGate(q, 2.052538253763593, 3);

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
