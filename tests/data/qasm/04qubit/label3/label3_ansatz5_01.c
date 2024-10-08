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

  sqcRYGate(q, 1.3220670010299143, 0);
  sqcRYGate(q, -2.3414091154679206, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3357022544238055, 0);
  sqcRYGate(q, -0.03152819632233591, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.726251403507339, 2);
  sqcRYGate(q, 0.046414918526612864, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07649514987706826, 2);
  sqcRYGate(q, -0.49511210782021947, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7392502243255232, 1);
  sqcRYGate(q, 1.3779668187412852, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.964610887263198, 1);
  sqcRYGate(q, -2.3203069480719916, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7796094166996488, 0);
  sqcRYGate(q, -1.0277184146642133, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4884846203124866, 0);
  sqcRYGate(q, 1.8175156366712444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.399535845962649, 2);
  sqcRYGate(q, 3.0365693765493833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0009804220827483352, 2);
  sqcRYGate(q, 1.338022614002022, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4134759985073952, 1);
  sqcRYGate(q, -0.4216616216766018, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4038310464490062, 1);
  sqcRYGate(q, 0.7630997284904186, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.05018001676089323, 0);
  sqcRYGate(q, 1.6522616850845073, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.652633709713288, 0);
  sqcRYGate(q, 1.0288166032037083, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.074607880308285, 2);
  sqcRYGate(q, -1.4006408778805526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1649768163949332, 2);
  sqcRYGate(q, 2.5045843874291465, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.002199009318532, 1);
  sqcRYGate(q, -2.652739830288203, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9370295666066437, 1);
  sqcRYGate(q, 1.4194340022823941, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7319487439273034, 0);
  sqcRYGate(q, -1.1185738228943403, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.941986249850867, 0);
  sqcRYGate(q, 0.05805502727690556, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9952622602510917, 2);
  sqcRYGate(q, 1.8716640373247522, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.067399997585593, 2);
  sqcRYGate(q, -1.5330409678049182, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.330175382760727, 1);
  sqcRYGate(q, -0.5162824533820443, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4979460592658325, 1);
  sqcRYGate(q, -1.0419460959219693, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6869583126753827, 0);
  sqcRYGate(q, 2.93325346655722, 1);
  sqcRYGate(q, -3.1248325692535155, 2);
  sqcRYGate(q, 1.8586104343422294, 3);

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
