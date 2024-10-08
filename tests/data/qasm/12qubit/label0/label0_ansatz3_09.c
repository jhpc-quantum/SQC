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

  sqcRYGate(q, -1.6071195934902613, 0);
  sqcRZGate(q, 0.24372565505775598, 0);
  sqcRYGate(q, 3.1366941665426604, 1);
  sqcRZGate(q, 1.325990315491456, 1);
  sqcRYGate(q, 0.0010712784479419831, 2);
  sqcRZGate(q, 2.5463415441821096, 2);
  sqcRYGate(q, 0.0007460191110319802, 3);
  sqcRZGate(q, 1.9224722678518198, 3);
  sqcRYGate(q, 1.5005108952151611, 4);
  sqcRZGate(q, 0.13420820387782229, 4);
  sqcRYGate(q, -1.7909490940256818, 5);
  sqcRZGate(q, -1.9419462797295797, 5);
  sqcRYGate(q, -2.225745011426877, 6);
  sqcRZGate(q, -1.4498620995979352, 6);
  sqcRYGate(q, -3.1388406618528926, 7);
  sqcRZGate(q, 2.9653584247198874, 7);
  sqcRYGate(q, -3.1379573226458253, 8);
  sqcRZGate(q, -0.28595601402110304, 8);
  sqcRYGate(q, -1.0524584584586503, 9);
  sqcRZGate(q, 3.139919718458281, 9);
  sqcRYGate(q, 2.434784479462529, 10);
  sqcRZGate(q, -0.0033579366461760074, 10);
  sqcRYGate(q, -0.00017224028090479494, 11);
  sqcRZGate(q, 3.027354483910312, 11);
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
  sqcRYGate(q, -1.584725870945352, 0);
  sqcRZGate(q, -0.21520998075346662, 0);
  sqcRYGate(q, -2.716136179406478, 1);
  sqcRZGate(q, -0.7324502943222767, 1);
  sqcRYGate(q, -0.26279393013992447, 2);
  sqcRZGate(q, 1.3931972896860039, 2);
  sqcRYGate(q, -3.1406514412606747, 3);
  sqcRZGate(q, -3.1207055144628733, 3);
  sqcRYGate(q, 3.002621742508745, 4);
  sqcRZGate(q, 2.917146244082266, 4);
  sqcRYGate(q, 0.6100493326896687, 5);
  sqcRZGate(q, -2.0833190681194727, 5);
  sqcRYGate(q, 0.13145726543029368, 6);
  sqcRZGate(q, 1.5585975952024471, 6);
  sqcRYGate(q, 2.7964402032326263, 7);
  sqcRZGate(q, 2.0993476590698386, 7);
  sqcRYGate(q, -2.196766275230944, 8);
  sqcRZGate(q, 3.083051479891178, 8);
  sqcRYGate(q, 2.0893835440104755, 9);
  sqcRZGate(q, -3.025317636258724, 9);
  sqcRYGate(q, 2.4413484800442986, 10);
  sqcRZGate(q, -1.0695623122197297, 10);
  sqcRYGate(q, 2.8754662206443453, 11);
  sqcRZGate(q, 0.8307586807668633, 11);
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
  sqcRYGate(q, -1.028930780462292, 0);
  sqcRZGate(q, 0.510623911259044, 0);
  sqcRYGate(q, -0.9473775450495928, 1);
  sqcRZGate(q, 0.07791071533595417, 1);
  sqcRYGate(q, -3.1322885254726995, 2);
  sqcRZGate(q, 0.40598827153368683, 2);
  sqcRYGate(q, -0.0013602524079804237, 3);
  sqcRZGate(q, -0.8859458616258763, 3);
  sqcRYGate(q, 3.0921874959351228, 4);
  sqcRZGate(q, 0.46433918562463666, 4);
  sqcRYGate(q, 1.025276868048958, 5);
  sqcRZGate(q, -0.8630983915362513, 5);
  sqcRYGate(q, -0.9769521842625102, 6);
  sqcRZGate(q, 1.681465897542076, 6);
  sqcRYGate(q, 2.3351379307225075, 7);
  sqcRZGate(q, -0.3479511637411372, 7);
  sqcRYGate(q, -2.4142151766305746, 8);
  sqcRZGate(q, -0.8896916564189636, 8);
  sqcRYGate(q, -0.0022938358009083615, 9);
  sqcRZGate(q, -0.181509360518423, 9);
  sqcRYGate(q, 0.008160678540994226, 10);
  sqcRZGate(q, -1.5423574811068699, 10);
  sqcRYGate(q, -2.5974259738491585, 11);
  sqcRZGate(q, -2.1629515296327346, 11);
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
  sqcRYGate(q, 2.531899999087899, 0);
  sqcRZGate(q, -3.078726910991058, 0);
  sqcRYGate(q, -2.3337762078509656, 1);
  sqcRZGate(q, -1.4495156757265661, 1);
  sqcRYGate(q, 3.0715242214677674, 2);
  sqcRZGate(q, -1.0420298929640088, 2);
  sqcRYGate(q, -0.0005473927156484695, 3);
  sqcRZGate(q, -0.24105614803259987, 3);
  sqcRYGate(q, 0.10070225065875862, 4);
  sqcRZGate(q, -1.9763948003929164, 4);
  sqcRYGate(q, -0.5957052495560258, 5);
  sqcRZGate(q, -1.1950264144172085, 5);
  sqcRYGate(q, -2.6610343921659347, 6);
  sqcRZGate(q, -1.488608397074393, 6);
  sqcRYGate(q, 2.8707908865062235, 7);
  sqcRZGate(q, -1.4755101129596848, 7);
  sqcRYGate(q, -0.15713113266286438, 8);
  sqcRZGate(q, 1.911829263750974, 8);
  sqcRYGate(q, -2.1891471693736255, 9);
  sqcRZGate(q, 0.8619435950530069, 9);
  sqcRYGate(q, -2.119460012671035, 10);
  sqcRZGate(q, -1.770017244328428, 10);
  sqcRYGate(q, 0.4076716205728266, 11);
  sqcRZGate(q, -2.0884530186406525, 11);
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
  sqcRYGate(q, 2.175391356260091, 0);
  sqcRZGate(q, -2.9344694434662038, 0);
  sqcRYGate(q, -0.3430968341210275, 1);
  sqcRZGate(q, 2.7104574844031943, 1);
  sqcRYGate(q, -1.583336560245999, 2);
  sqcRZGate(q, -1.5667617161819956, 2);
  sqcRYGate(q, -1.5522128979603862, 3);
  sqcRZGate(q, -2.6539196202495225, 3);
  sqcRYGate(q, -1.6454594582387347, 4);
  sqcRZGate(q, -0.12054446024034605, 4);
  sqcRYGate(q, 0.8540556896232845, 5);
  sqcRZGate(q, -2.5627465860444367, 5);
  sqcRYGate(q, 1.5500870373632278, 6);
  sqcRZGate(q, 1.8696620200071121, 6);
  sqcRYGate(q, -3.12866157373416, 7);
  sqcRZGate(q, 2.1747800326373765, 7);
  sqcRYGate(q, -0.030329349354012432, 8);
  sqcRZGate(q, 2.343287807619967, 8);
  sqcRYGate(q, -3.1392496114941713, 9);
  sqcRZGate(q, -0.9916304265273155, 9);
  sqcRYGate(q, 3.1369643870673682, 10);
  sqcRZGate(q, -0.058039377371340364, 10);
  sqcRYGate(q, -0.564631677993728, 11);
  sqcRZGate(q, 0.10334465779282366, 11);
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
  sqcRYGate(q, -1.5617997913290598, 0);
  sqcRZGate(q, 2.5589651296471208, 0);
  sqcRYGate(q, 0.5824169406587689, 1);
  sqcRZGate(q, 1.5396557875286574, 1);
  sqcRYGate(q, -2.7409503813612646, 2);
  sqcRZGate(q, 1.2308855828027125, 2);
  sqcRYGate(q, -3.13870701021897, 3);
  sqcRZGate(q, 1.4553921215199288, 3);
  sqcRYGate(q, 3.1411078570178375, 4);
  sqcRZGate(q, 0.020743955962903016, 4);
  sqcRYGate(q, 3.1409114019130584, 5);
  sqcRZGate(q, 0.5405185292278664, 5);
  sqcRYGate(q, -3.1315388940339295, 6);
  sqcRZGate(q, 1.88268693533821, 6);
  sqcRYGate(q, 1.7565837141400433, 7);
  sqcRZGate(q, 0.5270620200146089, 7);
  sqcRYGate(q, -1.7097832927899022, 8);
  sqcRZGate(q, -2.26278041883859, 8);
  sqcRYGate(q, -0.9277840459277548, 9);
  sqcRZGate(q, -1.5841988993473346, 9);
  sqcRYGate(q, 0.5855320138076854, 10);
  sqcRZGate(q, -2.201326994588661, 10);
  sqcRYGate(q, 3.065944987044072, 11);
  sqcRZGate(q, -1.621423753115133, 11);
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
  sqcRYGate(q, -1.9225039440672909, 0);
  sqcRZGate(q, 0.14031967412243684, 0);
  sqcRYGate(q, 1.394974288188568, 1);
  sqcRZGate(q, -3.0842240122321147, 1);
  sqcRYGate(q, -2.7421099323561573, 2);
  sqcRZGate(q, 1.430076408693364, 2);
  sqcRYGate(q, -1.5573729009915527, 3);
  sqcRZGate(q, -0.7501703392742458, 3);
  sqcRYGate(q, -1.583016079819001, 4);
  sqcRZGate(q, -2.42024526292028, 4);
  sqcRYGate(q, 0.17465413110759306, 5);
  sqcRZGate(q, -2.1677084852071595, 5);
  sqcRYGate(q, -1.4989195805541489, 6);
  sqcRZGate(q, -1.720100538079109, 6);
  sqcRYGate(q, 3.141290898435219, 7);
  sqcRZGate(q, 2.7019114180152153, 7);
  sqcRYGate(q, -0.3213688558846748, 8);
  sqcRZGate(q, -2.4438843382593127, 8);
  sqcRYGate(q, 3.140842854251777, 9);
  sqcRZGate(q, -0.678628504934864, 9);
  sqcRYGate(q, 3.123663026144027, 10);
  sqcRZGate(q, 2.6735037218050506, 10);
  sqcRYGate(q, 2.873294013467159, 11);
  sqcRZGate(q, -2.915443205030975, 11);
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
  sqcRYGate(q, 3.1101109440236603, 0);
  sqcRZGate(q, 0.1447841771523071, 0);
  sqcRYGate(q, -0.28233086330060875, 1);
  sqcRZGate(q, -1.87395714429754, 1);
  sqcRYGate(q, 3.1010294647881507, 2);
  sqcRZGate(q, -2.121892201074236, 2);
  sqcRYGate(q, -3.1391291918840136, 3);
  sqcRZGate(q, -1.6196019106478596, 3);
  sqcRYGate(q, 3.141541349380362, 4);
  sqcRZGate(q, 2.037880108411383, 4);
  sqcRYGate(q, 0.06603086633502965, 5);
  sqcRZGate(q, -2.053947041817752, 5);
  sqcRYGate(q, -3.1069358894807566, 6);
  sqcRZGate(q, 3.062626047963477, 6);
  sqcRYGate(q, 1.822560269779627, 7);
  sqcRZGate(q, -3.1096239759393356, 7);
  sqcRYGate(q, -2.8391195302444285, 8);
  sqcRZGate(q, 1.5025835269628622, 8);
  sqcRYGate(q, 1.5533132104286953, 9);
  sqcRZGate(q, -0.9143593217359625, 9);
  sqcRYGate(q, -1.6595054519116434, 10);
  sqcRZGate(q, 1.0048131841559975, 10);
  sqcRYGate(q, 2.6220212332843182, 11);
  sqcRZGate(q, -1.0693430209060124, 11);
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
  sqcRYGate(q, -2.2431218756232516, 0);
  sqcRZGate(q, -3.0039911672776647, 0);
  sqcRYGate(q, -2.9821607164492097, 1);
  sqcRZGate(q, 2.1244846666684114, 1);
  sqcRYGate(q, 2.028313637407499, 2);
  sqcRZGate(q, -1.8935177521260658, 2);
  sqcRYGate(q, -3.114803036592602, 3);
  sqcRZGate(q, 2.311468882201124, 3);
  sqcRYGate(q, -3.01844038231366, 4);
  sqcRZGate(q, -2.6207351465704067, 4);
  sqcRYGate(q, 0.00015899666569030302, 5);
  sqcRZGate(q, -2.78467804486596, 5);
  sqcRYGate(q, 1.5326448068658394, 6);
  sqcRZGate(q, -0.2771361055525405, 6);
  sqcRYGate(q, -0.0023658627801101907, 7);
  sqcRZGate(q, 0.9005914579407461, 7);
  sqcRYGate(q, 0.001905522789035885, 8);
  sqcRZGate(q, -2.651627763362332, 8);
  sqcRYGate(q, 3.140412206983063, 9);
  sqcRZGate(q, 0.6598403015956276, 9);
  sqcRYGate(q, -2.861853043982421, 10);
  sqcRZGate(q, 0.04157269995808566, 10);
  sqcRYGate(q, -0.6486605621115968, 11);
  sqcRZGate(q, -2.701735494505905, 11);
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
  sqcRYGate(q, 0.0629203650173721, 0);
  sqcRZGate(q, -3.1389946476593584, 0);
  sqcRYGate(q, 1.5472849085383957, 1);
  sqcRZGate(q, 3.0694588588807123, 1);
  sqcRYGate(q, 1.7209590150111413, 2);
  sqcRZGate(q, 0.11768924046445672, 2);
  sqcRYGate(q, 3.1405768087017756, 3);
  sqcRZGate(q, 0.6044845320317079, 3);
  sqcRYGate(q, -0.0011674491388937727, 4);
  sqcRZGate(q, -0.19216550428779033, 4);
  sqcRYGate(q, -1.5116762078744423, 5);
  sqcRZGate(q, -1.247369678077809, 5);
  sqcRYGate(q, 3.112663020466955, 6);
  sqcRZGate(q, -0.8197434053484338, 6);
  sqcRYGate(q, -1.608917058854633, 7);
  sqcRZGate(q, 2.8258064365949753, 7);
  sqcRYGate(q, -0.06123028276354827, 8);
  sqcRZGate(q, -0.613004559749867, 8);
  sqcRYGate(q, -1.1384420680704919, 9);
  sqcRZGate(q, 0.4019923371903312, 9);
  sqcRYGate(q, 0.7976446694577053, 10);
  sqcRZGate(q, 2.5591865134814022, 10);
  sqcRYGate(q, 0.1619666048569064, 11);
  sqcRZGate(q, -2.6948509700903744, 11);
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
  sqcRYGate(q, -0.23860164603452652, 0);
  sqcRZGate(q, 0.6210411976142228, 0);
  sqcRYGate(q, 1.7486709648592236, 1);
  sqcRZGate(q, -0.02562313535614891, 1);
  sqcRYGate(q, -0.40841837657623886, 2);
  sqcRZGate(q, 2.936970050637555, 2);
  sqcRYGate(q, 3.1407072692469544, 3);
  sqcRZGate(q, 2.3674040426223857, 3);
  sqcRYGate(q, 3.141284710387058, 4);
  sqcRZGate(q, 0.07525646149259181, 4);
  sqcRYGate(q, 3.140341642739386, 5);
  sqcRZGate(q, -1.3120823255129068, 5);
  sqcRYGate(q, -0.9940862008164918, 6);
  sqcRZGate(q, -0.7191944321673933, 6);
  sqcRYGate(q, 0.0017424895485111565, 7);
  sqcRZGate(q, -1.1812336034015756, 7);
  sqcRYGate(q, -2.931604481757893, 8);
  sqcRZGate(q, 2.5043783393491275, 8);
  sqcRYGate(q, 0.2544462555305209, 9);
  sqcRZGate(q, 2.5670307017633447, 9);
  sqcRYGate(q, -1.3085170501406473, 10);
  sqcRZGate(q, 1.1505588482933733, 10);
  sqcRYGate(q, 0.17129689482792365, 11);
  sqcRZGate(q, 2.324470338251856, 11);
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
  sqcRYGate(q, 1.5500705172618416, 0);
  sqcRZGate(q, 3.127962014424332, 0);
  sqcRYGate(q, 1.4604648021742868, 1);
  sqcRZGate(q, 2.443639503284564, 1);
  sqcRYGate(q, 1.8100093727183477, 2);
  sqcRZGate(q, -0.6169645601035781, 2);
  sqcRYGate(q, -3.1409997485387375, 3);
  sqcRZGate(q, -2.140276151884501, 3);
  sqcRYGate(q, -0.000176443873367127, 4);
  sqcRZGate(q, 2.076373317715647, 4);
  sqcRYGate(q, 1.5052154453949125, 5);
  sqcRZGate(q, -1.6000462910148738, 5);
  sqcRYGate(q, -0.008185252223416484, 6);
  sqcRZGate(q, -1.801362411196876, 6);
  sqcRYGate(q, -0.006244315748509699, 7);
  sqcRZGate(q, -0.7448057247378131, 7);
  sqcRYGate(q, -0.017844682241371156, 8);
  sqcRZGate(q, -1.5985008656021722, 8);
  sqcRYGate(q, -0.0057824842805835885, 9);
  sqcRZGate(q, -1.0175732352202222, 9);
  sqcRYGate(q, 3.139105820710481, 10);
  sqcRZGate(q, -0.8350551737766745, 10);
  sqcRYGate(q, 1.5140997657532647, 11);
  sqcRZGate(q, -3.1024203166505737, 11);
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
  sqcRYGate(q, -1.3278100949796148, 0);
  sqcRZGate(q, 3.138855749225366, 0);
  sqcRYGate(q, -3.123965868787506, 1);
  sqcRZGate(q, -0.6856994426468307, 1);
  sqcRYGate(q, -1.5401091357687606, 2);
  sqcRZGate(q, 1.5681828046170079, 2);
  sqcRYGate(q, 3.118460941065534, 3);
  sqcRZGate(q, 0.7356937214095963, 3);
  sqcRYGate(q, -1.5223009999761192, 4);
  sqcRZGate(q, -1.564121990865877, 4);
  sqcRYGate(q, 1.6785314199577626, 5);
  sqcRZGate(q, -3.117884292857358, 5);
  sqcRYGate(q, 2.59603052063529, 6);
  sqcRZGate(q, 0.7467464556178297, 6);
  sqcRYGate(q, -1.8989049398941409, 7);
  sqcRZGate(q, -2.7889385249808583, 7);
  sqcRYGate(q, -2.9092012549608928, 8);
  sqcRZGate(q, -2.011612087949379, 8);
  sqcRYGate(q, -1.6304946304439494, 9);
  sqcRZGate(q, 0.031933431806114854, 9);
  sqcRYGate(q, 3.128403470602391, 10);
  sqcRZGate(q, 2.8969263511629584, 10);
  sqcRYGate(q, -3.107795608371805, 11);
  sqcRZGate(q, 1.59923303818338, 11);

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
