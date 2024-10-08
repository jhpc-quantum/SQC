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

  sqcRYGate(q, 0.6781900734254784, 0);
  sqcRZGate(q, -1.18491042556935, 0);
  sqcRYGate(q, -2.2704488710107906, 1);
  sqcRZGate(q, 1.216383368173729, 1);
  sqcRYGate(q, 0.005921401070197381, 2);
  sqcRZGate(q, -0.5952617086857694, 2);
  sqcRYGate(q, 0.0462560817084255, 3);
  sqcRZGate(q, 3.108528755747115, 3);
  sqcRYGate(q, 3.076294835513372, 4);
  sqcRZGate(q, 0.7095557111973267, 4);
  sqcRYGate(q, 2.9660946579709178, 5);
  sqcRZGate(q, -1.2672642437497206, 5);
  sqcRYGate(q, 1.6792621883163505, 6);
  sqcRZGate(q, 1.1083664270199556, 6);
  sqcRYGate(q, 0.17248307120183792, 7);
  sqcRZGate(q, -1.5530149916254432, 7);
  sqcRYGate(q, 1.6291107707425811, 8);
  sqcRZGate(q, 0.019328234944286486, 8);
  sqcRYGate(q, -1.4760670440191852, 9);
  sqcRZGate(q, 3.1189316017976014, 9);
  sqcRYGate(q, 0.2281964367901903, 10);
  sqcRZGate(q, -0.06162779180323481, 10);
  sqcRYGate(q, -1.4876206897249828, 11);
  sqcRZGate(q, -1.5619073415117395, 11);
  sqcRYGate(q, 0.001183252709196836, 12);
  sqcRZGate(q, 0.08797467298100667, 12);
  sqcRYGate(q, 0.007083966349633791, 13);
  sqcRZGate(q, -2.565358700193443, 13);
  sqcRYGate(q, 0.7639583424329823, 14);
  sqcRZGate(q, 0.1322125794479296, 14);
  sqcRYGate(q, 2.4549579604841862, 15);
  sqcRZGate(q, 2.7955264253100087, 15);
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
  sqcRYGate(q, -1.918156694455396, 0);
  sqcRZGate(q, 1.581602965407627, 0);
  sqcRYGate(q, -1.2082087946641624, 1);
  sqcRZGate(q, 0.8735993174021663, 1);
  sqcRYGate(q, -3.050758782237556, 2);
  sqcRZGate(q, 1.544996452523655, 2);
  sqcRYGate(q, -0.7028632201082514, 3);
  sqcRZGate(q, 2.660294264653131, 3);
  sqcRYGate(q, -0.5397878383951555, 4);
  sqcRZGate(q, 1.3096856360756295, 4);
  sqcRYGate(q, -2.140004359499346, 5);
  sqcRZGate(q, 1.031691601904669, 5);
  sqcRYGate(q, -0.023941812709723287, 6);
  sqcRZGate(q, -0.3940238892419004, 6);
  sqcRYGate(q, -3.054326356230811, 7);
  sqcRZGate(q, -1.5232718725375598, 7);
  sqcRYGate(q, 1.5611210705494094, 8);
  sqcRZGate(q, 3.0904091294195886, 8);
  sqcRYGate(q, 1.5810202843339645, 9);
  sqcRZGate(q, -3.1156955559474566, 9);
  sqcRYGate(q, -0.34012128569005906, 10);
  sqcRZGate(q, -1.211048387538669, 10);
  sqcRYGate(q, 1.5565971613910594, 11);
  sqcRZGate(q, 0.4189289022636764, 11);
  sqcRYGate(q, -2.2524329174725315, 12);
  sqcRZGate(q, -1.6117953409571417, 12);
  sqcRYGate(q, -2.592456814189626, 13);
  sqcRZGate(q, 0.5941110492980943, 13);
  sqcRYGate(q, -2.6403105852075686, 14);
  sqcRZGate(q, 2.964515770140543, 14);
  sqcRYGate(q, 2.5804848113220453, 15);
  sqcRZGate(q, 1.4472047194237798, 15);
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
  sqcRYGate(q, 1.5345369781693299, 0);
  sqcRZGate(q, -0.4609398183999656, 0);
  sqcRYGate(q, -1.310892070368058, 1);
  sqcRZGate(q, 1.1442027749848709, 1);
  sqcRYGate(q, -0.6910394942681197, 2);
  sqcRZGate(q, -1.6603974634992325, 2);
  sqcRYGate(q, 1.2883512222054607, 3);
  sqcRZGate(q, -2.05493669524043, 3);
  sqcRYGate(q, 0.006992003261335689, 4);
  sqcRZGate(q, 0.543531360700512, 4);
  sqcRYGate(q, 3.1293926739190243, 5);
  sqcRZGate(q, -0.8042245519162892, 5);
  sqcRYGate(q, -1.4464926623453698, 6);
  sqcRZGate(q, 1.4256774144065603, 6);
  sqcRYGate(q, -3.00622131099513, 7);
  sqcRZGate(q, -0.5621963301263291, 7);
  sqcRYGate(q, 1.5298900311400354, 8);
  sqcRZGate(q, 2.2770545293534727, 8);
  sqcRYGate(q, 1.6285259806819838, 9);
  sqcRZGate(q, -2.6537264207108078, 9);
  sqcRYGate(q, 3.071560138215905, 10);
  sqcRZGate(q, 1.7073134684553892, 10);
  sqcRYGate(q, 0.0617153594374198, 11);
  sqcRZGate(q, -0.8026261914317238, 11);
  sqcRYGate(q, 0.09355455194445476, 12);
  sqcRZGate(q, 1.6664572009219683, 12);
  sqcRYGate(q, -0.05875937709170387, 13);
  sqcRZGate(q, 1.3717423210331736, 13);
  sqcRYGate(q, 3.101461840697442, 14);
  sqcRZGate(q, -1.0064861059470365, 14);
  sqcRYGate(q, -2.7716219820708914, 15);
  sqcRZGate(q, 1.5339600954082098, 15);
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
  sqcRYGate(q, -0.5892452066214636, 0);
  sqcRZGate(q, 2.262022506762642, 0);
  sqcRYGate(q, 1.6392093496485802, 1);
  sqcRZGate(q, -0.11604989426231249, 1);
  sqcRYGate(q, 3.0120844350276013, 2);
  sqcRZGate(q, -0.357869991423839, 2);
  sqcRYGate(q, 0.5374730082945538, 3);
  sqcRZGate(q, 1.797202064457574, 3);
  sqcRYGate(q, 0.00892096160707604, 4);
  sqcRZGate(q, -2.162291211370689, 4);
  sqcRYGate(q, -0.0013082991399553379, 5);
  sqcRZGate(q, -2.034376486360081, 5);
  sqcRYGate(q, 1.5830366056526106, 6);
  sqcRZGate(q, 0.10965375896121177, 6);
  sqcRYGate(q, 0.16039934726530336, 7);
  sqcRZGate(q, 0.6835700936085926, 7);
  sqcRYGate(q, -0.16530678300334234, 8);
  sqcRZGate(q, -0.8142887714318497, 8);
  sqcRYGate(q, -2.6503792089937113, 9);
  sqcRZGate(q, -1.366099321320408, 9);
  sqcRYGate(q, -0.7746579093619569, 10);
  sqcRZGate(q, -2.0140506516415613, 10);
  sqcRYGate(q, 0.06426947406993211, 11);
  sqcRZGate(q, -2.761453205908476, 11);
  sqcRYGate(q, -0.599955906345622, 12);
  sqcRZGate(q, 1.4123667252509873, 12);
  sqcRYGate(q, 2.7983470715087773, 13);
  sqcRZGate(q, -1.5059986889361343, 13);
  sqcRYGate(q, 2.2522503496547364, 14);
  sqcRZGate(q, -1.2106484552149093, 14);
  sqcRYGate(q, -3.083135439980073, 15);
  sqcRZGate(q, -0.23322784042579273, 15);
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
  sqcRYGate(q, -2.1997609787058146, 0);
  sqcRZGate(q, 2.522547771416283, 0);
  sqcRYGate(q, -2.226093969681901, 1);
  sqcRZGate(q, -2.806012603738818, 1);
  sqcRYGate(q, 1.804844638181363, 2);
  sqcRZGate(q, -0.7383549132054043, 2);
  sqcRYGate(q, -0.8147423043217523, 3);
  sqcRZGate(q, -2.400860100415201, 3);
  sqcRYGate(q, 2.967378535206831, 4);
  sqcRZGate(q, 3.0406428532706777, 4);
  sqcRYGate(q, 2.9699096436617562, 5);
  sqcRZGate(q, -0.4677813389998198, 5);
  sqcRYGate(q, 1.4738694389013602, 6);
  sqcRZGate(q, -2.1860953380741632, 6);
  sqcRYGate(q, 1.5311395632029001, 7);
  sqcRZGate(q, -1.5512956174591395, 7);
  sqcRYGate(q, 3.1388604915333915, 8);
  sqcRZGate(q, -0.6989221747608635, 8);
  sqcRYGate(q, -3.1324437641481624, 9);
  sqcRZGate(q, 1.8085780546002628, 9);
  sqcRYGate(q, -0.002755285519844719, 10);
  sqcRZGate(q, 2.168523446620936, 10);
  sqcRYGate(q, -0.02312856096224003, 11);
  sqcRZGate(q, 2.0532281738784874, 11);
  sqcRYGate(q, -0.0005997965966076553, 12);
  sqcRZGate(q, 2.8409827931720657, 12);
  sqcRYGate(q, 2.2130098137706504, 13);
  sqcRZGate(q, 0.5822344981564186, 13);
  sqcRYGate(q, -2.3185081021087033, 14);
  sqcRZGate(q, 2.6984479010544398, 14);
  sqcRYGate(q, 2.9140081336549435, 15);
  sqcRZGate(q, 1.1600751833831175, 15);
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
  sqcRYGate(q, 1.4505391601517759, 0);
  sqcRZGate(q, -1.555646079230267, 0);
  sqcRYGate(q, -1.679075525709823, 1);
  sqcRZGate(q, -1.7917013366537757, 1);
  sqcRYGate(q, -3.091630764157109, 2);
  sqcRZGate(q, 2.4649750470221528, 2);
  sqcRYGate(q, 0.20826985542011459, 3);
  sqcRZGate(q, 0.6040373251743004, 3);
  sqcRYGate(q, 3.1403407481216377, 4);
  sqcRZGate(q, -1.7065729713722353, 4);
  sqcRYGate(q, 3.1414847956685814, 5);
  sqcRZGate(q, -1.7753398326345282, 5);
  sqcRYGate(q, -3.0342404432889443, 6);
  sqcRZGate(q, 2.4556531236751225, 6);
  sqcRYGate(q, -1.2670404374352913, 7);
  sqcRZGate(q, 0.16071548555162088, 7);
  sqcRYGate(q, 0.5240599015703873, 8);
  sqcRZGate(q, -2.038222038321917, 8);
  sqcRYGate(q, 1.1841415612790642, 9);
  sqcRZGate(q, -0.8276905281850606, 9);
  sqcRYGate(q, 1.9481104824402595, 10);
  sqcRZGate(q, -0.03474922547685023, 10);
  sqcRYGate(q, 1.586267415361376, 11);
  sqcRZGate(q, 1.7013543407345608, 11);
  sqcRYGate(q, -2.2077190219910454, 12);
  sqcRZGate(q, -0.9857184711057023, 12);
  sqcRYGate(q, 2.5914242857744103, 13);
  sqcRZGate(q, 0.2572165854485658, 13);
  sqcRYGate(q, 2.514703100415604, 14);
  sqcRZGate(q, -2.330001119974462, 14);
  sqcRYGate(q, -2.8945876716978907, 15);
  sqcRZGate(q, 1.5187525308925114, 15);
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
  sqcRYGate(q, -1.0468902822789208, 0);
  sqcRZGate(q, 2.899926894985258, 0);
  sqcRYGate(q, -2.2785489228839375, 1);
  sqcRZGate(q, 2.2508585194013326, 1);
  sqcRYGate(q, 1.2430152821766223, 2);
  sqcRZGate(q, 1.1377050817310836, 2);
  sqcRYGate(q, 2.3808991659141308, 3);
  sqcRZGate(q, -2.588625813334914, 3);
  sqcRYGate(q, 0.14146420965469284, 4);
  sqcRZGate(q, 2.549143700857348, 4);
  sqcRYGate(q, 3.052108294190572, 5);
  sqcRZGate(q, 2.4250625799466152, 5);
  sqcRYGate(q, 0.07093997539500307, 6);
  sqcRZGate(q, 0.13990941980266403, 6);
  sqcRYGate(q, -1.5729823573349648, 7);
  sqcRZGate(q, -1.5494445255907978, 7);
  sqcRYGate(q, -0.03808041803084983, 8);
  sqcRZGate(q, 2.0740666417552553, 8);
  sqcRYGate(q, -3.0135730612693457, 9);
  sqcRZGate(q, 1.9267626236265132, 9);
  sqcRYGate(q, 0.0017737767574379497, 10);
  sqcRZGate(q, 0.04509605522432203, 10);
  sqcRYGate(q, -3.125997724981437, 11);
  sqcRZGate(q, 0.1725393142709993, 11);
  sqcRYGate(q, 0.04660835184650569, 12);
  sqcRZGate(q, -1.9100910511633007, 12);
  sqcRYGate(q, 3.1349248783546417, 13);
  sqcRZGate(q, 1.6950232301701116, 13);
  sqcRYGate(q, -0.9748316601879381, 14);
  sqcRZGate(q, -2.103833623309015, 14);
  sqcRYGate(q, 2.8587767978625065, 15);
  sqcRZGate(q, -0.5709832228188981, 15);
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
  sqcRYGate(q, 0.8639049057272543, 0);
  sqcRZGate(q, -1.1178919941501944, 0);
  sqcRYGate(q, 0.14048184365908156, 1);
  sqcRZGate(q, 0.3530393803261864, 1);
  sqcRYGate(q, 2.9217303567977773, 2);
  sqcRZGate(q, 2.4478982120961175, 2);
  sqcRYGate(q, 0.41469945587641366, 3);
  sqcRZGate(q, -0.7296605093983599, 3);
  sqcRYGate(q, -3.126650470448718, 4);
  sqcRZGate(q, 2.5381856615836753, 4);
  sqcRYGate(q, -3.138324998415725, 5);
  sqcRZGate(q, -0.5511427971907619, 5);
  sqcRYGate(q, -3.007915344869149, 6);
  sqcRZGate(q, -3.0171703518049684, 6);
  sqcRYGate(q, 0.3003959037095758, 7);
  sqcRZGate(q, 3.13863851679082, 7);
  sqcRYGate(q, 1.5851155458024542, 8);
  sqcRZGate(q, 1.6167924415950994, 8);
  sqcRYGate(q, -1.5313990412388652, 9);
  sqcRZGate(q, 1.5258941660302252, 9);
  sqcRYGate(q, 1.4888248064381753, 10);
  sqcRZGate(q, 2.548269114282465, 10);
  sqcRYGate(q, 1.8548432278562785, 11);
  sqcRZGate(q, -3.062393156037931, 11);
  sqcRYGate(q, 2.390312591629922, 12);
  sqcRZGate(q, 1.8950284248586833, 12);
  sqcRYGate(q, -1.1326966795775606, 13);
  sqcRZGate(q, 0.13414544823722305, 13);
  sqcRYGate(q, -1.8283284952011916, 14);
  sqcRZGate(q, -1.6171198833987397, 14);
  sqcRYGate(q, -2.9924610243382164, 15);
  sqcRZGate(q, 1.9609117271213097, 15);
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
  sqcRYGate(q, -1.4481800051843816, 0);
  sqcRZGate(q, -0.07801903667500465, 0);
  sqcRYGate(q, 1.3953181174381228, 1);
  sqcRZGate(q, -0.22169991283838442, 1);
  sqcRYGate(q, -3.0422097012911684, 2);
  sqcRZGate(q, 0.9586438602597704, 2);
  sqcRYGate(q, -0.12224094151048877, 3);
  sqcRZGate(q, -2.418608044704738, 3);
  sqcRYGate(q, 2.331296909329528, 4);
  sqcRZGate(q, -3.062865563750681, 4);
  sqcRYGate(q, -3.1195756393952947, 5);
  sqcRZGate(q, -0.32253230094989865, 5);
  sqcRYGate(q, -2.993459471620447, 6);
  sqcRZGate(q, -0.3865765321568785, 6);
  sqcRYGate(q, -0.7293003676532434, 7);
  sqcRZGate(q, -0.06448846210461608, 7);
  sqcRYGate(q, -1.6671910210566188, 8);
  sqcRZGate(q, 3.1361513314006793, 8);
  sqcRYGate(q, 1.5864933616013737, 9);
  sqcRZGate(q, -3.135381370441802, 9);
  sqcRYGate(q, 3.1415172864353282, 10);
  sqcRZGate(q, 2.1190726021719293, 10);
  sqcRYGate(q, -0.005397850319724284, 11);
  sqcRZGate(q, -2.350077133317543, 11);
  sqcRYGate(q, 1.5222177450089835, 12);
  sqcRZGate(q, -3.099002808313265, 12);
  sqcRYGate(q, -1.5775618694657565, 13);
  sqcRZGate(q, 3.1244704911379233, 13);
  sqcRYGate(q, -0.12235741168412684, 14);
  sqcRZGate(q, -2.078327124482759, 14);
  sqcRYGate(q, -2.9405507685279546, 15);
  sqcRZGate(q, 1.1581474148620488, 15);
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
  sqcRYGate(q, 1.5367388173518364, 0);
  sqcRZGate(q, -2.8248608797734702, 0);
  sqcRYGate(q, 1.8317888203524273, 1);
  sqcRZGate(q, -0.5497343132993184, 1);
  sqcRYGate(q, 0.9459553183727339, 2);
  sqcRZGate(q, 1.4821681774142332, 2);
  sqcRYGate(q, -3.08956012524805, 3);
  sqcRZGate(q, -0.040831408902636035, 3);
  sqcRYGate(q, 3.1228166494234078, 4);
  sqcRZGate(q, 1.3494092315807231, 4);
  sqcRYGate(q, 3.1321066082438187, 5);
  sqcRZGate(q, -1.488326708653105, 5);
  sqcRYGate(q, -3.127662073128537, 6);
  sqcRZGate(q, -0.3870003986453617, 6);
  sqcRYGate(q, 0.014209533367131932, 7);
  sqcRZGate(q, 0.12612343959104244, 7);
  sqcRYGate(q, 1.5922502098798483, 8);
  sqcRZGate(q, -3.090023004533922, 8);
  sqcRYGate(q, -1.516314629312581, 9);
  sqcRZGate(q, -3.0363369470592114, 9);
  sqcRYGate(q, 0.014732889498578315, 10);
  sqcRZGate(q, 1.68702575609488, 10);
  sqcRYGate(q, -0.006927850618367326, 11);
  sqcRZGate(q, -0.8094010516113057, 11);
  sqcRYGate(q, 1.571543497808129, 12);
  sqcRZGate(q, -2.027239496556623, 12);
  sqcRYGate(q, -1.5416164246175463, 13);
  sqcRZGate(q, -1.2406879903522465, 13);
  sqcRYGate(q, 1.927009086804651, 14);
  sqcRZGate(q, 0.32736051080415324, 14);
  sqcRYGate(q, 0.05891961175069196, 15);
  sqcRZGate(q, 0.7387237961937574, 15);
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
  sqcRYGate(q, 0.03028008488401758, 0);
  sqcRZGate(q, 0.8883007415076034, 0);
  sqcRYGate(q, -0.05715099943792959, 1);
  sqcRZGate(q, -2.0811989423547326, 1);
  sqcRYGate(q, -1.597069202411264, 2);
  sqcRZGate(q, -3.0875077382164107, 2);
  sqcRYGate(q, -3.141309210995745, 3);
  sqcRZGate(q, 2.1382605879373457, 3);
  sqcRYGate(q, -1.9023116958920934, 4);
  sqcRZGate(q, 0.6401941556897296, 4);
  sqcRYGate(q, 0.30556957792239636, 5);
  sqcRZGate(q, -1.7928108805026346, 5);
  sqcRYGate(q, 0.5036032182893586, 6);
  sqcRZGate(q, 1.1308790759791822, 6);
  sqcRYGate(q, -0.12927750991588455, 7);
  sqcRZGate(q, 1.1539665679266171, 7);
  sqcRYGate(q, 2.160238767551186, 8);
  sqcRZGate(q, -1.8813952358812216, 8);
  sqcRYGate(q, -0.43211667195711717, 9);
  sqcRZGate(q, -2.0933697571925594, 9);
  sqcRYGate(q, -3.00581153075584, 10);
  sqcRZGate(q, -0.7128015839653299, 10);
  sqcRYGate(q, -1.84222025918218, 11);
  sqcRZGate(q, -1.8716010232625138, 11);
  sqcRYGate(q, -2.007766825086578, 12);
  sqcRZGate(q, 0.7857205844098578, 12);
  sqcRYGate(q, 0.8520126262081908, 13);
  sqcRZGate(q, 1.0626397350334464, 13);
  sqcRYGate(q, 0.6432251360753626, 14);
  sqcRZGate(q, -1.2877222313816852, 14);
  sqcRYGate(q, -0.21216646776052972, 15);
  sqcRZGate(q, 0.7803377385713762, 15);

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
