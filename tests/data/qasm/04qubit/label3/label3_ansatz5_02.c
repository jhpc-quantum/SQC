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

  sqcRYGate(q, -2.1262197100470974, 0);
  sqcRYGate(q, 2.972219228166739, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.114643506170524, 0);
  sqcRYGate(q, -0.3416781720160982, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9565475344019987, 2);
  sqcRYGate(q, 2.278431779534621, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6719013780768384, 2);
  sqcRYGate(q, -0.9131622911217816, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9950967383821236, 1);
  sqcRYGate(q, -2.4929310475473354, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2973067065491444, 1);
  sqcRYGate(q, -0.6787664440562358, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.119367272283168, 0);
  sqcRYGate(q, -2.2960112691016, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4319574393829217, 0);
  sqcRYGate(q, 1.9190814225769257, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0199021288908505, 2);
  sqcRYGate(q, -0.04383398432421792, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5097117837647751, 2);
  sqcRYGate(q, 0.11097580138534742, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.020980660876923, 1);
  sqcRYGate(q, 1.8884061321383374, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4008827841647222, 1);
  sqcRYGate(q, -2.8393546800103744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0433140100979124, 0);
  sqcRYGate(q, -0.8495900063565003, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1907468581595362, 0);
  sqcRYGate(q, -1.8045863687660924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.674847282978327, 2);
  sqcRYGate(q, -1.95958333683651, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5826262229928227, 2);
  sqcRYGate(q, -3.1127107936113747, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.986957302006728, 1);
  sqcRYGate(q, 1.510902460382309, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.015572891774228935, 1);
  sqcRYGate(q, 2.12066088579962, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.774078820517874, 0);
  sqcRYGate(q, 2.281508411181835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6887604606759745, 0);
  sqcRYGate(q, -1.9737189657125538, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.45091479850000454, 2);
  sqcRYGate(q, -0.22669213908041816, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.95186756387446, 2);
  sqcRYGate(q, -2.4119105357667263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9396957437776372, 1);
  sqcRYGate(q, 1.409036598112972, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0409100222894283, 1);
  sqcRYGate(q, 2.2216623937364033, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2134612024683564, 0);
  sqcRYGate(q, -0.2883320686103856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.21274901050085096, 0);
  sqcRYGate(q, -0.17903184810034153, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.24290569298530862, 2);
  sqcRYGate(q, 2.0890474308543276, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.21166578210267528, 2);
  sqcRYGate(q, -2.9194066801388563, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.111486374717159, 1);
  sqcRYGate(q, 1.2049904296988565, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7069559533298126, 1);
  sqcRYGate(q, -0.02076025300856621, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8621970050300454, 0);
  sqcRYGate(q, -2.916568905619524, 1);
  sqcRYGate(q, -0.8690140668696573, 2);
  sqcRYGate(q, -1.0645923800142558, 3);

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
