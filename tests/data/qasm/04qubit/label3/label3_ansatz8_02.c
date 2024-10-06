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

  sqcRYGate(q, -2.666365971321563, 0);
  sqcRYGate(q, 0.6783341033418047, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7435112356151685, 0);
  sqcRYGate(q, 1.5987620387636765, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.54733366064578, 2);
  sqcRYGate(q, -1.7210442077084898, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9332147564025224, 2);
  sqcRYGate(q, -2.6156450362013604, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.666372098062039, 0);
  sqcRYGate(q, -0.02658346545915184, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7464422661771215, 0);
  sqcRYGate(q, 1.3653884885953667, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.02903140050987751, 1);
  sqcRYGate(q, -1.2282358648250025, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.392511052849977, 1);
  sqcRYGate(q, -3.064256940851094, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9330439683715843, 0);
  sqcRYGate(q, 2.746628787242284, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5026224581345287, 0);
  sqcRYGate(q, -0.9239434818275836, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.11765530001050452, 2);
  sqcRYGate(q, 2.302564938839893, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7500168757906824, 2);
  sqcRYGate(q, 1.6050153980020874, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0470506556937655, 0);
  sqcRYGate(q, -2.6643697145823024, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3948794925913677, 0);
  sqcRYGate(q, -1.8660572162994358, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1289600783676526, 1);
  sqcRYGate(q, -0.4014797872484766, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1368852708493713, 1);
  sqcRYGate(q, 1.8067199677772414, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0877345275886823, 0);
  sqcRYGate(q, -1.3293585989217362, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.561907889804442, 0);
  sqcRYGate(q, 2.5412654932516294, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.028016336632278538, 2);
  sqcRYGate(q, 1.8446516466258498, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7811911040404338, 2);
  sqcRYGate(q, -2.6907622630359094, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.133821921773726, 0);
  sqcRYGate(q, 2.8947377564699583, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6157678161514333, 0);
  sqcRYGate(q, 1.028717298547999, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4783515117617787, 1);
  sqcRYGate(q, -2.0296399330829633, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8310786367760024, 1);
  sqcRYGate(q, 2.7703799862885337, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0473295604951005, 0);
  sqcRYGate(q, -2.323394153020282, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7054307071295169, 0);
  sqcRYGate(q, 1.3961878129541072, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2914922971018887, 2);
  sqcRYGate(q, -2.8173175885696904, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2980489084232065, 2);
  sqcRYGate(q, 0.7377485083423903, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2474034447659295, 0);
  sqcRYGate(q, -1.6786296028220402, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.03286150881097338, 0);
  sqcRYGate(q, 1.7049344151966648, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.23634457138108, 1);
  sqcRYGate(q, 2.291556011717492, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6719255498412577, 1);
  sqcRYGate(q, 1.0095977560782305, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0529546727830423, 0);
  sqcRYGate(q, -1.9250609029673316, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3401151067637933, 0);
  sqcRYGate(q, -1.818181820903061, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9941394397319296, 2);
  sqcRYGate(q, -0.6555517489223099, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.210230297906473, 2);
  sqcRYGate(q, -0.47176693319717167, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.995233412896397, 0);
  sqcRYGate(q, 0.6253956389038614, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6718042230614847, 0);
  sqcRYGate(q, 2.8542568476671915, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.527584176482927, 1);
  sqcRYGate(q, 2.9233925710496016, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9495462534337147, 1);
  sqcRYGate(q, 0.904940542899758, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5691503780284486, 0);
  sqcRYGate(q, 2.48427702540888, 1);
  sqcRYGate(q, -1.0346727004527487, 2);
  sqcRYGate(q, 0.5191006173358812, 3);

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
