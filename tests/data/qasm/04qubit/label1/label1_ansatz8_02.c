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

  sqcRYGate(q, 1.985494690301743, 0);
  sqcRYGate(q, -0.1812939279347825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.05651265074867862, 0);
  sqcRYGate(q, -2.25718528135723, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9210237021520504, 2);
  sqcRYGate(q, 3.080333494703104, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7902313349296826, 2);
  sqcRYGate(q, -0.6276876301923418, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.13051963648836346, 0);
  sqcRYGate(q, 0.9777720600561236, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.14981417756102933, 0);
  sqcRYGate(q, 0.6329514426039147, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9937280963788454, 1);
  sqcRYGate(q, -1.2337119945971935, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.46614936869984563, 1);
  sqcRYGate(q, -0.45240544278628186, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6658286081650102, 0);
  sqcRYGate(q, -2.112619662730048, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2831329707613712, 0);
  sqcRYGate(q, 2.4197914639454208, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.14113640574344802, 2);
  sqcRYGate(q, 1.9456015498444206, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.763831396034039, 2);
  sqcRYGate(q, -2.4277538799416774, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3831257743427363, 0);
  sqcRYGate(q, 2.7326616684664042, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.252175854710277, 0);
  sqcRYGate(q, 0.41744436766848014, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0116547425301645, 1);
  sqcRYGate(q, -2.194148614451459, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.33387885488530505, 1);
  sqcRYGate(q, -0.03140831484674678, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.169994174482399, 0);
  sqcRYGate(q, -2.57941952979007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.074179560701945, 0);
  sqcRYGate(q, 2.110828080943308, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.158287780859352, 2);
  sqcRYGate(q, 2.4883154658052002, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.616784375113689, 2);
  sqcRYGate(q, -2.5633128160086427, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4755129811825251, 0);
  sqcRYGate(q, 2.3228917375389475, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2620980955164658, 0);
  sqcRYGate(q, -3.0111582864642417, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1945340429785784, 1);
  sqcRYGate(q, 0.4581874330805938, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6417815709202135, 1);
  sqcRYGate(q, 2.0282176231950118, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.049992066317823, 0);
  sqcRYGate(q, 0.5976820633419342, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.639279251304461, 0);
  sqcRYGate(q, -2.621693288828378, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0298908574834016, 2);
  sqcRYGate(q, -1.9385107791469744, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5327426760693815, 2);
  sqcRYGate(q, -2.6457527107924452, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2074659386249713, 0);
  sqcRYGate(q, -0.12384304005609331, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.801074162746769, 0);
  sqcRYGate(q, -2.3679022163189853, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4023658921093762, 1);
  sqcRYGate(q, -2.7023149514959095, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8897670545029737, 1);
  sqcRYGate(q, 0.9570918391390757, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.240696262859963, 0);
  sqcRYGate(q, -0.5334629727969828, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6797299468109574, 0);
  sqcRYGate(q, 0.5217479499038644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7467263370341604, 2);
  sqcRYGate(q, -1.5550399945248836, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8371480339505295, 2);
  sqcRYGate(q, -1.7556575705704276, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.281049987155982, 0);
  sqcRYGate(q, 0.6112806121014628, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.865260602226179, 0);
  sqcRYGate(q, -1.969970003414541, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6473347580937859, 1);
  sqcRYGate(q, -1.8981682612719073, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5794378653233037, 1);
  sqcRYGate(q, -1.66636300681074, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0359184641912944, 0);
  sqcRYGate(q, 2.6819509854933026, 1);
  sqcRYGate(q, -0.21850523816881395, 2);
  sqcRYGate(q, 0.6158467226329115, 3);

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
