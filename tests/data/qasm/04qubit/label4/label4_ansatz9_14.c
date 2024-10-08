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

  sqcRYGate(q, 2.8454265055687524, 0);
  sqcRYGate(q, 2.1074417730411548, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.24396757326314053, 0);
  sqcRYGate(q, 2.1330566171781076, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6550269211050326, 2);
  sqcRYGate(q, -0.5004384888654742, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1852317982752085, 2);
  sqcRYGate(q, -1.362881461635169, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2093230554331686, 0);
  sqcRYGate(q, -2.8599036008922116, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.24922339904444257, 0);
  sqcRYGate(q, -0.1059861317540584, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3441651209565327, 1);
  sqcRYGate(q, -2.178294231907901, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9962174020280337, 1);
  sqcRYGate(q, 2.814576557258086, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.924706193824057, 0);
  sqcRYGate(q, -1.7548226510989167, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.847774793528586, 0);
  sqcRYGate(q, -1.4436771153869647, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1704285057597872, 1);
  sqcRYGate(q, -2.076651025910812, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4331621771318863, 1);
  sqcRYGate(q, 0.9182442471212405, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1022173583911723, 0);
  sqcRYGate(q, 2.742037027132461, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3109962270865943, 0);
  sqcRYGate(q, 1.7821207261830587, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.854446616456827, 2);
  sqcRYGate(q, 1.3803975305944176, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5347123834386458, 2);
  sqcRYGate(q, -3.007773485806427, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4521376888679445, 0);
  sqcRYGate(q, 0.6662286008041702, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8454240552284974, 0);
  sqcRYGate(q, -0.5221858384096221, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.874875065434253, 1);
  sqcRYGate(q, -1.6522143975694115, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.37847533702579744, 1);
  sqcRYGate(q, -1.1379459302573451, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.800623648041451, 0);
  sqcRYGate(q, 1.6202943260861045, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.007349771731956, 0);
  sqcRYGate(q, -2.9005332000911794, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.3360881404072416, 1);
  sqcRYGate(q, -2.7042307183587075, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4428768222791464, 1);
  sqcRYGate(q, 1.991734349659464, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9094807224537114, 0);
  sqcRYGate(q, -1.7481883278815031, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6839859329789242, 0);
  sqcRYGate(q, 2.2043425300469517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5758864571579878, 2);
  sqcRYGate(q, 0.974551962772944, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.311032539399669, 2);
  sqcRYGate(q, -0.8364056250923887, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3821015174018879, 0);
  sqcRYGate(q, 1.0969211253303137, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3984987707854941, 0);
  sqcRYGate(q, 1.9223730430546868, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.076016256450643, 1);
  sqcRYGate(q, -0.9442133848976059, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0869016511466922, 1);
  sqcRYGate(q, 2.4236241013705144, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4585257637144577, 0);
  sqcRYGate(q, 2.655977823033635, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.021949467433619, 0);
  sqcRYGate(q, -3.05954463767536, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1228812187194714, 1);
  sqcRYGate(q, -1.97675007091857, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6752173834500956, 1);
  sqcRYGate(q, 0.666837433920647, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.006234407389476, 0);
  sqcRYGate(q, -1.7559555889078666, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1306278025316345, 0);
  sqcRYGate(q, 1.6750366708388462, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0169515081713323, 2);
  sqcRYGate(q, 0.5880365626099449, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7016182020568427, 2);
  sqcRYGate(q, 1.4732196915705282, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2483604009001445, 0);
  sqcRYGate(q, -1.5946022214796813, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.315332630232762, 0);
  sqcRYGate(q, 1.4254036837326625, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4958860297099053, 1);
  sqcRYGate(q, -0.6271301712651757, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9787805189416235, 1);
  sqcRYGate(q, 2.1076074270540817, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3481341596875263, 0);
  sqcRYGate(q, -0.36725068366546676, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5685414986762862, 0);
  sqcRYGate(q, 2.9386842280329755, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0522931534896935, 1);
  sqcRYGate(q, 2.1440293531780394, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3649288776406325, 1);
  sqcRYGate(q, -0.4951933421645718, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8634652288556983, 0);
  sqcRYGate(q, -1.9085498343080018, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7377926197140257, 0);
  sqcRYGate(q, 0.3914555329790485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8537784284810063, 2);
  sqcRYGate(q, -2.4629293930337504, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.078428739781608, 2);
  sqcRYGate(q, 2.77104260948046, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.171117522391177, 0);
  sqcRYGate(q, 0.48699184936531603, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6729312779224523, 0);
  sqcRYGate(q, -0.046410527597303464, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2857751489147904, 1);
  sqcRYGate(q, 0.41836912984615193, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.193092439349156, 1);
  sqcRYGate(q, 2.241451911335858, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0276029557292055, 0);
  sqcRYGate(q, -1.2031795502909857, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9744940563838695, 0);
  sqcRYGate(q, 2.974696228674495, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.19210846743087, 1);
  sqcRYGate(q, -1.494353138693092, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7856611024658537, 1);
  sqcRYGate(q, -2.436936187763542, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9998820116208704, 0);
  sqcRYGate(q, 2.228991955866346, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.45324314633957014, 0);
  sqcRYGate(q, 0.058273130296555994, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.585593038711041, 2);
  sqcRYGate(q, 1.1322342669625347, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8739960951465076, 2);
  sqcRYGate(q, -1.4516289128300883, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.864914779949398, 0);
  sqcRYGate(q, 1.2759120369395243, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5775602604813613, 0);
  sqcRYGate(q, 0.4945411212611477, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8474291812104129, 1);
  sqcRYGate(q, 0.12909994745466796, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3086990608548692, 1);
  sqcRYGate(q, 1.5083689668813092, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.154704073372151, 0);
  sqcRYGate(q, -0.5062809990635655, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0667393930031976, 0);
  sqcRYGate(q, -1.4131499747826513, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.536949598031259, 1);
  sqcRYGate(q, -0.9010900527258388, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2654982214514083, 1);
  sqcRYGate(q, -0.13284887847019444, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9133281269340293, 0);
  sqcRYGate(q, 0.4629021401457361, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1717231218990702, 0);
  sqcRYGate(q, -2.04934551901561, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4332084837286476, 2);
  sqcRYGate(q, -1.0098279178790872, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.22872747776603675, 2);
  sqcRYGate(q, -2.7476850932414822, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.729920802487816, 0);
  sqcRYGate(q, -2.1613616849997106, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7058161833878183, 0);
  sqcRYGate(q, 1.6901934013745963, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5596036460382356, 1);
  sqcRYGate(q, -3.0171323990745793, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9100995113462579, 1);
  sqcRYGate(q, 0.42622535048495375, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4035890729208083, 0);
  sqcRYGate(q, 2.3529696550269437, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.23098594600258693, 0);
  sqcRYGate(q, 0.9112708602018698, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.03229640994957738, 1);
  sqcRYGate(q, 1.5279713565069013, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9228203614365895, 1);
  sqcRYGate(q, 2.596692915007037, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.16551372139770668, 0);
  sqcRYGate(q, -0.09155389699199355, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.452253980634189, 0);
  sqcRYGate(q, 2.1742474868829014, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5743874441860061, 2);
  sqcRYGate(q, 1.3020770051919879, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.419114699591878, 2);
  sqcRYGate(q, -1.9875856672918735, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.18696732834842678, 0);
  sqcRYGate(q, -1.9794501270811482, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2928219486062592, 0);
  sqcRYGate(q, 1.6180065197214555, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.717776512415173, 1);
  sqcRYGate(q, -1.6160469391824648, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.890731887865352, 1);
  sqcRYGate(q, 0.2871261838203658, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.111470226851128, 0);
  sqcRYGate(q, 1.531560814772938, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1923128563942096, 0);
  sqcRYGate(q, 1.4542990602180002, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0276107723230457, 1);
  sqcRYGate(q, -2.187370285087143, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4756587879027352, 1);
  sqcRYGate(q, 2.3874982184874165, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.976866431709126, 0);
  sqcRYGate(q, 0.19081788958782284, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9836341957874515, 0);
  sqcRYGate(q, 2.347890643879307, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.19668456667129383, 2);
  sqcRYGate(q, 0.12289066159903683, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.915552623137907, 2);
  sqcRYGate(q, -0.30561704703222237, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6478888233617006, 0);
  sqcRYGate(q, 3.104401154270437, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1014046277810534, 0);
  sqcRYGate(q, -1.2616458463739215, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.011121174171542236, 1);
  sqcRYGate(q, 3.102156038649173, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0860251008216593, 1);
  sqcRYGate(q, 2.1128663997775243, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8977363462565255, 0);
  sqcRYGate(q, -1.4426082150024708, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1059396499233154, 0);
  sqcRYGate(q, 2.2229992569292754, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.2630071849409393, 1);
  sqcRYGate(q, -1.2027649263328604, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.08130572526182167, 1);
  sqcRYGate(q, -0.2420481005627512, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1197613511220306, 0);
  sqcRYGate(q, -2.242815859626173, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0223605640840767, 0);
  sqcRYGate(q, 3.1243274025886327, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5740337660024508, 2);
  sqcRYGate(q, 1.3591973006870548, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5396780901084057, 2);
  sqcRYGate(q, -2.7241754188547267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7659882060175113, 0);
  sqcRYGate(q, 0.39228955803740195, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7758643095992456, 0);
  sqcRYGate(q, 1.4384399505025138, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4955997392227342, 1);
  sqcRYGate(q, 1.266832058623685, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5726344790333066, 1);
  sqcRYGate(q, 0.37547853378603396, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8528838075876445, 0);
  sqcRYGate(q, 1.0321009175399605, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.784815962059482, 0);
  sqcRYGate(q, -2.24953989443875, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0369304639294477, 1);
  sqcRYGate(q, 1.6103428073677675, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.516481070522448, 1);
  sqcRYGate(q, -1.5825958263861244, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5600875977708726, 0);
  sqcRYGate(q, -1.9170834319916712, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5710803034792944, 0);
  sqcRYGate(q, -2.500789054526793, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.024080879386874, 2);
  sqcRYGate(q, -0.7065423443184223, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7524444275500848, 2);
  sqcRYGate(q, 0.2402589753006896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3832181540515309, 0);
  sqcRYGate(q, -2.561732853203377, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7752708043554019, 0);
  sqcRYGate(q, 2.8546770675162496, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7917453525342548, 1);
  sqcRYGate(q, -1.7722904280091643, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4291691136169868, 1);
  sqcRYGate(q, -2.428019698487106, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.510840036401496, 0);
  sqcRYGate(q, 3.1329539979643592, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5349283665515442, 0);
  sqcRYGate(q, 1.9322214400505073, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9272663100860425, 1);
  sqcRYGate(q, 2.0246196861868997, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.082151321261311, 1);
  sqcRYGate(q, 2.2852685222054916, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.09050149385031843, 0);
  sqcRYGate(q, 2.4799793245210666, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7663178305207397, 0);
  sqcRYGate(q, -1.1802438559021746, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6691891475279554, 2);
  sqcRYGate(q, -2.687210152141198, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8040904184172097, 2);
  sqcRYGate(q, 2.2170112231818493, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6161073802290158, 0);
  sqcRYGate(q, -2.530464104281564, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.616018156187898, 0);
  sqcRYGate(q, 2.9432787653305255, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6776210404085687, 1);
  sqcRYGate(q, 0.9536433513200624, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0317450517865643, 1);
  sqcRYGate(q, -0.8183806319862159, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3305180712015048, 0);
  sqcRYGate(q, 0.22052435912780324, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.06371603001834, 0);
  sqcRYGate(q, 0.8706402648112561, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8767720307551796, 1);
  sqcRYGate(q, 0.7335531263900137, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8942325406711076, 1);
  sqcRYGate(q, 1.2739474958542143, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.21954154744847793, 0);
  sqcRYGate(q, 1.7061375199263409, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8290424342489944, 0);
  sqcRYGate(q, -1.7661457478890463, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9467985265933763, 2);
  sqcRYGate(q, -3.1040754152684586, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.365329418939845, 2);
  sqcRYGate(q, 2.71076512526784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9416171656411204, 0);
  sqcRYGate(q, 1.7066397287870045, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7597517318484456, 0);
  sqcRYGate(q, -1.8863482229251376, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4492424533111024, 1);
  sqcRYGate(q, -3.117072180752101, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1983865800972002, 1);
  sqcRYGate(q, 1.8637240543310152, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3130631241735684, 0);
  sqcRYGate(q, -1.8457008554372907, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5748907647231754, 0);
  sqcRYGate(q, -0.9830052903271416, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9424306647663963, 1);
  sqcRYGate(q, 0.8962774399610509, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.10714029571888438, 1);
  sqcRYGate(q, -1.2903482375793653, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7820939866969194, 0);
  sqcRYGate(q, -1.7132372803268945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.41465513148528643, 0);
  sqcRYGate(q, -2.3691147050132444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.232784785681944, 2);
  sqcRYGate(q, -2.7103992132827472, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5917973083495225, 2);
  sqcRYGate(q, 1.8979102921478228, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0893594541190177, 0);
  sqcRYGate(q, -0.793211617555345, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.28821943226901175, 0);
  sqcRYGate(q, -2.915197667230121, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1921888093783268, 1);
  sqcRYGate(q, -2.2903103183243925, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.49895383011254596, 1);
  sqcRYGate(q, 2.6133515939613767, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2892763773349092, 0);
  sqcRYGate(q, -0.9177410669790964, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4960140421422414, 0);
  sqcRYGate(q, 1.3009739319469498, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9501370515669345, 1);
  sqcRYGate(q, -0.6018891658814598, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8309759569352846, 1);
  sqcRYGate(q, -2.9286369991645156, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0435419554512528, 0);
  sqcRYGate(q, -1.2853627984609113, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.572016423489137, 0);
  sqcRYGate(q, -2.366500765179066, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6534065441107573, 2);
  sqcRYGate(q, -1.8598858294766036, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.05848941464954139, 2);
  sqcRYGate(q, 0.6355426964489107, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6734544535034908, 0);
  sqcRYGate(q, 0.8975548307325454, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5773756100238976, 0);
  sqcRYGate(q, -0.08534453125941975, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0060206342259699, 1);
  sqcRYGate(q, -3.0752242960728027, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.015518707267918673, 1);
  sqcRYGate(q, -0.8345620070349886, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.527628391329957, 0);
  sqcRYGate(q, -0.3836954668380879, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6489318734765845, 0);
  sqcRYGate(q, 3.114553435369254, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.617561108594793, 1);
  sqcRYGate(q, 0.8110292880411878, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.240694421649743, 1);
  sqcRYGate(q, 0.3126899128743296, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8947246309335712, 0);
  sqcRYGate(q, 1.6612644955214657, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5973723210329585, 0);
  sqcRYGate(q, -0.47725899752229156, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5939826064352118, 2);
  sqcRYGate(q, -2.339172303130093, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9468961222854686, 2);
  sqcRYGate(q, -0.7521010875424405, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.087575012930994, 0);
  sqcRYGate(q, -0.37222455661094767, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.769891543818015, 0);
  sqcRYGate(q, 2.888882160461255, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5742242774043014, 1);
  sqcRYGate(q, -3.128344820432949, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8078499939076549, 1);
  sqcRYGate(q, -2.804480181666458, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3406780521502795, 0);
  sqcRYGate(q, 1.6238442327701703, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9771333740010357, 0);
  sqcRYGate(q, 1.880844471355242, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.22807929863549217, 1);
  sqcRYGate(q, 0.6335385191822981, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4702056554401046, 1);
  sqcRYGate(q, -2.3156843347166824, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4407208362351566, 0);
  sqcRYGate(q, 1.9949206584867771, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.582198898820447, 0);
  sqcRYGate(q, -1.0615664338562238, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3792522078640674, 2);
  sqcRYGate(q, -2.8656038502497263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.193099751011167, 2);
  sqcRYGate(q, 0.2096742691416081, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4732566520091663, 0);
  sqcRYGate(q, 2.3839746275677713, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9107612944133472, 0);
  sqcRYGate(q, -2.0205208293594588, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.518422192778757, 1);
  sqcRYGate(q, 0.24843866047862131, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7367140524411917, 1);
  sqcRYGate(q, -1.733348975356921, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7381780392262467, 0);
  sqcRYGate(q, 0.5174568895284297, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.09320257644553, 0);
  sqcRYGate(q, -0.5562968150580572, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5792859941113804, 1);
  sqcRYGate(q, 2.41931057339291, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.793182366245764, 1);
  sqcRYGate(q, 1.7334081604915574, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.19236808837743, 0);
  sqcRYGate(q, 2.79733433036989, 1);
  sqcRYGate(q, 3.1326254850616984, 2);
  sqcRYGate(q, -2.873904770298051, 3);

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
