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

  sqcRYGate(q, -2.768845567186956, 0);
  sqcRYGate(q, 1.5206622261283247, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8866449251595538, 0);
  sqcRYGate(q, 0.08335325605386212, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.082580610124337, 2);
  sqcRYGate(q, 1.6972436952413532, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5983673477912026, 2);
  sqcRYGate(q, -0.5126878225313796, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8534389640748712, 4);
  sqcRYGate(q, -0.7777451515909712, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6443982480342116, 4);
  sqcRYGate(q, -2.5257515291868606, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.34280527439971475, 6);
  sqcRYGate(q, -1.778044841925539, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.476919040605439, 6);
  sqcRYGate(q, -2.0481271282021214, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.286989643159734, 1);
  sqcRYGate(q, 0.6850574294028666, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6447624315050877, 1);
  sqcRYGate(q, -0.26360459738438546, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0888457869510146, 3);
  sqcRYGate(q, 1.433726843224818, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2543429516031865, 3);
  sqcRYGate(q, -1.1775653595134132, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6019783718319363, 5);
  sqcRYGate(q, 2.4583331016809624, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8540121750411047, 5);
  sqcRYGate(q, -0.18439429054808734, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1235170137289225, 0);
  sqcRYGate(q, 2.8575847266750283, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.059053473166295, 0);
  sqcRYGate(q, 0.7859899129007712, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6912500346051429, 2);
  sqcRYGate(q, -2.2396822503838996, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0685801704297289, 2);
  sqcRYGate(q, -0.03297989565930233, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.648508427684546, 4);
  sqcRYGate(q, 2.8204964087368976, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7474387517293088, 4);
  sqcRYGate(q, -1.8398968000244293, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9408644139358595, 6);
  sqcRYGate(q, -1.1444718729993906, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8279156146593476, 6);
  sqcRYGate(q, 1.4675785034876416, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1030294859361036, 1);
  sqcRYGate(q, -2.862990796732141, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4820243123651746, 1);
  sqcRYGate(q, 0.9006044622952625, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2453765278175613, 3);
  sqcRYGate(q, 0.40144337541149877, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0395850184051767, 3);
  sqcRYGate(q, 1.8253177357302723, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.44097771211208864, 5);
  sqcRYGate(q, -2.9070129442808113, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7105949948989148, 5);
  sqcRYGate(q, -0.196113722842008, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8360500433044828, 0);
  sqcRYGate(q, 0.32134899825157054, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3236452971257302, 0);
  sqcRYGate(q, -2.9676295490457916, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9534144311626442, 2);
  sqcRYGate(q, 0.4196227171366047, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6079836277140568, 2);
  sqcRYGate(q, 0.9453015089447954, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5120038710140113, 4);
  sqcRYGate(q, -1.5274882712585285, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.034786096256055, 4);
  sqcRYGate(q, -0.16367593287638466, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5069812859257092, 6);
  sqcRYGate(q, -2.8118334204770354, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9352097900727534, 6);
  sqcRYGate(q, 0.7586230624042145, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.403656361764865, 1);
  sqcRYGate(q, -0.353073451005778, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8336930381805243, 1);
  sqcRYGate(q, -1.2990267431902207, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3761859479237364, 3);
  sqcRYGate(q, -2.407793270961101, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.009369088835407, 3);
  sqcRYGate(q, -2.639407698684947, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7117587974243437, 5);
  sqcRYGate(q, 2.90526712994363, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.1445126964167017, 5);
  sqcRYGate(q, -2.5560771737455488, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3039620645558625, 0);
  sqcRYGate(q, -2.0110062546244256, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.373380344956534, 0);
  sqcRYGate(q, -0.9715920861675846, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1336576820295288, 2);
  sqcRYGate(q, -3.0241328662471867, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8927017618536373, 2);
  sqcRYGate(q, -1.9760048232926377, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.584325580863063, 4);
  sqcRYGate(q, -2.5494396417616882, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3176305796999292, 4);
  sqcRYGate(q, 1.1039515789898475, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8247730892901046, 6);
  sqcRYGate(q, 0.8977686243308292, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3333578795510785, 6);
  sqcRYGate(q, 0.8474982412292245, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8836112900595445, 1);
  sqcRYGate(q, -2.4644828297513652, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.714214020175099, 1);
  sqcRYGate(q, -2.735169954419789, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9261291547617008, 3);
  sqcRYGate(q, -1.7333430986459786, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.800266295152761, 3);
  sqcRYGate(q, 2.534406651823518, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1075931741497271, 5);
  sqcRYGate(q, -1.6204209512539833, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7400753019496928, 5);
  sqcRYGate(q, -0.3039403304599527, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4471368800413478, 0);
  sqcRYGate(q, 2.4716550940636606, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.141435163073556, 0);
  sqcRYGate(q, -1.1228783095544281, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5431644541804923, 2);
  sqcRYGate(q, 3.0435950414281514, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5693876708786957, 2);
  sqcRYGate(q, 2.0477238521837413, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.109067211563315, 4);
  sqcRYGate(q, 0.39036544001579365, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1195786702798025, 4);
  sqcRYGate(q, 1.5233375369103577, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2477395498205084, 6);
  sqcRYGate(q, 3.0571745389110885, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7709581956139084, 6);
  sqcRYGate(q, -1.9356630170312288, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8075645269704994, 1);
  sqcRYGate(q, -2.4653204472432795, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4870633343961037, 1);
  sqcRYGate(q, -1.44642363953486, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5837605418560536, 3);
  sqcRYGate(q, 2.714185223382429, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6995553429709229, 3);
  sqcRYGate(q, 1.0203580605988645, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4014295722792776, 5);
  sqcRYGate(q, 2.5700896831462265, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6456406076271692, 5);
  sqcRYGate(q, 2.7970386881655873, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1859911212686296, 0);
  sqcRYGate(q, 1.0484531761546005, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5363034313462753, 0);
  sqcRYGate(q, -1.8921880955567594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4020919301687353, 2);
  sqcRYGate(q, -0.6168040369009995, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.202521998650069, 2);
  sqcRYGate(q, 2.6481466303974703, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.016876609404301, 4);
  sqcRYGate(q, 1.350860213713782, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.12588431284150303, 4);
  sqcRYGate(q, -1.6489107360971134, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.880336584819136, 6);
  sqcRYGate(q, 1.4871702471022752, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.02382748917062067, 6);
  sqcRYGate(q, -2.162566096488921, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1776377150534694, 1);
  sqcRYGate(q, 0.6981405824107485, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5125474847125846, 1);
  sqcRYGate(q, 1.773561860903097, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0597572409035338, 3);
  sqcRYGate(q, 1.8553095211754833, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9766235097516924, 3);
  sqcRYGate(q, -1.4232636339064921, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8563862435072827, 5);
  sqcRYGate(q, 2.3310248687534845, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9937930902500396, 5);
  sqcRYGate(q, -0.20406908654019418, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9440074228962327, 0);
  sqcRYGate(q, -2.597523068398092, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4104339969495276, 0);
  sqcRYGate(q, 1.0137185895901055, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5586915213836883, 2);
  sqcRYGate(q, 2.6802859324525623, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9916452784398064, 2);
  sqcRYGate(q, -0.47915127344241526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1537024714096997, 4);
  sqcRYGate(q, 2.251975527479983, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7900790128745259, 4);
  sqcRYGate(q, 2.1379632151641514, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2604904318925803, 6);
  sqcRYGate(q, 0.90167217168805, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0579480600238522, 6);
  sqcRYGate(q, -2.828701877081895, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5879536131692866, 1);
  sqcRYGate(q, 1.1821040927917865, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6412118898649624, 1);
  sqcRYGate(q, -3.0440422006013783, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.504454849980393, 3);
  sqcRYGate(q, 0.7327934976954797, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.39279686843614314, 3);
  sqcRYGate(q, 0.7143214892800958, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.193267221268405, 5);
  sqcRYGate(q, 0.21398036252170613, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4378716074713105, 5);
  sqcRYGate(q, -1.7159919607937388, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.08445643129126651, 0);
  sqcRYGate(q, -1.8028785009060497, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0868098305953735, 0);
  sqcRYGate(q, -2.860907797047362, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7675229965855803, 2);
  sqcRYGate(q, 2.9930751596173155, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.09075729198282101, 2);
  sqcRYGate(q, 0.5332087274476206, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.211944935844601, 4);
  sqcRYGate(q, -3.0254339375716506, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.072110294215106, 4);
  sqcRYGate(q, 0.14393040657259337, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9425238904968802, 6);
  sqcRYGate(q, 0.4140710896003487, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4597239194068666, 6);
  sqcRYGate(q, 0.9706857036059132, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4656231799873454, 1);
  sqcRYGate(q, 2.229798150639267, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5413607765193398, 1);
  sqcRYGate(q, -1.8731112172169129, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.46860675397113916, 3);
  sqcRYGate(q, 0.5221204411707947, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.715829979970358, 3);
  sqcRYGate(q, 3.0278494985329525, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.332756193879992, 5);
  sqcRYGate(q, -0.21383372299165737, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.4380501629661384, 5);
  sqcRYGate(q, -1.0336500593756213, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.732192270822778, 0);
  sqcRYGate(q, 0.9134095249469574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9731988949278692, 0);
  sqcRYGate(q, -0.5861542329507764, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8760771670286558, 2);
  sqcRYGate(q, -0.15363681313096458, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1359573630616895, 2);
  sqcRYGate(q, -2.5357160745262113, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.02608485660839653, 4);
  sqcRYGate(q, -0.7428217488152153, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8282125768062312, 4);
  sqcRYGate(q, 2.2469678533520305, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.035337929015138, 6);
  sqcRYGate(q, 3.0516312827667464, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0043740065837543, 6);
  sqcRYGate(q, -0.5716716342962106, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.198823594048041, 1);
  sqcRYGate(q, -2.5135018806052267, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3501381687138893, 1);
  sqcRYGate(q, -2.4237575673112874, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5099743675948436, 3);
  sqcRYGate(q, -2.7541375870673583, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.09556315778848, 3);
  sqcRYGate(q, 3.0995036921200083, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2585392232574604, 5);
  sqcRYGate(q, 3.1136379292602596, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2174585828253388, 5);
  sqcRYGate(q, 2.3306495349867626, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5766853516102846, 0);
  sqcRYGate(q, 1.2012246329066478, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8841798094467297, 0);
  sqcRYGate(q, -2.889916248345645, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5049028141418839, 2);
  sqcRYGate(q, 3.135013130994901, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7922485970205595, 2);
  sqcRYGate(q, 1.756986847852751, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9253424351215966, 4);
  sqcRYGate(q, 1.0746487909894948, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.18461256120694855, 4);
  sqcRYGate(q, -0.04552082494938148, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3900549040002008, 6);
  sqcRYGate(q, 1.8060027948806001, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1094185033173334, 6);
  sqcRYGate(q, -0.5685050065944113, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.12275173911919256, 1);
  sqcRYGate(q, 2.535447473825956, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.920569258112404, 1);
  sqcRYGate(q, -1.8929475681396757, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0771864958846875, 3);
  sqcRYGate(q, 0.48766974653297446, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.14657418000888586, 3);
  sqcRYGate(q, 0.12273044735134568, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9992238661036524, 5);
  sqcRYGate(q, -2.6744505889253807, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5762819364620368, 5);
  sqcRYGate(q, -2.3963419242946475, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.1025979532572968, 0);
  sqcRYGate(q, -3.0338923260851214, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6537705938240476, 0);
  sqcRYGate(q, -2.6120533240158315, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3341670333154457, 2);
  sqcRYGate(q, 0.04684947785820521, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.469779298870321, 2);
  sqcRYGate(q, 0.8828179619224913, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4497126612969851, 4);
  sqcRYGate(q, 0.610093469119648, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4155948260713025, 4);
  sqcRYGate(q, 0.7400615741211306, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5554465799744779, 6);
  sqcRYGate(q, -0.781915485256885, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.417195049459171, 6);
  sqcRYGate(q, 2.299822717990511, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3212145645150906, 1);
  sqcRYGate(q, -0.00574203913452731, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.680110964840674, 1);
  sqcRYGate(q, -2.762905570589874, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.87850844979509, 3);
  sqcRYGate(q, 0.8002353349640448, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8932241546142989, 3);
  sqcRYGate(q, 0.09879464149079631, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9221617360170735, 5);
  sqcRYGate(q, -1.7288633500731654, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4400925495717303, 5);
  sqcRYGate(q, -0.7348843550864954, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7837899525704817, 0);
  sqcRYGate(q, -1.481336567132831, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7206529461600475, 0);
  sqcRYGate(q, -0.3124769470918621, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2037085675872237, 2);
  sqcRYGate(q, 2.598598188676656, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5871331042469996, 2);
  sqcRYGate(q, 2.038059028329668, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.018790813992232, 4);
  sqcRYGate(q, 1.4397922947029034, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.1617773062038595, 4);
  sqcRYGate(q, 1.862937019623037, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.12804268468206884, 6);
  sqcRYGate(q, -0.5172373813856392, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0345613279629147, 6);
  sqcRYGate(q, 2.2059104283612836, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.737471456992675, 1);
  sqcRYGate(q, -3.0287816192956067, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3956974171842464, 1);
  sqcRYGate(q, 2.8682582489639263, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.963347245561614, 3);
  sqcRYGate(q, -2.8372679710041155, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4243299165807626, 3);
  sqcRYGate(q, -3.1055733399482404, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6859473894274704, 5);
  sqcRYGate(q, -2.7049143479428026, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7505237502120374, 5);
  sqcRYGate(q, -3.0201702225651745, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.4874857676553323, 0);
  sqcRYGate(q, -1.6033558313346354, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.214963163645478, 0);
  sqcRYGate(q, 1.6037696140417577, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9011032529184764, 2);
  sqcRYGate(q, -1.1964433439702429, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3952132263660417, 2);
  sqcRYGate(q, 0.7995097190465082, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.26160358181740406, 4);
  sqcRYGate(q, 2.2990536026305843, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.024824061128018243, 4);
  sqcRYGate(q, -1.502885468075979, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.023505735608401856, 6);
  sqcRYGate(q, -0.5906884531288447, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.03889623562718825, 6);
  sqcRYGate(q, -1.6421913928675993, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6407491667433041, 1);
  sqcRYGate(q, 0.22961954011955998, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9298646632752803, 1);
  sqcRYGate(q, 2.8681578360052966, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.136914274236367, 3);
  sqcRYGate(q, 1.0237075806934808, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.487721824390748, 3);
  sqcRYGate(q, -2.4972093674992126, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9776902960762435, 5);
  sqcRYGate(q, 1.6252835243222106, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8625168180402107, 5);
  sqcRYGate(q, 1.3079574417735795, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.854492863211862, 0);
  sqcRYGate(q, 1.7339717481112276, 1);
  sqcRYGate(q, -0.31348546827762647, 2);
  sqcRYGate(q, -2.5770511818750177, 3);
  sqcRYGate(q, 1.3254016654508423, 4);
  sqcRYGate(q, -2.637984059571651, 5);
  sqcRYGate(q, 2.851173811376989, 6);
  sqcRYGate(q, 1.198073642118776, 7);

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
