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

  sqcRYGate(q, -1.3942499386985165, 0);
  sqcRYGate(q, 0.9194243164263836, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.062459030768059, 0);
  sqcRYGate(q, -0.44680828030195574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5173135663627804, 2);
  sqcRYGate(q, -2.074855264019221, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0249836287502554, 2);
  sqcRYGate(q, -0.9582276424898355, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.130217994232445, 1);
  sqcRYGate(q, 1.6131193276779947, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.40822832257266567, 1);
  sqcRYGate(q, 1.9196304251459542, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.981246470983599, 0);
  sqcRYGate(q, -1.774375749388051, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9050546188078181, 0);
  sqcRYGate(q, 1.5289225564380136, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0233240196099682, 2);
  sqcRYGate(q, -0.0711752823095777, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5878948620831157, 2);
  sqcRYGate(q, -2.2782390853376344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.714601516819946, 1);
  sqcRYGate(q, -2.20023178235499, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7160724441678452, 1);
  sqcRYGate(q, -0.2977652932186263, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.496206747205691, 0);
  sqcRYGate(q, -1.4928202254476945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.287939029744533, 0);
  sqcRYGate(q, -2.5938793070399844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8357728484437366, 2);
  sqcRYGate(q, 2.4530454654582843, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0327068801535955, 2);
  sqcRYGate(q, 2.5364628615718092, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9432638181084148, 1);
  sqcRYGate(q, 0.9234579515487154, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5909052311091072, 1);
  sqcRYGate(q, 1.530050149425631, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9697317618736534, 0);
  sqcRYGate(q, 1.6645402732043983, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8997482843689683, 0);
  sqcRYGate(q, -0.28624949418248935, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.277031697349268, 2);
  sqcRYGate(q, 1.9184848720277845, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3705975351876898, 2);
  sqcRYGate(q, 0.7944585858760744, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8253132665059857, 1);
  sqcRYGate(q, 1.3290033282767497, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5166453477259614, 1);
  sqcRYGate(q, -1.2389234366057955, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.49668730427840563, 0);
  sqcRYGate(q, 0.6382881190899192, 1);
  sqcRYGate(q, -0.7161176465766822, 2);
  sqcRYGate(q, -2.223535284545865, 3);

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
