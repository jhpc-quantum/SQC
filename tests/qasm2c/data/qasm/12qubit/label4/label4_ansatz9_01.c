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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -2.4068794949608265, 0);
  sqcRYGate(q, 1.4869723255115797, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4971943397131602, 0);
  sqcRYGate(q, -1.9774627522549033, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3512567473947712, 2);
  sqcRYGate(q, -0.17666904430430558, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8732489136409731, 2);
  sqcRYGate(q, 2.560138967888875, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8566547325643175, 4);
  sqcRYGate(q, -0.8317312193378044, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5897234554096525, 4);
  sqcRYGate(q, -2.4499323785584903, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3621100746765364, 6);
  sqcRYGate(q, -2.591411632758747, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7101453539581808, 6);
  sqcRYGate(q, -3.1006045764829087, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9642196325044937, 8);
  sqcRYGate(q, -2.119831933136755, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.7531539180312614, 8);
  sqcRYGate(q, -2.645555692960222, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.529125201864801, 10);
  sqcRYGate(q, -2.497599642464198, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.1852186727100547, 10);
  sqcRYGate(q, -2.855809463258194, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.7255621739875293, 0);
  sqcRYGate(q, 2.1943751297958807, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3500567184376844, 0);
  sqcRYGate(q, -1.0535434872934522, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.376873159435584, 2);
  sqcRYGate(q, 1.2277466143403049, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.957372842314518, 2);
  sqcRYGate(q, -2.44071093097288, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.335327075307145, 4);
  sqcRYGate(q, 1.1756193710087617, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.789771561464412, 4);
  sqcRYGate(q, 3.1389451823522285, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.6679435400220362, 6);
  sqcRYGate(q, 2.7787328243525287, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.5382371165656394, 6);
  sqcRYGate(q, -1.4246318382435932, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.0888731564775225, 8);
  sqcRYGate(q, -0.03494802051286161, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.5987655780181644, 8);
  sqcRYGate(q, -1.3649483260528843, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.1804520068776867, 1);
  sqcRYGate(q, -1.7078897926146297, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.280751630066594, 1);
  sqcRYGate(q, -3.101161374141082, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.778331571698359, 3);
  sqcRYGate(q, -1.364281537900141, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.5800941013629098, 3);
  sqcRYGate(q, -2.7187155814195356, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.8625857311144087, 5);
  sqcRYGate(q, -2.245497770349723, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.014819972962082791, 5);
  sqcRYGate(q, 3.139222956665046, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.754087241036019, 7);
  sqcRYGate(q, 0.4922551434261688, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.7389807183535784, 7);
  sqcRYGate(q, -1.6087883557070304, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.132451801143387, 9);
  sqcRYGate(q, -2.283841629213666, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.646079369848676, 9);
  sqcRYGate(q, 2.5231217968945128, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.4723510324058773, 0);
  sqcRYGate(q, 1.797938399694278, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2412381618706918, 0);
  sqcRYGate(q, 1.9470024482813153, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.650224671981622, 1);
  sqcRYGate(q, -0.09749647647933911, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.25103568003352983, 1);
  sqcRYGate(q, -1.7234029634623227, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1566752750856626, 2);
  sqcRYGate(q, -2.8523770430993416, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.229594648867268, 2);
  sqcRYGate(q, 2.344145289983271, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.4537106851332418, 3);
  sqcRYGate(q, 1.8447464574964052, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1371785368534817, 3);
  sqcRYGate(q, -0.10037134785758453, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4148002008906928, 4);
  sqcRYGate(q, 0.6787694523665992, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.741421499993928, 4);
  sqcRYGate(q, 0.004634196011622442, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.4474815887102697, 5);
  sqcRYGate(q, -1.3385856123624764, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1391156768885984, 5);
  sqcRYGate(q, -3.1367299516000116, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2836382148206136, 6);
  sqcRYGate(q, 2.40865874756438, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 1.417183259781388, 6);
  sqcRYGate(q, 3.0762878250126238, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -2.1164642879587574, 7);
  sqcRYGate(q, 2.0402326553736545, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4943320427387965, 7);
  sqcRYGate(q, 0.6868770250376087, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.6644680706611856, 8);
  sqcRYGate(q, -1.4039994939914142, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -0.28713928821506984, 8);
  sqcRYGate(q, -0.12144178192157895, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 2.5782966061360604, 9);
  sqcRYGate(q, 0.22128193867239518, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.1231734365299615, 9);
  sqcRYGate(q, 2.00517716022774, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.8501356864865435, 0);
  sqcRYGate(q, 0.3389709791954466, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.48937406442672593, 0);
  sqcRYGate(q, 1.1870618914334816, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.782041530831616, 2);
  sqcRYGate(q, -2.261069619644397, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9250823367643162, 2);
  sqcRYGate(q, 2.1071145485506, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.74458721259899, 4);
  sqcRYGate(q, 1.2856030371331164, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8434220793401197, 4);
  sqcRYGate(q, 1.512536694540933, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.417014218104474, 6);
  sqcRYGate(q, 2.5148661022760246, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.26559244480642086, 6);
  sqcRYGate(q, -1.6905409697622977, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8223314820288055, 8);
  sqcRYGate(q, 0.38965839211638814, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.1374398657369253, 8);
  sqcRYGate(q, -1.3540164469402622, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.561196900992428, 10);
  sqcRYGate(q, 2.0475111042595024, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.0388797135869883, 10);
  sqcRYGate(q, -1.1701088763853729, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.14894725231871528, 0);
  sqcRYGate(q, -2.783408148924638, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0370096802393878, 0);
  sqcRYGate(q, 0.7314229167718054, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.41355719551973813, 2);
  sqcRYGate(q, 3.104193206738475, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.22315730356801475, 2);
  sqcRYGate(q, -3.120236217257807, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.04496992936612276, 4);
  sqcRYGate(q, 1.1347318423108623, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.1411633115113426, 4);
  sqcRYGate(q, -0.5271192586782791, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.9722144647104831, 6);
  sqcRYGate(q, -2.260917886603119, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.7517705820031048, 6);
  sqcRYGate(q, -3.129785173910285, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.6914132089201352, 8);
  sqcRYGate(q, 0.2408094275335036, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.404675991175508, 8);
  sqcRYGate(q, -1.650517164074408, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.9162002793613065, 1);
  sqcRYGate(q, -0.05028388930393923, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.119744976352005, 1);
  sqcRYGate(q, -0.9075086240229631, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.95943164378547, 3);
  sqcRYGate(q, 3.019360303345792, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.988752928105198, 3);
  sqcRYGate(q, -2.4222454689747637, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.5562004595864263, 5);
  sqcRYGate(q, -2.8998286251347145, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.140173354041353, 5);
  sqcRYGate(q, 3.140800929147703, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.9461488038712976, 7);
  sqcRYGate(q, -2.222822130978369, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.5571481756420873, 7);
  sqcRYGate(q, -2.3149900715340546, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.8843077938092582, 9);
  sqcRYGate(q, -2.0224430212284177, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.1699819044797024, 9);
  sqcRYGate(q, -0.6196108372581399, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.581787140452693, 0);
  sqcRYGate(q, 1.1862776846559049, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2592366770449415, 0);
  sqcRYGate(q, -2.2327720697451907, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9032833645258558, 1);
  sqcRYGate(q, 0.821784814995747, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.021211497802315, 1);
  sqcRYGate(q, -1.0339533621865322, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4834927547536907, 2);
  sqcRYGate(q, -2.183817427021535, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.08998117527288117, 2);
  sqcRYGate(q, -2.0506673655988514, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.5361963549989452, 3);
  sqcRYGate(q, 3.1390027866343124, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5041370184021003, 3);
  sqcRYGate(q, 3.138551164540727, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0452797833172838, 4);
  sqcRYGate(q, 2.1613911383851647, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.1408833974046844, 4);
  sqcRYGate(q, 0.0005933340325041669, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.41773487244809004, 5);
  sqcRYGate(q, 0.27484025763113884, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0019152477177879488, 5);
  sqcRYGate(q, -0.09426053771505494, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9398385469457323, 6);
  sqcRYGate(q, -1.3643816708425156, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -2.819424362908901, 6);
  sqcRYGate(q, -0.019536960390854115, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 2.3534959188684073, 7);
  sqcRYGate(q, -0.888316904429189, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.68994272336114, 7);
  sqcRYGate(q, -0.25342828928794453, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.7685447773094407, 8);
  sqcRYGate(q, 0.9287659538781359, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 2.2611920753334367, 8);
  sqcRYGate(q, 2.5326502200799097, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -0.9080906372364002, 9);
  sqcRYGate(q, -2.6711952420525717, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.4589714959883145, 9);
  sqcRYGate(q, -3.132131836527595, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.4213197572405634, 0);
  sqcRYGate(q, 2.6245031680433915, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1476522532922226, 0);
  sqcRYGate(q, 3.1181813637989033, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5792109879574563, 2);
  sqcRYGate(q, 0.7418924879247251, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9247019439274986, 2);
  sqcRYGate(q, 2.548684617212124, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1714927589747406, 4);
  sqcRYGate(q, -2.968098546691016, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3339023762942512, 4);
  sqcRYGate(q, 0.40069745514592886, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0949680144871539, 6);
  sqcRYGate(q, -0.501696398410279, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0026718203961433318, 6);
  sqcRYGate(q, 0.011624153361692535, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4669613919664283, 8);
  sqcRYGate(q, -0.33163506625657035, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.1183810937962972, 8);
  sqcRYGate(q, 0.604513075580215, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.23259456534847467, 10);
  sqcRYGate(q, -2.7591305246458844, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.4504728955919288, 10);
  sqcRYGate(q, 0.35454225733422806, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.565627186935816, 0);
  sqcRYGate(q, -1.146078287514352, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.070753915420308, 0);
  sqcRYGate(q, 0.1907599933627614, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2318772596375294, 2);
  sqcRYGate(q, -0.5021850571160738, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.027387076607437777, 2);
  sqcRYGate(q, -3.1370207001254626, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.4715570983758384, 4);
  sqcRYGate(q, -2.8530364656349065, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.7384236956189474, 4);
  sqcRYGate(q, -3.02312761737371, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.4956336060221323, 6);
  sqcRYGate(q, 1.094213182648474, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.0031183008598771877, 6);
  sqcRYGate(q, -4.410295492230607e-05, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.3675460948678904, 8);
  sqcRYGate(q, -1.8841845756159976, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.3058854842660608, 8);
  sqcRYGate(q, -2.5742360162589017, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.9231833745254074, 1);
  sqcRYGate(q, -1.690646625763471, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7328138277566716, 1);
  sqcRYGate(q, 1.5106771682732667, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5766247162827298, 3);
  sqcRYGate(q, 0.0004085482709708583, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.5729518582042248, 3);
  sqcRYGate(q, 1.2681282031871262, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.571243828364901, 5);
  sqcRYGate(q, -2.450538493504238, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.1374257730937822, 5);
  sqcRYGate(q, -0.0051736294047293185, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.9376138408246796, 7);
  sqcRYGate(q, -1.3526382218148454, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.3664861931693896, 7);
  sqcRYGate(q, 2.43404854718725, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.810616769114744, 9);
  sqcRYGate(q, -0.6266519143153921, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.3797401741538808, 9);
  sqcRYGate(q, 1.6976607125490295, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.3221452726599563, 0);
  sqcRYGate(q, 3.0852524439669025, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.1048082583310297, 0);
  sqcRYGate(q, 3.131720418821791, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.7157012733330292, 1);
  sqcRYGate(q, 1.6585512630602153, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5145077108549797, 1);
  sqcRYGate(q, 1.4970519893942411, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0318081741411573, 2);
  sqcRYGate(q, -2.3013035342238974, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 3.139274904208818, 2);
  sqcRYGate(q, 0.04198703562944227, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.5197985153018911, 3);
  sqcRYGate(q, -1.5475880916769233, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6081349478161098, 3);
  sqcRYGate(q, 3.1366213290330944, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4733771146376746, 4);
  sqcRYGate(q, 0.22011430622448297, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.0009980864541168089, 4);
  sqcRYGate(q, 3.1322651354176263, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.8416550397454354, 5);
  sqcRYGate(q, 2.300966948430797, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0006125469546438111, 5);
  sqcRYGate(q, 1.6134071787108948, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3271195173197902, 6);
  sqcRYGate(q, 3.01612377507201, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, -3.1310405130549848, 6);
  sqcRYGate(q, -0.006747461307832658, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 1.8027125198382756, 7);
  sqcRYGate(q, -1.760801146224892, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4339930109205412, 7);
  sqcRYGate(q, -2.537020892536253, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5942415611227412, 8);
  sqcRYGate(q, -0.7233392615504886, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 1.8311998728943282, 8);
  sqcRYGate(q, 0.705348073029864, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, 0.13444512216692292, 9);
  sqcRYGate(q, 0.4189113055546514, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.060309123556398, 9);
  sqcRYGate(q, -1.5381559597266188, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.9993697322751594, 0);
  sqcRYGate(q, -1.7219896229046103, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0748576436018435, 0);
  sqcRYGate(q, -0.650247654491969, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.17437375106748126, 2);
  sqcRYGate(q, -2.0379219651546516, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5655846951994112, 2);
  sqcRYGate(q, 1.5725602850044718, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.799945347913097, 4);
  sqcRYGate(q, 1.5643309776944163, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5614690386797783, 4);
  sqcRYGate(q, 3.1294261725448296, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5570451860164152, 6);
  sqcRYGate(q, -2.8622078837907856, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9406307453013767, 6);
  sqcRYGate(q, -2.670621917599447, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9439215128914817, 8);
  sqcRYGate(q, -2.6527082679944085, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.6449613482740002, 8);
  sqcRYGate(q, -2.05965210255441, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.7595550095331793, 10);
  sqcRYGate(q, -0.7113261084609519, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.3457165076334503, 10);
  sqcRYGate(q, -1.5822267289377894, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6290652374812937, 0);
  sqcRYGate(q, 1.8579114329489261, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6493308221876408, 0);
  sqcRYGate(q, -0.08098007898683335, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5465553546299602, 2);
  sqcRYGate(q, -2.4123030823630693, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.03221740317461475, 2);
  sqcRYGate(q, -3.102379114219121, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.7276623433528462, 4);
  sqcRYGate(q, -1.5308048782104935, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.084961550117282, 4);
  sqcRYGate(q, -3.0529495745215334, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.536757216084065, 6);
  sqcRYGate(q, 0.3246249537562971, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.099163606677529, 6);
  sqcRYGate(q, 3.1408165618440136, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.383113183362231, 8);
  sqcRYGate(q, -2.5619794294045484, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.444870604181136, 8);
  sqcRYGate(q, 2.1610182085782736, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.3721410396244078, 1);
  sqcRYGate(q, 1.457084489562548, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.02306898335817205, 1);
  sqcRYGate(q, 3.1302068031375962, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6719864525158794, 3);
  sqcRYGate(q, -3.0825796278363584, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.03248326335326821, 3);
  sqcRYGate(q, -0.10573981091003935, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.656528615582932, 5);
  sqcRYGate(q, 0.11868762060359223, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.00045337409378817974, 5);
  sqcRYGate(q, 3.138796122031126, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.454728341722051, 7);
  sqcRYGate(q, -0.6083064537009726, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.7129465310368541, 7);
  sqcRYGate(q, 1.572457519999504, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.5950132179788812, 9);
  sqcRYGate(q, 2.711202831395326, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.04666118221225091, 9);
  sqcRYGate(q, -2.9660420911764556, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.19425682846157155, 0);
  sqcRYGate(q, 2.997710911204672, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.1110279160444, 0);
  sqcRYGate(q, 3.133730501575697, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.851275683225893, 1);
  sqcRYGate(q, 2.040827353256132, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1346255743022869, 1);
  sqcRYGate(q, -1.546133404192024, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.285422770877192, 2);
  sqcRYGate(q, -0.6872483786807039, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.02344791668224329, 2);
  sqcRYGate(q, -3.121274172102117, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.6820373343879318, 3);
  sqcRYGate(q, -2.3625572400742665, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.007484859813316369, 3);
  sqcRYGate(q, -0.03134116905090784, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.253829865314956, 4);
  sqcRYGate(q, 2.763672724957933, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.1414772501458756, 4);
  sqcRYGate(q, 0.01890997678426487, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.206565288748129, 5);
  sqcRYGate(q, 1.4900162347186452, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8336526082655703, 5);
  sqcRYGate(q, 0.011717311291247867, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4819755060544155, 6);
  sqcRYGate(q, -1.8883524182847742, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 3.108205155213086, 6);
  sqcRYGate(q, -0.017626901626372593, 9);
  sqcCXGate(q, 6, 9);
  sqcRYGate(q, 3.0164269744468735, 7);
  sqcRYGate(q, 0.49514814983907735, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5614417596641559, 7);
  sqcRYGate(q, 3.1373236966203266, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5673267146590384, 8);
  sqcRYGate(q, -1.7128426597702984, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -3.138631366176018, 8);
  sqcRYGate(q, -0.7731509242297614, 11);
  sqcCXGate(q, 8, 11);
  sqcRYGate(q, -1.8978793602908715, 9);
  sqcRYGate(q, -2.3391910635564264, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.0006517624871182903, 9);
  sqcRYGate(q, 1.5782998344347758, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3621853186911994, 0);
  sqcRYGate(q, -1.578834307915459, 1);
  sqcRYGate(q, 2.3117388615636925, 2);
  sqcRYGate(q, -2.03375608350585, 3);
  sqcRYGate(q, -1.4469738113510875, 4);
  sqcRYGate(q, -1.1140663320762219, 5);
  sqcRYGate(q, 1.6735569844344007, 6);
  sqcRYGate(q, 0.2601623521490812, 7);
  sqcRYGate(q, 0.001214019596173892, 8);
  sqcRYGate(q, 1.5724021327034057, 9);
  sqcRYGate(q, -1.340276443027924, 10);
  sqcRYGate(q, 0.7169773252677895, 11);

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
