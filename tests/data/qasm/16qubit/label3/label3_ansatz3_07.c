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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -3.1407855456286176, 0);
  sqcRZGate(q, 2.2558761604812707, 0);
  sqcRYGate(q, -1.9216194405166354, 1);
  sqcRZGate(q, 2.6219894348343145, 1);
  sqcRYGate(q, 1.7678380460849548, 2);
  sqcRZGate(q, -3.1135947129931503, 2);
  sqcRYGate(q, 0.0004897653578819217, 3);
  sqcRZGate(q, 3.028995866746716, 3);
  sqcRYGate(q, -0.00737382121813024, 4);
  sqcRZGate(q, -2.707132514930872, 4);
  sqcRYGate(q, -1.5932968579689284, 5);
  sqcRZGate(q, -2.0156621751635884, 5);
  sqcRYGate(q, 1.5694284235531113, 6);
  sqcRZGate(q, 1.5648224907107144, 6);
  sqcRYGate(q, 3.0847736119223357, 7);
  sqcRZGate(q, 0.39575198327051975, 7);
  sqcRYGate(q, -1.612441515240417, 8);
  sqcRZGate(q, 1.3097320514149038, 8);
  sqcRYGate(q, -1.5871783027197066, 9);
  sqcRZGate(q, -1.8021151899500403, 9);
  sqcRYGate(q, 1.5717610932744206, 10);
  sqcRZGate(q, -1.5703964779612616, 10);
  sqcRYGate(q, -3.1411852114415155, 11);
  sqcRZGate(q, 1.11909780681808, 11);
  sqcRYGate(q, -0.2690145900569665, 12);
  sqcRZGate(q, -2.9488905944495833, 12);
  sqcRYGate(q, -0.2727392630731842, 13);
  sqcRZGate(q, -1.4931961754622718, 13);
  sqcRYGate(q, -1.5712475926064, 14);
  sqcRZGate(q, 3.1357161230669126, 14);
  sqcRYGate(q, -0.019591604098562122, 15);
  sqcRZGate(q, 1.1181584653972774, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 3.137280796825284, 0);
  sqcRZGate(q, 1.6831563219697956, 0);
  sqcRYGate(q, -2.086766682738709, 1);
  sqcRZGate(q, -0.2319098735795757, 1);
  sqcRYGate(q, -1.787320850398933, 2);
  sqcRZGate(q, 2.5519030268212752, 2);
  sqcRYGate(q, 0.36846723727234143, 3);
  sqcRZGate(q, -1.3079098887214888, 3);
  sqcRYGate(q, 1.711578441699726, 4);
  sqcRZGate(q, -0.7992999102659334, 4);
  sqcRYGate(q, -3.090679932539996, 5);
  sqcRZGate(q, -0.94035695782933, 5);
  sqcRYGate(q, -0.47211437428278913, 6);
  sqcRZGate(q, -1.0703941323111774, 6);
  sqcRYGate(q, 3.1415358439785015, 7);
  sqcRZGate(q, 0.5909618694053633, 7);
  sqcRYGate(q, -3.13105051665978, 8);
  sqcRZGate(q, 3.0361677240825244, 8);
  sqcRYGate(q, 1.2135660685828658, 9);
  sqcRZGate(q, 0.2067173993242141, 9);
  sqcRYGate(q, 2.2879410037382653, 10);
  sqcRZGate(q, 3.140524039913538, 10);
  sqcRYGate(q, -1.6337401151068738, 11);
  sqcRZGate(q, 0.8346369246018757, 11);
  sqcRYGate(q, 1.9630880320841388, 12);
  sqcRZGate(q, 1.4921714575508627, 12);
  sqcRYGate(q, 2.1271913031698233, 13);
  sqcRZGate(q, -0.67477161447854, 13);
  sqcRYGate(q, 3.1393864996317404, 14);
  sqcRZGate(q, -7.840885723098268e-05, 14);
  sqcRYGate(q, -3.138809316467894, 15);
  sqcRZGate(q, -1.5799406106279115, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.5696303091308776, 0);
  sqcRZGate(q, -1.5842321733076563, 0);
  sqcRYGate(q, 2.38522647571686, 1);
  sqcRZGate(q, 0.17988636546535378, 1);
  sqcRYGate(q, 0.07560206706417122, 2);
  sqcRZGate(q, 0.004643534042410962, 2);
  sqcRYGate(q, -1.5714042447721066, 3);
  sqcRZGate(q, 1.5498603255061485, 3);
  sqcRYGate(q, -0.0006997318904323547, 4);
  sqcRZGate(q, 2.4005855211441336, 4);
  sqcRYGate(q, 1.9828994606836494, 5);
  sqcRZGate(q, 1.3452392411590006, 5);
  sqcRYGate(q, -3.1198501033749224, 6);
  sqcRZGate(q, -2.61817761563554, 6);
  sqcRYGate(q, 1.623550655462714, 7);
  sqcRZGate(q, 1.2248625597642713, 7);
  sqcRYGate(q, 1.597562297839147, 8);
  sqcRZGate(q, 3.1308116603444156, 8);
  sqcRYGate(q, -1.6636305369242175, 9);
  sqcRZGate(q, 3.1225289434681476, 9);
  sqcRYGate(q, -1.5601858769818144, 10);
  sqcRZGate(q, -1.5723676119148347, 10);
  sqcRYGate(q, -3.141407009574775, 11);
  sqcRZGate(q, 0.9110742681438434, 11);
  sqcRYGate(q, 3.0714504335309196, 12);
  sqcRZGate(q, -2.102066182594775, 12);
  sqcRYGate(q, -0.0035788510714471755, 13);
  sqcRZGate(q, -2.138647456855192, 13);
  sqcRYGate(q, -1.5593648084194809, 14);
  sqcRZGate(q, 1.0975463681882676, 14);
  sqcRYGate(q, -1.582626437384281, 15);
  sqcRZGate(q, -1.6581847260140528, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.5852512922363722, 0);
  sqcRZGate(q, -1.5793210258986035, 0);
  sqcRYGate(q, -3.1170366483527223, 1);
  sqcRZGate(q, 0.8079832610987197, 1);
  sqcRYGate(q, -1.5711006949197763, 2);
  sqcRZGate(q, -0.1199225305325995, 2);
  sqcRYGate(q, -0.26587524253736383, 3);
  sqcRZGate(q, 0.023137498174122584, 3);
  sqcRYGate(q, -3.1414748318664674, 4);
  sqcRZGate(q, -1.7618633103162653, 4);
  sqcRYGate(q, -1.5709577755722384, 5);
  sqcRZGate(q, -0.00802950411526016, 5);
  sqcRYGate(q, 1.5669486048060095, 6);
  sqcRZGate(q, -0.08888316700169696, 6);
  sqcRYGate(q, 0.002105800802305602, 7);
  sqcRZGate(q, -0.0647878198745571, 7);
  sqcRYGate(q, 3.0924072733261574, 8);
  sqcRZGate(q, -1.7604449355353107, 8);
  sqcRYGate(q, 1.6045371622980786, 9);
  sqcRZGate(q, 0.7408596955039988, 9);
  sqcRYGate(q, 1.5669114927802352, 10);
  sqcRZGate(q, -2.627120655822042, 10);
  sqcRYGate(q, -1.5943559387425126, 11);
  sqcRZGate(q, 3.087961036839111, 11);
  sqcRYGate(q, -1.5477065136514612, 12);
  sqcRZGate(q, 0.0055176698613684004, 12);
  sqcRYGate(q, -1.5576766181624597, 13);
  sqcRZGate(q, 1.9152564826071412, 13);
  sqcRYGate(q, 3.11271122780347, 14);
  sqcRZGate(q, 0.9854159552274098, 14);
  sqcRYGate(q, -1.000727654712736, 15);
  sqcRZGate(q, 1.4481675490731725, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 1.5791571835399931, 0);
  sqcRZGate(q, 0.6728392030149108, 0);
  sqcRYGate(q, 0.4006255429085636, 1);
  sqcRZGate(q, -1.6790414008330767, 1);
  sqcRYGate(q, -3.1403553739264356, 2);
  sqcRZGate(q, -2.665441396454699, 2);
  sqcRYGate(q, 1.570342958001678, 3);
  sqcRZGate(q, 0.1970556648720407, 3);
  sqcRYGate(q, 0.0002212457992570677, 4);
  sqcRZGate(q, 0.34334182369922756, 4);
  sqcRYGate(q, 2.675620598520379, 5);
  sqcRZGate(q, -1.57818868856842, 5);
  sqcRYGate(q, 0.023889395872135566, 6);
  sqcRZGate(q, 0.04506727639635332, 6);
  sqcRYGate(q, 0.0004623448961672957, 7);
  sqcRZGate(q, 2.9201073895162555, 7);
  sqcRYGate(q, 2.7780153511682615, 8);
  sqcRZGate(q, -3.057808304715975, 8);
  sqcRYGate(q, -3.140938990907991, 9);
  sqcRZGate(q, -1.5027754353148144, 9);
  sqcRYGate(q, 2.8735933632251682, 10);
  sqcRZGate(q, 1.945295354139817, 10);
  sqcRYGate(q, 0.0018303726353345747, 11);
  sqcRZGate(q, 0.04346111941467701, 11);
  sqcRYGate(q, -1.5800320875935678, 12);
  sqcRZGate(q, 1.4774016357238058, 12);
  sqcRYGate(q, 3.1285484677144044, 13);
  sqcRZGate(q, -0.0381863061728449, 13);
  sqcRYGate(q, 3.1295879388156242, 14);
  sqcRZGate(q, -1.266754148181069, 14);
  sqcRYGate(q, 2.296630627140436, 15);
  sqcRZGate(q, 1.5379720676551676, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -0.08215741221902509, 0);
  sqcRZGate(q, 1.4536304504748037, 0);
  sqcRYGate(q, -2.9751062776143495, 1);
  sqcRZGate(q, -1.6136870481877672, 1);
  sqcRYGate(q, 1.6279864282944638, 2);
  sqcRZGate(q, -2.5257368206682127, 2);
  sqcRYGate(q, -1.346242726025129, 3);
  sqcRZGate(q, 0.6892294360405568, 3);
  sqcRYGate(q, -1.283669332851038, 4);
  sqcRZGate(q, -0.137964822888399, 4);
  sqcRYGate(q, 1.570953964239358, 5);
  sqcRZGate(q, 0.8861954538087335, 5);
  sqcRYGate(q, -1.5792542423968732, 6);
  sqcRZGate(q, -2.1917933224836377, 6);
  sqcRYGate(q, 0.001773687472172547, 7);
  sqcRZGate(q, -0.9361384189043269, 7);
  sqcRYGate(q, -2.611593236137575, 8);
  sqcRZGate(q, -0.2460986763274178, 8);
  sqcRYGate(q, 0.19879320317548377, 9);
  sqcRZGate(q, 2.249000586891995, 9);
  sqcRYGate(q, -7.477886644036147e-05, 10);
  sqcRZGate(q, -0.18095013090817869, 10);
  sqcRYGate(q, 1.5826696466290573, 11);
  sqcRZGate(q, 1.7165987868904942, 11);
  sqcRYGate(q, 1.5744274383504187, 12);
  sqcRZGate(q, 2.0953679493389217, 12);
  sqcRYGate(q, -0.01752238022227548, 13);
  sqcRZGate(q, 1.850392369076339, 13);
  sqcRYGate(q, -0.7467196473864632, 14);
  sqcRZGate(q, 1.411465971139001, 14);
  sqcRYGate(q, -0.7610447548014008, 15);
  sqcRZGate(q, 1.4297393696895329, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -3.1223648186573443, 0);
  sqcRZGate(q, 0.3111998312425193, 0);
  sqcRYGate(q, -0.08590083492080947, 1);
  sqcRZGate(q, -0.7449494857177719, 1);
  sqcRYGate(q, -3.130346235196854, 2);
  sqcRZGate(q, -2.5244803524551047, 2);
  sqcRYGate(q, 0.011696227303977316, 3);
  sqcRZGate(q, -2.286627689563744, 3);
  sqcRYGate(q, -2.953659529398683, 4);
  sqcRZGate(q, -0.059220989808235334, 4);
  sqcRYGate(q, 1.586295198577182, 5);
  sqcRZGate(q, -2.652314937778029, 5);
  sqcRYGate(q, 3.1347668510874995, 6);
  sqcRZGate(q, -2.1999249001393473, 6);
  sqcRYGate(q, -1.5716498665465721, 7);
  sqcRZGate(q, 1.4292362870548503, 7);
  sqcRYGate(q, -3.140286211530096, 8);
  sqcRZGate(q, 2.80089304306892, 8);
  sqcRYGate(q, -2.9550287077932507, 9);
  sqcRZGate(q, -1.210898673969501, 9);
  sqcRYGate(q, 0.004956515864791733, 10);
  sqcRZGate(q, -1.3075286367876746, 10);
  sqcRYGate(q, -1.5701695949641534, 11);
  sqcRZGate(q, 2.571721026796735, 11);
  sqcRYGate(q, -0.0005451133462637259, 12);
  sqcRZGate(q, 2.6511300151888952, 12);
  sqcRYGate(q, -1.5700948385740618, 13);
  sqcRZGate(q, -0.39684472456128295, 13);
  sqcRYGate(q, -0.1257216033888806, 14);
  sqcRZGate(q, -1.4401460673341546, 14);
  sqcRYGate(q, 3.076940318858068, 15);
  sqcRZGate(q, -1.3874912671257371, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.6027173815191338, 0);
  sqcRZGate(q, -3.031888211617501, 0);
  sqcRYGate(q, 1.4542826261120914, 1);
  sqcRZGate(q, 2.053500027517804, 1);
  sqcRYGate(q, -1.6259945729032743, 2);
  sqcRZGate(q, -2.633083611151591, 2);
  sqcRYGate(q, -1.4937069476104368, 3);
  sqcRZGate(q, 1.527408500895821, 3);
  sqcRYGate(q, -3.141147825892337, 4);
  sqcRZGate(q, 1.5709844014045702, 4);
  sqcRYGate(q, 0.0002393354854035947, 5);
  sqcRZGate(q, -2.017981724809834, 5);
  sqcRYGate(q, 0.04512252430905347, 6);
  sqcRZGate(q, -3.137316341669948, 6);
  sqcRYGate(q, 3.140731061915309, 7);
  sqcRZGate(q, -1.712851054261714, 7);
  sqcRYGate(q, -2.599825359537337, 8);
  sqcRZGate(q, 2.1263137409954, 8);
  sqcRYGate(q, -2.8882580455606472, 9);
  sqcRZGate(q, 1.91235798671375, 9);
  sqcRYGate(q, -3.119197862257563, 10);
  sqcRZGate(q, 0.11585440866349384, 10);
  sqcRYGate(q, 0.0005745701781236789, 11);
  sqcRZGate(q, -2.5698675809605436, 11);
  sqcRYGate(q, -1.568166942997857, 12);
  sqcRZGate(q, 3.13691900485597, 12);
  sqcRYGate(q, -0.00036194002943723547, 13);
  sqcRZGate(q, -1.1685722983625058, 13);
  sqcRYGate(q, 2.4883341304917868, 14);
  sqcRZGate(q, -0.9905304353715643, 14);
  sqcRYGate(q, -1.5710823748800846, 15);
  sqcRZGate(q, 0.9887314326661674, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -0.09462853209652344, 0);
  sqcRZGate(q, -0.1989992949159731, 0);
  sqcRYGate(q, -3.1407414949746255, 1);
  sqcRZGate(q, 2.15109680158599, 1);
  sqcRYGate(q, -1.5704496466621738, 2);
  sqcRZGate(q, 1.6580854047982438, 2);
  sqcRYGate(q, -1.5116662806623062, 3);
  sqcRZGate(q, 0.5665931604738615, 3);
  sqcRYGate(q, -1.4420845518804795, 4);
  sqcRZGate(q, 0.3010107341495756, 4);
  sqcRYGate(q, 1.3599443200738544, 5);
  sqcRZGate(q, -1.8797684885511572, 5);
  sqcRYGate(q, 1.5582269583166957, 6);
  sqcRZGate(q, 0.16548765152711817, 6);
  sqcRYGate(q, -1.5696506156858046, 7);
  sqcRZGate(q, -1.579058647700774, 7);
  sqcRYGate(q, 0.00042495761383065656, 8);
  sqcRZGate(q, 0.6629089897495452, 8);
  sqcRYGate(q, -2.867894777691838, 9);
  sqcRZGate(q, -0.09219966670425475, 9);
  sqcRYGate(q, -0.047142969354447395, 10);
  sqcRZGate(q, 1.0122742022346933, 10);
  sqcRYGate(q, -1.5710472971403173, 11);
  sqcRZGate(q, 0.2515379303400609, 11);
  sqcRYGate(q, -1.005650473434132, 12);
  sqcRZGate(q, 0.00429107378697946, 12);
  sqcRYGate(q, 2.845120157584844, 13);
  sqcRZGate(q, -0.7251982045882474, 13);
  sqcRYGate(q, -0.011734152669870213, 14);
  sqcRZGate(q, -1.7710697699224562, 14);
  sqcRYGate(q, 0.17703583973754444, 15);
  sqcRZGate(q, 0.5779834534084732, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, -1.5637920119962176, 0);
  sqcRZGate(q, -0.2631290496124379, 0);
  sqcRYGate(q, 1.5674344362178847, 1);
  sqcRZGate(q, -0.6240560985668305, 1);
  sqcRYGate(q, 0.020206656554713653, 2);
  sqcRZGate(q, 1.1833610387244287, 2);
  sqcRYGate(q, 1.5660085434042426, 3);
  sqcRZGate(q, 2.3124603114007507, 3);
  sqcRYGate(q, 3.13784711991018, 4);
  sqcRZGate(q, -2.801841860368212, 4);
  sqcRYGate(q, 3.1380732065591075, 5);
  sqcRZGate(q, -0.1149910092076496, 5);
  sqcRYGate(q, 0.034749078442592035, 6);
  sqcRZGate(q, 1.7485286583339619, 6);
  sqcRYGate(q, -0.06626497853954796, 7);
  sqcRZGate(q, 2.9824290361298136, 7);
  sqcRYGate(q, -0.0026125759839255025, 8);
  sqcRZGate(q, -0.9632737037375914, 8);
  sqcRYGate(q, 1.711281069925428, 9);
  sqcRZGate(q, -1.7200301072207416, 9);
  sqcRYGate(q, 3.141212020394895, 10);
  sqcRZGate(q, -0.023681434628803014, 10);
  sqcRYGate(q, -1.5698970705068636, 11);
  sqcRZGate(q, 3.1407691391445702, 11);
  sqcRYGate(q, -1.5730256449651439, 12);
  sqcRZGate(q, 1.5723960955865954, 12);
  sqcRYGate(q, -0.0025162775617291193, 13);
  sqcRZGate(q, 0.5223408470710789, 13);
  sqcRYGate(q, -3.1311433598088843, 14);
  sqcRZGate(q, -0.8360609149398011, 14);
  sqcRYGate(q, 2.814876003643114, 15);
  sqcRZGate(q, -0.30975603118507034, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 3.116094884300481, 0);
  sqcRZGate(q, 2.223511579192739, 0);
  sqcRYGate(q, 0.007474935135148186, 1);
  sqcRZGate(q, -0.03870283296651242, 1);
  sqcRYGate(q, -3.115730216260681, 2);
  sqcRZGate(q, -0.9558114646425417, 2);
  sqcRYGate(q, -0.006709294210864414, 3);
  sqcRZGate(q, -2.9774306368994075, 3);
  sqcRYGate(q, -1.6890080978362851, 4);
  sqcRZGate(q, -2.280969165064143, 4);
  sqcRYGate(q, -1.5723065808955814, 5);
  sqcRZGate(q, 0.8869506673137427, 5);
  sqcRYGate(q, -0.0004950215625976208, 6);
  sqcRZGate(q, 2.027494644148031, 6);
  sqcRYGate(q, -3.1403639918940573, 7);
  sqcRZGate(q, 0.7370247837326066, 7);
  sqcRYGate(q, -3.131959362481638, 8);
  sqcRZGate(q, -2.081240177410781, 8);
  sqcRYGate(q, 3.14132418876961, 9);
  sqcRZGate(q, -2.577054407987485, 9);
  sqcRYGate(q, -3.132450315756093, 10);
  sqcRZGate(q, -1.7337987667641794, 10);
  sqcRYGate(q, -1.571098976095014, 11);
  sqcRZGate(q, -2.267010531411797, 11);
  sqcRYGate(q, 1.5547693774051776, 12);
  sqcRZGate(q, 1.8914253928809046, 12);
  sqcRYGate(q, -3.1389978031044197, 13);
  sqcRZGate(q, 2.2085908701504198, 13);
  sqcRYGate(q, 0.018113270786464852, 14);
  sqcRZGate(q, -1.3076928330318283, 14);
  sqcRYGate(q, -2.984055354947853, 15);
  sqcRZGate(q, 0.5553099981512263, 15);

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
