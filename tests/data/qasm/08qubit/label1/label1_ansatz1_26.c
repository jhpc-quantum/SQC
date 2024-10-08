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

  sqcRYGate(q, 0.5323878625853227, 0);
  sqcRZGate(q, 1.103723523674261, 0);
  sqcRYGate(q, -0.0026794336812088204, 1);
  sqcRZGate(q, 1.9999304730884577, 1);
  sqcRYGate(q, 1.9739495522491142, 2);
  sqcRZGate(q, 2.779519534406346, 2);
  sqcRYGate(q, -1.6120482222658739, 3);
  sqcRZGate(q, 1.4366365736766955, 3);
  sqcRYGate(q, 3.1178429691709972, 4);
  sqcRZGate(q, -2.0329954025553625, 4);
  sqcRYGate(q, 0.07986358518897456, 5);
  sqcRZGate(q, 1.8489366980738509, 5);
  sqcRYGate(q, 1.053124959203596, 6);
  sqcRZGate(q, 0.9221965541368844, 6);
  sqcRYGate(q, 2.889364993232697, 7);
  sqcRZGate(q, -2.53307042746421, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.28392118680171063, 0);
  sqcRZGate(q, 0.30869719690609515, 0);
  sqcRYGate(q, 0.985629000882972, 1);
  sqcRZGate(q, -2.0146963066533043, 1);
  sqcRYGate(q, 0.159257514131125, 2);
  sqcRZGate(q, 3.027420333796572, 2);
  sqcRYGate(q, -1.8750955143880943, 3);
  sqcRZGate(q, 1.4413627859212221, 3);
  sqcRYGate(q, 2.7960623154570463, 4);
  sqcRZGate(q, -1.0598147637167763, 4);
  sqcRYGate(q, 0.4776596680657597, 5);
  sqcRZGate(q, -0.38624469280391166, 5);
  sqcRYGate(q, -2.845221629769054, 6);
  sqcRZGate(q, -2.099227378604806, 6);
  sqcRYGate(q, -0.29469685563623593, 7);
  sqcRZGate(q, 0.8649109339809583, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.0661965576187207, 0);
  sqcRZGate(q, 1.1319682264315407, 0);
  sqcRYGate(q, 0.034457607017265524, 1);
  sqcRZGate(q, 3.0879632034072366, 1);
  sqcRYGate(q, -2.1491150932654666, 2);
  sqcRZGate(q, 1.5056045567613152, 2);
  sqcRYGate(q, 0.5929139335886786, 3);
  sqcRZGate(q, -2.020408598971769, 3);
  sqcRYGate(q, 2.568654174015094, 4);
  sqcRZGate(q, -2.9711709565048476, 4);
  sqcRYGate(q, 2.201029775532806, 5);
  sqcRZGate(q, 0.002373489346308766, 5);
  sqcRYGate(q, 0.24102126269587634, 6);
  sqcRZGate(q, -2.304243417805604, 6);
  sqcRYGate(q, -2.0298082581409007, 7);
  sqcRZGate(q, -2.948111185545977, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.7172970606432738, 0);
  sqcRZGate(q, -1.4053345097585186, 0);
  sqcRYGate(q, -1.3684443885046331, 1);
  sqcRZGate(q, 0.6674443553190557, 1);
  sqcRYGate(q, -0.26055629775788747, 2);
  sqcRZGate(q, 0.01740501859102395, 2);
  sqcRYGate(q, 0.010169498845660208, 3);
  sqcRZGate(q, 1.289394564707271, 3);
  sqcRYGate(q, -2.4963654040096634, 4);
  sqcRZGate(q, 0.1739075195605642, 4);
  sqcRYGate(q, 2.80765467858669, 5);
  sqcRZGate(q, 1.436257539904928, 5);
  sqcRYGate(q, -0.4959256102300763, 6);
  sqcRZGate(q, -1.8215699158294099, 6);
  sqcRYGate(q, -1.5792131534682294, 7);
  sqcRZGate(q, 0.09226361011395134, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.7124455720054623, 0);
  sqcRZGate(q, 2.4834031325748063, 0);
  sqcRYGate(q, -0.6558332699829433, 1);
  sqcRZGate(q, -2.261138934777998, 1);
  sqcRYGate(q, -2.3647988826193775, 2);
  sqcRZGate(q, 0.15464502795158439, 2);
  sqcRYGate(q, -2.92163533190443, 3);
  sqcRZGate(q, -2.933788240467366, 3);
  sqcRYGate(q, 0.5032327172054122, 4);
  sqcRZGate(q, 2.875601433243222, 4);
  sqcRYGate(q, 2.733037685905682, 5);
  sqcRZGate(q, 2.8826036039634624, 5);
  sqcRYGate(q, -2.752249764795205, 6);
  sqcRZGate(q, -1.6267930264259665, 6);
  sqcRYGate(q, -0.18927974633451955, 7);
  sqcRZGate(q, -2.6920131547488313, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.999662030682209, 0);
  sqcRZGate(q, 0.276458445762767, 0);
  sqcRYGate(q, 3.0981011318950067, 1);
  sqcRZGate(q, -0.12570298323005158, 1);
  sqcRYGate(q, -0.2535912481691822, 2);
  sqcRZGate(q, -0.7868476304141693, 2);
  sqcRYGate(q, -2.514848119108503, 3);
  sqcRZGate(q, 2.4919951591557226, 3);
  sqcRYGate(q, 2.57329176793432, 4);
  sqcRZGate(q, 0.6222558849099422, 4);
  sqcRYGate(q, 2.1675301459944816, 5);
  sqcRZGate(q, -1.9337919893157391, 5);
  sqcRYGate(q, -1.9150093597533981, 6);
  sqcRZGate(q, 1.5422753332204255, 6);
  sqcRYGate(q, -2.0656987091959085, 7);
  sqcRZGate(q, -1.1707735140662132, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.0799939998344534, 0);
  sqcRZGate(q, -0.9632257380137085, 0);
  sqcRYGate(q, -2.7725498800145205, 1);
  sqcRZGate(q, -1.547753168098415, 1);
  sqcRYGate(q, 0.1318382224206207, 2);
  sqcRZGate(q, -0.4135068532656465, 2);
  sqcRYGate(q, -0.008983751654062101, 3);
  sqcRZGate(q, -2.1034021505728733, 3);
  sqcRYGate(q, -0.10190618489481107, 4);
  sqcRZGate(q, 0.5928379208649618, 4);
  sqcRYGate(q, 2.0119642585714033, 5);
  sqcRZGate(q, -2.0636363121121004, 5);
  sqcRYGate(q, -0.34271675594711454, 6);
  sqcRZGate(q, -2.5791902432559692, 6);
  sqcRYGate(q, -2.441331631729655, 7);
  sqcRZGate(q, 0.7683174159840279, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.07744599914054097, 0);
  sqcRZGate(q, 0.41325328480180357, 0);
  sqcRYGate(q, 3.067222552170028, 1);
  sqcRZGate(q, -2.1149488857425953, 1);
  sqcRYGate(q, -0.001110346508984783, 2);
  sqcRZGate(q, -0.9578274007159515, 2);
  sqcRYGate(q, -0.1377771229801488, 3);
  sqcRZGate(q, -2.411931195868206, 3);
  sqcRYGate(q, 2.4263222620207365, 4);
  sqcRZGate(q, 3.1410641949374547, 4);
  sqcRYGate(q, 1.2693247940226209, 5);
  sqcRZGate(q, -0.12937046441369943, 5);
  sqcRYGate(q, 1.6429565190932245, 6);
  sqcRZGate(q, -2.380385653895583, 6);
  sqcRYGate(q, -0.6401017206424288, 7);
  sqcRZGate(q, -2.5672888247356997, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.5981048005128795, 0);
  sqcRZGate(q, 0.7961063826205055, 0);
  sqcRYGate(q, -0.6381642082721326, 1);
  sqcRZGate(q, -0.9537426837528348, 1);
  sqcRYGate(q, 0.20211816092644352, 2);
  sqcRZGate(q, 0.6991885257252035, 2);
  sqcRYGate(q, -0.5609485978381461, 3);
  sqcRZGate(q, -2.4329762585614385, 3);
  sqcRYGate(q, -3.0439806428877, 4);
  sqcRZGate(q, -2.990709054414524, 4);
  sqcRYGate(q, 1.1190427437165156, 5);
  sqcRZGate(q, 0.9140141711190148, 5);
  sqcRYGate(q, 2.9170249968477053, 6);
  sqcRZGate(q, -0.4877886913542709, 6);
  sqcRYGate(q, 0.9603342178255279, 7);
  sqcRZGate(q, 2.873738065128086, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.0712997392027983, 0);
  sqcRZGate(q, 0.06631012096555901, 0);
  sqcRYGate(q, -2.967302719045868, 1);
  sqcRZGate(q, 3.067926656897529, 1);
  sqcRYGate(q, -0.9925953124300468, 2);
  sqcRZGate(q, 2.44382923090001, 2);
  sqcRYGate(q, 1.036637240903552, 3);
  sqcRZGate(q, 2.2914060248275763, 3);
  sqcRYGate(q, -0.01368987976301987, 4);
  sqcRZGate(q, -0.42968018577817507, 4);
  sqcRYGate(q, 2.130037071179504, 5);
  sqcRZGate(q, -1.2452203699303643, 5);
  sqcRYGate(q, 3.046724678339463, 6);
  sqcRZGate(q, -0.8135984385885493, 6);
  sqcRYGate(q, -1.4615425608998207, 7);
  sqcRZGate(q, -0.09695057146565582, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5602020088442243, 0);
  sqcRZGate(q, 2.7689216898540865, 0);
  sqcRYGate(q, -0.017273877227500015, 1);
  sqcRZGate(q, 2.9752076014471345, 1);
  sqcRYGate(q, 0.03138524411736565, 2);
  sqcRZGate(q, 2.9509616869646247, 2);
  sqcRYGate(q, 2.5151548458801614, 3);
  sqcRZGate(q, 1.0556845206229506, 3);
  sqcRYGate(q, 3.033911418011501, 4);
  sqcRZGate(q, -2.0771200753003534, 4);
  sqcRYGate(q, 2.2277030390535457, 5);
  sqcRZGate(q, -1.54919663352344, 5);
  sqcRYGate(q, -1.8310852370210535, 6);
  sqcRZGate(q, -1.171627537934139, 6);
  sqcRYGate(q, 2.116285253343065, 7);
  sqcRZGate(q, 0.7269947361100971, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7634189044961843, 0);
  sqcRZGate(q, -1.969303315492446, 0);
  sqcRYGate(q, -2.3198778854390754, 1);
  sqcRZGate(q, 1.6699781796793394, 1);
  sqcRYGate(q, 2.042948813783406, 2);
  sqcRZGate(q, 0.7493213797060932, 2);
  sqcRYGate(q, -0.68148452055497, 3);
  sqcRZGate(q, 0.7470403835635356, 3);
  sqcRYGate(q, 0.07899305299687358, 4);
  sqcRZGate(q, 0.7398986555078269, 4);
  sqcRYGate(q, -2.517703631011003, 5);
  sqcRZGate(q, 1.7003558346417738, 5);
  sqcRYGate(q, -2.2363318569741155, 6);
  sqcRZGate(q, 0.7895526282161088, 6);
  sqcRYGate(q, -3.1131105385285887, 7);
  sqcRZGate(q, -1.7124662125399714, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.5747269378848792, 0);
  sqcRZGate(q, -1.3834166716609118, 0);
  sqcRYGate(q, 0.10559960745786853, 1);
  sqcRZGate(q, 2.0426674179325985, 1);
  sqcRYGate(q, 2.279807551974707, 2);
  sqcRZGate(q, 0.8897232010155404, 2);
  sqcRYGate(q, 1.075988837114287, 3);
  sqcRZGate(q, 1.7275992999675083, 3);
  sqcRYGate(q, 0.16042315445211308, 4);
  sqcRZGate(q, -1.2514757747702197, 4);
  sqcRYGate(q, -1.1233958003676365, 5);
  sqcRZGate(q, 1.5775198063289508, 5);
  sqcRYGate(q, 2.5285940876163275, 6);
  sqcRZGate(q, -1.3282343759879378, 6);
  sqcRYGate(q, 0.5839298543237205, 7);
  sqcRZGate(q, -0.25225452896065487, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.2870820754174135, 0);
  sqcRZGate(q, 1.3042836138187395, 0);
  sqcRYGate(q, 3.099283703029796, 1);
  sqcRZGate(q, -0.9069856405078767, 1);
  sqcRYGate(q, -2.76005300421306, 2);
  sqcRZGate(q, -3.0249836597580586, 2);
  sqcRYGate(q, 1.1066514339634697, 3);
  sqcRZGate(q, 2.348309342739065, 3);
  sqcRYGate(q, 1.2920572864245239, 4);
  sqcRZGate(q, 2.7414954009754338, 4);
  sqcRYGate(q, 3.0856342503648317, 5);
  sqcRZGate(q, -2.184115297293105, 5);
  sqcRYGate(q, -1.7947994859181569, 6);
  sqcRZGate(q, -1.3625365612617142, 6);
  sqcRYGate(q, 1.9847227041066338, 7);
  sqcRZGate(q, 1.4052081155385623, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.7821126898708552, 0);
  sqcRZGate(q, -0.19430447245225307, 0);
  sqcRYGate(q, -0.028811407880075635, 1);
  sqcRZGate(q, 1.406811441756349, 1);
  sqcRYGate(q, -2.7983157413502133, 2);
  sqcRZGate(q, -2.4149497669353703, 2);
  sqcRYGate(q, -1.0193971551242818, 3);
  sqcRZGate(q, -2.870687022422361, 3);
  sqcRYGate(q, 1.4822034021859278, 4);
  sqcRZGate(q, 1.762361238488885, 4);
  sqcRYGate(q, -2.9479905352338363, 5);
  sqcRZGate(q, -1.3640080911792556, 5);
  sqcRYGate(q, 1.9458725610376384, 6);
  sqcRZGate(q, -0.8696951876166645, 6);
  sqcRYGate(q, -2.8831748503142403, 7);
  sqcRZGate(q, 1.7753045602798183, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.10514034092443461, 0);
  sqcRZGate(q, -0.18080641447580348, 0);
  sqcRYGate(q, 3.080913335349826, 1);
  sqcRZGate(q, 0.9123214097170856, 1);
  sqcRYGate(q, 1.2829170429203616, 2);
  sqcRZGate(q, -1.0140320838274919, 2);
  sqcRYGate(q, 2.598367753643458, 3);
  sqcRZGate(q, 3.0747572977389597, 3);
  sqcRYGate(q, -0.31553077755199865, 4);
  sqcRZGate(q, 0.7451062308579502, 4);
  sqcRYGate(q, -3.1360040015900412, 5);
  sqcRZGate(q, 1.2387600658855256, 5);
  sqcRYGate(q, -1.704934280386758, 6);
  sqcRZGate(q, 1.7427509835288555, 6);
  sqcRYGate(q, 3.128026437315929, 7);
  sqcRZGate(q, -3.0888907144964604, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4578870951555853, 0);
  sqcRZGate(q, 2.9462741271493105, 0);
  sqcRYGate(q, 3.1272578674608793, 1);
  sqcRZGate(q, -2.460974846813672, 1);
  sqcRYGate(q, -1.6128130893209214, 2);
  sqcRZGate(q, -1.8938907017255895, 2);
  sqcRYGate(q, 1.67616664681794, 3);
  sqcRZGate(q, -1.7548923637243066, 3);
  sqcRYGate(q, -2.696711865686429, 4);
  sqcRZGate(q, 1.4015178132292938, 4);
  sqcRYGate(q, -2.9294816412834335, 5);
  sqcRZGate(q, -2.7405126253301666, 5);
  sqcRYGate(q, -2.4464453686876095, 6);
  sqcRZGate(q, 0.3618734931942509, 6);
  sqcRYGate(q, -1.1244617923042899, 7);
  sqcRZGate(q, 1.555254732610945, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1291770641944, 0);
  sqcRZGate(q, -0.9808162145818626, 0);
  sqcRYGate(q, 3.0422299645116735, 1);
  sqcRZGate(q, -1.9296709717732616, 1);
  sqcRYGate(q, -0.4209168424221632, 2);
  sqcRZGate(q, -1.0071363684890242, 2);
  sqcRYGate(q, -2.540767217618102, 3);
  sqcRZGate(q, 0.6486028247851428, 3);
  sqcRYGate(q, 0.3563919762410377, 4);
  sqcRZGate(q, -0.25111492017767306, 4);
  sqcRYGate(q, 0.17379571471157973, 5);
  sqcRZGate(q, -3.137515929067185, 5);
  sqcRYGate(q, 1.7984573257626235, 6);
  sqcRZGate(q, -1.5892632385972816, 6);
  sqcRYGate(q, 2.46190542257995, 7);
  sqcRZGate(q, 1.2216227752010254, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.115613764197303, 0);
  sqcRZGate(q, -1.0682970500724815, 0);
  sqcRYGate(q, 3.090536904041207, 1);
  sqcRZGate(q, 2.728252789267035, 1);
  sqcRYGate(q, 3.1381548749034693, 2);
  sqcRZGate(q, -2.325594156771232, 2);
  sqcRYGate(q, -2.3346857120186133, 3);
  sqcRZGate(q, -0.45861544731598874, 3);
  sqcRYGate(q, 1.0975130723148494, 4);
  sqcRZGate(q, 1.3924049924406754, 4);
  sqcRYGate(q, 1.4164017829118796, 5);
  sqcRZGate(q, -3.0922797038886016, 5);
  sqcRYGate(q, -2.317967501152118, 6);
  sqcRZGate(q, -2.831443746786454, 6);
  sqcRYGate(q, 0.2877350186093093, 7);
  sqcRZGate(q, -2.653773418254254, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.9149111211624037, 0);
  sqcRZGate(q, 2.570374481277223, 0);
  sqcRYGate(q, -0.05189087327831633, 1);
  sqcRZGate(q, 0.28026273063300344, 1);
  sqcRYGate(q, 2.1282535877339193, 2);
  sqcRZGate(q, -2.381427631944853, 2);
  sqcRYGate(q, 0.3031209982849363, 3);
  sqcRZGate(q, 0.9169353766640107, 3);
  sqcRYGate(q, -0.4973358274288775, 4);
  sqcRZGate(q, -2.5383489091344433, 4);
  sqcRYGate(q, 0.2939591918058735, 5);
  sqcRZGate(q, 2.0405574465864746, 5);
  sqcRYGate(q, 0.1339041660597733, 6);
  sqcRZGate(q, -3.0884785792540312, 6);
  sqcRYGate(q, 0.34851400939448496, 7);
  sqcRZGate(q, 0.27487324106108224, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.1923529536528834, 0);
  sqcRZGate(q, -0.29796304381847794, 0);
  sqcRYGate(q, 0.3811099389936141, 1);
  sqcRZGate(q, -0.7654312226100402, 1);
  sqcRYGate(q, -0.039242268132073974, 2);
  sqcRZGate(q, 0.5531203435649452, 2);
  sqcRYGate(q, -0.57504692810988, 3);
  sqcRZGate(q, -2.26728841600461, 3);
  sqcRYGate(q, 2.122612078630934, 4);
  sqcRZGate(q, 0.5091280549213586, 4);
  sqcRYGate(q, -2.3317773601067864, 5);
  sqcRZGate(q, -1.6363232274511441, 5);
  sqcRYGate(q, 0.03204792207870597, 6);
  sqcRZGate(q, -1.8374990740595025, 6);
  sqcRYGate(q, 1.703772942376557, 7);
  sqcRZGate(q, -1.9486868838482536, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.8675534424457106, 0);
  sqcRZGate(q, 2.6580835789359822, 0);
  sqcRYGate(q, -3.1215738019311154, 1);
  sqcRZGate(q, -1.2783764030767715, 1);
  sqcRYGate(q, 3.1368929158690215, 2);
  sqcRZGate(q, -0.512168654538924, 2);
  sqcRYGate(q, 2.3822584578481814, 3);
  sqcRZGate(q, 0.4601163695581985, 3);
  sqcRYGate(q, -2.927314803512973, 4);
  sqcRZGate(q, -2.204428989749778, 4);
  sqcRYGate(q, -2.9686703355902004, 5);
  sqcRZGate(q, 2.373447985559086, 5);
  sqcRYGate(q, 0.24823086023037708, 6);
  sqcRZGate(q, -0.8685332546218735, 6);
  sqcRYGate(q, -1.3461607559888296, 7);
  sqcRZGate(q, 0.07132994285473478, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9182559033610557, 0);
  sqcRZGate(q, -1.098676811419319, 0);
  sqcRYGate(q, 0.40750253540945214, 1);
  sqcRZGate(q, -2.555712994650373, 1);
  sqcRYGate(q, 2.986624455782728, 2);
  sqcRZGate(q, -2.3483361949360337, 2);
  sqcRYGate(q, 1.686419449729824, 3);
  sqcRZGate(q, 1.8418750480737003, 3);
  sqcRYGate(q, -1.9762901510760564, 4);
  sqcRZGate(q, -0.8343239912003716, 4);
  sqcRYGate(q, 2.68803901734763, 5);
  sqcRZGate(q, -2.4247605885809786, 5);
  sqcRYGate(q, -0.19275671163844868, 6);
  sqcRZGate(q, 2.3428731351169048, 6);
  sqcRYGate(q, 2.599591274995126, 7);
  sqcRZGate(q, 0.1974432149547494, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.12919691776250009, 0);
  sqcRZGate(q, 0.03436819605655739, 0);
  sqcRYGate(q, 1.3004052464394809, 1);
  sqcRZGate(q, 1.63526393232291, 1);
  sqcRYGate(q, 3.0300271129226415, 2);
  sqcRZGate(q, -2.081839003684921, 2);
  sqcRYGate(q, -0.8497413108386159, 3);
  sqcRZGate(q, 1.322586272350404, 3);
  sqcRYGate(q, -0.9848425787817612, 4);
  sqcRZGate(q, 2.798894533526073, 4);
  sqcRYGate(q, -1.7741497523083698, 5);
  sqcRZGate(q, -2.6149529411798187, 5);
  sqcRYGate(q, 2.594197582350075, 6);
  sqcRZGate(q, -0.5501601777187003, 6);
  sqcRYGate(q, -3.1350575331731036, 7);
  sqcRZGate(q, 2.2177152707061314, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.008187268172061, 0);
  sqcRZGate(q, 0.8383720511982586, 0);
  sqcRYGate(q, -0.5121330585189705, 1);
  sqcRZGate(q, 2.577413998598741, 1);
  sqcRYGate(q, 0.37458364982161996, 2);
  sqcRZGate(q, 0.049642812506011526, 2);
  sqcRYGate(q, 2.561480556549554, 3);
  sqcRZGate(q, -2.001955342755326, 3);
  sqcRYGate(q, -1.2568393145432601, 4);
  sqcRZGate(q, -0.13458050803100186, 4);
  sqcRYGate(q, 2.9127689348821604, 5);
  sqcRZGate(q, 0.8237222100306834, 5);
  sqcRYGate(q, -1.548099873370484, 6);
  sqcRZGate(q, -0.048291167114442146, 6);
  sqcRYGate(q, 0.7822137104453072, 7);
  sqcRZGate(q, 2.9273968040052245, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.073012471274847, 0);
  sqcRZGate(q, 0.621591624921761, 0);
  sqcRYGate(q, 0.06834122438245949, 1);
  sqcRZGate(q, 2.93314042687624, 1);
  sqcRYGate(q, -1.5393951690371246, 2);
  sqcRZGate(q, 2.7078177357166116, 2);
  sqcRYGate(q, 0.33081071364767656, 3);
  sqcRZGate(q, 2.7383498281684298, 3);
  sqcRYGate(q, -2.247357366288601, 4);
  sqcRZGate(q, 1.3112514703984433, 4);
  sqcRYGate(q, 0.8378524745228202, 5);
  sqcRZGate(q, 0.1276296105899961, 5);
  sqcRYGate(q, 1.099990711041527, 6);
  sqcRZGate(q, 0.30139133001140644, 6);
  sqcRYGate(q, -2.8759912923211357, 7);
  sqcRZGate(q, -3.005753741249055, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.004375082633943, 0);
  sqcRZGate(q, -2.5818766825950066, 0);
  sqcRYGate(q, 2.7194198803380885, 1);
  sqcRZGate(q, 0.03359574556729105, 1);
  sqcRYGate(q, -2.6886162169101313, 2);
  sqcRZGate(q, -1.2522087732757505, 2);
  sqcRYGate(q, -0.10559341518971865, 3);
  sqcRZGate(q, -0.12516798221665582, 3);
  sqcRYGate(q, 2.9004183720542707, 4);
  sqcRZGate(q, 1.998922898575585, 4);
  sqcRYGate(q, -2.5909039983980304, 5);
  sqcRZGate(q, 2.090628095388417, 5);
  sqcRYGate(q, 1.09150874000846, 6);
  sqcRZGate(q, -0.9915502737326519, 6);
  sqcRYGate(q, 2.080389886309588, 7);
  sqcRZGate(q, -1.231188288401661, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.366750687653186, 0);
  sqcRZGate(q, -0.16000267361164053, 0);
  sqcRYGate(q, -0.769527092818346, 1);
  sqcRZGate(q, 2.9330548962045078, 1);
  sqcRYGate(q, 0.03144602970137811, 2);
  sqcRZGate(q, 0.18773818774397721, 2);
  sqcRYGate(q, -2.5233731260016987, 3);
  sqcRZGate(q, -0.9238525787348112, 3);
  sqcRYGate(q, 3.069745345239502, 4);
  sqcRZGate(q, -1.2083444565119854, 4);
  sqcRYGate(q, -2.902710209893696, 5);
  sqcRZGate(q, -2.5471956309766375, 5);
  sqcRYGate(q, -1.070322423085913, 6);
  sqcRZGate(q, -2.7647924870222957, 6);
  sqcRYGate(q, 0.18720274191552097, 7);
  sqcRZGate(q, -0.536463966360568, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.090079002329957, 0);
  sqcRZGate(q, 2.8263518552698117, 0);
  sqcRYGate(q, 1.923610984598087, 1);
  sqcRZGate(q, 1.5192596584778306, 1);
  sqcRYGate(q, 0.04072500362818723, 2);
  sqcRZGate(q, -0.8623063547872888, 2);
  sqcRYGate(q, -0.1292824370586557, 3);
  sqcRZGate(q, 1.1141336533175439, 3);
  sqcRYGate(q, 2.946364254600269, 4);
  sqcRZGate(q, -0.6644331836407225, 4);
  sqcRYGate(q, 2.928726547508658, 5);
  sqcRZGate(q, 1.3852114722583297, 5);
  sqcRYGate(q, 0.17833115183613035, 6);
  sqcRZGate(q, 0.9534434718905572, 6);
  sqcRYGate(q, -2.5539144375988814, 7);
  sqcRZGate(q, -0.9169222891867329, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.907830069415175, 0);
  sqcRZGate(q, -0.5678315991948947, 0);
  sqcRYGate(q, 1.5183432333313327, 1);
  sqcRZGate(q, 1.7012606488066497, 1);
  sqcRYGate(q, -1.5812782088456052, 2);
  sqcRZGate(q, 1.5559400043115923, 2);
  sqcRYGate(q, -2.7839602298520387, 3);
  sqcRZGate(q, 0.06286749624178614, 3);
  sqcRYGate(q, -2.996123696341194, 4);
  sqcRZGate(q, 2.405720894380701, 4);
  sqcRYGate(q, -2.669666993170778, 5);
  sqcRZGate(q, 2.436046442447746, 5);
  sqcRYGate(q, -2.126338081896924, 6);
  sqcRZGate(q, -2.4818599907290704, 6);
  sqcRYGate(q, 0.12008577426707223, 7);
  sqcRZGate(q, 2.0043498432834608, 7);

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
