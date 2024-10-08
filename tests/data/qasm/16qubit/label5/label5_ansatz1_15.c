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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -2.0926067347748036, 0);
  sqcRZGate(q, -1.2413478002958558, 0);
  sqcRYGate(q, 0.8890405119950868, 1);
  sqcRZGate(q, -0.10890860893930357, 1);
  sqcRYGate(q, -1.0853993505860036, 2);
  sqcRZGate(q, -0.3258999286084139, 2);
  sqcRYGate(q, 0.2383352429609884, 3);
  sqcRZGate(q, 1.4802544434151323, 3);
  sqcRYGate(q, 0.5944285728295202, 4);
  sqcRZGate(q, -0.26427961168994146, 4);
  sqcRYGate(q, 3.117648465434973, 5);
  sqcRZGate(q, -2.0156448813753007, 5);
  sqcRYGate(q, 2.1710776927035003, 6);
  sqcRZGate(q, 2.158267114353965, 6);
  sqcRYGate(q, -0.18884072744834057, 7);
  sqcRZGate(q, 0.6187294011348525, 7);
  sqcRYGate(q, 1.1913775430339308, 8);
  sqcRZGate(q, 0.8010550691935351, 8);
  sqcRYGate(q, -3.118512123180856, 9);
  sqcRZGate(q, -0.8356730718327682, 9);
  sqcRYGate(q, 2.3780569160552707, 10);
  sqcRZGate(q, 0.3253369982068568, 10);
  sqcRYGate(q, -3.0346389312865365, 11);
  sqcRZGate(q, 1.1415070745805052, 11);
  sqcRYGate(q, -1.12117569876985, 12);
  sqcRZGate(q, 1.0446384471726295, 12);
  sqcRYGate(q, -0.27861267321414535, 13);
  sqcRZGate(q, -2.3073181014239794, 13);
  sqcRYGate(q, 0.07218104850015107, 14);
  sqcRZGate(q, -0.4275155300789049, 14);
  sqcRYGate(q, -0.08073786085736501, 15);
  sqcRZGate(q, -1.2790350026312705, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.604118610017693, 0);
  sqcRZGate(q, 0.46049442078917713, 0);
  sqcRYGate(q, -2.546140735911139, 1);
  sqcRZGate(q, 2.646610424483581, 1);
  sqcRYGate(q, -0.4148529252619374, 2);
  sqcRZGate(q, -1.6136804151855326, 2);
  sqcRYGate(q, -0.4455469110568782, 3);
  sqcRZGate(q, 2.1446190600883055, 3);
  sqcRYGate(q, -2.5179717396925834, 4);
  sqcRZGate(q, 1.3678185211272285, 4);
  sqcRYGate(q, 3.133771308436686, 5);
  sqcRZGate(q, 1.245390768003416, 5);
  sqcRYGate(q, 1.60027555600461, 6);
  sqcRZGate(q, 0.3033676508347422, 6);
  sqcRYGate(q, 1.0111865366786175, 7);
  sqcRZGate(q, 1.6168781710215505, 7);
  sqcRYGate(q, 2.9431288207858612, 8);
  sqcRZGate(q, 2.0665609976495123, 8);
  sqcRYGate(q, 2.9832777518326012, 9);
  sqcRZGate(q, 0.24853875623644592, 9);
  sqcRYGate(q, -1.067088363335042, 10);
  sqcRZGate(q, -2.352961615258326, 10);
  sqcRYGate(q, -0.21034960445883044, 11);
  sqcRZGate(q, -2.6402370054617625, 11);
  sqcRYGate(q, 2.992716993721894, 12);
  sqcRZGate(q, -0.6341662545682194, 12);
  sqcRYGate(q, -2.7830197044308864, 13);
  sqcRZGate(q, 0.09181783235604626, 13);
  sqcRYGate(q, 3.052502899317181, 14);
  sqcRZGate(q, 2.026233668404806, 14);
  sqcRYGate(q, 2.0266153708053816, 15);
  sqcRZGate(q, 1.913962740470743, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.433074023514642, 0);
  sqcRZGate(q, 0.2522210651434147, 0);
  sqcRYGate(q, 2.845893324450502, 1);
  sqcRZGate(q, -1.0339189163072762, 1);
  sqcRYGate(q, 2.752905109406904, 2);
  sqcRZGate(q, -1.4563102259917347, 2);
  sqcRYGate(q, -1.3488391769050994, 3);
  sqcRZGate(q, 1.83622520917958, 3);
  sqcRYGate(q, 2.9511250527873725, 4);
  sqcRZGate(q, 0.8618958866141935, 4);
  sqcRYGate(q, -0.3163636594407855, 5);
  sqcRZGate(q, 2.6498071426616367, 5);
  sqcRYGate(q, -0.8959917082157373, 6);
  sqcRZGate(q, -2.4024530953369734, 6);
  sqcRYGate(q, -2.103557163123614, 7);
  sqcRZGate(q, 1.6205282308962072, 7);
  sqcRYGate(q, -2.617744417184701, 8);
  sqcRZGate(q, 0.9122362849617955, 8);
  sqcRYGate(q, -3.107970187674261, 9);
  sqcRZGate(q, 2.3635335835102538, 9);
  sqcRYGate(q, 0.10450708368233297, 10);
  sqcRZGate(q, -3.016792421007363, 10);
  sqcRYGate(q, -0.24458626720474186, 11);
  sqcRZGate(q, -0.9867310667934309, 11);
  sqcRYGate(q, 0.2508854401345148, 12);
  sqcRZGate(q, 2.046718456720943, 12);
  sqcRYGate(q, 2.771251173890647, 13);
  sqcRZGate(q, 0.7147061328829754, 13);
  sqcRYGate(q, 0.01906372170750803, 14);
  sqcRZGate(q, 0.0032473990111679773, 14);
  sqcRYGate(q, 2.4641882158292545, 15);
  sqcRZGate(q, -2.609312724243589, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.6547076258801932, 0);
  sqcRZGate(q, 1.2790700659865142, 0);
  sqcRYGate(q, 2.5133212634078888, 1);
  sqcRZGate(q, 0.8723806531745478, 1);
  sqcRYGate(q, 1.7555812334343859, 2);
  sqcRZGate(q, 0.001101569256063217, 2);
  sqcRYGate(q, 1.9079923361407607, 3);
  sqcRZGate(q, -0.5872506022635474, 3);
  sqcRYGate(q, 1.4260291670354635, 4);
  sqcRZGate(q, 1.889587148126609, 4);
  sqcRYGate(q, 1.074958605360355, 5);
  sqcRZGate(q, -0.5905050967342518, 5);
  sqcRYGate(q, -3.081596975295883, 6);
  sqcRZGate(q, 0.7404724464353468, 6);
  sqcRYGate(q, 2.145218865451982, 7);
  sqcRZGate(q, 0.8345538852997194, 7);
  sqcRYGate(q, -0.6666608285451785, 8);
  sqcRZGate(q, 2.5950332061606725, 8);
  sqcRYGate(q, -1.5569991393961624, 9);
  sqcRZGate(q, 1.718304306186078, 9);
  sqcRYGate(q, 3.0940947564099166, 10);
  sqcRZGate(q, -2.915981287224599, 10);
  sqcRYGate(q, -0.15019492681568744, 11);
  sqcRZGate(q, -1.8966536009286399, 11);
  sqcRYGate(q, 1.538535646453667, 12);
  sqcRZGate(q, -2.4015652887803665, 12);
  sqcRYGate(q, -2.043957000684168, 13);
  sqcRZGate(q, 0.1446379592261664, 13);
  sqcRYGate(q, 0.0009036780131497223, 14);
  sqcRZGate(q, -3.123969341170359, 14);
  sqcRYGate(q, 2.9819848292866444, 15);
  sqcRZGate(q, -0.22019820121939837, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.47264481271579883, 0);
  sqcRZGate(q, 0.3189895954451707, 0);
  sqcRYGate(q, -0.8468969966012074, 1);
  sqcRZGate(q, -0.5753204633876656, 1);
  sqcRYGate(q, 3.038449673516445, 2);
  sqcRZGate(q, -1.5909015248598974, 2);
  sqcRYGate(q, 0.05055150600701097, 3);
  sqcRZGate(q, -2.8483701975357745, 3);
  sqcRYGate(q, -3.123188530559633, 4);
  sqcRZGate(q, -0.6615269287599697, 4);
  sqcRYGate(q, 0.974013834893459, 5);
  sqcRZGate(q, 2.634191846154487, 5);
  sqcRYGate(q, -3.0963378311852896, 6);
  sqcRZGate(q, -0.5497895765418681, 6);
  sqcRYGate(q, -2.835613695378188, 7);
  sqcRZGate(q, -0.6882382396470045, 7);
  sqcRYGate(q, -0.02669188173651804, 8);
  sqcRZGate(q, -0.9767919503967413, 8);
  sqcRYGate(q, -3.1360340961788573, 9);
  sqcRZGate(q, -0.00485320803809137, 9);
  sqcRYGate(q, -3.1093043082359717, 10);
  sqcRZGate(q, -1.9589029772454456, 10);
  sqcRYGate(q, 0.5553691756950212, 11);
  sqcRZGate(q, -2.300458678051816, 11);
  sqcRYGate(q, -0.784411443827361, 12);
  sqcRZGate(q, 2.929400383913642, 12);
  sqcRYGate(q, 2.235110687522576, 13);
  sqcRZGate(q, -0.5466247491880923, 13);
  sqcRYGate(q, -2.4886755531786537, 14);
  sqcRZGate(q, 2.1052508770206577, 14);
  sqcRYGate(q, 0.0423841785855147, 15);
  sqcRZGate(q, -2.8778349348529653, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.8949600791341723, 0);
  sqcRZGate(q, 1.8077340395621873, 0);
  sqcRYGate(q, 0.4968769839443567, 1);
  sqcRZGate(q, -0.4690622682827801, 1);
  sqcRYGate(q, 0.0867500160027701, 2);
  sqcRZGate(q, 2.7436856715485782, 2);
  sqcRYGate(q, 2.8794725788438873, 3);
  sqcRZGate(q, -0.8250998254818425, 3);
  sqcRYGate(q, 2.6684184568900586, 4);
  sqcRZGate(q, -1.03185247297007, 4);
  sqcRYGate(q, -1.9487359557648511, 5);
  sqcRZGate(q, -1.143384845929559, 5);
  sqcRYGate(q, 0.011248897391328118, 6);
  sqcRZGate(q, -1.6640325405883596, 6);
  sqcRYGate(q, 0.010886439722797014, 7);
  sqcRZGate(q, 0.5352283769292825, 7);
  sqcRYGate(q, -2.377131858184582, 8);
  sqcRZGate(q, 1.588897253275717, 8);
  sqcRYGate(q, -0.9367263020731108, 9);
  sqcRZGate(q, -0.02000185395373233, 9);
  sqcRYGate(q, 2.760153850369113, 10);
  sqcRZGate(q, -2.6208688037485537, 10);
  sqcRYGate(q, 1.6140807415649299, 11);
  sqcRZGate(q, -3.099877377449619, 11);
  sqcRYGate(q, 1.5849416287667533, 12);
  sqcRZGate(q, -0.17336276523957672, 12);
  sqcRYGate(q, -2.2336977579568025, 13);
  sqcRZGate(q, -2.9329526430596102, 13);
  sqcRYGate(q, 0.17177701167580986, 14);
  sqcRZGate(q, -1.7743255260546462, 14);
  sqcRYGate(q, -3.029416146420098, 15);
  sqcRZGate(q, 2.3431078940580146, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.22181900800392906, 0);
  sqcRZGate(q, 0.08725871140671541, 0);
  sqcRYGate(q, 1.9951550047321165, 1);
  sqcRZGate(q, 3.0694081992765314, 1);
  sqcRYGate(q, 0.525715715145366, 2);
  sqcRZGate(q, -0.044430936209337114, 2);
  sqcRYGate(q, -3.0268952535135036, 3);
  sqcRZGate(q, 0.1658087607935892, 3);
  sqcRYGate(q, -1.8544833356897963, 4);
  sqcRZGate(q, -3.108592091625258, 4);
  sqcRYGate(q, 0.8363915469550262, 5);
  sqcRZGate(q, -1.7300443909169336, 5);
  sqcRYGate(q, -3.1412126937552474, 6);
  sqcRZGate(q, 1.2335737645642757, 6);
  sqcRYGate(q, -2.299244377117352, 7);
  sqcRZGate(q, 0.13391374088876162, 7);
  sqcRYGate(q, 3.072921974535798, 8);
  sqcRZGate(q, -0.6958388745683941, 8);
  sqcRYGate(q, -1.6564527278408898, 9);
  sqcRZGate(q, 1.8485472976532717, 9);
  sqcRYGate(q, 0.7392356143604091, 10);
  sqcRZGate(q, 2.3952831713056035, 10);
  sqcRYGate(q, 1.7862056303411649, 11);
  sqcRZGate(q, -1.6274124530667278, 11);
  sqcRYGate(q, 3.00320959365802, 12);
  sqcRZGate(q, -2.159444064159689, 12);
  sqcRYGate(q, -0.0769864169650214, 13);
  sqcRZGate(q, -1.0649455458666006, 13);
  sqcRYGate(q, 1.4328349008318009, 14);
  sqcRZGate(q, 0.6444484193538843, 14);
  sqcRYGate(q, 0.4521656560709814, 15);
  sqcRZGate(q, -1.2989222346694098, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.608297713617846, 0);
  sqcRZGate(q, 0.43849265333893683, 0);
  sqcRYGate(q, 1.9376531124510084, 1);
  sqcRZGate(q, -1.1201966505882535, 1);
  sqcRYGate(q, -0.11204417688696743, 2);
  sqcRZGate(q, -2.288069881533581, 2);
  sqcRYGate(q, 3.1305982263322822, 3);
  sqcRZGate(q, -0.2433838848140635, 3);
  sqcRYGate(q, 1.8641114468476816, 4);
  sqcRZGate(q, -3.109481079356954, 4);
  sqcRYGate(q, -3.1237296676140893, 5);
  sqcRZGate(q, -1.2576051938017627, 5);
  sqcRYGate(q, -2.086369463982874, 6);
  sqcRZGate(q, 3.1342205382163724, 6);
  sqcRYGate(q, -0.15507364346056648, 7);
  sqcRZGate(q, -1.8579233568680884, 7);
  sqcRYGate(q, 1.577674044983238, 8);
  sqcRZGate(q, 1.5907508581819467, 8);
  sqcRYGate(q, -1.6118365195553737, 9);
  sqcRZGate(q, -2.9380513335973113, 9);
  sqcRYGate(q, 2.1505456609914706, 10);
  sqcRZGate(q, -1.033442437150116, 10);
  sqcRYGate(q, -3.109735782912221, 11);
  sqcRZGate(q, -0.21646633634203027, 11);
  sqcRYGate(q, 1.414742141195842, 12);
  sqcRZGate(q, 0.11581400557636368, 12);
  sqcRYGate(q, -1.787559585193252, 13);
  sqcRZGate(q, -0.08161421994779694, 13);
  sqcRYGate(q, 1.632181679302639, 14);
  sqcRZGate(q, 1.6189943416240267, 14);
  sqcRYGate(q, 0.00827848279804666, 15);
  sqcRZGate(q, 2.977088200530618, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.728431232381537, 0);
  sqcRZGate(q, 1.6767003857982752, 0);
  sqcRYGate(q, 1.10280510067067, 1);
  sqcRZGate(q, -0.47926661171544915, 1);
  sqcRYGate(q, -1.0443033164938047, 2);
  sqcRZGate(q, -1.2205445861864417, 2);
  sqcRYGate(q, -2.21888492580958, 3);
  sqcRZGate(q, -0.9914377313071157, 3);
  sqcRYGate(q, 1.8200525422341471, 4);
  sqcRZGate(q, -3.11568676420974, 4);
  sqcRYGate(q, -3.119874525628785, 5);
  sqcRZGate(q, -2.556695763833883, 5);
  sqcRYGate(q, -3.1196083417869005, 6);
  sqcRZGate(q, -0.0005030502040478552, 6);
  sqcRYGate(q, 3.1258473755255585, 7);
  sqcRZGate(q, -2.058485831858744, 7);
  sqcRYGate(q, -1.3699551023476015, 8);
  sqcRZGate(q, 1.4076084928703994, 8);
  sqcRYGate(q, -0.00672814313941128, 9);
  sqcRZGate(q, 1.218275555034464, 9);
  sqcRYGate(q, 0.053757931116742874, 10);
  sqcRZGate(q, 0.4479063200241491, 10);
  sqcRYGate(q, 3.1415582748520707, 11);
  sqcRZGate(q, 0.35334586604834617, 11);
  sqcRYGate(q, -0.0605672513749509, 12);
  sqcRZGate(q, 1.5075337036287844, 12);
  sqcRYGate(q, 3.1338168068182437, 13);
  sqcRZGate(q, -2.5158926111117275, 13);
  sqcRYGate(q, -1.4748544735615612, 14);
  sqcRZGate(q, 1.3360133067564803, 14);
  sqcRYGate(q, -0.3089137606324961, 15);
  sqcRZGate(q, -2.5214022862403342, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.818839784919302, 0);
  sqcRZGate(q, 1.9808610995961455, 0);
  sqcRYGate(q, -1.5894571426993152, 1);
  sqcRZGate(q, 1.417765223077451, 1);
  sqcRYGate(q, 1.4353893162773137, 2);
  sqcRZGate(q, -1.7506659371652047, 2);
  sqcRYGate(q, 0.2136832299845457, 3);
  sqcRZGate(q, -1.4939493482417079, 3);
  sqcRYGate(q, 3.079145288060504, 4);
  sqcRZGate(q, -2.4421887324794316, 4);
  sqcRYGate(q, 2.400722836843087, 5);
  sqcRZGate(q, 1.558024610636095, 5);
  sqcRYGate(q, 0.33902728710948615, 6);
  sqcRZGate(q, 3.0770288946677455, 6);
  sqcRYGate(q, -3.121987432461017, 7);
  sqcRZGate(q, -2.6689380392009636, 7);
  sqcRYGate(q, -3.131142079790013, 8);
  sqcRZGate(q, 1.3702764337082842, 8);
  sqcRYGate(q, -1.2128722239125675, 9);
  sqcRZGate(q, -0.15086594533123196, 9);
  sqcRYGate(q, -1.747907841479801, 10);
  sqcRZGate(q, -2.159117723444696, 10);
  sqcRYGate(q, 3.115821412220994, 11);
  sqcRZGate(q, 2.124265467996484, 11);
  sqcRYGate(q, -1.2892506512064728, 12);
  sqcRZGate(q, 0.5535479517729064, 12);
  sqcRYGate(q, -0.01843132697718275, 13);
  sqcRZGate(q, 0.18317609818536343, 13);
  sqcRYGate(q, 1.3512690288027267, 14);
  sqcRZGate(q, -2.5277097265993627, 14);
  sqcRYGate(q, 3.0961844211170426, 15);
  sqcRZGate(q, 1.7899594656603588, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 3.0906973540929807, 0);
  sqcRZGate(q, 1.4025871397431138, 0);
  sqcRYGate(q, -0.9686020281200802, 1);
  sqcRZGate(q, 2.8343874383581844, 1);
  sqcRYGate(q, 1.15250551995762, 2);
  sqcRZGate(q, 2.0291569636247955, 2);
  sqcRYGate(q, 1.4041010137635679, 3);
  sqcRZGate(q, 0.22344544845787653, 3);
  sqcRYGate(q, 1.3386046570731354, 4);
  sqcRZGate(q, 3.1366872021129515, 4);
  sqcRYGate(q, -0.09854952915662805, 5);
  sqcRZGate(q, 0.18309188268754803, 5);
  sqcRYGate(q, 0.20251449379344366, 6);
  sqcRZGate(q, 0.7033207459405104, 6);
  sqcRYGate(q, -3.1007844434423557, 7);
  sqcRZGate(q, 3.0321383350556905, 7);
  sqcRYGate(q, -2.823682804022427, 8);
  sqcRZGate(q, 1.5617460994686656, 8);
  sqcRYGate(q, 2.959852143011233, 9);
  sqcRZGate(q, 1.2796934855604254, 9);
  sqcRYGate(q, 1.2668087187871597, 10);
  sqcRZGate(q, -0.1921531398624326, 10);
  sqcRYGate(q, 0.9531930425134385, 11);
  sqcRZGate(q, -1.0666322438614972, 11);
  sqcRYGate(q, -3.131507260504004, 12);
  sqcRZGate(q, -0.7284804456755901, 12);
  sqcRYGate(q, -0.052905851103072346, 13);
  sqcRZGate(q, 0.7944376239009641, 13);
  sqcRYGate(q, 1.0806721627758922, 14);
  sqcRZGate(q, -0.07256842348956408, 14);
  sqcRYGate(q, 1.670345727108145, 15);
  sqcRZGate(q, 1.2926274581133619, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.605579922962989, 0);
  sqcRZGate(q, -1.6038143184874767, 0);
  sqcRYGate(q, 0.8855414004096458, 1);
  sqcRZGate(q, 0.4085058244447779, 1);
  sqcRYGate(q, 1.5203131273057924, 2);
  sqcRZGate(q, -2.9082636659254226, 2);
  sqcRYGate(q, 0.0018975020187249787, 3);
  sqcRZGate(q, 2.7687732462543746, 3);
  sqcRYGate(q, 1.650457330931677, 4);
  sqcRZGate(q, -1.256116456168306, 4);
  sqcRYGate(q, 3.126997784922339, 5);
  sqcRZGate(q, 2.4114525735213124, 5);
  sqcRYGate(q, -2.9902449494820167, 6);
  sqcRZGate(q, 0.7598237518456168, 6);
  sqcRYGate(q, 2.058322275760079, 7);
  sqcRZGate(q, 3.127234948545461, 7);
  sqcRYGate(q, 3.1347005981395606, 8);
  sqcRZGate(q, 1.4855169768805117, 8);
  sqcRYGate(q, -1.6657290283174782, 9);
  sqcRZGate(q, 0.15715166418075344, 9);
  sqcRYGate(q, 0.0036497720926620403, 10);
  sqcRZGate(q, -3.043306038515073, 10);
  sqcRYGate(q, -0.0041489864569497215, 11);
  sqcRZGate(q, 1.0999752451066884, 11);
  sqcRYGate(q, 1.9987402786312574, 12);
  sqcRZGate(q, 2.1150621026209038, 12);
  sqcRYGate(q, 2.809758478307331, 13);
  sqcRZGate(q, 0.9992573857103135, 13);
  sqcRYGate(q, 1.7277350756253969, 14);
  sqcRZGate(q, -2.2297730068055213, 14);
  sqcRYGate(q, -0.1627421305319718, 15);
  sqcRZGate(q, -1.563033935070196, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.727241935166992, 0);
  sqcRZGate(q, -1.1918334679398823, 0);
  sqcRYGate(q, -2.8665732195374294, 1);
  sqcRZGate(q, -1.1166491090775752, 1);
  sqcRYGate(q, 2.389142280045406, 2);
  sqcRZGate(q, -2.0510040161065985, 2);
  sqcRYGate(q, -1.53608919224654, 3);
  sqcRZGate(q, 0.2812669071724425, 3);
  sqcRYGate(q, 0.09827008453717756, 4);
  sqcRZGate(q, 1.2482555397726567, 4);
  sqcRYGate(q, 1.593950682192732, 5);
  sqcRZGate(q, -3.1408524134039157, 5);
  sqcRYGate(q, 1.8592200579070655, 6);
  sqcRZGate(q, -3.129130552783674, 6);
  sqcRYGate(q, -1.8699889398796152, 7);
  sqcRZGate(q, 0.02583329588121419, 7);
  sqcRYGate(q, 0.0049312332235738054, 8);
  sqcRZGate(q, 1.7866668975381457, 8);
  sqcRYGate(q, -1.6362194257640175, 9);
  sqcRZGate(q, 1.5550950699417176, 9);
  sqcRYGate(q, -1.8776432550875712, 10);
  sqcRZGate(q, 0.18535631027100316, 10);
  sqcRYGate(q, -1.8592464126415722, 11);
  sqcRZGate(q, 2.464904817190584, 11);
  sqcRYGate(q, -0.09060698164789294, 12);
  sqcRZGate(q, 1.185812431999529, 12);
  sqcRYGate(q, 3.12557834450587, 13);
  sqcRZGate(q, 2.491307221828726, 13);
  sqcRYGate(q, 1.8339007300862011, 14);
  sqcRZGate(q, -3.014454783958203, 14);
  sqcRYGate(q, 3.0031349954184785, 15);
  sqcRZGate(q, -1.1738523299119272, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.65172999717525, 0);
  sqcRZGate(q, -0.8020125872210421, 0);
  sqcRYGate(q, 1.4079558936064682, 1);
  sqcRZGate(q, 0.6251614679845953, 1);
  sqcRYGate(q, 1.998618367510117, 2);
  sqcRZGate(q, -3.1147042720729052, 2);
  sqcRYGate(q, 3.116885477631921, 3);
  sqcRZGate(q, -2.6975977362212684, 3);
  sqcRYGate(q, 1.1587857328816886, 4);
  sqcRZGate(q, -1.8212621253669559, 4);
  sqcRYGate(q, 1.9478134266292204, 5);
  sqcRZGate(q, 0.0052992177908084415, 5);
  sqcRYGate(q, -2.152886121296083, 6);
  sqcRZGate(q, 0.010714842637409738, 6);
  sqcRYGate(q, -2.896231817006919, 7);
  sqcRZGate(q, -3.120795153223889, 7);
  sqcRYGate(q, 3.1257628132367987, 8);
  sqcRZGate(q, -3.009327707972733, 8);
  sqcRYGate(q, 1.6176520572391313, 9);
  sqcRZGate(q, -0.47152706955195206, 9);
  sqcRYGate(q, -0.006038991050053123, 10);
  sqcRZGate(q, 2.509270764439612, 10);
  sqcRYGate(q, -3.130705748413462, 11);
  sqcRZGate(q, 2.4932615157784968, 11);
  sqcRYGate(q, 0.3534591495702364, 12);
  sqcRZGate(q, 1.1732781788059974, 12);
  sqcRYGate(q, 1.6602569990305518, 13);
  sqcRZGate(q, 1.5082860384763954, 13);
  sqcRYGate(q, -1.362739595014543, 14);
  sqcRZGate(q, -0.138284371487293, 14);
  sqcRYGate(q, 1.4115030787053726, 15);
  sqcRZGate(q, -0.6998027655199435, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.041774119210443, 0);
  sqcRZGate(q, 0.05781653345100412, 0);
  sqcRYGate(q, 3.1288330276387004, 1);
  sqcRZGate(q, 1.7867831494200055, 1);
  sqcRYGate(q, -0.35688303293405627, 2);
  sqcRZGate(q, 0.04910536287490519, 2);
  sqcRYGate(q, -3.125981959787956, 3);
  sqcRZGate(q, -2.9347668140986314, 3);
  sqcRYGate(q, -0.0193628684232241, 4);
  sqcRZGate(q, 1.6973430472723612, 4);
  sqcRYGate(q, -1.349962094031414, 5);
  sqcRZGate(q, 1.1201537186354837, 5);
  sqcRYGate(q, 2.0633840367325806, 6);
  sqcRZGate(q, -0.007103636659142332, 6);
  sqcRYGate(q, 1.4314011295983122, 7);
  sqcRZGate(q, 3.1405197273861623, 7);
  sqcRYGate(q, 1.3264566530691764, 8);
  sqcRZGate(q, 3.0702774223037594, 8);
  sqcRYGate(q, 1.163418398666244, 9);
  sqcRZGate(q, -2.6272504390894174, 9);
  sqcRYGate(q, 1.6871447745676151, 10);
  sqcRZGate(q, -1.629390063723343, 10);
  sqcRYGate(q, 2.657378660581082, 11);
  sqcRZGate(q, -3.0828741715987302, 11);
  sqcRYGate(q, 2.2946610999601225, 12);
  sqcRZGate(q, 0.03786439501384642, 12);
  sqcRYGate(q, 0.016025403942505442, 13);
  sqcRZGate(q, -3.019760366259508, 13);
  sqcRYGate(q, -1.5677758797405978, 14);
  sqcRZGate(q, 1.5264618966323633, 14);
  sqcRYGate(q, -0.5009272489901172, 15);
  sqcRZGate(q, -2.540765218993058, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.014683833360026, 0);
  sqcRZGate(q, 0.1388852985075774, 0);
  sqcRYGate(q, 1.5392490782683743, 1);
  sqcRZGate(q, 0.4682635634610825, 1);
  sqcRYGate(q, -1.2039425519513978, 2);
  sqcRZGate(q, 1.0078957833971345, 2);
  sqcRYGate(q, 0.35815446053308747, 3);
  sqcRZGate(q, 3.0949510362614543, 3);
  sqcRYGate(q, -0.01551396008864066, 4);
  sqcRZGate(q, -3.009890290995216, 4);
  sqcRYGate(q, 3.139686339393202, 5);
  sqcRZGate(q, 1.133699456858638, 5);
  sqcRYGate(q, -0.9519279823311688, 6);
  sqcRZGate(q, -3.1358909728009308, 6);
  sqcRYGate(q, 2.201229657203232, 7);
  sqcRZGate(q, -3.1405843143521324, 7);
  sqcRYGate(q, 2.4669605215012482, 8);
  sqcRZGate(q, -0.025363645531233377, 8);
  sqcRYGate(q, 0.9276902522514932, 9);
  sqcRZGate(q, 3.1409539831370044, 9);
  sqcRYGate(q, 0.7618562567229166, 10);
  sqcRZGate(q, -0.09968828995369557, 10);
  sqcRYGate(q, 2.099467642174102, 11);
  sqcRZGate(q, -0.005931128526485934, 11);
  sqcRYGate(q, 2.9472025565753017, 12);
  sqcRZGate(q, 1.561720976068723, 12);
  sqcRYGate(q, -1.5889748090104132, 13);
  sqcRZGate(q, 1.569951746456528, 13);
  sqcRYGate(q, -1.934516282021063, 14);
  sqcRZGate(q, 1.448505275624142, 14);
  sqcRYGate(q, 1.4480299469064644, 15);
  sqcRZGate(q, 3.093293207686268, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.306471077448097, 0);
  sqcRZGate(q, 0.21300181360863046, 0);
  sqcRYGate(q, -1.5570965267726034, 1);
  sqcRZGate(q, -1.182787944011329, 1);
  sqcRYGate(q, -1.2257030110823743, 2);
  sqcRZGate(q, -3.1389160196827306, 2);
  sqcRYGate(q, 1.4702877558345868, 3);
  sqcRZGate(q, -0.006002419791070905, 3);
  sqcRYGate(q, -1.497854757036615, 4);
  sqcRZGate(q, 3.1263189151226554, 4);
  sqcRYGate(q, -0.28569415732552006, 5);
  sqcRZGate(q, -0.31913823148020715, 5);
  sqcRYGate(q, 2.20282950141346, 6);
  sqcRZGate(q, -0.0002929815216603515, 6);
  sqcRYGate(q, -1.5391406955928264, 7);
  sqcRZGate(q, -2.3010187999495058, 7);
  sqcRYGate(q, -0.6224956314014738, 8);
  sqcRZGate(q, 0.0057985606722469165, 8);
  sqcRYGate(q, 1.549474884800566, 9);
  sqcRZGate(q, 3.137627051776063, 9);
  sqcRYGate(q, 3.0025663141875842, 10);
  sqcRZGate(q, 3.065761222497161, 10);
  sqcRYGate(q, 1.2151728287788988, 11);
  sqcRZGate(q, 0.016619616581013994, 11);
  sqcRYGate(q, 3.0210583555413977, 12);
  sqcRZGate(q, -0.6405493711170305, 12);
  sqcRYGate(q, 1.556657403880791, 13);
  sqcRZGate(q, 0.7141245991767534, 13);
  sqcRYGate(q, -1.5790015900405967, 14);
  sqcRZGate(q, 0.0018394775946982715, 14);
  sqcRYGate(q, 1.5300779966015337, 15);
  sqcRZGate(q, -1.5108132863480077, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.4376509157541797, 0);
  sqcRZGate(q, -0.45098345720897454, 0);
  sqcRYGate(q, 3.0644130007299712, 1);
  sqcRZGate(q, 0.3614721612903766, 1);
  sqcRYGate(q, -1.5755737143596322, 2);
  sqcRZGate(q, 1.579593657374156, 2);
  sqcRYGate(q, -2.9620748887439574, 3);
  sqcRZGate(q, 1.5634858253856514, 3);
  sqcRYGate(q, -0.8082698442280805, 4);
  sqcRZGate(q, 1.5715959901922214, 4);
  sqcRYGate(q, -3.1313023337132195, 5);
  sqcRZGate(q, 1.2649385979907768, 5);
  sqcRYGate(q, 1.5964600563069922, 6);
  sqcRZGate(q, -1.5706474928626155, 6);
  sqcRYGate(q, -3.1389079617916256, 7);
  sqcRZGate(q, -0.7319714500757328, 7);
  sqcRYGate(q, -2.274913849652934, 8);
  sqcRZGate(q, 1.5662355910761496, 8);
  sqcRYGate(q, 0.6962687761494452, 9);
  sqcRZGate(q, -1.5637736945400078, 9);
  sqcRYGate(q, -1.6117073198465994, 10);
  sqcRZGate(q, 1.5644800437407644, 10);
  sqcRYGate(q, -1.5635397520367071, 11);
  sqcRZGate(q, -1.5863033775124906, 11);
  sqcRYGate(q, 3.1379257139167076, 12);
  sqcRZGate(q, 0.9924054643182662, 12);
  sqcRYGate(q, -3.1329685544419417, 13);
  sqcRZGate(q, -2.7895690963439352, 13);
  sqcRYGate(q, 1.5799503017742296, 14);
  sqcRZGate(q, 0.10397329483103954, 14);
  sqcRYGate(q, -3.1345029341271813, 15);
  sqcRZGate(q, -2.0547352089119215, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.9298121552579587, 0);
  sqcRZGate(q, -2.235420126136572, 0);
  sqcRYGate(q, -1.5700329070716181, 1);
  sqcRZGate(q, -2.1762495186865305, 1);
  sqcRYGate(q, 1.5761744962833282, 2);
  sqcRZGate(q, -2.199661264416981, 2);
  sqcRYGate(q, -1.5665812434759039, 3);
  sqcRZGate(q, 1.892575597172934, 3);
  sqcRYGate(q, -1.5712546605062812, 4);
  sqcRZGate(q, 1.9441568087241072, 4);
  sqcRYGate(q, -1.570178126776704, 5);
  sqcRZGate(q, -1.8488107303341657, 5);
  sqcRYGate(q, -1.570418863217049, 6);
  sqcRZGate(q, -3.012628292812264, 6);
  sqcRYGate(q, 1.5716705396096848, 7);
  sqcRZGate(q, 2.855420935949782, 7);
  sqcRYGate(q, 1.5726327992376081, 8);
  sqcRZGate(q, -0.7548476843221534, 8);
  sqcRYGate(q, -1.5698385970566953, 9);
  sqcRZGate(q, -2.8082402631298407, 9);
  sqcRYGate(q, -1.5775627994126937, 10);
  sqcRZGate(q, 1.682082163814103, 10);
  sqcRYGate(q, 1.5750492416763189, 11);
  sqcRZGate(q, 2.5001174941597077, 11);
  sqcRYGate(q, 1.5824692974997854, 12);
  sqcRZGate(q, -0.153020044348346, 12);
  sqcRYGate(q, 3.087197427251529, 13);
  sqcRZGate(q, -1.1381597760105961, 13);
  sqcRYGate(q, -1.5682974527123326, 14);
  sqcRZGate(q, -1.7957171510652774, 14);
  sqcRYGate(q, -3.1065494671513783, 15);
  sqcRZGate(q, -1.3813740431291155, 15);

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
