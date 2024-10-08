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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 1.87444124467873, 0);
  sqcRYGate(q, 1.9696201984337227, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9729141058847837, 0);
  sqcRYGate(q, -1.09454017795992, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.23571552376280758, 2);
  sqcRYGate(q, -2.110792606239184, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8513008999636411, 2);
  sqcRYGate(q, -1.4102334236556784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9812360650602765, 4);
  sqcRYGate(q, -0.9423470057774667, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7039463395610444, 4);
  sqcRYGate(q, -1.223809762087612, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.35690636249252067, 6);
  sqcRYGate(q, 2.2383188219444503, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.1886813915044549, 6);
  sqcRYGate(q, -0.2589326645623169, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9952644936545345, 8);
  sqcRYGate(q, 0.8181263650346233, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.06260956679834, 8);
  sqcRYGate(q, 0.361968535872122, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6329824362740977, 10);
  sqcRYGate(q, -1.899452657448796, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.7327184561306748, 10);
  sqcRYGate(q, -1.13198847467872, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.4556189009976295, 12);
  sqcRYGate(q, 2.2446074514247103, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.7825176561555337, 12);
  sqcRYGate(q, 0.729266199418019, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.7820267084535848, 14);
  sqcRYGate(q, -0.13127255040641916, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.8124832189769853, 14);
  sqcRYGate(q, 2.2867268037059807, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.887485361748876, 16);
  sqcRYGate(q, 1.1566473824140946, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.1919152614686803, 16);
  sqcRYGate(q, -2.2166811555847867, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -3.0071806618137775, 18);
  sqcRYGate(q, -0.04670416586481404, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.156937878379189, 18);
  sqcRYGate(q, 2.800223550876732, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -0.37934881856672664, 1);
  sqcRYGate(q, -2.8365564138315262, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0233261557090726, 1);
  sqcRYGate(q, -2.1669500486684483, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7174175623884562, 3);
  sqcRYGate(q, 2.146431475280703, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5827008771570732, 3);
  sqcRYGate(q, 0.04633101846722987, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.31566255271269, 5);
  sqcRYGate(q, -1.7218158794211342, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8926473053962027, 5);
  sqcRYGate(q, -1.7566490952234002, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3352538971127927, 7);
  sqcRYGate(q, 1.5952059169841835, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.025889378986133416, 7);
  sqcRYGate(q, -2.641664310974821, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.653768711223167, 9);
  sqcRYGate(q, 2.02987235993033, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.3706450656519298, 9);
  sqcRYGate(q, 0.8192702999621231, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.123109340461185, 11);
  sqcRYGate(q, -2.4283165799851045, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.41856890909723177, 11);
  sqcRYGate(q, -0.019876373032143846, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.2012272203440375, 13);
  sqcRYGate(q, -2.9154689736610453, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.557461498908984, 13);
  sqcRYGate(q, 0.1084597257651021, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.7317661257151871, 15);
  sqcRYGate(q, -1.2792889623340704, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.3527790834597506, 15);
  sqcRYGate(q, 2.4623910083871756, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.2783822960724844, 17);
  sqcRYGate(q, -1.235615525660302, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.8467908441541718, 17);
  sqcRYGate(q, -0.5403257378594657, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.7657737349004783, 0);
  sqcRYGate(q, 2.8307599288639387, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.466525849697456, 0);
  sqcRYGate(q, -1.8965708871920892, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.681616634102841, 2);
  sqcRYGate(q, 0.7638132384895299, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.05645681833401, 2);
  sqcRYGate(q, 2.3509272302173043, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4869717173583643, 4);
  sqcRYGate(q, 1.5587012332994676, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.669681573280458, 4);
  sqcRYGate(q, 1.1460435896108485, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.32574358153059, 6);
  sqcRYGate(q, 2.8671307142119726, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.054040313442319264, 6);
  sqcRYGate(q, -1.5594126546100666, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.3418479230910238, 8);
  sqcRYGate(q, -1.4041937518978995, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.660996751000404, 8);
  sqcRYGate(q, 1.7143393137943816, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.5652833244968222, 10);
  sqcRYGate(q, -0.09317336696765502, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.9505505193134617, 10);
  sqcRYGate(q, 1.002715186801672, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.3101144710966466, 12);
  sqcRYGate(q, 3.1179332247285023, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.5588997259361088, 12);
  sqcRYGate(q, -2.479959286995731, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.5360459947575169, 14);
  sqcRYGate(q, 1.8203394448222547, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.926456919347757, 14);
  sqcRYGate(q, -2.7924248645003895, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.006141454812928, 16);
  sqcRYGate(q, 1.0904273630919645, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.239168850780065, 16);
  sqcRYGate(q, 1.0455553068343075, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.5517163003638466, 18);
  sqcRYGate(q, -2.61864707441496, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.276644986973287, 18);
  sqcRYGate(q, -0.7709806653734275, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.9114747651606692, 1);
  sqcRYGate(q, 1.4188688942720513, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.08387886435102487, 1);
  sqcRYGate(q, 0.7093604552049717, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.17886287483915453, 3);
  sqcRYGate(q, 2.759327564929656, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0084763290594103, 3);
  sqcRYGate(q, -1.61122239509392, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5597367063584595, 5);
  sqcRYGate(q, 1.7027700079682138, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5239446880473753, 5);
  sqcRYGate(q, -2.0711550891337653, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8975434074459034, 7);
  sqcRYGate(q, -2.3650359498039584, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.802316923157103, 7);
  sqcRYGate(q, -1.6613243403498972, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.810312313069029, 9);
  sqcRYGate(q, 0.8877982033799334, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.2617494838244463, 9);
  sqcRYGate(q, -1.5343018907350947, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.646048974830327, 11);
  sqcRYGate(q, 1.90068353446234, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.6688137251021566, 11);
  sqcRYGate(q, 2.1647350867842157, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5731058461630725, 13);
  sqcRYGate(q, -0.791913259124466, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.673193738572845, 13);
  sqcRYGate(q, 2.1669110357178805, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.7132750266346672, 15);
  sqcRYGate(q, 1.5050878129314766, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.03050080448723147, 15);
  sqcRYGate(q, 0.02220451264214507, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.193996115764299, 17);
  sqcRYGate(q, 0.7346645349453035, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.144542763220507, 17);
  sqcRYGate(q, -0.05416115253759572, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.4347540904383376, 0);
  sqcRYGate(q, 1.615354765780246, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7290171035428301, 0);
  sqcRYGate(q, -0.16611660447636023, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4230013845407754, 2);
  sqcRYGate(q, 2.5100550639165986, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8446809187402606, 2);
  sqcRYGate(q, 1.5997711261753684, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5285977821297447, 4);
  sqcRYGate(q, 2.0777309137696465, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0237017747939348, 4);
  sqcRYGate(q, 0.0021088209463015753, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0375788117679767, 6);
  sqcRYGate(q, 0.27628950749363934, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9274629652646857, 6);
  sqcRYGate(q, -0.8537606742244952, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.567669130547119, 8);
  sqcRYGate(q, -0.6849495116208956, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.855395789095886, 8);
  sqcRYGate(q, -0.6268667820381681, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.037098818595693, 10);
  sqcRYGate(q, -0.20793808183028964, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6238680823626224, 10);
  sqcRYGate(q, 3.096335585152092, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.413377591963897, 12);
  sqcRYGate(q, 2.465979316540482, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.128473578621517, 12);
  sqcRYGate(q, 3.1401356322604834, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.4855267280616395, 14);
  sqcRYGate(q, 0.667656762554814, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.278736031491139, 14);
  sqcRYGate(q, 0.28925407576405426, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.0048334243198003, 16);
  sqcRYGate(q, -1.9085111028965072, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.221651604018997, 16);
  sqcRYGate(q, 1.4443410044406324, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.8947309577158018, 18);
  sqcRYGate(q, 2.6080146367540826, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.9798459695330903, 18);
  sqcRYGate(q, 0.35847804039086917, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.1622037654170827, 1);
  sqcRYGate(q, 1.3767505937597282, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6066134385419115, 1);
  sqcRYGate(q, 3.1223404336042253, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3944955689209928, 3);
  sqcRYGate(q, -2.4539105528903646, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.18123475859842242, 3);
  sqcRYGate(q, -2.769397753947147, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.204906041257841, 5);
  sqcRYGate(q, 2.2593164028106774, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.060416164625281, 5);
  sqcRYGate(q, -1.8842655232719228, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8960274400080337, 7);
  sqcRYGate(q, -2.962743283856567, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.120838273606069, 7);
  sqcRYGate(q, -1.0765074877238758, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.3186864625885775, 9);
  sqcRYGate(q, -1.4802541288812319, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5874866870618143, 9);
  sqcRYGate(q, 1.6471028635089326, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.609009417363385, 11);
  sqcRYGate(q, -0.8454164148555289, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.8529292232348733, 11);
  sqcRYGate(q, 0.053700281099254864, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.2980848175589697, 13);
  sqcRYGate(q, 1.6507794408321264, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.816114293029615, 13);
  sqcRYGate(q, 0.640682478650864, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.207601983450772, 15);
  sqcRYGate(q, 0.3344207535254071, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.012398614894945493, 15);
  sqcRYGate(q, -3.122999022491732, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.4017509932176404, 17);
  sqcRYGate(q, -1.5101215664716579, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.17762264392729968, 17);
  sqcRYGate(q, 1.8664970685877362, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.2773164208406484, 0);
  sqcRYGate(q, -2.011858377880674, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.013581290212877, 0);
  sqcRYGate(q, 0.9856938735912069, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0029133572181043515, 2);
  sqcRYGate(q, -0.9706342015874131, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.570244336121702, 2);
  sqcRYGate(q, -1.5807588156196448, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4895512997153773, 4);
  sqcRYGate(q, 3.1413672781377473, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6438638621041708, 4);
  sqcRYGate(q, 0.14208276442787415, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6598886689040966, 6);
  sqcRYGate(q, 2.5643253611037182, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8401010672594342, 6);
  sqcRYGate(q, 3.115777880930593, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8481000514226196, 8);
  sqcRYGate(q, -0.1582893798170343, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.1182192942415825, 8);
  sqcRYGate(q, 0.7540698340659439, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5661446413322588, 10);
  sqcRYGate(q, 0.24443532071668303, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.542690588970415, 10);
  sqcRYGate(q, -1.5601890026193088, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.8907089175664265, 12);
  sqcRYGate(q, -2.703130450549239, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.7584377707939804, 12);
  sqcRYGate(q, -3.1245893212828966, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.0274452734935, 14);
  sqcRYGate(q, -2.745320487486286, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.84580427537114, 14);
  sqcRYGate(q, -2.8597128218676446, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.177370109180698, 16);
  sqcRYGate(q, -0.9821395645845553, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.7435416527550167, 16);
  sqcRYGate(q, 1.920572301616084, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.314817631329415, 18);
  sqcRYGate(q, 1.7564315310940577, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.20829714785889075, 18);
  sqcRYGate(q, -1.6681338258261613, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.0627401354846597, 1);
  sqcRYGate(q, 0.12377023569724488, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5634716547352658, 1);
  sqcRYGate(q, -1.86591030024643, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.186735143057221, 3);
  sqcRYGate(q, -2.2753378123605463, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8028082084443444, 3);
  sqcRYGate(q, -1.4970288299412515, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.556571955345332, 5);
  sqcRYGate(q, -2.8290874429212653, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0893029970228127, 5);
  sqcRYGate(q, 1.685936256904271, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.590738505636897, 7);
  sqcRYGate(q, 1.4712756055461549, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.46390934146227364, 7);
  sqcRYGate(q, -2.390782380620111, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.9916082754097167, 9);
  sqcRYGate(q, 3.066407222098332, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.3016676091904135, 9);
  sqcRYGate(q, 1.4627500090264283, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5220205611644797, 11);
  sqcRYGate(q, 3.022807097214464, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5250079490401944, 11);
  sqcRYGate(q, 1.5649214838107912, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.6132414045773729, 13);
  sqcRYGate(q, 2.6302137751749166, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.804766327546221, 13);
  sqcRYGate(q, -2.7407962545866473, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.16305802842793593, 15);
  sqcRYGate(q, 2.676213424066418, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.1646570984412863, 15);
  sqcRYGate(q, -1.4040435622862963, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.25699715960142827, 17);
  sqcRYGate(q, -1.5532261344619513, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.9542781930943827, 17);
  sqcRYGate(q, -1.6660675760411294, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.74700084285311, 0);
  sqcRYGate(q, 0.09830059116916434, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6301579527643721, 0);
  sqcRYGate(q, -0.04630955517821655, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.443876132986207, 2);
  sqcRYGate(q, -2.6064797142318405, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.008473260531722815, 2);
  sqcRYGate(q, 0.0017357137996061311, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5303937847678082, 4);
  sqcRYGate(q, 3.0520418072120163, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1408216143403003, 4);
  sqcRYGate(q, 1.5574315919905446, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.15479682989494278, 6);
  sqcRYGate(q, -1.9922407718829764, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6361470890733394, 6);
  sqcRYGate(q, -1.4897044359249814, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5944696399930542, 8);
  sqcRYGate(q, 1.610974951670593, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5559828844871968, 8);
  sqcRYGate(q, -1.4853605934082048, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.8700082501749256, 10);
  sqcRYGate(q, 2.5900952965569113, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.037739552630850604, 10);
  sqcRYGate(q, 0.00558783802395979, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.559698304169988, 12);
  sqcRYGate(q, 1.5824893193161405, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5362385661010025, 12);
  sqcRYGate(q, -1.5893574732982985, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.07895304363900832, 14);
  sqcRYGate(q, 2.955959013446897, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.3982460351892456, 14);
  sqcRYGate(q, 1.566224007981154, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.315090771397829, 16);
  sqcRYGate(q, -3.0756011962818492, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 3.0573325229778705, 16);
  sqcRYGate(q, -1.6338274717715673, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.418590532840052, 18);
  sqcRYGate(q, 0.5255085256567718, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.107857243555654, 18);
  sqcRYGate(q, 0.5933861894100421, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.7117285376153197, 1);
  sqcRYGate(q, 2.9529150113219726, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.566618245316916, 1);
  sqcRYGate(q, -1.7107685794610152, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1959186178779113, 3);
  sqcRYGate(q, 0.04367321616677935, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.503725985812257, 3);
  sqcRYGate(q, -1.5471942955763902, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.325053823527335, 5);
  sqcRYGate(q, -1.0780001809539714, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.008824209153373093, 5);
  sqcRYGate(q, -0.0054176145286485115, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.12623487118796436, 7);
  sqcRYGate(q, 1.8416221611636239, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.104807949412588, 7);
  sqcRYGate(q, 0.26364342097159804, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.8745471497498847, 9);
  sqcRYGate(q, 2.990380450500385, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.8332271673837415, 9);
  sqcRYGate(q, -1.180322845243947, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.2626491804165303, 11);
  sqcRYGate(q, 1.563754387819019, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.9743975221271564, 11);
  sqcRYGate(q, 0.006121742969629204, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.7703427534240853, 13);
  sqcRYGate(q, 2.37878957424749, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.1098722079384391, 13);
  sqcRYGate(q, -0.370987242102499, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.9626173728063403, 15);
  sqcRYGate(q, 0.41451853336882305, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -3.0008907369484064, 15);
  sqcRYGate(q, 0.1301422017014293, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.74735679143625, 17);
  sqcRYGate(q, -1.4726090034023325, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.7289811061443334, 17);
  sqcRYGate(q, 3.00326125502684, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.84483976626847, 0);
  sqcRYGate(q, 3.109093284293515, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4889004490916653, 0);
  sqcRYGate(q, 3.074276777560145, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6011230132193728, 2);
  sqcRYGate(q, -0.0039772775218104755, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.710432913487963, 2);
  sqcRYGate(q, 0.06552119036448112, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3335253391341744, 4);
  sqcRYGate(q, 2.2313862181587156, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1363498212657044, 4);
  sqcRYGate(q, 1.562856765809506, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1309843937042046, 6);
  sqcRYGate(q, -3.0976028098756707, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5616558841745245, 6);
  sqcRYGate(q, 1.4747254980466673, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5425735597756686, 8);
  sqcRYGate(q, -0.9091416509638002, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.9600679818609565, 8);
  sqcRYGate(q, 1.5713525913606687, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.3865499318208376, 10);
  sqcRYGate(q, 2.0818729301572727, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.011737305562241986, 10);
  sqcRYGate(q, 0.0053108074448050555, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.572780551965804, 12);
  sqcRYGate(q, -2.527797710020464, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.4852167813414983, 12);
  sqcRYGate(q, -1.6270901883953022, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.48002081619408443, 14);
  sqcRYGate(q, -1.8405366432019918, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.8658066058741751, 14);
  sqcRYGate(q, -1.597285360516417, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.1051301975326326, 16);
  sqcRYGate(q, 1.404476865138993, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.207266561030681, 16);
  sqcRYGate(q, -1.4226231315450457, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.6633508774739325, 18);
  sqcRYGate(q, 2.3805456315068594, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.3754362124543505, 18);
  sqcRYGate(q, -1.3267145387130768, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.4579854597803488, 1);
  sqcRYGate(q, -0.9930895113227658, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5176470867891165, 1);
  sqcRYGate(q, -1.4185550296859388, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0036509303769429228, 3);
  sqcRYGate(q, 0.11143771697051896, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2147015214626515, 3);
  sqcRYGate(q, -1.5432290487631255, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5959191663559125, 5);
  sqcRYGate(q, 0.31766511721488233, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4645492470123709, 5);
  sqcRYGate(q, -1.4428925813450144, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.459811085108401, 7);
  sqcRYGate(q, 1.13801716914063, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.017036532601284016, 7);
  sqcRYGate(q, 0.025495838049345524, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.521244498651944, 9);
  sqcRYGate(q, -0.455334360339819, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.7115462805369694, 9);
  sqcRYGate(q, -1.5642677318459528, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.2728489224076602, 11);
  sqcRYGate(q, 0.4673317192070367, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.46756880980011584, 11);
  sqcRYGate(q, -1.5533404559838886, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.06494732541232953, 13);
  sqcRYGate(q, 2.9978510869708606, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.3403415204994511, 13);
  sqcRYGate(q, -1.5769467976648608, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.800401592853021, 15);
  sqcRYGate(q, -3.079954758549276, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.5019808111511486, 15);
  sqcRYGate(q, 1.6473016563571456, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.7286807990087674, 17);
  sqcRYGate(q, -1.5722103681562372, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.8329957933675138, 17);
  sqcRYGate(q, 1.4710091573357054, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.5457771684109094, 0);
  sqcRYGate(q, -0.04121386458494503, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5488616330361593, 0);
  sqcRYGate(q, -1.4327790821169462, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5745900350400317, 2);
  sqcRYGate(q, 0.048007128402054455, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5686770793166342, 2);
  sqcRYGate(q, -1.5690940356418404, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8804265162650579, 4);
  sqcRYGate(q, 2.794197814213324, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7721483867521304, 4);
  sqcRYGate(q, -0.01711632099205882, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.704110965447237, 6);
  sqcRYGate(q, -0.5656463500489498, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.02132935703293803, 6);
  sqcRYGate(q, -0.7264562845056856, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5196800613874886, 8);
  sqcRYGate(q, -1.5839984584598468, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.5151373160981887, 8);
  sqcRYGate(q, -2.030484808993096, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.09414084612977859, 10);
  sqcRYGate(q, -0.23198020271197084, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.053719172626219, 10);
  sqcRYGate(q, -3.1221150990232394, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.48355756321104804, 12);
  sqcRYGate(q, 1.9882946569141384, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.1283967738666125, 12);
  sqcRYGate(q, 0.019003261213654584, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.2353050439008566, 14);
  sqcRYGate(q, 2.9307650266520215, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.0812669230787824, 14);
  sqcRYGate(q, 1.8802269329115884, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.226105956058852, 16);
  sqcRYGate(q, 1.4988823886489457, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.4514128483903121, 16);
  sqcRYGate(q, 2.784505417271653, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.1388584460815867, 18);
  sqcRYGate(q, 2.720678486714376, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.1697208490383746, 18);
  sqcRYGate(q, -0.17770363823166604, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.6606064169052797, 1);
  sqcRYGate(q, 0.003714592581221865, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.563684187896067, 1);
  sqcRYGate(q, 1.5829420136726111, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.014374953359610922, 3);
  sqcRYGate(q, 1.7142523780591015, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1391922866784525, 3);
  sqcRYGate(q, 2.0680743421932926, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.010810486594633, 5);
  sqcRYGate(q, -0.3764778775798554, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.135222599660817, 5);
  sqcRYGate(q, 3.051433197247093, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6629538967247744, 7);
  sqcRYGate(q, -2.9591889815560255, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.35410926219090655, 7);
  sqcRYGate(q, 0.11265527795683372, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.7373227309749946, 9);
  sqcRYGate(q, 2.3211306970488073, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.391880180165553, 9);
  sqcRYGate(q, 0.011799174030049549, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.2775653792185904, 11);
  sqcRYGate(q, 2.0613230255456036, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.064692162168778, 11);
  sqcRYGate(q, -2.221644966048112, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.2136643805432623, 13);
  sqcRYGate(q, 0.21786877310280153, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5709428589401713, 13);
  sqcRYGate(q, 3.13211718647469, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.517985119139384, 15);
  sqcRYGate(q, 1.4800889816136955, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.596942915008003, 15);
  sqcRYGate(q, -3.1356528296568245, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -3.112597746220956, 17);
  sqcRYGate(q, 2.2934713356393046, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.6722846096462785, 17);
  sqcRYGate(q, 1.5571898497502712, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 3.02772194199926, 0);
  sqcRYGate(q, -0.08374189256926967, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5312094107390863, 0);
  sqcRYGate(q, 1.544056816293322, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9575834441891091, 2);
  sqcRYGate(q, 1.6072039392321935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6681221896743743, 2);
  sqcRYGate(q, -3.1306748860047406, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1884803787201201, 4);
  sqcRYGate(q, -0.32453017789725447, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.19923456981777488, 4);
  sqcRYGate(q, 0.00756482494441002, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8183401810184336, 6);
  sqcRYGate(q, -2.9374368153390873, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.016702501676895132, 6);
  sqcRYGate(q, -0.7586261566720226, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9607998945821656, 8);
  sqcRYGate(q, 1.9669091052657244, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.571980381322475, 8);
  sqcRYGate(q, 2.820770052771496, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.0572683206356883, 10);
  sqcRYGate(q, 0.5028739312080379, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.001700116502268756, 10);
  sqcRYGate(q, 1.2959975877656713, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.9439467695651382, 12);
  sqcRYGate(q, 2.1376303854815744, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.1403519058615936, 12);
  sqcRYGate(q, 3.1377329096285314, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.397111327593046, 14);
  sqcRYGate(q, 1.2910021961441194, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.2761791083228191, 14);
  sqcRYGate(q, -1.9464023047723047, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.026940596643832748, 16);
  sqcRYGate(q, 1.8673967775264766, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 3.0896554902721256, 16);
  sqcRYGate(q, -2.6826267431305, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -3.072220041906579, 18);
  sqcRYGate(q, 0.03647294024677361, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.565012131127869, 18);
  sqcRYGate(q, -0.6380228576573801, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.5432911046218076, 1);
  sqcRYGate(q, 2.694762430983746, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0079682155934835, 1);
  sqcRYGate(q, 3.0153284840078927, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1102806532365115, 3);
  sqcRYGate(q, -1.2042508328618244, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9026997975877232, 3);
  sqcRYGate(q, -2.5637988484383545, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0684088422123246, 5);
  sqcRYGate(q, -1.7225167436637903, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4002628967160504, 5);
  sqcRYGate(q, -0.284370232127122, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9535370460232278, 7);
  sqcRYGate(q, 1.3320470949232748, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.6206436891532443, 7);
  sqcRYGate(q, -1.5217223730174148, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.2850604328903172, 9);
  sqcRYGate(q, -0.7582142362043864, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.138458046922382, 9);
  sqcRYGate(q, -3.136735118205021, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.7178751686357313, 11);
  sqcRYGate(q, 0.007164795560259273, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.6103759210287774, 11);
  sqcRYGate(q, -3.135050279513586, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.8482122869617763, 13);
  sqcRYGate(q, 0.41349278763981545, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.676713649610171, 13);
  sqcRYGate(q, 0.0047649970073342365, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.81410000943939, 15);
  sqcRYGate(q, -1.5755163392683924, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.119772603055047, 15);
  sqcRYGate(q, 3.088455115938332, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.8982129186095726, 17);
  sqcRYGate(q, 1.5817382484014963, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.5010543895968729, 17);
  sqcRYGate(q, -3.119327055076919, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.1139121863814108, 0);
  sqcRYGate(q, -0.22890568094745592, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.11079499114572311, 0);
  sqcRYGate(q, -0.052973122137844456, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2757325155395844, 2);
  sqcRYGate(q, -0.5696540911515032, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.086081241233917, 2);
  sqcRYGate(q, -3.1306592087065734, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8643257771041295, 4);
  sqcRYGate(q, 2.8951460452736995, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.130221489656026, 4);
  sqcRYGate(q, -0.008500487092470976, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.810557668838201, 6);
  sqcRYGate(q, -0.04693629161509705, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.27273751734385304, 6);
  sqcRYGate(q, 0.12532436975673367, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.007265312980187, 8);
  sqcRYGate(q, -0.37929497193109446, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.3417473740954975, 8);
  sqcRYGate(q, -3.1073651366238186, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.744291158709974, 10);
  sqcRYGate(q, -2.811712717495439, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.008793083867046228, 10);
  sqcRYGate(q, -1.8392831604710496, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9916292391107877, 12);
  sqcRYGate(q, 0.8668665764429617, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.1412473219921715, 12);
  sqcRYGate(q, -0.08795611077205301, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.0027980230709871755, 14);
  sqcRYGate(q, 2.9452027641359453, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.9576754806244923, 14);
  sqcRYGate(q, -1.5635192707102465, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.6197209392698753, 16);
  sqcRYGate(q, 2.642324907832625, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.7255829885847758, 16);
  sqcRYGate(q, -2.64552355574122, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.9568563227284588, 18);
  sqcRYGate(q, -3.109253672526787, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.0672733017541933, 18);
  sqcRYGate(q, 1.245838805410101, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.8385956638304749, 1);
  sqcRYGate(q, -1.8077104999518199, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.708102779636354, 1);
  sqcRYGate(q, -1.6565327565119112, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.09153326848235077, 3);
  sqcRYGate(q, -2.863725282056001, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2328959289035275, 3);
  sqcRYGate(q, -1.5818408811551112, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.33667549424851045, 5);
  sqcRYGate(q, -2.407116083085395, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.09222042492141824, 5);
  sqcRYGate(q, -1.524306054587691, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.055227044290511174, 7);
  sqcRYGate(q, 1.0376214814777334, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.6234182654382574, 7);
  sqcRYGate(q, -1.5522029186343016, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.562909771926242, 9);
  sqcRYGate(q, -2.324377917916284, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.010148366459264476, 9);
  sqcRYGate(q, 2.8045412002007057, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.228221020257696, 11);
  sqcRYGate(q, 2.947851362004892, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.923837156606389, 11);
  sqcRYGate(q, -1.462593927132446, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.477793287766429, 13);
  sqcRYGate(q, -2.2096725040917358, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.057824747229929585, 13);
  sqcRYGate(q, -3.1165631649944956, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.11860385974361076, 15);
  sqcRYGate(q, -1.5298816095515955, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 3.0036998042888126, 15);
  sqcRYGate(q, 1.6504872099321757, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -3.1395820660629443, 17);
  sqcRYGate(q, 0.6413542749093359, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.5954177627126553, 17);
  sqcRYGate(q, -1.571532982299317, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 3.075990680717356, 0);
  sqcRYGate(q, -2.703260405323607, 1);
  sqcRYGate(q, -2.7429006405655456, 2);
  sqcRYGate(q, -0.9231308999764225, 3);
  sqcRYGate(q, -1.269350935735385, 4);
  sqcRYGate(q, -1.4035211196582562, 5);
  sqcRYGate(q, 2.7382390727919512, 6);
  sqcRYGate(q, 2.793837791784944, 7);
  sqcRYGate(q, -1.4289030819256219, 8);
  sqcRYGate(q, -1.2103368700733657, 9);
  sqcRYGate(q, -1.3265075253527345, 10);
  sqcRYGate(q, 2.0417403781700667, 11);
  sqcRYGate(q, 1.7903328466863666, 12);
  sqcRYGate(q, 0.38737121373867733, 13);
  sqcRYGate(q, -1.4996869141772988, 14);
  sqcRYGate(q, -1.7871706597013732, 15);
  sqcRYGate(q, -2.486383082039229, 16);
  sqcRYGate(q, -1.277177831107906, 17);
  sqcRYGate(q, 0.6183183237167175, 18);
  sqcRYGate(q, 0.2697968702972995, 19);

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
