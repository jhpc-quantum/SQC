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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 0.8454998217972891, 0);
  sqcRZGate(q, -3.054028380823969, 0);
  sqcRYGate(q, 0.8534831248692738, 1);
  sqcRZGate(q, -2.4238535722352355, 1);
  sqcRYGate(q, 1.4648457799840244, 2);
  sqcRZGate(q, -1.8228542172019546, 2);
  sqcRYGate(q, -1.6795786340937147, 3);
  sqcRZGate(q, -1.3252447170830728, 3);
  sqcRYGate(q, 2.9935359558297927, 4);
  sqcRZGate(q, 0.33545048511735476, 4);
  sqcRYGate(q, 0.020865591518879793, 5);
  sqcRZGate(q, -0.3523432129279185, 5);
  sqcRYGate(q, -1.574948363716091, 6);
  sqcRZGate(q, -0.2722132378273609, 6);
  sqcRYGate(q, 1.5624533893925157, 7);
  sqcRZGate(q, -2.458663761260652, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4568191032751878, 0);
  sqcRZGate(q, -0.9239013265409705, 0);
  sqcRYGate(q, 0.45906731402806905, 1);
  sqcRZGate(q, -2.1814518360293236, 1);
  sqcRYGate(q, 1.5714132442609001, 2);
  sqcRZGate(q, 0.7482600522398952, 2);
  sqcRYGate(q, 1.5679749133223115, 3);
  sqcRZGate(q, 0.9967964173225461, 3);
  sqcRYGate(q, -0.15403748387711458, 4);
  sqcRZGate(q, -0.07598595054148548, 4);
  sqcRYGate(q, -0.012100398856940748, 5);
  sqcRZGate(q, -1.263142848455542, 5);
  sqcRYGate(q, 1.3732503377414789, 6);
  sqcRZGate(q, 1.2653944713563574, 6);
  sqcRYGate(q, 0.3116581937577791, 7);
  sqcRZGate(q, -2.6339013349217093, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.7231937579331562, 0);
  sqcRZGate(q, 2.4198357091990848, 0);
  sqcRYGate(q, -0.9224604640235075, 1);
  sqcRZGate(q, -2.557239409103752, 1);
  sqcRYGate(q, 3.1373365414500256, 2);
  sqcRZGate(q, -2.396114102145203, 2);
  sqcRYGate(q, 0.0034038478048730165, 3);
  sqcRZGate(q, 2.147834102281387, 3);
  sqcRYGate(q, 1.8729098931957415, 4);
  sqcRZGate(q, -1.9487772727600245, 4);
  sqcRYGate(q, 1.778513352117253, 5);
  sqcRZGate(q, 2.3917801679853437, 5);
  sqcRYGate(q, -0.773640542450681, 6);
  sqcRZGate(q, -2.3611146338987004, 6);
  sqcRYGate(q, 2.24324244802432, 7);
  sqcRZGate(q, -2.7000968807589634, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.6777164065272938, 0);
  sqcRZGate(q, -1.6444458420780326, 0);
  sqcRYGate(q, 0.9629873418930316, 1);
  sqcRZGate(q, -2.010371462663097, 1);
  sqcRYGate(q, -1.5712767894347905, 2);
  sqcRZGate(q, -0.0005049360277471494, 2);
  sqcRYGate(q, 1.570378986089593, 3);
  sqcRZGate(q, 0.0003874971884458844, 3);
  sqcRYGate(q, -2.7011053343544527, 4);
  sqcRZGate(q, 0.7949713796102956, 4);
  sqcRYGate(q, -2.047676878396773, 5);
  sqcRZGate(q, 2.1384164600097595, 5);
  sqcRYGate(q, -0.14621494317261519, 6);
  sqcRZGate(q, 3.054875079501121, 6);
  sqcRYGate(q, -2.75463804646108, 7);
  sqcRZGate(q, 1.2123205059012525, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.6568719285739175, 0);
  sqcRZGate(q, 0.40478288350075053, 0);
  sqcRYGate(q, -2.3902464861836696, 1);
  sqcRZGate(q, -1.5988602980884394, 1);
  sqcRYGate(q, 1.5705035569073695, 2);
  sqcRZGate(q, 1.569649827598264, 2);
  sqcRYGate(q, -1.5706209728334972, 3);
  sqcRZGate(q, -1.5680543960234004, 3);
  sqcRYGate(q, -0.3107749271885741, 4);
  sqcRZGate(q, 1.5412113185350684, 4);
  sqcRYGate(q, 0.05990930743882838, 5);
  sqcRZGate(q, 2.067140939035135, 5);
  sqcRYGate(q, 2.07219629994308, 6);
  sqcRZGate(q, -0.5359816591122214, 6);
  sqcRYGate(q, -1.09102585988356, 7);
  sqcRZGate(q, -2.6573039735520445, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.249431037133359, 0);
  sqcRZGate(q, -1.894388762685379, 0);
  sqcRYGate(q, 1.8324615630351315, 1);
  sqcRZGate(q, -0.14878134431286974, 1);
  sqcRYGate(q, -1.5574675782992984, 2);
  sqcRZGate(q, 2.895355461485063, 2);
  sqcRYGate(q, -1.5843872859051382, 3);
  sqcRZGate(q, -0.9700249187931635, 3);
  sqcRYGate(q, -2.0894618117099037, 4);
  sqcRZGate(q, 0.6367259037783152, 4);
  sqcRYGate(q, -1.5465637387698732, 5);
  sqcRZGate(q, 3.1259796163804077, 5);
  sqcRYGate(q, -0.1003051168668625, 6);
  sqcRZGate(q, -0.422288696653139, 6);
  sqcRYGate(q, 0.3083916124964716, 7);
  sqcRZGate(q, -2.65386618256202, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.4353026609383868, 0);
  sqcRZGate(q, -0.2815085710826739, 0);
  sqcRYGate(q, 0.6521957569138132, 1);
  sqcRZGate(q, -2.827734581403389, 1);
  sqcRYGate(q, -0.00025481410832206564, 2);
  sqcRZGate(q, -2.893883177633457, 2);
  sqcRYGate(q, 2.6108379557195455e-05, 3);
  sqcRZGate(q, -2.17238849410016, 3);
  sqcRYGate(q, 0.36807176479404125, 4);
  sqcRZGate(q, -0.3522834939389581, 4);
  sqcRYGate(q, 0.4699799723376472, 5);
  sqcRZGate(q, -1.9362141363773215, 5);
  sqcRYGate(q, 0.7796950290485755, 6);
  sqcRZGate(q, -1.8133168821933543, 6);
  sqcRYGate(q, -2.2958557390475614, 7);
  sqcRZGate(q, 0.5924981135645377, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.3058449877475917, 0);
  sqcRZGate(q, -2.34601425610228, 0);
  sqcRYGate(q, 1.2743360634064604, 1);
  sqcRZGate(q, -2.2935745913911814, 1);
  sqcRYGate(q, -1.5589143390122335, 2);
  sqcRZGate(q, -1.8106419055594172, 2);
  sqcRYGate(q, 1.5734786225137105, 3);
  sqcRZGate(q, -0.8787991319105783, 3);
  sqcRYGate(q, -2.559808550159831, 4);
  sqcRZGate(q, 0.07578894092121621, 4);
  sqcRYGate(q, -2.119816860864913, 5);
  sqcRZGate(q, -1.751374486330783, 5);
  sqcRYGate(q, -2.8229762346602163, 6);
  sqcRZGate(q, -1.226678008918113, 6);
  sqcRYGate(q, -0.009483220423185834, 7);
  sqcRZGate(q, -0.9399933785893566, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.23905542272539915, 0);
  sqcRZGate(q, 2.842375529800301, 0);
  sqcRYGate(q, -0.15675791816299306, 1);
  sqcRZGate(q, -2.92218220185328, 1);
  sqcRYGate(q, -2.4430180709308105, 2);
  sqcRZGate(q, 1.2176197956071944, 2);
  sqcRYGate(q, -2.73086957334488, 3);
  sqcRZGate(q, 2.2892833652997506, 3);
  sqcRYGate(q, -2.0030797396507642, 4);
  sqcRZGate(q, -0.21587189587543068, 4);
  sqcRYGate(q, 1.0241949499758176, 5);
  sqcRZGate(q, 0.785250116781974, 5);
  sqcRYGate(q, 2.2084532745843415, 6);
  sqcRZGate(q, -2.934472257561969, 6);
  sqcRYGate(q, -2.188519263775592, 7);
  sqcRZGate(q, 2.7854742852395593, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1305869943609608, 0);
  sqcRZGate(q, -2.907061992526507, 0);
  sqcRYGate(q, -3.1341795356618816, 1);
  sqcRZGate(q, -2.219691017351133, 1);
  sqcRYGate(q, -1.6167575399220162, 2);
  sqcRZGate(q, 1.5891247966980702, 2);
  sqcRYGate(q, -1.6023778642331852, 3);
  sqcRZGate(q, -1.5645528356369502, 3);
  sqcRYGate(q, 2.585002969403765, 4);
  sqcRZGate(q, -2.3071815246635623, 4);
  sqcRYGate(q, -3.0309114951183855, 5);
  sqcRZGate(q, -1.6816846822474147, 5);
  sqcRYGate(q, -2.2781306518282136, 6);
  sqcRZGate(q, -0.5946091497771753, 6);
  sqcRYGate(q, -2.299930180792218, 7);
  sqcRZGate(q, -2.6123890767327955, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.0022896413690904898, 0);
  sqcRZGate(q, -1.8256171671753736, 0);
  sqcRYGate(q, 0.0014588281311098683, 1);
  sqcRZGate(q, 2.9246522548322478, 1);
  sqcRYGate(q, -2.6818471045613577, 2);
  sqcRZGate(q, 1.6822980787593647, 2);
  sqcRYGate(q, 2.8301136669565095, 3);
  sqcRZGate(q, 0.3489355105868004, 3);
  sqcRYGate(q, 1.91461488888483, 4);
  sqcRZGate(q, -0.3903229440519098, 4);
  sqcRYGate(q, 2.284544706108748, 5);
  sqcRZGate(q, -1.0531381893608045, 5);
  sqcRYGate(q, -2.097133337341943, 6);
  sqcRZGate(q, -0.6163532608696728, 6);
  sqcRYGate(q, 1.0888976422377519, 7);
  sqcRZGate(q, 1.1927161406615123, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.03906238095325496, 0);
  sqcRZGate(q, -0.7754847629010202, 0);
  sqcRYGate(q, 3.1203685976394744, 1);
  sqcRZGate(q, 1.9587133586922967, 1);
  sqcRYGate(q, -1.2905587292655427, 2);
  sqcRZGate(q, 1.4539585753315905, 2);
  sqcRYGate(q, 3.132793287957387, 3);
  sqcRZGate(q, 1.867461062154245, 3);
  sqcRYGate(q, -0.4863289463335896, 4);
  sqcRZGate(q, 1.2040912809533217, 4);
  sqcRYGate(q, 2.4418558408552316, 5);
  sqcRZGate(q, 2.3009220591814805, 5);
  sqcRYGate(q, 2.1578598673152083, 6);
  sqcRZGate(q, -2.6916516592679907, 6);
  sqcRYGate(q, 2.062438233306919, 7);
  sqcRZGate(q, 0.4074560503409454, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1389198190978487, 0);
  sqcRZGate(q, -2.2627104750622804, 0);
  sqcRYGate(q, 3.141089405462963, 1);
  sqcRZGate(q, 1.7958906707969797, 1);
  sqcRYGate(q, -1.5567697283273594, 2);
  sqcRZGate(q, 0.27409663459082795, 2);
  sqcRYGate(q, -1.561512460648036, 3);
  sqcRZGate(q, -1.5375855386149824, 3);
  sqcRYGate(q, -0.0012025960937656751, 4);
  sqcRZGate(q, -0.6224461123439335, 4);
  sqcRYGate(q, -3.1414597355839886, 5);
  sqcRZGate(q, -0.19139684216598776, 5);
  sqcRYGate(q, 1.6602984597843895, 6);
  sqcRZGate(q, 1.067860438223307, 6);
  sqcRYGate(q, 1.5451143780438628, 7);
  sqcRZGate(q, -2.757934604319689, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.15434115727176678, 0);
  sqcRZGate(q, 0.0007107833501081018, 0);
  sqcRYGate(q, 0.08823122522516823, 1);
  sqcRZGate(q, 0.490438156633563, 1);
  sqcRYGate(q, -3.135528627809264, 2);
  sqcRZGate(q, 1.60802584310207, 2);
  sqcRYGate(q, -1.869996427224798, 3);
  sqcRZGate(q, 0.2459835428757655, 3);
  sqcRYGate(q, 3.1399655030339524, 4);
  sqcRZGate(q, -0.9221587368209496, 4);
  sqcRYGate(q, 3.141364622079119, 5);
  sqcRZGate(q, 2.454832831163572, 5);
  sqcRYGate(q, 1.7997364803614202, 6);
  sqcRZGate(q, -1.3225935190031803, 6);
  sqcRYGate(q, 0.7941201846955543, 7);
  sqcRZGate(q, 2.527626970388056, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.548838159515347, 0);
  sqcRZGate(q, 0.015782017665602055, 0);
  sqcRYGate(q, -1.5687374455983962, 1);
  sqcRZGate(q, 3.130169781668069, 1);
  sqcRYGate(q, -2.753349083457744, 2);
  sqcRZGate(q, 0.9759632575126852, 2);
  sqcRYGate(q, -0.018247590834946464, 3);
  sqcRZGate(q, -0.10744047344671577, 3);
  sqcRYGate(q, 2.1209407020457878, 4);
  sqcRZGate(q, 0.6040910893007345, 4);
  sqcRYGate(q, 0.7001123754717155, 5);
  sqcRZGate(q, -1.953733375632333, 5);
  sqcRYGate(q, -2.2304082501347238, 6);
  sqcRZGate(q, 1.9898727838186518, 6);
  sqcRYGate(q, 2.5818542759316387, 7);
  sqcRZGate(q, -0.6943066719538968, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5897731327068627, 0);
  sqcRZGate(q, -2.82820609422505, 0);
  sqcRYGate(q, 1.550912868153127, 1);
  sqcRZGate(q, 1.0943559956670335, 1);
  sqcRYGate(q, 3.141232237551348, 2);
  sqcRZGate(q, -0.40643265157408404, 2);
  sqcRYGate(q, -3.1407159139804444, 3);
  sqcRZGate(q, -0.22699884817802207, 3);
  sqcRYGate(q, 0.0030909902217550887, 4);
  sqcRZGate(q, -2.2613945269779006, 4);
  sqcRYGate(q, 0.004718577068548058, 5);
  sqcRZGate(q, -0.08978104586505929, 5);
  sqcRYGate(q, -1.1080161073267467, 6);
  sqcRZGate(q, -1.7521062967620553, 6);
  sqcRYGate(q, 1.2388559152900949, 7);
  sqcRZGate(q, 2.635611734215242, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.0328119117095973, 0);
  sqcRZGate(q, 1.1758962147934724, 0);
  sqcRYGate(q, -0.800694973863053, 1);
  sqcRZGate(q, 0.4129363513207771, 1);
  sqcRYGate(q, -1.7002832270805133, 2);
  sqcRZGate(q, 2.775964966858361, 2);
  sqcRYGate(q, 2.2515677834323524, 3);
  sqcRZGate(q, 0.23855748210481698, 3);
  sqcRYGate(q, 3.0748366978841535, 4);
  sqcRZGate(q, -1.3002457728175894, 4);
  sqcRYGate(q, -1.9435789924043105, 5);
  sqcRZGate(q, -1.2659890820429816, 5);
  sqcRYGate(q, -1.779027008840827, 6);
  sqcRZGate(q, 0.8668000965031029, 6);
  sqcRYGate(q, -0.491644631088431, 7);
  sqcRZGate(q, 0.05737061036845864, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.02951462277423111, 0);
  sqcRZGate(q, -2.5915884262167688, 0);
  sqcRYGate(q, 0.0018043371925777762, 1);
  sqcRZGate(q, 0.12005738373524809, 1);
  sqcRYGate(q, 0.00021419326508809178, 2);
  sqcRZGate(q, -2.3665342488545478, 2);
  sqcRYGate(q, 1.105585881155946e-05, 3);
  sqcRZGate(q, -0.2700960825575682, 3);
  sqcRYGate(q, 0.027442454210545364, 4);
  sqcRZGate(q, -3.094642585734321, 4);
  sqcRYGate(q, -3.1346056502477113, 5);
  sqcRZGate(q, 2.01713782349471, 5);
  sqcRYGate(q, -1.469390143118396, 6);
  sqcRZGate(q, -2.0897380772335725, 6);
  sqcRYGate(q, -0.06856886197960037, 7);
  sqcRZGate(q, -0.12368423133877005, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.09528017058993243, 0);
  sqcRZGate(q, -2.0196557975773883, 0);
  sqcRYGate(q, 1.7223845837240335, 1);
  sqcRZGate(q, 1.8648719889014131, 1);
  sqcRYGate(q, 2.8700833940012807, 2);
  sqcRZGate(q, -0.8412097613962723, 2);
  sqcRYGate(q, 0.8572561521529432, 3);
  sqcRZGate(q, 0.03731503334993569, 3);
  sqcRYGate(q, -2.8750483903637654, 4);
  sqcRZGate(q, -3.1219311097423668, 4);
  sqcRYGate(q, -2.925890403692962, 5);
  sqcRZGate(q, -1.3779249071416089, 5);
  sqcRYGate(q, 3.0872478607313814, 6);
  sqcRZGate(q, -0.5033487397716554, 6);
  sqcRYGate(q, -1.5405833989401394, 7);
  sqcRZGate(q, 0.12449794431677219, 7);

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
