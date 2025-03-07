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

  sqcRYGate(q, 2.903727182064044, 0);
  sqcRZGate(q, -1.7838740998034535, 0);
  sqcRYGate(q, -2.529898542752922, 1);
  sqcRZGate(q, -1.1645289639520424, 1);
  sqcRYGate(q, -0.7669364153371251, 2);
  sqcRZGate(q, 0.6268346444321096, 2);
  sqcRYGate(q, -2.153229218792654, 3);
  sqcRZGate(q, -1.1684976977779336, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.04528726914776628, 0);
  sqcRZGate(q, -1.0317870711147252, 0);
  sqcRYGate(q, 0.0941598337285443, 1);
  sqcRZGate(q, -1.1737651388351935, 1);
  sqcRYGate(q, 1.1316088204149373, 2);
  sqcRZGate(q, 0.16158137907553655, 2);
  sqcRYGate(q, 1.9040976259329208, 3);
  sqcRZGate(q, 2.304698526933202, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.418491729687901, 0);
  sqcRZGate(q, -2.8417003284979043, 0);
  sqcRYGate(q, -2.5348850701861263, 1);
  sqcRZGate(q, -2.616439018339558, 1);
  sqcRYGate(q, -1.3889780388294413, 2);
  sqcRZGate(q, 0.4253494121612409, 2);
  sqcRYGate(q, 2.422577386793767, 3);
  sqcRZGate(q, 2.192673586897902, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.84451787833769, 0);
  sqcRZGate(q, -0.15483272117650645, 0);
  sqcRYGate(q, 1.4380576417943332, 1);
  sqcRZGate(q, -2.167890026542283, 1);
  sqcRYGate(q, 1.3257370962645083, 2);
  sqcRZGate(q, -1.4856228794203092, 2);
  sqcRYGate(q, -2.2482959700832383, 3);
  sqcRZGate(q, 0.4031894901399657, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8252002827707015, 0);
  sqcRZGate(q, -1.367179961075194, 0);
  sqcRYGate(q, 2.6114092015305137, 1);
  sqcRZGate(q, -1.6825089378658102, 1);
  sqcRYGate(q, -1.7339642760527432, 2);
  sqcRZGate(q, 1.592171326605799, 2);
  sqcRYGate(q, 1.6602784807145745, 3);
  sqcRZGate(q, -0.7762624087396899, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.902881557072922, 0);
  sqcRZGate(q, 2.9888355082717877, 0);
  sqcRYGate(q, -2.2414262042787665, 1);
  sqcRZGate(q, 1.8755839847022884, 1);
  sqcRYGate(q, 0.8668441703233991, 2);
  sqcRZGate(q, -2.86270949845679, 2);
  sqcRYGate(q, 2.8041183197639707, 3);
  sqcRZGate(q, -1.338350780956258, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.111473493896549, 0);
  sqcRZGate(q, 2.4544928857601795, 0);
  sqcRYGate(q, -1.3421996674808092, 1);
  sqcRZGate(q, 0.8507371939939175, 1);
  sqcRYGate(q, -0.045175529711318704, 2);
  sqcRZGate(q, 1.0120171502584445, 2);
  sqcRYGate(q, 0.11225008172404563, 3);
  sqcRZGate(q, -2.514352441588606, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.723672138013929, 0);
  sqcRZGate(q, -2.971893230087816, 0);
  sqcRYGate(q, 0.37460319817403415, 1);
  sqcRZGate(q, -2.10276870661551, 1);
  sqcRYGate(q, -1.067969311425724, 2);
  sqcRZGate(q, 2.170531637998363, 2);
  sqcRYGate(q, -0.6070472580712069, 3);
  sqcRZGate(q, 3.0240826240118794, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.2832979267821604, 0);
  sqcRZGate(q, -0.6907551194758472, 0);
  sqcRYGate(q, 0.6040846715987395, 1);
  sqcRZGate(q, -2.3630521901131227, 1);
  sqcRYGate(q, -0.44558810629718165, 2);
  sqcRZGate(q, -2.332674192630958, 2);
  sqcRYGate(q, -0.16143972058263498, 3);
  sqcRZGate(q, 2.2815790334526262, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6209087629688848, 0);
  sqcRZGate(q, -1.9215081821848168, 0);
  sqcRYGate(q, 0.554977569463596, 1);
  sqcRZGate(q, 1.9647638987102933, 1);
  sqcRYGate(q, 1.5601678833606936, 2);
  sqcRZGate(q, 1.7934274087476558, 2);
  sqcRYGate(q, -1.0935298338613118, 3);
  sqcRZGate(q, 0.7903778929168626, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.11294552583189964, 0);
  sqcRZGate(q, 1.858729699451399, 0);
  sqcRYGate(q, -0.07182465548931116, 1);
  sqcRZGate(q, 2.5513694685629886, 1);
  sqcRYGate(q, 2.2940538800909485, 2);
  sqcRZGate(q, -2.326996888569439, 2);
  sqcRYGate(q, 1.089157988076546, 3);
  sqcRZGate(q, 2.946768717938567, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.20064575573361831, 0);
  sqcRZGate(q, 1.467961251765884, 0);
  sqcRYGate(q, 0.566747051594013, 1);
  sqcRZGate(q, -2.6976835220945223, 1);
  sqcRYGate(q, -1.7848761191969542, 2);
  sqcRZGate(q, -0.26081939671256116, 2);
  sqcRYGate(q, -0.5974575171202262, 3);
  sqcRZGate(q, 2.9858684005374907, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.648608219097646, 0);
  sqcRZGate(q, 1.9443774180721491, 0);
  sqcRYGate(q, 2.373322521408475, 1);
  sqcRZGate(q, 2.9422113492281636, 1);
  sqcRYGate(q, 2.4087960789030203, 2);
  sqcRZGate(q, -2.6301483228085916, 2);
  sqcRYGate(q, -1.8392726711197476, 3);
  sqcRZGate(q, 0.9509109142981726, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8977677117604045, 0);
  sqcRZGate(q, -2.4243819518778635, 0);
  sqcRYGate(q, 1.988319753561471, 1);
  sqcRZGate(q, 1.4846280226372115, 1);
  sqcRYGate(q, -2.2117228588398783, 2);
  sqcRZGate(q, -1.393932565626193, 2);
  sqcRYGate(q, -2.0649138436535637, 3);
  sqcRZGate(q, 0.7568518995240451, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.565266018594256, 0);
  sqcRZGate(q, 3.0369380531671224, 0);
  sqcRYGate(q, 0.03478996539027789, 1);
  sqcRZGate(q, 2.0869721306177285, 1);
  sqcRYGate(q, 2.1092961995648847, 2);
  sqcRZGate(q, -0.3994565787567159, 2);
  sqcRYGate(q, -0.16279591057457754, 3);
  sqcRZGate(q, 2.80952546965967, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6612716798999055, 0);
  sqcRZGate(q, -0.15722484698326222, 0);
  sqcRYGate(q, -0.36596075743486445, 1);
  sqcRZGate(q, -1.221066006818078, 1);
  sqcRYGate(q, 0.1517186665289903, 2);
  sqcRZGate(q, -1.992438485968135, 2);
  sqcRYGate(q, 2.835393967632496, 3);
  sqcRZGate(q, 1.379101984742415, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.716971592943214, 0);
  sqcRZGate(q, 1.442489475056477, 0);
  sqcRYGate(q, -0.4147145677330731, 1);
  sqcRZGate(q, 1.136032279672313, 1);
  sqcRYGate(q, -2.256935357760203, 2);
  sqcRZGate(q, -0.7074522404789514, 2);
  sqcRYGate(q, 0.09274345955978003, 3);
  sqcRZGate(q, 2.9027586497891344, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4798125225580945, 0);
  sqcRZGate(q, 0.27754967492419086, 0);
  sqcRYGate(q, -1.291735506461773, 1);
  sqcRZGate(q, -1.4139650193818358, 1);
  sqcRYGate(q, 1.9468169478993573, 2);
  sqcRZGate(q, -1.4977796342825904, 2);
  sqcRYGate(q, -2.7505292560554726, 3);
  sqcRZGate(q, 2.816085896095533, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6076274700505613, 0);
  sqcRZGate(q, 1.5846154766214173, 0);
  sqcRYGate(q, -0.2641967733047865, 1);
  sqcRZGate(q, 0.0392749185402469, 1);
  sqcRYGate(q, 1.1400785500471882, 2);
  sqcRZGate(q, 2.2881011495998975, 2);
  sqcRYGate(q, -2.80586357017019, 3);
  sqcRZGate(q, 2.5823571050912904, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.2421341194349544, 0);
  sqcRZGate(q, -2.8944214112080777, 0);
  sqcRYGate(q, -2.9606718113022765, 1);
  sqcRZGate(q, -1.5995633576927917, 1);
  sqcRYGate(q, -0.4489127524112613, 2);
  sqcRZGate(q, 1.901268934692323, 2);
  sqcRYGate(q, 1.6415637261848766, 3);
  sqcRZGate(q, -1.972937611917013, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.81597763883849, 0);
  sqcRZGate(q, 1.2472961915621168, 0);
  sqcRYGate(q, 0.27317608980767016, 1);
  sqcRZGate(q, -1.3585882648022398, 1);
  sqcRYGate(q, -1.3363496554216603, 2);
  sqcRZGate(q, -3.0019458181230156, 2);
  sqcRYGate(q, 1.7642571302203143, 3);
  sqcRZGate(q, 1.3093865952674761, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.708576791190087, 0);
  sqcRZGate(q, -1.6024036717505394, 0);
  sqcRYGate(q, -3.116764747181674, 1);
  sqcRZGate(q, 1.1008805086240987, 1);
  sqcRYGate(q, 0.25213792884379094, 2);
  sqcRZGate(q, 1.1624330569607153, 2);
  sqcRYGate(q, -0.2617720790900533, 3);
  sqcRZGate(q, -1.3430044409164004, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.017315643300029215, 0);
  sqcRZGate(q, 2.2218413612675825, 0);
  sqcRYGate(q, 0.668798565237169, 1);
  sqcRZGate(q, -1.1816323297784155, 1);
  sqcRYGate(q, -1.682725163356662, 2);
  sqcRZGate(q, 3.1063424848243373, 2);
  sqcRYGate(q, 2.792030506641431, 3);
  sqcRZGate(q, 0.765732951927577, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.646270718970502, 0);
  sqcRZGate(q, 1.6267480524506512, 0);
  sqcRYGate(q, -3.075830462794163, 1);
  sqcRZGate(q, 2.6947589842674677, 1);
  sqcRYGate(q, -0.6696958152142932, 2);
  sqcRZGate(q, 0.9937127084781084, 2);
  sqcRYGate(q, 0.9788558158990435, 3);
  sqcRZGate(q, 1.407507265214658, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.612741176101129, 0);
  sqcRZGate(q, 2.8946597060244126, 0);
  sqcRYGate(q, -0.8288070563215014, 1);
  sqcRZGate(q, -0.8019377977928482, 1);
  sqcRYGate(q, -0.12793054086514785, 2);
  sqcRZGate(q, -2.412060334645696, 2);
  sqcRYGate(q, -3.056649429095635, 3);
  sqcRZGate(q, -1.3840129317810037, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5243486962051929, 0);
  sqcRZGate(q, -2.5663618726113646, 0);
  sqcRYGate(q, 1.724422642599408, 1);
  sqcRZGate(q, 2.5708621815398014, 1);
  sqcRYGate(q, 2.408412159203014, 2);
  sqcRZGate(q, 1.1973957199614045, 2);
  sqcRYGate(q, 0.21046502168193815, 3);
  sqcRZGate(q, 0.02034128460067813, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5711847147527287, 0);
  sqcRZGate(q, 1.4995160337791393, 0);
  sqcRYGate(q, -1.4337507837099028, 1);
  sqcRZGate(q, 0.9990824356024315, 1);
  sqcRYGate(q, -1.0796183040282017, 2);
  sqcRZGate(q, 2.5228401089828, 2);
  sqcRYGate(q, 3.024806897849555, 3);
  sqcRZGate(q, -2.503728460097893, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0737862558164872, 0);
  sqcRZGate(q, 0.19656144278985543, 0);
  sqcRYGate(q, -1.2831373614856347, 1);
  sqcRZGate(q, -2.96092179772421, 1);
  sqcRYGate(q, -2.65810013325897, 2);
  sqcRZGate(q, 0.8347394348321925, 2);
  sqcRYGate(q, -1.3476463454189236, 3);
  sqcRZGate(q, 2.282075635822899, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.637186830443172, 0);
  sqcRZGate(q, -2.9213998929105562, 0);
  sqcRYGate(q, -2.393479809293416, 1);
  sqcRZGate(q, -2.0688440418156224, 1);
  sqcRYGate(q, 1.6278780967959046, 2);
  sqcRZGate(q, 1.7045050673834548, 2);
  sqcRYGate(q, -2.5978120790946915, 3);
  sqcRZGate(q, 1.211456843539432, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.34838671201857174, 0);
  sqcRZGate(q, -0.952840107100552, 0);
  sqcRYGate(q, 1.2941023329969898, 1);
  sqcRZGate(q, -1.827067333433159, 1);
  sqcRYGate(q, 2.6569141704570005, 2);
  sqcRZGate(q, 1.6903432041114668, 2);
  sqcRYGate(q, -2.088255039038329, 3);
  sqcRZGate(q, 0.8810930852186899, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9946124098220595, 0);
  sqcRZGate(q, -2.9254973467329015, 0);
  sqcRYGate(q, 1.3715522559174644, 1);
  sqcRZGate(q, -1.2836895062313882, 1);
  sqcRYGate(q, -0.7542159300817586, 2);
  sqcRZGate(q, 1.971740978961126, 2);
  sqcRYGate(q, 1.1417653384510373, 3);
  sqcRZGate(q, -2.6968734021128595, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9004956205281727, 0);
  sqcRZGate(q, 2.3871855179858064, 0);
  sqcRYGate(q, 1.737207581615932, 1);
  sqcRZGate(q, -2.586410837022498, 1);
  sqcRYGate(q, 1.2729586802353903, 2);
  sqcRZGate(q, 0.9228677848902844, 2);
  sqcRYGate(q, 0.8673912445297907, 3);
  sqcRZGate(q, -2.9107656080941395, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2696807572891693, 0);
  sqcRZGate(q, 3.011393735038381, 0);
  sqcRYGate(q, -2.6940750936160676, 1);
  sqcRZGate(q, 1.718831106406171, 1);
  sqcRYGate(q, 1.4649221458266966, 2);
  sqcRZGate(q, -1.9441340513143257, 2);
  sqcRYGate(q, 2.251792030704965, 3);
  sqcRZGate(q, -1.7765027154120618, 3);

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
