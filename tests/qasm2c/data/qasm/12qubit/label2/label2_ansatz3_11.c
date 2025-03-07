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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -0.47321656163123915, 0);
  sqcRZGate(q, 1.4922569495085511, 0);
  sqcRYGate(q, -1.8154644543226057, 1);
  sqcRZGate(q, 1.1338099451160666, 1);
  sqcRYGate(q, 1.3969342892590717, 2);
  sqcRZGate(q, 3.0922533454249566, 2);
  sqcRYGate(q, 0.21154405673961388, 3);
  sqcRZGate(q, -2.583493286280616, 3);
  sqcRYGate(q, -0.00032906950434252735, 4);
  sqcRZGate(q, -1.4367260655829084, 4);
  sqcRYGate(q, -3.1413588015109113, 5);
  sqcRZGate(q, -2.0016698725161204, 5);
  sqcRYGate(q, -1.6876030362299819, 6);
  sqcRZGate(q, -2.5143763575108777, 6);
  sqcRYGate(q, 3.652858639924261e-05, 7);
  sqcRZGate(q, 3.137716333276506, 7);
  sqcRYGate(q, -2.4196434210681987, 8);
  sqcRZGate(q, 1.5228275435913454, 8);
  sqcRYGate(q, -2.186489442437028, 9);
  sqcRZGate(q, -1.9359953244987163, 9);
  sqcRYGate(q, -2.854054939124007, 10);
  sqcRZGate(q, -0.6997789269180886, 10);
  sqcRYGate(q, -1.8642059678454146, 11);
  sqcRZGate(q, -0.9571973911514516, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.5119123387200113, 0);
  sqcRZGate(q, 1.7614597201380158, 0);
  sqcRYGate(q, -2.469035025468967, 1);
  sqcRZGate(q, 2.9565090851632414, 1);
  sqcRYGate(q, 1.3605259868818464, 2);
  sqcRZGate(q, -2.2412306306872845, 2);
  sqcRYGate(q, -2.0392920844720073, 3);
  sqcRZGate(q, 1.5787792669637462, 3);
  sqcRYGate(q, 3.1415718937401618, 4);
  sqcRZGate(q, 1.6888619653910708, 4);
  sqcRYGate(q, -3.1414797539891492, 5);
  sqcRZGate(q, 3.1026884585775054, 5);
  sqcRYGate(q, -0.5938791273067929, 6);
  sqcRZGate(q, -1.9767318652494517, 6);
  sqcRYGate(q, -3.141550610477239, 7);
  sqcRZGate(q, 2.8165642862727003, 7);
  sqcRYGate(q, -2.3443294985464895, 8);
  sqcRZGate(q, -0.5061729995487338, 8);
  sqcRYGate(q, -1.280794061899063, 9);
  sqcRZGate(q, -2.9380382294152785, 9);
  sqcRYGate(q, 2.9812364130320645, 10);
  sqcRZGate(q, 1.9525119337597996, 10);
  sqcRYGate(q, -0.25819248574261966, 11);
  sqcRZGate(q, 1.480536914353135, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.22417698177694148, 0);
  sqcRZGate(q, -2.583093943222847, 0);
  sqcRYGate(q, 1.1321854469445216, 1);
  sqcRZGate(q, 1.579370425313286, 1);
  sqcRYGate(q, 0.038641716756558635, 2);
  sqcRZGate(q, 1.3943661996374188, 2);
  sqcRYGate(q, 1.651890957306597, 3);
  sqcRZGate(q, 1.9019208053731225, 3);
  sqcRYGate(q, 1.572128128411347, 4);
  sqcRZGate(q, -2.6820168342370727, 4);
  sqcRYGate(q, 3.0287134717893776, 5);
  sqcRZGate(q, 1.8604654048472424, 5);
  sqcRYGate(q, -2.4853469076980432, 6);
  sqcRZGate(q, 0.2146304676542705, 6);
  sqcRYGate(q, -3.1415751856868357, 7);
  sqcRZGate(q, 2.4786472116456455, 7);
  sqcRYGate(q, -0.594242004207932, 8);
  sqcRZGate(q, 2.1404041233739806, 8);
  sqcRYGate(q, -1.8302023525376416, 9);
  sqcRZGate(q, -2.96953045072159, 9);
  sqcRYGate(q, -1.269997792198895, 10);
  sqcRZGate(q, -2.804666814492311, 10);
  sqcRYGate(q, 1.348563167237626, 11);
  sqcRZGate(q, 2.6582063480024685, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.7083372753380228, 0);
  sqcRZGate(q, 0.16489539010519394, 0);
  sqcRYGate(q, 1.3326361327155694, 1);
  sqcRZGate(q, -2.8407900878123753, 1);
  sqcRYGate(q, -1.5732212614308763, 2);
  sqcRZGate(q, -1.64907353852419, 2);
  sqcRYGate(q, 3.131975341750374, 3);
  sqcRZGate(q, -2.100790127662161, 3);
  sqcRYGate(q, 0.00015026501838466544, 4);
  sqcRZGate(q, 1.0437188076762234, 4);
  sqcRYGate(q, -3.1411013846401854, 5);
  sqcRZGate(q, 2.9027504782728433, 5);
  sqcRYGate(q, 3.141573312585037, 6);
  sqcRZGate(q, -0.6809905451400481, 6);
  sqcRYGate(q, 6.638961210984101e-05, 7);
  sqcRZGate(q, 2.1677357761223286, 7);
  sqcRYGate(q, -1.1252400734954975, 8);
  sqcRZGate(q, -2.3506463359039085, 8);
  sqcRYGate(q, -1.7953525120721778, 9);
  sqcRZGate(q, 1.8709079370500583, 9);
  sqcRYGate(q, 1.1130759493981028, 10);
  sqcRZGate(q, -1.70587419161409, 10);
  sqcRYGate(q, -1.8895027633106118, 11);
  sqcRZGate(q, 0.5747693718432103, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.5698489946209122, 0);
  sqcRZGate(q, 1.4092947115067105, 0);
  sqcRYGate(q, 1.7207627748112737, 1);
  sqcRZGate(q, -2.1446291852263872, 1);
  sqcRYGate(q, 1.573782635544204, 2);
  sqcRZGate(q, -1.531354052772873, 2);
  sqcRYGate(q, 3.1399728641526745, 3);
  sqcRZGate(q, -2.021225575237578, 3);
  sqcRYGate(q, 1.499650391268455, 4);
  sqcRZGate(q, 0.1543152062153022, 4);
  sqcRYGate(q, 1.0427567130553619, 5);
  sqcRZGate(q, -1.9336195190112733, 5);
  sqcRYGate(q, -0.18798451521640303, 6);
  sqcRZGate(q, -0.051630960285572236, 6);
  sqcRYGate(q, -1.6439938121955047e-05, 7);
  sqcRZGate(q, 1.9763671678122154, 7);
  sqcRYGate(q, 1.3943451958564177, 8);
  sqcRZGate(q, -0.898064709355209, 8);
  sqcRYGate(q, -2.8971299536442086, 9);
  sqcRZGate(q, 1.3326395134208313, 9);
  sqcRYGate(q, 0.791333062806185, 10);
  sqcRZGate(q, 2.5799665386294524, 10);
  sqcRYGate(q, 1.511795458084932, 11);
  sqcRZGate(q, 2.6964192380353906, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.05985224759372958, 0);
  sqcRZGate(q, -1.3747049655313843, 0);
  sqcRYGate(q, -1.5660142563899706, 1);
  sqcRZGate(q, 1.5896742329325797, 1);
  sqcRYGate(q, -1.607746186405719, 2);
  sqcRZGate(q, 1.493234244527267, 2);
  sqcRYGate(q, 0.0010199204958690452, 3);
  sqcRZGate(q, 2.74422660388328, 3);
  sqcRYGate(q, 3.141519662348486, 4);
  sqcRZGate(q, -1.6786967914493722, 4);
  sqcRYGate(q, -3.140934395073117, 5);
  sqcRZGate(q, 2.357076424070852, 5);
  sqcRYGate(q, 3.141568044366505, 6);
  sqcRZGate(q, 0.06837137492951052, 6);
  sqcRYGate(q, -0.00022829840464665566, 7);
  sqcRZGate(q, -2.7864565859824895, 7);
  sqcRYGate(q, 1.8101111937235086, 8);
  sqcRZGate(q, -2.1073324197917165, 8);
  sqcRYGate(q, -1.9826824527292013, 9);
  sqcRZGate(q, 0.23276754300963187, 9);
  sqcRYGate(q, -2.49516346756315, 10);
  sqcRZGate(q, -2.9208513891871357, 10);
  sqcRYGate(q, 2.9877982165787262, 11);
  sqcRZGate(q, 2.529319989817604, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.4345995701134981, 0);
  sqcRZGate(q, 1.5277164269550103, 0);
  sqcRYGate(q, 1.6438152198124325, 1);
  sqcRZGate(q, -1.8363431619671675, 1);
  sqcRYGate(q, 0.03036525095978604, 2);
  sqcRZGate(q, 0.1273645271796905, 2);
  sqcRYGate(q, -2.1331683682722007, 3);
  sqcRZGate(q, 1.541423029989945, 3);
  sqcRYGate(q, -1.5720046931698306, 4);
  sqcRZGate(q, -1.1211344005310329, 4);
  sqcRYGate(q, -2.3563935822354884, 5);
  sqcRZGate(q, -0.6868407287017941, 5);
  sqcRYGate(q, -2.276102729251079, 6);
  sqcRZGate(q, -2.474836025609607, 6);
  sqcRYGate(q, -3.141155830035219, 7);
  sqcRZGate(q, 1.197308710238334, 7);
  sqcRYGate(q, 0.037388275272388076, 8);
  sqcRZGate(q, -2.385335004982192, 8);
  sqcRYGate(q, -1.975700979887157, 9);
  sqcRZGate(q, 1.5035375490758245, 9);
  sqcRYGate(q, 1.7884051540287123, 10);
  sqcRZGate(q, 1.4861425651261821, 10);
  sqcRYGate(q, -1.4405259924573315, 11);
  sqcRZGate(q, 0.5217047611936783, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.5688962078598898, 0);
  sqcRZGate(q, -0.32053808328013567, 0);
  sqcRYGate(q, -2.1956167237777047, 1);
  sqcRZGate(q, -1.23620495997712, 1);
  sqcRYGate(q, -1.6406478016024275, 2);
  sqcRZGate(q, 0.14553949902815425, 2);
  sqcRYGate(q, -1.5706339254815722, 3);
  sqcRZGate(q, 0.05508979213747643, 3);
  sqcRYGate(q, -3.1415806422450023, 4);
  sqcRZGate(q, -1.2828988775825856, 4);
  sqcRYGate(q, 0.06366032316722443, 5);
  sqcRZGate(q, 2.035991806348517, 5);
  sqcRYGate(q, -1.8129643342135182e-06, 6);
  sqcRZGate(q, -0.5675804714657462, 6);
  sqcRYGate(q, -0.0016627525986909746, 7);
  sqcRZGate(q, -3.0520994112277204, 7);
  sqcRYGate(q, 1.3658972190631924, 8);
  sqcRZGate(q, 0.9981177890702817, 8);
  sqcRYGate(q, -3.1405068420950486, 9);
  sqcRZGate(q, -2.2775086967758345, 9);
  sqcRYGate(q, 1.9156022929861525, 10);
  sqcRZGate(q, 1.4655886863612464, 10);
  sqcRYGate(q, -0.16829543369291058, 11);
  sqcRZGate(q, 0.6440312200706665, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.1296050921836875, 0);
  sqcRZGate(q, 2.2653885223380117, 0);
  sqcRYGate(q, -2.555230712735784, 1);
  sqcRZGate(q, -3.141504670154949, 1);
  sqcRYGate(q, 1.57014868245398, 2);
  sqcRZGate(q, -1.5708170382849604, 2);
  sqcRYGate(q, 3.138725771080108, 3);
  sqcRZGate(q, -2.1791848939436727, 3);
  sqcRYGate(q, -0.009825752279327913, 4);
  sqcRZGate(q, -1.0441977566540395, 4);
  sqcRYGate(q, 1.9804943207448154, 5);
  sqcRZGate(q, 2.8362727792873317, 5);
  sqcRYGate(q, 0.4750459568278711, 6);
  sqcRZGate(q, 2.6929734192013997, 6);
  sqcRYGate(q, 2.9306446666098345, 7);
  sqcRZGate(q, -0.020452572542180466, 7);
  sqcRYGate(q, -1.9822608179492978, 8);
  sqcRZGate(q, 1.9419866838183, 8);
  sqcRYGate(q, 0.33387134595328855, 9);
  sqcRZGate(q, 2.8999004162616626, 9);
  sqcRYGate(q, -2.277815784635592, 10);
  sqcRZGate(q, -1.3097270835576191, 10);
  sqcRYGate(q, 1.6077416113825604, 11);
  sqcRZGate(q, -1.0384009167197314, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 3.141576869612455, 0);
  sqcRZGate(q, 1.4424178637392597, 0);
  sqcRYGate(q, -1.5880279013391707, 1);
  sqcRZGate(q, -2.337695745161567, 1);
  sqcRYGate(q, -1.5710471176547873, 2);
  sqcRZGate(q, -0.47442214124968063, 2);
  sqcRYGate(q, 0.000892746342544548, 3);
  sqcRZGate(q, -2.477338183518473, 3);
  sqcRYGate(q, 1.9575958230880526e-05, 4);
  sqcRZGate(q, -0.3648229485708975, 4);
  sqcRYGate(q, 0.00046039563651145704, 5);
  sqcRZGate(q, 2.4361758749161315, 5);
  sqcRYGate(q, -6.117250883619363e-07, 6);
  sqcRZGate(q, 1.9204968747984772, 6);
  sqcRYGate(q, -0.04953916303110307, 7);
  sqcRZGate(q, -1.5685912553163264, 7);
  sqcRYGate(q, -0.9135131024494605, 8);
  sqcRZGate(q, 1.8719848792147904, 8);
  sqcRYGate(q, 3.1406648919968365, 9);
  sqcRZGate(q, -2.2070041195401786, 9);
  sqcRYGate(q, 2.1078540489775808, 10);
  sqcRZGate(q, 2.930123488613199, 10);
  sqcRYGate(q, 1.4500845814824503, 11);
  sqcRZGate(q, -2.1943495919193126, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.5704693652197026, 0);
  sqcRZGate(q, -2.90875774072361, 0);
  sqcRYGate(q, -1.105815926303736, 1);
  sqcRZGate(q, 2.794556573283583, 1);
  sqcRYGate(q, -0.16003553123196257, 2);
  sqcRZGate(q, 0.5377423743231904, 2);
  sqcRYGate(q, 3.114584747864563, 3);
  sqcRZGate(q, 2.8427476766297604, 3);
  sqcRYGate(q, -1.5706267401775786, 4);
  sqcRZGate(q, 0.44428989456089063, 4);
  sqcRYGate(q, 2.4700208570995548, 5);
  sqcRZGate(q, -1.1017654675009876, 5);
  sqcRYGate(q, 1.6094239928487488, 6);
  sqcRZGate(q, 1.5706465853873661, 6);
  sqcRYGate(q, -1.567320600320241, 7);
  sqcRZGate(q, 1.9688837654618507, 7);
  sqcRYGate(q, -0.6142375593017205, 8);
  sqcRZGate(q, 2.1655892305152964, 8);
  sqcRYGate(q, 0.001326063435063842, 9);
  sqcRZGate(q, -1.3103507104095895, 9);
  sqcRYGate(q, -1.7617167080917815, 10);
  sqcRZGate(q, -0.9046433447981064, 10);
  sqcRYGate(q, -0.35559604852579557, 11);
  sqcRZGate(q, 0.10730144540968924, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.5956746594673623, 0);
  sqcRZGate(q, -2.258841506036963, 0);
  sqcRYGate(q, -1.5557158992449798, 1);
  sqcRZGate(q, 2.04336329323152, 1);
  sqcRYGate(q, 1.570642548216144, 2);
  sqcRZGate(q, 1.7721205355062057, 2);
  sqcRYGate(q, -3.1412197246486797, 3);
  sqcRZGate(q, 1.0067850895480177, 3);
  sqcRYGate(q, -3.1415924606310868, 4);
  sqcRZGate(q, 1.5883129819622048, 4);
  sqcRYGate(q, 3.1415792844713173, 5);
  sqcRZGate(q, 2.778414905723279, 5);
  sqcRYGate(q, -3.091593302332208, 6);
  sqcRZGate(q, -9.268716989550911e-05, 6);
  sqcRYGate(q, 4.2804045579103445e-06, 7);
  sqcRZGate(q, -2.1797007748857897, 7);
  sqcRYGate(q, 1.5600543464488794, 8);
  sqcRZGate(q, -0.000135490770368951, 8);
  sqcRYGate(q, -1.5708540408526266, 9);
  sqcRZGate(q, 4.929577360446302e-05, 9);
  sqcRYGate(q, -0.13790942819302185, 10);
  sqcRZGate(q, 2.1887431734016074, 10);
  sqcRYGate(q, 1.209128712904417, 11);
  sqcRZGate(q, -0.11566024419005606, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.04314357109165, 0);
  sqcRZGate(q, 1.58552249370448, 0);
  sqcRYGate(q, 2.763244091848121, 1);
  sqcRZGate(q, 0.25353069224141045, 1);
  sqcRYGate(q, -2.580433874681044, 2);
  sqcRZGate(q, -1.1816756471390342, 2);
  sqcRYGate(q, -1.2021843193082884, 3);
  sqcRZGate(q, 0.15953534912308745, 3);
  sqcRYGate(q, -1.1515330042525163, 4);
  sqcRZGate(q, -1.1297692674218727, 4);
  sqcRYGate(q, -0.6197843237260479, 5);
  sqcRZGate(q, 0.9195399840766493, 5);
  sqcRYGate(q, 1.576615567903684, 6);
  sqcRZGate(q, -1.9004038849604825, 6);
  sqcRYGate(q, -1.569541245359054, 7);
  sqcRZGate(q, 2.5567617624574477, 7);
  sqcRYGate(q, -1.5707854070872946, 8);
  sqcRZGate(q, 1.570832680045317, 8);
  sqcRYGate(q, -2.2611854225758785, 9);
  sqcRZGate(q, -3.139094663422723, 9);
  sqcRYGate(q, 0.0028591146434751025, 10);
  sqcRZGate(q, -2.8481216155282736, 10);
  sqcRYGate(q, 1.5683354637176485, 11);
  sqcRZGate(q, -3.1415912460374518, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.1120139425912355, 0);
  sqcRZGate(q, -1.7907347616626526, 0);
  sqcRYGate(q, -3.131669185185564, 1);
  sqcRZGate(q, 2.8347168800369023, 1);
  sqcRYGate(q, 0.00020166042551661434, 2);
  sqcRZGate(q, -1.7198175320019482, 2);
  sqcRYGate(q, 3.1408914407435966, 3);
  sqcRZGate(q, -1.811311103392463, 3);
  sqcRYGate(q, 6.137282303468569e-06, 4);
  sqcRZGate(q, -0.7680593032478051, 4);
  sqcRYGate(q, -3.1415910373995235, 5);
  sqcRZGate(q, 1.6538994306951844, 5);
  sqcRYGate(q, -1.546315554445954e-05, 6);
  sqcRZGate(q, -1.2051621057482251, 6);
  sqcRYGate(q, 5.657444378481812e-05, 7);
  sqcRZGate(q, -2.557010584821403, 7);
  sqcRYGate(q, -1.570769061266521, 8);
  sqcRZGate(q, 2.638073975948474, 8);
  sqcRYGate(q, 1.5708089935001206, 9);
  sqcRZGate(q, 2.796230018264237, 9);
  sqcRYGate(q, 1.5275624034340216, 10);
  sqcRZGate(q, -0.5417699773316985, 10);
  sqcRYGate(q, -1.4275161817689304, 11);
  sqcRZGate(q, 1.5708199814029917, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.27191639621792274, 0);
  sqcRZGate(q, -2.566913977152719, 0);
  sqcRYGate(q, 2.6301872654319487, 1);
  sqcRZGate(q, 1.4789907302599365, 1);
  sqcRYGate(q, 1.4308217708222575, 2);
  sqcRZGate(q, 1.8379611963074358, 2);
  sqcRYGate(q, -0.11948283699886186, 3);
  sqcRZGate(q, -2.3905470858957614, 3);
  sqcRYGate(q, -0.9506562243555572, 4);
  sqcRZGate(q, -0.19411909031406616, 4);
  sqcRYGate(q, -1.321037384901713, 5);
  sqcRZGate(q, -0.7140721686248728, 5);
  sqcRYGate(q, -3.141488813755577, 6);
  sqcRZGate(q, -1.0305602928394528, 6);
  sqcRYGate(q, -1.570788053876923, 7);
  sqcRZGate(q, 0.8493778753575157, 7);
  sqcRYGate(q, 2.393001730816025e-05, 8);
  sqcRZGate(q, -1.2604913923845025, 8);
  sqcRYGate(q, -6.430819418194718e-06, 9);
  sqcRZGate(q, 1.1126018174755257, 9);
  sqcRYGate(q, -3.1415828912124693, 10);
  sqcRZGate(q, -2.046216012221266, 10);
  sqcRYGate(q, 1.5707962197463003, 11);
  sqcRZGate(q, -1.5011301928832124, 11);

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
