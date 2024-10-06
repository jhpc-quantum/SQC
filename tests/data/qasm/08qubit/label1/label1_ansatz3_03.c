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

  sqcRYGate(q, 0.05398008118966755, 0);
  sqcRZGate(q, 3.1115737120236586, 0);
  sqcRYGate(q, 1.5090080098980199, 1);
  sqcRZGate(q, -1.9341562635811016, 1);
  sqcRYGate(q, -2.890232049435166, 2);
  sqcRZGate(q, 1.567943650092003, 2);
  sqcRYGate(q, -3.141475043348327, 3);
  sqcRZGate(q, 0.14432267185834707, 3);
  sqcRYGate(q, 1.8847571237847314, 4);
  sqcRZGate(q, 1.57166939789352, 4);
  sqcRYGate(q, 0.09932400235477355, 5);
  sqcRZGate(q, 0.0008103760225051104, 5);
  sqcRYGate(q, 1.5710659437175476, 6);
  sqcRZGate(q, -2.2836860016440443, 6);
  sqcRYGate(q, -1.1452707754199125, 7);
  sqcRZGate(q, 2.119994990199353, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 3.1322070343923345, 0);
  sqcRZGate(q, -1.5505918554267213, 0);
  sqcRYGate(q, -3.0879327567637818, 1);
  sqcRZGate(q, -1.936774481940734, 1);
  sqcRYGate(q, 1.57066482655115, 2);
  sqcRZGate(q, -0.13243978498640718, 2);
  sqcRYGate(q, -1.5708080886547249, 3);
  sqcRZGate(q, -1.59494844831271, 3);
  sqcRYGate(q, -1.5707904341105643, 4);
  sqcRZGate(q, 3.1415833918978566, 4);
  sqcRYGate(q, -0.1868983072995105, 5);
  sqcRZGate(q, 1.5726020540184145, 5);
  sqcRYGate(q, -5.104573920000632e-06, 6);
  sqcRZGate(q, 0.7128549068421374, 6);
  sqcRYGate(q, 3.1415326067089184, 7);
  sqcRZGate(q, -1.0054627729893255, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -3.0065862047833067, 0);
  sqcRZGate(q, 1.5707333012905853, 0);
  sqcRYGate(q, -1.5704510938274279, 1);
  sqcRZGate(q, 3.1196164723461135, 1);
  sqcRYGate(q, 1.6709896419964105, 2);
  sqcRZGate(q, 1.6255209217799447, 2);
  sqcRYGate(q, -3.111383462858387, 3);
  sqcRZGate(q, -1.573130774992169, 3);
  sqcRYGate(q, 0.7200201381502129, 4);
  sqcRZGate(q, 1.5799265281550268, 4);
  sqcRYGate(q, 2.897204689216773, 5);
  sqcRZGate(q, 3.1415776880564454, 5);
  sqcRYGate(q, 1.5710854128554292, 6);
  sqcRZGate(q, -1.5728197365292602, 6);
  sqcRYGate(q, -3.0173140081194805, 7);
  sqcRZGate(q, 0.01518349200535507, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.5704310179731982, 0);
  sqcRZGate(q, -3.141431648469613, 0);
  sqcRYGate(q, 1.6977715958625932, 1);
  sqcRZGate(q, 3.139762460520761, 1);
  sqcRYGate(q, 1.5707809707672966, 2);
  sqcRZGate(q, -0.5848735875653137, 2);
  sqcRYGate(q, 0.1607130320814045, 3);
  sqcRZGate(q, 1.5708209364347203, 3);
  sqcRYGate(q, 3.141523602537181, 4);
  sqcRZGate(q, -1.5617485885207918, 4);
  sqcRYGate(q, -1.5712474196917707, 5);
  sqcRZGate(q, -3.025677927868139, 5);
  sqcRYGate(q, -0.9690598291595173, 6);
  sqcRZGate(q, -3.141507706227939, 6);
  sqcRYGate(q, -1.1396314355454127, 7);
  sqcRZGate(q, -1.570395033361071, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.1352731342370788, 0);
  sqcRZGate(q, -1.5705648695293724, 0);
  sqcRYGate(q, 2.6822403390986884, 1);
  sqcRZGate(q, -0.0015667795476997524, 1);
  sqcRYGate(q, 3.141503391118859, 2);
  sqcRZGate(q, -2.222873824976495, 2);
  sqcRYGate(q, -2.304157467208377, 3);
  sqcRZGate(q, 1.5723953529771368, 3);
  sqcRYGate(q, 3.067765569063253, 4);
  sqcRZGate(q, -1.5705361385006056, 4);
  sqcRYGate(q, -1.4672229041072986, 5);
  sqcRZGate(q, 0.026422592486489732, 5);
  sqcRYGate(q, -1.570781484502006, 6);
  sqcRZGate(q, -2.3262635903538352e-06, 6);
  sqcRYGate(q, 2.7319324937987624, 7);
  sqcRZGate(q, 3.1415157630307258, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.5708083834382125, 0);
  sqcRZGate(q, -0.00039587637606176444, 0);
  sqcRYGate(q, 3.103252878706336, 1);
  sqcRZGate(q, 1.5702554381974414, 1);
  sqcRYGate(q, 3.1404846531247204, 2);
  sqcRZGate(q, -0.41783470384943117, 2);
  sqcRYGate(q, 0.010852812130909075, 3);
  sqcRZGate(q, -0.0016143878582484143, 3);
  sqcRYGate(q, 3.122061744792965, 4);
  sqcRZGate(q, 0.00015128571008116154, 4);
  sqcRYGate(q, -1.5704746906843616, 5);
  sqcRZGate(q, -2.6766452187610335, 5);
  sqcRYGate(q, 2.0594243829014074, 6);
  sqcRZGate(q, 1.5707671556273957, 6);
  sqcRYGate(q, -1.5707836416348437, 7);
  sqcRZGate(q, 1.5707879368903601, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.5710318182941698, 0);
  sqcRZGate(q, 2.2502238892176063, 0);
  sqcRYGate(q, -1.570679394530706, 1);
  sqcRZGate(q, -2.462162637366937, 1);
  sqcRYGate(q, 0.000123013263682914, 2);
  sqcRZGate(q, -2.1116472115885694, 2);
  sqcRYGate(q, 1.5707606325285979, 3);
  sqcRZGate(q, 0.6790506163850063, 3);
  sqcRYGate(q, -1.570803337260129, 4);
  sqcRZGate(q, -0.8914178303111336, 4);
  sqcRYGate(q, -3.141589144437239, 5);
  sqcRZGate(q, 1.1442912312482802, 5);
  sqcRYGate(q, 1.5707983225684956, 6);
  sqcRZGate(q, -0.8915400748709823, 6);
  sqcRYGate(q, -1.5707875522268195, 7);
  sqcRZGate(q, -2.462218094184619, 7);

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
