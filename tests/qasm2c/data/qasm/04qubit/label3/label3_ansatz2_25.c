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

  sqcRYGate(q, 1.3509454350287102, 0);
  sqcRZGate(q, -0.5067388619521442, 0);
  sqcRYGate(q, 1.928238745589847, 1);
  sqcRZGate(q, 3.011995166538488, 1);
  sqcRYGate(q, 1.8235428104587996, 2);
  sqcRZGate(q, 0.09305223071720814, 2);
  sqcRYGate(q, -0.5451670674456893, 3);
  sqcRZGate(q, -0.24455486240230495, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.254503540241694, 0);
  sqcRZGate(q, -2.0220491855798244, 0);
  sqcRYGate(q, 0.1429314659780312, 1);
  sqcRZGate(q, 2.6136434024473765, 1);
  sqcRYGate(q, -1.2890743123959725, 2);
  sqcRZGate(q, 0.49246523501042466, 2);
  sqcRYGate(q, -1.214542724362297, 3);
  sqcRZGate(q, 0.23860647939521626, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.25819773424835457, 0);
  sqcRZGate(q, -1.7797307897466415, 0);
  sqcRYGate(q, 0.8378219667801865, 1);
  sqcRZGate(q, -0.9901197879918099, 1);
  sqcRYGate(q, -2.4034649126727192, 2);
  sqcRZGate(q, 3.0025931719393166, 2);
  sqcRYGate(q, -0.7520800867911435, 3);
  sqcRZGate(q, 0.2557409004775028, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.756533127732639, 0);
  sqcRZGate(q, 2.496327542610463, 0);
  sqcRYGate(q, 0.6447331936262585, 1);
  sqcRZGate(q, 1.3829923570606497, 1);
  sqcRYGate(q, -0.26274326622382116, 2);
  sqcRZGate(q, 1.4625756025744419, 2);
  sqcRYGate(q, 0.8989934914658658, 3);
  sqcRZGate(q, -1.8177815479736417, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.7024242855643232, 0);
  sqcRZGate(q, 1.9350289118043051, 0);
  sqcRYGate(q, -1.3552666446075676, 1);
  sqcRZGate(q, -1.7862625970835708, 1);
  sqcRYGate(q, -2.2196215328111455, 2);
  sqcRZGate(q, -2.5169208504645817, 2);
  sqcRYGate(q, 1.8557669709673006, 3);
  sqcRZGate(q, 2.5847215436535373, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.8731607267824106, 0);
  sqcRZGate(q, 0.40379441281069756, 0);
  sqcRYGate(q, -0.07835777911634237, 1);
  sqcRZGate(q, 0.01987170512791092, 1);
  sqcRYGate(q, 2.9698783014217134, 2);
  sqcRZGate(q, 0.44671338547370815, 2);
  sqcRYGate(q, -0.18580973245029453, 3);
  sqcRZGate(q, 2.4379208891139914, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.9136121094798177, 0);
  sqcRZGate(q, 1.1847468467618776, 0);
  sqcRYGate(q, -2.2637403092738957, 1);
  sqcRZGate(q, 0.30904314909886377, 1);
  sqcRYGate(q, -0.6584129726177279, 2);
  sqcRZGate(q, -1.909681864792088, 2);
  sqcRYGate(q, -2.110026694200854, 3);
  sqcRZGate(q, 0.8329319570773084, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.16782204921115, 0);
  sqcRZGate(q, -2.555668243026419, 0);
  sqcRYGate(q, -2.61056644543163, 1);
  sqcRZGate(q, 0.6849338538062649, 1);
  sqcRYGate(q, -2.539155361211289, 2);
  sqcRZGate(q, 2.158659430574545, 2);
  sqcRYGate(q, -1.988648999029743, 3);
  sqcRZGate(q, -0.5721876690853861, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.7783761075754025, 0);
  sqcRZGate(q, -0.8768607498844038, 0);
  sqcRYGate(q, -0.6582957380061636, 1);
  sqcRZGate(q, -2.052531980441368, 1);
  sqcRYGate(q, 0.8023387086753253, 2);
  sqcRZGate(q, 0.6277209449580736, 2);
  sqcRYGate(q, -1.364648909622379, 3);
  sqcRZGate(q, 3.118042792564813, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.4069833520599256, 0);
  sqcRZGate(q, 1.912987809022567, 0);
  sqcRYGate(q, -0.06986081423701487, 1);
  sqcRZGate(q, 1.4963705171396546, 1);
  sqcRYGate(q, -2.9839854180815517, 2);
  sqcRZGate(q, -1.3276359107988833, 2);
  sqcRYGate(q, -0.756279627913917, 3);
  sqcRZGate(q, -0.8631925749557858, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.23793255624672513, 0);
  sqcRZGate(q, 2.112967868848462, 0);
  sqcRYGate(q, 0.6908236560640587, 1);
  sqcRZGate(q, 3.1291605864647174, 1);
  sqcRYGate(q, -0.13029502004907378, 2);
  sqcRZGate(q, -0.08499075705925305, 2);
  sqcRYGate(q, 0.12840222460415074, 3);
  sqcRZGate(q, -2.5690196366994558, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.9029276328752208, 0);
  sqcRZGate(q, 2.5612649559806635, 0);
  sqcRYGate(q, 0.49207646000582045, 1);
  sqcRZGate(q, 0.5708074501678668, 1);
  sqcRYGate(q, -2.21128184264521, 2);
  sqcRZGate(q, 1.9288928722334984, 2);
  sqcRYGate(q, -2.3178921189209576, 3);
  sqcRZGate(q, -2.072416305570375, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.789374903158541, 0);
  sqcRZGate(q, -2.6051818193958924, 0);
  sqcRYGate(q, -0.6393104463230932, 1);
  sqcRZGate(q, 0.0787697575300064, 1);
  sqcRYGate(q, -0.9930302385254367, 2);
  sqcRZGate(q, 0.9016164106812808, 2);
  sqcRYGate(q, -1.1881744214491823, 3);
  sqcRZGate(q, -0.9066864652336433, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.3599742361649523, 0);
  sqcRZGate(q, 1.7109732602141792, 0);
  sqcRYGate(q, -1.852716913562195, 1);
  sqcRZGate(q, 0.853263968673663, 1);
  sqcRYGate(q, 1.2955293160304873, 2);
  sqcRZGate(q, 2.0246778777180023, 2);
  sqcRYGate(q, -0.21613821326351135, 3);
  sqcRZGate(q, 2.4800100495770363, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.5398171952404558, 0);
  sqcRZGate(q, 2.5295318761857972, 0);
  sqcRYGate(q, -0.38414501497098835, 1);
  sqcRZGate(q, 2.625807510651427, 1);
  sqcRYGate(q, 1.0284523407278483, 2);
  sqcRZGate(q, -1.5808808387145639, 2);
  sqcRYGate(q, 2.664601290801112, 3);
  sqcRZGate(q, -1.82360331162488, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.6363038460427994, 0);
  sqcRZGate(q, -2.625510849949639, 0);
  sqcRYGate(q, 3.002162913270757, 1);
  sqcRZGate(q, 2.599400591830557, 1);
  sqcRYGate(q, -1.6447453856264458, 2);
  sqcRZGate(q, 0.3805341394640113, 2);
  sqcRYGate(q, 2.0286693508039173, 3);
  sqcRZGate(q, -0.6160470832502639, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.260466876259309, 0);
  sqcRZGate(q, 2.732848430410498, 0);
  sqcRYGate(q, -1.6528432656965357, 1);
  sqcRZGate(q, -1.6154257482503271, 1);
  sqcRYGate(q, -2.9622100999142402, 2);
  sqcRZGate(q, -1.0807291426648256, 2);
  sqcRYGate(q, -1.3738014849604403, 3);
  sqcRZGate(q, -2.151350476225936, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.648781084472432, 0);
  sqcRZGate(q, -0.5893850024706966, 0);
  sqcRYGate(q, -0.5400220998221956, 1);
  sqcRZGate(q, -1.2837212481491216, 1);
  sqcRYGate(q, -2.872366728472223, 2);
  sqcRZGate(q, 0.5597393051681863, 2);
  sqcRYGate(q, 2.874654696811323, 3);
  sqcRZGate(q, -0.42478892966710957, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.9149180108894281, 0);
  sqcRZGate(q, -0.6988803262835814, 0);
  sqcRYGate(q, -2.161617708074197, 1);
  sqcRZGate(q, 0.8588770759146357, 1);
  sqcRYGate(q, -0.06599141139990718, 2);
  sqcRZGate(q, 0.7475637939453335, 2);
  sqcRYGate(q, 2.2874144918779025, 3);
  sqcRZGate(q, 0.8063466115412699, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.16366170221295, 0);
  sqcRZGate(q, -1.112048419398475, 0);
  sqcRYGate(q, 2.761123358525729, 1);
  sqcRZGate(q, 3.005094277342955, 1);
  sqcRYGate(q, -0.5601655478810724, 2);
  sqcRZGate(q, -2.1503560614971997, 2);
  sqcRYGate(q, -0.9292307021520186, 3);
  sqcRZGate(q, -2.529550919515297, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.77222051161194, 0);
  sqcRZGate(q, -1.4635579440241557, 0);
  sqcRYGate(q, -1.778593388533996, 1);
  sqcRZGate(q, 0.7427247939723273, 1);
  sqcRYGate(q, 2.9568941904792716, 2);
  sqcRZGate(q, 0.3129521809606891, 2);
  sqcRYGate(q, 0.6202773914723714, 3);
  sqcRZGate(q, -2.0679537525901024, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.6969739481260192, 0);
  sqcRZGate(q, -1.220541103945941, 0);
  sqcRYGate(q, -0.005678086363782419, 1);
  sqcRZGate(q, 0.7762061293402711, 1);
  sqcRYGate(q, 2.600200986121579, 2);
  sqcRZGate(q, 0.802038613644668, 2);
  sqcRYGate(q, -0.8256215616751806, 3);
  sqcRZGate(q, -1.319104152427565, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.32051017900293427, 0);
  sqcRZGate(q, 1.9901464813352476, 0);
  sqcRYGate(q, -0.7952598410043151, 1);
  sqcRZGate(q, -1.4443447968596432, 1);
  sqcRYGate(q, -2.4989272296636345, 2);
  sqcRZGate(q, -1.3908532107606382, 2);
  sqcRYGate(q, 3.065063081191388, 3);
  sqcRZGate(q, -2.9563068296692854, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.576352368739033, 0);
  sqcRZGate(q, -2.326294950077892, 0);
  sqcRYGate(q, -1.9620565066371356, 1);
  sqcRZGate(q, -2.1842976493915423, 1);
  sqcRYGate(q, -0.3128341938334061, 2);
  sqcRZGate(q, 0.7330973938731603, 2);
  sqcRYGate(q, -2.863912108470703, 3);
  sqcRZGate(q, -1.120433338615063, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.3381525274352946, 0);
  sqcRZGate(q, 2.323732660612964, 0);
  sqcRYGate(q, 1.2551173361007582, 1);
  sqcRZGate(q, 2.62171764542251, 1);
  sqcRYGate(q, 0.29217425427935495, 2);
  sqcRZGate(q, 0.6436321961086477, 2);
  sqcRYGate(q, 2.6382597433879797, 3);
  sqcRZGate(q, 1.868086564890009, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.8654773997707905, 0);
  sqcRZGate(q, 0.08229869643999255, 0);
  sqcRYGate(q, 0.00976081307195198, 1);
  sqcRZGate(q, -2.56520389533068, 1);
  sqcRYGate(q, -0.3295707100698855, 2);
  sqcRZGate(q, -0.4702222223313388, 2);
  sqcRYGate(q, 1.440531080446477, 3);
  sqcRZGate(q, 0.6235305014217072, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.3049162992255745, 0);
  sqcRZGate(q, 1.8485690736666422, 0);
  sqcRYGate(q, 2.8259161254975766, 1);
  sqcRZGate(q, -3.017027250833738, 1);
  sqcRYGate(q, -2.4897577971055704, 2);
  sqcRZGate(q, 0.6235095469310474, 2);
  sqcRYGate(q, 0.5619312110454562, 3);
  sqcRZGate(q, -0.8270270697672665, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.7555283319202792, 0);
  sqcRZGate(q, -2.8275984832943757, 0);
  sqcRYGate(q, -2.87491819341835, 1);
  sqcRZGate(q, -1.6453631323084976, 1);
  sqcRYGate(q, 2.983164787522948, 2);
  sqcRZGate(q, 2.9388205090111006, 2);
  sqcRYGate(q, -2.6652268290360146, 3);
  sqcRZGate(q, -2.2278176862532635, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.7711209256045803, 0);
  sqcRZGate(q, 0.7993300740765088, 0);
  sqcRYGate(q, -2.955187237400948, 1);
  sqcRZGate(q, 2.1727482702964194, 1);
  sqcRYGate(q, -3.0471123669236273, 2);
  sqcRZGate(q, 1.4011003653492626, 2);
  sqcRYGate(q, -1.1913353417388113, 3);
  sqcRZGate(q, -1.0760192734596714, 3);

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
