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

  sqcRYGate(q, -0.6646189289808131, 0);
  sqcRYGate(q, 1.2648337198415485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2150467711957518, 0);
  sqcRYGate(q, -1.265398670512318, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.58709167491055, 1);
  sqcRYGate(q, 1.919246861009413, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8503997878584606, 1);
  sqcRYGate(q, 3.02553374296024, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.24593896416402394, 2);
  sqcRYGate(q, -1.773435780373932, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.107966187070831, 2);
  sqcRYGate(q, 1.1104125040630712, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3739863202686031, 3);
  sqcRYGate(q, 1.1791368381734437, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.15622893926005751, 3);
  sqcRYGate(q, -1.3805137721162364, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6706470461716947, 4);
  sqcRYGate(q, -0.5841176305875555, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9967022053093979, 4);
  sqcRYGate(q, 0.7350239673929369, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8428398128346917, 5);
  sqcRYGate(q, -0.4454057070556203, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7509564570721625, 5);
  sqcRYGate(q, 2.104471032613053, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0881497363664083, 6);
  sqcRYGate(q, 0.9734166419295944, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.620029177105219, 6);
  sqcRYGate(q, 0.08912921433899092, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6238670042860869, 0);
  sqcRYGate(q, -2.208452719651116, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.665833600909787, 0);
  sqcRYGate(q, -2.707796202922796, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.44422512560863486, 1);
  sqcRYGate(q, -1.431641744253925, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0783974125908351, 1);
  sqcRYGate(q, 1.9410425513735725, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3976014451662913, 2);
  sqcRYGate(q, 0.25026670521727734, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2427159964660186, 2);
  sqcRYGate(q, 0.9653334428782383, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.03625246077673384, 3);
  sqcRYGate(q, -0.3814807888789983, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4354178053542745, 3);
  sqcRYGate(q, 1.268613134246407, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.606490961276652, 4);
  sqcRYGate(q, 1.3410469851254874, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1414107177534372, 4);
  sqcRYGate(q, -2.4554836486254774, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.24224709280262652, 5);
  sqcRYGate(q, 2.8499481596425498, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2112971033881328, 5);
  sqcRYGate(q, -1.3652651807476932, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4390291781262645, 6);
  sqcRYGate(q, -1.70851798380696, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.113396501032561, 6);
  sqcRYGate(q, -1.0222911761312947, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.05059055445110678, 0);
  sqcRYGate(q, 2.380608674580551, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.526537683972128, 0);
  sqcRYGate(q, 2.737740075305922, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9961619538277393, 1);
  sqcRYGate(q, -2.4686728837641327, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5821607061125604, 1);
  sqcRYGate(q, 1.3160444961815365, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8863896364457526, 2);
  sqcRYGate(q, 1.6273899534799539, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.22427823060715357, 2);
  sqcRYGate(q, -2.11128066159266, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4693778996750053, 3);
  sqcRYGate(q, -2.1028483195714953, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8556971966884758, 3);
  sqcRYGate(q, -0.3123205328891166, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.1548931769263442, 4);
  sqcRYGate(q, 1.0253682876215686, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.107525119410071, 4);
  sqcRYGate(q, 0.17332634382158327, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2838401875915264, 5);
  sqcRYGate(q, -2.164945179822533, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9423740453252466, 5);
  sqcRYGate(q, -1.6346012865462844, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.950525368292271, 6);
  sqcRYGate(q, 1.197847703465282, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.084151207743795, 6);
  sqcRYGate(q, 2.0540507672952533, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.06233166131207302, 0);
  sqcRYGate(q, -1.403971306796426, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5391148004770976, 0);
  sqcRYGate(q, 1.6793944606155786, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.899241010962573, 1);
  sqcRYGate(q, 0.11172027317443127, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7344236472777057, 1);
  sqcRYGate(q, 0.4999025261566863, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2994786976135071, 2);
  sqcRYGate(q, -1.6500901942188144, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.13013092015220135, 2);
  sqcRYGate(q, 1.7900633037221052, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.572849785695198, 3);
  sqcRYGate(q, -1.3136061819761906, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2278052317977843, 3);
  sqcRYGate(q, -0.8346726425830626, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0415555055117345, 4);
  sqcRYGate(q, -0.8944793978398403, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1147016534306087, 4);
  sqcRYGate(q, -0.4198726079672488, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.781581088566793, 5);
  sqcRYGate(q, 2.1576861957354403, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7442119593638611, 5);
  sqcRYGate(q, 0.45017338936070406, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0862301009736135, 6);
  sqcRYGate(q, 2.320950457893139, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3746093700482103, 6);
  sqcRYGate(q, 1.2936483266559504, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.22643005013918371, 0);
  sqcRYGate(q, 2.4731341649892635, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.06747315579521906, 0);
  sqcRYGate(q, 0.9061256596543118, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2693044218332794, 1);
  sqcRYGate(q, -1.1235110268842439, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.011841888444463463, 1);
  sqcRYGate(q, 1.7427603302627697, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9094156197971106, 2);
  sqcRYGate(q, -2.3141452894857935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.593770320709564, 2);
  sqcRYGate(q, -0.09388984098605492, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4426195462034457, 3);
  sqcRYGate(q, 0.6007664193080408, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9036462711215671, 3);
  sqcRYGate(q, -1.1338304780714044, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5069874524366496, 4);
  sqcRYGate(q, -2.2019519596763426, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.28039242555063654, 4);
  sqcRYGate(q, 2.103988951227306, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2951988158763594, 5);
  sqcRYGate(q, -0.24640270757151672, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7855921080426593, 5);
  sqcRYGate(q, -3.0846385462378314, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7399839428681272, 6);
  sqcRYGate(q, 0.6120096906676209, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6965899933865627, 6);
  sqcRYGate(q, -0.8903821562687337, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.1715436903591549, 0);
  sqcRYGate(q, 3.0011249323245677, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8708127168201748, 0);
  sqcRYGate(q, -0.9777427692974694, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1682287642248497, 1);
  sqcRYGate(q, -1.5821171296008352, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7532538344642372, 1);
  sqcRYGate(q, -1.2809051498706188, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6960948412372111, 2);
  sqcRYGate(q, 2.039576343872585, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.17059252160520622, 2);
  sqcRYGate(q, -0.16452861048074396, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8621580140465985, 3);
  sqcRYGate(q, 1.5031896188349467, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9202676018626685, 3);
  sqcRYGate(q, 0.457107683098112, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.1491346706080163, 4);
  sqcRYGate(q, 2.431653087884847, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.825532857881015, 4);
  sqcRYGate(q, 1.5627463857291453, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1947740330366274, 5);
  sqcRYGate(q, 0.6064313621806763, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3199134963590655, 5);
  sqcRYGate(q, -2.4387201405316103, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.038143888620774, 6);
  sqcRYGate(q, 0.8594802595522761, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.163382318165875, 6);
  sqcRYGate(q, 0.05603377952170945, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8558673309709324, 0);
  sqcRYGate(q, -0.3747863422306281, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.17674600551013686, 0);
  sqcRYGate(q, 1.7401692662640773, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.691639982264757, 1);
  sqcRYGate(q, -2.823499516094811, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5770824279732993, 1);
  sqcRYGate(q, 0.988412945090265, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9588266480949104, 2);
  sqcRYGate(q, -1.3281422065308632, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7276234462275556, 2);
  sqcRYGate(q, -2.6547515822741943, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5440552939858958, 3);
  sqcRYGate(q, -2.5460326316162205, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.27489043054193907, 3);
  sqcRYGate(q, 2.0798529882247037, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8902546905890296, 4);
  sqcRYGate(q, 2.954388563034371, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8768360355585694, 4);
  sqcRYGate(q, 0.7547408442203983, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.830385368962273, 5);
  sqcRYGate(q, -2.5383387433745015, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.89131968892822, 5);
  sqcRYGate(q, -0.367571158957482, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.27814905407990487, 6);
  sqcRYGate(q, 1.4752805684860082, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.575636340012235, 6);
  sqcRYGate(q, 2.725714593494524, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0985087147457415, 0);
  sqcRYGate(q, -2.738860052820291, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7377405518189448, 0);
  sqcRYGate(q, -2.4365676182080587, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4726550953197, 1);
  sqcRYGate(q, -1.6930211087786013, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9912969774897067, 1);
  sqcRYGate(q, 0.0906454481835733, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8952704771312439, 2);
  sqcRYGate(q, -2.0961612976102435, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3997890313730172, 2);
  sqcRYGate(q, 0.9627611355344836, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0697656864548497, 3);
  sqcRYGate(q, -0.32216247813508847, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9642607477361427, 3);
  sqcRYGate(q, 0.9831554977773502, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.313056017358256, 4);
  sqcRYGate(q, 2.3227563091240655, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.395527675268477, 4);
  sqcRYGate(q, 0.2567918444189736, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4056850709563632, 5);
  sqcRYGate(q, 1.2288690834153475, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.294067299811147, 5);
  sqcRYGate(q, -2.8963101217898113, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0621952320054286, 6);
  sqcRYGate(q, 1.4826579351054123, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.16151298986332172, 6);
  sqcRYGate(q, -2.4155382808893804, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5920287945341647, 0);
  sqcRYGate(q, -0.2582622253135929, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7763939555232655, 0);
  sqcRYGate(q, 2.6887643044328255, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.38421561934923704, 1);
  sqcRYGate(q, 1.5449520531436847, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.78768192569457, 1);
  sqcRYGate(q, -0.09864204624725748, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.749568250822022, 2);
  sqcRYGate(q, 0.07126546820582283, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.811846964611468, 2);
  sqcRYGate(q, -1.815677359446073, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.19616203993313341, 3);
  sqcRYGate(q, -2.624407133142339, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.737929897080938, 3);
  sqcRYGate(q, 0.8199511302158795, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7383255276542195, 4);
  sqcRYGate(q, 2.659895327369597, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.11427194521168982, 4);
  sqcRYGate(q, -2.5226114295942828, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2059699312302774, 5);
  sqcRYGate(q, -0.5788386338764955, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.994298562357832, 5);
  sqcRYGate(q, 2.8531030517426332, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7121945764354143, 6);
  sqcRYGate(q, 1.8857721684835154, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.3664469567817834, 6);
  sqcRYGate(q, -0.2004188351164986, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4109951914839982, 0);
  sqcRYGate(q, 1.4490645128931652, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.522658734828037, 0);
  sqcRYGate(q, 2.5596422295471006, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6630349778792733, 1);
  sqcRYGate(q, 2.951879888533863, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.16707332315066203, 1);
  sqcRYGate(q, -0.21585726752278298, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1374202163195717, 2);
  sqcRYGate(q, 2.1610842453249863, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8698373607465661, 2);
  sqcRYGate(q, -1.2102001446103676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.196198359514999, 3);
  sqcRYGate(q, -1.9530096676732613, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6480206764156646, 3);
  sqcRYGate(q, -0.003930954016646363, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5661050533672443, 4);
  sqcRYGate(q, 1.736096430317339, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.091421805452394, 4);
  sqcRYGate(q, 0.6990089738776605, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.655007983564938, 5);
  sqcRYGate(q, 2.676189934939105, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5431150575777677, 5);
  sqcRYGate(q, -3.000874614809944, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7640223885192285, 6);
  sqcRYGate(q, -2.0209686575300307, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5123283886402334, 6);
  sqcRYGate(q, -0.41468505538428524, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.247765488959321, 0);
  sqcRYGate(q, -1.390570887057181, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2266851835933834, 0);
  sqcRYGate(q, -0.7369056337222899, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0525883372845923, 1);
  sqcRYGate(q, -2.6359550463801478, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.10224552207185553, 1);
  sqcRYGate(q, -2.4405385803549917, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.971527313308761, 2);
  sqcRYGate(q, -1.8463326107651437, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7471166209200133, 2);
  sqcRYGate(q, 1.2975872972735356, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.44179571897067, 3);
  sqcRYGate(q, 1.6770474897381398, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7769199290514629, 3);
  sqcRYGate(q, 2.39772907902766, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.29323566104915066, 4);
  sqcRYGate(q, -1.9324159598250619, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7620238642399437, 4);
  sqcRYGate(q, -3.119760787998159, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9880413375303566, 5);
  sqcRYGate(q, 0.9240876418558325, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6748569336631565, 5);
  sqcRYGate(q, 0.8616780086105732, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.101273645438754, 6);
  sqcRYGate(q, 0.9810853873931012, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.67068908071625, 6);
  sqcRYGate(q, 1.6339753271905606, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9005559718971787, 0);
  sqcRYGate(q, -1.2254349574321184, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.123901604319084, 0);
  sqcRYGate(q, 2.6911393095537353, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7387177540976614, 1);
  sqcRYGate(q, -0.4475996868679827, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6467481187559682, 1);
  sqcRYGate(q, -0.7807803315524744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8860421886110217, 2);
  sqcRYGate(q, 1.494879349970918, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1641451484605136, 2);
  sqcRYGate(q, 1.3427078570440134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8191879354204934, 3);
  sqcRYGate(q, 0.38143690496653715, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.45264901178761346, 3);
  sqcRYGate(q, 0.40776380608551405, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3438791753877695, 4);
  sqcRYGate(q, -0.34705428366807745, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8278169582095687, 4);
  sqcRYGate(q, -0.03681082798093852, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9410385159568975, 5);
  sqcRYGate(q, 2.435054252111144, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8138448793830406, 5);
  sqcRYGate(q, -0.9860784038182695, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.641758734905056, 6);
  sqcRYGate(q, -0.2157663505598653, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.524824176824263, 6);
  sqcRYGate(q, 2.6222519963288695, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7388248978403946, 0);
  sqcRYGate(q, -0.619054022309868, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0233871144399682, 0);
  sqcRYGate(q, -0.4076607900650329, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7883300497399652, 1);
  sqcRYGate(q, -2.0017747192186848, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.814743507837954, 1);
  sqcRYGate(q, 1.0445088686509436, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8174505708037945, 2);
  sqcRYGate(q, 0.813253366037885, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3558012617084687, 2);
  sqcRYGate(q, 1.928516084271335, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4572012759541808, 3);
  sqcRYGate(q, -0.41108128107875785, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5411703365057114, 3);
  sqcRYGate(q, 0.9946494001918903, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2726434317376567, 4);
  sqcRYGate(q, -0.615748522876248, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8363989759850936, 4);
  sqcRYGate(q, 2.8668870108203306, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4986957083881528, 5);
  sqcRYGate(q, -2.355268174848242, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3635143691940255, 5);
  sqcRYGate(q, -0.12954194257075805, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6468611813790204, 6);
  sqcRYGate(q, 1.304539631806778, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9891162783284468, 6);
  sqcRYGate(q, -1.4975621269550627, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.36912420551855973, 0);
  sqcRYGate(q, 2.2782552065457473, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.092122443721965, 0);
  sqcRYGate(q, -2.03718182457823, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6136062241580946, 1);
  sqcRYGate(q, -1.010173106906751, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4977492729889095, 1);
  sqcRYGate(q, 3.128209353093741, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7531475364852609, 2);
  sqcRYGate(q, 1.0895890099223797, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6508260978885205, 2);
  sqcRYGate(q, 0.07586550984573481, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3747044163840494, 3);
  sqcRYGate(q, 1.1703023222022102, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1714285960967004, 3);
  sqcRYGate(q, 0.4578191465064139, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7843499608225155, 4);
  sqcRYGate(q, -2.883907528497544, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.47930972628663415, 4);
  sqcRYGate(q, 0.8980312067753082, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.626410414712671, 5);
  sqcRYGate(q, -1.6119089621888918, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4358953891578095, 5);
  sqcRYGate(q, 2.736704193169025, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.14921762562491322, 6);
  sqcRYGate(q, 2.1348434461022467, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.23505232340154764, 6);
  sqcRYGate(q, -0.7352809932846442, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5342097053883967, 0);
  sqcRYGate(q, 3.0503331735971195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3708301360841197, 0);
  sqcRYGate(q, 1.5360829478014688, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.743201193837596, 1);
  sqcRYGate(q, 0.0814017842613579, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3574544626115517, 1);
  sqcRYGate(q, -0.5468615734636478, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.071837026680019, 2);
  sqcRYGate(q, 2.7051248756664243, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.315092985570625, 2);
  sqcRYGate(q, -2.8499852165161923, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.22208847156437164, 3);
  sqcRYGate(q, 1.1567898082310615, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5425888242372974, 3);
  sqcRYGate(q, -2.5198153358120954, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.224719469873282, 4);
  sqcRYGate(q, 2.8451052672433086, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.119581645302066, 4);
  sqcRYGate(q, -1.951720555115881, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.290298937597481, 5);
  sqcRYGate(q, 0.9470067305688943, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7335653667433046, 5);
  sqcRYGate(q, -2.6663843574222117, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8461600479006437, 6);
  sqcRYGate(q, 2.236671371997975, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9705490002015185, 6);
  sqcRYGate(q, -2.781454503892586, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.925625961186583, 0);
  sqcRYGate(q, 0.33938226327561183, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4195743303252896, 0);
  sqcRYGate(q, -0.5362340822904059, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.115762577967608, 1);
  sqcRYGate(q, -1.7157696199928392, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.256478173592061, 1);
  sqcRYGate(q, -2.5189830605151857, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3096690379371367, 2);
  sqcRYGate(q, 1.0555099138881987, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6948098773646874, 2);
  sqcRYGate(q, 3.060199416703209, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1330266508107334, 3);
  sqcRYGate(q, 0.6787343558905219, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.460127290084628, 3);
  sqcRYGate(q, 1.4094118585872684, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5889647132537124, 4);
  sqcRYGate(q, -2.9184108393759782, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.055781909011382, 4);
  sqcRYGate(q, -2.183583424716364, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.19108256334398, 5);
  sqcRYGate(q, 1.122696566147625, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.312944676032116, 5);
  sqcRYGate(q, 1.371770228978942, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3612426083944245, 6);
  sqcRYGate(q, 0.1286566090680974, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2592640525433136, 6);
  sqcRYGate(q, -2.4272249285730956, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2096665496206231, 0);
  sqcRYGate(q, 2.44487914537159, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.35573744828470755, 0);
  sqcRYGate(q, 1.5967189267825876, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.973720474222347, 1);
  sqcRYGate(q, 1.7368108422470792, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1358720412693537, 1);
  sqcRYGate(q, -0.6473330159247253, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.328542800309332, 2);
  sqcRYGate(q, 2.4732651626052493, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8336821296510718, 2);
  sqcRYGate(q, 1.7835629590658855, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8778024693834763, 3);
  sqcRYGate(q, 1.0780077509215227, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7353442612881622, 3);
  sqcRYGate(q, -0.9556690319720568, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0041695484278788, 4);
  sqcRYGate(q, 2.8530068534454074, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.267467718243298, 4);
  sqcRYGate(q, -0.09354876686714508, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8153210206463148, 5);
  sqcRYGate(q, -2.9064140439488595, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9092508719068473, 5);
  sqcRYGate(q, -0.10509417623178052, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7727424633360234, 6);
  sqcRYGate(q, 1.1277142336209505, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6909715862337116, 6);
  sqcRYGate(q, -0.14852279645111613, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8380063923010193, 0);
  sqcRYGate(q, -1.5896490577600302, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1119892384084813, 0);
  sqcRYGate(q, 0.7343031440542325, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6179618012666026, 1);
  sqcRYGate(q, 1.8375178298208363, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7707929398163325, 1);
  sqcRYGate(q, -1.970423835558267, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.588193371431538, 2);
  sqcRYGate(q, 1.9795489870881644, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2605682646623233, 2);
  sqcRYGate(q, -0.4835348487159168, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.050650621305206, 3);
  sqcRYGate(q, -1.7105723412995864, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2263994597048615, 3);
  sqcRYGate(q, 0.2997640995389377, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9122970230665937, 4);
  sqcRYGate(q, -1.0493481930143442, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3302315926563368, 4);
  sqcRYGate(q, 2.277334722374982, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.050685758182525, 5);
  sqcRYGate(q, -1.2600559855572193, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9651949548650431, 5);
  sqcRYGate(q, -2.7545198984242525, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8685007910552835, 6);
  sqcRYGate(q, 2.724171585502198, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2891915332108552, 6);
  sqcRYGate(q, 1.2300232459244578, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0726350147710653, 0);
  sqcRYGate(q, 2.1463979066130463, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.415297163373019, 0);
  sqcRYGate(q, -1.6616613346645916, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.259539518277192, 1);
  sqcRYGate(q, 1.0992648137350454, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5153709472629298, 1);
  sqcRYGate(q, 1.9603756418684768, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.887748757548799, 2);
  sqcRYGate(q, 1.8352681270411768, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6064881748389364, 2);
  sqcRYGate(q, 1.51344209664928, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.17042283274476333, 3);
  sqcRYGate(q, -0.5164511330543888, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.40605067605398215, 3);
  sqcRYGate(q, 3.090070815497097, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5590891981607014, 4);
  sqcRYGate(q, 1.2406920968871535, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.358313070750369, 4);
  sqcRYGate(q, 0.007252762779201838, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0809557001048873, 5);
  sqcRYGate(q, -3.106626683160251, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8418920692046017, 5);
  sqcRYGate(q, -2.5079308945088425, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2859202698845964, 6);
  sqcRYGate(q, -1.6348231011658791, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9626609085202493, 6);
  sqcRYGate(q, 1.920112172077867, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6978553633978827, 0);
  sqcRYGate(q, 0.6133132492705142, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.454417746688871, 0);
  sqcRYGate(q, 0.8492740917837124, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.794967004400021, 1);
  sqcRYGate(q, -0.18164614528509038, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1567685434210713, 1);
  sqcRYGate(q, -0.11150159574489482, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0860388563908843, 2);
  sqcRYGate(q, 2.474056855847371, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0833357009985365, 2);
  sqcRYGate(q, -0.5399324576089288, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4017289477223489, 3);
  sqcRYGate(q, -0.29097856643322295, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2713844516184984, 3);
  sqcRYGate(q, 2.8326539753402025, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6345269198889731, 4);
  sqcRYGate(q, 1.4573340173128395, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5606353223262117, 4);
  sqcRYGate(q, -1.9664326166030888, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1294543652274007, 5);
  sqcRYGate(q, -0.5569578760884634, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.787210678196238, 5);
  sqcRYGate(q, -0.18768281190000025, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6688700318762457, 6);
  sqcRYGate(q, -2.2609933957409627, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6376577606786542, 6);
  sqcRYGate(q, 2.5656086657748025, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0053458767972736, 0);
  sqcRYGate(q, 2.9172717116415186, 1);
  sqcRYGate(q, 1.413530863382628, 2);
  sqcRYGate(q, -2.229454367274511, 3);
  sqcRYGate(q, 2.0190719874394114, 4);
  sqcRYGate(q, 2.734249628092966, 5);
  sqcRYGate(q, -2.8466519583675964, 6);
  sqcRYGate(q, 1.2461897766521295, 7);

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
