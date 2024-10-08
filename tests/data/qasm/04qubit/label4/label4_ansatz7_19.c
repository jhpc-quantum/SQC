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

  sqcRYGate(q, 2.918578935119012, 0);
  sqcRYGate(q, 2.9096957618425994, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0073987105731406, 0);
  sqcRYGate(q, -2.0988530014963045, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.374935338591632, 0);
  sqcRYGate(q, 2.3046402039831335, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.225603449554952, 0);
  sqcRYGate(q, -1.0563387530045558, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7126162202940556, 0);
  sqcRYGate(q, -0.33695415663084005, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8514004514667097, 0);
  sqcRYGate(q, -0.9410644604821243, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1284531442594172, 1);
  sqcRYGate(q, 0.6730749677155219, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9389483079643484, 1);
  sqcRYGate(q, -1.7142976335885054, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.380755454663156, 1);
  sqcRYGate(q, -0.056048715470944345, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.646326940186093, 1);
  sqcRYGate(q, -2.65110860655663, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9229791402695643, 2);
  sqcRYGate(q, 0.2478032587600314, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.24681661564832044, 2);
  sqcRYGate(q, 2.5509911151029856, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.730423623282621, 0);
  sqcRYGate(q, 1.2055143510731758, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9726322617426204, 0);
  sqcRYGate(q, -2.0851330411640885, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.314682198600325, 0);
  sqcRYGate(q, -0.0033940069037358598, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.695762200345154, 0);
  sqcRYGate(q, 2.219657015833233, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0820346796737728, 0);
  sqcRYGate(q, 2.640161791649811, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9249504494847356, 0);
  sqcRYGate(q, -0.09445972411562309, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9768318729103282, 1);
  sqcRYGate(q, 2.394070711298508, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.32117896038171256, 1);
  sqcRYGate(q, -2.9836682947952546, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9322437226983827, 1);
  sqcRYGate(q, 2.2784980208409555, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5531203141113625, 1);
  sqcRYGate(q, -0.15430137220545606, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.699438562193536, 2);
  sqcRYGate(q, 1.3637520843626372, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.24599249905181148, 2);
  sqcRYGate(q, 2.702503168554673, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.268754171978765, 0);
  sqcRYGate(q, 2.1498695867691717, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8325206398908522, 0);
  sqcRYGate(q, -2.0881312254730897, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.869068735501969, 0);
  sqcRYGate(q, -2.9995072471919753, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5886620940946683, 0);
  sqcRYGate(q, -1.940726140917894, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9141203802469562, 0);
  sqcRYGate(q, 0.7904532650796368, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.564292027474576, 0);
  sqcRYGate(q, 0.9791300670350738, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.06817609836630605, 1);
  sqcRYGate(q, -2.6815517016504984, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6524034557845519, 1);
  sqcRYGate(q, 1.9277654791468102, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.09172652970064467, 1);
  sqcRYGate(q, -1.7092553572766878, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7634950450636895, 1);
  sqcRYGate(q, -0.6637701477862157, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.558034421463089, 2);
  sqcRYGate(q, 2.515755487045566, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6384786694094862, 2);
  sqcRYGate(q, 1.5211569881550857, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.796224714874815, 0);
  sqcRYGate(q, 2.0487723713151924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8629976906805594, 0);
  sqcRYGate(q, -2.648454618608165, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.970482559967044, 0);
  sqcRYGate(q, -1.126793110438232, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2341076737649415, 0);
  sqcRYGate(q, 2.8167355659270843, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8795562773666346, 0);
  sqcRYGate(q, -1.9898989700455758, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6723694639716206, 0);
  sqcRYGate(q, -2.017918429368196, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1848426272185624, 1);
  sqcRYGate(q, 1.6138027713674932, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.972478443492946, 1);
  sqcRYGate(q, -2.541116436305265, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.653966720024188, 1);
  sqcRYGate(q, 1.9656471515242184, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.838831992676334, 1);
  sqcRYGate(q, -1.4710451291041116, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1025386559846595, 2);
  sqcRYGate(q, -1.2335657407111622, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.28894593430449866, 2);
  sqcRYGate(q, -0.5285538182516323, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8359268992152327, 0);
  sqcRYGate(q, 0.1462197533729297, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5497514431810897, 0);
  sqcRYGate(q, -1.2837702127093973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5361429227199057, 0);
  sqcRYGate(q, -0.5975581749546772, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8219880805846347, 0);
  sqcRYGate(q, 3.1174026809418462, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4999116521754072, 0);
  sqcRYGate(q, -1.4770850510867435, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8545086968596696, 0);
  sqcRYGate(q, -2.060191871350158, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.379471974379122, 1);
  sqcRYGate(q, 2.1476144278767704, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.206326398341134, 1);
  sqcRYGate(q, 2.811833168652479, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1395175255557146, 1);
  sqcRYGate(q, 1.4195295622992177, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.381119156800935, 1);
  sqcRYGate(q, 2.924050638526645, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.505165177277246, 2);
  sqcRYGate(q, -0.4174910311700974, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0281025121714507, 2);
  sqcRYGate(q, -0.4729270370907015, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.16499975069309158, 0);
  sqcRYGate(q, -0.5326163569845379, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.888765073309135, 0);
  sqcRYGate(q, -2.624057796568344, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.40801468329832247, 0);
  sqcRYGate(q, 2.836520645957621, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6104329461907847, 0);
  sqcRYGate(q, -1.5392356041950128, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.989216885136849, 0);
  sqcRYGate(q, -1.9216527171365643, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.3375985040338758, 0);
  sqcRYGate(q, -1.8845220960631508, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.968759863387616, 1);
  sqcRYGate(q, 0.1303441084938921, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6410955454241054, 1);
  sqcRYGate(q, -0.40647231129185224, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8378650937013525, 1);
  sqcRYGate(q, 0.22273047534351104, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6822561635285824, 1);
  sqcRYGate(q, 1.2335810611762046, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2421392971578609, 2);
  sqcRYGate(q, -2.295846827056142, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.753776784357241, 2);
  sqcRYGate(q, -1.9158622799744602, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.09396593819097016, 0);
  sqcRYGate(q, 3.092241086389199, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3026281670903393, 0);
  sqcRYGate(q, -0.9542399492363405, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.015732531675647365, 0);
  sqcRYGate(q, 3.1336083973470648, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.012759339341076092, 0);
  sqcRYGate(q, -1.3925128951144714, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6608044980102694, 0);
  sqcRYGate(q, 1.3540971614762325, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5336382202085321, 0);
  sqcRYGate(q, 1.267197220889363, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.457582510255378, 1);
  sqcRYGate(q, -0.8294949087442012, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5308725895520707, 1);
  sqcRYGate(q, -1.5886882225918688, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8777732294293377, 1);
  sqcRYGate(q, -2.3167355632870135, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8812509701929145, 1);
  sqcRYGate(q, -1.4443373719444317, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2616784249243373, 2);
  sqcRYGate(q, -1.7736280718505144, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7400065682986987, 2);
  sqcRYGate(q, 1.8764752372001605, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0208491333220158, 0);
  sqcRYGate(q, -2.343614149202955, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4144554381999177, 0);
  sqcRYGate(q, -2.066446584020202, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1997769731229324, 0);
  sqcRYGate(q, 2.0397363946358724, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.902463613164384, 0);
  sqcRYGate(q, -2.6380484647037514, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6503956125714674, 0);
  sqcRYGate(q, 0.09226382478693386, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4124801021133793, 0);
  sqcRYGate(q, -0.6571502603128376, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0081818687868527, 1);
  sqcRYGate(q, 1.248134005176528, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4305065757092468, 1);
  sqcRYGate(q, -1.0838255001674115, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6537561673572565, 1);
  sqcRYGate(q, -0.5101593454985714, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.810161495990533, 1);
  sqcRYGate(q, -1.4953968605360204, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0231507094586538, 2);
  sqcRYGate(q, -1.025762172430794, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0896648068090884, 2);
  sqcRYGate(q, -2.0192513956852887, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7663550631854177, 0);
  sqcRYGate(q, 0.576645586601817, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8348003250061793, 0);
  sqcRYGate(q, 0.015505657598652078, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.10553959600469832, 0);
  sqcRYGate(q, 1.0788533731713599, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9579769907543465, 0);
  sqcRYGate(q, 0.3070215406301289, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.505547062926217, 0);
  sqcRYGate(q, -2.635643759943402, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6010349003227065, 0);
  sqcRYGate(q, -2.775372240726592, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6384951995067496, 1);
  sqcRYGate(q, -0.30378035881283516, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8288107455124833, 1);
  sqcRYGate(q, -3.014669237844299, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2616093344802137, 1);
  sqcRYGate(q, -1.6942700512235416, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.15385471515532956, 1);
  sqcRYGate(q, 0.2758735452419532, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0892252074449997, 2);
  sqcRYGate(q, 2.841658256061933, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8047799314295592, 2);
  sqcRYGate(q, 2.4685704600928062, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1883853372703403, 0);
  sqcRYGate(q, -1.501924533027237, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3974949216718957, 0);
  sqcRYGate(q, -3.130848903625371, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3887966026560912, 0);
  sqcRYGate(q, -1.2558003268805955, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5402435320168111, 0);
  sqcRYGate(q, 2.334978984832236, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7108365902976838, 0);
  sqcRYGate(q, -0.8835342438246849, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6531251662981485, 0);
  sqcRYGate(q, 0.17754053657550095, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.947267781121775, 1);
  sqcRYGate(q, -1.2766791815277205, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1548688324735075, 1);
  sqcRYGate(q, -0.8125666390000824, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.043862161635639, 1);
  sqcRYGate(q, 2.828726848585601, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.02992691333717712, 1);
  sqcRYGate(q, 0.050909159134648205, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0364491527062358, 2);
  sqcRYGate(q, 3.0807563480635816, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2678831005622657, 2);
  sqcRYGate(q, 2.015560919841816, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.054996022512581, 0);
  sqcRYGate(q, -2.609342871703671, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0951189893570454, 0);
  sqcRYGate(q, 2.4777384851743114, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5467307828051, 0);
  sqcRYGate(q, 1.0896815367653083, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.46211339739683943, 0);
  sqcRYGate(q, -0.19903288647214906, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.187502894280751, 0);
  sqcRYGate(q, -2.787992568732261, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.766062237682071, 0);
  sqcRYGate(q, -0.44461005390601294, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3987101583819022, 1);
  sqcRYGate(q, 1.9444387851973448, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8800087943083286, 1);
  sqcRYGate(q, -2.1046529519224184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2619523966666029, 1);
  sqcRYGate(q, 2.785365157278893, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5835005660742478, 1);
  sqcRYGate(q, 0.9391931982189866, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.632683553820254, 2);
  sqcRYGate(q, 1.2918771397926674, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.032906987410989075, 2);
  sqcRYGate(q, 1.0582691798599788, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3863221765078384, 0);
  sqcRYGate(q, -3.066825320818014, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.148951019485925, 0);
  sqcRYGate(q, -0.4774519978111879, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9124019036849162, 0);
  sqcRYGate(q, -1.802322285097559, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.996704456477719, 0);
  sqcRYGate(q, -1.8146802888631042, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.833616584822924, 0);
  sqcRYGate(q, 0.25249449219205544, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6022678151652981, 0);
  sqcRYGate(q, 2.957320973226068, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.766126671596621, 1);
  sqcRYGate(q, -0.0538720817151832, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0017544929665582742, 1);
  sqcRYGate(q, -1.8364097030649889, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1884455578328152, 1);
  sqcRYGate(q, -2.233110296005877, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7727281146267457, 1);
  sqcRYGate(q, 0.9737529128077487, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0582341475573818, 2);
  sqcRYGate(q, 0.21687716754424713, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.321864808552651, 2);
  sqcRYGate(q, -1.7350892641593731, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9503606575643773, 0);
  sqcRYGate(q, 0.48893977233619434, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3339178120096511, 0);
  sqcRYGate(q, 1.5614676987511718, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.491843353705696, 0);
  sqcRYGate(q, -2.978975634139476, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8602669787494577, 0);
  sqcRYGate(q, 0.9705951800712579, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8579434929673697, 0);
  sqcRYGate(q, 2.2397566842439818, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7267116631871886, 0);
  sqcRYGate(q, 2.5234554502494824, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.483630275656662, 1);
  sqcRYGate(q, -1.957901737656505, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7888860423030528, 1);
  sqcRYGate(q, -2.953910621489702, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2044480411851533, 1);
  sqcRYGate(q, -2.917872499383393, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.108719935453885, 1);
  sqcRYGate(q, 1.4215991258927607, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2629403681233552, 2);
  sqcRYGate(q, -0.058877519500372344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.731422264553353, 2);
  sqcRYGate(q, -0.3395438679238998, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.927884061999394, 0);
  sqcRYGate(q, 0.4515709348139012, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1648957503839677, 0);
  sqcRYGate(q, -1.2484244009892265, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.781037741584926, 0);
  sqcRYGate(q, 2.422087647400155, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8829648458605446, 0);
  sqcRYGate(q, -2.6684893281943345, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7768080934322237, 0);
  sqcRYGate(q, 0.3897988415483474, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6338173000796654, 0);
  sqcRYGate(q, -0.23665612434931346, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8244123306781184, 1);
  sqcRYGate(q, 1.9935675221839073, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3370381254573518, 1);
  sqcRYGate(q, 2.180907005473064, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.359163060915503, 1);
  sqcRYGate(q, -0.4211501127778964, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.085286804480723, 1);
  sqcRYGate(q, -1.3671631569660407, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.219361251857687, 2);
  sqcRYGate(q, -2.940162589102239, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.17395925647465663, 2);
  sqcRYGate(q, -0.1944319950818116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3671798863638959, 0);
  sqcRYGate(q, -2.2255935318718603, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9953178703755035, 0);
  sqcRYGate(q, 2.685985792887407, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9048014670035123, 0);
  sqcRYGate(q, -1.6876411630917025, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7860609780307992, 0);
  sqcRYGate(q, -1.6136688081560715, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1927163531182032, 0);
  sqcRYGate(q, -2.1331669591868647, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.430516389193532, 0);
  sqcRYGate(q, 0.9231420800288286, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.142488882828336, 1);
  sqcRYGate(q, 2.8461161476115877, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.38889552375135317, 1);
  sqcRYGate(q, 1.6097917017998902, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7369844699061763, 1);
  sqcRYGate(q, 1.4356942608338827, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5960157183452925, 1);
  sqcRYGate(q, -2.963495419614227, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.36694037667428775, 2);
  sqcRYGate(q, 0.7332765266213911, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9625164498839689, 2);
  sqcRYGate(q, -0.5644085569407071, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9032533513683312, 0);
  sqcRYGate(q, -1.6148224873551877, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2634683011837562, 0);
  sqcRYGate(q, -0.9120206749255914, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.968169417325435, 0);
  sqcRYGate(q, 1.6401410636930298, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0133381819794365, 0);
  sqcRYGate(q, -2.897551004394252, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2245762804720934, 0);
  sqcRYGate(q, -2.6169883052998055, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4403709851351656, 0);
  sqcRYGate(q, 1.8788070175899128, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8412616214902067, 1);
  sqcRYGate(q, -1.6589487163302543, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6474953014094469, 1);
  sqcRYGate(q, 2.1800330753693, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3073346194811633, 1);
  sqcRYGate(q, 1.0527229391119244, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.158769318287598, 1);
  sqcRYGate(q, -0.8521087536582215, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.23813203873136754, 2);
  sqcRYGate(q, 1.0117968485065558, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5567260142440658, 2);
  sqcRYGate(q, 1.8490897789709493, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9502615916271351, 0);
  sqcRYGate(q, -1.1612779353647034, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.025855087197912, 0);
  sqcRYGate(q, 2.331542028361294, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.23630706385864, 0);
  sqcRYGate(q, 2.822839768656857, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8507363744119376, 0);
  sqcRYGate(q, -3.0722257551376058, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0218477825457444, 0);
  sqcRYGate(q, -2.064208683464785, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4171671270008508, 0);
  sqcRYGate(q, 0.6023469366168313, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0949535455074577, 1);
  sqcRYGate(q, -1.6708504134041906, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9703914754075644, 1);
  sqcRYGate(q, 1.7471441715830505, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9045294582853973, 1);
  sqcRYGate(q, 0.6969535121453283, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8104671327301527, 1);
  sqcRYGate(q, 1.7008319599734927, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1722715198095037, 2);
  sqcRYGate(q, -1.5213544487676947, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3434494789515257, 2);
  sqcRYGate(q, 1.3491947523443328, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4964493523149063, 0);
  sqcRYGate(q, -0.8228882159411915, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9271943196985201, 0);
  sqcRYGate(q, 2.054033862719809, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.360515558155323, 0);
  sqcRYGate(q, -0.37259242495526923, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.565343809347732, 0);
  sqcRYGate(q, 2.9743108098298086, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1877482093640417, 0);
  sqcRYGate(q, 2.0670356939238834, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.459858259773117, 0);
  sqcRYGate(q, -0.3981566029394834, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7929061875413823, 1);
  sqcRYGate(q, -1.9205943796638025, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7580393558065941, 1);
  sqcRYGate(q, 0.3370838015540949, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7720906769904907, 1);
  sqcRYGate(q, -2.2656098141260337, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.178588969505978, 1);
  sqcRYGate(q, 2.7403261737187625, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.187615644369158, 2);
  sqcRYGate(q, 0.26214572019674837, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7702555219124505, 2);
  sqcRYGate(q, 0.05777431308876758, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1629703362474657, 0);
  sqcRYGate(q, 0.3196815893559134, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.023535859032016, 0);
  sqcRYGate(q, 2.3779314513186236, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.127895328754202, 0);
  sqcRYGate(q, -1.295927155473769, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0049031688134744, 0);
  sqcRYGate(q, 2.954580482166673, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.22040371387092, 0);
  sqcRYGate(q, -1.5115499571083442, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8631873207621029, 0);
  sqcRYGate(q, -2.346664035813307, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.03062526541086, 1);
  sqcRYGate(q, 2.3903457901830754, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3235907672145116, 1);
  sqcRYGate(q, -0.011940527656972072, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7424300769088277, 1);
  sqcRYGate(q, 1.0793157773250364, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.947578356019945, 1);
  sqcRYGate(q, -1.379086587331427, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8138751226755325, 2);
  sqcRYGate(q, 1.4271696895469488, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7660076786336867, 2);
  sqcRYGate(q, 0.5293146055588602, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7897701770794736, 0);
  sqcRYGate(q, 0.21097837602094133, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5845075809902822, 0);
  sqcRYGate(q, 1.2619127341757095, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1889672874914692, 0);
  sqcRYGate(q, -0.43249679147988473, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.985203766731932, 0);
  sqcRYGate(q, -1.3981147682918074, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5630064490516373, 0);
  sqcRYGate(q, -0.7990626322973249, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.103834802260508, 0);
  sqcRYGate(q, -0.14553510695698169, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9770013844253631, 1);
  sqcRYGate(q, 0.4401790710408235, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0014970995043162, 1);
  sqcRYGate(q, -2.048393400710247, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5695216462545525, 1);
  sqcRYGate(q, -1.055432180849265, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.28942094934399304, 1);
  sqcRYGate(q, -2.666836233353946, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.679344499679046, 2);
  sqcRYGate(q, -2.084215864560531, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6073913424357436, 2);
  sqcRYGate(q, 1.687254121025697, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6163692624951969, 0);
  sqcRYGate(q, -3.027517759133316, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8567312485605444, 0);
  sqcRYGate(q, 0.5244815220714052, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.427113046301938, 0);
  sqcRYGate(q, 2.368272886671531, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.44000315866908135, 0);
  sqcRYGate(q, 0.9864454383969887, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.11060094252427133, 0);
  sqcRYGate(q, 1.5739911316374187, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8223556004598822, 0);
  sqcRYGate(q, 2.7443289743498283, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.20612327742325487, 1);
  sqcRYGate(q, -0.0675727549373905, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.404440218714961, 1);
  sqcRYGate(q, 2.205341234091243, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5096470664399523, 1);
  sqcRYGate(q, 1.1843209057562665, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5092596858662328, 1);
  sqcRYGate(q, -2.026724374861269, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.35023643124787446, 2);
  sqcRYGate(q, -2.0104020031512455, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2742563294632201, 2);
  sqcRYGate(q, 1.654658240689228, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6677717463068387, 0);
  sqcRYGate(q, -1.4843405936905643, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.035857499682542, 0);
  sqcRYGate(q, 0.38882199584437593, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1831192440030107, 0);
  sqcRYGate(q, 1.4539633053103045, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.113174123335461, 0);
  sqcRYGate(q, 1.5461580171907885, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.957636376034803, 0);
  sqcRYGate(q, -2.1317330052971792, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4234848334419077, 0);
  sqcRYGate(q, 2.347426017661264, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9486843036588875, 1);
  sqcRYGate(q, 0.2323696226771681, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9033070391177924, 1);
  sqcRYGate(q, 2.467902115014938, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.09275118111560841, 1);
  sqcRYGate(q, 0.15260914445399454, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8575223787357134, 1);
  sqcRYGate(q, -0.34912459023463516, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7638243052421428, 2);
  sqcRYGate(q, 3.102938226686226, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.074511176896162, 2);
  sqcRYGate(q, -1.379771523328631, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.00981422066844928, 0);
  sqcRYGate(q, 3.0915135002674368, 1);
  sqcRYGate(q, 2.9935263907952137, 2);
  sqcRYGate(q, 2.1273624876791857, 3);

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
