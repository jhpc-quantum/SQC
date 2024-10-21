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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 2.4943768627962926, 0);
  sqcRYGate(q, 2.8011187152871413, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4772868121024656, 0);
  sqcRYGate(q, 1.60457908254158, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.935580013910625, 1);
  sqcRYGate(q, 0.44194664603265443, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.30997558857095164, 1);
  sqcRYGate(q, 1.3224789276044553, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7963022875458767, 2);
  sqcRYGate(q, -0.2978234551676344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.627023063002109, 2);
  sqcRYGate(q, 0.5277339808270449, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.623250221335008, 0);
  sqcRYGate(q, 0.5840588740145014, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.871175410885968, 0);
  sqcRYGate(q, -2.7482667777924683, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0590090608041285, 1);
  sqcRYGate(q, 1.5922659613153092, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6074572070870072, 1);
  sqcRYGate(q, 2.554336820047709, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2635428895208722, 2);
  sqcRYGate(q, 2.701833178217728, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6657164138405114, 2);
  sqcRYGate(q, -1.6924120094016324, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9656623521119996, 0);
  sqcRYGate(q, -0.8120402472279487, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4454764886295353, 0);
  sqcRYGate(q, 2.941000199874978, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.030669526380139093, 1);
  sqcRYGate(q, -0.3376880432522536, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.33212379497572275, 1);
  sqcRYGate(q, 0.17880190213007374, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.945743179199462, 2);
  sqcRYGate(q, 0.39928685179528917, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9675186346567024, 2);
  sqcRYGate(q, -1.4648904503470808, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.706483493197534, 0);
  sqcRYGate(q, 0.3957918146875077, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.44875516086983325, 0);
  sqcRYGate(q, 0.9863630648900301, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8779463655465528, 1);
  sqcRYGate(q, 2.091131646349787, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.741783613118237, 1);
  sqcRYGate(q, -2.15744956399709, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6984026475001768, 2);
  sqcRYGate(q, -2.416494216300757, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7303297236275865, 2);
  sqcRYGate(q, 1.0842397934264694, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5472297611478165, 0);
  sqcRYGate(q, -0.5137066343915961, 1);
  sqcRYGate(q, -2.1250845689680933, 2);
  sqcRYGate(q, 0.26888139429062985, 3);

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
