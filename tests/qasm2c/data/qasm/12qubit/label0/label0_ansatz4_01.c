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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -0.25127346309633886, 0);
  sqcRZGate(q, 1.568857611394234, 0);
  sqcRYGate(q, -1.570625647127992, 1);
  sqcRZGate(q, -3.1381712802894657, 1);
  sqcRYGate(q, 2.877094195638443, 2);
  sqcRZGate(q, 1.5718807669630337, 2);
  sqcRYGate(q, -0.0029523825474073325, 3);
  sqcRZGate(q, -2.702276218186643, 3);
  sqcRYGate(q, -2.927583005326768, 4);
  sqcRZGate(q, 3.1414819947422497, 4);
  sqcRYGate(q, 1.6634082659727767e-05, 5);
  sqcRZGate(q, -0.03298217058603825, 5);
  sqcRYGate(q, 1.5709521315177195, 6);
  sqcRZGate(q, 3.141421434456375, 6);
  sqcRYGate(q, 1.5739317005802507, 7);
  sqcRZGate(q, 0.000685607122798082, 7);
  sqcRYGate(q, 3.1415920758025253, 8);
  sqcRZGate(q, -0.9565454980836258, 8);
  sqcRYGate(q, -2.9219452138627013, 9);
  sqcRZGate(q, -6.414973054180166e-06, 9);
  sqcRYGate(q, 0.0758500441274809, 10);
  sqcRZGate(q, -1.5514854181952358, 10);
  sqcRYGate(q, -3.039048686383701, 11);
  sqcRZGate(q, 3.1406359136355606, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.0602268260671056, 0);
  sqcRZGate(q, 1.555791513497839, 0);
  sqcRYGate(q, 1.5707620748828832, 1);
  sqcRZGate(q, -2.352064889605487, 1);
  sqcRYGate(q, 2.903120290171424, 2);
  sqcRZGate(q, 1.5501490611242885, 2);
  sqcRYGate(q, 1.5678891797721404, 3);
  sqcRZGate(q, -1.481510604284577, 3);
  sqcRYGate(q, 0.049805506895602036, 4);
  sqcRZGate(q, -1.5687934197623599, 4);
  sqcRYGate(q, -3.1415913476319823, 5);
  sqcRZGate(q, 2.957582635695459, 5);
  sqcRYGate(q, 2.07756818501465, 6);
  sqcRZGate(q, -3.119065750734416, 6);
  sqcRYGate(q, -0.826372593399842, 7);
  sqcRZGate(q, 0.06753097394559136, 7);
  sqcRYGate(q, 3.1415926015208733, 8);
  sqcRZGate(q, -2.7915525063221978, 8);
  sqcRYGate(q, 0.05404620615134259, 9);
  sqcRZGate(q, 1.570703135125763, 9);
  sqcRYGate(q, 1.5711906201787134, 10);
  sqcRZGate(q, -3.125915187146596, 10);
  sqcRYGate(q, -2.7926378938004506, 11);
  sqcRZGate(q, -1.580940854668447, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.00498777293232454, 0);
  sqcRZGate(q, -3.1264423424237977, 0);
  sqcRYGate(q, -3.1390500620087645, 1);
  sqcRZGate(q, 0.789742273022906, 1);
  sqcRYGate(q, -3.111440131450723, 2);
  sqcRZGate(q, 2.618141041453565, 2);
  sqcRYGate(q, -1.5699447428983275, 3);
  sqcRZGate(q, 0.0025760508751087297, 3);
  sqcRYGate(q, -0.260878669517979, 4);
  sqcRZGate(q, 1.2918124552202632, 4);
  sqcRYGate(q, -1.5707687391432923, 5);
  sqcRZGate(q, 0.8672732764860628, 5);
  sqcRYGate(q, 1.4843870351941817, 6);
  sqcRZGate(q, -1.8300341567430927, 6);
  sqcRYGate(q, -1.3170265045936744, 7);
  sqcRZGate(q, -1.8377817765926334, 7);
  sqcRYGate(q, 1.570793868911191, 8);
  sqcRZGate(q, 5.300408631587638e-06, 8);
  sqcRYGate(q, -0.2469732452597627, 9);
  sqcRZGate(q, -3.014482464522429, 9);
  sqcRYGate(q, -1.569680499440908, 10);
  sqcRZGate(q, 0.6415292798325885, 10);
  sqcRYGate(q, -0.041640158499448354, 11);
  sqcRZGate(q, 2.0192276556588475, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.056023587635815275, 0);
  sqcRZGate(q, 0.0011791290582006692, 0);
  sqcRYGate(q, 3.0290968987923965, 1);
  sqcRZGate(q, 0.0008755749086314476, 1);
  sqcRYGate(q, 4.519459842811102e-06, 2);
  sqcRZGate(q, 0.5022694499020393, 2);
  sqcRYGate(q, -1.570785462858393, 3);
  sqcRZGate(q, -1.871313907581174, 3);
  sqcRYGate(q, 6.978019492496036e-06, 4);
  sqcRZGate(q, 1.8476815940682216, 4);
  sqcRYGate(q, 3.140990244013813, 5);
  sqcRZGate(q, 0.8672862726858419, 5);
  sqcRYGate(q, -0.2196163703561922, 6);
  sqcRZGate(q, 1.5708310665300522, 6);
  sqcRYGate(q, 0.06961346265746116, 7);
  sqcRZGate(q, -1.5707870996395004, 7);
  sqcRYGate(q, -1.5707925715043767, 8);
  sqcRZGate(q, 7.421565825054734e-05, 8);
  sqcRYGate(q, -3.141590138455166, 9);
  sqcRZGate(q, -3.0148601225608243, 9);
  sqcRYGate(q, 3.1415900600060302, 10);
  sqcRZGate(q, 2.212060019115289, 10);
  sqcRYGate(q, 1.3032684593738961e-06, 11);
  sqcRZGate(q, -2.009074235555294, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5707959486928749, 0);
  sqcRZGate(q, 3.1415923350236614, 0);
  sqcRYGate(q, 1.5707944170167218, 1);
  sqcRZGate(q, 3.1415920554075507, 1);
  sqcRYGate(q, -1.5707913822907078, 2);
  sqcRZGate(q, 3.141493788136449, 2);
  sqcRYGate(q, 3.1415732152640823, 3);
  sqcRZGate(q, 2.840684037916652, 3);
  sqcRYGate(q, -1.5707927552594745, 4);
  sqcRZGate(q, 3.141519138714103, 4);
  sqcRYGate(q, -1.5707608320180069, 5);
  sqcRZGate(q, -1.570757642879225, 5);
  sqcRYGate(q, 1.5707966927817996, 6);
  sqcRZGate(q, -3.1415815054629634, 6);
  sqcRYGate(q, 1.570797094631076, 7);
  sqcRZGate(q, 1.5878924289653933e-07, 7);
  sqcRYGate(q, -1.5707968151980143, 8);
  sqcRZGate(q, 5.2270395109223245e-06, 8);
  sqcRYGate(q, 1.5707986032705157, 9);
  sqcRZGate(q, -3.141591769212712, 9);
  sqcRYGate(q, -1.570798149424154, 10);
  sqcRZGate(q, 3.141590591229203, 10);
  sqcRYGate(q, -1.570797390192098, 11);
  sqcRZGate(q, 7.285275994830982e-07, 11);

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
