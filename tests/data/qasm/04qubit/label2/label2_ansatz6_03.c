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

  sqcRYGate(q, -0.3729488836942984, 0);
  sqcRYGate(q, -3.086538064758157, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.17813336707802901, 0);
  sqcRYGate(q, -2.9603399380859408, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8011245667222359, 1);
  sqcRYGate(q, 0.7128648834231668, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0336666004459705, 1);
  sqcRYGate(q, -2.95577803511588, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3929017190638877, 2);
  sqcRYGate(q, 1.3103073724722183, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2828687988765954, 2);
  sqcRYGate(q, -0.634975093998241, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.763165632390591, 0);
  sqcRYGate(q, -1.9810425278692376, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.14670153324536983, 0);
  sqcRYGate(q, -1.4867349845530613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8425724154811212, 1);
  sqcRYGate(q, 0.9984059635410202, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.07987866682836062, 1);
  sqcRYGate(q, 1.489988854022564, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0034743711027847, 2);
  sqcRYGate(q, -0.6044780956325811, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.666048219297502, 2);
  sqcRYGate(q, -0.4471586644144507, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5450605744593147, 0);
  sqcRYGate(q, 2.6406002096324377, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.69650710132967, 0);
  sqcRYGate(q, 0.47688407259675364, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.12913764766212166, 1);
  sqcRYGate(q, 1.8439929860679831, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1992474057319242, 1);
  sqcRYGate(q, -0.1672121164078897, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7390998043965809, 2);
  sqcRYGate(q, 2.4486452769600633, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2926599868875175, 2);
  sqcRYGate(q, -1.9544684771583225, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2935788181400385, 0);
  sqcRYGate(q, -1.424407330200535, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.761679643634511, 0);
  sqcRYGate(q, -0.49525408134433374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8181827175312453, 1);
  sqcRYGate(q, 1.4939730229392238, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.194895466690228, 1);
  sqcRYGate(q, 1.6814559636094346, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.25242965073514695, 2);
  sqcRYGate(q, 0.865851106045266, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3806155250614442, 2);
  sqcRYGate(q, 0.7446319147479185, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.42772971311746144, 0);
  sqcRYGate(q, 2.2921435869725437, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5514118504785905, 0);
  sqcRYGate(q, -0.3478113113561848, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9949491112398805, 1);
  sqcRYGate(q, 2.9554393918198008, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5292530485145102, 1);
  sqcRYGate(q, -2.5732388084991147, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5488166655938898, 2);
  sqcRYGate(q, -1.3121977694971312, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.15887457203143643, 2);
  sqcRYGate(q, -1.8827904856274946, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9835286395624356, 0);
  sqcRYGate(q, 0.12318395995221554, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0463786913797923, 0);
  sqcRYGate(q, -1.6962699102701755, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.991754144913906, 1);
  sqcRYGate(q, -1.2750023907867947, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0527723902663135, 1);
  sqcRYGate(q, -2.29108788388878, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0780690230872514, 2);
  sqcRYGate(q, 1.7130213229645441, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1835057654389989, 2);
  sqcRYGate(q, 2.499406880466834, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2524616303632385, 0);
  sqcRYGate(q, 0.0788599187548078, 1);
  sqcRYGate(q, -2.7046993115498137, 2);
  sqcRYGate(q, 0.4121070105997404, 3);

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
