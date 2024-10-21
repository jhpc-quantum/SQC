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

  sqcRYGate(q, -2.134288173495158, 0);
  sqcRZGate(q, 2.5253303658349, 0);
  sqcRYGate(q, -3.09299186915373, 1);
  sqcRZGate(q, 1.2639129545072985, 1);
  sqcRYGate(q, 0.004892886096698439, 2);
  sqcRZGate(q, -1.3493571018995096, 2);
  sqcRYGate(q, -1.7527855145746132, 3);
  sqcRZGate(q, 2.152807599624003, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.41605249767801716, 0);
  sqcRZGate(q, -0.8428729856087785, 0);
  sqcRYGate(q, 2.085076957628717, 1);
  sqcRZGate(q, -2.046334695520523, 1);
  sqcRYGate(q, -1.6122158949426082, 2);
  sqcRZGate(q, 2.340990814793184, 2);
  sqcRYGate(q, 2.51068906021422, 3);
  sqcRZGate(q, -2.1980584280724793, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.6396478123190787, 0);
  sqcRZGate(q, -0.6229352837567709, 0);
  sqcRYGate(q, -0.8895790628500587, 1);
  sqcRZGate(q, 0.39390249285670986, 1);
  sqcRYGate(q, 0.9344464596332916, 2);
  sqcRZGate(q, 3.0223604956646146, 2);
  sqcRYGate(q, 0.4139586450849234, 3);
  sqcRZGate(q, 0.6073173155266228, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.472994978555966, 0);
  sqcRZGate(q, -2.8845515154063235, 0);
  sqcRYGate(q, -2.8353310576638076, 1);
  sqcRZGate(q, -2.7712932108434964, 1);
  sqcRYGate(q, -2.2061335077071176, 2);
  sqcRZGate(q, 0.5537488708125841, 2);
  sqcRYGate(q, -1.2566657226703288, 3);
  sqcRZGate(q, -2.7363105089411484, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.30646568801254315, 0);
  sqcRZGate(q, 2.0664568273740294, 0);
  sqcRYGate(q, 2.697754266749742, 1);
  sqcRZGate(q, 0.8754889634863056, 1);
  sqcRYGate(q, -1.8126175776643045, 2);
  sqcRZGate(q, 2.960051407368084, 2);
  sqcRYGate(q, 1.4845549470534198, 3);
  sqcRZGate(q, -1.7561223928663647, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6122491528068523, 0);
  sqcRZGate(q, 0.42703396387574505, 0);
  sqcRYGate(q, -2.531435480981348, 1);
  sqcRZGate(q, 1.4432151031468543, 1);
  sqcRYGate(q, 1.060273098749922, 2);
  sqcRZGate(q, -2.0570297642959026, 2);
  sqcRYGate(q, 1.5061587488275765, 3);
  sqcRZGate(q, 3.050993487340544, 3);

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
