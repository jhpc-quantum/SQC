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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 3.0738723964549646, 0);
  sqcRZGate(q, 1.521427314070019, 0);
  sqcRYGate(q, -0.0004906208952614275, 1);
  sqcRZGate(q, -1.4784853192132943, 1);
  sqcRYGate(q, 1.5708738932544533, 2);
  sqcRZGate(q, -0.5772557098463635, 2);
  sqcRYGate(q, 1.561214198841614, 3);
  sqcRZGate(q, -0.03117998237001443, 3);
  sqcRYGate(q, -1.6231992243496771, 4);
  sqcRZGate(q, -1.5813720766294759, 4);
  sqcRYGate(q, -0.034384784945664604, 5);
  sqcRZGate(q, 1.5730883235223327, 5);
  sqcRYGate(q, 3.141573238203064, 6);
  sqcRZGate(q, 1.19223417155089, 6);
  sqcRYGate(q, -3.1414234944493686, 7);
  sqcRZGate(q, -0.5677167561130592, 7);
  sqcRYGate(q, 3.0621938217496267, 8);
  sqcRZGate(q, 2.9195574953415204, 8);
  sqcRYGate(q, 0.04323370394663062, 9);
  sqcRZGate(q, -1.5698058536719395, 9);
  sqcRYGate(q, 1.5707954851018033, 10);
  sqcRZGate(q, -1.5317152177190636, 10);
  sqcRYGate(q, 1.5707973180019168, 11);
  sqcRZGate(q, -0.010167162619135086, 11);
  sqcRYGate(q, -1.5707947572972358, 12);
  sqcRZGate(q, 0.0005510502515519988, 12);
  sqcRYGate(q, 1.5707954306018133, 13);
  sqcRZGate(q, 1.574689186047502, 13);
  sqcRYGate(q, 3.117607293551276, 14);
  sqcRZGate(q, -2.853109061888803, 14);
  sqcRYGate(q, -2.7092589920940378, 15);
  sqcRZGate(q, -1.5686870203342191, 15);
  sqcRYGate(q, -3.824709182254082e-06, 16);
  sqcRZGate(q, -1.0866611255156577, 16);
  sqcRYGate(q, -1.571534737948836, 17);
  sqcRZGate(q, -0.000531122589273016, 17);
  sqcRYGate(q, 3.139980830529613, 18);
  sqcRZGate(q, 1.6196215028223027, 18);
  sqcRYGate(q, -3.1414829216951246, 19);
  sqcRZGate(q, 0.9802660858689661, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.5837998425594373, 0);
  sqcRZGate(q, 0.24652539550314412, 0);
  sqcRYGate(q, 3.0920566789228574, 1);
  sqcRZGate(q, -0.48036989770948146, 1);
  sqcRYGate(q, 2.1702053984498506, 2);
  sqcRZGate(q, 0.41045757843576053, 2);
  sqcRYGate(q, 1.498324368878439, 3);
  sqcRZGate(q, 3.060935246733923, 3);
  sqcRYGate(q, -1.5863248769572083, 4);
  sqcRZGate(q, 0.6778040115702696, 4);
  sqcRYGate(q, 1.570851323874055, 5);
  sqcRZGate(q, -1.5587798688073873, 5);
  sqcRYGate(q, -3.1415919524493012, 6);
  sqcRZGate(q, -2.089090903201404, 6);
  sqcRYGate(q, -3.1415703659631653, 7);
  sqcRZGate(q, -2.2599418640650053, 7);
  sqcRYGate(q, -3.1409842097790914, 8);
  sqcRZGate(q, 1.3484879976308113, 8);
  sqcRYGate(q, 1.570816360402163, 9);
  sqcRZGate(q, 0.8872831272203354, 9);
  sqcRYGate(q, 1.445236129929957, 10);
  sqcRZGate(q, -0.30163678808851097, 10);
  sqcRYGate(q, 2.864081687044787, 11);
  sqcRZGate(q, -3.0971579845090074, 11);
  sqcRYGate(q, 2.6828936046048346, 12);
  sqcRZGate(q, 3.1267992653981236, 12);
  sqcRYGate(q, -1.5619142983582686, 13);
  sqcRZGate(q, 2.032642736622134, 13);
  sqcRYGate(q, 3.1411149046491453, 14);
  sqcRZGate(q, -2.8541357222022605, 14);
  sqcRYGate(q, -1.5707801649030946, 15);
  sqcRZGate(q, -0.0019556062736059447, 15);
  sqcRYGate(q, -1.5707961196157039, 16);
  sqcRZGate(q, -2.0774894539577327, 16);
  sqcRYGate(q, -1.5693848768449863, 17);
  sqcRZGate(q, -0.0020657545699215023, 17);
  sqcRYGate(q, -3.141090534744094, 18);
  sqcRZGate(q, -1.7376843354385851, 18);
  sqcRYGate(q, 1.5707944772024318, 19);
  sqcRZGate(q, -1.568774640042905, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.5645384852653557, 0);
  sqcRZGate(q, 0.01538325638069627, 0);
  sqcRYGate(q, -1.5755012105750028, 1);
  sqcRZGate(q, -1.464656266391862, 1);
  sqcRYGate(q, -0.0009909312165374828, 2);
  sqcRZGate(q, -0.8293816858765339, 2);
  sqcRYGate(q, -0.02129299243159273, 3);
  sqcRZGate(q, 3.0074442342081493, 3);
  sqcRYGate(q, 0.023148577562763784, 4);
  sqcRZGate(q, -0.022342383088174187, 4);
  sqcRYGate(q, 1.6789785865383335, 5);
  sqcRZGate(q, -1.5709413094964622, 5);
  sqcRYGate(q, 1.5708117348177373, 6);
  sqcRZGate(q, 0.3018579562936123, 6);
  sqcRYGate(q, -2.056423917764961, 7);
  sqcRZGate(q, -0.09402649164720081, 7);
  sqcRYGate(q, 1.5753396078280737, 8);
  sqcRZGate(q, -0.004797955199964238, 8);
  sqcRYGate(q, 4.697193588394453e-06, 9);
  sqcRZGate(q, 0.6809961997425299, 9);
  sqcRYGate(q, 3.1241525704360695, 10);
  sqcRZGate(q, -1.5941729605058983, 10);
  sqcRYGate(q, -3.1213330068560845, 11);
  sqcRZGate(q, -3.0886576545432836, 11);
  sqcRYGate(q, 1.2498465146231714, 12);
  sqcRZGate(q, 2.782449700132638, 12);
  sqcRYGate(q, 1.2090886006559516, 13);
  sqcRZGate(q, 1.5686005540196308, 13);
  sqcRYGate(q, 1.5707908035315423, 14);
  sqcRZGate(q, -1.4461147365940448, 14);
  sqcRYGate(q, 1.570803844722973, 15);
  sqcRZGate(q, 2.8733348074919403, 15);
  sqcRYGate(q, -3.798616266070809e-05, 16);
  sqcRZGate(q, 2.979251386553537, 16);
  sqcRYGate(q, 1.5707988041902277, 17);
  sqcRZGate(q, -3.1413906120139856, 17);
  sqcRYGate(q, 3.0862250569187393, 18);
  sqcRZGate(q, -1.590835773734459, 18);
  sqcRYGate(q, 3.103901038848311, 19);
  sqcRZGate(q, 1.5799029905092519, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.420826580988626, 0);
  sqcRZGate(q, -1.546941801341167, 0);
  sqcRYGate(q, 3.0962741653835044, 1);
  sqcRZGate(q, -0.05984123700947119, 1);
  sqcRYGate(q, -0.42687049497427854, 2);
  sqcRZGate(q, 2.881774801628833, 2);
  sqcRYGate(q, -0.7505593988398843, 3);
  sqcRZGate(q, -0.6910396287173296, 3);
  sqcRYGate(q, 1.645128204656141, 4);
  sqcRZGate(q, -1.5885514089791868, 4);
  sqcRYGate(q, -1.5933130379982074, 5);
  sqcRZGate(q, 1.5254173914682247, 5);
  sqcRYGate(q, -1.1932682719303356e-05, 6);
  sqcRZGate(q, -0.296135648690706, 6);
  sqcRYGate(q, 0.00010614657090179946, 7);
  sqcRZGate(q, 1.6656104096165951, 7);
  sqcRYGate(q, 0.020576023566344668, 8);
  sqcRZGate(q, 0.004800940357697847, 8);
  sqcRYGate(q, 3.134322971778171, 9);
  sqcRZGate(q, -1.2316201664341175, 9);
  sqcRYGate(q, 1.0066477062827879, 10);
  sqcRZGate(q, 0.8905469622478314, 10);
  sqcRYGate(q, 1.6836123659723976, 11);
  sqcRZGate(q, 2.2823656766388964, 11);
  sqcRYGate(q, 0.0013505251011823557, 12);
  sqcRZGate(q, 1.9370565033738556, 12);
  sqcRYGate(q, 1.5668224722862005, 13);
  sqcRZGate(q, -3.1415584852247753, 13);
  sqcRYGate(q, 1.9298767799824645e-05, 14);
  sqcRZGate(q, 1.4461146545207846, 14);
  sqcRYGate(q, -1.6912725140372231e-06, 15);
  sqcRZGate(q, -2.873361832920706, 15);
  sqcRYGate(q, 3.1415408301910275, 16);
  sqcRZGate(q, 2.606652870499208, 16);
  sqcRYGate(q, 0.07971047780757257, 17);
  sqcRZGate(q, 0.18254179906936943, 17);
  sqcRYGate(q, 1.539757672008622, 18);
  sqcRZGate(q, 1.5725365551991588, 18);
  sqcRYGate(q, 0.022903042498521903, 19);
  sqcRZGate(q, -1.577907124532513, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.186311340164947, 0);
  sqcRZGate(q, -1.571970561325358, 0);
  sqcRYGate(q, 3.137861791640763, 1);
  sqcRZGate(q, -0.059973543945556436, 1);
  sqcRYGate(q, -0.3319681773625172, 2);
  sqcRZGate(q, -2.95053218969052, 2);
  sqcRYGate(q, 3.0599314851701007, 3);
  sqcRZGate(q, -2.4470015143154673, 3);
  sqcRYGate(q, 0.08412699669499513, 4);
  sqcRZGate(q, 1.57868647564088, 4);
  sqcRYGate(q, 3.133042196636909, 5);
  sqcRZGate(q, 0.032868892442730946, 5);
  sqcRYGate(q, -1.570944860641397, 6);
  sqcRZGate(q, 1.2968548704990734, 6);
  sqcRYGate(q, 1.5701888026370865, 7);
  sqcRZGate(q, -1.9030629404198434, 7);
  sqcRYGate(q, 1.5805027156093268, 8);
  sqcRZGate(q, 2.6789302159698516, 8);
  sqcRYGate(q, -4.162165969804823e-05, 9);
  sqcRZGate(q, -1.9132104180317793, 9);
  sqcRYGate(q, 3.1414002838663095, 10);
  sqcRZGate(q, -1.5084082665141287, 10);
  sqcRYGate(q, 3.1415223990072105, 11);
  sqcRZGate(q, 2.289628283667018, 11);
  sqcRYGate(q, -3.0183513615389437, 12);
  sqcRZGate(q, -1.5681611674056564, 12);
  sqcRYGate(q, -1.5742773537612953, 13);
  sqcRZGate(q, -1.5714570233441405, 13);
  sqcRYGate(q, -1.5707814422073945, 14);
  sqcRZGate(q, 0.5663363971575847, 14);
  sqcRYGate(q, 1.5709960921749655, 15);
  sqcRZGate(q, 0.33871196997137876, 15);
  sqcRYGate(q, 1.5708724303428356, 16);
  sqcRZGate(q, 1.5704923304266627, 16);
  sqcRYGate(q, -3.141088682624611, 17);
  sqcRZGate(q, 2.225663482208897, 17);
  sqcRYGate(q, -0.5367939859020234, 18);
  sqcRZGate(q, -1.5729340120795259, 18);
  sqcRYGate(q, -1.6736376714934686, 19);
  sqcRZGate(q, -1.5868581605402494, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.9998612695784637, 0);
  sqcRZGate(q, -3.140206541556672, 0);
  sqcRYGate(q, -0.0035896502140584374, 1);
  sqcRZGate(q, 1.4496768549607633, 1);
  sqcRYGate(q, 1.4071027889718843, 2);
  sqcRZGate(q, 0.02652304714421803, 2);
  sqcRYGate(q, 1.5741949860980902, 3);
  sqcRZGate(q, -1.9040265030687618, 3);
  sqcRYGate(q, 1.1137466570670056, 4);
  sqcRZGate(q, -1.566359086505984, 4);
  sqcRYGate(q, -0.11431218426948053, 5);
  sqcRZGate(q, 1.5220140400217934, 5);
  sqcRYGate(q, -3.1415877602572984, 6);
  sqcRZGate(q, 1.2978117799209254, 6);
  sqcRYGate(q, -3.1414500209956047, 7);
  sqcRZGate(q, 2.0797630623346746, 7);
  sqcRYGate(q, -5.9216452012123e-05, 8);
  sqcRZGate(q, 2.0335745403032006, 8);
  sqcRYGate(q, -2.618048263043754, 9);
  sqcRZGate(q, 2.7317896114194125, 9);
  sqcRYGate(q, 0.0018302235839220936, 10);
  sqcRZGate(q, 2.2689371503886084, 10);
  sqcRYGate(q, -2.4708617189341, 11);
  sqcRZGate(q, -1.5633031951901064, 11);
  sqcRYGate(q, 1.571672240911714, 12);
  sqcRZGate(q, 1.553170346304473, 12);
  sqcRYGate(q, 1.570854024908805, 13);
  sqcRZGate(q, -1.567284841278248, 13);
  sqcRYGate(q, -3.141578303373534, 14);
  sqcRZGate(q, -2.5752528832725523, 14);
  sqcRYGate(q, 3.14159258601199, 15);
  sqcRZGate(q, 1.6983237736538017, 15);
  sqcRYGate(q, -1.5708003274275635, 16);
  sqcRZGate(q, 1.6944583140212466, 16);
  sqcRYGate(q, 4.938986786679425e-05, 17);
  sqcRZGate(q, 1.8653082419578462, 17);
  sqcRYGate(q, 1.5707951904920838, 18);
  sqcRZGate(q, -3.1415722510398822, 18);
  sqcRYGate(q, -3.1415160507004374, 19);
  sqcRZGate(q, -0.016530600134509573, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.570373471845759, 0);
  sqcRZGate(q, 2.9445137425020254, 0);
  sqcRYGate(q, -3.1415790529146435, 1);
  sqcRZGate(q, 1.4620229626888381, 1);
  sqcRYGate(q, -1.5827580616783377, 2);
  sqcRZGate(q, 1.4634854541851567, 2);
  sqcRYGate(q, -3.1268574506496867, 3);
  sqcRZGate(q, -2.7898361891737706, 3);
  sqcRYGate(q, -2.890351893323076, 4);
  sqcRZGate(q, -1.6830781550866487, 4);
  sqcRYGate(q, 1.5404074459451118, 5);
  sqcRZGate(q, 0.23663246097902757, 5);
  sqcRYGate(q, -1.5706221483832385, 6);
  sqcRZGate(q, -0.1470943496915727, 6);
  sqcRYGate(q, 0.0002467993227588394, 7);
  sqcRZGate(q, -0.6072868167767957, 7);
  sqcRYGate(q, 1.57080418491344, 8);
  sqcRZGate(q, -1.6569147257910997, 8);
  sqcRYGate(q, 3.1415814484324613, 9);
  sqcRZGate(q, -0.17512882250568307, 9);
  sqcRYGate(q, -3.1357197423936514, 10);
  sqcRZGate(q, -1.8070353898406717, 10);
  sqcRYGate(q, -1.5702906551649451, 11);
  sqcRZGate(q, 1.8049301211253583, 11);
  sqcRYGate(q, -1.5729062679065917, 12);
  sqcRZGate(q, 3.0358986127434116, 12);
  sqcRYGate(q, -1.4078812629915565, 13);
  sqcRZGate(q, 0.2327158155852489, 13);
  sqcRYGate(q, -1.570766045697041, 14);
  sqcRZGate(q, -1.671884463235413, 14);
  sqcRYGate(q, -3.4606170959960995e-06, 15);
  sqcRZGate(q, 0.4446577392156357, 15);
  sqcRYGate(q, 3.141056670353247, 16);
  sqcRZGate(q, 1.5896229001089637, 16);
  sqcRYGate(q, 5.890655594241211e-06, 17);
  sqcRZGate(q, -2.1046131946535054, 17);
  sqcRYGate(q, -1.5707547991597481, 18);
  sqcRZGate(q, 3.038063040690927, 18);
  sqcRYGate(q, -2.369886267223734, 19);
  sqcRZGate(q, -2.9088324785388955, 19);

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
