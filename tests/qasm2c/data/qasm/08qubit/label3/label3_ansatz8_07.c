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

  sqcRYGate(q, -2.9531405191383056, 0);
  sqcRYGate(q, 1.5176333092184788, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.979052316732636, 0);
  sqcRYGate(q, 1.2146768265439059, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1192007370141743, 2);
  sqcRYGate(q, 0.6274935947981904, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8216463382697556, 2);
  sqcRYGate(q, -2.204291687854946, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8955989946998244, 4);
  sqcRYGate(q, 1.1604399099052047, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.002489799575718, 4);
  sqcRYGate(q, -1.6105064048730242, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2207408635292987, 6);
  sqcRYGate(q, 0.8755885894121967, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4361403768275602, 6);
  sqcRYGate(q, -2.9913430927282456, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3989549084054773, 0);
  sqcRYGate(q, -1.7622615844225997, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.029481435651733, 0);
  sqcRYGate(q, 2.3167830905367888, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1185233984075484, 2);
  sqcRYGate(q, -2.5873879761233316, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.316222935620677, 2);
  sqcRYGate(q, 1.4203586405096518, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.3571627827319515, 4);
  sqcRYGate(q, 0.3587610113883892, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.7540028949723547, 4);
  sqcRYGate(q, -1.0456733047550673, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.6791314168770004, 1);
  sqcRYGate(q, 0.384038832308189, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9089406566350298, 1);
  sqcRYGate(q, 3.014982349987025, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4001828211883467, 3);
  sqcRYGate(q, -1.6209184850671994, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.003752643743661, 3);
  sqcRYGate(q, -1.3308810407274896, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.913653447328875, 5);
  sqcRYGate(q, -2.0123098617539696, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.8969161326055435, 5);
  sqcRYGate(q, 1.439968689165386, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.9969398323954834, 0);
  sqcRYGate(q, -0.273471379246673, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.590444339828821, 0);
  sqcRYGate(q, 2.7561767663752366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6539414735166966, 2);
  sqcRYGate(q, 0.8750416671718685, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9953793060339984, 2);
  sqcRYGate(q, 0.24194515973233344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6752202397537934, 4);
  sqcRYGate(q, -2.6496436559614023, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0669939636717045, 4);
  sqcRYGate(q, 1.9347925502535706, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0388512358545263, 6);
  sqcRYGate(q, 1.8083663458725276, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5928296901392018, 6);
  sqcRYGate(q, 1.0412544463119378, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.19197009145398045, 0);
  sqcRYGate(q, -2.2593504708955034, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.724212684539255, 0);
  sqcRYGate(q, -2.491513780606176, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.37385014012238216, 2);
  sqcRYGate(q, -2.5648286298467604, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.4865391481586068, 2);
  sqcRYGate(q, -1.617699333276721, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.053696951403658, 4);
  sqcRYGate(q, -1.5401778748401684, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.1497065828457664, 4);
  sqcRYGate(q, -1.6079098556024451, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5063174137495468, 1);
  sqcRYGate(q, 0.7472030854671337, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8096752819559416, 1);
  sqcRYGate(q, -1.6210554888113433, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2721813319248804, 3);
  sqcRYGate(q, 1.9653131114322113, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.4726017746731989, 3);
  sqcRYGate(q, -0.13771493313218564, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.6540135381558708, 5);
  sqcRYGate(q, -0.681537521177188, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.038220332271974085, 5);
  sqcRYGate(q, 2.0783550747162134, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.9090010982072814, 0);
  sqcRYGate(q, 2.5800407366779323, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9906726594086503, 0);
  sqcRYGate(q, 0.469578199802136, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.711295811868627, 2);
  sqcRYGate(q, -1.6844712545482148, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.069720884833772, 2);
  sqcRYGate(q, -0.004871012901682015, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2314932778034744, 4);
  sqcRYGate(q, -2.5174013068273635, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0051128145590527, 4);
  sqcRYGate(q, -0.579166740451151, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.467085437136606, 6);
  sqcRYGate(q, 2.8928310817261313, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.30497016284013106, 6);
  sqcRYGate(q, 2.051265677544202, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8018504948185128, 0);
  sqcRYGate(q, 1.6433163428243243, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6563684717670054, 0);
  sqcRYGate(q, 1.0954325331350194, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4617290406538637, 2);
  sqcRYGate(q, -1.8793877522114188, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.5845906456643277, 2);
  sqcRYGate(q, 1.5794277308636027, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.2591619637656422, 4);
  sqcRYGate(q, 1.103890476379959, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.631522178206577, 4);
  sqcRYGate(q, -2.6379981257734704, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.7393236364216818, 1);
  sqcRYGate(q, 0.7390692909315631, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5326883811228489, 1);
  sqcRYGate(q, 2.2745954785768028, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2623005276178443, 3);
  sqcRYGate(q, -2.997224941397299, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.6469848368655475, 3);
  sqcRYGate(q, 1.6561753688166423, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.5704801454144297, 5);
  sqcRYGate(q, 1.0468636556293056, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.602277408641548, 5);
  sqcRYGate(q, -1.1606361258421458, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.603932897176091, 0);
  sqcRYGate(q, 0.9507833030874471, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8930043042281515, 0);
  sqcRYGate(q, -1.8473492250435255, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.321574525109483, 2);
  sqcRYGate(q, 2.316387885923547, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.825321218087402, 2);
  sqcRYGate(q, -1.7394997751281265, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1056537743499616, 4);
  sqcRYGate(q, 3.0981124056368303, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2765248721569, 4);
  sqcRYGate(q, 1.9831388449696101, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7066566716913121, 6);
  sqcRYGate(q, 0.4249689799023981, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3375233876651678, 6);
  sqcRYGate(q, -0.6702327470770291, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.162886051485916, 0);
  sqcRYGate(q, -3.1392902122800965, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9150277173051755, 0);
  sqcRYGate(q, 3.0598061165499635, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0147064807179844, 2);
  sqcRYGate(q, -0.5668567811372069, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.7096603541839022, 2);
  sqcRYGate(q, -0.8811082429550708, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.4193711956866429, 4);
  sqcRYGate(q, 2.143734527761869, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5634795486627844, 4);
  sqcRYGate(q, -0.31325434448288636, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.8339518754637334, 1);
  sqcRYGate(q, 1.6513137285734398, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8905592616137515, 1);
  sqcRYGate(q, -1.9845027242384286, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0686020454337481, 3);
  sqcRYGate(q, -2.5496267560317554, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.4804001373386217, 3);
  sqcRYGate(q, 0.3411833399328623, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.8130702780515611, 5);
  sqcRYGate(q, -0.6810892348018172, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.0666747223637751, 5);
  sqcRYGate(q, 0.9953340430702209, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.5870385780967505, 0);
  sqcRYGate(q, -0.13192394249621675, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.445051496311968, 0);
  sqcRYGate(q, 1.9784309383016905, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2822895700570511, 2);
  sqcRYGate(q, -2.7513410448846325, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.11940839954951585, 2);
  sqcRYGate(q, 2.863208473151937, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.651214076208504, 4);
  sqcRYGate(q, 0.3491971787114272, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2877611289686244, 4);
  sqcRYGate(q, -2.4821991892362445, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6290577352879243, 6);
  sqcRYGate(q, -0.07113141557988101, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6205111482686254, 6);
  sqcRYGate(q, -0.0227061263115609, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6705877647331047, 0);
  sqcRYGate(q, -1.580373390874204, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.10126001083141833, 0);
  sqcRYGate(q, 2.272190331171754, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.748512050916503, 2);
  sqcRYGate(q, 3.074100819983468, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.8952287889874098, 2);
  sqcRYGate(q, -0.49109104179334934, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.21382500664730753, 4);
  sqcRYGate(q, -2.4524021589463447, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.460396403866726, 4);
  sqcRYGate(q, -0.01778241867952414, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.8566146085947892, 1);
  sqcRYGate(q, 0.8027215278941328, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1762457213298498, 1);
  sqcRYGate(q, 2.3774482879703, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.331756359904853, 3);
  sqcRYGate(q, -0.3738071021855874, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.6169363391286902, 3);
  sqcRYGate(q, -1.1149879245141925, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.6138350859112779, 5);
  sqcRYGate(q, 0.7009104409476677, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.066335583435616, 5);
  sqcRYGate(q, -0.36876578476213506, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.8983507749035002, 0);
  sqcRYGate(q, 2.702642108369526, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6240960161068646, 0);
  sqcRYGate(q, 2.1230885739104677, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4054078113322004, 2);
  sqcRYGate(q, 1.4093281722956412, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.667140427362641, 2);
  sqcRYGate(q, -1.497659307397746, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.15883206356794594, 4);
  sqcRYGate(q, 1.027157839795505, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.05837588027014551, 4);
  sqcRYGate(q, 1.1798417923117914, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4673584288753483, 6);
  sqcRYGate(q, -0.02324480124650119, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4737727909954836, 6);
  sqcRYGate(q, 0.6635713295407739, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1279282740647676, 0);
  sqcRYGate(q, 0.7348284206371235, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1033427451107154, 0);
  sqcRYGate(q, -0.7585301480290028, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1488467951829164, 2);
  sqcRYGate(q, -2.7978278697450505, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.961573985967568, 2);
  sqcRYGate(q, 0.4456105842753812, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.177707948250729, 4);
  sqcRYGate(q, -1.075440472529325, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5963306041364085, 4);
  sqcRYGate(q, -1.296671116057202, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.2470819379550324, 1);
  sqcRYGate(q, 2.3065848926722525, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3549768163236172, 1);
  sqcRYGate(q, -2.724537584984523, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.694383340313498, 3);
  sqcRYGate(q, -2.95498524142058, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.4265943436388646, 3);
  sqcRYGate(q, 0.5802358355740248, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.1221097346857767, 5);
  sqcRYGate(q, -2.965543926240765, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.7498488848632219, 5);
  sqcRYGate(q, 1.0467508969934824, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.615800394617669, 0);
  sqcRYGate(q, 2.3919841343551065, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.627581011739429, 0);
  sqcRYGate(q, 1.8908790247922571, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.10199779120610941, 2);
  sqcRYGate(q, -1.947764465063508, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.835368133711397, 2);
  sqcRYGate(q, 0.6477887497784538, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3201772829049208, 4);
  sqcRYGate(q, 0.6910193367707814, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6471144666622682, 4);
  sqcRYGate(q, -2.2020326414982363, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.464321493628684, 6);
  sqcRYGate(q, -2.7207674883539896, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.111960957996966, 6);
  sqcRYGate(q, -1.173366750588834, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3516297219041569, 0);
  sqcRYGate(q, -2.623300147424016, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9785016591135048, 0);
  sqcRYGate(q, 0.07337489299244826, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2687841427815492, 2);
  sqcRYGate(q, 1.9427307535205118, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.791989904659806, 2);
  sqcRYGate(q, 2.637392247377033, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.517429550296341, 4);
  sqcRYGate(q, 1.2480710957884078, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.4167214270305326, 4);
  sqcRYGate(q, -0.09685661630544651, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.087625413481841, 1);
  sqcRYGate(q, 2.7823532507610893, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.0802846262265633, 1);
  sqcRYGate(q, -2.4026515361359637, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1230009991231062, 3);
  sqcRYGate(q, 1.0426407799548594, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.5945045823319175, 3);
  sqcRYGate(q, -2.4989743612673974, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.2754177478154833, 5);
  sqcRYGate(q, 0.28809220759027454, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.8737947351341467, 5);
  sqcRYGate(q, 2.775911037814764, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5096682781562158, 0);
  sqcRYGate(q, 0.1617268004945286, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8529341315005619, 0);
  sqcRYGate(q, 1.3710089276768151, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5984215049202783, 2);
  sqcRYGate(q, -2.317802014811584, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8698778220208574, 2);
  sqcRYGate(q, 1.0330427344898718, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7245611811755794, 4);
  sqcRYGate(q, 1.8134175154631063, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2624597987303607, 4);
  sqcRYGate(q, -1.842667799212965, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.033347726438656, 6);
  sqcRYGate(q, 2.6583287766582666, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.25531335417143, 6);
  sqcRYGate(q, -2.0589351564163834, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0596293413548725, 0);
  sqcRYGate(q, 2.4429782220906255, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6870481276572464, 0);
  sqcRYGate(q, 2.948638031833695, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.732170171916454, 2);
  sqcRYGate(q, -0.9457348724802319, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.2102105695409742, 2);
  sqcRYGate(q, -2.9071643584339406, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.862407725660388, 4);
  sqcRYGate(q, -0.963871828032338, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.0018489029830472958, 4);
  sqcRYGate(q, -1.7042875688098056, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.047949815938655, 1);
  sqcRYGate(q, 2.2832080225184925, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5692461946664942, 1);
  sqcRYGate(q, 0.4427165553558423, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7352782864524183, 3);
  sqcRYGate(q, -0.24999812987970946, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.0074738009923716, 3);
  sqcRYGate(q, 0.9243246912481098, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8170933699824392, 5);
  sqcRYGate(q, -0.5642624658338224, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.03672169899831168, 5);
  sqcRYGate(q, 1.4469105811322882, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.6054876797670152, 0);
  sqcRYGate(q, -0.9817239164338806, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4611967953098421, 0);
  sqcRYGate(q, -1.4581820853742975, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.176913757881076, 2);
  sqcRYGate(q, -3.0522626202477556, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.890774844797452, 2);
  sqcRYGate(q, 1.634686667625247, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9052472683522743, 4);
  sqcRYGate(q, 0.0943572353879434, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9003488096642175, 4);
  sqcRYGate(q, 1.4820796796260234, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7432536361910507, 6);
  sqcRYGate(q, -1.131381543253739, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.23405744162126915, 6);
  sqcRYGate(q, -1.26585532832035, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4381168685384647, 0);
  sqcRYGate(q, 2.0443676888208597, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8153210740490522, 0);
  sqcRYGate(q, -2.5410425883213676, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0238216780599427, 2);
  sqcRYGate(q, 1.7809352606202706, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.7104889025038363, 2);
  sqcRYGate(q, -1.1619344876882378, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.21158308470380752, 4);
  sqcRYGate(q, 0.9344951888976081, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.240807534633566, 4);
  sqcRYGate(q, 2.9669685386975835, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.3193272217778258, 1);
  sqcRYGate(q, -2.8206789200406495, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1603393764855907, 1);
  sqcRYGate(q, -0.40326434538919026, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2530111793818515, 3);
  sqcRYGate(q, 2.6778801214902863, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.7989354782269027, 3);
  sqcRYGate(q, -0.8636534185330758, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.5136618530498982, 5);
  sqcRYGate(q, 2.3073585592213526, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.0544637278387, 5);
  sqcRYGate(q, 1.833339367002237, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.7866339826719377, 0);
  sqcRYGate(q, -2.9712658842361908, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2228470404886274, 0);
  sqcRYGate(q, -1.005816004199816, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7073263412811275, 2);
  sqcRYGate(q, 0.9109553916996873, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4068072043615416, 2);
  sqcRYGate(q, -0.9457171421797472, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9990389947038247, 4);
  sqcRYGate(q, -1.7210300041144573, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.705561778750823, 4);
  sqcRYGate(q, 0.7866085786315403, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.594662556459192, 6);
  sqcRYGate(q, -1.6549422226923998, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8133039589959485, 6);
  sqcRYGate(q, -1.7881216424020405, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9972285936134933, 0);
  sqcRYGate(q, -0.6908423609764814, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6380738460580586, 0);
  sqcRYGate(q, 2.222744650687278, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6212388058552382, 2);
  sqcRYGate(q, 2.8628717482315356, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.1382696326524924, 2);
  sqcRYGate(q, 2.0031835819433743, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.410865213884525, 4);
  sqcRYGate(q, -2.031723168343289, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.3875309114012089, 4);
  sqcRYGate(q, -0.8897025655483778, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.7081058083140119, 1);
  sqcRYGate(q, 2.8269865674456924, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7510074455545956, 1);
  sqcRYGate(q, 2.321954125734335, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.69016615192604, 3);
  sqcRYGate(q, 2.2444360469055638, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.6630715058712815, 3);
  sqcRYGate(q, 0.40723419716257236, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.3730870847562429, 5);
  sqcRYGate(q, 1.1538438185665645, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.4272782096473904, 5);
  sqcRYGate(q, -0.16559954579062897, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.9786757768874694, 0);
  sqcRYGate(q, 2.0715925373191393, 1);
  sqcRYGate(q, 1.7140198288944504, 2);
  sqcRYGate(q, -1.3140882059410997, 3);
  sqcRYGate(q, -1.7653702101753754, 4);
  sqcRYGate(q, -2.7846162508332615, 5);
  sqcRYGate(q, 2.1725063669212776, 6);
  sqcRYGate(q, -2.880897890469173, 7);

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
