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

  sqcRYGate(q, 2.813681784931315, 0);
  sqcRZGate(q, -3.1405721626755008, 0);
  sqcRYGate(q, 3.1401030728579657, 1);
  sqcRZGate(q, -1.8210330610782852, 1);
  sqcRYGate(q, 1.587701622020088, 2);
  sqcRZGate(q, -1.652271594232448, 2);
  sqcRYGate(q, 1.026836382290817, 3);
  sqcRZGate(q, 1.932282331747848, 3);
  sqcRYGate(q, -1.5345177805582992, 4);
  sqcRZGate(q, 2.5245042585377067, 4);
  sqcRYGate(q, 3.1412565651699813, 5);
  sqcRZGate(q, 3.0049095155825505, 5);
  sqcRYGate(q, 1.5702415354744765, 6);
  sqcRZGate(q, 0.1384984582313589, 6);
  sqcRYGate(q, 2.5605721683314777, 7);
  sqcRZGate(q, -2.4546306486151983, 7);
  sqcRYGate(q, -1.355255032633253, 8);
  sqcRZGate(q, -2.9735354183501572, 8);
  sqcRYGate(q, -3.139042620163926, 9);
  sqcRZGate(q, -0.2728900154565883, 9);
  sqcRYGate(q, 0.5798394685889239, 10);
  sqcRZGate(q, 2.002597849226577, 10);
  sqcRYGate(q, -2.0474502989011603, 11);
  sqcRZGate(q, 0.6276544864350679, 11);
  sqcRYGate(q, 0.0017091365646534293, 12);
  sqcRZGate(q, -2.782579957322021, 12);
  sqcRYGate(q, 3.136650378449233, 13);
  sqcRZGate(q, -1.092405058641484, 13);
  sqcRYGate(q, -0.3589954082673286, 14);
  sqcRZGate(q, -0.15759486071586706, 14);
  sqcRYGate(q, -0.04314736596008206, 15);
  sqcRZGate(q, -1.8909003082826716, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.8152245113177603, 0);
  sqcRZGate(q, 2.5161882532727056, 0);
  sqcRYGate(q, -1.8895977552662413, 1);
  sqcRZGate(q, 1.177239533051937, 1);
  sqcRYGate(q, -0.8985591485192082, 2);
  sqcRZGate(q, 0.9218764918682139, 2);
  sqcRYGate(q, 0.009440090553499036, 3);
  sqcRZGate(q, -1.2098813946719724, 3);
  sqcRYGate(q, 2.674931912284286, 4);
  sqcRZGate(q, -0.6662335468031675, 4);
  sqcRYGate(q, 0.006158448634973628, 5);
  sqcRZGate(q, 2.8020047017131167, 5);
  sqcRYGate(q, -1.6250749638488948, 6);
  sqcRZGate(q, -0.6359042262866677, 6);
  sqcRYGate(q, -0.9374596955108626, 7);
  sqcRZGate(q, 3.1398411211044244, 7);
  sqcRYGate(q, 1.8501566531006395, 8);
  sqcRZGate(q, 1.0581885196385326, 8);
  sqcRYGate(q, 0.9411954939309309, 9);
  sqcRZGate(q, 1.30074941790809, 9);
  sqcRYGate(q, 1.696861843307511, 10);
  sqcRZGate(q, -2.740263265580904, 10);
  sqcRYGate(q, -1.0837199500663166, 11);
  sqcRZGate(q, 1.2988415153313013, 11);
  sqcRYGate(q, 0.002469916112023264, 12);
  sqcRZGate(q, 2.28049313860826, 12);
  sqcRYGate(q, -1.7191193084169347, 13);
  sqcRZGate(q, 1.3624169854332293, 13);
  sqcRYGate(q, -2.062098324561991, 14);
  sqcRZGate(q, 0.7119179386629622, 14);
  sqcRYGate(q, -0.6548412682856712, 15);
  sqcRZGate(q, 0.047921126799771924, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -3.067454243469579, 0);
  sqcRZGate(q, 1.5308663133799842, 0);
  sqcRYGate(q, 3.1334589033472082, 1);
  sqcRZGate(q, -1.9825532892449191, 1);
  sqcRYGate(q, -3.136874444481541, 2);
  sqcRZGate(q, -0.8614557906384502, 2);
  sqcRYGate(q, 2.512357958162886, 3);
  sqcRZGate(q, -2.159256517620215, 3);
  sqcRYGate(q, 1.4088415494574604, 4);
  sqcRZGate(q, 2.752209997362154, 4);
  sqcRYGate(q, 2.2919837809112624, 5);
  sqcRZGate(q, -0.37462441957746334, 5);
  sqcRYGate(q, -1.7257526310998137, 6);
  sqcRZGate(q, -1.7127764669410617, 6);
  sqcRYGate(q, -2.201671875919396, 7);
  sqcRZGate(q, -0.7634029057987421, 7);
  sqcRYGate(q, -1.640993805318038, 8);
  sqcRZGate(q, 0.002649129747533488, 8);
  sqcRYGate(q, -0.0004983586713587357, 9);
  sqcRZGate(q, 2.6835122287818822, 9);
  sqcRYGate(q, -2.0020864836986396, 10);
  sqcRZGate(q, 2.526823198968204, 10);
  sqcRYGate(q, -2.0486282812069687, 11);
  sqcRZGate(q, 0.04412065062538506, 11);
  sqcRYGate(q, 4.6250636083765107e-05, 12);
  sqcRZGate(q, -0.016977305592549286, 12);
  sqcRYGate(q, 0.09006810819844802, 13);
  sqcRZGate(q, 0.6751999657064274, 13);
  sqcRYGate(q, -0.0005771686576085955, 14);
  sqcRZGate(q, 0.2525475340501844, 14);
  sqcRYGate(q, -1.2159186068941157, 15);
  sqcRZGate(q, 1.1763625251491219, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.1320871262895988, 0);
  sqcRZGate(q, -2.0221452362830297, 0);
  sqcRYGate(q, -2.1313371462800323, 1);
  sqcRZGate(q, 1.0684470697926838, 1);
  sqcRYGate(q, 0.1691341825482784, 2);
  sqcRZGate(q, -0.049890319894581474, 2);
  sqcRYGate(q, 0.1808381175858136, 3);
  sqcRZGate(q, -1.6707132595400855, 3);
  sqcRYGate(q, 1.9453607519216947, 4);
  sqcRZGate(q, 1.6840495577078958, 4);
  sqcRYGate(q, 3.1399154411128674, 5);
  sqcRZGate(q, 2.7582536554938213, 5);
  sqcRYGate(q, 3.131188175957912, 6);
  sqcRZGate(q, -2.0052470227966595, 6);
  sqcRYGate(q, -0.15089316510290196, 7);
  sqcRZGate(q, 1.5970981809488392, 7);
  sqcRYGate(q, 1.5724096400211822, 8);
  sqcRZGate(q, -3.0954497854535385, 8);
  sqcRYGate(q, 0.7352593700037797, 9);
  sqcRZGate(q, -1.1018976473353816, 9);
  sqcRYGate(q, -1.2493127957362962, 10);
  sqcRZGate(q, 0.035495903020229314, 10);
  sqcRYGate(q, -3.0184159383838534, 11);
  sqcRZGate(q, -1.5097746892221668, 11);
  sqcRYGate(q, -1.5739116051790891, 12);
  sqcRZGate(q, 2.3614391932555425, 12);
  sqcRYGate(q, -1.2479468507471383, 13);
  sqcRZGate(q, -1.899516951793922, 13);
  sqcRYGate(q, -1.570652408796981, 14);
  sqcRZGate(q, -1.6359193990254148, 14);
  sqcRYGate(q, -1.7260181951907638, 15);
  sqcRZGate(q, 0.7305913249137763, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.1991470532475075, 0);
  sqcRZGate(q, -1.1132340036654373, 0);
  sqcRYGate(q, -3.1341843987311795, 1);
  sqcRZGate(q, 3.0353722508553984, 1);
  sqcRYGate(q, -3.1158337866471735, 2);
  sqcRZGate(q, 0.375122954438595, 2);
  sqcRYGate(q, -0.9056639763249558, 3);
  sqcRZGate(q, -1.2657485134588304, 3);
  sqcRYGate(q, 2.3486647201697455, 4);
  sqcRZGate(q, 1.5637396999874158, 4);
  sqcRYGate(q, -0.990139357412474, 5);
  sqcRZGate(q, 2.3461159511509386, 5);
  sqcRYGate(q, -1.6532888180646337, 6);
  sqcRZGate(q, -2.27842935787636, 6);
  sqcRYGate(q, -3.014133282615932, 7);
  sqcRZGate(q, 0.7393912867247253, 7);
  sqcRYGate(q, -3.134902856841265, 8);
  sqcRZGate(q, 0.9683885111141839, 8);
  sqcRYGate(q, 1.8382835659245815, 9);
  sqcRZGate(q, -2.7502847345489405, 9);
  sqcRYGate(q, -1.9629633204145593, 10);
  sqcRZGate(q, -3.047449768362497, 10);
  sqcRYGate(q, 3.1411618601544267, 11);
  sqcRZGate(q, 0.5698887399652626, 11);
  sqcRYGate(q, -0.0008925775026860094, 12);
  sqcRZGate(q, -0.8439366509910533, 12);
  sqcRYGate(q, 1.572177460544447, 13);
  sqcRZGate(q, -2.3599622104405595, 13);
  sqcRYGate(q, 3.1098643519797515, 14);
  sqcRZGate(q, -1.7588491723500914, 14);
  sqcRYGate(q, -1.4045569629972432, 15);
  sqcRZGate(q, -3.002420197429427, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.0763404999507653, 0);
  sqcRZGate(q, 3.064535138794084, 0);
  sqcRYGate(q, 1.7422574125106518, 1);
  sqcRZGate(q, -2.181009797902866, 1);
  sqcRYGate(q, 2.2260600131278228, 2);
  sqcRZGate(q, -0.8771778344154875, 2);
  sqcRYGate(q, -2.5823717048673847, 3);
  sqcRZGate(q, 2.9750914654911638, 3);
  sqcRYGate(q, 1.1379800827263677, 4);
  sqcRZGate(q, 0.9179548159957643, 4);
  sqcRYGate(q, -3.113168791168871, 5);
  sqcRZGate(q, -3.1340689416260155, 5);
  sqcRYGate(q, 1.7203942341702705, 6);
  sqcRZGate(q, -3.141192205063908, 6);
  sqcRYGate(q, 1.447537653517731, 7);
  sqcRZGate(q, 3.1226935269464615, 7);
  sqcRYGate(q, -3.1091796400866647, 8);
  sqcRZGate(q, 3.0967614022452357, 8);
  sqcRYGate(q, -2.48126450954496, 9);
  sqcRZGate(q, -2.568547544829428, 9);
  sqcRYGate(q, 1.391363369050291, 10);
  sqcRZGate(q, -1.7772387210992184, 10);
  sqcRYGate(q, 1.0700676886522364, 11);
  sqcRZGate(q, 1.286392112822311, 11);
  sqcRYGate(q, 2.8478825527755243, 12);
  sqcRZGate(q, 0.44113364029250707, 12);
  sqcRYGate(q, -0.6029091759789122, 13);
  sqcRZGate(q, -1.4607477729829972, 13);
  sqcRYGate(q, 1.581124460157871, 14);
  sqcRZGate(q, 2.4546665205024887, 14);
  sqcRYGate(q, 1.4607259527570864, 15);
  sqcRZGate(q, 1.9858668285502308, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.4009278735522954, 0);
  sqcRZGate(q, -1.8317537088476594, 0);
  sqcRYGate(q, -3.0411587926124395, 1);
  sqcRZGate(q, 0.05733125824907592, 1);
  sqcRYGate(q, 3.1394225740256556, 2);
  sqcRZGate(q, 1.2763939078105146, 2);
  sqcRYGate(q, 0.2077169516783995, 3);
  sqcRZGate(q, -0.055562483973291776, 3);
  sqcRYGate(q, 3.059443873172858, 4);
  sqcRZGate(q, -2.8338324607613576, 4);
  sqcRYGate(q, -3.088886110298666, 5);
  sqcRZGate(q, 0.011456150653817184, 5);
  sqcRYGate(q, -2.499497855976647, 6);
  sqcRZGate(q, 1.679459383478866, 6);
  sqcRYGate(q, 0.7876264208852328, 7);
  sqcRZGate(q, 1.4800701774394591, 7);
  sqcRYGate(q, -3.0881132380130962, 8);
  sqcRZGate(q, -0.0015702439563231912, 8);
  sqcRYGate(q, 3.0789940573015575, 9);
  sqcRZGate(q, -1.2964594650909564, 9);
  sqcRYGate(q, -1.9905612524727982, 10);
  sqcRZGate(q, 1.537419711027664, 10);
  sqcRYGate(q, 0.0038296443862897434, 11);
  sqcRZGate(q, 1.9573837110861287, 11);
  sqcRYGate(q, -0.8654893690971086, 12);
  sqcRZGate(q, -2.962306348550203, 12);
  sqcRYGate(q, -1.9319915199503928, 13);
  sqcRZGate(q, -1.1340643488709652, 13);
  sqcRYGate(q, 0.5567161511867331, 14);
  sqcRZGate(q, -2.9681654585150605, 14);
  sqcRYGate(q, -0.30168345412085706, 15);
  sqcRZGate(q, 2.4956980619743225, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.6464509635282722, 0);
  sqcRZGate(q, 2.1883199263830875, 0);
  sqcRYGate(q, -0.8361381223776752, 1);
  sqcRZGate(q, -2.2939480949698563, 1);
  sqcRYGate(q, 2.2468645967308816, 2);
  sqcRZGate(q, 1.422020447934413, 2);
  sqcRYGate(q, 0.5407514033174401, 3);
  sqcRZGate(q, 2.783296327169489, 3);
  sqcRYGate(q, 0.010061123616151413, 4);
  sqcRZGate(q, -1.7837476160957537, 4);
  sqcRYGate(q, 0.6147584877979899, 5);
  sqcRZGate(q, -2.0411374336008024, 5);
  sqcRYGate(q, -2.043522431366962, 6);
  sqcRZGate(q, 1.1376272309382636, 6);
  sqcRYGate(q, 1.9696738904645184, 7);
  sqcRZGate(q, -1.2272361878367117, 7);
  sqcRYGate(q, 2.594043618073119, 8);
  sqcRZGate(q, 1.1642491575228453, 8);
  sqcRYGate(q, 3.0128920645639514, 9);
  sqcRZGate(q, -3.0191108730018916, 9);
  sqcRYGate(q, 1.3005085124071227, 10);
  sqcRZGate(q, 0.40887722676835203, 10);
  sqcRYGate(q, -0.06544967463354405, 11);
  sqcRZGate(q, 1.6341212095156967, 11);
  sqcRYGate(q, -3.128014831424907, 12);
  sqcRZGate(q, -3.0228923453972407, 12);
  sqcRYGate(q, -3.129868775722157, 13);
  sqcRZGate(q, 0.23774188573885424, 13);
  sqcRYGate(q, -3.134739637548215, 14);
  sqcRZGate(q, 0.2309181026690629, 14);
  sqcRYGate(q, -0.003391489557574231, 15);
  sqcRZGate(q, -3.1230527100561165, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.026881796083094933, 0);
  sqcRZGate(q, 1.4385041478067646, 0);
  sqcRYGate(q, -0.1401720856441253, 1);
  sqcRZGate(q, 0.8366602292482124, 1);
  sqcRYGate(q, -3.1001849835054838, 2);
  sqcRZGate(q, 1.8405412227045446, 2);
  sqcRYGate(q, -0.00039461896409775926, 3);
  sqcRZGate(q, -0.14456669798197908, 3);
  sqcRYGate(q, 1.045473184791513, 4);
  sqcRZGate(q, 0.43819237711255776, 4);
  sqcRYGate(q, -0.055034654984986275, 5);
  sqcRZGate(q, -1.227962756087172, 5);
  sqcRYGate(q, -3.135449593688708, 6);
  sqcRZGate(q, -0.6146173431768096, 6);
  sqcRYGate(q, -0.005629357793078603, 7);
  sqcRZGate(q, -0.47722381719425405, 7);
  sqcRYGate(q, -0.053344914009996774, 8);
  sqcRZGate(q, -1.4789215898461336, 8);
  sqcRYGate(q, 1.2779386843497993, 9);
  sqcRZGate(q, 0.5236175478861603, 9);
  sqcRYGate(q, -3.132214044577205, 10);
  sqcRZGate(q, 1.77815938345781, 10);
  sqcRYGate(q, -3.0933657946755146, 11);
  sqcRZGate(q, -2.296543585264495, 11);
  sqcRYGate(q, 2.276283360428445, 12);
  sqcRZGate(q, -1.4165948737512197, 12);
  sqcRYGate(q, 0.7995800734898877, 13);
  sqcRZGate(q, 2.727287624055478, 13);
  sqcRYGate(q, 2.5180603711277794, 14);
  sqcRZGate(q, -1.9707676984597842, 14);
  sqcRYGate(q, -1.8169879742653483, 15);
  sqcRZGate(q, 0.2834037297010443, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.297136877442393, 0);
  sqcRZGate(q, 1.0719773555972445, 0);
  sqcRYGate(q, 1.553284963259924, 1);
  sqcRZGate(q, -3.0399089492605937, 1);
  sqcRYGate(q, 0.11611414889963179, 2);
  sqcRZGate(q, 1.3305465040114635, 2);
  sqcRYGate(q, 3.085739458093341, 3);
  sqcRZGate(q, -2.1478072884312533, 3);
  sqcRYGate(q, -3.054118119448355, 4);
  sqcRZGate(q, -1.1159249908955378, 4);
  sqcRYGate(q, -0.2967385017331312, 5);
  sqcRZGate(q, 1.7114294518937903, 5);
  sqcRYGate(q, 1.5293437424679626, 6);
  sqcRZGate(q, -3.113601136262645, 6);
  sqcRYGate(q, 1.5472048058224097, 7);
  sqcRZGate(q, -3.0369945392022357, 7);
  sqcRYGate(q, 0.1423505089065809, 8);
  sqcRZGate(q, -1.158824241525303, 8);
  sqcRYGate(q, 0.08930269235910238, 9);
  sqcRZGate(q, 1.1485775668986944, 9);
  sqcRYGate(q, -0.05759647427095249, 10);
  sqcRZGate(q, -2.368693284874582, 10);
  sqcRYGate(q, 2.8586718360082166, 11);
  sqcRZGate(q, 2.3981891403756106, 11);
  sqcRYGate(q, -1.3846127245416069, 12);
  sqcRZGate(q, -1.5423199848812044, 12);
  sqcRYGate(q, -1.4940101662690628, 13);
  sqcRZGate(q, -1.5643726900167116, 13);
  sqcRYGate(q, 0.7814478514060399, 14);
  sqcRZGate(q, 2.3552112898147066, 14);
  sqcRYGate(q, -0.4094943755027529, 15);
  sqcRZGate(q, 1.7497544962067264, 15);

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
