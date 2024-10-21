#include "sqc_api.h"
#include <stdlib.h>

#ifdef BASIC
  #define PROVIDER (BasicSimulator)
#elif FAKE
  #define PROVIDER (Fake20QV1)
#else 
  #define PROVIDER (NProviders)
#endif

int main(int argc, char *argv[])
{
  sqcInitialize(NULL, NULL); 
  sqcQC* qcir = sqcQuantumCircuit(2);

#ifdef CIRCUIT
  sqcHGate(qcir, 0);
  sqcCXGate(qcir, 0, 1);
  #ifdef MEASURE_OP_VALUE
    int a = 10;
    sqcMeasure(qcir, 0, 0, &a);
  #endif
    sqcMeasure(qcir, 0, 0, NULL);
#endif

#ifdef ON_TRANSPILE
  sqcFakeProviderOption opt = {1};
  sqcTranspile(qcir, PROVIDER, &opt);
#endif

#ifdef MEMORY
  #ifdef MEMORYADDRESS_NULL
    size_t size = 150;
    char* str = NULL;
    int len = sqcStoreQCtoMemory(qcir, str, size);
    if (len <= 0){
      printf("error code: %d\n", len);
      printf("-- return sqcStoreQCtoMemory before sqcTranspile (%ld) --\n%s\n",size, str);
      free(str);
      sqcDestroyQuantumCircuit(qcir);
      sqcFinalize(); 
      return 1;
    }
    printf("-- return sqcStoreQCtoMemory before sqcTranspile (%d) --\n%s\n",len, str);
    free(str);
  #else
    #ifdef MEMORY_SIZE_50
      size_t size = 50;
    #else
      size_t size = 150;
    #endif
    char* str = (char *)malloc(size);
    int len = sqcStoreQCtoMemory(qcir, str, size);
    if (len <= 0){
      printf("error code: %d\n", len);
      printf("-- return sqcStoreQCtoMemory before sqcTranspile (%ld) --\n%s\n",size, str);
      free(str);
      sqcDestroyQuantumCircuit(qcir);
      sqcFinalize(); 
      return 1;
    }
    printf("-- return sqcStoreQCtoMemory before sqcTranspile (%d) --\n%s\n",len, str);
    free(str);
  #endif
#else 
  #ifdef FILE_NULL
    FILE * IR_file = NULL;
    sqcStoreQC(qcir, IR_file);
  #else
    FILE * IR_file = NULL;
    IR_file = fopen(__FILE__"_IR.txt", "w");
    sqcStoreQC(qcir, IR_file);
    fclose(IR_file);
  #endif
#endif

  sqcDestroyQuantumCircuit(qcir);
  sqcFinalize();
  return 0;
}