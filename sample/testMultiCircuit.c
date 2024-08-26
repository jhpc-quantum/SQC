#include "sqc_api.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
  const int qubits = 2;
  PROVIDERS provider = Fake20QV1;
  const int opt_level = 1;

  sqc_Initialize(); 

  sqc_ir qcir1;
  qcir1 = sqc_Circuit(qubits);
  sqc_HGate(qcir1, 0);
  sqc_CXGate(qcir1, 0, 1);

  char* str = (char *)malloc(500);
  int len = sqc_Dump(qcir1, str, 500);
  if (len <= 0){
    printf("Buffer is short\n");
    free(str);
    return 1;
  }
  printf("-- return sqc_Dump (%d) --\n%s\n",len, str);

  len = sqc_Transpile(qcir1, str, 500, provider, opt_level);
   if (len <= 0){
    printf("Buffer is short\n");
    free(str);
    return 1;
  }
  printf("-- return sqc_Transpile (%d) --\n%s\n",len, str);

  sqc_ir qcir2;
  qcir2 = sqc_Circuit(qubits);
  sqc_HGate(qcir2, 1);
  sqc_CXGate(qcir2, 1, 0);

  len = sqc_Dump(qcir2, str, 500);
  if (len <= 0){
    printf("Buffer is short\n");
    free(str);
    return 1;
  }
  printf("-- return sqc_Dump (%d) --\n%s\n",len, str);

  len = sqc_Transpile(qcir2, str, 500, provider, opt_level);
   if (len <= 0){
    printf("Buffer is short\n");
    free(str);
    return 1;
  }
  printf("-- return sqc_Transpile (%d) --\n%s\n",len, str);

  free(str);
  sqc_Finalize();
  return 0;
}
