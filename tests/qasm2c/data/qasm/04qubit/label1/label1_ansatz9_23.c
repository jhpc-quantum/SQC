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

  sqcRYGate(q, 2.657148811509061, 0);
  sqcRYGate(q, 2.166526447032565, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5559714301361636, 0);
  sqcRYGate(q, 0.753071784454693, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4798136601952043, 2);
  sqcRYGate(q, -3.085087003572879, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3631150101137182, 2);
  sqcRYGate(q, 1.310045515321355, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9171240554984729, 0);
  sqcRYGate(q, -0.25980303680657624, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9613246655009369, 0);
  sqcRYGate(q, 0.5146128402864969, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7560031553745903, 1);
  sqcRYGate(q, -0.37418172828016427, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.270822183067162, 1);
  sqcRYGate(q, -0.2397914155916153, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3831015366133443, 0);
  sqcRYGate(q, -0.9902383221363023, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.16904865227628724, 0);
  sqcRYGate(q, 0.28707193450205626, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6311893546190932, 1);
  sqcRYGate(q, -2.686748488109876, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.261394794513196, 1);
  sqcRYGate(q, 0.15289579060807468, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6565848413714988, 0);
  sqcRYGate(q, -1.159560330401324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.497606283596831, 0);
  sqcRYGate(q, 1.9587061972978628, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8608974674734116, 2);
  sqcRYGate(q, -1.4443202598851697, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6591695265066457, 2);
  sqcRYGate(q, 2.202044128824004, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.618716138013989, 0);
  sqcRYGate(q, 2.8053613516192026, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.44708993598092833, 0);
  sqcRYGate(q, -1.5775457013660699, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7350203081030835, 1);
  sqcRYGate(q, 1.1470086349194537, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.766656715389423, 1);
  sqcRYGate(q, 2.381104925802644, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.22045551119762433, 0);
  sqcRYGate(q, -2.57018735463808, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.2696056816830241, 0);
  sqcRYGate(q, -1.13487433059458, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0040557776707195, 1);
  sqcRYGate(q, -1.7351787499787088, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5174590984733871, 1);
  sqcRYGate(q, 1.4380919369091028, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3389948043245245, 0);
  sqcRYGate(q, -0.8474866200635566, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0308032051449771, 0);
  sqcRYGate(q, -0.70595862436637, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.104956764613191, 2);
  sqcRYGate(q, -2.68448613498677, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5567832987510863, 2);
  sqcRYGate(q, -2.8788932654677746, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.890941982988251, 0);
  sqcRYGate(q, 0.6323331674494712, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.352432448442201, 0);
  sqcRYGate(q, -2.3287214016879703, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.10475082603595989, 1);
  sqcRYGate(q, 1.326126015498209, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5874456874105938, 1);
  sqcRYGate(q, -1.7100548554973303, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6172908920712956, 0);
  sqcRYGate(q, -2.1337682811451093, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8696143249484461, 0);
  sqcRYGate(q, 0.0016862816386829813, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0408952311606965, 1);
  sqcRYGate(q, 1.729691876373316, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.414270165831071, 1);
  sqcRYGate(q, -1.4090436381930491, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3489262630836079, 0);
  sqcRYGate(q, -0.8505189605919172, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.870724290974689, 0);
  sqcRYGate(q, 2.958605623415587, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8625680399790223, 2);
  sqcRYGate(q, 1.8416829769050294, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.039793086822695, 2);
  sqcRYGate(q, 1.9786109741396078, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5958635945824935, 0);
  sqcRYGate(q, 0.04527382050828228, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7574307207730735, 0);
  sqcRYGate(q, 3.0612298176082797, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4894091663830267, 1);
  sqcRYGate(q, -2.6201737654216757, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6940801013399618, 1);
  sqcRYGate(q, -2.6077939770532708, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.0005595878556669061, 0);
  sqcRYGate(q, -1.9454560744670335, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6419207819686912, 0);
  sqcRYGate(q, 1.4903506234396677, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5997417213728422, 1);
  sqcRYGate(q, -2.530023368472143, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3339971819234193, 1);
  sqcRYGate(q, 2.1820418214809134, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7801013448556233, 0);
  sqcRYGate(q, 0.9558445986066874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.57850237043772, 0);
  sqcRYGate(q, -0.2900959019176796, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0213089198578578, 2);
  sqcRYGate(q, 1.2154433080600622, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4776351341295513, 2);
  sqcRYGate(q, 0.6174163354842896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.29467182320341895, 0);
  sqcRYGate(q, 2.520854217383805, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.777641877439071, 0);
  sqcRYGate(q, 2.4025550227489565, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8185997758709267, 1);
  sqcRYGate(q, -2.5643612343569244, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.594649515277699, 1);
  sqcRYGate(q, -0.36868635089674395, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5947239591672357, 0);
  sqcRYGate(q, 1.8282288628139147, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.886176095520999, 0);
  sqcRYGate(q, 0.38717751345322554, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2241624268470739, 1);
  sqcRYGate(q, -2.203949911356288, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4620902706819576, 1);
  sqcRYGate(q, -0.006579619121060331, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1591196644599373, 0);
  sqcRYGate(q, -2.1038470053280944, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.48704726960765826, 0);
  sqcRYGate(q, -2.537466383198372, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.09033948991517372, 2);
  sqcRYGate(q, 0.26511679476989514, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9570714746168916, 2);
  sqcRYGate(q, 0.20401077195987624, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7072439766025884, 0);
  sqcRYGate(q, -1.467631003204132, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4175006157740135, 0);
  sqcRYGate(q, 1.2896156073980103, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.19439795964120202, 1);
  sqcRYGate(q, -2.041491602355195, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7994712277449539, 1);
  sqcRYGate(q, 1.9764496068651747, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4079852433562707, 0);
  sqcRYGate(q, 1.0983189737081511, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.10078497786895614, 0);
  sqcRYGate(q, -2.0371995931050986, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.250790967410702, 1);
  sqcRYGate(q, -2.0322991538977586, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5105963240696316, 1);
  sqcRYGate(q, -2.8033467615507024, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.140238480393586, 0);
  sqcRYGate(q, -1.314637947564873, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.714074698603326, 0);
  sqcRYGate(q, -2.4571252654897036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8315804982546577, 2);
  sqcRYGate(q, 1.7144337271244279, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1774177907911068, 2);
  sqcRYGate(q, -2.757920780116047, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.378324128401273, 0);
  sqcRYGate(q, 2.6469763344669395, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.760676085481461, 0);
  sqcRYGate(q, -1.968233134210165, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3043933613066088, 1);
  sqcRYGate(q, 0.19509751963873279, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2792003276500958, 1);
  sqcRYGate(q, 0.8789796148174888, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7808737030167525, 0);
  sqcRYGate(q, -0.3644260262339465, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6773781582165304, 0);
  sqcRYGate(q, -0.8142342555526066, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.848076101410553, 1);
  sqcRYGate(q, -0.6174701211618547, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.920812309725115, 1);
  sqcRYGate(q, -0.5202426805551075, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.07044832584667121, 0);
  sqcRYGate(q, 0.7928840802087109, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0278355486709656, 0);
  sqcRYGate(q, 0.14419394709911515, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0484842637017, 2);
  sqcRYGate(q, -3.0707937010594866, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.853186463349231, 2);
  sqcRYGate(q, -2.13462034086219, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2585096136947257, 0);
  sqcRYGate(q, -0.1619025524859606, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.066145205696576, 0);
  sqcRYGate(q, 0.012519342933737574, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1551864945322956, 1);
  sqcRYGate(q, -0.9934192385823435, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6961501441668887, 1);
  sqcRYGate(q, 2.911377041493801, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5051014334896697, 0);
  sqcRYGate(q, 2.6161637110391753, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.05058735232928, 0);
  sqcRYGate(q, -2.024311055114728, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7955535555713364, 1);
  sqcRYGate(q, 2.979054756034139, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2846670577875994, 1);
  sqcRYGate(q, -2.482978184130959, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.649223671384834, 0);
  sqcRYGate(q, -0.12353339456299692, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5474463038104276, 0);
  sqcRYGate(q, -2.186605945144847, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.059811027738172706, 2);
  sqcRYGate(q, -2.5899716088646834, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.726533567909618, 2);
  sqcRYGate(q, -1.3764654108432761, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6243943898787383, 0);
  sqcRYGate(q, -2.11269456350212, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7133725898323044, 0);
  sqcRYGate(q, -0.09772967827277884, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2174512821477439, 1);
  sqcRYGate(q, 0.2675723095280951, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5527122044584782, 1);
  sqcRYGate(q, -0.9570860394174208, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.921598620994578, 0);
  sqcRYGate(q, 0.2966302919260175, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.999766029532637, 0);
  sqcRYGate(q, 2.6886107087060656, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2297811674774433, 1);
  sqcRYGate(q, -1.2004558402432817, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7916250671738383, 1);
  sqcRYGate(q, -1.1941871209550712, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6889760043116935, 0);
  sqcRYGate(q, -1.3250830389202886, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8282256615065755, 0);
  sqcRYGate(q, 2.0700449266242726, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4858722060608356, 2);
  sqcRYGate(q, 0.3030236422905172, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.950825361156209, 2);
  sqcRYGate(q, -2.0184975514492374, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1210588257861183, 0);
  sqcRYGate(q, -1.709971992998281, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5065582372460466, 0);
  sqcRYGate(q, 0.7926336577869639, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.14777216992230108, 1);
  sqcRYGate(q, 1.6316583159797151, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3644111390195783, 1);
  sqcRYGate(q, 1.2380924384683096, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9920928825326412, 0);
  sqcRYGate(q, 0.4560205481158484, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4806180977074552, 0);
  sqcRYGate(q, 1.1655954301462588, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9013974691550644, 1);
  sqcRYGate(q, 1.1449140710665922, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.101862555408624, 1);
  sqcRYGate(q, -0.899625808526774, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1376404488370666, 0);
  sqcRYGate(q, 0.3325194898836852, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0167235224559397, 0);
  sqcRYGate(q, 2.127822729826994, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.03946305451713972, 2);
  sqcRYGate(q, -0.1257939262794876, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8400208829596107, 2);
  sqcRYGate(q, 0.2988807534611671, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3437260769947827, 0);
  sqcRYGate(q, -2.493314348017236, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3021648078328105, 0);
  sqcRYGate(q, 0.13096806078942086, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2288228672450341, 1);
  sqcRYGate(q, 2.6961510202691636, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4008587770118206, 1);
  sqcRYGate(q, -3.0300704386417943, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1706302202938925, 0);
  sqcRYGate(q, -2.6423305391510743, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.33434696120021545, 0);
  sqcRYGate(q, -2.4405004907848897, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.337665895836929, 1);
  sqcRYGate(q, 2.258019906352023, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.052415408021682, 1);
  sqcRYGate(q, 1.6308197149704264, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.944859720667283, 0);
  sqcRYGate(q, -1.079975336611418, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7932642788892377, 0);
  sqcRYGate(q, 0.3665688329336269, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.683905181176346, 2);
  sqcRYGate(q, -1.6227772713806239, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9202631022758294, 2);
  sqcRYGate(q, -0.8334996434240286, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.24858969978907758, 0);
  sqcRYGate(q, -1.8118195683785387, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1122713871837835, 0);
  sqcRYGate(q, -2.6654940984348867, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.307373653161361, 1);
  sqcRYGate(q, 1.1340685401545445, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.126135707407669, 1);
  sqcRYGate(q, -1.7661691864186553, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9877131293615657, 0);
  sqcRYGate(q, 1.3532776810943412, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.289871114811907, 0);
  sqcRYGate(q, 2.4142052631490305, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6765780149770713, 1);
  sqcRYGate(q, 1.2726420762433128, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0156604183932427, 1);
  sqcRYGate(q, -2.7981111614508016, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0850340194429187, 0);
  sqcRYGate(q, 0.7123739268966816, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1632275265264864, 0);
  sqcRYGate(q, -1.58612417475561, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4390715350775998, 2);
  sqcRYGate(q, 1.0979420202487313, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9949992944826906, 2);
  sqcRYGate(q, -2.7054592829594433, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.718646435009517, 0);
  sqcRYGate(q, 2.48150809618847, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9309953905114359, 0);
  sqcRYGate(q, 0.9145427365364993, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.49518662048424716, 1);
  sqcRYGate(q, 2.36625305125011, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9422382408735431, 1);
  sqcRYGate(q, -1.4083284635000255, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.0015924586286297782, 0);
  sqcRYGate(q, -1.9900867969716294, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0023509577157355, 0);
  sqcRYGate(q, 0.015164132158917099, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.601708449347648, 1);
  sqcRYGate(q, 1.260676456737528, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0269959022527755, 1);
  sqcRYGate(q, 1.3868152269468619, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.811908131926379, 0);
  sqcRYGate(q, 0.0956974051081522, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8392269855801144, 0);
  sqcRYGate(q, -2.872791031441309, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5425868369396056, 2);
  sqcRYGate(q, -1.3719355494263337, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8539102690945803, 2);
  sqcRYGate(q, -3.0324133296218583, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.28492132251710967, 0);
  sqcRYGate(q, -2.8981049428664485, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1284268976864116, 0);
  sqcRYGate(q, -0.7332342385024376, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5296814991058314, 1);
  sqcRYGate(q, -1.8018822749809131, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.16241881953018417, 1);
  sqcRYGate(q, -2.8836196988127387, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.92566549490562, 0);
  sqcRYGate(q, -1.143244207125336, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2964548033037078, 0);
  sqcRYGate(q, -0.5515172355779772, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.37012276354986134, 1);
  sqcRYGate(q, 2.0292341819604864, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.23366871088167773, 1);
  sqcRYGate(q, -1.6705544072663472, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.07031045882605191, 0);
  sqcRYGate(q, 0.7041434803835093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0797350515639845, 0);
  sqcRYGate(q, 2.109325690351385, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2528485561300844, 2);
  sqcRYGate(q, -0.6039651646159906, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.823598200217246, 2);
  sqcRYGate(q, -2.78966002117484, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7465521442817113, 0);
  sqcRYGate(q, -1.4971548007018072, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.671860022994795, 0);
  sqcRYGate(q, 2.421759055009012, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5500888080357509, 1);
  sqcRYGate(q, -1.1275733381607242, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5000670565897005, 1);
  sqcRYGate(q, 2.9853436476025372, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5971146716590003, 0);
  sqcRYGate(q, 0.7648504026561227, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5517643451963483, 0);
  sqcRYGate(q, -2.4769400863039235, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.3645455675829488, 1);
  sqcRYGate(q, -1.0933564909503062, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7540338114679042, 1);
  sqcRYGate(q, -3.0814312055246122, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5374600456304643, 0);
  sqcRYGate(q, 3.0002994892511494, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.548493459341334, 0);
  sqcRYGate(q, -0.3511117911100427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7365774036654296, 2);
  sqcRYGate(q, 0.4455233038091741, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6922918399456996, 2);
  sqcRYGate(q, -1.909097290055894, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8664553404007083, 0);
  sqcRYGate(q, -0.7671984036057564, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.878073861837537, 0);
  sqcRYGate(q, 2.131799847440968, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5548968336242215, 1);
  sqcRYGate(q, 1.1681415972117717, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6040624418357092, 1);
  sqcRYGate(q, -0.04148727162230159, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1395347886095633, 0);
  sqcRYGate(q, -1.0204709226214606, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7953148463805944, 0);
  sqcRYGate(q, 3.024409933480129, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8231367343008786, 1);
  sqcRYGate(q, -1.9225236163178114, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7365846235662588, 1);
  sqcRYGate(q, 0.25883759038895415, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5759337579229493, 0);
  sqcRYGate(q, -0.09066365083144406, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.261804984942529, 0);
  sqcRYGate(q, -0.9651522908981293, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.12268035605579808, 2);
  sqcRYGate(q, -1.964458573841232, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08575557801960121, 2);
  sqcRYGate(q, -1.7129484568542441, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8477994167521226, 0);
  sqcRYGate(q, 2.481557263978245, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9974035790841835, 0);
  sqcRYGate(q, -3.0799559732164536, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8707738195265229, 1);
  sqcRYGate(q, -1.3437815422215644, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7512649801794852, 1);
  sqcRYGate(q, 1.803337956772788, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.155597405128269, 0);
  sqcRYGate(q, -1.3248477889750365, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0810644221954355, 0);
  sqcRYGate(q, 1.0131504562877645, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0416438087161815, 1);
  sqcRYGate(q, 0.9406979347369129, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0054760525616198, 1);
  sqcRYGate(q, 1.1053714606864498, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4457316863072314, 0);
  sqcRYGate(q, 2.395708242573319, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4528914862376304, 0);
  sqcRYGate(q, 0.5919159104727133, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5180477711301228, 2);
  sqcRYGate(q, 2.5297990985238865, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1827701329197076, 2);
  sqcRYGate(q, 0.15415274658835987, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0526626074552765, 0);
  sqcRYGate(q, -0.45122791524782, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3972145642790754, 0);
  sqcRYGate(q, -1.9275831017497373, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.19122087521116596, 1);
  sqcRYGate(q, 3.117725670442096, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5689208319469765, 1);
  sqcRYGate(q, -2.3489482119593403, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.17175067255043142, 0);
  sqcRYGate(q, -1.6606739876004293, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.585386279130701, 0);
  sqcRYGate(q, 0.9349332832483251, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.273145805151932, 1);
  sqcRYGate(q, 0.12780435309752838, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4370668901583752, 1);
  sqcRYGate(q, -0.6659785662772411, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.281750711015518, 0);
  sqcRYGate(q, 0.8600318058170514, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.580748654252373, 0);
  sqcRYGate(q, 0.9593338938782674, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4097881830055508, 2);
  sqcRYGate(q, 0.15345891775028786, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6032312500532904, 2);
  sqcRYGate(q, -0.26290610787628926, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1286192492044201, 0);
  sqcRYGate(q, -1.4599847279327829, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.251676724302236, 0);
  sqcRYGate(q, 0.17832010364727818, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7332893125167201, 1);
  sqcRYGate(q, 1.8976595307062905, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6459425658399478, 1);
  sqcRYGate(q, -1.818580756402478, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4439110735897382, 0);
  sqcRYGate(q, 2.3190504357870827, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.317549525966136, 0);
  sqcRYGate(q, -2.9316160562159737, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6036301813189637, 1);
  sqcRYGate(q, -0.9118081407559337, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1356240914963287, 1);
  sqcRYGate(q, -1.6913354421468718, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.197477853703508, 0);
  sqcRYGate(q, -2.317190833218634, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.423101036242929, 0);
  sqcRYGate(q, 2.0326353039759137, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6886260181238235, 2);
  sqcRYGate(q, 1.329251617451738, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1650417566483067, 2);
  sqcRYGate(q, 1.6074266712479015, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4975702995496216, 0);
  sqcRYGate(q, 1.486325101705777, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2919310963433217, 0);
  sqcRYGate(q, 1.4956890010542079, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6670599921145034, 1);
  sqcRYGate(q, -1.8023418342043072, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.405391611023, 1);
  sqcRYGate(q, -2.7675023780979076, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.24653147077344414, 0);
  sqcRYGate(q, -2.036987570700953, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.356516121641385, 0);
  sqcRYGate(q, 1.265668858957711, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8327717552261076, 1);
  sqcRYGate(q, 2.422341679114044, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1942439558183235, 1);
  sqcRYGate(q, 0.6466240604386639, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0892170818351907, 0);
  sqcRYGate(q, 1.9608114228642362, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3710968258285168, 0);
  sqcRYGate(q, 1.414836402531705, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9342574672339845, 2);
  sqcRYGate(q, 0.9308196301046907, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9559200329679776, 2);
  sqcRYGate(q, -0.2191560974518999, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3302785257899048, 0);
  sqcRYGate(q, -2.0722910657291553, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6157059045321254, 0);
  sqcRYGate(q, 1.9577123434236603, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5960384082452315, 1);
  sqcRYGate(q, -0.6843830909928571, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0860351849744934, 1);
  sqcRYGate(q, -1.1900649860866697, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1520711218330186, 0);
  sqcRYGate(q, -0.5317340745713954, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7577088078777487, 0);
  sqcRYGate(q, -1.3697327430524737, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.652336260747661, 1);
  sqcRYGate(q, 0.6355128620888122, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.19192398630389945, 1);
  sqcRYGate(q, -0.40006417036722386, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1344581859621075, 0);
  sqcRYGate(q, -2.513628492740975, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.212153567668275, 0);
  sqcRYGate(q, 0.019739616064934882, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.658510862905221, 2);
  sqcRYGate(q, -0.45885979804283095, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9566590855973989, 2);
  sqcRYGate(q, 2.1799002450615834, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4901162821758484, 0);
  sqcRYGate(q, 0.1639080520992021, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4390475951319388, 0);
  sqcRYGate(q, 0.47080928457963367, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.840222127579226, 1);
  sqcRYGate(q, 2.3351435449849434, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.886486739560647, 1);
  sqcRYGate(q, -1.911007281972595, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.131443502059084, 0);
  sqcRYGate(q, -0.39742869852638146, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2556372952794992, 0);
  sqcRYGate(q, -1.8318774609372372, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4325508995933065, 1);
  sqcRYGate(q, 2.2464501784221973, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7337440405900664, 1);
  sqcRYGate(q, -0.911349693819455, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7995232012748426, 0);
  sqcRYGate(q, 1.5934049200688643, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7646945729411385, 0);
  sqcRYGate(q, 0.6749755296836746, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.668789103006746, 2);
  sqcRYGate(q, -2.9235000010511656, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4831976468066874, 2);
  sqcRYGate(q, 0.9795830369117783, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.151905801483016, 0);
  sqcRYGate(q, 2.6777147391039966, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4015075349019717, 0);
  sqcRYGate(q, -0.5247653932670694, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5206778375828107, 1);
  sqcRYGate(q, 1.3344119009443949, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.555248358801195, 1);
  sqcRYGate(q, -1.4086386629272818, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9837405301468464, 0);
  sqcRYGate(q, -0.4828734522643794, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.1272427684020587, 0);
  sqcRYGate(q, -1.6888548022245726, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7042104456303728, 1);
  sqcRYGate(q, -2.643951160303758, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3695066931265085, 1);
  sqcRYGate(q, -1.5079467248209486, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5714310791291166, 0);
  sqcRYGate(q, 1.4270531231913341, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3108504010866695, 0);
  sqcRYGate(q, 0.29981983411533353, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4624101421068336, 2);
  sqcRYGate(q, -0.09705707725833435, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6118994358813898, 2);
  sqcRYGate(q, 2.1909812482011572, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.556062519114442, 0);
  sqcRYGate(q, 2.53130236542349, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.009306390213950522, 0);
  sqcRYGate(q, -2.6679023607429753, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.03327132769629628, 1);
  sqcRYGate(q, 0.4385051610013438, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.582887402431376, 1);
  sqcRYGate(q, 2.903996218395829, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.722033293697832, 0);
  sqcRYGate(q, -2.7900311269262734, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9598699328065026, 0);
  sqcRYGate(q, -2.537630754234301, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.13638909263690394, 1);
  sqcRYGate(q, 2.851435874361194, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2268093311856125, 1);
  sqcRYGate(q, -2.0342636170001747, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9214349102204489, 0);
  sqcRYGate(q, 2.0554494982576212, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0183253599368731, 0);
  sqcRYGate(q, 1.9399467991675703, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2783421839574203, 2);
  sqcRYGate(q, -1.5600716737541866, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4062123593663163, 2);
  sqcRYGate(q, 0.7060561099362355, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6250158711329754, 0);
  sqcRYGate(q, 2.9149931052072042, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7004375263320437, 0);
  sqcRYGate(q, -0.3878235447784849, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.419825838608781, 1);
  sqcRYGate(q, 0.7976859440467966, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.437557184294476, 1);
  sqcRYGate(q, -2.2875278292945183, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2458901218722684, 0);
  sqcRYGate(q, 3.0114989300410904, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0087616983419332, 0);
  sqcRYGate(q, -2.127976711609046, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.759605341448367, 1);
  sqcRYGate(q, -2.973632741601118, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5580292881612436, 1);
  sqcRYGate(q, 0.606379096434619, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3550238795564282, 0);
  sqcRYGate(q, 0.3272878603796876, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.023926265897229015, 0);
  sqcRYGate(q, 1.6808999967429796, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1194077265344866, 2);
  sqcRYGate(q, -1.0837499134971038, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1141457202645677, 2);
  sqcRYGate(q, 1.2039171137686397, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.428384124925595, 0);
  sqcRYGate(q, 1.8166407827886433, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.932589816297993, 0);
  sqcRYGate(q, -3.114300389163367, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.242992904309368, 1);
  sqcRYGate(q, -0.9865733070705356, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.12364701528150146, 1);
  sqcRYGate(q, 0.3495835281191111, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4175961353610464, 0);
  sqcRYGate(q, -2.892089031188708, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5651600050640315, 0);
  sqcRYGate(q, 1.033117680157634, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9429274007774566, 1);
  sqcRYGate(q, -0.34617099616592384, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2608226337159776, 1);
  sqcRYGate(q, -2.8250047146799613, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.205096836668647, 0);
  sqcRYGate(q, -2.2492685367192955, 1);
  sqcRYGate(q, 2.867857339820974, 2);
  sqcRYGate(q, -1.0692940714474526, 3);

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
