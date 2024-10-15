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

  sqcRYGate(q, -0.07991091167446208, 0);
  sqcRYGate(q, 2.915624875173702, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6166254524328707, 0);
  sqcRYGate(q, 1.4678856869289658, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4614304701646983, 2);
  sqcRYGate(q, -2.8025669416570036, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9811634749048501, 2);
  sqcRYGate(q, -2.9220375590742385, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9464978254082992, 4);
  sqcRYGate(q, 0.7187525542032374, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9961749611987726, 4);
  sqcRYGate(q, -2.1210715658342405, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.58668178442695, 6);
  sqcRYGate(q, -2.264367209654487, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.04305589394502807, 6);
  sqcRYGate(q, -0.32976333341304453, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.225539376626556, 0);
  sqcRYGate(q, -1.4445816627300774, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.853586897078615, 0);
  sqcRYGate(q, 1.3083431795085865, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.12463554613851423, 2);
  sqcRYGate(q, -1.4077840084484121, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.9829475353874075, 2);
  sqcRYGate(q, 2.521448137511395, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.4082710311962137, 4);
  sqcRYGate(q, 2.822561500452763, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.5900155699360665, 4);
  sqcRYGate(q, -1.3988096893857156, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5479997094281022, 1);
  sqcRYGate(q, 0.8871817360562861, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0620667452304189, 1);
  sqcRYGate(q, 1.3551032937470513, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5258105438012686, 3);
  sqcRYGate(q, 0.8590595954345772, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.5444403533583728, 3);
  sqcRYGate(q, -1.024203114082372, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.5147334291205303, 5);
  sqcRYGate(q, -2.1766853373489017, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.006649306155626533, 5);
  sqcRYGate(q, -2.361217267081233, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.610633052437233, 0);
  sqcRYGate(q, 1.6511167691879118, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8428212158433936, 0);
  sqcRYGate(q, -1.7375375354752267, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0947642605584633, 2);
  sqcRYGate(q, 3.045981756468945, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.33533870684129585, 2);
  sqcRYGate(q, -0.1483211240219818, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.026842590016619, 4);
  sqcRYGate(q, -0.541592391449571, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0158986792408446, 4);
  sqcRYGate(q, -3.002195521992844, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5201741196290426, 6);
  sqcRYGate(q, -0.6454714649191233, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6614681523300157, 6);
  sqcRYGate(q, -0.8417726267664483, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0605186538750626, 0);
  sqcRYGate(q, 0.8094994718904568, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0893216338611111, 0);
  sqcRYGate(q, -0.20089502827574887, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.716198243870081, 2);
  sqcRYGate(q, -2.845858775518085, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.2207869402573825, 2);
  sqcRYGate(q, -0.4671145076358094, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.414415775605934, 4);
  sqcRYGate(q, 2.228384516503329, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.0883082496546503, 4);
  sqcRYGate(q, -2.0923932536973844, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.4343354283266199, 1);
  sqcRYGate(q, 0.6189843939568153, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9155434183400881, 1);
  sqcRYGate(q, 2.0086846059625083, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9089666719142844, 3);
  sqcRYGate(q, 0.5171910261020886, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.8904004222907038, 3);
  sqcRYGate(q, 1.1891533208867247, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.9411963977334965, 5);
  sqcRYGate(q, -0.6491374049200823, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.762311433278558, 5);
  sqcRYGate(q, -0.24213210159575663, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.3728196507840607, 0);
  sqcRYGate(q, 0.19532476723283715, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7849144761718225, 0);
  sqcRYGate(q, 2.6989927785900507, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5979717584161044, 2);
  sqcRYGate(q, -1.0427580768653684, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2940865393710106, 2);
  sqcRYGate(q, 0.5426520808397229, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8629553401492434, 4);
  sqcRYGate(q, -0.3581081770291036, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8714424533851332, 4);
  sqcRYGate(q, -1.9170399502773696, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.136175057816107, 6);
  sqcRYGate(q, -0.20177454487298976, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.003835481212847, 6);
  sqcRYGate(q, 0.09101115625687184, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9126354085277635, 0);
  sqcRYGate(q, -0.35001253585839454, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.38579116103350214, 0);
  sqcRYGate(q, -0.27039461822277494, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8303220978469827, 2);
  sqcRYGate(q, -1.864464539388489, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.1801711567548816, 2);
  sqcRYGate(q, -2.6301608113132335, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.3995571414439762, 4);
  sqcRYGate(q, 2.761226600023131, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.34341523516459505, 4);
  sqcRYGate(q, 3.0568852216054463, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.2601645310024603, 1);
  sqcRYGate(q, 2.648247006423895, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.44791053340323383, 1);
  sqcRYGate(q, 0.5595951134287578, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4995329610829566, 3);
  sqcRYGate(q, -2.654890738509698, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.4913938999937653, 3);
  sqcRYGate(q, -2.54811910694805, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.3424313167444586, 5);
  sqcRYGate(q, 1.2159676771624255, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.11882687251359857, 5);
  sqcRYGate(q, -1.3613949278399253, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.680477628673737, 0);
  sqcRYGate(q, -1.3479084631435159, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9166748748571907, 0);
  sqcRYGate(q, -1.8267879412545105, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.299640007529655, 2);
  sqcRYGate(q, 3.1114052247951167, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.200111186467688, 2);
  sqcRYGate(q, -2.3400584336062775, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5199263129222915, 4);
  sqcRYGate(q, 0.4626619647120004, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0390065818377563, 4);
  sqcRYGate(q, 2.0717387026879894, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0732226295388707, 6);
  sqcRYGate(q, -1.1969606356415785, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2967731307391759, 6);
  sqcRYGate(q, 0.6261279628619412, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.455043900906375, 0);
  sqcRYGate(q, -1.6804571144984257, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9288598360080904, 0);
  sqcRYGate(q, -2.392383520909908, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.11007175251859, 2);
  sqcRYGate(q, 0.6938224736901423, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.0617677271072745, 2);
  sqcRYGate(q, 0.10688413965847322, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5181085746728653, 4);
  sqcRYGate(q, -2.6570615719459085, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.0991518476716249, 4);
  sqcRYGate(q, -2.679039580125466, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.7659008206255731, 1);
  sqcRYGate(q, -1.8184331048963251, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5413833364284693, 1);
  sqcRYGate(q, -1.117917915931959, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.22396535825274722, 3);
  sqcRYGate(q, 0.19005818228701798, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.4638893078350801, 3);
  sqcRYGate(q, 2.792666729127635, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.9657518910800987, 5);
  sqcRYGate(q, 0.5104689500877588, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.847234810226629, 5);
  sqcRYGate(q, 2.8777281229496707, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.42084766260651474, 0);
  sqcRYGate(q, 1.3472953058496195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4581640416412784, 0);
  sqcRYGate(q, 1.4350081683404676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0224148648658673, 2);
  sqcRYGate(q, -1.8235899896418255, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.127401145111132, 2);
  sqcRYGate(q, -0.8771840761817469, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7799388020149305, 4);
  sqcRYGate(q, 0.11258375557524675, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.044794103470412044, 4);
  sqcRYGate(q, -0.2635513054972293, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7578133101073803, 6);
  sqcRYGate(q, -1.2659084560371399, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5984904424738418, 6);
  sqcRYGate(q, -0.31097208017663824, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0726071090129348, 0);
  sqcRYGate(q, -2.5211521557664436, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.08754685916648164, 0);
  sqcRYGate(q, -0.5745786702682718, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.944863883932932, 2);
  sqcRYGate(q, 0.46633761698474063, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.6728065218399093, 2);
  sqcRYGate(q, -1.8798485564137202, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.9435363449665468, 4);
  sqcRYGate(q, 0.277970101677283, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.516302673123949, 4);
  sqcRYGate(q, -0.5235731664087808, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.3130129864736153, 1);
  sqcRYGate(q, 1.8705399354638086, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.228606732016578, 1);
  sqcRYGate(q, 1.259356433383385, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1364978012928617, 3);
  sqcRYGate(q, -0.16293642574982758, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.9122880650207628, 3);
  sqcRYGate(q, 2.397805218182581, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.4869413002250556, 5);
  sqcRYGate(q, 3.1189286771377445, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.8917946312373664, 5);
  sqcRYGate(q, 1.7063784790426888, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.0690248834147678, 0);
  sqcRYGate(q, -2.719976506102427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.464243676948473, 0);
  sqcRYGate(q, 2.0615812560997924, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7937664893867868, 2);
  sqcRYGate(q, 0.222872323461936, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.436968879814791, 2);
  sqcRYGate(q, -1.606729784568119, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.615267088754314, 4);
  sqcRYGate(q, -2.8306904837892417, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.665276694179423, 4);
  sqcRYGate(q, -1.4063428109697347, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.693857117857342, 6);
  sqcRYGate(q, 2.483126160086504, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3924680702593553, 6);
  sqcRYGate(q, -0.667183544261002, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6022794545747265, 0);
  sqcRYGate(q, -1.7848724087668844, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.904548436652521, 0);
  sqcRYGate(q, 1.7625818894034548, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.480939439989813, 2);
  sqcRYGate(q, -2.9933520970605785, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.4859458719954954, 2);
  sqcRYGate(q, 1.2102189005844355, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.674028279140984, 4);
  sqcRYGate(q, -2.788550137498967, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.9342463109261123, 4);
  sqcRYGate(q, -0.5378185878760566, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.398041921049043, 1);
  sqcRYGate(q, 0.2943415195785214, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.120194726207426, 1);
  sqcRYGate(q, 2.870249280756965, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8661228702907344, 3);
  sqcRYGate(q, -0.6238458221911198, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.43882888681264465, 3);
  sqcRYGate(q, -1.308258013246843, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.675515931754421, 5);
  sqcRYGate(q, 1.4865105237338674, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.8896625703202434, 5);
  sqcRYGate(q, 2.74992567613476, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.0931064693863617, 0);
  sqcRYGate(q, 0.7427800629703964, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.868113417169786, 0);
  sqcRYGate(q, -0.7219708702560695, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6183377985712815, 2);
  sqcRYGate(q, 3.1194891536736047, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.627637592624235, 2);
  sqcRYGate(q, 1.9437626085380948, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.06674387608093879, 4);
  sqcRYGate(q, -1.206576557016663, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.16416472842263344, 4);
  sqcRYGate(q, 0.28400303310319885, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.297678085995652, 6);
  sqcRYGate(q, 1.0009360987529838, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8625671931899952, 6);
  sqcRYGate(q, -1.2511084953340255, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7285449977793919, 0);
  sqcRYGate(q, -1.6172496081460712, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1450971620418864, 0);
  sqcRYGate(q, 1.2801800468095503, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4851186144666433, 2);
  sqcRYGate(q, -0.7412857023315542, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.45231712115353684, 2);
  sqcRYGate(q, 1.9107302751349744, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.6443959419568346, 4);
  sqcRYGate(q, 2.8403364776764506, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.6917581760232467, 4);
  sqcRYGate(q, -0.7304040801460858, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.4789383605641957, 1);
  sqcRYGate(q, 1.7599681318956732, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.24020610173176496, 1);
  sqcRYGate(q, 1.142500180760425, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5196651052396577, 3);
  sqcRYGate(q, 1.3782011893713917, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.1049061957453694, 3);
  sqcRYGate(q, -1.5908026578421481, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.1425062234208014, 5);
  sqcRYGate(q, 3.1175754694034246, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.2246262017281455, 5);
  sqcRYGate(q, -0.05371088254577039, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.0924532208017084, 0);
  sqcRYGate(q, -0.27123547402115644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1070377673060463, 0);
  sqcRYGate(q, -2.552301527084656, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.35938541341851, 2);
  sqcRYGate(q, -1.8664315617420637, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8819164725251945, 2);
  sqcRYGate(q, -2.64418367672999, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1401753778557735, 4);
  sqcRYGate(q, -2.125872251098955, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8762850918139298, 4);
  sqcRYGate(q, 0.8691229819509788, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8087973837335123, 6);
  sqcRYGate(q, 2.802601249675341, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3114319279077131, 6);
  sqcRYGate(q, -3.101136127603233, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.514384281809499, 0);
  sqcRYGate(q, 3.0592753224812066, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8278266149498571, 0);
  sqcRYGate(q, 0.17434771421166673, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5745549113935016, 2);
  sqcRYGate(q, 0.9373976094315504, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.301176128925392, 2);
  sqcRYGate(q, 0.5240609307450104, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.09984846010086165, 4);
  sqcRYGate(q, 1.2373068950930366, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.651375735325041, 4);
  sqcRYGate(q, -2.7729358706420206, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.9806557905552, 1);
  sqcRYGate(q, 1.487897413438371, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4943950160958424, 1);
  sqcRYGate(q, 1.4264889823379483, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8996089436042345, 3);
  sqcRYGate(q, -2.1543907649698175, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.4024946082653704, 3);
  sqcRYGate(q, 1.9489211159317066, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.5790656260192577, 5);
  sqcRYGate(q, 0.0983928559817011, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.2044863497368405, 5);
  sqcRYGate(q, 2.433287539942189, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.9318100511668197, 0);
  sqcRYGate(q, -2.9102757841402678, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8671121895429035, 0);
  sqcRYGate(q, 2.129728336408026, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6872329418254615, 2);
  sqcRYGate(q, 1.34155648595471, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8302613980986551, 2);
  sqcRYGate(q, -1.7367376352083, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2453628238789713, 4);
  sqcRYGate(q, 2.775367157980091, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.23274399010959126, 4);
  sqcRYGate(q, 2.634754647751689, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0670777921130137, 6);
  sqcRYGate(q, -2.9726797782714995, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.07085553246289233, 6);
  sqcRYGate(q, 0.4760482580149131, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.549519730248553, 0);
  sqcRYGate(q, 0.1693675245005401, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.083923305808392, 0);
  sqcRYGate(q, -2.993093662279286, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.050329210144884, 2);
  sqcRYGate(q, -1.8036368771392501, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.1251823041814826, 2);
  sqcRYGate(q, -0.38793333002009245, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.20861494129166908, 4);
  sqcRYGate(q, 1.247164665467288, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.6546931105724099, 4);
  sqcRYGate(q, 0.2569634561355879, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.3105140042798094, 1);
  sqcRYGate(q, 1.1236137023819799, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8659850001832804, 1);
  sqcRYGate(q, 2.577068462042883, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6321279562389135, 3);
  sqcRYGate(q, 2.6665905376555683, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.8328692874403094, 3);
  sqcRYGate(q, 1.3813774468445246, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.6396420250139125, 5);
  sqcRYGate(q, -3.1181849503253947, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.4911758295413948, 5);
  sqcRYGate(q, 2.9043544172349716, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.0641991158332802, 0);
  sqcRYGate(q, 1.282785652231433, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5109300457198378, 0);
  sqcRYGate(q, 1.2967503628589794, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5333559634431553, 2);
  sqcRYGate(q, 1.3886176876527585, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.23532563921931451, 2);
  sqcRYGate(q, -1.0854694413843478, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1388753825191364, 4);
  sqcRYGate(q, 1.6021445906848482, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.049237213614657, 4);
  sqcRYGate(q, 1.348151013984345, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.08298923196805941, 6);
  sqcRYGate(q, -1.5359998642427515, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2241208249135154, 6);
  sqcRYGate(q, -1.7483603572737616, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0824558965531508, 0);
  sqcRYGate(q, 2.0870715845970818, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7932233991973003, 0);
  sqcRYGate(q, -3.13167999363889, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.1013577027010863, 2);
  sqcRYGate(q, 1.6146950951501404, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.0874359043971695, 2);
  sqcRYGate(q, -2.0537367045179407, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.10493777222101, 4);
  sqcRYGate(q, 1.932924879592439, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.6585760134568609, 4);
  sqcRYGate(q, -1.3847747278598408, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.04109454693047486, 1);
  sqcRYGate(q, 2.6175112878787457, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.10986533915770912, 1);
  sqcRYGate(q, -1.8364063555062706, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5915714595547445, 3);
  sqcRYGate(q, -2.321786546222456, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.8357660876466118, 3);
  sqcRYGate(q, 1.6667577802425717, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.32624447921503297, 5);
  sqcRYGate(q, 2.0389230517169543, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5098055795142082, 5);
  sqcRYGate(q, -0.3199945768867849, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.02593622430894626, 0);
  sqcRYGate(q, 2.420089145551508, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7017280244223675, 0);
  sqcRYGate(q, -0.08262121135048835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0785682385060256, 2);
  sqcRYGate(q, 0.327162947250649, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5214592779420286, 2);
  sqcRYGate(q, 1.8994783960875914, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.528430268189137, 4);
  sqcRYGate(q, -0.7261569801021182, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.22842797855081276, 4);
  sqcRYGate(q, -0.284095523651958, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.0656752168420012, 6);
  sqcRYGate(q, 2.1444927714835567, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.882918732093993, 6);
  sqcRYGate(q, 2.6745760927402804, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1633344185128554, 0);
  sqcRYGate(q, -1.5285084010558825, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.135203099889116, 0);
  sqcRYGate(q, 1.8279677132172338, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4943404477755833, 2);
  sqcRYGate(q, -2.2472082921739154, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.181875155756099, 2);
  sqcRYGate(q, -1.0063548018943642, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.7630712806007685, 4);
  sqcRYGate(q, 1.4163399042028884, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.6986951813311943, 4);
  sqcRYGate(q, 2.4288430604422104, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.9541665472689973, 1);
  sqcRYGate(q, -0.1898024553106611, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7947893393820977, 1);
  sqcRYGate(q, -2.546689897459059, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.29908849837398177, 3);
  sqcRYGate(q, 0.8095627315787475, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.726762285271946, 3);
  sqcRYGate(q, 0.7788067103135445, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.4259369711021423, 5);
  sqcRYGate(q, -0.5898592449807873, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.14443513880610637, 5);
  sqcRYGate(q, 2.908331205711391, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.8334695828820364, 0);
  sqcRYGate(q, 0.4520898170224382, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9479621630647497, 0);
  sqcRYGate(q, -0.02083467079016632, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8526582101305062, 2);
  sqcRYGate(q, 2.77753138596227, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4645633544228192, 2);
  sqcRYGate(q, -0.24734079215274996, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.719314431935946, 4);
  sqcRYGate(q, 0.8931190786134016, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.37180538662729923, 4);
  sqcRYGate(q, -1.3636558895154778, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8966482317690456, 6);
  sqcRYGate(q, -2.0762708778725365, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.290475631366665, 6);
  sqcRYGate(q, -2.7297987163062722, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1485745469676232, 0);
  sqcRYGate(q, -2.5899528633063347, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4788268130719384, 0);
  sqcRYGate(q, -2.948782096295152, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4754638479055433, 2);
  sqcRYGate(q, 1.1806047318599013, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.7249066130021546, 2);
  sqcRYGate(q, 0.7829280211530971, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.9881283148980194, 4);
  sqcRYGate(q, -0.5033797844317174, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.5070658767671761, 4);
  sqcRYGate(q, 1.2543661893831777, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.751184140244372, 1);
  sqcRYGate(q, -1.2089220055556515, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.650868546215329, 1);
  sqcRYGate(q, 3.055876866916857, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.07546647314860461, 3);
  sqcRYGate(q, -2.3494883720074844, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.6393254662171435, 3);
  sqcRYGate(q, 0.22039210545135912, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.2953219860250407, 5);
  sqcRYGate(q, -0.8035599841185196, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.3499782233531956, 5);
  sqcRYGate(q, -2.4584332264013002, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.8634374141986951, 0);
  sqcRYGate(q, 0.23522112661130468, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7228336907808357, 0);
  sqcRYGate(q, 2.9518971393231435, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.11373767244158, 2);
  sqcRYGate(q, 0.16796285208941122, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7226896452226295, 2);
  sqcRYGate(q, 0.8448162624942241, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0191713759246273, 4);
  sqcRYGate(q, -1.3103633951191893, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1885075663958298, 4);
  sqcRYGate(q, 1.783315597604851, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6065958827185653, 6);
  sqcRYGate(q, 2.3781861160248527, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8701740883974662, 6);
  sqcRYGate(q, 1.4170756423255861, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.857706152927135, 0);
  sqcRYGate(q, 0.5204876872125962, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.097628154924708, 0);
  sqcRYGate(q, 2.7085201836223254, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.13459265517426997, 2);
  sqcRYGate(q, 2.7408885360471142, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.2663751097180176, 2);
  sqcRYGate(q, -2.1411734149611643, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.667195583384312, 4);
  sqcRYGate(q, 1.3054509480276675, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.4910927263881484, 4);
  sqcRYGate(q, 1.5902480230978193, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.2546657904539309, 1);
  sqcRYGate(q, -2.561144836576003, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8944629529129301, 1);
  sqcRYGate(q, -2.511422089305952, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.490023003027402, 3);
  sqcRYGate(q, -0.4426924315421008, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.8214444450469633, 3);
  sqcRYGate(q, -1.1225286375683425, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.09935602859027, 5);
  sqcRYGate(q, 1.0801866569850247, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.139621598639887, 5);
  sqcRYGate(q, -0.7746874797165386, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.4717009045249445, 0);
  sqcRYGate(q, 2.2189590403870305, 1);
  sqcRYGate(q, 2.222940951914362, 2);
  sqcRYGate(q, 1.214308928700592, 3);
  sqcRYGate(q, 1.1261817712870328, 4);
  sqcRYGate(q, 1.6363306932350348, 5);
  sqcRYGate(q, -2.4492511006197697, 6);
  sqcRYGate(q, -2.0996025505618094, 7);

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
