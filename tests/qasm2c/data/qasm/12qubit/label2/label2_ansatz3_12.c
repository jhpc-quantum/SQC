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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 2.9918008392220314, 0);
  sqcRZGate(q, 2.798678177177557, 0);
  sqcRYGate(q, 2.964586491948894, 1);
  sqcRZGate(q, 2.1153305012848547, 1);
  sqcRYGate(q, -0.40762491626316155, 2);
  sqcRZGate(q, 1.4506973750459737, 2);
  sqcRYGate(q, 3.124574324188995, 3);
  sqcRZGate(q, 0.40456118416869286, 3);
  sqcRYGate(q, -0.48730566422982147, 4);
  sqcRZGate(q, 1.5415574016503273, 4);
  sqcRYGate(q, -3.126963290748725, 5);
  sqcRZGate(q, -1.7786742503334965, 5);
  sqcRYGate(q, -3.1414801136663373, 6);
  sqcRZGate(q, -0.3135515694057651, 6);
  sqcRYGate(q, -1.2467388005604227e-05, 7);
  sqcRZGate(q, -0.020872704414717447, 7);
  sqcRYGate(q, -3.068164207015155, 8);
  sqcRZGate(q, -1.0056480143544304, 8);
  sqcRYGate(q, 0.6537817826870942, 9);
  sqcRZGate(q, 1.8180745839297243, 9);
  sqcRYGate(q, -1.3853905277012952, 10);
  sqcRZGate(q, -3.1308112498283003, 10);
  sqcRYGate(q, -0.06649236828527183, 11);
  sqcRZGate(q, 0.32772417967312517, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.12992991547097896, 0);
  sqcRZGate(q, 1.8548509249492557, 0);
  sqcRYGate(q, -0.8319983326167515, 1);
  sqcRZGate(q, 0.24024657344882436, 1);
  sqcRYGate(q, -1.47867950573588, 2);
  sqcRZGate(q, -2.841594954119843, 2);
  sqcRYGate(q, -0.0020106983541307234, 3);
  sqcRZGate(q, 2.9347698549548418, 3);
  sqcRYGate(q, -1.7192407241709244, 4);
  sqcRZGate(q, -2.368643276875807, 4);
  sqcRYGate(q, -2.4848138295373343, 5);
  sqcRZGate(q, 0.779413357423147, 5);
  sqcRYGate(q, -3.141450823665061, 6);
  sqcRZGate(q, -0.1875681888636229, 6);
  sqcRYGate(q, -4.0684088385834356e-05, 7);
  sqcRZGate(q, 1.1332939657525338, 7);
  sqcRYGate(q, 2.7335888222986093, 8);
  sqcRZGate(q, -0.5236989244595057, 8);
  sqcRYGate(q, 2.390936335106014, 9);
  sqcRZGate(q, 1.4374070274367172, 9);
  sqcRYGate(q, 1.5300422547929555, 10);
  sqcRZGate(q, -3.1169242357470472, 10);
  sqcRYGate(q, -2.6848973178808806, 11);
  sqcRZGate(q, -1.099264282807968, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.5579817273995626, 0);
  sqcRZGate(q, -0.729498245724579, 0);
  sqcRYGate(q, -1.9878740721306758, 1);
  sqcRZGate(q, -0.6179768804810976, 1);
  sqcRYGate(q, 3.140370129925821, 2);
  sqcRZGate(q, -0.3489761553496287, 2);
  sqcRYGate(q, 2.949072448958405, 3);
  sqcRZGate(q, -0.1273737687946083, 3);
  sqcRYGate(q, -1.5088840917628763, 4);
  sqcRZGate(q, 0.009390187577198892, 4);
  sqcRYGate(q, -1.6539853159194544, 5);
  sqcRZGate(q, -2.4686967612004236, 5);
  sqcRYGate(q, -6.86166334107341e-05, 6);
  sqcRZGate(q, 0.21021704476254183, 6);
  sqcRYGate(q, -3.1415829658709407, 7);
  sqcRZGate(q, -2.521063164943782, 7);
  sqcRYGate(q, -0.038571820493210396, 8);
  sqcRZGate(q, -0.44101910326749844, 8);
  sqcRYGate(q, 0.08902215713374417, 9);
  sqcRZGate(q, -2.5632398234539955, 9);
  sqcRYGate(q, -0.18793225563398597, 10);
  sqcRZGate(q, -0.5372070660252575, 10);
  sqcRYGate(q, -0.057355203030205276, 11);
  sqcRZGate(q, 2.9417089397987297, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.02328949994352179, 0);
  sqcRZGate(q, -0.3197444008742176, 0);
  sqcRYGate(q, -1.605991223209102, 1);
  sqcRZGate(q, 0.40606362281709885, 1);
  sqcRYGate(q, -3.11190954918183, 2);
  sqcRZGate(q, 0.5828136701193114, 2);
  sqcRYGate(q, -3.1218354784130833, 3);
  sqcRZGate(q, 3.103576347358316, 3);
  sqcRYGate(q, 1.3155359863354876, 4);
  sqcRZGate(q, -0.941716772960774, 4);
  sqcRYGate(q, 0.2209325318868105, 5);
  sqcRZGate(q, 1.1732468875252255, 5);
  sqcRYGate(q, 1.570436186117856, 6);
  sqcRZGate(q, -1.9107372373705056, 6);
  sqcRYGate(q, -1.5706475061217615, 7);
  sqcRZGate(q, -0.4029710177237149, 7);
  sqcRYGate(q, -1.3647414052670466, 8);
  sqcRZGate(q, 1.8942914587905857, 8);
  sqcRYGate(q, -1.0126419626835261, 9);
  sqcRZGate(q, 2.7999108021241716, 9);
  sqcRYGate(q, 3.126294472276963, 10);
  sqcRZGate(q, 0.1381437632039541, 10);
  sqcRYGate(q, 1.7427415085581441, 11);
  sqcRZGate(q, 1.4467196660168176, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.50095990798079, 0);
  sqcRZGate(q, -2.5410210249459633, 0);
  sqcRYGate(q, 1.8047534603165651, 1);
  sqcRZGate(q, 0.09555992236025368, 1);
  sqcRYGate(q, 0.9535699688680976, 2);
  sqcRZGate(q, -2.980318156265595, 2);
  sqcRYGate(q, -1.5631782217503565, 3);
  sqcRZGate(q, 1.1526674579006126, 3);
  sqcRYGate(q, 1.7049368311553865e-05, 4);
  sqcRZGate(q, 2.8511454822049536, 4);
  sqcRYGate(q, -1.8041466016899317e-05, 5);
  sqcRZGate(q, 2.080349068627293, 5);
  sqcRYGate(q, -9.580905500072845e-06, 6);
  sqcRZGate(q, 1.882353953600444, 6);
  sqcRYGate(q, 3.1415281718097865, 7);
  sqcRZGate(q, -0.45937070884972725, 7);
  sqcRYGate(q, -1.570796052635376, 8);
  sqcRZGate(q, -0.1397993727033401, 8);
  sqcRYGate(q, -1.5707202794820176, 9);
  sqcRZGate(q, -2.446449806357223, 9);
  sqcRYGate(q, -1.6020913759889965, 10);
  sqcRZGate(q, 0.9959614281963486, 10);
  sqcRYGate(q, 2.956075362120105, 11);
  sqcRZGate(q, 0.3171511316141095, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.7257088459559187, 0);
  sqcRZGate(q, -1.1246608783978587, 0);
  sqcRYGate(q, 0.18964828715278617, 1);
  sqcRZGate(q, 0.1339393419483477, 1);
  sqcRYGate(q, 1.5577600580523123, 2);
  sqcRZGate(q, -0.8878193559770594, 2);
  sqcRYGate(q, 1.5655170001843333, 3);
  sqcRZGate(q, -1.5858559634270843, 3);
  sqcRYGate(q, -1.509762688948849, 4);
  sqcRZGate(q, -1.7181723771297372, 4);
  sqcRYGate(q, -1.5663427178141602, 5);
  sqcRZGate(q, 2.475357485686698, 5);
  sqcRYGate(q, 0.7644460200294247, 6);
  sqcRZGate(q, -0.2676678876339435, 6);
  sqcRYGate(q, -2.0462361612248703, 7);
  sqcRZGate(q, 2.113417489987408, 7);
  sqcRYGate(q, -0.08717808025849338, 8);
  sqcRZGate(q, -3.0969994054607377, 8);
  sqcRYGate(q, -3.134664849392375, 9);
  sqcRZGate(q, -0.8757366006514954, 9);
  sqcRYGate(q, 1.5634157006537666, 10);
  sqcRZGate(q, 1.5682819428687438, 10);
  sqcRYGate(q, -1.4804057108997606, 11);
  sqcRZGate(q, -0.003722119344842234, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.3935032853396607, 0);
  sqcRZGate(q, 1.662050613237774, 0);
  sqcRYGate(q, 0.22105586664361002, 1);
  sqcRZGate(q, 0.3395990474584123, 1);
  sqcRYGate(q, -3.068628703261919, 2);
  sqcRZGate(q, -2.920986275289933, 2);
  sqcRYGate(q, -1.5503850996597375, 3);
  sqcRZGate(q, -2.764270770224685, 3);
  sqcRYGate(q, -5.121649295780628e-06, 4);
  sqcRZGate(q, 0.35086228583675116, 4);
  sqcRYGate(q, 3.141589123871364, 5);
  sqcRZGate(q, 2.769279579425009, 5);
  sqcRYGate(q, 3.141575221217514, 6);
  sqcRZGate(q, 2.840081771105228, 6);
  sqcRYGate(q, 6.955522533208939e-06, 7);
  sqcRZGate(q, 0.3231715301638796, 7);
  sqcRYGate(q, -3.1331978174161694, 8);
  sqcRZGate(q, -0.08876083551025893, 8);
  sqcRYGate(q, 1.5779152538058927, 9);
  sqcRZGate(q, 2.5397578065367057, 9);
  sqcRYGate(q, 1.781170505330981, 10);
  sqcRZGate(q, -3.10322227472941, 10);
  sqcRYGate(q, 1.5739435521855798, 11);
  sqcRZGate(q, 0.010446207071097113, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.3082762512111774, 0);
  sqcRZGate(q, -0.8647407414472471, 0);
  sqcRYGate(q, -1.3826882348471567, 1);
  sqcRZGate(q, 1.6884244281324314, 1);
  sqcRYGate(q, -2.706156500729524, 2);
  sqcRZGate(q, -1.1826952261712256, 2);
  sqcRYGate(q, -0.8901523656351843, 3);
  sqcRZGate(q, -0.7685441450261735, 3);
  sqcRYGate(q, 0.6488110114205085, 4);
  sqcRZGate(q, -0.5681064014809192, 4);
  sqcRYGate(q, 0.26107654986880835, 5);
  sqcRZGate(q, -0.11179801587907243, 5);
  sqcRYGate(q, 1.1747429969730314, 6);
  sqcRZGate(q, 2.0976014541052375, 6);
  sqcRYGate(q, -1.7000141366647308, 7);
  sqcRZGate(q, 0.5984002864773335, 7);
  sqcRYGate(q, 1.130538675821029, 8);
  sqcRZGate(q, 0.022477836092182457, 8);
  sqcRYGate(q, 3.07638112442076, 9);
  sqcRZGate(q, 3.051315832886392, 9);
  sqcRYGate(q, 1.574006739110434, 10);
  sqcRZGate(q, -1.978136159748768, 10);
  sqcRYGate(q, -2.4625559237310966, 11);
  sqcRZGate(q, -3.1250757238995814, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.5783860362889928, 0);
  sqcRZGate(q, 2.2214673906613234, 0);
  sqcRYGate(q, -0.5924113312768531, 1);
  sqcRZGate(q, 2.4745069087714784, 1);
  sqcRYGate(q, 1.7209029380357495, 2);
  sqcRZGate(q, 0.1645882759740296, 2);
  sqcRYGate(q, -0.01338399535846168, 3);
  sqcRZGate(q, -1.435228012751259, 3);
  sqcRYGate(q, -7.131277001534319e-05, 4);
  sqcRZGate(q, 2.1392516817442875, 4);
  sqcRYGate(q, 1.3144905675943619e-05, 5);
  sqcRZGate(q, 1.3970957305579375, 5);
  sqcRYGate(q, -3.1415665177311554, 6);
  sqcRZGate(q, -1.3664360491867553, 6);
  sqcRYGate(q, 3.577194089012956e-06, 7);
  sqcRZGate(q, 1.1447806743597906, 7);
  sqcRYGate(q, 1.5396293211438727, 8);
  sqcRZGate(q, -2.1592579705205233, 8);
  sqcRYGate(q, -3.139949247742289, 9);
  sqcRZGate(q, 0.5057517932501839, 9);
  sqcRYGate(q, 1.792170005842279, 10);
  sqcRZGate(q, -2.7670462454972125, 10);
  sqcRYGate(q, -2.5566264792533486, 11);
  sqcRZGate(q, 0.49191075950973406, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.591157589815432, 0);
  sqcRZGate(q, -2.611156287213098, 0);
  sqcRYGate(q, 2.7302537153404542, 1);
  sqcRZGate(q, -2.3756445371665915, 1);
  sqcRYGate(q, 1.5354903054988647, 2);
  sqcRZGate(q, -1.4750455240496099, 2);
  sqcRYGate(q, -0.8427186267868784, 3);
  sqcRZGate(q, 2.0995836549697975, 3);
  sqcRYGate(q, -3.1341928914303043, 4);
  sqcRZGate(q, 0.6191588532649832, 4);
  sqcRYGate(q, 1.5036559294681249, 5);
  sqcRZGate(q, 1.0789763468885347, 5);
  sqcRYGate(q, -0.8616730916718671, 6);
  sqcRZGate(q, -3.073579071538762, 6);
  sqcRYGate(q, -0.7186297633191998, 7);
  sqcRZGate(q, -2.6000508461447627, 7);
  sqcRYGate(q, 2.660721119487207, 8);
  sqcRZGate(q, -0.005697917240643427, 8);
  sqcRYGate(q, -1.5701132460454088, 9);
  sqcRZGate(q, -2.3746625868435154, 9);
  sqcRYGate(q, 0.5984281670756434, 10);
  sqcRZGate(q, 1.6305272308585899, 10);
  sqcRYGate(q, 1.2370315477847305, 11);
  sqcRZGate(q, 2.8643925197466857, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.599461999640297, 0);
  sqcRZGate(q, -1.934046492763115, 0);
  sqcRYGate(q, -1.1433039463220216, 1);
  sqcRZGate(q, -2.242097720166763, 1);
  sqcRYGate(q, -1.32990532174035, 2);
  sqcRZGate(q, -2.0718373793493985, 2);
  sqcRYGate(q, 1.2932951491048847, 3);
  sqcRZGate(q, 2.0941260603420773, 3);
  sqcRYGate(q, 1.2009022043714954e-05, 4);
  sqcRZGate(q, 2.561939687065801, 4);
  sqcRYGate(q, -3.1415854689049785, 5);
  sqcRZGate(q, -2.495555787911186, 5);
  sqcRYGate(q, 3.1415536679921527, 6);
  sqcRZGate(q, -1.7609568464624037, 6);
  sqcRYGate(q, -0.08599188259170543, 7);
  sqcRZGate(q, -1.9043870496532511, 7);
  sqcRYGate(q, 0.00038644080136782295, 8);
  sqcRZGate(q, 1.621243065841705, 8);
  sqcRYGate(q, -0.06572520173150931, 9);
  sqcRZGate(q, -0.5111430762101499, 9);
  sqcRYGate(q, -2.5338549901671765, 10);
  sqcRZGate(q, 1.7870064304628561, 10);
  sqcRYGate(q, -1.1945676387465305, 11);
  sqcRZGate(q, 1.9954676210328524, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.962152487437776, 0);
  sqcRZGate(q, -0.2645881601615982, 0);
  sqcRYGate(q, -2.05706549128597, 1);
  sqcRZGate(q, -1.5083834147863684, 1);
  sqcRYGate(q, -2.4881653205514866, 2);
  sqcRZGate(q, 2.1203385158304693, 2);
  sqcRYGate(q, 1.5142802495624188, 3);
  sqcRZGate(q, -0.24002335847888823, 3);
  sqcRYGate(q, 1.5440846177259533, 4);
  sqcRZGate(q, 2.178076101164584, 4);
  sqcRYGate(q, -1.5790688409623523, 5);
  sqcRZGate(q, 3.1323766397412736, 5);
  sqcRYGate(q, 1.7731200728409513, 6);
  sqcRZGate(q, -0.613202276054876, 6);
  sqcRYGate(q, -0.01025200547769245, 7);
  sqcRZGate(q, -0.4038423646932508, 7);
  sqcRYGate(q, 3.1035986617095297, 8);
  sqcRZGate(q, -1.571219608056776, 8);
  sqcRYGate(q, -3.1399671264602023, 9);
  sqcRZGate(q, 0.6710010654834262, 9);
  sqcRYGate(q, -2.8644777474022116, 10);
  sqcRZGate(q, 1.7313588635271115, 10);
  sqcRYGate(q, -1.495471745184216, 11);
  sqcRZGate(q, 2.7701933820706035, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -0.7297612520722047, 0);
  sqcRZGate(q, -2.9698895374703196, 0);
  sqcRYGate(q, 1.2520031073014433, 1);
  sqcRZGate(q, 1.7686571939856592, 1);
  sqcRYGate(q, -3.1249103266288323, 2);
  sqcRZGate(q, 0.8227407923897572, 2);
  sqcRYGate(q, -0.005308579337891459, 3);
  sqcRZGate(q, 0.6564124401839271, 3);
  sqcRYGate(q, 2.4910181306601877e-05, 4);
  sqcRZGate(q, 1.0972423646896505, 4);
  sqcRYGate(q, 9.74736619389855e-05, 5);
  sqcRZGate(q, -0.9043720974037788, 5);
  sqcRYGate(q, 1.9601537173841166e-05, 6);
  sqcRZGate(q, 0.3755595294067825, 6);
  sqcRYGate(q, -1.5588191282734858, 7);
  sqcRZGate(q, -3.130796129037306, 7);
  sqcRYGate(q, -3.1030522819321145, 8);
  sqcRZGate(q, -3.1089451279542994, 8);
  sqcRYGate(q, 2.324592859005736, 9);
  sqcRZGate(q, -0.0037435149274305246, 9);
  sqcRYGate(q, 0.7577744968879674, 10);
  sqcRZGate(q, -1.8331306409902803, 10);
  sqcRYGate(q, -2.297364108362508, 11);
  sqcRZGate(q, 0.8232467010577225, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.16599999819437, 0);
  sqcRZGate(q, 0.6987135680067688, 0);
  sqcRYGate(q, 0.3574538425236993, 1);
  sqcRZGate(q, -2.868798212803202, 1);
  sqcRYGate(q, -1.6355490058676736, 2);
  sqcRZGate(q, -0.36509273565933614, 2);
  sqcRYGate(q, -2.840462459809627, 3);
  sqcRZGate(q, 3.0209414601501616, 3);
  sqcRYGate(q, -1.4544228645841588, 4);
  sqcRZGate(q, 0.46478805907419213, 4);
  sqcRYGate(q, 2.563013156516248, 5);
  sqcRZGate(q, -0.05166546489589751, 5);
  sqcRYGate(q, 2.0904693795178364, 6);
  sqcRZGate(q, -2.0405570691678836, 6);
  sqcRYGate(q, -3.121984219987492, 7);
  sqcRZGate(q, 2.1462961425063085, 7);
  sqcRYGate(q, 1.221845139268689, 8);
  sqcRZGate(q, 0.1587832644746294, 8);
  sqcRYGate(q, -1.5707569800236527, 9);
  sqcRZGate(q, 1.5708070242088814, 9);
  sqcRYGate(q, -1.1784220844338966, 10);
  sqcRZGate(q, -1.5416346065624138, 10);
  sqcRYGate(q, 2.646897986785154, 11);
  sqcRZGate(q, -0.7449078129627402, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.8573613702854175, 0);
  sqcRZGate(q, -0.10308783031141686, 0);
  sqcRYGate(q, -0.9580376410416093, 1);
  sqcRZGate(q, 2.5048136002454324, 1);
  sqcRYGate(q, 0.1284977688366251, 2);
  sqcRZGate(q, -0.7034484381521491, 2);
  sqcRYGate(q, 3.1410084239007974, 3);
  sqcRZGate(q, -0.9909364497678936, 3);
  sqcRYGate(q, -5.9840317269355126e-05, 4);
  sqcRZGate(q, -2.1996662082790683, 4);
  sqcRYGate(q, 0.00013059386737701573, 5);
  sqcRZGate(q, -1.6677584847337361, 5);
  sqcRYGate(q, 3.1413801806625887, 6);
  sqcRZGate(q, -2.4916179820793953, 6);
  sqcRYGate(q, -3.1410990555298905, 7);
  sqcRZGate(q, -0.7714816860727219, 7);
  sqcRYGate(q, 0.00018327623066131357, 8);
  sqcRZGate(q, -0.20462780368643863, 8);
  sqcRYGate(q, -1.5708050830245868, 9);
  sqcRZGate(q, 0.4620562033334905, 9);
  sqcRYGate(q, -1.5208305304566665, 10);
  sqcRZGate(q, 1.7238951095362989, 10);
  sqcRYGate(q, -1.5711794207200445, 11);
  sqcRZGate(q, 2.0080901323061298, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.9465227037163757, 0);
  sqcRZGate(q, -3.0187396954519294, 0);
  sqcRYGate(q, 2.4946035006382394, 1);
  sqcRZGate(q, -1.3451799773381552, 1);
  sqcRYGate(q, -0.9137282908316182, 2);
  sqcRZGate(q, -0.6625592941582726, 2);
  sqcRYGate(q, -0.11225307078269074, 3);
  sqcRZGate(q, 2.591565579678102, 3);
  sqcRYGate(q, 1.2843242473998027, 4);
  sqcRZGate(q, 3.0073885919844585, 4);
  sqcRYGate(q, -0.06783972487702529, 5);
  sqcRZGate(q, -0.658070484630429, 5);
  sqcRYGate(q, 0.9958453919376123, 6);
  sqcRZGate(q, 0.41260784014489366, 6);
  sqcRYGate(q, 0.40746820050530896, 7);
  sqcRZGate(q, -0.26390742413400936, 7);
  sqcRYGate(q, -1.1758591950337092, 8);
  sqcRZGate(q, -0.011684403713091533, 8);
  sqcRYGate(q, 1.96569410571118, 9);
  sqcRZGate(q, -0.011738634982426, 9);
  sqcRYGate(q, -1.1790826460058348, 10);
  sqcRZGate(q, -0.01960031921170291, 10);
  sqcRYGate(q, 2.018592403656249, 11);
  sqcRZGate(q, 1.7508742820767456, 11);

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
