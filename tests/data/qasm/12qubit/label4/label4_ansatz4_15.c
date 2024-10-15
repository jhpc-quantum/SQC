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

  sqcRYGate(q, -1.5686753666082707, 0);
  sqcRZGate(q, -1.5065508538608883, 0);
  sqcRYGate(q, 1.5746832176100893, 1);
  sqcRZGate(q, 0.0009025968037998125, 1);
  sqcRYGate(q, -1.710094378661322, 2);
  sqcRZGate(q, -3.0855145572939886, 2);
  sqcRYGate(q, -1.6114739347302276, 3);
  sqcRZGate(q, -3.1412592975116422, 3);
  sqcRYGate(q, 3.141237642406262, 4);
  sqcRZGate(q, -1.1577462844632684, 4);
  sqcRYGate(q, 3.1414787198263228, 5);
  sqcRZGate(q, 1.7557542043047842, 5);
  sqcRYGate(q, 1.5646936164890326, 6);
  sqcRZGate(q, 1.780836638604236, 6);
  sqcRYGate(q, 1.5732799147402996, 7);
  sqcRZGate(q, -3.1397111619306344, 7);
  sqcRYGate(q, -1.5694427094208132, 8);
  sqcRZGate(q, 2.6824933081154634, 8);
  sqcRYGate(q, -2.9566756992215324, 9);
  sqcRZGate(q, -0.9685817309185074, 9);
  sqcRYGate(q, 1.487442634731429, 10);
  sqcRZGate(q, 2.952733540578017, 10);
  sqcRYGate(q, 1.4173528420801969, 11);
  sqcRZGate(q, 3.088781093230439, 11);
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
  sqcRYGate(q, 0.0025302810242120444, 0);
  sqcRZGate(q, -1.6349439857806056, 0);
  sqcRYGate(q, 0.05950794654607108, 1);
  sqcRZGate(q, -0.004351646821991428, 1);
  sqcRYGate(q, -0.026275636899263155, 2);
  sqcRZGate(q, 0.8718510322236215, 2);
  sqcRYGate(q, -1.6203405596609426, 3);
  sqcRZGate(q, 0.001194513341863157, 3);
  sqcRYGate(q, 0.4103448634590823, 4);
  sqcRZGate(q, 3.0717574447629037, 4);
  sqcRYGate(q, -0.21811354355617213, 5);
  sqcRZGate(q, -1.6257585441214646, 5);
  sqcRYGate(q, 0.0031119248983993834, 6);
  sqcRZGate(q, -0.9821125369220272, 6);
  sqcRYGate(q, -1.3930627527717636, 7);
  sqcRZGate(q, -2.6771369331634376, 7);
  sqcRYGate(q, -0.7882544925572917, 8);
  sqcRZGate(q, 2.007031157656044, 8);
  sqcRYGate(q, -1.591370363522072, 9);
  sqcRZGate(q, -1.6709289374659004, 9);
  sqcRYGate(q, -1.0037422665244222, 10);
  sqcRZGate(q, 0.5274377881234775, 10);
  sqcRYGate(q, -0.6370392529502029, 11);
  sqcRZGate(q, 2.1157431852037396, 11);
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
  sqcRYGate(q, 1.5643118972589285, 0);
  sqcRZGate(q, 1.8454295127290559, 0);
  sqcRYGate(q, -1.5712172206461628, 1);
  sqcRZGate(q, -1.249350010586599, 1);
  sqcRYGate(q, -0.004514675438681337, 2);
  sqcRZGate(q, 0.6499001109058129, 2);
  sqcRYGate(q, -1.6101483294758596, 3);
  sqcRZGate(q, 0.5598788505888397, 3);
  sqcRYGate(q, 1.5871791740225865, 4);
  sqcRZGate(q, -1.7061324519443641, 4);
  sqcRYGate(q, 1.4621263811099663, 5);
  sqcRZGate(q, -3.1340733330079558, 5);
  sqcRYGate(q, -3.139992421475851, 6);
  sqcRZGate(q, -2.1151957572992965, 6);
  sqcRYGate(q, 3.139251375667783, 7);
  sqcRZGate(q, 1.8967882748725806, 7);
  sqcRYGate(q, -1.312987833674204, 8);
  sqcRZGate(q, 2.9167502565168846, 8);
  sqcRYGate(q, -1.235448706838958, 9);
  sqcRZGate(q, -1.6066738154188098, 9);
  sqcRYGate(q, 0.11707766876576375, 10);
  sqcRZGate(q, 1.291103193490043, 10);
  sqcRYGate(q, 2.529966725236961, 11);
  sqcRZGate(q, -2.657013692639896, 11);
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
  sqcRYGate(q, -0.0015720456325745147, 0);
  sqcRZGate(q, 1.4920561324682844, 0);
  sqcRYGate(q, 0.00027585559795693216, 1);
  sqcRZGate(q, 0.22871891611402134, 1);
  sqcRYGate(q, -1.9840433958344639, 2);
  sqcRZGate(q, -0.003949776156642995, 2);
  sqcRYGate(q, -3.1412377234070865, 3);
  sqcRZGate(q, -2.5855901378264017, 3);
  sqcRYGate(q, -1.5794140538886638, 4);
  sqcRZGate(q, 1.2910138672529206, 4);
  sqcRYGate(q, -1.5614766504532378, 5);
  sqcRZGate(q, -1.5727702068647709, 5);
  sqcRYGate(q, -0.00045873592224703833, 6);
  sqcRZGate(q, -1.9244145379574424, 6);
  sqcRYGate(q, 0.00010046772592590401, 7);
  sqcRZGate(q, 1.4328849723631496, 7);
  sqcRYGate(q, 0.9576942801043509, 8);
  sqcRZGate(q, -1.1624872474113808, 8);
  sqcRYGate(q, 1.8059921542432473, 9);
  sqcRZGate(q, 0.09434257212204766, 9);
  sqcRYGate(q, 1.6106076811374508, 10);
  sqcRZGate(q, -1.0235877293015927, 10);
  sqcRYGate(q, -1.6527571913623151, 11);
  sqcRZGate(q, 2.6850229991614616, 11);
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
  sqcRYGate(q, -0.2644087338956256, 0);
  sqcRZGate(q, 1.6612390606930338, 0);
  sqcRYGate(q, -3.1363286938809907, 1);
  sqcRZGate(q, 0.2534246304096925, 1);
  sqcRYGate(q, -1.561089530603308, 2);
  sqcRZGate(q, -2.4558086985681733, 2);
  sqcRYGate(q, -1.5683692285668138, 3);
  sqcRZGate(q, 2.9230388574841877, 3);
  sqcRYGate(q, -0.0077654661151208, 4);
  sqcRZGate(q, 0.28121342843349234, 4);
  sqcRYGate(q, 1.5620559123339908, 5);
  sqcRZGate(q, -3.1373509422576245, 5);
  sqcRYGate(q, -3.14125111224785, 6);
  sqcRZGate(q, 3.0337271921092372, 6);
  sqcRYGate(q, -0.0005022090169618372, 7);
  sqcRZGate(q, 1.8545024851523426, 7);
  sqcRYGate(q, -0.054354774891262274, 8);
  sqcRZGate(q, -2.4301090006706265, 8);
  sqcRYGate(q, 1.1963923590074605, 9);
  sqcRZGate(q, 1.6283660980109345, 9);
  sqcRYGate(q, 1.4243846343853666, 10);
  sqcRZGate(q, 2.9706590322544155, 10);
  sqcRYGate(q, 1.559726500527435, 11);
  sqcRZGate(q, 1.387491589586698, 11);
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
  sqcRYGate(q, -1.5712276293272258, 0);
  sqcRZGate(q, -0.005024192882706835, 0);
  sqcRYGate(q, 1.6106956789922668, 1);
  sqcRZGate(q, -1.9957357805600529, 1);
  sqcRYGate(q, 0.00899852941485484, 2);
  sqcRZGate(q, -2.253103110598785, 2);
  sqcRYGate(q, 3.1404147369167226, 3);
  sqcRZGate(q, -0.21493021050937863, 3);
  sqcRYGate(q, -1.5704784686291446, 4);
  sqcRZGate(q, -2.5814549400013487, 4);
  sqcRYGate(q, 1.5698826595683615, 5);
  sqcRZGate(q, 0.007448024006000864, 5);
  sqcRYGate(q, -1.5714460950670048, 6);
  sqcRZGate(q, 3.108456406693082, 6);
  sqcRYGate(q, -1.570584830492313, 7);
  sqcRZGate(q, -3.108601959585684, 7);
  sqcRYGate(q, -2.4876421464851686, 8);
  sqcRZGate(q, 2.8344894127160707, 8);
  sqcRYGate(q, 2.0207285207587034, 9);
  sqcRZGate(q, -0.8857668866658864, 9);
  sqcRYGate(q, 1.8248757043447448, 10);
  sqcRZGate(q, -0.7160188628175383, 10);
  sqcRYGate(q, -3.132413569521032, 11);
  sqcRZGate(q, 2.780381132369861, 11);
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
  sqcRYGate(q, -2.9969998945427165, 0);
  sqcRZGate(q, -1.5770737864011408, 0);
  sqcRYGate(q, 2.8592957546453346, 1);
  sqcRZGate(q, 1.161175911300432, 1);
  sqcRYGate(q, 1.5670784868290877, 2);
  sqcRZGate(q, 1.5627891429572083, 2);
  sqcRYGate(q, -1.5720979456855637, 3);
  sqcRZGate(q, 0.06325956423090329, 3);
  sqcRYGate(q, 0.15075440848724322, 4);
  sqcRZGate(q, -2.1261326006136634, 4);
  sqcRYGate(q, 3.0053864414319182, 5);
  sqcRZGate(q, 0.3747559929777111, 5);
  sqcRYGate(q, -1.570655151066057, 6);
  sqcRZGate(q, -1.2122828483447696, 6);
  sqcRYGate(q, -1.5706746621746897, 7);
  sqcRZGate(q, -1.5698602752467892, 7);
  sqcRYGate(q, 2.853553617200016, 8);
  sqcRZGate(q, 1.935266579817401, 8);
  sqcRYGate(q, 0.04114726342933661, 9);
  sqcRZGate(q, -2.3353273796273117, 9);
  sqcRYGate(q, 2.9510245826037043, 10);
  sqcRZGate(q, -0.6355457834612139, 10);
  sqcRYGate(q, 3.1234992591091024, 11);
  sqcRZGate(q, 1.4276030558128294, 11);
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
  sqcRYGate(q, -1.7333734299841363, 0);
  sqcRZGate(q, -0.14544650028978265, 0);
  sqcRYGate(q, -1.572145497674196, 1);
  sqcRZGate(q, -1.7322776443811474, 1);
  sqcRYGate(q, -0.18570470627611524, 2);
  sqcRZGate(q, 0.0068980743188490025, 2);
  sqcRYGate(q, -3.0282512047010113, 3);
  sqcRZGate(q, -3.078714525770953, 3);
  sqcRYGate(q, 1.5717194374979684, 4);
  sqcRZGate(q, -1.5474312857792185, 4);
  sqcRYGate(q, 0.0036014595102414186, 5);
  sqcRZGate(q, 1.2093810371933966, 5);
  sqcRYGate(q, 3.1342428572078425, 6);
  sqcRZGate(q, -2.9310732588405934, 6);
  sqcRYGate(q, 1.5525715778497169, 7);
  sqcRZGate(q, -2.345058174254688, 7);
  sqcRYGate(q, 1.5067894477528379, 8);
  sqcRZGate(q, 3.1321268664999242, 8);
  sqcRYGate(q, -1.5096683404425733, 9);
  sqcRZGate(q, 1.037987110122248, 9);
  sqcRYGate(q, -0.037281983811985775, 10);
  sqcRZGate(q, -1.6773510463449062, 10);
  sqcRYGate(q, -1.34848864397535, 11);
  sqcRZGate(q, -1.4473792543761848, 11);
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
  sqcRYGate(q, 0.020493397112511753, 0);
  sqcRZGate(q, -2.560487114134292, 0);
  sqcRYGate(q, -2.5972953142931607, 1);
  sqcRZGate(q, 1.534744092370433, 1);
  sqcRYGate(q, -1.5663925637392833, 2);
  sqcRZGate(q, 2.142736575537132, 2);
  sqcRYGate(q, -1.5714426253938545, 3);
  sqcRZGate(q, -0.1762733956675877, 3);
  sqcRYGate(q, -1.5641450851523615, 4);
  sqcRZGate(q, 2.50787891960264, 4);
  sqcRYGate(q, 1.5323216666967872, 5);
  sqcRZGate(q, 1.3443724000903046, 5);
  sqcRYGate(q, 3.1398581889031156, 6);
  sqcRZGate(q, 3.003302085362208, 6);
  sqcRYGate(q, 0.0005186191533628204, 7);
  sqcRZGate(q, -0.8427418899894578, 7);
  sqcRYGate(q, 1.566729234709761, 8);
  sqcRZGate(q, -1.5719155409883399, 8);
  sqcRYGate(q, 1.573965406295023, 9);
  sqcRZGate(q, -3.140078014844904, 9);
  sqcRYGate(q, 1.8832098612399593, 10);
  sqcRZGate(q, -1.6816880832278611, 10);
  sqcRYGate(q, 2.452563812050988, 11);
  sqcRZGate(q, 2.1939513129655293, 11);
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
  sqcRYGate(q, 1.571530901662865, 0);
  sqcRZGate(q, -0.001330079614983326, 0);
  sqcRYGate(q, -0.0721130259953009, 1);
  sqcRZGate(q, 1.6090919922265396, 1);
  sqcRYGate(q, 3.1414060802445043, 2);
  sqcRZGate(q, 2.562199259604341, 2);
  sqcRYGate(q, -0.0003207945691623833, 3);
  sqcRZGate(q, -2.7112184261114525, 3);
  sqcRYGate(q, 0.005592503610052368, 4);
  sqcRZGate(q, -2.506818549440248, 4);
  sqcRYGate(q, -0.000913647673512739, 5);
  sqcRZGate(q, -1.6158355523595702, 5);
  sqcRYGate(q, -0.4057106376621613, 6);
  sqcRZGate(q, -0.011071880079772889, 6);
  sqcRYGate(q, 0.00016800429655550175, 7);
  sqcRZGate(q, 0.042977313009178175, 7);
  sqcRYGate(q, 1.7387459453866212, 8);
  sqcRZGate(q, -1.5699260520468068, 8);
  sqcRYGate(q, -1.573667588319517, 9);
  sqcRZGate(q, 0.4913050313823248, 9);
  sqcRYGate(q, -1.8556525798581158, 10);
  sqcRZGate(q, -1.586263825230204, 10);
  sqcRYGate(q, 1.5714615064572417, 11);
  sqcRZGate(q, -1.508812407874177, 11);
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
  sqcRYGate(q, -1.5802591267208408, 0);
  sqcRZGate(q, -0.05643294162714164, 0);
  sqcRYGate(q, 1.5715976719929199, 1);
  sqcRZGate(q, 1.5813355400816484, 1);
  sqcRYGate(q, 3.096632260891774, 2);
  sqcRZGate(q, -1.1500636239660809, 2);
  sqcRYGate(q, 3.1362826809857256, 3);
  sqcRZGate(q, -2.878087268881514, 3);
  sqcRYGate(q, 1.571155734304587, 4);
  sqcRZGate(q, 1.6099107607247183, 4);
  sqcRYGate(q, -0.045564904757286584, 5);
  sqcRZGate(q, -1.2977476401590644, 5);
  sqcRYGate(q, -1.5705129672256186, 6);
  sqcRZGate(q, -1.570973374210559, 6);
  sqcRYGate(q, -1.5697949242674154, 7);
  sqcRZGate(q, 1.5708438450187965, 7);
  sqcRYGate(q, 1.5564659969661427, 8);
  sqcRZGate(q, 0.002353264145844136, 8);
  sqcRYGate(q, -0.0005359367199059585, 9);
  sqcRZGate(q, 2.629490186514497, 9);
  sqcRYGate(q, -1.5698916186798728, 10);
  sqcRZGate(q, 0.0006470462917214092, 10);
  sqcRYGate(q, 1.5731970325043176, 11);
  sqcRZGate(q, 0.0011353879710460646, 11);
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
  sqcRYGate(q, -2.1535149026368865, 0);
  sqcRZGate(q, -0.0909113370017957, 0);
  sqcRYGate(q, 2.7075064634083947, 1);
  sqcRZGate(q, -2.5260129750819185, 1);
  sqcRYGate(q, 1.5713629397949582, 2);
  sqcRZGate(q, -0.4061205623950386, 2);
  sqcRYGate(q, -1.571605705392733, 3);
  sqcRZGate(q, 1.5730226105036096, 3);
  sqcRYGate(q, 0.0854842727079942, 4);
  sqcRZGate(q, -0.021779844664904242, 4);
  sqcRYGate(q, 0.205871738583303, 5);
  sqcRZGate(q, 1.3602771410929195, 5);
  sqcRYGate(q, 1.5683460587885214, 6);
  sqcRZGate(q, -1.5718263384050435, 6);
  sqcRYGate(q, 1.5716873470821495, 7);
  sqcRZGate(q, -9.459318823346052e-05, 7);
  sqcRYGate(q, -2.3945149805858454, 8);
  sqcRZGate(q, -3.137826157688481, 8);
  sqcRYGate(q, 1.3389756973310758, 9);
  sqcRZGate(q, -2.2349438065093343, 9);
  sqcRYGate(q, 1.596254795240097, 10);
  sqcRZGate(q, -2.7737948523578404, 10);
  sqcRYGate(q, -1.5716342344119896, 11);
  sqcRZGate(q, -1.6873696370991205, 11);
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
  sqcRYGate(q, 1.5747403453655258, 0);
  sqcRZGate(q, 1.0688919999571906, 0);
  sqcRYGate(q, -3.139918941577373, 1);
  sqcRZGate(q, -0.9634136937180643, 1);
  sqcRYGate(q, -3.141584511235769, 2);
  sqcRZGate(q, 0.006386696723367891, 2);
  sqcRYGate(q, 2.785043257596418, 3);
  sqcRZGate(q, -1.5678086410440137, 3);
  sqcRYGate(q, 0.4118493678203406, 4);
  sqcRZGate(q, -2.7721432149429295, 4);
  sqcRYGate(q, 3.1375841007581364, 5);
  sqcRZGate(q, 1.0872754848149935, 5);
  sqcRYGate(q, -1.5714332989775013, 6);
  sqcRZGate(q, 1.8517713325349279, 6);
  sqcRYGate(q, 1.570755496465429, 7);
  sqcRZGate(q, -2.8172675559103153, 7);
  sqcRYGate(q, -1.6511453525649713, 8);
  sqcRZGate(q, 1.5761418334337796, 8);
  sqcRYGate(q, 0.0034340647416740136, 9);
  sqcRZGate(q, 2.3111190135117896, 9);
  sqcRYGate(q, -0.42419249096323863, 10);
  sqcRZGate(q, 2.774974129430037, 10);
  sqcRYGate(q, -0.026108507080883733, 11);
  sqcRZGate(q, -1.604125198186822, 11);
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
  sqcRYGate(q, 3.1388079281805834, 0);
  sqcRZGate(q, -2.0723086435963087, 0);
  sqcRYGate(q, -1.5712104242213094, 1);
  sqcRZGate(q, 2.0597911329708563, 1);
  sqcRYGate(q, -3.141386444384582, 2);
  sqcRZGate(q, 0.4124604866249104, 2);
  sqcRYGate(q, 1.5704751548675286, 3);
  sqcRZGate(q, -1.5656733909612033, 3);
  sqcRYGate(q, -3.1414045527306946, 4);
  sqcRZGate(q, 0.8013534090249937, 4);
  sqcRYGate(q, 3.14096964579606, 5);
  sqcRZGate(q, -1.5125064114764577, 5);
  sqcRYGate(q, -3.141450713982872, 6);
  sqcRZGate(q, 0.3628987452733625, 6);
  sqcRYGate(q, 0.001097421040102699, 7);
  sqcRZGate(q, 2.835079009365787, 7);
  sqcRYGate(q, -1.570936909495742, 8);
  sqcRZGate(q, 3.1410644089814586, 8);
  sqcRYGate(q, 1.5710930069057183, 9);
  sqcRZGate(q, -0.001583473863501439, 9);
  sqcRYGate(q, 0.31172912219515236, 10);
  sqcRZGate(q, 3.120967414574069, 10);
  sqcRYGate(q, 0.00419926539501612, 11);
  sqcRZGate(q, 1.7508328945100018, 11);
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
  sqcRYGate(q, 1.5702767965468825, 0);
  sqcRZGate(q, -1.570029758961339, 0);
  sqcRYGate(q, 1.5722895630142677, 1);
  sqcRZGate(q, 0.3332314367048336, 1);
  sqcRYGate(q, 1.5757602235286896, 2);
  sqcRZGate(q, 3.141443443280396, 2);
  sqcRYGate(q, 1.569820901616377, 3);
  sqcRZGate(q, -3.141361580463689, 3);
  sqcRYGate(q, 3.141495407233594, 4);
  sqcRZGate(q, -2.792031107848761, 4);
  sqcRYGate(q, -8.888789003513864e-05, 5);
  sqcRZGate(q, -2.0970834890046195, 5);
  sqcRYGate(q, -0.00038140503247413, 6);
  sqcRZGate(q, -1.923246769313363, 6);
  sqcRYGate(q, 0.19735458958791163, 7);
  sqcRZGate(q, -1.689186629398105, 7);
  sqcRYGate(q, 1.5710728815177377, 8);
  sqcRZGate(q, 1.572942157345927, 8);
  sqcRYGate(q, 1.6019189647084913, 9);
  sqcRZGate(q, -2.428724127660885, 9);
  sqcRYGate(q, -1.5704455047731598, 10);
  sqcRZGate(q, -1.796716480993827, 10);
  sqcRYGate(q, -1.5707010254091822, 11);
  sqcRZGate(q, -1.5731184200241504, 11);
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
  sqcRYGate(q, 1.570258688240986, 0);
  sqcRZGate(q, 0.15357540862029492, 0);
  sqcRYGate(q, 3.1405541858542234, 1);
  sqcRZGate(q, 1.9050490058554637, 1);
  sqcRYGate(q, -1.5732297672934807, 2);
  sqcRZGate(q, -1.570933853364565, 2);
  sqcRYGate(q, -1.5703985924216617, 3);
  sqcRZGate(q, -1.5713606406907745, 3);
  sqcRYGate(q, -0.002164595265218036, 4);
  sqcRZGate(q, 2.3704506188237526, 4);
  sqcRYGate(q, -5.9937011361739124e-05, 5);
  sqcRZGate(q, 1.5844159967027263, 5);
  sqcRYGate(q, -3.139387352305849, 6);
  sqcRZGate(q, -0.26992148182605824, 6);
  sqcRYGate(q, 3.14142138791106, 7);
  sqcRZGate(q, -1.6702436167276284, 7);
  sqcRYGate(q, 2.4120908528826432, 8);
  sqcRZGate(q, -1.5764124871657006, 8);
  sqcRYGate(q, 3.1412578579669277, 9);
  sqcRZGate(q, -2.273914456124997, 9);
  sqcRYGate(q, 0.0043673592945845385, 10);
  sqcRZGate(q, -1.3441086548312873, 10);
  sqcRYGate(q, 1.5734573529436198, 11);
  sqcRZGate(q, 0.004627871203679135, 11);
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
  sqcRYGate(q, 3.1413724243273022, 0);
  sqcRZGate(q, -2.9846103360386618, 0);
  sqcRYGate(q, -1.566148920169403, 1);
  sqcRZGate(q, 1.570615605462844, 1);
  sqcRYGate(q, -1.5707172338930908, 2);
  sqcRZGate(q, 2.6576793642671395, 2);
  sqcRYGate(q, -1.5681597983846542, 3);
  sqcRZGate(q, -1.471592014768549, 3);
  sqcRYGate(q, -3.120043662883944, 4);
  sqcRZGate(q, -0.5293122487572879, 4);
  sqcRYGate(q, 3.0836071793830637, 5);
  sqcRZGate(q, 2.052143846420398, 5);
  sqcRYGate(q, 1.5711004423684582, 6);
  sqcRZGate(q, -1.2053632151724507, 6);
  sqcRYGate(q, 1.8237251666882548, 7);
  sqcRZGate(q, -0.5120520111315043, 7);
  sqcRYGate(q, -2.9416328180228604, 8);
  sqcRZGate(q, 0.000654316502708046, 8);
  sqcRYGate(q, -3.141325818654753, 9);
  sqcRZGate(q, -1.2896559568586445, 9);
  sqcRYGate(q, -1.5710713291276912, 10);
  sqcRZGate(q, 3.111795887711031, 10);
  sqcRYGate(q, -1.6226581545727559, 11);
  sqcRZGate(q, -1.5932506226469256, 11);
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
  sqcRYGate(q, -2.5740029192011002, 0);
  sqcRZGate(q, -3.1339823147070893, 0);
  sqcRYGate(q, -1.5699228047155536, 1);
  sqcRZGate(q, -2.4356889601616483, 1);
  sqcRYGate(q, 3.141554917155443, 2);
  sqcRZGate(q, -0.48525778190782454, 2);
  sqcRYGate(q, -0.004553920313077775, 3);
  sqcRZGate(q, -2.218314900408446, 3);
  sqcRYGate(q, -3.1380133402115935, 4);
  sqcRZGate(q, -0.27284655311258454, 4);
  sqcRYGate(q, 3.1410528911572633, 5);
  sqcRZGate(q, -2.4809573234984845, 5);
  sqcRYGate(q, 3.1408270565408327, 6);
  sqcRZGate(q, -2.7140028543119294, 6);
  sqcRYGate(q, -0.004827489068389278, 7);
  sqcRZGate(q, -2.627457167665374, 7);
  sqcRYGate(q, -1.5710379255321776, 8);
  sqcRZGate(q, 1.5694984787724984, 8);
  sqcRYGate(q, 3.1414726686942047, 9);
  sqcRZGate(q, -2.6456008207359876, 9);
  sqcRYGate(q, 1.5694110468401625, 10);
  sqcRZGate(q, -0.0021724805475721726, 10);
  sqcRYGate(q, 0.0069781501245813615, 11);
  sqcRZGate(q, -1.5418786341031216, 11);
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
  sqcRYGate(q, -3.1404617431040918, 0);
  sqcRZGate(q, 2.4529213682669786, 0);
  sqcRYGate(q, -0.0011661419468600642, 1);
  sqcRZGate(q, -0.6736210706987498, 1);
  sqcRYGate(q, 1.5678921429612218, 2);
  sqcRZGate(q, 2.456098251971493, 2);
  sqcRYGate(q, -4.5041913433265554e-05, 3);
  sqcRZGate(q, 0.5831254926976905, 3);
  sqcRYGate(q, 0.024957971973713633, 4);
  sqcRZGate(q, 1.4724625846821615, 4);
  sqcRYGate(q, 1.5808679531512295, 5);
  sqcRZGate(q, -0.027512292336227876, 5);
  sqcRYGate(q, -0.0001840069307688097, 6);
  sqcRZGate(q, -2.315060199755541, 6);
  sqcRYGate(q, -1.5708564616720269, 7);
  sqcRZGate(q, 0.02839323341231122, 7);
  sqcRYGate(q, -1.5739242791756316, 8);
  sqcRZGate(q, -0.6820724775618956, 8);
  sqcRYGate(q, -3.139553011071407, 9);
  sqcRZGate(q, 1.8852763074933374, 9);
  sqcRYGate(q, -1.5707246216750188, 10);
  sqcRZGate(q, -2.2531022362661353, 10);
  sqcRYGate(q, 3.1413941280879487, 11);
  sqcRZGate(q, 1.6041122312958522, 11);

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
