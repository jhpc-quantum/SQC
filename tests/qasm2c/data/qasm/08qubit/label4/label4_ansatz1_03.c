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

  sqcRYGate(q, -1.5708190923036858, 0);
  sqcRZGate(q, 1.5708167062376397, 0);
  sqcRYGate(q, 0.8491362556044117, 1);
  sqcRZGate(q, 1.489587713313199, 1);
  sqcRYGate(q, 1.5708012785951277, 2);
  sqcRZGate(q, -0.8850244270127963, 2);
  sqcRYGate(q, 1.5708024799831537, 3);
  sqcRZGate(q, -1.5705930067780238, 3);
  sqcRYGate(q, 1.5708066520695827, 4);
  sqcRZGate(q, 1.5611620453136728, 4);
  sqcRYGate(q, -1.5707982093709216, 5);
  sqcRZGate(q, 6.170433512812382e-07, 5);
  sqcRYGate(q, 1.570797532203684, 6);
  sqcRZGate(q, 1.5548926544238013, 6);
  sqcRYGate(q, 1.5707939497727983, 7);
  sqcRZGate(q, 1.3791770136887367, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.5375320097010783, 0);
  sqcRZGate(q, 2.830233549744321e-05, 0);
  sqcRYGate(q, -1.5708297321974227, 1);
  sqcRZGate(q, 0.3138254990683677, 1);
  sqcRYGate(q, -2.082018263038776e-05, 2);
  sqcRZGate(q, -0.3306247552741928, 2);
  sqcRYGate(q, 1.5707924084604308, 3);
  sqcRZGate(q, -1.6748057520681625, 3);
  sqcRYGate(q, 3.1231507236825364, 4);
  sqcRZGate(q, -0.009629868827729203, 4);
  sqcRYGate(q, 1.5708116421127798, 5);
  sqcRZGate(q, -2.288517396412786, 5);
  sqcRYGate(q, 1.861376992870583, 6);
  sqcRZGate(q, -0.7550326902024775, 6);
  sqcRYGate(q, 1.7531255414383367, 7);
  sqcRZGate(q, -1.703992276549175, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7819698656133807, 0);
  sqcRZGate(q, 9.102263883995406e-06, 0);
  sqcRYGate(q, -2.065724802037084, 1);
  sqcRZGate(q, -1.6744222420858295, 1);
  sqcRYGate(q, 0.18709055711639347, 2);
  sqcRZGate(q, -3.1415920314965273, 2);
  sqcRYGate(q, 1.6149892676509126e-06, 3);
  sqcRZGate(q, -1.4661177309857112, 3);
  sqcRYGate(q, 1.029078727110505, 4);
  sqcRZGate(q, -3.1415916181010686, 4);
  sqcRYGate(q, -3.141393196934743, 5);
  sqcRZGate(q, -2.5330340218777345, 5);
  sqcRYGate(q, 0.633701023117669, 6);
  sqcRZGate(q, 0.8627982004573767, 6);
  sqcRYGate(q, -3.1415924563199322, 7);
  sqcRZGate(q, 0.22362198530811306, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.8815478608857603, 0);
  sqcRZGate(q, 2.633499864418443, 0);
  sqcRYGate(q, -2.757044144471363, 1);
  sqcRZGate(q, 1.321342872157081, 1);
  sqcRYGate(q, 1.570803568285623, 2);
  sqcRZGate(q, 3.141554155858664, 2);
  sqcRYGate(q, 0.0001553616781810874, 3);
  sqcRZGate(q, 3.1409204148514376, 3);
  sqcRYGate(q, 1.5892333052549716, 4);
  sqcRZGate(q, -3.141458945699618, 4);
  sqcRYGate(q, 3.1415869486129604, 5);
  sqcRZGate(q, 2.8280991457830527, 5);
  sqcRYGate(q, -1.831797059327112, 6);
  sqcRZGate(q, 1.4712258162415406, 6);
  sqcRYGate(q, 3.1414274977607444, 7);
  sqcRZGate(q, -1.2491643868038917, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.1415815000905805, 0);
  sqcRZGate(q, -0.8632325933438397, 0);
  sqcRYGate(q, -1.570810532329317, 1);
  sqcRZGate(q, 3.1415911886690306, 1);
  sqcRYGate(q, 2.879121077575541, 2);
  sqcRZGate(q, -3.469621274110324e-05, 2);
  sqcRYGate(q, -0.4287729841626676, 3);
  sqcRZGate(q, -3.141589418197059, 3);
  sqcRYGate(q, -2.5412900661345152, 4);
  sqcRZGate(q, -3.1413208892870164, 4);
  sqcRYGate(q, 1.5710022809112685, 5);
  sqcRZGate(q, -1.2088101712492971e-05, 5);
  sqcRYGate(q, 1.382199758656017, 6);
  sqcRZGate(q, -1.9964875799865087, 6);
  sqcRYGate(q, -1.570792402939638, 7);
  sqcRZGate(q, -5.79077245621562e-06, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5708076584759527, 0);
  sqcRZGate(q, -1.5707904207803831, 0);
  sqcRYGate(q, -1.529955858619652, 1);
  sqcRZGate(q, 1.5707995241796437, 1);
  sqcRYGate(q, -1.5707933237874976, 2);
  sqcRZGate(q, 1.5707944401713387, 2);
  sqcRYGate(q, -1.5709000864453868, 3);
  sqcRZGate(q, 1.570791718224168, 3);
  sqcRYGate(q, 1.5708459891041429, 4);
  sqcRZGate(q, 1.5707962957357977, 4);
  sqcRYGate(q, -1.570794965236255, 5);
  sqcRZGate(q, 1.5707955552820527, 5);
  sqcRYGate(q, -1.5707978943455796, 6);
  sqcRZGate(q, 1.5707953627371445, 6);
  sqcRYGate(q, 1.5704814139638066, 7);
  sqcRZGate(q, 3.0710716459085834, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5707926514392616, 0);
  sqcRZGate(q, 2.4051590910003573, 0);
  sqcRYGate(q, 1.5707946564460495, 1);
  sqcRZGate(q, -1.7067329063109506, 1);
  sqcRYGate(q, 1.5707976230379634, 2);
  sqcRZGate(q, 2.405121196379414, 2);
  sqcRYGate(q, 1.5707969148028216, 3);
  sqcRZGate(q, -1.7067198387552613, 3);
  sqcRYGate(q, -1.5707974361762211, 4);
  sqcRZGate(q, 0.8343319230464274, 4);
  sqcRYGate(q, -1.57079493055019, 5);
  sqcRZGate(q, -0.13592801437457958, 5);
  sqcRYGate(q, -1.570797615036608, 6);
  sqcRZGate(q, 0.8343469227898421, 6);
  sqcRYGate(q, 3.1414940313782345, 7);
  sqcRZGate(q, 2.935138923693957, 7);

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
