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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -1.4893612353910497, 0);
  sqcRZGate(q, -0.8449297795012489, 0);
  sqcRYGate(q, -2.6187937506734014, 1);
  sqcRZGate(q, -2.4175285382530456, 1);
  sqcRYGate(q, -1.6072534745014555, 2);
  sqcRZGate(q, -2.1679788331540277, 2);
  sqcRYGate(q, 0.2661534501279288, 3);
  sqcRZGate(q, -2.5397875012329663, 3);
  sqcRYGate(q, 1.7889164338060948, 4);
  sqcRZGate(q, -1.9802556396582818, 4);
  sqcRYGate(q, 1.9684155751096812, 5);
  sqcRZGate(q, -1.568892693761673, 5);
  sqcRYGate(q, 1.398474393919054, 6);
  sqcRZGate(q, 2.62054709854047, 6);
  sqcRYGate(q, -1.5502313615104295, 7);
  sqcRZGate(q, -0.18748004499603255, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.3286233803804812, 0);
  sqcRZGate(q, -0.37553701709755277, 0);
  sqcRYGate(q, 0.8483882516105508, 1);
  sqcRZGate(q, 3.113640956262113, 1);
  sqcRYGate(q, 0.7871426586340879, 2);
  sqcRZGate(q, 1.7206847184081342, 2);
  sqcRYGate(q, 0.6070478528312142, 3);
  sqcRZGate(q, 1.9707788222412412, 3);
  sqcRYGate(q, -1.9394047782018788, 4);
  sqcRZGate(q, -2.8215157941397675, 4);
  sqcRYGate(q, 0.2731221422807639, 5);
  sqcRZGate(q, 1.8872967097409674, 5);
  sqcRYGate(q, 1.7051859038866697, 6);
  sqcRZGate(q, 0.2879532197820025, 6);
  sqcRYGate(q, -0.3449443939246778, 7);
  sqcRZGate(q, 2.8696547734587843, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.5792150367909272, 0);
  sqcRZGate(q, 2.720282846856724, 0);
  sqcRYGate(q, 1.8767434146299953, 1);
  sqcRZGate(q, -2.4698228928152695, 1);
  sqcRYGate(q, 0.2678508699949345, 2);
  sqcRZGate(q, 2.4161791757874007, 2);
  sqcRYGate(q, 2.5597969742047026, 3);
  sqcRZGate(q, -1.6016033098067834, 3);
  sqcRYGate(q, 2.565284548109111, 4);
  sqcRZGate(q, 1.3661846609760462, 4);
  sqcRYGate(q, -0.6956133732251994, 5);
  sqcRZGate(q, -1.1449709427516712, 5);
  sqcRYGate(q, -2.7222366864226717, 6);
  sqcRZGate(q, 2.443023662352244, 6);
  sqcRYGate(q, 2.4090268605292224, 7);
  sqcRZGate(q, 1.7545010179051577, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.2622373783769466, 0);
  sqcRZGate(q, 0.6082617961338377, 0);
  sqcRYGate(q, -2.4511130641628562, 1);
  sqcRZGate(q, 2.3571904723066774, 1);
  sqcRYGate(q, 2.9418066995118606, 2);
  sqcRZGate(q, 3.0641605244430585, 2);
  sqcRYGate(q, -1.849466555084022, 3);
  sqcRZGate(q, -1.7061040230457192, 3);
  sqcRYGate(q, 2.262747105906331, 4);
  sqcRZGate(q, 2.371932183658026, 4);
  sqcRYGate(q, 1.072145155750622, 5);
  sqcRZGate(q, -2.527034004049396, 5);
  sqcRYGate(q, -1.3289028744491471, 6);
  sqcRZGate(q, -0.4616318014370364, 6);
  sqcRYGate(q, 0.20398630980058655, 7);
  sqcRZGate(q, 0.8571424435451497, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.8351475532571445, 0);
  sqcRZGate(q, -1.6118602556016004, 0);
  sqcRYGate(q, 1.5345048182425796, 1);
  sqcRZGate(q, 1.4141807235477124, 1);
  sqcRYGate(q, 2.400182045307087, 2);
  sqcRZGate(q, -1.1841425305874207, 2);
  sqcRYGate(q, 2.1338226696678735, 3);
  sqcRZGate(q, 3.090490241476115, 3);
  sqcRYGate(q, 1.5612074790525818, 4);
  sqcRZGate(q, 0.014118754765020565, 4);
  sqcRYGate(q, 2.4989952692733084, 5);
  sqcRZGate(q, -2.7111413364595616, 5);
  sqcRYGate(q, -2.8385631432558136, 6);
  sqcRZGate(q, 0.15656557686231312, 6);
  sqcRYGate(q, 2.3732229793999973, 7);
  sqcRZGate(q, 2.653139163007916, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.1612902804908252, 0);
  sqcRZGate(q, 2.714726055647048, 0);
  sqcRYGate(q, -2.3534244619482707, 1);
  sqcRZGate(q, -1.0488876000713985, 1);
  sqcRYGate(q, -2.4905617448853494, 2);
  sqcRZGate(q, -2.4980825251624275, 2);
  sqcRYGate(q, 2.679318721463116, 3);
  sqcRZGate(q, -0.22171127738705732, 3);
  sqcRYGate(q, -0.8755722959878471, 4);
  sqcRZGate(q, 0.6626458430018277, 4);
  sqcRYGate(q, 2.61333065505865, 5);
  sqcRZGate(q, 1.3998038406002493, 5);
  sqcRYGate(q, -0.897626187035006, 6);
  sqcRZGate(q, 2.0881580352947995, 6);
  sqcRYGate(q, -2.182191407290831, 7);
  sqcRZGate(q, -2.4232487352051915, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.418238991286511, 0);
  sqcRZGate(q, -0.4404300184812931, 0);
  sqcRYGate(q, -2.652705843571857, 1);
  sqcRZGate(q, 2.9360416678580963, 1);
  sqcRYGate(q, -2.050911367601799, 2);
  sqcRZGate(q, -1.8220179076534917, 2);
  sqcRYGate(q, -2.32186092666877, 3);
  sqcRZGate(q, -2.8522327028813472, 3);
  sqcRYGate(q, 0.8045513419635423, 4);
  sqcRZGate(q, 0.2254389045446646, 4);
  sqcRYGate(q, 1.432451342528406, 5);
  sqcRZGate(q, 2.3609477942599773, 5);
  sqcRYGate(q, -1.1630601028042524, 6);
  sqcRZGate(q, 0.7450901202169129, 6);
  sqcRYGate(q, 1.4364829255587228, 7);
  sqcRZGate(q, -1.9858327040366615, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.724673983820783, 0);
  sqcRZGate(q, -1.8639469103499782, 0);
  sqcRYGate(q, 1.0833399952424125, 1);
  sqcRZGate(q, 1.9825876418127821, 1);
  sqcRYGate(q, 1.8536932787417049, 2);
  sqcRZGate(q, 2.074366104912296, 2);
  sqcRYGate(q, 2.3332001355837058, 3);
  sqcRZGate(q, -0.049947414696211105, 3);
  sqcRYGate(q, -1.340696994801597, 4);
  sqcRZGate(q, 0.02692190383380932, 4);
  sqcRYGate(q, 1.893443427377859, 5);
  sqcRZGate(q, 1.4807759152235356, 5);
  sqcRYGate(q, -0.37026211839891066, 6);
  sqcRZGate(q, -1.220549061327052, 6);
  sqcRYGate(q, -0.26334951374757787, 7);
  sqcRZGate(q, -1.9010552898350275, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.6799992766798572, 0);
  sqcRZGate(q, 1.9638448264115516, 0);
  sqcRYGate(q, -1.2866311631090568, 1);
  sqcRZGate(q, -3.0608326321760893, 1);
  sqcRYGate(q, -0.946581506928152, 2);
  sqcRZGate(q, -1.9069780573066777, 2);
  sqcRYGate(q, 2.583896157705932, 3);
  sqcRZGate(q, -1.3637992955517955, 3);
  sqcRYGate(q, 2.8245644497002798, 4);
  sqcRZGate(q, 2.8286586320777403, 4);
  sqcRYGate(q, -0.20999731704636296, 5);
  sqcRZGate(q, -0.5698386309432563, 5);
  sqcRYGate(q, -2.01832578615464, 6);
  sqcRZGate(q, 1.789120639914045, 6);
  sqcRYGate(q, -2.1041184453206654, 7);
  sqcRZGate(q, -1.3998927797648308, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.5721504507304191, 0);
  sqcRZGate(q, 1.5548290847436657, 0);
  sqcRYGate(q, 2.9358940158400175, 1);
  sqcRZGate(q, -2.6252296398029014, 1);
  sqcRYGate(q, 1.6442603006509016, 2);
  sqcRZGate(q, -2.101347616000556, 2);
  sqcRYGate(q, -1.3115897049338203, 3);
  sqcRZGate(q, 0.9059906121839747, 3);
  sqcRYGate(q, 2.6055763339088216, 4);
  sqcRZGate(q, 0.9474051616660119, 4);
  sqcRYGate(q, 0.3541278474423839, 5);
  sqcRZGate(q, 0.2606830270497067, 5);
  sqcRYGate(q, -1.7312635257603057, 6);
  sqcRZGate(q, 2.3048002713785505, 6);
  sqcRYGate(q, -2.911961120315165, 7);
  sqcRZGate(q, -0.3614216621719663, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.9381247004465594, 0);
  sqcRZGate(q, -0.24562407040851966, 0);
  sqcRYGate(q, -2.2467749842432854, 1);
  sqcRZGate(q, -0.8310243819007144, 1);
  sqcRYGate(q, -1.1271309822321725, 2);
  sqcRZGate(q, 1.1236862393511038, 2);
  sqcRYGate(q, 2.538023242613022, 3);
  sqcRZGate(q, -0.010469915749970414, 3);
  sqcRYGate(q, 2.9828876837518354, 4);
  sqcRZGate(q, 2.669958206971227, 4);
  sqcRYGate(q, -0.4734035863553822, 5);
  sqcRZGate(q, 0.2813621702899658, 5);
  sqcRYGate(q, -0.465700168488398, 6);
  sqcRZGate(q, 0.9901589077092019, 6);
  sqcRYGate(q, 0.7978276845496696, 7);
  sqcRZGate(q, 2.002609960250952, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.7806075793734926, 0);
  sqcRZGate(q, -2.2934311796079427, 0);
  sqcRYGate(q, 1.0744861606661413, 1);
  sqcRZGate(q, -2.219378906331107, 1);
  sqcRYGate(q, 0.7201944338456951, 2);
  sqcRZGate(q, -0.4023496128707995, 2);
  sqcRYGate(q, -1.7229752588973575, 3);
  sqcRZGate(q, 1.482004467730954, 3);
  sqcRYGate(q, 1.3082658825036617, 4);
  sqcRZGate(q, 0.9033616765659449, 4);
  sqcRYGate(q, -1.7311401091585283, 5);
  sqcRZGate(q, 0.6972618640980748, 5);
  sqcRYGate(q, -0.9615144906005719, 6);
  sqcRZGate(q, 1.1954455396005788, 6);
  sqcRYGate(q, -2.5033777621818176, 7);
  sqcRZGate(q, 1.8236167813461606, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.181584444954068, 0);
  sqcRZGate(q, -1.1040058265304988, 0);
  sqcRYGate(q, 1.1805311333678716, 1);
  sqcRZGate(q, 1.7246106176638658, 1);
  sqcRYGate(q, 2.382390390868485, 2);
  sqcRZGate(q, 1.7803197230906902, 2);
  sqcRYGate(q, -1.2976047873360674, 3);
  sqcRZGate(q, -1.7643775987750523, 3);
  sqcRYGate(q, 0.20532210285415814, 4);
  sqcRZGate(q, 1.7983019094915411, 4);
  sqcRYGate(q, 2.3066821229112286, 5);
  sqcRZGate(q, -2.8942147161685075, 5);
  sqcRYGate(q, 1.5207329832746348, 6);
  sqcRZGate(q, -2.384145207869413, 6);
  sqcRYGate(q, 1.3051517597922535, 7);
  sqcRZGate(q, -1.1029799260334174, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.590319886893116, 0);
  sqcRZGate(q, -1.4779420502203167, 0);
  sqcRYGate(q, 0.49877302893615655, 1);
  sqcRZGate(q, 1.2593793412515613, 1);
  sqcRYGate(q, -1.0572120204514883, 2);
  sqcRZGate(q, -1.4453471133773659, 2);
  sqcRYGate(q, -0.42634760981940306, 3);
  sqcRZGate(q, -2.721069555536039, 3);
  sqcRYGate(q, -1.2242641185881666, 4);
  sqcRZGate(q, 1.82029696201742, 4);
  sqcRYGate(q, -1.3563901070801343, 5);
  sqcRZGate(q, -0.6154344122473852, 5);
  sqcRYGate(q, -0.7037006965375356, 6);
  sqcRZGate(q, -2.414602653171262, 6);
  sqcRYGate(q, 0.37540921095166, 7);
  sqcRZGate(q, -1.058543730924037, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.811270000851455, 0);
  sqcRZGate(q, -1.2998884428515352, 0);
  sqcRYGate(q, 0.39265223194656773, 1);
  sqcRZGate(q, 2.3899700684182394, 1);
  sqcRYGate(q, -1.894779107485596, 2);
  sqcRZGate(q, 0.587570996059398, 2);
  sqcRYGate(q, 1.5156863551884125, 3);
  sqcRZGate(q, 2.3321432635801878, 3);
  sqcRYGate(q, 1.991791669650537, 4);
  sqcRZGate(q, -0.4915069868276527, 4);
  sqcRYGate(q, -0.5560974418818839, 5);
  sqcRZGate(q, -0.7622325358021662, 5);
  sqcRYGate(q, 0.5336083997952938, 6);
  sqcRZGate(q, -1.6543867140857476, 6);
  sqcRYGate(q, -2.489405632383832, 7);
  sqcRZGate(q, 0.662268057575256, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.4206270902539053, 0);
  sqcRZGate(q, 1.8726403139280015, 0);
  sqcRYGate(q, 1.5508375293786267, 1);
  sqcRZGate(q, -3.0894969734356788, 1);
  sqcRYGate(q, 2.563467463164968, 2);
  sqcRZGate(q, 2.405217710286447, 2);
  sqcRYGate(q, 2.099259348803505, 3);
  sqcRZGate(q, 1.1855933442923359, 3);
  sqcRYGate(q, 2.168896552339958, 4);
  sqcRZGate(q, 1.41237495117145, 4);
  sqcRYGate(q, -2.327722636903314, 5);
  sqcRZGate(q, 2.2043251204494005, 5);
  sqcRYGate(q, -2.271372911668441, 6);
  sqcRZGate(q, -2.964790566728136, 6);
  sqcRYGate(q, -2.819114634840039, 7);
  sqcRZGate(q, -3.0478358785059845, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.540562269599153, 0);
  sqcRZGate(q, 2.8695058342173603, 0);
  sqcRYGate(q, 0.694451338874232, 1);
  sqcRZGate(q, -1.531509011018872, 1);
  sqcRYGate(q, -0.9251447932795278, 2);
  sqcRZGate(q, -1.2333291077600332, 2);
  sqcRYGate(q, -2.5024209458557634, 3);
  sqcRZGate(q, -0.4431190773805751, 3);
  sqcRYGate(q, 1.943554919774865, 4);
  sqcRZGate(q, -0.38837298055545416, 4);
  sqcRYGate(q, 1.4473240140770383, 5);
  sqcRZGate(q, -0.8600888070006013, 5);
  sqcRYGate(q, 0.4733228776114787, 6);
  sqcRZGate(q, 1.4336236769932553, 6);
  sqcRYGate(q, -1.4763738190660394, 7);
  sqcRZGate(q, -2.982074129226524, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.3509529831976916, 0);
  sqcRZGate(q, -2.675006610552486, 0);
  sqcRYGate(q, -1.4449538365079309, 1);
  sqcRZGate(q, -0.6077196949981017, 1);
  sqcRYGate(q, -1.4109585036046204, 2);
  sqcRZGate(q, -0.7789718893176174, 2);
  sqcRYGate(q, -1.5958434295678048, 3);
  sqcRZGate(q, -0.6228320285731362, 3);
  sqcRYGate(q, -1.263917454586838, 4);
  sqcRZGate(q, 1.5408562118982307, 4);
  sqcRYGate(q, 1.8967875208843685, 5);
  sqcRZGate(q, -0.7538277665550006, 5);
  sqcRYGate(q, -0.4163730944694901, 6);
  sqcRZGate(q, 2.4035206579623134, 6);
  sqcRYGate(q, 2.0370690564439355, 7);
  sqcRZGate(q, -0.715653261068451, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.6319552869310279, 0);
  sqcRZGate(q, 1.9282672437427755, 0);
  sqcRYGate(q, 1.862158836822562, 1);
  sqcRZGate(q, 0.878059197062134, 1);
  sqcRYGate(q, -1.511879599352815, 2);
  sqcRZGate(q, -0.9183145999577348, 2);
  sqcRYGate(q, -2.876068076991702, 3);
  sqcRZGate(q, 2.131097529867688, 3);
  sqcRYGate(q, -0.45468491640013303, 4);
  sqcRZGate(q, -1.3823166610411428, 4);
  sqcRYGate(q, 3.0016278369984177, 5);
  sqcRZGate(q, -0.16506181457918523, 5);
  sqcRYGate(q, -0.3037043608848717, 6);
  sqcRZGate(q, 0.7125187307837421, 6);
  sqcRYGate(q, -0.39354601842381776, 7);
  sqcRZGate(q, -3.0714753805170454, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.8557115262487903, 0);
  sqcRZGate(q, 2.2845545083342587, 0);
  sqcRYGate(q, 1.1755627970592637, 1);
  sqcRZGate(q, 2.8219387155438946, 1);
  sqcRYGate(q, -1.580913781769868, 2);
  sqcRZGate(q, 0.673546574518932, 2);
  sqcRYGate(q, -0.5976210324592235, 3);
  sqcRZGate(q, -1.5139579684353643, 3);
  sqcRYGate(q, -1.137575110620365, 4);
  sqcRZGate(q, 1.6038724996926081, 4);
  sqcRYGate(q, 0.4089849873078739, 5);
  sqcRZGate(q, -1.6435787825518196, 5);
  sqcRYGate(q, 2.2852034146622797, 6);
  sqcRZGate(q, 0.4995496806158308, 6);
  sqcRYGate(q, -1.4816410475664594, 7);
  sqcRZGate(q, -1.238941804148758, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.1865101513691396, 0);
  sqcRZGate(q, -0.9035307052473552, 0);
  sqcRYGate(q, -1.97194247445137, 1);
  sqcRZGate(q, -2.7194729578173136, 1);
  sqcRYGate(q, -2.3061721812930474, 2);
  sqcRZGate(q, 1.2701402594434992, 2);
  sqcRYGate(q, -1.1406738211213199, 3);
  sqcRZGate(q, 2.260266091910214, 3);
  sqcRYGate(q, 0.3253445669915278, 4);
  sqcRZGate(q, -1.002825293126734, 4);
  sqcRYGate(q, 2.9370034137514223, 5);
  sqcRZGate(q, -1.5732845487965053, 5);
  sqcRYGate(q, -2.4414293276479744, 6);
  sqcRZGate(q, 0.40078278789313254, 6);
  sqcRYGate(q, -2.1521766884720903, 7);
  sqcRZGate(q, 1.544902464990039, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.3316708852739387, 0);
  sqcRZGate(q, -1.5202432602687441, 0);
  sqcRYGate(q, -1.4602986793189288, 1);
  sqcRZGate(q, 1.5498549347339814, 1);
  sqcRYGate(q, 0.3436787123773755, 2);
  sqcRZGate(q, 2.305093790905035, 2);
  sqcRYGate(q, -2.9331741117549774, 3);
  sqcRZGate(q, 0.21007812556770003, 3);
  sqcRYGate(q, -1.7626233557390345, 4);
  sqcRZGate(q, 2.1148727643870515, 4);
  sqcRYGate(q, -2.617418220282261, 5);
  sqcRZGate(q, 0.6793933645263905, 5);
  sqcRYGate(q, -2.2642784897920616, 6);
  sqcRZGate(q, -3.09940609790005, 6);
  sqcRYGate(q, 2.928243809354408, 7);
  sqcRZGate(q, -0.3643334779629793, 7);

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
