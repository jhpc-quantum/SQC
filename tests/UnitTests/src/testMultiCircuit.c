#include "sqc_api.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
  const int qubits = 2;
  sqcTranspileKind provider = Fake20QV1;
  sqcFakeProviderOption opt = {1};

  sqcInitialize(NULL, NULL); 

  sqcQC* qcir1;
  qcir1 = sqcQuantumCircuit(qubits);
  sqcHGate(qcir1, 0);
  sqcCXGate(qcir1, 0, 1);

  char* str = (char *)malloc(500);
  int len = sqcStoreQCtoMemory(qcir1, str, 500);
  if (len <= 0){
    printf("Buffer is short\n");
    free(str);
    sqcDestroyQuantumCircuit(qcir1);
    return 1;
  }
  printf("-- return sqcStoreQCtoMemory before sqcTranspile (%d) --\n%s\n",len, str);

  sqcTranspile(qcir1, provider, &opt);
  len = sqcStoreQCtoMemory(qcir1, str, 500);
   if (len <= 0){
    printf("Buffer is short\n");
    free(str);
    sqcDestroyQuantumCircuit(qcir1);
    return 1;
  }
  printf("-- return sqcStoreQCtoMemory after sqcTranspile (%d) --\n%s\n",len, str);
 
  sqcDestroyQuantumCircuit(qcir1);

  sqcQC* qcir2;
  qcir2 = sqcQuantumCircuit(qubits);
  sqcHGate(qcir2, 1);
  sqcCXGate(qcir2, 1, 0);

  len = sqcStoreQCtoMemory(qcir2, str, 500);
  if (len <= 0){
    printf("Buffer is short\n");
    free(str);
    sqcDestroyQuantumCircuit(qcir2);
    sqcFinalize();
    return 1;
  }
  printf("-- return sqcStoreQCtoMemory before sqcTranspile (%d) --\n%s\n",len, str);

  sqcTranspile(qcir2, provider, &opt);
  len = sqcStoreQCtoMemory(qcir2, str, 500);
   if (len <= 0){
    printf("Buffer is short\n");
    free(str);
    sqcDestroyQuantumCircuit(qcir2);
    sqcFinalize();
    return 1;
  }
  printf("-- return sqcStoreQCtoMemory after sqcTranspile (%d) --\n%s\n",len, str);

  free(str);
  sqcDestroyQuantumCircuit(qcir2);
  sqcFinalize();
  return 0;
}
