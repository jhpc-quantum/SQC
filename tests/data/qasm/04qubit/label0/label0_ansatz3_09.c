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

  sqcRYGate(q, 1.8783207116677794, 0);
  sqcRZGate(q, 2.4205389095397667, 0);
  sqcRYGate(q, -0.13135162963757274, 1);
  sqcRZGate(q, 1.2575850490789715, 1);
  sqcRYGate(q, -1.9598781618259968, 2);
  sqcRZGate(q, -2.219940165814636, 2);
  sqcRYGate(q, 1.069364473142698, 3);
  sqcRZGate(q, 0.8916392888705928, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.09945065874347588, 0);
  sqcRZGate(q, 0.3701416405193943, 0);
  sqcRYGate(q, 0.03202787902455724, 1);
  sqcRZGate(q, 1.7755831980508736, 1);
  sqcRYGate(q, 2.1504659680243754, 2);
  sqcRZGate(q, -2.2405772296082738, 2);
  sqcRYGate(q, 0.8870708758151349, 3);
  sqcRZGate(q, 1.7411772429743735, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.288898393526258, 0);
  sqcRZGate(q, 2.405590787194648, 0);
  sqcRYGate(q, -2.6672215888358606, 1);
  sqcRZGate(q, -1.2961139373521746, 1);
  sqcRYGate(q, -0.40478650595169097, 2);
  sqcRZGate(q, 0.165758771284354, 2);
  sqcRYGate(q, 1.718406629698202, 3);
  sqcRZGate(q, -1.2312257899010752, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.4158189024804516, 0);
  sqcRZGate(q, 2.7710541170413383, 0);
  sqcRYGate(q, 0.6101641398784307, 1);
  sqcRZGate(q, 0.06879363015960925, 1);
  sqcRYGate(q, 1.525789253838771, 2);
  sqcRZGate(q, 2.5431974196299523, 2);
  sqcRYGate(q, 1.044556464170363, 3);
  sqcRZGate(q, -2.391866168033847, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.392233057622792, 0);
  sqcRZGate(q, -2.7204239289456225, 0);
  sqcRYGate(q, -1.249549686829648, 1);
  sqcRZGate(q, 2.801218267323042, 1);
  sqcRYGate(q, 2.2958726789977955, 2);
  sqcRZGate(q, 0.6154765447878586, 2);
  sqcRYGate(q, 2.0172444839012837, 3);
  sqcRZGate(q, 0.5578201851742889, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.9696732227963942, 0);
  sqcRZGate(q, 0.5550015745597977, 0);
  sqcRYGate(q, 0.06578777351011082, 1);
  sqcRZGate(q, 0.8415555329975709, 1);
  sqcRYGate(q, 3.1211308000148055, 2);
  sqcRZGate(q, -1.9868180347903577, 2);
  sqcRYGate(q, -1.1859012957161856, 3);
  sqcRZGate(q, -0.2333195016076033, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.9430841445038265, 0);
  sqcRZGate(q, 2.8657820779546235, 0);
  sqcRYGate(q, -0.6568264508928863, 1);
  sqcRZGate(q, 0.5633719039760404, 1);
  sqcRYGate(q, -1.464962471354566, 2);
  sqcRZGate(q, 2.5634767560544782, 2);
  sqcRYGate(q, -2.201145272235431, 3);
  sqcRZGate(q, -0.8332918106431442, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.1601745734394084, 0);
  sqcRZGate(q, -0.8919960902882957, 0);
  sqcRYGate(q, 0.30990774342457783, 1);
  sqcRZGate(q, 1.338662366112504, 1);
  sqcRYGate(q, 0.7551779728481893, 2);
  sqcRZGate(q, -3.031411363118125, 2);
  sqcRYGate(q, 2.061713825659451, 3);
  sqcRZGate(q, -0.535318448132438, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.3073828428075434, 0);
  sqcRZGate(q, 1.38091080850776, 0);
  sqcRYGate(q, -1.8178069468065585, 1);
  sqcRZGate(q, -2.410003702468654, 1);
  sqcRYGate(q, -1.8294256692694792, 2);
  sqcRZGate(q, 2.483549870527565, 2);
  sqcRYGate(q, -2.2711285617562362, 3);
  sqcRZGate(q, -0.0801600308549589, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.3306892263760117, 0);
  sqcRZGate(q, 2.379589449795581, 0);
  sqcRYGate(q, 2.918522433918255, 1);
  sqcRZGate(q, -0.9854211039224018, 1);
  sqcRYGate(q, -1.1209916788375116, 2);
  sqcRZGate(q, -1.2419699523289247, 2);
  sqcRYGate(q, 2.4305605225804983, 3);
  sqcRZGate(q, 2.075880685943986, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.6482142901009267, 0);
  sqcRZGate(q, -2.460147791816759, 0);
  sqcRYGate(q, -2.829705936297377, 1);
  sqcRZGate(q, 2.5720818482805354, 1);
  sqcRYGate(q, -1.2120938247516773, 2);
  sqcRZGate(q, 1.882893274821753, 2);
  sqcRYGate(q, 0.5541945490906983, 3);
  sqcRZGate(q, -2.0829072009360434, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.6173221301964795, 0);
  sqcRZGate(q, 0.2677448210296198, 0);
  sqcRYGate(q, -0.8380422925267395, 1);
  sqcRZGate(q, 3.122452467406972, 1);
  sqcRYGate(q, -0.35222357388807257, 2);
  sqcRZGate(q, -2.3887703278680448, 2);
  sqcRYGate(q, -2.9951013913294973, 3);
  sqcRZGate(q, -0.773421715844507, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6978748059443985, 0);
  sqcRZGate(q, 2.1527759954566807, 0);
  sqcRYGate(q, -1.6990710417569068, 1);
  sqcRZGate(q, 0.7728445930515223, 1);
  sqcRYGate(q, 0.7342631801971025, 2);
  sqcRZGate(q, 1.8223463570895029, 2);
  sqcRYGate(q, 0.10567845025050054, 3);
  sqcRZGate(q, -2.9618269854965775, 3);

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
