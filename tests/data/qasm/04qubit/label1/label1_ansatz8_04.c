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

  sqcRYGate(q, 0.5854234779643583, 0);
  sqcRYGate(q, 2.9171150881853043, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3545571302140464, 0);
  sqcRYGate(q, -1.2398754430480017, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4127463895315686, 2);
  sqcRYGate(q, 0.0249108960428387, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9865599497526008, 2);
  sqcRYGate(q, -2.9194830312142055, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6316329140353143, 0);
  sqcRYGate(q, 0.034162372852137864, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.453627086929108, 0);
  sqcRYGate(q, -0.3133622242788139, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.686245792253441, 1);
  sqcRYGate(q, 2.529765427142258, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6204510768369467, 1);
  sqcRYGate(q, 1.5794309028725722, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.412734841689783, 0);
  sqcRYGate(q, 2.5357798177406927, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.441435871311691, 0);
  sqcRYGate(q, 2.8744203220325204, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7231777190029094, 2);
  sqcRYGate(q, 1.713824757948407, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6785035856579196, 2);
  sqcRYGate(q, -0.744724601457101, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3451349931110284, 0);
  sqcRYGate(q, -1.7300892895519857, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3107870931319634, 0);
  sqcRYGate(q, -0.003889978211575773, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.30460918985597557, 1);
  sqcRYGate(q, 0.6281945800547649, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9396129031078884, 1);
  sqcRYGate(q, 1.401552199545125, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8167109061072226, 0);
  sqcRYGate(q, 0.5055901240399416, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0604507935260488, 0);
  sqcRYGate(q, 1.9572817918553502, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.10954065324275436, 2);
  sqcRYGate(q, -1.877673820646784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5128148257223282, 2);
  sqcRYGate(q, -2.506767267626754, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7803769607658442, 0);
  sqcRYGate(q, 2.783038536693399, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.855170824980538, 0);
  sqcRYGate(q, -1.1636304391366608, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9824528921139244, 1);
  sqcRYGate(q, 0.39129158335077174, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1234456906276034, 1);
  sqcRYGate(q, 1.0746254386006935, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0141100768759275, 0);
  sqcRYGate(q, 1.653724047025034, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3141637800807917, 0);
  sqcRYGate(q, -1.6679064184889132, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.50092282633595, 2);
  sqcRYGate(q, -2.111867896977363, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.206087200131475, 2);
  sqcRYGate(q, -0.6780399828261796, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6325925392499943, 0);
  sqcRYGate(q, 1.899143097153031, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9493079056330547, 0);
  sqcRYGate(q, 3.0196236223420305, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9917856680248862, 1);
  sqcRYGate(q, -1.3674882243573467, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4627385347900685, 1);
  sqcRYGate(q, -2.1614813351606275, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5434672827808305, 0);
  sqcRYGate(q, -1.6676596116634266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9858398588472026, 0);
  sqcRYGate(q, 0.80057916145172, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2290886285258948, 2);
  sqcRYGate(q, -2.687698532645157, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6232185249953994, 2);
  sqcRYGate(q, 0.9833285337875273, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9314594790249684, 0);
  sqcRYGate(q, -2.4928415351305255, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1038204725660428, 0);
  sqcRYGate(q, 1.0104298206002251, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3666551729867202, 1);
  sqcRYGate(q, 2.419502500488116, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2742735207224074, 1);
  sqcRYGate(q, 1.666994067315768, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.869733340164741, 0);
  sqcRYGate(q, -2.7903986387327304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8671089152738132, 0);
  sqcRYGate(q, 2.354130238427265, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.424552441356784, 2);
  sqcRYGate(q, -2.249892090552991, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0947648762232207, 2);
  sqcRYGate(q, -2.2094153524980102, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3167922804342567, 0);
  sqcRYGate(q, 1.7553584630412224, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4766523463663832, 0);
  sqcRYGate(q, 2.962191773265759, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6479971963292264, 1);
  sqcRYGate(q, 0.4916874637564854, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2164511928801707, 1);
  sqcRYGate(q, 2.0659623727283045, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.046203828549298, 0);
  sqcRYGate(q, 1.7275179349911907, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6573137856225233, 0);
  sqcRYGate(q, -0.8624310883881421, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5565500265567414, 2);
  sqcRYGate(q, -2.4599829312504307, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3088015533725703, 2);
  sqcRYGate(q, -2.668722084103641, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.248848334566514, 0);
  sqcRYGate(q, -2.201044272284036, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.451831340898603, 0);
  sqcRYGate(q, 0.41667734105483856, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0089583352708096, 1);
  sqcRYGate(q, -0.4579270971607788, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5827553317361005, 1);
  sqcRYGate(q, -2.7253822229564526, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1997585920916065, 0);
  sqcRYGate(q, 0.28059498753409545, 1);
  sqcRYGate(q, 1.733175911002678, 2);
  sqcRYGate(q, -1.1006631032521472, 3);

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
