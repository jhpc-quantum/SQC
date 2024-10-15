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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 0.0008831953980481995, 0);
  sqcRZGate(q, -0.5993641113624546, 0);
  sqcRYGate(q, 3.1377050149559267, 1);
  sqcRZGate(q, 3.0983273737473636, 1);
  sqcRYGate(q, 2.9872732772415502, 2);
  sqcRZGate(q, -3.08796238463472, 2);
  sqcRYGate(q, -3.1410709573767237, 3);
  sqcRZGate(q, 0.5275371617675212, 3);
  sqcRYGate(q, 2.9735805025216275, 4);
  sqcRZGate(q, -0.01261077807804867, 4);
  sqcRYGate(q, 0.0002760651927049551, 5);
  sqcRZGate(q, -1.6227593317124605, 5);
  sqcRYGate(q, -1.5658335792680838, 6);
  sqcRZGate(q, 3.1415095823641854, 6);
  sqcRYGate(q, 2.385083343012989, 7);
  sqcRZGate(q, -0.009846365805062833, 7);
  sqcRYGate(q, 9.378273306232087e-05, 8);
  sqcRZGate(q, -0.8772006892499642, 8);
  sqcRYGate(q, -0.004236253537523104, 9);
  sqcRZGate(q, 0.038824290204560796, 9);
  sqcRYGate(q, 1.5706893192315334, 10);
  sqcRZGate(q, -2.8678048318906435, 10);
  sqcRYGate(q, -1.570843175923657, 11);
  sqcRZGate(q, 3.0126750303450507, 11);
  sqcRYGate(q, 0.04965078375383949, 12);
  sqcRZGate(q, 2.5340524180877706, 12);
  sqcRYGate(q, -0.003122853151662497, 13);
  sqcRZGate(q, -2.9995528827234903, 13);
  sqcRYGate(q, -1.3866714250351944, 14);
  sqcRZGate(q, -1.4115771543130733, 14);
  sqcRYGate(q, -0.0006706605497663887, 15);
  sqcRZGate(q, -0.11147482550118594, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, 1.5703429477220547, 0);
  sqcRZGate(q, 0.000660093077647703, 0);
  sqcRYGate(q, 1.5687471806572812, 1);
  sqcRZGate(q, 2.769523819113489, 1);
  sqcRYGate(q, 2.5165519617889536, 2);
  sqcRZGate(q, 1.5823253867298623, 2);
  sqcRYGate(q, 0.0005789599557323652, 3);
  sqcRZGate(q, 2.5377923461885805, 3);
  sqcRYGate(q, 1.567810473738989, 4);
  sqcRZGate(q, -0.00872798684828968, 4);
  sqcRYGate(q, 3.123613933013089, 5);
  sqcRZGate(q, -3.1368665719002062, 5);
  sqcRYGate(q, 1.5826049167453617, 6);
  sqcRZGate(q, 1.5805505142203506, 6);
  sqcRYGate(q, -1.5795691685880202, 7);
  sqcRZGate(q, 1.3022334198548906, 7);
  sqcRYGate(q, 3.075294927481981, 8);
  sqcRZGate(q, -3.140090658812869, 8);
  sqcRYGate(q, 1.5684225808290608, 9);
  sqcRZGate(q, -3.109176567477053, 9);
  sqcRYGate(q, 0.04145144628025221, 10);
  sqcRZGate(q, 1.3016313152753767, 10);
  sqcRYGate(q, 0.040374562003286485, 11);
  sqcRZGate(q, -1.4196942280944613, 11);
  sqcRYGate(q, -0.00044535973418218314, 12);
  sqcRZGate(q, 1.2554933666468047, 12);
  sqcRYGate(q, -1.657905704618738, 13);
  sqcRZGate(q, 1.058446119636848, 13);
  sqcRYGate(q, 2.2749536773894494, 14);
  sqcRZGate(q, -1.3450290565798257, 14);
  sqcRYGate(q, -0.003083708073139846, 15);
  sqcRZGate(q, -2.9690797842613867, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, 1.5731823720076796, 0);
  sqcRZGate(q, -1.5703424570808961, 0);
  sqcRYGate(q, -0.0028575034043543113, 1);
  sqcRZGate(q, 1.9389540427345726, 1);
  sqcRYGate(q, -1.570547456348872, 2);
  sqcRZGate(q, -1.570474433577714, 2);
  sqcRYGate(q, -1.573422697602684, 3);
  sqcRZGate(q, 1.820374865315602, 3);
  sqcRYGate(q, 0.6019469935247618, 4);
  sqcRZGate(q, 0.29048811513721784, 4);
  sqcRYGate(q, -3.011097748620877, 5);
  sqcRZGate(q, -0.45901687298923766, 5);
  sqcRYGate(q, -1.5705184730561164, 6);
  sqcRZGate(q, -0.24218828407852833, 6);
  sqcRYGate(q, -0.0002674329420619824, 7);
  sqcRZGate(q, -0.7836079271064054, 7);
  sqcRYGate(q, 0.03388470803455324, 8);
  sqcRZGate(q, -1.5245726852442634, 8);
  sqcRYGate(q, -0.03529793803552828, 9);
  sqcRZGate(q, 3.1356222906451627, 9);
  sqcRYGate(q, 1.257824590695825, 10);
  sqcRZGate(q, -0.0006551088252817459, 10);
  sqcRYGate(q, -0.9515242194390154, 11);
  sqcRZGate(q, -3.132507188411703, 11);
  sqcRYGate(q, 3.1413245242268566, 12);
  sqcRZGate(q, 2.5555295845679438, 12);
  sqcRYGate(q, 2.2415413446518087, 13);
  sqcRZGate(q, -0.006902804163058107, 13);
  sqcRYGate(q, 1.6188005745134655, 14);
  sqcRZGate(q, -1.5234758659774785, 14);
  sqcRYGate(q, -0.010353240659547455, 15);
  sqcRZGate(q, -1.5112590390720964, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, -2.148604308894299, 0);
  sqcRZGate(q, 1.5657924325404577, 0);
  sqcRYGate(q, -0.5965060168833861, 1);
  sqcRZGate(q, -2.0339893030637834, 1);
  sqcRYGate(q, 2.6841973585671335, 2);
  sqcRZGate(q, 0.0020632935068239013, 2);
  sqcRYGate(q, -0.00020905227441883143, 3);
  sqcRZGate(q, 1.3213540306870792, 3);
  sqcRYGate(q, 3.1413424932359293, 4);
  sqcRZGate(q, -2.853905045473515, 4);
  sqcRYGate(q, 4.539152581628514e-05, 5);
  sqcRZGate(q, -2.6780574275089113, 5);
  sqcRYGate(q, 0.00046570872968221266, 6);
  sqcRZGate(q, 0.2421332519468065, 6);
  sqcRYGate(q, 0.0001615478836852238, 7);
  sqcRZGate(q, 1.0509994441622839, 7);
  sqcRYGate(q, -2.8468744998937947e-05, 8);
  sqcRZGate(q, -0.05080574890818212, 8);
  sqcRYGate(q, -1.5703976981887657, 9);
  sqcRZGate(q, -3.1409827714880443, 9);
  sqcRYGate(q, -1.5596870782209056, 10);
  sqcRZGate(q, -1.2730947317344123, 10);
  sqcRYGate(q, 1.5720230437066212, 11);
  sqcRZGate(q, 1.7737455994226305, 11);
  sqcRYGate(q, 3.140054652728454, 12);
  sqcRZGate(q, -0.4573480409944591, 12);
  sqcRYGate(q, 1.5709667014545925, 13);
  sqcRZGate(q, 1.5692775594169452, 13);
  sqcRYGate(q, 0.010755297874698757, 14);
  sqcRZGate(q, -0.560834156262137, 14);
  sqcRYGate(q, -0.049718547327541884, 15);
  sqcRZGate(q, 1.032360845930162, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, 1.5702445891198211, 0);
  sqcRZGate(q, 3.1060277284692974, 0);
  sqcRYGate(q, 0.0005204736197974569, 1);
  sqcRZGate(q, -2.6755459417141725, 1);
  sqcRYGate(q, -0.4027095176959837, 2);
  sqcRZGate(q, 2.2305184786317858, 2);
  sqcRYGate(q, -1.5697146960685933, 3);
  sqcRZGate(q, 3.1131575379922634, 3);
  sqcRYGate(q, -0.8812709002021295, 4);
  sqcRZGate(q, 1.5779599885770104, 4);
  sqcRYGate(q, 0.043453255323267825, 5);
  sqcRZGate(q, 1.5751065124544361, 5);
  sqcRYGate(q, 1.5681407340706803, 6);
  sqcRZGate(q, 1.3959090752209409, 6);
  sqcRYGate(q, 1.5709075113561766, 7);
  sqcRZGate(q, -3.127401580739648, 7);
  sqcRYGate(q, 1.5708079643991306, 8);
  sqcRZGate(q, 0.5785936009997918, 8);
  sqcRYGate(q, -1.5705682047876701, 9);
  sqcRZGate(q, 1.790958125573174, 9);
  sqcRYGate(q, -0.0005184228505861199, 10);
  sqcRZGate(q, -2.334072789583836, 10);
  sqcRYGate(q, -3.141563970047378, 11);
  sqcRZGate(q, 2.165346705937127, 11);
  sqcRYGate(q, -0.04713328660205551, 12);
  sqcRZGate(q, -0.6579401731561099, 12);
  sqcRYGate(q, -0.9766008004190043, 13);
  sqcRZGate(q, -3.140500986340166, 13);
  sqcRYGate(q, -1.6611778276711193, 14);
  sqcRZGate(q, -2.0795060089336883, 14);
  sqcRYGate(q, 0.00783384012183689, 15);
  sqcRZGate(q, 1.8890099295379994, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, 0.15473481147636628, 0);
  sqcRZGate(q, -1.534382528303113, 0);
  sqcRYGate(q, 1.5707617731845485, 1);
  sqcRZGate(q, 1.5699623247689205, 1);
  sqcRYGate(q, -3.140860106364557, 2);
  sqcRZGate(q, -2.4777223432002344, 2);
  sqcRYGate(q, -1.5655100277508436, 3);
  sqcRZGate(q, -0.002184847872567961, 3);
  sqcRYGate(q, -0.025698070357024892, 4);
  sqcRZGate(q, -1.579675615238576, 4);
  sqcRYGate(q, 0.1129798213141493, 5);
  sqcRZGate(q, 1.6597015357664453, 5);
  sqcRYGate(q, -0.0001591502816076229, 6);
  sqcRZGate(q, 3.0990346070146915, 6);
  sqcRYGate(q, -0.028704816440718872, 7);
  sqcRZGate(q, 2.6899266868402045, 7);
  sqcRYGate(q, 0.006090202516421783, 8);
  sqcRZGate(q, 0.9922383478846233, 8);
  sqcRYGate(q, -1.5707592069247838, 9);
  sqcRZGate(q, 3.0790640061222003, 9);
  sqcRYGate(q, -3.14150607605865, 10);
  sqcRZGate(q, -0.5553408446503699, 10);
  sqcRYGate(q, -6.278265885644636e-06, 11);
  sqcRZGate(q, -1.8731402201859997, 11);
  sqcRYGate(q, -0.0068029272343999025, 12);
  sqcRZGate(q, -2.0801841134940036, 12);
  sqcRYGate(q, -1.5716746943126116, 13);
  sqcRZGate(q, 0.00758746345116812, 13);
  sqcRYGate(q, -0.0006725323685703444, 14);
  sqcRZGate(q, -1.1499442599740453, 14);
  sqcRYGate(q, -3.139759778140364, 15);
  sqcRZGate(q, -0.21499708574054954, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, 1.571783470001047, 0);
  sqcRZGate(q, -0.04265271380435714, 0);
  sqcRYGate(q, -0.7508048144516403, 1);
  sqcRZGate(q, -0.0028591630672165635, 1);
  sqcRYGate(q, -0.8710289798322961, 2);
  sqcRZGate(q, 3.1388702753938023, 2);
  sqcRYGate(q, -1.5717880389890677, 3);
  sqcRZGate(q, 1.695525248736992, 3);
  sqcRYGate(q, 1.5712117540972974, 4);
  sqcRZGate(q, -0.43764603753353454, 4);
  sqcRYGate(q, -3.141566330091505, 5);
  sqcRZGate(q, -1.2327409780364604, 5);
  sqcRYGate(q, 2.177382431689523e-05, 6);
  sqcRZGate(q, 1.782249206488098, 6);
  sqcRYGate(q, 6.456752610528582e-05, 7);
  sqcRZGate(q, -1.214319562381841, 7);
  sqcRYGate(q, -1.5707582989077555, 8);
  sqcRZGate(q, 3.141393181506809, 8);
  sqcRYGate(q, -3.1411423799416736, 9);
  sqcRZGate(q, -1.6336569415633162, 9);
  sqcRYGate(q, -0.42559269474925987, 10);
  sqcRZGate(q, 1.5303438592877763, 10);
  sqcRYGate(q, 0.6296002230875795, 11);
  sqcRZGate(q, -1.4932319580791065, 11);
  sqcRYGate(q, 0.002254129636135577, 12);
  sqcRZGate(q, -1.9326960874182113, 12);
  sqcRYGate(q, -0.9773394340859575, 13);
  sqcRZGate(q, -1.4842954879433834, 13);
  sqcRYGate(q, -3.1320246567923737, 14);
  sqcRZGate(q, -0.13453220499181281, 14);
  sqcRYGate(q, 0.7975559200508532, 15);
  sqcRZGate(q, 0.039722747830727385, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, 0.1484883814003659, 0);
  sqcRZGate(q, 1.614944959337024, 0);
  sqcRYGate(q, 0.41013910097836614, 1);
  sqcRZGate(q, 1.569413082704779, 1);
  sqcRYGate(q, 0.09973489996084338, 2);
  sqcRZGate(q, -0.0005208195570194363, 2);
  sqcRYGate(q, -0.003918570904833444, 3);
  sqcRZGate(q, 3.0551801353155987, 3);
  sqcRYGate(q, 3.141560191521801, 4);
  sqcRZGate(q, -2.484648048981956, 4);
  sqcRYGate(q, 1.1808640260920663e-06, 5);
  sqcRZGate(q, 2.15805641702757, 5);
  sqcRYGate(q, 0.6152536973148853, 6);
  sqcRZGate(q, 0.5064191006649459, 6);
  sqcRYGate(q, 0.00015910683006126192, 7);
  sqcRZGate(q, 1.611917822359909, 7);
  sqcRYGate(q, -1.5742117483662723, 8);
  sqcRZGate(q, 0.0027401076254622166, 8);
  sqcRYGate(q, -1.5696199328527876, 9);
  sqcRZGate(q, 3.141274616936476, 9);
  sqcRYGate(q, 3.139259531887304, 10);
  sqcRZGate(q, -1.800021287402041, 10);
  sqcRYGate(q, -0.001992750089195639, 11);
  sqcRZGate(q, -0.6766963249664272, 11);
  sqcRYGate(q, 1.5707921281471777, 12);
  sqcRZGate(q, -3.1330845046896343, 12);
  sqcRYGate(q, 0.0003464973948104852, 13);
  sqcRZGate(q, 3.042508914322749, 13);
  sqcRYGate(q, 0.014153009269682215, 14);
  sqcRZGate(q, 1.619110484602217, 14);
  sqcRYGate(q, -0.003499250593581138, 15);
  sqcRZGate(q, 3.102311270543516, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, -1.572457705281946, 0);
  sqcRZGate(q, -3.141406168127028, 0);
  sqcRYGate(q, 1.5743141745819438, 1);
  sqcRZGate(q, -2.8780119857668107, 1);
  sqcRYGate(q, -0.7460931549636741, 2);
  sqcRZGate(q, -3.1386811481851713, 2);
  sqcRYGate(q, 3.1372274349499043, 3);
  sqcRZGate(q, -3.104526456305355, 3);
  sqcRYGate(q, -0.001076775461346959, 4);
  sqcRZGate(q, -0.07019992520378558, 4);
  sqcRYGate(q, -0.00010972437873402185, 5);
  sqcRZGate(q, 2.5265338681198535, 5);
  sqcRYGate(q, 3.1333378576055524, 6);
  sqcRZGate(q, -0.4520934007035161, 6);
  sqcRYGate(q, -0.007673745976013565, 7);
  sqcRZGate(q, -0.6176103267559654, 7);
  sqcRYGate(q, -2.9735219654390748, 8);
  sqcRZGate(q, 1.5732592844970004, 8);
  sqcRYGate(q, 1.5718932476450045, 9);
  sqcRZGate(q, 1.5709937661046016, 9);
  sqcRYGate(q, -3.1415718802286823, 10);
  sqcRZGate(q, 2.9530153416204254, 10);
  sqcRYGate(q, -3.1415644667987292, 11);
  sqcRZGate(q, -2.4249434796881544, 11);
  sqcRYGate(q, -1.4983630526765372, 12);
  sqcRZGate(q, 1.569804572791015, 12);
  sqcRYGate(q, -1.5288902513825187, 13);
  sqcRZGate(q, 3.1409249471210448, 13);
  sqcRYGate(q, -1.5783736013980547, 14);
  sqcRZGate(q, -1.5596389011174854, 14);
  sqcRYGate(q, 1.5707213785721534, 15);
  sqcRZGate(q, -3.1344178471721795, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, -1.5708480966258351, 0);
  sqcRZGate(q, -2.828278276409286, 0);
  sqcRYGate(q, 0.03128666979593941, 1);
  sqcRZGate(q, 2.983876333398256, 1);
  sqcRYGate(q, -0.5470514800846897, 2);
  sqcRZGate(q, -2.336207903742837, 2);
  sqcRYGate(q, -3.0910691614968395, 3);
  sqcRZGate(q, -0.28699882667514254, 3);
  sqcRYGate(q, -1.9045080535281682e-05, 4);
  sqcRZGate(q, 2.813253682744559, 4);
  sqcRYGate(q, 5.569955673845328e-05, 5);
  sqcRZGate(q, -0.2081895124456596, 5);
  sqcRYGate(q, 2.7466510760952285e-05, 6);
  sqcRZGate(q, -2.51324557760304, 6);
  sqcRYGate(q, 7.365634594737448e-05, 7);
  sqcRZGate(q, -1.9128168150543887, 7);
  sqcRYGate(q, 1.5707620177649924, 8);
  sqcRZGate(q, -1.570751066714129, 8);
  sqcRYGate(q, 1.5708362587431455, 9);
  sqcRZGate(q, -1.5706605722753728, 9);
  sqcRYGate(q, -0.23793700209916047, 10);
  sqcRZGate(q, 1.5709363433168246, 10);
  sqcRYGate(q, -0.00035207131987924356, 11);
  sqcRZGate(q, 1.8240117497980723, 11);
  sqcRYGate(q, 1.570261689759682, 12);
  sqcRZGate(q, 1.6274181951109004, 12);
  sqcRYGate(q, -1.5683999302914282, 13);
  sqcRZGate(q, -1.9184184808861628, 13);
  sqcRYGate(q, -0.04864347510870867, 14);
  sqcRZGate(q, 3.122797916735361, 14);
  sqcRYGate(q, -1.571757935206219, 15);
  sqcRZGate(q, 1.5710301838920806, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, -1.5712103865699545, 0);
  sqcRZGate(q, -8.863688898114972e-06, 0);
  sqcRYGate(q, -1.5706790198071825, 1);
  sqcRZGate(q, 2.1344635176290834, 1);
  sqcRYGate(q, -3.1414612191643445, 2);
  sqcRZGate(q, 1.0359271847791343, 2);
  sqcRYGate(q, -3.1412040904175327, 3);
  sqcRZGate(q, -1.8566528145178873, 3);
  sqcRYGate(q, 0.0013992166463383526, 4);
  sqcRZGate(q, -1.0150534717484028, 4);
  sqcRYGate(q, 1.5705406930391836, 5);
  sqcRZGate(q, 0.0003944575758350055, 5);
  sqcRYGate(q, 0.00011906498870484228, 6);
  sqcRZGate(q, -2.8184955123964337, 6);
  sqcRYGate(q, 4.300246214824923e-05, 7);
  sqcRZGate(q, -2.1420825684512916, 7);
  sqcRYGate(q, 1.571784516443766, 8);
  sqcRZGate(q, -0.001359735106094995, 8);
  sqcRYGate(q, -2.9378831306789865, 9);
  sqcRZGate(q, 1.7786988027702277, 9);
  sqcRYGate(q, 2.2423891178124093, 10);
  sqcRZGate(q, -2.0773815242511615, 10);
  sqcRYGate(q, 3.126924996780161, 11);
  sqcRZGate(q, -0.001522880530589637, 11);
  sqcRYGate(q, -3.1413660377702324, 12);
  sqcRZGate(q, 3.11654299173154, 12);
  sqcRYGate(q, -0.000738118853166988, 13);
  sqcRZGate(q, -1.2256777007631878, 13);
  sqcRYGate(q, 3.0592905542365854, 14);
  sqcRZGate(q, 1.5637714723794234, 14);
  sqcRYGate(q, 1.499490808808205, 15);
  sqcRZGate(q, -1.5722799823735754, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, -1.5709743134814689, 0);
  sqcRZGate(q, 1.2032891543169908, 0);
  sqcRYGate(q, 3.140482173237933, 1);
  sqcRZGate(q, -0.9135602455000269, 1);
  sqcRYGate(q, -0.00025054836597160346, 2);
  sqcRZGate(q, 2.911881642068388, 2);
  sqcRYGate(q, 1.5704454101037202, 3);
  sqcRZGate(q, 0.7490795363013669, 3);
  sqcRYGate(q, -3.1415833785964127, 4);
  sqcRZGate(q, -0.686388400076024, 4);
  sqcRYGate(q, 3.141451354484134, 5);
  sqcRZGate(q, 1.615515693192898, 5);
  sqcRYGate(q, -1.5708742296574172, 6);
  sqcRZGate(q, 1.6135327374354582, 6);
  sqcRYGate(q, -1.5712631218447166, 7);
  sqcRZGate(q, 1.5659808304639071, 7);
  sqcRYGate(q, -1.5652948141463208, 8);
  sqcRZGate(q, -6.772103642393999e-05, 8);
  sqcRYGate(q, -3.1415908410579445, 9);
  sqcRZGate(q, -2.9293221668073275, 9);
  sqcRYGate(q, 1.0313340966128237e-05, 10);
  sqcRZGate(q, -0.5668098850691378, 10);
  sqcRYGate(q, 1.5702157699343244, 11);
  sqcRZGate(q, 2.9423073707962195, 11);
  sqcRYGate(q, 1.5707893118794214, 12);
  sqcRZGate(q, -0.9229451614145541, 12);
  sqcRYGate(q, -3.090276998542579, 13);
  sqcRZGate(q, -2.9760939665377397, 13);
  sqcRYGate(q, -1.5775099544555455, 14);
  sqcRZGate(q, -0.0031519505536074556, 14);
  sqcRYGate(q, -1.5705607313991297, 15);
  sqcRZGate(q, -2.6669885878643256, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, -1.0068348301589174e-05, 0);
  sqcRZGate(q, 2.0399648859920623, 0);
  sqcRYGate(q, -0.00019930267723866022, 1);
  sqcRZGate(q, 1.4784344043066406, 1);
  sqcRYGate(q, 1.5713656679162895, 2);
  sqcRZGate(q, -1.570792512329498, 2);
  sqcRYGate(q, 8.370719678521932e-06, 3);
  sqcRZGate(q, -0.7252887340370684, 3);
  sqcRYGate(q, 1.8812128370626624e-05, 4);
  sqcRZGate(q, -1.2581546972650468, 4);
  sqcRYGate(q, -0.021605704735816467, 5);
  sqcRZGate(q, 1.5265738283526824, 5);
  sqcRYGate(q, 3.141534222571834, 6);
  sqcRZGate(q, -1.5282474501147236, 6);
  sqcRYGate(q, -0.027222712612520853, 7);
  sqcRZGate(q, 0.8866457371060518, 7);
  sqcRYGate(q, 1.5709543425526666, 8);
  sqcRZGate(q, 1.5708017969009616, 8);
  sqcRYGate(q, 0.06686168259815517, 9);
  sqcRZGate(q, -0.921878824501415, 9);
  sqcRYGate(q, -3.138700978525977, 10);
  sqcRZGate(q, 2.0814807039518657, 10);
  sqcRYGate(q, 3.1414983028609194, 11);
  sqcRZGate(q, 1.3713799774429596, 11);
  sqcRYGate(q, -3.141587744020398, 12);
  sqcRZGate(q, 0.6069647196180492, 12);
  sqcRYGate(q, -3.1415552764076162, 13);
  sqcRZGate(q, 0.16855585937308828, 13);
  sqcRYGate(q, 1.57058623986444, 14);
  sqcRZGate(q, 3.013325037296185, 14);
  sqcRYGate(q, -3.0495423374337163, 15);
  sqcRZGate(q, -2.112008082285043, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, -1.5707261637793706, 0);
  sqcRZGate(q, -1.3003031870171635, 0);
  sqcRYGate(q, 1.5707958542212241, 1);
  sqcRZGate(q, 2.499638398466269, 1);
  sqcRYGate(q, 1.6015137068275658, 2);
  sqcRZGate(q, -1.3000365184076252, 2);
  sqcRYGate(q, 3.140889053079605, 3);
  sqcRZGate(q, -0.6179621396033905, 3);
  sqcRYGate(q, 1.5706457737229291, 4);
  sqcRZGate(q, 0.27052903787623805, 4);
  sqcRYGate(q, 1.5708224102794237, 5);
  sqcRZGate(q, 0.928812489593466, 5);
  sqcRYGate(q, 1.5707883259445103, 6);
  sqcRZGate(q, 1.8411875618092353, 6);
  sqcRYGate(q, 3.141476288081759, 7);
  sqcRZGate(q, 1.8106499768510655, 7);
  sqcRYGate(q, 1.5707285992654536, 8);
  sqcRZGate(q, 0.27549250100053957, 8);
  sqcRYGate(q, -3.1415319508699278, 9);
  sqcRZGate(q, 0.010314752073800585, 9);
  sqcRYGate(q, -0.03243030965311622, 10);
  sqcRZGate(q, -1.3135978354222475, 10);
  sqcRYGate(q, -1.5709261560476007, 11);
  sqcRZGate(q, -0.6423204009190756, 11);
  sqcRYGate(q, 1.5901663185907378, 12);
  sqcRZGate(q, 1.8895313483088216, 12);
  sqcRYGate(q, 1.5728427930965418, 13);
  sqcRZGate(q, 2.4993359279549794, 13);
  sqcRYGate(q, -0.002983540445330668, 14);
  sqcRZGate(q, -1.1720610011626507, 14);
  sqcRYGate(q, 3.141513009439256, 15);
  sqcRZGate(q, -0.08856875283506493, 15);

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
