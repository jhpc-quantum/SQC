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

  sqcRYGate(q, 0.3641557823211006, 0);
  sqcRYGate(q, -0.6635801715164368, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9051351878275944, 0);
  sqcRYGate(q, -2.586820070340257, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1821828857346797, 2);
  sqcRYGate(q, 2.909107671483284, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9377455727656709, 2);
  sqcRYGate(q, 1.9271316889495465, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.26145114147922843, 4);
  sqcRYGate(q, 2.5201362335023965, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8701003856748402, 4);
  sqcRYGate(q, 2.0619201620687306, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.1473622704624855, 6);
  sqcRYGate(q, 1.201056307450827, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0941623889515393, 6);
  sqcRYGate(q, 0.08806914617838328, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.3781635133175083, 8);
  sqcRYGate(q, 2.5603254243905416, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.4351367364407872, 8);
  sqcRYGate(q, 2.073850411459957, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.431768102083283, 10);
  sqcRYGate(q, -2.2857300110680794, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.48635664410561397, 10);
  sqcRYGate(q, 0.8225383592938255, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.3877126543972338, 12);
  sqcRYGate(q, -1.6842001572240406, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.44632712044016287, 12);
  sqcRYGate(q, -1.207387534383911, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.9290030706141527, 14);
  sqcRYGate(q, 1.4521097912773606, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.4548485653866745, 14);
  sqcRYGate(q, -0.8961694278571422, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.130772006293967, 0);
  sqcRYGate(q, 0.5306460129886573, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.014654994429192, 0);
  sqcRYGate(q, -0.002352180385533487, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1925766229255883, 2);
  sqcRYGate(q, -2.588850459173225, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.9840866128032308, 2);
  sqcRYGate(q, -0.09857941316449813, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.4718430144464536, 4);
  sqcRYGate(q, -0.7091511886808268, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.137563889737443, 4);
  sqcRYGate(q, 0.0043444802295257295, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.8709924627471111, 6);
  sqcRYGate(q, 0.29105177370950125, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.31226852041915065, 6);
  sqcRYGate(q, 2.862422171878058, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.065397049079224, 8);
  sqcRYGate(q, -0.3942434384190933, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.057143078631812, 8);
  sqcRYGate(q, -1.862869029784792, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.3640406932671931, 10);
  sqcRYGate(q, -1.446024014077806, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.8008877831443992, 10);
  sqcRYGate(q, 2.416743301444668, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.984526581157339, 12);
  sqcRYGate(q, 0.9792597257748623, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.7628227165153844, 12);
  sqcRYGate(q, 3.049380675953503, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.2570957576879849, 1);
  sqcRYGate(q, 1.5000004320032145, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6790148592118757, 1);
  sqcRYGate(q, 1.171080458669021, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8510979631565765, 3);
  sqcRYGate(q, 0.0418572291677039, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.001962716068718486, 3);
  sqcRYGate(q, 3.1412476582243203, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.6448507931205936, 5);
  sqcRYGate(q, 2.872962131222233, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.34444192385704137, 5);
  sqcRYGate(q, -3.136560660697195, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.030645960472304168, 7);
  sqcRYGate(q, 1.952570643167122, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.0318819907216437, 7);
  sqcRYGate(q, -2.1213302840529877, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.7424740390454856, 9);
  sqcRYGate(q, 0.19193485519431538, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.118803877832304, 9);
  sqcRYGate(q, -0.008249054864483794, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.9489870562035607, 11);
  sqcRYGate(q, 0.397106210368932, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.05158219852243132, 11);
  sqcRYGate(q, 0.08040143161500417, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.732506379166527, 13);
  sqcRYGate(q, 2.1684074837439336, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 3.1414440667397896, 13);
  sqcRYGate(q, 0.003209043108185594, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.9390735778311834, 0);
  sqcRYGate(q, -2.6229542439364204, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4868874224099853, 0);
  sqcRYGate(q, 2.8848564990563177, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9686891268322366, 1);
  sqcRYGate(q, 0.8952496379762517, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.118543612254926, 1);
  sqcRYGate(q, -3.1336397998984493, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.555020002279025, 2);
  sqcRYGate(q, -2.038710472479589, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.1291543947825933, 2);
  sqcRYGate(q, -1.3606967771800929, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.5564786080285478, 3);
  sqcRYGate(q, 0.24107160502368252, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.04215123596776646, 3);
  sqcRYGate(q, 2.706726089325498, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7323754565451732, 4);
  sqcRYGate(q, -1.1638599792177589, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.03805910134953194, 4);
  sqcRYGate(q, 3.0444603621685022, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.9449778871606191, 5);
  sqcRYGate(q, -0.7741078033599725, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.13563066356468, 5);
  sqcRYGate(q, -0.008406647320481337, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2522493159764205, 6);
  sqcRYGate(q, -0.19300168662226413, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 2.0465541351324203, 6);
  sqcRYGate(q, -1.6580008827642612, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 3.113310544076873, 7);
  sqcRYGate(q, 2.612499803346101, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.047587890774678, 7);
  sqcRYGate(q, -0.09528137524379066, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.5537052819813053, 8);
  sqcRYGate(q, 1.59947052477155, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 0.6650098515832942, 8);
  sqcRYGate(q, 0.8942878491767086, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 3.09452966987257, 9);
  sqcRYGate(q, -1.2536427804763786, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.1379139694545373, 9);
  sqcRYGate(q, 3.139899105498039, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.7425265875566964, 10);
  sqcRYGate(q, 0.649703259105595, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -1.3563551382449859, 10);
  sqcRYGate(q, 1.303999927258477, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, 2.796522640666531, 11);
  sqcRYGate(q, 1.5881778371308102, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.1343990475133756, 11);
  sqcRYGate(q, 3.1234244229375987, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.9809728544842908, 12);
  sqcRYGate(q, 1.1255309670973572, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -0.809316024485252, 12);
  sqcRYGate(q, 0.27057536897057943, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, 0.5851331835580886, 13);
  sqcRYGate(q, -0.3941587433212964, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.02958867585058833, 13);
  sqcRYGate(q, 2.9582293470828263, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.3624976945822, 0);
  sqcRYGate(q, 0.5339537707875763, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5500404757943853, 0);
  sqcRYGate(q, -1.3518808114007004, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7494938058678224, 2);
  sqcRYGate(q, -0.2628743318320812, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2569157166325935, 2);
  sqcRYGate(q, 1.4966875060100735, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8815911364773434, 4);
  sqcRYGate(q, 3.1269066258785823, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.32579954652686066, 4);
  sqcRYGate(q, 0.09929418147423075, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.12027126190761585, 6);
  sqcRYGate(q, -2.138376535759135, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5269445416238403, 6);
  sqcRYGate(q, -1.6206338782963368, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5752716634432442, 8);
  sqcRYGate(q, 1.1975672632614103, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.497881644611145, 8);
  sqcRYGate(q, 2.2758726842927524, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.2930970966677613, 10);
  sqcRYGate(q, -2.0670382806571883, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.0406462371920213, 10);
  sqcRYGate(q, 0.8869174316321006, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.29479396510951084, 12);
  sqcRYGate(q, -2.8140969332678596, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.8545311041219836, 12);
  sqcRYGate(q, 1.2637972694189872, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.2369217481583425, 14);
  sqcRYGate(q, 0.3971063280125362, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.2602622051523209, 14);
  sqcRYGate(q, -0.22530125295056672, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.123798068936572, 0);
  sqcRYGate(q, -0.48507267325043113, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.211831779273451, 0);
  sqcRYGate(q, 0.6638073051310984, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0044795991052045, 2);
  sqcRYGate(q, 1.2511308986536633, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.2972038002055341, 2);
  sqcRYGate(q, 0.1364016384755965, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.6105782013872583, 4);
  sqcRYGate(q, -1.7425215681859603, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.0929053945280156, 4);
  sqcRYGate(q, -0.04001414370003195, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.099667321893517, 6);
  sqcRYGate(q, 1.7008883107865336, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.005606141280381394, 6);
  sqcRYGate(q, 3.132164216412279, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.652514255767758, 8);
  sqcRYGate(q, -0.3057470080950782, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.706845855677908, 8);
  sqcRYGate(q, 2.458530635785058, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.077096375292194, 10);
  sqcRYGate(q, 0.42884469929475166, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.011431719005488894, 10);
  sqcRYGate(q, -3.127233204750827, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.4398125575623002, 12);
  sqcRYGate(q, -2.032696068779398, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -3.0921324971771753, 12);
  sqcRYGate(q, 2.8833456784019105, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.2703875607856832, 1);
  sqcRYGate(q, 2.043993315701285, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.137851903628539, 1);
  sqcRYGate(q, -0.5734963773283308, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4502588672623893, 3);
  sqcRYGate(q, -1.399954163758528, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.131120960429869, 3);
  sqcRYGate(q, -0.44094374670857306, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.1266122451002034, 5);
  sqcRYGate(q, -1.9723092518014629, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.08674099037724048, 5);
  sqcRYGate(q, 0.08118476880608669, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.210065375839065, 7);
  sqcRYGate(q, 2.248062893461695, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.9679510436189753, 7);
  sqcRYGate(q, -3.1178291859578944, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.9814527157320043, 9);
  sqcRYGate(q, 2.025040366810396, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.021819840498698007, 9);
  sqcRYGate(q, -3.0886926748957073, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.2465286223102021, 11);
  sqcRYGate(q, 2.8675854616565473, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 3.1393488864703123, 11);
  sqcRYGate(q, -0.0011257137757700875, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.1546284428491154, 13);
  sqcRYGate(q, -2.0442844471106643, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.11607406835403555, 13);
  sqcRYGate(q, 0.20438972578419837, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.5141080627532677, 0);
  sqcRYGate(q, 1.5932788509366045, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8592010911924706, 0);
  sqcRYGate(q, -1.6894012893906876, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.122414761786228, 1);
  sqcRYGate(q, -0.18337977340907613, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.042336689995705, 1);
  sqcRYGate(q, 1.6318533805743094, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2818376282956665, 2);
  sqcRYGate(q, 0.8834211643510068, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 3.108198908227983, 2);
  sqcRYGate(q, -3.1268452736582115, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -3.1170888207314036, 3);
  sqcRYGate(q, 2.819444902203956, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.07057340483625363, 3);
  sqcRYGate(q, 2.032138541991097, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0214013365962873, 4);
  sqcRYGate(q, -2.8917285819525675, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.5622868059560782, 4);
  sqcRYGate(q, -1.6056351979681247, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.941843250130135, 5);
  sqcRYGate(q, 0.3256995045428405, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.016304034673511936, 5);
  sqcRYGate(q, 0.06859710614224682, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6388324658538824, 6);
  sqcRYGate(q, -2.26565379401478, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 0.003729170488278477, 6);
  sqcRYGate(q, -0.004940166091902672, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -1.672920816378326, 7);
  sqcRYGate(q, 2.0541561594006126, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.1413753588113247, 7);
  sqcRYGate(q, 3.1359195637799178, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.2351118609395364, 8);
  sqcRYGate(q, 2.219381970387528, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -0.5371055826005381, 8);
  sqcRYGate(q, -2.365404787416869, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -1.972664387064503, 9);
  sqcRYGate(q, -1.0439351142978266, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.01565126850631949, 9);
  sqcRYGate(q, -3.0936847088137056, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.4566541088775375, 10);
  sqcRYGate(q, 2.9666234186516127, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, 0.030925011178923687, 10);
  sqcRYGate(q, 0.003499197853633371, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -2.195880465527312, 11);
  sqcRYGate(q, 1.8333753109294308, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.926103175801621, 11);
  sqcRYGate(q, -3.060051485438073, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.24918752493438667, 12);
  sqcRYGate(q, -0.9384915702132774, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -0.022346570592812753, 12);
  sqcRYGate(q, -1.803542213583226, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, 0.34309647740452043, 13);
  sqcRYGate(q, 3.1259269738812114, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.1249908425633492, 13);
  sqcRYGate(q, -2.910573521632427, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.1648086206956823, 0);
  sqcRYGate(q, -1.4478393721506941, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7115801390005543, 0);
  sqcRYGate(q, -1.6158939116579027, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9054396551811275, 2);
  sqcRYGate(q, -1.0987619314292134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1688320057011987, 2);
  sqcRYGate(q, 1.189868602254335, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9133548979220207, 4);
  sqcRYGate(q, -0.23426086757746264, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1168585089512537, 4);
  sqcRYGate(q, -0.042770527236139166, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9409364322263253, 6);
  sqcRYGate(q, 2.994807326892507, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.0345170058233646, 6);
  sqcRYGate(q, 3.12953061104315, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.511303349944752, 8);
  sqcRYGate(q, 3.033544127184581, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9837783495978059, 8);
  sqcRYGate(q, -0.30372039573420173, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.076166728233105, 10);
  sqcRYGate(q, -1.6019530861046087, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.0595093601817145, 10);
  sqcRYGate(q, -0.10297195909731895, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.1578556766645134, 12);
  sqcRYGate(q, 1.8510105011608804, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.1367718779479503, 12);
  sqcRYGate(q, 2.341333874880066, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.9371754133550154, 14);
  sqcRYGate(q, 2.387963109350812, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.016740871279422708, 14);
  sqcRYGate(q, 2.7344626771312437, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.9334337989888235, 0);
  sqcRYGate(q, -0.1985073357854652, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.021248751738623284, 0);
  sqcRYGate(q, 0.019302401847265265, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7790729768796822, 2);
  sqcRYGate(q, 0.5177557932586264, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.1375042920645426, 2);
  sqcRYGate(q, -0.004262213108255951, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.5184067268831858, 4);
  sqcRYGate(q, -1.0236451651577276, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.06565554290196207, 4);
  sqcRYGate(q, 0.12732333684875918, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.12171925650706435, 6);
  sqcRYGate(q, -1.3014888408066896, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.0918103354009685, 6);
  sqcRYGate(q, 0.24182251534554683, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.447297060446966, 8);
  sqcRYGate(q, 1.4565271027171844, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.05960322630137855, 8);
  sqcRYGate(q, 0.05388908516755819, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.1587717566124438, 10);
  sqcRYGate(q, -1.728135483066695, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 3.1310617531827174, 10);
  sqcRYGate(q, 7.412684182384055e-05, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.6892518422338774, 12);
  sqcRYGate(q, -2.067157016832418, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -3.133816060837215, 12);
  sqcRYGate(q, 1.7505475405964699, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.3081160319411391, 1);
  sqcRYGate(q, -1.312653759441624, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.002453807156777872, 1);
  sqcRYGate(q, 0.5598883850055136, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7861032854984917, 3);
  sqcRYGate(q, -0.38243643433951213, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.05735488208869999, 3);
  sqcRYGate(q, -0.0008334712624402257, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.27031000366885866, 5);
  sqcRYGate(q, -3.0036001177564984, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.4903744770580838, 5);
  sqcRYGate(q, 0.02840306640429163, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.3268358505487597, 7);
  sqcRYGate(q, -2.2720933463233495, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.1376793879700644, 7);
  sqcRYGate(q, 0.0023945482476488422, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.1882417062355386, 9);
  sqcRYGate(q, 0.6875174754452686, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.0009197132171863132, 9);
  sqcRYGate(q, 3.132159348466216, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.937177194053365, 11);
  sqcRYGate(q, 1.8494092837525722, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.6534015710001517, 11);
  sqcRYGate(q, 3.136886256013086, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 2.790397866775844, 13);
  sqcRYGate(q, -1.3523917623386996, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.6340352601463979, 13);
  sqcRYGate(q, -3.1402462429621636, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.7826373000885717, 0);
  sqcRYGate(q, -2.415181625998539, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.1300693300036193, 0);
  sqcRYGate(q, -2.5904499466307063, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.62526091674339, 1);
  sqcRYGate(q, 0.8511741147029728, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0607238917171884, 1);
  sqcRYGate(q, 3.115629531992732, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1327924486211525, 2);
  sqcRYGate(q, -2.971036611120164, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.005554927367771079, 2);
  sqcRYGate(q, -0.012470308070335001, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 3.1202305101210652, 3);
  sqcRYGate(q, 1.320321304177706, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0015839140632394333, 3);
  sqcRYGate(q, -0.0044358239729890316, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6346408466107913, 4);
  sqcRYGate(q, 1.8986819096421295, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.559457710172289, 4);
  sqcRYGate(q, 1.5969394123325313, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.2209023791734217, 5);
  sqcRYGate(q, -1.5234207718875943, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.068910581144049, 5);
  sqcRYGate(q, 3.132390327996062, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.62300976045064, 6);
  sqcRYGate(q, 1.3911167606050214, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 2.962008278345235, 6);
  sqcRYGate(q, 0.23012356713219195, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 2.0301431603201605, 7);
  sqcRYGate(q, -2.2172099468629387, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.110789441777517, 7);
  sqcRYGate(q, 3.1400871670594444, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.3177783414395594, 8);
  sqcRYGate(q, -1.020871746134726, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 3.141122408732023, 8);
  sqcRYGate(q, 3.138032607820036, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -3.1290561605367126, 9);
  sqcRYGate(q, -2.1138813396198444, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.06251436311763037, 9);
  sqcRYGate(q, -0.030041824693831213, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.0932533330773042, 10);
  sqcRYGate(q, -0.47841857472376004, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, -0.0012379924731122927, 10);
  sqcRYGate(q, -0.0087779505739028, 13);
  sqcCXGate(q, 10, 13);
  sqcRYGate(q, 1.353908224646422, 11);
  sqcRYGate(q, -1.5895771220881016, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.438100794154075, 11);
  sqcRYGate(q, -0.008449284090826126, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.896171221024544, 12);
  sqcRYGate(q, 1.9424778117834016, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -0.012419258194188921, 12);
  sqcRYGate(q, -3.1091310113425963, 15);
  sqcCXGate(q, 12, 15);
  sqcRYGate(q, -1.8728290706488724, 13);
  sqcRYGate(q, -3.099756103511021, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.513674768657696, 13);
  sqcRYGate(q, -3.0587956855596854, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.3183697727635995, 0);
  sqcRYGate(q, -0.2752504719097226, 1);
  sqcRYGate(q, -2.890520714512596, 2);
  sqcRYGate(q, -1.300859374549293, 3);
  sqcRYGate(q, 0.405452045252523, 4);
  sqcRYGate(q, 2.17615186949322, 5);
  sqcRYGate(q, 1.9302464481876342, 6);
  sqcRYGate(q, -2.013998750453782, 7);
  sqcRYGate(q, 2.1708158960126225, 8);
  sqcRYGate(q, 0.4214069837238643, 9);
  sqcRYGate(q, -1.421426490292692, 10);
  sqcRYGate(q, -0.2929763780479568, 11);
  sqcRYGate(q, -0.14623516661794603, 12);
  sqcRYGate(q, -2.5258029324297424, 13);
  sqcRYGate(q, 2.746966050359778, 14);
  sqcRYGate(q, 0.8115848759474825, 15);

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
