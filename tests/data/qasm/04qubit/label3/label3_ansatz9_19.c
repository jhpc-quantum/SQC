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

  sqcRYGate(q, 0.37297540066262336, 0);
  sqcRYGate(q, 1.2491971479563366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.46710269701332585, 0);
  sqcRYGate(q, 1.5580193960349513, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.618897517119468, 2);
  sqcRYGate(q, -2.6275130543355814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0469024715608497, 2);
  sqcRYGate(q, 2.402016850365525, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4844317904985314, 0);
  sqcRYGate(q, 2.9000430233227275, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5303890016763135, 0);
  sqcRYGate(q, 3.114366055297858, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0446262501228682, 1);
  sqcRYGate(q, -3.010847304105348, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1495404116351797, 1);
  sqcRYGate(q, 0.4593930380366649, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6497414709943503, 0);
  sqcRYGate(q, -0.2363630192384285, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3869598809448926, 0);
  sqcRYGate(q, 2.8110830381221996, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0127171561379105, 1);
  sqcRYGate(q, -0.23727202407875936, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2201410556610384, 1);
  sqcRYGate(q, 0.4925430164137925, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8419413655250318, 0);
  sqcRYGate(q, -2.9785619329461284, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8678575001804218, 0);
  sqcRYGate(q, 0.4503207736256437, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5289651778645608, 2);
  sqcRYGate(q, -2.842545470900667, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.409735426496992, 2);
  sqcRYGate(q, -1.8629507603897388, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5861715835642691, 0);
  sqcRYGate(q, 0.9792040982012056, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4950897518577646, 0);
  sqcRYGate(q, 2.8734358073443134, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5112126201756368, 1);
  sqcRYGate(q, -0.008919961072009548, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9996146364166281, 1);
  sqcRYGate(q, 1.991687095380545, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5310711848136194, 0);
  sqcRYGate(q, 1.8437349183943441, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.840182780356188, 0);
  sqcRYGate(q, -1.0577495920886175, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5231024488366902, 1);
  sqcRYGate(q, 0.9280394150180191, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0462493110743898, 1);
  sqcRYGate(q, -1.4768261701212773, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.591710559197135, 0);
  sqcRYGate(q, -2.724535750863611, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.405985029758276, 0);
  sqcRYGate(q, 1.7318157321006344, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5965909881789337, 2);
  sqcRYGate(q, 0.9195563881532065, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0150404256549765, 2);
  sqcRYGate(q, 1.5922558361560322, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7623846022680107, 0);
  sqcRYGate(q, -0.23093105879712006, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9391300061181815, 0);
  sqcRYGate(q, -1.7212740669762774, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2175328586222253, 1);
  sqcRYGate(q, -2.91370813184132, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.08402171026703582, 1);
  sqcRYGate(q, 1.9808798927856746, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3874002440995588, 0);
  sqcRYGate(q, 2.047987329185848, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.133429567014827, 0);
  sqcRYGate(q, -2.349062095856723, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0430041385063924, 1);
  sqcRYGate(q, 1.7429353883634535, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.034859404667465, 1);
  sqcRYGate(q, 0.6663638717329142, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3376993969832949, 0);
  sqcRYGate(q, 0.9804605172835732, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.191186089414638, 0);
  sqcRYGate(q, 2.5153989766832243, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1628151753692606, 2);
  sqcRYGate(q, -2.5556558673049676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0732615316726584, 2);
  sqcRYGate(q, -0.06561161505467794, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4062031697950792, 0);
  sqcRYGate(q, -2.388679510268345, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.025901891340668, 0);
  sqcRYGate(q, -0.8579294009505851, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9960142343660054, 1);
  sqcRYGate(q, -1.0373429215729069, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8031684787801302, 1);
  sqcRYGate(q, 1.4989318322087541, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.193485391559485, 0);
  sqcRYGate(q, 0.7572608699065527, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7893452796352115, 0);
  sqcRYGate(q, 0.1632957258884962, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.897414255764099, 1);
  sqcRYGate(q, 1.299574531906948, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.357973025828898, 1);
  sqcRYGate(q, -0.9803181930541878, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5547522797563449, 0);
  sqcRYGate(q, 1.5779197358663162, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7875524292185199, 0);
  sqcRYGate(q, 1.134983738451984, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5516859653952575, 2);
  sqcRYGate(q, -2.4500746732440333, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.885666002265759, 2);
  sqcRYGate(q, 1.5136427528327536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.742201824409039, 0);
  sqcRYGate(q, 0.9847386616721381, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9205716799044783, 0);
  sqcRYGate(q, -2.8002129374225713, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.21167597003842964, 1);
  sqcRYGate(q, -1.8932719514700098, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6517485092142357, 1);
  sqcRYGate(q, -2.6126176858080683, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8057660867768233, 0);
  sqcRYGate(q, -0.6997851369309007, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7473398037580514, 0);
  sqcRYGate(q, 0.07758932947910058, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2724747355044173, 1);
  sqcRYGate(q, -2.757573681824902, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1430407710229282, 1);
  sqcRYGate(q, -1.0989930053499677, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9443631442849766, 0);
  sqcRYGate(q, -2.818163099861704, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4587862977988493, 0);
  sqcRYGate(q, 0.7317903724256278, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3235859954474525, 2);
  sqcRYGate(q, -2.674331366777594, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.482102761090777, 2);
  sqcRYGate(q, 0.4632580740291822, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7582671977062679, 0);
  sqcRYGate(q, 1.2253740527756163, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1824314789770576, 0);
  sqcRYGate(q, 0.5454350654450986, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.24457082797077065, 1);
  sqcRYGate(q, 0.5466694109206625, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8749267993346888, 1);
  sqcRYGate(q, 1.2366445135814632, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.226893449018383, 0);
  sqcRYGate(q, 1.4463625521969916, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.57512452970591, 0);
  sqcRYGate(q, 2.555051053403774, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.501471924710901, 1);
  sqcRYGate(q, 1.5891411086729779, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2001201494066856, 1);
  sqcRYGate(q, -1.484140860286895, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.036509514086089406, 0);
  sqcRYGate(q, -1.9682146143533945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.31116882785219757, 0);
  sqcRYGate(q, 1.571105196278787, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2849231587014103, 2);
  sqcRYGate(q, -1.0238568770277832, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6574628144683965, 2);
  sqcRYGate(q, -0.6600821597743128, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.23193579355267158, 0);
  sqcRYGate(q, 1.0444701707462813, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8257561549673675, 0);
  sqcRYGate(q, 2.7721001189739356, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5439779395063646, 1);
  sqcRYGate(q, 2.3198981552536213, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6743905137657205, 1);
  sqcRYGate(q, 0.4364517187351309, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.055920228405914, 0);
  sqcRYGate(q, 0.3005713117792739, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.601283531402422, 0);
  sqcRYGate(q, -1.3564510571827892, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9858898238652323, 1);
  sqcRYGate(q, -2.0386331101458, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.49460775527816514, 1);
  sqcRYGate(q, 2.357929550787899, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2593911358576684, 0);
  sqcRYGate(q, 0.04863875349655711, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0357096801960628, 0);
  sqcRYGate(q, 2.967154047341372, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6259794487904338, 2);
  sqcRYGate(q, 2.972004322875127, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2736813909220794, 2);
  sqcRYGate(q, 1.1261806096898344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6674413297779918, 0);
  sqcRYGate(q, 0.9995153018062345, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7671334546297977, 0);
  sqcRYGate(q, 1.7334357829807825, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.888572137422404, 1);
  sqcRYGate(q, 0.23109104833057492, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8301556833266275, 1);
  sqcRYGate(q, 1.388932769851206, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8178773323475204, 0);
  sqcRYGate(q, 0.7238907736167305, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.900603616249981, 0);
  sqcRYGate(q, -0.31766555090078086, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4679051314252642, 1);
  sqcRYGate(q, -0.9416697608848955, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3680680227933132, 1);
  sqcRYGate(q, 1.9662681594121851, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.876382497251471, 0);
  sqcRYGate(q, 0.633769847082615, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2213714581108044, 0);
  sqcRYGate(q, 1.6551437324655138, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6457092257357386, 2);
  sqcRYGate(q, -1.9240786056258161, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9977020611266734, 2);
  sqcRYGate(q, -2.714169604884332, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7597831248057199, 0);
  sqcRYGate(q, 0.04990077103210446, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5490041828174983, 0);
  sqcRYGate(q, 1.5315352874538528, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.10445325980508269, 1);
  sqcRYGate(q, -0.978207469105394, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.831663158007832, 1);
  sqcRYGate(q, -2.5768017631787825, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.409493581078243, 0);
  sqcRYGate(q, 2.754518635189925, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7905628022195517, 0);
  sqcRYGate(q, -1.17661617307557, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.3108231800436894, 1);
  sqcRYGate(q, 2.342226507887704, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9292062343327336, 1);
  sqcRYGate(q, 1.8244927814423435, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9402640552851103, 0);
  sqcRYGate(q, -2.6936983813733204, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.581480073687514, 0);
  sqcRYGate(q, -1.932224749447438, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1210627566489297, 2);
  sqcRYGate(q, -0.31094203192532105, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2517319171873735, 2);
  sqcRYGate(q, 2.264268766219687, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9546347378624596, 0);
  sqcRYGate(q, -1.3497962635949872, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7157025260238856, 0);
  sqcRYGate(q, 2.6452174096816456, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.12775988423237727, 1);
  sqcRYGate(q, 1.641288273687489, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7815025235530169, 1);
  sqcRYGate(q, -2.7228843132926346, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8948550696025663, 0);
  sqcRYGate(q, 3.009982105360819, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4906529378974422, 0);
  sqcRYGate(q, 1.1185288318537783, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4525532893651762, 1);
  sqcRYGate(q, -2.100065282622295, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5903317836486757, 1);
  sqcRYGate(q, 2.768477642951406, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3793546417673013, 0);
  sqcRYGate(q, -2.1944234687735027, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.28194553141945305, 0);
  sqcRYGate(q, 1.5655620243635044, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.229677988995797, 2);
  sqcRYGate(q, -2.51233766131903, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.137611429733907, 2);
  sqcRYGate(q, 1.1191963016009465, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.338183976784656, 0);
  sqcRYGate(q, -1.797951607201431, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.30536907854281203, 0);
  sqcRYGate(q, 1.7186664481535434, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4628856357526843, 1);
  sqcRYGate(q, 2.201561877834857, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7782205323268778, 1);
  sqcRYGate(q, 0.7960317491937826, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0157042595936963, 0);
  sqcRYGate(q, -1.7548472259947685, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7215851671395264, 0);
  sqcRYGate(q, -1.2548679689448006, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.761580072176336, 1);
  sqcRYGate(q, -1.1679362104955606, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.031772381037056256, 1);
  sqcRYGate(q, 0.07891922890349523, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9987414342483794, 0);
  sqcRYGate(q, 0.5005834451691458, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0947961486443973, 0);
  sqcRYGate(q, 2.7759935590588456, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.942369168087601, 2);
  sqcRYGate(q, 2.585131554706975, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.228921370882328, 2);
  sqcRYGate(q, 0.9099378414660063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5888885054748685, 0);
  sqcRYGate(q, 2.071497881284831, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.706899228761873, 0);
  sqcRYGate(q, 0.6614082537550297, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.820327925279837, 1);
  sqcRYGate(q, -1.2285494256408214, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.091175242848669, 1);
  sqcRYGate(q, -0.3172781173168886, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.905311990701552, 0);
  sqcRYGate(q, 2.424548072463346, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7509047760161185, 0);
  sqcRYGate(q, 1.337941966339738, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6404066695959385, 1);
  sqcRYGate(q, 2.405618505813032, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7580843821178762, 1);
  sqcRYGate(q, 2.1882741009751077, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2511238712737685, 0);
  sqcRYGate(q, 0.8272058787175142, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4924698663187659, 0);
  sqcRYGate(q, 2.182647966300186, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.20447414116195795, 2);
  sqcRYGate(q, 0.39912192519533557, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.36772204606833103, 2);
  sqcRYGate(q, -1.8730453531365008, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4352092199841295, 0);
  sqcRYGate(q, 1.1291690308969669, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0479125910760265, 0);
  sqcRYGate(q, 1.6668246648184748, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.512601277323517, 1);
  sqcRYGate(q, -0.19707097125552517, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1559987681732837, 1);
  sqcRYGate(q, -0.16431337122268008, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0725326030059275, 0);
  sqcRYGate(q, 0.6567077590988846, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7960487786176936, 0);
  sqcRYGate(q, -2.715918847037497, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.524028799266218, 1);
  sqcRYGate(q, -0.8183059006065561, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.123271939631679, 1);
  sqcRYGate(q, 2.9950716380061233, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2412570797024545, 0);
  sqcRYGate(q, 2.6992448184978306, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9408061159391046, 0);
  sqcRYGate(q, 2.598605400337945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4309044844456362, 2);
  sqcRYGate(q, 1.4159757703508773, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9868186001102197, 2);
  sqcRYGate(q, -2.029347948272701, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1614514285260098, 0);
  sqcRYGate(q, 0.6143830543258585, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.022296976512900756, 0);
  sqcRYGate(q, 1.2427513559082888, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8395712572596802, 1);
  sqcRYGate(q, -0.5850695011466289, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5041210773261557, 1);
  sqcRYGate(q, -0.19674895811112414, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.867380539773035, 0);
  sqcRYGate(q, 1.5276853895154696, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.2659784200932904, 0);
  sqcRYGate(q, 2.6335500777093177, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9422177129908471, 1);
  sqcRYGate(q, -1.6817502895070895, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2580562321145522, 1);
  sqcRYGate(q, -0.47141135536608836, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5584176707147446, 0);
  sqcRYGate(q, -2.024369684183924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4890000952127864, 0);
  sqcRYGate(q, 3.0241067020704064, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.286400430314389, 2);
  sqcRYGate(q, 2.324893555119179, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2899623753921157, 2);
  sqcRYGate(q, -2.068026331447152, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1969463398246836, 0);
  sqcRYGate(q, -0.6124551148264041, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.18790395386302006, 0);
  sqcRYGate(q, -1.528989680148011, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2843336776605643, 1);
  sqcRYGate(q, -1.7670060191834445, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.530076885401131, 1);
  sqcRYGate(q, 0.01162172856018806, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0636550013207156, 0);
  sqcRYGate(q, -0.5194836036603121, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2589740071519904, 0);
  sqcRYGate(q, -1.383314801326981, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.141579240500346, 1);
  sqcRYGate(q, 2.1806901252358273, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6986196587082856, 1);
  sqcRYGate(q, 2.810070303125812, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4450903907975223, 0);
  sqcRYGate(q, -0.5988817949274807, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.10402407281309056, 0);
  sqcRYGate(q, 0.2405725857107194, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.11795305009876254, 2);
  sqcRYGate(q, 0.66681492429326, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2661706299907022, 2);
  sqcRYGate(q, 1.2148661639804876, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8592870416187601, 0);
  sqcRYGate(q, -0.9061566107758372, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.20358168011475275, 0);
  sqcRYGate(q, 1.1105246325978788, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0323639450292967, 1);
  sqcRYGate(q, 1.8710136871114864, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.199191176693743, 1);
  sqcRYGate(q, -1.6548889382186038, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6602769671108, 0);
  sqcRYGate(q, -2.3238954849141247, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6725508502611834, 0);
  sqcRYGate(q, -0.4873819213465777, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0092671408046034, 1);
  sqcRYGate(q, 0.05978746976018457, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2931594528657042, 1);
  sqcRYGate(q, -0.3866728089264342, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9992483792636873, 0);
  sqcRYGate(q, 0.044105690371141655, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5394872951367363, 0);
  sqcRYGate(q, -1.7949960094259452, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4050504768367942, 2);
  sqcRYGate(q, -0.29525056740252165, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.239821664545187, 2);
  sqcRYGate(q, 0.8308653169022797, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9453864830436611, 0);
  sqcRYGate(q, -2.5713021713027278, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3805339442709776, 0);
  sqcRYGate(q, -1.6568965288618307, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0000459910998916, 1);
  sqcRYGate(q, 0.8795477309618809, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8329417047875527, 1);
  sqcRYGate(q, -2.359649563697851, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0578404274884172, 0);
  sqcRYGate(q, -2.185968578125455, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8719212565406507, 0);
  sqcRYGate(q, 0.4725402627816049, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5171811830629003, 1);
  sqcRYGate(q, 2.9400310206632145, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5013792002948163, 1);
  sqcRYGate(q, 1.5535761195401445, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8852640074623832, 0);
  sqcRYGate(q, 2.2639477173927207, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.469253560304626, 0);
  sqcRYGate(q, -1.6549199492325544, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1868216100879962, 2);
  sqcRYGate(q, -1.9424877773968277, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.457881538753364, 2);
  sqcRYGate(q, -0.929975891256908, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2440904028408726, 0);
  sqcRYGate(q, -2.3991820386864413, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.11603099425685642, 0);
  sqcRYGate(q, 1.4846687364509548, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4717271708770421, 1);
  sqcRYGate(q, 2.220582614434963, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6992470192050764, 1);
  sqcRYGate(q, 1.862883609788118, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4417582705667513, 0);
  sqcRYGate(q, -1.7825026158051864, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3449566467789733, 0);
  sqcRYGate(q, 0.33232524886449083, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.192266730815386, 1);
  sqcRYGate(q, -2.8937086244468078, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6562979501701256, 1);
  sqcRYGate(q, 2.448665754969505, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.31490654652695665, 0);
  sqcRYGate(q, -1.4921394159459285, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3670275756720689, 0);
  sqcRYGate(q, -3.028900575017419, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4100393290492135, 2);
  sqcRYGate(q, -0.4254364156593704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2334021216381084, 2);
  sqcRYGate(q, 2.3085968254613225, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.86655328891933, 0);
  sqcRYGate(q, 1.5538805667854394, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0260993983443347, 0);
  sqcRYGate(q, -0.23682559785852617, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.43651502765061273, 1);
  sqcRYGate(q, 1.6593150989549745, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.35323909538031, 1);
  sqcRYGate(q, -1.369277220694032, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.445951039172371, 0);
  sqcRYGate(q, 1.0561938336393473, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.077193526558528, 0);
  sqcRYGate(q, 1.7131376398215747, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.930721080060117, 1);
  sqcRYGate(q, -0.12516975175021638, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4866543320517813, 1);
  sqcRYGate(q, -0.32437462108486664, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4566679926548796, 0);
  sqcRYGate(q, 1.8628842755561705, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4688938270787384, 0);
  sqcRYGate(q, -0.14037318205118512, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7187601813288884, 2);
  sqcRYGate(q, 0.24881878844204497, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.41080919230157514, 2);
  sqcRYGate(q, -0.7681094681802803, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5277449869522969, 0);
  sqcRYGate(q, -2.5828416904330647, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.649133049866752, 0);
  sqcRYGate(q, 2.46047065137729, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3607296444901853, 1);
  sqcRYGate(q, 0.19276876518457095, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.768471108798963, 1);
  sqcRYGate(q, 2.983972654035896, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0754831521625547, 0);
  sqcRYGate(q, -1.84851858173249, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8101670937432852, 0);
  sqcRYGate(q, 2.608061996580797, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4426532899825664, 1);
  sqcRYGate(q, -2.033934445376376, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7687289048704855, 1);
  sqcRYGate(q, 0.8508862710467744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.111822846256966, 0);
  sqcRYGate(q, -1.071043507106641, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0118957897994072, 0);
  sqcRYGate(q, -2.1514882354373874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0339953101736983, 2);
  sqcRYGate(q, 1.3210339689336184, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3656282722853357, 2);
  sqcRYGate(q, 1.82543027309116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3304936588600933, 0);
  sqcRYGate(q, 0.42200172533107505, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.018239744531689972, 0);
  sqcRYGate(q, 2.2981489445323127, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.477118735544374, 1);
  sqcRYGate(q, -0.28959641534653, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6222116156741581, 1);
  sqcRYGate(q, 3.0401650462207237, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7912039059005243, 0);
  sqcRYGate(q, -0.23769470292048017, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.894748071920589, 0);
  sqcRYGate(q, 1.3193083671252102, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.909616081237805, 1);
  sqcRYGate(q, -2.836327406873948, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.780172706310917, 1);
  sqcRYGate(q, -1.0483436473606236, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.073198532627041, 0);
  sqcRYGate(q, -2.174758962132196, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7366208055667105, 0);
  sqcRYGate(q, 2.1158032198481527, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.15541738787858073, 2);
  sqcRYGate(q, -1.1943515459805765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8379269375580432, 2);
  sqcRYGate(q, -0.1358240658490347, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1933478047210557, 0);
  sqcRYGate(q, 0.14637042673185088, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8289189605553076, 0);
  sqcRYGate(q, -0.7818718720999542, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8915563868782366, 1);
  sqcRYGate(q, 3.081316100800565, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.125155068446728, 1);
  sqcRYGate(q, 1.6152706044476024, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8695288144597112, 0);
  sqcRYGate(q, -0.6529154923177202, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.3872576328613535, 0);
  sqcRYGate(q, -2.672554247506692, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.02382429682254106, 1);
  sqcRYGate(q, -2.863647733802367, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1743274018453222, 1);
  sqcRYGate(q, -2.260097139790042, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7822644179806384, 0);
  sqcRYGate(q, -1.9006151445866943, 1);
  sqcRYGate(q, 2.4861587387558446, 2);
  sqcRYGate(q, -1.180569240750243, 3);

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
