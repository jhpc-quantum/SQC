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

  sqcRYGate(q, 2.3011989393424894, 0);
  sqcRYGate(q, -1.4998293443236521, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.052348160130603, 0);
  sqcRYGate(q, 0.17560058897708597, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.547234027579, 2);
  sqcRYGate(q, -0.21248818683341497, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1811277239732176, 2);
  sqcRYGate(q, -2.600372237147544, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.378292821510379, 0);
  sqcRYGate(q, -3.03318924049315, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4987540487435462, 0);
  sqcRYGate(q, 1.4694354666672054, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9586742609791066, 1);
  sqcRYGate(q, -0.02400023385905925, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7210617585652832, 1);
  sqcRYGate(q, 1.184049330460914, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2739587687871574, 0);
  sqcRYGate(q, 0.44530146988174696, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.143808961495421, 0);
  sqcRYGate(q, 2.378822363144219, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8184963150636886, 2);
  sqcRYGate(q, 3.072831073568772, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0792813925124274, 2);
  sqcRYGate(q, 1.4388810841241617, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3117042569806276, 0);
  sqcRYGate(q, 1.517097424597178, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5758823268470072, 0);
  sqcRYGate(q, -3.0291443372780336, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9753330317832827, 1);
  sqcRYGate(q, -1.0720232815353619, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8604849092465647, 1);
  sqcRYGate(q, 0.6591663258870993, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.964947203745222, 0);
  sqcRYGate(q, 0.9894373579020878, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.538923871874271, 0);
  sqcRYGate(q, 0.9401784435734845, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.10838215272531238, 2);
  sqcRYGate(q, 0.6675355258301979, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4563100564897078, 2);
  sqcRYGate(q, -2.9316138782825063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0759380200357826, 0);
  sqcRYGate(q, -0.27445719298285715, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7012252563765013, 0);
  sqcRYGate(q, 2.357011191200361, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8348218355241843, 1);
  sqcRYGate(q, 1.8653989171431569, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8092314427207116, 1);
  sqcRYGate(q, -0.5394554635001274, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6759752624729067, 0);
  sqcRYGate(q, 2.316899567918187, 1);
  sqcRYGate(q, 0.6912015028905348, 2);
  sqcRYGate(q, -0.9945461300810381, 3);

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
