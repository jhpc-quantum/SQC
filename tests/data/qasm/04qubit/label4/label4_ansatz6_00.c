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

  sqcRYGate(q, 1.3451843340586949, 0);
  sqcRYGate(q, -1.1481879535726822, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.350193187151747, 0);
  sqcRYGate(q, -0.5828798478761347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1290751681883773, 1);
  sqcRYGate(q, -2.041121227353707, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5089139605538104, 1);
  sqcRYGate(q, 2.4634516464843714, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7193256580080334, 2);
  sqcRYGate(q, 2.7935272362402097, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3264508662885719, 2);
  sqcRYGate(q, 1.7419361044200472, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2326998292171023, 0);
  sqcRYGate(q, 0.6786936185472294, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1392429262800734, 0);
  sqcRYGate(q, -1.6662665510248476, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.10062138355604057, 1);
  sqcRYGate(q, 1.3803388953064184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8229839180162308, 1);
  sqcRYGate(q, 1.1208220633853496, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3667276649346993, 2);
  sqcRYGate(q, -0.9275432741355161, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8678561738209442, 2);
  sqcRYGate(q, -0.2262105439976274, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4336818722917313, 0);
  sqcRYGate(q, 0.7778070906663548, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5723294653928237, 0);
  sqcRYGate(q, 2.9732229187280295, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0506761497635475, 1);
  sqcRYGate(q, -0.05119258337121217, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.323094767063573, 1);
  sqcRYGate(q, -0.1601748048426881, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.17950805102196732, 2);
  sqcRYGate(q, 2.942539784419802, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9085417808997276, 2);
  sqcRYGate(q, 0.4126437484331284, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2565272007316672, 0);
  sqcRYGate(q, -0.5145362753272007, 1);
  sqcRYGate(q, -0.43504601231180146, 2);
  sqcRYGate(q, 2.453532699144029, 3);

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
