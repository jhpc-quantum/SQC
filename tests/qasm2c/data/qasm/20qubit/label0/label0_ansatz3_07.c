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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -0.02646098284377645, 0);
  sqcRZGate(q, -2.62467221887167, 0);
  sqcRYGate(q, 0.05139755098952665, 1);
  sqcRZGate(q, -1.44640548557042, 1);
  sqcRYGate(q, -2.895161125478136, 2);
  sqcRZGate(q, 2.1504870411017727, 2);
  sqcRYGate(q, 1.670008190463129, 3);
  sqcRZGate(q, 0.15150128991722325, 3);
  sqcRYGate(q, 0.7343415709953858, 4);
  sqcRZGate(q, 2.7840818182631186, 4);
  sqcRYGate(q, -0.00015652714931058305, 5);
  sqcRZGate(q, 2.3427716179658766, 5);
  sqcRYGate(q, 3.1410260884576218, 6);
  sqcRZGate(q, -0.09427361769697473, 6);
  sqcRYGate(q, 0.028323221136975718, 7);
  sqcRZGate(q, 0.21509440308536462, 7);
  sqcRYGate(q, -2.5413644199281884, 8);
  sqcRZGate(q, -1.4325133628958533, 8);
  sqcRYGate(q, 1.5732636968017601, 9);
  sqcRZGate(q, 0.2706623869705301, 9);
  sqcRYGate(q, 1.4087277436701227, 10);
  sqcRZGate(q, -2.917882993668851, 10);
  sqcRYGate(q, 3.0511444172255215, 11);
  sqcRZGate(q, -2.1402197579864475, 11);
  sqcRYGate(q, -2.7535626744603388, 12);
  sqcRZGate(q, -0.8259280986855719, 12);
  sqcRYGate(q, -3.088827212594883, 13);
  sqcRZGate(q, -1.9068505994138798, 13);
  sqcRYGate(q, 0.20866030893695317, 14);
  sqcRZGate(q, 2.052456332016119, 14);
  sqcRYGate(q, 2.3009286481440197, 15);
  sqcRZGate(q, 2.960832496046251, 15);
  sqcRYGate(q, 1.1904417118493296, 16);
  sqcRZGate(q, 0.03257098782246172, 16);
  sqcRYGate(q, 0.0006267489358609572, 17);
  sqcRZGate(q, 2.2193010343630997, 17);
  sqcRYGate(q, -2.225532573360892, 18);
  sqcRZGate(q, -0.08252220791254727, 18);
  sqcRYGate(q, 0.05962157790133225, 19);
  sqcRZGate(q, -2.014296537342375, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 2.96750053525012, 0);
  sqcRZGate(q, 2.897461114589649, 0);
  sqcRYGate(q, 1.7239444066330532, 1);
  sqcRZGate(q, -1.5258480926345097, 1);
  sqcRYGate(q, 3.1413821778647084, 2);
  sqcRZGate(q, 2.2176485449496357, 2);
  sqcRYGate(q, 1.85635501947274, 3);
  sqcRZGate(q, 1.118762111963916, 3);
  sqcRYGate(q, -1.8647444707094023, 4);
  sqcRZGate(q, -1.9164273650000638, 4);
  sqcRYGate(q, 0.0010438845478359937, 5);
  sqcRZGate(q, -2.012910866113914, 5);
  sqcRYGate(q, 3.1389726814103773, 6);
  sqcRZGate(q, -2.2740809917558904, 6);
  sqcRYGate(q, 2.3060629708959555, 7);
  sqcRZGate(q, -1.5738085257030419, 7);
  sqcRYGate(q, 2.750754203340098, 8);
  sqcRZGate(q, -1.3879313304105534, 8);
  sqcRYGate(q, 0.012956154206738901, 9);
  sqcRZGate(q, 2.7437298564234287, 9);
  sqcRYGate(q, -0.04248356454073488, 10);
  sqcRZGate(q, -0.19939246296383392, 10);
  sqcRYGate(q, -3.139176470991901, 11);
  sqcRZGate(q, 1.0122627506899065, 11);
  sqcRYGate(q, -3.128987433764285, 12);
  sqcRZGate(q, 1.7436840092344097, 12);
  sqcRYGate(q, -0.018241444486107372, 13);
  sqcRZGate(q, 2.6933559647840712, 13);
  sqcRYGate(q, -0.0038560734572403864, 14);
  sqcRZGate(q, -0.9055439424995787, 14);
  sqcRYGate(q, 0.7818367993871839, 15);
  sqcRZGate(q, 2.7877317258789187, 15);
  sqcRYGate(q, -0.02655213506998482, 16);
  sqcRZGate(q, 2.012408880737489, 16);
  sqcRYGate(q, 3.140013009757202, 17);
  sqcRZGate(q, -0.6777656968806208, 17);
  sqcRYGate(q, -1.3321701959754115, 18);
  sqcRZGate(q, 2.4096142915657563, 18);
  sqcRYGate(q, -1.275952262725335, 19);
  sqcRZGate(q, 0.11194306897766727, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 0.014115017769118055, 0);
  sqcRZGate(q, 0.7562379854794724, 0);
  sqcRYGate(q, 2.879799403783342, 1);
  sqcRZGate(q, 2.964937736965109, 1);
  sqcRYGate(q, 3.1384327926521927, 2);
  sqcRZGate(q, 1.9368218256637342, 2);
  sqcRYGate(q, -3.133177540811708, 3);
  sqcRZGate(q, 1.1574172431468186, 3);
  sqcRYGate(q, 1.937297051213714, 4);
  sqcRZGate(q, 2.2243805666442533, 4);
  sqcRYGate(q, 1.6001654392462523, 5);
  sqcRZGate(q, -2.3677344820175956, 5);
  sqcRYGate(q, -0.2501828456571168, 6);
  sqcRZGate(q, -1.3764102031758938, 6);
  sqcRYGate(q, 1.605615883726211, 7);
  sqcRZGate(q, -0.21622836474969634, 7);
  sqcRYGate(q, -2.5815969832310994, 8);
  sqcRZGate(q, 0.16275195095053085, 8);
  sqcRYGate(q, 1.5827073203345965, 9);
  sqcRZGate(q, -1.5898154312311807, 9);
  sqcRYGate(q, -1.5832503785343164, 10);
  sqcRZGate(q, 0.14197869383208678, 10);
  sqcRYGate(q, -0.0913469247164862, 11);
  sqcRZGate(q, -1.9981190791593226, 11);
  sqcRYGate(q, 1.8979992927082163, 12);
  sqcRZGate(q, 0.35176787519710034, 12);
  sqcRYGate(q, -0.31279615641706254, 13);
  sqcRZGate(q, -1.1086433665938797, 13);
  sqcRYGate(q, 1.4339486740460727, 14);
  sqcRZGate(q, 0.40368812195983406, 14);
  sqcRYGate(q, 1.3374888531676723, 15);
  sqcRZGate(q, 1.7589493302317847, 15);
  sqcRYGate(q, 1.3235311004663033, 16);
  sqcRZGate(q, 3.064695165536688, 16);
  sqcRYGate(q, 3.13178240920636, 17);
  sqcRZGate(q, -2.7126274326142608, 17);
  sqcRYGate(q, -3.119031259133655, 18);
  sqcRZGate(q, 0.6604832113782829, 18);
  sqcRYGate(q, -1.7277126876090927, 19);
  sqcRZGate(q, -1.751187195853545, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -1.718127625308707, 0);
  sqcRZGate(q, 1.7233113016289847, 0);
  sqcRYGate(q, 0.33528805147908436, 1);
  sqcRZGate(q, 0.05802152388889237, 1);
  sqcRYGate(q, -3.1370007932211172, 2);
  sqcRZGate(q, -0.8277593323467816, 2);
  sqcRYGate(q, -3.1413331580793082, 3);
  sqcRZGate(q, 2.661408703258651, 3);
  sqcRYGate(q, 1.5568116850210254, 4);
  sqcRZGate(q, 1.9748788431623465, 4);
  sqcRYGate(q, -3.141255230501291, 5);
  sqcRZGate(q, -1.4390633985409864, 5);
  sqcRYGate(q, 3.141011511404279, 6);
  sqcRZGate(q, 3.1102199135702153, 6);
  sqcRYGate(q, -0.011769755245959272, 7);
  sqcRZGate(q, -2.940658155523076, 7);
  sqcRYGate(q, -1.4590229682616815, 8);
  sqcRZGate(q, 0.23821345029138724, 8);
  sqcRYGate(q, -0.7869331489009701, 9);
  sqcRZGate(q, 0.12587391632473377, 9);
  sqcRYGate(q, 1.5897104598628626, 10);
  sqcRZGate(q, -2.399006310114345, 10);
  sqcRYGate(q, -0.20917728549494602, 11);
  sqcRZGate(q, -0.1065511202324645, 11);
  sqcRYGate(q, 8.385248235307295e-05, 12);
  sqcRZGate(q, 2.584784292990111, 12);
  sqcRYGate(q, 0.00021540536423625412, 13);
  sqcRZGate(q, -0.3828601620451533, 13);
  sqcRYGate(q, -5.3291511099297327e-05, 14);
  sqcRZGate(q, 1.3347033727313473, 14);
  sqcRYGate(q, -0.9982789135219264, 15);
  sqcRZGate(q, 2.6359317704345777, 15);
  sqcRYGate(q, 0.027921129120806916, 16);
  sqcRZGate(q, -1.1478337245667867, 16);
  sqcRYGate(q, -0.021896251453055626, 17);
  sqcRZGate(q, -0.7467962430611887, 17);
  sqcRYGate(q, -1.2340680589016282, 18);
  sqcRZGate(q, 2.8822494906521223, 18);
  sqcRYGate(q, 2.9956721253262755, 19);
  sqcRZGate(q, 2.81884280927991, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 3.063063895050113, 0);
  sqcRZGate(q, -3.0773073236026596, 0);
  sqcRYGate(q, 1.5245414766854912, 1);
  sqcRZGate(q, -1.7225937708867045, 1);
  sqcRYGate(q, -1.5719602872949865, 2);
  sqcRZGate(q, -0.46552281789944205, 2);
  sqcRYGate(q, -0.04363193991803982, 3);
  sqcRZGate(q, -0.5470097396588448, 3);
  sqcRYGate(q, 0.9737897039481851, 4);
  sqcRZGate(q, 1.2526961015286036, 4);
  sqcRYGate(q, 0.5135631979886538, 5);
  sqcRZGate(q, -1.5849942179855407, 5);
  sqcRYGate(q, 1.2679637520175744, 6);
  sqcRZGate(q, 3.0575865473134307, 6);
  sqcRYGate(q, -1.4345896220579344, 7);
  sqcRZGate(q, -2.0888005423714033, 7);
  sqcRYGate(q, -0.0049354227761808644, 8);
  sqcRZGate(q, -0.7997876628535917, 8);
  sqcRYGate(q, 0.26421947945619617, 9);
  sqcRZGate(q, 1.5912234792892042, 9);
  sqcRYGate(q, 3.046169787538833, 10);
  sqcRZGate(q, 1.8443034741735662, 10);
  sqcRYGate(q, 1.5645988515088716, 11);
  sqcRZGate(q, 0.666489979322211, 11);
  sqcRYGate(q, 1.7898033016807071, 12);
  sqcRZGate(q, -2.0007648986824167, 12);
  sqcRYGate(q, -2.8843763859301843, 13);
  sqcRZGate(q, -2.9447831106153273, 13);
  sqcRYGate(q, 1.8915272551157756, 14);
  sqcRZGate(q, -3.0345400493753556, 14);
  sqcRYGate(q, 3.130064898032068, 15);
  sqcRZGate(q, 1.0256870064908943, 15);
  sqcRYGate(q, -1.0784039083853783, 16);
  sqcRZGate(q, 1.3060372722518463, 16);
  sqcRYGate(q, -2.7221400304728434, 17);
  sqcRZGate(q, -2.3992630238462302, 17);
  sqcRYGate(q, 1.344510783890644, 18);
  sqcRZGate(q, -1.395707558323668, 18);
  sqcRYGate(q, 0.881884108950171, 19);
  sqcRZGate(q, -0.6247590223225138, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.5704336128386922, 0);
  sqcRZGate(q, 3.054585702852724, 0);
  sqcRYGate(q, -3.122383297426017, 1);
  sqcRZGate(q, -1.7000947450745647, 1);
  sqcRYGate(q, 0.0007478542821030453, 2);
  sqcRZGate(q, -2.660080017566351, 2);
  sqcRYGate(q, 0.0076382770231373295, 3);
  sqcRZGate(q, -2.814456441257846, 3);
  sqcRYGate(q, -5.7360379668303096e-05, 4);
  sqcRZGate(q, -2.0351402429825343, 4);
  sqcRYGate(q, 3.139150916959084, 5);
  sqcRZGate(q, -0.4405740951286553, 5);
  sqcRYGate(q, 3.1044112986312067, 6);
  sqcRZGate(q, -3.102467676844006, 6);
  sqcRYGate(q, 0.001462889775110554, 7);
  sqcRZGate(q, 0.9899396774415121, 7);
  sqcRYGate(q, -0.0015733568956637356, 8);
  sqcRZGate(q, 2.1692868724925995, 8);
  sqcRYGate(q, -2.0356151419296182, 9);
  sqcRZGate(q, -1.5616791602989026, 9);
  sqcRYGate(q, -1.7737884271837148, 10);
  sqcRZGate(q, 1.5951840029188946, 10);
  sqcRYGate(q, -3.0661071191516016, 11);
  sqcRZGate(q, 1.7410302620812743, 11);
  sqcRYGate(q, 3.1380534635698716, 12);
  sqcRZGate(q, 0.3361532645336815, 12);
  sqcRYGate(q, 1.8266063579284635, 13);
  sqcRZGate(q, -2.9196338180178696, 13);
  sqcRYGate(q, 3.14158821433732, 14);
  sqcRZGate(q, 1.7212641573625584, 14);
  sqcRYGate(q, 0.03490665094514997, 15);
  sqcRZGate(q, -3.1079744438706522, 15);
  sqcRYGate(q, 0.0008643780235129128, 16);
  sqcRZGate(q, -1.2797042285633893, 16);
  sqcRYGate(q, 0.0006303695346635269, 17);
  sqcRZGate(q, -1.1933067071389072, 17);
  sqcRYGate(q, 0.09886985276308664, 18);
  sqcRZGate(q, -1.6295509745830214, 18);
  sqcRYGate(q, 0.6154052027820698, 19);
  sqcRZGate(q, -1.5410666804132906, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 3.100383754407382, 0);
  sqcRZGate(q, -1.645020151822297, 0);
  sqcRYGate(q, 1.5704177788097888, 1);
  sqcRZGate(q, 1.5708032221769566, 1);
  sqcRYGate(q, -1.59548778377032, 2);
  sqcRZGate(q, -1.1078508872921438, 2);
  sqcRYGate(q, 3.045891947169857, 3);
  sqcRZGate(q, 1.2064920243028852, 3);
  sqcRYGate(q, 0.5280876841109631, 4);
  sqcRZGate(q, -1.5601180068593008, 4);
  sqcRYGate(q, 1.8209590700596368, 5);
  sqcRZGate(q, -2.0844041062585426, 5);
  sqcRYGate(q, 2.1353866169406532, 6);
  sqcRZGate(q, -1.3752876535022656, 6);
  sqcRYGate(q, -3.1378218169228287, 7);
  sqcRZGate(q, 2.915615294117657, 7);
  sqcRYGate(q, -3.064969637060985, 8);
  sqcRZGate(q, -1.52655923017487, 8);
  sqcRYGate(q, -0.5381922702210729, 9);
  sqcRZGate(q, -1.5846611481191035, 9);
  sqcRYGate(q, -2.6605851520977954, 10);
  sqcRZGate(q, 0.19337975259615212, 10);
  sqcRYGate(q, 3.1406065529089044, 11);
  sqcRZGate(q, 0.6875374114573497, 11);
  sqcRYGate(q, 3.14018115880271, 12);
  sqcRZGate(q, -2.7419259307970054, 12);
  sqcRYGate(q, 0.044978208327550284, 13);
  sqcRZGate(q, -0.2245870351163467, 13);
  sqcRYGate(q, -2.198204397739186, 14);
  sqcRZGate(q, -0.573265710810196, 14);
  sqcRYGate(q, -2.9774252033460153, 15);
  sqcRZGate(q, -0.6862640166673272, 15);
  sqcRYGate(q, -1.120346369766037, 16);
  sqcRZGate(q, -1.4189733236327873, 16);
  sqcRYGate(q, -1.2584987422411813, 17);
  sqcRZGate(q, -1.407797798677563, 17);
  sqcRYGate(q, 2.5293696597790936, 18);
  sqcRZGate(q, 0.10571176722092357, 18);
  sqcRYGate(q, 1.3570502494708891, 19);
  sqcRZGate(q, 2.8004472635100286, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.644819723989175, 0);
  sqcRZGate(q, -1.1840925715597805, 0);
  sqcRYGate(q, 1.571218062948959, 1);
  sqcRZGate(q, -1.99502476599322, 1);
  sqcRYGate(q, 3.1404033860812364, 2);
  sqcRZGate(q, 1.9391082001558906, 2);
  sqcRYGate(q, 3.1413400679583754, 3);
  sqcRZGate(q, 0.8740654959534986, 3);
  sqcRYGate(q, -3.141446034112412, 4);
  sqcRZGate(q, -2.024121742248562, 4);
  sqcRYGate(q, -0.0021016854749699044, 5);
  sqcRZGate(q, 2.214340435120207, 5);
  sqcRYGate(q, -0.011787769077842203, 6);
  sqcRZGate(q, 1.8133946153942915, 6);
  sqcRYGate(q, -0.008422525776500947, 7);
  sqcRZGate(q, -0.7103745073912647, 7);
  sqcRYGate(q, 1.612545858651845, 8);
  sqcRZGate(q, 0.7293557982093891, 8);
  sqcRYGate(q, -1.0934564031542344, 9);
  sqcRZGate(q, 1.3573506746481323, 9);
  sqcRYGate(q, -0.9361143950739717, 10);
  sqcRZGate(q, 1.481788369287532, 10);
  sqcRYGate(q, 2.973780197645296, 11);
  sqcRZGate(q, 1.2016580992597399, 11);
  sqcRYGate(q, 0.0030429754114562613, 12);
  sqcRZGate(q, 0.333250276778732, 12);
  sqcRYGate(q, 1.3116446303337512, 13);
  sqcRZGate(q, 1.3176091584721412, 13);
  sqcRYGate(q, -3.1415629668664202, 14);
  sqcRZGate(q, 1.7121945036392243, 14);
  sqcRYGate(q, -3.123336524413179, 15);
  sqcRZGate(q, 2.808841921913667, 15);
  sqcRYGate(q, -0.004265860040476355, 16);
  sqcRZGate(q, -1.0064274099566912, 16);
  sqcRYGate(q, 2.8869420794623255, 17);
  sqcRZGate(q, -2.269464121096345, 17);
  sqcRYGate(q, 1.6270732966841575, 18);
  sqcRZGate(q, 1.4946084161846036, 18);
  sqcRYGate(q, -0.2576502819023861, 19);
  sqcRZGate(q, -1.1042818722889376, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -0.06081132311902017, 0);
  sqcRZGate(q, -0.22731520407669858, 0);
  sqcRYGate(q, -1.5775891213847633, 1);
  sqcRZGate(q, 1.0442566299862157, 1);
  sqcRYGate(q, -1.4106677944942119, 2);
  sqcRZGate(q, -1.1068371780350197, 2);
  sqcRYGate(q, 1.2418686602517417, 3);
  sqcRZGate(q, 1.2637505589776517, 3);
  sqcRYGate(q, 2.926074598412698, 4);
  sqcRZGate(q, 2.0939578741010187, 4);
  sqcRYGate(q, -0.6972240910100527, 5);
  sqcRZGate(q, -1.6534361654556404, 5);
  sqcRYGate(q, 2.0164944354830627, 6);
  sqcRZGate(q, -3.107058184659406, 6);
  sqcRYGate(q, 1.6202929949575609, 7);
  sqcRZGate(q, -1.5679493704123333, 7);
  sqcRYGate(q, 3.131744700691676, 8);
  sqcRZGate(q, -2.421660702055723, 8);
  sqcRYGate(q, -0.0005091542959840768, 9);
  sqcRZGate(q, 0.589604254195991, 9);
  sqcRYGate(q, -0.08846350529901947, 10);
  sqcRZGate(q, -3.092702134649646, 10);
  sqcRYGate(q, 1.5689732254918651, 11);
  sqcRZGate(q, 2.079259804077873, 11);
  sqcRYGate(q, 1.5405362543690044, 12);
  sqcRZGate(q, -2.7225850950041695, 12);
  sqcRYGate(q, 1.3180364940603608, 13);
  sqcRZGate(q, -1.9820309156711682, 13);
  sqcRYGate(q, 3.0391124429433143, 14);
  sqcRZGate(q, -3.0824550302367433, 14);
  sqcRYGate(q, 1.65211914781568, 15);
  sqcRZGate(q, -2.7679620367948026, 15);
  sqcRYGate(q, 1.5484246109002093, 16);
  sqcRZGate(q, -1.7172197728066685, 16);
  sqcRYGate(q, 1.876475637245129, 17);
  sqcRZGate(q, -2.006895417479095, 17);
  sqcRYGate(q, -1.7710127476057185, 18);
  sqcRZGate(q, -2.2448413510712286, 18);
  sqcRYGate(q, 0.7492089195600418, 19);
  sqcRZGate(q, -1.5556533009847058, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -2.921819275922785, 0);
  sqcRZGate(q, 2.942957869518419, 0);
  sqcRYGate(q, -0.005272197770822383, 1);
  sqcRZGate(q, -2.6446674883760837, 1);
  sqcRYGate(q, -0.0013518286441066183, 2);
  sqcRZGate(q, -0.600907100884204, 2);
  sqcRYGate(q, 3.1415873683752698, 3);
  sqcRZGate(q, 0.5958843112964141, 3);
  sqcRYGate(q, 0.0010773871735620943, 4);
  sqcRZGate(q, -0.16054974882044262, 4);
  sqcRYGate(q, -3.1413728551731133, 5);
  sqcRZGate(q, -2.3253406949322506, 5);
  sqcRYGate(q, 2.949929067848295, 6);
  sqcRZGate(q, 1.6028343298630805, 6);
  sqcRYGate(q, -3.1401075502404034, 7);
  sqcRZGate(q, -3.1350526172275566, 7);
  sqcRYGate(q, 2.8254452062741597, 8);
  sqcRZGate(q, -1.6280614253496024, 8);
  sqcRYGate(q, -0.005762591045845866, 9);
  sqcRZGate(q, -1.9516298103047875, 9);
  sqcRYGate(q, -1.575129749108637, 10);
  sqcRZGate(q, -1.557274978553452, 10);
  sqcRYGate(q, -3.13535838131674, 11);
  sqcRZGate(q, -2.631424969132597, 11);
  sqcRYGate(q, -0.005095296155096052, 12);
  sqcRZGate(q, -1.7977543139783991, 12);
  sqcRYGate(q, 3.138924113575609, 13);
  sqcRZGate(q, -2.590336319104671, 13);
  sqcRYGate(q, 0.00033218668321057437, 14);
  sqcRZGate(q, -0.47321047562905166, 14);
  sqcRYGate(q, 3.1317286651847063, 15);
  sqcRZGate(q, 0.3924174116533968, 15);
  sqcRYGate(q, -0.002078149926486523, 16);
  sqcRZGate(q, -1.0799927736036785, 16);
  sqcRYGate(q, 0.005912271280012149, 17);
  sqcRZGate(q, 2.3034408940328452, 17);
  sqcRYGate(q, -0.19388113941046736, 18);
  sqcRZGate(q, 0.37950000148195606, 18);
  sqcRYGate(q, -2.6764261150113033, 19);
  sqcRZGate(q, 0.0027496591324664976, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.5280224509926752, 0);
  sqcRZGate(q, 0.012295270226649892, 0);
  sqcRYGate(q, 2.9365871767297667, 1);
  sqcRZGate(q, 1.542204336931736, 1);
  sqcRYGate(q, -1.4517359470564086, 2);
  sqcRZGate(q, 2.9958303346329545, 2);
  sqcRYGate(q, 2.7326187157698407, 3);
  sqcRZGate(q, -0.6260797391122379, 3);
  sqcRYGate(q, 1.5669266424504404, 4);
  sqcRZGate(q, -3.1271411280270205, 4);
  sqcRYGate(q, 0.018835630590368524, 5);
  sqcRZGate(q, -0.34548537429491655, 5);
  sqcRYGate(q, -1.5730004349010143, 6);
  sqcRZGate(q, -2.0182294461083337, 6);
  sqcRYGate(q, 1.5589654707174292, 7);
  sqcRZGate(q, -1.4259467232444791, 7);
  sqcRYGate(q, 1.5652166758527546, 8);
  sqcRZGate(q, 3.1288557973161844, 8);
  sqcRYGate(q, -1.5759899642691604, 9);
  sqcRZGate(q, -0.10601378969731015, 9);
  sqcRYGate(q, 1.561308801948191, 10);
  sqcRZGate(q, 1.6523795917178754, 10);
  sqcRYGate(q, 1.5636585283663722, 11);
  sqcRZGate(q, 1.5702259114883077, 11);
  sqcRYGate(q, -3.140959124614396, 12);
  sqcRZGate(q, 0.1856586682513867, 12);
  sqcRYGate(q, 0.4665196445581054, 13);
  sqcRZGate(q, -2.277117078776811, 13);
  sqcRYGate(q, 1.3653316050790334, 14);
  sqcRZGate(q, -0.17124451728337028, 14);
  sqcRYGate(q, 1.5082167363071943, 15);
  sqcRZGate(q, -0.3508690632355252, 15);
  sqcRYGate(q, -0.04445362245102302, 16);
  sqcRZGate(q, -1.9371019390086088, 16);
  sqcRYGate(q, -1.6164786212311704, 17);
  sqcRZGate(q, -2.369136254154191, 17);
  sqcRYGate(q, -0.015615291891375456, 18);
  sqcRZGate(q, -0.24333703927006914, 18);
  sqcRYGate(q, 1.567319051601327, 19);
  sqcRZGate(q, -0.7662469035824307, 19);

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
