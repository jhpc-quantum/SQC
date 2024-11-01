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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -1.9200354256948322, 0);
  sqcRZGate(q, -0.03932867776884576, 0);
  sqcRYGate(q, -3.1385730316626814, 1);
  sqcRZGate(q, 1.6708512025444613, 1);
  sqcRYGate(q, 3.1312845213475238, 2);
  sqcRZGate(q, -2.111097239976945, 2);
  sqcRYGate(q, 0.004644081497563284, 3);
  sqcRZGate(q, 0.3884099381309074, 3);
  sqcRYGate(q, 0.08061937893301768, 4);
  sqcRZGate(q, -0.9386185504665006, 4);
  sqcRYGate(q, 0.39391870959325903, 5);
  sqcRZGate(q, -2.7668861619962124, 5);
  sqcRYGate(q, 1.3904806988813452, 6);
  sqcRZGate(q, -0.18579543681621502, 6);
  sqcRYGate(q, -2.022476083536164, 7);
  sqcRZGate(q, -2.642339846725216, 7);
  sqcRYGate(q, 2.312439134354834, 8);
  sqcRZGate(q, -1.4362881095700717, 8);
  sqcRYGate(q, 3.118805382058804, 9);
  sqcRZGate(q, 1.8893397149442623, 9);
  sqcRYGate(q, -0.003158112759503329, 10);
  sqcRZGate(q, -0.8091469082895187, 10);
  sqcRYGate(q, 1.0439425485406677, 11);
  sqcRZGate(q, 1.6035036008837826, 11);
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
  sqcRYGate(q, 2.542574088085704, 0);
  sqcRZGate(q, 2.7056486278267395, 0);
  sqcRYGate(q, -1.5617283788174703, 1);
  sqcRZGate(q, -1.6280485382539993, 1);
  sqcRYGate(q, -1.5787892044527636, 2);
  sqcRZGate(q, 0.5466822079169731, 2);
  sqcRYGate(q, 0.005722847607183772, 3);
  sqcRZGate(q, 2.989563394192427, 3);
  sqcRYGate(q, -3.112327072958202, 4);
  sqcRZGate(q, 2.619478309297501, 4);
  sqcRYGate(q, 2.8989094866692176, 5);
  sqcRZGate(q, 1.111905560604726, 5);
  sqcRYGate(q, -0.3375994601069196, 6);
  sqcRZGate(q, -2.2337611627644316, 6);
  sqcRYGate(q, -0.001783662044344679, 7);
  sqcRZGate(q, 0.4912129388030611, 7);
  sqcRYGate(q, -0.9616409596161526, 8);
  sqcRZGate(q, -1.5982726506006926, 8);
  sqcRYGate(q, 3.139995034712206, 9);
  sqcRZGate(q, 2.5936097497192647, 9);
  sqcRYGate(q, 0.012569962992874828, 10);
  sqcRZGate(q, 0.0808096552421178, 10);
  sqcRYGate(q, 1.778436931121153, 11);
  sqcRZGate(q, 0.9446838114464903, 11);
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
  sqcRYGate(q, -1.798980754785075, 0);
  sqcRZGate(q, -1.752764657572116, 0);
  sqcRYGate(q, -3.055319293158851, 1);
  sqcRZGate(q, 1.5087756877215621, 1);
  sqcRYGate(q, -0.013529105988189905, 2);
  sqcRZGate(q, -0.5581031078505613, 2);
  sqcRYGate(q, -1.5705376908506452, 3);
  sqcRZGate(q, -0.0010159647750462855, 3);
  sqcRYGate(q, -3.1401871105528967, 4);
  sqcRZGate(q, -2.744528597920205, 4);
  sqcRYGate(q, 0.5280976357355558, 5);
  sqcRZGate(q, 1.566848015685613, 5);
  sqcRYGate(q, 1.0033860068584568, 6);
  sqcRZGate(q, -2.0500195278861035, 6);
  sqcRYGate(q, -1.9261140106400854, 7);
  sqcRZGate(q, 1.3496309383589933, 7);
  sqcRYGate(q, -2.9230994349131505, 8);
  sqcRZGate(q, 0.09699158930492859, 8);
  sqcRYGate(q, -0.0012777540490755968, 9);
  sqcRZGate(q, -0.5111295721540339, 9);
  sqcRYGate(q, -3.1378594868648575, 10);
  sqcRZGate(q, 1.6634219332531455, 10);
  sqcRYGate(q, 0.6307282771122482, 11);
  sqcRZGate(q, 2.036488703407281, 11);
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
  sqcRYGate(q, -2.585716974164739, 0);
  sqcRZGate(q, 2.8836651154157122, 0);
  sqcRYGate(q, -1.570067713792675, 1);
  sqcRZGate(q, -1.4099833216564963, 1);
  sqcRYGate(q, -1.5729830584905442, 2);
  sqcRZGate(q, 1.7324032199773587, 2);
  sqcRYGate(q, 1.571313141817223, 3);
  sqcRZGate(q, 1.5706212072064876, 3);
  sqcRYGate(q, 3.1088372337291106, 4);
  sqcRZGate(q, -0.6885075162334431, 4);
  sqcRYGate(q, 3.141150230671771, 5);
  sqcRZGate(q, 2.795617931487527, 5);
  sqcRYGate(q, 1.3371356937448542, 6);
  sqcRZGate(q, -2.6426156253654125, 6);
  sqcRYGate(q, 2.5381344248031845, 7);
  sqcRZGate(q, -1.9902216168151232, 7);
  sqcRYGate(q, -0.40248007048713585, 8);
  sqcRZGate(q, 2.3857188945048335, 8);
  sqcRYGate(q, -3.1415555092913037, 9);
  sqcRZGate(q, -2.264658589743653, 9);
  sqcRYGate(q, -0.8486188203332804, 10);
  sqcRZGate(q, -0.7557046754415798, 10);
  sqcRYGate(q, -2.275166422913398, 11);
  sqcRZGate(q, -2.092661014816974, 11);
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
  sqcRYGate(q, -2.203353050337843, 0);
  sqcRZGate(q, -2.6940073022596347, 0);
  sqcRYGate(q, 1.571045720167261, 1);
  sqcRZGate(q, 1.640646229534977, 1);
  sqcRYGate(q, -1.5778551287867784, 2);
  sqcRZGate(q, -3.063559277870579, 2);
  sqcRYGate(q, 1.571798706423657, 3);
  sqcRZGate(q, 0.007495172692443797, 3);
  sqcRYGate(q, 3.1413635656650873, 4);
  sqcRZGate(q, 0.8587594414439496, 4);
  sqcRYGate(q, -3.1394332055848237, 5);
  sqcRZGate(q, 0.9413999767291431, 5);
  sqcRYGate(q, 2.4612123385792737, 6);
  sqcRZGate(q, 0.27369254440508867, 6);
  sqcRYGate(q, -2.447094014321396, 7);
  sqcRZGate(q, -0.8783737113950204, 7);
  sqcRYGate(q, -3.138831822143986, 8);
  sqcRZGate(q, 2.6084416288419394, 8);
  sqcRYGate(q, -3.060911540146663, 9);
  sqcRZGate(q, -2.4958735963164664, 9);
  sqcRYGate(q, -3.1199195987239157, 10);
  sqcRZGate(q, -2.0847301604738506, 10);
  sqcRYGate(q, 1.162448202211099, 11);
  sqcRZGate(q, -1.2996653261773332, 11);
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
  sqcRYGate(q, -0.2884214842636368, 0);
  sqcRZGate(q, 1.156676914222871, 0);
  sqcRYGate(q, 2.234901518777167, 1);
  sqcRZGate(q, 2.582497434085085, 1);
  sqcRYGate(q, -1.5317468967382766, 2);
  sqcRZGate(q, -1.7475431380149153, 2);
  sqcRYGate(q, 1.5732616837076634, 3);
  sqcRZGate(q, -1.991545497361941, 3);
  sqcRYGate(q, -3.139980272172201, 4);
  sqcRZGate(q, -0.946776870998623, 4);
  sqcRYGate(q, -2.068173747050089, 5);
  sqcRZGate(q, 1.5375298678793081, 5);
  sqcRYGate(q, -1.0544445212674682, 6);
  sqcRZGate(q, -0.5021513916226243, 6);
  sqcRYGate(q, 2.7781709977323064, 7);
  sqcRZGate(q, 2.4121743052560283, 7);
  sqcRYGate(q, 3.0371486047288694, 8);
  sqcRZGate(q, 0.017609875412474187, 8);
  sqcRYGate(q, 0.15110909424527996, 9);
  sqcRZGate(q, -0.7967730550282506, 9);
  sqcRYGate(q, 0.7624001369792088, 10);
  sqcRZGate(q, -1.544263356843236, 10);
  sqcRYGate(q, -0.03884765496946674, 11);
  sqcRZGate(q, -1.1590903317119352, 11);
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
  sqcRYGate(q, -0.26161383210680955, 0);
  sqcRZGate(q, 2.5242691776212407, 0);
  sqcRYGate(q, 0.1715864641719751, 1);
  sqcRZGate(q, 2.1762525715268435, 1);
  sqcRYGate(q, -1.3417361570481852, 2);
  sqcRZGate(q, 0.43716100049699946, 2);
  sqcRYGate(q, 0.008031342777659845, 3);
  sqcRZGate(q, -1.9369317605710865, 3);
  sqcRYGate(q, 0.0012792090793302222, 4);
  sqcRZGate(q, -0.6259706550199091, 4);
  sqcRYGate(q, 2.7295675635994305, 5);
  sqcRZGate(q, -0.9864890028218226, 5);
  sqcRYGate(q, -3.1159483165053774, 6);
  sqcRZGate(q, -0.24080033983175578, 6);
  sqcRYGate(q, -0.6251447877942278, 7);
  sqcRZGate(q, 1.9677020921295303, 7);
  sqcRYGate(q, -0.0008498875452014332, 8);
  sqcRZGate(q, -0.5454158957035843, 8);
  sqcRYGate(q, -0.1978486925524429, 9);
  sqcRZGate(q, 0.3884330875299183, 9);
  sqcRYGate(q, -0.04888116513568353, 10);
  sqcRZGate(q, 2.057322844748038, 10);
  sqcRYGate(q, -3.0534517615745713, 11);
  sqcRZGate(q, -1.646043289788435, 11);
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
  sqcRYGate(q, -3.0539195453880392, 0);
  sqcRZGate(q, -0.8017696078338945, 0);
  sqcRYGate(q, 1.8977662502396235, 1);
  sqcRZGate(q, 1.5164855827870976, 1);
  sqcRYGate(q, 3.0442686844756603, 2);
  sqcRZGate(q, 0.3429532208871935, 2);
  sqcRYGate(q, -0.012737206299735836, 3);
  sqcRZGate(q, -0.7457050556590136, 3);
  sqcRYGate(q, 3.1073338530712036, 4);
  sqcRZGate(q, 2.47160700538499, 4);
  sqcRYGate(q, 1.5655775383192407, 5);
  sqcRZGate(q, 1.5866353535235478, 5);
  sqcRYGate(q, 1.6587382968630555, 6);
  sqcRZGate(q, -2.2811165725961287, 6);
  sqcRYGate(q, -2.96363844354697, 7);
  sqcRZGate(q, 0.9458023937149659, 7);
  sqcRYGate(q, -3.067928434352429, 8);
  sqcRZGate(q, 2.2694984998825793, 8);
  sqcRYGate(q, -3.0898796284516634, 9);
  sqcRZGate(q, -2.8010903593322354, 9);
  sqcRYGate(q, -0.41486686194557476, 10);
  sqcRZGate(q, 3.00221261565977, 10);
  sqcRYGate(q, 0.022791391214248335, 11);
  sqcRZGate(q, 2.2257415194339334, 11);
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
  sqcRYGate(q, 2.267889062239877, 0);
  sqcRZGate(q, -1.6667474828455695, 0);
  sqcRYGate(q, 2.966910198390111, 1);
  sqcRZGate(q, -1.6963317056860292, 1);
  sqcRYGate(q, 3.083742838900837, 2);
  sqcRZGate(q, 0.5199657233329162, 2);
  sqcRYGate(q, -3.1384619135831406, 3);
  sqcRZGate(q, 0.7644340598839435, 3);
  sqcRYGate(q, 3.1390421089255374, 4);
  sqcRZGate(q, -1.4693784233253089, 4);
  sqcRYGate(q, 2.2384088331563907, 5);
  sqcRZGate(q, -1.808695725710635, 5);
  sqcRYGate(q, -0.6220151050524619, 6);
  sqcRZGate(q, -1.638691807775691, 6);
  sqcRYGate(q, -1.1485110226517177, 7);
  sqcRZGate(q, -1.7809108800539217, 7);
  sqcRYGate(q, 0.0032434196884431644, 8);
  sqcRZGate(q, -0.7318939329759959, 8);
  sqcRYGate(q, -0.22554772253880076, 9);
  sqcRZGate(q, -1.4991310275165841, 9);
  sqcRYGate(q, 3.121517001172744, 10);
  sqcRZGate(q, 2.4233997186012286, 10);
  sqcRYGate(q, 0.38036939654996005, 11);
  sqcRZGate(q, -2.1850352456850763, 11);
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
  sqcRYGate(q, 0.11184743706577294, 0);
  sqcRZGate(q, -1.1713581319160369, 0);
  sqcRYGate(q, 0.3562215689497421, 1);
  sqcRZGate(q, -2.156041881893162, 1);
  sqcRYGate(q, -3.0847732313517033, 2);
  sqcRZGate(q, -2.6070220584698993, 2);
  sqcRYGate(q, -3.137668927988209, 3);
  sqcRZGate(q, -2.37277385790973, 3);
  sqcRYGate(q, 0.12116192627489307, 4);
  sqcRZGate(q, -2.0788910123763067, 4);
  sqcRYGate(q, -2.6013982243690994, 5);
  sqcRZGate(q, 2.5041584783081223, 5);
  sqcRYGate(q, -3.0030887937174504, 6);
  sqcRZGate(q, -0.6572913290075685, 6);
  sqcRYGate(q, -1.5341611337302143, 7);
  sqcRZGate(q, -0.21224169600500928, 7);
  sqcRYGate(q, 0.6003404226715857, 8);
  sqcRZGate(q, -0.39197693837412734, 8);
  sqcRYGate(q, 1.1035295525363267, 9);
  sqcRZGate(q, 0.8418707720270769, 9);
  sqcRYGate(q, -2.8293442507687416, 10);
  sqcRZGate(q, -0.5211468091818554, 10);
  sqcRYGate(q, 0.3263769624233273, 11);
  sqcRZGate(q, -1.465393807055734, 11);
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
  sqcRYGate(q, -0.9597258745355202, 0);
  sqcRZGate(q, -1.125201869217059, 0);
  sqcRYGate(q, 0.1953468182602558, 1);
  sqcRZGate(q, 2.3714687001257784, 1);
  sqcRYGate(q, 0.03871300330228034, 2);
  sqcRZGate(q, -2.8436963404158955, 2);
  sqcRYGate(q, -1.9094156936050362, 3);
  sqcRZGate(q, -3.0609241605698907, 3);
  sqcRYGate(q, -2.576442772013474, 4);
  sqcRZGate(q, 2.9791598774170422, 4);
  sqcRYGate(q, -1.2711515824035633, 5);
  sqcRZGate(q, -0.5387147378711212, 5);
  sqcRYGate(q, 1.2580458974982303, 6);
  sqcRZGate(q, 0.12831311502431442, 6);
  sqcRYGate(q, 0.08152057718441783, 7);
  sqcRZGate(q, -0.22903820979655617, 7);
  sqcRYGate(q, 3.140361748981077, 8);
  sqcRZGate(q, -0.01668586803312344, 8);
  sqcRYGate(q, 0.0006263825005357049, 9);
  sqcRZGate(q, -0.7721385963528169, 9);
  sqcRYGate(q, -3.130979930117704, 10);
  sqcRZGate(q, 1.7749049194905382, 10);
  sqcRYGate(q, 0.0029036547936230873, 11);
  sqcRZGate(q, 1.482157483592999, 11);
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
  sqcRYGate(q, 1.4478070600974542, 0);
  sqcRZGate(q, 0.9438186665823659, 0);
  sqcRYGate(q, -0.0007542512970201234, 1);
  sqcRZGate(q, -0.07618113217548464, 1);
  sqcRYGate(q, -3.1314680955418024, 2);
  sqcRZGate(q, -1.0012392670248047, 2);
  sqcRYGate(q, -0.016236886613115505, 3);
  sqcRZGate(q, 3.064329983823763, 3);
  sqcRYGate(q, -0.03399051475047621, 4);
  sqcRZGate(q, 0.1625942983623857, 4);
  sqcRYGate(q, -0.0010958721521019399, 5);
  sqcRZGate(q, 2.112333100389277, 5);
  sqcRYGate(q, 3.138834506210127, 6);
  sqcRZGate(q, 1.05191780782583, 6);
  sqcRYGate(q, 1.2161301545604757, 7);
  sqcRZGate(q, 1.7592819954397312, 7);
  sqcRYGate(q, 2.492430471477079, 8);
  sqcRZGate(q, -1.9973154976112832, 8);
  sqcRYGate(q, -1.9901573807731827, 9);
  sqcRZGate(q, 1.9602878530473686, 9);
  sqcRYGate(q, -0.84233161083987, 10);
  sqcRZGate(q, 0.10077428086742124, 10);
  sqcRYGate(q, 0.3008316518321692, 11);
  sqcRZGate(q, 2.181895028003064, 11);
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
  sqcRYGate(q, 3.1175607358444513, 0);
  sqcRZGate(q, -2.256905459881952, 0);
  sqcRYGate(q, 1.9129394670846118, 1);
  sqcRZGate(q, -1.0741541795920067, 1);
  sqcRYGate(q, 0.0004862259823612547, 2);
  sqcRZGate(q, 2.7846877148958944, 2);
  sqcRYGate(q, -1.918721018653996, 3);
  sqcRZGate(q, 1.3030719836185494, 3);
  sqcRYGate(q, -2.578961864038301, 4);
  sqcRZGate(q, 1.2649084624832931, 4);
  sqcRYGate(q, 1.246708166584894, 5);
  sqcRZGate(q, 1.4239737707420748, 5);
  sqcRYGate(q, 1.5664614505976004, 6);
  sqcRZGate(q, -2.8734198093831287, 6);
  sqcRYGate(q, -1.4172258532280553, 7);
  sqcRZGate(q, 2.1861268465117423, 7);
  sqcRYGate(q, 3.139438424210541, 8);
  sqcRZGate(q, -2.758777932271619, 8);
  sqcRYGate(q, -3.1259358947364264, 9);
  sqcRZGate(q, 1.8533368632125742, 9);
  sqcRYGate(q, -0.0043854595269552385, 10);
  sqcRZGate(q, -2.06862527866702, 10);
  sqcRYGate(q, 2.17206435985805, 11);
  sqcRZGate(q, 2.2577791241104492, 11);
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
  sqcRYGate(q, -2.5827633146368916, 0);
  sqcRZGate(q, -1.0391907794281052, 0);
  sqcRYGate(q, 0.08319977243242496, 1);
  sqcRZGate(q, 1.829185918005255, 1);
  sqcRYGate(q, -1.0373246653208739, 2);
  sqcRZGate(q, -1.9985608082186066, 2);
  sqcRYGate(q, 3.120793622116613, 3);
  sqcRZGate(q, -1.7800834775004581, 3);
  sqcRYGate(q, -1.459793512844855, 4);
  sqcRZGate(q, -3.0774934983936797, 4);
  sqcRYGate(q, -0.4424966465364271, 5);
  sqcRZGate(q, 1.181199628421247, 5);
  sqcRYGate(q, 1.925819532465652, 6);
  sqcRZGate(q, 1.890984048143654, 6);
  sqcRYGate(q, -2.4621314554423894, 7);
  sqcRZGate(q, 2.6137375858765743, 7);
  sqcRYGate(q, 1.4182403774859083, 8);
  sqcRZGate(q, -2.877363631383667, 8);
  sqcRYGate(q, -3.058408356301514, 9);
  sqcRZGate(q, -3.0228148552743934, 9);
  sqcRYGate(q, -1.3814641823279254, 10);
  sqcRZGate(q, 1.0917969175036655, 10);
  sqcRYGate(q, 0.007671007292158757, 11);
  sqcRZGate(q, 1.5222414632680918, 11);
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
  sqcRYGate(q, 3.0889126548601786, 0);
  sqcRZGate(q, 2.3407219796510077, 0);
  sqcRYGate(q, 1.0244574991012059, 1);
  sqcRZGate(q, 1.5303254446446823, 1);
  sqcRYGate(q, -3.1354497732857385, 2);
  sqcRZGate(q, 2.0390069844657956, 2);
  sqcRYGate(q, 1.6260819652348386, 3);
  sqcRZGate(q, -2.585989330895471, 3);
  sqcRYGate(q, -0.26340535101599655, 4);
  sqcRZGate(q, -3.1356106796496506, 4);
  sqcRYGate(q, 1.4456468330597567, 5);
  sqcRZGate(q, 3.029703083497415, 5);
  sqcRYGate(q, 0.2737517017070319, 6);
  sqcRZGate(q, 2.0978250522185116, 6);
  sqcRYGate(q, -0.9764719733411218, 7);
  sqcRZGate(q, 0.7860992064388919, 7);
  sqcRYGate(q, -1.915596303767952, 8);
  sqcRZGate(q, -0.45856364191191806, 8);
  sqcRYGate(q, -0.11994481409416557, 9);
  sqcRZGate(q, -0.09878608924309434, 9);
  sqcRYGate(q, -3.130149888025814, 10);
  sqcRZGate(q, -0.6947647555295031, 10);
  sqcRYGate(q, -1.4660037426258574, 11);
  sqcRZGate(q, -1.3460347205188228, 11);
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
  sqcRYGate(q, 1.170681651834082, 0);
  sqcRZGate(q, -0.11437958919892832, 0);
  sqcRYGate(q, -3.136653381863114, 1);
  sqcRZGate(q, 1.1100734660130458, 1);
  sqcRYGate(q, 0.40224822903522817, 2);
  sqcRZGate(q, 0.7970041107709676, 2);
  sqcRYGate(q, -3.139205922317133, 3);
  sqcRZGate(q, 2.841480050179479, 3);
  sqcRYGate(q, 0.1808236304582695, 4);
  sqcRZGate(q, -1.7077692287425288, 4);
  sqcRYGate(q, -1.7358040026387629, 5);
  sqcRZGate(q, 0.009274016613847698, 5);
  sqcRYGate(q, -3.0615702938325944, 6);
  sqcRZGate(q, -0.1808127988443428, 6);
  sqcRYGate(q, 1.3214175348578803, 7);
  sqcRZGate(q, -1.3675198244910387, 7);
  sqcRYGate(q, -2.710234265956648, 8);
  sqcRZGate(q, 0.9939258288145951, 8);
  sqcRYGate(q, -1.5118518045488925, 9);
  sqcRZGate(q, 0.5637501661057254, 9);
  sqcRYGate(q, 1.4372692122405228, 10);
  sqcRZGate(q, 0.015756019776171085, 10);
  sqcRYGate(q, 2.370690567974366, 11);
  sqcRZGate(q, 0.40978215933475853, 11);
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
  sqcRYGate(q, -0.011765364747188343, 0);
  sqcRZGate(q, -1.0910340523995714, 0);
  sqcRYGate(q, 1.721396510625503, 1);
  sqcRZGate(q, 3.071795359503988, 1);
  sqcRYGate(q, 3.0959509851347984, 2);
  sqcRZGate(q, -3.013520638612165, 2);
  sqcRYGate(q, -0.00634863432509413, 3);
  sqcRZGate(q, -3.107529998390872, 3);
  sqcRYGate(q, 3.131102105587537, 4);
  sqcRZGate(q, -0.11689452035840554, 4);
  sqcRYGate(q, -3.00600876007557, 5);
  sqcRZGate(q, -3.129743013283196, 5);
  sqcRYGate(q, -2.761449122746084, 6);
  sqcRZGate(q, 1.182161980833564, 6);
  sqcRYGate(q, 4.889314790457178e-05, 7);
  sqcRZGate(q, -1.7816450860148774, 7);
  sqcRYGate(q, -3.130947952481258, 8);
  sqcRZGate(q, 2.503296616130366, 8);
  sqcRYGate(q, -3.1415880390935733, 9);
  sqcRZGate(q, -2.390499700075889, 9);
  sqcRYGate(q, -3.138516901645823, 10);
  sqcRZGate(q, 0.0012127572056304103, 10);
  sqcRYGate(q, -0.2636545637123125, 11);
  sqcRZGate(q, 0.1737521973828593, 11);
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
  sqcRYGate(q, 2.521787479353659, 0);
  sqcRZGate(q, 0.4172157245927366, 0);
  sqcRYGate(q, 0.020770408485177482, 1);
  sqcRZGate(q, 2.141458940524842, 1);
  sqcRYGate(q, -1.868621528470844, 2);
  sqcRZGate(q, 2.8868117499926473, 2);
  sqcRYGate(q, -3.141351330487818, 3);
  sqcRZGate(q, 0.4177632217994379, 3);
  sqcRYGate(q, 3.096389083757198, 4);
  sqcRZGate(q, -1.5768356215969082, 4);
  sqcRYGate(q, 1.7409794346807812, 5);
  sqcRZGate(q, -1.9452575230591702, 5);
  sqcRYGate(q, 0.8810898109297701, 6);
  sqcRZGate(q, 0.9028803751536587, 6);
  sqcRYGate(q, 1.752242387780963, 7);
  sqcRZGate(q, 0.5478453026172457, 7);
  sqcRYGate(q, -0.22654152350994994, 8);
  sqcRZGate(q, -0.9942560850399097, 8);
  sqcRYGate(q, -1.6178093794068422, 9);
  sqcRZGate(q, -1.724692883353283, 9);
  sqcRYGate(q, -1.5784383513380673, 10);
  sqcRZGate(q, 0.09687242558966101, 10);
  sqcRYGate(q, 2.134380876370278, 11);
  sqcRZGate(q, 1.8476865679894257, 11);
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
  sqcRYGate(q, 0.004233341417359127, 0);
  sqcRZGate(q, -2.5457301925127513, 0);
  sqcRYGate(q, -0.0047757397468233265, 1);
  sqcRZGate(q, -2.579894963943582, 1);
  sqcRYGate(q, 0.07645245261410416, 2);
  sqcRZGate(q, -2.126956277894228, 2);
  sqcRYGate(q, 1.6441861399337654, 3);
  sqcRZGate(q, 0.3266743847092419, 3);
  sqcRYGate(q, -3.1280459200213353, 4);
  sqcRZGate(q, -2.1636577172978573, 4);
  sqcRYGate(q, 1.6570547576142198, 5);
  sqcRZGate(q, 3.0145320585104978, 5);
  sqcRYGate(q, -0.0002048669988212737, 6);
  sqcRZGate(q, -1.0947879506861682, 6);
  sqcRYGate(q, -3.133260717423039, 7);
  sqcRZGate(q, -0.1483576220570999, 7);
  sqcRYGate(q, 0.021203996055772834, 8);
  sqcRZGate(q, 0.007619807435300813, 8);
  sqcRYGate(q, 3.1229525651478514, 9);
  sqcRZGate(q, -0.07982997711454495, 9);
  sqcRYGate(q, 0.002540977043638889, 10);
  sqcRZGate(q, -0.14716881793406156, 10);
  sqcRYGate(q, 0.9193326135815283, 11);
  sqcRZGate(q, -1.8712251616403712, 11);
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
  sqcRYGate(q, 2.9925568900180917, 0);
  sqcRZGate(q, -1.8882587779535565, 0);
  sqcRYGate(q, 0.158228775726615, 1);
  sqcRZGate(q, -0.8046817766417708, 1);
  sqcRYGate(q, -1.244066857798518, 2);
  sqcRZGate(q, -2.1533911047390952, 2);
  sqcRYGate(q, 5.768952860574217e-05, 3);
  sqcRZGate(q, 1.248580060640884, 3);
  sqcRYGate(q, -3.1267652325717883, 4);
  sqcRZGate(q, 0.7609335916724365, 4);
  sqcRYGate(q, 0.0017109104383479234, 5);
  sqcRZGate(q, 1.5750812810223662, 5);
  sqcRYGate(q, 1.9557362979068325, 6);
  sqcRZGate(q, 0.5171652914944844, 6);
  sqcRYGate(q, -3.1338647413965277, 7);
  sqcRZGate(q, -0.11396196072664466, 7);
  sqcRYGate(q, -0.4217591219676492, 8);
  sqcRZGate(q, 0.5375917422393565, 8);
  sqcRYGate(q, -2.819624575440277, 9);
  sqcRZGate(q, -0.8464652352655869, 9);
  sqcRYGate(q, -0.204750732327067, 10);
  sqcRZGate(q, -1.433863062057271, 10);
  sqcRYGate(q, -0.38126699834005784, 11);
  sqcRZGate(q, 1.9943195310362434, 11);
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
  sqcRYGate(q, -3.1351344282068734, 0);
  sqcRZGate(q, -0.4448712988167509, 0);
  sqcRYGate(q, -2.5588302558053773, 1);
  sqcRZGate(q, -2.3641064739557742, 1);
  sqcRYGate(q, 1.3492129609780066, 2);
  sqcRZGate(q, 3.004344397041249, 2);
  sqcRYGate(q, 0.06188532489959097, 3);
  sqcRZGate(q, 0.9003815644900234, 3);
  sqcRYGate(q, -3.098751922403145, 4);
  sqcRZGate(q, -1.594609227962004, 4);
  sqcRYGate(q, 1.2714668755167784, 5);
  sqcRZGate(q, -1.5292739605218237, 5);
  sqcRYGate(q, 2.8108934419930796, 6);
  sqcRZGate(q, -2.7793891804545523, 6);
  sqcRYGate(q, 7.823552510354697e-05, 7);
  sqcRZGate(q, -1.049569715924898, 7);
  sqcRYGate(q, -3.078152127212833, 8);
  sqcRZGate(q, -2.3869201500334043, 8);
  sqcRYGate(q, 0.10439755255456262, 9);
  sqcRZGate(q, -1.810680538311057, 9);
  sqcRYGate(q, 3.1000473433960765, 10);
  sqcRZGate(q, 1.341255836684735, 10);
  sqcRYGate(q, 2.4691313659863705, 11);
  sqcRZGate(q, 1.6233302544178647, 11);
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
  sqcRYGate(q, 3.0973235990270735, 0);
  sqcRZGate(q, 0.9081551640440708, 0);
  sqcRYGate(q, -2.315611164634254, 1);
  sqcRZGate(q, 0.2899815366629301, 1);
  sqcRYGate(q, -0.5948340868827678, 2);
  sqcRZGate(q, -2.8495040294750016, 2);
  sqcRYGate(q, -3.1406116363882983, 3);
  sqcRZGate(q, -1.4317879116368224, 3);
  sqcRYGate(q, -2.9204933506159563, 4);
  sqcRZGate(q, 1.4372301204726354, 4);
  sqcRYGate(q, -0.013271560661884507, 5);
  sqcRZGate(q, 2.002970856102812, 5);
  sqcRYGate(q, 2.8710204307387723, 6);
  sqcRZGate(q, -2.0630158043413003, 6);
  sqcRYGate(q, -3.0593418708149875, 7);
  sqcRZGate(q, -1.6446676946128473, 7);
  sqcRYGate(q, 2.9903678685553077, 8);
  sqcRZGate(q, -2.0052047374496507, 8);
  sqcRYGate(q, -1.6309883672339485, 9);
  sqcRZGate(q, 1.5550818783920703, 9);
  sqcRYGate(q, -0.1782903365184791, 10);
  sqcRZGate(q, 0.8746851633468459, 10);
  sqcRYGate(q, -0.35362507469730226, 11);
  sqcRZGate(q, -1.4579024252441974, 11);
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
  sqcRYGate(q, -1.6097586039466967, 0);
  sqcRZGate(q, -3.074723179196853, 0);
  sqcRYGate(q, -0.5293803257481295, 1);
  sqcRZGate(q, -0.1536859690496604, 1);
  sqcRYGate(q, -1.7722682271381547, 2);
  sqcRZGate(q, -0.6252551458457998, 2);
  sqcRYGate(q, 1.5624998364886864, 3);
  sqcRZGate(q, 0.9062713943959197, 3);
  sqcRYGate(q, 3.1229172022875553, 4);
  sqcRZGate(q, -0.3035963004956681, 4);
  sqcRYGate(q, 2.9028158551905174, 5);
  sqcRZGate(q, -0.2809827128034695, 5);
  sqcRYGate(q, -0.020231019395731627, 6);
  sqcRZGate(q, -2.6814731144314394, 6);
  sqcRYGate(q, -0.004309442659214008, 7);
  sqcRZGate(q, 1.9647148672969936, 7);
  sqcRYGate(q, -3.0139244103049414, 8);
  sqcRZGate(q, 1.9069780109216445, 8);
  sqcRYGate(q, -1.5643874129486781, 9);
  sqcRZGate(q, 1.6739299751295924, 9);
  sqcRYGate(q, -1.6006024185239422, 10);
  sqcRZGate(q, 2.421799527400617, 10);
  sqcRYGate(q, 3.119155471232559, 11);
  sqcRZGate(q, -0.6683160965697237, 11);
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
  sqcRYGate(q, 1.229564348039892, 0);
  sqcRZGate(q, -2.919425809437322, 0);
  sqcRYGate(q, -0.01823931569621351, 1);
  sqcRZGate(q, -1.8893178360656033, 1);
  sqcRYGate(q, -1.3573031574168164, 2);
  sqcRZGate(q, -3.1377613650762233, 2);
  sqcRYGate(q, 3.1414038074522868, 3);
  sqcRZGate(q, 0.8944945936763709, 3);
  sqcRYGate(q, 1.4921054294364655, 4);
  sqcRZGate(q, 0.4612669317479802, 4);
  sqcRYGate(q, -0.133071200389537, 5);
  sqcRZGate(q, -0.5517282422966172, 5);
  sqcRYGate(q, -0.11074909896162212, 6);
  sqcRZGate(q, 2.994224981648798, 6);
  sqcRYGate(q, 0.0036557459848739022, 7);
  sqcRZGate(q, 2.7654703678249453, 7);
  sqcRYGate(q, 1.0724172734328705, 8);
  sqcRZGate(q, 0.5352604822876543, 8);
  sqcRYGate(q, 1.573123958791738, 9);
  sqcRZGate(q, -0.45814137216977446, 9);
  sqcRYGate(q, 0.3937992901412892, 10);
  sqcRZGate(q, -1.7422373971120715, 10);
  sqcRYGate(q, -0.10976907243909206, 11);
  sqcRZGate(q, 0.15466508662071377, 11);
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
  sqcRYGate(q, 0.06823232254767493, 0);
  sqcRZGate(q, 1.2882918719802616, 0);
  sqcRYGate(q, 1.2825684441000376, 1);
  sqcRZGate(q, -1.8842807602041, 1);
  sqcRYGate(q, -1.9098904222383037, 2);
  sqcRZGate(q, 0.0021426674612623486, 2);
  sqcRYGate(q, -0.00263204408373241, 3);
  sqcRZGate(q, -1.3397230122104729, 3);
  sqcRYGate(q, 3.1408971627037787, 4);
  sqcRZGate(q, -0.027858997643295157, 4);
  sqcRYGate(q, -2.970717313915332, 5);
  sqcRZGate(q, 2.721319673924076, 5);
  sqcRYGate(q, -0.004593184074992054, 6);
  sqcRZGate(q, 0.360072531097578, 6);
  sqcRYGate(q, -3.133164757197935, 7);
  sqcRZGate(q, 0.2562371983831204, 7);
  sqcRYGate(q, -0.02669534869538916, 8);
  sqcRZGate(q, 2.6234656081095156, 8);
  sqcRYGate(q, -0.00615984798402458, 9);
  sqcRZGate(q, -0.4336592183853531, 9);
  sqcRYGate(q, 3.097407035572315, 10);
  sqcRZGate(q, 2.2905820232391987, 10);
  sqcRYGate(q, 3.1179952989786686, 11);
  sqcRZGate(q, -1.373570339853624, 11);
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
  sqcRYGate(q, 2.307843188831874, 0);
  sqcRZGate(q, 2.554871860229746, 0);
  sqcRYGate(q, 3.0550959291067987, 1);
  sqcRZGate(q, 2.085564305487554, 1);
  sqcRYGate(q, -1.7826568791969952, 2);
  sqcRZGate(q, 1.7937807554334297, 2);
  sqcRYGate(q, -0.0034799450797011614, 3);
  sqcRZGate(q, -1.7817057238307106, 3);
  sqcRYGate(q, 0.00867203740221083, 4);
  sqcRZGate(q, 2.045511993236347, 4);
  sqcRYGate(q, -0.11772129052304603, 5);
  sqcRZGate(q, -2.092858183161667, 5);
  sqcRYGate(q, 3.064795937956805, 6);
  sqcRZGate(q, -0.23382649196433292, 6);
  sqcRYGate(q, -0.011598725335672166, 7);
  sqcRZGate(q, -1.5902800807826676, 7);
  sqcRYGate(q, -1.0624196827727093, 8);
  sqcRZGate(q, -1.2274288921322878, 8);
  sqcRYGate(q, -2.869150284907288, 9);
  sqcRZGate(q, 0.17850823188356416, 9);
  sqcRYGate(q, 1.333582254962347, 10);
  sqcRZGate(q, -0.3422257258188193, 10);
  sqcRYGate(q, 0.23579247123428804, 11);
  sqcRZGate(q, 2.7085254436929778, 11);
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
  sqcRYGate(q, 0.06202091910311129, 0);
  sqcRZGate(q, -1.0246827563907006, 0);
  sqcRYGate(q, 1.4137966046092376, 1);
  sqcRZGate(q, 0.21511199029498673, 1);
  sqcRYGate(q, 0.41034810023050194, 2);
  sqcRZGate(q, 0.5075274323426111, 2);
  sqcRYGate(q, 1.6256546938532557, 3);
  sqcRZGate(q, 1.75667440224583, 3);
  sqcRYGate(q, 1.53809918784028, 4);
  sqcRZGate(q, 0.030525873562726957, 4);
  sqcRYGate(q, -1.726418012894599, 5);
  sqcRZGate(q, 0.09466121970335628, 5);
  sqcRYGate(q, 1.5772424333661057, 6);
  sqcRZGate(q, 0.0259556548827761, 6);
  sqcRYGate(q, 1.1675087390257843, 7);
  sqcRZGate(q, -0.0023241510260261222, 7);
  sqcRYGate(q, -1.8794072857187034, 8);
  sqcRZGate(q, -0.3596539031528652, 8);
  sqcRYGate(q, -1.2424012318975926, 9);
  sqcRZGate(q, -0.020911856060143563, 9);
  sqcRYGate(q, 0.8695414950490198, 10);
  sqcRZGate(q, -1.518894453790246, 10);
  sqcRYGate(q, 1.567432569643012, 11);
  sqcRZGate(q, 0.023336146605185574, 11);

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
