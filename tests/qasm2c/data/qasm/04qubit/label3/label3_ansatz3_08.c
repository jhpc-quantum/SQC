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

  sqcRYGate(q, 1.683740907360721, 0);
  sqcRZGate(q, 2.8976117722765222, 0);
  sqcRYGate(q, 1.5761835587056021, 1);
  sqcRZGate(q, -2.434139851365055, 1);
  sqcRYGate(q, 2.8188621114875176, 2);
  sqcRZGate(q, -1.1531606390815847, 2);
  sqcRYGate(q, -0.4040595686346035, 3);
  sqcRZGate(q, 2.783634862095165, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.383299242270086, 0);
  sqcRZGate(q, 2.0988915676160076, 0);
  sqcRYGate(q, -2.5190210025046373, 1);
  sqcRZGate(q, 1.883171753452656, 1);
  sqcRYGate(q, -2.765337670927969, 2);
  sqcRZGate(q, 2.556238535352282, 2);
  sqcRYGate(q, 0.7282536945760976, 3);
  sqcRZGate(q, -1.8445369408955197, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.6438970108674151, 0);
  sqcRZGate(q, 1.3458267693763855, 0);
  sqcRYGate(q, -2.558656145938553, 1);
  sqcRZGate(q, 2.9595815770411367, 1);
  sqcRYGate(q, 0.21692316437495374, 2);
  sqcRZGate(q, 1.224559077137078, 2);
  sqcRYGate(q, -3.032564427376487, 3);
  sqcRZGate(q, 0.5198719270209492, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.687535172043762, 0);
  sqcRZGate(q, -1.4462337456867465, 0);
  sqcRYGate(q, -0.35660482776234886, 1);
  sqcRZGate(q, 0.47555088478724095, 1);
  sqcRYGate(q, -2.3553342836622386, 2);
  sqcRZGate(q, -0.03535324241284838, 2);
  sqcRYGate(q, 1.0069785119714856, 3);
  sqcRZGate(q, 1.3956469019004707, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.13670192767727693, 0);
  sqcRZGate(q, -2.422519988560154, 0);
  sqcRYGate(q, 0.25894167070731894, 1);
  sqcRZGate(q, 2.368355868429083, 1);
  sqcRYGate(q, 1.3827506816826398, 2);
  sqcRZGate(q, 0.21812657958619042, 2);
  sqcRYGate(q, 2.34793289768972, 3);
  sqcRZGate(q, -2.9535520298610707, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.399551333964338, 0);
  sqcRZGate(q, 3.037933050262985, 0);
  sqcRYGate(q, 1.4553804183582986, 1);
  sqcRZGate(q, 1.9626148616759882, 1);
  sqcRYGate(q, 2.3268983792721714, 2);
  sqcRZGate(q, 2.9872377182916865, 2);
  sqcRYGate(q, 1.1942265623916526, 3);
  sqcRZGate(q, -2.0607247444653196, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.1993648109195416, 0);
  sqcRZGate(q, -2.5292831634182606, 0);
  sqcRYGate(q, 0.5589163589014557, 1);
  sqcRZGate(q, 1.3912640780732168, 1);
  sqcRYGate(q, -0.8213063616929519, 2);
  sqcRZGate(q, 1.7441781166202956, 2);
  sqcRYGate(q, -2.0949059905618435, 3);
  sqcRZGate(q, -2.4000969428210905, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.9677091675622576, 0);
  sqcRZGate(q, -0.2120548848352724, 0);
  sqcRYGate(q, -0.5547594465963499, 1);
  sqcRZGate(q, 2.3757502373569763, 1);
  sqcRYGate(q, 1.255762999419014, 2);
  sqcRZGate(q, 0.8389647648164883, 2);
  sqcRYGate(q, 2.6511561397483936, 3);
  sqcRZGate(q, 0.3888511918016748, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.79542408252774, 0);
  sqcRZGate(q, 1.0652374880122286, 0);
  sqcRYGate(q, -0.7777518691293646, 1);
  sqcRZGate(q, 1.5134376214323535, 1);
  sqcRYGate(q, -2.33436278014607, 2);
  sqcRZGate(q, -2.454067263096225, 2);
  sqcRYGate(q, 2.415871601786558, 3);
  sqcRZGate(q, -1.70941340917104, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.44341024388124, 0);
  sqcRZGate(q, -2.2426661264834866, 0);
  sqcRYGate(q, 1.1781711585646253, 1);
  sqcRZGate(q, -2.311861987663396, 1);
  sqcRYGate(q, -2.0018500632453486, 2);
  sqcRZGate(q, 1.4400180000027634, 2);
  sqcRYGate(q, -3.036393654864299, 3);
  sqcRZGate(q, -1.5220328526191913, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.2399485038919085, 0);
  sqcRZGate(q, 3.104696551297871, 0);
  sqcRYGate(q, -0.7820116869086428, 1);
  sqcRZGate(q, -0.1206936127813476, 1);
  sqcRYGate(q, -2.247658736045034, 2);
  sqcRZGate(q, 1.2132239550035273, 2);
  sqcRYGate(q, 2.788767588149869, 3);
  sqcRZGate(q, -0.9457433524612391, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.8824969220193477, 0);
  sqcRZGate(q, -2.589529873767627, 0);
  sqcRYGate(q, -1.4415304040483852, 1);
  sqcRZGate(q, -1.9172480124980629, 1);
  sqcRYGate(q, -2.1754988308695156, 2);
  sqcRZGate(q, -1.485703454503969, 2);
  sqcRYGate(q, 2.892592746102139, 3);
  sqcRZGate(q, -0.2785998786066021, 3);

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
