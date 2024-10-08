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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 2.084258113015336, 0);
  sqcRYGate(q, -0.6031683910221588, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.570401362276693, 0);
  sqcRYGate(q, -0.6313672136736067, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3435503550241241, 1);
  sqcRYGate(q, 0.036404650189583165, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7787329337029725, 1);
  sqcRYGate(q, -0.13433756130603403, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4639928469699948, 2);
  sqcRYGate(q, 1.2885564580328, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0013295430299269384, 2);
  sqcRYGate(q, 0.5017774761386935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07958757065964317, 3);
  sqcRYGate(q, -0.21190134264667285, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.049020550964002, 3);
  sqcRYGate(q, 0.5438252374598967, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3886854505946769, 4);
  sqcRYGate(q, 0.8720309298956032, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.779947749883086, 4);
  sqcRYGate(q, 1.6288719158396419, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7937082427404019, 5);
  sqcRYGate(q, 0.043675071204320126, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5707170822184489, 5);
  sqcRYGate(q, 2.5859935199974196, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.456171400678331, 6);
  sqcRYGate(q, -3.12960653542441, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6102379638891349, 6);
  sqcRYGate(q, 2.193571032418961, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9170853529064174, 7);
  sqcRYGate(q, 3.112952583821807, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.562404661328357, 7);
  sqcRYGate(q, -2.288776250866628, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.7336804213864387, 8);
  sqcRYGate(q, -2.8587220560997753, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.44171054447813, 8);
  sqcRYGate(q, 1.570761634496347, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.08659437771599503, 9);
  sqcRYGate(q, 0.4731747389367937, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.5739667271565234, 9);
  sqcRYGate(q, 1.5421674242346617, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.890476418115337, 10);
  sqcRYGate(q, 0.11041664343860091, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.1356831983856477, 10);
  sqcRYGate(q, -1.5735535360071102, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.0399400187164303, 11);
  sqcRYGate(q, -0.17260246844404178, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.702394579088937, 11);
  sqcRYGate(q, 1.0383687558153776, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.766158339599235, 12);
  sqcRYGate(q, -0.7277220992398759, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.019887771686178, 12);
  sqcRYGate(q, -0.09982554120198639, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.1295861121366908, 13);
  sqcRYGate(q, -1.1301797847997745, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.8878801975972341, 13);
  sqcRYGate(q, 2.287597906248797, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.4581051478501905, 14);
  sqcRYGate(q, 2.6201286526773506, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.7442878659799672, 14);
  sqcRYGate(q, -0.45976467185711584, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.8392311113969537, 0);
  sqcRYGate(q, 2.515617878805938, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8373701280708117, 0);
  sqcRYGate(q, 1.004709790415773, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9794465998116201, 1);
  sqcRYGate(q, -1.4288129403553196, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4167557090777843, 1);
  sqcRYGate(q, -0.09141289826678986, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4808117082627503, 2);
  sqcRYGate(q, -2.3755137696452064, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.449692671179525, 2);
  sqcRYGate(q, 1.20257207210744, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6933770765876415, 3);
  sqcRYGate(q, -0.5268658897584295, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9452815983133009, 3);
  sqcRYGate(q, -3.1252861228337903, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.2794389737381566, 4);
  sqcRYGate(q, 2.7421075369012984, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.006270064208160454, 4);
  sqcRYGate(q, 0.054085550563071294, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.35694910177559774, 5);
  sqcRYGate(q, 0.9082322692824443, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.18926762737429084, 5);
  sqcRYGate(q, 0.14121655320978643, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.497350615798963, 6);
  sqcRYGate(q, -0.6112963406135655, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7690874150338223, 6);
  sqcRYGate(q, 0.8988413040921577, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7319433825576664, 7);
  sqcRYGate(q, -3.099503980424828, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1113120747103733, 7);
  sqcRYGate(q, 2.0353253121108143e-05, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.7981027495180033, 8);
  sqcRYGate(q, 1.7256252381160209, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.019241340780152605, 8);
  sqcRYGate(q, -3.1407875501178024, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.3984863883832626, 9);
  sqcRYGate(q, -0.02549634021321853, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.00221501373117583, 9);
  sqcRYGate(q, 0.719504971090378, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.7757677055880654, 10);
  sqcRYGate(q, -0.7921018043684391, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.116997937234176, 10);
  sqcRYGate(q, 0.0045234312022168766, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.7144927708849123, 11);
  sqcRYGate(q, 0.6755492959333438, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.888939791864962, 11);
  sqcRYGate(q, 2.1438579644642664, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.714619974974426, 12);
  sqcRYGate(q, 1.655838675438627, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.9968253807769689, 12);
  sqcRYGate(q, 2.111175014445405, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.031226710681671422, 13);
  sqcRYGate(q, 1.055119932045323, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.8752675940182142, 13);
  sqcRYGate(q, 2.8680639282472256, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.7991577154777395, 14);
  sqcRYGate(q, -2.0473465812204106, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.4097113076484353, 14);
  sqcRYGate(q, 1.7002106791180212, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.890976353576387, 0);
  sqcRYGate(q, 0.03532537874933271, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.125463907367095, 0);
  sqcRYGate(q, 1.9521890415966432, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.49307191492777397, 1);
  sqcRYGate(q, 1.407512446410373, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6656501107357955, 1);
  sqcRYGate(q, 0.9345799117294362, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.677437024825781, 2);
  sqcRYGate(q, -1.8429670254981412, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.10122642331767419, 2);
  sqcRYGate(q, 0.3677793677654382, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.620085041395444, 3);
  sqcRYGate(q, -0.2372761520890974, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9061731127415265, 3);
  sqcRYGate(q, -1.5427122689910346, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4961747649495879, 4);
  sqcRYGate(q, 2.425291026381866, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1352648252758506, 4);
  sqcRYGate(q, -1.5509512117588944, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.11748849233966971, 5);
  sqcRYGate(q, -1.6857837231128, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.041048362510421, 5);
  sqcRYGate(q, 3.0955428610422024, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7066704274039335, 6);
  sqcRYGate(q, -1.799505264633819, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.340327786126906, 6);
  sqcRYGate(q, -1.587901161902568, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.969474442701381, 7);
  sqcRYGate(q, -0.8169438732900707, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.596034280614222, 7);
  sqcRYGate(q, -1.5674893202082893, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.111837144099244, 8);
  sqcRYGate(q, -1.5530027569065306, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5699395861995962, 8);
  sqcRYGate(q, 3.1211785950669935, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.9261635297625013, 9);
  sqcRYGate(q, -2.393399212564614, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.0055979132416377, 9);
  sqcRYGate(q, -0.9305934170911012, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.9982230861657904, 10);
  sqcRYGate(q, 3.0724140000595677, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0813561271409193, 10);
  sqcRYGate(q, -3.1398397525507415, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5941938054401845, 11);
  sqcRYGate(q, -1.453064621870042, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.5411006824207173, 11);
  sqcRYGate(q, -0.19214561224065996, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.867574378034742, 12);
  sqcRYGate(q, 2.974770290275633, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.01228151487664, 12);
  sqcRYGate(q, -1.899913005082783, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.7497507750040193, 13);
  sqcRYGate(q, -1.3222400924519926, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.035459871409740905, 13);
  sqcRYGate(q, 2.8336630071389908, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.285925588101656, 14);
  sqcRYGate(q, 0.5543271245257599, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.932460046045871, 14);
  sqcRYGate(q, 0.5576759799814228, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.16874365129171018, 0);
  sqcRYGate(q, 2.7007612398857974, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9278580361463016, 0);
  sqcRYGate(q, -2.2601937555173333, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7274282988177134, 1);
  sqcRYGate(q, 0.28523104966241775, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9685682914748224, 1);
  sqcRYGate(q, 2.1240436397894538, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.705986259459929, 2);
  sqcRYGate(q, -1.5894451554275024, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5195296421259656, 2);
  sqcRYGate(q, 3.1230046095737807, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5737039487948543, 3);
  sqcRYGate(q, -1.5623631907816682, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5270551526100888, 3);
  sqcRYGate(q, -1.6796382948979964, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0149014836191954, 4);
  sqcRYGate(q, 0.3141011126837103, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.570718134134538, 4);
  sqcRYGate(q, 0.07388385662412844, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5521180661133267, 5);
  sqcRYGate(q, -1.6406763561794537, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5720236942470007, 5);
  sqcRYGate(q, 0.46482018076035914, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5864458175925407, 6);
  sqcRYGate(q, -1.5720603255065457, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.58523630657966, 6);
  sqcRYGate(q, 1.570226076907189, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.203592713552568, 7);
  sqcRYGate(q, 1.1464139350335258, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5789455663162322, 7);
  sqcRYGate(q, 1.603975716780113, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.6257167652851, 8);
  sqcRYGate(q, 0.9022625943305387, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.1374047030063394, 8);
  sqcRYGate(q, -0.00021797735197784818, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.03713027517509282, 9);
  sqcRYGate(q, -0.18722401549174936, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.2085625774380819, 9);
  sqcRYGate(q, -1.8391433082833357, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.6280135346841508, 10);
  sqcRYGate(q, 2.684355805418095, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.4250077861556107, 10);
  sqcRYGate(q, -0.008081906327810808, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.698929254136206, 11);
  sqcRYGate(q, -1.3664984655943926, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.0043745389223497355, 11);
  sqcRYGate(q, 0.046478137102186956, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.9308454662776271, 12);
  sqcRYGate(q, 0.17358433188544797, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.6851394732895089, 12);
  sqcRYGate(q, 1.41736011560358, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.362325615540991, 13);
  sqcRYGate(q, -1.4597019341946025, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.8436743141767469, 13);
  sqcRYGate(q, -1.5602177068124738, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.973794392796685, 14);
  sqcRYGate(q, 2.6508225158444145, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.5850794516106546, 14);
  sqcRYGate(q, -3.0554388259089387, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.285386841619631, 0);
  sqcRYGate(q, -0.7926546347363477, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9402028832448304, 0);
  sqcRYGate(q, 1.4505449526224392, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.249764413792357, 1);
  sqcRYGate(q, -0.2524562425081598, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5916391235062282, 1);
  sqcRYGate(q, 1.2038685934068294, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5010910780805164, 2);
  sqcRYGate(q, 0.015972041183149578, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.04136627022112056, 2);
  sqcRYGate(q, -0.10173115857614512, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6788572753466214, 3);
  sqcRYGate(q, 1.1217732233865938, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.025144772059197806, 3);
  sqcRYGate(q, -0.0173016064458924, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5703209477532127, 4);
  sqcRYGate(q, 1.5757080601516202, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7806276685396973, 4);
  sqcRYGate(q, 1.5204825642074544, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5670754346446272, 5);
  sqcRYGate(q, 0.4477321853070846, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.126341502020376, 5);
  sqcRYGate(q, -0.966164721027745, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6624105928220229, 6);
  sqcRYGate(q, 3.1035129125653595, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3789612298958076, 6);
  sqcRYGate(q, 3.1151577346688333, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5758204248417933, 7);
  sqcRYGate(q, -2.0154256309426386, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.0013986728569257657, 7);
  sqcRYGate(q, -2.5116155100527946, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.072204237501239, 8);
  sqcRYGate(q, -1.1099867931469725, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5774396378483235, 8);
  sqcRYGate(q, -2.639811672007836, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.012054147900345313, 9);
  sqcRYGate(q, -2.4763447208495593, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.14138310946385, 9);
  sqcRYGate(q, 1.5711775825827432, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.028750794653305434, 10);
  sqcRYGate(q, -1.5010967743770758, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.674408362502339, 10);
  sqcRYGate(q, 0.0003531946278743092, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.8564893390763199, 11);
  sqcRYGate(q, -2.863292100398185, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.4131443420584753, 11);
  sqcRYGate(q, -0.11687408290354769, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.192424835435748, 12);
  sqcRYGate(q, -1.3525335437549497, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5606242476780583, 12);
  sqcRYGate(q, 0.0801434153030411, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.48217403501253653, 13);
  sqcRYGate(q, 2.244036893894378, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.0078848199106267, 13);
  sqcRYGate(q, -3.1188213249477257, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.5656949509537665, 14);
  sqcRYGate(q, -2.6117704202896657, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.6716397129688767, 14);
  sqcRYGate(q, -1.7006922531585928, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.2061391157435617, 0);
  sqcRYGate(q, 1.4354593526368409, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.070232789776839, 0);
  sqcRYGate(q, -1.0445324441717538, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.10639420249953903, 1);
  sqcRYGate(q, -1.6482466828542188, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.153255538152298, 1);
  sqcRYGate(q, -2.676821317258457, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.09187768138717592, 2);
  sqcRYGate(q, -0.7529734962777263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.14941018746147514, 2);
  sqcRYGate(q, 1.5998487963984767, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4129755692791992, 3);
  sqcRYGate(q, 1.5949919834939728, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.092717382035368, 3);
  sqcRYGate(q, -1.5769126645057754, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5543633382850217, 4);
  sqcRYGate(q, -1.2665311431543704, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0308622264338256, 4);
  sqcRYGate(q, 2.930473344328577, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.264830022557958, 5);
  sqcRYGate(q, -1.0565545651882182, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.06867747416482, 5);
  sqcRYGate(q, -2.180000969166356, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.088167850385958, 6);
  sqcRYGate(q, 1.5889203850762774, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3721775069712407, 6);
  sqcRYGate(q, -1.5703505870514123, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.05475376150830069, 7);
  sqcRYGate(q, -1.9137554399595869, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.1395261024737886, 7);
  sqcRYGate(q, 1.576809655858094, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.3397162502875595, 8);
  sqcRYGate(q, 1.5683559304793493, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.6488137670986096, 8);
  sqcRYGate(q, 3.0491780470164285, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.139521800627386, 9);
  sqcRYGate(q, 1.2726625952590096, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5714536657324016, 9);
  sqcRYGate(q, 1.5851278460465137, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5676554580528288, 10);
  sqcRYGate(q, 1.6559936883793185, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.576675371759257, 10);
  sqcRYGate(q, 1.5507386935415826, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5706129161908446, 11);
  sqcRYGate(q, -0.949149192814824, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5736559645905555, 11);
  sqcRYGate(q, 2.5168162407345753, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5707375101288432, 12);
  sqcRYGate(q, 0.465290951314377, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5711665837438307, 12);
  sqcRYGate(q, 1.5534071101231692, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5705816569792683, 13);
  sqcRYGate(q, 2.027862507988581, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5707579258326811, 13);
  sqcRYGate(q, -1.5702112690783203, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5709243949637572, 14);
  sqcRYGate(q, -1.3365380715885395, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.5740312761702508, 14);
  sqcRYGate(q, 1.5477481447622798, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.4937836187682143, 0);
  sqcRYGate(q, 3.118169173453796, 1);
  sqcRYGate(q, 1.659498917420163, 2);
  sqcRYGate(q, -1.5734814387018545, 3);
  sqcRYGate(q, 1.5627421534592223, 4);
  sqcRYGate(q, 1.5689285900801142, 5);
  sqcRYGate(q, -1.5822360826351458, 6);
  sqcRYGate(q, 1.574064739643756, 7);
  sqcRYGate(q, -3.138025732848369, 8);
  sqcRYGate(q, -0.0007777392342713796, 9);
  sqcRYGate(q, -1.570411828762056, 10);
  sqcRYGate(q, 1.5707945192246093, 11);
  sqcRYGate(q, 1.5706410185294477, 12);
  sqcRYGate(q, -1.5706771324724338, 13);
  sqcRYGate(q, 1.570764583996529, 14);
  sqcRYGate(q, 1.5693105033111483, 15);

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
