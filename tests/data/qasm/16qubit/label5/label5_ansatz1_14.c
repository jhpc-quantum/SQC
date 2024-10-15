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

  sqcRYGate(q, -2.3099521551131734, 0);
  sqcRZGate(q, 2.3019896461415943, 0);
  sqcRYGate(q, 2.250426537432027, 1);
  sqcRZGate(q, 1.4974635491643338, 1);
  sqcRYGate(q, 1.5711086030593355, 2);
  sqcRZGate(q, 0.8450580326438297, 2);
  sqcRYGate(q, -1.5704962642947313, 3);
  sqcRZGate(q, 1.5681495592284724, 3);
  sqcRYGate(q, 1.6240826610383117, 4);
  sqcRZGate(q, -2.8660899648603206, 4);
  sqcRYGate(q, -0.7796528519594963, 5);
  sqcRZGate(q, -1.183290860443365, 5);
  sqcRYGate(q, 1.5690403052028314, 6);
  sqcRZGate(q, -2.8522238152268216, 6);
  sqcRYGate(q, 3.128624522420815, 7);
  sqcRZGate(q, -2.7078672001433763, 7);
  sqcRYGate(q, -3.1156443981345867, 8);
  sqcRZGate(q, -1.3854414505016965, 8);
  sqcRYGate(q, -0.345695784861048, 9);
  sqcRZGate(q, -1.2098906314900981, 9);
  sqcRYGate(q, 0.09425162616946368, 10);
  sqcRZGate(q, -2.5070606568327114, 10);
  sqcRYGate(q, -1.2781115388646724, 11);
  sqcRZGate(q, 1.4649455524500166, 11);
  sqcRYGate(q, -2.63136695714092, 12);
  sqcRZGate(q, 1.5680909034843191, 12);
  sqcRYGate(q, 0.09316494903586642, 13);
  sqcRZGate(q, -3.088413682306931, 13);
  sqcRYGate(q, -1.0179418233287503, 14);
  sqcRZGate(q, 2.397964125735063, 14);
  sqcRYGate(q, 1.4540810225573964, 15);
  sqcRZGate(q, -2.098586269550201, 15);
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
  sqcRYGate(q, -2.468655961756592, 0);
  sqcRZGate(q, 0.33025482373736453, 0);
  sqcRYGate(q, -1.9624635892417244, 1);
  sqcRZGate(q, 2.101308198892462, 1);
  sqcRYGate(q, 1.1875047637953797, 2);
  sqcRZGate(q, 1.3391433526433278, 2);
  sqcRYGate(q, -0.7366918568516284, 3);
  sqcRZGate(q, 0.07600941954631245, 3);
  sqcRYGate(q, 0.0005907815234425192, 4);
  sqcRZGate(q, 1.2946675629940876, 4);
  sqcRYGate(q, -0.544803781246746, 5);
  sqcRZGate(q, 2.749221637903156, 5);
  sqcRYGate(q, -3.14002921258549, 6);
  sqcRZGate(q, -0.778354503965861, 6);
  sqcRYGate(q, -1.461568458266231, 7);
  sqcRZGate(q, -1.3912202728123533, 7);
  sqcRYGate(q, 1.5759692564230323, 8);
  sqcRZGate(q, -1.8562626440925127, 8);
  sqcRYGate(q, -1.741877197951048, 9);
  sqcRZGate(q, -1.8933830998271732, 9);
  sqcRYGate(q, -2.351326378444163, 10);
  sqcRZGate(q, 2.5124831360423343, 10);
  sqcRYGate(q, 0.5031917443943159, 11);
  sqcRZGate(q, -2.14462121833932, 11);
  sqcRYGate(q, 0.1548951453830547, 12);
  sqcRZGate(q, -2.6457329205965108, 12);
  sqcRYGate(q, 3.1265258573325467, 13);
  sqcRZGate(q, 1.183130010464648, 13);
  sqcRYGate(q, -1.1751715443979331, 14);
  sqcRZGate(q, 0.6220573452303031, 14);
  sqcRYGate(q, 2.737992231033562, 15);
  sqcRZGate(q, 0.7900518951217842, 15);
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
  sqcRYGate(q, -1.7604436487454267, 0);
  sqcRZGate(q, -0.7070091474335436, 0);
  sqcRYGate(q, -3.1409805394739165, 1);
  sqcRZGate(q, -1.7496070254740737, 1);
  sqcRYGate(q, -3.1399882563782686, 2);
  sqcRZGate(q, -1.8045716826387777, 2);
  sqcRYGate(q, 3.1413069195072185, 3);
  sqcRZGate(q, -3.0664432175663157, 3);
  sqcRYGate(q, 1.5695186728208244, 4);
  sqcRZGate(q, -0.37911664658296473, 4);
  sqcRYGate(q, -2.846228927105164, 5);
  sqcRZGate(q, -1.4314152192197114, 5);
  sqcRYGate(q, -3.1411178613654682, 6);
  sqcRZGate(q, 2.831737862925712, 6);
  sqcRYGate(q, -1.5693704809732272, 7);
  sqcRZGate(q, -1.56533991417949, 7);
  sqcRYGate(q, 3.1407548813959805, 8);
  sqcRZGate(q, 2.581012285443836, 8);
  sqcRYGate(q, -3.0786663591154446, 9);
  sqcRZGate(q, 3.002599922237499, 9);
  sqcRYGate(q, -3.1230764193016807, 10);
  sqcRZGate(q, 2.6800167659025598, 10);
  sqcRYGate(q, 0.844204441812578, 11);
  sqcRZGate(q, 0.8955374817975796, 11);
  sqcRYGate(q, 3.1258867450129775, 12);
  sqcRZGate(q, -2.170101768212259, 12);
  sqcRYGate(q, -0.0803719882489879, 13);
  sqcRZGate(q, 2.8909436680713347, 13);
  sqcRYGate(q, -2.864663021969113, 14);
  sqcRZGate(q, 2.421494037501612, 14);
  sqcRYGate(q, -1.78765790077708, 15);
  sqcRZGate(q, 2.924508329400019, 15);
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
  sqcRYGate(q, -2.21625473316306, 0);
  sqcRZGate(q, -2.939688839612071, 0);
  sqcRYGate(q, -0.9874904097253124, 1);
  sqcRZGate(q, -2.5412833774263355, 1);
  sqcRYGate(q, -1.9528187946088718, 2);
  sqcRZGate(q, 2.1357805245639243, 2);
  sqcRYGate(q, 1.5705075881269455, 3);
  sqcRZGate(q, -1.571610106086639, 3);
  sqcRYGate(q, -3.141448425027322, 4);
  sqcRZGate(q, 2.9969296718683918, 4);
  sqcRYGate(q, 0.0006969066985658992, 5);
  sqcRZGate(q, 2.625254869677119, 5);
  sqcRYGate(q, 3.1413033719989474, 6);
  sqcRZGate(q, -1.415337301549858, 6);
  sqcRYGate(q, 1.575252421971991, 7);
  sqcRZGate(q, 0.8034317788897959, 7);
  sqcRYGate(q, 0.03643985468399258, 8);
  sqcRZGate(q, -1.3140801497099919, 8);
  sqcRYGate(q, 2.6436460615273, 9);
  sqcRZGate(q, -0.29323925453813704, 9);
  sqcRYGate(q, 2.208109878683364, 10);
  sqcRZGate(q, 1.2761079954658872, 10);
  sqcRYGate(q, 1.3416497221556043, 11);
  sqcRZGate(q, 1.0715753681826703, 11);
  sqcRYGate(q, 0.01718560397065172, 12);
  sqcRZGate(q, 1.3663994879313406, 12);
  sqcRYGate(q, -1.5414558686695774, 13);
  sqcRZGate(q, 3.113416935648626, 13);
  sqcRYGate(q, 1.084570898449515, 14);
  sqcRZGate(q, -0.32281284529348314, 14);
  sqcRYGate(q, 1.6565591838609661, 15);
  sqcRZGate(q, 3.0158584281583867, 15);
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
  sqcRYGate(q, 1.9435907836272892, 0);
  sqcRZGate(q, -1.124890119140307, 0);
  sqcRYGate(q, 1.7001474135087713, 1);
  sqcRZGate(q, -2.541298521694227, 1);
  sqcRYGate(q, -1.8133583227356302, 2);
  sqcRZGate(q, -0.726561428191998, 2);
  sqcRYGate(q, -1.5708619126521042, 3);
  sqcRZGate(q, -2.5607827583787404, 3);
  sqcRYGate(q, -2.2695206062333497, 4);
  sqcRZGate(q, -0.40373271033410013, 4);
  sqcRYGate(q, -3.0681640222419126, 5);
  sqcRZGate(q, -0.510417080198529, 5);
  sqcRYGate(q, 1.5696091159457104, 6);
  sqcRZGate(q, 1.5809700948136767, 6);
  sqcRYGate(q, -2.944112340573307, 7);
  sqcRZGate(q, -1.3820229937593382, 7);
  sqcRYGate(q, 0.2270926974340688, 8);
  sqcRZGate(q, 0.8129730765753944, 8);
  sqcRYGate(q, 3.0993506886026467, 9);
  sqcRZGate(q, 2.5332155495609676, 9);
  sqcRYGate(q, -1.4589900995080125, 10);
  sqcRZGate(q, 1.3681063440464762, 10);
  sqcRYGate(q, 1.603025595778904, 11);
  sqcRZGate(q, -2.9029325041073597, 11);
  sqcRYGate(q, 0.001441352792535433, 12);
  sqcRZGate(q, 1.3720285403568075, 12);
  sqcRYGate(q, -2.7992310528796485, 13);
  sqcRZGate(q, -0.20974617377941418, 13);
  sqcRYGate(q, -1.0526958758939902, 14);
  sqcRZGate(q, -1.3455716149895256, 14);
  sqcRYGate(q, 0.011243980547036438, 15);
  sqcRZGate(q, 1.0668257110258583, 15);
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
  sqcRYGate(q, -2.6708893503036264, 0);
  sqcRZGate(q, -0.6030883688627159, 0);
  sqcRYGate(q, 1.4534604094440136, 1);
  sqcRZGate(q, -1.7243520952399722, 1);
  sqcRYGate(q, -1.7805015896430665, 2);
  sqcRZGate(q, -1.7328291481379943, 2);
  sqcRYGate(q, -3.1410913980881867, 3);
  sqcRZGate(q, 2.6573719042263404, 3);
  sqcRYGate(q, 0.0016560710329667216, 4);
  sqcRZGate(q, 2.1573361765722137, 4);
  sqcRYGate(q, -0.03799545301408891, 5);
  sqcRZGate(q, -1.2541276713310208, 5);
  sqcRYGate(q, 0.003698738837807723, 6);
  sqcRZGate(q, -1.1983478312305964, 6);
  sqcRYGate(q, -1.5720055778328454, 7);
  sqcRZGate(q, -3.132257873304159, 7);
  sqcRYGate(q, -0.05033251117136395, 8);
  sqcRZGate(q, -0.8167294869238367, 8);
  sqcRYGate(q, -0.03638345397531851, 9);
  sqcRZGate(q, 0.452759678330124, 9);
  sqcRYGate(q, 0.5526238981486582, 10);
  sqcRZGate(q, -1.6937068675756983, 10);
  sqcRYGate(q, 1.5642056163182172, 11);
  sqcRZGate(q, 1.4302173060788546, 11);
  sqcRYGate(q, -0.012678383469072966, 12);
  sqcRZGate(q, 2.0613980420536695, 12);
  sqcRYGate(q, 3.0989048533705814, 13);
  sqcRZGate(q, 2.3093620961650996, 13);
  sqcRYGate(q, -0.10833932536667934, 14);
  sqcRZGate(q, -2.9816884122295906, 14);
  sqcRYGate(q, -0.038012924241907754, 15);
  sqcRZGate(q, -0.6916741688733814, 15);
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
  sqcRYGate(q, 1.0540930775233506, 0);
  sqcRZGate(q, 1.7011686052539439, 0);
  sqcRYGate(q, -2.30853828200788, 1);
  sqcRZGate(q, -3.10063145170459, 1);
  sqcRYGate(q, 1.1777064604848755, 2);
  sqcRZGate(q, -2.8261255444046274, 2);
  sqcRYGate(q, 3.13973884076267, 3);
  sqcRZGate(q, -0.8423825345333954, 3);
  sqcRYGate(q, -0.7353168970066966, 4);
  sqcRZGate(q, 1.159305966532982, 4);
  sqcRYGate(q, 0.7791039807389843, 5);
  sqcRZGate(q, -2.872168029132467, 5);
  sqcRYGate(q, -3.140842302370346, 6);
  sqcRZGate(q, -3.0240939144879433, 6);
  sqcRYGate(q, 0.04985626051180219, 7);
  sqcRZGate(q, -1.6516722068328227, 7);
  sqcRYGate(q, -1.5705164432992031, 8);
  sqcRZGate(q, 3.141167594544636, 8);
  sqcRYGate(q, -1.5785711487644989, 9);
  sqcRZGate(q, -2.989943020063967, 9);
  sqcRYGate(q, 0.04117135182006261, 10);
  sqcRZGate(q, 1.7664710349554973, 10);
  sqcRYGate(q, 1.5624360453030404, 11);
  sqcRZGate(q, 3.1273236557558035, 11);
  sqcRYGate(q, 2.4364222863399836, 12);
  sqcRZGate(q, -1.7903066997954358, 12);
  sqcRYGate(q, -3.074540232023631, 13);
  sqcRZGate(q, -0.7701245009693292, 13);
  sqcRYGate(q, -1.2964684916384492, 14);
  sqcRZGate(q, -0.5807706458978474, 14);
  sqcRYGate(q, 1.6397830469613088, 15);
  sqcRZGate(q, -1.2841028779485932, 15);
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
  sqcRYGate(q, -2.990214759030425, 0);
  sqcRZGate(q, 2.1484243797351277, 0);
  sqcRYGate(q, 0.275335685578157, 1);
  sqcRZGate(q, -1.2548164533233257, 1);
  sqcRYGate(q, 1.217540607147948, 2);
  sqcRZGate(q, 2.3127206424481286, 2);
  sqcRYGate(q, -1.6353601204661603, 3);
  sqcRZGate(q, 1.5526272445813643, 3);
  sqcRYGate(q, 0.00014354557112827848, 4);
  sqcRZGate(q, -1.1954679978071518, 4);
  sqcRYGate(q, 1.5700173504107138, 5);
  sqcRZGate(q, -3.141066385529311, 5);
  sqcRYGate(q, 3.800307702750416e-05, 6);
  sqcRZGate(q, 1.835964251114401, 6);
  sqcRYGate(q, -1.5520934599282783, 7);
  sqcRZGate(q, -0.14857117413462542, 7);
  sqcRYGate(q, -1.5660011053217344, 8);
  sqcRZGate(q, 1.5129496158406521, 8);
  sqcRYGate(q, -0.0013749976337349423, 9);
  sqcRZGate(q, -0.15855755275021188, 9);
  sqcRYGate(q, -1.584698579890432, 10);
  sqcRZGate(q, -0.005748586043163861, 10);
  sqcRYGate(q, -1.5073005884206283, 11);
  sqcRZGate(q, 3.137663974968158, 11);
  sqcRYGate(q, 0.0012096334418369994, 12);
  sqcRZGate(q, 1.7984608149116292, 12);
  sqcRYGate(q, 0.9209113561535665, 13);
  sqcRZGate(q, 3.081768917844054, 13);
  sqcRYGate(q, 1.549387440190415, 14);
  sqcRZGate(q, -1.9445500121994448, 14);
  sqcRYGate(q, 0.0009929090218698095, 15);
  sqcRZGate(q, -0.1255522100103903, 15);
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
  sqcRYGate(q, 0.049432569698700364, 0);
  sqcRZGate(q, 0.6119132989560382, 0);
  sqcRYGate(q, 0.3782143612937186, 1);
  sqcRZGate(q, -2.896530079001567, 1);
  sqcRYGate(q, 3.141025986431781, 2);
  sqcRZGate(q, 2.675862520890892, 2);
  sqcRYGate(q, 1.496165991073866, 3);
  sqcRZGate(q, 3.140459497897268, 3);
  sqcRYGate(q, 0.9195688408595014, 4);
  sqcRZGate(q, 0.0010278765244873256, 4);
  sqcRYGate(q, 2.2967944893055288, 5);
  sqcRZGate(q, -3.1175829673341653, 5);
  sqcRYGate(q, 0.7114623777401201, 6);
  sqcRZGate(q, -0.0033535175393772927, 6);
  sqcRYGate(q, 1.569510683569127, 7);
  sqcRZGate(q, -9.097741891750388e-05, 7);
  sqcRYGate(q, 3.140720237343883, 8);
  sqcRZGate(q, -1.7387797965854626, 8);
  sqcRYGate(q, 1.5713107327159865, 9);
  sqcRZGate(q, -1.8541903575068908, 9);
  sqcRYGate(q, 1.5021116548557913, 10);
  sqcRZGate(q, -3.109313020994106, 10);
  sqcRYGate(q, 2.338583434547815, 11);
  sqcRZGate(q, 3.1194755082681636, 11);
  sqcRYGate(q, -1.5404327602529815, 12);
  sqcRZGate(q, 1.5642940768871132, 12);
  sqcRYGate(q, 3.0608525321000837, 13);
  sqcRZGate(q, -0.07655727207655705, 13);
  sqcRYGate(q, -0.9076776749544252, 14);
  sqcRZGate(q, 3.1399565844509856, 14);
  sqcRYGate(q, -2.238141703392774, 15);
  sqcRZGate(q, -1.484216261475272, 15);
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
  sqcRYGate(q, -2.5490957998407273, 0);
  sqcRZGate(q, -2.738215116428551, 0);
  sqcRYGate(q, 2.7669176535036004, 1);
  sqcRZGate(q, -1.2000087350898732, 1);
  sqcRYGate(q, -0.0957737431430159, 2);
  sqcRZGate(q, -0.5490509875659568, 2);
  sqcRYGate(q, -0.795520538936663, 3);
  sqcRZGate(q, -0.30454460353757007, 3);
  sqcRYGate(q, 2.7258743626513158, 4);
  sqcRZGate(q, 0.001020192269909272, 4);
  sqcRYGate(q, -1.5568997012229193, 5);
  sqcRZGate(q, -1.0080973574173018, 5);
  sqcRYGate(q, -1.4052133119087176, 6);
  sqcRZGate(q, -0.04127565656085607, 6);
  sqcRYGate(q, -0.7067978860599382, 7);
  sqcRZGate(q, -2.3452605188790003, 7);
  sqcRYGate(q, 3.139849724055329, 8);
  sqcRZGate(q, -0.11034071155669078, 8);
  sqcRYGate(q, 3.1340568946243215, 9);
  sqcRZGate(q, 2.81867564684849, 9);
  sqcRYGate(q, 0.9328369831274346, 10);
  sqcRZGate(q, -2.502792889543251, 10);
  sqcRYGate(q, 0.15628472128923931, 11);
  sqcRZGate(q, 1.9284936234294652, 11);
  sqcRYGate(q, 0.06376154122314938, 12);
  sqcRZGate(q, -1.5641293877826283, 12);
  sqcRYGate(q, -1.5458482371209135, 13);
  sqcRZGate(q, -3.131595324473538, 13);
  sqcRYGate(q, -1.4482795456039605, 14);
  sqcRZGate(q, -1.5553475872982814, 14);
  sqcRYGate(q, 0.12466594389498539, 15);
  sqcRZGate(q, -1.195285000648255, 15);
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
  sqcRYGate(q, -0.07783331080016521, 0);
  sqcRZGate(q, -2.267598127815946, 0);
  sqcRYGate(q, -0.9650046840727681, 1);
  sqcRZGate(q, -1.83659446205937, 1);
  sqcRYGate(q, -1.5710114019070422, 2);
  sqcRZGate(q, 0.4720064791930685, 2);
  sqcRYGate(q, 0.08404696898609565, 3);
  sqcRZGate(q, 0.3025822555603155, 3);
  sqcRYGate(q, -1.5784631222157721, 4);
  sqcRZGate(q, 3.1410876479386323, 4);
  sqcRYGate(q, 0.0004436481798881786, 5);
  sqcRZGate(q, 1.0106581409795103, 5);
  sqcRYGate(q, 3.100404458926609, 6);
  sqcRZGate(q, -0.06088539131046768, 6);
  sqcRYGate(q, -3.128673680158444, 7);
  sqcRZGate(q, 0.1562675901513701, 7);
  sqcRYGate(q, -1.4758116511158388, 8);
  sqcRZGate(q, -0.07454203525903738, 8);
  sqcRYGate(q, 0.0007798195183603696, 9);
  sqcRZGate(q, -1.5216801976516363, 9);
  sqcRYGate(q, 3.141070573910864, 10);
  sqcRZGate(q, 0.4434758832914705, 10);
  sqcRYGate(q, -0.002668953732649193, 11);
  sqcRZGate(q, -2.217361865327769, 11);
  sqcRYGate(q, 2.1803571905909074, 12);
  sqcRZGate(q, 1.5456146644804274, 12);
  sqcRYGate(q, -3.1254368716508316, 13);
  sqcRZGate(q, -3.131689382492385, 13);
  sqcRYGate(q, 1.5705933739103133, 14);
  sqcRZGate(q, -0.5006550039919251, 14);
  sqcRYGate(q, -3.0243700885670095, 15);
  sqcRZGate(q, -1.4306169752853641, 15);
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
  sqcRYGate(q, -1.2619934748495427, 0);
  sqcRZGate(q, -1.5469380712213958, 0);
  sqcRYGate(q, 0.0029378697940449783, 1);
  sqcRZGate(q, -2.0895689210312876, 1);
  sqcRYGate(q, -1.5291169910320959, 2);
  sqcRZGate(q, 1.4463033199263915, 2);
  sqcRYGate(q, 1.6061707522476036, 3);
  sqcRZGate(q, -1.8404266187139868, 3);
  sqcRYGate(q, -1.9854516606213783, 4);
  sqcRZGate(q, -2.972648529413814, 4);
  sqcRYGate(q, -2.3995095155466104, 5);
  sqcRZGate(q, -3.1390454452907774, 5);
  sqcRYGate(q, -2.9747096208819515, 6);
  sqcRZGate(q, 3.1222033048082833, 6);
  sqcRYGate(q, 0.00600830477080648, 7);
  sqcRZGate(q, 0.5999303063466135, 7);
  sqcRYGate(q, 3.1388943328881895, 8);
  sqcRZGate(q, -0.07603983312807293, 8);
  sqcRYGate(q, -1.674850068777543, 9);
  sqcRZGate(q, -0.8543523520969876, 9);
  sqcRYGate(q, 0.1764427485104767, 10);
  sqcRZGate(q, -2.809634755435813, 10);
  sqcRYGate(q, -1.9702041338909355, 11);
  sqcRZGate(q, -2.9059520231090925, 11);
  sqcRYGate(q, -0.03738099815453389, 12);
  sqcRZGate(q, 2.1190346457316807, 12);
  sqcRYGate(q, 1.5678444515565628, 13);
  sqcRZGate(q, -1.5744707642117497, 13);
  sqcRYGate(q, -3.1330004605732262, 14);
  sqcRZGate(q, -2.102522085115418, 14);
  sqcRYGate(q, -0.0028098846556066093, 15);
  sqcRZGate(q, -1.5379764228264934, 15);
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
  sqcRYGate(q, 1.1722883969823505, 0);
  sqcRZGate(q, 0.5450405613364329, 0);
  sqcRYGate(q, 3.1409594899493167, 1);
  sqcRZGate(q, 0.7530000093559733, 1);
  sqcRYGate(q, 0.10128917815226576, 2);
  sqcRZGate(q, 0.3518497713889599, 2);
  sqcRYGate(q, -0.0004655749702893175, 3);
  sqcRZGate(q, 2.4390457705401833, 3);
  sqcRYGate(q, -0.3910894765768357, 4);
  sqcRZGate(q, 2.9093880299097483, 4);
  sqcRYGate(q, 1.5701086059623357, 5);
  sqcRZGate(q, -1.794335745293422, 5);
  sqcRYGate(q, -1.5405613322868188, 6);
  sqcRZGate(q, 0.0536839360770065, 6);
  sqcRYGate(q, -0.22348865561714912, 7);
  sqcRZGate(q, 0.041224886244997296, 7);
  sqcRYGate(q, -2.4227742669720915, 8);
  sqcRZGate(q, -1.0831919733271382, 8);
  sqcRYGate(q, 0.005173151878206994, 9);
  sqcRZGate(q, -2.197169717089644, 9);
  sqcRYGate(q, -0.029907486443539986, 10);
  sqcRZGate(q, 2.6943788567655678, 10);
  sqcRYGate(q, 0.008795590582287405, 11);
  sqcRZGate(q, 2.2003735814090604, 11);
  sqcRYGate(q, 0.000926450844712464, 12);
  sqcRZGate(q, -0.5229277757260766, 12);
  sqcRYGate(q, 1.5711512174033482, 13);
  sqcRZGate(q, -0.5828911059046505, 13);
  sqcRYGate(q, 2.3662065498429987, 14);
  sqcRZGate(q, -3.137905905498486, 14);
  sqcRYGate(q, 3.0645920730521565, 15);
  sqcRZGate(q, -0.7017924401467424, 15);
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
  sqcRYGate(q, -2.052489693165384, 0);
  sqcRZGate(q, -0.009832661999275238, 0);
  sqcRYGate(q, -0.5648096783503218, 1);
  sqcRZGate(q, 2.906840452662769, 1);
  sqcRYGate(q, -2.3170202684919583, 2);
  sqcRZGate(q, 0.4177272808508379, 2);
  sqcRYGate(q, -3.1384898385265037, 3);
  sqcRZGate(q, -2.632294426515022, 3);
  sqcRYGate(q, 0.6603491414062638, 4);
  sqcRZGate(q, 0.03548950468463551, 4);
  sqcRYGate(q, 0.018009090338424016, 5);
  sqcRZGate(q, -0.6734406670812332, 5);
  sqcRYGate(q, 2.416157616711909, 6);
  sqcRZGate(q, 1.550716510243638, 6);
  sqcRYGate(q, -1.5264387681223517, 7);
  sqcRZGate(q, -6.381567548913358e-05, 7);
  sqcRYGate(q, 7.657327814500302e-05, 8);
  sqcRZGate(q, -2.0336214231344685, 8);
  sqcRYGate(q, 0.13193924387934058, 9);
  sqcRZGate(q, 0.3403230571105669, 9);
  sqcRYGate(q, 3.108971603147016, 10);
  sqcRZGate(q, 2.809510878701202, 10);
  sqcRYGate(q, 0.49403266972415044, 11);
  sqcRZGate(q, -2.499883491070296, 11);
  sqcRYGate(q, 0.4940587094209547, 12);
  sqcRZGate(q, 0.0029707079480871712, 12);
  sqcRYGate(q, 3.1404119817504466, 13);
  sqcRZGate(q, -2.186590365986551, 13);
  sqcRYGate(q, -1.5525173704999917, 14);
  sqcRZGate(q, 1.569367174260755, 14);
  sqcRYGate(q, 3.137090533974263, 15);
  sqcRZGate(q, -2.051071657263593, 15);
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
  sqcRYGate(q, -1.5306325729616006, 0);
  sqcRZGate(q, 1.6259458703034975, 0);
  sqcRYGate(q, -3.1415550606411102, 1);
  sqcRZGate(q, 2.0657924278677404, 1);
  sqcRYGate(q, 0.008918919926219133, 2);
  sqcRZGate(q, -1.7821600174592254, 2);
  sqcRYGate(q, 0.00012739785029141496, 3);
  sqcRZGate(q, 0.08671065293876001, 3);
  sqcRYGate(q, -0.9258307438329636, 4);
  sqcRZGate(q, -3.039677809566735, 4);
  sqcRYGate(q, 3.140956092404269, 5);
  sqcRZGate(q, -2.400864580431447, 5);
  sqcRYGate(q, 3.131757907829917, 6);
  sqcRZGate(q, -0.04626628503483529, 6);
  sqcRYGate(q, 1.3603882193538668, 7);
  sqcRZGate(q, 1.493169460377181, 7);
  sqcRYGate(q, 3.134048628205289, 8);
  sqcRZGate(q, 1.7911411985714007, 8);
  sqcRYGate(q, -3.1352045301735716, 9);
  sqcRZGate(q, -2.711374270782349, 9);
  sqcRYGate(q, -1.5445495974345098, 10);
  sqcRZGate(q, 1.6652573072851737, 10);
  sqcRYGate(q, -0.6699275411381428, 11);
  sqcRZGate(q, -3.1199190878745893, 11);
  sqcRYGate(q, -0.1621340748978611, 12);
  sqcRZGate(q, -1.5712435112066236, 12);
  sqcRYGate(q, -3.140088837477341, 13);
  sqcRZGate(q, -1.8610691957035719, 13);
  sqcRYGate(q, -1.5705254511090545, 14);
  sqcRZGate(q, -2.82431824441441, 14);
  sqcRYGate(q, -2.0202988616777717, 15);
  sqcRZGate(q, -1.5232992313627216, 15);
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
  sqcRYGate(q, -1.4756348680450495, 0);
  sqcRZGate(q, -0.14334004208451231, 0);
  sqcRYGate(q, 0.04032193864725908, 1);
  sqcRZGate(q, -0.7287121818930142, 1);
  sqcRYGate(q, 1.7410893725526901, 2);
  sqcRZGate(q, -0.4601213513452959, 2);
  sqcRYGate(q, -3.125471721912374, 3);
  sqcRZGate(q, 3.1346384587483747, 3);
  sqcRYGate(q, 0.9053575598082899, 4);
  sqcRZGate(q, 3.0652193129581615, 4);
  sqcRYGate(q, -0.013239499676816424, 5);
  sqcRZGate(q, 1.5783614772655792, 5);
  sqcRYGate(q, -1.5235444296271168, 6);
  sqcRZGate(q, 3.1160397966078834, 6);
  sqcRYGate(q, 3.1414949805139725, 7);
  sqcRZGate(q, -1.632842608772024, 7);
  sqcRYGate(q, -0.00023035479421920787, 8);
  sqcRZGate(q, -1.7662893485568132, 8);
  sqcRYGate(q, -1.5312450952462795, 9);
  sqcRZGate(q, 0.00859694010612433, 9);
  sqcRYGate(q, 0.0435398383948149, 10);
  sqcRZGate(q, -1.8693712327520247, 10);
  sqcRYGate(q, 0.03948408319139407, 11);
  sqcRZGate(q, 1.4336008270266907, 11);
  sqcRYGate(q, -1.6096552673113989, 12);
  sqcRZGate(q, 0.14803288348937738, 12);
  sqcRYGate(q, 0.3324994074959155, 13);
  sqcRZGate(q, 0.432214264360689, 13);
  sqcRYGate(q, -1.2293363728159109e-05, 14);
  sqcRZGate(q, -1.7728564392482322, 14);
  sqcRYGate(q, 1.1222001852651422, 15);
  sqcRZGate(q, -3.1308674191430192, 15);
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
  sqcRYGate(q, 0.07945035115468713, 0);
  sqcRZGate(q, 0.18051348446452775, 0);
  sqcRYGate(q, -1.5746905007309477, 1);
  sqcRZGate(q, -0.0025368152001468284, 1);
  sqcRYGate(q, -0.0015716504075795612, 2);
  sqcRZGate(q, 0.7562761544853496, 2);
  sqcRYGate(q, -0.5442441304978072, 3);
  sqcRZGate(q, -1.5621251906098175, 3);
  sqcRYGate(q, 1.5155281850120765, 4);
  sqcRZGate(q, -1.5533618414516797, 4);
  sqcRYGate(q, -0.00013479078697553604, 5);
  sqcRZGate(q, 3.0664987263608654, 5);
  sqcRYGate(q, 0.00992045720825363, 6);
  sqcRZGate(q, -0.33521657706112024, 6);
  sqcRYGate(q, -3.1059525030478734, 7);
  sqcRZGate(q, -1.5552538614146245, 7);
  sqcRYGate(q, 2.601186229383649, 8);
  sqcRZGate(q, 1.5705589275186078, 8);
  sqcRYGate(q, -3.1340632477978114, 9);
  sqcRZGate(q, 1.5789841874573316, 9);
  sqcRYGate(q, -3.137563353355664, 10);
  sqcRZGate(q, -1.7720635276406043, 10);
  sqcRYGate(q, 3.1412132294994715, 11);
  sqcRZGate(q, -0.11774508276188647, 11);
  sqcRYGate(q, 3.1389993292320333, 12);
  sqcRZGate(q, 0.10516874108800513, 12);
  sqcRYGate(q, 0.06735168694493135, 13);
  sqcRZGate(q, 3.001951446134605, 13);
  sqcRYGate(q, 0.0005553169140396434, 14);
  sqcRZGate(q, -0.03968589293274518, 14);
  sqcRYGate(q, -1.4589601328538189, 15);
  sqcRZGate(q, 3.1267809930556814, 15);
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
  sqcRYGate(q, -3.1408184475158354, 0);
  sqcRZGate(q, -1.1515652848213778, 0);
  sqcRYGate(q, -1.6006784171839357, 1);
  sqcRZGate(q, 1.870047115699224, 1);
  sqcRYGate(q, -1.5716814797056284, 2);
  sqcRZGate(q, 1.425172107440044, 2);
  sqcRYGate(q, -1.5701980323403675, 3);
  sqcRZGate(q, -2.809715702772038, 3);
  sqcRYGate(q, 1.5712202662103634, 4);
  sqcRZGate(q, 3.0082485854033174, 4);
  sqcRYGate(q, 1.6137355022291615, 5);
  sqcRZGate(q, -1.3007202226884944, 5);
  sqcRYGate(q, 3.0992602625704233, 6);
  sqcRZGate(q, 2.7879544216739514, 6);
  sqcRYGate(q, 1.570605579546542, 7);
  sqcRZGate(q, -1.2207679699495024, 7);
  sqcRYGate(q, 1.5706183946340224, 8);
  sqcRZGate(q, 2.9971971326420075, 8);
  sqcRYGate(q, 1.570663629859115, 9);
  sqcRZGate(q, -2.8547841081685634, 9);
  sqcRYGate(q, 1.5278651355599742, 10);
  sqcRZGate(q, 3.010835792233644, 10);
  sqcRYGate(q, -1.5653261476679738, 11);
  sqcRZGate(q, 0.24697349514035058, 11);
  sqcRYGate(q, 3.1031051451406766, 12);
  sqcRZGate(q, -2.931683133994735, 12);
  sqcRYGate(q, 1.193997987538097, 13);
  sqcRZGate(q, -1.239721956804108, 13);
  sqcRYGate(q, 0.0002790851788097015, 14);
  sqcRZGate(q, 1.2324594567981237, 14);
  sqcRYGate(q, 2.02407470457877, 15);
  sqcRZGate(q, 2.3417003257698337, 15);

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
