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

  sqcRYGate(q, 2.934706953916445, 0);
  sqcRZGate(q, -3.1414043728738377, 0);
  sqcRYGate(q, -0.6676730714439484, 1);
  sqcRZGate(q, -1.5707855479653414, 1);
  sqcRYGate(q, -1.5707952816682682, 2);
  sqcRZGate(q, -2.2258574574094645, 2);
  sqcRYGate(q, -1.5707858573865046, 3);
  sqcRZGate(q, -0.2697286235563685, 3);
  sqcRYGate(q, -1.5707961278910785, 4);
  sqcRZGate(q, -1.5705775570050087, 4);
  sqcRYGate(q, 1.836900120792797, 5);
  sqcRZGate(q, -1.5707925462220853, 5);
  sqcRYGate(q, 0.23282377986908104, 6);
  sqcRZGate(q, 3.141591490470284, 6);
  sqcRYGate(q, 2.9153136490127496, 7);
  sqcRZGate(q, 3.1415856045018278, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.600231802603018, 0);
  sqcRZGate(q, 1.5707651588628622, 0);
  sqcRYGate(q, 2.8571303064931755, 1);
  sqcRZGate(q, -1.5709284749037427, 1);
  sqcRYGate(q, 0.3091433145351551, 2);
  sqcRZGate(q, -0.8699277460067192, 2);
  sqcRYGate(q, -1.570795976040222, 3);
  sqcRZGate(q, 0.6100404398467383, 3);
  sqcRYGate(q, -0.3137803640588821, 4);
  sqcRZGate(q, -1.5957123918219906e-05, 4);
  sqcRYGate(q, 1.5709878798848105, 5);
  sqcRZGate(q, 1.5707839595254158, 5);
  sqcRYGate(q, -2.236450576485143, 6);
  sqcRZGate(q, 2.434314586395356e-06, 6);
  sqcRYGate(q, -0.7089782348897528, 7);
  sqcRZGate(q, -1.5708048354118427, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.57068932050241, 0);
  sqcRZGate(q, -0.8583092829565846, 0);
  sqcRYGate(q, -2.6780889326764066, 1);
  sqcRZGate(q, -3.1305676080333115e-05, 1);
  sqcRYGate(q, -1.5707934433814479, 2);
  sqcRZGate(q, -3.1415924850519525, 2);
  sqcRYGate(q, 3.1415805472332305, 3);
  sqcRZGate(q, 0.6100396259144291, 3);
  sqcRYGate(q, 0.2598427296130055, 4);
  sqcRZGate(q, -1.5709189550110632, 4);
  sqcRYGate(q, 1.5706910053853695, 5);
  sqcRZGate(q, -1.6662212428374001, 5);
  sqcRYGate(q, -1.5707705009626487, 6);
  sqcRZGate(q, -1.5707968653293696, 6);
  sqcRYGate(q, 1.570793475756114, 7);
  sqcRZGate(q, -2.2530996201261693, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.570845773466894, 0);
  sqcRZGate(q, -1.6775090860012891, 0);
  sqcRYGate(q, -1.570794508014881, 1);
  sqcRZGate(q, 1.5707967834408372, 1);
  sqcRYGate(q, -3.0266438696594378, 2);
  sqcRZGate(q, 1.5707918162226586, 2);
  sqcRYGate(q, -1.5707979260318101, 3);
  sqcRZGate(q, -1.5707949858277965, 3);
  sqcRYGate(q, 0.18750141347523552, 4);
  sqcRZGate(q, 0.0001358888265174758, 4);
  sqcRYGate(q, -3.1415817428004877, 5);
  sqcRZGate(q, 1.0432066618202838, 5);
  sqcRYGate(q, 2.929144194276201, 6);
  sqcRZGate(q, -3.1415897472401553, 6);
  sqcRYGate(q, -1.5707943230246235, 7);
  sqcRZGate(q, 1.5708003651898084, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5997474456241892e-07, 0);
  sqcRZGate(q, 3.055003502138948, 0);
  sqcRYGate(q, 1.5707957114339275, 1);
  sqcRZGate(q, -0.19330288238128793, 1);
  sqcRYGate(q, -1.5707973131646522, 2);
  sqcRZGate(q, 1.3775085286072342, 2);
  sqcRYGate(q, 1.5707929189633982, 3);
  sqcRZGate(q, 1.3775133453329147, 3);
  sqcRYGate(q, -1.570792250120899, 4);
  sqcRZGate(q, -1.7640773096981963, 4);
  sqcRYGate(q, 2.78060101885913e-05, 5);
  sqcRZGate(q, -2.902708979406071, 5);
  sqcRYGate(q, -1.5707856373474138, 6);
  sqcRZGate(q, 2.9483134727312015, 6);
  sqcRYGate(q, 1.5707895899702544, 7);
  sqcRZGate(q, -0.19327271230131782, 7);

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
