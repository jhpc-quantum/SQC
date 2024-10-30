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

  sqcRYGate(q, -1.340004555707063, 0);
  sqcRYGate(q, -2.142339850303343, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.023094667256984, 0);
  sqcRYGate(q, -2.5705283528392693, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.358464377689866, 2);
  sqcRYGate(q, -2.7157785589964356, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.48110811851408997, 2);
  sqcRYGate(q, 2.0057094638589232, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1092671613691568, 4);
  sqcRYGate(q, -0.32289990527391177, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5494055137859561, 4);
  sqcRYGate(q, -1.3702543254556574, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.404791750341278, 6);
  sqcRYGate(q, 2.952673340701417, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.249421660707121, 6);
  sqcRYGate(q, 3.1300600854661194, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.459578761871567, 1);
  sqcRYGate(q, -0.9390908501239013, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3297448702909591, 1);
  sqcRYGate(q, 1.5717125576436308, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.46572654864187957, 3);
  sqcRYGate(q, -3.127858386770508, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7681171367071163, 3);
  sqcRYGate(q, -0.3183464001261571, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8101566683884123, 5);
  sqcRYGate(q, 1.8392781763780361, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.618038426427517, 5);
  sqcRYGate(q, 1.5723444291524338, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.1377644110131877, 0);
  sqcRYGate(q, -0.5390791290324257, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0786440991629482, 0);
  sqcRYGate(q, -1.2697670891168884, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5888515537556391, 2);
  sqcRYGate(q, 2.6989465475504986, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5704848162568803, 2);
  sqcRYGate(q, -1.2949022941089563, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0020820443324440774, 4);
  sqcRYGate(q, 1.5364254760734306, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9841271699455358, 4);
  sqcRYGate(q, -1.5491173550719364, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5179512905714816, 6);
  sqcRYGate(q, -2.6299819901243153, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4897701418409621, 6);
  sqcRYGate(q, -1.924847282491183, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0627682997835466, 1);
  sqcRYGate(q, -2.4187172952564313, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1406762017392684, 1);
  sqcRYGate(q, -0.001278725588502283, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.001548440601668883, 3);
  sqcRYGate(q, 1.0615769907784625, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.03227300613059, 3);
  sqcRYGate(q, 1.5018839469397547, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0724877248049065, 5);
  sqcRYGate(q, -1.7018345483878328, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.039778431439619, 5);
  sqcRYGate(q, -2.994773350790878, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.124137471954187, 0);
  sqcRYGate(q, 0.07880950421263666, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.32858359373756674, 0);
  sqcRYGate(q, -0.6230657453456265, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4728606234634745, 2);
  sqcRYGate(q, -1.6046583019125435, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.012669841035997, 2);
  sqcRYGate(q, -1.585111207544692, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6393136020471955, 4);
  sqcRYGate(q, -1.2714140006354642, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3494170076202101, 4);
  sqcRYGate(q, -1.5506743591780117, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.874031909772257, 6);
  sqcRYGate(q, -2.7749155241782426, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0944929808290267, 6);
  sqcRYGate(q, -0.2881517873881627, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.12722524978325467, 1);
  sqcRYGate(q, 3.141018569928045, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5719691022787456, 1);
  sqcRYGate(q, -1.5750449945508302, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1143288429457923, 3);
  sqcRYGate(q, 1.315401778745687, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1024744708076795, 3);
  sqcRYGate(q, 0.2894652625514317, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.3982671340981594, 5);
  sqcRYGate(q, 2.9710571503008385, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5809884839228445, 5);
  sqcRYGate(q, -1.5688872872226163, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.152329023368103, 0);
  sqcRYGate(q, 1.5627609411225951, 1);
  sqcRYGate(q, -1.571400775332001, 2);
  sqcRYGate(q, -0.0085449717100966, 3);
  sqcRYGate(q, -1.831020158371059, 4);
  sqcRYGate(q, -3.1330483012983734, 5);
  sqcRYGate(q, 0.17625395284400192, 6);
  sqcRYGate(q, -2.8207458765489957, 7);

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
