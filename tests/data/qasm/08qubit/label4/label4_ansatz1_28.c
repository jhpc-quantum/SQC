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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -1.7625448118258475, 0);
  sqcRZGate(q, 1.95717844887555, 0);
  sqcRYGate(q, -1.8344541358670838, 1);
  sqcRZGate(q, -3.050934524736965, 1);
  sqcRYGate(q, 2.900909898960509, 2);
  sqcRZGate(q, 2.434731625685962, 2);
  sqcRYGate(q, 1.6294584887595562, 3);
  sqcRZGate(q, -2.6470761153820774, 3);
  sqcRYGate(q, -0.9034869193607957, 4);
  sqcRZGate(q, -0.8005335203821097, 4);
  sqcRYGate(q, -1.1442796369195252, 5);
  sqcRZGate(q, -1.6326492604859777, 5);
  sqcRYGate(q, 1.7622455503794576, 6);
  sqcRZGate(q, 1.3222607716511643, 6);
  sqcRYGate(q, 0.9698433531975853, 7);
  sqcRZGate(q, -2.1102774923469134, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5600023329970825, 0);
  sqcRZGate(q, -2.3465914608063625, 0);
  sqcRYGate(q, 0.4109931956572828, 1);
  sqcRZGate(q, -1.7617038806591268, 1);
  sqcRYGate(q, 0.7911403870714815, 2);
  sqcRZGate(q, 1.1159556742336278, 2);
  sqcRYGate(q, -1.0769916188849764, 3);
  sqcRZGate(q, -1.2148326479540863, 3);
  sqcRYGate(q, 2.198885077157217, 4);
  sqcRZGate(q, -2.9059640847731094, 4);
  sqcRYGate(q, 1.2982265643510944, 5);
  sqcRZGate(q, 1.4953124785192613, 5);
  sqcRYGate(q, 2.173957316761526, 6);
  sqcRZGate(q, 0.5927806905922708, 6);
  sqcRYGate(q, 0.3664491203800164, 7);
  sqcRZGate(q, -2.2450710130465956, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.837751786034942, 0);
  sqcRZGate(q, 2.054328971757305, 0);
  sqcRYGate(q, -1.1304805661820898, 1);
  sqcRZGate(q, -1.171609429951328, 1);
  sqcRYGate(q, -1.9216282107014453, 2);
  sqcRZGate(q, 0.33182487829570384, 2);
  sqcRYGate(q, 2.7004367184065803, 3);
  sqcRZGate(q, -1.0986000739352983, 3);
  sqcRYGate(q, -1.9536009590871257, 4);
  sqcRZGate(q, 0.9698263605608859, 4);
  sqcRYGate(q, 2.7275536929383537, 5);
  sqcRZGate(q, -2.448209386236234, 5);
  sqcRYGate(q, 0.721570004946158, 6);
  sqcRZGate(q, -3.1345306939783253, 6);
  sqcRYGate(q, 1.3301700097900218, 7);
  sqcRZGate(q, -0.8757749158612004, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.058622437989384615, 0);
  sqcRZGate(q, -0.9270612758648973, 0);
  sqcRYGate(q, 0.9871210928289894, 1);
  sqcRZGate(q, 2.1805918849672548, 1);
  sqcRYGate(q, 0.3832998863527919, 2);
  sqcRZGate(q, 0.47135632902811064, 2);
  sqcRYGate(q, 0.5466864612511442, 3);
  sqcRZGate(q, -0.10693672761817384, 3);
  sqcRYGate(q, -2.817041300428421, 4);
  sqcRZGate(q, -2.256961787668615, 4);
  sqcRYGate(q, 2.026859542680102, 5);
  sqcRZGate(q, 0.4962119610698964, 5);
  sqcRYGate(q, 1.3182987544559408, 6);
  sqcRZGate(q, 2.1503796886382425, 6);
  sqcRYGate(q, 2.286691550756546, 7);
  sqcRZGate(q, 0.6887079109074747, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.7182827996455456, 0);
  sqcRZGate(q, -2.3612859755890145, 0);
  sqcRYGate(q, 1.068815847223438, 1);
  sqcRZGate(q, 0.35376922998669935, 1);
  sqcRYGate(q, -2.535281845716547, 2);
  sqcRZGate(q, 0.06760281938504682, 2);
  sqcRYGate(q, -0.22639308494596694, 3);
  sqcRZGate(q, 0.6552408586413438, 3);
  sqcRYGate(q, -1.360583432934422, 4);
  sqcRZGate(q, 2.49949280880561, 4);
  sqcRYGate(q, 2.632533594565574, 5);
  sqcRZGate(q, 1.5385895849198952, 5);
  sqcRYGate(q, 0.577209129056429, 6);
  sqcRZGate(q, 2.4103515317668136, 6);
  sqcRYGate(q, -2.0218511606236422, 7);
  sqcRZGate(q, 1.0651700506073316, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.35373121741361285, 0);
  sqcRZGate(q, 0.8252104579658405, 0);
  sqcRYGate(q, 2.9103224121590414, 1);
  sqcRZGate(q, 0.30197378916623924, 1);
  sqcRYGate(q, -2.3808777910899828, 2);
  sqcRZGate(q, 0.16343890309940015, 2);
  sqcRYGate(q, 0.7280072826790169, 3);
  sqcRZGate(q, 0.4239960997783596, 3);
  sqcRYGate(q, -1.885594943366331, 4);
  sqcRZGate(q, -0.5309729424084851, 4);
  sqcRYGate(q, 2.694888811374991, 5);
  sqcRZGate(q, -1.4586162048890223, 5);
  sqcRYGate(q, 0.10293793998736024, 6);
  sqcRZGate(q, 0.46737890515458064, 6);
  sqcRYGate(q, 3.0921661726546628, 7);
  sqcRZGate(q, -0.3002802318752187, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.346436857979098, 0);
  sqcRZGate(q, 2.431695573071204, 0);
  sqcRYGate(q, 0.16685277282648497, 1);
  sqcRZGate(q, 2.008624345986199, 1);
  sqcRYGate(q, -1.7370557957297228, 2);
  sqcRZGate(q, -0.6910260642267669, 2);
  sqcRYGate(q, -2.8977946496888447, 3);
  sqcRZGate(q, 0.12234039054146974, 3);
  sqcRYGate(q, 1.445683601351457, 4);
  sqcRZGate(q, 1.2397485955633998, 4);
  sqcRYGate(q, -0.2070224747878635, 5);
  sqcRZGate(q, -1.1692743549108968, 5);
  sqcRYGate(q, 1.0731817674497428, 6);
  sqcRZGate(q, -2.763182743098228, 6);
  sqcRYGate(q, 2.7570235703076484, 7);
  sqcRZGate(q, -1.054758850623692, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.5212782504868498, 0);
  sqcRZGate(q, -1.8167696262742585, 0);
  sqcRYGate(q, 1.5113644860688864, 1);
  sqcRZGate(q, -2.834310318680115, 1);
  sqcRYGate(q, 0.28005911513336645, 2);
  sqcRZGate(q, 1.741636962130807, 2);
  sqcRYGate(q, -0.874563995989857, 3);
  sqcRZGate(q, 1.8726455241775823, 3);
  sqcRYGate(q, 0.8188485392902264, 4);
  sqcRZGate(q, 0.873072860578403, 4);
  sqcRYGate(q, -1.8572239546150096, 5);
  sqcRZGate(q, -2.1899325007682666, 5);
  sqcRYGate(q, -2.3999534797347684, 6);
  sqcRZGate(q, 2.0575126148945264, 6);
  sqcRYGate(q, 0.7441018854586682, 7);
  sqcRZGate(q, -0.11606289131966552, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.9555548766854827, 0);
  sqcRZGate(q, 2.034137539555161, 0);
  sqcRYGate(q, 1.3241462021405868, 1);
  sqcRZGate(q, -1.6539816719367106, 1);
  sqcRYGate(q, -2.188920391753816, 2);
  sqcRZGate(q, -0.8528045451389028, 2);
  sqcRYGate(q, 2.456387075132429, 3);
  sqcRZGate(q, -1.7921652878546386, 3);
  sqcRYGate(q, 1.5140958422179684, 4);
  sqcRZGate(q, -0.5444778100505855, 4);
  sqcRYGate(q, -2.2135152308046617, 5);
  sqcRZGate(q, -1.5607090030988593, 5);
  sqcRYGate(q, 1.3938527354714896, 6);
  sqcRZGate(q, -1.2059312813113992, 6);
  sqcRYGate(q, -0.27687656234905844, 7);
  sqcRZGate(q, 2.2102933769129676, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9853684142308453, 0);
  sqcRZGate(q, 1.8247873908117551, 0);
  sqcRYGate(q, -1.9278896189936265, 1);
  sqcRZGate(q, -0.8451005188552396, 1);
  sqcRYGate(q, 0.16722200239890217, 2);
  sqcRZGate(q, -1.7508875452755388, 2);
  sqcRYGate(q, 2.598376845531699, 3);
  sqcRZGate(q, 0.07760623946909728, 3);
  sqcRYGate(q, 1.4124986893903027, 4);
  sqcRZGate(q, 2.238217625012113, 4);
  sqcRYGate(q, 0.8759875386862612, 5);
  sqcRZGate(q, -1.7263209823126986, 5);
  sqcRYGate(q, -0.6268674729681774, 6);
  sqcRZGate(q, -2.704120510808511, 6);
  sqcRYGate(q, 1.5461000457358351, 7);
  sqcRZGate(q, -2.6070088340330915, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.5659493135964224, 0);
  sqcRZGate(q, 2.859192710175935, 0);
  sqcRYGate(q, -2.480117494857561, 1);
  sqcRZGate(q, -1.1159230643875206, 1);
  sqcRYGate(q, -2.7167764056537536, 2);
  sqcRZGate(q, -1.2727267940500215, 2);
  sqcRYGate(q, -2.2180743791336077, 3);
  sqcRZGate(q, -2.8060847498720314, 3);
  sqcRYGate(q, 1.7246931852756173, 4);
  sqcRZGate(q, -1.344655409625997, 4);
  sqcRYGate(q, 0.42591958292825605, 5);
  sqcRZGate(q, -2.0514888886560323, 5);
  sqcRYGate(q, 1.6865161477366872, 6);
  sqcRZGate(q, -1.0122044695063948, 6);
  sqcRYGate(q, 1.5623296404407698, 7);
  sqcRZGate(q, 0.7184095397691506, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.5591438934079459, 0);
  sqcRZGate(q, -1.8428778825006173, 0);
  sqcRYGate(q, 0.9912397606632668, 1);
  sqcRZGate(q, -2.581011429494331, 1);
  sqcRYGate(q, -0.19153102522447618, 2);
  sqcRZGate(q, -1.8658966945031485, 2);
  sqcRYGate(q, -0.6250966748806025, 3);
  sqcRZGate(q, -2.7578160513636094, 3);
  sqcRYGate(q, 1.0442150053288346, 4);
  sqcRZGate(q, -1.4005114930068308, 4);
  sqcRYGate(q, -2.7623721013644618, 5);
  sqcRZGate(q, 0.046473673699446084, 5);
  sqcRYGate(q, 1.8826851149063142, 6);
  sqcRZGate(q, 2.818336087804739, 6);
  sqcRYGate(q, 1.856887377114442, 7);
  sqcRZGate(q, 3.1295728137545296, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.3780746399856965, 0);
  sqcRZGate(q, -1.4387541487795694, 0);
  sqcRYGate(q, 0.5605221272649041, 1);
  sqcRZGate(q, 0.5815539247963087, 1);
  sqcRYGate(q, 2.1722365285286047, 2);
  sqcRZGate(q, 1.8128550951282527, 2);
  sqcRYGate(q, 0.7640507233935026, 3);
  sqcRZGate(q, 2.6618351419412076, 3);
  sqcRYGate(q, 2.173229321015479, 4);
  sqcRZGate(q, -1.8578582745195344, 4);
  sqcRYGate(q, 2.2127691668115936, 5);
  sqcRZGate(q, -0.987508889222017, 5);
  sqcRYGate(q, 1.5995868936501527, 6);
  sqcRZGate(q, 1.5645975809554473, 6);
  sqcRYGate(q, 1.0413194708345337, 7);
  sqcRZGate(q, -0.5427504449708787, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.213663450324737, 0);
  sqcRZGate(q, 1.9892580937909823, 0);
  sqcRYGate(q, 1.6365521846151552, 1);
  sqcRZGate(q, 0.24102442047706096, 1);
  sqcRYGate(q, 3.084375256823761, 2);
  sqcRZGate(q, -0.4838924841387109, 2);
  sqcRYGate(q, -1.9740603459589705, 3);
  sqcRZGate(q, 0.2785207089310777, 3);
  sqcRYGate(q, -2.346735555267009, 4);
  sqcRZGate(q, -0.9585492579115877, 4);
  sqcRYGate(q, -2.7424395513347894, 5);
  sqcRZGate(q, -0.46746724913560256, 5);
  sqcRYGate(q, -0.376520351108071, 6);
  sqcRZGate(q, 0.6698717966099359, 6);
  sqcRYGate(q, 2.736096201695771, 7);
  sqcRZGate(q, 0.11542036605677898, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.922540733429764, 0);
  sqcRZGate(q, -2.9185974014543783, 0);
  sqcRYGate(q, -1.8426489092420333, 1);
  sqcRZGate(q, -0.1824807164824449, 1);
  sqcRYGate(q, 2.0425166041660203, 2);
  sqcRZGate(q, -2.356202806227129, 2);
  sqcRYGate(q, -0.34247498123751985, 3);
  sqcRZGate(q, -0.6404740415651985, 3);
  sqcRYGate(q, 1.386206252644966, 4);
  sqcRZGate(q, 0.9954619389737364, 4);
  sqcRYGate(q, 1.4094957448053465, 5);
  sqcRZGate(q, -1.8851026061628318, 5);
  sqcRYGate(q, -1.1575666560202134, 6);
  sqcRZGate(q, -2.2275564991744963, 6);
  sqcRYGate(q, 2.473013989274659, 7);
  sqcRZGate(q, -2.978881553982948, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.6942067724257548, 0);
  sqcRZGate(q, 2.2080041822118304, 0);
  sqcRYGate(q, -0.9029252872385137, 1);
  sqcRZGate(q, -1.1815390779253692, 1);
  sqcRYGate(q, 2.3531152129722406, 2);
  sqcRZGate(q, -2.497655692661683, 2);
  sqcRYGate(q, 2.7299451349091455, 3);
  sqcRZGate(q, -1.8649981667818551, 3);
  sqcRYGate(q, -0.661144160684454, 4);
  sqcRZGate(q, 0.21908522050265386, 4);
  sqcRYGate(q, 2.1034133668904076, 5);
  sqcRZGate(q, 3.1036021556476676, 5);
  sqcRYGate(q, 1.468795688255783, 6);
  sqcRZGate(q, -2.7898445970618875, 6);
  sqcRYGate(q, 0.19058422298352798, 7);
  sqcRZGate(q, 3.0496057913608676, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.313248842765856, 0);
  sqcRZGate(q, 2.4643832283645852, 0);
  sqcRYGate(q, -0.5765163040178134, 1);
  sqcRZGate(q, 3.0327519635245546, 1);
  sqcRYGate(q, -1.5389911398616478, 2);
  sqcRZGate(q, -1.7211781539261448, 2);
  sqcRYGate(q, -0.25074994921717586, 3);
  sqcRZGate(q, -0.2468266966793205, 3);
  sqcRYGate(q, -2.446808009572853, 4);
  sqcRZGate(q, 1.2681137146144623, 4);
  sqcRYGate(q, 2.5903328224837705, 5);
  sqcRZGate(q, -0.9294397699713858, 5);
  sqcRYGate(q, 1.5767311390430123, 6);
  sqcRZGate(q, 1.8783694681708638, 6);
  sqcRYGate(q, 1.4172227791169973, 7);
  sqcRZGate(q, -2.5532552069809538, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.4168075120906624, 0);
  sqcRZGate(q, -0.08477902115573456, 0);
  sqcRYGate(q, 1.1711573997068252, 1);
  sqcRZGate(q, -3.0800669056040872, 1);
  sqcRYGate(q, 2.4193300204403463, 2);
  sqcRZGate(q, 3.04385641602872, 2);
  sqcRYGate(q, 1.9736675409367186, 3);
  sqcRZGate(q, -1.8518173038023873, 3);
  sqcRYGate(q, 2.641168177065663, 4);
  sqcRZGate(q, -2.6022054538413055, 4);
  sqcRYGate(q, 1.3901933760521603, 5);
  sqcRZGate(q, -1.0960474884116536, 5);
  sqcRYGate(q, -1.71111168319327, 6);
  sqcRZGate(q, -0.5572915935809142, 6);
  sqcRYGate(q, 2.4308031888668897, 7);
  sqcRZGate(q, -1.422877829473622, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.0027147686312334, 0);
  sqcRZGate(q, 2.6093203638235276, 0);
  sqcRYGate(q, 2.9819670517345807, 1);
  sqcRZGate(q, 1.7230757285325389, 1);
  sqcRYGate(q, 0.41271644641570937, 2);
  sqcRZGate(q, 0.6625771490493122, 2);
  sqcRYGate(q, -1.9653435412259839, 3);
  sqcRZGate(q, -0.5852754678385015, 3);
  sqcRYGate(q, -2.23426539679508, 4);
  sqcRZGate(q, -1.6375333309644298, 4);
  sqcRYGate(q, 2.67152517100308, 5);
  sqcRZGate(q, -3.0022076357437886, 5);
  sqcRYGate(q, -0.6945342044596468, 6);
  sqcRZGate(q, 0.5129544575593616, 6);
  sqcRYGate(q, 2.0708519799336553, 7);
  sqcRZGate(q, -0.058391777841765226, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.360519656314489, 0);
  sqcRZGate(q, 2.193499683796855, 0);
  sqcRYGate(q, -0.9055569311569054, 1);
  sqcRZGate(q, -1.5659406499957411, 1);
  sqcRYGate(q, -0.16007820216090896, 2);
  sqcRZGate(q, -0.1758140507702157, 2);
  sqcRYGate(q, 1.6231454478479144, 3);
  sqcRZGate(q, -2.9875576316185266, 3);
  sqcRYGate(q, -0.424728553157037, 4);
  sqcRZGate(q, 0.7415775842739549, 4);
  sqcRYGate(q, -0.6051175256071435, 5);
  sqcRZGate(q, 0.7179800956618037, 5);
  sqcRYGate(q, -2.6869739760294395, 6);
  sqcRZGate(q, -2.960852071824184, 6);
  sqcRYGate(q, -0.24959878921547318, 7);
  sqcRZGate(q, -2.991116788166494, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.6436823771181195, 0);
  sqcRZGate(q, -2.035990412731915, 0);
  sqcRYGate(q, -2.676542719283167, 1);
  sqcRZGate(q, -1.5849743932142466, 1);
  sqcRYGate(q, 1.435741889672063, 2);
  sqcRZGate(q, -2.8847634430209728, 2);
  sqcRYGate(q, 1.037106569165681, 3);
  sqcRZGate(q, -0.07855328026980908, 3);
  sqcRYGate(q, -1.5850615416181768, 4);
  sqcRZGate(q, -1.5192647168322124, 4);
  sqcRYGate(q, 1.4208747289944217, 5);
  sqcRZGate(q, 0.3533257473105139, 5);
  sqcRYGate(q, -1.9816398255385321, 6);
  sqcRZGate(q, 0.7655574616397524, 6);
  sqcRYGate(q, 2.0361136273230356, 7);
  sqcRZGate(q, 0.7753560218988172, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5959138071870491, 0);
  sqcRZGate(q, 1.2767079370912209, 0);
  sqcRYGate(q, -0.8910074058865655, 1);
  sqcRZGate(q, 2.5768168693085562, 1);
  sqcRYGate(q, 2.314891615504932, 2);
  sqcRZGate(q, 0.3329273545427087, 2);
  sqcRYGate(q, 3.0123633234236764, 3);
  sqcRZGate(q, -2.456414147836546, 3);
  sqcRYGate(q, 0.4204130914015263, 4);
  sqcRZGate(q, 2.29612301116666, 4);
  sqcRYGate(q, 2.9523042352881523, 5);
  sqcRZGate(q, 0.9152753920658079, 5);
  sqcRYGate(q, 1.7334766620310906, 6);
  sqcRZGate(q, 1.2782880720923586, 6);
  sqcRYGate(q, 2.9207487796334104, 7);
  sqcRZGate(q, 1.913118779506688, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.190798781826561, 0);
  sqcRZGate(q, 1.4759155162064757, 0);
  sqcRYGate(q, 1.1036385716020893, 1);
  sqcRZGate(q, -1.933572461532118, 1);
  sqcRYGate(q, 0.9400821744984585, 2);
  sqcRZGate(q, -0.2938974181104638, 2);
  sqcRYGate(q, -0.18752908705095184, 3);
  sqcRZGate(q, -2.3893538467674715, 3);
  sqcRYGate(q, -1.189834971945385, 4);
  sqcRZGate(q, 0.201666471766625, 4);
  sqcRYGate(q, 1.5900568848711985, 5);
  sqcRZGate(q, 0.49811675315025367, 5);
  sqcRYGate(q, -2.558250652605306, 6);
  sqcRZGate(q, -0.5664128276933325, 6);
  sqcRYGate(q, 1.4552655101542413, 7);
  sqcRZGate(q, 0.16840101260353446, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.8365338868317318, 0);
  sqcRZGate(q, -2.075385824574399, 0);
  sqcRYGate(q, 1.6232334104030657, 1);
  sqcRZGate(q, -1.2998192711044774, 1);
  sqcRYGate(q, -2.4983727845688684, 2);
  sqcRZGate(q, 3.1126020439140714, 2);
  sqcRYGate(q, 2.5131587639713184, 3);
  sqcRZGate(q, 0.41588102704948676, 3);
  sqcRYGate(q, 2.36586113085353, 4);
  sqcRZGate(q, -2.058269163564495, 4);
  sqcRYGate(q, -0.9130257454657813, 5);
  sqcRZGate(q, -2.599787612477766, 5);
  sqcRYGate(q, 2.9700718620189406, 6);
  sqcRZGate(q, -2.0752895673511205, 6);
  sqcRYGate(q, -0.2627565884152121, 7);
  sqcRZGate(q, -0.07421235434308125, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.923924601698305, 0);
  sqcRZGate(q, -1.9528078265471116, 0);
  sqcRYGate(q, -2.4240872323896667, 1);
  sqcRZGate(q, 2.179505245509036, 1);
  sqcRYGate(q, -0.39790805451685146, 2);
  sqcRZGate(q, 0.6056237990245437, 2);
  sqcRYGate(q, 0.2130935716094564, 3);
  sqcRZGate(q, 0.004250413169222256, 3);
  sqcRYGate(q, -2.6130221969764977, 4);
  sqcRZGate(q, -0.744669130853275, 4);
  sqcRYGate(q, -0.7736791695112055, 5);
  sqcRZGate(q, 1.702546909578229, 5);
  sqcRYGate(q, 0.27854688020283813, 6);
  sqcRZGate(q, 1.1739249645245935, 6);
  sqcRYGate(q, -1.816830046403278, 7);
  sqcRZGate(q, -0.608262242137549, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.9654119040530729, 0);
  sqcRZGate(q, -2.6059443534725286, 0);
  sqcRYGate(q, 1.274286416394034, 1);
  sqcRZGate(q, 1.6568836030547862, 1);
  sqcRYGate(q, 0.7325782194547736, 2);
  sqcRZGate(q, 0.8521691516148061, 2);
  sqcRYGate(q, -1.1541634494054422, 3);
  sqcRZGate(q, -0.3330132922581774, 3);
  sqcRYGate(q, 0.26527887232090097, 4);
  sqcRZGate(q, 3.108202557362976, 4);
  sqcRYGate(q, -1.4324654624285416, 5);
  sqcRZGate(q, 3.0603609837895083, 5);
  sqcRYGate(q, -1.6809884683021261, 6);
  sqcRZGate(q, 1.4652407563348413, 6);
  sqcRYGate(q, -1.8062461414219781, 7);
  sqcRZGate(q, -2.538148671154771, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.30656974224727623, 0);
  sqcRZGate(q, 1.0929649291543928, 0);
  sqcRYGate(q, -2.273569029176902, 1);
  sqcRZGate(q, 2.068752456074627, 1);
  sqcRYGate(q, 0.6773348349542202, 2);
  sqcRZGate(q, -2.7249185673092096, 2);
  sqcRYGate(q, 2.0460294650189126, 3);
  sqcRZGate(q, -1.7704071898750753, 3);
  sqcRYGate(q, 2.203527218715535, 4);
  sqcRZGate(q, 2.040846377630329, 4);
  sqcRYGate(q, 2.3231595620712415, 5);
  sqcRZGate(q, 0.4789386326652538, 5);
  sqcRYGate(q, -1.7459681111471748, 6);
  sqcRZGate(q, 1.1469100474161014, 6);
  sqcRYGate(q, 2.021302393091731, 7);
  sqcRZGate(q, -1.361205378142377, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.059568332900736626, 0);
  sqcRZGate(q, 2.9258975384901356, 0);
  sqcRYGate(q, -1.3558425315112865, 1);
  sqcRZGate(q, 2.907300470205343, 1);
  sqcRYGate(q, 1.3347422009547918, 2);
  sqcRZGate(q, -2.2992241580988146, 2);
  sqcRYGate(q, -3.1063116467860836, 3);
  sqcRZGate(q, 1.5230820320065979, 3);
  sqcRYGate(q, -2.7441860378610214, 4);
  sqcRZGate(q, -0.25319336076579013, 4);
  sqcRYGate(q, -2.6526102696127363, 5);
  sqcRZGate(q, -3.0050660559241185, 5);
  sqcRYGate(q, -2.0956070664340825, 6);
  sqcRZGate(q, -2.7168974038714513, 6);
  sqcRYGate(q, 1.0148568198232608, 7);
  sqcRZGate(q, 2.0725314506642896, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5354846031317206, 0);
  sqcRZGate(q, -1.64200869990444, 0);
  sqcRYGate(q, 0.6133986825082237, 1);
  sqcRZGate(q, -0.9581363655264068, 1);
  sqcRYGate(q, -1.1345806423178235, 2);
  sqcRZGate(q, -2.0713913170116287, 2);
  sqcRYGate(q, 3.037644690022421, 3);
  sqcRZGate(q, -2.743423191964863, 3);
  sqcRYGate(q, -1.2735789756113332, 4);
  sqcRZGate(q, -0.35161252120178355, 4);
  sqcRYGate(q, 1.6452826190446268, 5);
  sqcRZGate(q, 1.9528866497866693, 5);
  sqcRYGate(q, -0.34625954567099004, 6);
  sqcRZGate(q, -3.1275276183280765, 6);
  sqcRYGate(q, -0.9258244263857344, 7);
  sqcRZGate(q, 2.403390278550927, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.237169168581479, 0);
  sqcRZGate(q, -2.839419647150357, 0);
  sqcRYGate(q, 0.40685562197912173, 1);
  sqcRZGate(q, 1.8626696198085844, 1);
  sqcRYGate(q, -1.4452570568221166, 2);
  sqcRZGate(q, 2.908838302095716, 2);
  sqcRYGate(q, 3.0620054278301407, 3);
  sqcRZGate(q, 2.35246050917992, 3);
  sqcRYGate(q, -2.820970859700674, 4);
  sqcRZGate(q, 1.3185189804731536, 4);
  sqcRYGate(q, -2.091820585765167, 5);
  sqcRZGate(q, -2.0288876526009147, 5);
  sqcRYGate(q, -0.813518515438718, 6);
  sqcRZGate(q, -2.240811494139404, 6);
  sqcRYGate(q, -1.976215589197757, 7);
  sqcRZGate(q, 1.4040139392901034, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7639302240334311, 0);
  sqcRZGate(q, 0.12962795945460662, 0);
  sqcRYGate(q, 0.4140708707282913, 1);
  sqcRZGate(q, 0.9762903759213488, 1);
  sqcRYGate(q, 2.5898547028168295, 2);
  sqcRZGate(q, 2.5435342599105537, 2);
  sqcRYGate(q, 0.4765132963497622, 3);
  sqcRZGate(q, 0.6273637785624191, 3);
  sqcRYGate(q, -0.7641043542215318, 4);
  sqcRZGate(q, 0.5909705868441321, 4);
  sqcRYGate(q, -0.43634370922890936, 5);
  sqcRZGate(q, -1.323885019018693, 5);
  sqcRYGate(q, -1.134951080693324, 6);
  sqcRZGate(q, -1.3728844181482982, 6);
  sqcRYGate(q, 0.9907570080623652, 7);
  sqcRZGate(q, -2.5709356364999487, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.6795681033812769, 0);
  sqcRZGate(q, -1.5292268513526104, 0);
  sqcRYGate(q, 1.499076477602861, 1);
  sqcRZGate(q, -0.6769567074944565, 1);
  sqcRYGate(q, 2.8080737049094564, 2);
  sqcRZGate(q, 2.7477730289630395, 2);
  sqcRYGate(q, 1.3037648130995085, 3);
  sqcRZGate(q, 1.3272928069398429, 3);
  sqcRYGate(q, -2.922229115396172, 4);
  sqcRZGate(q, 3.1307322546814733, 4);
  sqcRYGate(q, -1.4460807570625964, 5);
  sqcRZGate(q, 0.45512486400520125, 5);
  sqcRYGate(q, -0.2316480247505854, 6);
  sqcRZGate(q, 2.1083023539555725, 6);
  sqcRYGate(q, 1.3960795803214487, 7);
  sqcRZGate(q, 2.9129329984600645, 7);

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
