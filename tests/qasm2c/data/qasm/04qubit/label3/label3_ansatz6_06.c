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

  sqcRYGate(q, -0.6905630252497175, 0);
  sqcRYGate(q, 1.5532665259349925, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6188738285922462, 0);
  sqcRYGate(q, 0.09783549708333024, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.020977359844117416, 1);
  sqcRYGate(q, 2.6291882502942294, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6836292812087267, 1);
  sqcRYGate(q, 2.2396247830479816, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6955157659545144, 2);
  sqcRYGate(q, -2.9580109754964647, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.091514652207543, 2);
  sqcRYGate(q, -1.7082870440953952, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.98816780983486, 0);
  sqcRYGate(q, -2.0737974860961437, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.456221125761748, 0);
  sqcRYGate(q, -2.407807831091963, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5074031719318046, 1);
  sqcRYGate(q, 1.3874495848879311, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.014263550470858, 1);
  sqcRYGate(q, -0.22997063068647883, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.878169671994396, 2);
  sqcRYGate(q, 3.124954095584401, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3378837488603814, 2);
  sqcRYGate(q, -0.03084653642428048, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.126493069677573, 0);
  sqcRYGate(q, -2.416102487159813, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.43809935874571254, 0);
  sqcRYGate(q, -1.4052492411755764, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7753322900936315, 1);
  sqcRYGate(q, 1.0800068646037904, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5575680830755987, 1);
  sqcRYGate(q, -2.2116431658481277, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1351785044081646, 2);
  sqcRYGate(q, 2.8857721946253103, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.675545244647396, 2);
  sqcRYGate(q, -0.5837352382343983, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4005844088564885, 0);
  sqcRYGate(q, -3.118541468418607, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.539103198737293, 0);
  sqcRYGate(q, -3.0825714276505303, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0966017199482732, 1);
  sqcRYGate(q, 2.731368666246382, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.15135567903368236, 1);
  sqcRYGate(q, -2.394445750732943, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.528882930893014, 2);
  sqcRYGate(q, 2.696291566085241, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8970561042631398, 2);
  sqcRYGate(q, 2.5900976923783956, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2261983156538845, 0);
  sqcRYGate(q, -1.387062876892074, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3770156599257057, 0);
  sqcRYGate(q, 0.4019731901344024, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3561525376399323, 1);
  sqcRYGate(q, -1.2945591559660437, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.10550074523620377, 1);
  sqcRYGate(q, 0.17990706097697282, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.10759874067986, 2);
  sqcRYGate(q, 2.6164152103892793, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0891083848132146, 2);
  sqcRYGate(q, -1.465391262186734, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5522318567377356, 0);
  sqcRYGate(q, 1.2843164126562048, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.014509224865833, 0);
  sqcRYGate(q, -2.401740471675182, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.711957417085031, 1);
  sqcRYGate(q, -0.7692926708861093, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.10933822400793944, 1);
  sqcRYGate(q, -3.0743970395696008, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9856118384630294, 2);
  sqcRYGate(q, 2.6315888108364764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.941575619349165, 2);
  sqcRYGate(q, -0.3081711006249037, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4303231952537785, 0);
  sqcRYGate(q, 2.516371207830924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9636476129850652, 0);
  sqcRYGate(q, 0.27939625372468324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8939121036798108, 1);
  sqcRYGate(q, 1.1611287200611136, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1112722767386325, 1);
  sqcRYGate(q, -2.6461837355191746, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5675769036635048, 2);
  sqcRYGate(q, -1.9450702548699892, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2755387685760704, 2);
  sqcRYGate(q, -2.092840099818567, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0874796306962855, 0);
  sqcRYGate(q, 0.47663638980465795, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7344970893803375, 0);
  sqcRYGate(q, 2.7991911151655415, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4304794081833423, 1);
  sqcRYGate(q, -1.5077738412651522, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.37812650934778613, 1);
  sqcRYGate(q, -2.1163286848387477, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4968126166310905, 2);
  sqcRYGate(q, 1.5993276408585766, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.289549285667868, 2);
  sqcRYGate(q, 1.017978306983021, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9967193451667589, 0);
  sqcRYGate(q, -1.319696789993646, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5007816811294306, 0);
  sqcRYGate(q, -0.5726981781830629, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9899402698630104, 1);
  sqcRYGate(q, -0.6768386881351339, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.465222012394402, 1);
  sqcRYGate(q, 2.279185275502111, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0101771761525247, 2);
  sqcRYGate(q, -0.18598970169600462, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2052920330935466, 2);
  sqcRYGate(q, -1.937832355947337, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.116237968635612, 0);
  sqcRYGate(q, 0.24841883447462462, 1);
  sqcRYGate(q, 0.38265760288296735, 2);
  sqcRYGate(q, -1.9367602450373222, 3);

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
