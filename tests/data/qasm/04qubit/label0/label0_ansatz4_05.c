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

  sqcRYGate(q, -2.9695866778747253, 0);
  sqcRZGate(q, 1.1689786762011232, 0);
  sqcRYGate(q, -1.1461791696570494, 1);
  sqcRZGate(q, 2.7989411598966085, 1);
  sqcRYGate(q, -2.3291577792145297, 2);
  sqcRZGate(q, -2.4483854718625224, 2);
  sqcRYGate(q, 0.7625399347350337, 3);
  sqcRZGate(q, -1.2041085410363754, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.3832476099076319, 0);
  sqcRZGate(q, 0.00861726843049304, 0);
  sqcRYGate(q, 0.5602105208471926, 1);
  sqcRZGate(q, 0.7718856356081076, 1);
  sqcRYGate(q, 1.3063815992296162, 2);
  sqcRZGate(q, 2.1561970007057827, 2);
  sqcRYGate(q, 0.7645836937153463, 3);
  sqcRZGate(q, 0.08802209495018243, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.9157521562006803, 0);
  sqcRZGate(q, -2.1665110698976973, 0);
  sqcRYGate(q, 2.385230533623841, 1);
  sqcRZGate(q, 1.5691023326095062, 1);
  sqcRYGate(q, -1.9083141149081442, 2);
  sqcRZGate(q, 0.03298852685657283, 2);
  sqcRYGate(q, 2.1465534203469225, 3);
  sqcRZGate(q, 2.208994691918289, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.46601943259471224, 0);
  sqcRZGate(q, 0.8706007232456637, 0);
  sqcRYGate(q, 1.5415551578518945, 1);
  sqcRZGate(q, -2.486306851050072, 1);
  sqcRYGate(q, -0.3493813989742467, 2);
  sqcRZGate(q, -1.4650211770784851, 2);
  sqcRYGate(q, -2.146342575106149, 3);
  sqcRZGate(q, -1.6267718121494887, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5308192406138144, 0);
  sqcRZGate(q, -2.963775355114724, 0);
  sqcRYGate(q, -2.029758115535178, 1);
  sqcRZGate(q, -2.2107911401564495, 1);
  sqcRYGate(q, -1.2202780140836305, 2);
  sqcRZGate(q, 2.4323957120403903, 2);
  sqcRYGate(q, -1.9730192423845652, 3);
  sqcRZGate(q, 0.6017781424521065, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.414598547683382, 0);
  sqcRZGate(q, -0.6822892605942031, 0);
  sqcRYGate(q, -1.1042651292403587, 1);
  sqcRZGate(q, 0.2829525840965239, 1);
  sqcRYGate(q, -0.9880880816975255, 2);
  sqcRZGate(q, 0.6083770309467645, 2);
  sqcRYGate(q, -2.7198854154781884, 3);
  sqcRZGate(q, -3.1116885292560266, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1930882284370101, 0);
  sqcRZGate(q, -0.6980339718561919, 0);
  sqcRYGate(q, 1.1476919086010087, 1);
  sqcRZGate(q, 0.4922402460858261, 1);
  sqcRYGate(q, -0.90982711390917, 2);
  sqcRZGate(q, -0.9687700225847494, 2);
  sqcRYGate(q, -2.5303346252342567, 3);
  sqcRZGate(q, -3.0243425229969096, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0498658511383825, 0);
  sqcRZGate(q, 2.350582266053256, 0);
  sqcRYGate(q, 1.0383006206144278, 1);
  sqcRZGate(q, 2.3134293823513463, 1);
  sqcRYGate(q, 1.0993011576702643, 2);
  sqcRZGate(q, -1.28415818389448, 2);
  sqcRYGate(q, 0.36975511527065485, 3);
  sqcRZGate(q, 1.9288136595160454, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.3901332874663624, 0);
  sqcRZGate(q, -1.7487074585624791, 0);
  sqcRYGate(q, 1.1693500825168823, 1);
  sqcRZGate(q, 3.1144501153129776, 1);
  sqcRYGate(q, 1.7539616642577802, 2);
  sqcRZGate(q, 2.04610069198087, 2);
  sqcRYGate(q, 2.064579416533224, 3);
  sqcRZGate(q, 2.544288348675801, 3);

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
