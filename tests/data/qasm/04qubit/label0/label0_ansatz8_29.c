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

  sqcRYGate(q, -1.8497275742258534, 0);
  sqcRYGate(q, 2.847505190598987, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8031088351572508, 0);
  sqcRYGate(q, 2.3026592751815387, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9837098708644234, 2);
  sqcRYGate(q, 0.18576398168106323, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.35486758194846624, 2);
  sqcRYGate(q, -2.454058923790156, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3759596946507022, 0);
  sqcRYGate(q, 3.0031199054371696, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5415869893676464, 0);
  sqcRYGate(q, -2.1249834189626258, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.123243058580898, 1);
  sqcRYGate(q, -1.4126255152282947, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5724859583329422, 1);
  sqcRYGate(q, 2.729253078995362, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5478693270122987, 0);
  sqcRYGate(q, 1.7216644714305955, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.47910977794181164, 0);
  sqcRYGate(q, -2.6786136291058593, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.736348206001473, 2);
  sqcRYGate(q, 1.101136205561577, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0658471830472425, 2);
  sqcRYGate(q, 1.2071813030937397, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2500667262467258, 0);
  sqcRYGate(q, 1.3382013732054387, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.82260564100788, 0);
  sqcRYGate(q, -3.0487121701251727, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7135751716270793, 1);
  sqcRYGate(q, -0.37931274495352435, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6586989170007, 1);
  sqcRYGate(q, 2.492810341789036, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.066244987487401, 0);
  sqcRYGate(q, 2.772259564182239, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3329316161019706, 0);
  sqcRYGate(q, -1.5278941827999555, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0406707762465754, 2);
  sqcRYGate(q, -0.6790205599970518, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2587972486324035, 2);
  sqcRYGate(q, 2.7923147042496828, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1050452141216478, 0);
  sqcRYGate(q, -0.11213448763548949, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9806946868015833, 0);
  sqcRYGate(q, 2.552905021510782, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1099249086081828, 1);
  sqcRYGate(q, 1.0130424550810224, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4399572909630667, 1);
  sqcRYGate(q, -1.0847538133818677, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2365977444235957, 0);
  sqcRYGate(q, -2.0779468533180068, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.394866843069676, 0);
  sqcRYGate(q, -2.5404104603404334, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3655034686888707, 2);
  sqcRYGate(q, -2.2463984836976056, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6572353114527099, 2);
  sqcRYGate(q, -0.5036464779420569, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1833703903399932, 0);
  sqcRYGate(q, 1.790666157651273, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.00694639054192, 0);
  sqcRYGate(q, 0.9975976473470413, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1948697023625412, 1);
  sqcRYGate(q, 2.9313576483485813, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1094175097052539, 1);
  sqcRYGate(q, -0.3395551814729014, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.28549167786203977, 0);
  sqcRYGate(q, -1.2402972193666133, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.607014382281771, 0);
  sqcRYGate(q, -3.116582464835422, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.13087558776278918, 2);
  sqcRYGate(q, 2.3016048982433728, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5631167792082087, 2);
  sqcRYGate(q, -2.6609790949155325, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6532996073982176, 0);
  sqcRYGate(q, 2.068841447349852, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3013333030524983, 0);
  sqcRYGate(q, -0.7043271450765256, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.0934228166478512, 1);
  sqcRYGate(q, 2.1710190154334987, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.07928381810000396, 1);
  sqcRYGate(q, -2.6600588100499483, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.082888478575156, 0);
  sqcRYGate(q, -0.20735040182816622, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6026070101175697, 0);
  sqcRYGate(q, 1.000810891157943, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4868013752034095, 2);
  sqcRYGate(q, 0.5889401518473428, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.26982522579391, 2);
  sqcRYGate(q, -2.620216109255426, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7223762085051204, 0);
  sqcRYGate(q, -2.4075896920089823, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.678332190747575, 0);
  sqcRYGate(q, -2.3637307998758232, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.577828941950119, 1);
  sqcRYGate(q, 2.4576961751223236, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5726626919786164, 1);
  sqcRYGate(q, -1.8595654097991199, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.965290245157442, 0);
  sqcRYGate(q, 2.6416253004649977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8607143730330986, 0);
  sqcRYGate(q, -2.2327568545348777, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.92353145382987, 2);
  sqcRYGate(q, -1.145235231497988, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3745628269264061, 2);
  sqcRYGate(q, -1.4453157826708143, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.665649974227578, 0);
  sqcRYGate(q, -2.111477864997057, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.200306994012763, 0);
  sqcRYGate(q, 1.238388510258961, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1384588170558034, 1);
  sqcRYGate(q, 2.453173605541396, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4067722538260696, 1);
  sqcRYGate(q, -1.4009852242635175, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9448521576784197, 0);
  sqcRYGate(q, 1.5275257909666429, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8477514295292528, 0);
  sqcRYGate(q, -2.790624540280787, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6291368725483824, 2);
  sqcRYGate(q, 0.3088375980799834, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.45946558523575565, 2);
  sqcRYGate(q, -1.8917016655494638, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9161087702428437, 0);
  sqcRYGate(q, 0.09023730809806006, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.425144761665444, 0);
  sqcRYGate(q, -2.7497856033415653, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.829901428294658, 1);
  sqcRYGate(q, 0.6233174388274847, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1115411952181278, 1);
  sqcRYGate(q, 0.3116679807038275, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9029473343407752, 0);
  sqcRYGate(q, -0.41233847075974767, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0818436060989396, 0);
  sqcRYGate(q, -0.3073990741330054, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5265555810537186, 2);
  sqcRYGate(q, -0.7904403459712048, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.46272310018433505, 2);
  sqcRYGate(q, -1.9055136169201523, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7023263176341917, 0);
  sqcRYGate(q, -2.1699973765612377, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.95843201976078, 0);
  sqcRYGate(q, -2.825954604369482, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7388684378907044, 1);
  sqcRYGate(q, -0.9135600964948676, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.108546595806153, 1);
  sqcRYGate(q, 1.7571260475480202, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9161094033987354, 0);
  sqcRYGate(q, -0.7666469266050715, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.141407056618928, 0);
  sqcRYGate(q, -2.846573906438332, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.806507497145776, 2);
  sqcRYGate(q, 1.8149739272415042, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9089345545655485, 2);
  sqcRYGate(q, -0.16401083862767987, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2178806385342575, 0);
  sqcRYGate(q, 2.197061961266011, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3479260210766153, 0);
  sqcRYGate(q, 0.8625734917575283, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6300970668719246, 1);
  sqcRYGate(q, 2.3534948137807508, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8644874719076515, 1);
  sqcRYGate(q, 0.7143895676451306, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.46956202850296425, 0);
  sqcRYGate(q, -2.6517300378717827, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.130342024453201, 0);
  sqcRYGate(q, -2.4306046521150453, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.845229419973491, 2);
  sqcRYGate(q, 1.6373972493691413, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.985388916812557, 2);
  sqcRYGate(q, -1.3301769807862955, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.304916401171961, 0);
  sqcRYGate(q, -0.8894556349392213, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2681578475990323, 0);
  sqcRYGate(q, -0.683738435342047, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3188868219845635, 1);
  sqcRYGate(q, -1.2721621055538677, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2591491627055267, 1);
  sqcRYGate(q, -2.642229157483618, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0226414098364756, 0);
  sqcRYGate(q, 1.7059037976726072, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9545287575556847, 0);
  sqcRYGate(q, 1.78388859730841, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3848953302436917, 2);
  sqcRYGate(q, 0.32617695671993224, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7200400614935227, 2);
  sqcRYGate(q, -2.1329523652210978, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.304990111173746, 0);
  sqcRYGate(q, 2.555615586995245, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4527505194878092, 0);
  sqcRYGate(q, -0.553089913463976, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6275674522729879, 1);
  sqcRYGate(q, 0.5157040477841389, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4665084148172403, 1);
  sqcRYGate(q, 1.6418510959837478, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4051473533383554, 0);
  sqcRYGate(q, -1.9244153509262758, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2985056070709669, 0);
  sqcRYGate(q, 2.3195896142932857, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1020414180242906, 2);
  sqcRYGate(q, -1.1763167717437968, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3121783956376167, 2);
  sqcRYGate(q, 0.9053699293890904, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.110415235472378, 0);
  sqcRYGate(q, 2.416051048759092, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3430298284838742, 0);
  sqcRYGate(q, -0.8819983033169674, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9262259355038704, 1);
  sqcRYGate(q, -2.8381811021990444, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4829246595439787, 1);
  sqcRYGate(q, -1.7356981260515205, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.05356780640687, 0);
  sqcRYGate(q, -1.601467579414501, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7458310848159546, 0);
  sqcRYGate(q, -0.7228092347067011, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8223128976722132, 2);
  sqcRYGate(q, 2.048573846851111, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.44184170371377096, 2);
  sqcRYGate(q, 2.975059110969463, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.03963765627309965, 0);
  sqcRYGate(q, -0.5457802331243092, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6017679182036026, 0);
  sqcRYGate(q, -1.3443230428894442, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3786016952219595, 1);
  sqcRYGate(q, -0.2999847687696941, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4669347514736488, 1);
  sqcRYGate(q, 1.608483565360709, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.03821810527231741, 0);
  sqcRYGate(q, 1.18471666922334, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4882318325791664, 0);
  sqcRYGate(q, -2.3129134141349277, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.464918598040424, 2);
  sqcRYGate(q, 2.2741958703065457, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7609326503439573, 2);
  sqcRYGate(q, 0.3918864098943618, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.06688026219303556, 0);
  sqcRYGate(q, -1.786762547703872, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.606932174354549, 0);
  sqcRYGate(q, 2.229716300613961, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5938700767813874, 1);
  sqcRYGate(q, -1.0125598200924388, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3041634131134279, 1);
  sqcRYGate(q, 1.383529821787789, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.670291089707796, 0);
  sqcRYGate(q, -1.2174400003161, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0025057131331774, 0);
  sqcRYGate(q, 1.7922936115995558, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8207188934298708, 2);
  sqcRYGate(q, 2.8984423548111526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1657151600293454, 2);
  sqcRYGate(q, -2.0215322124735335, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8173817369996583, 0);
  sqcRYGate(q, -2.1084082413187963, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.40603020549410745, 0);
  sqcRYGate(q, -1.4030959050077012, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5298107915295471, 1);
  sqcRYGate(q, 1.2712377478539942, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8759167353140938, 1);
  sqcRYGate(q, 2.161897986161966, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8819732138364273, 0);
  sqcRYGate(q, -1.7017173803740375, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.397201269962397, 0);
  sqcRYGate(q, -1.6816743963500003, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5756501600162158, 2);
  sqcRYGate(q, -1.4910269014782946, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6406250792647485, 2);
  sqcRYGate(q, -1.2535341714420927, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9402771239228516, 0);
  sqcRYGate(q, 1.3801323385209423, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.15504269918507774, 0);
  sqcRYGate(q, -0.9333320148739741, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.05680695288886, 1);
  sqcRYGate(q, 0.9876540121874493, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.11762692285864507, 1);
  sqcRYGate(q, -2.8868818084617813, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2379382050988093, 0);
  sqcRYGate(q, -1.6222409180001167, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.39121249449376005, 0);
  sqcRYGate(q, 2.3385144354452554, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1576631320009447, 2);
  sqcRYGate(q, 1.6263961475804152, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9862152478175147, 2);
  sqcRYGate(q, 1.9150237580335983, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4635507942894654, 0);
  sqcRYGate(q, 1.404494447076729, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.521880611827047, 0);
  sqcRYGate(q, 3.1258601218085795, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6150747864241586, 1);
  sqcRYGate(q, -0.677324411939381, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7058527927346017, 1);
  sqcRYGate(q, 1.8531966130656292, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.35665982004436775, 0);
  sqcRYGate(q, 0.7237798717977837, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.18908538929435273, 0);
  sqcRYGate(q, -1.4493829105859164, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.854731993580308, 2);
  sqcRYGate(q, -0.8131135629242932, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1261865365844317, 2);
  sqcRYGate(q, 2.5081112414021436, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5064457497813475, 0);
  sqcRYGate(q, 2.2250772635994105, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9917946612841462, 0);
  sqcRYGate(q, -0.29038443199699154, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.809698035758327, 1);
  sqcRYGate(q, 0.2630113645967223, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6820597340601626, 1);
  sqcRYGate(q, -1.3415768017249854, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7465155399262207, 0);
  sqcRYGate(q, -0.12157197139571085, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3195486094882036, 0);
  sqcRYGate(q, 1.1739950563748485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4607890991710569, 2);
  sqcRYGate(q, 2.144447974757428, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.86110550901598, 2);
  sqcRYGate(q, -2.270749981729967, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5674469755453218, 0);
  sqcRYGate(q, -2.9321039821701125, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1875582729786265, 0);
  sqcRYGate(q, 2.6399910531436768, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6269653396948378, 1);
  sqcRYGate(q, 2.3077958862190924, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1439808512534984, 1);
  sqcRYGate(q, 2.5910047230465025, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4992596131261934, 0);
  sqcRYGate(q, 1.4135166229920477, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3230985936336594, 0);
  sqcRYGate(q, 2.8546204777490267, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.20388394490476716, 2);
  sqcRYGate(q, -0.06455070541848452, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8590171258350967, 2);
  sqcRYGate(q, -1.813572589286281, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8700156350686794, 0);
  sqcRYGate(q, 0.4057249791628472, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.634218586468341, 0);
  sqcRYGate(q, -2.2066098272457095, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.573101222216869, 1);
  sqcRYGate(q, 0.5978491167130402, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8596939880559006, 1);
  sqcRYGate(q, 1.1923891125966442, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9558475067852923, 0);
  sqcRYGate(q, 0.3319701494203887, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.018889043634073, 0);
  sqcRYGate(q, -2.4828870798727642, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.08475869462067, 2);
  sqcRYGate(q, 1.7983574485052107, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6166899884235997, 2);
  sqcRYGate(q, 1.4451809579258428, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8552355606981097, 0);
  sqcRYGate(q, 2.0364352558218917, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2984896234736105, 0);
  sqcRYGate(q, 0.04732490821836599, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8025344462812194, 1);
  sqcRYGate(q, 0.5381971258511409, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9171257866761287, 1);
  sqcRYGate(q, 1.8802715246530788, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1036499539693714, 0);
  sqcRYGate(q, 1.058590140316615, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0072736802848192, 0);
  sqcRYGate(q, 0.5124254288293163, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4152178245358202, 2);
  sqcRYGate(q, -0.363310303949339, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4148792001190298, 2);
  sqcRYGate(q, 0.31755006155810134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1841518287456116, 0);
  sqcRYGate(q, -2.796899859958141, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.484376057188686, 0);
  sqcRYGate(q, 0.324398558292689, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4469272254679648, 1);
  sqcRYGate(q, 1.7968450962204268, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7169969021406626, 1);
  sqcRYGate(q, 1.364774616194965, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.291086968590054, 0);
  sqcRYGate(q, -0.8152756471345961, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6681559693282644, 0);
  sqcRYGate(q, -0.5164495390778543, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2315987813261335, 2);
  sqcRYGate(q, 1.7481535565769857, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.356987457831732, 2);
  sqcRYGate(q, -0.45108864643735735, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5890595553004037, 0);
  sqcRYGate(q, 2.1409676948283334, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2526766401042, 0);
  sqcRYGate(q, -2.6886583890473568, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7294050208254585, 1);
  sqcRYGate(q, -0.23006650937378303, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.950742265380158, 1);
  sqcRYGate(q, 1.7482843662816514, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2080127782181167, 0);
  sqcRYGate(q, 0.6439299713608566, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0108455759652144, 0);
  sqcRYGate(q, 2.488051086875431, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6252028907040943, 2);
  sqcRYGate(q, -2.2454215020358763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08741048494282545, 2);
  sqcRYGate(q, -1.86866879943234, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3250772564525546, 0);
  sqcRYGate(q, 2.541564452885493, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9145228129329084, 0);
  sqcRYGate(q, 1.961507719817548, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8688955609389537, 1);
  sqcRYGate(q, -0.5744440680995844, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.683585786109497, 1);
  sqcRYGate(q, -0.38769279632420256, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1250204356094566, 0);
  sqcRYGate(q, 3.023165493168704, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.926741717860743, 0);
  sqcRYGate(q, 0.009816674184614627, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0456934525538726, 2);
  sqcRYGate(q, -2.429634447346495, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0305710653132565, 2);
  sqcRYGate(q, -0.8943298670810966, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3804749054890566, 0);
  sqcRYGate(q, -0.610384462837454, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.055265707446408, 0);
  sqcRYGate(q, 2.7578069279336463, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2646075954184193, 1);
  sqcRYGate(q, -2.231713120231201, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3024427871790936, 1);
  sqcRYGate(q, -0.9786194075588579, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6186575372878957, 0);
  sqcRYGate(q, 2.342342523043628, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7308769581706307, 0);
  sqcRYGate(q, 1.7264229173414667, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8896510402008131, 2);
  sqcRYGate(q, -2.451976970868425, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.679708492348015, 2);
  sqcRYGate(q, -2.723457051965305, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.318724917965874, 0);
  sqcRYGate(q, 0.6099952366750256, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.785336266998705, 0);
  sqcRYGate(q, -0.12982450471656154, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.90799914345003, 1);
  sqcRYGate(q, -0.8747012039209888, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8377407818585674, 1);
  sqcRYGate(q, -2.865162107328648, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.30709083403080495, 0);
  sqcRYGate(q, -1.254499830183749, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9788867892001905, 0);
  sqcRYGate(q, -1.1131296009564404, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.492660359728947, 2);
  sqcRYGate(q, 2.4985929532845264, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7671874210961054, 2);
  sqcRYGate(q, 2.2692081989922177, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.054550143527624, 0);
  sqcRYGate(q, 1.2588115563390805, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.812589135107859, 0);
  sqcRYGate(q, -0.8447995982510184, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8113522943355056, 1);
  sqcRYGate(q, 0.5163209295965016, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.813446346940644, 1);
  sqcRYGate(q, -2.765322953265111, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7903560334316793, 0);
  sqcRYGate(q, 2.769267515847931, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.938935397856019, 0);
  sqcRYGate(q, -0.30911385459502766, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.322437038497424, 2);
  sqcRYGate(q, -2.4197080294771216, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.116529178770808, 2);
  sqcRYGate(q, -2.807840603313739, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0361433054812124, 0);
  sqcRYGate(q, -2.508011727866977, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8290429103915562, 0);
  sqcRYGate(q, -2.5248899229291255, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0745489161102255, 1);
  sqcRYGate(q, 0.028460041926146182, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.108531450820505, 1);
  sqcRYGate(q, -1.9286086504187687, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.16557712461457583, 0);
  sqcRYGate(q, 1.2271428697907527, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9283226156918662, 0);
  sqcRYGate(q, 1.6833419248315635, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9055316649684726, 2);
  sqcRYGate(q, 1.0010892916772605, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0570175195854312, 2);
  sqcRYGate(q, 2.881463931416286, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.207089963716399, 0);
  sqcRYGate(q, -1.9921474164063584, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.645339857279158, 0);
  sqcRYGate(q, -2.24910023742152, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5731764538846161, 1);
  sqcRYGate(q, -1.8136948834724906, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5147972172369354, 1);
  sqcRYGate(q, -0.8771005189829939, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1823488934954909, 0);
  sqcRYGate(q, -0.4068909388722215, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9630667810835629, 0);
  sqcRYGate(q, 0.21868237666351575, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.36648074299836, 2);
  sqcRYGate(q, 1.6192930299447976, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.631942652980708, 2);
  sqcRYGate(q, 1.7706267725600693, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0216508738944476, 0);
  sqcRYGate(q, -2.842043302763674, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8863488187466039, 0);
  sqcRYGate(q, 1.7791376754988315, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0787933186012297, 1);
  sqcRYGate(q, -2.6566546525704147, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1915839519549588, 1);
  sqcRYGate(q, -1.1760222271665413, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4608446766409595, 0);
  sqcRYGate(q, -1.6354365570014153, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.45647597095981496, 0);
  sqcRYGate(q, 0.8118801563177431, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.59153085243166, 2);
  sqcRYGate(q, -0.2769555093829634, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4182176345711046, 2);
  sqcRYGate(q, 2.456762561467174, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1929136585648928, 0);
  sqcRYGate(q, -2.881677291577909, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.879708446996162, 0);
  sqcRYGate(q, -0.6737398205369827, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.700551016751232, 1);
  sqcRYGate(q, -1.516975012853406, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.039792563718621, 1);
  sqcRYGate(q, -1.5178427365786347, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6053901302052394, 0);
  sqcRYGate(q, 2.091392618257096, 1);
  sqcRYGate(q, -2.367907198548334, 2);
  sqcRYGate(q, -2.212128153231965, 3);

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
