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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -2.7191987219217952, 0);
  sqcRZGate(q, -1.3805505374458862, 0);
  sqcRYGate(q, 2.2244866664622824, 1);
  sqcRZGate(q, 0.09896926127500641, 1);
  sqcRYGate(q, 0.6256846913927625, 2);
  sqcRZGate(q, -1.2888164516860714, 2);
  sqcRYGate(q, -2.866719662120399, 3);
  sqcRZGate(q, -2.2979914599240936, 3);
  sqcRYGate(q, -1.046331972174193, 4);
  sqcRZGate(q, 0.18903198283988373, 4);
  sqcRYGate(q, -3.141366936649053, 5);
  sqcRZGate(q, 1.2542986414266473, 5);
  sqcRYGate(q, 1.7439986026750054, 6);
  sqcRZGate(q, -2.529865542065083, 6);
  sqcRYGate(q, -0.9968902434585521, 7);
  sqcRZGate(q, 2.166096075677859, 7);
  sqcRYGate(q, 0.4659416119554613, 8);
  sqcRZGate(q, 3.0455651097754126, 8);
  sqcRYGate(q, -2.6966240947504274, 9);
  sqcRZGate(q, -1.2283032403911838, 9);
  sqcRYGate(q, -0.511582226008139, 10);
  sqcRZGate(q, 2.676089943570136, 10);
  sqcRYGate(q, 0.06344392919036414, 11);
  sqcRZGate(q, -0.457398529337476, 11);
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
  sqcRYGate(q, 1.993279667292505, 0);
  sqcRZGate(q, -2.478642999239604, 0);
  sqcRYGate(q, 0.44595288042839165, 1);
  sqcRZGate(q, 1.4029912747749236, 1);
  sqcRYGate(q, 0.7987334679146926, 2);
  sqcRZGate(q, -2.404977987993848, 2);
  sqcRYGate(q, -1.6385313158066195, 3);
  sqcRZGate(q, -2.0072279258063705, 3);
  sqcRYGate(q, -0.4390143892629645, 4);
  sqcRZGate(q, 2.0056544362642206, 4);
  sqcRYGate(q, -3.141292587925296, 5);
  sqcRZGate(q, 2.7015322754134425, 5);
  sqcRYGate(q, 0.009298312601479175, 6);
  sqcRZGate(q, -1.1304717918219893, 6);
  sqcRYGate(q, 2.1223196659515824, 7);
  sqcRZGate(q, 2.019687753179565, 7);
  sqcRYGate(q, 0.005432397586702997, 8);
  sqcRZGate(q, -1.6448016009328807, 8);
  sqcRYGate(q, 0.13060766893958853, 9);
  sqcRZGate(q, 2.812592815576828, 9);
  sqcRYGate(q, 1.08766934364984, 10);
  sqcRZGate(q, -1.1027056143447347, 10);
  sqcRYGate(q, 2.9507965281873174, 11);
  sqcRZGate(q, -1.8968901985205797, 11);
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
  sqcRYGate(q, 1.0910810030401124, 0);
  sqcRZGate(q, 0.12040546389124615, 0);
  sqcRYGate(q, -1.233139601671141, 1);
  sqcRZGate(q, -2.1292807466713723, 1);
  sqcRYGate(q, 1.183689738838448, 2);
  sqcRZGate(q, -1.271800256926312, 2);
  sqcRYGate(q, -2.287801716201432, 3);
  sqcRZGate(q, -0.7493991016680832, 3);
  sqcRYGate(q, -2.292786477856191, 4);
  sqcRZGate(q, -1.8257380423418914, 4);
  sqcRYGate(q, -3.139109006052645, 5);
  sqcRZGate(q, 2.776845524998717, 5);
  sqcRYGate(q, 0.38115373463793517, 6);
  sqcRZGate(q, 0.912061929632536, 6);
  sqcRYGate(q, 2.542208361839543, 7);
  sqcRZGate(q, -1.0713523405201444, 7);
  sqcRYGate(q, 2.352669169013128, 8);
  sqcRZGate(q, -2.325254550988539, 8);
  sqcRYGate(q, -3.094905522347661, 9);
  sqcRZGate(q, -0.37426204419432785, 9);
  sqcRYGate(q, 2.6462720629517515, 10);
  sqcRZGate(q, -2.1843612819040894, 10);
  sqcRYGate(q, 1.1650227665408623, 11);
  sqcRZGate(q, 2.8621423128018746, 11);
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
  sqcRYGate(q, -2.0065885764438955, 0);
  sqcRZGate(q, 2.6876456326695366, 0);
  sqcRYGate(q, -1.4060339794341064, 1);
  sqcRZGate(q, -2.090569037853917, 1);
  sqcRYGate(q, -1.6496170280847977, 2);
  sqcRZGate(q, 1.4504900570592287, 2);
  sqcRYGate(q, 3.054024000866097, 3);
  sqcRZGate(q, -2.8844025748163618, 3);
  sqcRYGate(q, 0.046348552206799454, 4);
  sqcRZGate(q, 1.5020036255619569, 4);
  sqcRYGate(q, -3.1415378850037814, 5);
  sqcRZGate(q, 2.5630232259348396, 5);
  sqcRYGate(q, -3.1361505263274188, 6);
  sqcRZGate(q, -2.9201794463949056, 6);
  sqcRYGate(q, 2.1247673830756897, 7);
  sqcRZGate(q, -0.6837484571878512, 7);
  sqcRYGate(q, 3.073692253632899, 8);
  sqcRZGate(q, -1.266839891695013, 8);
  sqcRYGate(q, -1.6623180072579318, 9);
  sqcRZGate(q, -0.06176536776654373, 9);
  sqcRYGate(q, 1.2291850990751065, 10);
  sqcRZGate(q, 2.291621825380936, 10);
  sqcRYGate(q, 0.9899658399248716, 11);
  sqcRZGate(q, 2.9306263046506533, 11);
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
  sqcRYGate(q, -2.62705980602236, 0);
  sqcRZGate(q, 1.7116278297731053, 0);
  sqcRYGate(q, 1.6634128979733767, 1);
  sqcRZGate(q, -2.3837869696576828, 1);
  sqcRYGate(q, 1.5884617053914785, 2);
  sqcRZGate(q, -2.3761210608029053, 2);
  sqcRYGate(q, 1.4635933721830006, 3);
  sqcRZGate(q, -0.8885882674753809, 3);
  sqcRYGate(q, 0.7401805111330493, 4);
  sqcRZGate(q, 2.007449290241074, 4);
  sqcRYGate(q, -0.002359798971325929, 5);
  sqcRZGate(q, -2.4667836573618414, 5);
  sqcRYGate(q, 0.2170380040233013, 6);
  sqcRZGate(q, -0.7937315382368001, 6);
  sqcRYGate(q, -0.004848447259572453, 7);
  sqcRZGate(q, -2.670083690629189, 7);
  sqcRYGate(q, -1.9973375407576963, 8);
  sqcRZGate(q, 2.3468529099384305, 8);
  sqcRYGate(q, -3.095335450472617, 9);
  sqcRZGate(q, -2.2152308159496723, 9);
  sqcRYGate(q, -0.9011782815431332, 10);
  sqcRZGate(q, 2.644719406143347, 10);
  sqcRYGate(q, -1.560562952034837, 11);
  sqcRZGate(q, -0.2190880720575998, 11);
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
  sqcRYGate(q, -2.073754586298903, 0);
  sqcRZGate(q, 1.360034023713533, 0);
  sqcRYGate(q, -1.6346828467154397, 1);
  sqcRZGate(q, 3.013030819979284, 1);
  sqcRYGate(q, -1.4301216142360786, 2);
  sqcRZGate(q, 0.8741251685778009, 2);
  sqcRYGate(q, 3.003662061305276, 3);
  sqcRZGate(q, -2.654002913034724, 3);
  sqcRYGate(q, 0.017338043567777302, 4);
  sqcRZGate(q, 0.17915503372770056, 4);
  sqcRYGate(q, -3.14140760912286, 5);
  sqcRZGate(q, -1.6218239840673974, 5);
  sqcRYGate(q, -3.1371222659625952, 6);
  sqcRZGate(q, 0.4815342471434559, 6);
  sqcRYGate(q, 1.6342210919451867, 7);
  sqcRZGate(q, 0.6003534379685598, 7);
  sqcRYGate(q, -3.061608258327625, 8);
  sqcRZGate(q, -1.502052912685136, 8);
  sqcRYGate(q, -1.4672255150985523, 9);
  sqcRZGate(q, 2.8261078401309683, 9);
  sqcRYGate(q, -1.6411744189382642, 10);
  sqcRZGate(q, -0.7081579702676404, 10);
  sqcRYGate(q, -1.5104624783516583, 11);
  sqcRZGate(q, -2.2077754203358007, 11);
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
  sqcRYGate(q, -0.8749854686399027, 0);
  sqcRZGate(q, -2.5270333801235716, 0);
  sqcRYGate(q, -0.269727110249438, 1);
  sqcRZGate(q, -0.3502438905596819, 1);
  sqcRYGate(q, -0.601289814404593, 2);
  sqcRZGate(q, 2.6367685550024307, 2);
  sqcRYGate(q, -0.30594958383259746, 3);
  sqcRZGate(q, 2.8678652595303995, 3);
  sqcRYGate(q, 0.622984340518933, 4);
  sqcRZGate(q, -2.264106527726469, 4);
  sqcRYGate(q, -1.571223956717259, 5);
  sqcRZGate(q, -0.8519494651536803, 5);
  sqcRYGate(q, -0.955630954565779, 6);
  sqcRZGate(q, 1.0595759404022518, 6);
  sqcRYGate(q, -2.3572476416594, 7);
  sqcRZGate(q, -0.04658845115352949, 7);
  sqcRYGate(q, 0.7728927847712088, 8);
  sqcRZGate(q, -2.517773203667402, 8);
  sqcRYGate(q, -0.02071777846999367, 9);
  sqcRZGate(q, -2.280356937380178, 9);
  sqcRYGate(q, -1.942978073275377, 10);
  sqcRZGate(q, 1.9192398520108063, 10);
  sqcRYGate(q, -0.5528467213797184, 11);
  sqcRZGate(q, 0.8349260473931882, 11);
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
  sqcRYGate(q, 1.071987615073371, 0);
  sqcRZGate(q, 0.08677899876471228, 0);
  sqcRYGate(q, 2.7114039978832674, 1);
  sqcRZGate(q, -3.133542988296456, 1);
  sqcRYGate(q, 1.4316507562278489, 2);
  sqcRZGate(q, -2.5112584008148207, 2);
  sqcRYGate(q, -0.0007045345587703977, 3);
  sqcRZGate(q, -0.07839017789838416, 3);
  sqcRYGate(q, 0.0003454383825589602, 4);
  sqcRZGate(q, 0.35569971063986344, 4);
  sqcRYGate(q, -0.0004908925454827122, 5);
  sqcRZGate(q, 0.6036212011803341, 5);
  sqcRYGate(q, 0.0005461430100818719, 6);
  sqcRZGate(q, -0.6599190396499744, 6);
  sqcRYGate(q, -1.5672518054663094, 7);
  sqcRZGate(q, -2.823537227640661, 7);
  sqcRYGate(q, -0.1376028561890417, 8);
  sqcRZGate(q, -0.06956210056171486, 8);
  sqcRYGate(q, 1.1772352872825251, 9);
  sqcRZGate(q, -1.2131918754324689, 9);
  sqcRYGate(q, -1.7616563454829834, 10);
  sqcRZGate(q, -1.5278853260013179, 10);
  sqcRYGate(q, 1.310097810733665, 11);
  sqcRZGate(q, -2.1036176876743236, 11);
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
  sqcRYGate(q, -1.2016713757554678, 0);
  sqcRZGate(q, -0.800166526960521, 0);
  sqcRYGate(q, 1.9178744460161596, 1);
  sqcRZGate(q, -0.3522514007200999, 1);
  sqcRYGate(q, -0.3975273922975982, 2);
  sqcRZGate(q, 1.1491018589131556, 2);
  sqcRYGate(q, -1.9814611883361792, 3);
  sqcRZGate(q, -0.7533654805793422, 3);
  sqcRYGate(q, 0.6589154811924258, 4);
  sqcRZGate(q, -0.11036979125334503, 4);
  sqcRYGate(q, -2.6147733001044617, 5);
  sqcRZGate(q, -1.0769477316907252, 5);
  sqcRYGate(q, -3.137124061097103, 6);
  sqcRZGate(q, 2.983883235937784, 6);
  sqcRYGate(q, -2.2035715951629182, 7);
  sqcRZGate(q, 2.49580782454062, 7);
  sqcRYGate(q, 1.5864050324334336, 8);
  sqcRZGate(q, 2.8844574821059763, 8);
  sqcRYGate(q, 1.5690942888452364, 9);
  sqcRZGate(q, -1.8901812450350999, 9);
  sqcRYGate(q, -1.7043847793159497, 10);
  sqcRZGate(q, -1.4702095665376635, 10);
  sqcRYGate(q, 0.2467280216139572, 11);
  sqcRZGate(q, -2.724321208073545, 11);
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
  sqcRYGate(q, 0.9959119936701102, 0);
  sqcRZGate(q, 2.723121153516335, 0);
  sqcRYGate(q, -0.5579143179047845, 1);
  sqcRZGate(q, -0.1238963816907912, 1);
  sqcRYGate(q, 1.423646900109584, 2);
  sqcRZGate(q, -3.073548023839696, 2);
  sqcRYGate(q, -0.0005954907206378964, 3);
  sqcRZGate(q, -1.1830433159691558, 3);
  sqcRYGate(q, -0.00023532443393570188, 4);
  sqcRZGate(q, 0.19590599523416277, 4);
  sqcRYGate(q, 3.1373453214280214, 5);
  sqcRZGate(q, 0.6750148813266601, 5);
  sqcRYGate(q, -0.001145304845056927, 6);
  sqcRZGate(q, -2.9121612987550334, 6);
  sqcRYGate(q, -0.0016055210677478268, 7);
  sqcRZGate(q, -0.7371158936116458, 7);
  sqcRYGate(q, -1.6458147311801519, 8);
  sqcRZGate(q, 1.8122301220412034, 8);
  sqcRYGate(q, -1.9780009142869448, 9);
  sqcRZGate(q, -2.274947863899119, 9);
  sqcRYGate(q, 0.807304645971647, 10);
  sqcRZGate(q, -0.8974471519793467, 10);
  sqcRYGate(q, 1.8005502720292073, 11);
  sqcRZGate(q, 1.5540561322359672, 11);
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
  sqcRYGate(q, -1.3648754629764797, 0);
  sqcRZGate(q, 1.5684732903277738, 0);
  sqcRYGate(q, 2.4487640566284132, 1);
  sqcRZGate(q, 2.7399902703013717, 1);
  sqcRYGate(q, 0.5218772146538092, 2);
  sqcRZGate(q, 0.7375275247280437, 2);
  sqcRYGate(q, -2.4909125439790194, 3);
  sqcRZGate(q, 0.6343268520535447, 3);
  sqcRYGate(q, 0.33125592140235144, 4);
  sqcRZGate(q, -0.35442526144534137, 4);
  sqcRYGate(q, -1.5170976028172674, 5);
  sqcRZGate(q, 1.7988041159886494, 5);
  sqcRYGate(q, -0.01110907962945018, 6);
  sqcRZGate(q, 0.5271396844891937, 6);
  sqcRYGate(q, -2.33516581514699, 7);
  sqcRZGate(q, -2.416625622138428, 7);
  sqcRYGate(q, 0.011497021377707917, 8);
  sqcRZGate(q, -0.4948212447032229, 8);
  sqcRYGate(q, -0.017835033585188675, 9);
  sqcRZGate(q, 1.014144319054145, 9);
  sqcRYGate(q, 0.0037596645701283293, 10);
  sqcRZGate(q, -2.275969862793224, 10);
  sqcRYGate(q, 0.001977046972076124, 11);
  sqcRZGate(q, -2.905255985539125, 11);
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
  sqcRYGate(q, 2.2009476355102287, 0);
  sqcRZGate(q, 2.0451448182052254, 0);
  sqcRYGate(q, 2.502412674819023, 1);
  sqcRZGate(q, 2.8217600873505964, 1);
  sqcRYGate(q, -1.1134233222726282, 2);
  sqcRZGate(q, -0.9022038094199791, 2);
  sqcRYGate(q, -0.03376479149271816, 3);
  sqcRZGate(q, 1.2018100566199401, 3);
  sqcRYGate(q, 3.1325454995405635, 4);
  sqcRZGate(q, -1.3112457199887046, 4);
  sqcRYGate(q, 0.00834828786657038, 5);
  sqcRZGate(q, -1.2611846515136573, 5);
  sqcRYGate(q, 3.1337517173584684, 6);
  sqcRZGate(q, 2.2870372308641835, 6);
  sqcRYGate(q, 3.1396609571187377, 7);
  sqcRZGate(q, -2.6055712065337695, 7);
  sqcRYGate(q, 0.9813617290444706, 8);
  sqcRZGate(q, -1.3473463701214368, 8);
  sqcRYGate(q, 1.171413349917177, 9);
  sqcRZGate(q, -0.19761993672496475, 9);
  sqcRYGate(q, -2.4604398274743047, 10);
  sqcRZGate(q, -0.9583177060021554, 10);
  sqcRYGate(q, -0.42292187828588457, 11);
  sqcRZGate(q, -1.862839699337125, 11);
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
  sqcRYGate(q, -2.8822000651575173, 0);
  sqcRZGate(q, -2.813378718382344, 0);
  sqcRYGate(q, 0.9995282287357083, 1);
  sqcRZGate(q, -1.5129878775134025, 1);
  sqcRYGate(q, -0.8176496048742441, 2);
  sqcRZGate(q, -0.7478851600956701, 2);
  sqcRYGate(q, 0.4814547712914692, 3);
  sqcRZGate(q, 0.20949826237444935, 3);
  sqcRYGate(q, -2.925450809703748, 4);
  sqcRZGate(q, -0.6692410394681084, 4);
  sqcRYGate(q, 1.6169425139955724, 5);
  sqcRZGate(q, 3.1013708122621835, 5);
  sqcRYGate(q, -3.1351829795706876, 6);
  sqcRZGate(q, 1.2107214711881786, 6);
  sqcRYGate(q, -2.9024230629808816, 7);
  sqcRZGate(q, 1.2646771893235482, 7);
  sqcRYGate(q, -0.17608631670582753, 8);
  sqcRZGate(q, 1.6003967411807993, 8);
  sqcRYGate(q, 3.1343963899262928, 9);
  sqcRZGate(q, -0.4912288371700449, 9);
  sqcRYGate(q, -0.004669727332837326, 10);
  sqcRZGate(q, -2.4583945767163278, 10);
  sqcRYGate(q, -0.41825529057043465, 11);
  sqcRZGate(q, -1.7938351988595223, 11);
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
  sqcRYGate(q, -1.0004849974540795, 0);
  sqcRZGate(q, -2.8980492859151394, 0);
  sqcRYGate(q, 0.9475536536105383, 1);
  sqcRZGate(q, -0.3260894946434418, 1);
  sqcRYGate(q, -1.9350766788399276, 2);
  sqcRZGate(q, 2.2823869823127425, 2);
  sqcRYGate(q, 1.5717136243120444, 3);
  sqcRZGate(q, -3.141420010731031, 3);
  sqcRYGate(q, -3.141549882445602, 4);
  sqcRZGate(q, -1.487176774100389, 4);
  sqcRYGate(q, 3.1350977965057356, 5);
  sqcRZGate(q, 0.8100707943893638, 5);
  sqcRYGate(q, -3.134322599801638, 6);
  sqcRZGate(q, -2.71044194085722, 6);
  sqcRYGate(q, 0.009726791187203432, 7);
  sqcRZGate(q, 0.12266063927979776, 7);
  sqcRYGate(q, -1.5143823148539783, 8);
  sqcRZGate(q, 2.8926135185233353, 8);
  sqcRYGate(q, -1.6170103170614354, 9);
  sqcRZGate(q, -1.9474371287470964, 9);
  sqcRYGate(q, -1.5366654900677834, 10);
  sqcRZGate(q, 1.048946706705464, 10);
  sqcRYGate(q, -2.960274256877511, 11);
  sqcRZGate(q, -1.339949583484544, 11);
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
  sqcRYGate(q, -1.9746855894677608, 0);
  sqcRZGate(q, -0.18069906007541633, 0);
  sqcRYGate(q, -1.5704728340496574, 1);
  sqcRZGate(q, -3.140379528528154, 1);
  sqcRYGate(q, 1.5713965931168774, 2);
  sqcRZGate(q, -1.5709234266837424, 2);
  sqcRYGate(q, -0.6567692916183594, 3);
  sqcRZGate(q, 3.140596927823149, 3);
  sqcRYGate(q, -0.5563773323360734, 4);
  sqcRZGate(q, 2.84745013152498, 4);
  sqcRYGate(q, -3.140701239992925, 5);
  sqcRZGate(q, 1.7816530709582725, 5);
  sqcRYGate(q, -3.0891192905109306, 6);
  sqcRZGate(q, -1.5443326784676739, 6);
  sqcRYGate(q, -1.4309616106482483, 7);
  sqcRZGate(q, 2.433468444348016, 7);
  sqcRYGate(q, 3.1165918547591867, 8);
  sqcRZGate(q, 1.158236574925252, 8);
  sqcRYGate(q, -3.077856270309539, 9);
  sqcRZGate(q, 0.2762534479204982, 9);
  sqcRYGate(q, 3.1286591253418528, 10);
  sqcRZGate(q, 1.0959886739312772, 10);
  sqcRYGate(q, -0.003369888809905852, 11);
  sqcRZGate(q, -1.9689137175727347, 11);
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
  sqcRYGate(q, 1.79130330145421, 0);
  sqcRZGate(q, 2.6239031576126637, 0);
  sqcRYGate(q, -0.39559223442822533, 1);
  sqcRZGate(q, 1.569591889688092, 1);
  sqcRYGate(q, -1.5711268752598098, 2);
  sqcRZGate(q, 2.773724908980438, 2);
  sqcRYGate(q, -1.5716683166064858, 3);
  sqcRZGate(q, -1.2556777696801555, 3);
  sqcRYGate(q, 3.133891552291241, 4);
  sqcRZGate(q, 2.9849449328733537, 4);
  sqcRYGate(q, -3.1406820930264683, 5);
  sqcRZGate(q, 0.8710565107091028, 5);
  sqcRYGate(q, -3.1396535795983445, 6);
  sqcRZGate(q, 1.3638971432725746, 6);
  sqcRYGate(q, 0.005442884604195619, 7);
  sqcRZGate(q, 0.6949069779118604, 7);
  sqcRYGate(q, 1.5145024736379904, 8);
  sqcRZGate(q, -3.043659174683092, 8);
  sqcRYGate(q, 0.45047333853456273, 9);
  sqcRZGate(q, -1.505147216437412, 9);
  sqcRYGate(q, 0.19990197170434953, 10);
  sqcRZGate(q, 0.6815210910672986, 10);
  sqcRYGate(q, -0.8239434842302309, 11);
  sqcRZGate(q, -1.6752517228178014, 11);
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
  sqcRYGate(q, -4.5023588226701525e-05, 0);
  sqcRZGate(q, -2.44805691206022, 0);
  sqcRYGate(q, 1.5702063262714787, 1);
  sqcRZGate(q, -0.6074424320394294, 1);
  sqcRYGate(q, -3.1405820247974834, 2);
  sqcRZGate(q, 1.696264486523502, 2);
  sqcRYGate(q, -7.341063298049733e-05, 3);
  sqcRZGate(q, 0.00633146630987544, 3);
  sqcRYGate(q, 3.141564230982627, 4);
  sqcRZGate(q, -2.407136535925043, 4);
  sqcRYGate(q, 1.5715811463969753, 5);
  sqcRZGate(q, 0.8692573402542951, 5);
  sqcRYGate(q, -0.008318472110922848, 6);
  sqcRZGate(q, -1.4686816477067488, 6);
  sqcRYGate(q, -2.981451162734264, 7);
  sqcRZGate(q, 0.6900248704713149, 7);
  sqcRYGate(q, 0.007950489560729596, 8);
  sqcRZGate(q, -1.6877333957688343, 8);
  sqcRYGate(q, 3.1382184892954443, 9);
  sqcRZGate(q, 1.665923827345348, 9);
  sqcRYGate(q, -0.004579287845484893, 10);
  sqcRZGate(q, 0.586794541977736, 10);
  sqcRYGate(q, 1.5681078282257714, 11);
  sqcRZGate(q, -0.6179135835808145, 11);

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
