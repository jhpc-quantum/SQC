#include "sqc_api.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
  const int qubits = 2;
  sqcQC* qcir;
  sqcTranspileKind provider = Fake20QV1;
  sqcFakeProviderOption opt = {1};

  sqcInitialize(); 

  qcir = sqcQuantumCircuit(qubits);

  sqcCZGate(qcir, 0, 1);

  char* str = (char *)malloc(500);
  int len = sqcStoreQCtoMemory(qcir, str, 500, storeQCStop);
  if (len <= 0){
    printf("Buffer is short\n");
    free(str);
    sqcDestroyQuantumCircuit(qcir);
    sqcFinalize();
    return 1;
  }
  printf("-- return sqcStoreQCtoMemory before sqcTranspile (%d) --\n%s\n",len, str);

  sqcTranspile(qcir, provider, &opt);
  len = sqcStoreQCtoMemory(qcir, str, 500, storeQCStop);
   if (len <= 0){
    printf("Buffer is short\n");
    free(str);
    sqcDestroyQuantumCircuit(qcir);
    sqcFinalize();
    return 1;
  }
  printf("-- return sqcStoreQCtoMemory after sqcTranspile (%d) --\n%s\n",len, str);

  free(str);
  sqcDestroyQuantumCircuit(qcir);
  sqcFinalize();
  return 0;
}
