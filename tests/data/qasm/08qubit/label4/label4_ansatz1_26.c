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

  sqcRYGate(q, -1.2639966428982303, 0);
  sqcRZGate(q, -0.4013126303888557, 0);
  sqcRYGate(q, 2.518580304646344, 1);
  sqcRZGate(q, -2.439196125081697, 1);
  sqcRYGate(q, -2.3749236474096813, 2);
  sqcRZGate(q, -2.07764654207272, 2);
  sqcRYGate(q, -2.2240757486683265, 3);
  sqcRZGate(q, 2.2755879948833413, 3);
  sqcRYGate(q, 1.2133627495109518, 4);
  sqcRZGate(q, 2.3666744232435755, 4);
  sqcRYGate(q, -2.7912549261768245, 5);
  sqcRZGate(q, -1.2682956425466303, 5);
  sqcRYGate(q, -2.076073530233505, 6);
  sqcRZGate(q, 0.14033099185844122, 6);
  sqcRYGate(q, -3.042993400185002, 7);
  sqcRZGate(q, 2.0565600435901557, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.2071804768658714, 0);
  sqcRZGate(q, 0.47795856804291065, 0);
  sqcRYGate(q, 2.721619902858641, 1);
  sqcRZGate(q, 0.2552577020732789, 1);
  sqcRYGate(q, 2.3876680813102262, 2);
  sqcRZGate(q, 0.6795204257760559, 2);
  sqcRYGate(q, -1.8939235410950186, 3);
  sqcRZGate(q, 0.4572384181882161, 3);
  sqcRYGate(q, -0.9428551869085062, 4);
  sqcRZGate(q, -0.009293573211580865, 4);
  sqcRYGate(q, 0.2845140721997854, 5);
  sqcRZGate(q, -2.459046533455039, 5);
  sqcRYGate(q, -1.4145655040162097, 6);
  sqcRZGate(q, 1.8140318271552727, 6);
  sqcRYGate(q, -2.1370335022099805, 7);
  sqcRZGate(q, 0.6048671521410967, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.404512044083102, 0);
  sqcRZGate(q, -1.8382348601162812, 0);
  sqcRYGate(q, -0.16283783303625932, 1);
  sqcRZGate(q, -1.6052057961905268, 1);
  sqcRYGate(q, 0.3912285494096161, 2);
  sqcRZGate(q, 0.6871036895566789, 2);
  sqcRYGate(q, -0.778356925075797, 3);
  sqcRZGate(q, 1.3478422923009008, 3);
  sqcRYGate(q, 0.776802254507505, 4);
  sqcRZGate(q, -2.809344640883591, 4);
  sqcRYGate(q, -1.8783229925922589, 5);
  sqcRZGate(q, -2.3737548946015026, 5);
  sqcRYGate(q, -0.5584313562864329, 6);
  sqcRZGate(q, 0.26748459260996044, 6);
  sqcRYGate(q, 0.7254351161128696, 7);
  sqcRZGate(q, 0.43823733699691575, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.73233111501536, 0);
  sqcRZGate(q, 0.8533362106041774, 0);
  sqcRYGate(q, 1.0923266860883958, 1);
  sqcRZGate(q, 2.419665403164776, 1);
  sqcRYGate(q, -2.150995219558345, 2);
  sqcRZGate(q, 0.1846994742830894, 2);
  sqcRYGate(q, 0.29732908349425013, 3);
  sqcRZGate(q, -1.308820061249735, 3);
  sqcRYGate(q, 1.5433804345087987, 4);
  sqcRZGate(q, 3.000502330790749, 4);
  sqcRYGate(q, -2.54533346172953, 5);
  sqcRZGate(q, 3.03385398458576, 5);
  sqcRYGate(q, -2.142492847984438, 6);
  sqcRZGate(q, -1.3129173899590025, 6);
  sqcRYGate(q, 2.0951836285853824, 7);
  sqcRZGate(q, -2.2901349670070617, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.9286809821734785, 0);
  sqcRZGate(q, -1.2994702743610258, 0);
  sqcRYGate(q, 0.4755422506687363, 1);
  sqcRZGate(q, -0.06664363769760229, 1);
  sqcRYGate(q, -0.18451505941746849, 2);
  sqcRZGate(q, -1.4236057656700822, 2);
  sqcRYGate(q, -0.5965551347583122, 3);
  sqcRZGate(q, 3.1209306194070834, 3);
  sqcRYGate(q, 0.13812593064335046, 4);
  sqcRZGate(q, 2.9189842665753805, 4);
  sqcRYGate(q, 1.379230150441543, 5);
  sqcRZGate(q, -2.6812985360541512, 5);
  sqcRYGate(q, -0.7713354785815012, 6);
  sqcRZGate(q, -0.0243700475497666, 6);
  sqcRYGate(q, -1.2137073084147867, 7);
  sqcRZGate(q, 1.805954972636107, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9845566630561953, 0);
  sqcRZGate(q, -1.7068050758417534, 0);
  sqcRYGate(q, 1.6486129655705986, 1);
  sqcRZGate(q, -1.164921353562404, 1);
  sqcRYGate(q, 1.0792779179743395, 2);
  sqcRZGate(q, -1.9215298935802059, 2);
  sqcRYGate(q, 1.4874425022061661, 3);
  sqcRZGate(q, -2.324361192919652, 3);
  sqcRYGate(q, 2.7476018368564237, 4);
  sqcRZGate(q, 0.5661326575956949, 4);
  sqcRYGate(q, -0.2534285819632123, 5);
  sqcRZGate(q, -0.39744657751959245, 5);
  sqcRYGate(q, -0.8664980122825998, 6);
  sqcRZGate(q, -3.1246553166574924, 6);
  sqcRYGate(q, -1.5150401742843647, 7);
  sqcRZGate(q, -1.6178189979629352, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.8739535689644677, 0);
  sqcRZGate(q, -1.3957934722278678, 0);
  sqcRYGate(q, -2.7261598633895123, 1);
  sqcRZGate(q, 2.4890820804085916, 1);
  sqcRYGate(q, -2.904628260738388, 2);
  sqcRZGate(q, 2.5091063816163444, 2);
  sqcRYGate(q, -0.8820541026373419, 3);
  sqcRZGate(q, -0.9325983924057261, 3);
  sqcRYGate(q, 1.7868135818025017, 4);
  sqcRZGate(q, -1.6723600437857085, 4);
  sqcRYGate(q, -1.9384688343213043, 5);
  sqcRZGate(q, 0.3008419892612769, 5);
  sqcRYGate(q, -1.3986273881154574, 6);
  sqcRZGate(q, 0.9203937475593258, 6);
  sqcRYGate(q, 2.0689902997769476, 7);
  sqcRZGate(q, -0.3872053861417442, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.2303292445319034, 0);
  sqcRZGate(q, -2.9918609875230313, 0);
  sqcRYGate(q, -1.3694852777064832, 1);
  sqcRZGate(q, 0.3380150805747335, 1);
  sqcRYGate(q, -2.5516350121950246, 2);
  sqcRZGate(q, -1.248595265741855, 2);
  sqcRYGate(q, -1.7567095522044949, 3);
  sqcRZGate(q, -0.5549713121889877, 3);
  sqcRYGate(q, 1.926041242308366, 4);
  sqcRZGate(q, 2.2810368998063657, 4);
  sqcRYGate(q, -0.39655955144442895, 5);
  sqcRZGate(q, -0.862759603701514, 5);
  sqcRYGate(q, 0.5788688770777979, 6);
  sqcRZGate(q, 0.42372635317861795, 6);
  sqcRYGate(q, 1.418654830458686, 7);
  sqcRZGate(q, 1.0058708708466082, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.9230876137110071, 0);
  sqcRZGate(q, 0.30847032625386317, 0);
  sqcRYGate(q, 0.4744389709631215, 1);
  sqcRZGate(q, 2.3035298809595246, 1);
  sqcRYGate(q, -0.9491120958343108, 2);
  sqcRZGate(q, 0.9121740839106165, 2);
  sqcRYGate(q, 2.142893142921055, 3);
  sqcRZGate(q, -1.1686557002312763, 3);
  sqcRYGate(q, 3.044872329339151, 4);
  sqcRZGate(q, 0.3313914200988819, 4);
  sqcRYGate(q, 0.044638600218997126, 5);
  sqcRZGate(q, 1.3023057739438997, 5);
  sqcRYGate(q, -0.5013060543655021, 6);
  sqcRZGate(q, -1.53167393664034, 6);
  sqcRYGate(q, -1.9127406248314018, 7);
  sqcRZGate(q, -0.7796069264342896, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.6967266927300213, 0);
  sqcRZGate(q, 0.12065319539980214, 0);
  sqcRYGate(q, 2.070118890065352, 1);
  sqcRZGate(q, -2.9988325295254055, 1);
  sqcRYGate(q, -1.381485225644303, 2);
  sqcRZGate(q, -2.3074607660544126, 2);
  sqcRYGate(q, -0.9382642877138777, 3);
  sqcRZGate(q, 2.03287302317083, 3);
  sqcRYGate(q, 0.596537059835282, 4);
  sqcRZGate(q, -2.663633979109864, 4);
  sqcRYGate(q, 2.8220709797491765, 5);
  sqcRZGate(q, 2.5015738108693095, 5);
  sqcRYGate(q, 1.3594784109026306, 6);
  sqcRZGate(q, -2.7878762898829197, 6);
  sqcRYGate(q, 2.689020255147844, 7);
  sqcRZGate(q, -1.6391921480678615, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.8737210211216966, 0);
  sqcRZGate(q, 2.4956024261255267, 0);
  sqcRYGate(q, 0.8553233050683033, 1);
  sqcRZGate(q, -3.094446490272886, 1);
  sqcRYGate(q, 0.06302104254194685, 2);
  sqcRZGate(q, -2.6594529717213065, 2);
  sqcRYGate(q, 1.7828011360449025, 3);
  sqcRZGate(q, -2.268426902971317, 3);
  sqcRYGate(q, 1.9839668207137229, 4);
  sqcRZGate(q, -0.45048309804306746, 4);
  sqcRYGate(q, -0.2165368740001039, 5);
  sqcRZGate(q, 1.9675672637382782, 5);
  sqcRYGate(q, 1.1499828020839982, 6);
  sqcRZGate(q, -3.137155822477222, 6);
  sqcRYGate(q, -0.7519107928372534, 7);
  sqcRZGate(q, 1.9548968262328537, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.5449519036648978, 0);
  sqcRZGate(q, -2.6239118481906405, 0);
  sqcRYGate(q, 2.059842124145148, 1);
  sqcRZGate(q, -1.453414178491038, 1);
  sqcRYGate(q, 2.8436897982404714, 2);
  sqcRZGate(q, 2.2662279447820888, 2);
  sqcRYGate(q, 1.060050758890351, 3);
  sqcRZGate(q, 3.0617995725949543, 3);
  sqcRYGate(q, -1.3358932473062264, 4);
  sqcRZGate(q, 1.1371334134325233, 4);
  sqcRYGate(q, -2.8117818561984076, 5);
  sqcRZGate(q, -0.6566240007162217, 5);
  sqcRYGate(q, -0.7904099024282818, 6);
  sqcRZGate(q, 1.0877185877058624, 6);
  sqcRYGate(q, 1.8314350641758401, 7);
  sqcRZGate(q, -1.0912496811643821, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.5400744240117898, 0);
  sqcRZGate(q, -2.305303060801987, 0);
  sqcRYGate(q, -0.5258416784699841, 1);
  sqcRZGate(q, 0.3487316942365809, 1);
  sqcRYGate(q, -1.6446093494537872, 2);
  sqcRZGate(q, 1.7209543540225614, 2);
  sqcRYGate(q, -1.3985470642488858, 3);
  sqcRZGate(q, 2.0605346681967003, 3);
  sqcRYGate(q, 0.43577475124035486, 4);
  sqcRZGate(q, -1.5849180692292146, 4);
  sqcRYGate(q, -2.144487597748718, 5);
  sqcRZGate(q, 0.4456909036415833, 5);
  sqcRYGate(q, 0.2500502705864198, 6);
  sqcRZGate(q, -2.7971843130564173, 6);
  sqcRYGate(q, 1.3935896892986817, 7);
  sqcRZGate(q, -0.17345223314604663, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.9812241087073303, 0);
  sqcRZGate(q, -2.098091105779851, 0);
  sqcRYGate(q, -1.3063390343089123, 1);
  sqcRZGate(q, -0.6516722500933954, 1);
  sqcRYGate(q, 3.07703563599133, 2);
  sqcRZGate(q, -2.178171894574306, 2);
  sqcRYGate(q, -1.8455495973250828, 3);
  sqcRZGate(q, -0.4881390493390187, 3);
  sqcRYGate(q, -2.643216625313974, 4);
  sqcRZGate(q, 1.734814696998571, 4);
  sqcRYGate(q, -2.505928458221951, 5);
  sqcRZGate(q, 3.1001216800956235, 5);
  sqcRYGate(q, -3.05745439912691, 6);
  sqcRZGate(q, -1.6238786015056892, 6);
  sqcRYGate(q, -1.848249290473034, 7);
  sqcRZGate(q, -0.5108267793285971, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.6951133882202742, 0);
  sqcRZGate(q, 2.3540075158269747, 0);
  sqcRYGate(q, 0.9941663343992344, 1);
  sqcRZGate(q, -3.1261357279631157, 1);
  sqcRYGate(q, -0.049269857299695026, 2);
  sqcRZGate(q, 2.236090655127769, 2);
  sqcRYGate(q, -2.325557465350122, 3);
  sqcRZGate(q, 1.8080015677731192, 3);
  sqcRYGate(q, -3.1009723957175654, 4);
  sqcRZGate(q, -2.7548605177996666, 4);
  sqcRYGate(q, -2.534677884620496, 5);
  sqcRZGate(q, 3.00583971892043, 5);
  sqcRYGate(q, 0.4878217566615381, 6);
  sqcRZGate(q, -1.7100975657891428, 6);
  sqcRYGate(q, 1.1537888520829158, 7);
  sqcRZGate(q, 1.2241360838811195, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.0487463123084244, 0);
  sqcRZGate(q, -1.1082127533284432, 0);
  sqcRYGate(q, -2.4506056984805404, 1);
  sqcRZGate(q, -1.806797509567265, 1);
  sqcRYGate(q, 2.575139471602642, 2);
  sqcRZGate(q, -1.553849981793085, 2);
  sqcRYGate(q, -1.551349118936483, 3);
  sqcRZGate(q, 0.4275184545492897, 3);
  sqcRYGate(q, 2.5568947455730617, 4);
  sqcRZGate(q, -1.9868298768069919, 4);
  sqcRYGate(q, -2.4130542950917713, 5);
  sqcRZGate(q, -2.847069564287486, 5);
  sqcRYGate(q, -1.5599484458437838, 6);
  sqcRZGate(q, -1.7450381879645107, 6);
  sqcRYGate(q, -2.2528232402525896, 7);
  sqcRZGate(q, 1.7660336684101168, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7516217333472728, 0);
  sqcRZGate(q, -0.45516756703112726, 0);
  sqcRYGate(q, 0.9977193680440843, 1);
  sqcRZGate(q, -2.1525064147951873, 1);
  sqcRYGate(q, -3.1403192213719477, 2);
  sqcRZGate(q, -1.5164755901488096, 2);
  sqcRYGate(q, 0.24999744420108372, 3);
  sqcRZGate(q, -2.246933676015397, 3);
  sqcRYGate(q, -1.9704328665768402, 4);
  sqcRZGate(q, -1.0418511717595251, 4);
  sqcRYGate(q, -2.2966301024028692, 5);
  sqcRZGate(q, -0.5019015039231435, 5);
  sqcRYGate(q, 0.9211572996101437, 6);
  sqcRZGate(q, -3.1281752069592437, 6);
  sqcRYGate(q, -2.800486589852349, 7);
  sqcRZGate(q, 0.9832618973382766, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.6093814343066901, 0);
  sqcRZGate(q, 2.2746969490847775, 0);
  sqcRYGate(q, -1.7683498000336824, 1);
  sqcRZGate(q, 1.1159856306351186, 1);
  sqcRYGate(q, -2.654984007700265, 2);
  sqcRZGate(q, -2.8567373896733645, 2);
  sqcRYGate(q, 0.8643909939204811, 3);
  sqcRZGate(q, -2.5078103302375614, 3);
  sqcRYGate(q, 1.8771848803926003, 4);
  sqcRZGate(q, -1.5611660496054167, 4);
  sqcRYGate(q, 0.7053635305494667, 5);
  sqcRZGate(q, 1.4719910720449376, 5);
  sqcRYGate(q, -0.20326452987939553, 6);
  sqcRZGate(q, -1.7343889090115305, 6);
  sqcRYGate(q, 0.02946735887949714, 7);
  sqcRZGate(q, -1.3293725212983636, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.8821410190579054, 0);
  sqcRZGate(q, 1.3739637828413336, 0);
  sqcRYGate(q, 2.650854232496472, 1);
  sqcRZGate(q, 2.482573713663701, 1);
  sqcRYGate(q, -0.7884264666108405, 2);
  sqcRZGate(q, 0.8872754957536699, 2);
  sqcRYGate(q, 1.4987582485064892, 3);
  sqcRZGate(q, -2.210458804675301, 3);
  sqcRYGate(q, 0.3420315794222635, 4);
  sqcRZGate(q, -2.8515225095715526, 4);
  sqcRYGate(q, 2.7351544731668853, 5);
  sqcRZGate(q, -1.8208802789990255, 5);
  sqcRYGate(q, -0.39639084064645075, 6);
  sqcRZGate(q, 0.7429775438785101, 6);
  sqcRYGate(q, -1.0792382943148215, 7);
  sqcRZGate(q, 1.4427439583083501, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.9441641417219424, 0);
  sqcRZGate(q, -0.8223247309261453, 0);
  sqcRYGate(q, 0.23934062548785115, 1);
  sqcRZGate(q, 1.1548210812615054, 1);
  sqcRYGate(q, 2.6359670066456045, 2);
  sqcRZGate(q, 2.561238551188857, 2);
  sqcRYGate(q, -1.412376353608634, 3);
  sqcRZGate(q, -0.05699090765225368, 3);
  sqcRYGate(q, 1.6411810264477777, 4);
  sqcRZGate(q, 2.8897208859510646, 4);
  sqcRYGate(q, 0.7801632205522387, 5);
  sqcRZGate(q, -2.592776997467161, 5);
  sqcRYGate(q, -2.925862140709872, 6);
  sqcRZGate(q, -1.6200223098837352, 6);
  sqcRYGate(q, -2.474747951306038, 7);
  sqcRZGate(q, -2.5386107693164357, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.271155809517258, 0);
  sqcRZGate(q, -1.2771143768532554, 0);
  sqcRYGate(q, 2.6383533352350232, 1);
  sqcRZGate(q, 0.142926313327691, 1);
  sqcRYGate(q, 1.2549873823259243, 2);
  sqcRZGate(q, -1.1897529277463494, 2);
  sqcRYGate(q, -2.9662750731933123, 3);
  sqcRZGate(q, -0.2829948664720158, 3);
  sqcRYGate(q, 1.1912016625830593, 4);
  sqcRZGate(q, 3.116750543181836, 4);
  sqcRYGate(q, 1.3809089953149298, 5);
  sqcRZGate(q, -2.218016701632849, 5);
  sqcRYGate(q, 1.3393696124063301, 6);
  sqcRZGate(q, -1.2545586126550525, 6);
  sqcRYGate(q, -1.2486113296162835, 7);
  sqcRZGate(q, 2.937196704635369, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.168058347736846, 0);
  sqcRZGate(q, 0.9969693984568222, 0);
  sqcRYGate(q, -0.1533222373425484, 1);
  sqcRZGate(q, -2.9729019187689536, 1);
  sqcRYGate(q, 2.0091280269738, 2);
  sqcRZGate(q, 2.4380371900116176, 2);
  sqcRYGate(q, 0.1258277515454859, 3);
  sqcRZGate(q, 0.5128499305813206, 3);
  sqcRYGate(q, -1.5388863832640114, 4);
  sqcRZGate(q, -1.354139596823404, 4);
  sqcRYGate(q, 0.4087838195808491, 5);
  sqcRZGate(q, -0.16245057954752085, 5);
  sqcRYGate(q, 0.1009529557355479, 6);
  sqcRZGate(q, -1.4063473132575846, 6);
  sqcRYGate(q, 2.304508379168163, 7);
  sqcRZGate(q, -1.340844959696411, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8209421670854882, 0);
  sqcRZGate(q, -0.07318377234821584, 0);
  sqcRYGate(q, 0.46094121241187835, 1);
  sqcRZGate(q, 2.9856387423765525, 1);
  sqcRYGate(q, 0.15271660755278174, 2);
  sqcRZGate(q, 1.1107562425618953, 2);
  sqcRYGate(q, -0.051857952862482716, 3);
  sqcRZGate(q, -2.866763696350311, 3);
  sqcRYGate(q, 1.4588291467010155, 4);
  sqcRZGate(q, -0.3407766198786745, 4);
  sqcRYGate(q, -1.1856214172018822, 5);
  sqcRZGate(q, -2.144691803043547, 5);
  sqcRYGate(q, 2.0945816851391883, 6);
  sqcRZGate(q, -1.5941847445972723, 6);
  sqcRYGate(q, 2.124540994384332, 7);
  sqcRZGate(q, -1.9252159721781226, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.0873088644504632, 0);
  sqcRZGate(q, 1.6226073754320178, 0);
  sqcRYGate(q, -2.2519286351798047, 1);
  sqcRZGate(q, -0.973347294197044, 1);
  sqcRYGate(q, 2.152011064909511, 2);
  sqcRZGate(q, -0.6311002262089449, 2);
  sqcRYGate(q, 1.7188317873598375, 3);
  sqcRZGate(q, 2.2282313855079754, 3);
  sqcRYGate(q, -1.07088526864288, 4);
  sqcRZGate(q, -2.048887170734282, 4);
  sqcRYGate(q, 0.0986369624629022, 5);
  sqcRZGate(q, -2.2782481006044835, 5);
  sqcRYGate(q, 3.087274015514251, 6);
  sqcRZGate(q, 1.698790578012526, 6);
  sqcRYGate(q, -2.66727546466482, 7);
  sqcRZGate(q, -3.049082399254978, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.057313014711121, 0);
  sqcRZGate(q, 1.0419279927648883, 0);
  sqcRYGate(q, 0.12795442040753516, 1);
  sqcRZGate(q, 1.6240775401132117, 1);
  sqcRYGate(q, 0.09851208059030991, 2);
  sqcRZGate(q, 0.6851162599219532, 2);
  sqcRYGate(q, -2.126750735277204, 3);
  sqcRZGate(q, -1.6370200011307325, 3);
  sqcRYGate(q, -0.6382975381909279, 4);
  sqcRZGate(q, 1.9377138987750602, 4);
  sqcRYGate(q, 1.3240249608513768, 5);
  sqcRZGate(q, -1.817259569123889, 5);
  sqcRYGate(q, -1.8486337741338792, 6);
  sqcRZGate(q, -0.6035483694938898, 6);
  sqcRYGate(q, -1.073504403989532, 7);
  sqcRZGate(q, 0.5966575636819271, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.6809108447037409, 0);
  sqcRZGate(q, 0.9506463775791922, 0);
  sqcRYGate(q, 8.293392109948172e-06, 1);
  sqcRZGate(q, 2.51247630242291, 1);
  sqcRYGate(q, 1.7042221636004493, 2);
  sqcRZGate(q, -2.8158598375102506, 2);
  sqcRYGate(q, 1.8926275901097318, 3);
  sqcRZGate(q, -0.12797460501064606, 3);
  sqcRYGate(q, 1.9159400545614436, 4);
  sqcRZGate(q, 1.5593562457891323, 4);
  sqcRYGate(q, -1.5487280199451348, 5);
  sqcRZGate(q, -1.0020248878133855, 5);
  sqcRYGate(q, 3.0994782856205885, 6);
  sqcRZGate(q, -0.1489063021702952, 6);
  sqcRYGate(q, 0.9184741700650392, 7);
  sqcRZGate(q, -0.3633812852189493, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.1162320208396106, 0);
  sqcRZGate(q, -2.72355693136615, 0);
  sqcRYGate(q, -1.1873481818604628, 1);
  sqcRZGate(q, -3.092758283344378, 1);
  sqcRYGate(q, 3.0842225156708105, 2);
  sqcRZGate(q, -2.1259033383971726, 2);
  sqcRYGate(q, 3.1037181267847647, 3);
  sqcRZGate(q, -1.6156710387242628, 3);
  sqcRYGate(q, 2.1834635395427755, 4);
  sqcRZGate(q, -3.0326193898686884, 4);
  sqcRYGate(q, 0.27695524881967426, 5);
  sqcRZGate(q, -2.9838785782701356, 5);
  sqcRYGate(q, -1.6121506045122072, 6);
  sqcRZGate(q, 1.0821961641702238, 6);
  sqcRYGate(q, -1.0915932853080408, 7);
  sqcRZGate(q, 2.3480854483633937, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.7986037843900133, 0);
  sqcRZGate(q, -0.1911949779616495, 0);
  sqcRYGate(q, -1.7667287134322782, 1);
  sqcRZGate(q, 1.5674060595130725, 1);
  sqcRYGate(q, -2.8898606682361168, 2);
  sqcRZGate(q, -1.5469214783377319, 2);
  sqcRYGate(q, 0.6110825014729043, 3);
  sqcRZGate(q, -2.5391480823653594, 3);
  sqcRYGate(q, 1.3591711621688178, 4);
  sqcRZGate(q, -1.280043904144409, 4);
  sqcRYGate(q, 1.6372611260670296, 5);
  sqcRZGate(q, 2.6609229917189294, 5);
  sqcRYGate(q, -0.2692388768107019, 6);
  sqcRZGate(q, -1.2307531781430319, 6);
  sqcRYGate(q, 1.6576778187431562, 7);
  sqcRZGate(q, 1.6496715457440763, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.6163702502316764, 0);
  sqcRZGate(q, 3.0728509805643336, 0);
  sqcRYGate(q, -1.5550149371933308, 1);
  sqcRZGate(q, 0.7790946326739226, 1);
  sqcRYGate(q, -3.073328304294248, 2);
  sqcRZGate(q, -2.1369201926042183, 2);
  sqcRYGate(q, 0.029934488738181848, 3);
  sqcRZGate(q, -0.6479927457539354, 3);
  sqcRYGate(q, -0.010796976115666546, 4);
  sqcRZGate(q, 0.7544168095429241, 4);
  sqcRYGate(q, 0.09895972236904971, 5);
  sqcRZGate(q, 2.063816859460174, 5);
  sqcRYGate(q, 1.553616215957395, 6);
  sqcRZGate(q, -1.5543929371124758, 6);
  sqcRYGate(q, 1.5426649993004058, 7);
  sqcRZGate(q, -1.8460437127165514, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.6429668816414045, 0);
  sqcRZGate(q, -2.6240447047570483, 0);
  sqcRYGate(q, -0.07323079957037049, 1);
  sqcRZGate(q, -2.1033569417327267, 1);
  sqcRYGate(q, 1.576177610725097, 2);
  sqcRZGate(q, 0.528451770473296, 2);
  sqcRYGate(q, 2.594687408069338, 3);
  sqcRZGate(q, 3.116578859345987, 3);
  sqcRYGate(q, 0.4017954473473223, 4);
  sqcRZGate(q, -0.22267318694930704, 4);
  sqcRYGate(q, 1.5067187956917318, 5);
  sqcRZGate(q, 0.5904412608707799, 5);
  sqcRYGate(q, 1.5908037187941577, 6);
  sqcRZGate(q, 1.7178292938908981, 6);
  sqcRYGate(q, -0.00765538228906415, 7);
  sqcRZGate(q, -1.7963560536825929, 7);

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
