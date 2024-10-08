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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -1.80307068807205, 0);
  sqcRYGate(q, 2.7825263027151874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2489784183828441, 0);
  sqcRYGate(q, 0.0648263112121148, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.641376290415467, 1);
  sqcRYGate(q, 2.2952334401465335, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.094007242010753, 1);
  sqcRYGate(q, 2.040740193671021, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.466508519569688, 2);
  sqcRYGate(q, 1.5172698124835122, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6366201050394213, 2);
  sqcRYGate(q, -3.1004024835246717, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.13898567229439962, 3);
  sqcRYGate(q, -1.6024750343765577, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6723066508255429, 3);
  sqcRYGate(q, 3.103795104365712, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6129233639175387, 4);
  sqcRYGate(q, -0.037156936311241395, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.3279462092080627, 4);
  sqcRYGate(q, -1.7634557509963955, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.917920417444387, 5);
  sqcRYGate(q, 2.82014803143996, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1292648080273335, 5);
  sqcRYGate(q, -0.01877951602243881, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.4196085043550529, 6);
  sqcRYGate(q, 1.480678930388268, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9902211132166627, 6);
  sqcRYGate(q, 0.08587609840574206, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.848754707838306, 7);
  sqcRYGate(q, 1.7580858352915323, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.5299906249061213, 7);
  sqcRYGate(q, -0.14304490185105131, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.330969945594793, 8);
  sqcRYGate(q, -1.6125012164571668, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.545467234371884, 8);
  sqcRYGate(q, -0.06122902953717446, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.374795024199174, 9);
  sqcRYGate(q, -2.0854214203984998, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.0313428805472364, 9);
  sqcRYGate(q, -0.10277210123423419, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.4069079793108337, 10);
  sqcRYGate(q, 1.402130318841299, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.918245251039163, 10);
  sqcRYGate(q, 1.9706051180896245, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6756744579360003, 0);
  sqcRYGate(q, -0.4227587245578639, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.766666352963896, 0);
  sqcRYGate(q, -1.2127623316446456, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.743452865640919, 1);
  sqcRYGate(q, 0.49435614894926494, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8062185054283304, 1);
  sqcRYGate(q, -1.6155700125842136, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2639510597064, 2);
  sqcRYGate(q, 2.01309274928927, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.839945693460953, 2);
  sqcRYGate(q, -3.1156559357118296, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5153289418687064, 3);
  sqcRYGate(q, -0.3110171035912863, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.00415068463445234, 3);
  sqcRYGate(q, 3.1381069797821, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.34185120941253005, 4);
  sqcRYGate(q, -0.5902789854518682, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.288355065133997, 4);
  sqcRYGate(q, -1.2731590285888228, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.20205780479522062, 5);
  sqcRYGate(q, -0.32873443624444937, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.014496782163044, 5);
  sqcRYGate(q, -3.1386520853986917, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7680792969814414, 6);
  sqcRYGate(q, -0.7618862785935308, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.904108799633188, 6);
  sqcRYGate(q, -2.771195479219705, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0165709178168583, 7);
  sqcRYGate(q, -2.1227023181987037, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.6196757875286494, 7);
  sqcRYGate(q, 2.5551557796419324, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.0018144689384351762, 8);
  sqcRYGate(q, 0.7652514965029623, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.1414292894499205, 8);
  sqcRYGate(q, -0.14011106378839708, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.7790124492663004, 9);
  sqcRYGate(q, 1.5713740277234391, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.138452037641766, 9);
  sqcRYGate(q, 0.13796388105120855, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.6141309753657254, 10);
  sqcRYGate(q, 2.2473013852072796, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.5987928106248104, 10);
  sqcRYGate(q, -2.8535444143182733, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.47663651840101084, 0);
  sqcRYGate(q, 2.3448591523945184, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5894770242245363, 0);
  sqcRYGate(q, -2.4818708574004122, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.153566247339736, 1);
  sqcRYGate(q, -0.8312327075719682, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1632419207030322, 1);
  sqcRYGate(q, -1.8250798459937636, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5824217948408292, 2);
  sqcRYGate(q, 2.355001272709918, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5583651081005145, 2);
  sqcRYGate(q, -1.1206082702340447, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.66005392971503, 3);
  sqcRYGate(q, 0.2705799649894036, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5798632651083553, 3);
  sqcRYGate(q, -2.342039779928597, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.241003354841208, 4);
  sqcRYGate(q, -2.3595564036092194, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3821702744437795, 4);
  sqcRYGate(q, 3.138577472637082, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3526593668035733, 5);
  sqcRYGate(q, -1.695111777635079, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0426467755811602, 5);
  sqcRYGate(q, 0.012457040637492867, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.108994258598174, 6);
  sqcRYGate(q, 0.1076472960935506, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.275445352331265, 6);
  sqcRYGate(q, -0.46367835073429725, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0408091104934023, 7);
  sqcRYGate(q, 1.6525176830009096, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.9714835313548202, 7);
  sqcRYGate(q, -0.016543401144168895, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.740541924548701, 8);
  sqcRYGate(q, -1.191437795318696, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.3430164526838526, 8);
  sqcRYGate(q, 0.08942382518383507, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.0238049748107878, 9);
  sqcRYGate(q, -1.370628276266677, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.018134453086801727, 9);
  sqcRYGate(q, -0.09138490817105005, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.597435258786098, 10);
  sqcRYGate(q, 0.1419267878382362, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.808968029727519, 10);
  sqcRYGate(q, 0.5321848314531424, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.2923178593724687, 0);
  sqcRYGate(q, 2.5635320664325794, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0818943974480844, 0);
  sqcRYGate(q, 0.5510041888571128, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.776008505647142, 1);
  sqcRYGate(q, 1.7058066761283808, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.13127544171512, 1);
  sqcRYGate(q, 0.5185818660114824, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1278978434607172, 2);
  sqcRYGate(q, -1.6325355888570183, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4286936406316515, 2);
  sqcRYGate(q, 1.8599993743870606, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9670106768639761, 3);
  sqcRYGate(q, -2.061057218643962, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.12226045994064716, 3);
  sqcRYGate(q, -0.8732732272772274, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.23379411999565924, 4);
  sqcRYGate(q, 1.7473583787299516, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.201991495021309, 4);
  sqcRYGate(q, 0.004492788404668722, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7309159733542925, 5);
  sqcRYGate(q, 0.8054125932931252, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4382621641774648, 5);
  sqcRYGate(q, -0.029575961207365352, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1319259332206464, 6);
  sqcRYGate(q, 2.746707127820058, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.42977494434776903, 6);
  sqcRYGate(q, 2.634344402821795, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3024425942090376, 7);
  sqcRYGate(q, -0.037911604836312375, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.0011305277031761207, 7);
  sqcRYGate(q, 0.09749153534598037, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.9293639044925754, 8);
  sqcRYGate(q, 3.0338116051473585, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.4468760585792577, 8);
  sqcRYGate(q, -3.138764355818059, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8368191587374127, 9);
  sqcRYGate(q, -2.2646388777998983, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.8323775327993639, 9);
  sqcRYGate(q, -3.11937923009346, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5170481466161625, 10);
  sqcRYGate(q, -2.1538984737416733, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.2948825851402476, 10);
  sqcRYGate(q, 0.027955798501825058, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.8310964048823597, 0);
  sqcRYGate(q, -0.4408843054633937, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7411624732232831, 0);
  sqcRYGate(q, -0.6445135315906004, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3462130307570615, 1);
  sqcRYGate(q, 0.7144087347396448, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.437632880389759, 1);
  sqcRYGate(q, -0.5344895809075059, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9041814680420244, 2);
  sqcRYGate(q, -2.7042962384240368, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5494013276404697, 2);
  sqcRYGate(q, 2.2192094925231696, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6882721981321671, 3);
  sqcRYGate(q, -1.2137453083836804, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6764521656776896, 3);
  sqcRYGate(q, -0.0636045971119769, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8863820266658995, 4);
  sqcRYGate(q, -1.153223809023229, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0024072370351300165, 4);
  sqcRYGate(q, 0.004563559077679358, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9061207771139248, 5);
  sqcRYGate(q, 1.5631572847263857, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.06579274114937839, 5);
  sqcRYGate(q, 3.1029669891386615, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.14351581665700372, 6);
  sqcRYGate(q, 1.7135278673217993, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.881048688691099, 6);
  sqcRYGate(q, -2.1326551171645134, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9769410821654826, 7);
  sqcRYGate(q, -1.107327489554437, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.0004483567560015789, 7);
  sqcRYGate(q, -2.47095273060308, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.6752242812785886, 8);
  sqcRYGate(q, 1.9109554299633464, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.7735312409701588, 8);
  sqcRYGate(q, 3.1410318158426813, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5404031363424044, 9);
  sqcRYGate(q, 0.8763700540342914, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.162239627767672, 9);
  sqcRYGate(q, -2.9547470370758995, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.2060426317128563, 10);
  sqcRYGate(q, -1.1037934029539909, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.2263003888180588, 10);
  sqcRYGate(q, 0.09554750165162673, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.7059538122345392, 0);
  sqcRYGate(q, -2.301181137433429, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1275947427410014, 0);
  sqcRYGate(q, 0.7729158543569978, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3103622680347518, 1);
  sqcRYGate(q, -2.9147932966986634, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.693283138944813, 1);
  sqcRYGate(q, 2.879793376665374, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3626595170874427, 2);
  sqcRYGate(q, 1.0436619089145358, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7430068738807223, 2);
  sqcRYGate(q, -0.2670427631991821, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9792616053835751, 3);
  sqcRYGate(q, -1.4816067290927593, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5461739649952264, 3);
  sqcRYGate(q, -2.2884468705849756, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1796900651121165, 4);
  sqcRYGate(q, -2.0752266056514186, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3269059307905211, 4);
  sqcRYGate(q, 2.023292164775574, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.358168235324574, 5);
  sqcRYGate(q, 1.0084753098663528, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.140835674788234, 5);
  sqcRYGate(q, 3.1412811573218926, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.056690222562905, 6);
  sqcRYGate(q, -0.6171828837860813, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0683859968423657, 6);
  sqcRYGate(q, 2.163910543802491, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.002747310903465, 7);
  sqcRYGate(q, -2.9163479151445415, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.141193100681325, 7);
  sqcRYGate(q, -0.6850666613975922, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.6516992527520252, 8);
  sqcRYGate(q, -1.3206033034548987, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9651682696105992, 8);
  sqcRYGate(q, 0.41832909030233445, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.12690456549330584, 9);
  sqcRYGate(q, -1.1284119174037481, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.27240916857715813, 9);
  sqcRYGate(q, 2.9178651954068098, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.2021923860171504, 10);
  sqcRYGate(q, -0.6154240930520524, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.096737628671616, 10);
  sqcRYGate(q, 0.032569132910731116, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9046238544227538, 0);
  sqcRYGate(q, -2.6671406877029153, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5963857941853745, 0);
  sqcRYGate(q, -2.8353915538460894, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5915567211929007, 1);
  sqcRYGate(q, 2.16643570871397, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6771715268036766, 1);
  sqcRYGate(q, 2.3457502265728514, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8152290118574241, 2);
  sqcRYGate(q, 1.0957445654451674, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9975438008393374, 2);
  sqcRYGate(q, -1.9200922280104729, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2312405820761877, 3);
  sqcRYGate(q, 2.683554497359259, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0021401909949739293, 3);
  sqcRYGate(q, 3.1386053989348386, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.623624159486026, 4);
  sqcRYGate(q, 0.975212252174814, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7695489310766641, 4);
  sqcRYGate(q, 0.7258274439533156, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5156327398116497, 5);
  sqcRYGate(q, -1.67382163848899, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.4451777217822439, 5);
  sqcRYGate(q, -0.00046435152655810446, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.4458273120508265, 6);
  sqcRYGate(q, 2.305274925477333, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4149442384655924, 6);
  sqcRYGate(q, 0.6804964973792172, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.747551419598814, 7);
  sqcRYGate(q, -0.3477476250380704, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.032217211611824, 7);
  sqcRYGate(q, -0.5004808502154283, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.896870888633398, 8);
  sqcRYGate(q, 0.9036098738517797, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.8358389917632103, 8);
  sqcRYGate(q, -0.21090520169069288, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.547871094276167, 9);
  sqcRYGate(q, 2.606802317859923, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.006654986082677, 9);
  sqcRYGate(q, -3.1174532063553437, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.3839631901860911, 10);
  sqcRYGate(q, -1.9756276368863308, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.5104918415035211, 10);
  sqcRYGate(q, -1.7686898707638736, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.7345726713414124, 0);
  sqcRYGate(q, 0.9513620193988132, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7177442940724248, 0);
  sqcRYGate(q, -2.5640545806083654, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9011445881251816, 1);
  sqcRYGate(q, -1.838659522885628, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1337691336407127, 1);
  sqcRYGate(q, -0.29028459250827643, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9855244768175737, 2);
  sqcRYGate(q, -1.969875398154428, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6740288785578873, 2);
  sqcRYGate(q, -0.5436342973310868, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9406178767860027, 3);
  sqcRYGate(q, 3.01724839783444, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.136342500639698, 3);
  sqcRYGate(q, -3.1329294785573283, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1412917407819823, 4);
  sqcRYGate(q, 1.1356435706371828, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6847512594193694, 4);
  sqcRYGate(q, 0.4012056010238834, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8253789334865116, 5);
  sqcRYGate(q, 2.406606102723384, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.643209565339335, 5);
  sqcRYGate(q, 1.2646441094035554, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4637004665781244, 6);
  sqcRYGate(q, -2.041340863727665, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.0019763427688426205, 6);
  sqcRYGate(q, 0.6815192330660351, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.04797019216180676, 7);
  sqcRYGate(q, -1.1059462885525775, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.0186913453147195, 7);
  sqcRYGate(q, -0.00016293763758312707, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.3666929246572641, 8);
  sqcRYGate(q, -2.214034725844534, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.0604369579419164, 8);
  sqcRYGate(q, 2.64542098210155, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.12192736115952751, 9);
  sqcRYGate(q, -2.859836557064, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.6331402798124923, 9);
  sqcRYGate(q, -2.969920051858996, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.892184099527287, 10);
  sqcRYGate(q, -0.7481811368866613, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.7624283050903307, 10);
  sqcRYGate(q, 1.5782654024796692, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.41364632385434613, 0);
  sqcRYGate(q, -1.7883570315858313, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.072373738864248, 0);
  sqcRYGate(q, -0.01118704588738062, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5992351957796336, 1);
  sqcRYGate(q, 0.57788088883374, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.505320403195803, 1);
  sqcRYGate(q, 2.0349733656188267, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9097167218525001, 2);
  sqcRYGate(q, 2.2548177834369865, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6270253663590717, 2);
  sqcRYGate(q, 2.234496809019263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1944234788585797, 3);
  sqcRYGate(q, -2.2534965157362916, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.08115522730479205, 3);
  sqcRYGate(q, 0.7910641435307195, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0277330231339468, 4);
  sqcRYGate(q, 1.947058806238858, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5750320445238302, 4);
  sqcRYGate(q, 3.1403838051717177, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.013538937706022, 5);
  sqcRYGate(q, -1.0702066877659506, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.109104592407244, 5);
  sqcRYGate(q, -0.12624296162502135, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.451584580841347, 6);
  sqcRYGate(q, 1.584256028216535, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.141587087343754, 6);
  sqcRYGate(q, 1.4299876879856868, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9211860342070279, 7);
  sqcRYGate(q, -0.05553517013175601, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.5349189754785986, 7);
  sqcRYGate(q, 0.00021239394168404147, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.7366514663922253, 8);
  sqcRYGate(q, -2.9186223291294473, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.06938845726310028, 8);
  sqcRYGate(q, -0.5178171357298398, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.3414500226446922, 9);
  sqcRYGate(q, 0.4188552088411961, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6099414123445375, 9);
  sqcRYGate(q, 3.1086542089607088, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.7765030694631525, 10);
  sqcRYGate(q, 2.6593602108231726, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.2406900163111105, 10);
  sqcRYGate(q, -2.313839418584859, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.9372424492411078, 0);
  sqcRYGate(q, 0.8668780626886967, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.17832885535455478, 0);
  sqcRYGate(q, 2.1517650842750067, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.231840419247508, 1);
  sqcRYGate(q, 1.7773519807092544, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5049376229489608, 1);
  sqcRYGate(q, -0.10338719684455243, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5756846567663767, 2);
  sqcRYGate(q, -1.9182760897164735, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4056994965922565, 2);
  sqcRYGate(q, 0.04320515113157379, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5946123565172148, 3);
  sqcRYGate(q, 0.3838140923712168, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.140266020266939, 3);
  sqcRYGate(q, 1.9451515088733347, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4988341505251883, 4);
  sqcRYGate(q, -1.8854957072334508, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7328026507966645, 4);
  sqcRYGate(q, 0.0002841432387343801, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7738043313673817, 5);
  sqcRYGate(q, -1.8941881766177664, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9833273725643514, 5);
  sqcRYGate(q, -2.1025983531336285, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.936591455817365, 6);
  sqcRYGate(q, -2.209787675429628, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0027300028510742194, 6);
  sqcRYGate(q, 3.1032365901937595, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1348696917479786, 7);
  sqcRYGate(q, -0.9684921993197264, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.8585002591939017, 7);
  sqcRYGate(q, 3.1396123581725814, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.10606383997552449, 8);
  sqcRYGate(q, -0.22136697757319812, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6887671720074402, 8);
  sqcRYGate(q, -0.40731021588667904, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5416885855942386, 9);
  sqcRYGate(q, 2.413846175824553, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.1131084386225636, 9);
  sqcRYGate(q, 2.3510602291325826, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.1119177481950944, 10);
  sqcRYGate(q, 1.6430721208702952, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.07176115886421731, 10);
  sqcRYGate(q, 0.04003291938686537, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.2777798041171278, 0);
  sqcRYGate(q, 2.412443661004289, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6757134980507242, 0);
  sqcRYGate(q, 1.0164053238125863, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.16042973580889086, 1);
  sqcRYGate(q, 1.5099677802937999, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0033832558172956083, 1);
  sqcRYGate(q, -0.8808920214378487, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5907076139860923, 2);
  sqcRYGate(q, -2.0357532666844254, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.411175746288518, 2);
  sqcRYGate(q, -0.6039705983363621, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9336707753775495, 3);
  sqcRYGate(q, 1.4432756876810848, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.010275087795000637, 3);
  sqcRYGate(q, -2.840109369879177, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9564118904243992, 4);
  sqcRYGate(q, -1.5674876481223632, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2548549370381212, 4);
  sqcRYGate(q, -0.001805307824628066, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.573667850132804, 5);
  sqcRYGate(q, -1.064868682657062, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1320423163481603, 5);
  sqcRYGate(q, -3.023397877810216, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0639001561173327, 6);
  sqcRYGate(q, 2.989264710436618, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.001774331802355533, 6);
  sqcRYGate(q, -0.24773752118579306, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.37392398657086723, 7);
  sqcRYGate(q, 2.820978818137197, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.3249278060808638, 7);
  sqcRYGate(q, 3.140367198530997, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.086228091734712, 8);
  sqcRYGate(q, 0.20612005509172748, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6592779428773774, 8);
  sqcRYGate(q, 1.509509299280603, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.699910871558728, 9);
  sqcRYGate(q, 1.8235953867352714, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.1852473837028317, 9);
  sqcRYGate(q, -2.4295338938756657, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.40778710622776515, 10);
  sqcRYGate(q, 1.1818286287961346, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.140094622667963, 10);
  sqcRYGate(q, 3.1007499692807414, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.07646075589526413, 0);
  sqcRYGate(q, 2.471213277239203, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3420776353029549, 0);
  sqcRYGate(q, 1.6319226962816433, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3648036407379345, 1);
  sqcRYGate(q, -1.2025931870103375, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10580188117662444, 1);
  sqcRYGate(q, -0.719071175532242, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0750737677522153, 2);
  sqcRYGate(q, -1.9423366504462545, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0018878664071370335, 2);
  sqcRYGate(q, 0.36792961642253713, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.145240475639239, 3);
  sqcRYGate(q, -2.448288992067502, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.002507194907233597, 3);
  sqcRYGate(q, -0.061945696593673105, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.014793780328494, 4);
  sqcRYGate(q, 0.49419210498285077, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9781270363809282, 4);
  sqcRYGate(q, -3.1369175037443395, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8686771322268535, 5);
  sqcRYGate(q, -0.08487441766630686, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8512632419029353, 5);
  sqcRYGate(q, 0.49961679332760234, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1673100966255587, 6);
  sqcRYGate(q, -1.0490322597934063, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3271941466571586, 6);
  sqcRYGate(q, 1.840355513264841, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8782708744535768, 7);
  sqcRYGate(q, -3.1298895921951297, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.266167574603691, 7);
  sqcRYGate(q, -0.0009941667222417294, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5360733722860642, 8);
  sqcRYGate(q, 2.0531290665857385, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.012249975006042982, 8);
  sqcRYGate(q, 1.1608583274142752, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.3115540888919486, 9);
  sqcRYGate(q, 1.6786665441495439, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.3317820526803628, 9);
  sqcRYGate(q, -0.545515738795646, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.3984788636883003, 10);
  sqcRYGate(q, -1.1021043943028586, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.36727198630487834, 10);
  sqcRYGate(q, 2.893665113530787, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6292080857969456, 0);
  sqcRYGate(q, -0.3708209589625114, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.47955488960798, 0);
  sqcRYGate(q, 0.9405385786492005, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4274776575997596, 1);
  sqcRYGate(q, -0.7658208676376823, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9935215603985172, 1);
  sqcRYGate(q, 0.08485102071856154, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2952819660562223, 2);
  sqcRYGate(q, -1.288768323813029, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.497071554466793, 2);
  sqcRYGate(q, 2.8466929740312934, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2885728464238935, 3);
  sqcRYGate(q, 2.2669444944994908, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.17814266395700495, 3);
  sqcRYGate(q, 2.83470895190834, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9129535200832102, 4);
  sqcRYGate(q, -0.24493146726412832, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.007161879168205268, 4);
  sqcRYGate(q, -3.137311546402538, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.841632455432979, 5);
  sqcRYGate(q, 3.0184396396704436, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.141205378565433, 5);
  sqcRYGate(q, -0.6327093531253271, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1139837882208026, 6);
  sqcRYGate(q, 2.262108862399184, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3577230846621298, 6);
  sqcRYGate(q, 2.634530279057523, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.059858992790923, 7);
  sqcRYGate(q, 2.9302466900170763, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.722532884653668, 7);
  sqcRYGate(q, 3.13889690384125, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.25977746795653367, 8);
  sqcRYGate(q, 0.40912661660898564, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.1029057485872755, 8);
  sqcRYGate(q, 1.8695565432248746, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.2868712878197592, 9);
  sqcRYGate(q, -1.3735620915658027, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.767553760973547, 9);
  sqcRYGate(q, 3.1166442601164692, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.35769272083178993, 10);
  sqcRYGate(q, -0.373913063679451, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.004738781737991, 10);
  sqcRYGate(q, 3.081000001190293, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6309876522719429, 0);
  sqcRYGate(q, -2.6779947720943054, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3362275805360891, 0);
  sqcRYGate(q, -2.0241737233711588, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9158972945044166, 1);
  sqcRYGate(q, 1.078270092493586, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.058137384157035274, 1);
  sqcRYGate(q, -0.15120651013472575, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0192546450842856, 2);
  sqcRYGate(q, -2.114281753152694, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9409840536550256, 2);
  sqcRYGate(q, -1.503686156657043, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6079482611653872, 3);
  sqcRYGate(q, -1.935045298377476, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.11043454950999347, 3);
  sqcRYGate(q, 1.1216542128605171, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.32964800962342, 4);
  sqcRYGate(q, -1.5019542020885803, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0188367219479386, 4);
  sqcRYGate(q, 2.8145086309119467, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.989022869686925, 5);
  sqcRYGate(q, 1.4658914762758406, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.714921901531965, 5);
  sqcRYGate(q, -0.0189213975366427, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.44745248756051925, 6);
  sqcRYGate(q, 0.025133220945280144, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.062406394666730446, 6);
  sqcRYGate(q, 3.0911822983808306, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5350284400923098, 7);
  sqcRYGate(q, 0.9013211858817591, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.111241447316973, 7);
  sqcRYGate(q, -0.45571314792789386, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.3685431067190232, 8);
  sqcRYGate(q, 0.7968835729352319, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.7162472497489905, 8);
  sqcRYGate(q, -2.6772905599383146, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.0322089482155012, 9);
  sqcRYGate(q, 2.028708365446646, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.14935760880497853, 9);
  sqcRYGate(q, 0.3954245849924817, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6258129315074574, 10);
  sqcRYGate(q, -0.8109182355706461, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.8598590969873214, 10);
  sqcRYGate(q, 2.743006128786185, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.493427940572758, 0);
  sqcRYGate(q, 2.8480017659994092, 1);
  sqcRYGate(q, 0.042430965048247775, 2);
  sqcRYGate(q, -3.1387645196504006, 3);
  sqcRYGate(q, 0.038056833218507335, 4);
  sqcRYGate(q, -1.1577724137204932, 5);
  sqcRYGate(q, -2.0784528806513585, 6);
  sqcRYGate(q, -3.1409316993211185, 7);
  sqcRYGate(q, -3.1190267809033587, 8);
  sqcRYGate(q, 0.03274399166770259, 9);
  sqcRYGate(q, -0.010505392700815517, 10);
  sqcRYGate(q, 2.2361244997020657, 11);

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
