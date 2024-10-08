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

  sqcRYGate(q, -0.7875285014057577, 0);
  sqcRYGate(q, 0.6189896080480306, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9975169846255492, 0);
  sqcRYGate(q, 2.234088460395914, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.878479188349696, 2);
  sqcRYGate(q, 0.9182217022382521, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4015025238582002, 2);
  sqcRYGate(q, -0.36057083970246584, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.21400900920080088, 4);
  sqcRYGate(q, -2.2145179191406026, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.888235911554046, 4);
  sqcRYGate(q, -1.507219471662907, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.1329264432344303, 6);
  sqcRYGate(q, 1.3503428325283313, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.012426810501131, 6);
  sqcRYGate(q, -1.328349007985369, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.2238741215483738, 8);
  sqcRYGate(q, -0.03517775531965768, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3150334443055325, 8);
  sqcRYGate(q, 1.6601316799136128, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6129466286380314, 10);
  sqcRYGate(q, -1.7606636798810058, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.7823630835083524, 10);
  sqcRYGate(q, 2.7646012644972, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.9524864905864776, 12);
  sqcRYGate(q, -0.4037235264974216, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.3515190138771443, 12);
  sqcRYGate(q, -0.9939195924124031, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.3699764803944905, 14);
  sqcRYGate(q, -1.0423685717790976, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.15036075113116798, 14);
  sqcRYGate(q, 0.027318734864235417, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.5329401341470563, 0);
  sqcRYGate(q, -0.364173793255671, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.719534421043869, 0);
  sqcRYGate(q, -2.218659890656686, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6558829333411147, 2);
  sqcRYGate(q, 0.3392526170493736, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.1414552179798934, 2);
  sqcRYGate(q, -0.00010572423581489687, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.25211215321063474, 4);
  sqcRYGate(q, -1.4121011866427904, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.22521334216464742, 4);
  sqcRYGate(q, 2.9612720948608464, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.787290596806817, 6);
  sqcRYGate(q, -1.776646313387472, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.0778541027748867, 6);
  sqcRYGate(q, 2.766631724503771, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.8638234180708062, 8);
  sqcRYGate(q, 0.8893782681812583, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.3129025912185073, 8);
  sqcRYGate(q, 2.8884624942064887, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.7230945271073133, 10);
  sqcRYGate(q, 2.0841422641559126, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.008215784428932508, 10);
  sqcRYGate(q, -3.1407447118799685, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.15205973990517307, 12);
  sqcRYGate(q, -0.9574021700114939, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.21557170689459404, 12);
  sqcRYGate(q, 0.5046701917984724, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.505489534847715, 1);
  sqcRYGate(q, 0.9260356236122771, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.0529761097939991, 1);
  sqcRYGate(q, 0.7508407753261691, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.38755749571024234, 3);
  sqcRYGate(q, 1.006881195126715, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.5295477360719115, 3);
  sqcRYGate(q, 3.1415283879861695, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.0508141976596086, 5);
  sqcRYGate(q, 1.2746495707039038, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.562729674399132, 5);
  sqcRYGate(q, 1.7707418306166627, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.40068463958625156, 7);
  sqcRYGate(q, -3.0271617278499434, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.0583936701800214, 7);
  sqcRYGate(q, 1.7463584993578367, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.7389521085196558, 9);
  sqcRYGate(q, -0.25312708916639126, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.8945295037217945, 9);
  sqcRYGate(q, 3.107108471728213, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.19916948548343605, 11);
  sqcRYGate(q, -3.060385969283248, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -3.1342355584002544, 11);
  sqcRYGate(q, 0.007529933740443972, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.5341483501905318, 13);
  sqcRYGate(q, 2.830682524459495, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -2.423430691666148, 13);
  sqcRYGate(q, 0.09973336732888338, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.399452287359785, 0);
  sqcRYGate(q, -1.0002034772811232, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.078804219409834, 0);
  sqcRYGate(q, 1.4324778608110318, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9064316528346568, 2);
  sqcRYGate(q, 2.893497784706304, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.182279989096754, 2);
  sqcRYGate(q, -2.279407872209598, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.520436570637253, 4);
  sqcRYGate(q, 2.8890980273314892, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7733381416420104, 4);
  sqcRYGate(q, -0.37051718036019465, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2277274279721224, 6);
  sqcRYGate(q, -1.0080517894854795, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.714797204385321, 6);
  sqcRYGate(q, -0.35234175592337635, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7043336727633518, 8);
  sqcRYGate(q, 1.2965580707717193, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.7827885119156536, 8);
  sqcRYGate(q, -2.9667796514587406, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.1888063725779494, 10);
  sqcRYGate(q, -1.4157308115591256, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.3528568716208136, 10);
  sqcRYGate(q, -1.7709485564493526, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.7530722731567865, 12);
  sqcRYGate(q, -2.2340338855575395, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.8412798475238485, 12);
  sqcRYGate(q, 1.2340062687447462, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.6036432591966625, 14);
  sqcRYGate(q, -2.9113036557025285, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.285834082566524, 14);
  sqcRYGate(q, 2.918706852443241, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.3079511870459764, 0);
  sqcRYGate(q, -2.5384211727981283, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8264111392452235, 0);
  sqcRYGate(q, 2.1723281725212678, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.0986089342364247, 2);
  sqcRYGate(q, 3.0102846599556643, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.1465807811252413, 2);
  sqcRYGate(q, 2.6892390239236165e-05, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.1097014125814617, 4);
  sqcRYGate(q, 1.0570160286583468, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5247846846177011, 4);
  sqcRYGate(q, -1.6413063293578034, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.0603507947951814, 6);
  sqcRYGate(q, -0.37455606376916006, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.105844444522212, 6);
  sqcRYGate(q, 2.4517168839311707, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.6815969764042095, 8);
  sqcRYGate(q, -0.6507010056644651, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.035813889203277, 8);
  sqcRYGate(q, -2.4900495206727973, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.4396694910805863, 10);
  sqcRYGate(q, 2.211447561496005, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.1386989955931206, 10);
  sqcRYGate(q, -3.1402360347708655, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 1.9245542867331744, 12);
  sqcRYGate(q, 2.106308891763312, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.9222830052671327, 12);
  sqcRYGate(q, 0.45157426280536955, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.8690448975250877, 1);
  sqcRYGate(q, 0.06542579889414443, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2968242172738655, 1);
  sqcRYGate(q, 0.9842287348720254, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5942037937598674, 3);
  sqcRYGate(q, -1.6096394064125952, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.1286956705284554, 3);
  sqcRYGate(q, -3.1413438283324258, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.5609492474806927, 5);
  sqcRYGate(q, 1.3025384031581755, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.1763161988341655, 5);
  sqcRYGate(q, -1.3443148879056876, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.0008497411531163124, 7);
  sqcRYGate(q, -0.4171401617656717, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.0019810461459091044, 7);
  sqcRYGate(q, -2.995873565499826, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.5521325195139892, 9);
  sqcRYGate(q, 2.492497493621634, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.9469595909937354, 9);
  sqcRYGate(q, -0.24709798675013137, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.1107696537931733, 11);
  sqcRYGate(q, -2.0343718708860754, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.010286132792197478, 11);
  sqcRYGate(q, 2.9725309429163285, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.0739502647298041, 13);
  sqcRYGate(q, -0.9015104880280385, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 2.870023060911137, 13);
  sqcRYGate(q, -0.012915051381395162, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.6009926430789716, 0);
  sqcRYGate(q, 0.3762485120729657, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.08377619199972397, 0);
  sqcRYGate(q, 3.0788355890553523, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7433027805287278, 2);
  sqcRYGate(q, -0.7671253717829423, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9200818556461707, 2);
  sqcRYGate(q, 1.394947292441354, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.259683995624556, 4);
  sqcRYGate(q, -1.496679912760045, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6265167903293832, 4);
  sqcRYGate(q, -1.8007660268755377, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3254035149668789, 6);
  sqcRYGate(q, -1.4899683471150986, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.2167947465700021, 6);
  sqcRYGate(q, 0.42530835696465363, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1076032197589516, 8);
  sqcRYGate(q, -1.794745146024508, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.0460352133400908, 8);
  sqcRYGate(q, -2.1461962745711554, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.35581040520725, 10);
  sqcRYGate(q, -2.002213445137147, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.004418377502382498, 10);
  sqcRYGate(q, 0.04191908736955272, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6864318070219557, 12);
  sqcRYGate(q, 2.994253491937953, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.7463893350085327, 12);
  sqcRYGate(q, 2.234277045924714, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.4899670577660622, 14);
  sqcRYGate(q, 0.9477414578225141, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.1639071635252036, 14);
  sqcRYGate(q, -2.1114648720618114, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.07118924258264267, 0);
  sqcRYGate(q, -0.37608301767933305, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4990215641774345, 0);
  sqcRYGate(q, -1.9163437767218223, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6191541781195524, 2);
  sqcRYGate(q, -1.3461225633047647, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.4200600494600286, 2);
  sqcRYGate(q, -0.43001641086105913, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.112924969841366, 4);
  sqcRYGate(q, -1.6025819814779023, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.0024965376108467534, 4);
  sqcRYGate(q, -3.1413819351813324, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.4957654066216026, 6);
  sqcRYGate(q, 1.0803502279027768, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.0910678251864785, 6);
  sqcRYGate(q, -1.9460123101021827, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.9265643750066022, 8);
  sqcRYGate(q, 1.0212083234362748, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.9335232574887184, 8);
  sqcRYGate(q, 2.5609259327017755, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.4627625712490868, 10);
  sqcRYGate(q, -2.0151152944312454, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 3.1157930229884863, 10);
  sqcRYGate(q, -0.006289687632837774, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.9012131893397715, 12);
  sqcRYGate(q, 2.648362326834359, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.8987159649811884, 12);
  sqcRYGate(q, -0.07218542863702826, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.06435862214340868, 1);
  sqcRYGate(q, 2.6199048673295318, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4989305964272288, 1);
  sqcRYGate(q, 2.2284777959449475, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5881536762420777, 3);
  sqcRYGate(q, 1.1533310277776316, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.998239685926376, 3);
  sqcRYGate(q, -3.1047316541172822, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.2517783525137225, 5);
  sqcRYGate(q, 0.24275430579062796, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.016880752589790146, 5);
  sqcRYGate(q, 3.1233231187872437, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5926645613317714, 7);
  sqcRYGate(q, -0.73545990177864, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.011987910189023, 7);
  sqcRYGate(q, 3.133970805456757, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.447442571514209, 9);
  sqcRYGate(q, -1.5139668904485508, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.1288120604193583, 9);
  sqcRYGate(q, -0.039119368649716435, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.8445122295789376, 11);
  sqcRYGate(q, 1.4192860440391752, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 3.113688692668575, 11);
  sqcRYGate(q, -2.9308769224967466, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 2.140409661985041, 13);
  sqcRYGate(q, -0.041598923858566256, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 3.034131218945833, 13);
  sqcRYGate(q, 3.1146960827922925, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.47704836546646295, 0);
  sqcRYGate(q, 2.2778355538897292, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.973185419445811, 0);
  sqcRYGate(q, -1.0883244062654929, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.655737788721533, 2);
  sqcRYGate(q, 2.192604318987903, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1072675247640302, 2);
  sqcRYGate(q, 1.221447696771933, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.41234094015437456, 4);
  sqcRYGate(q, 0.890372035316478, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.288514217996474, 4);
  sqcRYGate(q, -1.3210222339096296, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3312740008091133, 6);
  sqcRYGate(q, -2.2772080602932467, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.657408159179334, 6);
  sqcRYGate(q, 1.277233722892725, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4144596690331364, 8);
  sqcRYGate(q, -2.9433875725777705, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.469352155677028, 8);
  sqcRYGate(q, 2.2723615531312182, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.0139731634740814, 10);
  sqcRYGate(q, 2.732582703363317, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.283137678952854, 10);
  sqcRYGate(q, 3.0872523632450326, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0127452375399812, 12);
  sqcRYGate(q, 0.23232226178619353, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.8676142458838134, 12);
  sqcRYGate(q, 0.17649274242512902, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.9842523525384683, 14);
  sqcRYGate(q, -0.8673709653037687, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.8019727527756135, 14);
  sqcRYGate(q, 2.307435013731131, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.9255235848769092, 0);
  sqcRYGate(q, 2.843356613398456, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.11807209129057, 0);
  sqcRYGate(q, 3.1196011933656207, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0901405481941113, 2);
  sqcRYGate(q, -2.8885252896815574, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.1430158039572116, 2);
  sqcRYGate(q, -3.062936528157347, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.8336581534990737, 4);
  sqcRYGate(q, 1.970104221967599, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.04922736207027878, 4);
  sqcRYGate(q, 0.2461648188744805, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.7872103908929, 6);
  sqcRYGate(q, -1.5958203401963047, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.0907151473175, 6);
  sqcRYGate(q, 3.1122404725838844, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.5390771766137736, 8);
  sqcRYGate(q, -1.1459841761640037, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.007381275055484693, 8);
  sqcRYGate(q, 0.019269700263766225, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.7232971860957793, 10);
  sqcRYGate(q, 2.2669371453995573, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.1381915103109748, 10);
  sqcRYGate(q, -0.012123563204825771, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 2.452254754713854, 12);
  sqcRYGate(q, 0.3504523406518034, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.12644911215806043, 12);
  sqcRYGate(q, 0.10182331879060234, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -0.04588307170134219, 1);
  sqcRYGate(q, -2.0607886920329364, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.0030927971461700565, 1);
  sqcRYGate(q, 1.5951796929962505, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.19684603685399746, 3);
  sqcRYGate(q, 2.916503270090764, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.996597680431929, 3);
  sqcRYGate(q, -3.1247646282393604, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.6281871976591726, 5);
  sqcRYGate(q, 2.0711772763753653, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.011445534859447009, 5);
  sqcRYGate(q, -3.13800512279908, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.81043851881188, 7);
  sqcRYGate(q, 1.1696052876321057, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.0291388145574176, 7);
  sqcRYGate(q, 0.007492386112510907, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.9632571896196525, 9);
  sqcRYGate(q, -0.10192209893335047, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.03579427974793398, 9);
  sqcRYGate(q, -1.7663801923726785, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.1252259581754314, 11);
  sqcRYGate(q, -2.0056080115121535, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 2.1204550132640096, 11);
  sqcRYGate(q, 0.07044031232885488, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.9156448931667218, 13);
  sqcRYGate(q, 2.841509061580835, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.10251117206166947, 13);
  sqcRYGate(q, -3.133881100948944, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 1.8869022009611083, 0);
  sqcRYGate(q, 0.7547663153377382, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.051772705860113, 0);
  sqcRYGate(q, 2.8834730515646814, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.067521566720418, 2);
  sqcRYGate(q, 2.0899505604375657, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.19781421661377685, 2);
  sqcRYGate(q, -1.7932077713167682, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9094699614748185, 4);
  sqcRYGate(q, -0.9860441224933295, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.69627618789651, 4);
  sqcRYGate(q, 1.569438873121447, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.899587452155653, 6);
  sqcRYGate(q, -2.583163465613924, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.18945146030074, 6);
  sqcRYGate(q, 1.91072546577632, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4852879730041306, 8);
  sqcRYGate(q, -1.5762760422791384, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.888256241250122, 8);
  sqcRYGate(q, -3.0878737655788786, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.108288940783683, 10);
  sqcRYGate(q, -3.028820873663809, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.375956208746285, 10);
  sqcRYGate(q, -2.889339618533026, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.4303404092184664, 12);
  sqcRYGate(q, -0.6567275783162732, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.93620155842047, 12);
  sqcRYGate(q, -1.820145224800937, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.904306994104067, 14);
  sqcRYGate(q, -1.5804812941251356, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.02306047800191724, 14);
  sqcRYGate(q, 0.4388153128441435, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.1865569551237467, 0);
  sqcRYGate(q, 0.7833141639284742, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.135799764817409, 0);
  sqcRYGate(q, 0.1321475788962072, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6765999252247523, 2);
  sqcRYGate(q, 0.8519740005888039, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.8648436492337046, 2);
  sqcRYGate(q, -0.1736380651987961, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.0653265047260125, 4);
  sqcRYGate(q, -1.9141059934386293, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.141314146807458, 4);
  sqcRYGate(q, -0.005556866481007283, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.0536514005530098, 6);
  sqcRYGate(q, 2.6220415351634516, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.0879119915599262, 6);
  sqcRYGate(q, 3.0859216926036086, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.3376860530613826, 8);
  sqcRYGate(q, 3.0535455215899034, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.099364350435147, 8);
  sqcRYGate(q, 3.103050617858782, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.0099773531212293, 10);
  sqcRYGate(q, 2.8357208538292547, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -3.115839247939319, 10);
  sqcRYGate(q, 0.017570702147588158, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 0.9266325774901024, 12);
  sqcRYGate(q, 0.6252162171553204, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.2749700872557843, 12);
  sqcRYGate(q, 2.361400978621291, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.2486706299047188, 1);
  sqcRYGate(q, -1.99651563085766, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.0587338281750787, 1);
  sqcRYGate(q, -0.8327293236007014, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3081417629899073, 3);
  sqcRYGate(q, 0.5114668131430792, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.1343776785343644, 3);
  sqcRYGate(q, 3.12862603422108, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.6802427783670071, 5);
  sqcRYGate(q, -3.1011345857086803, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.10330701888901622, 5);
  sqcRYGate(q, -3.135871197368038, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.801915853884468, 7);
  sqcRYGate(q, -1.1577508496785052, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.0840920714396987, 7);
  sqcRYGate(q, 0.2124062101809178, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.292864056118609, 9);
  sqcRYGate(q, -1.681955555788375, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.031088476182290607, 9);
  sqcRYGate(q, 0.0004162916623622337, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.9816386939764594, 11);
  sqcRYGate(q, 2.1041638337247877, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -0.010170767904639002, 11);
  sqcRYGate(q, -3.0704627361568955, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.0071450468518979, 13);
  sqcRYGate(q, 0.647623233617165, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.289056870764873, 13);
  sqcRYGate(q, -3.0638892703530582, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.0399816225834286, 0);
  sqcRYGate(q, 0.16102100992825233, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5749270715236559, 0);
  sqcRYGate(q, -2.8578211161670803, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.73902767531317, 2);
  sqcRYGate(q, 0.06371056764502123, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1323324649726345, 2);
  sqcRYGate(q, 3.068487138219063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1037329286088653, 4);
  sqcRYGate(q, -0.4527147200748889, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9710723133037704, 4);
  sqcRYGate(q, 3.125075829211698, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8141696502909026, 6);
  sqcRYGate(q, 3.0598212724627953, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.018118938482501346, 6);
  sqcRYGate(q, -0.04153960810554658, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3254554616920824, 8);
  sqcRYGate(q, 1.31116938048988, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.909018887985397, 8);
  sqcRYGate(q, 1.5508915198820103, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5396947186667188, 10);
  sqcRYGate(q, 1.4092574994546645, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.7852140218384736, 10);
  sqcRYGate(q, 1.897863692271074, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.7360901116071821, 12);
  sqcRYGate(q, 1.7757575322083738, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.02124126099621778, 12);
  sqcRYGate(q, -0.04390367721278299, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.5644583643442768, 14);
  sqcRYGate(q, -3.0408770290921887, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.7202444484536608, 14);
  sqcRYGate(q, 0.0555487747013683, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.0787170152110921, 0);
  sqcRYGate(q, 1.58469287709572, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.0032322506003461537, 0);
  sqcRYGate(q, 0.016677735986817575, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.157241050709235, 2);
  sqcRYGate(q, 2.747631546118717, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.287305544603024, 2);
  sqcRYGate(q, -0.1763332251498291, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.2708033047492663, 4);
  sqcRYGate(q, -3.0843169837157767, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.03472242883195964, 4);
  sqcRYGate(q, 0.008464178874523144, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.1496103418200845, 6);
  sqcRYGate(q, 1.5423882113579437, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.0833783740616334, 6);
  sqcRYGate(q, 3.1391399616280444, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.3232569189216512, 8);
  sqcRYGate(q, 0.4353488229286996, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -5.2944802857446405e-05, 8);
  sqcRYGate(q, -3.1414974658762183, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.8096223186349736, 10);
  sqcRYGate(q, 0.561496083529935, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 3.1396023107633924, 10);
  sqcRYGate(q, -3.1387537483182757, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.9395602646281382, 12);
  sqcRYGate(q, 0.5518043057413575, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.6776290688613242, 12);
  sqcRYGate(q, 2.338668562694306, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -2.6330703731049927, 1);
  sqcRYGate(q, 2.9111423530207645, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.127596979517005, 1);
  sqcRYGate(q, 2.9104932550883262, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8864253789466905, 3);
  sqcRYGate(q, -2.46069293732329, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.010247249794399949, 3);
  sqcRYGate(q, -3.1346515748035912, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.5424537593041525, 5);
  sqcRYGate(q, 1.603697446000092, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.001637116742621557, 5);
  sqcRYGate(q, -0.0025026885905478384, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5332510510898916, 7);
  sqcRYGate(q, -2.4481364490559567, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.131371345460734, 7);
  sqcRYGate(q, -0.20372553593198375, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.3813106495550618, 9);
  sqcRYGate(q, -1.8356492761638532, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.1207117540030764, 9);
  sqcRYGate(q, 3.0985222298539568, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.4139481866837987, 11);
  sqcRYGate(q, -2.8716981759101623, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -3.1412874016328227, 11);
  sqcRYGate(q, 0.014251683692993334, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 0.9604395969264384, 13);
  sqcRYGate(q, -3.022188782342532, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.22260215196627353, 13);
  sqcRYGate(q, -3.1394501593785544, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -0.03697503785697708, 0);
  sqcRYGate(q, 0.877733926599058, 1);
  sqcRYGate(q, -0.5220317652831543, 2);
  sqcRYGate(q, 1.7420650282340224, 3);
  sqcRYGate(q, -0.9362751303532688, 4);
  sqcRYGate(q, -2.2022892567274104, 5);
  sqcRYGate(q, -0.5116536549311217, 6);
  sqcRYGate(q, 0.24061637601630692, 7);
  sqcRYGate(q, -1.555978398052976, 8);
  sqcRYGate(q, 0.5590204808270407, 9);
  sqcRYGate(q, 0.739344671665104, 10);
  sqcRYGate(q, 2.943136444807637, 11);
  sqcRYGate(q, -2.893216617878774, 12);
  sqcRYGate(q, 2.11789239786956, 13);
  sqcRYGate(q, -3.0576903763176326, 14);
  sqcRYGate(q, 1.5050131336188475, 15);

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
