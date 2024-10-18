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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -2.9672992105588842, 0);
  sqcRZGate(q, -0.09793321041283322, 0);
  sqcRYGate(q, -1.5707876490191037, 1);
  sqcRZGate(q, -3.1411534704761013, 1);
  sqcRYGate(q, -1.280829423328771, 2);
  sqcRZGate(q, 1.5707945400751055, 2);
  sqcRYGate(q, 1.570795780840768, 3);
  sqcRZGate(q, -1.5707971553362698, 3);
  sqcRYGate(q, -0.014318033194514117, 4);
  sqcRZGate(q, -1.5949811192128827, 4);
  sqcRYGate(q, -3.1415914598210115, 5);
  sqcRZGate(q, 2.153104372825883, 5);
  sqcRYGate(q, -3.1415657003069106, 6);
  sqcRZGate(q, 0.08506881361063368, 6);
  sqcRYGate(q, 1.6033945109269496, 7);
  sqcRZGate(q, -1.5559340728875908, 7);
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
  sqcRYGate(q, -2.141245967195461e-05, 0);
  sqcRZGate(q, 2.1915663456439027, 0);
  sqcRYGate(q, -1.5631165223147887, 1);
  sqcRZGate(q, -1.9099441276628824, 1);
  sqcRYGate(q, -1.5707953996582438, 2);
  sqcRZGate(q, -1.5706349157666404, 2);
  sqcRYGate(q, 1.5709116215951897, 3);
  sqcRZGate(q, 1.3154626853414673, 3);
  sqcRYGate(q, 3.62819121413338e-07, 4);
  sqcRZGate(q, 0.4511186506629802, 4);
  sqcRYGate(q, 1.5707745209732586, 5);
  sqcRZGate(q, -0.00019168330020724443, 5);
  sqcRYGate(q, 1.5707950775404482, 6);
  sqcRZGate(q, 2.4888244063860596, 6);
  sqcRYGate(q, 1.9982961685794463, 7);
  sqcRZGate(q, -1.1837233037110846, 7);
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
  sqcRYGate(q, 6.001848665626822e-05, 0);
  sqcRZGate(q, -0.5228192813270773, 0);
  sqcRYGate(q, 3.1411499691806157, 1);
  sqcRZGate(q, -0.3391388441240517, 1);
  sqcRYGate(q, 0.4454036372770806, 2);
  sqcRZGate(q, -1.5708085508234837, 2);
  sqcRYGate(q, 4.259545282714328e-06, 3);
  sqcRZGate(q, -0.21826240526566834, 3);
  sqcRYGate(q, 1.570795549748925, 4);
  sqcRZGate(q, 2.3445891611714305, 4);
  sqcRYGate(q, -0.13220260004108372, 5);
  sqcRZGate(q, 0.00019443057104677627, 5);
  sqcRYGate(q, -1.6453529089205414, 6);
  sqcRZGate(q, 1.7877685548576774, 6);
  sqcRYGate(q, 0.00017963043908419962, 7);
  sqcRZGate(q, -0.35124776316423806, 7);
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
  sqcRYGate(q, 1.5708031602536474, 0);
  sqcRZGate(q, -0.1956232500326216, 0);
  sqcRYGate(q, -1.5708107881181508, 1);
  sqcRZGate(q, -1.4508979322606388, 1);
  sqcRYGate(q, 1.4500060171986817, 2);
  sqcRZGate(q, 2.945966585563185, 2);
  sqcRYGate(q, -3.3019280481866326e-05, 3);
  sqcRZGate(q, -2.5557790687211996, 3);
  sqcRYGate(q, -3.141591242416806, 4);
  sqcRZGate(q, 2.148966677761001, 4);
  sqcRYGate(q, -1.5707972215742334, 5);
  sqcRZGate(q, -3.021706582598824, 5);
  sqcRYGate(q, -1.5708009953323971, 6);
  sqcRZGate(q, 1.3751758048933898, 6);
  sqcRYGate(q, 1.570796547887194, 7);
  sqcRZGate(q, 1.6906839573829693, 7);

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
