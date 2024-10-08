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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 1.143097147315844, 0);
  sqcRYGate(q, 1.6621627218746504, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7577081091470941, 0);
  sqcRYGate(q, -1.8875466413756783, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.432508327544074, 2);
  sqcRYGate(q, 2.3300860845587468, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5326327667222515, 2);
  sqcRYGate(q, 1.517044323539395, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4714587355919724, 4);
  sqcRYGate(q, 2.8600232685024443, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.112122979369376, 4);
  sqcRYGate(q, 0.5293942521613788, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4312416960308143, 6);
  sqcRYGate(q, 1.9182156652090179, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4054609778505063, 6);
  sqcRYGate(q, 1.424696293099983, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8875586373845731, 8);
  sqcRYGate(q, 1.9366505386698591, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.453299439157967, 8);
  sqcRYGate(q, -2.7526890171155673, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.884230551817399, 10);
  sqcRYGate(q, -2.848609313653021, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0448736568972874, 10);
  sqcRYGate(q, -3.09371239938812, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.11245191719724, 12);
  sqcRYGate(q, 3.1119506096158775, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.559365831789768, 12);
  sqcRYGate(q, -2.028317477282319, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.3379947199971003, 14);
  sqcRYGate(q, 1.6866125040110542, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.506526275472084, 14);
  sqcRYGate(q, -1.8925173334052978, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.879322843117661, 1);
  sqcRYGate(q, 0.9767811926220284, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3545283459179995, 1);
  sqcRYGate(q, -0.7197067199272741, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3192824207172, 3);
  sqcRYGate(q, -0.6661673653557652, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.353201650359519, 3);
  sqcRYGate(q, 1.3538288136306775, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7445517812237368, 5);
  sqcRYGate(q, -1.8765383020691997, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6190775682059048, 5);
  sqcRYGate(q, -2.018156278026345, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.062245278448989, 7);
  sqcRYGate(q, 2.5114883417626515, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.8092240573612703, 7);
  sqcRYGate(q, -2.04374749221955, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.9704760559567145, 9);
  sqcRYGate(q, 2.454960821158281, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.1011056405054758, 9);
  sqcRYGate(q, 2.1488879873505837, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5952445812638216, 11);
  sqcRYGate(q, -1.183248501387594, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.138766954916432, 11);
  sqcRYGate(q, -3.140616427542728, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.862640751007423, 13);
  sqcRYGate(q, 0.4466213413365833, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.7381638986553174, 13);
  sqcRYGate(q, -1.5437937748628192, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.602657273650304, 0);
  sqcRYGate(q, 1.4709728973479734, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6655661977464122, 0);
  sqcRYGate(q, 0.12919703294671872, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6013337625395394, 2);
  sqcRYGate(q, 2.4333215539273474, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.131353114440342, 2);
  sqcRYGate(q, 0.5103815883665641, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5710301985040782, 4);
  sqcRYGate(q, 1.5841035006583404, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5406808914456487, 4);
  sqcRYGate(q, -0.9867106593939957, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7863894469896038, 6);
  sqcRYGate(q, 1.548099335688578, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0677180818017789, 6);
  sqcRYGate(q, 1.2485520654531967, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.191334551099172, 8);
  sqcRYGate(q, 0.3247769683083969, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.568662985862301, 8);
  sqcRYGate(q, -1.5498425318736535, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.6012148295184598, 10);
  sqcRYGate(q, 0.5538725315217308, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.2985879234302429, 10);
  sqcRYGate(q, -2.1755778008153017, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.7209146316877084, 12);
  sqcRYGate(q, 2.2692390709434918, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.27291573322663415, 12);
  sqcRYGate(q, -1.5180745173387187, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.6619843848532736, 14);
  sqcRYGate(q, 2.2154632398860636, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.35937045248825594, 14);
  sqcRYGate(q, 2.156942530648186, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.9165758077073884, 1);
  sqcRYGate(q, -1.4864932141100482, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.889625553395946, 1);
  sqcRYGate(q, -1.7110592494651735, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3625974264558214, 3);
  sqcRYGate(q, -1.567036990442013, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6771416324495458, 3);
  sqcRYGate(q, 2.45603210629795, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0927113087722935, 5);
  sqcRYGate(q, 0.12478836973776934, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6674628582171254, 5);
  sqcRYGate(q, -1.6916440262503711, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.377579716597606, 7);
  sqcRYGate(q, 3.102184431459049, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.569004991978856, 7);
  sqcRYGate(q, 1.6275991690248368, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.018076999293523244, 9);
  sqcRYGate(q, -0.32826179904475067, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.0037968911208530187, 9);
  sqcRYGate(q, 1.612489977041501, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.821887861880017, 11);
  sqcRYGate(q, 1.1876163956474441, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.7719315805795244, 11);
  sqcRYGate(q, 0.4074720885119389, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.3260349643767246, 13);
  sqcRYGate(q, 0.3127227893145866, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.0259245138583113, 13);
  sqcRYGate(q, -0.45891446153975635, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.1098489966585526, 0);
  sqcRYGate(q, -2.2469186752300594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.024786710653384, 0);
  sqcRYGate(q, -0.2269628856922076, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.021123233357697835, 2);
  sqcRYGate(q, 3.135061664833526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5745272785195354, 2);
  sqcRYGate(q, -1.5352794874621518, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5719674511728172, 4);
  sqcRYGate(q, 1.0179998520328561, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.135066494243252, 4);
  sqcRYGate(q, -1.4899121338034114, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.027539437130840463, 6);
  sqcRYGate(q, 1.5707672045441923, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6264160187852994, 6);
  sqcRYGate(q, -1.43610411663937, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5367908087828646, 8);
  sqcRYGate(q, -0.15801812566061918, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -6.245414484951084e-05, 8);
  sqcRYGate(q, -2.9105733080666933, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.089310460760161, 10);
  sqcRYGate(q, 1.565559329512973, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.0494495967100876, 10);
  sqcRYGate(q, -1.6306815601125049, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.9974611332798805, 12);
  sqcRYGate(q, 2.214054895221977, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.27175305318058474, 12);
  sqcRYGate(q, -0.018485921983564243, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.0952512021088627, 14);
  sqcRYGate(q, -0.8470758587092262, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.0448063921939816, 14);
  sqcRYGate(q, -1.6327765474857618, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.7252359506917454, 1);
  sqcRYGate(q, -1.5513732817729782, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5488218308201258, 1);
  sqcRYGate(q, 1.599959040820393, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6203005333071605, 3);
  sqcRYGate(q, 0.425893993017004, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.038060568851491505, 3);
  sqcRYGate(q, 2.9709967149209415, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2384831517190724, 5);
  sqcRYGate(q, 1.5686490220147364, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6421119557801669, 5);
  sqcRYGate(q, -1.8762530092855578, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5544619214219095, 7);
  sqcRYGate(q, -1.557198639152471, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.34728412536784575, 7);
  sqcRYGate(q, 0.31561268482512117, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.738772058326358, 9);
  sqcRYGate(q, -1.5784776079165477, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.425553106109431, 9);
  sqcRYGate(q, -2.3983473110388167, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5710263624466352, 11);
  sqcRYGate(q, 2.14441523152838, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.9802623741725194, 11);
  sqcRYGate(q, -1.478818881898335, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.1275273184048027, 13);
  sqcRYGate(q, 0.13874649008209244, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.2710186438343207, 13);
  sqcRYGate(q, 3.1369189991523165, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.23902069403358528, 0);
  sqcRYGate(q, -0.6586102858167147, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1406008109425763, 0);
  sqcRYGate(q, 2.844795831194619, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5986841002946826, 2);
  sqcRYGate(q, 2.804230700891674, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.548932223644868, 2);
  sqcRYGate(q, -2.3220080308858355, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.681287050233766, 4);
  sqcRYGate(q, 1.5746884984798788, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6077981230452805, 4);
  sqcRYGate(q, 1.5812044505234606, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5703369139483285, 6);
  sqcRYGate(q, -1.5381056861283964, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1002116204264634, 6);
  sqcRYGate(q, -2.6901091710714624, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6057188570700085, 8);
  sqcRYGate(q, -1.7548418526779856, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.004802786301278061, 8);
  sqcRYGate(q, 2.7797110113571706, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.566815646620233, 10);
  sqcRYGate(q, 1.5718363420084858, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.7770883280897328, 10);
  sqcRYGate(q, -0.6934983307378272, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5340656683092099, 12);
  sqcRYGate(q, 0.12713504905566975, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5421642765909267, 12);
  sqcRYGate(q, 0.8319694032323808, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.142771931345245, 14);
  sqcRYGate(q, -0.10016138482426575, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.4935861801812207, 14);
  sqcRYGate(q, -0.24245553804212094, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.887444217323237, 1);
  sqcRYGate(q, -1.0977014992576732, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.00395088804212362, 1);
  sqcRYGate(q, -1.3631252393355213, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7109312118279187, 3);
  sqcRYGate(q, -1.5720078345660338, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1314968569834325, 3);
  sqcRYGate(q, -0.004080154724836813, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5727243342248571, 5);
  sqcRYGate(q, 2.9907734228822713, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9003103578495102, 5);
  sqcRYGate(q, 1.5265518686439847, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.613741062536453, 7);
  sqcRYGate(q, 0.750587770225013, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.685133004473154, 7);
  sqcRYGate(q, -1.5171084900077405, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.628495595463118, 9);
  sqcRYGate(q, 1.079482275203711, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.6732726548604537, 9);
  sqcRYGate(q, 1.8512020176171609, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.949181560188108, 11);
  sqcRYGate(q, -2.246212214232762, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5307064141277804, 11);
  sqcRYGate(q, 3.13809075622233, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.2363737379274364, 13);
  sqcRYGate(q, -2.1530041185009687, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.6748841307277271, 13);
  sqcRYGate(q, -3.138282633639496, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.504939715967609, 0);
  sqcRYGate(q, -2.7664292102543806, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0025854990163169944, 0);
  sqcRYGate(q, -2.9339951258554104, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.089323903440767, 2);
  sqcRYGate(q, -1.9985993378629576, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7245915637375804, 2);
  sqcRYGate(q, -1.8354998543458763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5557416678463216, 4);
  sqcRYGate(q, -0.9025294846853198, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0015022003891547015, 4);
  sqcRYGate(q, 2.7957835495111807, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.06758265259271759, 6);
  sqcRYGate(q, 0.24276757338459007, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.005036296881577382, 6);
  sqcRYGate(q, -1.6036573285270812, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4967356417893187, 8);
  sqcRYGate(q, -1.0652111376915494, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.001094510041029216, 8);
  sqcRYGate(q, 0.0009434618289038471, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.111201155266268, 10);
  sqcRYGate(q, -0.08076725524588488, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.14097196050575, 10);
  sqcRYGate(q, -0.0023549768378476046, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5664267801604366, 12);
  sqcRYGate(q, -0.35919443084130087, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.16020899442061953, 12);
  sqcRYGate(q, -2.451787073903802, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.6112897415556875, 14);
  sqcRYGate(q, 2.8769058980181788, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.8517354091762572, 14);
  sqcRYGate(q, -2.773585155227587, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.9949830965207864, 1);
  sqcRYGate(q, -3.08395671231055, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5788736407275803, 1);
  sqcRYGate(q, -2.352504881212195, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5556308921154673, 3);
  sqcRYGate(q, -1.5848469174374937, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.012753576071574, 3);
  sqcRYGate(q, 1.5724208694315536, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.461699278189268, 5);
  sqcRYGate(q, -0.04621076835694815, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.530031501442899, 5);
  sqcRYGate(q, 0.11186388179810969, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.340770142827476, 7);
  sqcRYGate(q, -0.5199576601204736, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.9814060486143593, 7);
  sqcRYGate(q, -3.1300234311261694, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.9857273511989185, 9);
  sqcRYGate(q, 0.8563379197934108, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.2741354710354915, 9);
  sqcRYGate(q, 0.45266429283785303, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.4580407284104941, 11);
  sqcRYGate(q, -0.16370847457555548, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.609080284530596, 11);
  sqcRYGate(q, 1.6805072705623931, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.0025318573803397265, 13);
  sqcRYGate(q, -2.8677852632194356, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.1317275428449567, 13);
  sqcRYGate(q, 1.6034692211155446, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.817251810159135, 0);
  sqcRYGate(q, 2.838118694967295, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5685117620106634, 0);
  sqcRYGate(q, 2.38450230400222, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.578648290641624, 2);
  sqcRYGate(q, -0.004192748236774513, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.571594556583654, 2);
  sqcRYGate(q, -1.5703101171951703, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5884688830979066, 4);
  sqcRYGate(q, 0.7863552821860313, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.012245303900434022, 4);
  sqcRYGate(q, 3.073998979067575, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.178677619633156, 6);
  sqcRYGate(q, -1.5046429391572553, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1220259410857465, 6);
  sqcRYGate(q, 1.2562938678084938, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5644213015945967, 8);
  sqcRYGate(q, 0.30916291461869966, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.092324736628404, 8);
  sqcRYGate(q, -0.027051767294288112, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.4421532010849725, 10);
  sqcRYGate(q, 2.949136739977334, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1401955444676495, 10);
  sqcRYGate(q, 0.023277387385507886, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.02900041821001409, 12);
  sqcRYGate(q, -1.8713040737323734, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.1350684464749055, 12);
  sqcRYGate(q, -1.5564716082581689, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.30805980007613853, 14);
  sqcRYGate(q, 1.7382462260695162, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.8673766589858345, 14);
  sqcRYGate(q, 1.5716887847776013, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.3988719032073968, 1);
  sqcRYGate(q, 0.001975271790328192, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5970371006727518, 1);
  sqcRYGate(q, 1.5652891331082643, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.29704168641186235, 3);
  sqcRYGate(q, 1.9932536758627712, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.141360729052092, 3);
  sqcRYGate(q, 1.570581749244103, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.25330248834941044, 5);
  sqcRYGate(q, 0.0634417096024164, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5878943748130956, 5);
  sqcRYGate(q, 0.06464146785663964, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5668521301130165, 7);
  sqcRYGate(q, -0.6048781061726498, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.1278608448591805, 7);
  sqcRYGate(q, 1.5062912147750342, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.7131525306745692, 9);
  sqcRYGate(q, 0.2653414987770617, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5761992041658583, 9);
  sqcRYGate(q, -1.6372897596582465, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.6240027667095016, 11);
  sqcRYGate(q, -1.5245877833632635, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.1950427522629017, 11);
  sqcRYGate(q, 3.1347159072493027, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.8600929078299497, 13);
  sqcRYGate(q, 1.5773393967952292, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.337475092857762, 13);
  sqcRYGate(q, -1.4519220226218832, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.8952799919525725, 0);
  sqcRYGate(q, -1.572132842042345, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.581223990614978, 0);
  sqcRYGate(q, -1.5696084730468567, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8787200427105136, 2);
  sqcRYGate(q, -0.002978361508009724, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8927173596442094, 2);
  sqcRYGate(q, 0.007477964728142571, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4470541016618101, 4);
  sqcRYGate(q, -1.0287632111993446, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6231618239657815, 4);
  sqcRYGate(q, 2.960880377016578, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8243120387739777, 6);
  sqcRYGate(q, 2.5841362564251047, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.0004546293177787319, 6);
  sqcRYGate(q, 3.131373245453457, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7022152383051234, 8);
  sqcRYGate(q, 0.005365360680223752, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.598238922010854, 8);
  sqcRYGate(q, 3.109069983187413, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.02914894849319083, 10);
  sqcRYGate(q, 2.8107999466569753, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.137751009388662, 10);
  sqcRYGate(q, 3.0893159099840974, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5794644147135228, 12);
  sqcRYGate(q, -1.5706749782121936, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5659207146033813, 12);
  sqcRYGate(q, -0.0074868880473060164, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.7789062535905252, 14);
  sqcRYGate(q, 0.22338265204330202, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.6189571789860169, 14);
  sqcRYGate(q, -3.1396563372886805, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.5670093751337988, 1);
  sqcRYGate(q, -2.7239767429909025, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.002251753875071899, 1);
  sqcRYGate(q, 1.4675913783751566, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5675375953259456, 3);
  sqcRYGate(q, -1.5648654184696484, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.444142020299575, 3);
  sqcRYGate(q, -0.20570174399079996, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5692003365586062, 5);
  sqcRYGate(q, -1.8535440371481453, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.01063221132936656, 5);
  sqcRYGate(q, -2.6050430301604437, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5218907938154613, 7);
  sqcRYGate(q, -3.1399233291611695, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.163323693000575, 7);
  sqcRYGate(q, 1.5012465062672122, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.1129188987316265, 9);
  sqcRYGate(q, 1.5510757832786317, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.06457338542666674, 9);
  sqcRYGate(q, 0.00017281259223872318, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.924848454276374, 11);
  sqcRYGate(q, 1.5314915794989465, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5634596982468771, 11);
  sqcRYGate(q, -3.1327492234865955, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.605104305441337, 13);
  sqcRYGate(q, 2.3672815143416552, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5708623605195493, 13);
  sqcRYGate(q, 3.105719430045881, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.00040171484759987663, 0);
  sqcRYGate(q, 1.570742303034109, 1);
  sqcRYGate(q, 1.845245720625174, 2);
  sqcRYGate(q, 1.5716707070103906, 3);
  sqcRYGate(q, 0.001908535450188936, 4);
  sqcRYGate(q, -1.5714709607071198, 5);
  sqcRYGate(q, -1.0856798549302742, 6);
  sqcRYGate(q, -3.085616970309701, 7);
  sqcRYGate(q, -0.0025424709523234057, 8);
  sqcRYGate(q, 1.110423647114075, 9);
  sqcRYGate(q, -3.090713118026068, 10);
  sqcRYGate(q, -2.3460304941455883, 11);
  sqcRYGate(q, 8.103431635753111e-05, 12);
  sqcRYGate(q, 1.5387804372514557, 13);
  sqcRYGate(q, -0.0024116175192744247, 14);
  sqcRYGate(q, -0.008614179768447753, 15);

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
