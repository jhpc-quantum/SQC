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

  sqcRYGate(q, 1.588821501273526, 0);
  sqcRZGate(q, 1.696897061077862, 0);
  sqcRYGate(q, -6.309214486854842e-06, 1);
  sqcRZGate(q, 2.5494873964417315, 1);
  sqcRYGate(q, -2.677658835006453, 2);
  sqcRZGate(q, -1.4541220451077619, 2);
  sqcRYGate(q, -0.9694964031234328, 3);
  sqcRZGate(q, 1.7699475523934607, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.27474898248298557, 0);
  sqcRZGate(q, -0.05562287795710574, 0);
  sqcRYGate(q, -1.5707962792375303, 1);
  sqcRZGate(q, -1.5709100975777748, 1);
  sqcRYGate(q, -1.877200491699104, 2);
  sqcRZGate(q, 1.4064842953473518, 2);
  sqcRYGate(q, -1.4763454930489848, 3);
  sqcRZGate(q, -2.110479140864994, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.00011062333078193376, 0);
  sqcRZGate(q, -1.7834658272722737, 0);
  sqcRYGate(q, -1.5576686782289988, 1);
  sqcRZGate(q, 0.7292549060098674, 1);
  sqcRYGate(q, 1.570797572854305, 2);
  sqcRZGate(q, -1.5708030479267716, 2);
  sqcRYGate(q, -1.827629520253792, 3);
  sqcRZGate(q, -0.7411049981433538, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6690034777854565, 0);
  sqcRZGate(q, 1.682483154354607, 0);
  sqcRYGate(q, 1.5707962949086811, 1);
  sqcRZGate(q, -0.47617443440260776, 1);
  sqcRYGate(q, -0.8499886625376734, 2);
  sqcRZGate(q, -0.5565108984031575, 2);
  sqcRYGate(q, 1.5707924514921072, 3);
  sqcRZGate(q, 3.141592416569437, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5707905981459187, 0);
  sqcRZGate(q, 0.608188030482803, 0);
  sqcRYGate(q, -8.183142011575513e-06, 1);
  sqcRZGate(q, -0.8613573494023998, 1);
  sqcRYGate(q, -0.16197428190169738, 2);
  sqcRZGate(q, -0.41198345382674567, 2);
  sqcRYGate(q, -1.4486105717820887, 3);
  sqcRZGate(q, -1.3375284622115942, 3);

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
