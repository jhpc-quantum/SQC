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

  sqcRYGate(q, 2.2152066114019404, 0);
  sqcRYGate(q, 0.07559572179158458, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9709631927856404, 0);
  sqcRYGate(q, 2.024424214225454, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2433136022177624, 2);
  sqcRYGate(q, 2.0918166963267835, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0911961757142068, 2);
  sqcRYGate(q, -1.6350953223744025, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6241094819041684, 0);
  sqcRYGate(q, 1.0400034594833274, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.31515953235853583, 0);
  sqcRYGate(q, 0.4000257765870758, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.286030766439603, 1);
  sqcRYGate(q, 1.1338291614758367, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.573994846186955, 1);
  sqcRYGate(q, -0.18260106620585842, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9126145331062225, 0);
  sqcRYGate(q, 1.2558382150496368, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0651158398404834, 0);
  sqcRYGate(q, -1.4000097923270616, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4520721372823442, 2);
  sqcRYGate(q, -1.3410646237938286, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.267212940727656, 2);
  sqcRYGate(q, -0.4485838654470889, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3502683187051454, 0);
  sqcRYGate(q, -0.49955874083838303, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5037799304358126, 0);
  sqcRYGate(q, 0.7647895117212659, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8717506188967055, 1);
  sqcRYGate(q, -2.3241166225863914, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.082580289907539, 1);
  sqcRYGate(q, 1.991288605035372, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1544806184197975, 0);
  sqcRYGate(q, 0.4865404568000465, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3680923462236425, 0);
  sqcRYGate(q, 0.5518980526028765, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.697820852581489, 2);
  sqcRYGate(q, -2.382591796440032, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3591585458476627, 2);
  sqcRYGate(q, 0.3941292419114552, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.493539396990713, 0);
  sqcRYGate(q, -0.019702995785704225, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.01993670594789831, 0);
  sqcRYGate(q, -2.4653062226283025, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.713984353022083, 1);
  sqcRYGate(q, 2.9122878681393742, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4287419015351022, 1);
  sqcRYGate(q, 3.1108057279973074, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2307957520558723, 0);
  sqcRYGate(q, 0.6527225290321956, 1);
  sqcRYGate(q, 1.5892944568635818, 2);
  sqcRYGate(q, 2.4948617733008884, 3);

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
