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

  sqcRYGate(q, -1.239454316117365, 0);
  sqcRYGate(q, -1.3658697842029248, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0874094374817487, 0);
  sqcRYGate(q, 0.2267076688403522, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.34211850675534805, 2);
  sqcRYGate(q, 0.5434664958984019, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2281037935422745, 2);
  sqcRYGate(q, 0.22185920057280306, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.364503213280285, 4);
  sqcRYGate(q, -2.3334864453408413, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.989972118116657, 4);
  sqcRYGate(q, -1.7251225898010933, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8891556484812955, 6);
  sqcRYGate(q, 2.476308186850108, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.548072269432498, 6);
  sqcRYGate(q, -0.672145064242196, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.11347742425197552, 8);
  sqcRYGate(q, 0.46084063001233405, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.7582570482808344, 8);
  sqcRYGate(q, -1.544845325779347, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.538991403635083, 10);
  sqcRYGate(q, -2.257715179500842, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.441612444628158, 10);
  sqcRYGate(q, 2.5127448152242944, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.3739424476839377, 1);
  sqcRYGate(q, 0.857278138556524, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6476640337254764, 1);
  sqcRYGate(q, -2.6319889459115964, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4179002952879858, 3);
  sqcRYGate(q, -1.7331333220498844, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0181388833086826, 3);
  sqcRYGate(q, 2.989557816531508, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.25024022054562034, 5);
  sqcRYGate(q, -0.21936600305680629, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1153038479181934, 5);
  sqcRYGate(q, 0.41531673513099404, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.966963742534498, 7);
  sqcRYGate(q, 2.6918987778010903, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.09495868672974256, 7);
  sqcRYGate(q, -0.025704366379025564, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.3204807305761617, 9);
  sqcRYGate(q, -2.056471323610603, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.4489179757325443, 9);
  sqcRYGate(q, 0.4327153065240665, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.01538787530354746, 0);
  sqcRYGate(q, 2.742733136883459, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.05114393077542101, 0);
  sqcRYGate(q, 1.3606372650116862, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4695672655858725, 2);
  sqcRYGate(q, 1.7359341020258219, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.49764208221633766, 2);
  sqcRYGate(q, 0.6928388883239546, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0095899517030649, 4);
  sqcRYGate(q, -2.0666889078447603, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6404394395124116, 4);
  sqcRYGate(q, -1.6593292658578076, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6962249194859984, 6);
  sqcRYGate(q, 0.7939265653096899, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.870459641327364, 6);
  sqcRYGate(q, 2.919920248154587, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6795397017946971, 8);
  sqcRYGate(q, -0.2114005331981259, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5437279297258903, 8);
  sqcRYGate(q, 1.551558876696309, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.5374528377558856, 10);
  sqcRYGate(q, -2.2519252353778545, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.5079177348495163, 10);
  sqcRYGate(q, 0.582930563793921, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.36602018859441093, 1);
  sqcRYGate(q, -1.9776586109257943, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.136787593357588, 1);
  sqcRYGate(q, 2.7058587715353615, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8704169490340137, 3);
  sqcRYGate(q, -0.18530267534178613, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.01863250811956815, 3);
  sqcRYGate(q, -0.0012372372172082535, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.645828960459788, 5);
  sqcRYGate(q, 0.6140138296691598, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2627705410746815, 5);
  sqcRYGate(q, -1.56610236824509, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8185596743704622, 7);
  sqcRYGate(q, -0.6124841870636645, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.081429214480947, 7);
  sqcRYGate(q, -3.1396190998019975, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.7116794757645409, 9);
  sqcRYGate(q, -0.6394939467522308, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.3840891258573456, 9);
  sqcRYGate(q, 1.9478958941285547, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.8824684683965452, 0);
  sqcRYGate(q, -0.8528342537416951, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6111537639862783, 0);
  sqcRYGate(q, -0.37079414010090256, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.657203893258193, 2);
  sqcRYGate(q, -0.5636491855202896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.773107052926313, 2);
  sqcRYGate(q, -0.6246204650413585, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5285381461295238, 4);
  sqcRYGate(q, 2.718257235448151, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9037064521672862, 4);
  sqcRYGate(q, -2.910008297544619, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.204157332249331, 6);
  sqcRYGate(q, 1.2451661236588216, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.196311384718361, 6);
  sqcRYGate(q, -3.130461504285522, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7240221652855237, 8);
  sqcRYGate(q, -2.9303304768402234, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.2740044331600613, 8);
  sqcRYGate(q, -0.3280699948026111, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.0406340910307215, 10);
  sqcRYGate(q, 0.7602349441367195, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.398696441053379, 10);
  sqcRYGate(q, -0.3107976674371142, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.8428229544579988, 1);
  sqcRYGate(q, -0.7483059541903802, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6507118962463283, 1);
  sqcRYGate(q, 1.4993128316580302, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2232239424310707, 3);
  sqcRYGate(q, 2.55825110446283, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.037957629935644825, 3);
  sqcRYGate(q, 0.15983904828958506, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7384546061796615, 5);
  sqcRYGate(q, -2.4655268229610323, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8902492681120711, 5);
  sqcRYGate(q, 1.2825064423917727, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.040420097873411, 7);
  sqcRYGate(q, 0.7129526777079809, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.9333505849845474, 7);
  sqcRYGate(q, -0.000596295694298199, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5062889810460938, 9);
  sqcRYGate(q, -0.956374919597363, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6593394254196256, 9);
  sqcRYGate(q, 3.068228221209917, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.1568015290151506, 0);
  sqcRYGate(q, 2.7077013623444888, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0591034261701875, 0);
  sqcRYGate(q, -1.5138168867971071, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4740418778611672, 2);
  sqcRYGate(q, -0.5403905178118171, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.017706964186121, 2);
  sqcRYGate(q, 2.6727335208329817, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7524610378169887, 4);
  sqcRYGate(q, 2.993412645103933, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2135673519835835, 4);
  sqcRYGate(q, 1.100178689601271, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.677929735124474, 6);
  sqcRYGate(q, 3.092660003495279, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3971265272876225, 6);
  sqcRYGate(q, -1.1621854901482989, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8749321981365757, 8);
  sqcRYGate(q, -1.837609775656711, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.9338397815717725, 8);
  sqcRYGate(q, -0.2892514072991421, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.32642661218614055, 10);
  sqcRYGate(q, -2.9608737829308787, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0521061572619395, 10);
  sqcRYGate(q, -2.8736052247599666, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.08233573846343047, 1);
  sqcRYGate(q, -1.4787406452904583, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.971196748481473, 1);
  sqcRYGate(q, 2.93395984179385, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.598781155122955, 3);
  sqcRYGate(q, 2.8450333788570945, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.931056362945656, 3);
  sqcRYGate(q, -3.1276570750011707, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7246386204539714, 5);
  sqcRYGate(q, 0.9592156640467512, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2605587739121392, 5);
  sqcRYGate(q, 2.657696759023011, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7514792523623943, 7);
  sqcRYGate(q, 1.629246048146884, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.47022151125562056, 7);
  sqcRYGate(q, -1.344540571520783, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.651098813011529, 9);
  sqcRYGate(q, -1.409451381762147, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.23105841346068, 9);
  sqcRYGate(q, -0.9275224927016991, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.9318813984910235, 0);
  sqcRYGate(q, -0.904936464513681, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.11127124762867259, 0);
  sqcRYGate(q, -0.4939644999767116, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2442736953696198, 2);
  sqcRYGate(q, 1.5592680702808268, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.04259673873731185, 2);
  sqcRYGate(q, -0.7557463821345998, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6629262726011156, 4);
  sqcRYGate(q, -3.1056109571188046, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8440600086811987, 4);
  sqcRYGate(q, -2.785573950786081, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5237821305889923, 6);
  sqcRYGate(q, -1.4456380266038558, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3774862940373484, 6);
  sqcRYGate(q, 0.1376958583062764, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.637475061207228, 8);
  sqcRYGate(q, -0.5939386235845329, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.156204834659418, 8);
  sqcRYGate(q, 2.9797573275841485, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.32970766694800907, 10);
  sqcRYGate(q, -0.05101008482811171, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.5026034433023736, 10);
  sqcRYGate(q, -3.057151893806068, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.358627695866824, 1);
  sqcRYGate(q, -1.5074564606950203, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10629861521651512, 1);
  sqcRYGate(q, 0.6458891305987309, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9411323558739273, 3);
  sqcRYGate(q, -2.949654454953173, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3478748247590513, 3);
  sqcRYGate(q, -0.0014643512861795788, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5778894328140387, 5);
  sqcRYGate(q, -0.9921980881994797, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.11331825035380218, 5);
  sqcRYGate(q, 3.060365883222267, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5897940521083561, 7);
  sqcRYGate(q, -0.2229059407248135, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.054581461341430604, 7);
  sqcRYGate(q, 2.9961300056541544, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.8708169572544944, 9);
  sqcRYGate(q, -2.353580824764991, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.1030799921707093, 9);
  sqcRYGate(q, 2.3315706444327744, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.323034607513017, 0);
  sqcRYGate(q, 0.2365280156203005, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.013749785606040907, 0);
  sqcRYGate(q, 0.9222249388427999, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3441841488950939, 2);
  sqcRYGate(q, -2.898174756201281, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.32023276274777057, 2);
  sqcRYGate(q, 2.489981123870591, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.210956564178443, 4);
  sqcRYGate(q, -1.653386090691547, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6391093921481256, 4);
  sqcRYGate(q, -1.6350676528412011, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.565619790859343, 6);
  sqcRYGate(q, -2.6098835941142324, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4000310437682942, 6);
  sqcRYGate(q, 0.056953770768712, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.755571802430203, 8);
  sqcRYGate(q, 2.9862229452329276, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9821371063947648, 8);
  sqcRYGate(q, -1.3301337073999073, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.6425593709642845, 10);
  sqcRYGate(q, 2.8692168668445013, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.1301923353634074, 10);
  sqcRYGate(q, -0.7835875051522923, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.0037797258606522, 1);
  sqcRYGate(q, 0.1621072525252938, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.076739395646656, 1);
  sqcRYGate(q, 0.4040567290697732, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0219601034285173, 3);
  sqcRYGate(q, 0.1726545800805559, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.808883702739487, 3);
  sqcRYGate(q, -0.008813939990615083, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9434881241104593, 5);
  sqcRYGate(q, 0.5947088206851204, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.772535951737699, 5);
  sqcRYGate(q, 2.0893850291382225, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.40469560995217, 7);
  sqcRYGate(q, 1.5842535918477376, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.9247632306503634, 7);
  sqcRYGate(q, 1.53453693873426, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.4544662247993037, 9);
  sqcRYGate(q, 1.7656560648329995, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.7528124150213217, 9);
  sqcRYGate(q, -2.150007101973216, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.1817937858714256, 0);
  sqcRYGate(q, 2.3307018947297666, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.635231243464851, 0);
  sqcRYGate(q, 1.161804060705598, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.272301857134358, 2);
  sqcRYGate(q, -3.119783915470329, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07986911928167473, 2);
  sqcRYGate(q, 2.176108247837161, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1443561241443816, 4);
  sqcRYGate(q, 1.1494539639479733, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4576480910134845, 4);
  sqcRYGate(q, -0.21563309580606482, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.12525900244350985, 6);
  sqcRYGate(q, -1.5184415524595052, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.019973721834548767, 6);
  sqcRYGate(q, 0.009419620516340679, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1211713933961676, 8);
  sqcRYGate(q, -1.737516310931963, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.46003117557863415, 8);
  sqcRYGate(q, -0.7947565456825697, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.6760110970856665, 10);
  sqcRYGate(q, -0.8205067886003107, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.088753314302573, 10);
  sqcRYGate(q, 1.3082645967005462, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5406583141483825, 1);
  sqcRYGate(q, 0.9514495718383313, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.03933402182540391, 1);
  sqcRYGate(q, 0.4811929871573577, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7195846796200387, 3);
  sqcRYGate(q, -1.487324065641264, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.374831606507885, 3);
  sqcRYGate(q, 1.2564376699275979, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.34912841159139596, 5);
  sqcRYGate(q, -0.08858838494030968, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5108445023541686, 5);
  sqcRYGate(q, -2.803291035195121, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0846266215329563, 7);
  sqcRYGate(q, 1.1708366602568947, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.9057201328248343, 7);
  sqcRYGate(q, 3.1037527366510234, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.6216635816800457, 9);
  sqcRYGate(q, -2.5034615935918683, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.956540463676311, 9);
  sqcRYGate(q, -3.140510129918001, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.3081342541327547, 0);
  sqcRYGate(q, -0.8656430414492818, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0683907096830667, 0);
  sqcRYGate(q, 0.031790818438179436, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4538761868925567, 2);
  sqcRYGate(q, 1.4990054955164254, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.781457159280322, 2);
  sqcRYGate(q, -2.6085597696797738, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0852172676106564, 4);
  sqcRYGate(q, -2.8687647530134988, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6717416574128492, 4);
  sqcRYGate(q, 3.11214337129376, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4792799801313472, 6);
  sqcRYGate(q, -1.0735621153397021, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0552026008648236, 6);
  sqcRYGate(q, -1.2865274755014848, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7168383341514566, 8);
  sqcRYGate(q, 1.9550564754507613, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.2449333603014199, 8);
  sqcRYGate(q, -1.9972099790399689, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.3848879295760649, 10);
  sqcRYGate(q, -2.7469318410572936, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.03398093401660507, 10);
  sqcRYGate(q, 1.8237677982341376, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.538788109275928, 1);
  sqcRYGate(q, 1.688391831978083, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.302353045272237, 1);
  sqcRYGate(q, 0.620637628468943, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.069702217056734, 3);
  sqcRYGate(q, -1.0968023557241227, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1347581867116787, 3);
  sqcRYGate(q, 2.798270117782703, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8042873823674128, 5);
  sqcRYGate(q, 0.5649299320918981, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.01724283249797208, 5);
  sqcRYGate(q, -0.009695119459933987, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5024223066331681, 7);
  sqcRYGate(q, -0.06372770371802972, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.13454146672643, 7);
  sqcRYGate(q, -0.5523167240381914, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.9888229890906275, 9);
  sqcRYGate(q, -1.9864111436921281, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.8664768987726637, 9);
  sqcRYGate(q, -3.107958133484965, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.0126609447195563, 0);
  sqcRYGate(q, 0.5822707205770934, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2936083413531658, 0);
  sqcRYGate(q, -0.16299482036586, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.593745987368246, 2);
  sqcRYGate(q, 1.9413512117763512, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.290121738424667, 2);
  sqcRYGate(q, 1.1764035775781334, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7541632314147698, 4);
  sqcRYGate(q, 2.73940958041279, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2564880087156225, 4);
  sqcRYGate(q, -3.131158052918231, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7331350343670957, 6);
  sqcRYGate(q, 0.9977482946577334, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7791678938909614, 6);
  sqcRYGate(q, -0.7704685663879339, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.42123873592198446, 8);
  sqcRYGate(q, 2.6939300631250003, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.9036881260243772, 8);
  sqcRYGate(q, 0.31815761479603033, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.2512129623712875, 10);
  sqcRYGate(q, 0.6666375874144717, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.0203954521666616, 10);
  sqcRYGate(q, 0.07725402597028677, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5887645604156804, 1);
  sqcRYGate(q, -1.0485207539497041, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.773987180972675, 1);
  sqcRYGate(q, -2.7231033578214814, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2176724439766295, 3);
  sqcRYGate(q, 2.3451604649051974, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.11104233235016903, 3);
  sqcRYGate(q, 2.4436400317735107, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.401671469230709, 5);
  sqcRYGate(q, -2.789668487443496, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.137265379389786, 5);
  sqcRYGate(q, 0.0002054003937725923, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3771695529449106, 7);
  sqcRYGate(q, 0.9618219727211778, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1065182631999195, 7);
  sqcRYGate(q, -3.066402274426613, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.8175106144761326, 9);
  sqcRYGate(q, 1.7980753110988925, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.23131159700065052, 9);
  sqcRYGate(q, -0.036114760016046965, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.774414665657295, 0);
  sqcRYGate(q, 2.4401444979375384, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7533457597937172, 0);
  sqcRYGate(q, 0.03428877437315947, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0862424116663405, 2);
  sqcRYGate(q, -2.9536250383738754, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.13293438399137, 2);
  sqcRYGate(q, 3.138368948573019, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6126596205956574, 4);
  sqcRYGate(q, -0.8381457027350722, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2364392403866, 4);
  sqcRYGate(q, 0.1536502735601089, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4732430689369447, 6);
  sqcRYGate(q, 1.9512200417629684, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.886535263787672, 6);
  sqcRYGate(q, 1.2414931679158228, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.24976588744508, 8);
  sqcRYGate(q, 0.7915001449996042, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.9972849118684803, 8);
  sqcRYGate(q, -0.9928483016750729, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.0606463215212065, 10);
  sqcRYGate(q, -1.3477273695861602, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.133355753951794, 10);
  sqcRYGate(q, -2.0797073629659657, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.38615937167037023, 1);
  sqcRYGate(q, 3.1197890916598445, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.566239381582815, 1);
  sqcRYGate(q, -2.81006479026228, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5771263957445054, 3);
  sqcRYGate(q, 2.0373345159032654, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.727187600600943, 3);
  sqcRYGate(q, 2.98723118542342, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2556075749787272, 5);
  sqcRYGate(q, 0.1330622811886289, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.138908492667681, 5);
  sqcRYGate(q, 3.1378818077585064, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0423120294298953, 7);
  sqcRYGate(q, 1.603375814828197, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.570370738924948, 7);
  sqcRYGate(q, 0.009707291294134137, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.625252198485251, 9);
  sqcRYGate(q, -2.4436782634744625, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.8459152546277862, 9);
  sqcRYGate(q, 2.155708587260693, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.615333971144294, 0);
  sqcRYGate(q, 2.678855290611362, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.39801764905760784, 0);
  sqcRYGate(q, 0.9825665648726627, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8358183695892336, 2);
  sqcRYGate(q, 0.046931096597375606, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.03513832243006477, 2);
  sqcRYGate(q, -3.139906392487786, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6277954546136835, 4);
  sqcRYGate(q, 0.47250898265761737, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.057065117004268, 4);
  sqcRYGate(q, -1.441139667328458, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4165777001209827, 6);
  sqcRYGate(q, 2.861798292712479, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6904616715865796, 6);
  sqcRYGate(q, -2.1304593623077652, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.31229635682440376, 8);
  sqcRYGate(q, 1.5491946424835081, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.2800550933633739, 8);
  sqcRYGate(q, 1.99523262919612, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.1270886194080676, 10);
  sqcRYGate(q, 0.4574334254609411, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.2475986493915476, 10);
  sqcRYGate(q, -3.073867015979381, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.0904731323659416, 1);
  sqcRYGate(q, -2.8454480167580654, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.922771518341911, 1);
  sqcRYGate(q, 1.6791473389794787, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.171844172776312, 3);
  sqcRYGate(q, -0.9789040374336286, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7226764639386136, 3);
  sqcRYGate(q, -2.526721741155286, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6521635634083403, 5);
  sqcRYGate(q, 1.679065666386253, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0262056570599793, 5);
  sqcRYGate(q, 0.7131807469463389, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9762996232362826, 7);
  sqcRYGate(q, 0.46599330857075905, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.025997233777205444, 7);
  sqcRYGate(q, 0.0055469345139300685, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.8378650891298337, 9);
  sqcRYGate(q, 0.8361162090981346, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.2851064928322375, 9);
  sqcRYGate(q, -3.133792333574554, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.62491605138542, 0);
  sqcRYGate(q, -1.6884211416666146, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5522114580299595, 0);
  sqcRYGate(q, -0.5346984238266401, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.692862881767498, 2);
  sqcRYGate(q, -1.7673450650727744, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0610064842929816, 2);
  sqcRYGate(q, -3.1390848150900252, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1286672704259724, 4);
  sqcRYGate(q, 2.6289511741960716, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.003212041273883415, 4);
  sqcRYGate(q, 3.1166270929908095, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4793363040111844, 6);
  sqcRYGate(q, -2.2683606514359065, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7787166000946284, 6);
  sqcRYGate(q, 0.9160255284790492, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.08970769761083, 8);
  sqcRYGate(q, -2.6839870778482386, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5115049359042345, 8);
  sqcRYGate(q, -0.2868590355807374, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.503718234557185, 10);
  sqcRYGate(q, 2.657783275306185, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.3256689093420295, 10);
  sqcRYGate(q, -3.0750141923679486, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.6088551626213103, 1);
  sqcRYGate(q, -0.34050722727678995, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6480986456221682, 1);
  sqcRYGate(q, -3.0680452695856983, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7028156594756263, 3);
  sqcRYGate(q, -0.007028115720217443, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4443815198483936, 3);
  sqcRYGate(q, 2.1175584547935564, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2049237664841934, 5);
  sqcRYGate(q, 1.6971406918674958, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3187210969004184, 5);
  sqcRYGate(q, 3.0915587086565455, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6375262903786147, 7);
  sqcRYGate(q, 1.9059792298001974, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.01679034062746876, 7);
  sqcRYGate(q, -3.0665540177972543, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.5741072931538589, 9);
  sqcRYGate(q, 1.1544988962901108, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.006059773374128406, 9);
  sqcRYGate(q, 0.006821329631545581, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.35674545067632124, 0);
  sqcRYGate(q, 0.8180958271684675, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.37486137423366733, 0);
  sqcRYGate(q, 1.6751156003309502, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.935942831977149, 2);
  sqcRYGate(q, 3.0158681024705407, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.994487690165541, 2);
  sqcRYGate(q, -2.232622515606704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10282153593530907, 4);
  sqcRYGate(q, -2.9128980553767305, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.020522682253805154, 4);
  sqcRYGate(q, 3.0909418422806914, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7551923290076408, 6);
  sqcRYGate(q, 0.4891837020557226, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.036177623857344805, 6);
  sqcRYGate(q, 2.5813987277306776, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3561207097299566, 8);
  sqcRYGate(q, 0.13934619027824546, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5274814046188654, 8);
  sqcRYGate(q, 1.4314341193313849, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.9013126561442136, 10);
  sqcRYGate(q, -2.349363209704886, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.115649445927922, 10);
  sqcRYGate(q, 3.091745985775448, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.9882878397423217, 1);
  sqcRYGate(q, -0.770027060252314, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1157256110909506, 1);
  sqcRYGate(q, -3.0376511427113315, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.389577721599861, 3);
  sqcRYGate(q, -3.0988797448264105, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.393302416418822, 3);
  sqcRYGate(q, -3.13173544078606, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4059654968867453, 5);
  sqcRYGate(q, 2.1221971806570266, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.929015706110182, 5);
  sqcRYGate(q, -0.34645201468605347, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.149460949116704, 7);
  sqcRYGate(q, 0.04909813189983758, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.11610931365037835, 7);
  sqcRYGate(q, -1.1682675047468276, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.41428773493426124, 9);
  sqcRYGate(q, 1.0412389099769381, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.4175997370460136, 9);
  sqcRYGate(q, 0.14143770280228463, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5928702956541771, 0);
  sqcRYGate(q, -0.5459438704426537, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2793890014388322, 0);
  sqcRYGate(q, 1.6627563532988336, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.982030003172627, 2);
  sqcRYGate(q, -0.3321958439330741, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.11803505744474539, 2);
  sqcRYGate(q, 3.0415860817793483, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1329274951815833, 4);
  sqcRYGate(q, -0.05500119499804246, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.187603541462639, 4);
  sqcRYGate(q, -1.7029224392818951, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.256180308611308, 6);
  sqcRYGate(q, 1.5600117510685116, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.949405924244819, 6);
  sqcRYGate(q, -0.0641391633719613, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2363964254069602, 8);
  sqcRYGate(q, 0.5464159236838954, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.007022370567411507, 8);
  sqcRYGate(q, 1.3989537550029876, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.2061088581359485, 10);
  sqcRYGate(q, -2.49021001027994, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.814893924370069, 10);
  sqcRYGate(q, -0.1587577441271598, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.702759178583253, 1);
  sqcRYGate(q, -0.03533226308661064, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0871677723463034, 1);
  sqcRYGate(q, -1.4509773336657101, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.933142332662043, 3);
  sqcRYGate(q, -3.0132339285731162, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.06676067868465818, 3);
  sqcRYGate(q, -1.0817526011780068, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.707404452794603, 5);
  sqcRYGate(q, -2.5462193669567545, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.032421241019899405, 5);
  sqcRYGate(q, 0.003249233108872041, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.09212760120990193, 7);
  sqcRYGate(q, -1.5764359120688807, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.7191259900459323, 7);
  sqcRYGate(q, 0.023203525424193572, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.9180592577112836, 9);
  sqcRYGate(q, -2.6519649460411228, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.0226985969662534, 9);
  sqcRYGate(q, 2.944899726684321, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.75081834448054, 0);
  sqcRYGate(q, -0.10959027479509187, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9007118222640526, 0);
  sqcRYGate(q, 1.179789046036027, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8205885402138682, 2);
  sqcRYGate(q, 2.7196862344866197, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.778048912905213, 2);
  sqcRYGate(q, 1.631842783480085, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9076062916133223, 4);
  sqcRYGate(q, 1.0414780466478746, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4688049671376993, 4);
  sqcRYGate(q, -3.1410651004093424, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.09221077494187338, 6);
  sqcRYGate(q, -3.0644088595902956, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.469963545355161, 6);
  sqcRYGate(q, 1.7889929723906353, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4428347668830774, 8);
  sqcRYGate(q, 2.025535907091301, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.140942251258144, 8);
  sqcRYGate(q, 2.9113228139111422, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.058797112969655174, 10);
  sqcRYGate(q, 0.5364437262485762, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.812893271706668, 10);
  sqcRYGate(q, -0.6121809191885296, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.909361931862076, 1);
  sqcRYGate(q, 0.37662401132241013, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1362963198069322, 1);
  sqcRYGate(q, -0.0015849203341460338, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1413181882820682, 3);
  sqcRYGate(q, -0.945337044559829, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1409116435566866, 3);
  sqcRYGate(q, -0.004209257568649149, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4942505984654115, 5);
  sqcRYGate(q, -1.588288824364569, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0299364635040558, 5);
  sqcRYGate(q, 0.6523925193630458, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.027128479568669293, 7);
  sqcRYGate(q, 1.5362470762007054, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.7779555142051953, 7);
  sqcRYGate(q, -1.567368517727349, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.3471436092125932, 9);
  sqcRYGate(q, 0.7483033967395697, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.2425356442309863, 9);
  sqcRYGate(q, 2.9437538070802827, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.860447730406319, 0);
  sqcRYGate(q, 1.354895410139171, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8423919381545567, 0);
  sqcRYGate(q, 1.9670200550300505, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7209148426046044, 2);
  sqcRYGate(q, 2.9297046128073663, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8014916641451224, 2);
  sqcRYGate(q, -1.6209216878969182, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9878071843866314, 4);
  sqcRYGate(q, -1.3628454056633785, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.022158832045356455, 4);
  sqcRYGate(q, -2.6573276630912495, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.008113934965148237, 6);
  sqcRYGate(q, -0.12085886260472822, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1343887710288634, 6);
  sqcRYGate(q, 0.15442919459750945, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4078441766852565, 8);
  sqcRYGate(q, -0.07904208022709676, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.007969465182979361, 8);
  sqcRYGate(q, 3.139512824695874, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.069112990617682, 10);
  sqcRYGate(q, 0.3351128773298528, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.2394188921270522, 10);
  sqcRYGate(q, -2.6220013302969503, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.3472719841929943, 1);
  sqcRYGate(q, -3.09995812315551, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.015866380366242237, 1);
  sqcRYGate(q, -0.04123409820199431, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.685364244303583, 3);
  sqcRYGate(q, -1.57147083791562, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.64435881948194, 3);
  sqcRYGate(q, -2.59117029316222, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3627372125579555, 5);
  sqcRYGate(q, -3.089443554617769, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7721625022087, 5);
  sqcRYGate(q, -2.2410584519236476, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6496301717918394, 7);
  sqcRYGate(q, -2.180784957350331, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.12875617751443175, 7);
  sqcRYGate(q, 1.5941760359458161, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.4760545741029185, 9);
  sqcRYGate(q, 0.2202675454170926, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.189257462047854, 9);
  sqcRYGate(q, -1.6715955623169585, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.0610401684641684, 0);
  sqcRYGate(q, -2.998688716566738, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8883048481427374, 0);
  sqcRYGate(q, -2.273994053308078, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2719647399581233, 2);
  sqcRYGate(q, -1.5866954352500116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5243284528993577, 2);
  sqcRYGate(q, -3.0616013136430857, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5755570317488472, 4);
  sqcRYGate(q, -1.650359394062341, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.107309331982651, 4);
  sqcRYGate(q, 1.237650328339841, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9919991510161763, 6);
  sqcRYGate(q, 0.00421715916369525, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1656391735947715, 6);
  sqcRYGate(q, 3.134456369856851, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3312424776861107, 8);
  sqcRYGate(q, 1.4844123276371946, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.668931687335582, 8);
  sqcRYGate(q, -1.017279215524315, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5944506776127456, 10);
  sqcRYGate(q, 1.92874246376719, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.0241614464435855, 10);
  sqcRYGate(q, 0.019474600413072637, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.7750107764595598, 1);
  sqcRYGate(q, 1.6976540614062288, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1035961164655834, 1);
  sqcRYGate(q, 0.01667816595533741, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.572180727473678, 3);
  sqcRYGate(q, 1.569613268888557, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6819185602314537, 3);
  sqcRYGate(q, 1.5670144661609235, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4794717678758071, 5);
  sqcRYGate(q, -1.210935653535385, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9822779675836468, 5);
  sqcRYGate(q, -1.2297063758201665, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5596088271302788, 7);
  sqcRYGate(q, 1.5700843736486156, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5898135052285838, 7);
  sqcRYGate(q, 1.5833031460296796, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4791438283263405, 9);
  sqcRYGate(q, -0.08680472763801461, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.084647382212689, 9);
  sqcRYGate(q, -0.005166747701228177, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.071938334385827, 0);
  sqcRYGate(q, -1.0386177921326005, 1);
  sqcRYGate(q, -3.064222474867271, 2);
  sqcRYGate(q, -1.5725710218098854, 3);
  sqcRYGate(q, -3.334524323072327e-05, 4);
  sqcRYGate(q, -1.5669725173052402, 5);
  sqcRYGate(q, -3.140615384742907, 6);
  sqcRYGate(q, 1.571096208359295, 7);
  sqcRYGate(q, -3.1411458957082363, 8);
  sqcRYGate(q, -1.663768347839597, 9);
  sqcRYGate(q, 0.30097588692765576, 10);
  sqcRYGate(q, 0.24568909745959644, 11);

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
