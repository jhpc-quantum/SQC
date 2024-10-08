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

  sqcRYGate(q, 0.6908798017795181, 0);
  sqcRYGate(q, 0.6692497709262956, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7677734688651476, 0);
  sqcRYGate(q, 1.1412776461580603, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1907257769692858, 0);
  sqcRYGate(q, 0.6207829795756378, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.23050176072983317, 0);
  sqcRYGate(q, -1.5724923935221176, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3806524358861827, 0);
  sqcRYGate(q, 0.11455570413748034, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6865070128150665, 0);
  sqcRYGate(q, -1.9881319354313505, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.10108471076129, 1);
  sqcRYGate(q, 0.4863018791380025, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6786916055518342, 1);
  sqcRYGate(q, -2.297943088914462, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9601343055681335, 1);
  sqcRYGate(q, 2.6344678847919565, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4420124408793405, 1);
  sqcRYGate(q, 1.0244055661386327, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0499055754923603, 2);
  sqcRYGate(q, -1.8932270371866489, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.43978223323415033, 2);
  sqcRYGate(q, 2.4791654687289353, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.338694027866969, 0);
  sqcRYGate(q, -0.5982437309425395, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9136452637553383, 0);
  sqcRYGate(q, 1.6295983822893974, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2991036689132507, 0);
  sqcRYGate(q, -2.450738821149858, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.754028825364716, 0);
  sqcRYGate(q, 0.6002424133445299, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.396218508099601, 0);
  sqcRYGate(q, -2.2576794981039723, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1265897274570413, 0);
  sqcRYGate(q, -2.966268852419837, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4838922628041642, 1);
  sqcRYGate(q, 0.0844147921556555, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5035925303048856, 1);
  sqcRYGate(q, 0.044198967463611925, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3814868116859538, 1);
  sqcRYGate(q, 1.6915976021659542, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.376164878632066, 1);
  sqcRYGate(q, -1.2290622543091914, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9168165131521706, 2);
  sqcRYGate(q, 1.911086226528825, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.988889371919745, 2);
  sqcRYGate(q, -1.7472034801798277, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.46512272593985765, 0);
  sqcRYGate(q, 1.5913243933972439, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.903609469513511, 0);
  sqcRYGate(q, -0.5131950045263395, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1015996667916355, 0);
  sqcRYGate(q, 1.1908000364695528, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7429108065653125, 0);
  sqcRYGate(q, 2.821247412184204, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.31224850838928725, 0);
  sqcRYGate(q, -2.048889936106135, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.10289941796177525, 0);
  sqcRYGate(q, 2.1098865601916055, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5664118842579573, 1);
  sqcRYGate(q, 2.0344068246128826, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0495232726196893, 1);
  sqcRYGate(q, -1.5557987970996445, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1022329075403361, 1);
  sqcRYGate(q, -2.5425861002306784, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5931246046889278, 1);
  sqcRYGate(q, 0.31176378806061145, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.437627795933894, 2);
  sqcRYGate(q, -2.9028368234167843, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1387705417722174, 2);
  sqcRYGate(q, 1.0711468698336528, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8745183498361007, 0);
  sqcRYGate(q, 1.6972872525156673, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5940066174598025, 0);
  sqcRYGate(q, -1.6623975562894833, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2934931364578126, 0);
  sqcRYGate(q, -0.54903127988009, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2390665400103877, 0);
  sqcRYGate(q, -2.7683847193311153, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2362370728956105, 0);
  sqcRYGate(q, 2.7464238732828217, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.681284371755782, 0);
  sqcRYGate(q, -0.06686556348152177, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9622170100681764, 1);
  sqcRYGate(q, 0.74736495299463, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6147656565866029, 1);
  sqcRYGate(q, 2.9476529416988857, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6979508010651836, 1);
  sqcRYGate(q, 0.7577969975839842, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.41783582888539, 1);
  sqcRYGate(q, -1.7987193576415317, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6373055194915658, 2);
  sqcRYGate(q, -2.584154945881358, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.747458291457965, 2);
  sqcRYGate(q, 2.7858441724816707, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.288058803870476, 0);
  sqcRYGate(q, 3.035037810137808, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.044076754319468, 0);
  sqcRYGate(q, 1.2053660452295833, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.006509249384552, 0);
  sqcRYGate(q, 2.308837367759427, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.30415623161127847, 0);
  sqcRYGate(q, -3.081225273856392, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.807926919488208, 0);
  sqcRYGate(q, -2.666144810295005, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0364814862315694, 0);
  sqcRYGate(q, -1.8626653838145335, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.40726278758545004, 1);
  sqcRYGate(q, 0.8944752144296615, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6037666761489655, 1);
  sqcRYGate(q, -2.860222759907096, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0722482835837033, 1);
  sqcRYGate(q, 1.114425308932248, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2726729697429356, 1);
  sqcRYGate(q, -1.0578008733975333, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.170443888391328, 2);
  sqcRYGate(q, 2.4398993864292193, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8089391459442457, 2);
  sqcRYGate(q, 2.2989779583433956, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4188285111364678, 0);
  sqcRYGate(q, -0.9622624845204522, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.348473360704239, 0);
  sqcRYGate(q, -0.1658680206062266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.006917439964515992, 0);
  sqcRYGate(q, 0.6497319406022996, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6415650664092545, 0);
  sqcRYGate(q, 0.8788949723395971, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.987962219333734, 0);
  sqcRYGate(q, -2.418461785632516, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.525083294828822, 0);
  sqcRYGate(q, -0.6802939911764536, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9041836946705867, 1);
  sqcRYGate(q, -2.179524503784537, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.46896503784079, 1);
  sqcRYGate(q, 1.8536448819159401, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.44836365024546154, 1);
  sqcRYGate(q, -0.3751668074479558, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3652216301733482, 1);
  sqcRYGate(q, -2.9197643296491953, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.752150854686434, 2);
  sqcRYGate(q, -1.9415872659823448, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.942560792064358, 2);
  sqcRYGate(q, -3.139759443880387, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8749366774795186, 0);
  sqcRYGate(q, 1.5379038097998636, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.383692320215727, 0);
  sqcRYGate(q, -2.6390065231616244, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4979478154527098, 0);
  sqcRYGate(q, 1.9874351493992082, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1510675023683294, 0);
  sqcRYGate(q, -1.3908550073319406, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0373658377092703, 0);
  sqcRYGate(q, -0.6957661875630929, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.08283515071598, 0);
  sqcRYGate(q, -0.7831235065293365, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.11888659905367009, 1);
  sqcRYGate(q, -0.36579535351114334, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.682670217637967, 1);
  sqcRYGate(q, 1.5282609445778714, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.068182715097003, 1);
  sqcRYGate(q, -0.99175409010856, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.21654692330464975, 1);
  sqcRYGate(q, 0.17764568647840218, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7247953860998235, 2);
  sqcRYGate(q, -0.7665607588011666, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.445180787906881, 2);
  sqcRYGate(q, 1.0223672082578394, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5557893548916015, 0);
  sqcRYGate(q, 1.3002880977547147, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5903082047208894, 0);
  sqcRYGate(q, 0.6297265648266946, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.045708533776136484, 0);
  sqcRYGate(q, -0.3376915627179412, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5811882293248627, 0);
  sqcRYGate(q, 1.7791099385513158, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3167854785518622, 0);
  sqcRYGate(q, -0.7042241078748753, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7115175300025323, 0);
  sqcRYGate(q, -1.7683970554469726, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.111916258754821, 1);
  sqcRYGate(q, 0.5741900198107217, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.290146478159904, 1);
  sqcRYGate(q, 2.3479349218025116, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3067555116695235, 1);
  sqcRYGate(q, 1.2690686279608636, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1587671513563638, 1);
  sqcRYGate(q, -2.8696968144449597, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7661310873538731, 2);
  sqcRYGate(q, -0.38774708914807093, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.362045262526162, 2);
  sqcRYGate(q, -0.7567783453023474, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9803150993812566, 0);
  sqcRYGate(q, -0.06890358228778957, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.40451306343751986, 0);
  sqcRYGate(q, -2.100369532173371, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.28190343340497737, 0);
  sqcRYGate(q, -1.0022018356254687, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7608391946771156, 0);
  sqcRYGate(q, -0.2302198307892711, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2575488788493088, 0);
  sqcRYGate(q, -1.8776736303642636, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2956442228145524, 0);
  sqcRYGate(q, 0.8904353956486352, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4120801414552796, 1);
  sqcRYGate(q, 1.5939323455150323, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2174974605498267, 1);
  sqcRYGate(q, 0.38439431100853744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3315935015850453, 1);
  sqcRYGate(q, 0.5919839011069685, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4034385559541955, 1);
  sqcRYGate(q, 2.0125000790227574, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0891975861099545, 2);
  sqcRYGate(q, 2.3664220904062514, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10707087140341727, 2);
  sqcRYGate(q, 2.1040711866457125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.10117349332651114, 0);
  sqcRYGate(q, -1.50088104768438, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.535488329348787, 0);
  sqcRYGate(q, 2.2482470573091122, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.370237944261105, 0);
  sqcRYGate(q, 1.2710234657625028, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.628823846762931, 0);
  sqcRYGate(q, 2.110304239294904, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9251722808968617, 0);
  sqcRYGate(q, -2.6655250911408404, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8342305184012817, 0);
  sqcRYGate(q, 0.008927485805129367, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.675770657361147, 1);
  sqcRYGate(q, -3.055027637713191, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.893905254363629, 1);
  sqcRYGate(q, 0.600117842683754, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.462189634556395, 1);
  sqcRYGate(q, -2.9574429962186723, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7932839790919535, 1);
  sqcRYGate(q, 2.5490839653176947, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.126509214807802, 2);
  sqcRYGate(q, 1.9082851500903297, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3193625496228734, 2);
  sqcRYGate(q, -0.15337688865938665, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.942914938127486, 0);
  sqcRYGate(q, -3.055368252853997, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9455957181947089, 0);
  sqcRYGate(q, 1.8989360559510229, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.46155739962923, 0);
  sqcRYGate(q, 1.3626694908430736, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1125987917634954, 0);
  sqcRYGate(q, -2.497224055260015, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.955339089413262, 0);
  sqcRYGate(q, 1.5831376621015172, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3542369144707727, 0);
  sqcRYGate(q, 2.7846811227787445, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8470554341749383, 1);
  sqcRYGate(q, -1.653090007982685, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.193956385106019, 1);
  sqcRYGate(q, -1.3299221531508234, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6141102681494743, 1);
  sqcRYGate(q, 2.2455744987354924, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7715756930132587, 1);
  sqcRYGate(q, -2.0687292881476864, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5185140367991377, 2);
  sqcRYGate(q, -1.3348596055716282, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0054277993316814, 2);
  sqcRYGate(q, -2.5558920813126447, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6435634307895758, 0);
  sqcRYGate(q, -0.1621731912474571, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1389758126170184, 0);
  sqcRYGate(q, 1.359305053090577, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3949784243574825, 0);
  sqcRYGate(q, -1.6719729144279936, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5317196551824694, 0);
  sqcRYGate(q, 3.086687828223219, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9614526195739788, 0);
  sqcRYGate(q, 2.1895098799442048, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7194160980078133, 0);
  sqcRYGate(q, 1.0256691472633372, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8387107053253082, 1);
  sqcRYGate(q, 2.286659566090215, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7399945236796759, 1);
  sqcRYGate(q, -0.9818308643949161, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0907813158546835, 1);
  sqcRYGate(q, 2.7359107285182502, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4429535782910328, 1);
  sqcRYGate(q, -2.2802137838853884, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5549672948653863, 2);
  sqcRYGate(q, 2.1062269167666323, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0978405692613826, 2);
  sqcRYGate(q, -1.2026962518629996, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.230392109159277, 0);
  sqcRYGate(q, -2.4765898627822422, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5483223916879192, 0);
  sqcRYGate(q, 1.2899070361160925, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.35141918403566824, 0);
  sqcRYGate(q, 0.16694997631716912, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0577397786210474, 0);
  sqcRYGate(q, -2.745910140559785, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6460313509778884, 0);
  sqcRYGate(q, -0.8155017736583658, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.2613310163028375, 0);
  sqcRYGate(q, -1.030800015417555, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4757735351032322, 1);
  sqcRYGate(q, 1.7234753622339092, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.020824994131133, 1);
  sqcRYGate(q, -1.5078486547319097, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3975942587847958, 1);
  sqcRYGate(q, -2.680048475451315, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7292764433223006, 1);
  sqcRYGate(q, 1.0213531184749394, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.32748185098692617, 2);
  sqcRYGate(q, -2.029412682410414, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.788607030686211, 2);
  sqcRYGate(q, -0.17434969732077835, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0768065061915295, 0);
  sqcRYGate(q, -0.8526679970822618, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0290516452273195, 0);
  sqcRYGate(q, 1.0530848009364098, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.055503898060726, 0);
  sqcRYGate(q, 0.5476030777530516, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6438483172462357, 0);
  sqcRYGate(q, -0.7502907992961028, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6481634258957998, 0);
  sqcRYGate(q, -1.8589090121570013, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.095269702552952, 0);
  sqcRYGate(q, 0.5670491373135541, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.3705619786517595, 1);
  sqcRYGate(q, -0.8209829220953591, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6876173283042744, 1);
  sqcRYGate(q, 2.7470035767530416, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.40956578067826516, 1);
  sqcRYGate(q, -2.997446935394398, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7332306181444435, 1);
  sqcRYGate(q, -0.10574003011090728, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9989028509583315, 2);
  sqcRYGate(q, 2.090689479360559, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.11428141500813549, 2);
  sqcRYGate(q, -0.1782550401100932, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1782216306484838, 0);
  sqcRYGate(q, -0.5706083486728657, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0086477207147984, 0);
  sqcRYGate(q, -1.9386062513723843, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1045491441141613, 0);
  sqcRYGate(q, 0.7283712983005559, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2455586981611524, 0);
  sqcRYGate(q, -0.024758549424775483, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3913726616902555, 0);
  sqcRYGate(q, -0.7353148938368707, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5501654752764061, 0);
  sqcRYGate(q, -0.7668998762034697, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.274182408165031, 1);
  sqcRYGate(q, -2.7954875393829575, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.08580090144590802, 1);
  sqcRYGate(q, -0.8880312452055539, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4908855550774784, 1);
  sqcRYGate(q, -1.5513913888108868, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2895487700051671, 1);
  sqcRYGate(q, 1.9040072093294211, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3802085073663823, 2);
  sqcRYGate(q, -1.6974620657500896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5142024458232095, 2);
  sqcRYGate(q, -2.1423470922172885, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6078102703896828, 0);
  sqcRYGate(q, -3.0920951610016267, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4278944129324955, 0);
  sqcRYGate(q, -2.6764106047215686, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.539311353649684, 0);
  sqcRYGate(q, -2.879725382942393, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5545915257949887, 0);
  sqcRYGate(q, 2.591656993319817, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8527156081868176, 0);
  sqcRYGate(q, 0.030951184071814592, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3421213062470265, 0);
  sqcRYGate(q, 2.798050863509041, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5612874734878135, 1);
  sqcRYGate(q, 1.1320174101695923, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3695492231283843, 1);
  sqcRYGate(q, -2.4172138864936485, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0502080890688275, 1);
  sqcRYGate(q, -1.2783419226972639, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1462129445512579, 1);
  sqcRYGate(q, 0.7335358304542438, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8541864207798913, 2);
  sqcRYGate(q, -2.5807875825533024, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8805660350090276, 2);
  sqcRYGate(q, 0.7329006075720237, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4950591499662027, 0);
  sqcRYGate(q, 1.2885697459030498, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7801327124846633, 0);
  sqcRYGate(q, -2.1671220602300263, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.967136356489869, 0);
  sqcRYGate(q, -0.06066463252276488, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5409177992766088, 0);
  sqcRYGate(q, 0.5528955754054896, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8465414881673858, 0);
  sqcRYGate(q, -1.6151495827216504, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7980048339164763, 0);
  sqcRYGate(q, 3.0803482234231017, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9371795603140551, 1);
  sqcRYGate(q, 0.15029036125271464, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6255630038880929, 1);
  sqcRYGate(q, 3.082194904418869, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7824009658203692, 1);
  sqcRYGate(q, 0.06613148407817503, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7807372641794393, 1);
  sqcRYGate(q, -2.1816365242633857, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.04658218859073422, 2);
  sqcRYGate(q, -2.163657866412165, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3199060740186581, 2);
  sqcRYGate(q, -0.21499851569449202, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7815124025180058, 0);
  sqcRYGate(q, 2.061188409341736, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0370108460072878, 0);
  sqcRYGate(q, -0.782582067802977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.23473048641977953, 0);
  sqcRYGate(q, -0.7488982656038319, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9995618086283793, 0);
  sqcRYGate(q, 2.1408421595612896, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.162992803883981, 0);
  sqcRYGate(q, -0.35152043768049257, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0432002169133066, 0);
  sqcRYGate(q, 2.5340144926569708, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0291275427512425, 1);
  sqcRYGate(q, -0.579170208757966, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9786927858960937, 1);
  sqcRYGate(q, 1.850820158240762, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.32547834641726, 1);
  sqcRYGate(q, 3.066922503213415, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.069354745296798, 1);
  sqcRYGate(q, -0.10149770276742838, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2153954340662394, 2);
  sqcRYGate(q, -1.1298090241571188, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8640799661614902, 2);
  sqcRYGate(q, -0.5100675542789782, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.595496559291326, 0);
  sqcRYGate(q, -2.185083644183786, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.285584964816632, 0);
  sqcRYGate(q, -1.1346723194783666, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.103353672733723, 0);
  sqcRYGate(q, -2.058903106022821, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6221574531809981, 0);
  sqcRYGate(q, 2.817816232280364, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.562822755780545, 0);
  sqcRYGate(q, -1.5164795693406186, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9674048907597683, 0);
  sqcRYGate(q, 0.30038796124848405, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7363148958131167, 1);
  sqcRYGate(q, 0.8274853519914942, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4629704721544146, 1);
  sqcRYGate(q, 1.0700845049068355, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.34911340447907513, 1);
  sqcRYGate(q, -2.6158021465491093, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2100619081600252, 1);
  sqcRYGate(q, -1.1619481922687636, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.05529974882540145, 2);
  sqcRYGate(q, -2.7090778934816413, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9109463882496613, 2);
  sqcRYGate(q, -2.079058867220587, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9054907447298073, 0);
  sqcRYGate(q, -1.7335644123974978, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1377691421962637, 0);
  sqcRYGate(q, 1.9954805842064918, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.593645824579109, 0);
  sqcRYGate(q, -2.350775214340262, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5248104324343679, 0);
  sqcRYGate(q, 0.815349494610179, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3955224393532246, 0);
  sqcRYGate(q, -1.2001152024629933, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6303880592103477, 0);
  sqcRYGate(q, 2.612977185634629, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7093581073670352, 1);
  sqcRYGate(q, -1.7196964490017488, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7883600706762333, 1);
  sqcRYGate(q, 0.2144988104103792, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4185271268286583, 1);
  sqcRYGate(q, -0.5280590281028997, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7570159447043467, 1);
  sqcRYGate(q, 1.3969488332648494, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.537654414168311, 2);
  sqcRYGate(q, 0.3383905892478833, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3155469230994327, 2);
  sqcRYGate(q, -1.8992168365754205, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.696502052773096, 0);
  sqcRYGate(q, 0.8704126682971962, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.667663372386502, 0);
  sqcRYGate(q, 2.340791349878093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.079795140794724, 0);
  sqcRYGate(q, -2.4191545222626605, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.850980911450102, 0);
  sqcRYGate(q, -2.189316221233952, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.266087459705072, 0);
  sqcRYGate(q, -1.9376306202678548, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.4610117764542703, 0);
  sqcRYGate(q, 3.0232065115719706, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.45368791352241, 1);
  sqcRYGate(q, -2.71919812339331, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9648107280465101, 1);
  sqcRYGate(q, 0.34121393092461105, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.177756444787544, 1);
  sqcRYGate(q, 2.824594528726522, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3203337487162505, 1);
  sqcRYGate(q, -1.847259671297028, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.409608941335709, 2);
  sqcRYGate(q, -0.2256895870299376, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1553348514743527, 2);
  sqcRYGate(q, -2.4579994234814997, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0724380986221225, 0);
  sqcRYGate(q, 1.158636294032485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.767928510235566, 0);
  sqcRYGate(q, 0.6141070882855759, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.685142316399129, 0);
  sqcRYGate(q, 1.1242612905684801, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.540699836760819, 0);
  sqcRYGate(q, 0.06271757898658237, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2434536319048437, 0);
  sqcRYGate(q, -3.1056662619295063, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6127484063901623, 0);
  sqcRYGate(q, 2.0328541533384836, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.572795276626799, 1);
  sqcRYGate(q, -0.864870917288444, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9235850787221372, 1);
  sqcRYGate(q, 2.279858764110398, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7474357255635082, 1);
  sqcRYGate(q, 0.6987358579203359, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9442737770328078, 1);
  sqcRYGate(q, 2.605372040552134, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1130737829361967, 2);
  sqcRYGate(q, 1.204036066075636, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9029587170414404, 2);
  sqcRYGate(q, 1.411535971687811, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6471348381434376, 0);
  sqcRYGate(q, 1.45083694655523, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4969817382030657, 0);
  sqcRYGate(q, -0.5255965794451682, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8474719179963226, 0);
  sqcRYGate(q, -1.5419796917594102, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.967753264566314, 0);
  sqcRYGate(q, -3.08780201731152, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.18153299455789298, 0);
  sqcRYGate(q, -3.0615485980317874, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2898411836585586, 0);
  sqcRYGate(q, -1.55665553598617, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1204665416367297, 1);
  sqcRYGate(q, -2.9307385378744586, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7411225694113703, 1);
  sqcRYGate(q, 2.2444672946082793, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5614237556940826, 1);
  sqcRYGate(q, 2.342374558083615, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4554884829309283, 1);
  sqcRYGate(q, 2.8732889087514786, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8766468198752513, 2);
  sqcRYGate(q, -0.41029847656660867, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8157591360496497, 2);
  sqcRYGate(q, -1.2836053256755378, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.569134418820899, 0);
  sqcRYGate(q, 1.9796058409742328, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.833666729450665, 0);
  sqcRYGate(q, -2.5527577958122114, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9692998218032987, 0);
  sqcRYGate(q, 2.6787867475612623, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.126409980089898, 0);
  sqcRYGate(q, 2.7979143858413065, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.26365182294656536, 0);
  sqcRYGate(q, -2.6408812491582974, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7630623504128538, 0);
  sqcRYGate(q, 0.594540407781702, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7058743232658573, 1);
  sqcRYGate(q, -0.854070146758148, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9847815540440497, 1);
  sqcRYGate(q, 0.43543567610569056, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6008018544669431, 1);
  sqcRYGate(q, 0.41953131007888, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1781244717688102, 1);
  sqcRYGate(q, -2.8037703995842342, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0904498756203127, 2);
  sqcRYGate(q, -2.31088827069382, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.066202066693788, 2);
  sqcRYGate(q, 0.25519828936730793, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.957768183120683, 0);
  sqcRYGate(q, -2.5630189854059373, 1);
  sqcRYGate(q, 2.9897396447218494, 2);
  sqcRYGate(q, -1.1159941413622116, 3);

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
