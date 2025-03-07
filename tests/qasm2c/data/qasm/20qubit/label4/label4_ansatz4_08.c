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

  sqcRYGate(q, -1.5650359523329427, 0);
  sqcRZGate(q, 0.8493885545757934, 0);
  sqcRYGate(q, 0.12192690037779037, 1);
  sqcRZGate(q, 3.054150802129222, 1);
  sqcRYGate(q, -0.028379482183689925, 2);
  sqcRZGate(q, 2.1677608393519066, 2);
  sqcRYGate(q, 1.4924284017636242, 3);
  sqcRZGate(q, 0.27520968029051485, 3);
  sqcRYGate(q, 3.1413128241302237, 4);
  sqcRZGate(q, -0.10052005989569918, 4);
  sqcRYGate(q, 1.5729286972650955, 5);
  sqcRZGate(q, -1.6820354056815363, 5);
  sqcRYGate(q, -0.4417477616978852, 6);
  sqcRZGate(q, -3.140641566243928, 6);
  sqcRYGate(q, 0.038357720100422876, 7);
  sqcRZGate(q, 1.7965071234616656, 7);
  sqcRYGate(q, -1.5712673515083724, 8);
  sqcRZGate(q, 1.792908096099266, 8);
  sqcRYGate(q, 1.5706381642799236, 9);
  sqcRZGate(q, -0.00785877886893882, 9);
  sqcRYGate(q, -3.1415907931035205, 10);
  sqcRZGate(q, 1.2179087389105523, 10);
  sqcRYGate(q, -3.1415867036689633, 11);
  sqcRZGate(q, -0.8527396490979845, 11);
  sqcRYGate(q, -1.570827925848734, 12);
  sqcRZGate(q, -0.19049419810279924, 12);
  sqcRYGate(q, -1.5712348945813641, 13);
  sqcRZGate(q, 0.00040226865963877145, 13);
  sqcRYGate(q, -2.7219164028131164, 14);
  sqcRZGate(q, -2.143864625322273, 14);
  sqcRYGate(q, 3.1414533775350937, 15);
  sqcRZGate(q, 0.16546542408511747, 15);
  sqcRYGate(q, 0.012495902827923368, 16);
  sqcRZGate(q, 2.041717432535692, 16);
  sqcRYGate(q, -3.0491377149863967, 17);
  sqcRZGate(q, 0.8141487059311121, 17);
  sqcRYGate(q, -3.141205047298214, 18);
  sqcRZGate(q, -2.1425406936231584, 18);
  sqcRYGate(q, -1.3992568961873628, 19);
  sqcRZGate(q, 1.88239368598337, 19);
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
  sqcRYGate(q, 0.004642929839973408, 0);
  sqcRZGate(q, 0.715949017998757, 0);
  sqcRYGate(q, -0.12170986482183732, 1);
  sqcRZGate(q, -0.5840468070754374, 1);
  sqcRYGate(q, 3.1411692487231035, 2);
  sqcRZGate(q, 2.7395095085466696, 2);
  sqcRYGate(q, 3.1411539829861823, 3);
  sqcRZGate(q, 0.7783703378264426, 3);
  sqcRYGate(q, 3.1414703969513553, 4);
  sqcRZGate(q, -0.481475763227337, 4);
  sqcRYGate(q, -0.002531945924836498, 5);
  sqcRZGate(q, -1.4970759236339568, 5);
  sqcRYGate(q, -1.5703561727696949, 6);
  sqcRZGate(q, 2.983666584642853, 6);
  sqcRYGate(q, 3.1414597244246987, 7);
  sqcRZGate(q, 1.7274904812826009, 7);
  sqcRYGate(q, -0.007900116168042537, 8);
  sqcRZGate(q, -1.9936203176347838, 8);
  sqcRYGate(q, -1.6814847246798106, 9);
  sqcRZGate(q, 1.5899505422766589, 9);
  sqcRYGate(q, -1.5667036499361133, 10);
  sqcRZGate(q, -2.3332965326157837, 10);
  sqcRYGate(q, -0.0020503153935372146, 11);
  sqcRZGate(q, 0.3810060325479032, 11);
  sqcRYGate(q, 3.139137326606667, 12);
  sqcRZGate(q, 2.951334159450776, 12);
  sqcRYGate(q, -1.5682419602343995, 13);
  sqcRZGate(q, -3.1413007859986846, 13);
  sqcRYGate(q, -3.1415385986384523, 14);
  sqcRZGate(q, 0.9954409461125416, 14);
  sqcRYGate(q, -1.5824251990541622, 15);
  sqcRZGate(q, 1.9645636797471755, 15);
  sqcRYGate(q, -1.568868612580033, 16);
  sqcRZGate(q, 1.3610842381790498, 16);
  sqcRYGate(q, 1.5821935762226045, 17);
  sqcRZGate(q, -0.6699159242805185, 17);
  sqcRYGate(q, 3.1391381901596267, 18);
  sqcRZGate(q, -0.6858474164206163, 18);
  sqcRYGate(q, -2.3608616944527143, 19);
  sqcRZGate(q, 1.9710465966977175, 19);
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
  sqcRYGate(q, 2.5018633712182896, 0);
  sqcRZGate(q, -0.02842941719465486, 0);
  sqcRYGate(q, 1.6649964016925631, 1);
  sqcRZGate(q, 0.011660156921741383, 1);
  sqcRYGate(q, 1.5926418918519405, 2);
  sqcRZGate(q, 1.5903591957261378, 2);
  sqcRYGate(q, 0.09682872844948685, 3);
  sqcRZGate(q, -0.46313214465234065, 3);
  sqcRYGate(q, 0.031658757875208415, 4);
  sqcRZGate(q, -0.3373041198272329, 4);
  sqcRYGate(q, 1.3162988342808954, 5);
  sqcRZGate(q, -1.5615980612745137, 5);
  sqcRYGate(q, -2.909194034082515, 6);
  sqcRZGate(q, -1.7250385376864559, 6);
  sqcRYGate(q, 1.5682670295296797, 7);
  sqcRZGate(q, -1.5710623071276106, 7);
  sqcRYGate(q, -3.018307521179871, 8);
  sqcRZGate(q, 0.8812189253489568, 8);
  sqcRYGate(q, -2.949793443486339, 9);
  sqcRZGate(q, -3.098033229809878, 9);
  sqcRYGate(q, -0.002444725946681943, 10);
  sqcRZGate(q, 2.336243051564355, 10);
  sqcRYGate(q, 0.00011759892304308295, 11);
  sqcRZGate(q, 2.9836349731032494, 11);
  sqcRYGate(q, 1.571875734375321, 12);
  sqcRZGate(q, -3.0645184237817693, 12);
  sqcRYGate(q, -1.5697819296128905, 13);
  sqcRZGate(q, -0.17784179012978996, 13);
  sqcRYGate(q, 1.5705053949199526, 14);
  sqcRZGate(q, 1.183609963132044, 14);
  sqcRYGate(q, 3.0888146788402198, 15);
  sqcRZGate(q, 1.9636810931964406, 15);
  sqcRYGate(q, 0.3124547974888096, 16);
  sqcRZGate(q, 2.3928394081350888, 16);
  sqcRYGate(q, -3.0389619470596476, 17);
  sqcRZGate(q, 2.8261786518819196, 17);
  sqcRYGate(q, 0.005791771129598672, 18);
  sqcRZGate(q, 1.1236431558122728, 18);
  sqcRYGate(q, -2.3468105348737707, 19);
  sqcRZGate(q, 2.864508171861848, 19);
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
  sqcRYGate(q, 1.7687986007698917, 0);
  sqcRZGate(q, 1.4633184328521667, 0);
  sqcRYGate(q, -1.6741331884205621, 1);
  sqcRZGate(q, -2.617095520533605, 1);
  sqcRYGate(q, -1.574710779472721, 2);
  sqcRZGate(q, 2.4990609741301903, 2);
  sqcRYGate(q, 0.9247498434991392, 3);
  sqcRZGate(q, -0.02478498583058286, 3);
  sqcRYGate(q, -3.141335680635358, 4);
  sqcRZGate(q, 1.0559843989582136, 4);
  sqcRYGate(q, -2.972603927768035, 5);
  sqcRZGate(q, 2.515991971582488, 5);
  sqcRYGate(q, -1.570617120280838, 6);
  sqcRZGate(q, -1.7056226005273758, 6);
  sqcRYGate(q, 1.5775109733258965, 7);
  sqcRZGate(q, 2.9365424032724077, 7);
  sqcRYGate(q, 1.5711852948638585, 8);
  sqcRZGate(q, -1.728581266933018, 8);
  sqcRYGate(q, -1.5711004158052373, 9);
  sqcRZGate(q, 2.5130406143709014, 9);
  sqcRYGate(q, 1.5726738660615438, 10);
  sqcRZGate(q, 0.46838141255253424, 10);
  sqcRYGate(q, 0.000831882645816454, 11);
  sqcRZGate(q, 0.1441352354650309, 11);
  sqcRYGate(q, -0.0006271843163661177, 12);
  sqcRZGate(q, 1.5749524419731213, 12);
  sqcRYGate(q, 0.00015856729867345362, 13);
  sqcRZGate(q, -2.875773964081003, 13);
  sqcRYGate(q, -3.141461732179434, 14);
  sqcRZGate(q, -1.9587382986195891, 14);
  sqcRYGate(q, -1.5701860407402284, 15);
  sqcRZGate(q, -1.570178605092912, 15);
  sqcRYGate(q, 0.0001913194922593675, 16);
  sqcRZGate(q, 2.92249102843962, 16);
  sqcRYGate(q, -0.0002308892350726844, 17);
  sqcRZGate(q, -2.5013112478408632, 17);
  sqcRYGate(q, 1.2321713429248053, 18);
  sqcRZGate(q, 2.1503118856250816, 18);
  sqcRYGate(q, 0.6593932096622591, 19);
  sqcRZGate(q, -2.2046952435722824, 19);
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
  sqcRYGate(q, 1.5654930201982578, 0);
  sqcRZGate(q, -1.6663554367815314, 0);
  sqcRYGate(q, -1.5772649325431023, 1);
  sqcRZGate(q, 3.1384540706543773, 1);
  sqcRYGate(q, -1.5642735456756736, 2);
  sqcRZGate(q, -0.001247121765796777, 2);
  sqcRYGate(q, -1.919535378303412, 3);
  sqcRZGate(q, -3.13774988972999, 3);
  sqcRYGate(q, 3.1399920380793707, 4);
  sqcRZGate(q, 3.0823192995006274, 4);
  sqcRYGate(q, 3.1415722425025487, 5);
  sqcRZGate(q, -0.6573769877009162, 5);
  sqcRYGate(q, 1.5710501860832973, 6);
  sqcRZGate(q, 0.9095850327762269, 6);
  sqcRYGate(q, 3.1411989089446384, 7);
  sqcRZGate(q, 1.3634948579815132, 7);
  sqcRYGate(q, -0.0001437819444118915, 8);
  sqcRZGate(q, 1.5464234868520643, 8);
  sqcRYGate(q, 3.141492557341394, 9);
  sqcRZGate(q, -0.6284111740307957, 9);
  sqcRYGate(q, -2.876782562822818e-05, 10);
  sqcRZGate(q, -1.4607361193395558, 10);
  sqcRYGate(q, 0.00022613485610900597, 11);
  sqcRZGate(q, -0.23172115984730016, 11);
  sqcRYGate(q, -1.81135799734927, 12);
  sqcRZGate(q, -0.9224119016131457, 12);
  sqcRYGate(q, -1.55830291803269, 13);
  sqcRZGate(q, -2.4582101644532024, 13);
  sqcRYGate(q, 1.1431666262614772, 14);
  sqcRZGate(q, -1.569931904256909, 14);
  sqcRYGate(q, 1.57113174029252, 15);
  sqcRZGate(q, -2.1178185392713145, 15);
  sqcRYGate(q, -3.1397239780165225, 16);
  sqcRZGate(q, -0.208650994808863, 16);
  sqcRYGate(q, 3.1394878499694636, 17);
  sqcRZGate(q, -1.8934656286400955, 17);
  sqcRYGate(q, 0.008894101947216626, 18);
  sqcRZGate(q, 0.6976387347590212, 18);
  sqcRYGate(q, -3.137114303506565, 19);
  sqcRZGate(q, 0.9834451286626195, 19);
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
  sqcRYGate(q, -1.3035890015716367, 0);
  sqcRZGate(q, -0.0046731623967337646, 0);
  sqcRYGate(q, 1.559082156678059, 1);
  sqcRZGate(q, 0.09229066743230341, 1);
  sqcRYGate(q, -1.5681773188745147, 2);
  sqcRZGate(q, -3.1374037297093857, 2);
  sqcRYGate(q, -1.5645707237254856, 3);
  sqcRZGate(q, 1.2309311095967983, 3);
  sqcRYGate(q, 1.5678033740178094, 4);
  sqcRZGate(q, -2.7755523809896587, 4);
  sqcRYGate(q, -1.5708788165583907, 5);
  sqcRZGate(q, -1.5713272427897538, 5);
  sqcRYGate(q, -3.1408633368685495, 6);
  sqcRZGate(q, 2.9009075643308493, 6);
  sqcRYGate(q, 1.5725185883482125, 7);
  sqcRZGate(q, -1.5441540566570842, 7);
  sqcRYGate(q, -3.13730476954119, 8);
  sqcRZGate(q, 3.018380663079729, 8);
  sqcRYGate(q, -1.5747764261657808, 9);
  sqcRZGate(q, -1.5317207806908932, 9);
  sqcRYGate(q, 7.425150731776853e-05, 10);
  sqcRZGate(q, -0.5729527199020324, 10);
  sqcRYGate(q, -0.32648969404441147, 11);
  sqcRZGate(q, 0.008651772610053713, 11);
  sqcRYGate(q, -0.0001146705859556509, 12);
  sqcRZGate(q, 1.1726606178960994, 12);
  sqcRYGate(q, -3.1415716366367774, 13);
  sqcRZGate(q, -0.6720045539785374, 13);
  sqcRYGate(q, -2.713932862988143, 14);
  sqcRZGate(q, -3.14100352948724, 14);
  sqcRYGate(q, -3.140995983945026, 15);
  sqcRZGate(q, 1.0157464159652936, 15);
  sqcRYGate(q, 1.709371213059377, 16);
  sqcRZGate(q, -1.3103886778696197, 16);
  sqcRYGate(q, -0.744464458740925, 17);
  sqcRZGate(q, -1.976282924339492, 17);
  sqcRYGate(q, 0.35356800758828866, 18);
  sqcRZGate(q, 1.8580292312756865, 18);
  sqcRYGate(q, 0.5872782564157999, 19);
  sqcRZGate(q, -1.959419289236192, 19);
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
  sqcRYGate(q, 1.5607599755201234, 0);
  sqcRZGate(q, 2.9229315405511813, 0);
  sqcRYGate(q, -1.5715099393481173, 1);
  sqcRZGate(q, 0.025631836523961837, 1);
  sqcRYGate(q, 1.5707064897812337, 2);
  sqcRZGate(q, 1.5701129679762484, 2);
  sqcRYGate(q, -1.5710218421461013, 3);
  sqcRZGate(q, -1.5878645888638045, 3);
  sqcRYGate(q, 3.1414447869333806, 4);
  sqcRZGate(q, 0.27443664863948225, 4);
  sqcRYGate(q, -2.671891404907215, 5);
  sqcRZGate(q, 3.1312799698098464, 5);
  sqcRYGate(q, -3.1414785433151744, 6);
  sqcRZGate(q, 0.4150606839814488, 6);
  sqcRYGate(q, 3.141581293472646, 7);
  sqcRZGate(q, 0.17505956857485036, 7);
  sqcRYGate(q, -0.0003140532515877379, 8);
  sqcRZGate(q, -1.0622989622250865, 8);
  sqcRYGate(q, -3.109575948444175, 9);
  sqcRZGate(q, 0.03410556811719911, 9);
  sqcRYGate(q, 1.5708583199042305, 10);
  sqcRZGate(q, 0.9914721932126849, 10);
  sqcRYGate(q, 3.0540588064570655, 11);
  sqcRZGate(q, 2.9824549950402206, 11);
  sqcRYGate(q, 0.22797075167056477, 12);
  sqcRZGate(q, 1.2983861678516115, 12);
  sqcRYGate(q, -3.0835049070859113, 13);
  sqcRZGate(q, -2.67296267839763, 13);
  sqcRYGate(q, 1.5701825703029761, 14);
  sqcRZGate(q, 0.47948230461765995, 14);
  sqcRYGate(q, 1.570518282636329, 15);
  sqcRZGate(q, -0.0021196131312981596, 15);
  sqcRYGate(q, -1.5727406981687932, 16);
  sqcRZGate(q, -0.7601973401974256, 16);
  sqcRYGate(q, 1.569889291388906, 17);
  sqcRZGate(q, -0.6741194343197634, 17);
  sqcRYGate(q, 1.572255674998794, 18);
  sqcRZGate(q, 1.6196214495089951, 18);
  sqcRYGate(q, -1.6065937846980198, 19);
  sqcRZGate(q, -3.128438969152839, 19);
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
  sqcRYGate(q, -1.5485861643096657, 0);
  sqcRZGate(q, -3.133520835421596, 0);
  sqcRYGate(q, 1.1695527802389183, 1);
  sqcRZGate(q, 3.1374893340176495, 1);
  sqcRYGate(q, 1.5685576947859543, 2);
  sqcRZGate(q, -1.5948515499726252, 2);
  sqcRYGate(q, 0.0015048585711458548, 3);
  sqcRZGate(q, 0.9637897297297267, 3);
  sqcRYGate(q, -1.570576175158737, 4);
  sqcRZGate(q, -0.002684875185824609, 4);
  sqcRYGate(q, -1.716335412614387, 5);
  sqcRZGate(q, -1.5354698686647335, 5);
  sqcRYGate(q, -1.570475491752584, 6);
  sqcRZGate(q, -1.5718931690248754, 6);
  sqcRYGate(q, 3.1413382543745754, 7);
  sqcRZGate(q, -0.3577714522493046, 7);
  sqcRYGate(q, 0.0013908878822604018, 8);
  sqcRZGate(q, -0.7488158177808233, 8);
  sqcRYGate(q, -1.764594042100243, 9);
  sqcRZGate(q, -0.9085005042331301, 9);
  sqcRYGate(q, 3.1415579909199334, 10);
  sqcRZGate(q, 0.9840559029881922, 10);
  sqcRYGate(q, -3.1415777243703906, 11);
  sqcRZGate(q, 2.569155148527472, 11);
  sqcRYGate(q, 1.5707112466256037, 12);
  sqcRZGate(q, 1.5709089940477168, 12);
  sqcRYGate(q, -3.140622163552833, 13);
  sqcRZGate(q, 1.8278186555437381, 13);
  sqcRYGate(q, -3.1415002858781613, 14);
  sqcRZGate(q, -2.9785217163678417, 14);
  sqcRYGate(q, -2.9637278218317538, 15);
  sqcRZGate(q, -1.5725279835803105, 15);
  sqcRYGate(q, -0.0008278371965866112, 16);
  sqcRZGate(q, -2.381148250654427, 16);
  sqcRYGate(q, -3.139618255040351, 17);
  sqcRZGate(q, 0.1500766389103726, 17);
  sqcRYGate(q, -2.95661286945751, 18);
  sqcRZGate(q, -3.08554668057066, 18);
  sqcRYGate(q, 0.9277967654017578, 19);
  sqcRZGate(q, 1.5552053907781693, 19);
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
  sqcRYGate(q, 1.1532827257698528, 0);
  sqcRZGate(q, 3.1388891754630253, 0);
  sqcRYGate(q, -1.5747266917751856, 1);
  sqcRZGate(q, 1.7093000337510218, 1);
  sqcRYGate(q, -3.1415316040238315, 2);
  sqcRZGate(q, 1.5412530527117712, 2);
  sqcRYGate(q, 0.0007798573790743252, 3);
  sqcRZGate(q, -0.9448993777414072, 3);
  sqcRYGate(q, -3.0817441924139093, 4);
  sqcRZGate(q, -1.5723433188089855, 4);
  sqcRYGate(q, -0.0077203236058043245, 5);
  sqcRZGate(q, 1.5343995352475064, 5);
  sqcRYGate(q, -2.9351431074107257, 6);
  sqcRZGate(q, 1.4644540347146737, 6);
  sqcRYGate(q, -0.0002292690078746773, 7);
  sqcRZGate(q, 1.1976225824794646, 7);
  sqcRYGate(q, 5.3843367645356466e-05, 8);
  sqcRZGate(q, 1.7084472048341333, 8);
  sqcRYGate(q, 4.690132029416816e-05, 9);
  sqcRZGate(q, 0.8170333053084898, 9);
  sqcRYGate(q, -3.1243837098789915, 10);
  sqcRZGate(q, -1.3993815524509385, 10);
  sqcRYGate(q, -0.00026596989325665377, 11);
  sqcRZGate(q, 0.40728213666092045, 11);
  sqcRYGate(q, 1.5708273179505217, 12);
  sqcRZGate(q, 0.10742362049528628, 12);
  sqcRYGate(q, -1.5706583283736577, 13);
  sqcRZGate(q, 0.2865252777900409, 13);
  sqcRYGate(q, 0.00015516834715032386, 14);
  sqcRZGate(q, 0.5033099467653219, 14);
  sqcRYGate(q, -1.5707836576068206, 15);
  sqcRZGate(q, -0.23981576293066276, 15);
  sqcRYGate(q, -1.5888285245807072, 16);
  sqcRZGate(q, 0.02029920228872107, 16);
  sqcRYGate(q, 1.544672913016366, 17);
  sqcRZGate(q, -1.7293836708653696, 17);
  sqcRYGate(q, 1.5699793589912692, 18);
  sqcRZGate(q, -1.5681527220775795, 18);
  sqcRYGate(q, 1.5693602922242622, 19);
  sqcRZGate(q, -1.5999624991324346, 19);
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
  sqcRYGate(q, 1.5430422578879082, 0);
  sqcRZGate(q, 0.12343190186990319, 0);
  sqcRYGate(q, -1.6353601109905018, 1);
  sqcRZGate(q, -2.525361923729034, 1);
  sqcRYGate(q, 0.0004029580556741408, 2);
  sqcRZGate(q, 3.030648109883431, 2);
  sqcRYGate(q, -1.7229707555843017, 3);
  sqcRZGate(q, -1.5704206561262037, 3);
  sqcRYGate(q, 1.9026800508005643, 4);
  sqcRZGate(q, 3.0970863475899977, 4);
  sqcRYGate(q, 1.5336756609141675, 5);
  sqcRZGate(q, -1.5817627075730476, 5);
  sqcRYGate(q, 3.119219215205608, 6);
  sqcRZGate(q, -1.3058848376105994, 6);
  sqcRYGate(q, 3.1016266901432483, 7);
  sqcRZGate(q, -0.7721942863078075, 7);
  sqcRYGate(q, 1.6034067401685523, 8);
  sqcRZGate(q, 0.7892505454679929, 8);
  sqcRYGate(q, 2.134757431399386, 9);
  sqcRZGate(q, 1.5020311789308254, 9);
  sqcRYGate(q, -0.00015408003330378493, 10);
  sqcRZGate(q, 1.3221995640686561, 10);
  sqcRYGate(q, 1.5706172190293213, 11);
  sqcRZGate(q, -1.7523800213351617, 11);
  sqcRYGate(q, -0.0011315588508367925, 12);
  sqcRZGate(q, -1.6795846643087893, 12);
  sqcRYGate(q, 3.134825407054005, 13);
  sqcRZGate(q, 0.28498042979250116, 13);
  sqcRYGate(q, 2.6258820751579037e-05, 14);
  sqcRZGate(q, -0.25559428024332237, 14);
  sqcRYGate(q, -3.1415759969797703, 15);
  sqcRZGate(q, 2.9235766245453645, 15);
  sqcRYGate(q, -1.5707527574995899, 16);
  sqcRZGate(q, 1.5707469630846473, 16);
  sqcRYGate(q, 3.141521868222626, 17);
  sqcRZGate(q, 1.3882057750359469, 17);
  sqcRYGate(q, 1.5700090572848409, 18);
  sqcRZGate(q, -0.0019532871357521206, 18);
  sqcRYGate(q, -1.5702844662236828, 19);
  sqcRZGate(q, -0.0013823461729707276, 19);
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
  sqcRYGate(q, -3.0218591102739607, 0);
  sqcRZGate(q, -1.4434400407952472, 0);
  sqcRYGate(q, 0.00768658470649708, 1);
  sqcRZGate(q, 2.500858136706573, 1);
  sqcRYGate(q, -3.1415441121423666, 2);
  sqcRZGate(q, -1.7054405531163788, 2);
  sqcRYGate(q, 1.5716166201331259, 3);
  sqcRZGate(q, -3.1414662055573856, 3);
  sqcRYGate(q, 3.1415390814296758, 4);
  sqcRZGate(q, -1.615406059905145, 4);
  sqcRYGate(q, -0.03590184984073108, 5);
  sqcRZGate(q, 0.00041547966940669307, 5);
  sqcRYGate(q, 3.1407639964722067, 6);
  sqcRZGate(q, -1.2009764065946886, 6);
  sqcRYGate(q, 3.1413848369116706, 7);
  sqcRZGate(q, -3.0343607910152484, 7);
  sqcRYGate(q, -3.1412548056290057, 8);
  sqcRZGate(q, 2.362791009489958, 8);
  sqcRYGate(q, -3.7043894537559854e-05, 9);
  sqcRZGate(q, -1.6993786279871967, 9);
  sqcRYGate(q, 0.02299921759342638, 10);
  sqcRZGate(q, -1.5009673355504765, 10);
  sqcRYGate(q, 3.1412199753110785, 11);
  sqcRZGate(q, 2.9601473443254385, 11);
  sqcRYGate(q, 1.6569722434604002, 12);
  sqcRZGate(q, 0.0003144508039980565, 12);
  sqcRYGate(q, 1.5241284949884808, 13);
  sqcRZGate(q, -3.1362583205199206, 13);
  sqcRYGate(q, 3.1409930909627266, 14);
  sqcRZGate(q, -1.2397649186671256, 14);
  sqcRYGate(q, -0.00019557555259315594, 15);
  sqcRZGate(q, -0.02185053446511196, 15);
  sqcRYGate(q, 1.5768661379730857, 16);
  sqcRZGate(q, -5.0896068779581194e-05, 16);
  sqcRYGate(q, 1.7019553317406206, 17);
  sqcRZGate(q, 0.016984592006258126, 17);
  sqcRYGate(q, 1.5706074880605487, 18);
  sqcRZGate(q, 1.570814294103407, 18);
  sqcRYGate(q, 2.9551913054495444, 19);
  sqcRZGate(q, 1.570586522948124, 19);
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
  sqcRYGate(q, -1.5713934384724577, 0);
  sqcRZGate(q, 1.699369268479705, 0);
  sqcRYGate(q, 1.5700580506901052, 1);
  sqcRZGate(q, -1.0950391531652455, 1);
  sqcRYGate(q, -3.1411763144074865, 2);
  sqcRZGate(q, 1.6809921994433252, 2);
  sqcRYGate(q, 1.569478024288579, 3);
  sqcRZGate(q, -2.665767440552241, 3);
  sqcRYGate(q, -1.5708910769622297, 4);
  sqcRZGate(q, -1.4434063784828055, 4);
  sqcRYGate(q, 1.388838950723743, 5);
  sqcRZGate(q, -2.6655171930315626, 5);
  sqcRYGate(q, 1.54826523184816, 6);
  sqcRZGate(q, 0.1337099947893837, 6);
  sqcRYGate(q, -1.5460334968358391, 7);
  sqcRZGate(q, 2.0159599458182997, 7);
  sqcRYGate(q, 1.614228620673813, 8);
  sqcRZGate(q, -2.9769829006983004, 8);
  sqcRYGate(q, 2.660857690415785, 9);
  sqcRZGate(q, 0.3049082579743366, 9);
  sqcRYGate(q, 1.5707789247367492, 10);
  sqcRZGate(q, -3.0080843128485735, 10);
  sqcRYGate(q, 1.5722670206205036, 11);
  sqcRZGate(q, 2.047336677230445, 11);
  sqcRYGate(q, -1.5707759612172953, 12);
  sqcRZGate(q, 0.15530701822924978, 12);
  sqcRYGate(q, -3.0097398223629797, 13);
  sqcRZGate(q, 0.481779647496084, 13);
  sqcRYGate(q, -0.00016158200922754276, 14);
  sqcRZGate(q, -1.8301847346699, 14);
  sqcRYGate(q, 1.5723009537836194, 15);
  sqcRZGate(q, 2.048208139409524, 15);
  sqcRYGate(q, -1.5704823934828411, 16);
  sqcRZGate(q, -2.9799671451167367, 16);
  sqcRYGate(q, 0.040122701591512086, 17);
  sqcRZGate(q, -2.681282259141154, 17);
  sqcRYGate(q, 1.5709989077519158, 18);
  sqcRZGate(q, -1.413652542546353, 18);
  sqcRYGate(q, 1.5708326704384188, 19);
  sqcRZGate(q, -2.6650792399382377, 19);

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
