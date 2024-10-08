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

  sqcRYGate(q, -3.141308890130829, 0);
  sqcRZGate(q, 1.0131731126180643, 0);
  sqcRYGate(q, 0.0005109219552311679, 1);
  sqcRZGate(q, -2.2213531665544104, 1);
  sqcRYGate(q, 0.005090981787538418, 2);
  sqcRZGate(q, -1.9305531940631777, 2);
  sqcRYGate(q, 1.711903979377247, 3);
  sqcRZGate(q, -3.128785606601222, 3);
  sqcRYGate(q, 3.141388400116803, 4);
  sqcRZGate(q, -0.6809975915272409, 4);
  sqcRYGate(q, 2.8159948807755075, 5);
  sqcRZGate(q, -0.051291338367394516, 5);
  sqcRYGate(q, 0.0003646206311866962, 6);
  sqcRZGate(q, -2.637104359742718, 6);
  sqcRYGate(q, -1.5711117117441462, 7);
  sqcRZGate(q, -0.019110351690365433, 7);
  sqcRYGate(q, 0.9050456618250706, 8);
  sqcRZGate(q, -2.5409998333825627, 8);
  sqcRYGate(q, 1.5710813509573236, 9);
  sqcRZGate(q, 0.0018492251770032553, 9);
  sqcRYGate(q, 2.174331501723993, 10);
  sqcRZGate(q, -0.940296523458615, 10);
  sqcRYGate(q, -0.00018516228694487324, 11);
  sqcRZGate(q, 0.02236851037249643, 11);
  sqcRYGate(q, 1.5604419964250207, 12);
  sqcRZGate(q, -2.7132084466493636, 12);
  sqcRYGate(q, 0.0005442201040576644, 13);
  sqcRZGate(q, -1.4520724154377986, 13);
  sqcRYGate(q, 2.1259035375292124, 14);
  sqcRZGate(q, 0.7443715024956868, 14);
  sqcRYGate(q, -3.141016276740458, 15);
  sqcRZGate(q, -0.8981824192913778, 15);
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
  sqcRYGate(q, 3.1413651968666, 0);
  sqcRZGate(q, -2.3832752894757063, 0);
  sqcRYGate(q, 1.6152937274073595, 1);
  sqcRZGate(q, -2.7889553283861854, 1);
  sqcRYGate(q, 0.07929922165403414, 2);
  sqcRZGate(q, -1.6998429690102776, 2);
  sqcRYGate(q, -1.4506672076509215, 3);
  sqcRZGate(q, 2.9526020392142875, 3);
  sqcRYGate(q, -1.7106547897717421, 4);
  sqcRZGate(q, -3.1363325531239497, 4);
  sqcRYGate(q, -1.570752608249901, 5);
  sqcRZGate(q, 0.9852790073254761, 5);
  sqcRYGate(q, -3.141543502263777, 6);
  sqcRZGate(q, -0.3665360519099988, 6);
  sqcRYGate(q, -3.055341737377487, 7);
  sqcRZGate(q, -1.5902086946717873, 7);
  sqcRYGate(q, 0.00010038370258946827, 8);
  sqcRZGate(q, 2.5426694049818583, 8);
  sqcRYGate(q, -0.6503947181355558, 9);
  sqcRZGate(q, 3.14068529624799, 9);
  sqcRYGate(q, 0.002034437036226855, 10);
  sqcRZGate(q, -1.661892352399688, 10);
  sqcRYGate(q, -1.5708745261179384, 11);
  sqcRZGate(q, -1.1335306960046658, 11);
  sqcRYGate(q, 2.284035210563247, 12);
  sqcRZGate(q, -1.8818481824359683, 12);
  sqcRYGate(q, -1.5706775304984657, 13);
  sqcRZGate(q, 1.5705342320211357, 13);
  sqcRYGate(q, 0.7094073415602323, 14);
  sqcRZGate(q, 2.903497273979523, 14);
  sqcRYGate(q, -3.1412184713836333, 15);
  sqcRZGate(q, 2.0075177040618293, 15);
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
  sqcRYGate(q, 2.713434901999051, 0);
  sqcRZGate(q, 2.2538731509208603, 0);
  sqcRYGate(q, 2.7666667109239333, 1);
  sqcRZGate(q, 0.24318936251610615, 1);
  sqcRYGate(q, -1.5684706413674316, 2);
  sqcRZGate(q, 2.6276821862185513, 2);
  sqcRYGate(q, 1.560647185618856, 3);
  sqcRZGate(q, -1.568993565832337, 3);
  sqcRYGate(q, -1.2657461740701639, 4);
  sqcRZGate(q, -0.018485892633936577, 4);
  sqcRYGate(q, -0.00014054609270047072, 5);
  sqcRZGate(q, 1.627790129166872, 5);
  sqcRYGate(q, -0.0003370297152303081, 6);
  sqcRZGate(q, 1.4505225021075703, 6);
  sqcRYGate(q, 1.5708142797614446, 7);
  sqcRZGate(q, 0.7450884678677366, 7);
  sqcRYGate(q, -1.6906032719781825, 8);
  sqcRZGate(q, 3.1271557602818656, 8);
  sqcRYGate(q, -1.570635548052798, 9);
  sqcRZGate(q, -0.6089709319744195, 9);
  sqcRYGate(q, -1.6045084574471602, 10);
  sqcRZGate(q, -2.36680928867274, 10);
  sqcRYGate(q, -2.622574676939612, 11);
  sqcRZGate(q, -0.07594791793812201, 11);
  sqcRYGate(q, -0.00043545123635002625, 12);
  sqcRZGate(q, 0.7931318457803522, 12);
  sqcRYGate(q, -1.5856372436548511, 13);
  sqcRZGate(q, 3.1415817102548322, 13);
  sqcRYGate(q, -2.3106842330863264, 14);
  sqcRZGate(q, -2.6092917594808154, 14);
  sqcRYGate(q, 1.5728129971209823, 15);
  sqcRZGate(q, 1.4245716925876257, 15);
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
  sqcRYGate(q, -8.460127784104543e-05, 0);
  sqcRZGate(q, 1.699457151712009, 0);
  sqcRYGate(q, 0.00014259374311276218, 1);
  sqcRZGate(q, 0.17008567028669613, 1);
  sqcRYGate(q, 0.0012958926513808578, 2);
  sqcRZGate(q, -2.627620251433442, 2);
  sqcRYGate(q, -2.98448801034496, 3);
  sqcRZGate(q, 2.422418270879362, 3);
  sqcRYGate(q, 1.5771137483347595, 4);
  sqcRZGate(q, -0.0005562045621829985, 4);
  sqcRYGate(q, 3.140197579392395, 5);
  sqcRZGate(q, 0.7290558877494131, 5);
  sqcRYGate(q, -1.571350289793495, 6);
  sqcRZGate(q, 0.9642331339250649, 6);
  sqcRYGate(q, -1.5510195984097042, 7);
  sqcRZGate(q, 0.4677859626601304, 7);
  sqcRYGate(q, -0.22403940897241004, 8);
  sqcRZGate(q, -1.4967865785122916, 8);
  sqcRYGate(q, -0.0014303410473957001, 9);
  sqcRZGate(q, 2.291504970078595, 9);
  sqcRYGate(q, 0.03608944344591423, 10);
  sqcRZGate(q, -2.256872242931621, 10);
  sqcRYGate(q, -2.264588510669506e-05, 11);
  sqcRZGate(q, -2.5557178704487016, 11);
  sqcRYGate(q, 2.351865023924583, 12);
  sqcRZGate(q, -2.738997170230051, 12);
  sqcRYGate(q, -0.9564967949825531, 13);
  sqcRZGate(q, -1.5532741037513895, 13);
  sqcRYGate(q, 3.1295699451293633, 14);
  sqcRZGate(q, -0.02548085613554636, 14);
  sqcRYGate(q, -0.00026418353243672164, 15);
  sqcRZGate(q, -2.196923045645655, 15);
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
  sqcRYGate(q, 1.2663398067187668, 0);
  sqcRZGate(q, -1.8753108253238189, 0);
  sqcRYGate(q, 3.108908935794143, 1);
  sqcRZGate(q, -1.5420652499612109, 1);
  sqcRYGate(q, 1.4328105477721087, 2);
  sqcRZGate(q, -0.05697832125811364, 2);
  sqcRYGate(q, 0.016112177953355608, 3);
  sqcRZGate(q, -2.3629135827243912, 3);
  sqcRYGate(q, -1.5702133460454715, 4);
  sqcRZGate(q, 3.141518725154687, 4);
  sqcRYGate(q, 0.007897015362117078, 5);
  sqcRZGate(q, 3.0715271671703066, 5);
  sqcRYGate(q, -0.0004016283737122706, 6);
  sqcRZGate(q, 2.3380389843642724, 6);
  sqcRYGate(q, -3.141316865152349, 7);
  sqcRZGate(q, -2.835463413281207, 7);
  sqcRYGate(q, 2.2362692278547804, 8);
  sqcRZGate(q, 0.6851546499992907, 8);
  sqcRYGate(q, -2.016796872018809, 9);
  sqcRZGate(q, 1.8514341357625925, 9);
  sqcRYGate(q, 0.6525349081821962, 10);
  sqcRZGate(q, 0.31457751771448167, 10);
  sqcRYGate(q, 0.4188010880367834, 11);
  sqcRZGate(q, -3.004631521763206, 11);
  sqcRYGate(q, 1.5648811487845542, 12);
  sqcRZGate(q, 2.1880942009300965, 12);
  sqcRYGate(q, -1.5978006094942856, 13);
  sqcRZGate(q, 1.32860517023153, 13);
  sqcRYGate(q, -2.0500147590111792, 14);
  sqcRZGate(q, 1.1250350436714052, 14);
  sqcRYGate(q, -1.6074066987548143, 15);
  sqcRZGate(q, -1.366063426722147, 15);
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
  sqcRYGate(q, -0.43407068363646933, 0);
  sqcRZGate(q, -1.5725835464642106, 0);
  sqcRYGate(q, -1.5737372748984717, 1);
  sqcRZGate(q, 3.033573530940331, 1);
  sqcRYGate(q, 1.5698658733680275, 2);
  sqcRZGate(q, 1.5728981955365564, 2);
  sqcRYGate(q, 0.021599410782081364, 3);
  sqcRZGate(q, -1.6286871108808887, 3);
  sqcRYGate(q, 1.5690610201645079, 4);
  sqcRZGate(q, -1.6027603205660605, 4);
  sqcRYGate(q, -0.00010438107198288718, 5);
  sqcRZGate(q, -2.7659583852596517, 5);
  sqcRYGate(q, 3.005866309526981, 6);
  sqcRZGate(q, 2.897346229089566, 6);
  sqcRYGate(q, -3.1411558768965646, 7);
  sqcRZGate(q, -1.66185501220978, 7);
  sqcRYGate(q, 2.350092128854893e-05, 8);
  sqcRZGate(q, -1.391949034891866, 8);
  sqcRYGate(q, -3.1381995882023213, 9);
  sqcRZGate(q, -2.0407879291877027, 9);
  sqcRYGate(q, 0.0001224074243184603, 10);
  sqcRZGate(q, -0.3518356951477832, 10);
  sqcRYGate(q, 3.1378196222379953, 11);
  sqcRZGate(q, -0.9139007154085218, 11);
  sqcRYGate(q, -0.0032600555079805847, 12);
  sqcRZGate(q, -2.1890563584847014, 12);
  sqcRYGate(q, -2.96934386809082, 13);
  sqcRZGate(q, 1.2627691473147786, 13);
  sqcRYGate(q, 0.0036304242155775768, 14);
  sqcRZGate(q, -0.8408315022467319, 14);
  sqcRYGate(q, 0.038721548989762766, 15);
  sqcRZGate(q, -0.3334390216923184, 15);
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
  sqcRYGate(q, -1.5708779358242788, 0);
  sqcRZGate(q, -2.457935847149066, 0);
  sqcRYGate(q, -3.1259151824271667, 1);
  sqcRZGate(q, 1.462511012733393, 1);
  sqcRYGate(q, 0.8412264909195232, 2);
  sqcRZGate(q, -0.007850839419997868, 2);
  sqcRYGate(q, -1.5706379258735683, 3);
  sqcRZGate(q, -0.4748859944756863, 3);
  sqcRYGate(q, 0.11791447059334637, 4);
  sqcRZGate(q, -2.71727760229471, 4);
  sqcRYGate(q, 1.5706343539567367, 5);
  sqcRZGate(q, -1.582699156147836, 5);
  sqcRYGate(q, -1.4583663718485393, 6);
  sqcRZGate(q, 3.0682284060007445, 6);
  sqcRYGate(q, -0.000340284137575253, 7);
  sqcRZGate(q, -0.041917698017760685, 7);
  sqcRYGate(q, -3.0677656618296965, 8);
  sqcRZGate(q, -0.39194354960088024, 8);
  sqcRYGate(q, -0.5780130720795638, 9);
  sqcRZGate(q, 2.2176692986391826, 9);
  sqcRYGate(q, -2.49251656442688, 10);
  sqcRZGate(q, 1.9434206578416644, 10);
  sqcRYGate(q, -1.7794701082242068, 11);
  sqcRZGate(q, -0.5073330599404198, 11);
  sqcRYGate(q, -1.5771352982102504, 12);
  sqcRZGate(q, -1.5273746638672347, 12);
  sqcRYGate(q, -1.5990312889268832, 13);
  sqcRZGate(q, 3.076738087586424, 13);
  sqcRYGate(q, 0.23186608197245828, 14);
  sqcRZGate(q, 0.7244483850531225, 14);
  sqcRYGate(q, -2.7797518395039273, 15);
  sqcRZGate(q, 2.6900614225896518, 15);
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
  sqcRYGate(q, -1.5700594204214862, 0);
  sqcRZGate(q, 1.5706480939655725, 0);
  sqcRYGate(q, -1.5706333198978424, 1);
  sqcRZGate(q, -3.1272845250645624, 1);
  sqcRYGate(q, -1.5706589145764644, 2);
  sqcRZGate(q, 0.549325977514329, 2);
  sqcRYGate(q, -3.14147482552244, 3);
  sqcRZGate(q, 2.6714831993222923, 3);
  sqcRYGate(q, -0.09991665315220233, 4);
  sqcRZGate(q, 1.8923757834590798, 4);
  sqcRYGate(q, 1.5677411494824183, 5);
  sqcRZGate(q, 3.1415047268579226, 5);
  sqcRYGate(q, -2.6504183787273594, 6);
  sqcRZGate(q, 3.063121619941264, 6);
  sqcRYGate(q, 3.1142014071215613, 7);
  sqcRZGate(q, -1.5366533200151702, 7);
  sqcRYGate(q, -3.1415265964997494, 8);
  sqcRZGate(q, -2.7879385347894323, 8);
  sqcRYGate(q, -3.135914851033894, 9);
  sqcRZGate(q, 1.554634023398057, 9);
  sqcRYGate(q, 3.12864240101274, 10);
  sqcRZGate(q, -1.2625260486789571, 10);
  sqcRYGate(q, 0.018957521468382844, 11);
  sqcRZGate(q, -2.0167388779347935, 11);
  sqcRYGate(q, 1.6294138775317966, 12);
  sqcRZGate(q, 2.2618797800200596, 12);
  sqcRYGate(q, 3.141086035329352, 13);
  sqcRZGate(q, -0.08062030484751047, 13);
  sqcRYGate(q, 1.5664229955386986, 14);
  sqcRZGate(q, -1.5633040696350626, 14);
  sqcRYGate(q, -0.0011365928505595608, 15);
  sqcRZGate(q, 0.5649545245368278, 15);
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
  sqcRYGate(q, 1.5224170612113825, 0);
  sqcRZGate(q, 3.1413217448665693, 0);
  sqcRYGate(q, -1.570632424582297, 1);
  sqcRZGate(q, -2.083497787932914, 1);
  sqcRYGate(q, 3.1408310502671277, 2);
  sqcRZGate(q, 2.1074938495142037, 2);
  sqcRYGate(q, 0.2774347244897837, 3);
  sqcRZGate(q, 2.6375653026290347, 3);
  sqcRYGate(q, 3.1406892724718034, 4);
  sqcRZGate(q, -1.0986499199822204, 4);
  sqcRYGate(q, 1.560606634341306, 5);
  sqcRZGate(q, -3.1407908414336014, 5);
  sqcRYGate(q, 1.4460273924693068, 6);
  sqcRZGate(q, 2.6042992445282946, 6);
  sqcRYGate(q, 0.09409876965514247, 7);
  sqcRZGate(q, 0.007810851462718205, 7);
  sqcRYGate(q, 1.0639817591752017, 8);
  sqcRZGate(q, 1.5805748487013525, 8);
  sqcRYGate(q, -1.5715113309887787, 9);
  sqcRZGate(q, 0.8323480249092131, 9);
  sqcRYGate(q, 0.5409836799988774, 10);
  sqcRZGate(q, 2.3817071344222227, 10);
  sqcRYGate(q, 1.9300897677862654, 11);
  sqcRZGate(q, -1.1228555990363995, 11);
  sqcRYGate(q, -3.140975131399774, 12);
  sqcRZGate(q, -3.067916320232633, 12);
  sqcRYGate(q, 1.5717900887304532, 13);
  sqcRZGate(q, 1.5686693308916082, 13);
  sqcRYGate(q, 1.575403099103288, 14);
  sqcRZGate(q, -1.6177225208945432, 14);
  sqcRYGate(q, 3.1317685303998397, 15);
  sqcRZGate(q, -1.330480550358069, 15);
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
  sqcRYGate(q, 1.5708947802044968, 0);
  sqcRZGate(q, -8.378764330618793e-05, 0);
  sqcRYGate(q, -3.141168229137583, 1);
  sqcRZGate(q, 2.6291393513434556, 1);
  sqcRYGate(q, -0.09711019441811014, 2);
  sqcRZGate(q, -1.56184593161299, 2);
  sqcRYGate(q, 3.141435775474909, 3);
  sqcRZGate(q, -2.301531424517502, 3);
  sqcRYGate(q, 0.0005465253085388665, 4);
  sqcRZGate(q, 2.1613188974019755, 4);
  sqcRYGate(q, -1.5738925888093307, 5);
  sqcRZGate(q, -0.0003392415732218352, 5);
  sqcRYGate(q, 2.106846523216585, 6);
  sqcRZGate(q, -0.31286392475243313, 6);
  sqcRYGate(q, 0.8494400257782136, 7);
  sqcRZGate(q, -2.513504385487768, 7);
  sqcRYGate(q, -0.21130457730739938, 8);
  sqcRZGate(q, 3.126693638300466, 8);
  sqcRYGate(q, 3.1410101830355615, 9);
  sqcRZGate(q, 1.8709926621761763, 9);
  sqcRYGate(q, -3.0899260208057804, 10);
  sqcRZGate(q, 0.7142964557435297, 10);
  sqcRYGate(q, -3.1280741730894586, 11);
  sqcRZGate(q, -2.5281708671487273, 11);
  sqcRYGate(q, 0.00038414039508616327, 12);
  sqcRZGate(q, -2.6008415431964136, 12);
  sqcRYGate(q, -1.5719672802283542, 13);
  sqcRZGate(q, 0.00012749601717327496, 13);
  sqcRYGate(q, -0.9739194427330364, 14);
  sqcRZGate(q, 2.942001536204312, 14);
  sqcRYGate(q, 1.5645580877068426, 15);
  sqcRZGate(q, 3.0798738666269125, 15);
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
  sqcRYGate(q, -1.5231335776267785, 0);
  sqcRZGate(q, -1.26254797597218, 0);
  sqcRYGate(q, -1.5706297047400275, 1);
  sqcRZGate(q, -2.5023033232098437, 1);
  sqcRYGate(q, -1.8676360337635096, 2);
  sqcRZGate(q, -2.832056460242349, 2);
  sqcRYGate(q, -0.0009588934958086112, 3);
  sqcRZGate(q, -2.9578411900981925, 3);
  sqcRYGate(q, -3.1386204674749063, 4);
  sqcRZGate(q, -0.9099483335723146, 4);
  sqcRYGate(q, 1.57100137079461, 5);
  sqcRZGate(q, 1.5189639304984972, 5);
  sqcRYGate(q, 3.0420017811598523, 6);
  sqcRZGate(q, -2.9406315439431165, 6);
  sqcRYGate(q, 9.92138936301466e-05, 7);
  sqcRZGate(q, -2.2508516143067636, 7);
  sqcRYGate(q, -1.5660710985533874, 8);
  sqcRZGate(q, -2.3130096902503614, 8);
  sqcRYGate(q, -3.141495206273875, 9);
  sqcRZGate(q, 1.2578051171143052, 9);
  sqcRYGate(q, 1.6328006129729637, 10);
  sqcRZGate(q, 2.0033087067175503, 10);
  sqcRYGate(q, 0.0007486232062934306, 11);
  sqcRZGate(q, -1.5688809398963937, 11);
  sqcRYGate(q, -0.002911782287835507, 12);
  sqcRZGate(q, -2.748736909738296, 12);
  sqcRYGate(q, 1.5705023406183898, 13);
  sqcRZGate(q, -1.2130181481319793, 13);
  sqcRYGate(q, -3.015589316911835, 14);
  sqcRZGate(q, 0.5936867164924875, 14);
  sqcRYGate(q, 3.141451918123238, 15);
  sqcRZGate(q, -1.2487891664376782, 15);

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
