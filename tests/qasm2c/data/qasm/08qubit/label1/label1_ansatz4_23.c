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

  sqcRYGate(q, -0.20492673433625533, 0);
  sqcRZGate(q, 2.454176186120488, 0);
  sqcRYGate(q, -2.719970391385045, 1);
  sqcRZGate(q, -2.2837004589862846, 1);
  sqcRYGate(q, -2.6653719366530098, 2);
  sqcRZGate(q, 0.579301341137703, 2);
  sqcRYGate(q, 1.6120189740504407, 3);
  sqcRZGate(q, -2.56376622149729, 3);
  sqcRYGate(q, 0.7991007668644922, 4);
  sqcRZGate(q, 1.8648825865244865, 4);
  sqcRYGate(q, -1.5057408609941016, 5);
  sqcRZGate(q, -0.8809641477064518, 5);
  sqcRYGate(q, 2.1971517341423743, 6);
  sqcRZGate(q, 0.26395719028349673, 6);
  sqcRYGate(q, 1.0063838622805579, 7);
  sqcRZGate(q, -0.537013651019806, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.5288370912199222, 0);
  sqcRZGate(q, 2.4120513126718417, 0);
  sqcRYGate(q, 1.1286878104428162, 1);
  sqcRZGate(q, -0.16317404592578752, 1);
  sqcRYGate(q, 1.5269523368596118, 2);
  sqcRZGate(q, 0.8232736497158957, 2);
  sqcRYGate(q, 1.6948849562103794, 3);
  sqcRZGate(q, -2.3669661901133927, 3);
  sqcRYGate(q, -1.9641620167290768, 4);
  sqcRZGate(q, -1.6634780891791932, 4);
  sqcRYGate(q, 1.37021472250329, 5);
  sqcRZGate(q, 0.41553649538983534, 5);
  sqcRYGate(q, 2.587533079788262, 6);
  sqcRZGate(q, -2.8351304914646795, 6);
  sqcRYGate(q, 0.40483218155012446, 7);
  sqcRZGate(q, -2.250664200288864, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4272858061187668, 0);
  sqcRZGate(q, 1.803597137115717, 0);
  sqcRYGate(q, 2.939972207333138, 1);
  sqcRZGate(q, -2.4744656114650216, 1);
  sqcRYGate(q, 1.4344771830242564, 2);
  sqcRZGate(q, 1.6572071030105244, 2);
  sqcRYGate(q, -2.7113709006931477, 3);
  sqcRZGate(q, 2.8345649417577037, 3);
  sqcRYGate(q, 1.0754296434089747, 4);
  sqcRZGate(q, -1.5197981404217802, 4);
  sqcRYGate(q, 2.1690085466139886, 5);
  sqcRZGate(q, 1.3629930665559207, 5);
  sqcRYGate(q, -0.8946320893816786, 6);
  sqcRZGate(q, -1.6877720336585713, 6);
  sqcRYGate(q, -2.811626820857232, 7);
  sqcRZGate(q, -1.7897524681434858, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.321615588654994, 0);
  sqcRZGate(q, -1.4551035695668917, 0);
  sqcRYGate(q, 2.075543311198464, 1);
  sqcRZGate(q, -2.742389044690924, 1);
  sqcRYGate(q, -1.3020626113226648, 2);
  sqcRZGate(q, 1.9940445054543945, 2);
  sqcRYGate(q, 0.7978427465834886, 3);
  sqcRZGate(q, 2.7003193247673987, 3);
  sqcRYGate(q, 1.5335868495167644, 4);
  sqcRZGate(q, -1.9742870726897845, 4);
  sqcRYGate(q, 2.2098899055571106, 5);
  sqcRZGate(q, -2.674965218937814, 5);
  sqcRYGate(q, 2.1550313638810414, 6);
  sqcRZGate(q, -1.7039591239767984, 6);
  sqcRYGate(q, 1.4828796986372736, 7);
  sqcRZGate(q, 0.45610830132716146, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.1074259251804754, 0);
  sqcRZGate(q, -2.933870654748732, 0);
  sqcRYGate(q, -1.2192013857627944, 1);
  sqcRZGate(q, 0.44393332778734956, 1);
  sqcRYGate(q, 0.45063413198946733, 2);
  sqcRZGate(q, 2.350640568516681, 2);
  sqcRYGate(q, 2.798912704351187, 3);
  sqcRZGate(q, -0.301356561611685, 3);
  sqcRYGate(q, -0.25508497020244647, 4);
  sqcRZGate(q, 2.2938200964742066, 4);
  sqcRYGate(q, -1.0867461304833936, 5);
  sqcRZGate(q, 0.9158762829982638, 5);
  sqcRYGate(q, -0.372729378408611, 6);
  sqcRZGate(q, -0.945375247152587, 6);
  sqcRYGate(q, -1.5091968044945288, 7);
  sqcRZGate(q, -2.935397709013406, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7750817545933057, 0);
  sqcRZGate(q, -1.7759991115864224, 0);
  sqcRYGate(q, 2.866815936310332, 1);
  sqcRZGate(q, 2.4139146345823472, 1);
  sqcRYGate(q, 1.8614648924809742, 2);
  sqcRZGate(q, 2.2372943534126337, 2);
  sqcRYGate(q, 0.3868003407661629, 3);
  sqcRZGate(q, 2.635577165799128, 3);
  sqcRYGate(q, -1.5635443056849734, 4);
  sqcRZGate(q, -2.7795481447927917, 4);
  sqcRYGate(q, -2.2384324046511432, 5);
  sqcRZGate(q, 2.297586459446401, 5);
  sqcRYGate(q, -2.252680460950291, 6);
  sqcRZGate(q, -2.2064231773741048, 6);
  sqcRYGate(q, 2.1812770513296664, 7);
  sqcRZGate(q, -1.490028469214861, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.7491765365223855, 0);
  sqcRZGate(q, 1.9860853444292177, 0);
  sqcRYGate(q, -0.2853751495095116, 1);
  sqcRZGate(q, 0.5949104748845336, 1);
  sqcRYGate(q, 1.1429538059604782, 2);
  sqcRZGate(q, 1.725121534820143, 2);
  sqcRYGate(q, 2.4487171662998573, 3);
  sqcRZGate(q, -0.47196995530591307, 3);
  sqcRYGate(q, -1.9913969868751593, 4);
  sqcRZGate(q, -1.9929900601904031, 4);
  sqcRYGate(q, -2.8353551977913503, 5);
  sqcRZGate(q, 1.6607483725789596, 5);
  sqcRYGate(q, -0.26339083551741904, 6);
  sqcRZGate(q, -1.3232634016778533, 6);
  sqcRYGate(q, -0.4980749986417292, 7);
  sqcRZGate(q, -1.3188782838608573, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.9064073963678796, 0);
  sqcRZGate(q, 1.0533277278268263, 0);
  sqcRYGate(q, 2.27918525841592, 1);
  sqcRZGate(q, -2.5248456524774596, 1);
  sqcRYGate(q, 0.6880582720915536, 2);
  sqcRZGate(q, -1.4655416759839104, 2);
  sqcRYGate(q, -0.5209254613369012, 3);
  sqcRZGate(q, 2.479214754956178, 3);
  sqcRYGate(q, 0.37559884132821164, 4);
  sqcRZGate(q, 0.33823949721260066, 4);
  sqcRYGate(q, 1.087015700607635, 5);
  sqcRZGate(q, 2.502024750735006, 5);
  sqcRYGate(q, -2.1007418841998913, 6);
  sqcRZGate(q, -1.4878550373003687, 6);
  sqcRYGate(q, 2.7141942394810172, 7);
  sqcRZGate(q, 0.48889611000279315, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.1951277568925538, 0);
  sqcRZGate(q, 2.953103095482276, 0);
  sqcRYGate(q, 2.2633035074250634, 1);
  sqcRZGate(q, -0.11081399653822274, 1);
  sqcRYGate(q, 1.251283084044272, 2);
  sqcRZGate(q, -0.7012321583648317, 2);
  sqcRYGate(q, -1.1817203464221109, 3);
  sqcRZGate(q, -0.912267339327581, 3);
  sqcRYGate(q, 2.618676795682669, 4);
  sqcRZGate(q, 1.012904711906239, 4);
  sqcRYGate(q, 1.9171225197974548, 5);
  sqcRZGate(q, 2.592106267805325, 5);
  sqcRYGate(q, -1.0818718254672393, 6);
  sqcRZGate(q, 2.9943273550904173, 6);
  sqcRYGate(q, -0.2513526319115523, 7);
  sqcRZGate(q, 1.2393590103958758, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.2760090957012044, 0);
  sqcRZGate(q, -0.6161342218502669, 0);
  sqcRYGate(q, -0.25435665927772444, 1);
  sqcRZGate(q, 1.50022188189533, 1);
  sqcRYGate(q, 1.9418127190652026, 2);
  sqcRZGate(q, -1.3421094413366408, 2);
  sqcRYGate(q, -2.793982014212318, 3);
  sqcRZGate(q, -2.67336363941289, 3);
  sqcRYGate(q, -1.0091836337739415, 4);
  sqcRZGate(q, 0.9393573503564127, 4);
  sqcRYGate(q, -1.0840490033277344, 5);
  sqcRZGate(q, -1.3707045489119474, 5);
  sqcRYGate(q, 1.4304142005611622, 6);
  sqcRZGate(q, -0.25570180261870845, 6);
  sqcRYGate(q, -1.5171150525079566, 7);
  sqcRZGate(q, 2.9561932872043375, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.9177228253672225, 0);
  sqcRZGate(q, 0.9154260252335717, 0);
  sqcRYGate(q, -2.5281859739730246, 1);
  sqcRZGate(q, 0.3817300148091256, 1);
  sqcRYGate(q, -2.413813814593919, 2);
  sqcRZGate(q, -3.12719965682608, 2);
  sqcRYGate(q, 3.0454148036566506, 3);
  sqcRZGate(q, 1.3952580185879306, 3);
  sqcRYGate(q, 1.305793163088766, 4);
  sqcRZGate(q, -3.054924224849085, 4);
  sqcRYGate(q, -1.630682677997985, 5);
  sqcRZGate(q, -2.313275300777504, 5);
  sqcRYGate(q, 2.4401670539650238, 6);
  sqcRZGate(q, -1.2748252254823729, 6);
  sqcRYGate(q, 1.0159998725375283, 7);
  sqcRZGate(q, -1.5984068230160888, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.436048366750576, 0);
  sqcRZGate(q, 1.491629461690005, 0);
  sqcRYGate(q, -1.10438756471022, 1);
  sqcRZGate(q, -2.726110594913417, 1);
  sqcRYGate(q, 2.3244029321616155, 2);
  sqcRZGate(q, -1.5946885491338814, 2);
  sqcRYGate(q, 2.779100745335915, 3);
  sqcRZGate(q, 0.33280558843135827, 3);
  sqcRYGate(q, 0.8801077341831001, 4);
  sqcRZGate(q, 0.6565561977707555, 4);
  sqcRYGate(q, 1.7463260937007963, 5);
  sqcRZGate(q, -1.9704794413956177, 5);
  sqcRYGate(q, -1.7630172163089464, 6);
  sqcRZGate(q, -0.9161490557996271, 6);
  sqcRYGate(q, -2.020595662600723, 7);
  sqcRZGate(q, 1.6930379489358869, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.6321735051618096, 0);
  sqcRZGate(q, -1.014644950582681, 0);
  sqcRYGate(q, -0.6563875066265586, 1);
  sqcRZGate(q, -1.2951224798797805, 1);
  sqcRYGate(q, 2.0965380478308377, 2);
  sqcRZGate(q, -1.8504687845933043, 2);
  sqcRYGate(q, 2.387243678282707, 3);
  sqcRZGate(q, -2.3780720731099185, 3);
  sqcRYGate(q, -0.7373192853163371, 4);
  sqcRZGate(q, -0.5572601286658251, 4);
  sqcRYGate(q, -2.148824105068614, 5);
  sqcRZGate(q, -1.1140810164517065, 5);
  sqcRYGate(q, -1.0084358879075657, 6);
  sqcRZGate(q, -2.202003298545179, 6);
  sqcRYGate(q, -1.2525493863573036, 7);
  sqcRZGate(q, 2.91779768393156, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9862539020869958, 0);
  sqcRZGate(q, 1.3380123943118925, 0);
  sqcRYGate(q, -2.423144373304432, 1);
  sqcRZGate(q, 1.6459574071438237, 1);
  sqcRYGate(q, 1.8080190116901727, 2);
  sqcRZGate(q, -0.8417708385637043, 2);
  sqcRYGate(q, 1.223173846756177, 3);
  sqcRZGate(q, -0.49277512786661193, 3);
  sqcRYGate(q, 0.8784133108524106, 4);
  sqcRZGate(q, -0.2219796083611421, 4);
  sqcRYGate(q, -0.7195310516700184, 5);
  sqcRZGate(q, 0.5997916580288541, 5);
  sqcRYGate(q, -3.0253994920194973, 6);
  sqcRZGate(q, -0.9497790588696304, 6);
  sqcRYGate(q, 1.902430475192937, 7);
  sqcRZGate(q, -1.709232510711393, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.6041156127109141, 0);
  sqcRZGate(q, -1.4461996339110685, 0);
  sqcRYGate(q, 2.8619909702103397, 1);
  sqcRZGate(q, 1.211440303378533, 1);
  sqcRYGate(q, -2.363691654865799, 2);
  sqcRZGate(q, 2.367509670737199, 2);
  sqcRYGate(q, -0.425209076190848, 3);
  sqcRZGate(q, -1.3484494564331773, 3);
  sqcRYGate(q, -0.5919426144870558, 4);
  sqcRZGate(q, -0.8287229387508912, 4);
  sqcRYGate(q, -0.4353355219807702, 5);
  sqcRZGate(q, 0.4576690830956647, 5);
  sqcRYGate(q, 2.8089513898221488, 6);
  sqcRZGate(q, 2.054226870130173, 6);
  sqcRYGate(q, -0.1741684242463286, 7);
  sqcRZGate(q, -1.0592421805847763, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.5990982837177432, 0);
  sqcRZGate(q, -2.5469043753346794, 0);
  sqcRYGate(q, -2.484367259691035, 1);
  sqcRZGate(q, 2.0556100638277384, 1);
  sqcRYGate(q, 0.07437374473567626, 2);
  sqcRZGate(q, -0.7768983963451875, 2);
  sqcRYGate(q, -0.8021633581974409, 3);
  sqcRZGate(q, 2.4088528240442217, 3);
  sqcRYGate(q, 2.5266342640044717, 4);
  sqcRZGate(q, -0.45760543991115027, 4);
  sqcRYGate(q, -1.6273655468127641, 5);
  sqcRZGate(q, -2.7258815848443243, 5);
  sqcRYGate(q, -0.6266835655413967, 6);
  sqcRZGate(q, 0.4401714715016966, 6);
  sqcRYGate(q, 2.332423195252622, 7);
  sqcRZGate(q, -1.6081455373928768, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4790723735934268, 0);
  sqcRZGate(q, -2.117503791335338, 0);
  sqcRYGate(q, -0.7500823414934704, 1);
  sqcRZGate(q, -2.4067677582745413, 1);
  sqcRYGate(q, 1.2796140417475057, 2);
  sqcRZGate(q, 0.8304237695122506, 2);
  sqcRYGate(q, 3.0611164880645223, 3);
  sqcRZGate(q, 2.1975126219958026, 3);
  sqcRYGate(q, 0.5162659273024989, 4);
  sqcRZGate(q, -2.0570997578116974, 4);
  sqcRYGate(q, -1.9595998732675728, 5);
  sqcRZGate(q, 0.3251959104607174, 5);
  sqcRYGate(q, 1.4246769253508738, 6);
  sqcRZGate(q, -2.4852386735207395, 6);
  sqcRYGate(q, -0.02211437384342935, 7);
  sqcRZGate(q, -0.14875254855732314, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.1580577278525894, 0);
  sqcRZGate(q, 2.7664462889848984, 0);
  sqcRYGate(q, 2.3624981526897697, 1);
  sqcRZGate(q, 0.6532461905561657, 1);
  sqcRYGate(q, -0.5619652340413017, 2);
  sqcRZGate(q, 1.2776339130284988, 2);
  sqcRYGate(q, -3.0139152475219886, 3);
  sqcRZGate(q, 3.128004721342107, 3);
  sqcRYGate(q, -1.8240630803903466, 4);
  sqcRZGate(q, -3.0177135924230702, 4);
  sqcRYGate(q, -2.0037140658324972, 5);
  sqcRZGate(q, -0.35870920232911274, 5);
  sqcRYGate(q, 0.6630309887368231, 6);
  sqcRZGate(q, 1.8432030768749295, 6);
  sqcRYGate(q, -0.5027166059336219, 7);
  sqcRZGate(q, 2.446525648960127, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.8154356580923139, 0);
  sqcRZGate(q, -0.723021441002519, 0);
  sqcRYGate(q, -1.8651967516560986, 1);
  sqcRZGate(q, -2.6512479941042164, 1);
  sqcRYGate(q, 2.7135439933377454, 2);
  sqcRZGate(q, -2.1570984478364705, 2);
  sqcRYGate(q, -2.11007664010375, 3);
  sqcRZGate(q, -0.8733330832839193, 3);
  sqcRYGate(q, 2.8321078428447897, 4);
  sqcRZGate(q, 1.7098364486767619, 4);
  sqcRYGate(q, -3.017786781859668, 5);
  sqcRZGate(q, 0.8378337451780072, 5);
  sqcRYGate(q, 1.6093548896703034, 6);
  sqcRZGate(q, -1.9606391526892164, 6);
  sqcRYGate(q, -2.612518923968557, 7);
  sqcRZGate(q, -2.1980582637459443, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9445036772937947, 0);
  sqcRZGate(q, 2.28251107565418, 0);
  sqcRYGate(q, -0.4710708750430159, 1);
  sqcRZGate(q, 0.629764835373078, 1);
  sqcRYGate(q, -2.816729072296492, 2);
  sqcRZGate(q, -1.064846500803493, 2);
  sqcRYGate(q, -1.922180331536486, 3);
  sqcRZGate(q, 0.6769203431846122, 3);
  sqcRYGate(q, -1.8047047630936481, 4);
  sqcRZGate(q, -1.175056948979473, 4);
  sqcRYGate(q, 1.0396475005986296, 5);
  sqcRZGate(q, 2.116191417924043, 5);
  sqcRYGate(q, -1.294887773342608, 6);
  sqcRZGate(q, 1.0253801740922697, 6);
  sqcRYGate(q, -2.906920268157247, 7);
  sqcRZGate(q, 1.7012376787132177, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4828003858874994, 0);
  sqcRZGate(q, -0.8174215179502358, 0);
  sqcRYGate(q, -0.5606427813572545, 1);
  sqcRZGate(q, -2.246392026503402, 1);
  sqcRYGate(q, 0.14981151797349257, 2);
  sqcRZGate(q, 1.3738912655914381, 2);
  sqcRYGate(q, 1.96984856041494, 3);
  sqcRZGate(q, 1.5407656328166273, 3);
  sqcRYGate(q, -2.5613420425709084, 4);
  sqcRZGate(q, 0.7666111260109665, 4);
  sqcRYGate(q, 0.7719464023873174, 5);
  sqcRZGate(q, 0.9539125804256492, 5);
  sqcRYGate(q, 0.5176930485672182, 6);
  sqcRZGate(q, -2.318339031721712, 6);
  sqcRYGate(q, -1.93041063650389, 7);
  sqcRZGate(q, 0.7039246059697462, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.799735766788122, 0);
  sqcRZGate(q, 1.203855665233297, 0);
  sqcRYGate(q, 1.132432989892595, 1);
  sqcRZGate(q, 2.3002433816683006, 1);
  sqcRYGate(q, 0.8403209519028795, 2);
  sqcRZGate(q, 1.1479716967701656, 2);
  sqcRYGate(q, 0.6679382281048838, 3);
  sqcRZGate(q, -1.6635921203445019, 3);
  sqcRYGate(q, 2.820410943261642, 4);
  sqcRZGate(q, -2.7222300214135, 4);
  sqcRYGate(q, -0.7143248415233128, 5);
  sqcRZGate(q, -0.8425455002946999, 5);
  sqcRYGate(q, 0.7021691796990535, 6);
  sqcRZGate(q, -2.6202018790089676, 6);
  sqcRYGate(q, -0.4932512713131061, 7);
  sqcRZGate(q, -1.5595513854827967, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5298093456534854, 0);
  sqcRZGate(q, -1.8874090709853864, 0);
  sqcRYGate(q, 1.3466673940844274, 1);
  sqcRZGate(q, -1.7127820935214293, 1);
  sqcRYGate(q, -2.385982314243071, 2);
  sqcRZGate(q, 2.390182442597998, 2);
  sqcRYGate(q, -2.5324738240802294, 3);
  sqcRZGate(q, 1.6628682894732327, 3);
  sqcRYGate(q, -1.6184761898113382, 4);
  sqcRZGate(q, -2.33092337887062, 4);
  sqcRYGate(q, 0.8443710072303007, 5);
  sqcRZGate(q, 1.265274305676295, 5);
  sqcRYGate(q, 1.256488393245775, 6);
  sqcRZGate(q, -2.5516487090159616, 6);
  sqcRYGate(q, -1.3229331771583528, 7);
  sqcRZGate(q, -1.7068886286370422, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4995402336850472, 0);
  sqcRZGate(q, 2.1425708371422196, 0);
  sqcRYGate(q, -0.32091093077494204, 1);
  sqcRZGate(q, -1.224957177826167, 1);
  sqcRYGate(q, 1.244852289559074, 2);
  sqcRZGate(q, -1.7298976422106587, 2);
  sqcRYGate(q, -0.8082792624451612, 3);
  sqcRZGate(q, 0.07962931924362149, 3);
  sqcRYGate(q, 0.43835301046511604, 4);
  sqcRZGate(q, -2.493410324595254, 4);
  sqcRYGate(q, 1.970170535672703, 5);
  sqcRZGate(q, -0.6376473946638125, 5);
  sqcRYGate(q, -1.9580314118493156, 6);
  sqcRZGate(q, 1.6568939287718996, 6);
  sqcRYGate(q, 1.509054454267441, 7);
  sqcRZGate(q, -1.9131076098969393, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.3881364209208176, 0);
  sqcRZGate(q, 0.6460268357336518, 0);
  sqcRYGate(q, -0.5962087117995276, 1);
  sqcRZGate(q, 2.3703665152698115, 1);
  sqcRYGate(q, -1.330707381807742, 2);
  sqcRZGate(q, 0.7104249252462518, 2);
  sqcRYGate(q, -1.0452487125940517, 3);
  sqcRZGate(q, 0.13947652896941598, 3);
  sqcRYGate(q, 2.946979358532207, 4);
  sqcRZGate(q, 0.3287910219677147, 4);
  sqcRYGate(q, -2.162582686133219, 5);
  sqcRZGate(q, 2.344338682808758, 5);
  sqcRYGate(q, 2.1699150585620512, 6);
  sqcRZGate(q, 1.331259735682536, 6);
  sqcRYGate(q, 1.6200947977766444, 7);
  sqcRZGate(q, 2.652174345629216, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.6726113542893142, 0);
  sqcRZGate(q, 2.9460341734461832, 0);
  sqcRYGate(q, 2.099512782838625, 1);
  sqcRZGate(q, -0.6960424738204791, 1);
  sqcRYGate(q, -2.3371002156238405, 2);
  sqcRZGate(q, 1.8042162391661751, 2);
  sqcRYGate(q, -0.7943428548583658, 3);
  sqcRZGate(q, 2.1181457722029324, 3);
  sqcRYGate(q, 1.928725887776599, 4);
  sqcRZGate(q, -0.7669241560269792, 4);
  sqcRYGate(q, -1.571186022697213, 5);
  sqcRZGate(q, 0.281286228951756, 5);
  sqcRYGate(q, 0.46375348292511376, 6);
  sqcRZGate(q, -0.03603183810874569, 6);
  sqcRYGate(q, 1.2120873059629034, 7);
  sqcRZGate(q, -2.9817017468358946, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.000944715746629, 0);
  sqcRZGate(q, -0.848794371326489, 0);
  sqcRYGate(q, 0.54466959987016, 1);
  sqcRZGate(q, 2.526525065529206, 1);
  sqcRYGate(q, -1.1292738786613687, 2);
  sqcRZGate(q, -0.07117513707942891, 2);
  sqcRYGate(q, 1.8121865621100384, 3);
  sqcRZGate(q, 1.096874578867217, 3);
  sqcRYGate(q, 2.6802203620926437, 4);
  sqcRZGate(q, -0.6187943265205497, 4);
  sqcRYGate(q, -0.8281232973866264, 5);
  sqcRZGate(q, -1.357968268767199, 5);
  sqcRYGate(q, -2.3623013837144624, 6);
  sqcRZGate(q, 2.684121007571827, 6);
  sqcRYGate(q, -1.4859919479704449, 7);
  sqcRZGate(q, -0.37204643187724973, 7);

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
