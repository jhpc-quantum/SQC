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

  sqcRYGate(q, 1.5796443360284478, 0);
  sqcRZGate(q, -2.6153386825006253, 0);
  sqcRYGate(q, 1.5589584599012767, 1);
  sqcRZGate(q, -2.78319462198696, 1);
  sqcRYGate(q, -3.075610856683244, 2);
  sqcRZGate(q, -0.031229143878505956, 2);
  sqcRYGate(q, 0.00016851233788548728, 3);
  sqcRZGate(q, 1.2490158901438029, 3);
  sqcRYGate(q, 0.6315248916907334, 4);
  sqcRZGate(q, -0.49305583854736473, 4);
  sqcRYGate(q, -6.691418749947362e-05, 5);
  sqcRZGate(q, 2.6353285488868345, 5);
  sqcRYGate(q, -3.141540135107939, 6);
  sqcRZGate(q, 1.9657898449247062, 6);
  sqcRYGate(q, -1.5713037785843127, 7);
  sqcRZGate(q, -3.1413408402917917, 7);
  sqcRYGate(q, -3.117654352441361, 8);
  sqcRZGate(q, -0.0267435508055913, 8);
  sqcRYGate(q, 2.103505854750251, 9);
  sqcRZGate(q, -1.5796039978899445, 9);
  sqcRYGate(q, 1.5707651168753554, 10);
  sqcRZGate(q, -1.5074609778231718e-05, 10);
  sqcRYGate(q, -1.5707648589150178, 11);
  sqcRZGate(q, -2.9665913045286456, 11);
  sqcRYGate(q, -3.1267452750698377, 12);
  sqcRZGate(q, -3.055147254903065, 12);
  sqcRYGate(q, 1.572739053244594, 13);
  sqcRZGate(q, 3.14133215159668, 13);
  sqcRYGate(q, -2.5375231550934365, 14);
  sqcRZGate(q, 1.5029287598725867, 14);
  sqcRYGate(q, -3.141519206359018, 15);
  sqcRZGate(q, 2.1017845546813794, 15);
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
  sqcRYGate(q, 2.583773736074523, 0);
  sqcRZGate(q, 2.003935924404992, 0);
  sqcRYGate(q, 2.0375827612199036, 1);
  sqcRZGate(q, -2.9616662946101417, 1);
  sqcRYGate(q, -3.1413155487226843, 2);
  sqcRZGate(q, 0.012209370709504506, 2);
  sqcRYGate(q, -1.057416902816064, 3);
  sqcRZGate(q, -0.00060748713622993, 3);
  sqcRYGate(q, -3.1401661860642966, 4);
  sqcRZGate(q, -2.2312751073276837, 4);
  sqcRYGate(q, 0.011464454157985138, 5);
  sqcRZGate(q, -0.96523210116141, 5);
  sqcRYGate(q, -1.5709499354342595, 6);
  sqcRZGate(q, -1.5758677037808413, 6);
  sqcRYGate(q, 1.5707610634030118, 7);
  sqcRZGate(q, -2.9632020750650963, 7);
  sqcRYGate(q, -1.5707293968991198, 8);
  sqcRZGate(q, 1.5613999176985085, 8);
  sqcRYGate(q, 1.5707884095773703, 9);
  sqcRZGate(q, 3.1339437717387786, 9);
  sqcRYGate(q, -1.040859079562825, 10);
  sqcRZGate(q, -9.931646243188652e-07, 10);
  sqcRYGate(q, 3.1414720637564626, 11);
  sqcRZGate(q, 0.17500057769967992, 11);
  sqcRYGate(q, -0.08171666191330473, 12);
  sqcRZGate(q, -1.672802574348455, 12);
  sqcRYGate(q, 1.9084315830471894, 13);
  sqcRZGate(q, -1.6878862854245158, 13);
  sqcRYGate(q, -1.5738776703970512, 14);
  sqcRZGate(q, -1.5723439943555233, 14);
  sqcRYGate(q, -0.0010205193510915342, 15);
  sqcRZGate(q, -0.9655962555126534, 15);
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
  sqcRYGate(q, -1.6120178045350002, 0);
  sqcRZGate(q, -1.7908873251221327, 0);
  sqcRYGate(q, -1.856529459684548, 1);
  sqcRZGate(q, -1.7128011535243626, 1);
  sqcRYGate(q, 3.527608537989835e-05, 2);
  sqcRZGate(q, -2.9851907834173574, 2);
  sqcRYGate(q, -1.6967983783839289, 3);
  sqcRZGate(q, 2.959950123906504, 3);
  sqcRYGate(q, 1.5697159906658218, 4);
  sqcRZGate(q, -3.141472099090023, 4);
  sqcRYGate(q, -3.1411665297459113, 5);
  sqcRZGate(q, -2.5747526136014183, 5);
  sqcRYGate(q, -3.1218699888227466, 6);
  sqcRZGate(q, -0.07005814794837803, 6);
  sqcRYGate(q, -2.267085781326728e-06, 7);
  sqcRZGate(q, 2.9219053683451093, 7);
  sqcRYGate(q, -0.05083658315392548, 8);
  sqcRZGate(q, -3.133198793211078, 8);
  sqcRYGate(q, -1.5700403415926456, 9);
  sqcRZGate(q, 1.4848860164019462, 9);
  sqcRYGate(q, 1.570776304007151, 10);
  sqcRZGate(q, -2.6303022417604303, 10);
  sqcRYGate(q, 1.570756590133498, 11);
  sqcRZGate(q, 2.6011134102280207, 11);
  sqcRYGate(q, -0.0041054064228170754, 12);
  sqcRZGate(q, -1.4677501483464814, 12);
  sqcRYGate(q, 3.1415681487482066, 13);
  sqcRZGate(q, -1.2593624456381505, 13);
  sqcRYGate(q, 1.6070404052543266, 14);
  sqcRZGate(q, -0.9275625501544296, 14);
  sqcRYGate(q, -3.1409250007298244, 15);
  sqcRZGate(q, -0.6715464193217926, 15);
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
  sqcRYGate(q, 1.8225878673904967, 0);
  sqcRZGate(q, 1.4131971216379389, 0);
  sqcRYGate(q, 3.1397859493961855, 1);
  sqcRZGate(q, -0.09873409018840643, 1);
  sqcRYGate(q, -0.00018977307204476446, 2);
  sqcRZGate(q, -1.3481367730065459, 2);
  sqcRYGate(q, -0.004027495207923337, 3);
  sqcRZGate(q, -2.2716580071906245, 3);
  sqcRYGate(q, -1.5707492521497448, 4);
  sqcRZGate(q, -1.373766029582867, 4);
  sqcRYGate(q, -1.5712013794589397, 5);
  sqcRZGate(q, -1.5695312654999434, 5);
  sqcRYGate(q, 3.1412927255581486, 6);
  sqcRZGate(q, 2.2416021824526755, 6);
  sqcRYGate(q, 0.0001855889403666708, 7);
  sqcRZGate(q, -2.5948929870442434, 7);
  sqcRYGate(q, 1.5666182853037027, 8);
  sqcRZGate(q, 0.2793715137675096, 8);
  sqcRYGate(q, -3.141583848782639, 9);
  sqcRZGate(q, 1.3806625481476154, 9);
  sqcRYGate(q, -3.127631333134285, 10);
  sqcRZGate(q, -1.6329637852046577, 10);
  sqcRYGate(q, -0.00016750052142042377, 11);
  sqcRZGate(q, -1.3857389047685376, 11);
  sqcRYGate(q, -1.571030148661424, 12);
  sqcRZGate(q, 2.028070660702045, 12);
  sqcRYGate(q, -3.1388486450238466, 13);
  sqcRZGate(q, 1.9992933115315497, 13);
  sqcRYGate(q, 0.11073710924034866, 14);
  sqcRZGate(q, -2.1782864274838074, 14);
  sqcRYGate(q, -1.5708055039200044, 15);
  sqcRZGate(q, 2.2379283834970165, 15);
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
  sqcRYGate(q, -0.001678897076828001, 0);
  sqcRZGate(q, -1.7655976127168171, 0);
  sqcRYGate(q, 1.573061876366566, 1);
  sqcRZGate(q, 2.505036407265917, 1);
  sqcRYGate(q, -1.5708531789102447, 2);
  sqcRZGate(q, -3.1413623971454294, 2);
  sqcRYGate(q, -3.1359335472509966, 3);
  sqcRZGate(q, -0.73306701752189, 3);
  sqcRYGate(q, -3.1406579254244456, 4);
  sqcRZGate(q, 1.7651925343538326, 4);
  sqcRYGate(q, 0.16753468490683582, 5);
  sqcRZGate(q, -0.0011932750551206794, 5);
  sqcRYGate(q, -3.1411760282373966, 6);
  sqcRZGate(q, -0.520009691291696, 6);
  sqcRYGate(q, 7.565282582344679e-05, 7);
  sqcRZGate(q, 1.0651272406561287, 7);
  sqcRYGate(q, 1.6221172055307695, 8);
  sqcRZGate(q, 2.888335291412257, 8);
  sqcRYGate(q, -5.652292585683946e-05, 9);
  sqcRZGate(q, -2.942218588676557, 9);
  sqcRYGate(q, 0.02231621144905699, 10);
  sqcRZGate(q, -0.6681040729553548, 10);
  sqcRYGate(q, -3.1415416008809447, 11);
  sqcRZGate(q, 0.6646946905787949, 11);
  sqcRYGate(q, 3.1024763592904976, 12);
  sqcRZGate(q, -1.0934939775896195, 12);
  sqcRYGate(q, -1.5702111681851916, 13);
  sqcRZGate(q, -0.5575832366698973, 13);
  sqcRYGate(q, -3.0104138260805184, 14);
  sqcRZGate(q, 3.136092031607454, 14);
  sqcRYGate(q, 0.005453225597737976, 15);
  sqcRZGate(q, 0.7870640091769174, 15);
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
  sqcRYGate(q, 1.5745881154174404, 0);
  sqcRZGate(q, 1.5377801862714247, 0);
  sqcRYGate(q, -1.5686429174923635, 1);
  sqcRZGate(q, 1.5309157569528482, 1);
  sqcRYGate(q, -1.5712493151841112, 2);
  sqcRZGate(q, 1.1451923423132089, 2);
  sqcRYGate(q, -0.00011179304881030044, 3);
  sqcRZGate(q, 1.6964213504269512, 3);
  sqcRYGate(q, -0.024914750230803584, 4);
  sqcRZGate(q, 1.204709286669634, 4);
  sqcRYGate(q, 1.5703137762843724, 5);
  sqcRZGate(q, 3.1120633296921896, 5);
  sqcRYGate(q, 4.048060537925546e-05, 6);
  sqcRZGate(q, 0.7367473185651816, 6);
  sqcRYGate(q, -3.0437047141753544, 7);
  sqcRZGate(q, -0.17573796695001312, 7);
  sqcRYGate(q, 3.1331519032139354, 8);
  sqcRZGate(q, -1.928060767411393, 8);
  sqcRYGate(q, -2.8693992901487304, 9);
  sqcRZGate(q, -1.5085025821898101, 9);
  sqcRYGate(q, -0.00014805126193984106, 10);
  sqcRZGate(q, -1.768863846992553, 10);
  sqcRYGate(q, -3.0596365812440793, 11);
  sqcRZGate(q, 1.9426590782690485, 11);
  sqcRYGate(q, -1.5723760419922028, 12);
  sqcRZGate(q, 1.419464989167037, 12);
  sqcRYGate(q, -0.0007982135062279396, 13);
  sqcRZGate(q, -1.7823628379747993, 13);
  sqcRYGate(q, 2.7393857048082215, 14);
  sqcRZGate(q, 3.0945776551514497, 14);
  sqcRYGate(q, 3.1368409870846734, 15);
  sqcRZGate(q, -2.2300803536119425, 15);
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
  sqcRYGate(q, -1.5710978467433325, 0);
  sqcRZGate(q, -0.0035223268874107205, 0);
  sqcRYGate(q, -1.573842869649639, 1);
  sqcRZGate(q, 1.581818988841148, 1);
  sqcRYGate(q, 3.1321589234220166, 2);
  sqcRZGate(q, -1.7037175245904022, 2);
  sqcRYGate(q, 1.5707947196468464, 3);
  sqcRZGate(q, 0.8369776414996668, 3);
  sqcRYGate(q, -0.0014456609981747803, 4);
  sqcRZGate(q, -1.1216243364383645, 4);
  sqcRYGate(q, 1.7962244738291295, 5);
  sqcRZGate(q, -0.4950998776340647, 5);
  sqcRYGate(q, 0.0015530809417843017, 6);
  sqcRZGate(q, 2.16184120090163, 6);
  sqcRYGate(q, 0.009650915961923058, 7);
  sqcRZGate(q, 0.4931790773664968, 7);
  sqcRYGate(q, 0.027148874004771704, 8);
  sqcRZGate(q, 2.246210175061299, 8);
  sqcRYGate(q, 1.1019792196992281e-05, 9);
  sqcRZGate(q, -1.6334011045764418, 9);
  sqcRYGate(q, -0.002509048972740402, 10);
  sqcRZGate(q, -0.6281816946938674, 10);
  sqcRYGate(q, 2.392048815840709e-05, 11);
  sqcRZGate(q, -1.5428387295615327, 11);
  sqcRYGate(q, -0.0018811164906145097, 12);
  sqcRZGate(q, -2.7875367605546124, 12);
  sqcRYGate(q, 0.00021361283527478105, 13);
  sqcRZGate(q, 2.3256533235854366, 13);
  sqcRYGate(q, -1.5577087580678812, 14);
  sqcRZGate(q, -1.6036830750754083, 14);
  sqcRYGate(q, 3.1413597816985166, 15);
  sqcRZGate(q, 0.730268591937497, 15);
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
  sqcRYGate(q, -2.685615437738981, 0);
  sqcRZGate(q, -0.015136517338178994, 0);
  sqcRYGate(q, -1.5715368425827512, 1);
  sqcRZGate(q, 2.228019816794876, 1);
  sqcRYGate(q, 0.0010863361974777774, 2);
  sqcRZGate(q, -0.2926987155827909, 2);
  sqcRYGate(q, 3.1412545288721097, 3);
  sqcRZGate(q, -2.0816304436827098, 3);
  sqcRYGate(q, -5.561034819212552e-05, 4);
  sqcRZGate(q, 2.0981553952088907, 4);
  sqcRYGate(q, -3.1411660580457443, 5);
  sqcRZGate(q, 2.6449550295496547, 5);
  sqcRYGate(q, -3.4261840888927834e-05, 6);
  sqcRZGate(q, 0.5826536887753432, 6);
  sqcRYGate(q, 0.0006206298925395258, 7);
  sqcRZGate(q, 2.824186907883892, 7);
  sqcRYGate(q, -3.136913849879645, 8);
  sqcRZGate(q, 0.5852334718475047, 8);
  sqcRYGate(q, 0.2725639294821569, 9);
  sqcRZGate(q, 1.6661580716671907, 9);
  sqcRYGate(q, 3.141485002574242, 10);
  sqcRZGate(q, -3.04032837918927, 10);
  sqcRYGate(q, -1.6462934621737926, 11);
  sqcRZGate(q, 1.366136038551602, 11);
  sqcRYGate(q, 2.561943351222001, 12);
  sqcRZGate(q, -0.010895735124522687, 12);
  sqcRYGate(q, 3.141353735546737, 13);
  sqcRZGate(q, 2.8138928311016658, 13);
  sqcRYGate(q, 1.4572977364698598, 14);
  sqcRZGate(q, -0.0217112862896162, 14);
  sqcRYGate(q, -3.1118854004526617, 15);
  sqcRZGate(q, -2.0820471978901027, 15);
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
  sqcRYGate(q, 0.42914517609701036, 0);
  sqcRZGate(q, 0.015123103110946445, 0);
  sqcRYGate(q, 1.5848043862720949, 1);
  sqcRZGate(q, -2.6055085395601765, 1);
  sqcRYGate(q, 1.5707276527892577, 2);
  sqcRZGate(q, 2.5344396372928717, 2);
  sqcRYGate(q, -3.1389112883073462, 3);
  sqcRZGate(q, -2.063535556948126, 3);
  sqcRYGate(q, -3.1402757959993655, 4);
  sqcRZGate(q, -0.9243043746765576, 4);
  sqcRYGate(q, 1.3383757985453295, 5);
  sqcRZGate(q, -2.5790956154804143, 5);
  sqcRYGate(q, -3.1398942298670827, 6);
  sqcRZGate(q, 0.6558246340207932, 6);
  sqcRYGate(q, 1.5677457336258123, 7);
  sqcRZGate(q, 0.001196409786921926, 7);
  sqcRYGate(q, 1.5710987081981482, 8);
  sqcRZGate(q, -1.571061317977538, 8);
  sqcRYGate(q, 1.571122238911895, 9);
  sqcRZGate(q, -1.538413671273867, 9);
  sqcRYGate(q, 0.002490931792735008, 10);
  sqcRZGate(q, -1.5444891011416182, 10);
  sqcRYGate(q, -3.1415445657674836, 11);
  sqcRZGate(q, 2.9149865928593095, 11);
  sqcRYGate(q, 0.00013176405244331166, 12);
  sqcRZGate(q, 0.4819452646027527, 12);
  sqcRYGate(q, 3.1414667914044965, 13);
  sqcRZGate(q, 2.5776203923066956, 13);
  sqcRYGate(q, 1.5669507821392923, 14);
  sqcRZGate(q, -1.5348853912368143, 14);
  sqcRYGate(q, -3.1356737712247926, 15);
  sqcRZGate(q, 0.8591828642038228, 15);
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
  sqcRYGate(q, 1.5709337903625504, 0);
  sqcRZGate(q, 1.5656268167207292, 0);
  sqcRYGate(q, 3.1280737146307818, 1);
  sqcRZGate(q, 2.1089986951104596, 1);
  sqcRYGate(q, -0.00033551083260174863, 2);
  sqcRZGate(q, -3.121627159246549, 2);
  sqcRYGate(q, -0.000588106678478746, 3);
  sqcRZGate(q, -0.8599426232074849, 3);
  sqcRYGate(q, 3.098850492573769, 4);
  sqcRZGate(q, -1.5320419390718112, 4);
  sqcRYGate(q, -4.9487852429308525e-05, 5);
  sqcRZGate(q, -0.45308888812716697, 5);
  sqcRYGate(q, -0.08106293218330674, 6);
  sqcRZGate(q, -1.5548776089300926, 6);
  sqcRYGate(q, -1.571560596340987, 7);
  sqcRZGate(q, -1.5707964482803254, 7);
  sqcRYGate(q, -0.07069322117885957, 8);
  sqcRZGate(q, -3.0921511197701417, 8);
  sqcRYGate(q, 3.355279671621948e-05, 9);
  sqcRZGate(q, -1.6032711768708587, 9);
  sqcRYGate(q, 1.5706085662777989, 10);
  sqcRZGate(q, 9.347191466524406e-05, 10);
  sqcRYGate(q, -3.139885568835224, 11);
  sqcRZGate(q, -1.3126813146235083, 11);
  sqcRYGate(q, 0.010115864426542663, 12);
  sqcRZGate(q, 1.4880287479454721, 12);
  sqcRYGate(q, 0.003651558108174726, 13);
  sqcRZGate(q, 1.82153847977406, 13);
  sqcRYGate(q, 1.3840404915910443, 14);
  sqcRZGate(q, -1.6517576249412658, 14);
  sqcRYGate(q, -3.1414797532284435, 15);
  sqcRZGate(q, -2.06945823864221, 15);
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
  sqcRYGate(q, -1.5800205225344373, 0);
  sqcRZGate(q, 1.8126464445793253, 0);
  sqcRYGate(q, -4.101256904753825e-05, 1);
  sqcRZGate(q, -0.07018758470976774, 1);
  sqcRYGate(q, -1.6024449508182763, 2);
  sqcRZGate(q, -0.9185449569358115, 2);
  sqcRYGate(q, -1.5705625355730601, 3);
  sqcRZGate(q, -0.1039152987426526, 3);
  sqcRYGate(q, -1.5629712457653389, 4);
  sqcRZGate(q, 0.6638152445722053, 4);
  sqcRYGate(q, -3.141520185679761, 5);
  sqcRZGate(q, 1.5462611752578965, 5);
  sqcRYGate(q, 8.18395970874863e-05, 6);
  sqcRZGate(q, 2.216916588802783, 6);
  sqcRYGate(q, 1.5708943165849898, 7);
  sqcRZGate(q, -0.09203601736470723, 7);
  sqcRYGate(q, -5.42324238500748e-05, 8);
  sqcRZGate(q, 0.6163661848468305, 8);
  sqcRYGate(q, -1.5706954739999235, 9);
  sqcRZGate(q, 3.0376398100658246, 9);
  sqcRYGate(q, 1.5071092680599882, 10);
  sqcRZGate(q, 0.6635236400379052, 10);
  sqcRYGate(q, -0.00015837260086392545, 11);
  sqcRZGate(q, 1.218183688473667, 11);
  sqcRYGate(q, -0.0054493121918808285, 12);
  sqcRZGate(q, 0.5166111712647865, 12);
  sqcRYGate(q, 1.570767736031284, 13);
  sqcRZGate(q, 1.4649380293286252, 13);
  sqcRYGate(q, 1.522493819185419, 14);
  sqcRZGate(q, -0.5288617691646219, 14);
  sqcRYGate(q, 1.5787596869923715, 15);
  sqcRZGate(q, -0.0967530146578423, 15);

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
