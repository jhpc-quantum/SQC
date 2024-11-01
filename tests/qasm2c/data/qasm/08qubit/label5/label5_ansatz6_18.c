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

  sqcRYGate(q, -2.765697795397465, 0);
  sqcRYGate(q, -0.7495285774206789, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1804113304784907, 0);
  sqcRYGate(q, 2.515094212444951, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7346461905420523, 1);
  sqcRYGate(q, 1.995063530166326, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4249010835596003, 1);
  sqcRYGate(q, -1.2343076535772117, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6320120208826205, 2);
  sqcRYGate(q, 2.3170576246714405, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7713271720519277, 2);
  sqcRYGate(q, 0.7688391872845122, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.602152022069273, 3);
  sqcRYGate(q, -1.5777276348380223, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7258349042677192, 3);
  sqcRYGate(q, -2.0797054299852844, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3964382263480737, 4);
  sqcRYGate(q, 2.844234773145331, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.107890187407656, 4);
  sqcRYGate(q, -0.7708847158626956, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3983624604120158, 5);
  sqcRYGate(q, -1.6900784931293111, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9869865715958372, 5);
  sqcRYGate(q, -1.667511680880028, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1089438409901478, 6);
  sqcRYGate(q, -0.570340636760378, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.08380648173787, 6);
  sqcRYGate(q, -0.7931079528721972, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5253476451330257, 0);
  sqcRYGate(q, 1.8423422153902402, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8937692972481271, 0);
  sqcRYGate(q, -2.744179389558678, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.315429052943723, 1);
  sqcRYGate(q, 0.2071634703674307, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2645594964166067, 1);
  sqcRYGate(q, -1.2929257191120858, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.905103298013115, 2);
  sqcRYGate(q, 0.18978097650378703, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.378117108988261, 2);
  sqcRYGate(q, -1.6760610231224502, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4769921552542247, 3);
  sqcRYGate(q, 2.1973356642864497, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0575193594573353, 3);
  sqcRYGate(q, 2.8357254170520587, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6626927867364978, 4);
  sqcRYGate(q, 0.5522130336057014, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8399027322019947, 4);
  sqcRYGate(q, 1.524048407230004, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.27384651698857543, 5);
  sqcRYGate(q, -0.9288026001380775, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.12557085929867817, 5);
  sqcRYGate(q, 2.545348225398228, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5327679193562425, 6);
  sqcRYGate(q, -2.2946980790854155, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9944562623936486, 6);
  sqcRYGate(q, -2.2593209580442393, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8630501334453067, 0);
  sqcRYGate(q, -2.4998269593955387, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0654290230116565, 0);
  sqcRYGate(q, -1.247725344167558, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.38915621761110014, 1);
  sqcRYGate(q, 2.860362563363972, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7251216826542546, 1);
  sqcRYGate(q, -1.743578855794165, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5604374786103263, 2);
  sqcRYGate(q, -1.571674059722264, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7133353435573766, 2);
  sqcRYGate(q, -0.8510686059653967, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5698090262239264, 3);
  sqcRYGate(q, -2.5922532477067644, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1490999820783268, 3);
  sqcRYGate(q, 2.2418959027393583, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.023448817452998, 4);
  sqcRYGate(q, -0.2805595801721655, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.438270675534076, 4);
  sqcRYGate(q, 0.11500978964569843, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9758822938925807, 5);
  sqcRYGate(q, -0.35513679752085103, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.455604716985326, 5);
  sqcRYGate(q, 0.02170654428479141, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.02373443117236, 6);
  sqcRYGate(q, -2.659705443120418, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9708586086913309, 6);
  sqcRYGate(q, 2.373366835874827, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9015165584342453, 0);
  sqcRYGate(q, -2.1521839418749273, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0413835690994335, 0);
  sqcRYGate(q, -2.8904360726198264, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3869601637691824, 1);
  sqcRYGate(q, -0.39232546164657484, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4959817463486758, 1);
  sqcRYGate(q, 0.7155243149969239, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.12862270920903374, 2);
  sqcRYGate(q, -2.9703394331213495, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5022783664616854, 2);
  sqcRYGate(q, -1.6210039028458705, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8499249731225964, 3);
  sqcRYGate(q, -0.3582291895815157, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6404028099891894, 3);
  sqcRYGate(q, 0.2527873532352167, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4167004331298629, 4);
  sqcRYGate(q, -1.5421522164366646, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4713646910787177, 4);
  sqcRYGate(q, 1.4449857118868568, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3338345389414945, 5);
  sqcRYGate(q, -2.5196918580105265, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.081589700862809, 5);
  sqcRYGate(q, -1.6197099146906044, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.108871932684136, 6);
  sqcRYGate(q, 1.9853788167141504, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8334234064666872, 6);
  sqcRYGate(q, 1.7833638625150752, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.11553365867550891, 0);
  sqcRYGate(q, 1.2903735752332235, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.759949909350074, 0);
  sqcRYGate(q, 0.2508568442795207, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6749138490607232, 1);
  sqcRYGate(q, 2.8608161975086666, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0620250545787204, 1);
  sqcRYGate(q, -2.558682243168488, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.93195998695288, 2);
  sqcRYGate(q, 2.4618664360067566, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.033125050101039, 2);
  sqcRYGate(q, 2.3043358465079944, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6063383429139395, 3);
  sqcRYGate(q, 1.7957209692469505, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.714142175721885, 3);
  sqcRYGate(q, -2.166630254427454, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.760251186404078, 4);
  sqcRYGate(q, -1.4582096183131448, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8811665523137897, 4);
  sqcRYGate(q, -2.719681552707588, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.034923251635053, 5);
  sqcRYGate(q, 1.0173780362919433, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5260393830848373, 5);
  sqcRYGate(q, 1.0467353889841002, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.762843621577496, 6);
  sqcRYGate(q, -1.653437913561576, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1090751054095835, 6);
  sqcRYGate(q, -0.6977454829170329, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6593803710880232, 0);
  sqcRYGate(q, -2.4794489322341775, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5741170593141772, 0);
  sqcRYGate(q, -0.8923448143121615, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.15126955351235982, 1);
  sqcRYGate(q, -0.08239191564820672, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3763728491736003, 1);
  sqcRYGate(q, 1.8963939454474177, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.45679513851632064, 2);
  sqcRYGate(q, 0.8283962623875037, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8816317818137, 2);
  sqcRYGate(q, -0.9583485233547746, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0587768996113762, 3);
  sqcRYGate(q, 2.637444214789633, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.140357698200177, 3);
  sqcRYGate(q, -2.7909771430613595, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4970495041816734, 4);
  sqcRYGate(q, -1.497828382303275, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7758718381031975, 4);
  sqcRYGate(q, -1.3058846558122552, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6791704772662488, 5);
  sqcRYGate(q, 0.38492719520135965, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.026197357277966, 5);
  sqcRYGate(q, 3.123836769962997, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8328934064739562, 6);
  sqcRYGate(q, -1.806304986596671, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.237725272201871, 6);
  sqcRYGate(q, -0.045871733134205415, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.20430162606452917, 0);
  sqcRYGate(q, -0.10152735461907644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.386547311919202, 0);
  sqcRYGate(q, -2.594737018537561, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.706533571458556, 1);
  sqcRYGate(q, -0.7261427869860118, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9939578029402216, 1);
  sqcRYGate(q, 2.7079041274470894, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.085364685752652, 2);
  sqcRYGate(q, -1.21450577519456, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3327300999446372, 2);
  sqcRYGate(q, 0.1604073051728574, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9559037763091305, 3);
  sqcRYGate(q, 2.6066167018823565, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3392745123652798, 3);
  sqcRYGate(q, -2.532106721918965, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.906493701988979, 4);
  sqcRYGate(q, -2.369506841481963, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7756009683379506, 4);
  sqcRYGate(q, 0.3703239576852182, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9626719151947567, 5);
  sqcRYGate(q, -1.3858168515727876, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1107998330507276, 5);
  sqcRYGate(q, -2.0912085698887735, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3313599773814033, 6);
  sqcRYGate(q, -0.6442884389290242, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.14445492759272, 6);
  sqcRYGate(q, 0.2605630319893332, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.151049507381047, 0);
  sqcRYGate(q, -0.16575443702596537, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.778050133104737, 0);
  sqcRYGate(q, -2.820282292406341, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2738697159520544, 1);
  sqcRYGate(q, 1.7341095702425364, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7061509875082734, 1);
  sqcRYGate(q, -0.7089462769121715, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.18350929140721475, 2);
  sqcRYGate(q, 1.8469759263916157, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9036477734628057, 2);
  sqcRYGate(q, -2.2653550287324977, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.040796385141599, 3);
  sqcRYGate(q, 1.1149060283280585, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9976947157344602, 3);
  sqcRYGate(q, 0.4412636199438127, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5829169144806727, 4);
  sqcRYGate(q, 2.7047173285222934, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5306672766070049, 4);
  sqcRYGate(q, 2.258596842454518, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4628250958333606, 5);
  sqcRYGate(q, 0.2385338838865814, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7267443079621438, 5);
  sqcRYGate(q, -2.16031498304317, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4296066474949778, 6);
  sqcRYGate(q, -1.4257007485259876, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.12518154563303, 6);
  sqcRYGate(q, 1.7439617041342639, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.098575677572861, 0);
  sqcRYGate(q, -1.826759984330012, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6228996234655083, 0);
  sqcRYGate(q, 0.6243190330701136, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3752070158560497, 1);
  sqcRYGate(q, -1.1692608121019192, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9247283150168544, 1);
  sqcRYGate(q, -2.146601455138374, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.944303451914652, 2);
  sqcRYGate(q, -1.5033330468843056, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.495412974653115, 2);
  sqcRYGate(q, 2.2729746990295094, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9301564263871818, 3);
  sqcRYGate(q, 2.3204498893374663, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.1144749061233954, 3);
  sqcRYGate(q, -1.1302563694033845, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.2367384925953937, 4);
  sqcRYGate(q, -2.133921255309774, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.308055025695694, 4);
  sqcRYGate(q, 0.7205836758380507, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6186671614300314, 5);
  sqcRYGate(q, 1.2582688926484167, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8009331498665593, 5);
  sqcRYGate(q, 0.37914183997411577, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7521009767141775, 6);
  sqcRYGate(q, 1.5725375815522755, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.054527660778585, 6);
  sqcRYGate(q, 0.7306447012254189, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.06551433942703, 0);
  sqcRYGate(q, 2.520810757721977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9887252777387103, 0);
  sqcRYGate(q, -1.4014761164938014, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9950003104577627, 1);
  sqcRYGate(q, -1.8774739444188502, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.05666990708876706, 1);
  sqcRYGate(q, -0.13022889990658015, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4201514819741532, 2);
  sqcRYGate(q, -2.9121672684402022, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5171542837665952, 2);
  sqcRYGate(q, 0.950065692808451, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7987787432869419, 3);
  sqcRYGate(q, 1.0745391844117405, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3420603998283847, 3);
  sqcRYGate(q, -1.3306803736404258, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.919700884027896, 4);
  sqcRYGate(q, -0.7421737997790163, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9356798156601682, 4);
  sqcRYGate(q, 1.412820531858568, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7638755530344206, 5);
  sqcRYGate(q, -1.9695201105890865, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6811773390935656, 5);
  sqcRYGate(q, 0.7722422496049615, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.767858384846983, 6);
  sqcRYGate(q, -0.618785633510119, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.04131385348692502, 6);
  sqcRYGate(q, -1.2969490619784325, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5970967485014168, 0);
  sqcRYGate(q, -2.493972743646492, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7929863167108446, 0);
  sqcRYGate(q, -2.5821940612226792, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.051349282164, 1);
  sqcRYGate(q, 1.8692715474480497, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9885352177986886, 1);
  sqcRYGate(q, -0.8284289327316738, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.01143380897566, 2);
  sqcRYGate(q, 2.844191761491301, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1379836202640607, 2);
  sqcRYGate(q, -3.0470235692028043, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9930829703008097, 3);
  sqcRYGate(q, -0.0988104762228561, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.1666361391120925, 3);
  sqcRYGate(q, -2.19745907228092, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.159317429121112, 4);
  sqcRYGate(q, -0.257859332892048, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3373316564766418, 4);
  sqcRYGate(q, -1.7818426412391155, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5451447483307854, 5);
  sqcRYGate(q, -0.07852102383518718, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5527783088264941, 5);
  sqcRYGate(q, 1.5124817867114242, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9763766602255417, 6);
  sqcRYGate(q, 0.6780739879712847, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6935345003904416, 6);
  sqcRYGate(q, 1.6340876254900305, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7849332743088482, 0);
  sqcRYGate(q, -1.1261392246434285, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.06647890486157, 0);
  sqcRYGate(q, -0.8632447675151393, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.652109126145862, 1);
  sqcRYGate(q, -1.4024660672541591, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3893286409867733, 1);
  sqcRYGate(q, 2.396090802210182, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4284066627250356, 2);
  sqcRYGate(q, -2.273740501868846, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7836345976946273, 2);
  sqcRYGate(q, -0.6938937709044914, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4228782764342718, 3);
  sqcRYGate(q, -1.1929675518076808, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.44644647832563, 3);
  sqcRYGate(q, -1.9754618516808644, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3816816172382507, 4);
  sqcRYGate(q, -0.9577150699072653, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.741366032947858, 4);
  sqcRYGate(q, 1.4006052228913117, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4546481847456472, 5);
  sqcRYGate(q, -1.8002772386662462, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3503076950163369, 5);
  sqcRYGate(q, 0.4127298255138267, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5873346956795336, 6);
  sqcRYGate(q, 0.8473465891551063, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9771612157318774, 6);
  sqcRYGate(q, -2.395836219657842, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5302357037060457, 0);
  sqcRYGate(q, 3.1007959459778762, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6332227021431455, 0);
  sqcRYGate(q, -0.06455031486547567, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.037428664925121015, 1);
  sqcRYGate(q, -0.226891618398934, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.23251402076127703, 1);
  sqcRYGate(q, 3.118633798550169, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2043685381143858, 2);
  sqcRYGate(q, 1.274249892923861, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7535429288145865, 2);
  sqcRYGate(q, -1.7724954050212098, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4718662712207964, 3);
  sqcRYGate(q, 1.311145992320182, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.06155210500763719, 3);
  sqcRYGate(q, 2.879032498767589, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4788279227712495, 4);
  sqcRYGate(q, -1.9453923558751693, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5467919975619788, 4);
  sqcRYGate(q, 2.3992769360972837, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.411780092467595, 5);
  sqcRYGate(q, -0.19024990660469845, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2148824687332125, 5);
  sqcRYGate(q, 0.18935340758946287, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0454766892749217, 6);
  sqcRYGate(q, -1.409029917690791, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5016200992350544, 6);
  sqcRYGate(q, 0.3499191429532508, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.16108685665865696, 0);
  sqcRYGate(q, 0.9177170172240402, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8561915441475514, 0);
  sqcRYGate(q, -0.659490460724585, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7371808439570704, 1);
  sqcRYGate(q, -1.3703517235288816, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.053497405120574, 1);
  sqcRYGate(q, -2.3315017186948395, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6192566696194266, 2);
  sqcRYGate(q, 2.6472518293160268, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1270206643742195, 2);
  sqcRYGate(q, 2.2684532154341257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3658693278338097, 3);
  sqcRYGate(q, 1.2399508403851065, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7847745341653645, 3);
  sqcRYGate(q, -2.729681514973802, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8626369271311422, 4);
  sqcRYGate(q, 3.109862792633534, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7974438221252584, 4);
  sqcRYGate(q, -0.20067296482578736, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9038431595409921, 5);
  sqcRYGate(q, -1.3796859350161357, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.825106757184419, 5);
  sqcRYGate(q, 1.9656645199820595, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.39978594490012487, 6);
  sqcRYGate(q, -1.6117270875535734, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5999644333612406, 6);
  sqcRYGate(q, 0.8052049122123802, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.025510862990883218, 0);
  sqcRYGate(q, -0.7013762260010574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6016345922293469, 0);
  sqcRYGate(q, -0.8311134794300391, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3508600434335796, 1);
  sqcRYGate(q, 1.7186343486868851, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5863566779556861, 1);
  sqcRYGate(q, -0.5438894171791775, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.26309127480049904, 2);
  sqcRYGate(q, -1.8320512634800983, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.23773181862007764, 2);
  sqcRYGate(q, 2.9089744199110954, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7151126458850889, 3);
  sqcRYGate(q, -2.660901177085946, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.624941273809311, 3);
  sqcRYGate(q, 2.757487215516945, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6820687301206787, 4);
  sqcRYGate(q, 1.7812949901948654, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9226437606519617, 4);
  sqcRYGate(q, -3.033585539590825, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6337231741541375, 5);
  sqcRYGate(q, -2.8573875384990357, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.367666030071433, 5);
  sqcRYGate(q, 1.2082517571152307, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.237100675031719, 6);
  sqcRYGate(q, -2.315033877797032, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9460049336249964, 6);
  sqcRYGate(q, 1.0543431173801103, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2013549077310945, 0);
  sqcRYGate(q, -0.9640130407730668, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6109095209038748, 0);
  sqcRYGate(q, 1.455046447216234, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9274701403631668, 1);
  sqcRYGate(q, -2.0247283009889143, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2624603984591944, 1);
  sqcRYGate(q, -2.335718571453376, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2704213695026212, 2);
  sqcRYGate(q, -2.2974916603881486, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1644203899908794, 2);
  sqcRYGate(q, -1.5355348547603205, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3642778289510686, 3);
  sqcRYGate(q, 0.7234891254597827, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8994213964736764, 3);
  sqcRYGate(q, -2.432391087516392, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0855139835269445, 4);
  sqcRYGate(q, 2.7094241030287494, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9236332097928512, 4);
  sqcRYGate(q, 1.7731461776701896, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6107113767891095, 5);
  sqcRYGate(q, 2.169879156509725, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4823202803959883, 5);
  sqcRYGate(q, -0.826126957857124, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8316694073723834, 6);
  sqcRYGate(q, 0.7752080678046233, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6343744129342017, 6);
  sqcRYGate(q, -2.9735723994427374, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3689749361420462, 0);
  sqcRYGate(q, -0.1128821646398437, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6109655860773389, 0);
  sqcRYGate(q, 0.07079839511064161, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8035338617008159, 1);
  sqcRYGate(q, -0.12385069080187172, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5842546919165637, 1);
  sqcRYGate(q, 2.759130298855994, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9355536888292812, 2);
  sqcRYGate(q, -0.8299863856930044, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2447896236004805, 2);
  sqcRYGate(q, 2.6433383840096614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.371638987319684, 3);
  sqcRYGate(q, -2.611559466872518, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7393472755321495, 3);
  sqcRYGate(q, -1.4221547658649263, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.27374506314963304, 4);
  sqcRYGate(q, -0.8166025262517801, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.637618218733915, 4);
  sqcRYGate(q, 1.4415249645960673, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6697753941820137, 5);
  sqcRYGate(q, -3.017732603230349, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8450512309636293, 5);
  sqcRYGate(q, -2.9741448175893725, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.26644924439255274, 6);
  sqcRYGate(q, 2.5621782448452732, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0417045054965417, 6);
  sqcRYGate(q, -1.0496381371197612, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9083280241717866, 0);
  sqcRYGate(q, 0.3658045100244838, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2994782117807127, 0);
  sqcRYGate(q, 1.048022651413377, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.04812974262075542, 1);
  sqcRYGate(q, 0.134626636550772, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2929743255289123, 1);
  sqcRYGate(q, 2.6167214824282383, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0992890578393935, 2);
  sqcRYGate(q, -1.8431112738391437, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.80387200954431, 2);
  sqcRYGate(q, 1.2715673218970522, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9304672926968345, 3);
  sqcRYGate(q, 2.748155095866218, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.444164266429827, 3);
  sqcRYGate(q, 2.0810086713311953, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3545384787669867, 4);
  sqcRYGate(q, 3.023147109949974, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1235153803284508, 4);
  sqcRYGate(q, 0.2920089928193885, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.101118144673567, 5);
  sqcRYGate(q, -1.2427108916114697, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3472626361600841, 5);
  sqcRYGate(q, 2.155695385353753, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.03143188177837164, 6);
  sqcRYGate(q, -2.9496678127406875, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.1997131533194848, 6);
  sqcRYGate(q, 0.661546458192082, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0417436083617355, 0);
  sqcRYGate(q, 1.8321006129058055, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8000408531000747, 0);
  sqcRYGate(q, 1.724000576234645, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9858899680571467, 1);
  sqcRYGate(q, 1.6547272680459661, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.06618656879612748, 1);
  sqcRYGate(q, 1.3095946831451464, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.33897997629973725, 2);
  sqcRYGate(q, 1.1820310233252536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5791800739945563, 2);
  sqcRYGate(q, -1.9532189541996852, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9826848037736626, 3);
  sqcRYGate(q, 1.6816835656862903, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4753986170653075, 3);
  sqcRYGate(q, -2.7882968917726907, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.09525503318372028, 4);
  sqcRYGate(q, 0.8040529050501135, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.047473280502418, 4);
  sqcRYGate(q, 2.132289355846441, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.39392012332682713, 5);
  sqcRYGate(q, -2.437071680850316, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4915026101901616, 5);
  sqcRYGate(q, -0.05946698190781219, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.834049131753912, 6);
  sqcRYGate(q, -0.3240477261592405, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.18624715907377, 6);
  sqcRYGate(q, -1.979788074400223, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.08860659460294557, 0);
  sqcRYGate(q, -1.2096557435530815, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4091667451570737, 0);
  sqcRYGate(q, -1.1103408309668765, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9912436446311859, 1);
  sqcRYGate(q, 2.397530091359948, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4336310965992083, 1);
  sqcRYGate(q, 1.949645986001637, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7719883034230945, 2);
  sqcRYGate(q, 2.3066575137746175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1220081523270915, 2);
  sqcRYGate(q, 0.4524583882304194, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9536205321605591, 3);
  sqcRYGate(q, 0.19833848665074802, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.132817597146797, 3);
  sqcRYGate(q, 2.6316716212206592, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9547669995017274, 4);
  sqcRYGate(q, -2.2267085688279327, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2914158723955347, 4);
  sqcRYGate(q, 2.5644522857980565, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9379249578441757, 5);
  sqcRYGate(q, 2.411209671787836, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.480564337126962, 5);
  sqcRYGate(q, -1.7287628415755734, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8779271594321617, 6);
  sqcRYGate(q, -2.9175903834585255, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0110289191059887, 6);
  sqcRYGate(q, -2.9895985063241284, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.35063810038655774, 0);
  sqcRYGate(q, 2.1951756358570202, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.41691928316905413, 0);
  sqcRYGate(q, 0.9331525705140074, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7305200820912251, 1);
  sqcRYGate(q, 0.3737580521818434, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7903611410833823, 1);
  sqcRYGate(q, 1.9366144362207696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.104857138525284, 2);
  sqcRYGate(q, 1.753156498186951, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.707383586443522, 2);
  sqcRYGate(q, 2.0666276666546057, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0086063087964603, 3);
  sqcRYGate(q, 1.5922156137216703, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3662403169058246, 3);
  sqcRYGate(q, 1.4950785983170711, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3683091308840118, 4);
  sqcRYGate(q, 1.0041795311152069, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.865904441674557, 4);
  sqcRYGate(q, -1.8561790556089444, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.33969588416012725, 5);
  sqcRYGate(q, 2.8026807753122642, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4055861025698437, 5);
  sqcRYGate(q, 0.13377729744107825, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8306266735880428, 6);
  sqcRYGate(q, -0.755518194266161, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.108683393593159, 6);
  sqcRYGate(q, -2.8609578574302668, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5261095151259276, 0);
  sqcRYGate(q, -0.6451397431067228, 1);
  sqcRYGate(q, 1.8497773268952646, 2);
  sqcRYGate(q, -2.231904060130564, 3);
  sqcRYGate(q, -2.6715071978936678, 4);
  sqcRYGate(q, -0.18520090733923175, 5);
  sqcRYGate(q, 0.26191359319780927, 6);
  sqcRYGate(q, 2.46230587005186, 7);

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
