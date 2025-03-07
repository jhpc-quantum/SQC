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

  sqcRYGate(q, 2.399006520654649, 0);
  sqcRZGate(q, 1.6483029616711515, 0);
  sqcRYGate(q, 1.8354740595473826, 1);
  sqcRZGate(q, -0.12262657677489752, 1);
  sqcRYGate(q, 3.141590728688733, 2);
  sqcRZGate(q, 0.6518856183467349, 2);
  sqcRYGate(q, -0.004687835400260919, 3);
  sqcRZGate(q, 1.353033415983781, 3);
  sqcRYGate(q, 1.572713435803405, 4);
  sqcRZGate(q, -1.597633998735568, 4);
  sqcRYGate(q, 3.0944273226180123, 5);
  sqcRZGate(q, -1.5740064570469445, 5);
  sqcRYGate(q, -1.5708258017912868, 6);
  sqcRZGate(q, 1.7239298490346122, 6);
  sqcRYGate(q, 1.0780175365456168, 7);
  sqcRZGate(q, 3.141453409990014, 7);
  sqcRYGate(q, 1.5707593379627793, 8);
  sqcRZGate(q, 1.139598170264617, 8);
  sqcRYGate(q, -0.21422876020493575, 9);
  sqcRZGate(q, -3.110543229700007, 9);
  sqcRYGate(q, 0.0021204809016463853, 10);
  sqcRZGate(q, 1.6050816341298582, 10);
  sqcRYGate(q, 1.196468236085745, 11);
  sqcRZGate(q, 2.2487329985459907, 11);
  sqcRYGate(q, 1.57078870289695, 12);
  sqcRZGate(q, 3.120747321031537, 12);
  sqcRYGate(q, -3.1415594341292645, 13);
  sqcRZGate(q, -1.7307650709496167, 13);
  sqcRYGate(q, -1.571062657824484, 14);
  sqcRZGate(q, -2.0809323653481013, 14);
  sqcRYGate(q, 3.1094179873994032, 15);
  sqcRZGate(q, -1.7102932473253825, 15);
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
  sqcRYGate(q, 2.5921700758500186, 0);
  sqcRZGate(q, 3.049268653616401, 0);
  sqcRYGate(q, 1.581156450936831, 1);
  sqcRZGate(q, 0.2767760656627611, 1);
  sqcRYGate(q, 6.525836493409543e-08, 2);
  sqcRZGate(q, -2.7534136070734405, 2);
  sqcRYGate(q, 3.135540070181054, 3);
  sqcRZGate(q, -0.6408465653485003, 3);
  sqcRYGate(q, -1.4181368306042124, 4);
  sqcRZGate(q, 0.0029871623454429397, 4);
  sqcRYGate(q, -0.28503290281799526, 5);
  sqcRZGate(q, -1.572286189652058, 5);
  sqcRYGate(q, 1.5711208340212046, 6);
  sqcRZGate(q, -1.6835267226581128, 6);
  sqcRYGate(q, 1.5708250865755211, 7);
  sqcRZGate(q, -1.0231738464251527, 7);
  sqcRYGate(q, -1.570893013073535, 8);
  sqcRZGate(q, 1.5706742595276495, 8);
  sqcRYGate(q, 1.5707964560623817, 9);
  sqcRZGate(q, -1.898089712866025, 9);
  sqcRYGate(q, -1.570801703453195, 10);
  sqcRZGate(q, -0.2635877095918744, 10);
  sqcRYGate(q, 0.042045306709410646, 11);
  sqcRZGate(q, 1.438154499368193, 11);
  sqcRYGate(q, 1.5516499255668421, 12);
  sqcRZGate(q, 2.7900252674948374, 12);
  sqcRYGate(q, -2.213244691544268, 13);
  sqcRZGate(q, 3.08290940184072, 13);
  sqcRYGate(q, -1.6676648405436432, 14);
  sqcRZGate(q, 1.4201256028912763, 14);
  sqcRYGate(q, 2.9309571336645797, 15);
  sqcRZGate(q, 1.1755742554428092, 15);
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
  sqcRYGate(q, 1.6058517027677381, 0);
  sqcRZGate(q, 2.0520324746279095, 0);
  sqcRYGate(q, -0.25333836851671876, 1);
  sqcRZGate(q, -2.7755868982836214, 1);
  sqcRYGate(q, 2.5565025605863704e-06, 2);
  sqcRZGate(q, 2.8506006554925367, 2);
  sqcRYGate(q, 0.0036285614562707727, 3);
  sqcRZGate(q, 2.164540637841713, 3);
  sqcRYGate(q, 1.570798473787332, 4);
  sqcRZGate(q, 1.5707846643895742, 4);
  sqcRYGate(q, 1.5713386733407446, 5);
  sqcRZGate(q, -1.128998579407079, 5);
  sqcRYGate(q, -3.1415029557734155, 6);
  sqcRZGate(q, 0.6250693815885366, 6);
  sqcRYGate(q, 3.1407766400764334, 7);
  sqcRZGate(q, 2.1186265326335243, 7);
  sqcRYGate(q, -1.5707777232287512, 8);
  sqcRZGate(q, -1.5713506534368307, 8);
  sqcRYGate(q, 3.1414269445335656, 9);
  sqcRZGate(q, -2.688181856364053, 9);
  sqcRYGate(q, 6.4485952146829205e-06, 10);
  sqcRZGate(q, -2.5483698413176223, 10);
  sqcRYGate(q, -1.410798541545688e-05, 11);
  sqcRZGate(q, 2.582424541418426, 11);
  sqcRYGate(q, -3.141576752761725, 12);
  sqcRZGate(q, 1.25043393613784, 12);
  sqcRYGate(q, 1.3112815027514193, 13);
  sqcRZGate(q, -0.1067546280422324, 13);
  sqcRYGate(q, -3.141308807219703, 14);
  sqcRZGate(q, -0.13443696976735353, 14);
  sqcRYGate(q, -0.0009091537116825421, 15);
  sqcRZGate(q, 1.9773943821309201, 15);
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
  sqcRYGate(q, -0.1729171498959019, 0);
  sqcRZGate(q, 0.30215032371183864, 0);
  sqcRYGate(q, 2.0842012417369826, 1);
  sqcRZGate(q, 2.5305166617576575, 1);
  sqcRYGate(q, -1.1331206651626093, 2);
  sqcRZGate(q, -3.0208824854768404, 2);
  sqcRYGate(q, 0.5993198270169078, 3);
  sqcRZGate(q, 2.858232629345826, 3);
  sqcRYGate(q, 1.5708707966114575, 4);
  sqcRZGate(q, 0.4189341621231465, 4);
  sqcRYGate(q, -1.570810442644884, 5);
  sqcRZGate(q, -1.5708057699141769, 5);
  sqcRYGate(q, 1.5854234409764962, 6);
  sqcRZGate(q, -1.5915915384611066, 6);
  sqcRYGate(q, -1.5779065373173213, 7);
  sqcRZGate(q, -2.0029620478510592, 7);
  sqcRYGate(q, 1.5710573347566479, 8);
  sqcRZGate(q, -1.2904923960571708, 8);
  sqcRYGate(q, -1.66997540911178, 9);
  sqcRZGate(q, -1.4731141900340594, 9);
  sqcRYGate(q, 1.3451111178723458, 10);
  sqcRZGate(q, -0.07807132036022678, 10);
  sqcRYGate(q, 1.9433459031533262, 11);
  sqcRZGate(q, 0.8155464785207516, 11);
  sqcRYGate(q, 3.1415560190508027, 12);
  sqcRZGate(q, 2.2143229668487243, 12);
  sqcRYGate(q, -2.608108210040916, 13);
  sqcRZGate(q, 2.580262103619268, 13);
  sqcRYGate(q, 2.168889229361118, 14);
  sqcRZGate(q, 0.24508645346262006, 14);
  sqcRYGate(q, -2.453706996968372, 15);
  sqcRZGate(q, 2.040956438277907, 15);
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
  sqcRYGate(q, -3.141537424048191, 0);
  sqcRZGate(q, 2.3402618846869427, 0);
  sqcRYGate(q, -1.570783258992956, 1);
  sqcRZGate(q, -1.5359944985398766, 1);
  sqcRYGate(q, -3.1415639827037194, 2);
  sqcRZGate(q, -1.8852970865024619, 2);
  sqcRYGate(q, -3.1415824129106933, 3);
  sqcRZGate(q, -0.28284649768538744, 3);
  sqcRYGate(q, 0.00012451615680448183, 4);
  sqcRZGate(q, 0.7122451301028123, 4);
  sqcRYGate(q, -1.5708477222222899, 5);
  sqcRZGate(q, -0.6851088644461277, 5);
  sqcRYGate(q, 1.568566840356662, 6);
  sqcRZGate(q, 1.57084523284842, 6);
  sqcRYGate(q, 2.841491589817983e-05, 7);
  sqcRZGate(q, -0.9916910108895003, 7);
  sqcRYGate(q, 3.141519861687639, 8);
  sqcRZGate(q, 2.329579632625893, 8);
  sqcRYGate(q, -2.7855912585003213, 9);
  sqcRZGate(q, -7.000931022753757e-05, 9);
  sqcRYGate(q, 2.503022162454315e-07, 10);
  sqcRZGate(q, -0.9160210922502431, 10);
  sqcRYGate(q, 0.0001584153926099674, 11);
  sqcRZGate(q, 2.325446265064917, 11);
  sqcRYGate(q, 0.00016209859601445942, 12);
  sqcRZGate(q, 1.8422985710396178, 12);
  sqcRYGate(q, 0.7055086043075209, 13);
  sqcRZGate(q, 1.6104967369939598, 13);
  sqcRYGate(q, -0.00047647752321994144, 14);
  sqcRZGate(q, -1.7457855679879808, 14);
  sqcRYGate(q, 0.0002277830269162907, 15);
  sqcRZGate(q, 1.1017005767553665, 15);
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
  sqcRYGate(q, 1.5709825144770981, 0);
  sqcRZGate(q, 6.755437297822908e-05, 0);
  sqcRYGate(q, -0.000283193920935787, 1);
  sqcRZGate(q, -0.03525792545903654, 1);
  sqcRYGate(q, 2.304189462725015, 2);
  sqcRZGate(q, 2.5332491496887934, 2);
  sqcRYGate(q, 1.5625310970926076, 3);
  sqcRZGate(q, -2.1732766084362583, 3);
  sqcRYGate(q, 3.14111401043345, 4);
  sqcRZGate(q, -1.4179958189600743, 4);
  sqcRYGate(q, 3.1386697229326894, 5);
  sqcRZGate(q, 0.6956045656954685, 5);
  sqcRYGate(q, -1.5707647970336875, 6);
  sqcRZGate(q, 1.7431172925625802, 6);
  sqcRYGate(q, 2.7198071040945897, 7);
  sqcRZGate(q, 0.006785362923325316, 7);
  sqcRYGate(q, -3.409757810012549e-05, 8);
  sqcRZGate(q, 2.2319215852657064, 8);
  sqcRYGate(q, 2.346636885628761, 9);
  sqcRZGate(q, -0.19941469877849197, 9);
  sqcRYGate(q, -0.396683407104919, 10);
  sqcRZGate(q, -2.889661063569149, 10);
  sqcRYGate(q, 1.2858513584384124, 11);
  sqcRZGate(q, 3.1405884278399676, 11);
  sqcRYGate(q, -3.1408925833674397, 12);
  sqcRZGate(q, -0.2068566521353807, 12);
  sqcRYGate(q, -1.5681904481280544, 13);
  sqcRZGate(q, 0.12997017864005844, 13);
  sqcRYGate(q, -1.5913262099664944, 14);
  sqcRZGate(q, -1.5318297182269358, 14);
  sqcRYGate(q, 2.1874690713274685, 15);
  sqcRZGate(q, -0.00026500132502635127, 15);
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
  sqcRYGate(q, -1.5708112363792823, 0);
  sqcRZGate(q, 2.29469076335589, 0);
  sqcRYGate(q, 1.5709070616097731, 1);
  sqcRZGate(q, -1.5648393156567855, 1);
  sqcRYGate(q, -2.663741652137923, 2);
  sqcRZGate(q, 1.734147546931629, 2);
  sqcRYGate(q, 2.361752704737525e-05, 3);
  sqcRZGate(q, -0.9685382063511998, 3);
  sqcRYGate(q, 9.532695205894896e-05, 4);
  sqcRZGate(q, 0.9784107237578787, 4);
  sqcRYGate(q, -3.141586153906583, 5);
  sqcRZGate(q, 2.9514528679022423, 5);
  sqcRYGate(q, -0.009307293240647496, 6);
  sqcRZGate(q, 1.2916876617604007, 6);
  sqcRYGate(q, -0.12607785573451524, 7);
  sqcRZGate(q, -1.475045683086372, 7);
  sqcRYGate(q, -1.5707936867771302, 8);
  sqcRZGate(q, -1.7038221547674146, 8);
  sqcRYGate(q, 0.8565943281821627, 9);
  sqcRZGate(q, 0.001410829879765707, 9);
  sqcRYGate(q, -3.14156891196343, 10);
  sqcRZGate(q, 0.21311494996328145, 10);
  sqcRYGate(q, -2.690703985832416, 11);
  sqcRZGate(q, 1.5719066971125386, 11);
  sqcRYGate(q, 2.290683535186983e-06, 12);
  sqcRZGate(q, 0.1347517758815924, 12);
  sqcRYGate(q, -3.042427962416347, 13);
  sqcRZGate(q, -1.565620483357315, 13);
  sqcRYGate(q, -3.141406664405473, 14);
  sqcRZGate(q, -1.299219320770236, 14);
  sqcRYGate(q, 1.5722345452550295, 15);
  sqcRZGate(q, 1.154286305301791, 15);
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
  sqcRYGate(q, -6.159334685751361e-05, 0);
  sqcRZGate(q, 1.3162027933258629, 0);
  sqcRYGate(q, 3.005243836625832, 1);
  sqcRZGate(q, 0.05849168945053051, 1);
  sqcRYGate(q, 3.1413901698397333, 2);
  sqcRZGate(q, 0.6338230866267079, 2);
  sqcRYGate(q, 1.5711370352040737, 3);
  sqcRZGate(q, 1.621309297497957, 3);
  sqcRYGate(q, 1.5711327170354226, 4);
  sqcRZGate(q, -2.6720595483902034, 4);
  sqcRYGate(q, -1.5726528996866493, 5);
  sqcRZGate(q, 2.4124305034599827, 5);
  sqcRYGate(q, -0.0004936904769019534, 6);
  sqcRZGate(q, 2.8848047561589665, 6);
  sqcRYGate(q, 1.5721414089565968, 7);
  sqcRZGate(q, 0.3963099458844352, 7);
  sqcRYGate(q, -3.141002839935922, 8);
  sqcRZGate(q, -2.912786865696025, 8);
  sqcRYGate(q, -1.6032281870562575, 9);
  sqcRZGate(q, 2.7082745697004147, 9);
  sqcRYGate(q, 1.1373547350517103e-05, 10);
  sqcRZGate(q, 1.0504316542718917, 10);
  sqcRYGate(q, -1.5703324052888892, 11);
  sqcRZGate(q, -1.9646233191748432, 11);
  sqcRYGate(q, -3.140809104277778, 12);
  sqcRZGate(q, -2.3117441844381066, 12);
  sqcRYGate(q, 1.5653134448491144, 13);
  sqcRZGate(q, -2.502269788980651, 13);
  sqcRYGate(q, -3.141506987438359, 14);
  sqcRZGate(q, -2.389862487439955, 14);
  sqcRYGate(q, 2.357372675202294, 15);
  sqcRZGate(q, 0.5252840181080307, 15);

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
