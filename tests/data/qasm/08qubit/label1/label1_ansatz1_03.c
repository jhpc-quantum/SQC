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

  sqcRYGate(q, 0.14323575908670794, 0);
  sqcRZGate(q, -0.6209837596303016, 0);
  sqcRYGate(q, 1.4900211771665788, 1);
  sqcRZGate(q, -2.4801234490133033, 1);
  sqcRYGate(q, 0.3434434909561075, 2);
  sqcRZGate(q, -2.6742809037861823, 2);
  sqcRYGate(q, 1.559185491581499, 3);
  sqcRZGate(q, -0.1524438469878895, 3);
  sqcRYGate(q, 1.543039125838913, 4);
  sqcRZGate(q, -1.0359165954874519, 4);
  sqcRYGate(q, -2.5695295919030916, 5);
  sqcRZGate(q, -0.8813510564738097, 5);
  sqcRYGate(q, 1.562649301451427, 6);
  sqcRZGate(q, -1.7213013286550076, 6);
  sqcRYGate(q, 0.7678319483856422, 7);
  sqcRZGate(q, -1.5403928639746236, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.0770688841292424, 0);
  sqcRZGate(q, 1.2009158828625563, 0);
  sqcRYGate(q, -2.3289877065687117, 1);
  sqcRZGate(q, -0.8452199611511624, 1);
  sqcRYGate(q, 1.7063374106833136, 2);
  sqcRZGate(q, 2.974182363772964, 2);
  sqcRYGate(q, 2.747159694898653, 3);
  sqcRZGate(q, -3.0458204548533, 3);
  sqcRYGate(q, -2.8121252384490476, 4);
  sqcRZGate(q, -0.6365607225108486, 4);
  sqcRYGate(q, -1.5714818948195264, 5);
  sqcRZGate(q, 1.8423812748123718, 5);
  sqcRYGate(q, -1.0407273711818292, 6);
  sqcRZGate(q, 1.5605069690246864, 6);
  sqcRYGate(q, 2.896554804183902, 7);
  sqcRZGate(q, -0.1676261466500737, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.21884944707544002, 0);
  sqcRZGate(q, 1.2204314100853857, 0);
  sqcRYGate(q, 2.4730936242039756, 1);
  sqcRZGate(q, -1.7605303770630505, 1);
  sqcRYGate(q, 3.006537372169454, 2);
  sqcRZGate(q, -0.802855652129268, 2);
  sqcRYGate(q, 2.731514550201472, 3);
  sqcRZGate(q, 0.009787243540299754, 3);
  sqcRYGate(q, 1.4732397673668245, 4);
  sqcRZGate(q, -1.4083276828021976, 4);
  sqcRYGate(q, -1.5999230338931267, 5);
  sqcRZGate(q, -2.8445952120578126, 5);
  sqcRYGate(q, -1.5771882752413058, 6);
  sqcRZGate(q, -3.102077937523687, 6);
  sqcRYGate(q, 1.912485150625601, 7);
  sqcRZGate(q, 1.0692322462402823, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.7420894773765364, 0);
  sqcRZGate(q, 2.640105752969698, 0);
  sqcRYGate(q, -0.579830877822439, 1);
  sqcRZGate(q, -1.0820333257808104, 1);
  sqcRYGate(q, -1.4314524044897023, 2);
  sqcRZGate(q, -3.1306148946628416, 2);
  sqcRYGate(q, 1.6251170693546477, 3);
  sqcRZGate(q, 1.5987350365735458, 3);
  sqcRYGate(q, -3.074829480433103, 4);
  sqcRZGate(q, -2.999368591969639, 4);
  sqcRYGate(q, 1.4878422998710548, 5);
  sqcRZGate(q, 0.7153224076351902, 5);
  sqcRYGate(q, -2.8973034865896516, 6);
  sqcRZGate(q, 0.6210393093998011, 6);
  sqcRYGate(q, 1.364517541714334, 7);
  sqcRZGate(q, 1.5805786207104031, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.657868196784223, 0);
  sqcRZGate(q, 1.3433965204232914, 0);
  sqcRYGate(q, 1.763642364081539, 1);
  sqcRZGate(q, 0.11937929955972047, 1);
  sqcRYGate(q, 1.574844226677249, 2);
  sqcRZGate(q, 1.5679343532820775, 2);
  sqcRYGate(q, 1.5790508128236462, 3);
  sqcRZGate(q, -0.7614834070402673, 3);
  sqcRYGate(q, 2.9446813507471306, 4);
  sqcRZGate(q, -2.8807829580295876, 4);
  sqcRYGate(q, -1.5732369252520675, 5);
  sqcRZGate(q, 2.0164213741379386, 5);
  sqcRYGate(q, 1.5454474953728194, 6);
  sqcRZGate(q, 0.006456986213989906, 6);
  sqcRYGate(q, -0.869368517759515, 7);
  sqcRZGate(q, 3.1358817199574833, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.6385524171850925, 0);
  sqcRZGate(q, -1.8264396545450656, 0);
  sqcRYGate(q, -1.5705542777666883, 1);
  sqcRZGate(q, -1.5713786312372424, 1);
  sqcRYGate(q, -0.06382480120489152, 2);
  sqcRZGate(q, -3.1367971208613423, 2);
  sqcRYGate(q, 0.0026116366638524163, 3);
  sqcRZGate(q, -1.2491423458301694, 3);
  sqcRYGate(q, 3.139789858733675, 4);
  sqcRZGate(q, -0.2389825759279196, 4);
  sqcRYGate(q, -1.5711151331725663, 5);
  sqcRZGate(q, -3.13177782338399, 5);
  sqcRYGate(q, -2.7236119988301497, 6);
  sqcRZGate(q, -0.007314375712172527, 6);
  sqcRYGate(q, -0.925133665481835, 7);
  sqcRZGate(q, -0.02194913902861281, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1414663759931454, 0);
  sqcRZGate(q, -0.9595295283227637, 0);
  sqcRYGate(q, -1.5721476319094023, 1);
  sqcRZGate(q, -2.622508778641094, 1);
  sqcRYGate(q, -1.5673813899977584, 2);
  sqcRZGate(q, 0.7863542508606889, 2);
  sqcRYGate(q, 3.1182986200421277, 3);
  sqcRZGate(q, 0.42008464834229814, 3);
  sqcRYGate(q, 1.5719971504532946, 4);
  sqcRZGate(q, 2.381757835600187, 4);
  sqcRYGate(q, -1.8977111010029668, 5);
  sqcRZGate(q, -2.309184514418038, 5);
  sqcRYGate(q, 1.626601834817218, 6);
  sqcRZGate(q, -2.341639853825688, 6);
  sqcRYGate(q, -0.7048128497826487, 7);
  sqcRZGate(q, 0.8135652824087121, 7);

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
