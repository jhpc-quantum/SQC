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

  sqcRYGate(q, -2.096671421636371, 0);
  sqcRYGate(q, -1.4785081253354642, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.777810052357994, 0);
  sqcRYGate(q, 2.7853144863407993, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7850891914484772, 2);
  sqcRYGate(q, -0.6572259629633708, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.22921131785448345, 2);
  sqcRYGate(q, -0.9176596017363972, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7899231362399517, 4);
  sqcRYGate(q, -1.23313672470751, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7851553363408734, 4);
  sqcRYGate(q, -1.2626181016295677, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.288743347708955, 6);
  sqcRYGate(q, 0.32428660642781004, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.743835268846335, 6);
  sqcRYGate(q, 1.5958386411639953, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0752041021501757, 1);
  sqcRYGate(q, -0.26962214910465165, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9629642196000803, 1);
  sqcRYGate(q, 2.905305638111578, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7212362761989315, 3);
  sqcRYGate(q, -1.997286202474778, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.117367802316208, 3);
  sqcRYGate(q, 1.281534476366578, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7554067239702382, 5);
  sqcRYGate(q, -1.5704376099109074, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.805264897737904, 5);
  sqcRYGate(q, -2.965793984339435, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4828697757139046, 0);
  sqcRYGate(q, 0.15944107863593932, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5225819059286975, 0);
  sqcRYGate(q, -0.718923414657851, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4712117908398772, 2);
  sqcRYGate(q, 2.975858914648153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5474443789758348, 2);
  sqcRYGate(q, 1.1215369630759449, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4192264108141854, 4);
  sqcRYGate(q, 0.31776204456561236, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.45055042822154856, 4);
  sqcRYGate(q, -2.956508601286859, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.02328164305304406, 6);
  sqcRYGate(q, 1.879800144134001, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3304264053446058, 6);
  sqcRYGate(q, -1.0943106798838533, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0630490100481644, 1);
  sqcRYGate(q, 0.5108283075115878, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.843665282902445, 1);
  sqcRYGate(q, -1.7235695496070005, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.23921362285730244, 3);
  sqcRYGate(q, -2.008120111055791, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2171841699915298, 3);
  sqcRYGate(q, 0.18414591876890185, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.04505571151277277, 5);
  sqcRYGate(q, 1.0021845126078164, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6421005898278391, 5);
  sqcRYGate(q, -1.0662289846200863, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.36560974867512286, 0);
  sqcRYGate(q, -0.3345985697174676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.133487479100073, 0);
  sqcRYGate(q, 3.003820617275309, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4144786435634822, 2);
  sqcRYGate(q, 1.230301019874796, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.520549884508128, 2);
  sqcRYGate(q, 1.7998177875023096, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.685188017008591, 4);
  sqcRYGate(q, -2.733618533124666, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8210492154958493, 4);
  sqcRYGate(q, -2.0657254407166663, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8314875599082843, 6);
  sqcRYGate(q, -1.5489318754543626, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.51216573751877, 6);
  sqcRYGate(q, -1.6430701808736545, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.497050527380245, 1);
  sqcRYGate(q, -0.913561345016292, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3976009145515845, 1);
  sqcRYGate(q, 0.2934871741183539, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5821068275029725, 3);
  sqcRYGate(q, 0.03812649456615613, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4562827117799206, 3);
  sqcRYGate(q, 2.997976141507704, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4615560053544625, 5);
  sqcRYGate(q, 1.0825049888988323, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4954367842463108, 5);
  sqcRYGate(q, -2.5251209369469074, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2201082386964597, 0);
  sqcRYGate(q, 1.0225260149826996, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.367169123403152, 0);
  sqcRYGate(q, 1.41046578089942, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0487479252332634, 2);
  sqcRYGate(q, -3.0634916300813435, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3735966165337197, 2);
  sqcRYGate(q, 1.3589030660395827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8648620843334696, 4);
  sqcRYGate(q, 1.719117088528435, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.66420601510537, 4);
  sqcRYGate(q, -2.973039563163638, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6109541823571717, 6);
  sqcRYGate(q, 2.226042346052224, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.03546731119422192, 6);
  sqcRYGate(q, 2.6965586616177246, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3709523683646232, 1);
  sqcRYGate(q, 0.21201091430099825, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1075166653912991, 1);
  sqcRYGate(q, -0.2188989014699949, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9834782777813025, 3);
  sqcRYGate(q, 0.13159350737538783, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2768303918875314, 3);
  sqcRYGate(q, 1.8580877793909973, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.039950375618400535, 5);
  sqcRYGate(q, 2.9629508263926807, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.628349790535353, 5);
  sqcRYGate(q, 0.9755961807201423, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5342202693787133, 0);
  sqcRYGate(q, 0.05849708188645674, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7177641661193497, 0);
  sqcRYGate(q, 3.001152889246785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.249927957389726, 2);
  sqcRYGate(q, -1.0819010485234404, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.357877589568335, 2);
  sqcRYGate(q, -1.3951615005016142, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1359302360119128, 4);
  sqcRYGate(q, -1.9266745481863135, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0992187444660386, 4);
  sqcRYGate(q, 1.3617918480820417, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2902752642401474, 6);
  sqcRYGate(q, 2.968147207177336, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4107850557045973, 6);
  sqcRYGate(q, -1.062299284255377, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.764407161730852, 1);
  sqcRYGate(q, 1.4642233189625893, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6321623218988792, 1);
  sqcRYGate(q, 0.5878448633212332, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0960969871231834, 3);
  sqcRYGate(q, -0.5105335586045254, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0363131970365353, 3);
  sqcRYGate(q, 0.10890378924572652, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1399330856207377, 5);
  sqcRYGate(q, -0.38529009886304605, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9479012690908077, 5);
  sqcRYGate(q, 1.7634467899451307, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5877782827024194, 0);
  sqcRYGate(q, -2.699425570886679, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.435600070873668, 0);
  sqcRYGate(q, -1.6566928449475395, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4237089016877746, 2);
  sqcRYGate(q, -2.5632862890114514, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8573140428328014, 2);
  sqcRYGate(q, 1.929686776097993, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1376875374384814, 4);
  sqcRYGate(q, 1.9782481444938067, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5416622551810817, 4);
  sqcRYGate(q, -0.6420807662688848, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2420486251495682, 6);
  sqcRYGate(q, -2.5105395537150725, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8396375652139714, 6);
  sqcRYGate(q, 0.7393523911665597, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2141170180974363, 1);
  sqcRYGate(q, 0.9543974507522134, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8826051091068212, 1);
  sqcRYGate(q, 1.7243365627092224, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0958946816528357, 3);
  sqcRYGate(q, 0.1335385579041457, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8961863539255771, 3);
  sqcRYGate(q, -1.894517974072053, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7071835047067978, 5);
  sqcRYGate(q, 0.6693507383450239, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2415971831729189, 5);
  sqcRYGate(q, 2.432539704788237, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0030415881134926437, 0);
  sqcRYGate(q, -0.5140611537541322, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8090849571244565, 0);
  sqcRYGate(q, 0.703525993248145, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.680305838491242, 2);
  sqcRYGate(q, -0.11708685503995664, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4769717901339891, 2);
  sqcRYGate(q, 1.8229986194655474, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1962523090391652, 4);
  sqcRYGate(q, -2.5806182497185652, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8018753834028551, 4);
  sqcRYGate(q, -1.160416496337716, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4654421450616253, 6);
  sqcRYGate(q, 1.9280800677557413, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9804051896190744, 6);
  sqcRYGate(q, -1.033311642150802, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6659574993949684, 1);
  sqcRYGate(q, 2.185356097734295, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2425191204864694, 1);
  sqcRYGate(q, -1.821366113872822, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.507435339689092, 3);
  sqcRYGate(q, -3.131595257410857, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5949781116193131, 3);
  sqcRYGate(q, -0.8575999490542364, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1054966425647665, 5);
  sqcRYGate(q, -2.3459662340408083, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.989598699015005, 5);
  sqcRYGate(q, -1.888733110567995, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.426006088864165, 0);
  sqcRYGate(q, -0.4228599860056186, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.26794046597674726, 0);
  sqcRYGate(q, -2.1224911950453738, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.14426004501570855, 2);
  sqcRYGate(q, -0.8836400112841813, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8523337057981046, 2);
  sqcRYGate(q, -1.8715294900150425, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.80536336932268, 4);
  sqcRYGate(q, -1.912964296367058, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.923570078149254, 4);
  sqcRYGate(q, 0.32110044460288206, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4397513705569307, 6);
  sqcRYGate(q, 0.4462036727180447, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1443813844597255, 6);
  sqcRYGate(q, 2.659671109674077, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6299616648506632, 1);
  sqcRYGate(q, -2.1208189779236406, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.974274397382537, 1);
  sqcRYGate(q, 1.4087079133912903, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0471965104916285, 3);
  sqcRYGate(q, 1.9335162896717684, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9839990722569225, 3);
  sqcRYGate(q, 3.1243968058362124, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6347337740584864, 5);
  sqcRYGate(q, 0.568239899566109, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5420956044699725, 5);
  sqcRYGate(q, 1.8629283413457753, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.44714440158538027, 0);
  sqcRYGate(q, 0.23233257535197183, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4339277081228787, 0);
  sqcRYGate(q, 1.4622124338171483, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6412951820880857, 2);
  sqcRYGate(q, -0.1885343040807202, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2992630335767874, 2);
  sqcRYGate(q, 0.3941240845926615, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.857590513367147, 4);
  sqcRYGate(q, 2.0630951495385945, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.01741886210739718, 4);
  sqcRYGate(q, 2.3234999709737276, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.656079456216782, 6);
  sqcRYGate(q, -2.7858850415829695, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1304988462994405, 6);
  sqcRYGate(q, -0.6346357460021806, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9646367199007218, 1);
  sqcRYGate(q, 0.6884780677139675, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6831159280358339, 1);
  sqcRYGate(q, -0.294707877879711, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.952453971271358, 3);
  sqcRYGate(q, -1.8082746785730395, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.107533331154155, 3);
  sqcRYGate(q, -0.3423204728709148, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.3645607135164271, 5);
  sqcRYGate(q, -2.720067002045891, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.34623463013753586, 5);
  sqcRYGate(q, -0.6868875510060133, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.827461455609906, 0);
  sqcRYGate(q, 2.69807658699619, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1315621454726466, 0);
  sqcRYGate(q, -2.852822532624539, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5877796289024007, 2);
  sqcRYGate(q, -3.110628976469115, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8903126021725707, 2);
  sqcRYGate(q, 1.800255415434437, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0726346721453464, 4);
  sqcRYGate(q, -2.9021349341795584, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.989417498874807, 4);
  sqcRYGate(q, -1.142304101794199, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.467973550212772, 6);
  sqcRYGate(q, -1.3291292813129885, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.24991406630292753, 6);
  sqcRYGate(q, -3.0285137116829617, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.574595810628181, 1);
  sqcRYGate(q, -0.8120996063411109, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.16982510694542, 1);
  sqcRYGate(q, -0.39669541783633644, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2735419664974033, 3);
  sqcRYGate(q, -1.7504551125534569, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8955153610563775, 3);
  sqcRYGate(q, -0.4630451740197764, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.578954664582013, 5);
  sqcRYGate(q, 1.6251351993497254, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5161561753578887, 5);
  sqcRYGate(q, -2.689780758019864, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.437970063192858, 0);
  sqcRYGate(q, 2.5764438690019373, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0999961899198399, 0);
  sqcRYGate(q, -1.0551264875275432, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.623332699327413, 2);
  sqcRYGate(q, 2.52492151537272, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.25440760844527, 2);
  sqcRYGate(q, -0.7102552055860896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3048988888226853, 4);
  sqcRYGate(q, -0.025577187554437057, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3477023253113078, 4);
  sqcRYGate(q, 1.4894829025969805, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.02843516874244, 6);
  sqcRYGate(q, -0.43713052782110223, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5059776938276389, 6);
  sqcRYGate(q, -2.378661606311994, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5381516517488285, 1);
  sqcRYGate(q, -1.1546622570838732, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.786152180861416, 1);
  sqcRYGate(q, -0.17396704862517226, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7656571543846025, 3);
  sqcRYGate(q, -1.3191915316360152, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.612054257682719, 3);
  sqcRYGate(q, -1.899424250336938, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7777950328087417, 5);
  sqcRYGate(q, 1.808814513945637, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.284493603712521, 5);
  sqcRYGate(q, -0.014243297474287061, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6381522156113484, 0);
  sqcRYGate(q, -1.6404971651342766, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8597166990965976, 0);
  sqcRYGate(q, 2.514562055186709, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2828335831607505, 2);
  sqcRYGate(q, -0.08303222880132544, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2748528590504113, 2);
  sqcRYGate(q, -1.641338246593282, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.950067500233738, 4);
  sqcRYGate(q, -0.9634458283734483, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5409223139547747, 4);
  sqcRYGate(q, -3.109437895284299, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.156548093871473, 6);
  sqcRYGate(q, 0.9568605727425702, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8651071307256557, 6);
  sqcRYGate(q, -1.7383212382065532, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8951534197583055, 1);
  sqcRYGate(q, -2.002185520873234, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8912108574529253, 1);
  sqcRYGate(q, -2.9908543324899473, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9610966876922626, 3);
  sqcRYGate(q, 0.6376584503972005, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.14504286799138555, 3);
  sqcRYGate(q, -1.4103386347489337, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5591502921409752, 5);
  sqcRYGate(q, 0.8370566973486842, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7408459383746, 5);
  sqcRYGate(q, -1.5857917889275166, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.494304349724871, 0);
  sqcRYGate(q, 0.4461178800007131, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3432445315455985, 0);
  sqcRYGate(q, -0.716214180166757, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9481444603398475, 2);
  sqcRYGate(q, -0.3863889714405442, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7628421454002403, 2);
  sqcRYGate(q, -0.24464337943655148, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6792043842943345, 4);
  sqcRYGate(q, 2.2933918335552055, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9255893270513615, 4);
  sqcRYGate(q, -1.3501364016564248, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2734045105603853, 6);
  sqcRYGate(q, -2.840417584170266, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4565432448880307, 6);
  sqcRYGate(q, 1.600398872956145, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.137063894583718, 1);
  sqcRYGate(q, 2.803521588172152, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5212151500918418, 1);
  sqcRYGate(q, 2.0497002678215743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.885437840760715, 3);
  sqcRYGate(q, -2.374370109498182, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4165961758002195, 3);
  sqcRYGate(q, 0.1315045739252545, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8803508830232216, 5);
  sqcRYGate(q, 1.4507039785599019, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.24469793395851486, 5);
  sqcRYGate(q, -0.7504460967509239, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2703014926844887, 0);
  sqcRYGate(q, 2.8741789551572965, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.16589860955309, 0);
  sqcRYGate(q, -1.5677357250501789, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.18268018085835036, 2);
  sqcRYGate(q, 1.8096793777709126, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9932752564869886, 2);
  sqcRYGate(q, -0.6784152467751507, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.152547860707584, 4);
  sqcRYGate(q, 1.1898973528781467, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.42112358703019304, 4);
  sqcRYGate(q, -1.427987502901025, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.665457198074122, 6);
  sqcRYGate(q, -1.258830078698172, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8208416199514132, 6);
  sqcRYGate(q, -2.413811775609133, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.944725642425038, 1);
  sqcRYGate(q, -2.19508308007061, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5752064730046447, 1);
  sqcRYGate(q, -1.166120140185222, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7513743016786267, 3);
  sqcRYGate(q, -1.6627889131194749, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.3071331096013549, 3);
  sqcRYGate(q, 2.1455742942489193, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8935518488972253, 5);
  sqcRYGate(q, -2.9967003492418924, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.512824481587664, 5);
  sqcRYGate(q, -2.8268924351134737, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.821922633125001, 0);
  sqcRYGate(q, 3.012910736242324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7052070604615306, 0);
  sqcRYGate(q, -0.2397995463409508, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.314294580161047, 2);
  sqcRYGate(q, -2.5204267175389554, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9870603772474666, 2);
  sqcRYGate(q, -2.213376401138879, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10521926588775801, 4);
  sqcRYGate(q, 2.5281059176467107, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.720240928163313, 4);
  sqcRYGate(q, -1.6626996780073, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5060005769550786, 6);
  sqcRYGate(q, -0.760427674249005, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8941298577015538, 6);
  sqcRYGate(q, 1.9028924389408213, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6418295092362551, 1);
  sqcRYGate(q, -0.7631396500606664, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5621706477293713, 1);
  sqcRYGate(q, 1.9672207133953412, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.168118673759638, 3);
  sqcRYGate(q, 3.032971596915451, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.9296306996413986, 3);
  sqcRYGate(q, -0.3416127003836639, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.29105044072657, 5);
  sqcRYGate(q, 1.2896292702743573, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8009395504233865, 5);
  sqcRYGate(q, -2.0395735591353565, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.45847356721315435, 0);
  sqcRYGate(q, -0.6595951514074807, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8749571280675985, 0);
  sqcRYGate(q, 2.1358522148927923, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.045963974510936, 2);
  sqcRYGate(q, 2.614568186712108, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.889578305312628, 2);
  sqcRYGate(q, -2.247535084705041, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1196759443896163, 4);
  sqcRYGate(q, 1.0019538945736863, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.555812799958513, 4);
  sqcRYGate(q, 0.9914839678978273, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.344525779344654, 6);
  sqcRYGate(q, -2.0566997073928177, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8402779677444149, 6);
  sqcRYGate(q, 3.0714678065225454, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.127769678577328, 1);
  sqcRYGate(q, -0.3524824016013693, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5604567963432379, 1);
  sqcRYGate(q, -1.9361239342144552, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.04713246752844214, 3);
  sqcRYGate(q, -2.128761728437463, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5391861342275286, 3);
  sqcRYGate(q, -0.5785692861845941, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.1656538198875097, 5);
  sqcRYGate(q, 0.03892259362255048, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3650560519144666, 5);
  sqcRYGate(q, -0.19887369665307109, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5862345868308037, 0);
  sqcRYGate(q, -1.6101974140796926, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.532080429191769, 0);
  sqcRYGate(q, -0.6942712542789758, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.174160764455463, 2);
  sqcRYGate(q, 2.748216239941766, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8714837729886181, 2);
  sqcRYGate(q, -2.776324830106753, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6453109923967243, 4);
  sqcRYGate(q, -2.6534526289078397, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9398266532799388, 4);
  sqcRYGate(q, 1.8936222248911543, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8838798784010873, 6);
  sqcRYGate(q, 2.2999368895274155, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0724066011847366, 6);
  sqcRYGate(q, -1.01643651639903, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4281337762441308, 1);
  sqcRYGate(q, -1.7954529517509035, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0313563527052882, 1);
  sqcRYGate(q, 3.007415953470512, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9062445457079518, 3);
  sqcRYGate(q, 0.5001730939994449, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9299378908850828, 3);
  sqcRYGate(q, 1.7706580175058082, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.13705619757795517, 5);
  sqcRYGate(q, -2.0138789318498844, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0192011765909161, 5);
  sqcRYGate(q, -2.095727126038602, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0506611508944856, 0);
  sqcRYGate(q, 0.8520802349888745, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6598760394239599, 0);
  sqcRYGate(q, -0.38421616804879477, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.08133160990834565, 2);
  sqcRYGate(q, 1.3722557638049762, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.613320355661246, 2);
  sqcRYGate(q, -1.811577471963056, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7548026300652969, 4);
  sqcRYGate(q, -1.10832590690817, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6334408832779013, 4);
  sqcRYGate(q, -2.385515599886033, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.38742696905317103, 6);
  sqcRYGate(q, -2.3427800114924477, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8097443135253256, 6);
  sqcRYGate(q, -1.9131612945828387, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5011485929091357, 1);
  sqcRYGate(q, 0.5145001659194449, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8212374532784734, 1);
  sqcRYGate(q, 2.354914117362828, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.832467245896658, 3);
  sqcRYGate(q, 2.092052967490294, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6263125801445681, 3);
  sqcRYGate(q, 2.821280063453187, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8276266868975641, 5);
  sqcRYGate(q, 0.6806243205770075, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9422221195781024, 5);
  sqcRYGate(q, 2.645222976777305, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4833128384101606, 0);
  sqcRYGate(q, -2.418409140103116, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4651214493109501, 0);
  sqcRYGate(q, -0.057801111771417446, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9239469507691185, 2);
  sqcRYGate(q, -2.1312948581668447, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0692467385002755, 2);
  sqcRYGate(q, -0.6980267726224909, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3859388834076323, 4);
  sqcRYGate(q, -2.636593812653026, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8436518152332724, 4);
  sqcRYGate(q, -1.6012179858762203, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2454799106908565, 6);
  sqcRYGate(q, 2.3022599119801805, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4682398334823141, 6);
  sqcRYGate(q, -2.6999468000435067, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.775407961923851, 1);
  sqcRYGate(q, -2.871722770860795, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3226994552478892, 1);
  sqcRYGate(q, 2.782900149697523, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.739070652941097, 3);
  sqcRYGate(q, -0.5468648303501391, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.749123540076254, 3);
  sqcRYGate(q, -0.8765361228701902, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5797444024988605, 5);
  sqcRYGate(q, 1.0047950357580184, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7442697672732663, 5);
  sqcRYGate(q, -0.11665876476473862, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.957083934624701, 0);
  sqcRYGate(q, -2.605514571055507, 1);
  sqcRYGate(q, -0.3898201919800653, 2);
  sqcRYGate(q, 2.2641806862291247, 3);
  sqcRYGate(q, 0.923750302104053, 4);
  sqcRYGate(q, -0.8519656174912331, 5);
  sqcRYGate(q, 2.3399566206776665, 6);
  sqcRYGate(q, -0.02666065860271072, 7);

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
