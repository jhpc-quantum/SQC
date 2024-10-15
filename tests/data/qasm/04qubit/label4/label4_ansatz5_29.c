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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -0.42319600993895357, 0);
  sqcRYGate(q, 2.6842447015578608, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.01435089657407939, 0);
  sqcRYGate(q, 1.9598402822336842, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4534981940916216, 2);
  sqcRYGate(q, 2.4044082186400533, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.46966244295531, 2);
  sqcRYGate(q, -1.415577067755369, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.339105651101113, 1);
  sqcRYGate(q, -1.1645360372211302, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5289582954937466, 1);
  sqcRYGate(q, -2.2568573956422098, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0002273633593677, 0);
  sqcRYGate(q, -2.322004996780814, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6529364012139336, 0);
  sqcRYGate(q, 2.4689996428027317, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.468592941682103, 2);
  sqcRYGate(q, -2.3859458728311824, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.18056506276664042, 2);
  sqcRYGate(q, 3.1293474235643326, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6176978285108718, 1);
  sqcRYGate(q, -0.8714229987950228, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.268237276829157, 1);
  sqcRYGate(q, -3.009459221481996, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.308836573035177, 0);
  sqcRYGate(q, 1.3238842276864995, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4775601782568826, 0);
  sqcRYGate(q, -1.2874556406917268, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.026008955431575456, 2);
  sqcRYGate(q, -0.5738580274988099, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.153484727178329, 2);
  sqcRYGate(q, -1.867675911616269, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3491832035308005, 1);
  sqcRYGate(q, -1.147973721230457, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.839984074270888, 1);
  sqcRYGate(q, -2.534617493236453, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9269459640963857, 0);
  sqcRYGate(q, -1.941093165278609, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8853324959692186, 0);
  sqcRYGate(q, -2.0261843737946803, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.03664060354318168, 2);
  sqcRYGate(q, -0.1279361160798526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8654698924930351, 2);
  sqcRYGate(q, 1.6183913083413393, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0334856586707173, 1);
  sqcRYGate(q, -0.05403030259983932, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5278805058134175, 1);
  sqcRYGate(q, -1.9991257569123384, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7235318271935176, 0);
  sqcRYGate(q, 1.645621478121177, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6491145158318856, 0);
  sqcRYGate(q, 1.4803550853800695, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1350917158247396, 2);
  sqcRYGate(q, 1.472643387903138, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6719475163108828, 2);
  sqcRYGate(q, 0.19459129506670078, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5802143052159409, 1);
  sqcRYGate(q, -2.1107724041804774, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4402756281893478, 1);
  sqcRYGate(q, 2.048266590474956, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7614365978954112, 0);
  sqcRYGate(q, 3.0428956864727468, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.078215740450274, 0);
  sqcRYGate(q, -2.8121298023130916, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.23393487590839257, 2);
  sqcRYGate(q, -0.3550249712669695, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1995123490159685, 2);
  sqcRYGate(q, -1.182993787123627, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.449392404006602, 1);
  sqcRYGate(q, -1.6413303269115458, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2210148421006037, 1);
  sqcRYGate(q, -2.3433736974687585, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4215742852425322, 0);
  sqcRYGate(q, 3.106599628716963, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0475857043900607, 0);
  sqcRYGate(q, 2.5138547148803854, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3005962149289214, 2);
  sqcRYGate(q, 2.379122614735081, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.987064275836823, 2);
  sqcRYGate(q, 0.48646249078971715, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3253615625059518, 1);
  sqcRYGate(q, 2.623789896973013, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5268374530951618, 1);
  sqcRYGate(q, 2.4208174089074035, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.088011469377089, 0);
  sqcRYGate(q, 0.3812942603257579, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1303031811535487, 0);
  sqcRYGate(q, -2.1704770668094344, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5331449098499013, 2);
  sqcRYGate(q, -2.4127340623394957, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08455749928899707, 2);
  sqcRYGate(q, -0.7044864363442146, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6197464348281431, 1);
  sqcRYGate(q, 3.124965839377262, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4921237445684934, 1);
  sqcRYGate(q, -0.2851993997795756, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.399578905062622, 0);
  sqcRYGate(q, 1.8526556564316157, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8150539349741592, 0);
  sqcRYGate(q, 0.34535683457630206, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6310399688788131, 2);
  sqcRYGate(q, 2.264842080951924, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.14009652556182, 2);
  sqcRYGate(q, -2.399377922518567, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8904885427813731, 1);
  sqcRYGate(q, 2.2528735441935646, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9535567998227807, 1);
  sqcRYGate(q, 0.3460977986946272, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9182821207022123, 0);
  sqcRYGate(q, 0.0803401488377844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5610663994604015, 0);
  sqcRYGate(q, 2.7703257756914064, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.88456919239395, 2);
  sqcRYGate(q, 1.7489286459313444, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6386176151545726, 2);
  sqcRYGate(q, 0.5958129487074555, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9112655939500217, 1);
  sqcRYGate(q, -2.0377778858120843, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.48309599693897, 1);
  sqcRYGate(q, 2.442122900517488, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0791245672742313, 0);
  sqcRYGate(q, 1.9397056127627872, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6270491996700085, 0);
  sqcRYGate(q, 1.151556838208885, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0696286054428787, 2);
  sqcRYGate(q, 1.6103232507173173, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6294858427721344, 2);
  sqcRYGate(q, -3.1081926988558806, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08352888870591109, 1);
  sqcRYGate(q, -2.769178775295876, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2103133998729103, 1);
  sqcRYGate(q, 3.1326199691637955, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6213490123425541, 0);
  sqcRYGate(q, 1.8224772395504736, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.41837675985415884, 0);
  sqcRYGate(q, -0.06956478268166143, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4420103545266707, 2);
  sqcRYGate(q, -0.931403032180619, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.654605161766411, 2);
  sqcRYGate(q, 1.4405216645432368, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1695726008536411, 1);
  sqcRYGate(q, 0.2076821368777484, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4940105846176035, 1);
  sqcRYGate(q, 2.0313978598812845, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4472047204655878, 0);
  sqcRYGate(q, -0.19937334680806976, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7441443885600718, 0);
  sqcRYGate(q, -2.399848586797435, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5539767630127308, 2);
  sqcRYGate(q, -0.8373414105158226, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5535283975587442, 2);
  sqcRYGate(q, 1.3699838969308642, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4628525326267463, 1);
  sqcRYGate(q, -1.894317382146275, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4045509131996774, 1);
  sqcRYGate(q, -0.709529177489288, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2141609914789115, 0);
  sqcRYGate(q, 3.0843127315703147, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4178741522739351, 0);
  sqcRYGate(q, -1.5009521033328728, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6745436673825436, 2);
  sqcRYGate(q, 3.1084905749989917, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.721557948836497, 2);
  sqcRYGate(q, 1.3043448447627997, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9183479645929535, 1);
  sqcRYGate(q, 1.0338855830947538, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.082534420870477, 1);
  sqcRYGate(q, 1.9720143056788926, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7885346207144712, 0);
  sqcRYGate(q, -2.420734948572039, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.274583589361794, 0);
  sqcRYGate(q, 0.9826558490082445, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8979717677194143, 2);
  sqcRYGate(q, -1.1725484024555484, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.814099941224216, 2);
  sqcRYGate(q, -2.4603070483712584, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.12154859660256655, 1);
  sqcRYGate(q, 2.067579181780033, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2752966722366827, 1);
  sqcRYGate(q, 2.600711490730991, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2886469233047828, 0);
  sqcRYGate(q, 2.7806660222535697, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0091895211160375, 0);
  sqcRYGate(q, 0.21446522104926138, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6069987479192216, 2);
  sqcRYGate(q, -2.070745707251821, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4223721241279971, 2);
  sqcRYGate(q, 1.726737683313262, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6349274418810251, 1);
  sqcRYGate(q, -2.894008322248713, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.178471311090152, 1);
  sqcRYGate(q, 0.48216811305485674, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4519722438024374, 0);
  sqcRYGate(q, -2.8821131208419644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0563652099130723, 0);
  sqcRYGate(q, -0.1518632560412705, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5565497436897866, 2);
  sqcRYGate(q, 0.40903259308122225, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.438414696811046, 2);
  sqcRYGate(q, 3.136508235945867, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0250009655490961, 1);
  sqcRYGate(q, 2.117849527685504, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.19872383896534057, 1);
  sqcRYGate(q, -2.56388903442309, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9175255755215348, 0);
  sqcRYGate(q, -1.895630761953199, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.939156889122816, 0);
  sqcRYGate(q, -0.699918260944144, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.39613920735978875, 2);
  sqcRYGate(q, 0.916266719489529, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8540864100830251, 2);
  sqcRYGate(q, 0.40320971844240827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.076749538750689, 1);
  sqcRYGate(q, -0.30846675732230633, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.573623443065997, 1);
  sqcRYGate(q, -2.899560596945081, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4447573752732144, 0);
  sqcRYGate(q, -2.709667466305127, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4191073287353273, 0);
  sqcRYGate(q, 1.000698550360224, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6999509749496573, 2);
  sqcRYGate(q, -0.38042444655466257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9550476496893587, 2);
  sqcRYGate(q, 2.252197859352701, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5364754916489245, 1);
  sqcRYGate(q, -1.262718276378103, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.08095111615286374, 1);
  sqcRYGate(q, 2.030226218122564, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7855447864416202, 0);
  sqcRYGate(q, -2.2045935567638937, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.139509590852618, 0);
  sqcRYGate(q, 0.9457212918420899, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4927523895613521, 2);
  sqcRYGate(q, -2.879962199664047, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0239053467605954, 2);
  sqcRYGate(q, 1.1970247074837443, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.542463761551332, 1);
  sqcRYGate(q, 2.7127681292719443, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5358427151448119, 1);
  sqcRYGate(q, -2.2312854687371084, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0166223131915877, 0);
  sqcRYGate(q, 2.7436660590468374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.35567759687721306, 0);
  sqcRYGate(q, 0.8649206035744633, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.17070538021064152, 2);
  sqcRYGate(q, -2.0110440607042652, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.610042520416106, 2);
  sqcRYGate(q, 0.7689162294123905, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.02490114490733042, 1);
  sqcRYGate(q, -0.2197002423563017, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7875676595197865, 1);
  sqcRYGate(q, -2.8445633496412763, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0701274690376708, 0);
  sqcRYGate(q, 0.36271941469021485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6213900233050752, 0);
  sqcRYGate(q, -1.770263386248411, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.19016730704163, 2);
  sqcRYGate(q, -1.7769096632135064, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2578546266686672, 2);
  sqcRYGate(q, 3.090163122625934, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8838144813523182, 1);
  sqcRYGate(q, 0.3870991216915823, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6208980053086983, 1);
  sqcRYGate(q, 0.9727655592103285, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.847316770026546, 0);
  sqcRYGate(q, -3.064215551218536, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4673222813096114, 0);
  sqcRYGate(q, 2.954714061540723, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7358579724858445, 2);
  sqcRYGate(q, 1.0226597017726684, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.92119228074762, 2);
  sqcRYGate(q, -0.3676035793225685, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.47074013548143423, 1);
  sqcRYGate(q, -2.977689603735856, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.192209615521616, 1);
  sqcRYGate(q, -1.532665090566074, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4456185594208746, 0);
  sqcRYGate(q, 1.142138466899607, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.330997519428506, 0);
  sqcRYGate(q, -1.5442352126114647, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.43686527876515, 2);
  sqcRYGate(q, -1.9266466264255833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9615824108973787, 2);
  sqcRYGate(q, 0.6521964659778359, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9649115534711106, 1);
  sqcRYGate(q, 0.194492235387029, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4768738503979266, 1);
  sqcRYGate(q, 1.5620787172259192, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.088537461301841, 0);
  sqcRYGate(q, 2.4188955791462727, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.087748393454447, 0);
  sqcRYGate(q, -2.9691555020028018, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8829849843309643, 2);
  sqcRYGate(q, -2.516700693395844, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6067505957602863, 2);
  sqcRYGate(q, -2.4069551357169594, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.79761618089538, 1);
  sqcRYGate(q, -2.281788098906018, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7158966453257136, 1);
  sqcRYGate(q, 1.8694671164316095, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.956400760308324, 0);
  sqcRYGate(q, 3.111308263825545, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6459928451616033, 0);
  sqcRYGate(q, 1.6185483935447365, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.17288209928757325, 2);
  sqcRYGate(q, -0.8045743696870611, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2483572712871958, 2);
  sqcRYGate(q, -0.5636590386163869, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.537198654759206, 1);
  sqcRYGate(q, -2.203588611477997, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9052370731562323, 1);
  sqcRYGate(q, 1.5378483700442702, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6975685727926876, 0);
  sqcRYGate(q, 0.9031114390270378, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4478981633097196, 0);
  sqcRYGate(q, -0.6540840900739516, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0044122258077355, 2);
  sqcRYGate(q, -3.1412178735783685, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.016857272255188, 2);
  sqcRYGate(q, -2.98422672310356, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6051764773620966, 1);
  sqcRYGate(q, -1.6617003622875774, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2701539538139524, 1);
  sqcRYGate(q, 2.5086559671436155, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8708143527616916, 0);
  sqcRYGate(q, -0.056816957406332566, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6388100494037534, 0);
  sqcRYGate(q, 1.4183949239061064, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9364290935095907, 2);
  sqcRYGate(q, 1.6181317045135166, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4107490483327174, 2);
  sqcRYGate(q, 2.5209518848109314, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.127177527964788, 1);
  sqcRYGate(q, -1.8814859097108974, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8456468978446102, 1);
  sqcRYGate(q, -2.237367649290918, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.11155193713687694, 0);
  sqcRYGate(q, -0.3671955343444502, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6250296596914406, 0);
  sqcRYGate(q, -0.18309642528613604, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.707312168382389, 2);
  sqcRYGate(q, -2.306601130609514, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7383584709528792, 2);
  sqcRYGate(q, -1.1339031179426584, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7360556091557432, 1);
  sqcRYGate(q, -0.40341727699889063, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9613337509596018, 1);
  sqcRYGate(q, 0.8065575919725176, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5584825472096213, 0);
  sqcRYGate(q, 2.8719386591332596, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.135467341364083, 0);
  sqcRYGate(q, -1.2442214582750069, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4189436268142854, 2);
  sqcRYGate(q, -0.2313194084347414, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.120861595238792, 2);
  sqcRYGate(q, -2.7835627754066707, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2451006256435555, 1);
  sqcRYGate(q, 1.5619569666211746, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2444682310035444, 1);
  sqcRYGate(q, 3.1172655031087317, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6631498945545585, 0);
  sqcRYGate(q, -2.38322799306636, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0066825655605975, 0);
  sqcRYGate(q, -2.73333651261095, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3556167001856263, 2);
  sqcRYGate(q, -0.5332282966594217, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8106273765336323, 2);
  sqcRYGate(q, 0.8271638660694237, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7357336363732854, 1);
  sqcRYGate(q, 3.024134410774761, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7805599688268439, 1);
  sqcRYGate(q, 2.002793325880094, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0485074436245583, 0);
  sqcRYGate(q, 1.4025190957456939, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.946556579647642, 0);
  sqcRYGate(q, 2.991332566190648, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2803060507727482, 2);
  sqcRYGate(q, -1.0638979083282063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.123781691499557, 2);
  sqcRYGate(q, -2.54630973483527, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.197362733640236, 1);
  sqcRYGate(q, -3.0547453474070023, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6568633814515934, 1);
  sqcRYGate(q, -0.16223891434089788, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4845873367948825, 0);
  sqcRYGate(q, -2.4233473526530345, 1);
  sqcRYGate(q, -0.15886251338193877, 2);
  sqcRYGate(q, -3.108480983229521, 3);

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
