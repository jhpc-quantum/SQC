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

  sqcRYGate(q, 0.13018838680546452, 0);
  sqcRYGate(q, 2.606946944225901, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1090268641893214, 0);
  sqcRYGate(q, 0.4741105579995485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.719862011046718, 0);
  sqcRYGate(q, -1.4578604794995427, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.96251128130499, 0);
  sqcRYGate(q, 2.5736066123770103, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8225936029247514, 0);
  sqcRYGate(q, 2.7924024314056735, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.07204653396178262, 0);
  sqcRYGate(q, 0.7159101061327258, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8954145305954375, 1);
  sqcRYGate(q, -2.33343698395351, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8383635713095323, 1);
  sqcRYGate(q, 1.6916179532038935, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8591898405164177, 1);
  sqcRYGate(q, -0.6860523918809562, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.058837769954175, 1);
  sqcRYGate(q, -0.23392741985725432, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5300042793117845, 2);
  sqcRYGate(q, -1.278755545240711, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1445607332616237, 2);
  sqcRYGate(q, 1.885173934797284, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.708264830460549, 0);
  sqcRYGate(q, -2.7343922595891987, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.29455845799414604, 0);
  sqcRYGate(q, 0.7540767736265713, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9321214109697404, 0);
  sqcRYGate(q, 1.935758924602772, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1642814496939284, 0);
  sqcRYGate(q, 2.3945147708256402, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8091844763398073, 0);
  sqcRYGate(q, 0.7888312260800233, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.394125225777783, 0);
  sqcRYGate(q, -0.7038159829162901, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1016792888451743, 1);
  sqcRYGate(q, -1.2518095552163944, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.617727231240344, 1);
  sqcRYGate(q, -0.8914942437515014, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6691450363153164, 1);
  sqcRYGate(q, -2.0311989214866495, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4064703503561873, 1);
  sqcRYGate(q, -2.211877407942364, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4395112475536656, 2);
  sqcRYGate(q, -2.5460661336681896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8188441702361313, 2);
  sqcRYGate(q, 0.025995753355568377, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.085475669982067, 0);
  sqcRYGate(q, 0.8794919900075837, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.523696687721813, 0);
  sqcRYGate(q, 0.5477744163953139, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.815093576427164, 0);
  sqcRYGate(q, -0.6108737671434188, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.1186488933169514, 0);
  sqcRYGate(q, -2.0106332942544505, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.839656646908895, 0);
  sqcRYGate(q, 2.8191075308149016, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2605830798945092, 0);
  sqcRYGate(q, -1.7361772954064003, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.01381814999209, 1);
  sqcRYGate(q, -1.5696033293558038, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0465403847843158, 1);
  sqcRYGate(q, 0.8038352023105837, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.900776646089894, 1);
  sqcRYGate(q, 0.7674396416313423, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.023097546093464, 1);
  sqcRYGate(q, -1.9637798292169, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7531766121490295, 2);
  sqcRYGate(q, -1.7582011669777713, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.271166524460214, 2);
  sqcRYGate(q, -2.924888141039153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8668417099607686, 0);
  sqcRYGate(q, 0.3700792455463757, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9376737933474509, 0);
  sqcRYGate(q, 0.6645595729645589, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3495249021716064, 0);
  sqcRYGate(q, -0.21068093635846363, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.23988460968765124, 0);
  sqcRYGate(q, 0.46966281666748344, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9359569468283425, 0);
  sqcRYGate(q, -1.6577773151810637, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8637062554752912, 0);
  sqcRYGate(q, -1.7377973997794929, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6351744850831201, 1);
  sqcRYGate(q, 0.5474930589194081, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0397458333305436, 1);
  sqcRYGate(q, 1.1815443296115022, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1167636569931645, 1);
  sqcRYGate(q, -0.47077811686308246, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5737176895942477, 1);
  sqcRYGate(q, -2.1350115720969285, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4516623478640218, 2);
  sqcRYGate(q, -1.3101937753905635, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.127866821568241, 2);
  sqcRYGate(q, 1.9757687466075924, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.017825580845843625, 0);
  sqcRYGate(q, 0.400235410247971, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.046255992975792, 0);
  sqcRYGate(q, -0.022075352668491203, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9209068829713178, 0);
  sqcRYGate(q, 0.05058588313016933, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6933944703225126, 0);
  sqcRYGate(q, -2.702520993691236, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.052364686227035, 0);
  sqcRYGate(q, -1.838916468751941, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8635557567053027, 0);
  sqcRYGate(q, -3.0079698857836683, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6997336454809631, 1);
  sqcRYGate(q, -1.2378692451095574, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7820050700048835, 1);
  sqcRYGate(q, 1.0910721534575487, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3776537845230701, 1);
  sqcRYGate(q, -0.11629995493596201, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6730615871677914, 1);
  sqcRYGate(q, 0.5188723324132551, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4258798393893342, 2);
  sqcRYGate(q, 0.1138729814208732, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6037676092801805, 2);
  sqcRYGate(q, -0.6414030516329875, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7471209108229173, 0);
  sqcRYGate(q, -0.7142230951031037, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1395186734888325, 0);
  sqcRYGate(q, 1.686611822152277, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7194497179131245, 0);
  sqcRYGate(q, -2.3363263008896635, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3484841937745653, 0);
  sqcRYGate(q, 1.063141265181786, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0149620681921891, 0);
  sqcRYGate(q, -2.80834896129104, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.724165533342949, 0);
  sqcRYGate(q, -1.7657836400794507, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5529554778593644, 1);
  sqcRYGate(q, 0.4522990110989731, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9837750352618144, 1);
  sqcRYGate(q, -0.08421267366093274, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0524758716780105, 1);
  sqcRYGate(q, 0.8970090705116093, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9899892501860287, 1);
  sqcRYGate(q, 3.1085006815730964, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2079159457012505, 2);
  sqcRYGate(q, 2.5269231431965564, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.923739717570609, 2);
  sqcRYGate(q, 0.7778169304971121, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5761076766154734, 0);
  sqcRYGate(q, 2.9879006076393706, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6881504780560235, 0);
  sqcRYGate(q, -2.568232868699068, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.028414260374480804, 0);
  sqcRYGate(q, -2.6201329222872536, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2314034295753395, 0);
  sqcRYGate(q, 1.2890545840159628, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8486539342341746, 0);
  sqcRYGate(q, 1.76216447000773, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.41311563624658976, 0);
  sqcRYGate(q, -2.1584282769491416, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1610041204260457, 1);
  sqcRYGate(q, -0.08587555295275619, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0721500008985307, 1);
  sqcRYGate(q, 1.075776707516936, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6664306823679533, 1);
  sqcRYGate(q, -1.3797530264177906, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.280324476748002, 1);
  sqcRYGate(q, -1.3550565834135648, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7557684636645992, 2);
  sqcRYGate(q, 2.0903696206691524, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7524770344534546, 2);
  sqcRYGate(q, -1.8067246571633664, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.035029752952929455, 0);
  sqcRYGate(q, -2.9333315849254227, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6252891770724134, 0);
  sqcRYGate(q, -1.9902692761985086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7970933550217326, 0);
  sqcRYGate(q, -3.1160298577443273, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2953940787302045, 0);
  sqcRYGate(q, -1.3974528639892914, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7028541379638886, 0);
  sqcRYGate(q, 0.6185353963953225, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.15343098646016884, 0);
  sqcRYGate(q, -1.9639751680782072, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9692162697168808, 1);
  sqcRYGate(q, -1.4645460882367622, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9887575537114605, 1);
  sqcRYGate(q, 1.4248415882845655, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.201884235568879, 1);
  sqcRYGate(q, 1.0539975326721083, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8917064393892105, 1);
  sqcRYGate(q, -1.0227093901790507, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.40978234558548454, 2);
  sqcRYGate(q, -1.348126333007798, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.116084739949697, 2);
  sqcRYGate(q, 0.4956582839194938, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0611435546642096, 0);
  sqcRYGate(q, 1.2816469598709037, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4155782533523547, 0);
  sqcRYGate(q, 2.225746247211993, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.264347048975503, 0);
  sqcRYGate(q, -2.53046770486552, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.550448454346232, 0);
  sqcRYGate(q, -1.3784588622002214, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2447598200634378, 0);
  sqcRYGate(q, -2.1034140697369033, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9371526968699833, 0);
  sqcRYGate(q, 1.0040827062416433, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5767671798215126, 1);
  sqcRYGate(q, -1.2745396683038441, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7495220492758348, 1);
  sqcRYGate(q, 0.18262563246827354, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.34868369388778314, 1);
  sqcRYGate(q, 2.8651550705795943, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5493937183954627, 1);
  sqcRYGate(q, -2.6825814911764008, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9394742577442132, 2);
  sqcRYGate(q, -1.8634053693517458, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.03292243677080665, 2);
  sqcRYGate(q, 0.4435799765254471, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.35548976597802284, 0);
  sqcRYGate(q, -1.63310686783375, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7538400591440713, 0);
  sqcRYGate(q, 1.5782864953020967, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.016974791809323, 0);
  sqcRYGate(q, -2.4608343360485643, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.38677879220840133, 0);
  sqcRYGate(q, 1.9297282682388783, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.469526698695031, 0);
  sqcRYGate(q, 0.7383635780676362, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6402541985032181, 0);
  sqcRYGate(q, -1.8718661223639392, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7711512285226445, 1);
  sqcRYGate(q, 0.08007862862424542, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5294446479933091, 1);
  sqcRYGate(q, -2.1443378003891356, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.692367665621967, 1);
  sqcRYGate(q, -2.0038547934405306, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.373565588134393, 1);
  sqcRYGate(q, -1.5746539846351686, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.238192817022602, 2);
  sqcRYGate(q, -2.3898967149374255, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8573180180617888, 2);
  sqcRYGate(q, -1.5233594664096692, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6127971576661562, 0);
  sqcRYGate(q, 1.5417251651994395, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.425087598273763, 0);
  sqcRYGate(q, 0.7611859932181305, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4038172381006646, 0);
  sqcRYGate(q, 2.266077185122974, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.49620349705380384, 0);
  sqcRYGate(q, -1.5575243053390326, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4965131533870384, 0);
  sqcRYGate(q, 2.7683305443691473, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.29110491864029786, 0);
  sqcRYGate(q, 2.6656357348604898, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.20125791064573573, 1);
  sqcRYGate(q, 1.6498277812691544, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.194458492983361, 1);
  sqcRYGate(q, -2.379665076554834, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.093902900596077, 1);
  sqcRYGate(q, 1.4720602848865307, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.061067692579388, 1);
  sqcRYGate(q, 3.0862112605177576, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4114353570971, 2);
  sqcRYGate(q, 0.1676037086004769, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5373733941341905, 2);
  sqcRYGate(q, -2.27004678073156, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9614959742511755, 0);
  sqcRYGate(q, 1.4795790105132616, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0920835952590051, 0);
  sqcRYGate(q, 2.9061172970795677, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7638996230312824, 0);
  sqcRYGate(q, 3.1203547559981284, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.24437303132680865, 0);
  sqcRYGate(q, 0.7896072927557312, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6952926583938273, 0);
  sqcRYGate(q, 2.212027855620093, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9750850531782538, 0);
  sqcRYGate(q, -2.3004502028711538, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9739851108675943, 1);
  sqcRYGate(q, -0.7370448495161266, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7672886411457178, 1);
  sqcRYGate(q, -0.5374127499225132, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.121879500543847, 1);
  sqcRYGate(q, -1.914664071967075, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.077635676297215, 1);
  sqcRYGate(q, -2.729262407136883, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.43683975741502, 2);
  sqcRYGate(q, -1.6331687292452437, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9623375222937166, 2);
  sqcRYGate(q, 1.277091619334664, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4721997509666387, 0);
  sqcRYGate(q, 1.1062358918960271, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0886847242764242, 0);
  sqcRYGate(q, -0.8994403596236336, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8398717706700634, 0);
  sqcRYGate(q, 1.4227141408276198, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7746128312795895, 0);
  sqcRYGate(q, 2.123564118155509, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.887697685453233, 0);
  sqcRYGate(q, 1.283794055723077, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9062056395968066, 0);
  sqcRYGate(q, 0.7625210989556358, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6635135487312285, 1);
  sqcRYGate(q, -2.4320136614525083, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0603976363228291, 1);
  sqcRYGate(q, 0.6470333316928896, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.379260125917205, 1);
  sqcRYGate(q, 1.6692005907342646, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6625898925449523, 1);
  sqcRYGate(q, 2.774750405195319, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5992220987720025, 2);
  sqcRYGate(q, -0.879441364166393, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5676223063513648, 2);
  sqcRYGate(q, 3.1234511652569785, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3707033291352587, 0);
  sqcRYGate(q, -0.7289730090452864, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4052805556122654, 0);
  sqcRYGate(q, -0.5877504340536697, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.500042675151847, 0);
  sqcRYGate(q, -2.846212447430097, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9958549884337242, 0);
  sqcRYGate(q, -0.615058680339194, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8605422889512325, 0);
  sqcRYGate(q, -0.1586209864900994, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1201449746998327, 0);
  sqcRYGate(q, -2.1670174676089804, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1869540210793823, 1);
  sqcRYGate(q, 1.1482730543476498, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0469416888538374, 1);
  sqcRYGate(q, 2.6977115405168877, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.948899468150771, 1);
  sqcRYGate(q, -0.1866514160823165, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.35948493919966146, 1);
  sqcRYGate(q, 1.7357506585865865, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.615590821416808, 2);
  sqcRYGate(q, -1.6078952452909219, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6663487123105192, 2);
  sqcRYGate(q, -0.8364258003502859, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.37906121204730603, 0);
  sqcRYGate(q, 1.8187208019746537, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8098792659993537, 0);
  sqcRYGate(q, -2.9211400599030974, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.609183327473033, 0);
  sqcRYGate(q, 1.030711990953531, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7704364321100795, 0);
  sqcRYGate(q, 1.062238127004644, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0458772707626984, 0);
  sqcRYGate(q, 0.06886706951422891, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6222927951159325, 0);
  sqcRYGate(q, -0.42553411785158324, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5064673423333198, 1);
  sqcRYGate(q, 1.4439346461294011, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.082709288880009, 1);
  sqcRYGate(q, -0.7015123945130428, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.38553551084341325, 1);
  sqcRYGate(q, -1.4340793112238153, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7336220996050802, 1);
  sqcRYGate(q, -1.752310581131576, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8702913494203175, 2);
  sqcRYGate(q, 3.000688223663552, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0425699670385304, 2);
  sqcRYGate(q, -0.5827962758378148, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.046408483030893, 0);
  sqcRYGate(q, 1.7821510017264988, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.20334459175240582, 0);
  sqcRYGate(q, -0.9284155456730412, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2515005244021471, 0);
  sqcRYGate(q, -0.23167760374206206, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9235126026545908, 0);
  sqcRYGate(q, -0.7401142455436408, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8246140986386754, 0);
  sqcRYGate(q, 2.354351646426696, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.790685397739372, 0);
  sqcRYGate(q, 1.8325031626837758, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.2032765114400576, 1);
  sqcRYGate(q, -1.4417267462994223, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.239967999223743, 1);
  sqcRYGate(q, -2.6218900594377685, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.148671879742704, 1);
  sqcRYGate(q, -3.013236271320723, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7402724662199143, 1);
  sqcRYGate(q, 1.3911235654887433, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2288105363224686, 2);
  sqcRYGate(q, -1.9233616201758812, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2691718238483127, 2);
  sqcRYGate(q, 2.0780833026788734, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8866202011748483, 0);
  sqcRYGate(q, 2.4659123083207732, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.15910356846806, 0);
  sqcRYGate(q, 2.4319865168158357, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7587152172812823, 0);
  sqcRYGate(q, -0.775220764007102, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6955114710100787, 0);
  sqcRYGate(q, 2.396655899679831, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.351642517380104, 0);
  sqcRYGate(q, -0.9664481421230997, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2861328122297013, 0);
  sqcRYGate(q, 0.1196484535024691, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.189762914915779, 1);
  sqcRYGate(q, -1.2580672446074155, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1560880582519906, 1);
  sqcRYGate(q, 1.1038321939662896, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.746611101038143, 1);
  sqcRYGate(q, 2.930766771287343, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.212766981298757, 1);
  sqcRYGate(q, -0.639607080461019, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0692160998681617, 2);
  sqcRYGate(q, -0.9865255448705855, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7728769168794747, 2);
  sqcRYGate(q, -0.16239003390978057, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10400767798554433, 0);
  sqcRYGate(q, -2.804920270855001, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.910790293348773, 0);
  sqcRYGate(q, 2.2193405978139613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.659491380923449, 0);
  sqcRYGate(q, 1.5793937663779811, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.575264708952432, 0);
  sqcRYGate(q, -1.4682702002860877, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.411315104602159, 0);
  sqcRYGate(q, -0.9608512556971255, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9989608127809395, 0);
  sqcRYGate(q, -2.467092357220075, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.317583949904114, 1);
  sqcRYGate(q, 1.0450290239279152, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.032090680916061, 1);
  sqcRYGate(q, 1.2048861569859908, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3142573737299044, 1);
  sqcRYGate(q, 1.1063785883676969, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.300164841168219, 1);
  sqcRYGate(q, -1.527090679592093, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9166967547794167, 2);
  sqcRYGate(q, 1.16009077394273, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6943715322387414, 2);
  sqcRYGate(q, 2.52419049302694, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7231570817090969, 0);
  sqcRYGate(q, 2.7506742192703544, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.424924034353001, 0);
  sqcRYGate(q, -2.6061245836961477, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.19736162501519064, 0);
  sqcRYGate(q, 0.2090603261510715, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2937843762167698, 0);
  sqcRYGate(q, 0.19689728864996514, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1082819894184022, 0);
  sqcRYGate(q, -1.9826262351124644, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8938234666075706, 0);
  sqcRYGate(q, -2.9693864735612854, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1545363009852316, 1);
  sqcRYGate(q, 2.5114883745052374, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7082577415507957, 1);
  sqcRYGate(q, 2.4102674439620775, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10259590796983652, 1);
  sqcRYGate(q, 2.485515304396067, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0589172423399529, 1);
  sqcRYGate(q, -0.5715698744582276, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.020384884790594, 2);
  sqcRYGate(q, -0.07539497557139006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5143838676302812, 2);
  sqcRYGate(q, 2.890027409132331, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0246735279311165, 0);
  sqcRYGate(q, 1.6577248497257833, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.02638033852472699, 0);
  sqcRYGate(q, 0.5656168296819901, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6073336193033638, 0);
  sqcRYGate(q, 1.0287663278634926, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5389377080681093, 0);
  sqcRYGate(q, -1.8012215508318938, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6409905840158618, 0);
  sqcRYGate(q, 0.624841778654929, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.50848952703883, 0);
  sqcRYGate(q, 0.8789898670602182, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.850956815968493, 1);
  sqcRYGate(q, -2.4970674824860897, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7645537379269225, 1);
  sqcRYGate(q, -2.813850740548673, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.070295499081059, 1);
  sqcRYGate(q, 0.8905508843741234, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1074396455124085, 1);
  sqcRYGate(q, 2.516073953709235, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7571789575628983, 2);
  sqcRYGate(q, -0.7301930528355687, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0133250302037706, 2);
  sqcRYGate(q, 1.8992703032134879, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.032703850430965346, 0);
  sqcRYGate(q, 2.92485671147373, 1);
  sqcRYGate(q, -2.671588863116684, 2);
  sqcRYGate(q, 1.6434563207797936, 3);

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
