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

  sqcRYGate(q, -8.192093836871937e-06, 0);
  sqcRZGate(q, -1.5225652543290098, 0);
  sqcRYGate(q, -2.0789343306180098e-07, 1);
  sqcRZGate(q, 1.0605539442245506, 1);
  sqcRYGate(q, -3.139341471566737, 2);
  sqcRZGate(q, 0.0069008485606885895, 2);
  sqcRYGate(q, 3.1415082884915164, 3);
  sqcRZGate(q, -2.3185831088520965, 3);
  sqcRYGate(q, -3.1415922056377936, 4);
  sqcRZGate(q, -2.1587598569357587, 4);
  sqcRYGate(q, -3.091648507116592, 5);
  sqcRZGate(q, -0.1370817229907759, 5);
  sqcRYGate(q, 1.5210605938253448, 6);
  sqcRZGate(q, 0.1902009904840183, 6);
  sqcRYGate(q, 1.5705647591081429, 7);
  sqcRZGate(q, 0.01021938484141671, 7);
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
  sqcRYGate(q, -0.04966553029524601, 0);
  sqcRZGate(q, 0.0013065449800171434, 0);
  sqcRYGate(q, 3.1413342999789315, 1);
  sqcRZGate(q, 0.09343624696303632, 1);
  sqcRYGate(q, -1.620510632014259, 2);
  sqcRZGate(q, 1.036861676975224, 2);
  sqcRYGate(q, 1.6206171403513043, 3);
  sqcRZGate(q, -3.141159535546466, 3);
  sqcRYGate(q, 3.14159260353998, 4);
  sqcRZGate(q, -2.990217260541403, 4);
  sqcRYGate(q, 0.04961660057654515, 5);
  sqcRZGate(q, -3.133932486081854, 5);
  sqcRYGate(q, -0.05495033653766075, 6);
  sqcRZGate(q, -0.2647358120102464, 6);
  sqcRYGate(q, 1.6243827055443938, 7);
  sqcRZGate(q, 2.715966756460256, 7);
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
  sqcRYGate(q, -1.5685882944573954, 0);
  sqcRZGate(q, 0.03133437308634787, 0);
  sqcRYGate(q, 1.5708117547277605, 1);
  sqcRZGate(q, -1.393971277463165, 1);
  sqcRYGate(q, -3.1411412232676637, 2);
  sqcRZGate(q, 1.0685621220000474, 2);
  sqcRYGate(q, -1.5737494957746305, 3);
  sqcRZGate(q, 3.109893554080926, 3);
  sqcRYGate(q, -1.339923741642467e-07, 4);
  sqcRZGate(q, -2.0607000226470036, 4);
  sqcRYGate(q, 3.1393996573063965, 5);
  sqcRZGate(q, 3.117059551755945, 5);
  sqcRYGate(q, -3.141490696863076, 6);
  sqcRZGate(q, -0.17919076704266884, 6);
  sqcRYGate(q, 0.00010770160026396525, 7);
  sqcRZGate(q, -2.6110592090012394, 7);
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
  sqcRYGate(q, 1.5763880368385725, 0);
  sqcRZGate(q, 1.10413447119869, 0);
  sqcRYGate(q, -0.03183036673194373, 1);
  sqcRZGate(q, -1.034145049380485, 1);
  sqcRYGate(q, 1.5711089287710527, 2);
  sqcRZGate(q, -2.994643166248785, 2);
  sqcRYGate(q, 1.5704838313800218, 3);
  sqcRZGate(q, -0.3360480133648395, 3);
  sqcRYGate(q, 1.5707960824662974, 4);
  sqcRZGate(q, -3.1415880948561243, 4);
  sqcRYGate(q, -1.570795271238856, 5);
  sqcRZGate(q, 0.33358443875536326, 5);
  sqcRYGate(q, 1.570818991986951, 6);
  sqcRZGate(q, -1.1064652054428632, 6);
  sqcRYGate(q, 1.5708191133086942, 7);
  sqcRZGate(q, -0.35109932063272165, 7);
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
  sqcRYGate(q, -3.141592607357724, 0);
  sqcRZGate(q, -0.8431288330471602, 0);
  sqcRYGate(q, 1.8058303297152634e-08, 1);
  sqcRZGate(q, 0.48094049577154685, 1);
  sqcRYGate(q, -3.141592548825837, 2);
  sqcRZGate(q, 1.3414190163235418, 2);
  sqcRYGate(q, -3.141592488939181, 3);
  sqcRZGate(q, 0.8584217223376881, 3);
  sqcRYGate(q, -1.5707856686552297, 4);
  sqcRZGate(q, 1.1944750671194972, 4);
  sqcRYGate(q, 3.141581151595927, 5);
  sqcRZGate(q, -1.6135332696295315, 5);
  sqcRYGate(q, -7.120021017215095e-09, 6);
  sqcRZGate(q, -0.8406512173652922, 6);
  sqcRYGate(q, -3.1415925205406428, 7);
  sqcRZGate(q, 0.8433770161076665, 7);

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
