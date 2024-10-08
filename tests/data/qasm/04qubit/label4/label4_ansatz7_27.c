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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 1.3586693097104356, 0);
  sqcRYGate(q, 0.09194490408752998, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3524400484017334, 0);
  sqcRYGate(q, -2.777111015889924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7665616500980671, 0);
  sqcRYGate(q, 1.384416803449918, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.06997399127936, 0);
  sqcRYGate(q, 2.3546871452866522, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5956818587201456, 0);
  sqcRYGate(q, 2.652221719822055, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.31626791946670796, 0);
  sqcRYGate(q, -1.1985691991503427, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.1252794782237311, 1);
  sqcRYGate(q, 2.846071618819424, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0257003300834313, 1);
  sqcRYGate(q, 2.7753947585738925, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0851712575158312, 1);
  sqcRYGate(q, 0.6618475902476408, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5247511163503029, 1);
  sqcRYGate(q, -0.83991959911235, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1491926943100221, 2);
  sqcRYGate(q, -0.8700942066608579, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.803122556858552, 2);
  sqcRYGate(q, -0.7295887548432871, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.269786912219998, 0);
  sqcRYGate(q, 2.0589604174329375, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7565117367426377, 0);
  sqcRYGate(q, 0.4545136707194466, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4690950147790476, 0);
  sqcRYGate(q, 0.024679836530754784, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.781211938415377, 0);
  sqcRYGate(q, -2.897424874937441, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9996374924713551, 0);
  sqcRYGate(q, -2.5683573783466573, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.946838125712268, 0);
  sqcRYGate(q, 2.504219870491462, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4673064930944626, 1);
  sqcRYGate(q, -1.8837746921525405, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.665442903069473, 1);
  sqcRYGate(q, -2.1192057544182568, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5025629977576007, 1);
  sqcRYGate(q, -0.028456011325618417, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9001666904567516, 1);
  sqcRYGate(q, 0.2985275344123148, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0760018424151014, 2);
  sqcRYGate(q, 0.3590672621806799, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5987283013706937, 2);
  sqcRYGate(q, 0.5712342976761606, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.673670826673722, 0);
  sqcRYGate(q, -0.37635603113011135, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0251824939142486, 0);
  sqcRYGate(q, 0.15490742629953314, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1120754532887753, 0);
  sqcRYGate(q, 0.3361844748344399, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.024309227289271, 0);
  sqcRYGate(q, 1.1801668566673404, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.10825191488296723, 0);
  sqcRYGate(q, -2.926021866529145, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.7643952496272983, 0);
  sqcRYGate(q, -0.3825407622025177, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6232579742499018, 1);
  sqcRYGate(q, -2.8227492280801205, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.429858778846839, 1);
  sqcRYGate(q, -3.0589620441056247, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8051179999023965, 1);
  sqcRYGate(q, 0.36944684686999973, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8679343342457453, 1);
  sqcRYGate(q, -1.421772269020374, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.068486147204295, 2);
  sqcRYGate(q, 0.018852173771655982, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6880020990155736, 2);
  sqcRYGate(q, 0.5240743277030766, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.454136882657104, 0);
  sqcRYGate(q, 1.9253020351451633, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.16829857055353692, 0);
  sqcRYGate(q, 2.30339439755158, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.15744434005136831, 0);
  sqcRYGate(q, -0.7900288947640273, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0366990871914017, 0);
  sqcRYGate(q, 0.6992579597647611, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.036544422553491, 0);
  sqcRYGate(q, 0.7594164034182702, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5360806076720293, 0);
  sqcRYGate(q, 2.0643234457312563, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.697129533385058, 1);
  sqcRYGate(q, 1.0421645610296435, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.408805570925439, 1);
  sqcRYGate(q, 2.6875287598977673, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8466707843052235, 1);
  sqcRYGate(q, 1.9546352714004205, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.139383535632013, 1);
  sqcRYGate(q, -2.216005825716791, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.322447230836821, 2);
  sqcRYGate(q, 0.9027253740413583, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.799790610222415, 2);
  sqcRYGate(q, 0.34889059919775156, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8539554351370651, 0);
  sqcRYGate(q, -0.9620033073226705, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5122228242163542, 0);
  sqcRYGate(q, 1.1667032747616632, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7875159518586212, 0);
  sqcRYGate(q, -1.852314444577223, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.04917638610609387, 0);
  sqcRYGate(q, 1.1478797510534033, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.378455673492902, 0);
  sqcRYGate(q, 2.506092982969662, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.695364336529315, 0);
  sqcRYGate(q, -1.8801607126415432, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.292052184018571, 1);
  sqcRYGate(q, -0.06545177108641059, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2194054938618493, 1);
  sqcRYGate(q, -1.148997019019646, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9137421593571509, 1);
  sqcRYGate(q, 0.2514011432848635, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3234291228574255, 1);
  sqcRYGate(q, -1.4762624692632258, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.494816821076438, 2);
  sqcRYGate(q, 0.8035498543696074, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0689410300840825, 2);
  sqcRYGate(q, -2.183084707096403, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8741185975862162, 0);
  sqcRYGate(q, 1.707189485780582, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7844009086880188, 0);
  sqcRYGate(q, -1.7265984072913048, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1721727542499143, 0);
  sqcRYGate(q, -2.459776981208722, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1332390670777404, 0);
  sqcRYGate(q, -1.9459066944764898, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.14295793402046517, 0);
  sqcRYGate(q, -1.57478175968779, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.263494402414377, 0);
  sqcRYGate(q, 2.4801600670480997, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5252573098430355, 1);
  sqcRYGate(q, 1.3020637213641209, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5548342636576513, 1);
  sqcRYGate(q, -1.4981544890958167, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.027256570249952476, 1);
  sqcRYGate(q, -2.366376033300785, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.997200087875103, 1);
  sqcRYGate(q, -0.19371259912059813, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.12078006595121504, 2);
  sqcRYGate(q, -2.551130455433412, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.199569617303592, 2);
  sqcRYGate(q, 1.6840310384107882, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9827507176405711, 0);
  sqcRYGate(q, 1.4251166999224407, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3134359581342956, 0);
  sqcRYGate(q, -2.254628272617466, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9925156577990328, 0);
  sqcRYGate(q, 2.6498287856496265, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4571740402405002, 0);
  sqcRYGate(q, -2.2705836468089378, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3827928072109374, 0);
  sqcRYGate(q, 0.7620096582388108, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.507377094537083, 0);
  sqcRYGate(q, 3.1000166423831392, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.053594075640602305, 1);
  sqcRYGate(q, -0.2720694033749724, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.01128022484810387, 1);
  sqcRYGate(q, 1.0672859962695354, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2061453675852423, 1);
  sqcRYGate(q, 0.3477419833723765, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.25168835612652546, 1);
  sqcRYGate(q, -1.216673564806026, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.874962638426351, 2);
  sqcRYGate(q, 1.659198074370406, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5163933527232893, 2);
  sqcRYGate(q, -1.051167400071668, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.914974744750844, 0);
  sqcRYGate(q, -2.730920830178034, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0719454128877044, 0);
  sqcRYGate(q, 1.0558515835932534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.457056830267403, 0);
  sqcRYGate(q, -2.476450726505289, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2552472177448113, 0);
  sqcRYGate(q, -0.17107253026786218, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4029857346229262, 0);
  sqcRYGate(q, 2.013187568842986, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4908606295778073, 0);
  sqcRYGate(q, -2.3781648854490776, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1429108786662157, 1);
  sqcRYGate(q, 2.744230086092666, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.452397349889951, 1);
  sqcRYGate(q, 1.7758170010312526, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.648515201307722, 1);
  sqcRYGate(q, -0.2729124592051011, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6400450828386, 1);
  sqcRYGate(q, 1.671704689424259, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5661482181837476, 2);
  sqcRYGate(q, -1.477379649993817, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.904412153245028, 2);
  sqcRYGate(q, 0.5072764866387391, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6277930639559341, 0);
  sqcRYGate(q, 1.5516833742958376, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7327988116966284, 0);
  sqcRYGate(q, -1.09149762509044, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2861982963073595, 0);
  sqcRYGate(q, 2.017849551624253, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8680084674677578, 0);
  sqcRYGate(q, 2.3835734306761416, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9675217147256348, 0);
  sqcRYGate(q, -2.6769219705436504, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8174668216488117, 0);
  sqcRYGate(q, 0.2805651285044908, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9072546386447172, 1);
  sqcRYGate(q, 0.9017893852982364, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9560308251171641, 1);
  sqcRYGate(q, -2.8077141979719444, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.725358738485281, 1);
  sqcRYGate(q, -2.580264291371733, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4718281372360478, 1);
  sqcRYGate(q, -3.0375579516441835, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4617023621880048, 2);
  sqcRYGate(q, -1.6549458484802182, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9274100784787973, 2);
  sqcRYGate(q, 3.0762252522373403, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9240616511656388, 0);
  sqcRYGate(q, 1.8849446635686289, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.20483029906213, 0);
  sqcRYGate(q, 1.6444858468593757, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.758784360549944, 0);
  sqcRYGate(q, 0.37377693294789616, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6515334071382837, 0);
  sqcRYGate(q, -2.05587777574845, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7145197588302074, 0);
  sqcRYGate(q, 1.7424378672819572, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9172599594028119, 0);
  sqcRYGate(q, 1.9695701201347493, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0159686819712057, 1);
  sqcRYGate(q, -0.3723133006960025, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7124840942696379, 1);
  sqcRYGate(q, -2.7453016744078966, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4532340637526424, 1);
  sqcRYGate(q, 2.6627199582333976, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2370741276499502, 1);
  sqcRYGate(q, -1.4709716196816283, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8051312990125528, 2);
  sqcRYGate(q, -0.5498138979198339, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.785754957774703, 2);
  sqcRYGate(q, -2.2276422876774236, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3056910681766771, 0);
  sqcRYGate(q, 2.8571341883139367, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6084550183077444, 0);
  sqcRYGate(q, 3.0866094261347614, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8154515744670814, 0);
  sqcRYGate(q, -2.7856935093957267, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.499330497744131, 0);
  sqcRYGate(q, 2.9308752515456558, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.618378417059166, 0);
  sqcRYGate(q, 0.6702972249201977, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1689878588497202, 0);
  sqcRYGate(q, 0.5843516223363476, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.48100751406102654, 1);
  sqcRYGate(q, -2.490183460370364, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.995944402444996, 1);
  sqcRYGate(q, 3.0956501192671126, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.979525943072986, 1);
  sqcRYGate(q, -2.7222046791577124, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.569619566129415, 1);
  sqcRYGate(q, 2.9808112052524547, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.524841185310463, 2);
  sqcRYGate(q, -1.8653578315284185, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1384942571822494, 2);
  sqcRYGate(q, -1.7259839087686601, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7269105852091613, 0);
  sqcRYGate(q, -0.48632075614947645, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4050405829666102, 0);
  sqcRYGate(q, 3.067915625468034, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.20242907343021263, 0);
  sqcRYGate(q, 2.17787585257968, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9700821536055908, 0);
  sqcRYGate(q, 2.182643532920286, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4479599409003239, 0);
  sqcRYGate(q, -2.2018487560324838, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.98230768417576, 0);
  sqcRYGate(q, 2.0891861775858396, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.699687051602112, 1);
  sqcRYGate(q, -0.7070589089370554, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.721051252392554, 1);
  sqcRYGate(q, 0.854358051075045, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3152991889470342, 1);
  sqcRYGate(q, -0.5655708006491709, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4532663042463745, 1);
  sqcRYGate(q, -1.6010946118706375, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9596854065590028, 2);
  sqcRYGate(q, 2.0612946626948614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3106074385032342, 2);
  sqcRYGate(q, -0.692949660539162, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5190797894113546, 0);
  sqcRYGate(q, -0.740167711379975, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.536049060806161, 0);
  sqcRYGate(q, -0.6863233582752182, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5994482947824036, 0);
  sqcRYGate(q, 0.5622343973005948, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2523147228066831, 0);
  sqcRYGate(q, 0.05570461317568576, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.924170107043777, 0);
  sqcRYGate(q, 0.930448341113066, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4017849402560256, 0);
  sqcRYGate(q, 0.9526389696378696, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0423552142613375, 1);
  sqcRYGate(q, -2.684582951523575, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.39205249980287477, 1);
  sqcRYGate(q, -0.7454479104804665, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.912144584871735, 1);
  sqcRYGate(q, 1.310217082114366, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4924776532380566, 1);
  sqcRYGate(q, -2.6071324935866604, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1427060242554639, 2);
  sqcRYGate(q, 0.36969597147673844, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.224091290556, 2);
  sqcRYGate(q, -2.3831971417458115, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.234522511283991, 0);
  sqcRYGate(q, -2.617250452874891, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.35706674814825967, 0);
  sqcRYGate(q, -2.9649016608683003, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9921936605814965, 0);
  sqcRYGate(q, 1.548025178168081, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.127906353387607, 0);
  sqcRYGate(q, -1.4379853964906577, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7536327233284198, 0);
  sqcRYGate(q, 0.8424524776379148, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.32249369717769666, 0);
  sqcRYGate(q, 0.8583189782496821, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.833306479516351, 1);
  sqcRYGate(q, -2.679312682139772, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4858736135133661, 1);
  sqcRYGate(q, 1.2982910000468655, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8101283015690326, 1);
  sqcRYGate(q, 1.2647693760939838, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2700002711961496, 1);
  sqcRYGate(q, 3.0812441696302786, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1506384840956665, 2);
  sqcRYGate(q, 0.04800844784091751, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4111410303464664, 2);
  sqcRYGate(q, 1.6448298581950942, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8412003643237204, 0);
  sqcRYGate(q, -2.6435087995216913, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.964799640775924, 0);
  sqcRYGate(q, 0.3085472057771067, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.606945549714554, 0);
  sqcRYGate(q, 1.0870525053598736, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5232262022890872, 0);
  sqcRYGate(q, 2.0707166366305287, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.246927921271017, 0);
  sqcRYGate(q, -1.6385246728975282, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.3538938114275583, 0);
  sqcRYGate(q, 1.847053523576659, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9188244931020177, 1);
  sqcRYGate(q, 0.6010273010190146, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0495659917816056, 1);
  sqcRYGate(q, -2.107713056120663, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.120518144281445, 1);
  sqcRYGate(q, 1.606136730188802, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7498624909212586, 1);
  sqcRYGate(q, -1.1855816327817692, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0897695254532331, 2);
  sqcRYGate(q, -0.898364122400735, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2745665931860253, 2);
  sqcRYGate(q, 1.871360569748994, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4873688207868625, 0);
  sqcRYGate(q, -1.8371223163026913, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7434817007042138, 0);
  sqcRYGate(q, 1.6715656227234958, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0019363310613683, 0);
  sqcRYGate(q, -0.19745445797945838, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3434236604645064, 0);
  sqcRYGate(q, 0.009872023741539948, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8030670574472616, 0);
  sqcRYGate(q, 1.4559416243183483, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6839707071707122, 0);
  sqcRYGate(q, -2.255775679940884, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7010797290237925, 1);
  sqcRYGate(q, -1.3118540433413122, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6033628788903647, 1);
  sqcRYGate(q, -2.507724990985073, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.38956935212481947, 1);
  sqcRYGate(q, 2.5376305188995674, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6531512275138587, 1);
  sqcRYGate(q, 3.0636087671527465, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4695165364428318, 2);
  sqcRYGate(q, 0.07409347151888883, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4097915017682925, 2);
  sqcRYGate(q, -2.0566113845110117, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.016194595231088536, 0);
  sqcRYGate(q, 2.230678606330719, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.334178939528481, 0);
  sqcRYGate(q, -2.919579475692168, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.21816670689553597, 0);
  sqcRYGate(q, 1.472670637737469, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3605816138035034, 0);
  sqcRYGate(q, -2.8389431143974027, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7547355201228565, 0);
  sqcRYGate(q, -0.4551989724607641, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.07402253296790424, 0);
  sqcRYGate(q, 2.3481708443483664, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9367529873775053, 1);
  sqcRYGate(q, -0.3539601605172731, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5287909454085553, 1);
  sqcRYGate(q, -0.23816780325432418, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.06618096453847057, 1);
  sqcRYGate(q, 1.6345781108228605, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.27432592297222325, 1);
  sqcRYGate(q, -2.6253752877209586, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1814596370323436, 2);
  sqcRYGate(q, -1.6088040007601487, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.229299588429405, 2);
  sqcRYGate(q, 2.5853753191509163, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5479215888257283, 0);
  sqcRYGate(q, 0.24854947135885316, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8388575362824833, 0);
  sqcRYGate(q, -1.1181897475366391, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1915086116431017, 0);
  sqcRYGate(q, 2.2834922312774837, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9522520748981185, 0);
  sqcRYGate(q, -1.0746352779469344, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7519451478123829, 0);
  sqcRYGate(q, -2.893597606276349, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5519478996378546, 0);
  sqcRYGate(q, -1.0900572976133407, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2111818058509307, 1);
  sqcRYGate(q, -2.1396774793682702, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.355123495394816, 1);
  sqcRYGate(q, 1.6618284931507612, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5604410642275184, 1);
  sqcRYGate(q, -2.1424484348798343, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.22245305638193075, 1);
  sqcRYGate(q, -0.9235438924154443, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.867999107519873, 2);
  sqcRYGate(q, -1.9476283761618474, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.451451058949661, 2);
  sqcRYGate(q, 0.2915827681978813, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.31783468476914, 0);
  sqcRYGate(q, -1.6638494048634083, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9340510783911187, 0);
  sqcRYGate(q, -0.8893849432367591, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0710711012593204, 0);
  sqcRYGate(q, -2.7948626012050104, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5020391354863634, 0);
  sqcRYGate(q, 0.8425531751641522, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.927952317137397, 0);
  sqcRYGate(q, -0.5883596288594369, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1851765026207426, 0);
  sqcRYGate(q, 2.961108029062173, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.176250524208289, 1);
  sqcRYGate(q, -0.12186193101440539, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.41159921546856726, 1);
  sqcRYGate(q, 1.6626701649422664, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.746444792836808, 1);
  sqcRYGate(q, -3.0818733593521377, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.08610668916079778, 1);
  sqcRYGate(q, 2.0977551785782267, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9122048620746366, 2);
  sqcRYGate(q, 0.6139878850421567, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8204989556581967, 2);
  sqcRYGate(q, 2.86123975894729, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8720568704648985, 0);
  sqcRYGate(q, 3.003340435264869, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3060321013548608, 0);
  sqcRYGate(q, -0.5230435954144951, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.800254944594894, 0);
  sqcRYGate(q, 3.090176823233905, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9352254691000725, 0);
  sqcRYGate(q, 1.662163621858305, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.16378595911295626, 0);
  sqcRYGate(q, -2.2646574676110705, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6653546852779413, 0);
  sqcRYGate(q, 2.548108390388371, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4540328444616807, 1);
  sqcRYGate(q, 2.9063102919877277, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.052322941445361086, 1);
  sqcRYGate(q, 2.3141885218808667, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6629490483614872, 1);
  sqcRYGate(q, 2.4122362129119335, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2219395944803377, 1);
  sqcRYGate(q, -1.4996051127592909, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8273026180999095, 2);
  sqcRYGate(q, -2.1645794602809802, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6363263609651604, 2);
  sqcRYGate(q, -1.070011800550711, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.729109702089743, 0);
  sqcRYGate(q, 0.08510821666796284, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7195459160024987, 0);
  sqcRYGate(q, -0.18799176553649116, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.817844464665089, 0);
  sqcRYGate(q, -0.47478401711734275, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.375127513404375, 0);
  sqcRYGate(q, -2.8855666285545283, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9871085828927195, 0);
  sqcRYGate(q, -1.2435241219858906, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8903510410499016, 0);
  sqcRYGate(q, 0.6037669189269106, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1109424024993553, 1);
  sqcRYGate(q, -2.972870834883186, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0814533765939256, 1);
  sqcRYGate(q, -2.0338004947467754, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.631314830878919, 1);
  sqcRYGate(q, -0.2758114780310952, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.116804123937181, 1);
  sqcRYGate(q, -0.19278232863152045, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2786947503520326, 2);
  sqcRYGate(q, -2.6193507795017443, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.577172181542319, 2);
  sqcRYGate(q, -2.1483419030865747, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.970043914184772, 0);
  sqcRYGate(q, 1.043977797653479, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5090718219479891, 0);
  sqcRYGate(q, -2.8513489343589162, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.256271968669558, 0);
  sqcRYGate(q, 1.7479054048690816, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0374057147375122, 0);
  sqcRYGate(q, -3.11106724971232, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.20489559394363, 0);
  sqcRYGate(q, 1.757248727124159, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7507640263236545, 0);
  sqcRYGate(q, 2.8827938822872428, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6598589673813198, 1);
  sqcRYGate(q, -2.5915401500750606, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9661162354138861, 1);
  sqcRYGate(q, 0.7259502418246767, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.690989479083964, 1);
  sqcRYGate(q, -0.18679717824446931, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.911373425662495, 1);
  sqcRYGate(q, 2.6765123312844143, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8502316953468974, 2);
  sqcRYGate(q, -1.2043995294653218, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.338157134873315, 2);
  sqcRYGate(q, -0.11202411261779409, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.347581390618341, 0);
  sqcRYGate(q, 1.5483598241012764, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.34034970927474456, 0);
  sqcRYGate(q, -1.7607352908911071, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6474667310464337, 0);
  sqcRYGate(q, -1.053314728279091, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2407635062522466, 0);
  sqcRYGate(q, 0.013780032244319784, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5669010369636527, 0);
  sqcRYGate(q, -1.7195015765013302, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.0429168839513947, 0);
  sqcRYGate(q, -1.3651469403052792, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.19567908574079948, 1);
  sqcRYGate(q, -1.8407252412643371, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.913260556979142, 1);
  sqcRYGate(q, -0.42111501035686505, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4242246116186457, 1);
  sqcRYGate(q, -0.508362970209248, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0882396545417623, 1);
  sqcRYGate(q, 1.9859759243518742, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2787196639552, 2);
  sqcRYGate(q, -1.8497883665983013, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.462103864824118, 2);
  sqcRYGate(q, -2.330366077202283, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6410511184774688, 0);
  sqcRYGate(q, -1.4008141282003201, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.004583245236736769, 0);
  sqcRYGate(q, -0.5380301268211475, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.639006716049099, 0);
  sqcRYGate(q, -2.8165043013195077, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4294036623861061, 0);
  sqcRYGate(q, -0.8291932930512722, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2964271464008883, 0);
  sqcRYGate(q, 0.8163241303662723, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9877279255403695, 0);
  sqcRYGate(q, -2.6114080810220197, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.066831701859548, 1);
  sqcRYGate(q, -2.9189505749423166, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6049600159203505, 1);
  sqcRYGate(q, 2.789480258346472, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.42155010669273546, 1);
  sqcRYGate(q, -1.4999909937532339, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.092992047728131, 1);
  sqcRYGate(q, 1.683358030751644, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0229498732152362, 2);
  sqcRYGate(q, -1.2146813533461185, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4411108545186003, 2);
  sqcRYGate(q, -0.6487905980382606, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4711900618256495, 0);
  sqcRYGate(q, -2.8473668894942654, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3788710384544, 0);
  sqcRYGate(q, -0.1937312433790847, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4677339363693, 0);
  sqcRYGate(q, -1.452325728079924, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8868833085587733, 0);
  sqcRYGate(q, -1.0455584454062423, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7714501220252439, 0);
  sqcRYGate(q, -1.2240537186053981, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0984551460839835, 0);
  sqcRYGate(q, -1.4510648726550368, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.399731288516094, 1);
  sqcRYGate(q, 2.220590515538764, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9262998697997396, 1);
  sqcRYGate(q, -2.006555051439987, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.878695073981961, 1);
  sqcRYGate(q, 1.6307140488453689, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9776300999468592, 1);
  sqcRYGate(q, 0.41387504774298856, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7275580692432262, 2);
  sqcRYGate(q, -0.3171295093957915, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6318477875282502, 2);
  sqcRYGate(q, 0.9173912275392686, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2938391346842892, 0);
  sqcRYGate(q, 0.9323169089436525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.115661389751125, 0);
  sqcRYGate(q, 2.6781111512253193, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.261085830649244, 0);
  sqcRYGate(q, 0.15498654065643702, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7969387493894925, 0);
  sqcRYGate(q, 3.1258474358149435, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7274790491684059, 0);
  sqcRYGate(q, 0.18809786225558386, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.933196661854173, 0);
  sqcRYGate(q, -0.015480824797919481, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3870874591326237, 1);
  sqcRYGate(q, -2.1525959991110133, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8706602374480943, 1);
  sqcRYGate(q, 1.1688947300599732, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9887186105172256, 1);
  sqcRYGate(q, -1.3088701644433938, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9801653098476333, 1);
  sqcRYGate(q, -0.8344970406280169, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8994324869188315, 2);
  sqcRYGate(q, 0.14512714336652532, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4854741514781464, 2);
  sqcRYGate(q, 1.2906499067179726, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6655134912392016, 0);
  sqcRYGate(q, -0.7420485370790217, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6564715425677958, 0);
  sqcRYGate(q, -2.649615781842745, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4795003081318878, 0);
  sqcRYGate(q, -1.6406151242108098, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6747610747920065, 0);
  sqcRYGate(q, -2.5577218579010923, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3090896047942433, 0);
  sqcRYGate(q, -1.6567018794789214, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8871136799777535, 0);
  sqcRYGate(q, 1.4058558982030114, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.1167298189770545, 1);
  sqcRYGate(q, 0.9063060670727446, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.930782887383762, 1);
  sqcRYGate(q, 2.7586041143284787, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9542771588112284, 1);
  sqcRYGate(q, -0.9156122216818845, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6790479107633436, 1);
  sqcRYGate(q, 2.5251424800694307, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6823482625138935, 2);
  sqcRYGate(q, -1.4289959957816756, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9176559946312792, 2);
  sqcRYGate(q, -2.942446729535733, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.590850960853823, 0);
  sqcRYGate(q, 0.9383626254832711, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5412678103767519, 0);
  sqcRYGate(q, 2.55606460830497, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6724502799519714, 0);
  sqcRYGate(q, -1.516840350154282, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8807143868515146, 0);
  sqcRYGate(q, 0.42232209103288465, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.038097971039694, 0);
  sqcRYGate(q, -0.31678863058696294, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.36519246595549154, 0);
  sqcRYGate(q, 1.6400280859605816, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.256082283934602, 1);
  sqcRYGate(q, -0.541359722179206, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2066690498531956, 1);
  sqcRYGate(q, 2.3861222723752427, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.06513664983153078, 1);
  sqcRYGate(q, -1.503787493301583, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8949748380808513, 1);
  sqcRYGate(q, 0.8480819681893514, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2083282015389964, 2);
  sqcRYGate(q, 0.32579595681961837, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7822568848856666, 2);
  sqcRYGate(q, 0.3587343922749485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9937884956691714, 0);
  sqcRYGate(q, -1.1051619987314254, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.195957916966511, 0);
  sqcRYGate(q, 0.9377719611288677, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7470392874942842, 0);
  sqcRYGate(q, -2.73426183630841, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6454890208602917, 0);
  sqcRYGate(q, -1.2731688827841152, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5070758420296153, 0);
  sqcRYGate(q, -2.2609941951804133, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.901048266107808, 0);
  sqcRYGate(q, -3.1209721659813603, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5319811895603284, 1);
  sqcRYGate(q, -2.666834266316476, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.589258076853965, 1);
  sqcRYGate(q, 2.0143361288661863, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9665521059325846, 1);
  sqcRYGate(q, 1.3939041652140107, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5784108527618343, 1);
  sqcRYGate(q, -2.9688650116641604, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3730219999512965, 2);
  sqcRYGate(q, 2.880208215690995, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0922189924077657, 2);
  sqcRYGate(q, -2.726775277144681, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7420806356339025, 0);
  sqcRYGate(q, 0.9289832847526469, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.356124061693945, 0);
  sqcRYGate(q, -0.5596557508866242, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6882129008883755, 0);
  sqcRYGate(q, 1.5998825727125232, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6875007412745187, 0);
  sqcRYGate(q, -1.8725258040272221, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.45411318645929377, 0);
  sqcRYGate(q, 2.0127956384868897, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2586307790915612, 0);
  sqcRYGate(q, -1.3165598761810038, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.621956883788563, 1);
  sqcRYGate(q, -1.7664211521992472, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.48533135596328325, 1);
  sqcRYGate(q, -0.4372608544026712, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.25251522592181846, 1);
  sqcRYGate(q, -1.3517995097968276, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.141390592955847, 1);
  sqcRYGate(q, 0.44047826593076583, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6375459737975473, 2);
  sqcRYGate(q, 2.8206589655859124, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4952967885833566, 2);
  sqcRYGate(q, -2.19055970288563, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.769938268451012, 0);
  sqcRYGate(q, -0.2582531295701971, 1);
  sqcRYGate(q, 0.5579694254495724, 2);
  sqcRYGate(q, -0.9869388716049459, 3);

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
