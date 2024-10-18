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

  sqcRYGate(q, 2.9562414961641506, 0);
  sqcRZGate(q, -1.8171170310553906, 0);
  sqcRYGate(q, 1.5839943171163098, 1);
  sqcRZGate(q, -1.2466314662356766, 1);
  sqcRYGate(q, -2.579789860258657, 2);
  sqcRZGate(q, 0.882531442646666, 2);
  sqcRYGate(q, -1.2207880479376776, 3);
  sqcRZGate(q, 2.3426971091123354, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6298494388817755, 0);
  sqcRZGate(q, -2.5430166787884434, 0);
  sqcRYGate(q, -2.172512704983167, 1);
  sqcRZGate(q, -1.6684784082209347, 1);
  sqcRYGate(q, -1.3626795184163953, 2);
  sqcRZGate(q, 1.0147229201975663, 2);
  sqcRYGate(q, 0.2634252850007996, 3);
  sqcRZGate(q, 1.0410216347720658, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1431683136373803, 0);
  sqcRZGate(q, -0.16883229186567178, 0);
  sqcRYGate(q, 1.7357075969714852, 1);
  sqcRZGate(q, -2.729996123795301, 1);
  sqcRYGate(q, 2.2461651143310215, 2);
  sqcRZGate(q, -0.33241238347781915, 2);
  sqcRYGate(q, -2.171918251626165, 3);
  sqcRZGate(q, 1.657367764232513, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6779971408348986, 0);
  sqcRZGate(q, 1.6507093608722636, 0);
  sqcRYGate(q, 2.3956077222503698, 1);
  sqcRZGate(q, 2.8689616681547947, 1);
  sqcRYGate(q, 0.11625560573667028, 2);
  sqcRZGate(q, -0.3699543402384551, 2);
  sqcRYGate(q, 0.0321528217288209, 3);
  sqcRZGate(q, 0.004870640924230568, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5581557877154826, 0);
  sqcRZGate(q, 3.057690657639605, 0);
  sqcRYGate(q, 2.4752717794975503, 1);
  sqcRZGate(q, 2.7159570002905804, 1);
  sqcRYGate(q, -2.741290462267881, 2);
  sqcRZGate(q, -2.235789602492382, 2);
  sqcRYGate(q, 1.7263501819666092, 3);
  sqcRZGate(q, 2.91205312596443, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.1839633588879672, 0);
  sqcRZGate(q, -1.7233042002323036, 0);
  sqcRYGate(q, -1.387790254306271, 1);
  sqcRZGate(q, 1.40372824434621, 1);
  sqcRYGate(q, -2.1872218945888715, 2);
  sqcRZGate(q, -0.11821529452012225, 2);
  sqcRYGate(q, -0.3096840324418668, 3);
  sqcRZGate(q, -3.049662381973288, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.0325900559519297, 0);
  sqcRZGate(q, -2.199722150693189, 0);
  sqcRYGate(q, 0.3115380570883417, 1);
  sqcRZGate(q, 0.3364074170577327, 1);
  sqcRYGate(q, 1.1903951001900848, 2);
  sqcRZGate(q, -0.8628239229256747, 2);
  sqcRYGate(q, 0.9950464515386503, 3);
  sqcRZGate(q, -0.8891573064440701, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.4379981344188515, 0);
  sqcRZGate(q, 2.6033838856272893, 0);
  sqcRYGate(q, 2.5372660165145433, 1);
  sqcRZGate(q, -2.6871724682373377, 1);
  sqcRYGate(q, 0.2555302994180163, 2);
  sqcRZGate(q, -2.281445319876867, 2);
  sqcRYGate(q, 0.9593008383301083, 3);
  sqcRZGate(q, 1.449663074366672, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.083080613873127, 0);
  sqcRZGate(q, -0.8396764471281108, 0);
  sqcRYGate(q, -2.5867512618839474, 1);
  sqcRZGate(q, -0.5918987783017082, 1);
  sqcRYGate(q, -2.4387927692052926, 2);
  sqcRZGate(q, -0.7513723676425147, 2);
  sqcRYGate(q, 1.233779411233475, 3);
  sqcRZGate(q, 2.7154015003273932, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9980150385710975, 0);
  sqcRZGate(q, -1.3112547694981243, 0);
  sqcRYGate(q, 2.623343339424944, 1);
  sqcRZGate(q, -1.8983242077103377, 1);
  sqcRYGate(q, 1.3360828347429123, 2);
  sqcRZGate(q, -1.1839578564782913, 2);
  sqcRYGate(q, -0.8889036888697984, 3);
  sqcRZGate(q, -1.5764684498473427, 3);

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
