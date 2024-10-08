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

  sqcRYGate(q, -1.472451060829359, 0);
  sqcRZGate(q, 3.0789438012490677e-06, 0);
  sqcRYGate(q, 3.1415925118462202, 1);
  sqcRZGate(q, -1.4705888193637353, 1);
  sqcRYGate(q, -1.5707963977399841, 2);
  sqcRZGate(q, -4.311424064501272e-06, 2);
  sqcRYGate(q, -0.09122441407953304, 3);
  sqcRZGate(q, 2.4576007240817432e-05, 3);
  sqcRYGate(q, 3.0501563866767465, 4);
  sqcRZGate(q, -1.57079436504509, 4);
  sqcRYGate(q, -1.5707961611750565, 5);
  sqcRZGate(q, -1.1866165996172944, 5);
  sqcRYGate(q, -3.141592637047625, 6);
  sqcRZGate(q, 1.8393660183880107, 6);
  sqcRYGate(q, 1.5707968007348272, 7);
  sqcRZGate(q, -0.09481124962569559, 7);
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
  sqcRYGate(q, 1.5707964634200613, 0);
  sqcRZGate(q, -0.4400332632020532, 0);
  sqcRYGate(q, 1.570802062576207, 1);
  sqcRZGate(q, 1.6490864765645252, 1);
  sqcRYGate(q, -3.1277253853800877, 2);
  sqcRZGate(q, -2.597232306659208, 2);
  sqcRYGate(q, -0.22339967337120786, 3);
  sqcRZGate(q, 1.5707689176935644, 3);
  sqcRYGate(q, 2.919243368559757, 4);
  sqcRZGate(q, -3.1415915865945596, 4);
  sqcRYGate(q, -3.6344933449995776e-08, 5);
  sqcRZGate(q, 0.6860125245304801, 5);
  sqcRYGate(q, 3.141591989575119, 6);
  sqcRZGate(q, 1.2123935519964393, 6);
  sqcRYGate(q, 1.5707967335661768, 7);
  sqcRZGate(q, -0.9656497193397837, 7);
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
  sqcRYGate(q, 3.1415913449937647, 0);
  sqcRZGate(q, 0.4946244683020371, 0);
  sqcRYGate(q, 1.570767525688316, 1);
  sqcRZGate(q, -1.570804338135205, 1);
  sqcRYGate(q, -8.244491738196301e-07, 2);
  sqcRZGate(q, -2.4477087402176054, 2);
  sqcRYGate(q, -1.5707961749718098, 3);
  sqcRZGate(q, 1.9396486948035931, 3);
  sqcRYGate(q, -1.5707963638567082, 4);
  sqcRZGate(q, 2.816537932452333, 4);
  sqcRYGate(q, -8.6592964976262e-07, 5);
  sqcRZGate(q, -1.6431534141113273, 5);
  sqcRYGate(q, 1.570796246912656, 6);
  sqcRZGate(q, 3.141592099163699, 6);
  sqcRYGate(q, 5.088652823559414e-07, 7);
  sqcRZGate(q, -0.5091012070699411, 7);
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
  sqcRYGate(q, 3.141592496067532, 0);
  sqcRZGate(q, -1.9304843832536298, 0);
  sqcRYGate(q, -1.5707962594735505, 1);
  sqcRZGate(q, -3.1415911722893743, 1);
  sqcRYGate(q, 6.750151548828853e-09, 2);
  sqcRZGate(q, -2.5923207066854235, 2);
  sqcRYGate(q, -3.1415926073321447, 3);
  sqcRZGate(q, -1.2019421625035869, 3);
  sqcRYGate(q, 1.2553695860617609e-08, 4);
  sqcRZGate(q, -0.315658131816849, 4);
  sqcRYGate(q, -3.1415926509735863, 5);
  sqcRZGate(q, 1.0144049354699265, 5);
  sqcRYGate(q, -1.5707963832259535, 6);
  sqcRZGate(q, 2.541333258626779, 6);
  sqcRYGate(q, 1.049467775793289e-06, 7);
  sqcRZGate(q, -1.7108576518944227, 7);
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
  sqcRYGate(q, 3.1415926446985596, 0);
  sqcRZGate(q, 2.681378007704312, 0);
  sqcRYGate(q, 1.4925069351741327, 1);
  sqcRZGate(q, -2.3074618097726463, 1);
  sqcRYGate(q, -1.0436716143783613e-07, 2);
  sqcRZGate(q, -2.524185812409745, 2);
  sqcRYGate(q, 1.570797639674959, 3);
  sqcRZGate(q, -2.307462316786024, 3);
  sqcRYGate(q, 1.052467881734742e-07, 4);
  sqcRZGate(q, 3.1260172408728515, 4);
  sqcRYGate(q, 8.418854688940769e-07, 5);
  sqcRZGate(q, 0.8979342366949989, 5);
  sqcRYGate(q, -3.1415924400557844, 6);
  sqcRZGate(q, -1.2565476429976892, 6);
  sqcRYGate(q, 3.141591683062369, 7);
  sqcRZGate(q, -2.271104246425951, 7);

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
