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

  sqcRYGate(q, 1.2234247664048663, 0);
  sqcRZGate(q, -1.5815895624215894, 0);
  sqcRYGate(q, -3.0090857240232105, 1);
  sqcRZGate(q, 2.374523422577021, 1);
  sqcRYGate(q, 2.827760887279468, 2);
  sqcRZGate(q, -2.949840456284831, 2);
  sqcRYGate(q, 1.5815717668365803, 3);
  sqcRZGate(q, 1.2805607726596735, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6784363873510898, 0);
  sqcRZGate(q, -2.9149172126743816, 0);
  sqcRYGate(q, 2.494250031826486, 1);
  sqcRZGate(q, -0.9585982702738366, 1);
  sqcRYGate(q, 2.9614556158563983, 2);
  sqcRZGate(q, 0.3623100234242456, 2);
  sqcRYGate(q, -2.8296440319319607, 3);
  sqcRZGate(q, -1.1239547414132316, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8894707162576236, 0);
  sqcRZGate(q, 2.8437922674425278, 0);
  sqcRYGate(q, -1.2296269088515581, 1);
  sqcRZGate(q, 3.100111284679201, 1);
  sqcRYGate(q, 0.09047435714732746, 2);
  sqcRZGate(q, -1.6812652671218606, 2);
  sqcRYGate(q, -2.497805720963663, 3);
  sqcRZGate(q, -2.171471900627548, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.4724266584626803, 0);
  sqcRZGate(q, -0.3612759558486429, 0);
  sqcRYGate(q, -2.694651123132313, 1);
  sqcRZGate(q, 1.7369560789627785, 1);
  sqcRYGate(q, 0.5673347303948271, 2);
  sqcRZGate(q, 1.7226508025616283, 2);
  sqcRYGate(q, -1.050135255698323, 3);
  sqcRZGate(q, 2.925353961011415, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.2297867627056727, 0);
  sqcRZGate(q, -2.4776632082228995, 0);
  sqcRYGate(q, 0.06616682434929223, 1);
  sqcRZGate(q, 1.8959023125425045, 1);
  sqcRYGate(q, -1.7910435676111685, 2);
  sqcRZGate(q, 2.399077504033551, 2);
  sqcRYGate(q, -2.6222321253365055, 3);
  sqcRZGate(q, -0.28012921519771083, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.19325200871137022, 0);
  sqcRZGate(q, -0.24515558158380868, 0);
  sqcRYGate(q, -2.0207395330147486, 1);
  sqcRZGate(q, 1.7178081151931588, 1);
  sqcRYGate(q, -1.4863465098462383, 2);
  sqcRZGate(q, -1.9291196149980132, 2);
  sqcRYGate(q, 1.4414686870248845, 3);
  sqcRZGate(q, 0.2802191013180418, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.33733830820000493, 0);
  sqcRZGate(q, 1.3264262485437577, 0);
  sqcRYGate(q, 1.3810073292749143, 1);
  sqcRZGate(q, 1.5542619238323627, 1);
  sqcRYGate(q, 2.645582987796753, 2);
  sqcRZGate(q, 2.9384541182903474, 2);
  sqcRYGate(q, -2.398833707350429, 3);
  sqcRZGate(q, -2.6520950612857175, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9099926798111406, 0);
  sqcRZGate(q, -2.3830569077739314, 0);
  sqcRYGate(q, 1.4719469527742435, 1);
  sqcRZGate(q, -0.9823846309232422, 1);
  sqcRYGate(q, 0.8535082101001086, 2);
  sqcRZGate(q, -0.7564865040781931, 2);
  sqcRYGate(q, 0.79327921056717, 3);
  sqcRZGate(q, -1.6488001284581815, 3);

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
