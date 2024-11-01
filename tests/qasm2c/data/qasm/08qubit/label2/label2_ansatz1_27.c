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

  sqcRYGate(q, 0.49775902108665837, 0);
  sqcRZGate(q, 1.6634156536192573, 0);
  sqcRYGate(q, 1.2703103275747212, 1);
  sqcRZGate(q, -1.62849822196638, 1);
  sqcRYGate(q, -2.298036302999687, 2);
  sqcRZGate(q, 2.973643447640991, 2);
  sqcRYGate(q, 0.594249718134595, 3);
  sqcRZGate(q, 0.851889752987911, 3);
  sqcRYGate(q, 3.141253488026695, 4);
  sqcRZGate(q, 0.31012390913786003, 4);
  sqcRYGate(q, 2.6542092472766035, 5);
  sqcRZGate(q, -0.9878674101409005, 5);
  sqcRYGate(q, -0.04357584758152733, 6);
  sqcRZGate(q, 3.0484068565215092, 6);
  sqcRYGate(q, 3.0090062193569365, 7);
  sqcRZGate(q, -3.0488707776517003, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.6936184062712061, 0);
  sqcRZGate(q, -1.9163797304478054, 0);
  sqcRYGate(q, 3.102252779804774, 1);
  sqcRZGate(q, 3.0715182879666294, 1);
  sqcRYGate(q, 0.006034583928930638, 2);
  sqcRZGate(q, 0.9139403891069279, 2);
  sqcRYGate(q, -2.3130624370328943, 3);
  sqcRZGate(q, -0.3783080137328811, 3);
  sqcRYGate(q, 3.139746278336082, 4);
  sqcRZGate(q, 0.8819469332587982, 4);
  sqcRYGate(q, 2.2781849651836286, 5);
  sqcRZGate(q, 0.393034435529235, 5);
  sqcRYGate(q, -1.3547167878442137, 6);
  sqcRZGate(q, -0.3902072835432333, 6);
  sqcRYGate(q, 0.5825272116999463, 7);
  sqcRZGate(q, -0.42886535285694527, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.0385818856786997, 0);
  sqcRZGate(q, 1.8728159258193475, 0);
  sqcRYGate(q, 1.8359170423600046, 1);
  sqcRZGate(q, 0.08562907628965345, 1);
  sqcRYGate(q, 0.5602373519322712, 2);
  sqcRZGate(q, 2.5700266821936504, 2);
  sqcRYGate(q, -0.00287756948700757, 3);
  sqcRZGate(q, -1.8561691034742882, 3);
  sqcRYGate(q, 3.141336731179858, 4);
  sqcRZGate(q, 1.5987818119711157, 4);
  sqcRYGate(q, -1.4763123120212747, 5);
  sqcRZGate(q, -2.9298452876703363, 5);
  sqcRYGate(q, -0.07441598602281285, 6);
  sqcRZGate(q, -0.8888618007571863, 6);
  sqcRYGate(q, 2.1476207605225, 7);
  sqcRZGate(q, 2.3817022102044243, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.585458421014748, 0);
  sqcRZGate(q, -3.1307492707909486, 0);
  sqcRYGate(q, 1.4912221538428838, 1);
  sqcRZGate(q, -0.15176955012278184, 1);
  sqcRYGate(q, -3.0765594053719316, 2);
  sqcRZGate(q, 0.7251041814985317, 2);
  sqcRYGate(q, 2.1347700383939188, 3);
  sqcRZGate(q, 1.7787612694193533, 3);
  sqcRYGate(q, 0.1867395354521257, 4);
  sqcRZGate(q, 2.1927065480593235, 4);
  sqcRYGate(q, -1.840211123293411, 5);
  sqcRZGate(q, -2.8725731079893944, 5);
  sqcRYGate(q, -0.04249651757507689, 6);
  sqcRZGate(q, -1.197794463211711, 6);
  sqcRYGate(q, -2.325448389602805, 7);
  sqcRZGate(q, -0.648369992206251, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.26851239954991424, 0);
  sqcRZGate(q, 2.3702431718955674, 0);
  sqcRYGate(q, -1.3886820551090502, 1);
  sqcRZGate(q, 3.0851378770179836, 1);
  sqcRYGate(q, 0.003926538305520175, 2);
  sqcRZGate(q, -0.16665039869734963, 2);
  sqcRYGate(q, -3.0728788383319423, 3);
  sqcRZGate(q, 0.9722028744985552, 3);
  sqcRYGate(q, 0.02709727824629926, 4);
  sqcRZGate(q, 2.6803509882568712, 4);
  sqcRYGate(q, -0.022606691671650834, 5);
  sqcRZGate(q, -0.7399947320211622, 5);
  sqcRYGate(q, 1.4076336644781167, 6);
  sqcRZGate(q, 2.918787888633837, 6);
  sqcRYGate(q, 2.1178113275311863, 7);
  sqcRZGate(q, -1.6579939782488413, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.723338130590927, 0);
  sqcRZGate(q, 1.4076093093019404, 0);
  sqcRYGate(q, -2.315896041397976, 1);
  sqcRZGate(q, 1.806223741899606, 1);
  sqcRYGate(q, 0.06431287629637558, 2);
  sqcRZGate(q, -0.5986296333363205, 2);
  sqcRYGate(q, -0.2442999992979269, 3);
  sqcRZGate(q, -0.9581021318832386, 3);
  sqcRYGate(q, 1.7444211409434063, 4);
  sqcRZGate(q, -2.16728184034538, 4);
  sqcRYGate(q, 1.9690850355626504, 5);
  sqcRZGate(q, -2.782081320588798, 5);
  sqcRYGate(q, 2.559259977518759, 6);
  sqcRZGate(q, 0.9644360531662981, 6);
  sqcRYGate(q, 1.2099832886698136, 7);
  sqcRZGate(q, 2.2343921168441314, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.8832947554423826, 0);
  sqcRZGate(q, 2.2139357370135664, 0);
  sqcRYGate(q, -2.4428874743018594, 1);
  sqcRZGate(q, -1.0271459965799854, 1);
  sqcRYGate(q, 1.7974840871803437, 2);
  sqcRZGate(q, 0.2910404952330537, 2);
  sqcRYGate(q, -2.3187184339607545, 3);
  sqcRZGate(q, 2.107836407608664, 3);
  sqcRYGate(q, 2.4302867660715055, 4);
  sqcRZGate(q, 0.694658697249521, 4);
  sqcRYGate(q, -0.054477974647850626, 5);
  sqcRZGate(q, -2.611688114729802, 5);
  sqcRYGate(q, 3.126686653706787, 6);
  sqcRZGate(q, -2.9263365495550544, 6);
  sqcRYGate(q, -0.9335358010398016, 7);
  sqcRZGate(q, 0.9360914433969165, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.2720034957754056, 0);
  sqcRZGate(q, -0.69688720562639, 0);
  sqcRYGate(q, -0.917433759069714, 1);
  sqcRZGate(q, -2.25431403553545, 1);
  sqcRYGate(q, -0.2277264218689157, 2);
  sqcRZGate(q, -2.779558749421118, 2);
  sqcRYGate(q, 3.055734827068763, 3);
  sqcRZGate(q, 2.476776018160959, 3);
  sqcRYGate(q, 0.0136619361876118, 4);
  sqcRZGate(q, 1.6355002279092465, 4);
  sqcRYGate(q, -2.5686977545676206, 5);
  sqcRZGate(q, -0.7604266863943253, 5);
  sqcRYGate(q, -3.1359381076512705, 6);
  sqcRZGate(q, 2.751803992492698, 6);
  sqcRYGate(q, 2.577026737477558, 7);
  sqcRZGate(q, 0.2422385109093369, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.905091884521841, 0);
  sqcRZGate(q, 1.4508118830004078, 0);
  sqcRYGate(q, 3.1118672538940997, 1);
  sqcRZGate(q, -1.016785326924584, 1);
  sqcRYGate(q, 0.1367445207037985, 2);
  sqcRZGate(q, 0.6982073425318014, 2);
  sqcRYGate(q, 2.3062246640661974, 3);
  sqcRZGate(q, 2.6636467356353246, 3);
  sqcRYGate(q, 0.029029789501276652, 4);
  sqcRZGate(q, 2.2012339770983864, 4);
  sqcRYGate(q, 0.04934945479391596, 5);
  sqcRZGate(q, -1.4714639560712024, 5);
  sqcRYGate(q, -0.0025688392795802256, 6);
  sqcRZGate(q, -2.7633118520480755, 6);
  sqcRYGate(q, 0.6051256983564528, 7);
  sqcRZGate(q, -1.1786499576013787, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.0765121918990532, 0);
  sqcRZGate(q, -0.36266579690342127, 0);
  sqcRYGate(q, -0.611766688392175, 1);
  sqcRZGate(q, 3.004609703969315, 1);
  sqcRYGate(q, -3.129377175115202, 2);
  sqcRZGate(q, -0.5325103981841374, 2);
  sqcRYGate(q, -0.7659391443892805, 3);
  sqcRZGate(q, -2.6498227287108223, 3);
  sqcRYGate(q, 2.961448341462812, 4);
  sqcRZGate(q, -1.231652295610221, 4);
  sqcRYGate(q, 1.1121068130468625, 5);
  sqcRZGate(q, -2.8986256445456107, 5);
  sqcRYGate(q, -3.1008456600431273, 6);
  sqcRZGate(q, -1.441385131722302, 6);
  sqcRYGate(q, -2.781871238756539, 7);
  sqcRZGate(q, 0.7620634130341524, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.004167332065665441, 0);
  sqcRZGate(q, -1.4576061334790549, 0);
  sqcRYGate(q, 0.09955655059792878, 1);
  sqcRZGate(q, -0.35312487194232633, 1);
  sqcRYGate(q, 0.04241076110405635, 2);
  sqcRZGate(q, -2.5060864458112078, 2);
  sqcRYGate(q, -0.027758141497919137, 3);
  sqcRZGate(q, -0.4851683459506928, 3);
  sqcRYGate(q, -3.1379009142655288, 4);
  sqcRZGate(q, 2.9001419782857365, 4);
  sqcRYGate(q, 3.0998097646565004, 5);
  sqcRZGate(q, -2.5817595733561487, 5);
  sqcRYGate(q, 0.0037675451485545963, 6);
  sqcRZGate(q, -2.18056550139495, 6);
  sqcRYGate(q, 0.9729502428167615, 7);
  sqcRZGate(q, 1.4719348422747296, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.9977888869890528, 0);
  sqcRZGate(q, 1.32578208526132, 0);
  sqcRYGate(q, 2.1937550959936, 1);
  sqcRZGate(q, 1.2112605619209464, 1);
  sqcRYGate(q, 1.2345813750718804, 2);
  sqcRZGate(q, 0.25123236738766686, 2);
  sqcRYGate(q, 0.6209979049230201, 3);
  sqcRZGate(q, -2.7760712979552133, 3);
  sqcRYGate(q, 0.32655379932571504, 4);
  sqcRZGate(q, -1.6240865160296414, 4);
  sqcRYGate(q, -2.161046718936358, 5);
  sqcRZGate(q, -1.1055508307102448, 5);
  sqcRYGate(q, 3.105599892286717, 6);
  sqcRZGate(q, 0.1868127185483315, 6);
  sqcRYGate(q, -1.3419949056696592, 7);
  sqcRZGate(q, -0.9535059674612562, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.7663704436053943, 0);
  sqcRZGate(q, 2.3043726178445283, 0);
  sqcRYGate(q, -1.128390263850431, 1);
  sqcRZGate(q, 0.8690850451788008, 1);
  sqcRYGate(q, 1.0421806589939102, 2);
  sqcRZGate(q, 2.5053300048748883, 2);
  sqcRYGate(q, 2.9187818931902174, 3);
  sqcRZGate(q, -0.0019515024960350827, 3);
  sqcRYGate(q, -3.1272198984292516, 4);
  sqcRZGate(q, 1.3228121114426914, 4);
  sqcRYGate(q, 0.2720773296778934, 5);
  sqcRZGate(q, 2.100823288044513, 5);
  sqcRYGate(q, -3.132398603774745, 6);
  sqcRZGate(q, -0.18984477314798756, 6);
  sqcRYGate(q, -3.1207183139405297, 7);
  sqcRZGate(q, -0.15111984552255273, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.2502177031338304, 0);
  sqcRZGate(q, -1.4377493486658377, 0);
  sqcRYGate(q, 0.22810483379304625, 1);
  sqcRZGate(q, 2.2261394254291944, 1);
  sqcRYGate(q, 2.11573425731567, 2);
  sqcRZGate(q, -1.9640379843466316, 2);
  sqcRYGate(q, -3.060722046073494, 3);
  sqcRZGate(q, 0.8242436145101167, 3);
  sqcRYGate(q, 0.12569230839909523, 4);
  sqcRZGate(q, 1.21480189770453, 4);
  sqcRYGate(q, -0.9440038602605991, 5);
  sqcRZGate(q, -0.17156959211778955, 5);
  sqcRYGate(q, -2.6423171456047023, 6);
  sqcRZGate(q, -1.4333014069527763, 6);
  sqcRYGate(q, -0.7684416496458333, 7);
  sqcRZGate(q, 2.8830465601206217, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.4062546843707288, 0);
  sqcRZGate(q, -1.5218298583866727, 0);
  sqcRYGate(q, 0.4258402540924396, 1);
  sqcRZGate(q, 0.1848487947421925, 1);
  sqcRYGate(q, -2.5751178088721267, 2);
  sqcRZGate(q, 2.2278248413393755, 2);
  sqcRYGate(q, 2.983289145107633, 3);
  sqcRZGate(q, -1.1447820356820655, 3);
  sqcRYGate(q, 0.01926649225692234, 4);
  sqcRZGate(q, -1.96029253544778, 4);
  sqcRYGate(q, 3.138349468347216, 5);
  sqcRZGate(q, 0.5909988434781012, 5);
  sqcRYGate(q, -3.1352963022808544, 6);
  sqcRZGate(q, 2.84438579671735, 6);
  sqcRYGate(q, -2.708811841081532, 7);
  sqcRZGate(q, -0.3592834765838933, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.625929430581107, 0);
  sqcRZGate(q, -1.9701577823547627, 0);
  sqcRYGate(q, 2.6747454724774347, 1);
  sqcRZGate(q, 2.667912813237532, 1);
  sqcRYGate(q, 1.9433232201252162, 2);
  sqcRZGate(q, -2.8771778107724955, 2);
  sqcRYGate(q, -0.16279370116500227, 3);
  sqcRZGate(q, 2.136005074635402, 3);
  sqcRYGate(q, 2.652583323283612, 4);
  sqcRZGate(q, 2.3259933871292056, 4);
  sqcRYGate(q, 0.8305145506587113, 5);
  sqcRZGate(q, -0.4976554059259612, 5);
  sqcRYGate(q, 2.6473125346485813, 6);
  sqcRZGate(q, -2.624148466631873, 6);
  sqcRYGate(q, 2.1204511269479616, 7);
  sqcRZGate(q, 2.9303923864540433, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.6161922400659576, 0);
  sqcRZGate(q, -1.4879606452260556, 0);
  sqcRYGate(q, -0.46074868306239214, 1);
  sqcRZGate(q, -1.6461354343629528, 1);
  sqcRYGate(q, -1.386914655219695, 2);
  sqcRZGate(q, 0.1687240566775836, 2);
  sqcRYGate(q, -3.1161755004932905, 3);
  sqcRZGate(q, 2.6576305568440683, 3);
  sqcRYGate(q, 0.041142907713028976, 4);
  sqcRZGate(q, -2.5945436894319123, 4);
  sqcRYGate(q, -0.0009573062629831329, 5);
  sqcRZGate(q, 1.1686125736638262, 5);
  sqcRYGate(q, 3.132349591192795, 6);
  sqcRZGate(q, 1.6359776207969157, 6);
  sqcRYGate(q, 0.8572783575081574, 7);
  sqcRZGate(q, 1.9037330650707986, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.958182872642879, 0);
  sqcRZGate(q, 1.4291450000800907, 0);
  sqcRYGate(q, 2.7117428566455968, 1);
  sqcRZGate(q, -0.2957844290401592, 1);
  sqcRYGate(q, 2.684770448273831, 2);
  sqcRZGate(q, -1.8040217754214014, 2);
  sqcRYGate(q, -0.700347891199554, 3);
  sqcRZGate(q, 9.633605728520676e-05, 3);
  sqcRYGate(q, -0.3521913090407525, 4);
  sqcRZGate(q, -0.2805285556824919, 4);
  sqcRYGate(q, -2.2923865377633175, 5);
  sqcRZGate(q, -2.0925561937342296, 5);
  sqcRYGate(q, -1.3611419732293317, 6);
  sqcRZGate(q, -1.3130970603363505, 6);
  sqcRYGate(q, 1.8530368872395804, 7);
  sqcRZGate(q, -2.3065433626965794, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4906643470824505, 0);
  sqcRZGate(q, -1.0965678625531927, 0);
  sqcRYGate(q, 2.2613029658572565, 1);
  sqcRZGate(q, 2.549720261645329, 1);
  sqcRYGate(q, -2.503151958025227, 2);
  sqcRZGate(q, 3.123198823568686, 2);
  sqcRYGate(q, 1.7926382253102293, 3);
  sqcRZGate(q, -1.314115368664269, 3);
  sqcRYGate(q, 0.022212946202008865, 4);
  sqcRZGate(q, 0.014739002140877297, 4);
  sqcRYGate(q, -3.1346534764514424, 5);
  sqcRZGate(q, 1.6447110362826196, 5);
  sqcRYGate(q, -2.4211265392205985, 6);
  sqcRZGate(q, 2.9685455693526626, 6);
  sqcRYGate(q, 1.0559410852505184, 7);
  sqcRZGate(q, -1.1513103445108541, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.15941210398399405, 0);
  sqcRZGate(q, -2.4692249927075394, 0);
  sqcRYGate(q, 3.0982821265535074, 1);
  sqcRZGate(q, -1.0609767821970708, 1);
  sqcRYGate(q, -1.886154861916662, 2);
  sqcRZGate(q, 1.0152115865420654, 2);
  sqcRYGate(q, 1.0721542130651134, 3);
  sqcRZGate(q, -2.9494371052448094, 3);
  sqcRYGate(q, -2.683830976992575, 4);
  sqcRZGate(q, -2.5852417434418413, 4);
  sqcRYGate(q, 3.055804399756992, 5);
  sqcRZGate(q, 1.2957971849179348, 5);
  sqcRYGate(q, -2.056269912379043, 6);
  sqcRZGate(q, -0.9325807758944666, 6);
  sqcRYGate(q, 1.816604556519599, 7);
  sqcRZGate(q, -3.128370261876556, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.2014439187885448, 0);
  sqcRZGate(q, -2.622095477445122, 0);
  sqcRYGate(q, 0.09388388207576792, 1);
  sqcRZGate(q, -1.495912579362824, 1);
  sqcRYGate(q, -0.3027588847974059, 2);
  sqcRZGate(q, -1.2678076365051059, 2);
  sqcRYGate(q, -0.017748499390501254, 3);
  sqcRZGate(q, 0.16423657179686424, 3);
  sqcRYGate(q, -0.0019170058576483129, 4);
  sqcRZGate(q, -0.5583524725519348, 4);
  sqcRYGate(q, 0.018758319507945487, 5);
  sqcRZGate(q, 1.8354009088517422, 5);
  sqcRYGate(q, 3.07726268426749, 6);
  sqcRZGate(q, -0.7421789979480625, 6);
  sqcRYGate(q, -2.5951563162877322, 7);
  sqcRZGate(q, -1.2921371246715074, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.2598170421885353, 0);
  sqcRZGate(q, -2.1392849583251, 0);
  sqcRYGate(q, -0.3422906276779804, 1);
  sqcRZGate(q, 2.965254885467177, 1);
  sqcRYGate(q, -1.1064812310697603, 2);
  sqcRZGate(q, 1.0943359690480294, 2);
  sqcRYGate(q, -1.7905804711429258, 3);
  sqcRZGate(q, 1.254034679263536, 3);
  sqcRYGate(q, 0.14697527876201344, 4);
  sqcRZGate(q, 2.656211699989834, 4);
  sqcRYGate(q, -3.052906352669031, 5);
  sqcRZGate(q, -2.418180439709556, 5);
  sqcRYGate(q, 1.9727483903725842, 6);
  sqcRZGate(q, -1.0553736708102257, 6);
  sqcRYGate(q, 2.8333485386345085, 7);
  sqcRZGate(q, -2.7149915860548006, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.03192083560704711, 0);
  sqcRZGate(q, 0.9015751108352705, 0);
  sqcRYGate(q, -0.7803463520655685, 1);
  sqcRZGate(q, 0.7269102803033647, 1);
  sqcRYGate(q, 1.2202982826285815, 2);
  sqcRZGate(q, 1.7859516373093671, 2);
  sqcRYGate(q, -0.0005141026990913206, 3);
  sqcRZGate(q, -0.4407907754518074, 3);
  sqcRYGate(q, -0.007514914394933871, 4);
  sqcRZGate(q, -2.3946252708804945, 4);
  sqcRYGate(q, -0.6590401406600733, 5);
  sqcRZGate(q, -0.5049375519974958, 5);
  sqcRYGate(q, -1.1632335795097941, 6);
  sqcRZGate(q, -1.252166892292931, 6);
  sqcRYGate(q, 1.3471208872152225, 7);
  sqcRZGate(q, -0.18026418990360146, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.0253784361440266, 0);
  sqcRZGate(q, -1.6208793024520372, 0);
  sqcRYGate(q, -1.7934320858610997, 1);
  sqcRZGate(q, -1.0834328002263849, 1);
  sqcRYGate(q, -2.652102407866508, 2);
  sqcRZGate(q, 0.7109015777809019, 2);
  sqcRYGate(q, -1.6737804175089925, 3);
  sqcRZGate(q, 3.0620265246013143, 3);
  sqcRYGate(q, -0.04501975756285167, 4);
  sqcRZGate(q, 1.5201018701410058, 4);
  sqcRYGate(q, 0.040534230225222956, 5);
  sqcRZGate(q, 2.480402848517901, 5);
  sqcRYGate(q, 0.6286845038839771, 6);
  sqcRZGate(q, 0.9706575833211799, 6);
  sqcRYGate(q, -0.8021149524199727, 7);
  sqcRZGate(q, 0.756158886716769, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.000795313833577, 0);
  sqcRZGate(q, 0.5083201547278947, 0);
  sqcRYGate(q, -0.9364141455400876, 1);
  sqcRZGate(q, -1.3820001435996323, 1);
  sqcRYGate(q, 0.31514104756330763, 2);
  sqcRZGate(q, -3.0763511211048145, 2);
  sqcRYGate(q, -3.1344445298385932, 3);
  sqcRZGate(q, 2.1058321086759166, 3);
  sqcRYGate(q, -0.006354866249595163, 4);
  sqcRZGate(q, 1.5365089202110411, 4);
  sqcRYGate(q, 0.026122045591078443, 5);
  sqcRZGate(q, 2.627296889514622, 5);
  sqcRYGate(q, -2.504386081639878, 6);
  sqcRZGate(q, 0.5976850826967914, 6);
  sqcRYGate(q, 0.32486697342506066, 7);
  sqcRZGate(q, -3.107401252545423, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.8823666080396286, 0);
  sqcRZGate(q, 3.009318707822266, 0);
  sqcRYGate(q, 2.6139613813476568, 1);
  sqcRZGate(q, 2.2128672369673765, 1);
  sqcRYGate(q, -1.803474412357766, 2);
  sqcRZGate(q, -0.49102730773371234, 2);
  sqcRYGate(q, 0.5260030715032007, 3);
  sqcRZGate(q, -0.7930101816312973, 3);
  sqcRYGate(q, 0.05492933512485809, 4);
  sqcRZGate(q, 0.253990589974153, 4);
  sqcRYGate(q, -3.140807245313266, 5);
  sqcRZGate(q, -1.1923053657969245, 5);
  sqcRYGate(q, 2.374171281419178, 6);
  sqcRZGate(q, -2.7075555000789495, 6);
  sqcRYGate(q, 2.122522935269283, 7);
  sqcRZGate(q, 2.472062595731683, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.3010103936808344, 0);
  sqcRZGate(q, 2.58765905562949, 0);
  sqcRYGate(q, -1.6280093153776622, 1);
  sqcRZGate(q, 2.6692762189268335, 1);
  sqcRYGate(q, -0.3652454614400842, 2);
  sqcRZGate(q, 1.4790581316644476, 2);
  sqcRYGate(q, -2.504768477791533, 3);
  sqcRZGate(q, 1.4580573980347775, 3);
  sqcRYGate(q, -0.014045928926063487, 4);
  sqcRZGate(q, 1.075512747237917, 4);
  sqcRYGate(q, 2.8946615359500893, 5);
  sqcRZGate(q, 2.2727345508506307, 5);
  sqcRYGate(q, -0.42906846988603675, 6);
  sqcRZGate(q, 1.0558335217652408, 6);
  sqcRYGate(q, 0.7404220448941015, 7);
  sqcRZGate(q, -0.7414298881867467, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.6857373445162525, 0);
  sqcRZGate(q, -0.3218808278509862, 0);
  sqcRYGate(q, 0.15548323757591045, 1);
  sqcRZGate(q, -0.30205388506932357, 1);
  sqcRYGate(q, -2.604944994703818, 2);
  sqcRZGate(q, -1.0816582121149987, 2);
  sqcRYGate(q, 0.8803914098243899, 3);
  sqcRZGate(q, 3.0483671655491977, 3);
  sqcRYGate(q, -0.005683080335505825, 4);
  sqcRZGate(q, 2.2483156063808947, 4);
  sqcRYGate(q, 3.127206830549168, 5);
  sqcRZGate(q, -2.0828435047684675, 5);
  sqcRYGate(q, -2.915695380756828, 6);
  sqcRZGate(q, 0.8450323636921206, 6);
  sqcRYGate(q, 1.8264673861509617, 7);
  sqcRZGate(q, -1.4328126099629002, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.3962253006318216, 0);
  sqcRZGate(q, 0.6900605083987776, 0);
  sqcRYGate(q, -0.017644128493228273, 1);
  sqcRZGate(q, 1.0978878502220528, 1);
  sqcRYGate(q, -0.08829168982623606, 2);
  sqcRZGate(q, -2.00604017444533, 2);
  sqcRYGate(q, 3.069660272965878, 3);
  sqcRZGate(q, -2.804751514534445, 3);
  sqcRYGate(q, 2.2864825325254077, 4);
  sqcRZGate(q, -1.5536899065461762, 4);
  sqcRYGate(q, 3.0509983384665884, 5);
  sqcRZGate(q, -2.601021588200742, 5);
  sqcRYGate(q, 1.1834342219995522, 6);
  sqcRZGate(q, 1.8242186239515172, 6);
  sqcRYGate(q, -2.5686118289951696, 7);
  sqcRZGate(q, 1.2851587990057558, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.100275604423069, 0);
  sqcRZGate(q, -0.17862190169185194, 0);
  sqcRYGate(q, -0.8939025276026422, 1);
  sqcRZGate(q, -1.671598179959662, 1);
  sqcRYGate(q, 2.606631626999816, 2);
  sqcRZGate(q, -1.109911164928359, 2);
  sqcRYGate(q, -0.01113154722877754, 3);
  sqcRZGate(q, 1.1143079285489137, 3);
  sqcRYGate(q, 3.1318123046524824, 4);
  sqcRZGate(q, 0.706822543788559, 4);
  sqcRYGate(q, 0.012232489936048196, 5);
  sqcRZGate(q, 1.1848658212783096, 5);
  sqcRYGate(q, -1.737173379000849, 6);
  sqcRZGate(q, 0.23605899842275918, 6);
  sqcRYGate(q, 1.4557257244889068, 7);
  sqcRZGate(q, -3.0222407583505926, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.07500967836021921, 0);
  sqcRZGate(q, -1.4632146285986158, 0);
  sqcRYGate(q, -2.7905505827968042, 1);
  sqcRZGate(q, -0.3950070023297938, 1);
  sqcRYGate(q, -1.358146632200217, 2);
  sqcRZGate(q, -0.2028831005482686, 2);
  sqcRYGate(q, 0.5368932659710527, 3);
  sqcRZGate(q, -2.8195482205038496, 3);
  sqcRYGate(q, -2.1732373348295377, 4);
  sqcRZGate(q, 0.897434575783934, 4);
  sqcRYGate(q, 0.32730671426594765, 5);
  sqcRZGate(q, 0.8658553273307296, 5);
  sqcRYGate(q, -2.5905259221543435, 6);
  sqcRZGate(q, 1.3816268278170094, 6);
  sqcRYGate(q, -2.1214750928404484, 7);
  sqcRZGate(q, -0.5291213613106568, 7);

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
