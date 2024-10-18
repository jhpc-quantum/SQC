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

  sqcRYGate(q, 0.9831639690498665, 0);
  sqcRZGate(q, -0.2949732041176816, 0);
  sqcRYGate(q, -3.1415920947083698, 1);
  sqcRZGate(q, 1.9744694183905045, 1);
  sqcRYGate(q, 1.570796048808827, 2);
  sqcRZGate(q, -8.722104224645477e-06, 2);
  sqcRYGate(q, 1.570797372166414, 3);
  sqcRZGate(q, -2.655163072128064, 3);
  sqcRYGate(q, -1.5708002848894091, 4);
  sqcRZGate(q, -9.166643356446001e-08, 4);
  sqcRYGate(q, -2.553197825531614, 5);
  sqcRZGate(q, 0.006021306427817842, 5);
  sqcRYGate(q, -1.495281669640228, 6);
  sqcRZGate(q, -0.002251948851424609, 6);
  sqcRYGate(q, -1.4909602190714566, 7);
  sqcRZGate(q, 3.0717995802519527, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.6417337736189026, 0);
  sqcRZGate(q, 0.2444928188434146, 0);
  sqcRYGate(q, -1.5707224940893894, 1);
  sqcRZGate(q, 2.4613283560681554, 1);
  sqcRYGate(q, -1.5707937611030536, 2);
  sqcRZGate(q, -0.09423131280989683, 2);
  sqcRYGate(q, 0.4371805332158054, 3);
  sqcRZGate(q, 2.66646674455181, 3);
  sqcRYGate(q, 1.5707966038024805, 4);
  sqcRZGate(q, -0.8613036883056093, 4);
  sqcRYGate(q, 1.5707952842677295, 5);
  sqcRZGate(q, -3.141591994933279, 5);
  sqcRYGate(q, -1.5415657493528072, 6);
  sqcRZGate(q, -1.9758981039410708, 6);
  sqcRYGate(q, 1.3713221416752202, 7);
  sqcRZGate(q, 0.32724860926724125, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.570806389150402, 0);
  sqcRZGate(q, 1.2546253699455001, 0);
  sqcRYGate(q, -1.4581150343009845, 1);
  sqcRZGate(q, -1.3881857471543295, 1);
  sqcRYGate(q, -3.141574127091176, 2);
  sqcRZGate(q, -0.33675660748800507, 2);
  sqcRYGate(q, -2.503261926145899, 3);
  sqcRZGate(q, 0.4891208442572168, 3);
  sqcRYGate(q, 1.5956182094225997, 4);
  sqcRZGate(q, 2.7024440691642178, 4);
  sqcRYGate(q, -1.5707963714538602, 5);
  sqcRZGate(q, 1.4769859167686148, 5);
  sqcRYGate(q, -3.1415919973159134, 6);
  sqcRZGate(q, -1.975888305307773, 6);
  sqcRYGate(q, 0.01892471541010554, 7);
  sqcRZGate(q, 3.0486840147043104, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.8472625715673794, 0);
  sqcRZGate(q, -1.0853903973461971, 0);
  sqcRYGate(q, 2.659132215381643, 1);
  sqcRZGate(q, -2.835947253120253, 1);
  sqcRYGate(q, 1.5707927167690292, 2);
  sqcRZGate(q, -1.5712240858508713, 2);
  sqcRYGate(q, -0.024483950453292103, 3);
  sqcRZGate(q, -1.8428411116949697, 3);
  sqcRYGate(q, -1.4986028971514853, 4);
  sqcRZGate(q, -1.6406993094664424, 4);
  sqcRYGate(q, 1.570796086909553, 5);
  sqcRZGate(q, -3.1415177644927903, 5);
  sqcRYGate(q, 1.570796457317626, 6);
  sqcRZGate(q, 1.5707991972339488, 6);
  sqcRYGate(q, -2.8390810047648958, 7);
  sqcRZGate(q, 0.23338448600750245, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 7.3405679161808735e-06, 0);
  sqcRZGate(q, 0.31437287332233443, 0);
  sqcRYGate(q, 1.5707969205554617, 1);
  sqcRZGate(q, 1.9671862203953963, 1);
  sqcRYGate(q, 3.0990689721588596, 2);
  sqcRZGate(q, 2.443984630264375, 2);
  sqcRYGate(q, -3.141592515769793, 3);
  sqcRZGate(q, -0.822725692734517, 3);
  sqcRYGate(q, -1.5707951384486405, 4);
  sqcRZGate(q, -2.1531897268549645, 4);
  sqcRYGate(q, -0.043803771183878126, 5);
  sqcRZGate(q, -0.43468479583554315, 5);
  sqcRYGate(q, 1.5707972187242627, 6);
  sqcRZGate(q, -2.8081313018793024, 6);
  sqcRYGate(q, -1.5707964683116202, 7);
  sqcRZGate(q, -2.394954428122682, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.392767200233044, 0);
  sqcRZGate(q, 2.306120684395578, 0);
  sqcRYGate(q, 2.2241084044695456, 1);
  sqcRZGate(q, 2.9091328357024375, 1);
  sqcRYGate(q, 1.2711260853132282, 2);
  sqcRZGate(q, 0.39643020908754156, 2);
  sqcRYGate(q, -0.7487964081624154, 3);
  sqcRZGate(q, -0.8354948119948418, 3);
  sqcRYGate(q, -1.0697946832545053, 4);
  sqcRZGate(q, -3.036400415771752, 4);
  sqcRYGate(q, -2.2015367496835943, 5);
  sqcRZGate(q, -1.502351363352873, 5);
  sqcRYGate(q, 2.392799494618414, 6);
  sqcRZGate(q, -0.8354939096401556, 6);
  sqcRYGate(q, -1.6340222729772342, 7);
  sqcRZGate(q, 0.6671295650259408, 7);

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
