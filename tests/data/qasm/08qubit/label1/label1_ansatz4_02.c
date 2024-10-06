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

  sqcRYGate(q, 0.3594116800918803, 0);
  sqcRZGate(q, 3.0808408508821206, 0);
  sqcRYGate(q, 1.671556506263346, 1);
  sqcRZGate(q, 1.8931665992078397, 1);
  sqcRYGate(q, 0.8895875974343816, 2);
  sqcRZGate(q, -2.716949507022554, 2);
  sqcRYGate(q, -0.5473910264081692, 3);
  sqcRZGate(q, 1.6258739305055048, 3);
  sqcRYGate(q, -3.14158707543532, 4);
  sqcRZGate(q, -2.5470036986990707, 4);
  sqcRYGate(q, -3.124469326573459, 5);
  sqcRZGate(q, -1.2767211723288936, 5);
  sqcRYGate(q, 0.6938838694556386, 6);
  sqcRZGate(q, -2.8332052085112585, 6);
  sqcRYGate(q, 2.6104549151627965, 7);
  sqcRZGate(q, -0.044176050087367205, 7);
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
  sqcRYGate(q, 1.9781280622108568, 0);
  sqcRZGate(q, -3.0065331706235874, 0);
  sqcRYGate(q, 2.688982165331038, 1);
  sqcRZGate(q, -2.9514335069649755, 1);
  sqcRYGate(q, 2.2952994647798084, 2);
  sqcRZGate(q, -1.65989931382876, 2);
  sqcRYGate(q, 2.8169355792047726, 3);
  sqcRZGate(q, 2.6911937739992973, 3);
  sqcRYGate(q, -3.1415874032706377, 4);
  sqcRZGate(q, -2.518420609526115, 4);
  sqcRYGate(q, -0.7877344434759797, 5);
  sqcRZGate(q, -2.159757871538966, 5);
  sqcRYGate(q, -0.18947630798583792, 6);
  sqcRZGate(q, 2.7181516918026225, 6);
  sqcRYGate(q, -2.57013889285366, 7);
  sqcRZGate(q, -3.0252144612646674, 7);
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
  sqcRYGate(q, 1.9013822745230455, 0);
  sqcRZGate(q, -2.8200031960445795, 0);
  sqcRYGate(q, -2.6470215867999425, 1);
  sqcRZGate(q, 0.9491287573235354, 1);
  sqcRYGate(q, 3.0796542227010884, 2);
  sqcRZGate(q, -2.9063965910351093, 2);
  sqcRYGate(q, 1.564211226238751, 3);
  sqcRZGate(q, 3.0734672210640777, 3);
  sqcRYGate(q, 3.1415880582004587, 4);
  sqcRZGate(q, 1.634093717000126, 4);
  sqcRYGate(q, -3.086403165881007, 5);
  sqcRZGate(q, 2.7621041344970148, 5);
  sqcRYGate(q, 0.5285868980166296, 6);
  sqcRZGate(q, -0.6149652649853962, 6);
  sqcRYGate(q, -1.4520635991055646, 7);
  sqcRZGate(q, 1.6455138898006814, 7);
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
  sqcRYGate(q, -0.0143311170300775, 0);
  sqcRZGate(q, -0.5182176910836241, 0);
  sqcRYGate(q, 0.04858492168154588, 1);
  sqcRZGate(q, 2.2691865673200926, 1);
  sqcRYGate(q, 0.06034404617736833, 2);
  sqcRZGate(q, -2.952590502351298, 2);
  sqcRYGate(q, -2.3746688999740595, 3);
  sqcRZGate(q, -0.3887975481213249, 3);
  sqcRYGate(q, -1.5707780040182986, 4);
  sqcRZGate(q, -1.5575118472530862, 4);
  sqcRYGate(q, 0.33264656144341276, 5);
  sqcRZGate(q, 1.8579176677995228, 5);
  sqcRYGate(q, -1.6533879955913688, 6);
  sqcRZGate(q, -0.04743283607268989, 6);
  sqcRYGate(q, -1.4187489060749936, 7);
  sqcRZGate(q, -2.0500655781123633, 7);
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
  sqcRYGate(q, -2.792417072126226, 0);
  sqcRZGate(q, 0.39120466768691653, 0);
  sqcRYGate(q, -1.0027158033135155, 1);
  sqcRZGate(q, 2.7421439862461834, 1);
  sqcRYGate(q, -3.1415865495386526, 2);
  sqcRZGate(q, 2.6704480937197945, 2);
  sqcRYGate(q, -1.5707855513109708, 3);
  sqcRZGate(q, -1.5708021581516425, 3);
  sqcRYGate(q, 3.132740654468692, 4);
  sqcRZGate(q, 0.013258750605324998, 4);
  sqcRYGate(q, -7.979552227185749e-06, 5);
  sqcRZGate(q, -2.609557170997527, 5);
  sqcRYGate(q, 1.5707957236066157, 6);
  sqcRZGate(q, -3.141580513431487, 6);
  sqcRYGate(q, -1.5707540309688328, 7);
  sqcRZGate(q, 3.0051475047748975e-05, 7);
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
  sqcRYGate(q, 3.5302773987803915e-07, 0);
  sqcRZGate(q, 2.965057219362398, 0);
  sqcRYGate(q, -3.1415916413161007, 1);
  sqcRZGate(q, -1.3304649792733165, 1);
  sqcRYGate(q, -6.275532997910022e-06, 2);
  sqcRZGate(q, -0.0766976062644984, 2);
  sqcRYGate(q, -1.5707910324785281, 3);
  sqcRZGate(q, 2.2501003412076277, 3);
  sqcRYGate(q, 1.5707949679258366, 4);
  sqcRZGate(q, -1.7261939944644276, 4);
  sqcRYGate(q, -3.141573557886286, 5);
  sqcRZGate(q, -0.9092429614509143, 5);
  sqcRYGate(q, -1.5708270926926131, 6);
  sqcRZGate(q, 2.8555425065701106, 6);
  sqcRYGate(q, 1.5707941036206012, 7);
  sqcRZGate(q, 0.8349200109745026, 7);

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
