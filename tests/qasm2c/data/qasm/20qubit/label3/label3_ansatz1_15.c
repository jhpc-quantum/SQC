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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -3.015930779904241, 0);
  sqcRZGate(q, -1.9600010402479358, 0);
  sqcRYGate(q, 1.0975230552712791, 1);
  sqcRZGate(q, 0.9831860727109092, 1);
  sqcRYGate(q, -2.413565589640103, 2);
  sqcRZGate(q, 0.8048132333017692, 2);
  sqcRYGate(q, -0.0045932048847553975, 3);
  sqcRZGate(q, -1.2243594258071386, 3);
  sqcRYGate(q, 1.5689617690566937, 4);
  sqcRZGate(q, 2.7260866873890404, 4);
  sqcRYGate(q, 1.5871523831760115, 5);
  sqcRZGate(q, -2.823804954031803, 5);
  sqcRYGate(q, -0.49804799032982794, 6);
  sqcRZGate(q, -3.141560851451684, 6);
  sqcRYGate(q, -1.5704918086737027, 7);
  sqcRZGate(q, -1.5822921434632269, 7);
  sqcRYGate(q, -1.57082847302283, 8);
  sqcRZGate(q, -1.745939066943361, 8);
  sqcRYGate(q, 1.646856045447131, 9);
  sqcRZGate(q, 3.1223851085930625, 9);
  sqcRYGate(q, 1.5642504429551582, 10);
  sqcRZGate(q, -3.106200417188943, 10);
  sqcRYGate(q, -0.012007401361663056, 11);
  sqcRZGate(q, -1.9406333329904522, 11);
  sqcRYGate(q, -0.5000547911306312, 12);
  sqcRZGate(q, -1.3926695140904464, 12);
  sqcRYGate(q, -0.02656730138137545, 13);
  sqcRZGate(q, 0.252640513437752, 13);
  sqcRYGate(q, -1.4349192297032447, 14);
  sqcRZGate(q, 3.1342386525520864, 14);
  sqcRYGate(q, -2.9277496071726072, 15);
  sqcRZGate(q, -0.014357704407785688, 15);
  sqcRYGate(q, -2.023587697133829, 16);
  sqcRZGate(q, -1.595639791032115, 16);
  sqcRYGate(q, 2.4008819119710356, 17);
  sqcRZGate(q, -2.695878722333967, 17);
  sqcRYGate(q, 2.8771029272985476, 18);
  sqcRZGate(q, -2.0530620035563576, 18);
  sqcRYGate(q, 1.5720441839924186, 19);
  sqcRZGate(q, 1.6187060104937685, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.8736804268727516, 0);
  sqcRZGate(q, -1.5191481767655537, 0);
  sqcRYGate(q, -0.9023513416303696, 1);
  sqcRZGate(q, -1.477441644885931, 1);
  sqcRYGate(q, -0.3273216882483334, 2);
  sqcRZGate(q, -1.884832362527279, 2);
  sqcRYGate(q, 2.5819280629490455, 3);
  sqcRZGate(q, -2.71768626241941, 3);
  sqcRYGate(q, 3.1391149173934676, 4);
  sqcRZGate(q, 1.3864439272066633, 4);
  sqcRYGate(q, -3.1398898407040075, 5);
  sqcRZGate(q, 0.31610969067168576, 5);
  sqcRYGate(q, -1.5676161973032965, 6);
  sqcRZGate(q, -1.2717047076861159, 6);
  sqcRYGate(q, -0.6301571310666008, 7);
  sqcRZGate(q, 1.5796939766093763, 7);
  sqcRYGate(q, 3.1315508415132634, 8);
  sqcRZGate(q, 0.6461780047380682, 8);
  sqcRYGate(q, 1.5715636179183843, 9);
  sqcRZGate(q, -1.2659898604594473, 9);
  sqcRYGate(q, 2.6550417103828354, 10);
  sqcRZGate(q, 0.04155284614307514, 10);
  sqcRYGate(q, -2.0231097802071458e-05, 11);
  sqcRZGate(q, 0.26461392702686504, 11);
  sqcRYGate(q, -1.2240778961647374, 12);
  sqcRZGate(q, 0.10519999170326375, 12);
  sqcRYGate(q, -0.872765738248832, 13);
  sqcRZGate(q, 3.0692982758721667, 13);
  sqcRYGate(q, -2.0698753608072984, 14);
  sqcRZGate(q, 2.9437146122658406, 14);
  sqcRYGate(q, -0.5714348310605857, 15);
  sqcRZGate(q, 1.925932320252537, 15);
  sqcRYGate(q, 2.9982509189347817, 16);
  sqcRZGate(q, -3.1020167596187527, 16);
  sqcRYGate(q, -0.8680631625903992, 17);
  sqcRZGate(q, -1.6372472727293719, 17);
  sqcRYGate(q, -0.07691119432231996, 18);
  sqcRZGate(q, 2.0441446355561297, 18);
  sqcRYGate(q, -1.7488830946054486, 19);
  sqcRZGate(q, 2.766812842692317, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.7144515883386, 0);
  sqcRZGate(q, 2.8510290423535736, 0);
  sqcRYGate(q, -0.7019629274442991, 1);
  sqcRZGate(q, 0.948782277571441, 1);
  sqcRYGate(q, 0.6947706382728691, 2);
  sqcRZGate(q, -0.20870255617846656, 2);
  sqcRYGate(q, -1.5835544121718277, 3);
  sqcRZGate(q, 3.1381164049866825, 3);
  sqcRYGate(q, -2.7055811151975746, 4);
  sqcRZGate(q, 1.78920365173465, 4);
  sqcRYGate(q, 1.5705757436025862, 5);
  sqcRZGate(q, -1.2838177859217064, 5);
  sqcRYGate(q, -2.7187010632787247, 6);
  sqcRZGate(q, 0.2937231363258651, 6);
  sqcRYGate(q, -1.5692279907821707, 7);
  sqcRZGate(q, -2.4152690011507874, 7);
  sqcRYGate(q, -1.515551465898894, 8);
  sqcRZGate(q, 1.3554004569829357, 8);
  sqcRYGate(q, -2.678567615624015, 9);
  sqcRZGate(q, 1.9830661340585376, 9);
  sqcRYGate(q, 1.5699164578895561, 10);
  sqcRZGate(q, -2.3247580091573568, 10);
  sqcRYGate(q, -2.8922860886050645, 11);
  sqcRZGate(q, 1.5331651313846217, 11);
  sqcRYGate(q, 2.7749288005173196, 12);
  sqcRZGate(q, 2.787064966570633, 12);
  sqcRYGate(q, 0.025477402397414473, 13);
  sqcRZGate(q, 0.14901579293291523, 13);
  sqcRYGate(q, -1.428517351370529, 14);
  sqcRZGate(q, 0.04652081347804877, 14);
  sqcRYGate(q, 2.1385893194991192, 15);
  sqcRZGate(q, -1.6274777796478308, 15);
  sqcRYGate(q, 2.5231548999640125, 16);
  sqcRZGate(q, 3.0616695856931044, 16);
  sqcRYGate(q, -2.5747817905347676, 17);
  sqcRZGate(q, 1.3809985385959003, 17);
  sqcRYGate(q, -2.6989815078355925, 18);
  sqcRZGate(q, 0.6064392805329949, 18);
  sqcRYGate(q, 0.29637949728699464, 19);
  sqcRZGate(q, 3.025499188974177, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.4809438955430532, 0);
  sqcRZGate(q, 1.9766225313950034, 0);
  sqcRYGate(q, 1.5663978107177972, 1);
  sqcRZGate(q, -0.468217393024891, 1);
  sqcRYGate(q, 3.140918875564031, 2);
  sqcRZGate(q, 0.5757208106209611, 2);
  sqcRYGate(q, -1.9037923406286745, 3);
  sqcRZGate(q, 3.1328226988162373, 3);
  sqcRYGate(q, -1.5703286416991844, 4);
  sqcRZGate(q, 3.1271681763892345, 4);
  sqcRYGate(q, -0.014787375382696206, 5);
  sqcRZGate(q, -0.6010582189047403, 5);
  sqcRYGate(q, -2.056921311895332, 6);
  sqcRZGate(q, 2.291639107651119, 6);
  sqcRYGate(q, -0.7594980126780883, 7);
  sqcRZGate(q, 2.799336012850944, 7);
  sqcRYGate(q, 0.2968330354093534, 8);
  sqcRZGate(q, 1.5402356741105585, 8);
  sqcRYGate(q, -1.5077479065348713, 9);
  sqcRZGate(q, 1.694031014661086, 9);
  sqcRYGate(q, 1.608089470796515, 10);
  sqcRZGate(q, 0.823920154415409, 10);
  sqcRYGate(q, 1.5705432290007533, 11);
  sqcRZGate(q, -0.021468981372183112, 11);
  sqcRYGate(q, 1.5716020655273981, 12);
  sqcRZGate(q, 1.592104342372364, 12);
  sqcRYGate(q, -1.6878122275236889, 13);
  sqcRZGate(q, 2.7863061081781724, 13);
  sqcRYGate(q, -1.398153397410237, 14);
  sqcRZGate(q, 3.141553496431229, 14);
  sqcRYGate(q, -3.1312667008130877, 15);
  sqcRZGate(q, -1.0841203031095241, 15);
  sqcRYGate(q, 0.20282430602893897, 16);
  sqcRZGate(q, -0.9368223387094672, 16);
  sqcRYGate(q, 0.8298977513298667, 17);
  sqcRZGate(q, 2.9525574081191355, 17);
  sqcRYGate(q, -1.583001481250327, 18);
  sqcRZGate(q, -2.8690707819730066, 18);
  sqcRYGate(q, -2.885237907524231, 19);
  sqcRZGate(q, 1.1895822156474967, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.06456459311202187, 0);
  sqcRZGate(q, -0.6376786886888608, 0);
  sqcRYGate(q, 0.009847341793392417, 1);
  sqcRZGate(q, -1.337714612365395, 1);
  sqcRYGate(q, 3.139025741391106, 2);
  sqcRZGate(q, -2.3404157192145556, 2);
  sqcRYGate(q, -1.5709164855963929, 3);
  sqcRZGate(q, -0.8051774318038047, 3);
  sqcRYGate(q, -1.552028241969277, 4);
  sqcRZGate(q, 0.5659410378847706, 4);
  sqcRYGate(q, 1.5788234862781731, 5);
  sqcRZGate(q, -2.9690002764885235, 5);
  sqcRYGate(q, 3.1207625656634823, 6);
  sqcRZGate(q, -2.4173939769231394, 6);
  sqcRYGate(q, -1.5634059467872838, 7);
  sqcRZGate(q, -3.133051853174355, 7);
  sqcRYGate(q, 2.8443377871937714, 8);
  sqcRZGate(q, 1.3981237187603894, 8);
  sqcRYGate(q, -0.29049056322038336, 9);
  sqcRZGate(q, 1.5850668263671621, 9);
  sqcRYGate(q, -3.08807142243903, 10);
  sqcRZGate(q, 0.11503675250315304, 10);
  sqcRYGate(q, 1.5587685679430159, 11);
  sqcRZGate(q, -3.0448011914906483, 11);
  sqcRYGate(q, -1.5703046610997777, 12);
  sqcRZGate(q, 0.5293073793220282, 12);
  sqcRYGate(q, -3.1339275657772947, 13);
  sqcRZGate(q, 2.8005453809758296, 13);
  sqcRYGate(q, 0.8540874360076, 14);
  sqcRZGate(q, -1.5346304568449238, 14);
  sqcRYGate(q, -1.2075889432390803, 15);
  sqcRZGate(q, -0.6431380922533145, 15);
  sqcRYGate(q, -1.9690341061790495, 16);
  sqcRZGate(q, 0.4926535630437512, 16);
  sqcRYGate(q, 0.031721346669288115, 17);
  sqcRZGate(q, -2.858067710720779, 17);
  sqcRYGate(q, -2.7445871218995124, 18);
  sqcRZGate(q, -1.6600464691159689, 18);
  sqcRYGate(q, 1.4416311792837215, 19);
  sqcRZGate(q, 1.3736851314305536, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.9793358023243943, 0);
  sqcRZGate(q, 2.6564450614167994, 0);
  sqcRYGate(q, 0.1329922208910337, 1);
  sqcRZGate(q, -1.3394956144025363, 1);
  sqcRYGate(q, 1.5703367305093492, 2);
  sqcRZGate(q, 1.8012992047297, 2);
  sqcRYGate(q, -1.6375391750068173, 3);
  sqcRZGate(q, -0.297183085564245, 3);
  sqcRYGate(q, 1.4250288464176784, 4);
  sqcRZGate(q, 3.0480803490069355, 4);
  sqcRYGate(q, 1.5581194750113205, 5);
  sqcRZGate(q, 1.0490265958224345, 5);
  sqcRYGate(q, 1.6099380580762708, 6);
  sqcRZGate(q, -0.9384686556360995, 6);
  sqcRYGate(q, 0.7559743301729034, 7);
  sqcRZGate(q, 1.542894380960298, 7);
  sqcRYGate(q, -0.0035250114710669916, 8);
  sqcRZGate(q, -2.049063560673787, 8);
  sqcRYGate(q, -1.6063441074521236, 9);
  sqcRZGate(q, -0.03862030614425383, 9);
  sqcRYGate(q, -1.5690357578908851, 10);
  sqcRZGate(q, -3.1181660084508542, 10);
  sqcRYGate(q, 2.497100131249824, 11);
  sqcRZGate(q, -3.118329124718832, 11);
  sqcRYGate(q, -0.11188063090094413, 12);
  sqcRZGate(q, -2.1967797581008455, 12);
  sqcRYGate(q, -1.5703603610102552, 13);
  sqcRZGate(q, -0.8077046128485766, 13);
  sqcRYGate(q, 1.511523400245293, 14);
  sqcRZGate(q, 0.5135207186484516, 14);
  sqcRYGate(q, 0.0020048847553795213, 15);
  sqcRZGate(q, 0.9480951229076292, 15);
  sqcRYGate(q, -1.5934543650019224, 16);
  sqcRZGate(q, 3.140196542823533, 16);
  sqcRYGate(q, 1.6441058180928207, 17);
  sqcRZGate(q, -3.12491679638035, 17);
  sqcRYGate(q, -0.16828306094510465, 18);
  sqcRZGate(q, -1.2915367602842502, 18);
  sqcRYGate(q, -2.5689012991014466, 19);
  sqcRZGate(q, 0.25727659568197636, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.4774840855298232, 0);
  sqcRZGate(q, -2.5438546644211133, 0);
  sqcRYGate(q, 1.5709457223792764, 1);
  sqcRZGate(q, -1.6288101808921338, 1);
  sqcRYGate(q, 3.1398100568215823, 2);
  sqcRZGate(q, 2.6317046497258065, 2);
  sqcRYGate(q, -0.0024502234107571666, 3);
  sqcRZGate(q, 1.8029119615090146, 3);
  sqcRYGate(q, 1.600462912191486, 4);
  sqcRZGate(q, -2.1736504621480544, 4);
  sqcRYGate(q, 0.005442292798396587, 5);
  sqcRZGate(q, -2.2489041473372593, 5);
  sqcRYGate(q, 0.02544291892125733, 6);
  sqcRZGate(q, -0.5677124460256631, 6);
  sqcRYGate(q, -1.6581828087999568, 7);
  sqcRZGate(q, -1.0850389556125417, 7);
  sqcRYGate(q, 1.786920865538314, 8);
  sqcRZGate(q, 1.9677428501166752, 8);
  sqcRYGate(q, 1.588243286216211, 9);
  sqcRZGate(q, 2.6046656108756236, 9);
  sqcRYGate(q, 2.9692151101884203, 10);
  sqcRZGate(q, -1.6732748116663805, 10);
  sqcRYGate(q, 0.571813831078182, 11);
  sqcRZGate(q, -1.0645610016532607, 11);
  sqcRYGate(q, 0.025170096661907948, 12);
  sqcRZGate(q, 0.052707522285443176, 12);
  sqcRYGate(q, -1.5600906142215882, 13);
  sqcRZGate(q, 1.7991899489441643, 13);
  sqcRYGate(q, 1.573937839038484, 14);
  sqcRZGate(q, 1.5699305598026483, 14);
  sqcRYGate(q, -2.9748159962447627, 15);
  sqcRZGate(q, -2.403425150987563, 15);
  sqcRYGate(q, 0.6166595374457952, 16);
  sqcRZGate(q, -3.117841275589442, 16);
  sqcRYGate(q, -1.770072059146612, 17);
  sqcRZGate(q, 2.639319247456334, 17);
  sqcRYGate(q, 2.2971136699968997, 18);
  sqcRZGate(q, 2.4801512523072082, 18);
  sqcRYGate(q, 2.1482139199556585, 19);
  sqcRZGate(q, -2.7569163706686646, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.6802857116681515, 0);
  sqcRZGate(q, 1.5235327509297978, 0);
  sqcRYGate(q, 1.549904921837003, 1);
  sqcRZGate(q, 1.342370967293875, 1);
  sqcRYGate(q, -1.358336308903399, 2);
  sqcRZGate(q, 2.574266496812814, 2);
  sqcRYGate(q, -1.421783321389154, 3);
  sqcRZGate(q, -1.6561432577344286, 3);
  sqcRYGate(q, -2.8085943995626597, 4);
  sqcRZGate(q, 2.5239797717990164, 4);
  sqcRYGate(q, -3.073906702291875, 5);
  sqcRZGate(q, -1.2262538559000684, 5);
  sqcRYGate(q, 1.5999337582315587, 6);
  sqcRZGate(q, -2.963793460009974, 6);
  sqcRYGate(q, 3.132990655075425, 7);
  sqcRZGate(q, -1.0966184221217994, 7);
  sqcRYGate(q, -0.476151624790381, 8);
  sqcRZGate(q, -0.6146061642976196, 8);
  sqcRYGate(q, -0.06313045357391367, 9);
  sqcRZGate(q, -1.5574617858855104, 9);
  sqcRYGate(q, -0.0048702777611309145, 10);
  sqcRZGate(q, -1.4800043451144105, 10);
  sqcRYGate(q, 2.8270261754892365, 11);
  sqcRZGate(q, -2.3683961997269423, 11);
  sqcRYGate(q, -2.5366240801784383, 12);
  sqcRZGate(q, 1.443918255939945, 12);
  sqcRYGate(q, -3.1402064303555717, 13);
  sqcRZGate(q, 0.23933536818045106, 13);
  sqcRYGate(q, -1.7422958249313751, 14);
  sqcRZGate(q, -0.0031682440835565373, 14);
  sqcRYGate(q, 3.140291792625631, 15);
  sqcRZGate(q, -2.608106627990446, 15);
  sqcRYGate(q, 0.057046589981309674, 16);
  sqcRZGate(q, 2.966985101887144, 16);
  sqcRYGate(q, 2.238852864560771, 17);
  sqcRZGate(q, -1.259299924414589, 17);
  sqcRYGate(q, 0.029489369290220873, 18);
  sqcRZGate(q, -2.501891376930619, 18);
  sqcRYGate(q, -1.100832355366851, 19);
  sqcRZGate(q, -1.782808409020726, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.09527224676152812, 0);
  sqcRZGate(q, 3.056731293325067, 0);
  sqcRYGate(q, 3.1380989114877837, 1);
  sqcRZGate(q, 1.601054928835402, 1);
  sqcRYGate(q, -1.456619777323354, 2);
  sqcRZGate(q, -1.513636409528428, 2);
  sqcRYGate(q, 0.012697111815546338, 3);
  sqcRZGate(q, 0.7236506104164695, 3);
  sqcRYGate(q, -1.5821847310241415, 4);
  sqcRZGate(q, -0.24522884679171938, 4);
  sqcRYGate(q, -1.215746741581024, 5);
  sqcRZGate(q, -3.052467884157318, 5);
  sqcRYGate(q, -3.1223909458550207, 6);
  sqcRZGate(q, 2.2769330891785757, 6);
  sqcRYGate(q, -0.5165859540284758, 7);
  sqcRZGate(q, -0.3087996041718375, 7);
  sqcRYGate(q, -0.2747079424494607, 8);
  sqcRZGate(q, -2.0861423746685466, 8);
  sqcRYGate(q, -3.1376604198530713, 9);
  sqcRZGate(q, -1.778340265983626, 9);
  sqcRYGate(q, -2.7665449011396035, 10);
  sqcRZGate(q, -1.5955969406290214, 10);
  sqcRYGate(q, -3.131986478998095, 11);
  sqcRZGate(q, -1.5272849159315367, 11);
  sqcRYGate(q, 3.135914666963086, 12);
  sqcRZGate(q, 1.312766457726645, 12);
  sqcRYGate(q, -0.008324174511149852, 13);
  sqcRZGate(q, -1.5637603238213937, 13);
  sqcRYGate(q, 1.4972148670089807, 14);
  sqcRZGate(q, -0.9096879531509527, 14);
  sqcRYGate(q, -2.142302156208163, 15);
  sqcRZGate(q, -1.0808050849669941, 15);
  sqcRYGate(q, 2.765287847827402, 16);
  sqcRZGate(q, 0.9882502958077906, 16);
  sqcRYGate(q, -0.5806005901380163, 17);
  sqcRZGate(q, 2.480131804113918, 17);
  sqcRYGate(q, 0.6204494228097676, 18);
  sqcRZGate(q, 1.623216777399054, 18);
  sqcRYGate(q, 1.3274238959192592, 19);
  sqcRZGate(q, 2.630923304952725, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.5825500024095742, 0);
  sqcRZGate(q, 0.13486132427984374, 0);
  sqcRYGate(q, -2.931381064143001, 1);
  sqcRZGate(q, -2.771011922738327, 1);
  sqcRYGate(q, 1.5962570171652928, 2);
  sqcRZGate(q, 0.20163471454654316, 2);
  sqcRYGate(q, -2.908489206540185, 3);
  sqcRZGate(q, -2.339343040368703, 3);
  sqcRYGate(q, -2.793599134022473, 4);
  sqcRZGate(q, 3.067718890135684, 4);
  sqcRYGate(q, 1.5522073238658392, 5);
  sqcRZGate(q, 1.519243488244312, 5);
  sqcRYGate(q, -3.1299457552860814, 6);
  sqcRZGate(q, 1.7308425496466562, 6);
  sqcRYGate(q, 0.021573205500651997, 7);
  sqcRZGate(q, -2.920916260596068, 7);
  sqcRYGate(q, 0.4038692920269753, 8);
  sqcRZGate(q, 0.36902413347232255, 8);
  sqcRYGate(q, -0.20566920895527652, 9);
  sqcRZGate(q, -1.8843135355822778, 9);
  sqcRYGate(q, -1.5366989028433453, 10);
  sqcRZGate(q, -1.1643006811915626, 10);
  sqcRYGate(q, -2.2705694449009357, 11);
  sqcRZGate(q, -3.1196961336870115, 11);
  sqcRYGate(q, 0.6788298246739383, 12);
  sqcRZGate(q, -1.9456633763126787, 12);
  sqcRYGate(q, -1.5415941091564251, 13);
  sqcRZGate(q, 2.5229318826292935, 13);
  sqcRYGate(q, 2.153004320053589, 14);
  sqcRZGate(q, -2.812667561375038, 14);
  sqcRYGate(q, 1.08960126703933, 15);
  sqcRZGate(q, 2.0571164135582394, 15);
  sqcRYGate(q, 0.0020655106899785483, 16);
  sqcRZGate(q, 2.037811665634609, 16);
  sqcRYGate(q, 2.8122861287967913, 17);
  sqcRZGate(q, 2.173799764787817, 17);
  sqcRYGate(q, -2.660328856061956, 18);
  sqcRZGate(q, -2.0733730431679436, 18);
  sqcRYGate(q, 1.5930032953919377, 19);
  sqcRZGate(q, 2.0708812537973293, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.9873233442921565, 0);
  sqcRZGate(q, -1.9937632063422899, 0);
  sqcRYGate(q, 0.09536826602292248, 1);
  sqcRZGate(q, 2.248248785730304, 1);
  sqcRYGate(q, -2.6187260316690573, 2);
  sqcRZGate(q, 1.54355008111063, 2);
  sqcRYGate(q, 0.2783191187067713, 3);
  sqcRZGate(q, -0.40215832163402526, 3);
  sqcRYGate(q, -0.03420984288807321, 4);
  sqcRZGate(q, -1.2410837869424824, 4);
  sqcRYGate(q, 1.4072711013191728, 5);
  sqcRZGate(q, 2.0067745967847848, 5);
  sqcRYGate(q, -2.9353093639002648, 6);
  sqcRZGate(q, -1.319560076397425, 6);
  sqcRYGate(q, -2.0981515497529033, 7);
  sqcRZGate(q, 3.0926582869479184, 7);
  sqcRYGate(q, 2.959102419385718, 8);
  sqcRZGate(q, 2.9331749165732033, 8);
  sqcRYGate(q, -1.573810349567095, 9);
  sqcRZGate(q, -1.5842683760897935, 9);
  sqcRYGate(q, 1.6584940209232732, 10);
  sqcRZGate(q, -1.5393988874441655, 10);
  sqcRYGate(q, -0.010791628929631342, 11);
  sqcRZGate(q, -1.8083029078113495, 11);
  sqcRYGate(q, -1.957810182020377, 12);
  sqcRZGate(q, 1.7142840088193592, 12);
  sqcRYGate(q, -0.013627082208191863, 13);
  sqcRZGate(q, 0.4094129111579709, 13);
  sqcRYGate(q, -0.006420674043837948, 14);
  sqcRZGate(q, 3.061186544551836, 14);
  sqcRYGate(q, 3.1371837444454016, 15);
  sqcRZGate(q, -2.4149878785485517, 15);
  sqcRYGate(q, 0.5439989636325117, 16);
  sqcRZGate(q, -1.5242141699717475, 16);
  sqcRYGate(q, -1.1433824153429102, 17);
  sqcRZGate(q, -1.4765913580379637, 17);
  sqcRYGate(q, 1.9703811051585063, 18);
  sqcRZGate(q, -1.7725024073070905, 18);
  sqcRYGate(q, 2.979529441133155, 19);
  sqcRZGate(q, 1.4781875096418817, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 3.122633306236064, 0);
  sqcRZGate(q, 1.1667965620790932, 0);
  sqcRYGate(q, -0.22000350327869053, 1);
  sqcRZGate(q, -2.7555410423474096, 1);
  sqcRYGate(q, 1.5230093154913054, 2);
  sqcRZGate(q, 0.1465324536010647, 2);
  sqcRYGate(q, -0.6122766896126253, 3);
  sqcRZGate(q, -2.3493318494050985, 3);
  sqcRYGate(q, -2.938960364212795, 4);
  sqcRZGate(q, 1.9111728468321858, 4);
  sqcRYGate(q, -3.02389218426698, 5);
  sqcRZGate(q, -1.7688095938836843, 5);
  sqcRYGate(q, 3.0548388335237653, 6);
  sqcRZGate(q, -1.353570183016073, 6);
  sqcRYGate(q, -0.026086521366956994, 7);
  sqcRZGate(q, 0.8369298261465684, 7);
  sqcRYGate(q, -2.7222778232177562, 8);
  sqcRZGate(q, 2.170284575330123, 8);
  sqcRYGate(q, 2.258359496902944, 9);
  sqcRZGate(q, 0.04138256345025791, 9);
  sqcRYGate(q, -1.534348480278144, 10);
  sqcRZGate(q, -1.5825321042071527, 10);
  sqcRYGate(q, 3.1158421709478126, 11);
  sqcRZGate(q, 1.8778600823568157, 11);
  sqcRYGate(q, 0.2504039129439253, 12);
  sqcRZGate(q, 1.4236708947001873, 12);
  sqcRYGate(q, 0.052067049698951706, 13);
  sqcRZGate(q, 2.862807988667451, 13);
  sqcRYGate(q, 2.2822858857733483, 14);
  sqcRZGate(q, 1.845472654271557, 14);
  sqcRYGate(q, -1.2036546239044386, 15);
  sqcRZGate(q, 2.5129060350558605, 15);
  sqcRYGate(q, 0.0028094908639921816, 16);
  sqcRZGate(q, 1.5225322855600665, 16);
  sqcRYGate(q, 3.1381875351263036, 17);
  sqcRZGate(q, -0.2942038878237276, 17);
  sqcRYGate(q, -2.943958284643911, 18);
  sqcRZGate(q, 3.1183474497116968, 18);
  sqcRYGate(q, 0.027180890545142104, 19);
  sqcRZGate(q, 2.403903047557361, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 3.101752264825109, 0);
  sqcRZGate(q, -1.0981401287723969, 0);
  sqcRYGate(q, 1.5770928836996863, 1);
  sqcRZGate(q, -3.076912012158233, 1);
  sqcRYGate(q, 2.278822492058961, 2);
  sqcRZGate(q, 2.0396914910295445, 2);
  sqcRYGate(q, 3.1289927174448118, 3);
  sqcRZGate(q, 2.1454471093013994, 3);
  sqcRYGate(q, 0.06036561977942689, 4);
  sqcRZGate(q, -1.7423629144564443, 4);
  sqcRYGate(q, -0.0791601165912036, 5);
  sqcRZGate(q, -2.900848872595781, 5);
  sqcRYGate(q, 0.20695199840443848, 6);
  sqcRZGate(q, 2.246195532718213, 6);
  sqcRYGate(q, -3.056386780529115, 7);
  sqcRZGate(q, -2.2741539528276515, 7);
  sqcRYGate(q, -3.1237661122659457, 8);
  sqcRZGate(q, -1.014819055520264, 8);
  sqcRYGate(q, -0.008419914787669253, 9);
  sqcRZGate(q, 3.112776048976903, 9);
  sqcRYGate(q, -0.0938659725225328, 10);
  sqcRZGate(q, -1.6711869379609263, 10);
  sqcRYGate(q, 1.5138033150131003, 11);
  sqcRZGate(q, 1.8179589913985434, 11);
  sqcRYGate(q, -1.1526778614813136, 12);
  sqcRZGate(q, 0.39307866481435944, 12);
  sqcRYGate(q, -0.09345042420165228, 13);
  sqcRZGate(q, -2.648879464601875, 13);
  sqcRYGate(q, 0.014693429002444525, 14);
  sqcRZGate(q, 2.9348167730781185, 14);
  sqcRYGate(q, -1.5935433207185785, 15);
  sqcRZGate(q, -2.4893432654827423, 15);
  sqcRYGate(q, 1.7845068502587378, 16);
  sqcRZGate(q, -1.5778044327750196, 16);
  sqcRYGate(q, 2.4173394929033036, 17);
  sqcRZGate(q, 0.23617547013129275, 17);
  sqcRYGate(q, -1.9691041019730229, 18);
  sqcRZGate(q, 1.2316543829778064, 18);
  sqcRYGate(q, -2.8972158453837804, 19);
  sqcRZGate(q, 2.070973679784906, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.059518364113520406, 0);
  sqcRZGate(q, -0.04348567122609106, 0);
  sqcRYGate(q, 1.5943776858630931, 1);
  sqcRZGate(q, -0.7248760290159433, 1);
  sqcRYGate(q, 1.6712991882995247, 2);
  sqcRZGate(q, 1.548131980266026, 2);
  sqcRYGate(q, 1.7208129920320872, 3);
  sqcRZGate(q, 2.547969850380381, 3);
  sqcRYGate(q, 0.37426336738024, 4);
  sqcRZGate(q, -3.028853572062926, 4);
  sqcRYGate(q, -1.477302770009306, 5);
  sqcRZGate(q, 0.10508195357137358, 5);
  sqcRYGate(q, -0.09113583866911619, 6);
  sqcRZGate(q, 0.2962318046063199, 6);
  sqcRYGate(q, -0.012112447329815623, 7);
  sqcRZGate(q, 2.4082539461490136, 7);
  sqcRYGate(q, -0.4163843336624184, 8);
  sqcRZGate(q, -1.3447262337676766, 8);
  sqcRYGate(q, 0.8742114155764952, 9);
  sqcRZGate(q, 1.4440902771693116, 9);
  sqcRYGate(q, 3.1377411528013512, 10);
  sqcRZGate(q, 0.009191596683402638, 10);
  sqcRYGate(q, -0.0574058263365762, 11);
  sqcRZGate(q, -1.805372100255055, 11);
  sqcRYGate(q, 3.0548977944188818, 12);
  sqcRZGate(q, 2.530519556016348, 12);
  sqcRYGate(q, -1.632683707528132, 13);
  sqcRZGate(q, -1.5394387794529392, 13);
  sqcRYGate(q, 1.2495262677523198, 14);
  sqcRZGate(q, -1.146044570342604, 14);
  sqcRYGate(q, -1.9366957497110162, 15);
  sqcRZGate(q, -0.9503109874972968, 15);
  sqcRYGate(q, -1.598033736792293, 16);
  sqcRZGate(q, -1.5442260814985342, 16);
  sqcRYGate(q, -1.5709621372215428, 17);
  sqcRZGate(q, 1.5779227669808016, 17);
  sqcRYGate(q, -2.863635469641412, 18);
  sqcRZGate(q, 0.7301143324782533, 18);
  sqcRYGate(q, -2.0113583042797853, 19);
  sqcRZGate(q, 3.091702173809935, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.7920726125015567, 0);
  sqcRZGate(q, -0.19968599702341638, 0);
  sqcRYGate(q, 3.0743260338991485, 1);
  sqcRZGate(q, 0.43541153166788954, 1);
  sqcRYGate(q, -0.2622396702032067, 2);
  sqcRZGate(q, -0.021996644202001647, 2);
  sqcRYGate(q, 0.006765701002235535, 3);
  sqcRZGate(q, 2.5640305556251084, 3);
  sqcRYGate(q, -1.5715227624057686, 4);
  sqcRZGate(q, 1.3626947479125688, 4);
  sqcRYGate(q, 0.10113620579687588, 5);
  sqcRZGate(q, -1.5433871059984874, 5);
  sqcRYGate(q, 2.9925442968126066, 6);
  sqcRZGate(q, 0.738275105726358, 6);
  sqcRYGate(q, 1.3336478705974084, 7);
  sqcRZGate(q, -0.11030946847458942, 7);
  sqcRYGate(q, -0.9842317486439255, 8);
  sqcRZGate(q, -2.166666721113273, 8);
  sqcRYGate(q, -1.7825364037313527, 9);
  sqcRZGate(q, -1.941521114542076, 9);
  sqcRYGate(q, 0.8248975795270015, 10);
  sqcRZGate(q, 0.42409852759265476, 10);
  sqcRYGate(q, 0.06431808155350976, 11);
  sqcRZGate(q, -1.582341120165001, 11);
  sqcRYGate(q, -1.7426777986556212, 12);
  sqcRZGate(q, -2.2114993688065576, 12);
  sqcRYGate(q, 1.4097189758104367, 13);
  sqcRZGate(q, -2.4920104543194466, 13);
  sqcRYGate(q, -3.09383823283072, 14);
  sqcRZGate(q, -1.1779480024845432, 14);
  sqcRYGate(q, -3.13525306337126, 15);
  sqcRZGate(q, 2.8119469239892902, 15);
  sqcRYGate(q, -1.5778557655714334, 16);
  sqcRZGate(q, -3.1145841561948666, 16);
  sqcRYGate(q, 1.5911271227515362, 17);
  sqcRZGate(q, -1.0889074343462022, 17);
  sqcRYGate(q, 1.5706062078172813, 18);
  sqcRZGate(q, -0.39537850861550383, 18);
  sqcRYGate(q, -1.838564534286257, 19);
  sqcRZGate(q, -0.23135870711457338, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.05113752219879524, 0);
  sqcRZGate(q, -2.827839690812793, 0);
  sqcRYGate(q, -3.1170886556186765, 1);
  sqcRZGate(q, -2.101759627596696, 1);
  sqcRYGate(q, -2.832798834819865, 2);
  sqcRZGate(q, -1.5257617546703048, 2);
  sqcRYGate(q, -1.5715051338434738, 3);
  sqcRZGate(q, 3.040321030976692, 3);
  sqcRYGate(q, 1.1435861371112261, 4);
  sqcRZGate(q, 0.4618378863705134, 4);
  sqcRYGate(q, -3.1059681713564853, 5);
  sqcRZGate(q, 1.0354167380257893, 5);
  sqcRYGate(q, 0.04437275502418725, 6);
  sqcRZGate(q, -0.31512826613443057, 6);
  sqcRYGate(q, 0.01371109016134664, 7);
  sqcRZGate(q, -1.9668423513402107, 7);
  sqcRYGate(q, -3.098227129784214, 8);
  sqcRZGate(q, 3.1233415752689075, 8);
  sqcRYGate(q, 0.0006020744818308346, 9);
  sqcRZGate(q, -0.8877150196937482, 9);
  sqcRYGate(q, -3.1227042764358663, 10);
  sqcRZGate(q, -1.1505912682992854, 10);
  sqcRYGate(q, -2.9699147880849015, 11);
  sqcRZGate(q, -0.8488771328875959, 11);
  sqcRYGate(q, 3.0503864137436363, 12);
  sqcRZGate(q, 1.5116052027752866, 12);
  sqcRYGate(q, -3.090656757147546, 13);
  sqcRZGate(q, 0.6527680039597463, 13);
  sqcRYGate(q, 1.517123868310426, 14);
  sqcRZGate(q, -2.033768582409881, 14);
  sqcRYGate(q, -0.023708834214193786, 15);
  sqcRZGate(q, 0.6033322955940429, 15);
  sqcRYGate(q, -0.059944535810717486, 16);
  sqcRZGate(q, 3.016916454857623, 16);
  sqcRYGate(q, -1.558119344538904, 17);
  sqcRZGate(q, -1.9848056773420903, 17);
  sqcRYGate(q, -2.9570171456578556, 18);
  sqcRZGate(q, -0.4033266537571238, 18);
  sqcRYGate(q, -1.5715068081692127, 19);
  sqcRZGate(q, 0.23479062430944184, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.463058459685457, 0);
  sqcRZGate(q, 3.1411625112907045, 0);
  sqcRYGate(q, -2.8073789350107705, 1);
  sqcRZGate(q, -1.831679100145422, 1);
  sqcRYGate(q, 1.5716899296195976, 2);
  sqcRZGate(q, -3.140552812466876, 2);
  sqcRYGate(q, -3.1314073204329027, 3);
  sqcRZGate(q, 1.4503077575768812, 3);
  sqcRYGate(q, 1.5019401838000448, 4);
  sqcRZGate(q, 0.09675969399826133, 4);
  sqcRYGate(q, 0.028354796742478428, 5);
  sqcRZGate(q, -0.51951730254354, 5);
  sqcRYGate(q, 0.3979073172614766, 6);
  sqcRZGate(q, 0.11260758620286015, 6);
  sqcRYGate(q, 0.7931928930612813, 7);
  sqcRZGate(q, 1.3015829717339524, 7);
  sqcRYGate(q, -1.5293135425083348, 8);
  sqcRZGate(q, 0.9492638097089263, 8);
  sqcRYGate(q, 3.00158660455858, 9);
  sqcRZGate(q, 1.904415938766111, 9);
  sqcRYGate(q, -1.5039600298823137, 10);
  sqcRZGate(q, -1.3109184832109761, 10);
  sqcRYGate(q, 2.638030450128245, 11);
  sqcRZGate(q, -0.9029102901909785, 11);
  sqcRYGate(q, 2.7838334653529495, 12);
  sqcRZGate(q, -0.8827245570978096, 12);
  sqcRYGate(q, 1.2622137853085293, 13);
  sqcRZGate(q, 0.3712439835200661, 13);
  sqcRYGate(q, -1.5705782617939947, 14);
  sqcRZGate(q, 1.5796383962601546, 14);
  sqcRYGate(q, -3.139350900291163, 15);
  sqcRZGate(q, 1.3951301434766397, 15);
  sqcRYGate(q, 0.009513344028724724, 16);
  sqcRZGate(q, -1.462153042276411, 16);
  sqcRYGate(q, -3.1387066894449682, 17);
  sqcRZGate(q, 2.7448164631488843, 17);
  sqcRYGate(q, 1.6171449438543986, 18);
  sqcRZGate(q, -0.9714905771967783, 18);
  sqcRYGate(q, -0.0953273332882354, 19);
  sqcRZGate(q, -1.6495535399737367, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 3.1313595837698474, 0);
  sqcRZGate(q, 2.2845652057947694, 0);
  sqcRYGate(q, -1.5758210674348343, 1);
  sqcRZGate(q, -1.5085403506406538, 1);
  sqcRYGate(q, -1.4900750294498302, 2);
  sqcRZGate(q, -1.5910943960393897, 2);
  sqcRYGate(q, 3.1357728694206313, 3);
  sqcRZGate(q, 0.04213072030678334, 3);
  sqcRYGate(q, -0.4718667714006735, 4);
  sqcRZGate(q, 1.6617305576571237, 4);
  sqcRYGate(q, -0.013283497844446046, 5);
  sqcRZGate(q, 2.2297447291479093, 5);
  sqcRYGate(q, 3.045542650205566, 6);
  sqcRZGate(q, -2.9124616342581664, 6);
  sqcRYGate(q, -0.017195405797622756, 7);
  sqcRZGate(q, -0.7175673566635129, 7);
  sqcRYGate(q, 3.127797616281909, 8);
  sqcRZGate(q, 1.1920970510900277, 8);
  sqcRYGate(q, 1.6476854739105695, 9);
  sqcRZGate(q, -1.489653138643377, 9);
  sqcRYGate(q, -0.007155962937015925, 10);
  sqcRZGate(q, 0.7206512164733575, 10);
  sqcRYGate(q, 0.011080669582083758, 11);
  sqcRZGate(q, -1.6743506245269912, 11);
  sqcRYGate(q, 0.02314205827319515, 12);
  sqcRZGate(q, -2.319647725197588, 12);
  sqcRYGate(q, -3.1340016851423487, 13);
  sqcRZGate(q, 1.9723722435813915, 13);
  sqcRYGate(q, -1.5847084214151979, 14);
  sqcRZGate(q, -0.5768667438431242, 14);
  sqcRYGate(q, -0.008599349037902274, 15);
  sqcRZGate(q, -1.3689585368254324, 15);
  sqcRYGate(q, -1.5376707546252666, 16);
  sqcRZGate(q, -3.0227640953801216, 16);
  sqcRYGate(q, 1.636470230205426, 17);
  sqcRZGate(q, 2.5558201049946487, 17);
  sqcRYGate(q, -2.8893177238275483, 18);
  sqcRZGate(q, -2.2798423671345756, 18);
  sqcRYGate(q, -0.0003196057381116745, 19);
  sqcRZGate(q, -0.37601053408691903, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -3.1238208516549597, 0);
  sqcRZGate(q, -2.298977027046114, 0);
  sqcRYGate(q, -1.5743966187421305, 1);
  sqcRZGate(q, 2.9004402080187823, 1);
  sqcRYGate(q, 1.5792870112321953, 2);
  sqcRZGate(q, 2.839034996775332, 2);
  sqcRYGate(q, 1.571611396812117, 3);
  sqcRZGate(q, -0.2263556434649594, 3);
  sqcRYGate(q, 0.249007900926961, 4);
  sqcRZGate(q, 2.732931890500807, 4);
  sqcRYGate(q, 0.051264945312913035, 5);
  sqcRZGate(q, -1.408208179315184, 5);
  sqcRYGate(q, 0.5119922231726467, 6);
  sqcRZGate(q, 0.9642801099203703, 6);
  sqcRYGate(q, -1.2982168909696952, 7);
  sqcRZGate(q, -1.9992428355988425, 7);
  sqcRYGate(q, -1.5602183604916786, 8);
  sqcRZGate(q, 0.8493770984007397, 8);
  sqcRYGate(q, -1.3552390595099197, 9);
  sqcRZGate(q, -2.1018479892059525, 9);
  sqcRYGate(q, -0.25197666044675304, 10);
  sqcRZGate(q, 1.428941744738426, 10);
  sqcRYGate(q, -2.0743202633616593, 11);
  sqcRZGate(q, 0.33611228586797276, 11);
  sqcRYGate(q, -2.869278202590762, 12);
  sqcRZGate(q, -1.0437606931720502, 12);
  sqcRYGate(q, -1.8152185412826638, 13);
  sqcRZGate(q, 1.599871840408012, 13);
  sqcRYGate(q, -0.40979462438159775, 14);
  sqcRZGate(q, -2.0486223452593686, 14);
  sqcRYGate(q, 1.8237245632605852, 15);
  sqcRZGate(q, -1.5556493312290884, 15);
  sqcRYGate(q, -2.4538236491343497, 16);
  sqcRZGate(q, -1.9730747686478693, 16);
  sqcRYGate(q, 0.2830207598196035, 17);
  sqcRZGate(q, -1.9548764671357193, 17);
  sqcRYGate(q, -2.2206804332930177, 18);
  sqcRZGate(q, 1.544171915089297, 18);
  sqcRYGate(q, -1.374055867585712, 19);
  sqcRZGate(q, -1.0378862553074457, 19);

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
