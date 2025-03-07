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

  sqcRYGate(q, 3.1415861901177795, 0);
  sqcRZGate(q, 1.357904195214358, 0);
  sqcRYGate(q, 0.00013249131030388837, 1);
  sqcRZGate(q, -1.5850475548308314, 1);
  sqcRYGate(q, -0.19337802400545745, 2);
  sqcRZGate(q, 0.2163744605429756, 2);
  sqcRYGate(q, -1.5564482251909524, 3);
  sqcRZGate(q, 2.487562115135708, 3);
  sqcRYGate(q, -1.5787741629730787, 4);
  sqcRZGate(q, 2.9063593051379786, 4);
  sqcRYGate(q, 2.8951163506496904, 5);
  sqcRZGate(q, -3.0754306824722497, 5);
  sqcRYGate(q, -3.1381467666452703, 6);
  sqcRZGate(q, -2.296351166147176, 6);
  sqcRYGate(q, 3.1398697811986858, 7);
  sqcRZGate(q, 1.8372805601995403, 7);
  sqcRYGate(q, -3.137328420826626, 8);
  sqcRZGate(q, -3.110771070745748, 8);
  sqcRYGate(q, -3.096509599940955, 9);
  sqcRZGate(q, 3.0060449964430527, 9);
  sqcRYGate(q, 3.1415409983599942, 10);
  sqcRZGate(q, -1.5294932239695394, 10);
  sqcRYGate(q, -0.0007722324255956536, 11);
  sqcRZGate(q, 2.917781222793586, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -1.5658185696631044, 0);
  sqcRZGate(q, -3.047822100352546, 0);
  sqcRYGate(q, -1.5720498279567996, 1);
  sqcRZGate(q, -1.6104277330196441, 1);
  sqcRYGate(q, 1.571679122448483, 2);
  sqcRZGate(q, -1.5764864937815588, 2);
  sqcRYGate(q, -2.402831121897956e-05, 3);
  sqcRZGate(q, 0.6608878396422478, 3);
  sqcRYGate(q, -0.06755205847652607, 4);
  sqcRZGate(q, 0.23470833530643276, 4);
  sqcRYGate(q, 1.6038711753102775, 5);
  sqcRZGate(q, -3.0963461034687456, 5);
  sqcRYGate(q, 1.5998030075647476, 6);
  sqcRZGate(q, 0.019302275114124967, 6);
  sqcRYGate(q, 1.4869066502789927, 7);
  sqcRZGate(q, 0.4489777064465191, 7);
  sqcRYGate(q, -0.001038789387723017, 8);
  sqcRZGate(q, -1.0586160098686308, 8);
  sqcRYGate(q, -1.7288472162377013, 9);
  sqcRZGate(q, -0.4332813589753232, 9);
  sqcRYGate(q, -0.028475249512735668, 10);
  sqcRZGate(q, 1.7060114475405943, 10);
  sqcRYGate(q, 1.3032394899439297, 11);
  sqcRZGate(q, -2.618992355239484, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.1332286768525623, 0);
  sqcRZGate(q, 0.5114693151490197, 0);
  sqcRYGate(q, -3.141466378958963, 1);
  sqcRZGate(q, 3.101933331998974, 1);
  sqcRYGate(q, 3.101794950118791, 2);
  sqcRZGate(q, 0.3683737276000363, 2);
  sqcRYGate(q, -1.5668484594328782, 3);
  sqcRZGate(q, 2.16456207235154, 3);
  sqcRYGate(q, -1.5674723166119193, 4);
  sqcRZGate(q, 1.1335392993895548, 4);
  sqcRYGate(q, -1.6678016178396433, 5);
  sqcRZGate(q, 1.5693294665105175, 5);
  sqcRYGate(q, 3.1353839994844592, 6);
  sqcRZGate(q, 1.602499778325408, 6);
  sqcRYGate(q, -3.1300874863889754, 7);
  sqcRZGate(q, 2.9592830688378053, 7);
  sqcRYGate(q, 3.1347240601039275, 8);
  sqcRZGate(q, -2.1309305171567066, 8);
  sqcRYGate(q, 0.030586487195777994, 9);
  sqcRZGate(q, -0.9177462908149581, 9);
  sqcRYGate(q, 3.1410531873493723, 10);
  sqcRZGate(q, -1.148301547598221, 10);
  sqcRYGate(q, -0.0008710517845297731, 11);
  sqcRZGate(q, 1.1504843182941356, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.14065896311486, 0);
  sqcRZGate(q, 0.41700717373099483, 0);
  sqcRYGate(q, 2.876362633291331, 1);
  sqcRZGate(q, 0.18757117599850215, 1);
  sqcRYGate(q, -0.015833176834196827, 2);
  sqcRZGate(q, -1.9514690534526977, 2);
  sqcRYGate(q, 1.5659494885776157, 3);
  sqcRZGate(q, -3.134950064508139, 3);
  sqcRYGate(q, 1.565655514415701, 4);
  sqcRZGate(q, 3.121517290140191, 4);
  sqcRYGate(q, -0.9701155583398026, 5);
  sqcRZGate(q, 1.599397568031062, 5);
  sqcRYGate(q, -1.9351458172798603, 6);
  sqcRZGate(q, -0.8357898139487757, 6);
  sqcRYGate(q, 0.2129063356758758, 7);
  sqcRZGate(q, 2.6563788481740134, 7);
  sqcRYGate(q, 3.081422441402927, 8);
  sqcRZGate(q, 0.3191998656238877, 8);
  sqcRYGate(q, 1.2834310652018843, 9);
  sqcRZGate(q, 2.892585113546642, 9);
  sqcRYGate(q, -0.00269994228757886, 10);
  sqcRZGate(q, -1.8644811740356673, 10);
  sqcRYGate(q, -0.05033038822461222, 11);
  sqcRZGate(q, -0.4846909573021146, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.16979943940506864, 0);
  sqcRZGate(q, 1.5519795763068762, 0);
  sqcRYGate(q, -0.0003470568558611978, 1);
  sqcRZGate(q, -0.8948367443482663, 1);
  sqcRYGate(q, 0.5346466720760761, 2);
  sqcRZGate(q, -1.6250411740716764, 2);
  sqcRYGate(q, 1.6394619678582831, 3);
  sqcRZGate(q, 1.574702271455085, 3);
  sqcRYGate(q, 0.9753336737982021, 4);
  sqcRZGate(q, 0.01604310513280223, 4);
  sqcRYGate(q, -1.9007469636917165, 5);
  sqcRZGate(q, 1.1897036635332299, 5);
  sqcRYGate(q, -0.013724801052660853, 6);
  sqcRZGate(q, -2.2972523231863016, 6);
  sqcRYGate(q, 2.9980245607694798, 7);
  sqcRZGate(q, 0.4343083245814281, 7);
  sqcRYGate(q, -1.5683558943634912, 8);
  sqcRZGate(q, 1.5431239203370017, 8);
  sqcRYGate(q, 0.093436280782484, 9);
  sqcRZGate(q, -2.2565782322336156, 9);
  sqcRYGate(q, 0.0005207413462348973, 10);
  sqcRZGate(q, 0.6138627013144514, 10);
  sqcRYGate(q, 0.026310272532528146, 11);
  sqcRZGate(q, 0.6338319679813652, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.034824065732323106, 0);
  sqcRZGate(q, 0.7931870211186595, 0);
  sqcRYGate(q, 0.0003824145325186379, 1);
  sqcRZGate(q, -2.549905091626038, 1);
  sqcRYGate(q, 1.5775399631565081, 2);
  sqcRZGate(q, 1.5695187257889796, 2);
  sqcRYGate(q, 0.5820928258511292, 3);
  sqcRZGate(q, -0.06728927871703794, 3);
  sqcRYGate(q, -1.5742627754351595, 4);
  sqcRZGate(q, 1.005610700299365, 4);
  sqcRYGate(q, 0.015321671040684968, 5);
  sqcRZGate(q, -1.1765529762277684, 5);
  sqcRYGate(q, -1.5578557963110562, 6);
  sqcRZGate(q, -1.7996099427048087, 6);
  sqcRYGate(q, 1.5561104648292963, 7);
  sqcRZGate(q, -1.2000256378772636, 7);
  sqcRYGate(q, -0.6135982454917687, 8);
  sqcRZGate(q, -2.407257643864539, 8);
  sqcRYGate(q, -0.003934152940120228, 9);
  sqcRZGate(q, 0.21743852382652148, 9);
  sqcRYGate(q, 3.139877017340755, 10);
  sqcRZGate(q, -1.1865371675121894, 10);
  sqcRYGate(q, -3.140246862469386, 11);
  sqcRZGate(q, -1.9637107305299597, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.0002829251199623073, 0);
  sqcRZGate(q, 1.8091259419547594, 0);
  sqcRYGate(q, 3.141489792382362, 1);
  sqcRZGate(q, 3.0746094925884533, 1);
  sqcRYGate(q, -1.5867541048263103, 2);
  sqcRZGate(q, 0.8576582856687184, 2);
  sqcRYGate(q, -2.95599823805129, 3);
  sqcRZGate(q, 3.0730226978620316, 3);
  sqcRYGate(q, -1.7809758540198706, 4);
  sqcRZGate(q, 0.022946876483183054, 4);
  sqcRYGate(q, -1.5715361426537224, 5);
  sqcRZGate(q, 1.5714057452552987, 5);
  sqcRYGate(q, 0.0006037323922702953, 6);
  sqcRZGate(q, 2.0062319406088687, 6);
  sqcRYGate(q, -3.140511662502833, 7);
  sqcRZGate(q, 2.0744670484109875, 7);
  sqcRYGate(q, 3.141097854335647, 8);
  sqcRZGate(q, -2.7379545169980464, 8);
  sqcRYGate(q, 0.001757414823633674, 9);
  sqcRZGate(q, 2.461876630579795, 9);
  sqcRYGate(q, -2.034738655616944e-05, 10);
  sqcRZGate(q, -1.6201255551991656, 10);
  sqcRYGate(q, 0.00039973225213587384, 11);
  sqcRZGate(q, 2.2184229474129236, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 0.0005075464514128214, 0);
  sqcRZGate(q, 2.5389721003829036, 0);
  sqcRYGate(q, -0.13503646615328535, 1);
  sqcRZGate(q, -0.04753634641473537, 1);
  sqcRYGate(q, 3.139807760812104, 2);
  sqcRZGate(q, 0.8601959397379338, 2);
  sqcRYGate(q, -1.5613486669579646, 3);
  sqcRZGate(q, 2.3388346118272745, 3);
  sqcRYGate(q, -1.5651044123232645, 4);
  sqcRZGate(q, -1.2570892534397133, 4);
  sqcRYGate(q, -1.5349980236171357, 5);
  sqcRZGate(q, -0.42582324569502367, 5);
  sqcRYGate(q, 3.044580991208736, 6);
  sqcRZGate(q, -1.3513349684667695, 6);
  sqcRYGate(q, -3.113876542738942, 7);
  sqcRZGate(q, -1.4347987285496133, 7);
  sqcRYGate(q, 2.975315166296535, 8);
  sqcRZGate(q, -0.3040604035261453, 8);
  sqcRYGate(q, 1.586422851729015, 9);
  sqcRZGate(q, 1.5737020742110348, 9);
  sqcRYGate(q, 1.5713931020340974, 10);
  sqcRZGate(q, -1.5829805720340007, 10);
  sqcRYGate(q, 1.5799416300205147, 11);
  sqcRZGate(q, 1.57452529580725, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.0025790495803162737, 0);
  sqcRZGate(q, -0.49255518833331635, 0);
  sqcRYGate(q, -1.5687032295825603, 1);
  sqcRZGate(q, 0.2108804010238092, 1);
  sqcRYGate(q, 1.5720258346131177, 2);
  sqcRZGate(q, 0.07426860403438074, 2);
  sqcRYGate(q, -3.1373632551884083, 3);
  sqcRZGate(q, -0.5484409402273229, 3);
  sqcRYGate(q, 3.138194704787142, 4);
  sqcRZGate(q, 0.1688128898763874, 4);
  sqcRYGate(q, -3.1386015095018918, 5);
  sqcRZGate(q, 2.7341955430269276, 5);
  sqcRYGate(q, 2.6887587202496057, 6);
  sqcRZGate(q, 1.0735844033745616, 6);
  sqcRYGate(q, -0.3257708779392194, 7);
  sqcRZGate(q, -1.574771671545476, 7);
  sqcRYGate(q, -1.5824694420835554, 8);
  sqcRZGate(q, 1.5177356827184143, 8);
  sqcRYGate(q, 1.5952136676537656, 9);
  sqcRZGate(q, -2.0673215596114445, 9);
  sqcRYGate(q, -1.575086506490609, 10);
  sqcRZGate(q, -1.356583361908974, 10);
  sqcRYGate(q, -1.594110763458493, 11);
  sqcRZGate(q, 1.0600425030245217, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 0.21895990752875338, 0);
  sqcRZGate(q, 1.2728347035233414, 0);
  sqcRYGate(q, -3.093503142861884, 1);
  sqcRZGate(q, 1.6253800373691452, 1);
  sqcRYGate(q, 2.90697736216116, 2);
  sqcRZGate(q, 2.6899048104625067, 2);
  sqcRYGate(q, -3.1411831240028225, 3);
  sqcRZGate(q, 2.419245779572814, 3);
  sqcRYGate(q, -0.00015038277784462653, 4);
  sqcRZGate(q, 1.7159339449555278, 4);
  sqcRYGate(q, -0.0038620198315930665, 5);
  sqcRZGate(q, 1.5515209150075588, 5);
  sqcRYGate(q, 0.00028359633488239666, 6);
  sqcRZGate(q, 0.499595320518295, 6);
  sqcRYGate(q, 0.011553306247670102, 7);
  sqcRZGate(q, 1.5766131916600061, 7);
  sqcRYGate(q, 3.1389521332269967, 8);
  sqcRZGate(q, 2.378194437446249, 8);
  sqcRYGate(q, -0.0009995849828973054, 9);
  sqcRZGate(q, -1.072959537124788, 9);
  sqcRYGate(q, 3.135809770771125, 10);
  sqcRZGate(q, 1.5882749003599967, 10);
  sqcRYGate(q, -0.0008324381149318327, 11);
  sqcRZGate(q, 2.5624366516915007, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.0011170412133068694, 0);
  sqcRZGate(q, -0.1005136714246637, 0);
  sqcRYGate(q, -1.5719813902107873, 1);
  sqcRZGate(q, -0.4128849783656472, 1);
  sqcRYGate(q, -3.1372901537312017, 2);
  sqcRZGate(q, -2.828969185256632, 2);
  sqcRYGate(q, -0.0006035095381138013, 3);
  sqcRZGate(q, -2.6695337684696003, 3);
  sqcRYGate(q, 1.5703397366086507, 4);
  sqcRZGate(q, -0.06654921634951669, 4);
  sqcRYGate(q, 1.5714840730508053, 5);
  sqcRZGate(q, -3.112552423245452, 5);
  sqcRYGate(q, -1.5400454264773096, 6);
  sqcRZGate(q, 0.3212653670054048, 6);
  sqcRYGate(q, -1.9138519400711118, 7);
  sqcRZGate(q, -3.098713639103889, 7);
  sqcRYGate(q, -3.1409820021416164, 8);
  sqcRZGate(q, -2.130721364645895, 8);
  sqcRYGate(q, 3.130755592175273, 9);
  sqcRZGate(q, 0.4102271358244336, 9);
  sqcRYGate(q, -0.004594357245558871, 10);
  sqcRZGate(q, -1.529119409334334, 10);
  sqcRYGate(q, 0.010341007289904088, 11);
  sqcRZGate(q, -2.4261977903520857, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 0.00047622458684463964, 0);
  sqcRZGate(q, -2.4243589092592868, 0);
  sqcRYGate(q, -3.1413483494412553, 1);
  sqcRZGate(q, 1.015251857547689, 1);
  sqcRYGate(q, -3.1392824137146773, 2);
  sqcRZGate(q, 1.6683006235172024, 2);
  sqcRYGate(q, -3.141328725393002, 3);
  sqcRZGate(q, -2.076243051173744, 3);
  sqcRYGate(q, -0.07514198518469417, 4);
  sqcRZGate(q, 2.6507950357891645, 4);
  sqcRYGate(q, 0.22573521261243104, 5);
  sqcRZGate(q, -3.006332424300412, 5);
  sqcRYGate(q, -2.1148918469968185, 6);
  sqcRZGate(q, -1.5624500153757426, 6);
  sqcRYGate(q, -2.9213429581751016, 7);
  sqcRZGate(q, 0.02359836024247164, 7);
  sqcRYGate(q, -3.09319949177463, 8);
  sqcRZGate(q, -1.2789654498290375, 8);
  sqcRYGate(q, -3.1350984479564388, 9);
  sqcRZGate(q, 1.3726235206618, 9);
  sqcRYGate(q, -3.1412187771437816, 10);
  sqcRZGate(q, 2.531321704784947, 10);
  sqcRYGate(q, 3.1407093267186044, 11);
  sqcRZGate(q, -1.338012309633989, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -0.00038216783851385046, 0);
  sqcRZGate(q, -0.07406994851443784, 0);
  sqcRYGate(q, -3.136801584599857, 1);
  sqcRZGate(q, 1.429060410940374, 1);
  sqcRYGate(q, 0.0004590461664681911, 2);
  sqcRZGate(q, -2.3788179756389676, 2);
  sqcRYGate(q, -1.5708512005198534, 3);
  sqcRZGate(q, 1.5488399016866334, 3);
  sqcRYGate(q, 0.0014785273869266646, 4);
  sqcRZGate(q, 2.1946650041616342, 4);
  sqcRYGate(q, -3.138616222290848, 5);
  sqcRZGate(q, 1.6936806351899518, 5);
  sqcRYGate(q, -1.570991633585266, 6);
  sqcRZGate(q, 3.1117946071271883, 6);
  sqcRYGate(q, 3.133338233317357, 7);
  sqcRZGate(q, -1.6112818009515024, 7);
  sqcRYGate(q, 3.1411128058505575, 8);
  sqcRZGate(q, 0.132805118650011, 8);
  sqcRYGate(q, 1.037924468718904e-05, 9);
  sqcRZGate(q, -2.534121532518008, 9);
  sqcRYGate(q, 3.137925674244564, 10);
  sqcRZGate(q, 1.938959778883702, 10);
  sqcRYGate(q, -3.137836726581649, 11);
  sqcRZGate(q, -2.934605916962249, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 0.029739873279837157, 0);
  sqcRZGate(q, 1.4119033062678463, 0);
  sqcRYGate(q, -1.5997706011776451, 1);
  sqcRZGate(q, 1.5528294722516287, 1);
  sqcRYGate(q, 3.11093283504283, 2);
  sqcRZGate(q, -1.5509645724076906, 2);
  sqcRYGate(q, 2.9829038953599003, 3);
  sqcRZGate(q, -1.5910298474026554, 3);
  sqcRYGate(q, 3.0829117173203184, 4);
  sqcRZGate(q, 1.6401599316221007, 4);
  sqcRYGate(q, -2.938980586535032, 5);
  sqcRZGate(q, -1.6160723805091006, 5);
  sqcRYGate(q, 1.3525016879942502, 6);
  sqcRZGate(q, -1.5662034897613086, 6);
  sqcRYGate(q, -2.9216877460999497, 7);
  sqcRZGate(q, -1.5916193979479232, 7);
  sqcRYGate(q, -2.7521545414475894, 8);
  sqcRZGate(q, -1.5793411843858138, 8);
  sqcRYGate(q, -1.13983980507099, 9);
  sqcRZGate(q, -1.5645192719585976, 9);
  sqcRYGate(q, -3.1318468005797286, 10);
  sqcRZGate(q, -0.7184242856809075, 10);
  sqcRYGate(q, -8.902297214111093e-05, 11);
  sqcRZGate(q, -2.7344046269265534, 11);

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
