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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 0.2857818172236728, 0);
  sqcRYGate(q, 0.7087625973846634, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8436873434440404, 0);
  sqcRYGate(q, 1.7380524729059472, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.239731277559245, 2);
  sqcRYGate(q, 1.1197290623481444, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9722868949978625, 2);
  sqcRYGate(q, 2.1107242186413746, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2997555238286216, 4);
  sqcRYGate(q, -2.6967556875757346, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6029805569174428, 4);
  sqcRYGate(q, -1.6535245669697214, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7484581476847256, 6);
  sqcRYGate(q, -1.0592317596955736, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.215683844472112, 6);
  sqcRYGate(q, -1.7893852736016895, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5288243274707254, 0);
  sqcRYGate(q, -2.8796854552714457, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7414462047711803, 0);
  sqcRYGate(q, 1.7596183828157328, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.14290454064955238, 2);
  sqcRYGate(q, -2.3162085689095826, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.598830165853954, 2);
  sqcRYGate(q, -0.12434977326542018, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.044365443974765, 4);
  sqcRYGate(q, -0.103096356176128, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.8099526085242723, 4);
  sqcRYGate(q, 2.7108514146327174, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.6183509422122957, 1);
  sqcRYGate(q, -2.299868984713896, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.23518464873884506, 1);
  sqcRYGate(q, 0.23061461802180272, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6716277814450478, 3);
  sqcRYGate(q, 2.8707368304450034, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.3605475884512819, 3);
  sqcRYGate(q, -0.12863553436434033, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.2093672432179083, 5);
  sqcRYGate(q, 1.3802059623781433, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.636814960106508, 5);
  sqcRYGate(q, -1.7279323397775368, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.7422301874700183, 0);
  sqcRYGate(q, 0.9639039199914832, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.205289942638768, 0);
  sqcRYGate(q, -1.034443166905521, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5604772728957066, 2);
  sqcRYGate(q, 1.704770945591231, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6687129443266584, 2);
  sqcRYGate(q, 0.7021571666812082, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3471690008631025, 4);
  sqcRYGate(q, -2.5297194982723723, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7513087213412337, 4);
  sqcRYGate(q, -0.6260668608267774, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8525801292235051, 6);
  sqcRYGate(q, 2.187860240670301, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7810385468688925, 6);
  sqcRYGate(q, -1.7104492839517134, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.120608381139352, 0);
  sqcRYGate(q, 1.1980196133567746, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7389111852297613, 0);
  sqcRYGate(q, -1.6768511253946845, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3387168582955536, 2);
  sqcRYGate(q, 1.1519392398013544, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5139882959223403, 2);
  sqcRYGate(q, -1.8198074032792844, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.1434899531502482, 4);
  sqcRYGate(q, 0.32944203555728896, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.8525826917780173, 4);
  sqcRYGate(q, -1.617990186983108, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.36200409636326064, 1);
  sqcRYGate(q, -2.196437453443686, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.32075808884350465, 1);
  sqcRYGate(q, -1.4956451278604117, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1291905919459682, 3);
  sqcRYGate(q, -0.28023520143566766, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.9115096769085573, 3);
  sqcRYGate(q, 2.29433109307946, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.5205028361173945, 5);
  sqcRYGate(q, -0.8284586336397615, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5110355268630375, 5);
  sqcRYGate(q, 2.5807135605191136, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.1641717924937993, 0);
  sqcRYGate(q, -2.975952844885876, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3990809674012432, 0);
  sqcRYGate(q, -2.1672916589779536, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.607748643670737, 2);
  sqcRYGate(q, 2.876555829334295, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8144834654256274, 2);
  sqcRYGate(q, -1.3500405661963146, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.024410301373144, 4);
  sqcRYGate(q, 0.8896352323858466, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3465014439805588, 4);
  sqcRYGate(q, 1.0148533975845977, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.443451687348073, 6);
  sqcRYGate(q, 1.4662761028258302, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.148977032442754, 6);
  sqcRYGate(q, 1.6920540719060035, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6377678195399235, 0);
  sqcRYGate(q, 2.2113337023375017, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7649504580653959, 0);
  sqcRYGate(q, 1.8606351684026388, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3298861583081605, 2);
  sqcRYGate(q, 3.1216023754758773, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.0044246894396727, 2);
  sqcRYGate(q, 0.10480857322515395, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.8918090329613468, 4);
  sqcRYGate(q, -0.32808525065326233, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.032220968714853, 4);
  sqcRYGate(q, -2.1154621708371693, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.9877219173535314, 1);
  sqcRYGate(q, -1.7232118072119726, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3961887898475553, 1);
  sqcRYGate(q, 0.1575437644537949, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.15059613029399796, 3);
  sqcRYGate(q, 1.0769147026988106, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8476915538946419, 3);
  sqcRYGate(q, 2.3213473080142544, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.9977710723519062, 5);
  sqcRYGate(q, -2.9194232894093504, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.30155246859762, 5);
  sqcRYGate(q, 1.7598661519241847, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.429512866590695, 0);
  sqcRYGate(q, 3.022824102169547, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7616729317788362, 0);
  sqcRYGate(q, -2.7353910466439486, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.46528886594682267, 2);
  sqcRYGate(q, -1.788225485164765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7555378634070335, 2);
  sqcRYGate(q, -3.0366135110750228, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0796311861593675, 4);
  sqcRYGate(q, -1.0053144018003164, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7141288622571973, 4);
  sqcRYGate(q, 2.2983677532041025, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4383458631202082, 6);
  sqcRYGate(q, -2.071202223651252, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5541374337415697, 6);
  sqcRYGate(q, 1.8104726221692713, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5104249891498194, 0);
  sqcRYGate(q, 0.8424623233400494, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3665956468328346, 0);
  sqcRYGate(q, -2.1041921643057986, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.18308414608571297, 2);
  sqcRYGate(q, 0.7593701839919751, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.3419478611230407, 2);
  sqcRYGate(q, -1.4174764708042702, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.9288623292515434, 4);
  sqcRYGate(q, 2.5871874411031603, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.12534727142075, 4);
  sqcRYGate(q, -0.6427579436609808, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.7189777621138553, 1);
  sqcRYGate(q, -1.421724252472158, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6777097609321814, 1);
  sqcRYGate(q, -1.373667883081446, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9603788137093252, 3);
  sqcRYGate(q, -1.4904743756930072, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.6159476453524143, 3);
  sqcRYGate(q, 1.9339184130277147, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.452818961503137, 5);
  sqcRYGate(q, 2.3265042038889794, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.6103105824953562, 5);
  sqcRYGate(q, -0.16884938099484526, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5360083241587918, 0);
  sqcRYGate(q, -3.046126259213217, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4097451290567529, 0);
  sqcRYGate(q, -0.8259439661314583, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.34942778299755783, 2);
  sqcRYGate(q, 1.5418308116445267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.067024286256948, 2);
  sqcRYGate(q, 0.85064653406043, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.901642751203133, 4);
  sqcRYGate(q, -0.3768588196975111, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.03819749240679843, 4);
  sqcRYGate(q, 1.3072053327539717, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.97159483915841, 6);
  sqcRYGate(q, 2.9430407849443565, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.094116791084282, 6);
  sqcRYGate(q, -1.0525119553094129, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4317094020850867, 0);
  sqcRYGate(q, -0.389572222607515, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0509100414362074, 0);
  sqcRYGate(q, -1.0747057059322467, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5535313411327816, 2);
  sqcRYGate(q, 2.97559089992942, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.36192555025897993, 2);
  sqcRYGate(q, 0.5755000036981883, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.7613568869793879, 4);
  sqcRYGate(q, -0.2604849161653311, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.3476271855591724, 4);
  sqcRYGate(q, -1.2253909006828605, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.952798591859666, 1);
  sqcRYGate(q, -2.3556726387287044, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.13741668792734707, 1);
  sqcRYGate(q, -0.2974794945500508, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.064350888980486, 3);
  sqcRYGate(q, 1.370521174526921, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.1636507481669662, 3);
  sqcRYGate(q, 0.6279877812755457, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.491049289453211, 5);
  sqcRYGate(q, -3.071848540238511, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.8788383429366213, 5);
  sqcRYGate(q, -1.5179186591144842, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5880784060760718, 0);
  sqcRYGate(q, -2.1739402761480466, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4249978239213228, 0);
  sqcRYGate(q, 2.2666989435733482, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4065020643685893, 2);
  sqcRYGate(q, -1.3969131011506823, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6648220423167448, 2);
  sqcRYGate(q, 0.670026524590873, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0805991019063774, 4);
  sqcRYGate(q, -2.224048520235727, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9719208827073484, 4);
  sqcRYGate(q, -0.7796469657377639, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.782437758002661, 6);
  sqcRYGate(q, 0.9505972950516747, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1268858465585914, 6);
  sqcRYGate(q, 1.6128793970102302, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0038662660675026, 0);
  sqcRYGate(q, -2.9853546509139957, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.625803105853286, 0);
  sqcRYGate(q, 2.105936840266206, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.059556310293771, 2);
  sqcRYGate(q, -2.919482196800701, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.648103300789921, 2);
  sqcRYGate(q, -1.139306336374216, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.4122499449810046, 4);
  sqcRYGate(q, 1.5133255229497502, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.7564358764185233, 4);
  sqcRYGate(q, 0.7767586554277006, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.915589249561368, 1);
  sqcRYGate(q, 0.40304333689245464, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5127080004252962, 1);
  sqcRYGate(q, 0.4342482339498801, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8728218967059636, 3);
  sqcRYGate(q, -1.3457537371499324, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.670284813080809, 3);
  sqcRYGate(q, 3.1343872571586955, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.758198785565707, 5);
  sqcRYGate(q, 2.9769326468745847, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.579800708064357, 5);
  sqcRYGate(q, 0.5278282261894206, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.9098348750046212, 0);
  sqcRYGate(q, 3.048007187541153, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4058387403947625, 0);
  sqcRYGate(q, 2.497461851771711, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.683742637387811, 2);
  sqcRYGate(q, 1.5281636291803116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7435015360640054, 2);
  sqcRYGate(q, 0.7983930402814021, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.062431773578906835, 4);
  sqcRYGate(q, 0.49656971490772167, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0851401731555774, 4);
  sqcRYGate(q, -0.6213809661852855, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5940083585869755, 6);
  sqcRYGate(q, -2.3347642310887204, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5203127865155817, 6);
  sqcRYGate(q, -3.0755670419401464, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0116580535061024, 0);
  sqcRYGate(q, 2.956432826511385, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.924497024887438, 0);
  sqcRYGate(q, -2.4202358613248904, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4622117756575914, 2);
  sqcRYGate(q, -1.3487923123119632, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.9507462375643998, 2);
  sqcRYGate(q, -1.3677730383619242, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.7047695116722776, 4);
  sqcRYGate(q, 2.8409689525057398, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.5671279010729968, 4);
  sqcRYGate(q, -0.09703740143237383, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.1265695881225097, 1);
  sqcRYGate(q, -1.6083367411240983, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.86892263280851, 1);
  sqcRYGate(q, 0.33942432946604567, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.10507025818330273, 3);
  sqcRYGate(q, 1.9549884693873185, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.6295635433063591, 3);
  sqcRYGate(q, 1.502651491249698, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.2737826010520594, 5);
  sqcRYGate(q, 1.4223022921102502, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.697923030776502, 5);
  sqcRYGate(q, -0.20541006454384902, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.775834625746878, 0);
  sqcRYGate(q, -1.3168286610814413, 1);
  sqcRYGate(q, 0.009513798190141613, 2);
  sqcRYGate(q, 0.9021614626503421, 3);
  sqcRYGate(q, -0.9572107354224109, 4);
  sqcRYGate(q, -1.9822221802776456, 5);
  sqcRYGate(q, -0.04482329668251023, 6);
  sqcRYGate(q, -2.4293589750738764, 7);

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
