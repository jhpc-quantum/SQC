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

  sqcRYGate(q, 2.9238854246681387, 0);
  sqcRZGate(q, -2.28359609015369, 0);
  sqcRYGate(q, -2.49837613204556, 1);
  sqcRZGate(q, 2.4107334200145996, 1);
  sqcRYGate(q, 3.1415922510712186, 2);
  sqcRZGate(q, 0.4487542012745079, 2);
  sqcRYGate(q, -2.5935649217271193, 3);
  sqcRZGate(q, -0.3999866835303065, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.846056047462204, 0);
  sqcRZGate(q, 2.5033443260024755, 0);
  sqcRYGate(q, -2.3094688819264375, 1);
  sqcRZGate(q, 0.9194107972631302, 1);
  sqcRYGate(q, 3.1415896217263763, 2);
  sqcRZGate(q, 2.0459524434941354, 2);
  sqcRYGate(q, -7.085764409406152e-07, 3);
  sqcRZGate(q, 1.573612586915313, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.88391010485809, 0);
  sqcRZGate(q, -3.1106736323950517, 0);
  sqcRYGate(q, 2.60834079172903, 1);
  sqcRZGate(q, -1.19399165299874, 1);
  sqcRYGate(q, 1.5707966780385312, 2);
  sqcRZGate(q, -3.1415908927469984, 2);
  sqcRYGate(q, -2.0043057880059223e-08, 3);
  sqcRZGate(q, -0.07138520221445467, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.826478523980768e-08, 0);
  sqcRZGate(q, -2.4881492566768295, 0);
  sqcRYGate(q, 2.94765744612846e-06, 1);
  sqcRZGate(q, 0.448650133214355, 1);
  sqcRYGate(q, -1.5707957576059126, 2);
  sqcRZGate(q, -1.9937714072750312, 2);
  sqcRYGate(q, -1.3047324314191758e-06, 3);
  sqcRZGate(q, -2.7173718486525957, 3);

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
