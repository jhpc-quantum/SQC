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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 3.113700255266356, 0);
  sqcRZGate(q, -0.8075393535616371, 0);
  sqcRYGate(q, -1.254959377514133, 1);
  sqcRZGate(q, -2.9992688408372348, 1);
  sqcRYGate(q, -1.584259581241373, 2);
  sqcRZGate(q, -3.1320895211304864, 2);
  sqcRYGate(q, -1.563272021940745, 3);
  sqcRZGate(q, -3.13867689065818, 3);
  sqcRYGate(q, 1.5255832115642276, 4);
  sqcRZGate(q, 3.093179928391583, 4);
  sqcRYGate(q, 1.5911362642265212, 5);
  sqcRZGate(q, -3.138244636737221, 5);
  sqcRYGate(q, 3.2515950593014805e-06, 6);
  sqcRZGate(q, -2.662854960700597, 6);
  sqcRYGate(q, -3.1415296726532707, 7);
  sqcRZGate(q, -2.388465001732068, 7);
  sqcRYGate(q, 1.5711730137637145, 8);
  sqcRZGate(q, -0.8544909731972536, 8);
  sqcRYGate(q, 1.5712907341668663, 9);
  sqcRZGate(q, 1.883219253524738, 9);
  sqcRYGate(q, -3.1414958056763, 10);
  sqcRZGate(q, 1.773813716897359, 10);
  sqcRYGate(q, -3.347660898622706e-05, 11);
  sqcRZGate(q, 1.836182391121481, 11);
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
  sqcRYGate(q, -0.034436471260958605, 0);
  sqcRZGate(q, 2.9465157301736404, 0);
  sqcRYGate(q, -0.18180777891660463, 1);
  sqcRZGate(q, -0.14573091215526993, 1);
  sqcRYGate(q, -0.6354337492278952, 2);
  sqcRZGate(q, -0.23692097095989453, 2);
  sqcRYGate(q, 0.6353541940494224, 3);
  sqcRZGate(q, -0.3038147304782923, 3);
  sqcRYGate(q, -1.5779400322851298, 4);
  sqcRZGate(q, 3.1414274374747153, 4);
  sqcRYGate(q, -1.56605171110386, 5);
  sqcRZGate(q, 3.141195710184408, 5);
  sqcRYGate(q, 1.5483782931844379, 6);
  sqcRZGate(q, -0.20281199933213312, 6);
  sqcRYGate(q, 3.12925910052956, 7);
  sqcRZGate(q, -0.9804159516471885, 7);
  sqcRYGate(q, -0.9822796386142197, 8);
  sqcRZGate(q, -1.8859393005288254, 8);
  sqcRYGate(q, 0.9948534018356002, 9);
  sqcRZGate(q, -2.210196805293905, 9);
  sqcRYGate(q, -1.5573369330020634, 10);
  sqcRZGate(q, -3.104693955341347, 10);
  sqcRYGate(q, -1.5620160635778564, 11);
  sqcRZGate(q, -1.250860322705213, 11);
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
  sqcRYGate(q, -3.12883148340747, 0);
  sqcRZGate(q, -1.7631214893121778, 0);
  sqcRYGate(q, 1.7684934135028183, 1);
  sqcRZGate(q, -1.8074114350974608, 1);
  sqcRYGate(q, -3.1331839856816894, 2);
  sqcRZGate(q, -2.276026468431522, 2);
  sqcRYGate(q, -0.020424890571130838, 3);
  sqcRZGate(q, -0.6598667890130193, 3);
  sqcRYGate(q, 1.5706746158575908, 4);
  sqcRZGate(q, -2.3777644476330453, 4);
  sqcRYGate(q, -1.5709311199463383, 5);
  sqcRZGate(q, 1.1601648914884217, 5);
  sqcRYGate(q, 0.00012953502161785444, 6);
  sqcRZGate(q, 1.806979975690598, 6);
  sqcRYGate(q, -3.1414764462628577, 7);
  sqcRZGate(q, 1.8439512686268476, 7);
  sqcRYGate(q, 0.06265378575417153, 8);
  sqcRZGate(q, -2.974595060678805, 8);
  sqcRYGate(q, 3.0505459856763633, 9);
  sqcRZGate(q, -0.715388558432628, 9);
  sqcRYGate(q, 3.100991500715258, 10);
  sqcRZGate(q, 2.313661855055751, 10);
  sqcRYGate(q, 0.0015289623105396038, 11);
  sqcRZGate(q, -2.681691366744064, 11);
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
  sqcRYGate(q, 1.3245151654927207, 0);
  sqcRZGate(q, -0.5028369569698913, 0);
  sqcRYGate(q, 2.13665027234111, 1);
  sqcRZGate(q, -0.18444288681956156, 1);
  sqcRYGate(q, 2.1159133844847386, 2);
  sqcRZGate(q, -1.9056565019314453, 2);
  sqcRYGate(q, -1.1538475284805196, 3);
  sqcRZGate(q, -2.3300385907148167, 3);
  sqcRYGate(q, -3.124401330536311, 4);
  sqcRZGate(q, 0.025412735071739148, 4);
  sqcRYGate(q, -3.073242288592633, 5);
  sqcRZGate(q, 1.1579881428155248, 5);
  sqcRYGate(q, 0.06744150566083118, 6);
  sqcRZGate(q, -1.9210335655373216, 6);
  sqcRYGate(q, -3.141590938657472, 7);
  sqcRZGate(q, -0.26468363024741137, 7);
  sqcRYGate(q, -0.01475481867780992, 8);
  sqcRZGate(q, 2.353222437709109, 8);
  sqcRYGate(q, 2.796772241674405, 9);
  sqcRZGate(q, 1.6364135547325511, 9);
  sqcRYGate(q, -3.139599739182829, 10);
  sqcRZGate(q, -0.7565175857982918, 10);
  sqcRYGate(q, 3.1406090388282633, 11);
  sqcRZGate(q, 1.9932645916248104, 11);
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
  sqcRYGate(q, -2.8221145647759576, 0);
  sqcRZGate(q, -2.639648470180841, 0);
  sqcRYGate(q, -0.7101066317861927, 1);
  sqcRZGate(q, -1.2507149729036113, 1);
  sqcRYGate(q, -3.0318151300011946, 2);
  sqcRZGate(q, 2.6397702627421737, 2);
  sqcRYGate(q, 3.059302181231865, 3);
  sqcRZGate(q, -2.7444602175308948, 3);
  sqcRYGate(q, -0.006540135484318189, 4);
  sqcRZGate(q, -0.979133620860833, 4);
  sqcRYGate(q, 0.00457754204422578, 5);
  sqcRZGate(q, 0.5884589478027783, 5);
  sqcRYGate(q, -1.4814624699409302, 6);
  sqcRZGate(q, 1.0310609217392717, 6);
  sqcRYGate(q, 1.4265236034051982, 7);
  sqcRZGate(q, 2.4258028718127274, 7);
  sqcRYGate(q, -0.039231354800718383, 8);
  sqcRZGate(q, -1.871198042796391, 8);
  sqcRYGate(q, -1.1460988426119323, 9);
  sqcRZGate(q, -1.0930025625999455, 9);
  sqcRYGate(q, -1.0507361839030462, 10);
  sqcRZGate(q, -1.1515761875910167, 10);
  sqcRYGate(q, 0.5203203042248941, 11);
  sqcRZGate(q, 1.4357506167657308, 11);
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
  sqcRYGate(q, -2.610446253468184, 0);
  sqcRZGate(q, -1.1645913529704304, 0);
  sqcRYGate(q, -3.0743686139314645, 1);
  sqcRZGate(q, 2.059759076408942, 1);
  sqcRYGate(q, -3.133789659979382, 2);
  sqcRZGate(q, 0.7856087018864486, 2);
  sqcRYGate(q, -0.06224266177348624, 3);
  sqcRZGate(q, -1.1178959334454595, 3);
  sqcRYGate(q, -0.005153117651073827, 4);
  sqcRZGate(q, 2.9150699774353677, 4);
  sqcRYGate(q, 0.006326973288022151, 5);
  sqcRZGate(q, 1.448374361320929, 5);
  sqcRYGate(q, -3.1400842553975736, 6);
  sqcRZGate(q, -0.23092082729162838, 6);
  sqcRYGate(q, -0.00018353276920047564, 7);
  sqcRZGate(q, 2.4637629550977658, 7);
  sqcRYGate(q, -0.00285869849224607, 8);
  sqcRZGate(q, -0.02857961872305648, 8);
  sqcRYGate(q, 3.1413217716267314, 9);
  sqcRZGate(q, 0.9407778991882214, 9);
  sqcRYGate(q, 3.1415679962613505, 10);
  sqcRZGate(q, 3.066703254692107, 10);
  sqcRYGate(q, -3.141530245468771, 11);
  sqcRZGate(q, 2.1997534493801725, 11);
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
  sqcRYGate(q, 1.1777004831578528, 0);
  sqcRZGate(q, 1.5644786623304254, 0);
  sqcRYGate(q, 0.13369906166425097, 1);
  sqcRZGate(q, 1.45935746639553, 1);
  sqcRYGate(q, 0.3317530376005364, 2);
  sqcRZGate(q, 0.5273343801286482, 2);
  sqcRYGate(q, 0.37609997394395034, 3);
  sqcRZGate(q, 0.3613880477691831, 3);
  sqcRYGate(q, 0.00573768299958921, 4);
  sqcRZGate(q, 1.6321781506848938, 4);
  sqcRYGate(q, -0.0014043515955714757, 5);
  sqcRZGate(q, 0.7649096708872435, 5);
  sqcRYGate(q, 0.30033115749051154, 6);
  sqcRZGate(q, -1.8364777829485148, 6);
  sqcRYGate(q, 0.6854247572856114, 7);
  sqcRZGate(q, -1.8170418806951647, 7);
  sqcRYGate(q, -0.8941163570016908, 8);
  sqcRZGate(q, -1.8420003660648963, 8);
  sqcRYGate(q, -2.4251974073537954, 9);
  sqcRZGate(q, 0.4521371541978709, 9);
  sqcRYGate(q, -2.015854524430349, 10);
  sqcRZGate(q, 0.34954860035050217, 10);
  sqcRYGate(q, -1.1719812061743362, 11);
  sqcRZGate(q, 1.4013779362167655, 11);
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
  sqcRYGate(q, 0.4341199786396013, 0);
  sqcRZGate(q, -0.3158823290801313, 0);
  sqcRYGate(q, -1.027135914403945, 1);
  sqcRZGate(q, 3.1411251140665293, 1);
  sqcRYGate(q, -1.2748022584627638, 2);
  sqcRZGate(q, 1.613592954516761, 2);
  sqcRYGate(q, 1.654489655390995, 3);
  sqcRZGate(q, -0.8082147587036488, 3);
  sqcRYGate(q, 1.5773732947825874, 4);
  sqcRZGate(q, 1.5700531683063457, 4);
  sqcRYGate(q, 1.5799310923363432, 5);
  sqcRZGate(q, -1.2958152205281404, 5);
  sqcRYGate(q, 1.767545124838037, 6);
  sqcRZGate(q, 1.8257523369158042, 6);
  sqcRYGate(q, -1.5470880128606666, 7);
  sqcRZGate(q, 1.4486710635448483, 7);
  sqcRYGate(q, 2.5097853911931995, 8);
  sqcRZGate(q, 1.6417076470898153, 8);
  sqcRYGate(q, -2.555184311686846, 9);
  sqcRZGate(q, 0.2048389493518661, 9);
  sqcRYGate(q, -0.041891289718874125, 10);
  sqcRZGate(q, -0.30571908558196975, 10);
  sqcRYGate(q, 0.9851806328466715, 11);
  sqcRZGate(q, 0.1031149201321675, 11);
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
  sqcRYGate(q, 2.063501666512339, 0);
  sqcRZGate(q, 2.654519086411582, 0);
  sqcRYGate(q, 1.1556750104755442, 1);
  sqcRZGate(q, 3.070375858570015, 1);
  sqcRYGate(q, 3.137551491959807, 2);
  sqcRZGate(q, -1.2322836448332173, 2);
  sqcRYGate(q, 0.005288751866754815, 3);
  sqcRZGate(q, 1.220137555912401, 3);
  sqcRYGate(q, -0.00042954523555049917, 4);
  sqcRZGate(q, -2.9993500144538237, 4);
  sqcRYGate(q, -3.14083068247959, 5);
  sqcRZGate(q, 0.7367215090627743, 5);
  sqcRYGate(q, -0.7819784481106766, 6);
  sqcRZGate(q, -1.180073973290342, 6);
  sqcRYGate(q, 1.5788470457800132, 7);
  sqcRZGate(q, -2.2710137172571545, 7);
  sqcRYGate(q, 3.120957523919577, 8);
  sqcRZGate(q, -1.64969064078031, 8);
  sqcRYGate(q, 3.1396273232140426, 9);
  sqcRZGate(q, -2.7748052100114995, 9);
  sqcRYGate(q, -3.124304925958085, 10);
  sqcRZGate(q, 0.5888265272923633, 10);
  sqcRYGate(q, -0.012075709977886094, 11);
  sqcRZGate(q, 1.5276149254144038, 11);
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
  sqcRYGate(q, 2.2514473923212073, 0);
  sqcRZGate(q, -2.7722192222280735, 0);
  sqcRYGate(q, -2.9433242249719997, 1);
  sqcRZGate(q, 2.4061695180576805, 1);
  sqcRYGate(q, 1.2394081238986185, 2);
  sqcRZGate(q, 1.029322256488022, 2);
  sqcRYGate(q, 1.2151462846317882, 3);
  sqcRZGate(q, 0.7184110673822007, 3);
  sqcRYGate(q, 0.01523646333215023, 4);
  sqcRZGate(q, -1.8428366358395285, 4);
  sqcRYGate(q, 3.133128730248652, 5);
  sqcRZGate(q, -0.8758983420217656, 5);
  sqcRYGate(q, 3.134215263385556, 6);
  sqcRZGate(q, -0.7167530056768583, 6);
  sqcRYGate(q, 0.01042691365531134, 7);
  sqcRZGate(q, 0.6220112748342563, 7);
  sqcRYGate(q, 1.5787584573464324, 8);
  sqcRZGate(q, -9.153346531931561e-05, 8);
  sqcRYGate(q, 1.5627894844698682, 9);
  sqcRZGate(q, 3.141169063187494, 9);
  sqcRYGate(q, -1.8464863975815584, 10);
  sqcRZGate(q, -1.139274603360204, 10);
  sqcRYGate(q, 0.8985723835877674, 11);
  sqcRZGate(q, -1.0949649299378243, 11);
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
  sqcRYGate(q, -0.09037593931607939, 0);
  sqcRZGate(q, 1.3594505054719432, 0);
  sqcRYGate(q, -0.41334976231696796, 1);
  sqcRZGate(q, 0.20042162863607782, 1);
  sqcRYGate(q, 0.13352486970315236, 2);
  sqcRZGate(q, -2.7164062337539323, 2);
  sqcRYGate(q, 0.14334214309316304, 3);
  sqcRZGate(q, -2.744628880662911, 3);
  sqcRYGate(q, -0.05076002617551411, 4);
  sqcRZGate(q, -1.439804363697739, 4);
  sqcRYGate(q, -3.094600847994224, 5);
  sqcRZGate(q, 1.852800278480907, 5);
  sqcRYGate(q, 2.9642667685924473, 6);
  sqcRZGate(q, -1.428112760397051, 6);
  sqcRYGate(q, -1.5537861285186525, 7);
  sqcRZGate(q, 2.725076947269017, 7);
  sqcRYGate(q, 1.5476659003939361, 8);
  sqcRZGate(q, -1.1524547741736164, 8);
  sqcRYGate(q, 1.5679969396100724, 9);
  sqcRZGate(q, 2.1904743982629524, 9);
  sqcRYGate(q, 2.6859116014632924, 10);
  sqcRZGate(q, -1.6464914875268812, 10);
  sqcRYGate(q, -1.9771292536145608, 11);
  sqcRZGate(q, -2.6012819702838197, 11);
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
  sqcRYGate(q, 1.4500723228875678, 0);
  sqcRZGate(q, 0.3885886192539185, 0);
  sqcRYGate(q, -2.3364566028882257, 1);
  sqcRZGate(q, -0.5704249854287672, 1);
  sqcRYGate(q, 2.2555023228560884, 2);
  sqcRZGate(q, -0.35995836687686916, 2);
  sqcRYGate(q, -2.6905454801372843, 3);
  sqcRZGate(q, 0.40849185554721973, 3);
  sqcRYGate(q, -1.0853500503182452, 4);
  sqcRZGate(q, 0.1890207095880383, 4);
  sqcRYGate(q, -2.6350414724268103, 5);
  sqcRZGate(q, -2.088650826190956, 5);
  sqcRYGate(q, -1.5478185807732352, 6);
  sqcRZGate(q, -0.3745075149792438, 6);
  sqcRYGate(q, -3.135585594952449, 7);
  sqcRZGate(q, -2.419556606735964, 7);
  sqcRYGate(q, -0.0018935040372864975, 8);
  sqcRZGate(q, -1.8412407402299493, 8);
  sqcRYGate(q, 0.001901451856216596, 9);
  sqcRZGate(q, -2.668989129111954, 9);
  sqcRYGate(q, -1.5925795385082895, 10);
  sqcRZGate(q, -0.6496232644413891, 10);
  sqcRYGate(q, -0.0737532871768353, 11);
  sqcRZGate(q, 0.5907180832319954, 11);
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
  sqcRYGate(q, -0.24501405381793662, 0);
  sqcRZGate(q, -2.6422030639543195, 0);
  sqcRYGate(q, 0.22692725549846865, 1);
  sqcRZGate(q, 0.3306540920536607, 1);
  sqcRYGate(q, -2.8739654218514636, 2);
  sqcRZGate(q, 1.655188345014345, 2);
  sqcRYGate(q, 2.848693388730959, 3);
  sqcRZGate(q, 1.3903496704571339, 3);
  sqcRYGate(q, 3.078619143121791, 4);
  sqcRZGate(q, -2.134376603678695, 4);
  sqcRYGate(q, 0.013880813258519531, 5);
  sqcRZGate(q, 1.3377906579868661, 5);
  sqcRYGate(q, -2.6794923015862433, 6);
  sqcRZGate(q, -2.985773528912795, 6);
  sqcRYGate(q, -2.7629505600702635, 7);
  sqcRZGate(q, 0.49959080892276836, 7);
  sqcRYGate(q, 0.03505958982178101, 8);
  sqcRZGate(q, 1.9467372899893152, 8);
  sqcRYGate(q, -1.4276726759325555, 9);
  sqcRZGate(q, 1.7785100016916067, 9);
  sqcRYGate(q, -1.3007549500735447, 10);
  sqcRZGate(q, 0.3215642724371374, 10);
  sqcRYGate(q, 2.0896211951179207, 11);
  sqcRZGate(q, 1.513574392779704, 11);
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
  sqcRYGate(q, 0.05681484652351454, 0);
  sqcRZGate(q, 2.8787810076445757, 0);
  sqcRYGate(q, -0.04941281177939061, 1);
  sqcRZGate(q, 1.6524242666112612, 1);
  sqcRYGate(q, 2.1563057591557735, 2);
  sqcRZGate(q, 1.1715372040840757, 2);
  sqcRYGate(q, -1.010128761482135, 3);
  sqcRZGate(q, 2.868193003014128, 3);
  sqcRYGate(q, 0.0006457704863219091, 4);
  sqcRZGate(q, -2.413556518779911, 4);
  sqcRYGate(q, 0.03574436501195229, 5);
  sqcRZGate(q, 2.3474050537236493, 5);
  sqcRYGate(q, 0.0017576871042965792, 6);
  sqcRZGate(q, 2.779365695382662, 6);
  sqcRYGate(q, 3.1393235769677363, 7);
  sqcRZGate(q, -0.5338713215744502, 7);
  sqcRYGate(q, 3.1348800862230473, 8);
  sqcRZGate(q, -1.4718293872116688, 8);
  sqcRYGate(q, -3.1375539996351303, 9);
  sqcRZGate(q, -2.7721979833152237, 9);
  sqcRYGate(q, -1.530333194626981, 10);
  sqcRZGate(q, -0.09183015113728181, 10);
  sqcRYGate(q, 1.6120690372927413, 11);
  sqcRZGate(q, -0.1944021296798161, 11);
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
  sqcRYGate(q, -0.020963921043157363, 0);
  sqcRZGate(q, 0.6164236457722468, 0);
  sqcRYGate(q, -0.01959811528267781, 1);
  sqcRZGate(q, 0.4232512976194309, 1);
  sqcRYGate(q, 1.282600563152624, 2);
  sqcRZGate(q, 0.12665832561680995, 2);
  sqcRYGate(q, 1.6457311958661798, 3);
  sqcRZGate(q, 0.2752580528722923, 3);
  sqcRYGate(q, -2.4929371681932464, 4);
  sqcRZGate(q, -1.444274050342333, 4);
  sqcRYGate(q, -0.9636258055992657, 5);
  sqcRZGate(q, 2.499486724038808, 5);
  sqcRYGate(q, 1.6189780891253247, 6);
  sqcRZGate(q, 0.2902860168220122, 6);
  sqcRYGate(q, -1.7423018452310304, 7);
  sqcRZGate(q, -3.0338176833433965, 7);
  sqcRYGate(q, -0.11221022163987754, 8);
  sqcRZGate(q, 2.3630281368408212, 8);
  sqcRYGate(q, -2.1655781132923053, 9);
  sqcRZGate(q, -0.8728583527630935, 9);
  sqcRYGate(q, 1.4194888510908346, 10);
  sqcRZGate(q, 2.1050456748167363, 10);
  sqcRYGate(q, -1.5520280884261446, 11);
  sqcRZGate(q, -0.09431803109161496, 11);
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
  sqcRYGate(q, -1.7671387177549294, 0);
  sqcRZGate(q, 1.59150526065536, 0);
  sqcRYGate(q, -1.3786211364721277, 1);
  sqcRZGate(q, 1.647301708026426, 1);
  sqcRYGate(q, 1.6054642385858076, 2);
  sqcRZGate(q, 2.077608572505671, 2);
  sqcRYGate(q, -1.6042916095252675, 3);
  sqcRZGate(q, 2.9709790941652967, 3);
  sqcRYGate(q, -0.00039667811449906054, 4);
  sqcRZGate(q, 1.2389949736077241, 4);
  sqcRYGate(q, 3.1414697139369, 5);
  sqcRZGate(q, 2.274281388717627, 5);
  sqcRYGate(q, 3.1360807537054476, 6);
  sqcRZGate(q, 2.110025717656347, 6);
  sqcRYGate(q, -3.1362784369043135, 7);
  sqcRZGate(q, 1.3566455173366454, 7);
  sqcRYGate(q, 3.1402432909027858, 8);
  sqcRZGate(q, -0.5596032931067986, 8);
  sqcRYGate(q, -3.1394370649377494, 9);
  sqcRZGate(q, 0.8392172218422385, 9);
  sqcRYGate(q, 1.5572317997874954, 10);
  sqcRZGate(q, 2.796594382916449, 10);
  sqcRYGate(q, 1.5674471433378816, 11);
  sqcRZGate(q, 0.911939741484823, 11);
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
  sqcRYGate(q, -0.30670558832365646, 0);
  sqcRZGate(q, -1.3815676558752115, 0);
  sqcRYGate(q, 0.5424768152980501, 1);
  sqcRZGate(q, 1.717032253777467, 1);
  sqcRYGate(q, -2.374349159555643, 2);
  sqcRZGate(q, -1.7988639020764934, 2);
  sqcRYGate(q, 0.2592779471299884, 3);
  sqcRZGate(q, -0.43050702382354444, 3);
  sqcRYGate(q, 1.0344470832408976, 4);
  sqcRZGate(q, -0.3140050897875143, 4);
  sqcRYGate(q, 0.7230982083263993, 5);
  sqcRZGate(q, -0.2466526538429406, 5);
  sqcRYGate(q, 1.5831635844859262, 6);
  sqcRZGate(q, -3.113239791301644, 6);
  sqcRYGate(q, 0.27461683903411416, 7);
  sqcRZGate(q, 0.24537748759908845, 7);
  sqcRYGate(q, 0.21359038428369992, 8);
  sqcRZGate(q, 0.5248402638211456, 8);
  sqcRYGate(q, 1.7080926887340293, 9);
  sqcRZGate(q, 2.6432628869799686, 9);
  sqcRYGate(q, -0.05877461852840593, 10);
  sqcRZGate(q, -2.952793006009046, 10);
  sqcRYGate(q, 3.079993914402613, 11);
  sqcRZGate(q, -2.408300186976798, 11);

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
