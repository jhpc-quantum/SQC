#include "sqc_api.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  const int qubits = 2;
  sqc_ir qcir;
  PROVIDERS provider = Fake20QV1;
  const int opt_level = 1;

  sqc_Initialize(); 

  qcir = sqc_Circuit(qubits); /* 古典ビット数はqubitsと同数 */

  sqc_SGate(qcir, 0);

  char* str = (char *)malloc(500);
  int len = sqc_Dump(qcir, str, 500);
  if (len <= 0){
    printf("Buffer is short\n");
    free(str);
    return 1;
  }
  printf("-- return sqc_Dump (%d) --\n%s\n",len, str);

  len = sqc_Transpile(qcir, str, 500, provider, opt_level);
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
