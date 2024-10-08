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

  sqcRYGate(q, 0.9640419909415296, 0);
  sqcRZGate(q, 0.3722883042552789, 0);
  sqcRYGate(q, -2.932698270059082, 1);
  sqcRZGate(q, 3.0699985952212625, 1);
  sqcRYGate(q, -2.7989786646697232, 2);
  sqcRZGate(q, 0.6058834716355646, 2);
  sqcRYGate(q, 2.208197974351454, 3);
  sqcRZGate(q, -1.8414593433595936, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0651378255366213, 0);
  sqcRZGate(q, 1.077612705939056, 0);
  sqcRYGate(q, -0.30412549664503796, 1);
  sqcRZGate(q, 2.852859129101788, 1);
  sqcRYGate(q, 1.850854061708625, 2);
  sqcRZGate(q, 1.6675379547382043, 2);
  sqcRYGate(q, -0.7642328742375417, 3);
  sqcRZGate(q, 0.6256884683610332, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0728575160456897, 0);
  sqcRZGate(q, -0.9944438839784561, 0);
  sqcRYGate(q, 0.14922716483297105, 1);
  sqcRZGate(q, 0.04424817493922006, 1);
  sqcRYGate(q, -2.1160513015357356, 2);
  sqcRZGate(q, 0.8170019023680216, 2);
  sqcRYGate(q, -2.787611460095378, 3);
  sqcRZGate(q, -2.970705184632016, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.17657618015263574, 0);
  sqcRZGate(q, -1.5737206384091973, 0);
  sqcRYGate(q, -0.061135595225105456, 1);
  sqcRZGate(q, -2.889995845921383, 1);
  sqcRYGate(q, -2.1995458273030497, 2);
  sqcRZGate(q, -1.024241549864756, 2);
  sqcRYGate(q, -0.2920916765175585, 3);
  sqcRZGate(q, 0.26349135194173434, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.0799349390354553, 0);
  sqcRZGate(q, -0.9465388537776007, 0);
  sqcRYGate(q, -0.24451526426386, 1);
  sqcRZGate(q, 0.10268220131607997, 1);
  sqcRYGate(q, 2.2944866896147746, 2);
  sqcRZGate(q, -1.911099991211324, 2);
  sqcRYGate(q, 0.7932161289902977, 3);
  sqcRZGate(q, 1.3833766200499868, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.2551646561643452, 0);
  sqcRZGate(q, -2.6017915235277385, 0);
  sqcRYGate(q, 1.7922749197269647, 1);
  sqcRZGate(q, 0.18057871766149294, 1);
  sqcRYGate(q, 0.7045858758748402, 2);
  sqcRZGate(q, 0.06719399708118537, 2);
  sqcRYGate(q, 1.3626328504387388, 3);
  sqcRZGate(q, -2.096110657131029, 3);

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
