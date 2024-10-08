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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 0.06580846355679813, 0);
  sqcRYGate(q, 0.07496806720627251, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.267694108652508, 0);
  sqcRYGate(q, -3.0483509195134944, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4707193906370506, 2);
  sqcRYGate(q, -0.459694166571321, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0549047360385697, 2);
  sqcRYGate(q, 0.3157409497356812, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.399910079172548, 4);
  sqcRYGate(q, -1.6633510724191027, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.930531751485277, 4);
  sqcRYGate(q, 1.8925131608661765, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5868009273078563, 6);
  sqcRYGate(q, -2.323972357300729, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8727573897742302, 6);
  sqcRYGate(q, -2.6001906149525094, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9777174165209691, 8);
  sqcRYGate(q, -3.0204544103431346, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.0918936333541023, 8);
  sqcRYGate(q, -2.0193765753667767, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.461551228534877, 10);
  sqcRYGate(q, -0.2664266172318932, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.945632843388639, 10);
  sqcRYGate(q, -2.8617839023990403, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.9324981682354103, 12);
  sqcRYGate(q, -2.979515475575105, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.383102199353137, 12);
  sqcRYGate(q, -1.0458423693271537, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.417396480987664, 14);
  sqcRYGate(q, 1.1546575958416891, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.796526311069686, 14);
  sqcRYGate(q, -2.393792428576895, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.04724211820915958, 16);
  sqcRYGate(q, -1.9252774284584948, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.629816211883086, 16);
  sqcRYGate(q, 1.4563051704367431, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.5995201474710461, 18);
  sqcRYGate(q, 1.6665610970418365, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.6678534335677542, 18);
  sqcRYGate(q, -0.15376715328028112, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.8451794012475338, 1);
  sqcRYGate(q, -0.5316625126407617, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.106044089709065, 1);
  sqcRYGate(q, 2.9912302921284724, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.04179786666347419, 3);
  sqcRYGate(q, 1.1995813359119616, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0030102263129636597, 3);
  sqcRYGate(q, -0.01575181602735576, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.1568193605173036, 5);
  sqcRYGate(q, -2.8035670611363552, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0454464690471803, 5);
  sqcRYGate(q, 0.011246545177168166, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9637913217929136, 7);
  sqcRYGate(q, -0.620146863833426, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.837693265691485, 7);
  sqcRYGate(q, 0.5699380379516601, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.0362543859827062, 9);
  sqcRYGate(q, 2.1145486247479357, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.7403460476946853, 9);
  sqcRYGate(q, 2.953270230046357, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.48541094565461407, 11);
  sqcRYGate(q, -1.6329636594123407, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.13887042698519, 11);
  sqcRYGate(q, 2.9383895970735296, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.7545199362459312, 13);
  sqcRYGate(q, 2.924828877143557, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.103806281402508, 13);
  sqcRYGate(q, 0.0066589381854202925, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.5072983598548686, 15);
  sqcRYGate(q, -2.281612005900653, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.12677777940187265, 15);
  sqcRYGate(q, -0.3012196502529756, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.847216515719408, 17);
  sqcRYGate(q, -1.4221191918464617, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.16305400969730413, 17);
  sqcRYGate(q, -3.127872248253735, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.7343158515597645, 0);
  sqcRYGate(q, -1.158468946151328, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9291405869372302, 0);
  sqcRYGate(q, -1.174883237757534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0955711506137868, 2);
  sqcRYGate(q, -1.824507648709766, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9707332648395317, 2);
  sqcRYGate(q, -0.11420690556413415, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6910092296296266, 4);
  sqcRYGate(q, -1.5280721518088933, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5906068565092673, 4);
  sqcRYGate(q, 0.46061567877688475, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1732684710479147, 6);
  sqcRYGate(q, -0.4711457666733405, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.449245619400442, 6);
  sqcRYGate(q, -1.0253696451007424, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.47333085333269, 8);
  sqcRYGate(q, -1.5968746460985637, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.05397551892117062, 8);
  sqcRYGate(q, 3.1381156308405838, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.7287990839269902, 10);
  sqcRYGate(q, 1.2970618259916673, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9969839093873194, 10);
  sqcRYGate(q, 0.24700111867969987, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.141402097038557, 12);
  sqcRYGate(q, -0.9012308507388821, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.6467735032259538, 12);
  sqcRYGate(q, 2.582925723762974, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.8889078186093604, 14);
  sqcRYGate(q, 1.1436161246417686, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5866073224554527, 14);
  sqcRYGate(q, -0.26366710072652655, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.3426928249737289, 16);
  sqcRYGate(q, 2.8737091499590703, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.556460381410542, 16);
  sqcRYGate(q, 2.2835125040309565, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 3.1095181377249426, 18);
  sqcRYGate(q, -1.452578815442891, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.3002562451205864, 18);
  sqcRYGate(q, 3.069147572025728, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.7927297692109097, 1);
  sqcRYGate(q, 1.5620124372414796, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6966221883972714, 1);
  sqcRYGate(q, -1.3710377712679847, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0730462484975534, 3);
  sqcRYGate(q, -0.17880594789177917, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.03734292592670929, 3);
  sqcRYGate(q, 0.33970407349237774, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9513011111652734, 5);
  sqcRYGate(q, -0.23810880459052974, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.037716071220769365, 5);
  sqcRYGate(q, -3.0934703605604694, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.035715240784704, 7);
  sqcRYGate(q, 2.3252337846916173, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.373488455496881, 7);
  sqcRYGate(q, -1.8877767961393572, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.84816491345412, 9);
  sqcRYGate(q, 2.837966109068973, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.4073899535098837, 9);
  sqcRYGate(q, -3.07375750340407, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.3867969446256261, 11);
  sqcRYGate(q, 0.48310756403530153, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.06479673529390162, 11);
  sqcRYGate(q, -0.006154021981958913, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.7337029688215904, 13);
  sqcRYGate(q, -0.353088220690583, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.7815514250597845, 13);
  sqcRYGate(q, 1.4199805410129347, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5206899575822108, 15);
  sqcRYGate(q, 1.4489984677758012, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.4378575696321387, 15);
  sqcRYGate(q, 0.1240083114685912, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.4131399648669176, 17);
  sqcRYGate(q, 1.9579817495339047, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.15989750567815084, 17);
  sqcRYGate(q, 2.3681519592486344, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.9062549183049824, 0);
  sqcRYGate(q, 1.041311336502047, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0294996191953834, 0);
  sqcRYGate(q, 2.1256068577560177, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.472370865145224, 2);
  sqcRYGate(q, -2.1006376557863975, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.122885253673126, 2);
  sqcRYGate(q, 0.06495413467061771, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4396358549111419, 4);
  sqcRYGate(q, -2.251583736357566, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.255885139731537, 4);
  sqcRYGate(q, -2.935754568200445, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.284924283778972, 6);
  sqcRYGate(q, 2.802766313195146, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.09031841842836204, 6);
  sqcRYGate(q, -0.7242449270640428, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4589939811506953, 8);
  sqcRYGate(q, -0.3497610727389695, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.1087134833078114, 8);
  sqcRYGate(q, 3.1197636367691954, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.6778533368963036, 10);
  sqcRYGate(q, -2.6165537133334165, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6325699784857783, 10);
  sqcRYGate(q, 1.707911093680452, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.7257131749955583, 12);
  sqcRYGate(q, 1.631405228022555, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.014069623373782036, 12);
  sqcRYGate(q, 1.4782554311630611, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.8911933780071618, 14);
  sqcRYGate(q, 1.4693235974289616, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.00818856687883418, 14);
  sqcRYGate(q, 2.3839266702600277, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.33757754927445, 16);
  sqcRYGate(q, -0.537147610425813, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.023638911619408454, 16);
  sqcRYGate(q, -0.04156836526801744, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.06743644819567063, 18);
  sqcRYGate(q, 0.5239548875588262, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.9511614499068551, 18);
  sqcRYGate(q, 2.45067687633101, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.915427819027682, 1);
  sqcRYGate(q, 1.1891844490340855, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.165667163788921, 1);
  sqcRYGate(q, -2.304386664132835, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.20084235636039158, 3);
  sqcRYGate(q, -1.354180106301783, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0364701167337227, 3);
  sqcRYGate(q, 0.6006484260000686, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1236087709681004, 5);
  sqcRYGate(q, 0.13157055657432792, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1106792638707175, 5);
  sqcRYGate(q, -3.092902092580979, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5090765190751697, 7);
  sqcRYGate(q, -2.2269949992227915, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.6925456350631287, 7);
  sqcRYGate(q, -0.5943106522729478, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.491251161730508, 9);
  sqcRYGate(q, -1.1436477459630523, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.03332912416394418, 9);
  sqcRYGate(q, 2.9941954512950564, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.0004669333547547, 11);
  sqcRYGate(q, 0.5302009026933763, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.999340626938293, 11);
  sqcRYGate(q, 0.09075514137816665, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.037090662250008, 13);
  sqcRYGate(q, -0.7167673625882917, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.0485234724964063, 13);
  sqcRYGate(q, -3.118321292464644, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.0943525520839736, 15);
  sqcRYGate(q, -0.7790684891529953, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.5532017684854622, 15);
  sqcRYGate(q, -0.2025986903052006, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.3511611496438105, 17);
  sqcRYGate(q, -2.099964111361971, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.6671322772653641, 17);
  sqcRYGate(q, 1.1234553154242337, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.063404110953448, 0);
  sqcRYGate(q, -2.268092080165677, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.174715089248732, 0);
  sqcRYGate(q, -2.7641724231611366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4037735408703558, 2);
  sqcRYGate(q, 2.777565237207953, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8346113555516244, 2);
  sqcRYGate(q, -1.2015369073926028, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1850499756289494, 4);
  sqcRYGate(q, 0.8353042725893358, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.10119764322434932, 4);
  sqcRYGate(q, 3.0136419245010146, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.08345940861013545, 6);
  sqcRYGate(q, 1.7583837335430506, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3955801014406646, 6);
  sqcRYGate(q, -0.678186331031957, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4391757976833856, 8);
  sqcRYGate(q, -2.6254377907785207, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.9177673995742337, 8);
  sqcRYGate(q, -0.42972607366996735, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.0818676256811823, 10);
  sqcRYGate(q, 2.4887378655427574, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.46851539511268087, 10);
  sqcRYGate(q, 0.8246491945461836, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.4505002449357578, 12);
  sqcRYGate(q, 0.9603084898597878, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.126103222701586, 12);
  sqcRYGate(q, 0.10436947909223537, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5857848166436792, 14);
  sqcRYGate(q, 1.3869074829593027, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.004169850094428718, 14);
  sqcRYGate(q, -1.7978175577998643, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.8822913809923447, 16);
  sqcRYGate(q, -2.5901140047529982, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 3.1401995838943653, 16);
  sqcRYGate(q, 0.0016482065526370652, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.9615854283945495, 18);
  sqcRYGate(q, -2.648486564169895, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 3.0780824706495804, 18);
  sqcRYGate(q, 2.846751293408298, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.9510315762463799, 1);
  sqcRYGate(q, 2.3198027725771917, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1047134799537934, 1);
  sqcRYGate(q, -3.0876805502375584, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1140554953860486, 3);
  sqcRYGate(q, -2.2791079544101955, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.06129160496094376, 3);
  sqcRYGate(q, 3.0603242215196858, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.281805127936001, 5);
  sqcRYGate(q, -2.9570010660684747, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.130798918103106, 5);
  sqcRYGate(q, 0.3783038273381854, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.06988236566027517, 7);
  sqcRYGate(q, -2.737355546102141, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.010271738380329687, 7);
  sqcRYGate(q, -0.014610552684346618, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.4906149738884333, 9);
  sqcRYGate(q, 0.9034646477526198, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.0858330662544953, 9);
  sqcRYGate(q, 2.9606800846171404, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.024288032189342, 11);
  sqcRYGate(q, -2.957006411804265, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.12199551610509651, 11);
  sqcRYGate(q, -0.8168557179482567, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.9131311173273577, 13);
  sqcRYGate(q, -2.971605546186051, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.7073893560833425, 13);
  sqcRYGate(q, 3.065100934714719, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.7604601167039138, 15);
  sqcRYGate(q, -0.18400230872913778, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.6091645939657591, 15);
  sqcRYGate(q, -0.11351333235653317, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.0312512152457316, 17);
  sqcRYGate(q, -0.8911623869697811, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.3515952461937606, 17);
  sqcRYGate(q, 0.3976493528733265, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.8547991742227472, 0);
  sqcRYGate(q, -2.6700349152372125, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0168557749738856, 0);
  sqcRYGate(q, 1.883838451947942, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0284707625192224, 2);
  sqcRYGate(q, -1.8157574260264004, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.394532237285909, 2);
  sqcRYGate(q, 2.623238952735132, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.275712136194126, 4);
  sqcRYGate(q, -0.2982986138522117, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.011119249082420346, 4);
  sqcRYGate(q, 3.1263281410727606, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4803667033420078, 6);
  sqcRYGate(q, 2.76296637000401, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.08601949026169464, 6);
  sqcRYGate(q, 0.1457571368989474, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6964371247839987, 8);
  sqcRYGate(q, 1.925331705627196, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.613158790516116, 8);
  sqcRYGate(q, 0.5208609468879652, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.2739175367669398, 10);
  sqcRYGate(q, 1.4579466435919741, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.7151409819868908, 10);
  sqcRYGate(q, -0.011260142819540242, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.174952106766072, 12);
  sqcRYGate(q, 0.9342873632646133, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.1090565413773015, 12);
  sqcRYGate(q, -3.133417005835943, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.9921500755364189, 14);
  sqcRYGate(q, -2.5866099615020643, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.1383685175249614, 14);
  sqcRYGate(q, -1.9600526574399773, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.7539034299579748, 16);
  sqcRYGate(q, -2.803085421037761, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.004824797149682501, 16);
  sqcRYGate(q, -0.003027382185587817, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.2444703329892057, 18);
  sqcRYGate(q, -1.3258012379374844, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.6734796993851289, 18);
  sqcRYGate(q, -0.677264473063869, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.8744533714129048, 1);
  sqcRYGate(q, -1.5802652283128555, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.06901251711155733, 1);
  sqcRYGate(q, -0.10830234370351377, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.298257877067838, 3);
  sqcRYGate(q, 1.6958596332124494, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.128532768162335, 3);
  sqcRYGate(q, 2.912031341038291, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8516586739270213, 5);
  sqcRYGate(q, 1.2444552508029618, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8395815546511013, 5);
  sqcRYGate(q, 2.8834921947662755, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6573644854855, 7);
  sqcRYGate(q, 1.9411153002923138, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.122443571519526, 7);
  sqcRYGate(q, 0.05385845559436896, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.3908190536316822, 9);
  sqcRYGate(q, -0.8422689878215655, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.101655304103998, 9);
  sqcRYGate(q, 0.07069773254769984, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5951827560885148, 11);
  sqcRYGate(q, 2.0038858869904077, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.9785768523680707, 11);
  sqcRYGate(q, -2.3086122235665005, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.7072680194751917, 13);
  sqcRYGate(q, 0.8898461942372864, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.799645259548182, 13);
  sqcRYGate(q, 3.113463402352385, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.1098867728999713, 15);
  sqcRYGate(q, -2.5652335419407524, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.553736949489854, 15);
  sqcRYGate(q, -0.05908437373031216, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.5734488340825026, 17);
  sqcRYGate(q, 0.6412851397577387, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.552341172162624, 17);
  sqcRYGate(q, 0.7060071551758051, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.5323758029754204, 0);
  sqcRYGate(q, 2.298048847395297, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6330438756271093, 0);
  sqcRYGate(q, 2.330317347224944, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.040249935059859965, 2);
  sqcRYGate(q, 0.018869432053844726, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2065261780085486, 2);
  sqcRYGate(q, -2.8056251268070107, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7598694411024525, 4);
  sqcRYGate(q, 1.3493418895003786, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1318330562095955, 4);
  sqcRYGate(q, -0.13649052460720854, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1095604652999964, 6);
  sqcRYGate(q, 0.47533122945166806, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0917109838379346, 6);
  sqcRYGate(q, -0.014648783365988183, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.295430062008232, 8);
  sqcRYGate(q, -3.0662293616358283, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.9503399139026325, 8);
  sqcRYGate(q, -0.9192831096215484, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6350993341782205, 10);
  sqcRYGate(q, -2.1944988315858347, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.305638585711177, 10);
  sqcRYGate(q, -2.757919370574161, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.8206235968170653, 12);
  sqcRYGate(q, 1.1091581666978931, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.07195005507338513, 12);
  sqcRYGate(q, 3.0586216520800833, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.6429828959792001, 14);
  sqcRYGate(q, 1.1115850092842914, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.8185799792190291, 14);
  sqcRYGate(q, -0.10057834096232643, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.564674600270719, 16);
  sqcRYGate(q, 1.376914932481097, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.6320552483415387, 16);
  sqcRYGate(q, 2.0769145640519797, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.5907472307852961, 18);
  sqcRYGate(q, 1.5948093366148797, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.518344274975417, 18);
  sqcRYGate(q, 0.2997698830768309, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.2686126935493638, 1);
  sqcRYGate(q, 2.25597551334256, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.004879338362228106, 1);
  sqcRYGate(q, -3.0909144531091637, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.13512643708246905, 3);
  sqcRYGate(q, 1.789734705583653, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.024904058087139802, 3);
  sqcRYGate(q, 0.018250459797310544, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.235598830020929, 5);
  sqcRYGate(q, -2.1644620314304963, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.25093788473461254, 5);
  sqcRYGate(q, 0.08648958019799788, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1938123016276694, 7);
  sqcRYGate(q, 2.2787190464548877, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.002410872107970809, 7);
  sqcRYGate(q, -3.038125844223805, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.9554869894211748, 9);
  sqcRYGate(q, -2.95649148973031, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.107731053538208, 9);
  sqcRYGate(q, -3.0429688299189523, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.6351353059977813, 11);
  sqcRYGate(q, -1.2986352130889038, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.18205912300816507, 11);
  sqcRYGate(q, 0.011432756844902974, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.348166599792668, 13);
  sqcRYGate(q, 2.1811219039926524, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.0876080458473028, 13);
  sqcRYGate(q, -3.066750692868386, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.7875225898785145, 15);
  sqcRYGate(q, 1.5596067496436588, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 3.131012666096925, 15);
  sqcRYGate(q, 3.0495856329175868, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.5152421301401775, 17);
  sqcRYGate(q, -2.62723455577968, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 3.1286591704663067, 17);
  sqcRYGate(q, 3.1237451278901336, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.7570281215746006, 0);
  sqcRYGate(q, 0.3188542847852763, 1);
  sqcRYGate(q, 2.0800634104403426, 2);
  sqcRYGate(q, -2.8570511380403065, 3);
  sqcRYGate(q, -2.3966706420153603, 4);
  sqcRYGate(q, 2.745235318853865, 5);
  sqcRYGate(q, -2.2374518798174714, 6);
  sqcRYGate(q, 0.6834386035056212, 7);
  sqcRYGate(q, -2.9705439251673127, 8);
  sqcRYGate(q, -0.36066566784000553, 9);
  sqcRYGate(q, -0.2233261749910297, 10);
  sqcRYGate(q, -2.9248938367791895, 11);
  sqcRYGate(q, 2.6718310137110004, 12);
  sqcRYGate(q, 1.4673937233163186, 13);
  sqcRYGate(q, 1.82131325674621, 14);
  sqcRYGate(q, 1.207263439236117, 15);
  sqcRYGate(q, -2.603420799365842, 16);
  sqcRYGate(q, -0.4635759362057863, 17);
  sqcRYGate(q, 1.9486799181765082, 18);
  sqcRYGate(q, 1.6107322729605222, 19);

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
