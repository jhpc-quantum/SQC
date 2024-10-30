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

  sqcRYGate(q, -1.073360873971271e-06, 0);
  sqcRZGate(q, 1.8162079787551075, 0);
  sqcRYGate(q, 0.6718477793245574, 1);
  sqcRZGate(q, -0.490148353045603, 1);
  sqcRYGate(q, 1.9495419977295834, 2);
  sqcRZGate(q, -1.4931005165473001, 2);
  sqcRYGate(q, -1.272927986549164, 3);
  sqcRZGate(q, -2.4071940757287713, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.1415922838601054, 0);
  sqcRZGate(q, -1.393061686954744, 0);
  sqcRYGate(q, 2.89379752832769, 1);
  sqcRZGate(q, 2.5769363500867106, 1);
  sqcRYGate(q, -0.025405270833925186, 2);
  sqcRZGate(q, -1.7426008004328968, 2);
  sqcRYGate(q, 0.14447891312359573, 3);
  sqcRZGate(q, -1.7519657857413404, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.0968746887470485e-06, 0);
  sqcRZGate(q, 2.4779890288092763, 0);
  sqcRYGate(q, -2.332642264612548, 1);
  sqcRZGate(q, 0.4433873879862018, 1);
  sqcRYGate(q, -1.0929469008333639, 2);
  sqcRZGate(q, 2.863987122762862, 2);
  sqcRYGate(q, -2.6959842022168927, 3);
  sqcRZGate(q, 2.5643625606313822, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.5707964068525755, 0);
  sqcRZGate(q, 7.112496254180201e-07, 0);
  sqcRYGate(q, -0.6647254610080529, 1);
  sqcRZGate(q, 1.6851115618374095, 1);
  sqcRYGate(q, -1.439989033035948, 2);
  sqcRZGate(q, 0.6359011059858871, 2);
  sqcRYGate(q, 2.2046877116234844, 3);
  sqcRZGate(q, 1.3533032262988656, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.5707956626785995, 0);
  sqcRZGate(q, 2.4345221338464067, 0);
  sqcRYGate(q, 3.4517715174525465e-08, 1);
  sqcRZGate(q, 3.1209649308401404, 1);
  sqcRYGate(q, -3.1415916604246523, 2);
  sqcRZGate(q, 2.98946761740956, 2);
  sqcRYGate(q, -4.176729650297295e-07, 3);
  sqcRZGate(q, 0.926865789795118, 3);

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
