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

  sqcRYGate(q, -0.3100049441870647, 0);
  sqcRYGate(q, -1.108835710263782, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4675287953246112, 0);
  sqcRYGate(q, 1.410817003406498, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.08853004565195555, 1);
  sqcRYGate(q, 1.6275695519597477, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5645211742641676, 1);
  sqcRYGate(q, 2.941642526070605, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2059616032362213, 2);
  sqcRYGate(q, 0.6154008098841501, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6014264016509605, 2);
  sqcRYGate(q, 2.0739981687861464, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.359329080848319, 0);
  sqcRYGate(q, 0.43357170905708176, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7540066300421255, 0);
  sqcRYGate(q, -2.795898385009777, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7522503398002719, 1);
  sqcRYGate(q, -1.5226062120679016, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.05794086767108, 1);
  sqcRYGate(q, 0.4544813733199149, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2739567730732453, 2);
  sqcRYGate(q, 1.432171912063384, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.972636062074679, 2);
  sqcRYGate(q, -2.935628598031975, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2461346714167894, 0);
  sqcRYGate(q, -0.9685752589478231, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6694208973036628, 0);
  sqcRYGate(q, -2.9090040840757823, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5576049638445757, 1);
  sqcRYGate(q, -3.012563787267966, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.39321860087443, 1);
  sqcRYGate(q, 0.4535635805633807, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4670991642934006, 2);
  sqcRYGate(q, 2.884089841782067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.423355913057997, 2);
  sqcRYGate(q, -1.2956757943796509, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.447220642543549, 0);
  sqcRYGate(q, 2.6798773690506326, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.028499967525133844, 0);
  sqcRYGate(q, 0.5150514345566046, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1519980391071103, 1);
  sqcRYGate(q, -0.3129548758167698, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6864815019467461, 1);
  sqcRYGate(q, -0.11712158765270317, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.078511731340554, 2);
  sqcRYGate(q, 1.4810766484345352, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9153660801249734, 2);
  sqcRYGate(q, 1.0212423610533312, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1295127928467004, 0);
  sqcRYGate(q, 2.216526087273955, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3320446857563493, 0);
  sqcRYGate(q, 2.718862696255406, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0760645507043718, 1);
  sqcRYGate(q, -1.0826883232408473, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.843826734577952, 1);
  sqcRYGate(q, 2.8766124384955356, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9139491087111264, 2);
  sqcRYGate(q, -1.3982825529124687, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.828842797907207, 2);
  sqcRYGate(q, -2.8568060889107563, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7914996077848152, 0);
  sqcRYGate(q, 1.41422619825429, 1);
  sqcRYGate(q, -0.13775604293723256, 2);
  sqcRYGate(q, -2.6331085020766993, 3);

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
