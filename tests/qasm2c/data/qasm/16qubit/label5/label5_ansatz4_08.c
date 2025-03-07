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

  sqcRYGate(q, 1.061534053359476, 0);
  sqcRZGate(q, 0.027946558772447005, 0);
  sqcRYGate(q, 1.3167872055430158e-06, 1);
  sqcRZGate(q, 1.4462813835095323, 1);
  sqcRYGate(q, -3.1382058899695826, 2);
  sqcRZGate(q, -2.243869673451634, 2);
  sqcRYGate(q, -0.0045267828295862955, 3);
  sqcRZGate(q, -1.9968174477539478, 3);
  sqcRYGate(q, 3.140853159979244, 4);
  sqcRZGate(q, -2.2350395393831803, 4);
  sqcRYGate(q, 2.9092036164890622, 5);
  sqcRZGate(q, 1.567613694661796, 5);
  sqcRYGate(q, 1.5638770527785741, 6);
  sqcRZGate(q, 1.8212589996477007, 6);
  sqcRYGate(q, 3.141360022944114, 7);
  sqcRZGate(q, 0.10665799616630346, 7);
  sqcRYGate(q, -1.1041121556587541e-05, 8);
  sqcRZGate(q, -0.039855508626195586, 8);
  sqcRYGate(q, 1.5848418926086767, 9);
  sqcRZGate(q, -1.0810242811225002, 9);
  sqcRYGate(q, -0.5504896912045556, 10);
  sqcRZGate(q, 0.21581292813586828, 10);
  sqcRYGate(q, -1.5707562421067678, 11);
  sqcRZGate(q, -1.5699109008247285, 11);
  sqcRYGate(q, -5.978638784323544e-05, 12);
  sqcRZGate(q, -2.009614906154415, 12);
  sqcRYGate(q, -2.528630686526867e-05, 13);
  sqcRZGate(q, -0.7466886261300613, 13);
  sqcRYGate(q, 3.108284963369845, 14);
  sqcRZGate(q, -2.439637582457651, 14);
  sqcRYGate(q, 1.5523296636053738, 15);
  sqcRZGate(q, -0.6069937940700558, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.1791335581012863, 0);
  sqcRZGate(q, 1.9494709649437734, 0);
  sqcRYGate(q, 3.140921776663699, 1);
  sqcRZGate(q, -1.6646142326254445, 1);
  sqcRYGate(q, 1.5734103607750296, 2);
  sqcRZGate(q, 1.6580829949850184, 2);
  sqcRYGate(q, -1.570124924682419, 3);
  sqcRZGate(q, -0.0023435125909463395, 3);
  sqcRYGate(q, -3.1415925551626747, 4);
  sqcRZGate(q, 0.4225108141491125, 4);
  sqcRYGate(q, -3.0952968725170256, 5);
  sqcRZGate(q, -2.851200725819063, 5);
  sqcRYGate(q, -0.3908400005686647, 6);
  sqcRZGate(q, -2.436422260926339, 6);
  sqcRYGate(q, -1.7031222501628918e-05, 7);
  sqcRZGate(q, -1.614595257538035, 7);
  sqcRYGate(q, -5.832198572974789e-07, 8);
  sqcRZGate(q, -3.0189069631468795, 8);
  sqcRYGate(q, -4.684870125615248e-06, 9);
  sqcRZGate(q, 2.532911524257529, 9);
  sqcRYGate(q, 3.1415271811738794, 10);
  sqcRZGate(q, -1.374982870381809, 10);
  sqcRYGate(q, -1.6321413293690372, 11);
  sqcRZGate(q, 0.0028286470696782524, 11);
  sqcRYGate(q, 0.5303438168727227, 12);
  sqcRZGate(q, -1.5955082597291002, 12);
  sqcRYGate(q, 2.063841522344476e-06, 13);
  sqcRZGate(q, 1.3958374118056724, 13);
  sqcRYGate(q, -0.0005793269487632813, 14);
  sqcRZGate(q, -0.7485333410076755, 14);
  sqcRYGate(q, 3.1191309615709892, 15);
  sqcRZGate(q, -2.177685924006287, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 3.1414652872298996, 0);
  sqcRZGate(q, 0.11111435852844996, 0);
  sqcRYGate(q, -1.5995838513311176, 1);
  sqcRZGate(q, -1.2820747030039792, 1);
  sqcRYGate(q, 1.4598341715333951, 2);
  sqcRZGate(q, -2.234469349028895, 2);
  sqcRYGate(q, 0.6612166320985612, 3);
  sqcRZGate(q, 0.016075653254021383, 3);
  sqcRYGate(q, 2.8912242461426474, 4);
  sqcRZGate(q, -2.2572663744243653, 4);
  sqcRYGate(q, -3.1413454715027993, 5);
  sqcRZGate(q, 1.0038544207439797, 5);
  sqcRYGate(q, 0.006970519061777217, 6);
  sqcRZGate(q, 0.6656652973636943, 6);
  sqcRYGate(q, -1.570778075121977, 7);
  sqcRZGate(q, 0.00016010187157800004, 7);
  sqcRYGate(q, 2.229573457246813e-06, 8);
  sqcRZGate(q, -2.9452195750787356, 8);
  sqcRYGate(q, -1.551381497655631, 9);
  sqcRZGate(q, -3.1242408873263994, 9);
  sqcRYGate(q, 1.5647086145596125, 10);
  sqcRZGate(q, -0.14928701496886368, 10);
  sqcRYGate(q, -3.0920702474250428, 11);
  sqcRZGate(q, 0.0033961026898365883, 11);
  sqcRYGate(q, 3.1415720160909126, 12);
  sqcRZGate(q, -1.4564256890630707, 12);
  sqcRYGate(q, 4.5817324549446425e-05, 13);
  sqcRZGate(q, 3.061836347065971, 13);
  sqcRYGate(q, 3.1218198261474472, 14);
  sqcRZGate(q, -0.1501822560172882, 14);
  sqcRYGate(q, -1.388723277427803, 15);
  sqcRZGate(q, 0.5571002550967039, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.12152455324352383, 0);
  sqcRZGate(q, 1.613142916290796, 0);
  sqcRYGate(q, -3.141146244846103, 1);
  sqcRZGate(q, -0.39781710261755876, 1);
  sqcRYGate(q, 1.5705342042417563, 2);
  sqcRZGate(q, -0.7819894086594843, 2);
  sqcRYGate(q, -0.682705931225466, 3);
  sqcRZGate(q, 3.0890698449912253, 3);
  sqcRYGate(q, 1.2025945670164498e-06, 4);
  sqcRZGate(q, 2.175447236868442, 4);
  sqcRYGate(q, 3.1413680737508165, 5);
  sqcRZGate(q, 2.60807000122051, 5);
  sqcRYGate(q, -1.57259299661372, 6);
  sqcRZGate(q, -0.5758416290202991, 6);
  sqcRYGate(q, -1.5690049079468853, 7);
  sqcRZGate(q, -0.9726737368498957, 7);
  sqcRYGate(q, -1.5707977957700736, 8);
  sqcRZGate(q, 1.5707757639185747, 8);
  sqcRYGate(q, 1.5707957174055722, 9);
  sqcRZGate(q, 0.1084717869751808, 9);
  sqcRYGate(q, -3.1413089288395146, 10);
  sqcRZGate(q, 0.8250460248654434, 10);
  sqcRYGate(q, -2.18400942826901, 11);
  sqcRZGate(q, -1.571766817856762, 11);
  sqcRYGate(q, 0.5059320017383643, 12);
  sqcRZGate(q, -2.2079134849247843, 12);
  sqcRYGate(q, -1.5708172743190554, 13);
  sqcRZGate(q, -3.1415819082668888, 13);
  sqcRYGate(q, -0.00029101705130152306, 14);
  sqcRZGate(q, 0.9917867556618285, 14);
  sqcRYGate(q, -3.1415688309432457, 15);
  sqcRZGate(q, 1.7508653737291477, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.49138886730392706, 0);
  sqcRZGate(q, -0.03021949734033758, 0);
  sqcRYGate(q, 1.5709839426307388, 1);
  sqcRZGate(q, -0.08967993741767315, 1);
  sqcRYGate(q, -1.570929120159696, 2);
  sqcRZGate(q, 3.1413350173226555, 2);
  sqcRYGate(q, 1.8077658484553085, 3);
  sqcRZGate(q, 1.8092420968404435, 3);
  sqcRYGate(q, 5.807613443575831e-05, 4);
  sqcRZGate(q, 0.10455206130523198, 4);
  sqcRYGate(q, 0.014566941923844112, 5);
  sqcRZGate(q, 2.8408298041534605, 5);
  sqcRYGate(q, 3.141591151443452, 6);
  sqcRZGate(q, 0.9974573472251694, 6);
  sqcRYGate(q, -3.141580908650103, 7);
  sqcRZGate(q, 0.42171007033959373, 7);
  sqcRYGate(q, 2.4889953653936336, 8);
  sqcRZGate(q, 1.5598848499477236, 8);
  sqcRYGate(q, -3.1415846375664587, 9);
  sqcRZGate(q, 1.3221145435445294, 9);
  sqcRYGate(q, 1.4086525992773602e-05, 10);
  sqcRZGate(q, -0.9805860670866218, 10);
  sqcRYGate(q, 1.5707980010451452, 11);
  sqcRZGate(q, -1.5707330016373868, 11);
  sqcRYGate(q, -2.6203185601678327e-05, 12);
  sqcRZGate(q, 2.2004404863272766, 12);
  sqcRYGate(q, -1.5708136306562561, 13);
  sqcRZGate(q, 1.0309245762600883, 13);
  sqcRYGate(q, -1.5170459950837012e-05, 14);
  sqcRZGate(q, 1.6269350125106525, 14);
  sqcRYGate(q, 3.141549787356395, 15);
  sqcRZGate(q, 2.958210785703303, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.676139291853515, 0);
  sqcRZGate(q, -1.5566617108796503, 0);
  sqcRYGate(q, 0.028141395601813897, 1);
  sqcRZGate(q, -3.051878630040376, 1);
  sqcRYGate(q, 1.5649254493042821, 2);
  sqcRZGate(q, 1.571564355273321, 2);
  sqcRYGate(q, -3.1304889881524365, 3);
  sqcRZGate(q, 1.799053130048442, 3);
  sqcRYGate(q, 3.1415538953318536, 4);
  sqcRZGate(q, -1.5471492753059781, 4);
  sqcRYGate(q, -1.5708315469891667, 5);
  sqcRZGate(q, -0.468543812008206, 5);
  sqcRYGate(q, 0.8573321017442305, 6);
  sqcRZGate(q, 0.8744205197041817, 6);
  sqcRYGate(q, -1.5703742387126063, 7);
  sqcRZGate(q, -0.8093244956598016, 7);
  sqcRYGate(q, -3.1294869984258655, 8);
  sqcRZGate(q, 2.4771369302598143, 8);
  sqcRYGate(q, 7.614609945161277e-05, 9);
  sqcRZGate(q, 0.7262008579697072, 9);
  sqcRYGate(q, 0.86388672416847, 10);
  sqcRZGate(q, 3.137265274160222, 10);
  sqcRYGate(q, 1.5695153601367802, 11);
  sqcRZGate(q, -1.5707620915914546, 11);
  sqcRYGate(q, 0.4600882248662108, 12);
  sqcRZGate(q, -0.25197490221559526, 12);
  sqcRYGate(q, 9.659060762334803e-05, 13);
  sqcRZGate(q, -2.601771136213047, 13);
  sqcRYGate(q, 3.141581135831501, 14);
  sqcRZGate(q, -1.3824395575408817, 14);
  sqcRYGate(q, -7.682542522800309e-07, 15);
  sqcRZGate(q, 2.9479592082396384, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.790641501395188, 0);
  sqcRZGate(q, -3.1169944173155146, 0);
  sqcRYGate(q, -1.5718315753438372, 1);
  sqcRZGate(q, -0.019054639437674936, 1);
  sqcRYGate(q, -1.570432237232679, 2);
  sqcRZGate(q, 1.572496722649616, 2);
  sqcRYGate(q, 3.138120427891917, 3);
  sqcRZGate(q, -3.0392773026824083, 3);
  sqcRYGate(q, -1.0622384621407939, 4);
  sqcRZGate(q, 1.8454295140074022, 4);
  sqcRYGate(q, -3.14151207870923, 5);
  sqcRZGate(q, 2.5036269428275, 5);
  sqcRYGate(q, -1.8704073196929016e-06, 6);
  sqcRZGate(q, 2.263174173228227, 6);
  sqcRYGate(q, -3.141592397236661, 7);
  sqcRZGate(q, -0.8063246969914313, 7);
  sqcRYGate(q, -1.760471083134263e-05, 8);
  sqcRZGate(q, 0.6535623377451758, 8);
  sqcRYGate(q, 1.515028772728932e-06, 9);
  sqcRZGate(q, 1.2017445746078834, 9);
  sqcRYGate(q, -1.5707889387751413, 10);
  sqcRZGate(q, 4.936221467096937e-06, 10);
  sqcRYGate(q, -1.5707573946842956, 11);
  sqcRZGate(q, -0.12271287044436177, 11);
  sqcRYGate(q, -3.1415867370772674, 12);
  sqcRZGate(q, -0.2518944996663741, 12);
  sqcRYGate(q, -1.5707934214231896, 13);
  sqcRZGate(q, -1.8276590430272224, 13);
  sqcRYGate(q, 3.1415781591059564, 14);
  sqcRZGate(q, 1.791076818268091, 14);
  sqcRYGate(q, 1.5707971751860788, 15);
  sqcRZGate(q, 8.577509116839208e-06, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -3.0017706792229145e-05, 0);
  sqcRZGate(q, -0.025887994466182285, 0);
  sqcRYGate(q, 1.5710655904171285, 1);
  sqcRZGate(q, -1.0555890259772465, 1);
  sqcRYGate(q, -1.5728899556018132, 2);
  sqcRZGate(q, 1.6901457555340924, 2);
  sqcRYGate(q, 1.5708238999212356, 3);
  sqcRZGate(q, 0.0021562074446714874, 3);
  sqcRYGate(q, 0.0001671786759827043, 4);
  sqcRZGate(q, 0.17133874131280535, 4);
  sqcRYGate(q, 0.002252436191916729, 5);
  sqcRZGate(q, 1.4356204551758296, 5);
  sqcRYGate(q, 2.370372577970677, 6);
  sqcRZGate(q, -2.522909576985199e-05, 6);
  sqcRYGate(q, 1.570807058947544, 7);
  sqcRZGate(q, 2.8004482828342945, 7);
  sqcRYGate(q, 1.570835017974013, 8);
  sqcRZGate(q, 3.141591469276836, 8);
  sqcRYGate(q, -1.5707964827788166, 9);
  sqcRZGate(q, -1.5707908624426516, 9);
  sqcRYGate(q, 1.5707929265972733, 10);
  sqcRZGate(q, -2.4140174023963548, 10);
  sqcRYGate(q, 3.643883496024455e-06, 11);
  sqcRZGate(q, 0.12587900574326363, 11);
  sqcRYGate(q, -1.5708189865702193, 12);
  sqcRZGate(q, -1.4344103011934264, 12);
  sqcRYGate(q, -3.140278992385288, 13);
  sqcRZGate(q, -3.0650066934333933, 13);
  sqcRYGate(q, 1.3660741863213918e-05, 14);
  sqcRZGate(q, 2.19131515942074, 14);
  sqcRYGate(q, 1.5708810956356345, 15);
  sqcRZGate(q, 0.29023226184687356, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.5707625837271313, 0);
  sqcRZGate(q, 2.315371036058822, 0);
  sqcRYGate(q, -3.1414976879435956, 1);
  sqcRZGate(q, -1.0556267015410787, 1);
  sqcRYGate(q, 1.5688280207104954, 2);
  sqcRZGate(q, -3.1410905545938066, 2);
  sqcRYGate(q, 1.5707762317561889, 3);
  sqcRZGate(q, -1.5256563111602324, 3);
  sqcRYGate(q, 1.0616829880687705e-05, 4);
  sqcRZGate(q, -0.437395041573838, 4);
  sqcRYGate(q, -4.697085876603779e-05, 5);
  sqcRZGate(q, 2.6932040076122843, 5);
  sqcRYGate(q, 1.5708743546999875, 6);
  sqcRZGate(q, 1.5229609434656328, 6);
  sqcRYGate(q, -5.250573662542663e-05, 7);
  sqcRZGate(q, -1.370341724755459, 7);
  sqcRYGate(q, -1.5707983718606038, 8);
  sqcRZGate(q, 2.2909905969796918, 8);
  sqcRYGate(q, -1.5707960267299166, 9);
  sqcRZGate(q, -1.5707999875820624, 9);
  sqcRYGate(q, -6.848454207286636e-06, 10);
  sqcRZGate(q, -2.2983655948751798, 10);
  sqcRYGate(q, 1.570790163565428, 11);
  sqcRZGate(q, -2.9057745935638852, 11);
  sqcRYGate(q, -3.3435644292206644e-05, 12);
  sqcRZGate(q, -1.1113677461298623, 12);
  sqcRYGate(q, -3.141577081092409, 13);
  sqcRZGate(q, 1.9042517127961212, 13);
  sqcRYGate(q, -1.5707859770135086, 14);
  sqcRZGate(q, -1.5707919712397946, 14);
  sqcRYGate(q, 3.1415850703599655, 15);
  sqcRZGate(q, -2.851342711033099, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.0012635585425399584, 0);
  sqcRZGate(q, 1.8574910937737936, 0);
  sqcRYGate(q, -1.5708256398532914, 1);
  sqcRZGate(q, 1.5703454466475542, 1);
  sqcRYGate(q, 1.571719955962465, 2);
  sqcRZGate(q, -0.5824468682954373, 2);
  sqcRYGate(q, -1.5708380551239864, 3);
  sqcRZGate(q, 1.5712078981430773, 3);
  sqcRYGate(q, 3.087334001484922, 4);
  sqcRZGate(q, 2.4089411704127404, 4);
  sqcRYGate(q, 3.1415275598573063, 5);
  sqcRZGate(q, -0.08859164847867068, 5);
  sqcRYGate(q, 6.270876713425898e-06, 6);
  sqcRZGate(q, 0.04751729959549955, 6);
  sqcRYGate(q, 1.5707221352245089, 7);
  sqcRZGate(q, 3.0200210538004275, 7);
  sqcRYGate(q, 3.1415347268915883, 8);
  sqcRZGate(q, 2.2122457305296073, 8);
  sqcRYGate(q, -1.5784448134160076, 9);
  sqcRZGate(q, 3.1414447498992657, 9);
  sqcRYGate(q, -1.5708233977298418, 10);
  sqcRZGate(q, 0.7593451840440838, 10);
  sqcRYGate(q, 3.141526942502671, 11);
  sqcRZGate(q, 1.4120777369976079, 11);
  sqcRYGate(q, -3.843550070414146e-05, 12);
  sqcRZGate(q, 2.996753945262991, 12);
  sqcRYGate(q, 1.5707980729755462, 13);
  sqcRZGate(q, -1.5706459375569528, 13);
  sqcRYGate(q, -1.5716438245406428, 14);
  sqcRZGate(q, 1.5708171696423368, 14);
  sqcRYGate(q, 1.5707936773385798, 15);
  sqcRZGate(q, 3.1384605502869136, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.01918124743871008, 0);
  sqcRZGate(q, 2.1087897194062597, 0);
  sqcRYGate(q, 1.570942573327682, 1);
  sqcRZGate(q, 0.6538465110429934, 1);
  sqcRYGate(q, 0.003939031429440051, 2);
  sqcRZGate(q, 2.1532391465570595, 2);
  sqcRYGate(q, -1.5708320366613586, 3);
  sqcRZGate(q, 3.1213305999905585, 3);
  sqcRYGate(q, 8.863627715349764e-06, 4);
  sqcRZGate(q, 2.3121005485318107, 4);
  sqcRYGate(q, -3.1415902662305313, 5);
  sqcRZGate(q, 0.9012316756957901, 5);
  sqcRYGate(q, 1.570845863542108, 6);
  sqcRZGate(q, -1.569843849671897, 6);
  sqcRYGate(q, -3.1410545807351777, 7);
  sqcRZGate(q, 0.042529541294765494, 7);
  sqcRYGate(q, 1.5708022400364978, 8);
  sqcRZGate(q, 0.6498691424422739, 8);
  sqcRYGate(q, 1.570739513756516, 9);
  sqcRZGate(q, -3.1415913700506115, 9);
  sqcRYGate(q, -8.00031664277243e-07, 10);
  sqcRZGate(q, 1.3030953226880273, 10);
  sqcRYGate(q, -1.6013736110522807e-06, 11);
  sqcRZGate(q, -1.1762618406801284, 11);
  sqcRYGate(q, -3.141567699628456, 12);
  sqcRZGate(q, 0.8180099318105718, 12);
  sqcRYGate(q, 1.5708876602014072, 13);
  sqcRZGate(q, -1.5708035268932807, 13);
  sqcRYGate(q, -1.570804911550718, 14);
  sqcRZGate(q, 3.1397889625343876, 14);
  sqcRYGate(q, 0.12793959875270142, 15);
  sqcRZGate(q, -0.6974614286061322, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.4482036576024926, 0);
  sqcRZGate(q, -2.870708950244729, 0);
  sqcRYGate(q, -0.0030874452370124317, 1);
  sqcRZGate(q, -1.6959160123825585, 1);
  sqcRYGate(q, 1.5746041274037124, 2);
  sqcRZGate(q, -1.3029796667418352, 2);
  sqcRYGate(q, 3.1415722251982103, 3);
  sqcRZGate(q, 2.069151516753639, 3);
  sqcRYGate(q, -1.570810200965333, 4);
  sqcRZGate(q, 0.2691112258892951, 4);
  sqcRYGate(q, 1.8978312312789573e-05, 5);
  sqcRZGate(q, -2.8497440845616375, 5);
  sqcRYGate(q, 1.5708209376169036, 6);
  sqcRZGate(q, -1.3016465129969197, 6);
  sqcRYGate(q, 5.780466044096138e-07, 7);
  sqcRZGate(q, -2.777105752876361, 7);
  sqcRYGate(q, 9.311502311426523e-06, 8);
  sqcRZGate(q, -0.380723576547651, 8);
  sqcRYGate(q, 1.5707962838673684, 9);
  sqcRZGate(q, 0.5287595797238718, 9);
  sqcRYGate(q, 7.2511173483391644e-06, 10);
  sqcRZGate(q, 2.919087963125075, 10);
  sqcRYGate(q, 1.5707926773222152, 11);
  sqcRZGate(q, 0.5286625484452623, 11);
  sqcRYGate(q, 0.00010378463575030011, 12);
  sqcRZGate(q, -0.09825678926165106, 12);
  sqcRYGate(q, -1.5707417370742958, 13);
  sqcRZGate(q, 0.5284969627630938, 13);
  sqcRYGate(q, 0.08364218484308594, 14);
  sqcRZGate(q, 0.27094963629962615, 14);
  sqcRYGate(q, 5.092680961382712e-07, 15);
  sqcRZGate(q, 1.2292358568177049, 15);

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
