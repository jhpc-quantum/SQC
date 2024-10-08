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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -1.1973202337339286, 0);
  sqcRZGate(q, -2.8776104740963175, 0);
  sqcRYGate(q, -2.656082998734789, 1);
  sqcRZGate(q, 1.464648968016744, 1);
  sqcRYGate(q, 1.481442675758598, 2);
  sqcRZGate(q, -3.0716177689505852, 2);
  sqcRYGate(q, -1.5738569704188317, 3);
  sqcRZGate(q, 1.352985801943651, 3);
  sqcRYGate(q, 1.4019537221470753, 4);
  sqcRZGate(q, -3.0995418653204365, 4);
  sqcRYGate(q, 2.6376726673731925, 5);
  sqcRZGate(q, 3.1399372103658756, 5);
  sqcRYGate(q, 2.753552583181106, 6);
  sqcRZGate(q, 3.1414794855377557, 6);
  sqcRYGate(q, 3.0304219389725686, 7);
  sqcRZGate(q, 2.963459839007973, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.31066984155282995, 0);
  sqcRZGate(q, 2.7643964704049475, 0);
  sqcRYGate(q, 3.079458712871281, 1);
  sqcRZGate(q, 1.543561742244159, 1);
  sqcRYGate(q, 2.002847780134757, 2);
  sqcRZGate(q, -0.5156158071610757, 2);
  sqcRYGate(q, 0.37955105055769955, 3);
  sqcRZGate(q, 1.6140280225972807, 3);
  sqcRYGate(q, 1.5803339146513995, 4);
  sqcRZGate(q, -2.335329831493197, 4);
  sqcRYGate(q, -1.769593244997966, 5);
  sqcRZGate(q, -1.5726249784110236, 5);
  sqcRYGate(q, 2.496932068441802, 6);
  sqcRZGate(q, -3.139883188077162, 6);
  sqcRYGate(q, 0.013727054497807423, 7);
  sqcRZGate(q, 0.19714610024147597, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.46422245409779084, 0);
  sqcRZGate(q, -1.4648287752781928, 0);
  sqcRYGate(q, -2.1116029285470876, 1);
  sqcRZGate(q, -3.1397720250128143, 1);
  sqcRYGate(q, 1.6506448183835438, 2);
  sqcRZGate(q, -0.05092283852250368, 2);
  sqcRYGate(q, -0.18577407816612831, 3);
  sqcRZGate(q, 1.8576822661509733, 3);
  sqcRYGate(q, 2.945790971741958, 4);
  sqcRZGate(q, 1.0342873470947251, 4);
  sqcRYGate(q, -1.7267364338434117, 5);
  sqcRZGate(q, -1.5880595659062875, 5);
  sqcRYGate(q, 0.9679245769187775, 6);
  sqcRZGate(q, 0.0033783197368430374, 6);
  sqcRYGate(q, 0.5645864997199438, 7);
  sqcRZGate(q, -1.5738695312484783, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.565197006462686, 0);
  sqcRZGate(q, 0.8524685242463312, 0);
  sqcRYGate(q, -1.4187488353198625, 1);
  sqcRZGate(q, -1.5944505766553414, 1);
  sqcRYGate(q, -0.7752886312326278, 2);
  sqcRZGate(q, -3.126026368463582, 2);
  sqcRYGate(q, 1.5594530286273516, 3);
  sqcRZGate(q, 1.531660339648779, 3);
  sqcRYGate(q, -1.5398854000754894, 4);
  sqcRZGate(q, 1.6601569643344627, 4);
  sqcRYGate(q, 1.5346232171814664, 5);
  sqcRZGate(q, 0.16406893700624892, 5);
  sqcRYGate(q, -1.545921494947386, 6);
  sqcRZGate(q, 1.5723297724639513, 6);
  sqcRYGate(q, -1.5715378714255333, 7);
  sqcRZGate(q, -0.898323990535304, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.569364530114311, 0);
  sqcRZGate(q, -1.5729551586019406, 0);
  sqcRYGate(q, -0.2603453084704021, 1);
  sqcRZGate(q, 0.021823634583595816, 1);
  sqcRYGate(q, 0.11854712761991948, 2);
  sqcRZGate(q, -3.132205855849876, 2);
  sqcRYGate(q, 3.007793151252932, 3);
  sqcRZGate(q, -0.022225959823172155, 3);
  sqcRYGate(q, 3.1092792212641953, 4);
  sqcRZGate(q, -3.057981912093095, 4);
  sqcRYGate(q, 0.014341320301774362, 5);
  sqcRZGate(q, -1.1055311061354813, 5);
  sqcRYGate(q, 2.935517347271323, 6);
  sqcRZGate(q, 3.139208648904918, 6);
  sqcRYGate(q, -1.570372436100354, 7);
  sqcRZGate(q, 1.5662600361932784, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5453860960715253, 0);
  sqcRZGate(q, 2.9885976628245965, 0);
  sqcRYGate(q, -1.6420776745549182, 1);
  sqcRZGate(q, 3.0000508667270562, 1);
  sqcRYGate(q, -2.958676576093923, 2);
  sqcRZGate(q, -0.12678345664171028, 2);
  sqcRYGate(q, -0.775764111403806, 3);
  sqcRZGate(q, -0.17464068853035147, 3);
  sqcRYGate(q, 1.3920547110573207, 4);
  sqcRZGate(q, 3.010056159791794, 4);
  sqcRYGate(q, -0.018582436383407064, 5);
  sqcRZGate(q, -2.362161271059164, 5);
  sqcRYGate(q, -1.5792090354674855, 6);
  sqcRZGate(q, 2.9755349016662183, 6);
  sqcRYGate(q, -1.5982877312590986, 7);
  sqcRZGate(q, 2.9770819723852777, 7);

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
