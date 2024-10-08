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

  sqcRYGate(q, 2.6746821441657402e-06, 0);
  sqcRZGate(q, -3.0541990311404783, 0);
  sqcRYGate(q, -0.6741297077415132, 1);
  sqcRZGate(q, -0.00047735524004515324, 1);
  sqcRYGate(q, 1.841946924315121, 2);
  sqcRZGate(q, 0.00034864963009308586, 2);
  sqcRYGate(q, 2.719632149925403, 3);
  sqcRZGate(q, 0.0005374517692224857, 3);
  sqcRYGate(q, -3.1380764328241604, 4);
  sqcRZGate(q, -3.1383157319820563, 4);
  sqcRYGate(q, -3.1212458758300015, 5);
  sqcRZGate(q, -0.005003679788400107, 5);
  sqcRYGate(q, -0.002654112365011639, 6);
  sqcRZGate(q, 3.089777458119883, 6);
  sqcRYGate(q, 3.1349261220533022, 7);
  sqcRZGate(q, 0.030617324795636055, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.0703256858590748e-06, 0);
  sqcRZGate(q, 3.1102553482999538, 0);
  sqcRYGate(q, 2.745540388248058, 1);
  sqcRZGate(q, 0.000946351550713179, 1);
  sqcRYGate(q, 0.815122371061924, 2);
  sqcRZGate(q, 3.1400668131405336, 2);
  sqcRYGate(q, 1.5278610796170682, 3);
  sqcRZGate(q, 0.0013514864729691212, 3);
  sqcRYGate(q, 1.3470388323461695, 4);
  sqcRZGate(q, 3.1415062457893477, 4);
  sqcRYGate(q, -2.969192010022708, 5);
  sqcRZGate(q, -0.000142479441644916, 5);
  sqcRYGate(q, -3.071459756512727, 6);
  sqcRZGate(q, -3.141452505332188, 6);
  sqcRYGate(q, -3.074627160387747, 7);
  sqcRZGate(q, -0.0004250881997256428, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -3.9813745456029887e-07, 0);
  sqcRZGate(q, -3.057373507586266, 0);
  sqcRYGate(q, 3.1150597717854023, 1);
  sqcRZGate(q, 0.0009599357129728148, 1);
  sqcRYGate(q, 3.0926069711726547, 2);
  sqcRZGate(q, -0.0010396493031413195, 2);
  sqcRYGate(q, 0.06358676646435057, 3);
  sqcRZGate(q, -0.0013765098575388658, 3);
  sqcRYGate(q, -1.534602451464969, 4);
  sqcRZGate(q, -2.9432205641555242e-06, 4);
  sqcRYGate(q, -2.2203419994677493, 5);
  sqcRZGate(q, 0.00015587226488111838, 5);
  sqcRYGate(q, 1.5652359250025984, 6);
  sqcRZGate(q, -2.711921601061817e-05, 6);
  sqcRYGate(q, -2.5825754402181853, 7);
  sqcRZGate(q, -3.1391837613913722, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.5707903422161138, 0);
  sqcRZGate(q, 3.141592564622622, 0);
  sqcRYGate(q, -1.9922565169440976, 1);
  sqcRZGate(q, 0.08268419271841514, 1);
  sqcRYGate(q, -0.4556516409393461, 2);
  sqcRZGate(q, 2.6700655686721557, 2);
  sqcRYGate(q, -2.8254439700142173, 3);
  sqcRZGate(q, -0.14612119521027367, 3);
  sqcRYGate(q, -2.875967034751905, 4);
  sqcRZGate(q, 3.094761906329786, 4);
  sqcRYGate(q, -0.04531775853994545, 5);
  sqcRZGate(q, 0.09704267111181596, 5);
  sqcRYGate(q, -1.5110391366685993, 6);
  sqcRZGate(q, -2.5032470563908347, 6);
  sqcRYGate(q, 0.020068155433632134, 7);
  sqcRZGate(q, -2.58775672667948, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.570804830237521, 0);
  sqcRZGate(q, 1.0333476059218138, 0);
  sqcRYGate(q, -3.1415878099620542, 1);
  sqcRZGate(q, -2.0256175503494918, 1);
  sqcRYGate(q, 3.141592233627515, 2);
  sqcRZGate(q, -2.5799329312456574, 2);
  sqcRYGate(q, -1.9304840659373212e-07, 3);
  sqcRZGate(q, 1.179461799830224, 3);
  sqcRYGate(q, -1.64092949894723e-07, 4);
  sqcRZGate(q, -2.061357734912434, 4);
  sqcRYGate(q, -4.3396721701665773e-07, 5);
  sqcRZGate(q, 0.936346425377579, 5);
  sqcRYGate(q, -9.724926366416753e-07, 6);
  sqcRZGate(q, 0.39519776560341424, 6);
  sqcRYGate(q, -1.518002121307928e-07, 7);
  sqcRZGate(q, 0.4773160760201502, 7);

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
