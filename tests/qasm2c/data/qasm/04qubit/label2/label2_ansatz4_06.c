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

  sqcRYGate(q, -3.0921965071239006, 0);
  sqcRZGate(q, 1.5005097042162747, 0);
  sqcRYGate(q, 2.6789639074113976, 1);
  sqcRZGate(q, -3.087130229952799, 1);
  sqcRYGate(q, -2.3692085204669793, 2);
  sqcRZGate(q, 2.1875540100940967, 2);
  sqcRYGate(q, -2.8449206935114186, 3);
  sqcRZGate(q, 2.9229350936368137, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.8438263942741506, 0);
  sqcRZGate(q, 2.26696697451821, 0);
  sqcRYGate(q, 3.1037657558926965, 1);
  sqcRZGate(q, -0.13449352479274346, 1);
  sqcRYGate(q, -1.8115047363790346, 2);
  sqcRZGate(q, -1.7839443490716744, 2);
  sqcRYGate(q, 0.2537679223255225, 3);
  sqcRZGate(q, -0.8976884722687768, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7455734349464787, 0);
  sqcRZGate(q, -2.2388971541130536, 0);
  sqcRYGate(q, 2.235334265707186, 1);
  sqcRZGate(q, -0.8019967710245481, 1);
  sqcRYGate(q, 0.3718483308292342, 2);
  sqcRZGate(q, 0.7102496004020313, 2);
  sqcRYGate(q, 2.3914836264793826, 3);
  sqcRZGate(q, 2.598371867972296, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0577012009328683, 0);
  sqcRZGate(q, -1.624882737908619, 0);
  sqcRYGate(q, -0.6838915186718032, 1);
  sqcRZGate(q, -0.013596870923275751, 1);
  sqcRYGate(q, -0.7545502401551509, 2);
  sqcRZGate(q, -2.534921328231444, 2);
  sqcRYGate(q, -0.15315401630274067, 3);
  sqcRZGate(q, -2.6491641860811708, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3463121675060092, 0);
  sqcRZGate(q, 0.6907676627336655, 0);
  sqcRYGate(q, 0.6664202276655024, 1);
  sqcRZGate(q, 2.517026050642967, 1);
  sqcRYGate(q, 2.074172108022042, 2);
  sqcRZGate(q, 2.3360119828372734, 2);
  sqcRYGate(q, 2.461050249503532, 3);
  sqcRZGate(q, -0.6514538863026882, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6075025607209183, 0);
  sqcRZGate(q, 1.4875093705683973, 0);
  sqcRYGate(q, 2.3509496349555463, 1);
  sqcRZGate(q, 1.373039806058971, 1);
  sqcRYGate(q, 1.010725705825772, 2);
  sqcRZGate(q, 1.317000282137303, 2);
  sqcRYGate(q, 2.444116463214388, 3);
  sqcRZGate(q, 0.27615989390275164, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.755152090063009, 0);
  sqcRZGate(q, -2.1541392667999, 0);
  sqcRYGate(q, 3.0389190666866868, 1);
  sqcRZGate(q, 1.4176144845890035, 1);
  sqcRYGate(q, -3.122454178235516, 2);
  sqcRZGate(q, -2.14209894193667, 2);
  sqcRYGate(q, 3.0842542268104, 3);
  sqcRZGate(q, 2.4424134676935565, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2208919312322664, 0);
  sqcRZGate(q, 2.08791487798784, 0);
  sqcRYGate(q, -0.25320727000536725, 1);
  sqcRZGate(q, -1.16685901812135, 1);
  sqcRYGate(q, -1.2395588296726563, 2);
  sqcRZGate(q, -0.09934422325612814, 2);
  sqcRYGate(q, 0.8812861670672902, 3);
  sqcRZGate(q, -2.4217144923493583, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0277526972486033, 0);
  sqcRZGate(q, 1.394149411571471, 0);
  sqcRYGate(q, -1.495101026067319, 1);
  sqcRZGate(q, -1.7735786612101414, 1);
  sqcRYGate(q, -1.7523961950422982, 2);
  sqcRZGate(q, 2.9602750103785667, 2);
  sqcRYGate(q, -1.261604277856188, 3);
  sqcRZGate(q, 0.9624265602171764, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7751536928085234, 0);
  sqcRZGate(q, -2.6895980855265096, 0);
  sqcRYGate(q, 0.10111561621840354, 1);
  sqcRZGate(q, -1.9348466247663554, 1);
  sqcRYGate(q, 1.5286104268692169, 2);
  sqcRZGate(q, 2.7958622913788584, 2);
  sqcRYGate(q, 2.756203005384934, 3);
  sqcRZGate(q, -2.9154987469794755, 3);

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
