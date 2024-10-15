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

  sqcRYGate(q, 3.1158145290617103, 0);
  sqcRYGate(q, 0.6405533512314711, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9383759797640643, 0);
  sqcRYGate(q, 0.24878496563887964, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3282211344815158, 2);
  sqcRYGate(q, -2.9200315303562245, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8660992665938223, 2);
  sqcRYGate(q, 0.9660083237106661, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2592692592486947, 0);
  sqcRYGate(q, 1.9111620623449581, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6073124890762727, 0);
  sqcRYGate(q, 0.26301919327335277, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.1067047826132447, 1);
  sqcRYGate(q, -0.6504563037441053, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6981066928972586, 1);
  sqcRYGate(q, -0.9353907533310865, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1299052684528343, 0);
  sqcRYGate(q, -1.3415981795921055, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.278077925145813, 0);
  sqcRYGate(q, -2.4291917883072833, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3016936141992483, 2);
  sqcRYGate(q, -2.868971215515701, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.052296228890292, 2);
  sqcRYGate(q, -1.1378647538847746, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9980413110667952, 0);
  sqcRYGate(q, 2.5042691874687453, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4754657301892116, 0);
  sqcRYGate(q, 0.07850072396931704, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.155544660139685, 1);
  sqcRYGate(q, -1.7272626558154895, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2953143195877168, 1);
  sqcRYGate(q, 1.6557356628784752, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.888641561240803, 0);
  sqcRYGate(q, 2.7716584076631827, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.911670319410054, 0);
  sqcRYGate(q, -0.3607284042547807, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9977932589578646, 2);
  sqcRYGate(q, -0.6981503297585674, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5922546811110667, 2);
  sqcRYGate(q, -1.1094334774967953, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0300249591550226, 0);
  sqcRYGate(q, -2.0959839424570834, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.772224920675088, 0);
  sqcRYGate(q, -0.6442289419115705, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.28120994791385, 1);
  sqcRYGate(q, -3.049410047429715, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7306944938990672, 1);
  sqcRYGate(q, -0.35654586909383457, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4094501506238, 0);
  sqcRYGate(q, -1.5958118563111825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.094164862250592, 0);
  sqcRYGate(q, -2.4227568792753855, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4131626069458543, 2);
  sqcRYGate(q, 0.04848166748466731, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2771205618089736, 2);
  sqcRYGate(q, 0.27430744861765266, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1072542342702696, 0);
  sqcRYGate(q, 1.016775403770402, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7482437650491163, 0);
  sqcRYGate(q, -0.7278530739909153, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2218957503389278, 1);
  sqcRYGate(q, 2.905182449037706, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1325197714854938, 1);
  sqcRYGate(q, 1.3622212721063258, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.21645036287117936, 0);
  sqcRYGate(q, -0.22242791017134164, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.10731279424401016, 0);
  sqcRYGate(q, 2.399811669688491, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0436143986570086, 2);
  sqcRYGate(q, -2.805457025602411, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3963223240584197, 2);
  sqcRYGate(q, 0.17391560456872016, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.366011474043027, 0);
  sqcRYGate(q, 2.195672127061072, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6378749969038182, 0);
  sqcRYGate(q, 0.4743374136845108, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.412512084510072, 1);
  sqcRYGate(q, -0.9681325306770585, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.713763968340482, 1);
  sqcRYGate(q, -2.167592985447315, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.128127884366034, 0);
  sqcRYGate(q, 0.9265620350261825, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9952139726958134, 0);
  sqcRYGate(q, -1.4937361636668054, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1485589035606654, 2);
  sqcRYGate(q, -0.5581008252950106, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6050447495965916, 2);
  sqcRYGate(q, 1.3468338232887098, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3312128773549372, 0);
  sqcRYGate(q, 1.704627286477256, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.35558099689434414, 0);
  sqcRYGate(q, -1.87120658522982, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.568899048019925, 1);
  sqcRYGate(q, 0.1484145122764285, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3364401966856496, 1);
  sqcRYGate(q, 2.644059226454247, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8062010052823175, 0);
  sqcRYGate(q, -1.9716610379669364, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.23459151298524025, 0);
  sqcRYGate(q, 1.9450150750199109, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.13007607747261518, 2);
  sqcRYGate(q, 2.302954120438775, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9545619075772898, 2);
  sqcRYGate(q, -1.1925487660176886, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.637461676478673, 0);
  sqcRYGate(q, -1.6688417295862923, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.806934113915659, 0);
  sqcRYGate(q, 2.921016546500198, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.609919705791654, 1);
  sqcRYGate(q, 1.8181396402586856, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3334278236113075, 1);
  sqcRYGate(q, 0.39358941663464014, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7360088990177562, 0);
  sqcRYGate(q, 0.1013270996213782, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.104240283771226, 0);
  sqcRYGate(q, -0.06553613555793188, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5969971904554583, 2);
  sqcRYGate(q, -0.3122396408887953, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4585856100886017, 2);
  sqcRYGate(q, -1.6729299837457194, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7409417104326055, 0);
  sqcRYGate(q, 1.4629088321495063, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.07449266520566056, 0);
  sqcRYGate(q, -0.2310998860724064, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6306265776341378, 1);
  sqcRYGate(q, -2.4813286693201007, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.35444560827662297, 1);
  sqcRYGate(q, -1.8956193827959682, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.513262596588038, 0);
  sqcRYGate(q, -2.571174678765742, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0863078852731363, 0);
  sqcRYGate(q, -2.919822600238823, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.38031871242234416, 2);
  sqcRYGate(q, -1.7410582632896001, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5373201240778305, 2);
  sqcRYGate(q, -0.5036481915948361, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.181940488068112, 0);
  sqcRYGate(q, 2.4551372533571043, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5043783046259507, 0);
  sqcRYGate(q, -0.8602124979766952, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.49805673845843457, 1);
  sqcRYGate(q, 2.2723622849778953, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6034809215694263, 1);
  sqcRYGate(q, -0.47015784285747564, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7555002943377399, 0);
  sqcRYGate(q, -1.159604256240251, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.010616550139105318, 0);
  sqcRYGate(q, 2.9218321050203873, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.07743753095907066, 2);
  sqcRYGate(q, -1.5756940205804089, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.47428477110170775, 2);
  sqcRYGate(q, 0.5306237760672895, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1518108870244728, 0);
  sqcRYGate(q, -2.4853701870406337, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7577497653332412, 0);
  sqcRYGate(q, -1.5728244679108099, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3016831392648456, 1);
  sqcRYGate(q, 0.2022208344052414, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1593992837689657, 1);
  sqcRYGate(q, -1.736258719915826, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0429564391648736, 0);
  sqcRYGate(q, 2.420111686069593, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3946179723527417, 0);
  sqcRYGate(q, -1.1945522127526227, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2827272801860988, 2);
  sqcRYGate(q, 0.09229771647240259, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.108063805876087, 2);
  sqcRYGate(q, 1.484674356771487, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.87382687464605, 0);
  sqcRYGate(q, -0.35414535309679046, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8461713752105005, 0);
  sqcRYGate(q, -1.4886141372079802, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.104181212725042, 1);
  sqcRYGate(q, -0.18494721071637052, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9826671931029078, 1);
  sqcRYGate(q, -1.898641885742796, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.746297817604676, 0);
  sqcRYGate(q, 1.2500109567085618, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.13456240387164242, 0);
  sqcRYGate(q, -0.7658880256866305, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4849042902706095, 2);
  sqcRYGate(q, 2.7895587344129535, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.005308859839439073, 2);
  sqcRYGate(q, -2.9153927119763745, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.005651315939642, 0);
  sqcRYGate(q, -0.300419511717323, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2641491326919307, 0);
  sqcRYGate(q, -2.1847742322190093, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.663436609122, 1);
  sqcRYGate(q, 0.7917417901925995, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3058464758109292, 1);
  sqcRYGate(q, 2.9001666742523065, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8012434620459457, 0);
  sqcRYGate(q, -1.888710041739749, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0007720187163613, 0);
  sqcRYGate(q, 2.322069625686121, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6102817221767936, 2);
  sqcRYGate(q, -2.958710530816219, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9826454710526771, 2);
  sqcRYGate(q, -2.9052001531809175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0130515170897474, 0);
  sqcRYGate(q, 2.8055348276677585, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5124812576410909, 0);
  sqcRYGate(q, 0.41024109143926424, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0861958684370538, 1);
  sqcRYGate(q, -2.635610984645395, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2312158035924297, 1);
  sqcRYGate(q, 0.8039490558652247, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7524113390036368, 0);
  sqcRYGate(q, 1.5241275721896468, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0832990199475696, 0);
  sqcRYGate(q, 0.7847267238102953, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.389110651837953, 2);
  sqcRYGate(q, -1.4112917831347778, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.453904368648583, 2);
  sqcRYGate(q, 1.5210156566712767, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5274988410667278, 0);
  sqcRYGate(q, 1.0329778851319116, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6582841708196105, 0);
  sqcRYGate(q, 1.8998512606524764, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8055833730425777, 1);
  sqcRYGate(q, 1.4344481274153302, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6927432712107393, 1);
  sqcRYGate(q, 2.5642596508086193, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1870381018188874, 0);
  sqcRYGate(q, 0.30744879528817126, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6548685059638027, 0);
  sqcRYGate(q, -1.2518035165932329, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4325135245125637, 2);
  sqcRYGate(q, 2.7628865152018345, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6509961696805338, 2);
  sqcRYGate(q, -1.8626759749536819, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3756788205040804, 0);
  sqcRYGate(q, 0.9709237321892212, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2699481270812356, 0);
  sqcRYGate(q, 0.18487764431856402, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7242745938310318, 1);
  sqcRYGate(q, 2.843529940401015, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.12820669606299778, 1);
  sqcRYGate(q, 2.3903875551983527, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2994514564910453, 0);
  sqcRYGate(q, -2.3886404743012286, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0368926716358695, 0);
  sqcRYGate(q, -2.622583002799757, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8565316218589163, 2);
  sqcRYGate(q, 0.015333141428134207, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5464090457604645, 2);
  sqcRYGate(q, 0.6993466870847662, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8124720837769424, 0);
  sqcRYGate(q, 0.6926507094763341, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.711770503826327, 0);
  sqcRYGate(q, -0.7722896963984694, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8270448492719578, 1);
  sqcRYGate(q, -1.8081029986065793, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.29802155148129, 1);
  sqcRYGate(q, -0.354891726032665, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1806848657683755, 0);
  sqcRYGate(q, 2.269632222631871, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3103986392401605, 0);
  sqcRYGate(q, -3.0045911892301373, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4521216446517147, 2);
  sqcRYGate(q, 0.27784010947951293, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.20743321279013482, 2);
  sqcRYGate(q, -1.4768236210678154, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.45999222960423136, 0);
  sqcRYGate(q, -1.4629978610173946, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2559522044130684, 0);
  sqcRYGate(q, -2.961936119353488, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.212785563818719, 1);
  sqcRYGate(q, 1.9929174349110328, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.306972633916529, 1);
  sqcRYGate(q, -0.852642940099682, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.23542025351671114, 0);
  sqcRYGate(q, 1.3997180998969991, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9037794173383022, 0);
  sqcRYGate(q, -2.837075562713837, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.233794258002203, 2);
  sqcRYGate(q, 0.2659768439446882, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.554405141269911, 2);
  sqcRYGate(q, 1.271059472206086, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.593680024269404, 0);
  sqcRYGate(q, 1.928169040627401, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3447336820208042, 0);
  sqcRYGate(q, 1.4515119133966667, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.21578070645442, 1);
  sqcRYGate(q, 1.6121925829291932, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6115305099121526, 1);
  sqcRYGate(q, -1.2594984442545312, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7515364843951264, 0);
  sqcRYGate(q, -0.0795802283295052, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.104410519011367, 0);
  sqcRYGate(q, 0.233292730013412, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1562972184262126, 2);
  sqcRYGate(q, 1.362550178294959, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0243906829089524, 2);
  sqcRYGate(q, 2.8789637316262646, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2665004792742525, 0);
  sqcRYGate(q, 0.8745232834567612, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2056938220738411, 0);
  sqcRYGate(q, -0.304750663408381, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5160159881876787, 1);
  sqcRYGate(q, -2.857760855291581, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.45286042030157, 1);
  sqcRYGate(q, -1.9933154129920823, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4457269804713315, 0);
  sqcRYGate(q, -2.661022148572638, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9613991577611714, 0);
  sqcRYGate(q, -0.5442307005695817, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.842207797649248, 2);
  sqcRYGate(q, 1.2843911419864036, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0153325927596564, 2);
  sqcRYGate(q, 1.2486441423777617, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.631665511929406, 0);
  sqcRYGate(q, 0.46873932938009677, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7678429135314677, 0);
  sqcRYGate(q, -1.5623379179972894, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.212738752549017, 1);
  sqcRYGate(q, 0.3897626466759636, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.644844746014037, 1);
  sqcRYGate(q, 2.8187692449504578, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5603558411116856, 0);
  sqcRYGate(q, -1.3317672935212599, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5567355157175189, 0);
  sqcRYGate(q, -3.0175055800358397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7932893859655634, 2);
  sqcRYGate(q, -2.881599839215038, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5287855803259025, 2);
  sqcRYGate(q, 2.409924578149872, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6591860468184196, 0);
  sqcRYGate(q, 2.20991497777455, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.675467649401485, 0);
  sqcRYGate(q, 2.370419393548966, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9736028997489796, 1);
  sqcRYGate(q, -0.25054360844820067, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.653308960399001, 1);
  sqcRYGate(q, 1.692421785269306, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6997430492147445, 0);
  sqcRYGate(q, 2.809937937112725, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4590969581209148, 0);
  sqcRYGate(q, -1.2906106151028514, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8730598977197608, 2);
  sqcRYGate(q, -1.7186787797177168, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8336635452484957, 2);
  sqcRYGate(q, 1.7240242474997256, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1230834086229855, 0);
  sqcRYGate(q, 1.388753099705779, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6971961382040148, 0);
  sqcRYGate(q, 0.5678748321365957, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9904882510699986, 1);
  sqcRYGate(q, 1.0778578511953145, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0946710962682848, 1);
  sqcRYGate(q, 2.634998554311525, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.869730488376336, 0);
  sqcRYGate(q, -0.8159836367444324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.097227070293747, 0);
  sqcRYGate(q, 2.051986144684496, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.10652013970966712, 2);
  sqcRYGate(q, -0.011715751126463836, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.398489542823886, 2);
  sqcRYGate(q, -0.9626214373132497, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.294575996581278, 0);
  sqcRYGate(q, -2.5747769081644267, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7108399226534763, 0);
  sqcRYGate(q, -3.066716247755035, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2936839530675273, 1);
  sqcRYGate(q, -0.8240706383637055, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.14540096074143705, 1);
  sqcRYGate(q, 0.12006962470068655, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9652246774632416, 0);
  sqcRYGate(q, 2.7299575450559614, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1977465839563775, 0);
  sqcRYGate(q, -2.554540340088983, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.575116213067926, 2);
  sqcRYGate(q, 1.5796560449263604, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.28692197083132, 2);
  sqcRYGate(q, 0.7220559850520581, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6143069889239187, 0);
  sqcRYGate(q, -0.03787791222044418, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.025610531508698, 0);
  sqcRYGate(q, 0.15761815951469949, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7531922771629, 1);
  sqcRYGate(q, -2.5102277505668558, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.281152258327611, 1);
  sqcRYGate(q, 1.5455285866391633, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4546738675080406, 0);
  sqcRYGate(q, -2.542712623416081, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9030760438393042, 0);
  sqcRYGate(q, 0.3100439923243785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.13388309083414335, 2);
  sqcRYGate(q, 1.9729184555529298, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6158098823217744, 2);
  sqcRYGate(q, 0.34836286544788175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7077606870509862, 0);
  sqcRYGate(q, -1.28500979220088, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.016240950068677, 0);
  sqcRYGate(q, 1.0174179276483268, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7144876141384604, 1);
  sqcRYGate(q, 1.651566348718887, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.1375176519543264, 1);
  sqcRYGate(q, 2.4874773330939175, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2246407883104338, 0);
  sqcRYGate(q, -3.1236528881679484, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5748845949733834, 0);
  sqcRYGate(q, 1.3603346390820894, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.23786366420661142, 2);
  sqcRYGate(q, 0.6325047724143964, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1481788825345554, 2);
  sqcRYGate(q, -1.312027012806226, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6942235514984787, 0);
  sqcRYGate(q, 1.4444078376987217, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5330497565673609, 0);
  sqcRYGate(q, 1.0966979736064284, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6164839937177864, 1);
  sqcRYGate(q, -1.451514851520904, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7363596353365174, 1);
  sqcRYGate(q, -0.0969100863464396, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.676204138705553, 0);
  sqcRYGate(q, -0.9825199936635304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2665344742099167, 0);
  sqcRYGate(q, 3.1186041757892076, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6945866803615077, 2);
  sqcRYGate(q, 1.135963901991099, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.36239795450709256, 2);
  sqcRYGate(q, -2.081653744512517, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3775477203949169, 0);
  sqcRYGate(q, -0.24359188523001063, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.38966260343946724, 0);
  sqcRYGate(q, 0.6623428270591881, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6085914765364295, 1);
  sqcRYGate(q, 2.0420171574169546, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6417826263989872, 1);
  sqcRYGate(q, 1.395507992898283, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6273552415919057, 0);
  sqcRYGate(q, -1.7862847743451589, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5350293604329317, 0);
  sqcRYGate(q, -1.7875137796112253, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.847839534602983, 2);
  sqcRYGate(q, -2.9250895425873704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0073319828207037, 2);
  sqcRYGate(q, 0.013804516078346603, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7726084624403007, 0);
  sqcRYGate(q, 3.074396942856722, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0658191523014509, 0);
  sqcRYGate(q, -0.7730680557878322, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8874918513952208, 1);
  sqcRYGate(q, 2.3701362729870903, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1043297221078623, 1);
  sqcRYGate(q, -0.8111506989747594, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.05224407148745858, 0);
  sqcRYGate(q, -0.38316678133021975, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8344775341063113, 0);
  sqcRYGate(q, 0.45004912271735714, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3133713777010412, 2);
  sqcRYGate(q, 1.8558052454520864, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3146286112971932, 2);
  sqcRYGate(q, -0.21551551961579804, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3508445955280184, 0);
  sqcRYGate(q, -0.3766117774418456, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7370242570881165, 0);
  sqcRYGate(q, -1.8199356786968446, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0494709725504814, 1);
  sqcRYGate(q, 1.3262441430108327, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0908522086746832, 1);
  sqcRYGate(q, 0.1797493742578915, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6934973974937315, 0);
  sqcRYGate(q, 2.1130319485692395, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.915516756165152, 0);
  sqcRYGate(q, 0.4633226603565417, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.307523996185344, 2);
  sqcRYGate(q, 0.9567821681617062, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6305306120979663, 2);
  sqcRYGate(q, -0.18148689275689556, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9974081432963406, 0);
  sqcRYGate(q, 0.4332759173817635, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7633302987719129, 0);
  sqcRYGate(q, 0.0652091163907631, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.392996385391859, 1);
  sqcRYGate(q, 0.44217322554702676, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4394199326435078, 1);
  sqcRYGate(q, -2.395808840793353, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.35750124766564195, 0);
  sqcRYGate(q, 1.603211691741387, 1);
  sqcRYGate(q, 0.7781085368213599, 2);
  sqcRYGate(q, -2.43888012531063, 3);

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
