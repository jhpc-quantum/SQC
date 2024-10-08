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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 1.8377170607525262, 0);
  sqcRZGate(q, 1.159777131677731, 0);
  sqcRYGate(q, -0.22147652543820676, 1);
  sqcRZGate(q, -0.535008115668404, 1);
  sqcRYGate(q, -1.5983033375517242, 2);
  sqcRZGate(q, 2.2018265280830347, 2);
  sqcRYGate(q, 3.1409564440854654, 3);
  sqcRZGate(q, -3.099074575405015, 3);
  sqcRYGate(q, 0.8540691010865817, 4);
  sqcRZGate(q, -2.973229949600886, 4);
  sqcRYGate(q, 3.141571474108862, 5);
  sqcRZGate(q, 0.869021417294978, 5);
  sqcRYGate(q, -2.2308680322884955, 6);
  sqcRZGate(q, -2.9797608731941834, 6);
  sqcRYGate(q, -4.826081396647197e-05, 7);
  sqcRZGate(q, 1.6409772946844319, 7);
  sqcRYGate(q, -2.3689072373916376, 8);
  sqcRZGate(q, -0.13111964092676565, 8);
  sqcRYGate(q, 3.1411416946335824, 9);
  sqcRZGate(q, -2.886335785579556, 9);
  sqcRYGate(q, -0.019198414015452712, 10);
  sqcRZGate(q, -0.39564638833701776, 10);
  sqcRYGate(q, 0.0016938922846083668, 11);
  sqcRZGate(q, 3.0487086349663293, 11);
  sqcRYGate(q, -2.346364459409329, 12);
  sqcRZGate(q, 2.9951790839883463, 12);
  sqcRYGate(q, -2.3718008140999665, 13);
  sqcRZGate(q, 3.14141131242944, 13);
  sqcRYGate(q, -1.570881194699235, 14);
  sqcRZGate(q, -1.784104200908132e-05, 14);
  sqcRYGate(q, 1.570822178696477, 15);
  sqcRZGate(q, -1.6058928615737997, 15);
  sqcRYGate(q, -1.5710169606119102, 16);
  sqcRZGate(q, -2.614208818001898, 16);
  sqcRYGate(q, 1.5822844582104771, 17);
  sqcRZGate(q, 1.5708749664294792, 17);
  sqcRYGate(q, 0.001308445679396364, 18);
  sqcRZGate(q, -0.4999205500890547, 18);
  sqcRYGate(q, 0.1912933795999887, 19);
  sqcRZGate(q, 1.429932563167343, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.277303411272036, 0);
  sqcRZGate(q, -0.2643584018973612, 0);
  sqcRYGate(q, 0.9090082836591513, 1);
  sqcRZGate(q, 0.004399784412688799, 1);
  sqcRYGate(q, -3.094040622462689, 2);
  sqcRZGate(q, -2.5887532140114433, 2);
  sqcRYGate(q, -1.5707641114798205, 3);
  sqcRZGate(q, 1.580311686087474, 3);
  sqcRYGate(q, -0.025442103871002465, 4);
  sqcRZGate(q, 2.9768003714717914, 4);
  sqcRYGate(q, 1.5708358376817093, 5);
  sqcRZGate(q, -1.570858273546924, 5);
  sqcRYGate(q, -2.474395428467411, 6);
  sqcRZGate(q, -1.469820822970746, 6);
  sqcRYGate(q, 1.5707861776089544, 7);
  sqcRZGate(q, -1.3916373117410954, 7);
  sqcRYGate(q, 2.3372558993545716, 8);
  sqcRZGate(q, 1.7044275825661566, 8);
  sqcRYGate(q, 1.571153985162935, 9);
  sqcRZGate(q, -1.5707232145413625, 9);
  sqcRYGate(q, 0.0431396137548323, 10);
  sqcRZGate(q, 0.10762783279703428, 10);
  sqcRYGate(q, -1.5704448690379147, 11);
  sqcRZGate(q, -1.960906927103486, 11);
  sqcRYGate(q, 2.9945976220582233, 12);
  sqcRZGate(q, 2.989361586683836, 12);
  sqcRYGate(q, 1.570891037324147, 13);
  sqcRZGate(q, 1.059482805810708, 13);
  sqcRYGate(q, 1.5709301262742228, 14);
  sqcRZGate(q, -1.5705868018303921, 14);
  sqcRYGate(q, -0.05474962019671725, 15);
  sqcRZGate(q, -3.113686610057069, 15);
  sqcRYGate(q, 2.148024681755814, 16);
  sqcRZGate(q, -1.7368313877858252, 16);
  sqcRYGate(q, 1.0344921491398216, 17);
  sqcRZGate(q, 0.0005116403548447717, 17);
  sqcRYGate(q, 2.8915971094924435, 18);
  sqcRZGate(q, 0.03984724081787474, 18);
  sqcRYGate(q, 0.4876684232795825, 19);
  sqcRZGate(q, 2.8609504432346022, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 3.119904129565809, 0);
  sqcRZGate(q, 1.1985118554875038, 0);
  sqcRYGate(q, 1.7687383308313533, 1);
  sqcRZGate(q, 1.8293610198725945, 1);
  sqcRYGate(q, -1.5708585391630434, 2);
  sqcRZGate(q, -2.949471950107963, 2);
  sqcRYGate(q, -0.06397323311899594, 3);
  sqcRZGate(q, 1.5613588267519838, 3);
  sqcRYGate(q, -1.5705765976778305, 4);
  sqcRZGate(q, 1.757993775251678, 4);
  sqcRYGate(q, 1.0461561528533352, 5);
  sqcRZGate(q, -3.141544908567554, 5);
  sqcRYGate(q, -1.5704777035804405, 6);
  sqcRZGate(q, -2.861348701026047, 6);
  sqcRYGate(q, 0.0005094010780412622, 7);
  sqcRZGate(q, -0.17913178474473923, 7);
  sqcRYGate(q, -1.1251788389676411, 8);
  sqcRZGate(q, -2.1764663734661234, 8);
  sqcRYGate(q, -1.8045953525103602, 9);
  sqcRZGate(q, -3.1412995342010404, 9);
  sqcRYGate(q, 0.626579543403559, 10);
  sqcRZGate(q, -1.5714190007989812, 10);
  sqcRYGate(q, -3.136472633239288, 11);
  sqcRZGate(q, -0.3899045034263988, 11);
  sqcRYGate(q, 1.57063613985532, 12);
  sqcRZGate(q, 0.020021096332091683, 12);
  sqcRYGate(q, 3.140731456092306, 13);
  sqcRZGate(q, 1.0591462114343946, 13);
  sqcRYGate(q, -1.570573907043756, 14);
  sqcRZGate(q, 1.5327348844018225, 14);
  sqcRYGate(q, -2.4370799423543112, 15);
  sqcRZGate(q, 1.61772663489059, 15);
  sqcRYGate(q, -3.116641092589997, 16);
  sqcRZGate(q, -0.16508874049769268, 16);
  sqcRYGate(q, 1.5706507468120672, 17);
  sqcRZGate(q, -1.1451349990245654, 17);
  sqcRYGate(q, -3.136571817567937, 18);
  sqcRZGate(q, 1.2735936497525353, 18);
  sqcRYGate(q, -0.0013582783054416488, 19);
  sqcRZGate(q, -1.5110148887628392, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.6955708927766535, 0);
  sqcRZGate(q, -2.733161206750533, 0);
  sqcRYGate(q, -3.141421394085053, 1);
  sqcRZGate(q, -0.21473388341516433, 1);
  sqcRYGate(q, 1.5003888077328833, 2);
  sqcRZGate(q, -1.5845286827580134, 2);
  sqcRYGate(q, -0.7480379169377622, 3);
  sqcRZGate(q, 1.583113973679279, 3);
  sqcRYGate(q, -3.1363600228545816, 4);
  sqcRZGate(q, 1.7412382401809798, 4);
  sqcRYGate(q, 1.570905119020166, 5);
  sqcRZGate(q, -0.624246357408826, 5);
  sqcRYGate(q, -3.139319360521586, 6);
  sqcRZGate(q, 1.8506301184274268, 6);
  sqcRYGate(q, 0.8770924833891378, 7);
  sqcRZGate(q, -3.139300033643936, 7);
  sqcRYGate(q, -1.5720551150781374, 8);
  sqcRZGate(q, -0.015118188877264654, 8);
  sqcRYGate(q, 1.5708302645117256, 9);
  sqcRZGate(q, 0.4143592526204997, 9);
  sqcRYGate(q, -1.5752336172789512, 10);
  sqcRZGate(q, 3.130809159764173, 10);
  sqcRYGate(q, -1.9065145317914836, 11);
  sqcRZGate(q, -0.00036549105619609884, 11);
  sqcRYGate(q, -1.6863179475165548, 12);
  sqcRZGate(q, 3.1340599668542115, 12);
  sqcRYGate(q, 1.5699030877464282, 13);
  sqcRZGate(q, -2.1888592804369553, 13);
  sqcRYGate(q, -1.570811195719239, 14);
  sqcRZGate(q, 0.12948799897525287, 14);
  sqcRYGate(q, -3.120009575856212, 15);
  sqcRZGate(q, 0.04811785403717965, 15);
  sqcRYGate(q, 1.570720712355267, 16);
  sqcRZGate(q, -7.011458859793116e-06, 16);
  sqcRYGate(q, -3.12032143318509, 17);
  sqcRZGate(q, 0.405254552765558, 17);
  sqcRYGate(q, -0.37932263528978005, 18);
  sqcRZGate(q, 1.8873744452631152, 18);
  sqcRYGate(q, 1.4737796655823754, 19);
  sqcRZGate(q, -2.628222945239366, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.6887434770218106, 0);
  sqcRZGate(q, 0.9567642483774463, 0);
  sqcRYGate(q, -3.1409443221340014, 1);
  sqcRZGate(q, 2.736187418871844, 1);
  sqcRYGate(q, -1.7085059209318674, 2);
  sqcRZGate(q, -3.1415015597772427, 2);
  sqcRYGate(q, 0.006130737989516355, 3);
  sqcRZGate(q, 1.5586690142795199, 3);
  sqcRYGate(q, 1.8192880652129322, 4);
  sqcRZGate(q, 0.81743819058552, 4);
  sqcRYGate(q, -0.007559388584250921, 5);
  sqcRZGate(q, 0.6256370435429853, 5);
  sqcRYGate(q, 1.576569676484108, 6);
  sqcRZGate(q, -3.016292111618421, 6);
  sqcRYGate(q, 1.0518073733378381, 7);
  sqcRZGate(q, -0.004862056854293861, 7);
  sqcRYGate(q, 1.5666415496593737, 8);
  sqcRZGate(q, 2.323021397149309, 8);
  sqcRYGate(q, 0.0039165728539654054, 9);
  sqcRZGate(q, 2.716126557579507, 9);
  sqcRYGate(q, 1.1723034276956288, 10);
  sqcRZGate(q, 3.1396712820922414, 10);
  sqcRYGate(q, -1.7809128887656636, 11);
  sqcRZGate(q, -3.1414836955274668, 11);
  sqcRYGate(q, -2.6465637799522983, 12);
  sqcRZGate(q, 1.355976547579921, 12);
  sqcRYGate(q, 0.00317851203352415, 13);
  sqcRZGate(q, -0.7463447981326576, 13);
  sqcRYGate(q, -3.1414485963592043, 14);
  sqcRZGate(q, -1.4413033687864512, 14);
  sqcRYGate(q, -1.5703933632946265, 15);
  sqcRZGate(q, 0.44343386964491943, 15);
  sqcRYGate(q, -1.59525598696551, 16);
  sqcRZGate(q, 1.569189589742873, 16);
  sqcRYGate(q, -0.019796584153835894, 17);
  sqcRZGate(q, 1.5974823477784792, 17);
  sqcRYGate(q, -1.0335462979955294, 18);
  sqcRZGate(q, 3.138884906257037, 18);
  sqcRYGate(q, -0.0019849156507660832, 19);
  sqcRZGate(q, -1.5467355195496795, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.6047362833066554, 0);
  sqcRZGate(q, 1.9283977922378985, 0);
  sqcRYGate(q, -0.00010656154740887066, 1);
  sqcRZGate(q, 0.0837754240884161, 1);
  sqcRYGate(q, 1.7624229408286238, 2);
  sqcRZGate(q, 1.5286761804533737, 2);
  sqcRYGate(q, -2.7993828313201785, 3);
  sqcRZGate(q, 1.5708627452708575, 3);
  sqcRYGate(q, -3.1356384832496356, 4);
  sqcRZGate(q, 2.396676080685299, 4);
  sqcRYGate(q, 3.085125714995838, 5);
  sqcRZGate(q, 1.5722267587716807, 5);
  sqcRYGate(q, -3.0799946759376726, 6);
  sqcRZGate(q, 0.18506791781555987, 6);
  sqcRYGate(q, -0.010108036248053232, 7);
  sqcRZGate(q, 1.5745744170259544, 7);
  sqcRYGate(q, -0.00040976026849293135, 8);
  sqcRZGate(q, 2.144105623168366, 8);
  sqcRYGate(q, -0.027520514735043022, 9);
  sqcRZGate(q, -1.559672065826202, 9);
  sqcRYGate(q, 3.1198189192829093, 10);
  sqcRZGate(q, -1.5487020913779637, 10);
  sqcRYGate(q, 2.5856736699753946, 11);
  sqcRZGate(q, -1.5707212256534768, 11);
  sqcRYGate(q, 3.0959408371523054, 12);
  sqcRZGate(q, -0.2117920243981717, 12);
  sqcRYGate(q, 3.140127852751874, 13);
  sqcRZGate(q, 1.7771462308373922, 13);
  sqcRYGate(q, -1.5705993929554714, 14);
  sqcRZGate(q, 1.5706321102715872, 14);
  sqcRYGate(q, -0.0004561124300520357, 15);
  sqcRZGate(q, 1.7821419491789423, 15);
  sqcRYGate(q, 1.5707592931128977, 16);
  sqcRZGate(q, -1.5707757240636502, 16);
  sqcRYGate(q, -1.5705532806636757, 17);
  sqcRZGate(q, -1.5705537998817252, 17);
  sqcRYGate(q, 1.6937435876375517, 18);
  sqcRZGate(q, -1.578112052984357, 18);
  sqcRYGate(q, 1.5697672750836453, 19);
  sqcRZGate(q, 1.5786431265517393, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.3356213333760465, 0);
  sqcRZGate(q, -1.015574911288824, 0);
  sqcRYGate(q, -3.1414948982159836, 1);
  sqcRZGate(q, 2.582765990038529, 1);
  sqcRYGate(q, 1.5581380245776453, 2);
  sqcRZGate(q, 2.5781027211211973, 2);
  sqcRYGate(q, -1.5718210293442185, 3);
  sqcRZGate(q, 0.8500061937289898, 3);
  sqcRYGate(q, -1.581607351666594, 4);
  sqcRZGate(q, -1.521331819218151, 4);
  sqcRYGate(q, -1.5664279624042692, 5);
  sqcRZGate(q, -1.7317663516072823, 5);
  sqcRYGate(q, 3.135772863125759, 6);
  sqcRZGate(q, -1.4391476171475595, 6);
  sqcRYGate(q, 1.5727235176859713, 7);
  sqcRZGate(q, 0.36987002948886877, 7);
  sqcRYGate(q, -0.017169468436284422, 8);
  sqcRZGate(q, -0.3171759519732313, 8);
  sqcRYGate(q, 1.5723832478928201, 9);
  sqcRZGate(q, -2.2884526652024495, 9);
  sqcRYGate(q, 1.5893927664734857, 10);
  sqcRZGate(q, -0.007300318053537495, 10);
  sqcRYGate(q, 1.5710654261078176, 11);
  sqcRZGate(q, -2.056428924103219, 11);
  sqcRYGate(q, -1.5688135223484316, 12);
  sqcRZGate(q, 0.5863578093304436, 12);
  sqcRYGate(q, 1.5707894267585794, 13);
  sqcRZGate(q, 0.8741009179228802, 13);
  sqcRYGate(q, -1.5708492945353751, 14);
  sqcRZGate(q, 2.9792986792822895, 14);
  sqcRYGate(q, -6.0982827870148526e-05, 15);
  sqcRZGate(q, 1.7898142550189864, 15);
  sqcRYGate(q, -1.5707733400837887, 16);
  sqcRZGate(q, 1.7731203821081492, 16);
  sqcRYGate(q, 1.5707615688381265, 17);
  sqcRZGate(q, 2.4462062117721572, 17);
  sqcRYGate(q, -1.861581103018806, 18);
  sqcRZGate(q, -2.902656994756806, 18);
  sqcRYGate(q, 1.5694076295061326, 19);
  sqcRZGate(q, -2.6237000465213, 19);

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
