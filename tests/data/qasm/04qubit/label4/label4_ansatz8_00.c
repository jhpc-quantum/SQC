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

  sqcRYGate(q, 0.9996262021528226, 0);
  sqcRYGate(q, 2.871654415712239, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.77972606516157, 0);
  sqcRYGate(q, -2.397281134652263, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4502407748224393, 2);
  sqcRYGate(q, -2.9597433822305743, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.983518592046291, 2);
  sqcRYGate(q, 1.381480835845629, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8206723873345521, 0);
  sqcRYGate(q, -0.054334361899141925, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0965273409547651, 0);
  sqcRYGate(q, 0.6062847034860637, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8847792051189953, 1);
  sqcRYGate(q, -1.8817008578817616, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2059486517597935, 1);
  sqcRYGate(q, 2.0961681761620685, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2723646563676976, 0);
  sqcRYGate(q, 1.7529531734125756, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1176194839120384, 0);
  sqcRYGate(q, 1.1165010056082811, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2897868178488774, 2);
  sqcRYGate(q, 2.508596161713501, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6418272218869053, 2);
  sqcRYGate(q, 1.8372132579746652, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.100292876191166, 0);
  sqcRYGate(q, 0.5440108435529164, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7070121674564287, 0);
  sqcRYGate(q, 1.698934865373108, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4820729342130754, 1);
  sqcRYGate(q, 2.7711183073967147, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.09165273323656642, 1);
  sqcRYGate(q, 0.7627043188034913, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5436947423984138, 0);
  sqcRYGate(q, 0.7770937498518453, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4377443642328385, 0);
  sqcRYGate(q, 2.365559830658923, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.028833575830160108, 2);
  sqcRYGate(q, 0.6309550459635102, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2269356559522162, 2);
  sqcRYGate(q, -3.017341540278916, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7595692684655853, 0);
  sqcRYGate(q, -0.9682980986471152, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5299698859308726, 0);
  sqcRYGate(q, -0.1378370719767208, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1367527349613561, 1);
  sqcRYGate(q, -1.569919075440283, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.601894570408593, 1);
  sqcRYGate(q, -1.5151671839967191, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.324088677416178, 0);
  sqcRYGate(q, -1.7791805926530655, 1);
  sqcRYGate(q, -2.8129150900586226, 2);
  sqcRYGate(q, 0.7984574308090258, 3);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
