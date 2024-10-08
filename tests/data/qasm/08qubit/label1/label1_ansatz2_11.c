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

  sqcRYGate(q, -0.0301472121652564, 0);
  sqcRZGate(q, -3.136201564839187, 0);
  sqcRYGate(q, 0.5578971416066788, 1);
  sqcRZGate(q, 1.578313422531889, 1);
  sqcRYGate(q, 0.026111534012218662, 2);
  sqcRZGate(q, 3.033689436667886, 2);
  sqcRYGate(q, 0.014864354332180696, 3);
  sqcRZGate(q, -1.0248493902095759, 3);
  sqcRYGate(q, 0.9399381295372873, 4);
  sqcRZGate(q, 2.029461718362075, 4);
  sqcRYGate(q, 2.1685099141347104, 5);
  sqcRZGate(q, 1.0500978623005535, 5);
  sqcRYGate(q, 0.3996867281472243, 6);
  sqcRZGate(q, -1.433262432339653, 6);
  sqcRYGate(q, 2.176793998546678, 7);
  sqcRZGate(q, 1.8944105913070226, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.5891405810549877, 0);
  sqcRZGate(q, 0.012743612681841002, 0);
  sqcRYGate(q, 2.93568332727019, 1);
  sqcRZGate(q, -2.946748879457307, 1);
  sqcRYGate(q, 1.674676719720325, 2);
  sqcRZGate(q, 1.3484837543777468, 2);
  sqcRYGate(q, -1.4980277634547061, 3);
  sqcRZGate(q, -0.4360227709937075, 3);
  sqcRYGate(q, 1.3919938067248439, 4);
  sqcRZGate(q, 1.5802403566874041, 4);
  sqcRYGate(q, 0.1301664458861754, 5);
  sqcRZGate(q, 1.0269690308085226, 5);
  sqcRYGate(q, -0.5554921276396332, 6);
  sqcRZGate(q, -1.9147677530390654, 6);
  sqcRYGate(q, 2.5433104153392385, 7);
  sqcRZGate(q, -0.7304404329448576, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.809156439387953, 0);
  sqcRZGate(q, -1.0132050474285816, 0);
  sqcRYGate(q, -1.8787541181928447, 1);
  sqcRZGate(q, 1.0434178621245649, 1);
  sqcRYGate(q, 0.031678000910342057, 2);
  sqcRZGate(q, 3.027933697671159, 2);
  sqcRYGate(q, 3.0291491921466576, 3);
  sqcRZGate(q, -2.089038144317401, 3);
  sqcRYGate(q, -0.13852748727890773, 4);
  sqcRZGate(q, -2.219022926804012, 4);
  sqcRYGate(q, 2.258372188752163, 5);
  sqcRZGate(q, 2.227622518324444, 5);
  sqcRYGate(q, -0.857947744786757, 6);
  sqcRZGate(q, -1.1032049732369487, 6);
  sqcRYGate(q, -1.76394663406864, 7);
  sqcRZGate(q, -0.9166722277499517, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 3.0920391937473157, 0);
  sqcRZGate(q, -1.5163455226678346, 0);
  sqcRYGate(q, -1.1435192618005046, 1);
  sqcRZGate(q, -1.4882951324556553, 1);
  sqcRYGate(q, 2.992249396862289, 2);
  sqcRZGate(q, 0.6107511395485679, 2);
  sqcRYGate(q, 0.7862008131681022, 3);
  sqcRZGate(q, -0.7288254778289508, 3);
  sqcRYGate(q, -0.25395803971612935, 4);
  sqcRZGate(q, -1.1237038131229793, 4);
  sqcRYGate(q, -2.996552322082261, 5);
  sqcRZGate(q, -0.1395033257540046, 5);
  sqcRYGate(q, 0.5460666915253649, 6);
  sqcRZGate(q, 1.2317358185135963, 6);
  sqcRYGate(q, 0.7261676987539172, 7);
  sqcRZGate(q, -0.7651756130479076, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -3.1323481225103413, 0);
  sqcRZGate(q, -2.114305785659445, 0);
  sqcRYGate(q, -0.06574642302205778, 1);
  sqcRZGate(q, 1.804286219480103, 1);
  sqcRYGate(q, -3.105039347028895, 2);
  sqcRZGate(q, -3.1176201766198957, 2);
  sqcRYGate(q, 0.034751367854174556, 3);
  sqcRZGate(q, -2.415886062453778, 3);
  sqcRYGate(q, 0.4482280475221469, 4);
  sqcRZGate(q, -1.313902978370804, 4);
  sqcRYGate(q, -1.2667748473762208, 5);
  sqcRZGate(q, -3.1195903405056793, 5);
  sqcRYGate(q, -1.570273572114841, 6);
  sqcRZGate(q, -1.1338378030016205, 6);
  sqcRYGate(q, -1.460441078950772, 7);
  sqcRZGate(q, -3.074088118830044, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.3229913963568718, 0);
  sqcRZGate(q, -1.2658177566566244, 0);
  sqcRYGate(q, 1.817945106208484, 1);
  sqcRZGate(q, -1.0429159166433226, 1);
  sqcRYGate(q, 3.0947360674117688, 2);
  sqcRZGate(q, 0.6660685112787571, 2);
  sqcRYGate(q, -0.3490228234943606, 3);
  sqcRZGate(q, -1.5207720857529319, 3);
  sqcRYGate(q, -0.10189550030421124, 4);
  sqcRZGate(q, 2.300277352885375, 4);
  sqcRYGate(q, 0.22133088226309905, 5);
  sqcRZGate(q, 2.9771585793206228, 5);
  sqcRYGate(q, -1.9255837449300304, 6);
  sqcRZGate(q, -2.123085072253335, 6);
  sqcRYGate(q, 2.775303565292275, 7);
  sqcRZGate(q, 2.549147661856879, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.10746674968607373, 0);
  sqcRZGate(q, -1.8138172412721396, 0);
  sqcRYGate(q, -2.8508156421649513, 1);
  sqcRZGate(q, 2.2393186320989598, 1);
  sqcRYGate(q, -1.874900759753293, 2);
  sqcRZGate(q, -0.7998869877850155, 2);
  sqcRYGate(q, -1.126754343798705, 3);
  sqcRZGate(q, -1.1330871030337861, 3);
  sqcRYGate(q, 0.12827701180833626, 4);
  sqcRZGate(q, 1.857731113214502, 4);
  sqcRYGate(q, -0.7254374443886678, 5);
  sqcRZGate(q, 2.865935461202466, 5);
  sqcRYGate(q, 2.2593564407353064, 6);
  sqcRZGate(q, 3.068267418961523, 6);
  sqcRYGate(q, -0.7903668740311707, 7);
  sqcRZGate(q, -2.9593238502702275, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.1210417861395627, 0);
  sqcRZGate(q, -1.2468192612588065, 0);
  sqcRYGate(q, 1.477984764110361, 1);
  sqcRZGate(q, -1.6293256501967168, 1);
  sqcRYGate(q, -2.948627302896094, 2);
  sqcRZGate(q, 2.306278220610542, 2);
  sqcRYGate(q, 2.981410022451047, 3);
  sqcRZGate(q, -1.1234184706225594, 3);
  sqcRYGate(q, 1.9697142720550362, 4);
  sqcRZGate(q, 0.4711848986392728, 4);
  sqcRYGate(q, 1.0220022719515398, 5);
  sqcRZGate(q, -0.5607113056568753, 5);
  sqcRYGate(q, 2.7035794479306023, 6);
  sqcRZGate(q, -2.3844986436138598, 6);
  sqcRYGate(q, 0.7941424977117651, 7);
  sqcRZGate(q, -1.180610855112584, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 3.1167147018690016, 0);
  sqcRZGate(q, -1.2406962151504999, 0);
  sqcRYGate(q, 1.3161878529645439, 1);
  sqcRZGate(q, 0.5472126909440347, 1);
  sqcRYGate(q, -2.097957802797134, 2);
  sqcRZGate(q, -0.1396559951850076, 2);
  sqcRYGate(q, -1.8442091684016289, 3);
  sqcRZGate(q, -1.154800025536618, 3);
  sqcRYGate(q, 0.233749859230697, 4);
  sqcRZGate(q, -0.8636684756735642, 4);
  sqcRYGate(q, -0.528651387539778, 5);
  sqcRZGate(q, -1.7561739948501618, 5);
  sqcRYGate(q, 2.4318745609591366, 6);
  sqcRZGate(q, -3.006247346290109, 6);
  sqcRYGate(q, -2.409712066284523, 7);
  sqcRZGate(q, 2.470686097869951, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.7304997772428334, 0);
  sqcRZGate(q, -1.5762555806114653, 0);
  sqcRYGate(q, -2.2084429931883625, 1);
  sqcRZGate(q, 0.5166768139502933, 1);
  sqcRYGate(q, -0.1571747919494495, 2);
  sqcRZGate(q, -2.9902012809572205, 2);
  sqcRYGate(q, 2.781419391793016, 3);
  sqcRZGate(q, -1.1969722660278208, 3);
  sqcRYGate(q, 2.7776290055817747, 4);
  sqcRZGate(q, 1.7813409934716182, 4);
  sqcRYGate(q, -0.9305064884655236, 5);
  sqcRZGate(q, -0.03563888805558595, 5);
  sqcRYGate(q, -0.3930911390247794, 6);
  sqcRZGate(q, -1.5218803605902456, 6);
  sqcRYGate(q, 1.4725709859246343, 7);
  sqcRZGate(q, -1.6093315060183022, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.8945444920346012, 0);
  sqcRZGate(q, 2.0629802960076864, 0);
  sqcRYGate(q, -1.2446033116498423, 1);
  sqcRZGate(q, 0.5426434672739466, 1);
  sqcRYGate(q, -1.2869705048447182, 2);
  sqcRZGate(q, 1.7119576299842967, 2);
  sqcRYGate(q, -1.5705665426925242, 3);
  sqcRZGate(q, -1.7486268257217823, 3);
  sqcRYGate(q, -1.5707178993091406, 4);
  sqcRZGate(q, 0.648203982521552, 4);
  sqcRYGate(q, 2.52146810166651, 5);
  sqcRZGate(q, -1.8960500347628875, 5);
  sqcRYGate(q, -0.5303850171601859, 6);
  sqcRZGate(q, 1.5009056133262577, 6);
  sqcRYGate(q, -0.3819589413719271, 7);
  sqcRZGate(q, 1.1128389983818934, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.9072097439190716, 0);
  sqcRZGate(q, 0.5029794075722149, 0);
  sqcRYGate(q, 0.7629462807760499, 1);
  sqcRZGate(q, 0.15494658608271195, 1);
  sqcRYGate(q, 0.7424128637085722, 2);
  sqcRZGate(q, 3.043106003561832, 2);
  sqcRYGate(q, -2.0297151553784394, 3);
  sqcRZGate(q, -3.0869587499195967, 3);
  sqcRYGate(q, 2.137609803880759, 4);
  sqcRZGate(q, 2.930574911862001, 4);
  sqcRYGate(q, -1.5510659640820255, 5);
  sqcRZGate(q, 1.8782165214773858, 5);
  sqcRYGate(q, -1.3174122483189974, 6);
  sqcRZGate(q, 1.8065708592055156, 6);
  sqcRYGate(q, -2.830656229957271, 7);
  sqcRZGate(q, -2.3222861730331306, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.5711003361179383, 0);
  sqcRZGate(q, -2.3900270446241394, 0);
  sqcRYGate(q, 0.6042915247646307, 1);
  sqcRZGate(q, 1.8649464007970806, 1);
  sqcRYGate(q, 1.5066576708519088, 2);
  sqcRZGate(q, 2.157379681489318, 2);
  sqcRYGate(q, 0.25340620950599946, 3);
  sqcRZGate(q, -0.0665285013077455, 3);
  sqcRYGate(q, 2.4181133248295374, 4);
  sqcRZGate(q, -2.776354668943072, 4);
  sqcRYGate(q, -2.7573981926475857, 5);
  sqcRZGate(q, 2.504312129164899, 5);
  sqcRYGate(q, 2.964186176290027, 6);
  sqcRZGate(q, -1.6050170490269382, 6);
  sqcRYGate(q, 0.020765536689857162, 7);
  sqcRZGate(q, -0.90961133126393, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.6202046073176088, 0);
  sqcRZGate(q, -2.8846150384301725, 0);
  sqcRYGate(q, -1.513474999631225, 1);
  sqcRZGate(q, -1.573969621311247, 1);
  sqcRYGate(q, 0.8880430476208874, 2);
  sqcRZGate(q, 2.80846942897951, 2);
  sqcRYGate(q, 1.7200094933357917, 3);
  sqcRZGate(q, -0.20110282089850048, 3);
  sqcRYGate(q, 0.11547145638515222, 4);
  sqcRZGate(q, 0.37623905765551857, 4);
  sqcRYGate(q, -3.087850501466524, 5);
  sqcRZGate(q, 0.5810606816879514, 5);
  sqcRYGate(q, -3.0794663479282023, 6);
  sqcRZGate(q, 0.9559987806803384, 6);
  sqcRYGate(q, 0.028612681578939814, 7);
  sqcRZGate(q, 0.6182268701606448, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.6119596302193289, 0);
  sqcRZGate(q, -0.22346040560266459, 0);
  sqcRYGate(q, 2.8134895798672157, 1);
  sqcRZGate(q, 1.3166086889069817, 1);
  sqcRYGate(q, -1.4835874459561254, 2);
  sqcRZGate(q, -0.2337505306170016, 2);
  sqcRYGate(q, -3.0990748850130876, 3);
  sqcRZGate(q, 2.5541696067331414, 3);
  sqcRYGate(q, -3.0132237296758486, 4);
  sqcRZGate(q, -2.6599573574513586, 4);
  sqcRYGate(q, 0.05727448658503408, 5);
  sqcRZGate(q, -2.1891511255900244, 5);
  sqcRYGate(q, 3.121876664487275, 6);
  sqcRZGate(q, 2.2332119909685693, 6);
  sqcRYGate(q, -0.012497863081092573, 7);
  sqcRZGate(q, 2.843080160343204, 7);

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
