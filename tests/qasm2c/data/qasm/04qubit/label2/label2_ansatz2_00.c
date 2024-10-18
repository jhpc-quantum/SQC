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

  sqcRYGate(q, -1.6205574487204994, 0);
  sqcRZGate(q, -3.13902324556064, 0);
  sqcRYGate(q, 3.141572703695266, 1);
  sqcRZGate(q, 1.0454097583802902, 1);
  sqcRYGate(q, -2.3708053765391604e-07, 2);
  sqcRZGate(q, 0.521563609896454, 2);
  sqcRYGate(q, -3.0951888370690392, 3);
  sqcRZGate(q, 3.088733304774072, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.5720214290780588, 0);
  sqcRZGate(q, -2.5243046856978353, 0);
  sqcRYGate(q, 3.141592645714754, 1);
  sqcRZGate(q, 0.42855203897032546, 1);
  sqcRYGate(q, -1.5707966978332797, 2);
  sqcRZGate(q, -1.5707994585480194, 2);
  sqcRYGate(q, -1.6171470795007403, 3);
  sqcRZGate(q, -2.4713895234643832, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.5707973835978686, 0);
  sqcRZGate(q, 0.9426201419188543, 0);
  sqcRYGate(q, 1.5707962538680036, 1);
  sqcRZGate(q, 7.685306854048373e-07, 1);
  sqcRYGate(q, 2.471511739860025, 2);
  sqcRZGate(q, -1.828514576405806, 2);
  sqcRYGate(q, -1.5707980436724938, 3);
  sqcRZGate(q, 1.8037739387170757, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.141592087861991, 0);
  sqcRZGate(q, 1.0677971013479592, 0);
  sqcRYGate(q, -1.570815893269007, 1);
  sqcRZGate(q, -3.0164160066360006, 1);
  sqcRYGate(q, -3.1415922218741335, 2);
  sqcRZGate(q, 3.0090562584581044, 2);
  sqcRYGate(q, 6.406326784613725e-07, 3);
  sqcRZGate(q, 1.462997900991599, 3);

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
