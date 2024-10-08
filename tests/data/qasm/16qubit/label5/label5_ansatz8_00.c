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

  sqcRYGate(q, -3.024917809953019, 0);
  sqcRYGate(q, -1.6080843254400445, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1664153970401154, 0);
  sqcRYGate(q, 3.0298197519835006, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.266977043607076, 2);
  sqcRYGate(q, -3.0351551976589763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.307352821608364, 2);
  sqcRYGate(q, -0.8884146780714293, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6234057119018845, 4);
  sqcRYGate(q, -1.9650182737051898, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8543776691301792, 4);
  sqcRYGate(q, 1.1165016249994635, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9765278518703546, 6);
  sqcRYGate(q, -1.356999212246441, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9930167219719395, 6);
  sqcRYGate(q, 1.1022469506791661, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.44389413620663287, 8);
  sqcRYGate(q, -0.7212390740895157, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.37833639796497387, 8);
  sqcRYGate(q, -2.1550355183437286, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.7168905938777838, 10);
  sqcRYGate(q, 1.2776946844126327, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.1180093153462267, 10);
  sqcRYGate(q, -2.872173626865415, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.66218306612533, 12);
  sqcRYGate(q, 1.515241461060337, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.6275806428743906, 12);
  sqcRYGate(q, -0.006111930241227803, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.4255884246654074, 14);
  sqcRYGate(q, 0.842514872811206, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5471986657748251, 14);
  sqcRYGate(q, 1.4446943801344574, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.5909046748197002, 0);
  sqcRYGate(q, 1.4148661044949784, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1335901266503554, 0);
  sqcRYGate(q, 0.0013179508209226756, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8526457517907984, 2);
  sqcRYGate(q, 0.23568375430986424, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.5798261958373296, 2);
  sqcRYGate(q, 0.0006126767001643494, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.520516266296127, 4);
  sqcRYGate(q, 1.5898808725250282, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.5095873346618374, 4);
  sqcRYGate(q, -3.1411513999379523, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.8142159241294205, 6);
  sqcRYGate(q, -2.764145764960265, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.3981401617177651, 6);
  sqcRYGate(q, 0.610407060489008, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.5635912479603986, 8);
  sqcRYGate(q, 1.804186062185692, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.5604821808839395, 8);
  sqcRYGate(q, -3.13088285795053, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.7339276245823125, 10);
  sqcRYGate(q, -1.2683342938031263, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 3.141575887318672, 10);
  sqcRYGate(q, 3.9978790329797675e-05, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -1.0233684099732048, 12);
  sqcRYGate(q, -0.8297467400001645, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.0487378253455155, 12);
  sqcRYGate(q, 0.007079820581960765, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, -1.6391940711398183, 1);
  sqcRYGate(q, -0.9075353537053166, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.01649210519481099, 1);
  sqcRYGate(q, -2.6807384893117048, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.011837315286192, 3);
  sqcRYGate(q, -2.802052647491527, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.015519507270090318, 3);
  sqcRYGate(q, 0.03702266503190366, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.7044062627276224, 5);
  sqcRYGate(q, -2.4716392031927077, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.405448254745776, 5);
  sqcRYGate(q, 3.11741961636075, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.141015483060126, 7);
  sqcRYGate(q, -3.002818396089084, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.194873329040891, 7);
  sqcRYGate(q, -1.6738807101738882, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.5160553494622893, 9);
  sqcRYGate(q, -1.4466899643486746, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.4611098397878033, 9);
  sqcRYGate(q, -0.03209165666170932, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.5581287630875003, 11);
  sqcRYGate(q, 0.5659849927268845, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.5744302412241584, 11);
  sqcRYGate(q, -0.5201990424327635, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.6182653772539883, 13);
  sqcRYGate(q, -1.3801359635902815, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.6157938654103305, 13);
  sqcRYGate(q, 1.5709398043362448, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -3.1296466124121842, 0);
  sqcRYGate(q, 0.02940496419432364, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.67533750905255, 0);
  sqcRYGate(q, 0.4678711800472035, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1915082124619428, 2);
  sqcRYGate(q, 2.0016291252517155, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.537631092535812, 2);
  sqcRYGate(q, -1.5985042558005125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.386801281001012, 4);
  sqcRYGate(q, 2.9467166605927293, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.16241767923914363, 4);
  sqcRYGate(q, 1.582151396564555, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.11503261205726822, 6);
  sqcRYGate(q, 1.5521054850497153, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.128257395339977, 6);
  sqcRYGate(q, -0.006334858800942544, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.150379476935866, 8);
  sqcRYGate(q, -1.5443356042820577, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.037084953665378, 8);
  sqcRYGate(q, -3.141195500807902, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8964194417609039, 10);
  sqcRYGate(q, 1.564629646496189, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.03594692956994461, 10);
  sqcRYGate(q, 3.141479622359, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.291126553634938, 12);
  sqcRYGate(q, -1.4836476772353708, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.141462303339197, 12);
  sqcRYGate(q, -2.059486693717317, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.007516915511444085, 14);
  sqcRYGate(q, 0.7684170545321575, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.5706354062670176, 14);
  sqcRYGate(q, -1.570865217536854, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.852000886210692, 0);
  sqcRYGate(q, -1.7195763968424047, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.133328838363418, 0);
  sqcRYGate(q, 3.1327887780348025, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5389313883602815, 2);
  sqcRYGate(q, -0.3671146202562028, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5671967065395815, 2);
  sqcRYGate(q, -1.4647863390765137, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.1340232327247852, 4);
  sqcRYGate(q, 2.7413073826550205, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.1415847637247474, 4);
  sqcRYGate(q, -0.0002804532034632601, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.6090880198118471, 6);
  sqcRYGate(q, -1.088528267910152, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.1332881410007425, 6);
  sqcRYGate(q, -1.1373931459671862, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.3530607589427559, 8);
  sqcRYGate(q, 0.032292167182936815, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.5898125133377086, 8);
  sqcRYGate(q, -1.5642280934334947, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.908268036550065, 10);
  sqcRYGate(q, -1.9938015362006798, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 7.041143679664685e-06, 10);
  sqcRYGate(q, -3.141580888364654, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, 2.02643756445596, 12);
  sqcRYGate(q, 2.4863377202666435, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.5709917608882455, 12);
  sqcRYGate(q, -2.24447047349637, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 2.4794831793884, 1);
  sqcRYGate(q, -2.1041176355464115, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5697689220189708, 1);
  sqcRYGate(q, -0.9773587608354385, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5710976788553785, 3);
  sqcRYGate(q, -2.052906716519757, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.5711253892875592, 3);
  sqcRYGate(q, -1.7384579111570408, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.7386312220874907, 5);
  sqcRYGate(q, 3.1235094600588913, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5715949884549087, 5);
  sqcRYGate(q, 3.140484407657809, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.570029019023491, 7);
  sqcRYGate(q, -1.5717912620373458, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.8458503516507578, 7);
  sqcRYGate(q, -0.591794993952034, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.5708246034311903, 9);
  sqcRYGate(q, 0.006282519378182805, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.9058240517334977, 9);
  sqcRYGate(q, 1.5708696884985969, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.5709453890397536, 11);
  sqcRYGate(q, -0.41630236322844616, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.5611876143647345, 11);
  sqcRYGate(q, 2.5904993555113225, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, -1.7480770784330835, 13);
  sqcRYGate(q, -3.1414925237892586, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, -1.5709135162182382, 13);
  sqcRYGate(q, 1.5708827661304898, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 0.6000398526438874, 0);
  sqcRYGate(q, 3.052423855523019, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1411662086969567, 0);
  sqcRYGate(q, -0.0007294977188285756, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7601036653733053, 2);
  sqcRYGate(q, 2.87753006618421, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9847242561933456, 2);
  sqcRYGate(q, 0.007923109858564814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.14020007766526, 4);
  sqcRYGate(q, -0.8368608195942355, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5723898021438858, 4);
  sqcRYGate(q, 0.022480119145084652, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5481882550161565, 6);
  sqcRYGate(q, 1.073656565448267, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.141128617115779, 6);
  sqcRYGate(q, -1.6390186294790048, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.137149307821716, 8);
  sqcRYGate(q, -1.1152172769496482, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -9.176067744309792e-05, 8);
  sqcRYGate(q, -1.5707639661118327, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.8049565703998942, 10);
  sqcRYGate(q, -2.547642647106683, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1415810746199986, 10);
  sqcRYGate(q, -1.5563663996020605, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5250564240927469, 12);
  sqcRYGate(q, 1.5708067350999868, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5712755283620659, 12);
  sqcRYGate(q, 1.5707501130509784, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5709398302685411, 14);
  sqcRYGate(q, -1.3836231035246747, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.9950238603179895, 14);
  sqcRYGate(q, -1.5713783305639737, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.818419541999777, 0);
  sqcRYGate(q, -2.5979339338177834, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5688697708162396, 0);
  sqcRYGate(q, -0.46842070123463403, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5745635756497778, 2);
  sqcRYGate(q, -2.336814465769386, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.141510890193451, 2);
  sqcRYGate(q, -3.003430257454553, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.9027275928347063, 4);
  sqcRYGate(q, 1.3552489709336084, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.1410319360400845, 4);
  sqcRYGate(q, 1.5706538174605882, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.7972705306487444, 6);
  sqcRYGate(q, 1.7652984882638778, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.141585818330748, 6);
  sqcRYGate(q, -2.6564212177504487e-05, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.21007902156917, 8);
  sqcRYGate(q, 0.0014855615110240755, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.06538219591446216, 8);
  sqcRYGate(q, 3.1415046517994054, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.004151212195634, 10);
  sqcRYGate(q, -1.1129453891320233, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -0.027930334501681916, 10);
  sqcRYGate(q, -3.1415916873620136, 12);
  sqcCXGate(q, 10, 12);
  sqcRYGate(q, -2.4101026890886486, 12);
  sqcRYGate(q, -3.016555178924962, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 1.570907453873704, 12);
  sqcRYGate(q, 3.141270222526424, 14);
  sqcCXGate(q, 12, 14);
  sqcRYGate(q, 0.3419875430644859, 1);
  sqcRYGate(q, 1.1826368355337695, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0207371871030175, 1);
  sqcRYGate(q, -0.3368791412765803, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0251984224343262, 3);
  sqcRYGate(q, -1.3480007147651243, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.1394898286744706, 3);
  sqcRYGate(q, 3.1309482814149474, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.747953226910597, 5);
  sqcRYGate(q, -2.8289426620322904, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.1119338361346847, 5);
  sqcRYGate(q, -3.1159714962397422, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.9879994280658445, 7);
  sqcRYGate(q, -1.2549914890818086, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.1415044356053587, 7);
  sqcRYGate(q, -3.1413696311172616, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.796206241643073, 9);
  sqcRYGate(q, -1.1203118489762085, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.0012991546138669818, 9);
  sqcRYGate(q, 1.6361934363049493, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.364606056155855, 11);
  sqcRYGate(q, -3.057819608178233, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.5674791064827591, 11);
  sqcRYGate(q, 3.138414715101781, 13);
  sqcCXGate(q, 11, 13);
  sqcRYGate(q, 1.5983044554689214, 13);
  sqcRYGate(q, -0.211975066272986, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 3.1173632897086105, 13);
  sqcRYGate(q, -1.5714476921134999, 15);
  sqcCXGate(q, 13, 15);
  sqcRYGate(q, 1.5696181193936223, 0);
  sqcRYGate(q, 0.7805719745577618, 1);
  sqcRYGate(q, -0.0030385379520840683, 2);
  sqcRYGate(q, 0.011354236039053944, 3);
  sqcRYGate(q, 0.0010076615948585352, 4);
  sqcRYGate(q, -1.6185194423707758, 5);
  sqcRYGate(q, -2.01283226626369, 6);
  sqcRYGate(q, -1.45382625856445, 7);
  sqcRYGate(q, -2.6967923116492147, 8);
  sqcRYGate(q, -1.5752087959734105, 9);
  sqcRYGate(q, -2.9902834380394103, 10);
  sqcRYGate(q, -1.5080853675938828, 11);
  sqcRYGate(q, 2.7602802338684027, 12);
  sqcRYGate(q, 3.141501101112063, 13);
  sqcRYGate(q, 1.5703094393144672, 14);
  sqcRYGate(q, 2.9797644682596918, 15);

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
