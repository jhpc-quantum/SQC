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

  sqcRYGate(q, -0.42872173418831644, 0);
  sqcRZGate(q, 0.40984639327513067, 0);
  sqcRYGate(q, 1.209300614951327, 1);
  sqcRZGate(q, 1.8243023348811622, 1);
  sqcRYGate(q, -1.9760257330712667, 2);
  sqcRZGate(q, -2.4713982495354485, 2);
  sqcRYGate(q, 1.4702865340211395, 3);
  sqcRZGate(q, 1.368779569062232, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.355652024303873, 0);
  sqcRZGate(q, -0.11482294027369644, 0);
  sqcRYGate(q, -2.5211083139110815, 1);
  sqcRZGate(q, 1.2313128022893594, 1);
  sqcRYGate(q, 1.2918417142933505, 2);
  sqcRZGate(q, -1.7123842286823603, 2);
  sqcRYGate(q, 1.3684627985786049, 3);
  sqcRZGate(q, -2.5498870088845615, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.8271758945138326, 0);
  sqcRZGate(q, -0.2531978469743406, 0);
  sqcRYGate(q, -0.6561796336459764, 1);
  sqcRZGate(q, -2.359995281488801, 1);
  sqcRYGate(q, 2.0690620940222635, 2);
  sqcRZGate(q, -0.07792976979883104, 2);
  sqcRYGate(q, -1.7947617653337533, 3);
  sqcRZGate(q, 1.0735322425028375, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.784194452866033, 0);
  sqcRZGate(q, -1.7661757396056164, 0);
  sqcRYGate(q, 1.6311323422707646, 1);
  sqcRZGate(q, -0.4431588303011553, 1);
  sqcRYGate(q, 1.5661297724346852, 2);
  sqcRZGate(q, 0.0033454582446212394, 2);
  sqcRYGate(q, -1.5167155925878386, 3);
  sqcRZGate(q, 1.8271906591198948, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.17450246364899424, 0);
  sqcRZGate(q, -2.887626114189941, 0);
  sqcRYGate(q, 3.134778012892147, 1);
  sqcRZGate(q, -1.620985670875001, 1);
  sqcRYGate(q, -1.016292422805861, 2);
  sqcRZGate(q, 0.9815511993980316, 2);
  sqcRYGate(q, 0.34113622926567555, 3);
  sqcRZGate(q, 2.8226706528392542, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.8060813578503776, 0);
  sqcRZGate(q, 1.866090380695467, 0);
  sqcRYGate(q, 2.668379511114457, 1);
  sqcRZGate(q, 2.354462729741598, 1);
  sqcRYGate(q, -3.111372172646831, 2);
  sqcRZGate(q, -1.9705106529913916, 2);
  sqcRYGate(q, -1.7313744344399407, 3);
  sqcRZGate(q, -1.4422182235881043, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.8417650573758992, 0);
  sqcRZGate(q, 1.3623581924549777, 0);
  sqcRYGate(q, 2.777972608109604, 1);
  sqcRZGate(q, 0.11267658215822085, 1);
  sqcRYGate(q, -0.571977911088938, 2);
  sqcRZGate(q, 1.11732708263611, 2);
  sqcRYGate(q, -1.714396660168921, 3);
  sqcRZGate(q, 0.7387131281099695, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.3841177442936026, 0);
  sqcRZGate(q, -0.7012661960234086, 0);
  sqcRYGate(q, -1.762246090272337, 1);
  sqcRZGate(q, -1.1098555786017321, 1);
  sqcRYGate(q, 2.3346319057208627, 2);
  sqcRZGate(q, -2.434900313162089, 2);
  sqcRYGate(q, -0.07775514222126566, 3);
  sqcRZGate(q, -2.8680841503579835, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.5816946473180806, 0);
  sqcRZGate(q, -1.9963815633886612, 0);
  sqcRYGate(q, 2.133656524250014, 1);
  sqcRZGate(q, -0.8151554153544343, 1);
  sqcRYGate(q, 0.7002633958489435, 2);
  sqcRZGate(q, -1.8727878583031983, 2);
  sqcRYGate(q, -2.733370654154209, 3);
  sqcRZGate(q, -0.18932089865544555, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.7093560173865217, 0);
  sqcRZGate(q, 2.0148079183271483, 0);
  sqcRYGate(q, -2.4697511784502724, 1);
  sqcRZGate(q, -1.6117056760384276, 1);
  sqcRYGate(q, -0.8258245091576661, 2);
  sqcRZGate(q, -2.528854378443425, 2);
  sqcRYGate(q, 1.9919689844426962, 3);
  sqcRZGate(q, 2.500959465503631, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.3194705943743807, 0);
  sqcRZGate(q, -0.6832888335547688, 0);
  sqcRYGate(q, -0.9991764938910425, 1);
  sqcRZGate(q, -1.0126058039335093, 1);
  sqcRYGate(q, 2.94435645744739, 2);
  sqcRZGate(q, 1.5592120564724565, 2);
  sqcRYGate(q, 0.6006358252239608, 3);
  sqcRZGate(q, 2.0219929081496932, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.4352696121791464, 0);
  sqcRZGate(q, -1.1238932976552602, 0);
  sqcRYGate(q, -2.148688523342897, 1);
  sqcRZGate(q, 1.1155022097036813, 1);
  sqcRYGate(q, -1.977895334953788, 2);
  sqcRZGate(q, -1.1090237842475317, 2);
  sqcRYGate(q, -1.875802063804609, 3);
  sqcRZGate(q, 0.10198455980407424, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.22744665505493, 0);
  sqcRZGate(q, -0.5666499120374995, 0);
  sqcRYGate(q, -3.0426781432341286, 1);
  sqcRZGate(q, -2.130241183741071, 1);
  sqcRYGate(q, 2.5730176320754254, 2);
  sqcRZGate(q, 1.770488906182793, 2);
  sqcRYGate(q, -1.5648874674157796, 3);
  sqcRZGate(q, -1.2326722764131688, 3);

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
