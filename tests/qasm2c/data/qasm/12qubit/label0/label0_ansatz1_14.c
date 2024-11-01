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

  sqcRYGate(q, -0.06467569062770978, 0);
  sqcRZGate(q, 2.2501919229780496, 0);
  sqcRYGate(q, -0.09526581028247527, 1);
  sqcRZGate(q, 1.1887851929971531, 1);
  sqcRYGate(q, -0.008676841031811655, 2);
  sqcRZGate(q, -0.4856081518553683, 2);
  sqcRYGate(q, 2.2167773467902108, 3);
  sqcRZGate(q, 1.1506259327412671, 3);
  sqcRYGate(q, 1.98144975158883, 4);
  sqcRZGate(q, -2.7145014950745447, 4);
  sqcRYGate(q, 0.006139962606760344, 5);
  sqcRZGate(q, 1.0045465933350275, 5);
  sqcRYGate(q, -2.88223298026596, 6);
  sqcRZGate(q, 1.7481653435982656, 6);
  sqcRYGate(q, 1.4095532859025963, 7);
  sqcRZGate(q, 2.2675506681296564, 7);
  sqcRYGate(q, -0.0010212432737022326, 8);
  sqcRZGate(q, 2.951529802344218, 8);
  sqcRYGate(q, 0.09484348770136464, 9);
  sqcRZGate(q, -2.7853826639240222, 9);
  sqcRYGate(q, 3.062728915386807, 10);
  sqcRZGate(q, -2.274556736336291, 10);
  sqcRYGate(q, -2.5526704050374147, 11);
  sqcRZGate(q, 0.27505610527786273, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.2256582925184336, 0);
  sqcRZGate(q, 0.8343277819461318, 0);
  sqcRYGate(q, 2.1559054015763666, 1);
  sqcRZGate(q, 0.7851615354267442, 1);
  sqcRYGate(q, -0.4410331085491972, 2);
  sqcRZGate(q, -1.522841345657102, 2);
  sqcRYGate(q, 3.029094453044467, 3);
  sqcRZGate(q, -1.457121663570681, 3);
  sqcRYGate(q, 2.146786527307877, 4);
  sqcRZGate(q, 1.7940393657145033, 4);
  sqcRYGate(q, 0.009184570338311104, 5);
  sqcRZGate(q, -1.2278920149478436, 5);
  sqcRYGate(q, -1.4135236214464024, 6);
  sqcRZGate(q, 0.7894759124314619, 6);
  sqcRYGate(q, 2.3396976489741577, 7);
  sqcRZGate(q, 2.288167906626817, 7);
  sqcRYGate(q, 3.123942080831195, 8);
  sqcRZGate(q, -2.5673200989440423, 8);
  sqcRYGate(q, 3.026505670529319, 9);
  sqcRZGate(q, 2.5492960620782634, 9);
  sqcRYGate(q, -2.6318776229810026, 10);
  sqcRZGate(q, -1.2722942221621194, 10);
  sqcRYGate(q, 3.124012810170367, 11);
  sqcRZGate(q, 1.4282862933393385, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5967887314713192, 0);
  sqcRZGate(q, 1.233409503825234, 0);
  sqcRYGate(q, -3.1346702212402735, 1);
  sqcRZGate(q, 3.0234736131416704, 1);
  sqcRYGate(q, -3.1411080812983934, 2);
  sqcRZGate(q, 1.7595874163690086, 2);
  sqcRYGate(q, 0.24167428252995418, 3);
  sqcRZGate(q, 0.8791425866736157, 3);
  sqcRYGate(q, -2.8052185112733063, 4);
  sqcRZGate(q, -1.0968121014925378, 4);
  sqcRYGate(q, -0.011071626592112693, 5);
  sqcRZGate(q, -2.860167604791512, 5);
  sqcRYGate(q, 1.6356512121183158, 6);
  sqcRZGate(q, 2.1998384657687167, 6);
  sqcRYGate(q, -0.08901336676492895, 7);
  sqcRZGate(q, 2.4801159942585005, 7);
  sqcRYGate(q, 0.005524368361578352, 8);
  sqcRZGate(q, -0.014722013274406368, 8);
  sqcRYGate(q, 0.0394175552492273, 9);
  sqcRZGate(q, 1.763570650114698, 9);
  sqcRYGate(q, 2.6327411666086444, 10);
  sqcRZGate(q, -2.4442120657998854, 10);
  sqcRYGate(q, -1.786361632367484, 11);
  sqcRZGate(q, 2.852990217739877, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.0084826277933305, 0);
  sqcRZGate(q, -2.093567472382955, 0);
  sqcRYGate(q, -1.85596922485416, 1);
  sqcRZGate(q, -0.9736304484065066, 1);
  sqcRYGate(q, -2.6353548510604714, 2);
  sqcRZGate(q, 2.8065071785007896, 2);
  sqcRYGate(q, 0.23015979400434255, 3);
  sqcRZGate(q, -1.049796795723014, 3);
  sqcRYGate(q, 0.1469592362705372, 4);
  sqcRZGate(q, 2.809411462273255, 4);
  sqcRYGate(q, -0.0040848520609060674, 5);
  sqcRZGate(q, 0.11067388623558026, 5);
  sqcRYGate(q, -1.3507151161779847, 6);
  sqcRZGate(q, -1.154751232358291, 6);
  sqcRYGate(q, 1.2563086246245065, 7);
  sqcRZGate(q, -2.0679833030824604, 7);
  sqcRYGate(q, 2.2080000788756684, 8);
  sqcRZGate(q, -0.545195002667876, 8);
  sqcRYGate(q, -3.131691033776476, 9);
  sqcRZGate(q, 2.2539257208609516, 9);
  sqcRYGate(q, -1.904240320050234, 10);
  sqcRZGate(q, -2.831254407744546, 10);
  sqcRYGate(q, -0.8937018245946299, 11);
  sqcRZGate(q, -1.05774661964277, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.9273342031521149, 0);
  sqcRZGate(q, -0.7791689110619112, 0);
  sqcRYGate(q, 0.00532012540055716, 1);
  sqcRZGate(q, -2.4632442119717783, 1);
  sqcRYGate(q, -3.141471382489694, 2);
  sqcRZGate(q, -0.8603406555980504, 2);
  sqcRYGate(q, -1.886993264994806, 3);
  sqcRZGate(q, 0.17628525968318876, 3);
  sqcRYGate(q, -2.351547550813063, 4);
  sqcRZGate(q, 1.0153515019816117, 4);
  sqcRYGate(q, 2.5781924838558217, 5);
  sqcRZGate(q, -2.3942482488906864, 5);
  sqcRYGate(q, 0.5971027109074744, 6);
  sqcRZGate(q, -0.3893605551908896, 6);
  sqcRYGate(q, -0.01723117665485674, 7);
  sqcRZGate(q, -2.2745159821828187, 7);
  sqcRYGate(q, 1.2801765441080244, 8);
  sqcRZGate(q, 0.8621682391875467, 8);
  sqcRYGate(q, -3.1388253175541614, 9);
  sqcRZGate(q, -2.938478024355918, 9);
  sqcRYGate(q, -2.7119168692242748, 10);
  sqcRZGate(q, 2.2202055119386728, 10);
  sqcRYGate(q, -0.22835283773891837, 11);
  sqcRZGate(q, -2.1526650210367815, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.9198655985727342, 0);
  sqcRZGate(q, -0.21215322107922674, 0);
  sqcRYGate(q, -0.2969038631702432, 1);
  sqcRZGate(q, 1.3166725747925907, 1);
  sqcRYGate(q, -0.6818457915769758, 2);
  sqcRZGate(q, -0.04166715281467337, 2);
  sqcRYGate(q, 0.19277848363155847, 3);
  sqcRZGate(q, 2.876527530777272, 3);
  sqcRYGate(q, 2.9256294041851256, 4);
  sqcRZGate(q, -0.22118506206182598, 4);
  sqcRYGate(q, -3.0087805706537907, 5);
  sqcRZGate(q, -0.5123364392153904, 5);
  sqcRYGate(q, 2.2886662447959263, 6);
  sqcRZGate(q, -1.8730847954015264, 6);
  sqcRYGate(q, 0.0687628829875548, 7);
  sqcRZGate(q, -0.45467347879340897, 7);
  sqcRYGate(q, -2.5863105343889754, 8);
  sqcRZGate(q, -0.7258795044182857, 8);
  sqcRYGate(q, -3.1401016076808643, 9);
  sqcRZGate(q, 2.2714582362258717, 9);
  sqcRYGate(q, 2.045986530886111, 10);
  sqcRZGate(q, -3.0509055729125047, 10);
  sqcRYGate(q, -0.06530011264036606, 11);
  sqcRZGate(q, -2.331501339685766, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.6960921653591265, 0);
  sqcRZGate(q, 1.6244933104279564, 0);
  sqcRYGate(q, -0.00029621261420587075, 1);
  sqcRZGate(q, -1.2603935723163262, 1);
  sqcRYGate(q, -0.0002372421688026094, 2);
  sqcRZGate(q, -3.0228572521394335, 2);
  sqcRYGate(q, -0.7918723421125219, 3);
  sqcRZGate(q, -3.108885201300196, 3);
  sqcRYGate(q, 1.9694277292371967, 4);
  sqcRZGate(q, -2.402065027015602, 4);
  sqcRYGate(q, -1.349495913157211, 5);
  sqcRZGate(q, 2.9115065913329494, 5);
  sqcRYGate(q, -3.0914440666368668, 6);
  sqcRZGate(q, -1.7206544388930762, 6);
  sqcRYGate(q, -2.514122858635287, 7);
  sqcRZGate(q, -1.8212334380241524, 7);
  sqcRYGate(q, 3.0464282469798483, 8);
  sqcRZGate(q, -1.3889695155507198, 8);
  sqcRYGate(q, 3.1396985782560667, 9);
  sqcRZGate(q, -1.866259099646066, 9);
  sqcRYGate(q, -2.4146654264427436, 10);
  sqcRZGate(q, -2.629327167223339, 10);
  sqcRYGate(q, 3.006212144836452, 11);
  sqcRZGate(q, -2.226995100065608, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.9791732611084063, 0);
  sqcRZGate(q, 2.2504636645229015, 0);
  sqcRYGate(q, 1.0917452527262208, 1);
  sqcRZGate(q, 0.7474109338649262, 1);
  sqcRYGate(q, 1.5289246597097739, 2);
  sqcRZGate(q, -2.062284867075647, 2);
  sqcRYGate(q, -0.5633994288729438, 3);
  sqcRZGate(q, -0.024971545211389667, 3);
  sqcRYGate(q, 0.0005531291243466461, 4);
  sqcRZGate(q, 2.6972983155035757, 4);
  sqcRYGate(q, -0.29190336016263707, 5);
  sqcRZGate(q, -0.18368546502910643, 5);
  sqcRYGate(q, 0.0028938998379830494, 6);
  sqcRZGate(q, 1.9084391939933165, 6);
  sqcRYGate(q, 0.6316984816308667, 7);
  sqcRZGate(q, 2.2393422904275195, 7);
  sqcRYGate(q, -2.593464016706502, 8);
  sqcRZGate(q, -0.3573362560408535, 8);
  sqcRYGate(q, 0.03974794453346705, 9);
  sqcRZGate(q, 2.538362710695891, 9);
  sqcRYGate(q, 0.9403920225691049, 10);
  sqcRZGate(q, -2.649410495452783, 10);
  sqcRYGate(q, 2.52087928721122, 11);
  sqcRZGate(q, 2.238310610012542, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.996281837140662, 0);
  sqcRZGate(q, -2.6882736728464938, 0);
  sqcRYGate(q, -0.6403821287555189, 1);
  sqcRZGate(q, -2.5165160940362306, 1);
  sqcRYGate(q, 7.176635105210492e-05, 2);
  sqcRZGate(q, 2.6912399674992566, 2);
  sqcRYGate(q, -0.6104092650591432, 3);
  sqcRZGate(q, 3.0035333271529687, 3);
  sqcRYGate(q, -1.76662091517092, 4);
  sqcRZGate(q, -0.015322966642214551, 4);
  sqcRYGate(q, -1.3438227446155884, 5);
  sqcRZGate(q, -1.0877471248623678, 5);
  sqcRYGate(q, -3.138874216937245, 6);
  sqcRZGate(q, -1.8242362426139573, 6);
  sqcRYGate(q, -2.6700414395950984, 7);
  sqcRZGate(q, 2.294326801923897, 7);
  sqcRYGate(q, -0.3480004444647484, 8);
  sqcRZGate(q, 2.5313687614340687, 8);
  sqcRYGate(q, 3.133120194530336, 9);
  sqcRZGate(q, -2.9246341125897306, 9);
  sqcRYGate(q, -0.02823963785071193, 10);
  sqcRZGate(q, -0.013737355979120135, 10);
  sqcRYGate(q, 0.9571070560210436, 11);
  sqcRZGate(q, 0.7408703883381359, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.9679910683031507, 0);
  sqcRZGate(q, -2.9991256159761157, 0);
  sqcRYGate(q, 2.3351845439817964, 1);
  sqcRZGate(q, -0.45670703617748754, 1);
  sqcRYGate(q, -0.5107512132507503, 2);
  sqcRZGate(q, 3.0341046740244524, 2);
  sqcRYGate(q, -0.24053951549463407, 3);
  sqcRZGate(q, 1.0476084346347694, 3);
  sqcRYGate(q, 1.8879028619782423, 4);
  sqcRZGate(q, 2.2955059241082223, 4);
  sqcRYGate(q, -2.8595113646772035, 5);
  sqcRZGate(q, 0.6949460695028549, 5);
  sqcRYGate(q, -3.126324486447306, 6);
  sqcRZGate(q, -1.1859985456312714, 6);
  sqcRYGate(q, 0.7718134599110602, 7);
  sqcRZGate(q, 1.1530327549197592, 7);
  sqcRYGate(q, 0.23309066049221272, 8);
  sqcRZGate(q, -1.7168724308723744, 8);
  sqcRYGate(q, -0.017833773913842405, 9);
  sqcRZGate(q, -2.8401818024424457, 9);
  sqcRYGate(q, -2.1693495676462993, 10);
  sqcRZGate(q, 0.04833690299111866, 10);
  sqcRYGate(q, 2.486869115054299, 11);
  sqcRZGate(q, 0.49856217605157666, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.9139083044169753, 0);
  sqcRZGate(q, -0.6802816746090476, 0);
  sqcRYGate(q, -2.112771498453111, 1);
  sqcRZGate(q, -0.5227734716791792, 1);
  sqcRYGate(q, 3.1133964510138004, 2);
  sqcRZGate(q, -2.684855719815934, 2);
  sqcRYGate(q, -3.130745608108194, 3);
  sqcRZGate(q, -0.6633926331080815, 3);
  sqcRYGate(q, -0.7967435016878194, 4);
  sqcRZGate(q, -0.6268956242011448, 4);
  sqcRYGate(q, 0.1285393522544158, 5);
  sqcRZGate(q, -2.6103294089640356, 5);
  sqcRYGate(q, -0.14492217613991798, 6);
  sqcRZGate(q, 0.1843076343098069, 6);
  sqcRYGate(q, -2.6095836933814898, 7);
  sqcRZGate(q, 0.7245882344738728, 7);
  sqcRYGate(q, 1.902359537830872, 8);
  sqcRZGate(q, 1.348967929068774, 8);
  sqcRYGate(q, 3.1285025350465423, 9);
  sqcRZGate(q, -0.9971353862177239, 9);
  sqcRYGate(q, -0.017378363392790853, 10);
  sqcRZGate(q, -2.2357833019976896, 10);
  sqcRYGate(q, -2.0581365795434365, 11);
  sqcRZGate(q, 2.932934436658844, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.611806803037171, 0);
  sqcRZGate(q, -2.3837887320772264, 0);
  sqcRYGate(q, -0.5528593710517329, 1);
  sqcRZGate(q, 1.008960000359088, 1);
  sqcRYGate(q, 0.47808016110527396, 2);
  sqcRZGate(q, 0.4190351433246997, 2);
  sqcRYGate(q, 0.05302652598276225, 3);
  sqcRZGate(q, -1.7532980069553723, 3);
  sqcRYGate(q, 2.6120399495686444, 4);
  sqcRZGate(q, -1.9729355212278499, 4);
  sqcRYGate(q, 2.777222862060705, 5);
  sqcRZGate(q, -1.035775803237847, 5);
  sqcRYGate(q, 0.032285319981680376, 6);
  sqcRZGate(q, 3.1035712323896036, 6);
  sqcRYGate(q, 0.06571889486967711, 7);
  sqcRZGate(q, 2.719928999795511, 7);
  sqcRYGate(q, -0.1766230661673509, 8);
  sqcRZGate(q, 2.618760551141325, 8);
  sqcRYGate(q, -0.9763727326899793, 9);
  sqcRZGate(q, 0.12845176944766035, 9);
  sqcRYGate(q, 1.0232740331603776, 10);
  sqcRZGate(q, -1.9411444296351181, 10);
  sqcRYGate(q, 0.7466783232911443, 11);
  sqcRZGate(q, 1.3483410554385529, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.4153630202899825, 0);
  sqcRZGate(q, -2.9998401694992225, 0);
  sqcRYGate(q, -0.010220447569469826, 1);
  sqcRZGate(q, 2.3881533365677905, 1);
  sqcRYGate(q, 0.0005210999153577589, 2);
  sqcRZGate(q, -0.9414263755382728, 2);
  sqcRYGate(q, -0.009637037103113144, 3);
  sqcRZGate(q, 0.3105688763678556, 3);
  sqcRYGate(q, -1.5844357318767406, 4);
  sqcRZGate(q, 2.391749978221274, 4);
  sqcRYGate(q, 2.0003954512394584, 5);
  sqcRZGate(q, -3.057829736617219, 5);
  sqcRYGate(q, 0.12084930990579323, 6);
  sqcRZGate(q, 2.666241150707978, 6);
  sqcRYGate(q, 1.936099234136611, 7);
  sqcRZGate(q, -0.0898177437166643, 7);
  sqcRYGate(q, -0.10069570851282174, 8);
  sqcRZGate(q, 2.0718450625252904, 8);
  sqcRYGate(q, -2.012851205788804, 9);
  sqcRZGate(q, -3.1044011702721273, 9);
  sqcRYGate(q, 2.083284652687663, 10);
  sqcRZGate(q, 0.94916552805349, 10);
  sqcRYGate(q, -3.041088190810485, 11);
  sqcRZGate(q, 1.7959012762754865, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.2073931596202576, 0);
  sqcRZGate(q, 2.5258663903102683, 0);
  sqcRYGate(q, -2.2750022082847177, 1);
  sqcRZGate(q, -0.023816368650112513, 1);
  sqcRYGate(q, 1.477877258707908, 2);
  sqcRZGate(q, -2.931688745532729, 2);
  sqcRYGate(q, 1.5987683595408437, 3);
  sqcRZGate(q, 1.8695079910686139, 3);
  sqcRYGate(q, -0.14639935947811256, 4);
  sqcRZGate(q, -2.1158320954975087, 4);
  sqcRYGate(q, -2.2029860771351677, 5);
  sqcRZGate(q, -3.007787899312121, 5);
  sqcRYGate(q, -3.1410804842272007, 6);
  sqcRZGate(q, -0.7027220259700891, 6);
  sqcRYGate(q, 2.7478803010331414, 7);
  sqcRZGate(q, 0.10446199338529016, 7);
  sqcRYGate(q, -3.139895283863502, 8);
  sqcRZGate(q, 1.8509785986976628, 8);
  sqcRYGate(q, 2.3411974691373545, 9);
  sqcRZGate(q, 1.2466887736140075, 9);
  sqcRYGate(q, -2.7471281658419695, 10);
  sqcRZGate(q, -1.302697428857762, 10);
  sqcRYGate(q, -1.1425710848136512, 11);
  sqcRZGate(q, 1.3702994485595572, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.1577451564640113, 0);
  sqcRZGate(q, 1.075725512344266, 0);
  sqcRYGate(q, -0.004378759782200261, 1);
  sqcRZGate(q, 0.39842890717751056, 1);
  sqcRYGate(q, -1.655886391764336, 2);
  sqcRZGate(q, 2.602456791545646, 2);
  sqcRYGate(q, 0.000794352060462522, 3);
  sqcRZGate(q, -2.181454715182369, 3);
  sqcRYGate(q, 3.104569652703228, 4);
  sqcRZGate(q, 1.771978202491275, 4);
  sqcRYGate(q, -1.1848061546857427, 5);
  sqcRZGate(q, 1.689119303258939, 5);
  sqcRYGate(q, 0.04437074061484581, 6);
  sqcRZGate(q, 0.7894066054123376, 6);
  sqcRYGate(q, -1.5541078204847332, 7);
  sqcRZGate(q, 2.807049973338069, 7);
  sqcRYGate(q, 0.07027395249507484, 8);
  sqcRZGate(q, -0.38280803336045466, 8);
  sqcRYGate(q, -2.67296359311839, 9);
  sqcRZGate(q, 0.057226614880527826, 9);
  sqcRYGate(q, 0.014013670805255552, 10);
  sqcRZGate(q, 0.16905579385029523, 10);
  sqcRYGate(q, -0.9752271110146683, 11);
  sqcRZGate(q, -0.6441605012161337, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.8988543962178555, 0);
  sqcRZGate(q, -0.708158309328681, 0);
  sqcRYGate(q, 1.5377812233243775, 1);
  sqcRZGate(q, 2.1933753599192274, 1);
  sqcRYGate(q, 0.7207401204613536, 2);
  sqcRZGate(q, 0.3821271409592342, 2);
  sqcRYGate(q, 3.106889922248008, 3);
  sqcRZGate(q, 1.3408304877237676, 3);
  sqcRYGate(q, -2.3802372875723754, 4);
  sqcRZGate(q, 1.2597026109492815, 4);
  sqcRYGate(q, -1.855832066041252, 5);
  sqcRZGate(q, -2.7404097828692806, 5);
  sqcRYGate(q, -2.773275948819147, 6);
  sqcRZGate(q, 0.959669249273082, 6);
  sqcRYGate(q, -0.41897861254995794, 7);
  sqcRZGate(q, -1.7735588296322229, 7);
  sqcRYGate(q, -3.0676129962308725, 8);
  sqcRZGate(q, 2.2853825004104356, 8);
  sqcRYGate(q, 0.07012577476602377, 9);
  sqcRZGate(q, -1.7242554268210497, 9);
  sqcRYGate(q, 3.1384491485764365, 10);
  sqcRZGate(q, 1.229209983363451, 10);
  sqcRYGate(q, 1.4555054947288593, 11);
  sqcRZGate(q, 0.2263344306353927, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5497125672784304, 0);
  sqcRZGate(q, -3.0220726485671516, 0);
  sqcRYGate(q, 3.137279967518642, 1);
  sqcRZGate(q, 2.059958451757902, 1);
  sqcRYGate(q, -0.0031033593204780495, 2);
  sqcRZGate(q, -1.7859352718347747, 2);
  sqcRYGate(q, -3.141052894615732, 3);
  sqcRZGate(q, -1.5665148116338674, 3);
  sqcRYGate(q, -3.119697491633496, 4);
  sqcRZGate(q, 1.6585132661387503, 4);
  sqcRYGate(q, -0.02048293797293521, 5);
  sqcRZGate(q, -1.7355557807271031, 5);
  sqcRYGate(q, 3.1122848997833583, 6);
  sqcRZGate(q, 1.217912953463137, 6);
  sqcRYGate(q, -0.011099194843002813, 7);
  sqcRZGate(q, -1.8526137931401312, 7);
  sqcRYGate(q, 0.022414261531895383, 8);
  sqcRZGate(q, -1.7369887419917278, 8);
  sqcRYGate(q, 2.112036584054612, 9);
  sqcRZGate(q, -2.1340821966160393, 9);
  sqcRYGate(q, -3.077314245084136, 10);
  sqcRZGate(q, -2.0786010312971523, 10);
  sqcRYGate(q, -0.6498832219410113, 11);
  sqcRZGate(q, 2.5132319401953773, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.061456317173612975, 0);
  sqcRZGate(q, 1.4573269174661627, 0);
  sqcRYGate(q, 0.2288629158149221, 1);
  sqcRZGate(q, -1.4056075387408573, 1);
  sqcRYGate(q, -0.3587203057523973, 2);
  sqcRZGate(q, 0.20093941484393252, 2);
  sqcRYGate(q, -3.05717823820177, 3);
  sqcRZGate(q, 1.4732301994285015, 3);
  sqcRYGate(q, 0.8160959564720697, 4);
  sqcRZGate(q, 2.646615750857231, 4);
  sqcRYGate(q, 0.53586701354459, 5);
  sqcRZGate(q, -0.6522248365928326, 5);
  sqcRYGate(q, 2.857734293535181, 6);
  sqcRZGate(q, 1.9197833290431872, 6);
  sqcRYGate(q, 0.2628521144282656, 7);
  sqcRZGate(q, -0.9013421335217037, 7);
  sqcRYGate(q, -3.115733728066329, 8);
  sqcRZGate(q, -0.686860234920732, 8);
  sqcRYGate(q, 0.09187845241838818, 9);
  sqcRZGate(q, 0.21167261739835957, 9);
  sqcRYGate(q, -3.0289173070015147, 10);
  sqcRZGate(q, -0.4122101973474023, 10);
  sqcRYGate(q, -1.5587188025777436, 11);
  sqcRZGate(q, -0.8609986749019084, 11);

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
