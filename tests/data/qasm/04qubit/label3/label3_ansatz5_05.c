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

  sqcRYGate(q, -0.8391073899333543, 0);
  sqcRYGate(q, -3.0710019139931557, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6868221916496862, 0);
  sqcRYGate(q, 0.22102889332154155, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.13106667403698, 2);
  sqcRYGate(q, -1.824837285185451, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3753957669868306, 2);
  sqcRYGate(q, 0.7246760857149429, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7402165408594024, 1);
  sqcRYGate(q, 0.28875391277865686, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1644645375833482, 1);
  sqcRYGate(q, -1.1700298432803242, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.516841900996775, 0);
  sqcRYGate(q, 1.0042370488066363, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5398822480697447, 0);
  sqcRYGate(q, 0.3089518771991058, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.35771698654642853, 2);
  sqcRYGate(q, 2.59335687771912, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10868132523346584, 2);
  sqcRYGate(q, 1.603494476162761, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3179747757794544, 1);
  sqcRYGate(q, -0.8470116071366497, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9026466386168829, 1);
  sqcRYGate(q, 2.7611501522509743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0532113190795833, 0);
  sqcRYGate(q, 0.5929546736299263, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5168956291985883, 0);
  sqcRYGate(q, 2.0548019260880785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.798074524686937, 2);
  sqcRYGate(q, -0.3041177170775047, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.130718201243358, 2);
  sqcRYGate(q, 2.8201346663745324, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4856136550820906, 1);
  sqcRYGate(q, -0.9669264184441442, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6547523404065938, 1);
  sqcRYGate(q, 2.3868904150725814, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5962802822143649, 0);
  sqcRYGate(q, -1.7844897887515068, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9426016850794712, 0);
  sqcRYGate(q, -2.269993402649951, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.14298146114954, 2);
  sqcRYGate(q, 1.0600371201418752, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.621044899778504, 2);
  sqcRYGate(q, 2.0556945881302195, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.43232628400887335, 1);
  sqcRYGate(q, -1.109519105767486, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.73438003429159, 1);
  sqcRYGate(q, -0.7355931587837023, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.52463885438756, 0);
  sqcRYGate(q, -1.1939418067958476, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.344759574341965, 0);
  sqcRYGate(q, -0.4924016288623357, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5393635650136233, 2);
  sqcRYGate(q, 2.363379491216747, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5442444896724892, 2);
  sqcRYGate(q, -0.9067901704685147, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.005280072539381564, 1);
  sqcRYGate(q, -1.0261668856113078, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4464872638737907, 1);
  sqcRYGate(q, -1.1250873687434657, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.902535396390296, 0);
  sqcRYGate(q, 1.6839534624257366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0021343474632178, 0);
  sqcRYGate(q, -1.6366510400851875, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1449598734108504, 2);
  sqcRYGate(q, 2.420100228907649, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5724642923311247, 2);
  sqcRYGate(q, 0.5421708918325941, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1459655517375946, 1);
  sqcRYGate(q, -2.121725345659338, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.06924609707765227, 1);
  sqcRYGate(q, -0.5617524398105971, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3585499261547627, 0);
  sqcRYGate(q, -0.6800467458685953, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7799640154163858, 0);
  sqcRYGate(q, -1.066319474850133, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1525624453448559, 2);
  sqcRYGate(q, 3.056281511353326, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.115971331712446, 2);
  sqcRYGate(q, -1.0223744085207045, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.436331958098124, 1);
  sqcRYGate(q, 2.29534638264652, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3279549814946834, 1);
  sqcRYGate(q, -0.3846099032427868, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9827304462551958, 0);
  sqcRYGate(q, -2.2691049421341694, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.748686364656053, 0);
  sqcRYGate(q, 2.2468778284495414, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.888319414573412, 2);
  sqcRYGate(q, 2.302064579880092, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.578951537501627, 2);
  sqcRYGate(q, -0.8501771504320006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3248405409953117, 1);
  sqcRYGate(q, -0.42396019038290145, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5840388359685669, 1);
  sqcRYGate(q, 0.018036173553510615, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.16001836675904693, 0);
  sqcRYGate(q, -1.7278511016541458, 1);
  sqcRYGate(q, -0.4059114009555562, 2);
  sqcRYGate(q, 2.8139747474087335, 3);

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
