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

  sqcRYGate(q, 2.1667012441657736, 0);
  sqcRYGate(q, 2.3916933343399216, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.148805406495764, 0);
  sqcRYGate(q, -2.424244796546945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5332682358882799, 1);
  sqcRYGate(q, 0.2155692763742989, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5646789609835325, 1);
  sqcRYGate(q, -2.3096503314919, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.03832658135628, 2);
  sqcRYGate(q, 0.008286092128525269, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.22315016305304744, 2);
  sqcRYGate(q, 1.190484354761947, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.708677913036614, 0);
  sqcRYGate(q, -1.9886822152051504, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6889972569572348, 0);
  sqcRYGate(q, 2.4565665120967126, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8045030607840644, 1);
  sqcRYGate(q, 0.6440295103262468, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.068193017143302, 1);
  sqcRYGate(q, -2.631610871489379, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0457709293581194, 2);
  sqcRYGate(q, -1.6265513071182205, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.064918306515195, 2);
  sqcRYGate(q, 0.007441975464439033, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8173639859647075, 0);
  sqcRYGate(q, -0.11394897217762948, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9272223297062996, 0);
  sqcRYGate(q, -2.9602574672680655, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2136761943196932, 1);
  sqcRYGate(q, -2.45252744822331, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.277631437865562, 1);
  sqcRYGate(q, -1.8527820377661097, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5273491219680437, 2);
  sqcRYGate(q, 2.4741169029413315, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4646203345699442, 2);
  sqcRYGate(q, -1.2698508204021353, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9002739371083575, 0);
  sqcRYGate(q, -0.9615762546880227, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.019699717143965, 0);
  sqcRYGate(q, -0.6762588892463017, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9190577974415068, 1);
  sqcRYGate(q, 0.8074851206850582, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0222894115561427, 1);
  sqcRYGate(q, 0.6079645389105175, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6912951608849487, 2);
  sqcRYGate(q, -2.120711659775939, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6999653258397185, 2);
  sqcRYGate(q, 1.460116969711158, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.652882718029855, 0);
  sqcRYGate(q, -2.977444238736859, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1796375262031802, 0);
  sqcRYGate(q, -0.17010227234342956, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7012745436597285, 1);
  sqcRYGate(q, 1.244383056231336, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.650074941213515, 1);
  sqcRYGate(q, -2.9268910349667556, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.38309984269548014, 2);
  sqcRYGate(q, 3.02175570441191, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.394713748083227, 2);
  sqcRYGate(q, -2.825462767162139, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2192542009039995, 0);
  sqcRYGate(q, -0.3917797694002493, 1);
  sqcRYGate(q, -0.5018327704131185, 2);
  sqcRYGate(q, -2.8914557413345663, 3);

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
