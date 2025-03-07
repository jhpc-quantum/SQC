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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 2.402591925986947, 0);
  sqcRZGate(q, -2.2484143565797208, 0);
  sqcRYGate(q, -0.8009707710049108, 1);
  sqcRZGate(q, 2.2828986218981795, 1);
  sqcRYGate(q, -2.674755712473112, 2);
  sqcRZGate(q, -0.06594695865906708, 2);
  sqcRYGate(q, 3.0857582064491624, 3);
  sqcRZGate(q, 0.6319751765852888, 3);
  sqcRYGate(q, -0.6274174745271317, 4);
  sqcRZGate(q, -2.514994327937507, 4);
  sqcRYGate(q, -1.2732488298613438, 5);
  sqcRZGate(q, 1.6951285320838458, 5);
  sqcRYGate(q, -0.33505507388979705, 6);
  sqcRZGate(q, 1.1435167374332833, 6);
  sqcRYGate(q, -1.4314492058575128, 7);
  sqcRZGate(q, 1.8021435342604524, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.023797796428934, 0);
  sqcRZGate(q, -2.737611414480939, 0);
  sqcRYGate(q, -0.6486713113235698, 1);
  sqcRZGate(q, 1.374965388218607, 1);
  sqcRYGate(q, -2.7466772920771585, 2);
  sqcRZGate(q, -0.6398069272247424, 2);
  sqcRYGate(q, 0.4633731831672376, 3);
  sqcRZGate(q, -2.9742579415729766, 3);
  sqcRYGate(q, -1.346634406797358, 4);
  sqcRZGate(q, 0.34126192513390696, 4);
  sqcRYGate(q, 1.7611178578032487, 5);
  sqcRZGate(q, -2.3381992022691973, 5);
  sqcRYGate(q, -2.247948352249968, 6);
  sqcRZGate(q, -1.0154734065544138, 6);
  sqcRYGate(q, -1.2312545269640947, 7);
  sqcRZGate(q, 1.4757118601199704, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.7259795332433265, 0);
  sqcRZGate(q, 0.885458692317303, 0);
  sqcRYGate(q, -0.14098653008912088, 1);
  sqcRZGate(q, -2.108115296837204, 1);
  sqcRYGate(q, 1.4234336165652879, 2);
  sqcRZGate(q, 3.0495409366909714, 2);
  sqcRYGate(q, 0.6067025758389205, 3);
  sqcRZGate(q, 1.9257539673524258, 3);
  sqcRYGate(q, 1.0310445578683967, 4);
  sqcRZGate(q, 0.29954773781250843, 4);
  sqcRYGate(q, 0.7649678495683112, 5);
  sqcRZGate(q, -1.0737997342938135, 5);
  sqcRYGate(q, -0.7292988500948198, 6);
  sqcRZGate(q, -2.7437172723324244, 6);
  sqcRYGate(q, -2.3499603209760225, 7);
  sqcRZGate(q, 3.0781188287076735, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.4812627365638882, 0);
  sqcRZGate(q, 1.4165900154535196, 0);
  sqcRYGate(q, 0.9635729866284753, 1);
  sqcRZGate(q, 3.0741366149819966, 1);
  sqcRYGate(q, 2.858305575844343, 2);
  sqcRZGate(q, -2.302562543629521, 2);
  sqcRYGate(q, -2.1762336492921963, 3);
  sqcRZGate(q, 2.925878810348626, 3);
  sqcRYGate(q, -1.083182491376467, 4);
  sqcRZGate(q, 1.9478757139720226, 4);
  sqcRYGate(q, 0.3196120703734153, 5);
  sqcRZGate(q, 2.711703362835853, 5);
  sqcRYGate(q, 2.8320134298667643, 6);
  sqcRZGate(q, -0.2743436793940654, 6);
  sqcRYGate(q, -0.14143286215248185, 7);
  sqcRZGate(q, 1.8186152982644943, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.5798204799112289, 0);
  sqcRZGate(q, 2.829043897993353, 0);
  sqcRYGate(q, -2.9696328126094964, 1);
  sqcRZGate(q, -0.7951831924729154, 1);
  sqcRYGate(q, 0.3135516093350126, 2);
  sqcRZGate(q, -2.245044408593868, 2);
  sqcRYGate(q, 2.87108916967428, 3);
  sqcRZGate(q, 0.6123570409746887, 3);
  sqcRYGate(q, 0.21686731734212025, 4);
  sqcRZGate(q, -0.48158301560498273, 4);
  sqcRYGate(q, 1.229585281280615, 5);
  sqcRZGate(q, 2.6889221166595694, 5);
  sqcRYGate(q, -2.2331175063020314, 6);
  sqcRZGate(q, -2.813987800382645, 6);
  sqcRYGate(q, 1.8796007359940756, 7);
  sqcRZGate(q, 1.846640005149375, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.0028863237427383, 0);
  sqcRZGate(q, 0.14537483289151432, 0);
  sqcRYGate(q, 0.8740121600038177, 1);
  sqcRZGate(q, -0.3213640029162531, 1);
  sqcRYGate(q, 2.7088335680451032, 2);
  sqcRZGate(q, 0.9646782975986854, 2);
  sqcRYGate(q, -2.2792704249522067, 3);
  sqcRZGate(q, -0.3309742139372762, 3);
  sqcRYGate(q, 1.663668429903143, 4);
  sqcRZGate(q, -1.414212603330288, 4);
  sqcRYGate(q, -0.8275538870381611, 5);
  sqcRZGate(q, -0.4995991513609646, 5);
  sqcRYGate(q, -2.8913344642139105, 6);
  sqcRZGate(q, -1.4564461762042482, 6);
  sqcRYGate(q, -2.314810829099285, 7);
  sqcRZGate(q, -1.1168765532486324, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.9568967262143078, 0);
  sqcRZGate(q, 2.8387133003397307, 0);
  sqcRYGate(q, 0.22082425341267742, 1);
  sqcRZGate(q, -1.2197775777458872, 1);
  sqcRYGate(q, 1.5254553385442469, 2);
  sqcRZGate(q, -1.036031053649722, 2);
  sqcRYGate(q, -3.058466852213382, 3);
  sqcRZGate(q, 2.729364174422309, 3);
  sqcRYGate(q, 2.382274491865546, 4);
  sqcRZGate(q, -2.4319804788576294, 4);
  sqcRYGate(q, 2.90897470693773, 5);
  sqcRZGate(q, -1.5822380746770466, 5);
  sqcRYGate(q, -1.9131171587355589, 6);
  sqcRZGate(q, 0.4959062247983823, 6);
  sqcRYGate(q, -1.2944342965428137, 7);
  sqcRZGate(q, 0.09124829372942056, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -3.0931705681220936, 0);
  sqcRZGate(q, 0.6661320098464198, 0);
  sqcRYGate(q, -1.0911246635443863, 1);
  sqcRZGate(q, -0.13614125991144554, 1);
  sqcRYGate(q, 1.8986041728170502, 2);
  sqcRZGate(q, -0.012340833049265833, 2);
  sqcRYGate(q, -0.9651087190328546, 3);
  sqcRZGate(q, -2.985542153757371, 3);
  sqcRYGate(q, -1.6366843268126694, 4);
  sqcRZGate(q, 1.3514623778541042, 4);
  sqcRYGate(q, 0.36135471933635177, 5);
  sqcRZGate(q, 0.07281832615115746, 5);
  sqcRYGate(q, -0.30854101204377676, 6);
  sqcRZGate(q, -2.400229772788093, 6);
  sqcRYGate(q, -2.3844835719370066, 7);
  sqcRZGate(q, 3.1387482592382407, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.031402973012648, 0);
  sqcRZGate(q, -0.30983186579252675, 0);
  sqcRYGate(q, -1.017596601622319, 1);
  sqcRZGate(q, -1.9076148758549394, 1);
  sqcRYGate(q, 0.9756124361334741, 2);
  sqcRZGate(q, -0.3677264604443422, 2);
  sqcRYGate(q, -2.013043481198428, 3);
  sqcRZGate(q, 2.464409837836827, 3);
  sqcRYGate(q, -0.35601320878513115, 4);
  sqcRZGate(q, -2.0018423787628423, 4);
  sqcRYGate(q, -2.368842586436438, 5);
  sqcRZGate(q, -3.0675107837437285, 5);
  sqcRYGate(q, -1.761600590527931, 6);
  sqcRZGate(q, 1.196350913476799, 6);
  sqcRYGate(q, -2.675701632316175, 7);
  sqcRZGate(q, -0.2704714798278884, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.3553751566829724, 0);
  sqcRZGate(q, -1.7894226215962983, 0);
  sqcRYGate(q, -1.2125181113369923, 1);
  sqcRZGate(q, -0.8296649757637128, 1);
  sqcRYGate(q, -0.3893254625418212, 2);
  sqcRZGate(q, -3.10594836867482, 2);
  sqcRYGate(q, 2.459305694259865, 3);
  sqcRZGate(q, 1.1389805056517357, 3);
  sqcRYGate(q, -2.512343391560251, 4);
  sqcRZGate(q, 0.5455235074186424, 4);
  sqcRYGate(q, 2.306106050808729, 5);
  sqcRZGate(q, 1.9209244071233975, 5);
  sqcRYGate(q, 0.9730542337330014, 6);
  sqcRZGate(q, 2.2935609355328057, 6);
  sqcRYGate(q, -0.32567857257908095, 7);
  sqcRZGate(q, -2.8921142763284875, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.23232421307942716, 0);
  sqcRZGate(q, 2.4774263220027284, 0);
  sqcRYGate(q, -0.6502142751772305, 1);
  sqcRZGate(q, 1.1278032812073082, 1);
  sqcRYGate(q, -2.279689003353758, 2);
  sqcRZGate(q, 0.08271568636826922, 2);
  sqcRYGate(q, 0.8126519764177034, 3);
  sqcRZGate(q, 0.9213736294678533, 3);
  sqcRYGate(q, -1.4022313905065473, 4);
  sqcRZGate(q, 2.5063746629511225, 4);
  sqcRYGate(q, -1.355983857957738, 5);
  sqcRZGate(q, 0.5911950112592446, 5);
  sqcRYGate(q, -2.8072193993821233, 6);
  sqcRZGate(q, -1.736014550863766, 6);
  sqcRYGate(q, -1.0352786451720704, 7);
  sqcRZGate(q, -0.28979393364859507, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.512786247652123, 0);
  sqcRZGate(q, 2.8851318681551352, 0);
  sqcRYGate(q, -0.30689969684835255, 1);
  sqcRZGate(q, -3.0142291712762868, 1);
  sqcRYGate(q, -0.9476354110256203, 2);
  sqcRZGate(q, -0.6656500074604494, 2);
  sqcRYGate(q, 2.506250520573479, 3);
  sqcRZGate(q, -1.7037215674897546, 3);
  sqcRYGate(q, 2.4203505363067035, 4);
  sqcRZGate(q, -1.5021929160448582, 4);
  sqcRYGate(q, 2.426604274337709, 5);
  sqcRZGate(q, 0.4505602647891491, 5);
  sqcRYGate(q, -0.8742710321264422, 6);
  sqcRZGate(q, 1.0141166944482127, 6);
  sqcRYGate(q, -0.8080322943850725, 7);
  sqcRZGate(q, 2.431226683747248, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.424133608170993, 0);
  sqcRZGate(q, 1.304788516372317, 0);
  sqcRYGate(q, -2.909656510119501, 1);
  sqcRZGate(q, 2.824849297765232, 1);
  sqcRYGate(q, -0.8340189997170253, 2);
  sqcRZGate(q, 2.844650774644302, 2);
  sqcRYGate(q, 2.2625768521795013, 3);
  sqcRZGate(q, 0.5105081036879313, 3);
  sqcRYGate(q, 1.1396365202251681, 4);
  sqcRZGate(q, 2.2659920210854825, 4);
  sqcRYGate(q, -2.7558531050990713, 5);
  sqcRZGate(q, 3.0031406606751885, 5);
  sqcRYGate(q, -2.6609573409353464, 6);
  sqcRZGate(q, 2.342539384765949, 6);
  sqcRYGate(q, -0.5266494419610748, 7);
  sqcRZGate(q, 2.0225460085168283, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.6318111805380885, 0);
  sqcRZGate(q, -1.9104617698922606, 0);
  sqcRYGate(q, -0.7204075094556419, 1);
  sqcRZGate(q, 0.03097176329939946, 1);
  sqcRYGate(q, -2.938381627032808, 2);
  sqcRZGate(q, 0.02880088284054523, 2);
  sqcRYGate(q, 1.004912533468386, 3);
  sqcRZGate(q, -2.0755438854738903, 3);
  sqcRYGate(q, 3.044816356020633, 4);
  sqcRZGate(q, 1.3331065307398084, 4);
  sqcRYGate(q, 1.644872879306247, 5);
  sqcRZGate(q, 2.4557155602781986, 5);
  sqcRYGate(q, -0.311250579291956, 6);
  sqcRZGate(q, 2.7859365671322793, 6);
  sqcRYGate(q, 0.37858597689568363, 7);
  sqcRZGate(q, 0.8577045035648423, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.4853313137817681, 0);
  sqcRZGate(q, 2.526825617704688, 0);
  sqcRYGate(q, -0.654280310008426, 1);
  sqcRZGate(q, -2.3155227346682152, 1);
  sqcRYGate(q, -0.2619459237548485, 2);
  sqcRZGate(q, -0.8990882071579325, 2);
  sqcRYGate(q, 2.0844452522237806, 3);
  sqcRZGate(q, -2.6465930485447444, 3);
  sqcRYGate(q, -0.48340867741303306, 4);
  sqcRZGate(q, -2.61388800382969, 4);
  sqcRYGate(q, -2.5707300107779387, 5);
  sqcRZGate(q, -0.2864531642937269, 5);
  sqcRYGate(q, 0.6343517898951008, 6);
  sqcRZGate(q, 0.7771718780175352, 6);
  sqcRYGate(q, -1.7105612070515808, 7);
  sqcRZGate(q, -2.4079565308576796, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.86424621834032, 0);
  sqcRZGate(q, -0.5251456847072661, 0);
  sqcRYGate(q, -2.1371685144094625, 1);
  sqcRZGate(q, 3.075084681724783, 1);
  sqcRYGate(q, 2.8522602985722094, 2);
  sqcRZGate(q, -3.0091282070914955, 2);
  sqcRYGate(q, -2.359360643945566, 3);
  sqcRZGate(q, -0.5424477667938487, 3);
  sqcRYGate(q, 1.7847207274048484, 4);
  sqcRZGate(q, 1.0300958055984886, 4);
  sqcRYGate(q, 2.2068521377661403, 5);
  sqcRZGate(q, 1.3800442314676604, 5);
  sqcRYGate(q, -1.7196877037929221, 6);
  sqcRZGate(q, -1.1560736917147159, 6);
  sqcRYGate(q, 0.2566787257456146, 7);
  sqcRZGate(q, -2.6792012315284643, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.813416612506213, 0);
  sqcRZGate(q, -2.6222099922233446, 0);
  sqcRYGate(q, -2.0674458262362423, 1);
  sqcRZGate(q, -0.9777739575874602, 1);
  sqcRYGate(q, 1.2709970291914763, 2);
  sqcRZGate(q, -1.9908731422336068, 2);
  sqcRYGate(q, -2.92813399820773, 3);
  sqcRZGate(q, 1.802268793839819, 3);
  sqcRYGate(q, 1.1662966695359251, 4);
  sqcRZGate(q, -2.520312129876242, 4);
  sqcRYGate(q, -1.030391848591628, 5);
  sqcRZGate(q, 0.07773435781354188, 5);
  sqcRYGate(q, -1.3556521021437227, 6);
  sqcRZGate(q, -1.7827514571431902, 6);
  sqcRYGate(q, -0.29975922968748264, 7);
  sqcRZGate(q, -2.5771889912669392, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.0803807017567628, 0);
  sqcRZGate(q, -1.3960745755238133, 0);
  sqcRYGate(q, 0.20230404167546087, 1);
  sqcRZGate(q, -2.950465127041843, 1);
  sqcRYGate(q, 0.4503054671105236, 2);
  sqcRZGate(q, -3.0754495260982964, 2);
  sqcRYGate(q, 2.555779505490809, 3);
  sqcRZGate(q, -0.35745386920317657, 3);
  sqcRYGate(q, -2.427240029264817, 4);
  sqcRZGate(q, -1.4545712141963387, 4);
  sqcRYGate(q, -0.7229878787938465, 5);
  sqcRZGate(q, -0.39651130203601254, 5);
  sqcRYGate(q, 1.245805914489937, 6);
  sqcRZGate(q, -2.530823029035338, 6);
  sqcRYGate(q, 2.912085211409684, 7);
  sqcRZGate(q, 1.9089771209500612, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.31375547193957, 0);
  sqcRZGate(q, -1.7830320645166735, 0);
  sqcRYGate(q, 0.20679250625537068, 1);
  sqcRZGate(q, -2.608062093150461, 1);
  sqcRYGate(q, -1.138920936787826, 2);
  sqcRZGate(q, -2.665386859131705, 2);
  sqcRYGate(q, -1.4924909561348816, 3);
  sqcRZGate(q, 2.916449663510741, 3);
  sqcRYGate(q, -2.802349111803272, 4);
  sqcRZGate(q, 1.8621643460921433, 4);
  sqcRYGate(q, -1.9827151232982798, 5);
  sqcRZGate(q, -1.1640880510119838, 5);
  sqcRYGate(q, 0.8026211133434099, 6);
  sqcRZGate(q, -0.6020662439847798, 6);
  sqcRYGate(q, 2.089447827155097, 7);
  sqcRZGate(q, -0.5085459653054611, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.8383313631554685, 0);
  sqcRZGate(q, -2.970285190622923, 0);
  sqcRYGate(q, 1.9399195908952682, 1);
  sqcRZGate(q, -1.7210699659106932, 1);
  sqcRYGate(q, -1.8245358741457611, 2);
  sqcRZGate(q, 1.608054126152097, 2);
  sqcRYGate(q, 0.372522989149207, 3);
  sqcRZGate(q, -0.0800475931479682, 3);
  sqcRYGate(q, 2.2178462648170116, 4);
  sqcRZGate(q, 2.8529893354465603, 4);
  sqcRYGate(q, -0.7485583751045626, 5);
  sqcRZGate(q, 1.3647863243680438, 5);
  sqcRYGate(q, 0.52741943825907, 6);
  sqcRZGate(q, -1.9391414355950032, 6);
  sqcRYGate(q, -2.6681039940690217, 7);
  sqcRZGate(q, 2.7798005400019115, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.5659375164214526, 0);
  sqcRZGate(q, -0.5657445537260996, 0);
  sqcRYGate(q, 1.2318410383272704, 1);
  sqcRZGate(q, -1.813839822215697, 1);
  sqcRYGate(q, -2.7401034318899598, 2);
  sqcRZGate(q, 1.8441512732054601, 2);
  sqcRYGate(q, -1.6413719432320986, 3);
  sqcRZGate(q, -1.9440805670103118, 3);
  sqcRYGate(q, 1.084391789106085, 4);
  sqcRZGate(q, 2.5463693595646593, 4);
  sqcRYGate(q, 2.315898400890762, 5);
  sqcRZGate(q, 0.6771669929263977, 5);
  sqcRYGate(q, -0.8115422382788388, 6);
  sqcRZGate(q, 2.071921434840735, 6);
  sqcRYGate(q, -2.6686048895778973, 7);
  sqcRZGate(q, 1.5595354153612935, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.581640121798772, 0);
  sqcRZGate(q, 1.524369368325387, 0);
  sqcRYGate(q, 2.1127669206977795, 1);
  sqcRZGate(q, 2.7197485373659758, 1);
  sqcRYGate(q, -2.459236223831298, 2);
  sqcRZGate(q, -1.3736787887776538, 2);
  sqcRYGate(q, 0.5411512416163095, 3);
  sqcRZGate(q, 1.2589418994080788, 3);
  sqcRYGate(q, -1.9150886666975264, 4);
  sqcRZGate(q, 2.4623783740360183, 4);
  sqcRYGate(q, -1.8157259942701467, 5);
  sqcRZGate(q, 0.9357262650741776, 5);
  sqcRYGate(q, -0.7486465700635092, 6);
  sqcRZGate(q, 1.612974059711041, 6);
  sqcRYGate(q, -2.2272411847690687, 7);
  sqcRZGate(q, -0.7980276620883291, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.3599214850943095, 0);
  sqcRZGate(q, -0.9834351673169042, 0);
  sqcRYGate(q, -1.7876311192027534, 1);
  sqcRZGate(q, 0.8688409288123237, 1);
  sqcRYGate(q, -1.731649862749224, 2);
  sqcRZGate(q, 2.787371579549465, 2);
  sqcRYGate(q, 2.6259276954413666, 3);
  sqcRZGate(q, 0.944917332222249, 3);
  sqcRYGate(q, 0.6024922928242888, 4);
  sqcRZGate(q, -1.7129333410254919, 4);
  sqcRYGate(q, -2.097502446749159, 5);
  sqcRZGate(q, 3.080764466038499, 5);
  sqcRYGate(q, -1.5828016521128303, 6);
  sqcRZGate(q, -0.5949054058328054, 6);
  sqcRYGate(q, -0.22140632060080395, 7);
  sqcRZGate(q, 2.7076040104230326, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.4142854725882048, 0);
  sqcRZGate(q, -2.196429875072763, 0);
  sqcRYGate(q, -1.3244493182319816, 1);
  sqcRZGate(q, 2.8113558129646927, 1);
  sqcRYGate(q, -3.084637149350169, 2);
  sqcRZGate(q, 0.5732232707803169, 2);
  sqcRYGate(q, -0.22949587985588193, 3);
  sqcRZGate(q, 1.1636771933569652, 3);
  sqcRYGate(q, -0.22386373630980305, 4);
  sqcRZGate(q, 0.3823607119195924, 4);
  sqcRYGate(q, 2.347543142272235, 5);
  sqcRZGate(q, 2.012183895832422, 5);
  sqcRYGate(q, 0.7029031174553325, 6);
  sqcRZGate(q, -1.1044937027454422, 6);
  sqcRYGate(q, -2.67264695511995, 7);
  sqcRZGate(q, 0.17027608491718385, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.187903779381287, 0);
  sqcRZGate(q, -0.8631496726345116, 0);
  sqcRYGate(q, 0.08801374200222967, 1);
  sqcRZGate(q, -1.04283229437048, 1);
  sqcRYGate(q, 1.5980603256793375, 2);
  sqcRZGate(q, 0.37853495318582137, 2);
  sqcRYGate(q, 1.3807670248969073, 3);
  sqcRZGate(q, -0.5207440652610051, 3);
  sqcRYGate(q, 1.1760602869886032, 4);
  sqcRZGate(q, 1.930475384490343, 4);
  sqcRYGate(q, -2.679334244906554, 5);
  sqcRZGate(q, -2.0635070814589267, 5);
  sqcRYGate(q, 1.8401362655220572, 6);
  sqcRZGate(q, 2.622046237345704, 6);
  sqcRYGate(q, -1.6697380021069375, 7);
  sqcRZGate(q, -2.818444371273553, 7);

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
