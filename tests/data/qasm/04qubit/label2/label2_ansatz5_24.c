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

  sqcRYGate(q, 0.3067028474866156, 0);
  sqcRYGate(q, -2.7427849674906075, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0479091520243875, 0);
  sqcRYGate(q, -1.3563734590197165, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.20684035735952033, 2);
  sqcRYGate(q, 1.6217185425592429, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8861678764546148, 2);
  sqcRYGate(q, 0.06850367910388613, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7766961761205118, 1);
  sqcRYGate(q, 2.198585368570723, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.250391865047102, 1);
  sqcRYGate(q, 0.43702518221176945, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.37068586055785957, 0);
  sqcRYGate(q, -0.5941651312788557, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.416859570878314, 0);
  sqcRYGate(q, 2.492102322793245, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2392618287427837, 2);
  sqcRYGate(q, -2.458615518508422, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1653350950819152, 2);
  sqcRYGate(q, 2.3616935303225057, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.572424704813579, 1);
  sqcRYGate(q, -1.7634990207370844, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8396748489633645, 1);
  sqcRYGate(q, -1.6401354748870318, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4216876682084614, 0);
  sqcRYGate(q, 2.099427024355172, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5577568146256393, 0);
  sqcRYGate(q, 0.9287098550616959, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.47336373452158054, 2);
  sqcRYGate(q, -1.8049300514616973, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4711296723859277, 2);
  sqcRYGate(q, -0.9581051028522676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5415921998280053, 1);
  sqcRYGate(q, 2.5675647501599705, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1469472536285892, 1);
  sqcRYGate(q, -1.1329322881311361, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7060258375771523, 0);
  sqcRYGate(q, 1.7198847716236916, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7409984772272664, 0);
  sqcRYGate(q, -1.220343258886289, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2409985195878765, 2);
  sqcRYGate(q, -1.4300311716021783, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2105283482188556, 2);
  sqcRYGate(q, 2.1067879578493534, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.025791421971929, 1);
  sqcRYGate(q, -1.9100123586471973, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9871914647515239, 1);
  sqcRYGate(q, 0.9114194976970992, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2435967611740977, 0);
  sqcRYGate(q, 0.6752740961276982, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1137226984836444, 0);
  sqcRYGate(q, 1.145436583692513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.004305330824987, 2);
  sqcRYGate(q, -0.9392913557591829, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.28816162371423626, 2);
  sqcRYGate(q, -1.7949316644993003, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.671625254862605, 1);
  sqcRYGate(q, 1.2470392515347044, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10564344496017182, 1);
  sqcRYGate(q, 1.759979535771813, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.25202822912863887, 0);
  sqcRYGate(q, -0.216855726335174, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.48219640811043796, 0);
  sqcRYGate(q, 1.2247347293987674, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.19352526398123973, 2);
  sqcRYGate(q, 0.42408583716218506, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.15689537130846826, 2);
  sqcRYGate(q, 0.5642470353191715, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.807996536689176, 1);
  sqcRYGate(q, 1.597307296253934, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1914997338832225, 1);
  sqcRYGate(q, -1.9979098399662114, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.872519267527001, 0);
  sqcRYGate(q, -3.1381822186675827, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.08328461196762735, 0);
  sqcRYGate(q, -0.763465321061898, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.69108772408616, 2);
  sqcRYGate(q, -0.7008600423537992, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.41533511413220303, 2);
  sqcRYGate(q, -2.9753416169254634, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.352184242434173, 1);
  sqcRYGate(q, -0.9372073803390766, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9830493300529994, 1);
  sqcRYGate(q, -2.1270430973272862, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.40585693785644, 0);
  sqcRYGate(q, 2.128102470245574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9833333076230066, 0);
  sqcRYGate(q, 1.9276094941464905, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.057264623295496, 2);
  sqcRYGate(q, 1.77201779061684, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.10296998352185938, 2);
  sqcRYGate(q, 0.1396343539098722, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3964093103242968, 1);
  sqcRYGate(q, 1.5933372587964243, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6153688622029039, 1);
  sqcRYGate(q, -1.397199230782579, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.649960210763566, 0);
  sqcRYGate(q, -2.7324913045962607, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3167078202050044, 0);
  sqcRYGate(q, 1.5937486458175194, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.668185408438485, 2);
  sqcRYGate(q, 2.9949767462201025, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6289137319372954, 2);
  sqcRYGate(q, 2.0069467944541595, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.92556265210704, 1);
  sqcRYGate(q, -1.299639865814818, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.604003869276335, 1);
  sqcRYGate(q, 2.014684390179669, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3333015239671933, 0);
  sqcRYGate(q, -0.5902774484034845, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.05182861309668802, 0);
  sqcRYGate(q, -0.20780596974950072, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.459851741601522, 2);
  sqcRYGate(q, 2.670102713940263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5418617883028196, 2);
  sqcRYGate(q, 3.11230558467937, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.51725415084018, 1);
  sqcRYGate(q, -2.1908493262746456, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6153006349225116, 1);
  sqcRYGate(q, -2.996748197455163, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9555365871600867, 0);
  sqcRYGate(q, -0.41011035619656905, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8249562464577074, 0);
  sqcRYGate(q, 2.9273976584537693, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.21572584625173352, 2);
  sqcRYGate(q, 0.0979649506399536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.415929145973784, 2);
  sqcRYGate(q, 0.360517849492835, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.753127682994073, 1);
  sqcRYGate(q, 1.9674760140991043, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9258988212666932, 1);
  sqcRYGate(q, -1.2590838444141763, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2448022928488758, 0);
  sqcRYGate(q, -2.398029625394712, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4810031661489518, 0);
  sqcRYGate(q, 0.6121095977701262, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9272790311499692, 2);
  sqcRYGate(q, 1.791398235093765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0773500732136938, 2);
  sqcRYGate(q, -2.342452107214347, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1523562981278177, 1);
  sqcRYGate(q, 3.112271727968409, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.126491671639776, 1);
  sqcRYGate(q, 2.001183038488865, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8631921321417773, 0);
  sqcRYGate(q, -1.7631152519679392, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9945532788568276, 0);
  sqcRYGate(q, -2.892409805643352, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1321221787171765, 2);
  sqcRYGate(q, 0.388362856502724, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2046289951015083, 2);
  sqcRYGate(q, -2.98069902028287, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2042318267055583, 1);
  sqcRYGate(q, -2.9981772446304795, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.37715981752765165, 1);
  sqcRYGate(q, 0.4073433661749869, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.49598773116566086, 0);
  sqcRYGate(q, -0.4959786253056526, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7266522883559374, 0);
  sqcRYGate(q, 0.20536734095225118, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6679155245931971, 2);
  sqcRYGate(q, 1.7352033169538368, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4295062558388656, 2);
  sqcRYGate(q, -0.24073692549029602, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5047195618107327, 1);
  sqcRYGate(q, -1.2571224230240068, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.48674863322807743, 1);
  sqcRYGate(q, -0.499215371046911, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6417801775014126, 0);
  sqcRYGate(q, -0.9339808776366061, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3603612856613734, 0);
  sqcRYGate(q, 2.644389093276076, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.44966972777976005, 2);
  sqcRYGate(q, 2.372119747735386, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3651422805506948, 2);
  sqcRYGate(q, -2.0526626050333148, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.08099858298619084, 1);
  sqcRYGate(q, -3.0235419793496945, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.22475188929727172, 1);
  sqcRYGate(q, -0.8003444555789525, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5265364263236967, 0);
  sqcRYGate(q, 2.375142784397378, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.06749840186718359, 0);
  sqcRYGate(q, 1.5243178993722029, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.402904187761862, 2);
  sqcRYGate(q, 0.13495426525535148, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0441006824599808, 2);
  sqcRYGate(q, -0.054843450412196404, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0421386965871315, 1);
  sqcRYGate(q, 1.3390151585151582, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8567208755218787, 1);
  sqcRYGate(q, 0.2143372575536816, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5732271185814675, 0);
  sqcRYGate(q, -2.3072810218732696, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.667875951983636, 0);
  sqcRYGate(q, -1.4542990716412685, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1261749981820834, 2);
  sqcRYGate(q, 2.820113479760462, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.802820494730487, 2);
  sqcRYGate(q, -2.6190007008318856, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8184191343858873, 1);
  sqcRYGate(q, 2.379593934908381, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1750841049016283, 1);
  sqcRYGate(q, -0.9227268811615712, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5897291788980665, 0);
  sqcRYGate(q, 1.259733520331253, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4811140383195402, 0);
  sqcRYGate(q, 0.4813080406177541, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8169534163610266, 2);
  sqcRYGate(q, 0.5203815654376172, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7170596549628068, 2);
  sqcRYGate(q, 1.6256705502169129, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.128082626254346, 1);
  sqcRYGate(q, -1.0945515231672256, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8520864435131474, 1);
  sqcRYGate(q, 0.448089241686992, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7094070617102555, 0);
  sqcRYGate(q, 1.520535406159434, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.175372545647992, 0);
  sqcRYGate(q, 2.0045000817915226, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5337422531563673, 2);
  sqcRYGate(q, -1.982689826038637, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.14330654801677323, 2);
  sqcRYGate(q, 2.0772188719579168, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7692429469890634, 1);
  sqcRYGate(q, -2.2513200420525905, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.001804008947418, 1);
  sqcRYGate(q, -2.496673250313833, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2429882179172793, 0);
  sqcRYGate(q, 1.0007084113174318, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8931933815139571, 0);
  sqcRYGate(q, 0.6942588671777509, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0316926627781143, 2);
  sqcRYGate(q, -0.36836375794626497, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5966547730406155, 2);
  sqcRYGate(q, 0.16196528769203233, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.771770363529872, 1);
  sqcRYGate(q, 2.5633226029762346, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4117564216166967, 1);
  sqcRYGate(q, -1.9117730207520227, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.953519439797942, 0);
  sqcRYGate(q, -2.6229170956283108, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.110237323454254, 0);
  sqcRYGate(q, -2.1676096192105505, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7353525907893086, 2);
  sqcRYGate(q, 2.7888033964047505, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9575653181751099, 2);
  sqcRYGate(q, 1.2475115443946878, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.32249819279965397, 1);
  sqcRYGate(q, -0.7387410184904426, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8861688123011833, 1);
  sqcRYGate(q, -3.0681587558759214, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2295366167618618, 0);
  sqcRYGate(q, -2.949415265435011, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5937274621825006, 0);
  sqcRYGate(q, 2.58457457276579, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9387733228884527, 2);
  sqcRYGate(q, 0.6654439943791512, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0751114956857932, 2);
  sqcRYGate(q, -0.6880349417498965, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8618286929621013, 1);
  sqcRYGate(q, -0.42110387582035624, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.178752759292178, 1);
  sqcRYGate(q, -0.5577695273131639, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.924091935594654, 0);
  sqcRYGate(q, -2.983679627559874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9159495189036209, 0);
  sqcRYGate(q, 3.1047723747073404, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9050730916323533, 2);
  sqcRYGate(q, 2.322263095306029, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.077409941879243, 2);
  sqcRYGate(q, -1.3877931200056555, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4477570983398589, 1);
  sqcRYGate(q, -1.8724677930130493, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0359070405444113, 1);
  sqcRYGate(q, 0.7106929923198502, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2453190236590155, 0);
  sqcRYGate(q, 0.5847880893581764, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.076625041734329, 0);
  sqcRYGate(q, -0.8964101810612393, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1644050690761232, 2);
  sqcRYGate(q, -2.096845557407635, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.481977959349821, 2);
  sqcRYGate(q, 2.469828197970147, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.484938902491708, 1);
  sqcRYGate(q, 1.0319558618653142, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.056033437731796, 1);
  sqcRYGate(q, -1.0914163673187038, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.224520127460062, 0);
  sqcRYGate(q, -1.9389624993127808, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0644856782432877, 0);
  sqcRYGate(q, 2.057948250688372, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9009310585709452, 2);
  sqcRYGate(q, 1.6742475910026808, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.850099007576408, 2);
  sqcRYGate(q, 2.688038054179069, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4759272522925913, 1);
  sqcRYGate(q, -2.353737927280794, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5863628951147923, 1);
  sqcRYGate(q, -1.9301906338158155, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4739664087227409, 0);
  sqcRYGate(q, -1.436533292148277, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4025718260654405, 0);
  sqcRYGate(q, -0.4227330203147335, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0600571050115315, 2);
  sqcRYGate(q, 0.4363894068141824, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4625445201705976, 2);
  sqcRYGate(q, 1.5454818541294053, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7328325415376034, 1);
  sqcRYGate(q, -2.0071019348122645, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0937124649219637, 1);
  sqcRYGate(q, -2.697261287115075, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0812543626792617, 0);
  sqcRYGate(q, -1.268052985613946, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.105281423001738, 0);
  sqcRYGate(q, -2.8408551436128566, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6627933910187869, 2);
  sqcRYGate(q, -2.537999589687992, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9152523412201639, 2);
  sqcRYGate(q, 1.3576062642635138, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.012923365037370793, 1);
  sqcRYGate(q, 0.3499327273029369, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.04504634496935722, 1);
  sqcRYGate(q, -3.09839583546374, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.356361982395397, 0);
  sqcRYGate(q, 2.9078987873807787, 1);
  sqcRYGate(q, -0.28191692989470396, 2);
  sqcRYGate(q, 0.8325302258605582, 3);

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
