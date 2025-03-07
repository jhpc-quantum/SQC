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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 1.5438882154516975, 0);
  sqcRYGate(q, -2.190470806494254, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0964109743143284, 0);
  sqcRYGate(q, 1.8631947927009298, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.951661518745694, 0);
  sqcRYGate(q, 2.002387623093952, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7925872615353589, 0);
  sqcRYGate(q, -0.7357293284242719, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.052138617118498, 0);
  sqcRYGate(q, 2.596034104216078, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9222792669917856, 0);
  sqcRYGate(q, -2.509490127467136, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1665707821685452, 1);
  sqcRYGate(q, 2.361905996303605, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.987874204012641, 1);
  sqcRYGate(q, 0.476279952235429, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.16384103129525496, 1);
  sqcRYGate(q, 1.2751491607268521, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5219459397946666, 1);
  sqcRYGate(q, -2.639748076091681, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9083329507034648, 2);
  sqcRYGate(q, 0.05415035012281907, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8312039979436578, 2);
  sqcRYGate(q, 2.2169679602344745, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6482711754274828, 0);
  sqcRYGate(q, -1.2991999385824098, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.075632891222674, 0);
  sqcRYGate(q, 0.36882393304459965, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1897320541614924, 0);
  sqcRYGate(q, -0.4156743215563049, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.29196136596404265, 0);
  sqcRYGate(q, 0.13856151241821238, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.799128193833743, 0);
  sqcRYGate(q, 0.8263312816432871, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2860719155238653, 0);
  sqcRYGate(q, 0.3786141899869367, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8984169445505321, 1);
  sqcRYGate(q, -1.1985139904959672, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.141389778000325, 1);
  sqcRYGate(q, 0.18117914918842945, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.024144329489459437, 1);
  sqcRYGate(q, -0.07671412094033694, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.1403473341953974, 1);
  sqcRYGate(q, 0.641617582353201, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1521083932757327, 2);
  sqcRYGate(q, -1.0227506299938058, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.861860391079705, 2);
  sqcRYGate(q, -2.3968701151426988, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.606650638763484, 0);
  sqcRYGate(q, -1.9466237984296075, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.10249755648781278, 0);
  sqcRYGate(q, -1.2294870500550683, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.346962853361002, 0);
  sqcRYGate(q, -0.26860823436888265, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.055293189091401, 0);
  sqcRYGate(q, 3.0983924319920972, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2831722549502498, 0);
  sqcRYGate(q, 2.799653130228129, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.662732199314271, 0);
  sqcRYGate(q, 1.9786161377909088, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6012148440676537, 1);
  sqcRYGate(q, -1.5308246754255705, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0750260241267693, 1);
  sqcRYGate(q, 1.089569771821574, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4972430967077903, 1);
  sqcRYGate(q, -0.7356205828014879, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6218014136550218, 1);
  sqcRYGate(q, 0.3841003511777386, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.889854891835447, 2);
  sqcRYGate(q, -2.313497118319618, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7666786769284535, 2);
  sqcRYGate(q, 2.298417944658305, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0950634586152737, 0);
  sqcRYGate(q, -0.4013881312730208, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8035947458600625, 0);
  sqcRYGate(q, 0.38597475095600803, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4643642717485466, 0);
  sqcRYGate(q, 0.8235450066094598, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.381443459569369, 0);
  sqcRYGate(q, -2.167993699596555, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7839201616376993, 0);
  sqcRYGate(q, 2.4967883471302157, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.3396296032281355, 0);
  sqcRYGate(q, -2.448899567951941, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.459498878200561, 1);
  sqcRYGate(q, 1.0735466180541948, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.25341381024989995, 1);
  sqcRYGate(q, -2.5094836245497034, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2932566012075695, 1);
  sqcRYGate(q, -0.05656035662657581, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5238411139153873, 1);
  sqcRYGate(q, -0.757856025763031, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1566603969494083, 2);
  sqcRYGate(q, 1.1387397559903016, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7282033874214169, 2);
  sqcRYGate(q, -0.07993345426750942, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.44881341345005, 0);
  sqcRYGate(q, -2.4730942456794502, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.925809699155172, 0);
  sqcRYGate(q, 2.9097454814536072, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9015744523622435, 0);
  sqcRYGate(q, -0.7163912387761204, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2120718478935977, 0);
  sqcRYGate(q, -1.9896092659201805, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6795666002810683, 0);
  sqcRYGate(q, 1.2359882906652708, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.032116444298758, 0);
  sqcRYGate(q, 0.15268253330114412, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0391005210438493, 1);
  sqcRYGate(q, 0.6147840653785274, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.047860945262279, 1);
  sqcRYGate(q, -1.1657053837853808, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1036526745019666, 1);
  sqcRYGate(q, 0.4576531864796767, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2943406454409585, 1);
  sqcRYGate(q, 2.3422904039372856, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2124531154250482, 2);
  sqcRYGate(q, -0.6323277888216936, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7486689424811912, 2);
  sqcRYGate(q, 1.2471691258235595, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4466682555551911, 0);
  sqcRYGate(q, 0.5097247789559244, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.606202989318863, 0);
  sqcRYGate(q, -2.0625659805255667, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6390120882901775, 0);
  sqcRYGate(q, -2.832204676345367, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.509069480108204, 0);
  sqcRYGate(q, 2.3661611410033494, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5048416346574274, 0);
  sqcRYGate(q, -2.134030482956771, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5312312894627866, 0);
  sqcRYGate(q, 2.375236211576761, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.1531387057737359, 1);
  sqcRYGate(q, -0.6779903273181243, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.442335627845103, 1);
  sqcRYGate(q, -1.7691994588835558, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.208133754791053, 1);
  sqcRYGate(q, 2.79996782252433, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.05325692103244695, 1);
  sqcRYGate(q, 3.019857396868414, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.211546425486679, 2);
  sqcRYGate(q, 1.415650197550823, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5012770590937863, 2);
  sqcRYGate(q, -0.1535941272998797, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8242470391968206, 0);
  sqcRYGate(q, 2.4933175352174364, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9312518460356096, 0);
  sqcRYGate(q, 3.094591403422226, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.441390894609644, 0);
  sqcRYGate(q, -3.0294783492526594, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.03355704841359142, 0);
  sqcRYGate(q, 2.6764230116154244, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.860448238272312, 0);
  sqcRYGate(q, 0.8423451539363013, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4558220375550732, 0);
  sqcRYGate(q, -1.051650931582727, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5727113390433605, 1);
  sqcRYGate(q, -2.4937080440743484, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3593821537855133, 1);
  sqcRYGate(q, -2.637555890349724, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.931847066066035, 1);
  sqcRYGate(q, 1.1931035251032354, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.66625620923075, 1);
  sqcRYGate(q, -1.225325779097863, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.417227874507879, 2);
  sqcRYGate(q, -0.7403459758609465, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4091321214020551, 2);
  sqcRYGate(q, -0.527991352488075, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8774207896228976, 0);
  sqcRYGate(q, -2.4278206431534026, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.21512125572035057, 0);
  sqcRYGate(q, 2.6232759851532323, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2932310127414308, 0);
  sqcRYGate(q, 1.7511440597856636, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.05027680278895753, 0);
  sqcRYGate(q, -1.6527219711013084, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.628633691077773, 0);
  sqcRYGate(q, -2.5805618465356703, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9486590042763448, 0);
  sqcRYGate(q, 2.909529740204443, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8766522365857914, 1);
  sqcRYGate(q, 1.147519323111071, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4217488853859797, 1);
  sqcRYGate(q, -2.639159257173552, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8434564567390329, 1);
  sqcRYGate(q, 1.6255135871937352, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8825532925014725, 1);
  sqcRYGate(q, -3.051083230686356, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.0990925261374997, 2);
  sqcRYGate(q, 1.18634736665451, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.30964843129496955, 2);
  sqcRYGate(q, 1.1918058475681343, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6996574216494382, 0);
  sqcRYGate(q, -1.9426021498692494, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.14697238805720814, 0);
  sqcRYGate(q, -1.804090060500444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.088582534620814, 0);
  sqcRYGate(q, -1.3109090466067095, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.361457004341216, 0);
  sqcRYGate(q, 2.836722837498846, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6991394590428464, 0);
  sqcRYGate(q, -0.3204603111708426, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.836701788051702, 0);
  sqcRYGate(q, 0.030752265860455423, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9801213197963334, 1);
  sqcRYGate(q, 0.11414848544813415, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3173640475045312, 1);
  sqcRYGate(q, 0.3819093997831467, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4505525337351206, 1);
  sqcRYGate(q, 0.753242858714099, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9945879361469325, 1);
  sqcRYGate(q, -2.6114018718506187, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.17280775278152039, 2);
  sqcRYGate(q, 0.566962529582033, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.35112213973411255, 2);
  sqcRYGate(q, -2.1509742298001786, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.38075905608635097, 0);
  sqcRYGate(q, -1.942058506881594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9588070052660163, 0);
  sqcRYGate(q, -1.3009748105547159, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0827441993360014, 0);
  sqcRYGate(q, 0.6556911091671287, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6644956247037813, 0);
  sqcRYGate(q, 0.06640618084916206, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.87191508621782, 0);
  sqcRYGate(q, -1.081047105931689, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.1757126567600623, 0);
  sqcRYGate(q, -2.2895093840469856, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.29803123513654284, 1);
  sqcRYGate(q, 2.310377064319962, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.09158930765431261, 1);
  sqcRYGate(q, -1.8945743214962851, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.99697623931016, 1);
  sqcRYGate(q, 1.8085689093227721, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9758744284700436, 1);
  sqcRYGate(q, 1.9589391628156096, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8255912075170806, 2);
  sqcRYGate(q, -0.34871450799819653, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.763882940383583, 2);
  sqcRYGate(q, 0.7565103461723837, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.705552527356939, 0);
  sqcRYGate(q, 0.7627181439013264, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3423436468557756, 0);
  sqcRYGate(q, 1.623136526880665, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8169583530671534, 0);
  sqcRYGate(q, 1.2239295905403103, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6426690484848555, 0);
  sqcRYGate(q, -3.04165472794351, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.49380121548053, 0);
  sqcRYGate(q, 1.3764784943483814, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2881278571424095, 0);
  sqcRYGate(q, -1.0002811123758186, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7096278888629779, 1);
  sqcRYGate(q, 0.4083316394301324, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2035414065272088, 1);
  sqcRYGate(q, 2.9284296096505145, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3214698537980523, 1);
  sqcRYGate(q, -1.9375169717722371, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.16163189356281119, 1);
  sqcRYGate(q, 1.9885689087282747, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5001012748225883, 2);
  sqcRYGate(q, 0.6153267421141435, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2709731285577561, 2);
  sqcRYGate(q, 2.0659414747675573, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.48727924529215844, 0);
  sqcRYGate(q, -2.1324204376001887, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6524053664460494, 0);
  sqcRYGate(q, -1.1908856853228453, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3597580023089253, 0);
  sqcRYGate(q, -1.9788895408388967, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.311533242382573, 0);
  sqcRYGate(q, 1.6198106326806174, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.090595808972286, 0);
  sqcRYGate(q, -2.0024276463112143, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.062028201800851, 0);
  sqcRYGate(q, 1.2538025972167186, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.613777572961476, 1);
  sqcRYGate(q, 2.6152869047565757, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.466750630997674, 1);
  sqcRYGate(q, 3.124883875686248, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0983056773914375, 1);
  sqcRYGate(q, 1.4759137164070115, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6724845767357572, 1);
  sqcRYGate(q, -1.3966107731408144, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8053175430970976, 2);
  sqcRYGate(q, 1.7298867013584198, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4201035055162796, 2);
  sqcRYGate(q, 1.7601437662398818, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1451705290612697, 0);
  sqcRYGate(q, -1.6092152590677196, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2787123713152008, 0);
  sqcRYGate(q, -0.965595472706246, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8510247475129091, 0);
  sqcRYGate(q, 0.3738133846844116, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.15515647952363398, 0);
  sqcRYGate(q, 1.6717299327474768, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2640287908126995, 0);
  sqcRYGate(q, 2.7570560152383363, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2035416185093464, 0);
  sqcRYGate(q, -1.7851050707271456, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1372985824106534, 1);
  sqcRYGate(q, 3.0722816034124043, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8275416458525018, 1);
  sqcRYGate(q, 2.9298053665928285, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.182754413694127, 1);
  sqcRYGate(q, 0.7113847861675535, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1727341245341734, 1);
  sqcRYGate(q, -1.1481984095642366, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3330467759152405, 2);
  sqcRYGate(q, 2.074255102524674, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9476068163866307, 2);
  sqcRYGate(q, 1.2161521993858901, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.14899839983929383, 0);
  sqcRYGate(q, 2.8839265261268006, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0592433292800956, 0);
  sqcRYGate(q, 1.3122014678737492, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3755407508726174, 0);
  sqcRYGate(q, 0.6919150881449783, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6330797165825305, 0);
  sqcRYGate(q, -2.7013635602709725, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7679755831804314, 0);
  sqcRYGate(q, 0.010860329180369816, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.21055639005293095, 0);
  sqcRYGate(q, 2.9158623450985672, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.57937463829163, 1);
  sqcRYGate(q, -0.4670629105324213, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7003536399296075, 1);
  sqcRYGate(q, 0.6915075463224563, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1303666706184243, 1);
  sqcRYGate(q, 1.7712777906990829, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0830306891811263, 1);
  sqcRYGate(q, 1.414539337868685, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8859205246303555, 2);
  sqcRYGate(q, -2.0229803639683577, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4277910811406551, 2);
  sqcRYGate(q, -0.38303689570752414, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7449356429119787, 0);
  sqcRYGate(q, -2.165468128361641, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6145457839740622, 0);
  sqcRYGate(q, 1.3585188885713047, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.802001419184871, 0);
  sqcRYGate(q, -0.35200836543273073, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6306494097516666, 0);
  sqcRYGate(q, -0.8673064873489054, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1159675604408, 0);
  sqcRYGate(q, -2.9621623847169376, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7405560861266638, 0);
  sqcRYGate(q, -0.005508333567373582, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4244360962498988, 1);
  sqcRYGate(q, 1.920189606453095, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6123215297186437, 1);
  sqcRYGate(q, -0.887271207563889, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.11648804638208873, 1);
  sqcRYGate(q, 2.4170724477707513, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1820372604220903, 1);
  sqcRYGate(q, -0.9993931280401793, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.12873664003402, 2);
  sqcRYGate(q, 3.133814185970051, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1820579401314253, 2);
  sqcRYGate(q, 0.6597799252890288, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7444370797261123, 0);
  sqcRYGate(q, -0.9770429830330241, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.947046300162476, 0);
  sqcRYGate(q, 0.08359916232721254, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9348232573223354, 0);
  sqcRYGate(q, 1.1270375844638767, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6040002584335067, 0);
  sqcRYGate(q, 1.9530469779941815, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8709911548753873, 0);
  sqcRYGate(q, -0.5683643757319423, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6366993706813848, 0);
  sqcRYGate(q, -2.723708931450877, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.067124214394679, 1);
  sqcRYGate(q, 1.982449529000851, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.229123220889535, 1);
  sqcRYGate(q, 2.0651177052026983, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1792160210773632, 1);
  sqcRYGate(q, -1.851222952047129, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.575011341553176, 1);
  sqcRYGate(q, -0.2022692583633228, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.08842216606885, 2);
  sqcRYGate(q, 1.2165534612863371, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.735681642009255, 2);
  sqcRYGate(q, -0.06884462574176808, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7933635144707847, 0);
  sqcRYGate(q, 0.945372474360239, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7922292711295489, 0);
  sqcRYGate(q, 1.275510617230334, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.010094449489088218, 0);
  sqcRYGate(q, 0.32648365108706745, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4678115585799736, 0);
  sqcRYGate(q, -0.730739968339179, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.14677309602615482, 0);
  sqcRYGate(q, -1.7880110350042582, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.2881128641363647, 0);
  sqcRYGate(q, 3.019372842832596, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.1880208714486927, 1);
  sqcRYGate(q, 2.6156229565203835, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.13402526448831695, 1);
  sqcRYGate(q, -0.6691229089020159, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6967333224122, 1);
  sqcRYGate(q, -0.64019760793471, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.37621990230575, 1);
  sqcRYGate(q, 2.128419671225232, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2046113691014355, 2);
  sqcRYGate(q, 2.9864163805246537, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5842457033022495, 2);
  sqcRYGate(q, -2.266768759450435, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4982888622791055, 0);
  sqcRYGate(q, 1.1019837993113093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.20246023429854, 0);
  sqcRYGate(q, -2.780071719427094, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7097168603515662, 0);
  sqcRYGate(q, -1.2543748342585146, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.801450138597831, 0);
  sqcRYGate(q, -0.8270061600394473, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.077709442481753, 0);
  sqcRYGate(q, -1.0145983387893776, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.656471418466201, 0);
  sqcRYGate(q, -2.9477557764941853, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.21261163436817773, 1);
  sqcRYGate(q, -1.633846777265307, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5763159280357053, 1);
  sqcRYGate(q, 0.03823399979338889, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.523387184805555, 1);
  sqcRYGate(q, 3.1177712169065477, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.181715520537178, 1);
  sqcRYGate(q, -2.265644252040447, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4051647640549716, 2);
  sqcRYGate(q, -1.6953914983142466, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.06485884574886575, 2);
  sqcRYGate(q, -2.912444614364466, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5994517341810401, 0);
  sqcRYGate(q, 0.36063077310847286, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1608437305250385, 0);
  sqcRYGate(q, 2.381737535845195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1406046072136702, 0);
  sqcRYGate(q, 2.1881347935233926, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0028015221000395, 0);
  sqcRYGate(q, -0.4303724338049102, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0177504702593376, 0);
  sqcRYGate(q, 2.260677445954726, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6187413842977483, 0);
  sqcRYGate(q, -2.8197007640099643, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9989806031148828, 1);
  sqcRYGate(q, 1.3823580297929494, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.30957267816966, 1);
  sqcRYGate(q, 0.282606402041222, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2038773425594247, 1);
  sqcRYGate(q, -1.7639953875617866, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0127928356335247, 1);
  sqcRYGate(q, -0.37821673059595373, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.036193422451934895, 2);
  sqcRYGate(q, 2.454708649000195, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.057665672999606, 2);
  sqcRYGate(q, -2.289836050733696, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6212023435500269, 0);
  sqcRYGate(q, 1.796124657526983, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7013639275580883, 0);
  sqcRYGate(q, 1.1637339602430425, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0620969284331965, 0);
  sqcRYGate(q, 1.646620465810769, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.653827115792787, 0);
  sqcRYGate(q, 0.9390138181623897, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5763331140294141, 0);
  sqcRYGate(q, 0.5958406194391027, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1779671643935685, 0);
  sqcRYGate(q, -2.383714614970267, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.365864735843603, 1);
  sqcRYGate(q, 0.9163994713048361, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.095044540238457, 1);
  sqcRYGate(q, -0.06372151838911827, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.00082144445647, 1);
  sqcRYGate(q, 0.19438027575950836, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3761959960600265, 1);
  sqcRYGate(q, 1.1186455823192152, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5810937190927208, 2);
  sqcRYGate(q, 1.5026446773119684, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7247140433338402, 2);
  sqcRYGate(q, -1.213380114342669, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5137155727357987, 0);
  sqcRYGate(q, 2.8871494091416197, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3250797642218597, 0);
  sqcRYGate(q, -0.20454899685404726, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8854675627563013, 0);
  sqcRYGate(q, -2.501963403976849, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9932322210235949, 0);
  sqcRYGate(q, 0.9749133956583256, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9574138915066346, 0);
  sqcRYGate(q, -1.8090969151391156, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.707608109666607, 0);
  sqcRYGate(q, -1.5036077033638477, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.070044127901877, 1);
  sqcRYGate(q, 0.4814605506598992, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.388958292141069, 1);
  sqcRYGate(q, 1.700773951803237, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.318090447028249, 1);
  sqcRYGate(q, 2.487436620771604, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7647964651012171, 1);
  sqcRYGate(q, -1.3907288909086846, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5497172266622674, 2);
  sqcRYGate(q, -3.0922731459145414, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.11012134704183385, 2);
  sqcRYGate(q, -2.042297155216666, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5391033816290087, 0);
  sqcRYGate(q, 0.6603377853797358, 1);
  sqcRYGate(q, -2.143762603581501, 2);
  sqcRYGate(q, -0.7930086601410794, 3);

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
