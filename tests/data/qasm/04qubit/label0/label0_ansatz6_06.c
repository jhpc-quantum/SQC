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

  sqcRYGate(q, 1.5954265203875453, 0);
  sqcRYGate(q, -0.7338197515878058, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.119998750696574, 0);
  sqcRYGate(q, 1.9485137006387392, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5801388441831055, 1);
  sqcRYGate(q, 1.6343274462168829, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5211834874499663, 1);
  sqcRYGate(q, -0.617765638707693, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.498900267420102, 2);
  sqcRYGate(q, -2.2782820252692346, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5469597247779787, 2);
  sqcRYGate(q, -1.886820403029162, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7509432670024707, 0);
  sqcRYGate(q, -1.4633676301792924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4529799245034933, 0);
  sqcRYGate(q, 1.9423262446761325, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.58717802290099, 1);
  sqcRYGate(q, -1.0062485726328363, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7525646737699088, 1);
  sqcRYGate(q, 1.9543449910500783, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7059563730535783, 2);
  sqcRYGate(q, 2.382112081790086, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3831319322466324, 2);
  sqcRYGate(q, -2.4257390279545543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4592964828274337, 0);
  sqcRYGate(q, -1.8650216566940638, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2331596117093353, 0);
  sqcRYGate(q, 0.12957849899972093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.765310425570174, 1);
  sqcRYGate(q, 3.002091770811198, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9106404336142244, 1);
  sqcRYGate(q, 1.2107132588104719, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0677574050732312, 2);
  sqcRYGate(q, 1.0228321656625265, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.010098333358062, 2);
  sqcRYGate(q, 0.8909591493404465, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5253517189810544, 0);
  sqcRYGate(q, -1.318053097552055, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.099760914356007, 0);
  sqcRYGate(q, 1.8956935276254363, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3281556816389015, 1);
  sqcRYGate(q, 2.853323212229445, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1249997994929497, 1);
  sqcRYGate(q, 2.6092120340239773, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7143868905111298, 2);
  sqcRYGate(q, -2.7667516320018457, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.758482100526973, 2);
  sqcRYGate(q, 2.7685843163484045, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.740834004321508, 0);
  sqcRYGate(q, 0.14189052726065832, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3805072860776555, 0);
  sqcRYGate(q, 2.0598164188038526, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8936837391030643, 1);
  sqcRYGate(q, 2.63750784216266, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3430198866579528, 1);
  sqcRYGate(q, -0.3529098750359428, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.07948498074327001, 2);
  sqcRYGate(q, -2.6434024065820707, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0594676106194187, 2);
  sqcRYGate(q, 0.4178191422135444, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5236031755276943, 0);
  sqcRYGate(q, -1.9180340086145353, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.079204694086212, 0);
  sqcRYGate(q, 1.8529556289410067, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.228308215243425, 1);
  sqcRYGate(q, -1.9026116033282676, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0928375285615513, 1);
  sqcRYGate(q, 0.5470227424988305, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.49845961194191446, 2);
  sqcRYGate(q, -1.425690585448497, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2667642651520037, 2);
  sqcRYGate(q, -2.4003801918332424, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5860270104065043, 0);
  sqcRYGate(q, 1.059355779316601, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9803195174038134, 0);
  sqcRYGate(q, 2.3840678787067806, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5958914571696097, 1);
  sqcRYGate(q, -0.6834123098185626, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2066471393155407, 1);
  sqcRYGate(q, -2.2601016123980724, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7554328269393025, 2);
  sqcRYGate(q, -0.36057415918782687, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7494196846818557, 2);
  sqcRYGate(q, 3.0225107442187324, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1002153902357366, 0);
  sqcRYGate(q, -2.545275996924191, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9050784938699532, 0);
  sqcRYGate(q, -0.34836656686833456, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.189208717359333, 1);
  sqcRYGate(q, -2.4312459767396026, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7351599090786785, 1);
  sqcRYGate(q, -0.31940107530595174, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6570184995552593, 2);
  sqcRYGate(q, 2.305391983925882, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0731400940306526, 2);
  sqcRYGate(q, -1.113115722729332, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6710852954090323, 0);
  sqcRYGate(q, -2.548641710138602, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2567746521437775, 0);
  sqcRYGate(q, -2.1027412060850548, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.635054940754214, 1);
  sqcRYGate(q, -1.9633922894100166, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7965162565194643, 1);
  sqcRYGate(q, 1.1049088693332854, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8442494533389944, 2);
  sqcRYGate(q, -0.04326349318418021, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9590441739834967, 2);
  sqcRYGate(q, -2.978036016100504, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1061125337022264, 0);
  sqcRYGate(q, 2.2146146333593126, 1);
  sqcRYGate(q, -0.19676028358706876, 2);
  sqcRYGate(q, -0.0009306409778044289, 3);

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
