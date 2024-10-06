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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -2.2415809635134565e-06, 0);
  sqcRZGate(q, 0.27174503229598224, 0);
  sqcRYGate(q, 1.57078936351936, 1);
  sqcRZGate(q, 1.5364290097835036, 1);
  sqcRYGate(q, -2.8570149357630226, 2);
  sqcRZGate(q, -0.00025995942482769194, 2);
  sqcRYGate(q, 1.5707941255709363, 3);
  sqcRZGate(q, 3.421390288593784e-05, 3);
  sqcRYGate(q, -0.021841387050358207, 4);
  sqcRZGate(q, -3.1107692839221954, 4);
  sqcRYGate(q, -1.5707965028613946, 5);
  sqcRZGate(q, 1.5707953583147913, 5);
  sqcRYGate(q, 3.1348458468096165, 6);
  sqcRZGate(q, -0.0009503558946914823, 6);
  sqcRYGate(q, 3.1415892782543944, 7);
  sqcRZGate(q, 0.17700764931578353, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5707920058207525, 0);
  sqcRZGate(q, -2.7440808446925318, 0);
  sqcRYGate(q, 0.0009302618518161053, 1);
  sqcRZGate(q, -2.1776111242248466, 1);
  sqcRYGate(q, -3.1233941108141146, 2);
  sqcRZGate(q, 1.5705359252105051, 2);
  sqcRYGate(q, 0.0647368853479351, 3);
  sqcRZGate(q, -3.1415646242544595, 3);
  sqcRYGate(q, -1.6264654803642106e-07, 4);
  sqcRZGate(q, 3.1113735953010617, 4);
  sqcRYGate(q, 1.5716643612259853, 5);
  sqcRZGate(q, -3.000272143552593, 5);
  sqcRYGate(q, -1.5707834442409194, 6);
  sqcRZGate(q, 1.5707940248937327, 6);
  sqcRYGate(q, -1.570825783163406, 7);
  sqcRZGate(q, -3.1388164616184717, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1415662916015323, 0);
  sqcRZGate(q, -1.1736608955286758, 0);
  sqcRYGate(q, -3.1415599440938493, 1);
  sqcRZGate(q, 2.4203216073703464, 1);
  sqcRYGate(q, 1.570796040400074, 2);
  sqcRZGate(q, -1.2606888632608915, 2);
  sqcRYGate(q, -1.5712121251319067, 3);
  sqcRZGate(q, -3.141588899616531, 3);
  sqcRYGate(q, 1.57079555775492, 4);
  sqcRZGate(q, 2.790748032774585, 4);
  sqcRYGate(q, -3.1415891730898036, 5);
  sqcRZGate(q, 1.7121344190854655, 5);
  sqcRYGate(q, -1.5707136475490326, 6);
  sqcRZGate(q, 1.6021195749485067, 6);
  sqcRYGate(q, 3.1102519613657833, 7);
  sqcRZGate(q, -1.5680204693151325, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5708440059035853, 0);
  sqcRZGate(q, -0.11507312334176052, 0);
  sqcRYGate(q, -1.837260304521232, 1);
  sqcRZGate(q, 2.8457091742052554, 1);
  sqcRYGate(q, 4.230771220059581e-06, 2);
  sqcRZGate(q, -0.4037971445036088, 2);
  sqcRYGate(q, -3.07447088067405, 3);
  sqcRZGate(q, 1.5708058163931327, 3);
  sqcRYGate(q, -3.2739177349648915e-06, 4);
  sqcRZGate(q, -1.832023350417618, 4);
  sqcRYGate(q, 0.07191849602173404, 5);
  sqcRZGate(q, -1.5708166483507089, 5);
  sqcRYGate(q, -1.570738618355743, 6);
  sqcRZGate(q, 0.2851829968520173, 6);
  sqcRYGate(q, 1.31115581467773, 7);
  sqcRZGate(q, 3.1415895767265862, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 4.741386361080158e-05, 0);
  sqcRZGate(q, 1.3713829846307357, 0);
  sqcRYGate(q, -1.5708054808146388, 1);
  sqcRZGate(q, 1.795755141053542, 1);
  sqcRYGate(q, 3.141569731072304, 2);
  sqcRZGate(q, 2.7334096815868736, 2);
  sqcRYGate(q, -1.570789646167805, 3);
  sqcRZGate(q, 1.795728542064289, 3);
  sqcRYGate(q, 8.90403472464385e-06, 4);
  sqcRZGate(q, 0.2980556190316417, 4);
  sqcRYGate(q, 1.570766621516639, 5);
  sqcRZGate(q, 0.22497049356577037, 5);
  sqcRYGate(q, 6.09501218633568e-05, 6);
  sqcRZGate(q, -2.170017726298978, 6);
  sqcRYGate(q, -1.5708017335442033, 7);
  sqcRZGate(q, -2.9167087711285684, 7);

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
