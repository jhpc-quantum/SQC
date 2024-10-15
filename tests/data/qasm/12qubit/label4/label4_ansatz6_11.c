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

  sqcRYGate(q, -0.18197038295359658, 0);
  sqcRYGate(q, -2.9438184866605175, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.943282705034377, 0);
  sqcRYGate(q, 0.8245795747022902, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.533626488035448, 1);
  sqcRYGate(q, -1.3116603316275413, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.790187862258976, 1);
  sqcRYGate(q, -0.06486488348897745, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.551510545954936, 2);
  sqcRYGate(q, -1.1453227577764702, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6114029226764677, 2);
  sqcRYGate(q, 2.790646839938496, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.009851786965088, 3);
  sqcRYGate(q, 2.467586060733686, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2303375035078226, 3);
  sqcRYGate(q, 2.2345510348090807, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.912158166928594, 4);
  sqcRYGate(q, -1.5753669893818376, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.42107474514802895, 4);
  sqcRYGate(q, 0.9964299504980794, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.41399701654980653, 5);
  sqcRYGate(q, -0.7858238198547349, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0214042401705872, 5);
  sqcRYGate(q, -0.7498371305399925, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.12643329618930021, 6);
  sqcRYGate(q, 0.08146336708383681, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.926774245811293, 6);
  sqcRYGate(q, -2.0035520061336864, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2592156195424211, 7);
  sqcRYGate(q, 2.665142616185041, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.6703732626601597, 7);
  sqcRYGate(q, 0.09321319195974662, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.5068309764284034, 8);
  sqcRYGate(q, -1.6000152268709347, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.9641821031530258, 8);
  sqcRYGate(q, -3.1379926511041973, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.89850895244479, 9);
  sqcRYGate(q, -1.9237018976445623, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.252589780628683, 9);
  sqcRYGate(q, -1.4044437666634582, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.0448643804079092, 10);
  sqcRYGate(q, -1.1388476160121348, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.1088602203691131, 10);
  sqcRYGate(q, 0.18824003082944604, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.1080070364335883, 0);
  sqcRYGate(q, 1.5356854568005405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6586086018585258, 0);
  sqcRYGate(q, -0.6949077891632006, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8968892680790734, 1);
  sqcRYGate(q, 0.7909319157550074, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.47524051653491334, 1);
  sqcRYGate(q, 0.5373373605769478, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.630738658118358, 2);
  sqcRYGate(q, -2.538358570551983, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0935036053333866, 2);
  sqcRYGate(q, -1.787018316671804, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5871343246435994, 3);
  sqcRYGate(q, 1.7808877863047217, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.831877691927868, 3);
  sqcRYGate(q, 0.10435239365321296, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6687230382116245, 4);
  sqcRYGate(q, 0.4659444575115624, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9777731253335956, 4);
  sqcRYGate(q, -2.7368909750184955, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4538522050083413, 5);
  sqcRYGate(q, -2.4292067039376466, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9691131456859763, 5);
  sqcRYGate(q, -0.8828685341564699, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5130353729101877, 6);
  sqcRYGate(q, -2.280223437694239, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.01580074358039026, 6);
  sqcRYGate(q, -1.0500954545841283, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3671241717292535, 7);
  sqcRYGate(q, 2.314286117455823, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.6520378360465104, 7);
  sqcRYGate(q, -0.057082029738235285, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5492354091931113, 8);
  sqcRYGate(q, 0.8705411992002039, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.36558364010238315, 8);
  sqcRYGate(q, 2.8733860864981686, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.0868090767702445, 9);
  sqcRYGate(q, -2.362889263988786, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.8542452993587135, 9);
  sqcRYGate(q, -0.31418863433160665, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.105039609382762, 10);
  sqcRYGate(q, 1.2962372478147444, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0585258732736091, 10);
  sqcRYGate(q, 0.42998680770138487, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.2340377116905628, 0);
  sqcRYGate(q, 0.45897641330158656, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0655541049452713, 0);
  sqcRYGate(q, -2.839256060924475, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7972902599617164, 1);
  sqcRYGate(q, -0.3593008745927602, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.001371939528444166, 1);
  sqcRYGate(q, -2.0754457479901145, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1961647510218931, 2);
  sqcRYGate(q, -2.7659033891798197, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8238426218013166, 2);
  sqcRYGate(q, 0.31460337282914796, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9735482995167091, 3);
  sqcRYGate(q, 0.9569593649201343, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0345992979716003, 3);
  sqcRYGate(q, -1.766490894249709, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1280691601560866, 4);
  sqcRYGate(q, 1.305940932282715, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.54145179748479, 4);
  sqcRYGate(q, -1.6688014282624597, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.09690441260489457, 5);
  sqcRYGate(q, -0.5187005912423451, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0918741303837747, 5);
  sqcRYGate(q, 1.3969715307917798, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.124716883090637, 6);
  sqcRYGate(q, 2.1996392910645906, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4284432733805552, 6);
  sqcRYGate(q, -0.38199838913486567, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.29415406853377757, 7);
  sqcRYGate(q, 2.2182570198149394, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.1158099712217306, 7);
  sqcRYGate(q, 0.041517475847697057, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.7761950503115616, 8);
  sqcRYGate(q, -1.776949463101461, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.13677846498206758, 8);
  sqcRYGate(q, -1.2178392852222355, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5290672585208593, 9);
  sqcRYGate(q, 1.183106759805293, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.2413970202390097, 9);
  sqcRYGate(q, -1.1320073379674518, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.616455414847158, 10);
  sqcRYGate(q, 0.31255898350716826, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.959254933806418, 10);
  sqcRYGate(q, 1.3861443785627285, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0106576527071525, 0);
  sqcRYGate(q, 1.5742670875617373, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.187405108945903, 0);
  sqcRYGate(q, 2.09977675021739, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6569754948066904, 1);
  sqcRYGate(q, 1.1295911516024875, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.08107433317062895, 1);
  sqcRYGate(q, 0.22857495640759765, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.15554162316751885, 2);
  sqcRYGate(q, 1.6263258698793956, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5770737373213266, 2);
  sqcRYGate(q, 2.7709191319221347, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3143664520057152, 3);
  sqcRYGate(q, -0.7010763686739822, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9532229536090955, 3);
  sqcRYGate(q, -2.8444577076948017, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.955811518050301, 4);
  sqcRYGate(q, 2.995694157146175, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5771985856376647, 4);
  sqcRYGate(q, -2.266821620945361, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8787822508422378, 5);
  sqcRYGate(q, 1.3440757290093088, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.06334574625322809, 5);
  sqcRYGate(q, 1.0397749687173814, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1001321932358294, 6);
  sqcRYGate(q, 0.1792622600739632, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9868085955965826, 6);
  sqcRYGate(q, -3.0470300870774523, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.124361668607752, 7);
  sqcRYGate(q, -1.9679138522794855, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.3393309423425386, 7);
  sqcRYGate(q, 0.09405550319313871, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.8096011460685872, 8);
  sqcRYGate(q, 1.8271891957899697, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.114748092536972, 8);
  sqcRYGate(q, 2.383447919193103, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8414879453738244, 9);
  sqcRYGate(q, 2.530011295497611, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9775754349290988, 9);
  sqcRYGate(q, -2.9628775559352114, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.9987897643267205, 10);
  sqcRYGate(q, -1.821945901789574, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0748631928256782, 10);
  sqcRYGate(q, 1.1376889544234234, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.41680466114434694, 0);
  sqcRYGate(q, 0.6490086275849205, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2326464441101681, 0);
  sqcRYGate(q, 0.8948519391137881, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3036649492382493, 1);
  sqcRYGate(q, 3.0240424777370407, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0926917050984013, 1);
  sqcRYGate(q, -0.516143323714874, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.18439248909840752, 2);
  sqcRYGate(q, 2.9864128204570517, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5875002656284093, 2);
  sqcRYGate(q, 2.9497377833518046, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3866449157114227, 3);
  sqcRYGate(q, 1.6193679325121026, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.49200445180885666, 3);
  sqcRYGate(q, 1.3480297857150227, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.05394662387256944, 4);
  sqcRYGate(q, -0.9454552507846492, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0376695728053251, 4);
  sqcRYGate(q, 0.2578023767601874, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.100934709149878, 5);
  sqcRYGate(q, -2.212632273666167, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.634511282711649, 5);
  sqcRYGate(q, -1.3933506013126196, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.15761029258515613, 6);
  sqcRYGate(q, 0.044293401561707135, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.920727946742817, 6);
  sqcRYGate(q, 3.1246124782729416, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2983616974530684, 7);
  sqcRYGate(q, 0.8596749170217315, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.42082334260832255, 7);
  sqcRYGate(q, -3.1188550805270223, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.5491186610166955, 8);
  sqcRYGate(q, -0.10948860146622952, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.353385556684047, 8);
  sqcRYGate(q, 2.7996984852922187, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.9667053244912543, 9);
  sqcRYGate(q, -2.1668453515554704, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.875350065022884, 9);
  sqcRYGate(q, 0.004409900863915794, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.136034410565511, 10);
  sqcRYGate(q, -0.9750868001588977, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.0971472581990014, 10);
  sqcRYGate(q, 2.7297434767669304, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.5685114500731138, 0);
  sqcRYGate(q, 0.28755758204530546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.12295845997194368, 0);
  sqcRYGate(q, -2.4327041041254187, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7697395768908861, 1);
  sqcRYGate(q, -0.12693488600592204, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.111462795387984, 1);
  sqcRYGate(q, 2.6114424972895995, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.452668570844385, 2);
  sqcRYGate(q, -1.6208950381947163, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5137028304652707, 2);
  sqcRYGate(q, 0.019970042542517902, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2761402826704638, 3);
  sqcRYGate(q, 0.26787165430298376, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3195327437274305, 3);
  sqcRYGate(q, -1.7439364265169877, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6375958564414947, 4);
  sqcRYGate(q, -1.0381490314249167, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3680611379918595, 4);
  sqcRYGate(q, -2.125446469575407, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.606859334420755, 5);
  sqcRYGate(q, -1.6885111325839812, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.123557664433085, 5);
  sqcRYGate(q, 1.182591599911368, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7302685206293005, 6);
  sqcRYGate(q, 0.14659868425507552, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7709526914353174, 6);
  sqcRYGate(q, -1.1923234775762515, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3402002090775267, 7);
  sqcRYGate(q, -2.8420914640351564, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.022492576676061075, 7);
  sqcRYGate(q, 3.1370410899648893, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.411819582902997, 8);
  sqcRYGate(q, 0.9271144978229113, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.06564277401127698, 8);
  sqcRYGate(q, 2.252686329337486, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5327405171157655, 9);
  sqcRYGate(q, -0.2741883789884998, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.3748937474004022, 9);
  sqcRYGate(q, 2.5450368633995573, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.4596197656387928, 10);
  sqcRYGate(q, 2.4528498498893434, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.1052687232033183, 10);
  sqcRYGate(q, 0.6414548634627046, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.778709701086386, 0);
  sqcRYGate(q, -2.634656452155517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.244810172540702, 0);
  sqcRYGate(q, 1.8385123872722593, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.05985966101853535, 1);
  sqcRYGate(q, 3.0522295410268425, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.898860500580146, 1);
  sqcRYGate(q, -3.0049676426945555, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2980312197472177, 2);
  sqcRYGate(q, 2.7172037825110396, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1302523935801623, 2);
  sqcRYGate(q, 2.8419122248779725, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.829023361737009, 3);
  sqcRYGate(q, -1.713917837550688, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1151212385193257, 3);
  sqcRYGate(q, 2.1429085621619963, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1110697923257993, 4);
  sqcRYGate(q, -2.381263290343371, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.623068533574829, 4);
  sqcRYGate(q, 2.8994690113934967, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4404781427799609, 5);
  sqcRYGate(q, -1.6543122074799819, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1275803610810264, 5);
  sqcRYGate(q, -3.0785193163905866, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6579271822030726, 6);
  sqcRYGate(q, 2.3814472846696595, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.167973986060036, 6);
  sqcRYGate(q, -1.1864906035275438, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4890268826799025, 7);
  sqcRYGate(q, -1.4698411538046674, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.7683379159991506, 7);
  sqcRYGate(q, -0.12859219114756204, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.10271437123342644, 8);
  sqcRYGate(q, -1.7320510501843656, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6475299273012585, 8);
  sqcRYGate(q, -2.294931792025134, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.7807846466920711, 9);
  sqcRYGate(q, 1.3077201023252893, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.1394740341527638, 9);
  sqcRYGate(q, -0.19925951293995592, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.405028436548261, 10);
  sqcRYGate(q, 0.3422667195064971, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.01781101515768535, 10);
  sqcRYGate(q, 2.2695277646531036, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6646182546921366, 0);
  sqcRYGate(q, 2.0660184510267845, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.069293765572282, 0);
  sqcRYGate(q, 2.621988407818528, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6963502607511134, 1);
  sqcRYGate(q, -2.6868609516983546, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3735496363713053, 1);
  sqcRYGate(q, 0.5545035255647868, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.48012458286588, 2);
  sqcRYGate(q, -0.33863163334012275, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0012127900047627094, 2);
  sqcRYGate(q, 0.008203402173084311, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.085812936810026, 3);
  sqcRYGate(q, 1.7607668673239445, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9822087360670801, 3);
  sqcRYGate(q, -1.616213906384366, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.1429237658631637, 4);
  sqcRYGate(q, -0.9695559118265646, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7214235036339316, 4);
  sqcRYGate(q, -0.5792108242164333, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2389777951558427, 5);
  sqcRYGate(q, 1.5277869280326541, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1861929409896783, 5);
  sqcRYGate(q, 2.28737532996841, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6443697939858892, 6);
  sqcRYGate(q, 1.664505141396968, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.0007233785360067913, 6);
  sqcRYGate(q, 1.505008073530325, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.303213506432427, 7);
  sqcRYGate(q, -1.2149556950600287, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.7695555494590218, 7);
  sqcRYGate(q, 3.0261393954374998, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.3728609484412786, 8);
  sqcRYGate(q, 2.137929583160207, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9615027426833918, 8);
  sqcRYGate(q, -0.736978806458092, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.778738080626912, 9);
  sqcRYGate(q, -1.3955925090229617, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.2218458890695896, 9);
  sqcRYGate(q, 1.8127694518246351, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.9110090193259057, 10);
  sqcRYGate(q, 3.03180927318054, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.43041116789489, 10);
  sqcRYGate(q, -0.6373667936221343, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6935558782354112, 0);
  sqcRYGate(q, -3.1312311692785633, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.253793810011901, 0);
  sqcRYGate(q, -1.5064813017947616, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4979614070170733, 1);
  sqcRYGate(q, -2.941971673974425, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6727307650464074, 1);
  sqcRYGate(q, 1.4619909752264961, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6476931756047306, 2);
  sqcRYGate(q, -0.531306558857084, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1178155101249097, 2);
  sqcRYGate(q, -1.4486340620966356, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3674552736980404, 3);
  sqcRYGate(q, -2.0661956622365016, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.007641228762392593, 3);
  sqcRYGate(q, 0.005355320383713114, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.3394812304961734, 4);
  sqcRYGate(q, 0.9210498170861872, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1096696714838075, 4);
  sqcRYGate(q, 0.5004164682839187, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.035338012784711, 5);
  sqcRYGate(q, 2.346483986714742, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.022066600567701346, 5);
  sqcRYGate(q, -3.1332056147631677, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.159187223279767, 6);
  sqcRYGate(q, -2.296416686428618, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.20312122769733154, 6);
  sqcRYGate(q, 1.3284015139919614, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.007237451345029, 7);
  sqcRYGate(q, -2.336032996139786, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.2559982592680834, 7);
  sqcRYGate(q, -3.130276780762887, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.5464557832562686, 8);
  sqcRYGate(q, -0.4747546128728626, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.10753247753771333, 8);
  sqcRYGate(q, -0.10771128912867897, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.3362402779120499, 9);
  sqcRYGate(q, -1.483543348258712, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.2472218444866625, 9);
  sqcRYGate(q, 0.22402246905878911, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.5103571931092643, 10);
  sqcRYGate(q, -0.11563148177051374, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.8718328967835909, 10);
  sqcRYGate(q, -3.063438309909985, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.7251775458030116, 0);
  sqcRYGate(q, -1.3989174401942888, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.678752841865248, 0);
  sqcRYGate(q, 1.9664871856695623, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1196104097289505, 1);
  sqcRYGate(q, -2.916559763226954, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.30625341259299077, 1);
  sqcRYGate(q, -1.7643804553561582, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7574778760785559, 2);
  sqcRYGate(q, 2.891187772618293, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.879797657535455, 2);
  sqcRYGate(q, 2.8637550792552524, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5019017750792161, 3);
  sqcRYGate(q, -0.4775483495739925, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.506848322642095, 3);
  sqcRYGate(q, 3.0890035692759894, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4024964745679327, 4);
  sqcRYGate(q, 0.282870473645314, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7344162787299804, 4);
  sqcRYGate(q, 0.04449236077957064, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1269545389279596, 5);
  sqcRYGate(q, 1.26786898299821, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.119524149173494, 5);
  sqcRYGate(q, 0.012750519963417696, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2288014265637885, 6);
  sqcRYGate(q, -1.56163008794731, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.114099556284756, 6);
  sqcRYGate(q, 1.7391531334488601, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.274753553353731, 7);
  sqcRYGate(q, -2.3437331389556224, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.2252355853071126, 7);
  sqcRYGate(q, -1.922587661354473, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.3864993319630776, 8);
  sqcRYGate(q, 3.1201447354495864, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.1139489486304208, 8);
  sqcRYGate(q, 0.6890093814399072, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.939220706610764, 9);
  sqcRYGate(q, 3.0789118006928713, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.19376426180436523, 9);
  sqcRYGate(q, -1.4210265730460563, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.020386453471569, 10);
  sqcRYGate(q, 0.9282177016158898, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.3618370481793014, 10);
  sqcRYGate(q, 0.40625960820368423, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.0978506062641697, 0);
  sqcRYGate(q, -2.9447743794536985, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.078106158207029, 0);
  sqcRYGate(q, 0.10303117588592858, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6241389063157676, 1);
  sqcRYGate(q, -0.701720425317391, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.114237120332646, 1);
  sqcRYGate(q, -2.918447395684929, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.009273790152812, 2);
  sqcRYGate(q, 1.2860520367718014, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.057353478489842215, 2);
  sqcRYGate(q, 1.3209217105405289, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4938093077540058, 3);
  sqcRYGate(q, -0.36399863432076973, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1103589877199336, 3);
  sqcRYGate(q, 0.6841218901667823, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9022231225055414, 4);
  sqcRYGate(q, -1.4430275474347622, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.29809926238337514, 4);
  sqcRYGate(q, -3.127659459970173, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0955138878951263, 5);
  sqcRYGate(q, -0.08586666289322586, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0943484927659712, 5);
  sqcRYGate(q, 2.9630904450331506, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7602130712406706, 6);
  sqcRYGate(q, 1.7346824836560921, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.029868109694561114, 6);
  sqcRYGate(q, 3.132582344275934, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5309396405714493, 7);
  sqcRYGate(q, -1.399757984818036, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.0939377947132987, 7);
  sqcRYGate(q, -3.134698144195681, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.462427235154263, 8);
  sqcRYGate(q, -1.6017457872938623, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.0975479719391983, 8);
  sqcRYGate(q, 3.01538576949604, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.3462525263042449, 9);
  sqcRYGate(q, -1.500212571873642, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.9241379460136039, 9);
  sqcRYGate(q, 3.0240797252921525, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.2609148106788663, 10);
  sqcRYGate(q, 0.3702466082156409, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.0126189228020355, 10);
  sqcRYGate(q, 2.6657230303046044, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.6316054879747682, 0);
  sqcRYGate(q, -1.7114963704473036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.828505375246264, 0);
  sqcRYGate(q, 1.7781270725699447, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9206711586246277, 1);
  sqcRYGate(q, -2.994046175304707, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.140101457609534, 1);
  sqcRYGate(q, -2.9657164655409467, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3764149904219956, 2);
  sqcRYGate(q, -3.0856031399976382, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.14192222884864938, 2);
  sqcRYGate(q, -0.11806450541825116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0861656614702566, 3);
  sqcRYGate(q, 1.4965114060877474, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.011972100161639966, 3);
  sqcRYGate(q, -2.5058712563609733, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.233898213235075, 4);
  sqcRYGate(q, -1.7661402642259154, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.732006815914141, 4);
  sqcRYGate(q, -0.003340346369990895, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0468250909291403, 5);
  sqcRYGate(q, -2.1164833636127893, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0187936722125546, 5);
  sqcRYGate(q, -1.9651780413684792, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.659771942650884, 6);
  sqcRYGate(q, 2.696252079976523, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0431238248927466, 6);
  sqcRYGate(q, 0.6754144484657891, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5687092970719219, 7);
  sqcRYGate(q, 1.511797405573068, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.9358642547886067, 7);
  sqcRYGate(q, 1.3105080991605793, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.5612955997426848, 8);
  sqcRYGate(q, 1.301441247952499, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.4296742426420745, 8);
  sqcRYGate(q, 2.283638294084693, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.5307968164762706, 9);
  sqcRYGate(q, 2.226815711906132, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.9958944471462052, 9);
  sqcRYGate(q, -0.05495840900742888, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.6665200353705664, 10);
  sqcRYGate(q, -0.400357351032107, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.531697753131725, 10);
  sqcRYGate(q, 0.6354566549652512, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.281298654583413, 0);
  sqcRYGate(q, 0.19682338609489392, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5221847702543336, 0);
  sqcRYGate(q, -1.8876207806342928, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.334709167794672, 1);
  sqcRYGate(q, 2.1786753749375265, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.089850756495035, 1);
  sqcRYGate(q, 2.9991657891257124, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0695244845123177, 2);
  sqcRYGate(q, -1.6165829511020018, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5280499627949689, 2);
  sqcRYGate(q, -0.7313571129860109, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.347683097435691, 3);
  sqcRYGate(q, 1.9372603278916571, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5909895269748084, 3);
  sqcRYGate(q, 3.081670184281656, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.938356295766936, 4);
  sqcRYGate(q, -0.5337291245511873, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3564920002473908, 4);
  sqcRYGate(q, -1.078851206537685, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4654301729039734, 5);
  sqcRYGate(q, -2.9276665803193307, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.140647656929605, 5);
  sqcRYGate(q, -3.1384290530901406, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6869546651363163, 6);
  sqcRYGate(q, 1.5666575734217556, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.081654988386357, 6);
  sqcRYGate(q, 3.0199167581779744, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2196890753987835, 7);
  sqcRYGate(q, 0.08422637236183513, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.01629823881457061, 7);
  sqcRYGate(q, -0.036272283866896515, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.769780772905372, 8);
  sqcRYGate(q, -0.7087736161245213, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.9269799867614847, 8);
  sqcRYGate(q, -2.071232963574082, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6831552412235338, 9);
  sqcRYGate(q, -1.775636475590805, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.060150997123136, 9);
  sqcRYGate(q, -2.855103643145762, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.32978873902969763, 10);
  sqcRYGate(q, 3.1224118794222866, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6878813040593104, 10);
  sqcRYGate(q, -0.6164381058001899, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6748194028437786, 0);
  sqcRYGate(q, 0.5639168630746347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.617011306860246, 0);
  sqcRYGate(q, -0.8360206165086987, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.145310125788612, 1);
  sqcRYGate(q, -0.7323126738912462, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0016063673854771524, 1);
  sqcRYGate(q, -0.30796275638360926, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.48607527638936, 2);
  sqcRYGate(q, -0.6773648665250347, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.804886034372284, 2);
  sqcRYGate(q, -0.9849203220863618, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8657174160423906, 3);
  sqcRYGate(q, 0.5749373281596245, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0032368946452177023, 3);
  sqcRYGate(q, 0.0014210502176706288, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.061029517484160294, 4);
  sqcRYGate(q, 3.1001945447435433, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2717994501701018, 4);
  sqcRYGate(q, -2.0212876312107113, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.067418381098447, 5);
  sqcRYGate(q, 1.8033246874989917, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6681441797526144, 5);
  sqcRYGate(q, 3.139313921784823, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5098109972628322, 6);
  sqcRYGate(q, 2.219209643013345, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5695118518965137, 6);
  sqcRYGate(q, -0.0039790481573977795, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6349265848959487, 7);
  sqcRYGate(q, -2.3997555560280497, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.574108316643924, 7);
  sqcRYGate(q, 3.1222635526239135, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.9328473970118705, 8);
  sqcRYGate(q, 1.565230131221352, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5657560724081376, 8);
  sqcRYGate(q, -3.1412011996340636, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5712051819181538, 9);
  sqcRYGate(q, -0.6879888689862909, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5864751729004323, 9);
  sqcRYGate(q, -1.7449582341510261, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.3082485742153471, 10);
  sqcRYGate(q, 0.29947935893599803, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5692803383970908, 10);
  sqcRYGate(q, 0.004630551480724852, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.10405839262741101, 0);
  sqcRYGate(q, -1.4658041254706746, 1);
  sqcRYGate(q, 1.2695597825671836, 2);
  sqcRYGate(q, -1.268004554862845, 3);
  sqcRYGate(q, 2.193640038551895, 4);
  sqcRYGate(q, -0.2389169686646078, 5);
  sqcRYGate(q, 2.631547838549567, 6);
  sqcRYGate(q, -1.634138586708832, 7);
  sqcRYGate(q, -1.2093675386981435, 8);
  sqcRYGate(q, -1.569957590657389, 9);
  sqcRYGate(q, -1.309068640578265, 10);
  sqcRYGate(q, -1.5674631114807187, 11);

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
