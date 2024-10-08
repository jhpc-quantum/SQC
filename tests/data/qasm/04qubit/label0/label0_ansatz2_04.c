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

  sqcRYGate(q, -1.516047355265166, 0);
  sqcRZGate(q, -1.655244574523618, 0);
  sqcRYGate(q, -0.550320162617667, 1);
  sqcRZGate(q, 1.921149801258076, 1);
  sqcRYGate(q, 1.5710928909814283, 2);
  sqcRZGate(q, -0.91684995634263, 2);
  sqcRYGate(q, -1.1825433748039238, 3);
  sqcRZGate(q, 1.658412428926762, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.5145619310143764, 0);
  sqcRZGate(q, -2.181056939175646, 0);
  sqcRYGate(q, 2.8059234972015017, 1);
  sqcRZGate(q, 1.0181554953938976, 1);
  sqcRYGate(q, 2.585716081352495, 2);
  sqcRZGate(q, -2.0919602039869223, 2);
  sqcRYGate(q, 0.81841063398252, 3);
  sqcRZGate(q, -2.570620633480007, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.17566357403060448, 0);
  sqcRZGate(q, 0.020536602432517977, 0);
  sqcRYGate(q, 1.1772214533295706, 1);
  sqcRZGate(q, -0.31995198136991654, 1);
  sqcRYGate(q, 0.4057375140872477, 2);
  sqcRZGate(q, 1.0255691716361663, 2);
  sqcRYGate(q, 2.2564020848899977, 3);
  sqcRZGate(q, -1.6553456203842807, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.4978969569316352, 0);
  sqcRZGate(q, 1.6156542214211829, 0);
  sqcRYGate(q, 2.646836446317028, 1);
  sqcRZGate(q, -1.4843538271791366, 1);
  sqcRYGate(q, 0.3136723559558128, 2);
  sqcRZGate(q, 1.6307467664552506, 2);
  sqcRYGate(q, -1.4523964788145252, 3);
  sqcRZGate(q, 0.11886085547987126, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.5056628910244836, 0);
  sqcRZGate(q, 1.5140124588862092, 0);
  sqcRYGate(q, -2.7231303911432985, 1);
  sqcRZGate(q, 2.747838675742232, 1);
  sqcRYGate(q, 0.14831318663728665, 2);
  sqcRZGate(q, -2.1556552204733146, 2);
  sqcRYGate(q, 0.21046295811832572, 3);
  sqcRZGate(q, 2.606946975613646, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.3052068878785648, 0);
  sqcRZGate(q, 1.9931610777877233, 0);
  sqcRYGate(q, -0.5084502364367589, 1);
  sqcRZGate(q, -1.256998904522967, 1);
  sqcRYGate(q, 0.19166206985179457, 2);
  sqcRZGate(q, -2.6755886429622886, 2);
  sqcRYGate(q, -0.7634856120644365, 3);
  sqcRZGate(q, 0.5186570017575054, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.0625573918345976, 0);
  sqcRZGate(q, 3.123794749282172, 0);
  sqcRYGate(q, -2.150847496744552, 1);
  sqcRZGate(q, 1.302970934602179, 1);
  sqcRYGate(q, 2.792318046867642, 2);
  sqcRZGate(q, 1.1897695271589308, 2);
  sqcRYGate(q, 0.4356811460889656, 3);
  sqcRZGate(q, -1.434509786189511, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.25369117292395005, 0);
  sqcRZGate(q, -0.4879150128722358, 0);
  sqcRYGate(q, -2.298606022050908, 1);
  sqcRZGate(q, -2.557288527135592, 1);
  sqcRYGate(q, -3.1014253747490526, 2);
  sqcRZGate(q, -3.1396699645502832, 2);
  sqcRYGate(q, -0.5770884430805068, 3);
  sqcRZGate(q, 0.7223960877628864, 3);

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
