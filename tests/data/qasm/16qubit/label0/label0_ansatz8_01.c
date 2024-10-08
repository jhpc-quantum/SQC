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

  sqcRYGate(q, -0.19463945320781306, 0);
  sqcRYGate(q, -0.05496341977043698, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7361152955143533, 0);
  sqcRYGate(q, -2.8618473551184347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7032877213037054, 2);
  sqcRYGate(q, -0.1691396523559888, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8975828517445795, 2);
  sqcRYGate(q, 1.5693913921752198, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.05337468269115231, 4);
  sqcRYGate(q, -1.6780669275675288, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.1933750471111848, 4);
  sqcRYGate(q, -2.9950240950635636, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.434008663131368, 6);
  sqcRYGate(q, -1.2284396871753511, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4836371990193182, 6);
  sqcRYGate(q, 2.766801286033346, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.316864419358562, 8);
  sqcRYGate(q, 2.830019622372303, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.102101038487606, 8);
  sqcRYGate(q, -1.0567991837474746, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8736921683180308, 10);
  sqcRYGate(q, -0.6265038118849269, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.5014678844968223, 10);
  sqcRYGate(q, 0.8923259790939996, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.61795652356373, 12);
  sqcRYGate(q, -0.6938981411266676, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.816854283106336, 12);
  sqcRYGate(q, 0.8469835273089718, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.0985843199404863, 14);
  sqcRYGate(q, -2.359465605902769, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.430298306520893, 14);
  sqcRYGate(q, -0.7970829622060964, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.0348993475123014, 0);
  sqcRYGate(q, -2.2172304386843473, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8200450870467986, 0);
  sqcRYGate(q, 2.779871286792545, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7938966862814771, 2);
  sqcRYGate(q, -1.7114458767641842, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.15481358897004238, 2);
  sqcRYGate(q, -5.9011782520007743e-05, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.44434529589056027, 4);
  sqcRYGate(q, 2.990097077470929, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.7326288766752924, 4);
  sqcRYGate(q, 2.7238741711795647, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.4849187953236578, 6);
  sqcRYGate(q, 2.8514991256875932, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.0020005252473218604, 6);
  sqcRYGate(q, -3.1273585585946857, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.2856844959957181, 8);
  sqcRYGate(q, -1.0524034852216069, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 3.1396597258486794, 8);
  sqcRYGate(q, 0.00030132826165285564, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 3.0164677416135395, 10);
  sqcRYGate(q, -1.8536336837288743, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.5053766173897518, 10);
  sqcRYGate(q, -2.6420471544351734, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.10081465081841401, 12);
  sqcRYGate(q, -1.7045986980931884, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.19535010444202425, 12);
  sqcRYGate(q, -2.583838122000138, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.695641275169376, 1);
  sqcRYGate(q, -0.8846100641221133, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5066310667817593, 1);
  sqcRYGate(q, -2.2524311042294367, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8474457801577675, 3);
  sqcRYGate(q, 3.1017117020164244, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.0366519218328483, 3);
  sqcRYGate(q, 3.1411902542838046, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.999759418559239, 5);
  sqcRYGate(q, 2.8249054180590516, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.6611657333471435, 5);
  sqcRYGate(q, -0.5392546952591948, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.12614558678154086, 7);
  sqcRYGate(q, -0.7077563012742079, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.1174559426290864, 7);
  sqcRYGate(q, -3.101095731188225, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.256460681069499, 9);
  sqcRYGate(q, 1.047453873104746, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.141154098388478, 9);
  sqcRYGate(q, -0.00012350160021057377, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.1196452784505366, 11);
  sqcRYGate(q, -2.0014376497520754, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.5363836363726993, 11);
  sqcRYGate(q, 0.7438261598125501, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.4077930436285602, 13);
  sqcRYGate(q, -3.0863639584431595, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.16355205568969744, 13);
  sqcRYGate(q, -1.345842942290961, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -2.9900746391267883, 0);
  sqcRYGate(q, -2.7509180598392353, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0280268421300445, 0);
  sqcRYGate(q, -1.920854335882991, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.43731784673814056, 2);
  sqcRYGate(q, -3.015688324646323, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4413525705661299, 2);
  sqcRYGate(q, 0.21053682342954597, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8465785483902808, 4);
  sqcRYGate(q, 2.013740599011573, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5489699603436679, 4);
  sqcRYGate(q, -0.34177379068941693, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5465443589224317, 6);
  sqcRYGate(q, -3.0337131577785406, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.065743848717071, 6);
  sqcRYGate(q, 2.784190739986767, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2103255354479112, 8);
  sqcRYGate(q, -2.3776104293040907, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.20449361654931, 8);
  sqcRYGate(q, -0.5255390809791889, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.826497148584603, 10);
  sqcRYGate(q, -1.0726614750191623, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.8059189726471505, 10);
  sqcRYGate(q, -1.4552170656261856, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.969825027509655, 12);
  sqcRYGate(q, 0.7517394335672504, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.8734021159667347, 12);
  sqcRYGate(q, 1.937271393936193, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.3891078064246924, 14);
  sqcRYGate(q, -2.1023699740097395, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.1055319556468275, 14);
  sqcRYGate(q, 0.41257834445510183, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.094453917987883, 0);
  sqcRYGate(q, -1.6626848981797757, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9395572782837998, 0);
  sqcRYGate(q, -1.1725297981560117, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.43215542324700884, 2);
  sqcRYGate(q, -1.9544992595679185, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.14144183570863, 2);
  sqcRYGate(q, 3.141542439727823, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.3670282539758807, 4);
  sqcRYGate(q, -1.9670857713359728, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.12581420409429717, 4);
  sqcRYGate(q, 2.2356064377027236, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.16221090314228864, 6);
  sqcRYGate(q, 2.031213904830846, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.1409106145923786, 6);
  sqcRYGate(q, -0.023577368469858587, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.0833309259247854, 8);
  sqcRYGate(q, -1.594583699191138, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.8147297647045169, 8);
  sqcRYGate(q, -0.5726738556746565, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.4015955705900174, 10);
  sqcRYGate(q, -2.141561413927643, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.0622892549399916, 10);
  sqcRYGate(q, 2.9946167268433315, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.2324169358706358, 12);
  sqcRYGate(q, -1.0060826766519666, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.8147532649881817, 12);
  sqcRYGate(q, -0.0002941889949870103, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.120884971959486, 1);
  sqcRYGate(q, -1.9895334823828124, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5732371741015923, 1);
  sqcRYGate(q, -2.3799133435564626, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.691591353933422, 3);
  sqcRYGate(q, 2.8773347796964974, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.0031723974004768027, 3);
  sqcRYGate(q, 3.1385500825035764, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.92708535846987, 5);
  sqcRYGate(q, -1.7136372725953226, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.017684128178063, 5);
  sqcRYGate(q, 0.10987864257099475, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.7349226084426208, 7);
  sqcRYGate(q, 2.5669202678634235, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.1167292433090497, 7);
  sqcRYGate(q, 3.1222408175463165, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.450031165355715, 9);
  sqcRYGate(q, -2.7080482323481205, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.1764683566540395, 9);
  sqcRYGate(q, -3.1296340280601296, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.884579175029265, 11);
  sqcRYGate(q, -0.7226053935167865, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -2.5961024912397, 11);
  sqcRYGate(q, 2.7369391200251636, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.8708131320613918, 13);
  sqcRYGate(q, 1.6228774969334532, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.4731122604592524, 13);
  sqcRYGate(q, 1.1210782058451674, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.8507630717963632, 0);
  sqcRYGate(q, -1.4925478013367581, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.05963714054968605, 0);
  sqcRYGate(q, 1.873747160021697, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5469818474380206, 2);
  sqcRYGate(q, -1.2065498553008345, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0980934124036965, 2);
  sqcRYGate(q, 2.9666600645480794, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8843053576216513, 4);
  sqcRYGate(q, 2.205670483325643, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4235663889677516, 4);
  sqcRYGate(q, -1.7716306103104724, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2699018977149258, 6);
  sqcRYGate(q, 2.054482309596768, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.695114812322408, 6);
  sqcRYGate(q, -0.3919827644805541, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3561892775662363, 8);
  sqcRYGate(q, 1.8702576127815949, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.413967872236264, 8);
  sqcRYGate(q, -1.4571164052134353, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.530887518176061, 10);
  sqcRYGate(q, -0.4087979473271897, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.132901433720049, 10);
  sqcRYGate(q, 3.1381513837385824, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.503892325924714, 12);
  sqcRYGate(q, 2.359755127095276, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.009385631619336893, 12);
  sqcRYGate(q, -2.814916355341428, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.9390015059771368, 14);
  sqcRYGate(q, 0.00602642738179715, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.0192849283419454, 14);
  sqcRYGate(q, -2.5434239026113628, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.5654503563262994, 0);
  sqcRYGate(q, -1.9506703910305556, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.775159370223438, 0);
  sqcRYGate(q, 0.8631841145138138, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1311692744531493, 2);
  sqcRYGate(q, -0.5601366608960396, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.141585584050173, 2);
  sqcRYGate(q, -3.139750029346877, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.36876758553987, 4);
  sqcRYGate(q, 2.2179561845254567, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.06370714045942538, 4);
  sqcRYGate(q, -0.16333709171065514, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.0979028578316479, 6);
  sqcRYGate(q, -0.8438101472429826, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.0836814807591404, 6);
  sqcRYGate(q, -2.819337213682996, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.9233800646427176, 8);
  sqcRYGate(q, -0.39067776591943415, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.000349518659491288, 8);
  sqcRYGate(q, -0.006854229636273246, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.1070394088093423, 10);
  sqcRYGate(q, 2.6057455152353337, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.0674054053449886, 10);
  sqcRYGate(q, 0.2746727557441995, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.6201668900815394, 12);
  sqcRYGate(q, 3.042920521042614, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.15035032951150745, 12);
  sqcRYGate(q, 0.2002108776957516, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.8114889926032722, 1);
  sqcRYGate(q, -0.7962959094897766, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2028963384128959, 1);
  sqcRYGate(q, -0.10495906207195649, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6561084196980347, 3);
  sqcRYGate(q, 2.222631733250462, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.271942290813258, 3);
  sqcRYGate(q, -0.0007131345300244446, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.7176527582763894, 5);
  sqcRYGate(q, -2.2728210269104645, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.8935015426065736, 5);
  sqcRYGate(q, -3.1407941218721476, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.4166275220392242, 7);
  sqcRYGate(q, 2.8613207064414468, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.003513134686801145, 7);
  sqcRYGate(q, -3.1185868039397775, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.10705049910558, 9);
  sqcRYGate(q, 1.3587132847430103, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.140828466447846, 9);
  sqcRYGate(q, -0.0024609143923373152, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.0977824663274882, 11);
  sqcRYGate(q, -1.178743846261673, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.5523040753322446, 11);
  sqcRYGate(q, 1.5525334298735733, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.5674500936419031, 13);
  sqcRYGate(q, 2.190218448947709, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 1.5699082081252431, 13);
  sqcRYGate(q, -1.5884829885758611, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.4218686049402836, 0);
  sqcRYGate(q, -0.1318896475856013, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6637768089970424, 0);
  sqcRYGate(q, 1.177225712067103, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.24065929741582348, 2);
  sqcRYGate(q, -0.52330027598516, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3292673552687324, 2);
  sqcRYGate(q, -2.490736707860409, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5491060572965467, 4);
  sqcRYGate(q, 0.07539940151059721, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.09741313278375956, 4);
  sqcRYGate(q, 1.9472276708139082, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.724226602793425, 6);
  sqcRYGate(q, 3.0311177980502153, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.506008570650704, 6);
  sqcRYGate(q, -1.543080568551079, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.245182548765131, 8);
  sqcRYGate(q, -1.4773413819095582, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.9911570492396184, 8);
  sqcRYGate(q, -3.13937845289945, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.6573452263827706, 10);
  sqcRYGate(q, -2.6869302556233885, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.085783351779827, 10);
  sqcRYGate(q, -2.899287627508306, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.0973102092228855, 12);
  sqcRYGate(q, -0.5830938861242538, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.18461265366381063, 12);
  sqcRYGate(q, 0.20579696215414142, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.0125358388916736, 14);
  sqcRYGate(q, 2.1829490609919247, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.3704773566332822, 14);
  sqcRYGate(q, 0.012874255338847009, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.9303025512245797, 0);
  sqcRYGate(q, -1.6679216183852918, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2734409797277497, 0);
  sqcRYGate(q, 0.2597853614609722, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5652118233991672, 2);
  sqcRYGate(q, 1.6472951747762545, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.07982085360055448, 2);
  sqcRYGate(q, -0.06305551381551666, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.29225053444796156, 4);
  sqcRYGate(q, 2.0606962835043423, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.0016704880070981531, 4);
  sqcRYGate(q, 8.568652563312185e-05, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.7533118156058056, 6);
  sqcRYGate(q, 2.1618063468000996, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.05849341352744642, 6);
  sqcRYGate(q, 3.0203077587935296, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.7747716088449605, 8);
  sqcRYGate(q, 1.7705800964593683, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.112076629189482, 8);
  sqcRYGate(q, 0.03690265859161153, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.6348553819690974, 10);
  sqcRYGate(q, -0.5673016133227673, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.0011421398650059364, 10);
  sqcRYGate(q, 3.1409010905001757, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.4877844199457578, 12);
  sqcRYGate(q, 0.13118004793676263, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.008969344368202847, 12);
  sqcRYGate(q, 2.7542667289337066, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.9441088277829408, 1);
  sqcRYGate(q, -0.010803814645998713, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.918814740526645, 1);
  sqcRYGate(q, -0.1102494985436789, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7500602549330417, 3);
  sqcRYGate(q, -0.548956635777508, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.0379987572836038, 3);
  sqcRYGate(q, -3.101055798256395, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.5720172098983465, 5);
  sqcRYGate(q, -0.51487480533447, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.122751578520531, 5);
  sqcRYGate(q, 3.1137533038936915, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.2352344512240707, 7);
  sqcRYGate(q, 2.8158767475126787, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.07177124764631325, 7);
  sqcRYGate(q, 3.141061698603751, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.563171042171871, 9);
  sqcRYGate(q, 2.1791625496776814, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.0735691203410256, 9);
  sqcRYGate(q, 3.035201447193161, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.6932679864024909, 11);
  sqcRYGate(q, 1.119854758584226, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.02877160996544214, 11);
  sqcRYGate(q, 3.0507154707718773, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.4383611689277336, 13);
  sqcRYGate(q, -2.049041243028252, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 3.061650538078156, 13);
  sqcRYGate(q, 2.9606098060868633, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.8676695488254978, 0);
  sqcRYGate(q, -3.0557397979466323, 1);
  sqcRYGate(q, -0.001968099707089373, 2);
  sqcRYGate(q, -0.18185017508060278, 3);
  sqcRYGate(q, -1.892159084508303, 4);
  sqcRYGate(q, -0.030832253875956898, 5);
  sqcRYGate(q, -3.1056408650817406, 6);
  sqcRYGate(q, 2.2767057832564475, 7);
  sqcRYGate(q, 3.109307537733075, 8);
  sqcRYGate(q, -0.0026043603892579197, 9);
  sqcRYGate(q, -0.010397467611021484, 10);
  sqcRYGate(q, -0.03732303277411386, 11);
  sqcRYGate(q, 2.9906940138265354, 12);
  sqcRYGate(q, -3.1001454830681245, 13);
  sqcRYGate(q, 2.4627225342409487, 14);
  sqcRYGate(q, -1.4718787548124155, 15);

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
