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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -2.7728699290933605, 0);
  sqcRYGate(q, 0.7604698434595116, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.23974724352011365, 0);
  sqcRYGate(q, 0.7521605273421841, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5044765844184362, 2);
  sqcRYGate(q, 1.805354452777453, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.06282976221723757, 2);
  sqcRYGate(q, -0.02705963053196379, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9233249421940064, 4);
  sqcRYGate(q, 1.7642579069692772, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9898847975076898, 4);
  sqcRYGate(q, 1.9136874070016197, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7997209999688977, 6);
  sqcRYGate(q, 0.7579269565688551, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8041890075501514, 6);
  sqcRYGate(q, 0.5304621789219295, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.698556444410448, 1);
  sqcRYGate(q, -3.016602434440489, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1500619654981277, 1);
  sqcRYGate(q, 0.44610877034121277, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.124841620859943, 3);
  sqcRYGate(q, 0.736558849140069, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0934778035267136, 3);
  sqcRYGate(q, -1.083265904580516, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.41584848973845356, 5);
  sqcRYGate(q, 1.666001968424597, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.120777454678929, 5);
  sqcRYGate(q, 2.2789812064760335, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7762970800880487, 0);
  sqcRYGate(q, -0.11209936631833352, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0390446478290043, 0);
  sqcRYGate(q, -0.024982112221909603, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8748748190168136, 2);
  sqcRYGate(q, 1.854730526591792, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0018632055669667, 2);
  sqcRYGate(q, -2.4224021357131638, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4723713505228875, 4);
  sqcRYGate(q, -1.7533122763010933, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3232435757396583, 4);
  sqcRYGate(q, -2.063043647164157, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.1774120168721883, 6);
  sqcRYGate(q, 2.3162872655393496, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.2699859119058905, 6);
  sqcRYGate(q, -1.446661880227567, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.1341328765395353, 1);
  sqcRYGate(q, 1.7462869484183186, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.840882083423979, 1);
  sqcRYGate(q, 2.0272408866123266, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6766140728769066, 3);
  sqcRYGate(q, -2.155694033193754, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.019194924247008617, 3);
  sqcRYGate(q, -3.082579239123443, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.308357082222744, 5);
  sqcRYGate(q, -2.17387265237288, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2049840387761543, 5);
  sqcRYGate(q, 0.149032542478567, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.618025557351665, 0);
  sqcRYGate(q, 2.2387797163090752, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1003539937492866, 0);
  sqcRYGate(q, 1.487575995333244, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8824836751896576, 2);
  sqcRYGate(q, 1.8665112430738953, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.05187852763012213, 2);
  sqcRYGate(q, -3.0647063664613388, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.377096637546051, 4);
  sqcRYGate(q, -1.8782539018143325, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1394059879016987, 4);
  sqcRYGate(q, 3.140793811838089, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.603229595079807, 6);
  sqcRYGate(q, 1.3422964519684462, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8052903087403518, 6);
  sqcRYGate(q, -0.017979014012552717, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.397479094222745, 1);
  sqcRYGate(q, -2.3516141893432807, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9322820800737834, 1);
  sqcRYGate(q, -2.885609819387768, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.40190744342389034, 3);
  sqcRYGate(q, -0.9883225568070692, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1169848333925327, 3);
  sqcRYGate(q, 3.11996732814915, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.181737183231288, 5);
  sqcRYGate(q, -2.631936149128733, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.33548515427119907, 5);
  sqcRYGate(q, -1.66309168425672, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.035428619228137, 0);
  sqcRYGate(q, -1.1293472237772795, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.220164608928938, 0);
  sqcRYGate(q, -0.20040825694613318, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9673395480279132, 2);
  sqcRYGate(q, 0.23333718076536286, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.036663539124579, 2);
  sqcRYGate(q, 2.941652164951873, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3080582031570334, 4);
  sqcRYGate(q, -0.15687112522066826, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8848358244810983, 4);
  sqcRYGate(q, -2.493010975649074, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4995883812925932, 6);
  sqcRYGate(q, 0.9867914222956244, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.228174342809801, 6);
  sqcRYGate(q, -2.531419513055713, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7261122499417842, 1);
  sqcRYGate(q, 1.6330946050163138, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4600439841059285, 1);
  sqcRYGate(q, 0.6932449871126699, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8082179568026713, 3);
  sqcRYGate(q, -2.8427237653998407, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.141555809816134, 3);
  sqcRYGate(q, 0.0006692353120136829, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.21871874299216376, 5);
  sqcRYGate(q, 0.9974214176521556, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6337039901613282, 5);
  sqcRYGate(q, 0.008205540375570308, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9729872535850799, 0);
  sqcRYGate(q, -1.9787680566562704, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9014552780159275, 0);
  sqcRYGate(q, -2.179801282752869, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3522214267570423, 2);
  sqcRYGate(q, -2.1642545404336175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.99245831557448, 2);
  sqcRYGate(q, 1.759906110427794, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7538661730964193, 4);
  sqcRYGate(q, 0.3681317887578537, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.430208442064296, 4);
  sqcRYGate(q, -2.616700192815648, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.28003252514789945, 6);
  sqcRYGate(q, 2.322427547797942, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9696266164181796, 6);
  sqcRYGate(q, 2.3901758468203065, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4967351426275255, 1);
  sqcRYGate(q, 2.734014349023559, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.241925034355452, 1);
  sqcRYGate(q, 3.0740748931127944, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0316047470599012, 3);
  sqcRYGate(q, -1.0717934798142785, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6302036038030152, 3);
  sqcRYGate(q, 0.14497049957919828, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.1265794924296917, 5);
  sqcRYGate(q, 2.3503905117927895, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9232671937973489, 5);
  sqcRYGate(q, -0.13022255341739986, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1217925985410324, 0);
  sqcRYGate(q, -2.887628487062852, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.05882640851991984, 0);
  sqcRYGate(q, -2.491554233709594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8966405526815502, 2);
  sqcRYGate(q, -2.4875233434944466, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.033925334959204724, 2);
  sqcRYGate(q, 0.14314190671607827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9192933796213336, 4);
  sqcRYGate(q, 2.1403375951366796, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1414660101944505, 4);
  sqcRYGate(q, -0.0008009573958762672, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.825516897788303, 6);
  sqcRYGate(q, -1.5410911869662385, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.032156390398181856, 6);
  sqcRYGate(q, -3.120397903959295, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4337049379556406, 1);
  sqcRYGate(q, -1.2954302910218454, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6232192168091641, 1);
  sqcRYGate(q, 1.9381155700373924, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.24732751283318, 3);
  sqcRYGate(q, 2.919708157466447, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7341583094679116, 3);
  sqcRYGate(q, -2.3752639442117225, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.35091087639514346, 5);
  sqcRYGate(q, 0.2601711363597065, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1933221874307582, 5);
  sqcRYGate(q, -2.8082046564210703, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8087211110027255, 0);
  sqcRYGate(q, 2.024597233685842, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.528064189113765, 0);
  sqcRYGate(q, 2.606216508651138, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9845873281671809, 2);
  sqcRYGate(q, 2.4127158845671746, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6176053988252128, 2);
  sqcRYGate(q, 1.9876648699696595, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.40158655297424833, 4);
  sqcRYGate(q, 1.8217598070870515, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2351978419162706, 4);
  sqcRYGate(q, -4.5884633708581646e-05, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0620451647371991, 6);
  sqcRYGate(q, -2.329978525913263, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0362285834815648, 6);
  sqcRYGate(q, 3.1219869692272537, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.612420776493601, 1);
  sqcRYGate(q, 2.6701301663772017, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.008658393672202003, 1);
  sqcRYGate(q, 3.129991215854973, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.573158123095797, 3);
  sqcRYGate(q, -0.34197070734918444, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5335806643024964, 3);
  sqcRYGate(q, -0.9345755493181314, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.18416027147559155, 5);
  sqcRYGate(q, 3.1103141262373017, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9919916965557033, 5);
  sqcRYGate(q, 0.006153839699641669, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4833404841345628, 0);
  sqcRYGate(q, -0.15393689910293862, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8012792809727447, 0);
  sqcRYGate(q, -2.1454807003678966, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3746191214087542, 2);
  sqcRYGate(q, -2.505812481684103, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0535517769258673, 2);
  sqcRYGate(q, 1.864850399416805, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7801433076121747, 4);
  sqcRYGate(q, 2.97337047306408, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.05136323537142661, 4);
  sqcRYGate(q, -3.1367952962514467, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.03124887501050803, 6);
  sqcRYGate(q, 2.551893365218606, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.26150444325681566, 6);
  sqcRYGate(q, 0.492889957313377, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4028067869587041, 1);
  sqcRYGate(q, 2.8752284573630775, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.011064441671455798, 1);
  sqcRYGate(q, -2.9775248239241328, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4300159964433323, 3);
  sqcRYGate(q, -3.04407419341293, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0814007866567188, 3);
  sqcRYGate(q, 0.5498322706228856, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.133027079226328, 5);
  sqcRYGate(q, 1.8305996137355776, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1336483243578304, 5);
  sqcRYGate(q, -3.075793159789102, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2876086002022742, 0);
  sqcRYGate(q, 3.137307593850565, 1);
  sqcRYGate(q, 0.9257429000987619, 2);
  sqcRYGate(q, 3.063517743215826, 3);
  sqcRYGate(q, 1.8601174385712533, 4);
  sqcRYGate(q, 2.789329404894178, 5);
  sqcRYGate(q, -1.0723620571878858, 6);
  sqcRYGate(q, -1.3298794609835713, 7);

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
