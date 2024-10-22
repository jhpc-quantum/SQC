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

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.08567393067678994, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.04047338544749882, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.00011398507978322159, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 2.518675125240892, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 1.6076307694986667, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 1.745845709538078, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.9278625784578726, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -1.4786308885028838, 0);
  sqcRZGate(q, -2.3083895934101157, 1);
  sqcRZGate(q, -1.6791345491674143, 2);
  sqcRZGate(q, -1.8785122796412694, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.8745431044312778, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.21457890166791826, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.18764315862168987, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 1.4279469150171973, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 1.4629613698799444, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -1.5871537342992792, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.3101564187276382, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.21952466504343218, 0);
  sqcRZGate(q, 1.013363211477941e-05, 1);
  sqcRZGate(q, 0.0007569675164033323, 2);
  sqcRZGate(q, -0.6021459294170525, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.22268406321865986, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.05806512888356555, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.4355012421439151, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.1763122293681006, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 1.687681140402588, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.021245800325920453, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -1.5774695766024258, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.3592836862039193, 0);
  sqcRZGate(q, 3.537822430721806e-05, 1);
  sqcRZGate(q, -0.0007897068237574658, 2);
  sqcRZGate(q, 0.4358548032803729, 3);

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
