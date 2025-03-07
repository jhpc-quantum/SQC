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

  sqcRYGate(q, 1.9375270265917814, 0);
  sqcRYGate(q, 1.4568163349063727, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6770883306576683, 0);
  sqcRYGate(q, -1.019174774127574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.102830695756996, 0);
  sqcRYGate(q, 2.320079103801467, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5907508994200796, 0);
  sqcRYGate(q, -1.8982426225908338, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.320633718836774, 0);
  sqcRYGate(q, 1.8747429695484596, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.666252055627977, 0);
  sqcRYGate(q, 1.1128397560786762, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7318620240499628, 1);
  sqcRYGate(q, 1.000804670946633, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9862281594307715, 1);
  sqcRYGate(q, -2.831908219418984, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0530621123507884, 1);
  sqcRYGate(q, 1.8639406705697956, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.02983626100335, 1);
  sqcRYGate(q, -2.2428084783711517, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9818745606810655, 2);
  sqcRYGate(q, -1.3116572609878832, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7740377618860124, 2);
  sqcRYGate(q, 2.0064766486769825, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7390707179623486, 0);
  sqcRYGate(q, 2.585988935051612, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.21517345972298774, 0);
  sqcRYGate(q, -2.5434298841172085, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8163018130770558, 0);
  sqcRYGate(q, -1.8097151832287919, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7812893503456957, 0);
  sqcRYGate(q, 0.1463193999675676, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2822528311568, 0);
  sqcRYGate(q, -1.5527464485912044, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8326052063615198, 0);
  sqcRYGate(q, 2.6858130763617636, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4152710567620295, 1);
  sqcRYGate(q, -1.5668952979917767, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.667488421392206, 1);
  sqcRYGate(q, -2.605080882539176, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.056254159543093984, 1);
  sqcRYGate(q, -2.684730965194509, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7692597283777314, 1);
  sqcRYGate(q, 1.3578004124827068, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.11497089609923, 2);
  sqcRYGate(q, 1.9624379588502432, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1823306263893616, 2);
  sqcRYGate(q, 0.8539685709098325, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9001256773784028, 0);
  sqcRYGate(q, -1.96454199472889, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7433526224459295, 0);
  sqcRYGate(q, 2.5721589377081373, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1112561313433895, 0);
  sqcRYGate(q, 1.6406327113324535, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.435150439342942, 0);
  sqcRYGate(q, -0.33830528303025714, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9780994189514842, 0);
  sqcRYGate(q, 1.786101787733895, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9307959940554222, 0);
  sqcRYGate(q, -1.1642394515641286, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7800879214469676, 1);
  sqcRYGate(q, -1.6186117401211497, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8892857208921674, 1);
  sqcRYGate(q, -1.7466328041694716, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.304894030616377, 1);
  sqcRYGate(q, -2.5275192929939494, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6195128519388755, 1);
  sqcRYGate(q, 0.7424553699161436, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.481977226368656, 2);
  sqcRYGate(q, -2.1760740988003526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7676395278850418, 2);
  sqcRYGate(q, 2.853874264882383, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8822317308493851, 0);
  sqcRYGate(q, 0.3271821954205586, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6494875831724505, 0);
  sqcRYGate(q, 2.2175172505872736, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9906802775670263, 0);
  sqcRYGate(q, -3.090540528988415, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0995679593569156, 0);
  sqcRYGate(q, 0.25337346752661283, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.034345998354609, 0);
  sqcRYGate(q, -1.3239281649865935, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1392915438416065, 0);
  sqcRYGate(q, 2.3692897192488926, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.3209449141032703, 1);
  sqcRYGate(q, -0.43996987152244665, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.212946199270957, 1);
  sqcRYGate(q, 2.7366977919583793, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.664219214091402, 1);
  sqcRYGate(q, 1.0969169330200694, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.03326473271511572, 1);
  sqcRYGate(q, 1.4348595279697516, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0984065358618942, 2);
  sqcRYGate(q, 0.6076712173272059, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5086062310442783, 2);
  sqcRYGate(q, -1.5356548300885562, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.162350654294923, 0);
  sqcRYGate(q, 2.7349796562990645, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0727095743455959, 0);
  sqcRYGate(q, -0.14947266760574252, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.034339312796030634, 0);
  sqcRYGate(q, 0.3142765694396221, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0088381091788525, 0);
  sqcRYGate(q, -1.7046628492163716, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3172823237475235, 0);
  sqcRYGate(q, -1.2462652984222622, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8467720833513148, 0);
  sqcRYGate(q, -2.8382202534499554, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6108707535311471, 1);
  sqcRYGate(q, 1.4520838768243263, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3270125145738922, 1);
  sqcRYGate(q, -1.313576813195983, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.305861200305422, 1);
  sqcRYGate(q, -2.37711039822072, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.577926830198133, 1);
  sqcRYGate(q, -0.7092116151193206, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.972002820179848, 2);
  sqcRYGate(q, -2.0672317952320247, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2485704519212053, 2);
  sqcRYGate(q, -2.6072463698206554, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5625309909474222, 0);
  sqcRYGate(q, 0.16704792788734887, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3403137894287172, 0);
  sqcRYGate(q, -2.0592733977309257, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9271126195195223, 0);
  sqcRYGate(q, -1.0334985913325174, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0895709989372462, 0);
  sqcRYGate(q, 1.7753128482298863, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.36833920119809616, 0);
  sqcRYGate(q, 1.8484237136378683, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.33568255238973155, 0);
  sqcRYGate(q, 1.5505558712489966, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6930574388770888, 1);
  sqcRYGate(q, -1.2575238455064683, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.04574312728586083, 1);
  sqcRYGate(q, -0.9012193861223476, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0983041445101172, 1);
  sqcRYGate(q, -1.7308216101135159, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9088559882005239, 1);
  sqcRYGate(q, -2.917618356911625, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.384299133854495, 2);
  sqcRYGate(q, -0.29430041674992646, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4224851374592173, 2);
  sqcRYGate(q, 1.1227078439254745, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4993017771199531, 0);
  sqcRYGate(q, 0.5629435813177953, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0784230832711748, 0);
  sqcRYGate(q, 0.7296882121413029, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.448473469502766, 0);
  sqcRYGate(q, -2.005190663923348, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3938519383361785, 0);
  sqcRYGate(q, 1.181159657513545, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8640644662099222, 0);
  sqcRYGate(q, 2.8512319148205423, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0294706709143098, 0);
  sqcRYGate(q, 2.214213335109857, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.349360243340453, 1);
  sqcRYGate(q, 2.7576943321510017, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.11828332107218875, 1);
  sqcRYGate(q, 0.1739887545737176, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4817483596212488, 1);
  sqcRYGate(q, 0.7849380771193079, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.14875131607040545, 1);
  sqcRYGate(q, -2.317096365783962, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4812885305656902, 2);
  sqcRYGate(q, 1.1646851354394432, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1800899026473284, 2);
  sqcRYGate(q, 0.7389260359972577, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.439654786793604, 0);
  sqcRYGate(q, 0.6805855687825613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.89272549814895, 0);
  sqcRYGate(q, -1.0908197499566388, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.295694177579481, 0);
  sqcRYGate(q, 1.6304376948917705, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9957989564041734, 0);
  sqcRYGate(q, 2.952530272425961, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.10765931596107085, 0);
  sqcRYGate(q, 0.21897985517555174, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.549268503290407, 0);
  sqcRYGate(q, 2.221405850486515, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7623434844606738, 1);
  sqcRYGate(q, -2.242148556849714, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.29251202775614443, 1);
  sqcRYGate(q, 1.1087120382601885, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.769467921293402, 1);
  sqcRYGate(q, 1.1658933979143278, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8591662404053011, 1);
  sqcRYGate(q, -1.9423555850853194, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2255577763157157, 2);
  sqcRYGate(q, -1.198130443699788, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9197313514316496, 2);
  sqcRYGate(q, -1.642604308066491, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5804193538066884, 0);
  sqcRYGate(q, -0.03948931881661454, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6063619758536047, 0);
  sqcRYGate(q, -0.8999740791002195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5320567995803556, 0);
  sqcRYGate(q, 2.3556069921833727, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.052303432899996, 0);
  sqcRYGate(q, 0.6772255057522784, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.46782951361916814, 0);
  sqcRYGate(q, -1.6561445211247463, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.318375768388081, 0);
  sqcRYGate(q, -3.0816750211980337, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.380124997123376, 1);
  sqcRYGate(q, 1.8605518907943999, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7257599151893039, 1);
  sqcRYGate(q, 0.3703292413255845, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2350643059384145, 1);
  sqcRYGate(q, -1.4262950970002741, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.44089276732184, 1);
  sqcRYGate(q, -2.4219111263053867, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5209239850532492, 2);
  sqcRYGate(q, 1.6885739581496129, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3226208517712518, 2);
  sqcRYGate(q, 1.942971663747556, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7530619403224168, 0);
  sqcRYGate(q, 3.1024673373342138, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3568985918862184, 0);
  sqcRYGate(q, 2.373796133353664, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9057625016317423, 0);
  sqcRYGate(q, 1.146372422000814, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.026615349286550464, 0);
  sqcRYGate(q, 1.967761605451658, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.347177157290189, 0);
  sqcRYGate(q, 2.300151449271142, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8176064703842639, 0);
  sqcRYGate(q, -1.7792085313203616, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.08126732838415544, 1);
  sqcRYGate(q, 2.8968047721138768, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6440274880355568, 1);
  sqcRYGate(q, 1.3161129851228708, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5310048896018049, 1);
  sqcRYGate(q, -1.5666788321338252, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8271129783594953, 1);
  sqcRYGate(q, -0.87766046766758, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.1242632401048573, 2);
  sqcRYGate(q, 1.046179080788641, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.05956851706800493, 2);
  sqcRYGate(q, -0.43261689850758395, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.533149958260052, 0);
  sqcRYGate(q, 0.0061392051302472115, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7085042988465897, 0);
  sqcRYGate(q, 2.452143023390522, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9765821720741674, 0);
  sqcRYGate(q, -0.6568400898760444, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.088928254468441, 0);
  sqcRYGate(q, 1.7386655002729547, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1722002128282067, 0);
  sqcRYGate(q, -1.0905516820677366, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9226539895616384, 0);
  sqcRYGate(q, -0.8403627625066168, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6025532350448026, 1);
  sqcRYGate(q, 2.935980934266122, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.45678584221411095, 1);
  sqcRYGate(q, 2.814320281472463, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.772953090694135, 1);
  sqcRYGate(q, -1.2874658947921285, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.692059551967051, 1);
  sqcRYGate(q, -1.5401456591348517, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9366660226638617, 2);
  sqcRYGate(q, -1.8135942623292574, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4390713866215248, 2);
  sqcRYGate(q, -1.7660751691916898, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6337724155787318, 0);
  sqcRYGate(q, 0.6141240066358077, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.762429967238031, 0);
  sqcRYGate(q, 1.1361233873060512, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2121178863171558, 0);
  sqcRYGate(q, 0.6386029772873637, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3149581875418974, 0);
  sqcRYGate(q, -1.5045410325106106, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2296978596193977, 0);
  sqcRYGate(q, 0.09570986135226436, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.844270738205926, 0);
  sqcRYGate(q, -2.0075876282206906, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0876856878483006, 1);
  sqcRYGate(q, 0.49572207383988065, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8304938087366622, 1);
  sqcRYGate(q, -2.3412279379842165, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.067592110519765, 1);
  sqcRYGate(q, 2.5938841531172643, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4088977164307052, 1);
  sqcRYGate(q, 0.9649196448320057, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0605530799672707, 2);
  sqcRYGate(q, -1.9683682687003563, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5806156388182151, 2);
  sqcRYGate(q, 2.7149524850652456, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.17397219398174, 0);
  sqcRYGate(q, -0.4991136909307557, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9154267264554896, 0);
  sqcRYGate(q, 1.5967211157440901, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2680482518631955, 0);
  sqcRYGate(q, -2.405303293145279, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6682656162684255, 0);
  sqcRYGate(q, 0.5974878572324798, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4365028319988022, 0);
  sqcRYGate(q, -2.2906502554458403, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2192274815006559, 0);
  sqcRYGate(q, -3.0320145024708864, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6060169615591908, 1);
  sqcRYGate(q, 0.0610111048868216, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4330009530045702, 1);
  sqcRYGate(q, 0.08184018022703138, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5022988038968226, 1);
  sqcRYGate(q, 1.583172258040096, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.396074951256201, 1);
  sqcRYGate(q, -1.4227425856446567, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9341057371054082, 2);
  sqcRYGate(q, 2.081265193430972, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9214134943555115, 2);
  sqcRYGate(q, -1.832219781833382, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.43593791400740134, 0);
  sqcRYGate(q, 1.6913112940703785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0339534220061637, 0);
  sqcRYGate(q, -0.3827130927830058, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.067887890015061, 0);
  sqcRYGate(q, 1.1506664400580453, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7700964482848764, 0);
  sqcRYGate(q, 2.978085166020039, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.17719421103815278, 0);
  sqcRYGate(q, -2.2112756777670715, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.06369081344696159, 0);
  sqcRYGate(q, 2.1486398811719947, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5802564765740446, 1);
  sqcRYGate(q, 2.041166622523386, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1639479563047237, 1);
  sqcRYGate(q, -1.4733636702604178, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.037392516438680794, 1);
  sqcRYGate(q, -2.71770635563284, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6753617455811174, 1);
  sqcRYGate(q, 0.18422411471008807, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.352690956305655, 2);
  sqcRYGate(q, -3.1393886341255284, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0482916083957712, 2);
  sqcRYGate(q, 1.0634931674572297, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8151719394631807, 0);
  sqcRYGate(q, 1.713770738640042, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5906671987177292, 0);
  sqcRYGate(q, -1.672397537761767, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2654434329773772, 0);
  sqcRYGate(q, -0.4783229310183134, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1705538994352658, 0);
  sqcRYGate(q, -2.8695258214420134, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.25899156767078, 0);
  sqcRYGate(q, 2.6117777765676484, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7013029317837408, 0);
  sqcRYGate(q, -0.15254507137245824, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0020465935712437, 1);
  sqcRYGate(q, 0.5797602058380052, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.737214053932346, 1);
  sqcRYGate(q, 2.9174745020310353, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6416525754900126, 1);
  sqcRYGate(q, 0.6562631516631198, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5973167996211988, 1);
  sqcRYGate(q, -1.7641156412157672, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6527920828848828, 2);
  sqcRYGate(q, -2.496843226711335, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7483038898807313, 2);
  sqcRYGate(q, 2.9786233997760525, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.31090715337616, 0);
  sqcRYGate(q, 3.019812456402331, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1218783125347276, 0);
  sqcRYGate(q, 1.286556126573891, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0992163298927458, 0);
  sqcRYGate(q, 2.256599972225018, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.32315857522129515, 0);
  sqcRYGate(q, -3.1069484245062546, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.897995332326881, 0);
  sqcRYGate(q, -2.7569316630071317, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.932110231918607, 0);
  sqcRYGate(q, -1.754691729460526, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5669526200361126, 1);
  sqcRYGate(q, 0.9195240080315195, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7042913751026217, 1);
  sqcRYGate(q, -2.7737217731883095, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.864318599736788, 1);
  sqcRYGate(q, 1.208074051799971, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2728596428720891, 1);
  sqcRYGate(q, -1.0369528511708506, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.142902379326778, 2);
  sqcRYGate(q, 2.480308741707872, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8301293026394587, 2);
  sqcRYGate(q, 2.349593427543151, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5530447091111119, 0);
  sqcRYGate(q, -1.024849292186926, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3311968769063, 0);
  sqcRYGate(q, -0.08039532461244914, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.12647093356425732, 0);
  sqcRYGate(q, 0.5064736270834119, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6434423307606337, 0);
  sqcRYGate(q, 0.8939097411991539, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1448259223148005, 0);
  sqcRYGate(q, -2.3702178727711, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.419326274907669, 0);
  sqcRYGate(q, -0.674105432405927, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8822994130013646, 1);
  sqcRYGate(q, -2.292026765000262, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.435935293909269, 1);
  sqcRYGate(q, 1.8534663679655927, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.47737614012709706, 1);
  sqcRYGate(q, -0.3765391598266209, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3924355249989091, 1);
  sqcRYGate(q, -2.960685290657366, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6203498360933333, 2);
  sqcRYGate(q, -1.9591640002073538, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.916508140023666, 2);
  sqcRYGate(q, 3.0392117751868835, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7765063796415945, 0);
  sqcRYGate(q, 1.5047008481956237, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4226496101466957, 0);
  sqcRYGate(q, -2.801763391170794, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.35977969824237, 0);
  sqcRYGate(q, 1.850480960422595, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0403983292915733, 0);
  sqcRYGate(q, -1.3014233968710753, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9634403939667218, 0);
  sqcRYGate(q, -0.6793088846613146, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1545526223608626, 0);
  sqcRYGate(q, -0.8516245648720631, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.08242571870397156, 1);
  sqcRYGate(q, -0.3202891608425176, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.761785053459517, 1);
  sqcRYGate(q, 1.4668423272173303, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0693786061299804, 1);
  sqcRYGate(q, -0.9475922574188633, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.17595316959554008, 1);
  sqcRYGate(q, 0.11607494903095006, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8924953231779744, 2);
  sqcRYGate(q, -0.7470988843106106, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.192829312139353, 2);
  sqcRYGate(q, 0.8976739659332704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5555197914745066, 0);
  sqcRYGate(q, 1.2997268696886832, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.548065788119781, 0);
  sqcRYGate(q, 0.7231068675066424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.003595027944881757, 0);
  sqcRYGate(q, -0.23700034327733568, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.545573155712135, 0);
  sqcRYGate(q, 1.7703904326995508, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3112756541396176, 0);
  sqcRYGate(q, -0.5654472451929023, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5236778675478746, 0);
  sqcRYGate(q, -1.8846566532840925, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.262088217671453, 1);
  sqcRYGate(q, 0.6898472491615557, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2875004183164775, 1);
  sqcRYGate(q, 2.3133395071299176, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2346585060122903, 1);
  sqcRYGate(q, 1.3198047100201862, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.16092169639580445, 1);
  sqcRYGate(q, -2.847941052411419, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7364374757261611, 2);
  sqcRYGate(q, -0.34763780648901804, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4429436350217753, 2);
  sqcRYGate(q, -0.8427497172641024, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9355501613720376, 0);
  sqcRYGate(q, -0.10702925507798366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3519016848874656, 0);
  sqcRYGate(q, -2.1449459070135966, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2765238129322631, 0);
  sqcRYGate(q, -0.9208741524024253, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8841607206744824, 0);
  sqcRYGate(q, -0.23689215657159313, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.262395345828886, 0);
  sqcRYGate(q, -1.8935657284733654, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.291693505599488, 0);
  sqcRYGate(q, 0.7480315404236654, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3921989155834931, 1);
  sqcRYGate(q, 1.478680762210149, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.23443349599743962, 1);
  sqcRYGate(q, 0.30725393478688545, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.314232850657165, 1);
  sqcRYGate(q, 0.7249376369230376, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.467724219847144, 1);
  sqcRYGate(q, 1.921634180190334, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.208072694298285, 2);
  sqcRYGate(q, 2.3394249044150177, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.19994465066154649, 2);
  sqcRYGate(q, 2.1403825319743284, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.021316223523813065, 0);
  sqcRYGate(q, -1.4889516514924548, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3977588136716013, 0);
  sqcRYGate(q, 2.133892982022866, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.413797103571786, 0);
  sqcRYGate(q, 1.2957471361836763, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5159287396955574, 0);
  sqcRYGate(q, 2.101055507374337, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9444920918391724, 0);
  sqcRYGate(q, -2.684967076422245, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8168738948474132, 0);
  sqcRYGate(q, -0.05589080678496661, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6003832356576115, 1);
  sqcRYGate(q, -2.994541097448095, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0509073186489166, 1);
  sqcRYGate(q, 0.7654969554421264, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.563235337378715, 1);
  sqcRYGate(q, -2.777113823871912, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8907865536359623, 1);
  sqcRYGate(q, 2.5886881996637086, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2596240069167672, 2);
  sqcRYGate(q, 1.7576142744702317, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2038616748362152, 2);
  sqcRYGate(q, -0.09905126622535075, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.969228936647581, 0);
  sqcRYGate(q, 3.059947633599126, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9416991543112786, 0);
  sqcRYGate(q, 1.8577137661584906, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.500996222678107, 0);
  sqcRYGate(q, 1.2330469692836608, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9067358968273935, 0);
  sqcRYGate(q, -2.5244708119577846, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.089669168333199, 0);
  sqcRYGate(q, 1.4220493446414995, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.327435358720014, 0);
  sqcRYGate(q, 2.8007659022019014, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9124296523198451, 1);
  sqcRYGate(q, -1.6352371277031952, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.19464631262414905, 1);
  sqcRYGate(q, -1.2675935971451402, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7183679663025835, 1);
  sqcRYGate(q, 2.1629250127434747, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7520270785874186, 1);
  sqcRYGate(q, -2.1656725936735164, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.488663374025462, 2);
  sqcRYGate(q, -1.4567057764494464, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.001872365847764, 2);
  sqcRYGate(q, -2.5117990808804436, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5731730363110793, 0);
  sqcRYGate(q, -0.024959786520212468, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.060442188871384, 0);
  sqcRYGate(q, 1.2103546182674194, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.415000312454471, 0);
  sqcRYGate(q, -1.6714055886416457, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.668968282544551, 0);
  sqcRYGate(q, 2.979418911670058, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9816509384164473, 0);
  sqcRYGate(q, 2.3028534287222704, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6742342578679352, 0);
  sqcRYGate(q, 1.0250498868772526, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7040227865039537, 1);
  sqcRYGate(q, 2.239010545667098, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6244647023923366, 1);
  sqcRYGate(q, -0.9883842939793901, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.088369613492615, 1);
  sqcRYGate(q, 2.915202617211717, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.366813738300664, 1);
  sqcRYGate(q, -2.1254204045392857, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5084895331561023, 2);
  sqcRYGate(q, 2.1927221007765043, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.033392837484355, 2);
  sqcRYGate(q, -1.3685463705824858, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3161933427883237, 0);
  sqcRYGate(q, -2.360351850410332, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6064524331757379, 0);
  sqcRYGate(q, 1.278044375928015, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5248133604211556, 0);
  sqcRYGate(q, 0.35162982899052864, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9503652626570878, 0);
  sqcRYGate(q, -2.728116468646355, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7584688439751082, 0);
  sqcRYGate(q, -0.831129710552321, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3359440125723525, 0);
  sqcRYGate(q, -0.981710030312923, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.49444603301756906, 1);
  sqcRYGate(q, 1.5387768451929418, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0533053121526743, 1);
  sqcRYGate(q, -1.4919620133027802, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4638273150711052, 1);
  sqcRYGate(q, -2.6641956442926418, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.83289984903554, 1);
  sqcRYGate(q, 1.1621998368151334, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.49014991761444493, 2);
  sqcRYGate(q, -2.1345602624981153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6509969028647278, 2);
  sqcRYGate(q, -0.11665001000272479, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9779275890258945, 0);
  sqcRYGate(q, -0.6945342136187662, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.117586742598533, 0);
  sqcRYGate(q, 1.0375498947268227, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.200641017719759, 0);
  sqcRYGate(q, 0.7015494476636439, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5399687145662195, 0);
  sqcRYGate(q, -0.7159804811915722, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6815652488264616, 0);
  sqcRYGate(q, -1.7987731359557175, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.010356988136075, 0);
  sqcRYGate(q, 0.5017766756218833, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5310746541786244, 1);
  sqcRYGate(q, -0.933477141056481, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.730473945951984, 1);
  sqcRYGate(q, 2.6138723758287363, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4866248073123094, 1);
  sqcRYGate(q, -3.0519915745315873, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9105260699743325, 1);
  sqcRYGate(q, -0.22083099405607645, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.866963052258984, 2);
  sqcRYGate(q, 1.926095026551127, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.09263596220687553, 2);
  sqcRYGate(q, -0.20900222472163957, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2814445928046653, 0);
  sqcRYGate(q, -0.4965054462450018, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0916979458964744, 0);
  sqcRYGate(q, -1.9661192075775866, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9906424026870012, 0);
  sqcRYGate(q, 0.9124573792640078, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2264467004834123, 0);
  sqcRYGate(q, -0.1211193607738342, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2827844369147634, 0);
  sqcRYGate(q, -0.9001230196135002, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4509334378690471, 0);
  sqcRYGate(q, -0.9344033510598774, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.21329768773756758, 1);
  sqcRYGate(q, -2.7577298099914014, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.07590295394475532, 1);
  sqcRYGate(q, -0.9286281848856428, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.499254034432559, 1);
  sqcRYGate(q, -1.7413212404218061, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3556547891803348, 1);
  sqcRYGate(q, 1.9470307998547849, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.340769376392583, 2);
  sqcRYGate(q, -1.814432848711836, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4805947111666207, 2);
  sqcRYGate(q, -1.9500929957210333, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.48819213816369533, 0);
  sqcRYGate(q, 3.057619758063412, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5119671516588946, 0);
  sqcRYGate(q, -2.6419559963773933, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4102931659011446, 0);
  sqcRYGate(q, -2.843198799401874, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5418818608768885, 0);
  sqcRYGate(q, 2.6684102544789066, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6662169771693927, 0);
  sqcRYGate(q, 0.12008522427204632, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.12670082584886178, 0);
  sqcRYGate(q, 2.857753289986278, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4009654649547531, 1);
  sqcRYGate(q, 1.0414349298291852, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.27171863542776, 1);
  sqcRYGate(q, -2.5334378947401692, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1399042314760837, 1);
  sqcRYGate(q, -1.187476299479595, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1757134630732828, 1);
  sqcRYGate(q, 0.701403637680427, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8998433650214874, 2);
  sqcRYGate(q, -2.507475988602266, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.859916046699525, 2);
  sqcRYGate(q, 0.8531910206940229, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6836493290695882, 0);
  sqcRYGate(q, 1.2808543173517584, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.725983431681044, 0);
  sqcRYGate(q, -2.201716888585037, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1153652140773453, 0);
  sqcRYGate(q, -0.04051213676972676, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4693983049252983, 0);
  sqcRYGate(q, 0.6626725214723633, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9784146133866267, 0);
  sqcRYGate(q, -1.701536104390609, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9672185148852224, 0);
  sqcRYGate(q, 2.904896766846237, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9463296714633715, 1);
  sqcRYGate(q, 0.16838730070528435, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6795364944412007, 1);
  sqcRYGate(q, 3.042193916210835, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7630699913070957, 1);
  sqcRYGate(q, 0.2033868042116889, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8219203764601307, 1);
  sqcRYGate(q, -2.261289670836655, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.02860165011326465, 2);
  sqcRYGate(q, -2.0230065181897388, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3393510414761433, 2);
  sqcRYGate(q, -0.2803146792367386, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.899160369051211, 0);
  sqcRYGate(q, 2.0696708370609986, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.078065439417408, 0);
  sqcRYGate(q, -0.8630950253900173, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.22444855706969932, 0);
  sqcRYGate(q, -0.7431815563401951, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0526680519024856, 0);
  sqcRYGate(q, 2.088206249941428, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0591889754799257, 0);
  sqcRYGate(q, -0.19772438731951159, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9366323770796328, 0);
  sqcRYGate(q, 2.5483770523839384, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0204778443880707, 1);
  sqcRYGate(q, -0.5787667102668417, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1145125788156904, 1);
  sqcRYGate(q, 1.9730144454984946, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.428427578721166, 1);
  sqcRYGate(q, -3.105476176423773, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1561211080344904, 1);
  sqcRYGate(q, -0.0629328496192252, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2189566129048908, 2);
  sqcRYGate(q, -1.1122531963833513, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.830784432188962, 2);
  sqcRYGate(q, -0.4188351646989533, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4976943667547344, 0);
  sqcRYGate(q, -2.2955755368739554, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2996042729216565, 0);
  sqcRYGate(q, -1.0063841520734842, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.170624837046107, 0);
  sqcRYGate(q, -2.0653860446213517, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7615702745817126, 0);
  sqcRYGate(q, 2.8658294538509104, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5373407119804504, 0);
  sqcRYGate(q, -1.4246445904681204, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8549865415700195, 0);
  sqcRYGate(q, 0.2404267204611914, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8157217598331311, 1);
  sqcRYGate(q, 0.6696163739415326, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5860998600771827, 1);
  sqcRYGate(q, 1.0288451322091132, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.30189728676345773, 1);
  sqcRYGate(q, -2.7111979517124563, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1754634318124342, 1);
  sqcRYGate(q, -1.1960881842503035, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.014407640581429959, 2);
  sqcRYGate(q, -2.8479257563369145, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.911470806396568, 2);
  sqcRYGate(q, -2.1532233020716123, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8741285088805706, 0);
  sqcRYGate(q, -1.6277977754782338, 1);
  sqcRYGate(q, 3.046972216768112, 2);
  sqcRYGate(q, 2.0783676810448197, 3);

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
