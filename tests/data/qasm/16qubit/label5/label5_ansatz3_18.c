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

  sqcRYGate(q, -0.8845816109759077, 0);
  sqcRZGate(q, -2.4473103599960035, 0);
  sqcRYGate(q, -1.6787660343511028, 1);
  sqcRZGate(q, 1.322142660225912, 1);
  sqcRYGate(q, -0.6344115429981134, 2);
  sqcRZGate(q, -0.5106537907946778, 2);
  sqcRYGate(q, 1.0664086043634158, 3);
  sqcRZGate(q, 2.7573529791310003, 3);
  sqcRYGate(q, 3.1364293567402304, 4);
  sqcRZGate(q, -2.6923121650658928, 4);
  sqcRYGate(q, -0.9993184675002124, 5);
  sqcRZGate(q, -0.3869039133079857, 5);
  sqcRYGate(q, 2.511033125818686, 6);
  sqcRZGate(q, -0.42730202083640856, 6);
  sqcRYGate(q, -0.00014275095284865813, 7);
  sqcRZGate(q, 1.5736183555604357, 7);
  sqcRYGate(q, -1.5716739971276512, 8);
  sqcRZGate(q, -0.2762470298925912, 8);
  sqcRYGate(q, 6.538143340328872e-05, 9);
  sqcRZGate(q, 2.235351827641434, 9);
  sqcRYGate(q, 1.1999181902493157, 10);
  sqcRZGate(q, -2.361364553017338, 10);
  sqcRYGate(q, -1.5713275392884152, 11);
  sqcRZGate(q, -0.47668942654008845, 11);
  sqcRYGate(q, 0.001480698844034448, 12);
  sqcRZGate(q, -1.4430857976077853, 12);
  sqcRYGate(q, 1.5708760088428781, 13);
  sqcRZGate(q, 5.01577607163739e-05, 13);
  sqcRYGate(q, -0.6887936860583057, 14);
  sqcRZGate(q, -3.1409116081358377, 14);
  sqcRYGate(q, -3.1390393027423777, 15);
  sqcRZGate(q, 3.108962855913656, 15);
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
  sqcRYGate(q, 2.4477654913057014, 0);
  sqcRZGate(q, 1.2709699412983224, 0);
  sqcRYGate(q, 1.9456435453347876, 1);
  sqcRZGate(q, 0.08698907862373988, 1);
  sqcRYGate(q, -1.2812176869868555, 2);
  sqcRZGate(q, -0.3407130048290474, 2);
  sqcRYGate(q, 0.5501836766833019, 3);
  sqcRZGate(q, -1.472010415846058, 3);
  sqcRYGate(q, 3.059459429367866, 4);
  sqcRZGate(q, -0.7437189224973405, 4);
  sqcRYGate(q, 1.9923238012659068, 5);
  sqcRZGate(q, -2.24721478232022, 5);
  sqcRYGate(q, 1.572389104310771, 6);
  sqcRZGate(q, -0.7703620376282486, 6);
  sqcRYGate(q, 0.0003962765240430276, 7);
  sqcRZGate(q, -1.828858546800841, 7);
  sqcRYGate(q, 0.001926631448047722, 8);
  sqcRZGate(q, -1.8294734091444345, 8);
  sqcRYGate(q, 3.139752985667826, 9);
  sqcRZGate(q, 3.023925635199289, 9);
  sqcRYGate(q, 1.635824084705514, 10);
  sqcRZGate(q, -0.2575506501262277, 10);
  sqcRYGate(q, 1.5721739515343278, 11);
  sqcRZGate(q, 3.0951345827856325, 11);
  sqcRYGate(q, -3.1406388182329046, 12);
  sqcRZGate(q, 0.7288633579763587, 12);
  sqcRYGate(q, -1.5748106284875325, 13);
  sqcRZGate(q, -1.8934712343836555, 13);
  sqcRYGate(q, 0.6889687258709936, 14);
  sqcRZGate(q, 0.37256216936855635, 14);
  sqcRYGate(q, -1.8809164143777073, 15);
  sqcRZGate(q, -1.923240290710848, 15);
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
  sqcRYGate(q, 1.2578473705594293, 0);
  sqcRZGate(q, -2.9550402775540365, 0);
  sqcRYGate(q, -0.6974056777158362, 1);
  sqcRZGate(q, 0.4487072217905769, 1);
  sqcRYGate(q, 1.9408619949814714, 2);
  sqcRZGate(q, 0.653583002162313, 2);
  sqcRYGate(q, 2.057638977115635, 3);
  sqcRZGate(q, -2.3886835006615352, 3);
  sqcRYGate(q, 3.141005620498541, 4);
  sqcRZGate(q, 1.125084885973795, 4);
  sqcRYGate(q, -1.7091237581074834, 5);
  sqcRZGate(q, 2.2447729784148005, 5);
  sqcRYGate(q, 0.0507472981267674, 6);
  sqcRZGate(q, 2.3583846513155278, 6);
  sqcRYGate(q, 3.1404981439688715, 7);
  sqcRZGate(q, -2.08131011243319, 7);
  sqcRYGate(q, 0.3417137250795859, 8);
  sqcRZGate(q, 1.6293985704146436, 8);
  sqcRYGate(q, -0.1717794374619972, 9);
  sqcRZGate(q, -2.483084140066526, 9);
  sqcRYGate(q, 2.7664562460759843, 10);
  sqcRZGate(q, -2.116779129187589, 10);
  sqcRYGate(q, -2.5449718841693043, 11);
  sqcRZGate(q, -1.9793863763699782, 11);
  sqcRYGate(q, 0.0014791307229060635, 12);
  sqcRZGate(q, 1.2063304763769251, 12);
  sqcRYGate(q, -0.08280692697813925, 13);
  sqcRZGate(q, 1.3199824361139498, 13);
  sqcRYGate(q, 3.1401098706250568, 14);
  sqcRZGate(q, 2.5576616794881613, 14);
  sqcRYGate(q, -0.7783360465833251, 15);
  sqcRZGate(q, -1.1405478370695075, 15);
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
  sqcRYGate(q, -1.9028021958750456, 0);
  sqcRZGate(q, 2.24203900858564, 0);
  sqcRYGate(q, -1.2818524871672639, 1);
  sqcRZGate(q, -1.2552055988013349, 1);
  sqcRYGate(q, 2.6827330781523404, 2);
  sqcRZGate(q, 0.02476976303580969, 2);
  sqcRYGate(q, -2.1375008867997787, 3);
  sqcRZGate(q, 0.46443204491704615, 3);
  sqcRYGate(q, -1.101790767216071, 4);
  sqcRZGate(q, -2.4422192202977167, 4);
  sqcRYGate(q, 1.858518848784981, 5);
  sqcRZGate(q, -2.4014622037880975, 5);
  sqcRYGate(q, -2.0252642242455527, 6);
  sqcRZGate(q, 1.2945716358436974, 6);
  sqcRYGate(q, 0.00011509078686877672, 7);
  sqcRZGate(q, 2.480080008788282, 7);
  sqcRYGate(q, -0.0026591707566667997, 8);
  sqcRZGate(q, -1.1103796877844059, 8);
  sqcRYGate(q, -3.138808308761173, 9);
  sqcRZGate(q, -2.48834049425181, 9);
  sqcRYGate(q, 3.1411778315668903, 10);
  sqcRZGate(q, -2.617907071840172, 10);
  sqcRYGate(q, 3.139632844873513, 11);
  sqcRZGate(q, -1.9230089696873405, 11);
  sqcRYGate(q, -0.0024793202024664396, 12);
  sqcRZGate(q, 0.667225283718943, 12);
  sqcRYGate(q, 3.1365004057106645, 13);
  sqcRZGate(q, -0.41671596655841725, 13);
  sqcRYGate(q, 0.0009159818844040046, 14);
  sqcRZGate(q, -2.645665041530246, 14);
  sqcRYGate(q, -2.554791716503232, 15);
  sqcRZGate(q, 0.5243137204173705, 15);
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
  sqcRYGate(q, 1.167611848086305, 0);
  sqcRZGate(q, 1.9527939126558342, 0);
  sqcRYGate(q, 1.6384290816238507, 1);
  sqcRZGate(q, 1.7240871492347372, 1);
  sqcRYGate(q, -2.9772477403851316, 2);
  sqcRZGate(q, -1.2666396983579138, 2);
  sqcRYGate(q, -2.7235153203387137, 3);
  sqcRZGate(q, -2.9447266103803824, 3);
  sqcRYGate(q, 3.1407078905695514, 4);
  sqcRZGate(q, -2.397148875727918, 4);
  sqcRYGate(q, -0.8341921762149251, 5);
  sqcRZGate(q, -0.10982062515088398, 5);
  sqcRYGate(q, 3.1398520311758182, 6);
  sqcRZGate(q, 1.3093286055567912, 6);
  sqcRYGate(q, 3.141339801611738, 7);
  sqcRZGate(q, 2.956550653031271, 7);
  sqcRYGate(q, 1.704632705744729, 8);
  sqcRZGate(q, 2.3000014756002423, 8);
  sqcRYGate(q, 2.9702965026219688, 9);
  sqcRZGate(q, 1.9324703715643898, 9);
  sqcRYGate(q, 1.308225758191842, 10);
  sqcRZGate(q, 3.002981938823317, 10);
  sqcRYGate(q, 2.166184578774704, 11);
  sqcRZGate(q, 2.9671346541712857, 11);
  sqcRYGate(q, 3.140836416404635, 12);
  sqcRZGate(q, 3.120980017010034, 12);
  sqcRYGate(q, -1.090012583932423, 13);
  sqcRZGate(q, 1.8883142501691421, 13);
  sqcRYGate(q, 1.9175146261384992, 14);
  sqcRZGate(q, 2.2536471427898164, 14);
  sqcRYGate(q, 1.1135116303067063, 15);
  sqcRZGate(q, 0.30169281658651936, 15);
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
  sqcRYGate(q, -2.5625836647942095, 0);
  sqcRZGate(q, -3.0686839599190487, 0);
  sqcRYGate(q, -1.9191472199075372, 1);
  sqcRZGate(q, 3.130239198993053, 1);
  sqcRYGate(q, 1.5178648415564933, 2);
  sqcRZGate(q, 0.7166981082871083, 2);
  sqcRYGate(q, 2.866533060453116, 3);
  sqcRZGate(q, -0.9855567550393268, 3);
  sqcRYGate(q, 2.5151642410881943, 4);
  sqcRZGate(q, 1.6587527319572566, 4);
  sqcRYGate(q, -1.9497568815023225, 5);
  sqcRZGate(q, 2.984299379441031, 5);
  sqcRYGate(q, -1.3027847189915205, 6);
  sqcRZGate(q, 2.98967678969747, 6);
  sqcRYGate(q, -0.00010210008635247055, 7);
  sqcRZGate(q, 2.396374661263021, 7);
  sqcRYGate(q, -0.000444660709077798, 8);
  sqcRZGate(q, 3.075958542336723, 8);
  sqcRYGate(q, 3.141383065184387, 9);
  sqcRZGate(q, -0.5477182578591631, 9);
  sqcRYGate(q, -0.0008566776644896024, 10);
  sqcRZGate(q, -2.8256397190011655, 10);
  sqcRYGate(q, -2.844078006565949, 11);
  sqcRZGate(q, -2.2871442473812142, 11);
  sqcRYGate(q, -3.14120012447805, 12);
  sqcRZGate(q, 2.919016077819835, 12);
  sqcRYGate(q, 2.794738089931561, 13);
  sqcRZGate(q, 3.140121753872071, 13);
  sqcRYGate(q, -0.30322711184745804, 14);
  sqcRZGate(q, -2.2304061075284114, 14);
  sqcRYGate(q, 1.9778735231283848, 15);
  sqcRZGate(q, -0.9929725239986098, 15);
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
  sqcRYGate(q, -2.254626686144988, 0);
  sqcRZGate(q, 1.9247137788554947, 0);
  sqcRYGate(q, 1.1258328052459337, 1);
  sqcRZGate(q, -0.9270511864128977, 1);
  sqcRYGate(q, 0.3360093367643781, 2);
  sqcRZGate(q, -1.9314095760739012, 2);
  sqcRYGate(q, -1.6532803688188595, 3);
  sqcRZGate(q, 2.3826690542600493, 3);
  sqcRYGate(q, 3.140418957442664, 4);
  sqcRZGate(q, -0.055066193920791484, 4);
  sqcRYGate(q, -0.6610254236257314, 5);
  sqcRZGate(q, -1.7166265945562218, 5);
  sqcRYGate(q, -2.2672510420809946, 6);
  sqcRZGate(q, -1.605983831511491, 6);
  sqcRYGate(q, 0.0014760654497987249, 7);
  sqcRZGate(q, 2.986991072944326, 7);
  sqcRYGate(q, -2.0999618181442115, 8);
  sqcRZGate(q, 1.0985828660355743, 8);
  sqcRYGate(q, 3.1409599238885946, 9);
  sqcRZGate(q, -1.9455793814981996, 9);
  sqcRYGate(q, -1.6388498610543922, 10);
  sqcRZGate(q, -0.5140331567011369, 10);
  sqcRYGate(q, 3.1411656119444586, 11);
  sqcRZGate(q, 0.6801688664085231, 11);
  sqcRYGate(q, 0.00041403323730509296, 12);
  sqcRZGate(q, 1.753237594063651, 12);
  sqcRYGate(q, -0.0018330003711920625, 13);
  sqcRZGate(q, 0.15689019389578274, 13);
  sqcRYGate(q, -0.7853421430023806, 14);
  sqcRZGate(q, 1.513724714252172, 14);
  sqcRYGate(q, 0.0019694564064650223, 15);
  sqcRZGate(q, -2.1508053884886555, 15);
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
  sqcRYGate(q, 1.965225895195524, 0);
  sqcRZGate(q, -2.4347117041673365, 0);
  sqcRYGate(q, -0.5740314948819041, 1);
  sqcRZGate(q, 2.375089918468486, 1);
  sqcRYGate(q, 2.204235672830521, 2);
  sqcRZGate(q, 1.9718187141897383, 2);
  sqcRYGate(q, -3.040070897616039, 3);
  sqcRZGate(q, -1.7681442134585037, 3);
  sqcRYGate(q, 3.132634807095688, 4);
  sqcRZGate(q, -2.8827222597735815, 4);
  sqcRYGate(q, -0.1527889445142117, 5);
  sqcRZGate(q, 3.0168689458174334, 5);
  sqcRYGate(q, -3.1401650502971257, 6);
  sqcRZGate(q, 2.5204420266607412, 6);
  sqcRYGate(q, -3.141570133061939, 7);
  sqcRZGate(q, -2.7777064575706456, 7);
  sqcRYGate(q, 1.161632996804668, 8);
  sqcRZGate(q, 0.3943497194172947, 8);
  sqcRYGate(q, -1.9739586206248259, 9);
  sqcRZGate(q, 1.7694574324660346, 9);
  sqcRYGate(q, 3.1382177186741393, 10);
  sqcRZGate(q, 2.801834447587521, 10);
  sqcRYGate(q, -3.1248963705739774, 11);
  sqcRZGate(q, 1.3547823880308156, 11);
  sqcRYGate(q, -3.1413019638262143, 12);
  sqcRZGate(q, 2.7400276740689424, 12);
  sqcRYGate(q, 1.9268412808401871, 13);
  sqcRZGate(q, 1.64337318583794, 13);
  sqcRYGate(q, -1.2601799427096285, 14);
  sqcRZGate(q, -2.830929517268758, 14);
  sqcRYGate(q, -1.047803674186552, 15);
  sqcRZGate(q, 2.9170050095216333, 15);
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
  sqcRYGate(q, 2.029352533924415, 0);
  sqcRZGate(q, -2.367301105042388, 0);
  sqcRYGate(q, -0.9863402167589237, 1);
  sqcRZGate(q, -1.2165399273549609, 1);
  sqcRYGate(q, 2.698786719691545, 2);
  sqcRZGate(q, 0.87948509034337, 2);
  sqcRYGate(q, -2.0412837871354146, 3);
  sqcRZGate(q, 1.6621117870384337, 3);
  sqcRYGate(q, 0.5224397632585367, 4);
  sqcRZGate(q, 0.953470004157807, 4);
  sqcRYGate(q, 1.6095204056486958, 5);
  sqcRZGate(q, 1.2165528607905245, 5);
  sqcRYGate(q, 1.5940693586514048, 6);
  sqcRZGate(q, 1.3129344375551393, 6);
  sqcRYGate(q, -3.132346108948583, 7);
  sqcRZGate(q, 0.8030405691264846, 7);
  sqcRYGate(q, 3.1412057398028077, 8);
  sqcRZGate(q, -2.631538519193937, 8);
  sqcRYGate(q, 0.00036559596104979164, 9);
  sqcRZGate(q, -1.6142985888531003, 9);
  sqcRYGate(q, -0.0004362905395831618, 10);
  sqcRZGate(q, 0.856890226528461, 10);
  sqcRYGate(q, 3.141485124857295, 11);
  sqcRZGate(q, 0.47809001952943125, 11);
  sqcRYGate(q, -3.0591907206898843, 12);
  sqcRZGate(q, 2.5258734973369226, 12);
  sqcRYGate(q, -1.018760441890426, 13);
  sqcRZGate(q, -0.04184824788199659, 13);
  sqcRYGate(q, 2.4907832701886434, 14);
  sqcRZGate(q, -0.16465408972859932, 14);
  sqcRYGate(q, -0.1903163883885277, 15);
  sqcRZGate(q, 3.129094441766925, 15);
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
  sqcRYGate(q, 1.943729595382309, 0);
  sqcRZGate(q, -2.5983750022621783, 0);
  sqcRYGate(q, 3.028405905223984, 1);
  sqcRZGate(q, 1.7762894114792669, 1);
  sqcRYGate(q, 1.7724595245642565, 2);
  sqcRZGate(q, 0.004112508378538494, 2);
  sqcRYGate(q, 1.611267524196836, 3);
  sqcRZGate(q, 1.5973809662229141, 3);
  sqcRYGate(q, -3.1355703954523473, 4);
  sqcRZGate(q, -2.2338444980147183, 4);
  sqcRYGate(q, 3.135352291670654, 5);
  sqcRZGate(q, 3.0164027801644133, 5);
  sqcRYGate(q, 0.010035930474697531, 6);
  sqcRZGate(q, -2.7916801282994848, 6);
  sqcRYGate(q, -0.00041381203949669904, 7);
  sqcRZGate(q, -0.8445468714522513, 7);
  sqcRYGate(q, -0.9764002068978161, 8);
  sqcRZGate(q, -1.7144361504655392, 8);
  sqcRYGate(q, 1.5830610886773175, 9);
  sqcRZGate(q, -1.2614854778056974, 9);
  sqcRYGate(q, 0.002177141683915656, 10);
  sqcRZGate(q, 2.234841301340409, 10);
  sqcRYGate(q, -1.5668627766404137, 11);
  sqcRZGate(q, -1.1156076803644936, 11);
  sqcRYGate(q, 0.0004118568141733579, 12);
  sqcRZGate(q, -1.6483745602349609, 12);
  sqcRYGate(q, -1.4924041899309544, 13);
  sqcRZGate(q, -0.04335225706883793, 13);
  sqcRYGate(q, -3.1213705936268012, 14);
  sqcRZGate(q, -1.0660056116250816, 14);
  sqcRYGate(q, 1.5700046699647976, 15);
  sqcRZGate(q, -0.3118560656015838, 15);
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
  sqcRYGate(q, 0.00018721086045346937, 0);
  sqcRZGate(q, -0.3124382229798897, 0);
  sqcRYGate(q, -1.8738599023305074, 1);
  sqcRZGate(q, 2.132351281429475, 1);
  sqcRYGate(q, -0.7226997158844384, 2);
  sqcRZGate(q, -1.5494859810884947, 2);
  sqcRYGate(q, -1.563091567001238, 3);
  sqcRZGate(q, 3.1352734502913884, 3);
  sqcRYGate(q, -3.01834848299095, 4);
  sqcRZGate(q, 2.2679191850648532, 4);
  sqcRYGate(q, -2.147748268820033, 5);
  sqcRZGate(q, -1.7714515188538114, 5);
  sqcRYGate(q, -2.0854156661639918, 6);
  sqcRZGate(q, -1.5708714859104527, 6);
  sqcRYGate(q, -3.1307185446566614, 7);
  sqcRZGate(q, 0.06273022146256224, 7);
  sqcRYGate(q, 3.1414676040556557, 8);
  sqcRZGate(q, 3.0603348364548983, 8);
  sqcRYGate(q, -0.0003371801503626517, 9);
  sqcRZGate(q, 0.08898573767414313, 9);
  sqcRYGate(q, 0.0003493015027213886, 10);
  sqcRZGate(q, 0.5360309105613243, 10);
  sqcRYGate(q, -3.138941816671074, 11);
  sqcRZGate(q, 2.8604233209517287, 11);
  sqcRYGate(q, -1.5623833552716961, 12);
  sqcRZGate(q, -1.2820346370719902, 12);
  sqcRYGate(q, 2.8362829828137097, 13);
  sqcRZGate(q, 1.459371604134783, 13);
  sqcRYGate(q, 0.20068834667903027, 14);
  sqcRZGate(q, -0.9787535717018602, 14);
  sqcRYGate(q, 0.012902684468420682, 15);
  sqcRZGate(q, 1.8884131667363668, 15);
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
  sqcRYGate(q, 1.321344275494621, 0);
  sqcRZGate(q, 1.5694661768616074, 0);
  sqcRYGate(q, 3.129499161621439, 1);
  sqcRZGate(q, 2.077859664745767, 1);
  sqcRYGate(q, -1.5708927818798442, 2);
  sqcRZGate(q, -1.6950787961135327, 2);
  sqcRYGate(q, 0.5573559927888265, 3);
  sqcRZGate(q, 1.5813004393214587, 3);
  sqcRYGate(q, 8.348874012342323e-05, 4);
  sqcRZGate(q, 2.9335416977013167, 4);
  sqcRYGate(q, -2.85147480292293, 5);
  sqcRZGate(q, -2.2561547263850863, 5);
  sqcRYGate(q, -0.0010699070266095845, 6);
  sqcRZGate(q, 1.3040361177979654, 6);
  sqcRYGate(q, -0.0011997798112659554, 7);
  sqcRZGate(q, -2.871215132979341, 7);
  sqcRYGate(q, 1.5242775502137569, 8);
  sqcRZGate(q, -1.0530803435213398, 8);
  sqcRYGate(q, -0.5320650260262266, 9);
  sqcRZGate(q, 2.062427201027382, 9);
  sqcRYGate(q, 3.141135574586599, 10);
  sqcRZGate(q, -1.4508679952375463, 10);
  sqcRYGate(q, -0.005964972873219843, 11);
  sqcRZGate(q, -2.5146517947770355, 11);
  sqcRYGate(q, -3.141454032234371, 12);
  sqcRZGate(q, -2.848472426295049, 12);
  sqcRYGate(q, -0.9148009447758836, 13);
  sqcRZGate(q, 2.5849865523118765, 13);
  sqcRYGate(q, 2.5528109980577085e-05, 14);
  sqcRZGate(q, 1.7488129617729244, 14);
  sqcRYGate(q, 0.0020570534914687855, 15);
  sqcRZGate(q, 0.6655576926004975, 15);
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
  sqcRYGate(q, 1.8976873699861905, 0);
  sqcRZGate(q, 1.4064753099720502, 0);
  sqcRYGate(q, -1.8288330237159176, 1);
  sqcRZGate(q, -3.1076170457692456, 1);
  sqcRYGate(q, -1.569410401625671, 2);
  sqcRZGate(q, 1.0172578091935058, 2);
  sqcRYGate(q, -1.5622024304075857, 3);
  sqcRZGate(q, -0.6020680386607774, 3);
  sqcRYGate(q, 0.0014051548682258964, 4);
  sqcRZGate(q, -0.31596525189218655, 4);
  sqcRYGate(q, 0.020041839507315144, 5);
  sqcRZGate(q, -1.5027188875082913, 5);
  sqcRYGate(q, 0.5828083702643649, 6);
  sqcRZGate(q, 0.017650082796845008, 6);
  sqcRYGate(q, 3.1349408091812414, 7);
  sqcRZGate(q, 0.3132007152299287, 7);
  sqcRYGate(q, 8.88908336538208e-06, 8);
  sqcRZGate(q, -1.595149724936354, 8);
  sqcRYGate(q, -0.000253677970290504, 9);
  sqcRZGate(q, 0.9446703246161527, 9);
  sqcRYGate(q, 1.571319782395384, 10);
  sqcRZGate(q, 0.9237139524126388, 10);
  sqcRYGate(q, 0.0027109364906641176, 11);
  sqcRZGate(q, -3.0332015195586957, 11);
  sqcRYGate(q, -1.697336084206599, 12);
  sqcRZGate(q, 0.006140434593594256, 12);
  sqcRYGate(q, 0.02594628788498543, 13);
  sqcRZGate(q, 2.1953444186713638, 13);
  sqcRYGate(q, -1.4260472164709261, 14);
  sqcRZGate(q, -2.1545718592584935, 14);
  sqcRYGate(q, -3.139790887180753, 15);
  sqcRZGate(q, -2.4678071225154734, 15);
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
  sqcRYGate(q, -1.5700932178011147, 0);
  sqcRZGate(q, 3.1323453474329837, 0);
  sqcRYGate(q, 1.666307410857701, 1);
  sqcRZGate(q, 1.056697988146491, 1);
  sqcRYGate(q, 3.1286880348108204, 2);
  sqcRZGate(q, 2.583596936610308, 2);
  sqcRYGate(q, -0.45514561375307316, 3);
  sqcRZGate(q, 1.7626121795634657, 3);
  sqcRYGate(q, 0.0002407868687868131, 4);
  sqcRZGate(q, 1.6631330280268788, 4);
  sqcRYGate(q, 3.139184787524435, 5);
  sqcRZGate(q, 2.5353759218513896, 5);
  sqcRYGate(q, 1.5790780564271145, 6);
  sqcRZGate(q, -0.005886234183618846, 6);
  sqcRYGate(q, -0.0003453095481171787, 7);
  sqcRZGate(q, 1.7482119332250572, 7);
  sqcRYGate(q, -2.412794005776123, 8);
  sqcRZGate(q, -1.288137645353516, 8);
  sqcRYGate(q, -1.0700051764553906, 9);
  sqcRZGate(q, 0.06849164803836297, 9);
  sqcRYGate(q, 3.141442020665998, 10);
  sqcRZGate(q, 0.14323591978453276, 10);
  sqcRYGate(q, 1.5695727852512147, 11);
  sqcRZGate(q, 3.141455085771539, 11);
  sqcRYGate(q, 1.5705863818986794, 12);
  sqcRZGate(q, -2.530007071519552, 12);
  sqcRYGate(q, 1.63350580372968, 13);
  sqcRZGate(q, 1.73413920626326, 13);
  sqcRYGate(q, -1.5649389438410806, 14);
  sqcRZGate(q, -2.1740841904157167, 14);
  sqcRYGate(q, 1.5741462490349791, 15);
  sqcRZGate(q, -0.8296702177038998, 15);
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
  sqcRYGate(q, -0.3906628438839954, 0);
  sqcRZGate(q, 3.121945080184516, 0);
  sqcRYGate(q, 1.561420632534557, 1);
  sqcRZGate(q, -0.001476885618942752, 1);
  sqcRYGate(q, -1.5727856032549896, 2);
  sqcRZGate(q, 1.7229487127514425, 2);
  sqcRYGate(q, -1.574170111480429, 3);
  sqcRZGate(q, 3.13473399054816, 3);
  sqcRYGate(q, 0.002096975616550978, 4);
  sqcRZGate(q, 0.05648821627262672, 4);
  sqcRYGate(q, -1.9558095688489177, 5);
  sqcRZGate(q, 2.1536052423061633, 5);
  sqcRYGate(q, 2.116384159216472, 6);
  sqcRZGate(q, 1.7953935268684595, 6);
  sqcRYGate(q, -1.5688893830327284, 7);
  sqcRZGate(q, -0.018647728166276245, 7);
  sqcRYGate(q, 0.00011999709235333, 8);
  sqcRZGate(q, -0.5462359119888286, 8);
  sqcRYGate(q, 3.1412881641263795, 9);
  sqcRZGate(q, -0.543469514580817, 9);
  sqcRYGate(q, 3.137235108865559, 10);
  sqcRZGate(q, 1.8797041138823483, 10);
  sqcRYGate(q, -1.6599406172535938, 11);
  sqcRZGate(q, -0.853125807368758, 11);
  sqcRYGate(q, -0.028801945308371657, 12);
  sqcRZGate(q, 0.32813069054798744, 12);
  sqcRYGate(q, -0.00024030132400363949, 13);
  sqcRZGate(q, -2.6543411734966096, 13);
  sqcRYGate(q, 2.8834518594062475, 14);
  sqcRZGate(q, 2.796444249247637, 14);
  sqcRYGate(q, -3.141104216497334, 15);
  sqcRZGate(q, 1.7954419495532052, 15);
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
  sqcRYGate(q, 1.5808202355513323, 0);
  sqcRZGate(q, 2.0526499325645364, 0);
  sqcRYGate(q, 1.5469188611180194, 1);
  sqcRZGate(q, 1.8008672419263636, 1);
  sqcRYGate(q, -1.54260001477495, 2);
  sqcRZGate(q, 0.39924061037195635, 2);
  sqcRYGate(q, -2.5447062787525283, 3);
  sqcRZGate(q, -3.12480214257467, 3);
  sqcRYGate(q, 0.0008045945172492353, 4);
  sqcRZGate(q, -1.9872394058654705, 4);
  sqcRYGate(q, 0.23381759166684835, 5);
  sqcRZGate(q, 3.098416912077813, 5);
  sqcRYGate(q, -3.137770624089332, 6);
  sqcRZGate(q, -1.3428724831607695, 6);
  sqcRYGate(q, -3.141244166332895, 7);
  sqcRZGate(q, -0.5425263624849704, 7);
  sqcRYGate(q, -1.560212413393483, 8);
  sqcRZGate(q, -2.441018752179985, 8);
  sqcRYGate(q, -1.8066847215164545, 9);
  sqcRZGate(q, 0.5016937884697992, 9);
  sqcRYGate(q, 0.0005550952118973385, 10);
  sqcRZGate(q, 0.4738687315513682, 10);
  sqcRYGate(q, 3.1412865249658397, 11);
  sqcRZGate(q, 2.836971495486041, 11);
  sqcRYGate(q, -9.296497876043475e-05, 12);
  sqcRZGate(q, 1.078299804590447, 12);
  sqcRYGate(q, 0.0007871048572525297, 13);
  sqcRZGate(q, -2.4212359715866585, 13);
  sqcRYGate(q, -3.1078061615125536, 14);
  sqcRZGate(q, -2.8684844999664483, 14);
  sqcRYGate(q, -0.003472008000598368, 15);
  sqcRZGate(q, -0.117833380287154, 15);
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
  sqcRYGate(q, 0.0059401048831845505, 0);
  sqcRZGate(q, -0.35702010563144393, 0);
  sqcRYGate(q, 2.826550045086529, 1);
  sqcRZGate(q, 1.5508768317738904, 1);
  sqcRYGate(q, 0.6057698597770944, 2);
  sqcRZGate(q, 0.1503015219137982, 2);
  sqcRYGate(q, 2.0947658749143088, 3);
  sqcRZGate(q, 3.1412346466906143, 3);
  sqcRYGate(q, -0.0023710848820315752, 4);
  sqcRZGate(q, 0.5781929508109075, 4);
  sqcRYGate(q, 0.300930139667023, 5);
  sqcRZGate(q, 0.025360614190014452, 5);
  sqcRYGate(q, -1.7248001626131013, 6);
  sqcRZGate(q, 0.3238427113849349, 6);
  sqcRYGate(q, -3.1386876523120653, 7);
  sqcRZGate(q, -2.5740524673108656, 7);
  sqcRYGate(q, 3.141403768398906, 8);
  sqcRZGate(q, -1.2770650967294732, 8);
  sqcRYGate(q, -3.1414400294133, 9);
  sqcRZGate(q, 0.5214592868093906, 9);
  sqcRYGate(q, 1.5701023140602919, 10);
  sqcRZGate(q, 0.17245662252641483, 10);
  sqcRYGate(q, -9.441971734247545e-05, 11);
  sqcRZGate(q, 2.5933216736243585, 11);
  sqcRYGate(q, 3.1228009442485933, 12);
  sqcRZGate(q, -1.1255013315328106, 12);
  sqcRYGate(q, 0.000838177402108344, 13);
  sqcRZGate(q, -1.4417053136605875, 13);
  sqcRYGate(q, -1.359445721341575, 14);
  sqcRZGate(q, -0.20525161307768694, 14);
  sqcRYGate(q, -3.1415879128088657, 15);
  sqcRZGate(q, 2.306331422139673, 15);
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
  sqcRYGate(q, 1.5623747019561494, 0);
  sqcRZGate(q, -3.137547225673065, 0);
  sqcRYGate(q, -1.5716186159810643, 1);
  sqcRZGate(q, 1.5647006519219868, 1);
  sqcRYGate(q, 0.017539541220498205, 2);
  sqcRZGate(q, -1.8661987394694646, 2);
  sqcRYGate(q, -1.5480299408223321, 3);
  sqcRZGate(q, 0.012144129704948272, 3);
  sqcRYGate(q, 3.051158138360959, 4);
  sqcRZGate(q, -1.6024178180442026, 4);
  sqcRYGate(q, 0.1021931751148669, 5);
  sqcRZGate(q, 1.900613976458163, 5);
  sqcRYGate(q, -3.1339471014370752, 6);
  sqcRZGate(q, 2.010453089837328, 6);
  sqcRYGate(q, -1.5707150093084086, 7);
  sqcRZGate(q, 1.570504908692696, 7);
  sqcRYGate(q, 1.5699700324524661, 8);
  sqcRZGate(q, -1.6505140408061045, 8);
  sqcRYGate(q, 0.363794905767441, 9);
  sqcRZGate(q, 0.8694384910698183, 9);
  sqcRYGate(q, -0.0002893644921266869, 10);
  sqcRZGate(q, -0.7330619925978796, 10);
  sqcRYGate(q, 1.5709264342704419, 11);
  sqcRZGate(q, 1.570736656062949, 11);
  sqcRYGate(q, -1.571346808474177, 12);
  sqcRZGate(q, -3.0785879420682254, 12);
  sqcRYGate(q, -0.0003496676086758299, 13);
  sqcRZGate(q, 3.0472056532143728, 13);
  sqcRYGate(q, 1.5775392220108742, 14);
  sqcRZGate(q, 0.07033864117412587, 14);
  sqcRYGate(q, 3.1409592797980026, 15);
  sqcRZGate(q, -1.0130561781792713, 15);
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
  sqcRYGate(q, -1.6102941627908522, 0);
  sqcRZGate(q, 1.5838532418507996, 0);
  sqcRYGate(q, 1.3090903217775096, 1);
  sqcRZGate(q, 1.569385474750666, 1);
  sqcRYGate(q, 3.1400999068791884, 2);
  sqcRZGate(q, -0.32560725167440463, 2);
  sqcRYGate(q, 1.5829871650298974, 3);
  sqcRZGate(q, 3.097630220947933, 3);
  sqcRYGate(q, 3.1411429358727423, 4);
  sqcRZGate(q, 0.9885710117939934, 4);
  sqcRYGate(q, -0.0001779427322447686, 5);
  sqcRZGate(q, -1.2117163866960148, 5);
  sqcRYGate(q, -3.1414635138008786, 6);
  sqcRZGate(q, -2.7373579224161855, 6);
  sqcRYGate(q, -1.5771514822297705, 7);
  sqcRZGate(q, 0.001186130639195217, 7);
  sqcRYGate(q, 3.141089662694086, 8);
  sqcRZGate(q, 0.5208483531252631, 8);
  sqcRYGate(q, -1.5706502822015977, 9);
  sqcRZGate(q, 1.5728887557597275, 9);
  sqcRYGate(q, 0.00028033245919440174, 10);
  sqcRZGate(q, 3.1300247667649423, 10);
  sqcRYGate(q, -1.570896907738506, 11);
  sqcRZGate(q, 0.9684901941677095, 11);
  sqcRYGate(q, 0.07059712215587534, 12);
  sqcRZGate(q, 0.28334398945529227, 12);
  sqcRYGate(q, 1.570781829258222, 13);
  sqcRZGate(q, 3.1414373853260407, 13);
  sqcRYGate(q, 1.5685263197524941, 14);
  sqcRZGate(q, -1.5722911127536543, 14);
  sqcRYGate(q, -0.0011171081524050663, 15);
  sqcRZGate(q, -0.042929198636425525, 15);
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
  sqcRYGate(q, 0.3612706492313205, 0);
  sqcRZGate(q, 1.5672775179900524, 0);
  sqcRYGate(q, 1.5596247548853865, 1);
  sqcRZGate(q, -3.137081664012387, 1);
  sqcRYGate(q, 3.137474058299454, 2);
  sqcRZGate(q, 0.08365752732924925, 2);
  sqcRYGate(q, 1.588349922992439, 3);
  sqcRZGate(q, 0.44261512273490927, 3);
  sqcRYGate(q, 1.4945565450210363, 4);
  sqcRZGate(q, 0.06471866125951119, 4);
  sqcRYGate(q, -0.00011045476910354068, 5);
  sqcRZGate(q, 2.294507206481618, 5);
  sqcRYGate(q, -3.1415672347557697, 6);
  sqcRZGate(q, -2.887620240011023, 6);
  sqcRYGate(q, 1.5713746254926275, 7);
  sqcRZGate(q, -0.15406095879204165, 7);
  sqcRYGate(q, 3.1415376674338944, 8);
  sqcRZGate(q, -3.1262897717139992, 8);
  sqcRYGate(q, 0.13430509038330118, 9);
  sqcRZGate(q, 3.139933060663207, 9);
  sqcRYGate(q, 3.1409298130848256, 10);
  sqcRZGate(q, -1.5119319657221748, 10);
  sqcRYGate(q, 0.5935740418042594, 11);
  sqcRZGate(q, -0.12516861764910026, 11);
  sqcRYGate(q, 3.141522703254681, 12);
  sqcRZGate(q, -0.32273486628632053, 12);
  sqcRYGate(q, 1.5707375497213132, 13);
  sqcRZGate(q, -3.1414995266486616, 13);
  sqcRYGate(q, -1.5706518838845158, 14);
  sqcRZGate(q, 0.6090460565765656, 14);
  sqcRYGate(q, 3.4291504734440537e-05, 15);
  sqcRZGate(q, 0.8533163333485576, 15);
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
  sqcRYGate(q, 1.2503837985203363, 0);
  sqcRZGate(q, -3.1248274647432988, 0);
  sqcRYGate(q, -1.5823230866530338, 1);
  sqcRZGate(q, 1.5599438088020567, 1);
  sqcRYGate(q, -1.582314532248965, 2);
  sqcRZGate(q, -3.13665430250177, 2);
  sqcRYGate(q, 1.5507596264549506, 3);
  sqcRZGate(q, -0.7096799572719635, 3);
  sqcRYGate(q, 0.0025452797330949295, 4);
  sqcRZGate(q, -3.1170040997776574, 4);
  sqcRYGate(q, -3.1415191730058005, 5);
  sqcRZGate(q, -0.21623480598819975, 5);
  sqcRYGate(q, -3.1410319505557425, 6);
  sqcRZGate(q, 0.9899432926358901, 6);
  sqcRYGate(q, -1.577086868849734, 7);
  sqcRZGate(q, -1.5718623056231928, 7);
  sqcRYGate(q, -0.0004264400512568045, 8);
  sqcRZGate(q, 2.302160548768537, 8);
  sqcRYGate(q, -1.57070096120318, 9);
  sqcRZGate(q, 0.18370818554986362, 9);
  sqcRYGate(q, -2.643888061903965e-05, 10);
  sqcRZGate(q, 2.4186676483589844, 10);
  sqcRYGate(q, -3.141425784449453, 11);
  sqcRZGate(q, -0.3010619994670307, 11);
  sqcRYGate(q, -0.00012906898040920822, 12);
  sqcRZGate(q, -2.8476634576408406, 12);
  sqcRYGate(q, -1.5707489846244975, 13);
  sqcRZGate(q, 7.073893101670625e-06, 13);
  sqcRYGate(q, -0.09679185985020224, 14);
  sqcRZGate(q, -0.9994189408422107, 14);
  sqcRYGate(q, -1.5695730750499237, 15);
  sqcRZGate(q, -2.7962136007637994, 15);
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
  sqcRYGate(q, -1.5736098376349341, 0);
  sqcRZGate(q, 2.5810052075167147, 0);
  sqcRYGate(q, -1.5771931580706329, 1);
  sqcRZGate(q, -1.9827268219428724, 1);
  sqcRYGate(q, -0.004144087084266168, 2);
  sqcRZGate(q, 1.0029799476550743, 2);
  sqcRYGate(q, 0.00013253947355629236, 3);
  sqcRZGate(q, 1.9101693919934668, 3);
  sqcRYGate(q, 3.128503775260157, 4);
  sqcRZGate(q, -0.5117174886676085, 4);
  sqcRYGate(q, 1.553669197055938, 5);
  sqcRZGate(q, 2.4996225749540324, 5);
  sqcRYGate(q, -3.1379384427847645, 6);
  sqcRZGate(q, -1.1090870901120935, 6);
  sqcRYGate(q, 1.571077745500938, 7);
  sqcRZGate(q, 0.5512871983516803, 7);
  sqcRYGate(q, -0.00014657003530809025, 8);
  sqcRZGate(q, -2.235330009038128, 8);
  sqcRYGate(q, 0.0008119682669525118, 9);
  sqcRZGate(q, -1.9764832651521909, 9);
  sqcRYGate(q, -0.0004187037043825726, 10);
  sqcRZGate(q, -2.044032597709343, 10);
  sqcRYGate(q, -0.00011604525437292068, 11);
  sqcRZGate(q, 0.6944366796226138, 11);
  sqcRYGate(q, 3.141039173554787, 12);
  sqcRZGate(q, -0.9403228867756965, 12);
  sqcRYGate(q, 1.5705946817790881, 13);
  sqcRZGate(q, -1.8595863114653497, 13);
  sqcRYGate(q, -0.0005789183450589227, 14);
  sqcRZGate(q, 2.5479938660869226, 14);
  sqcRYGate(q, 3.141030392829148, 15);
  sqcRZGate(q, -1.5797292807329786, 15);

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
