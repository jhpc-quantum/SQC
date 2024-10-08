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

  sqcRYGate(q, 1.5771508397792164, 0);
  sqcRZGate(q, -0.6209852111839177, 0);
  sqcRYGate(q, 1.5575363079867257, 1);
  sqcRZGate(q, 0.3397831115967003, 1);
  sqcRYGate(q, -0.002194129514033881, 2);
  sqcRZGate(q, 0.8283059491527536, 2);
  sqcRYGate(q, -3.1283085304248526, 3);
  sqcRZGate(q, -0.008712242368020817, 3);
  sqcRYGate(q, -1.4879034871395698, 4);
  sqcRZGate(q, -0.00801368983916502, 4);
  sqcRYGate(q, 0.04922519108729144, 5);
  sqcRZGate(q, 1.7303473125758755, 5);
  sqcRYGate(q, 1.5737757663603364, 6);
  sqcRZGate(q, 2.3956978246453002, 6);
  sqcRYGate(q, 3.10146018281816, 7);
  sqcRZGate(q, -1.1400842660752346, 7);
  sqcRYGate(q, 2.940826582785054, 8);
  sqcRZGate(q, -1.7032098418139663, 8);
  sqcRYGate(q, 0.22171855788514439, 9);
  sqcRZGate(q, 2.8554295364114313, 9);
  sqcRYGate(q, 1.5512840735978886, 10);
  sqcRZGate(q, -0.3655554642216246, 10);
  sqcRYGate(q, -1.4967279687592396, 11);
  sqcRZGate(q, 0.20060496125799523, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.0329275222831993, 0);
  sqcRZGate(q, -1.4873776381028776, 0);
  sqcRYGate(q, -1.2495911825755739, 1);
  sqcRZGate(q, 0.8933459408237225, 1);
  sqcRYGate(q, -0.0011620262379921013, 2);
  sqcRZGate(q, -2.540782832718021, 2);
  sqcRYGate(q, 0.29867570701726887, 3);
  sqcRZGate(q, 3.1230757260012667, 3);
  sqcRYGate(q, 1.5673625003414984, 4);
  sqcRZGate(q, 1.215351933174512, 4);
  sqcRYGate(q, 3.13985174860343, 5);
  sqcRZGate(q, 0.13753488415409623, 5);
  sqcRYGate(q, 0.006630591997418692, 6);
  sqcRZGate(q, 2.3956529096001162, 6);
  sqcRYGate(q, 1.5757453145634308, 7);
  sqcRZGate(q, 0.17720995054614708, 7);
  sqcRYGate(q, -1.5343985078006757, 8);
  sqcRZGate(q, 1.572652782811975, 8);
  sqcRYGate(q, -1.5665126491464638, 9);
  sqcRZGate(q, 1.5709618498487574, 9);
  sqcRYGate(q, -0.5338242842181615, 10);
  sqcRZGate(q, -2.7622038483242486, 10);
  sqcRYGate(q, -2.0579555774286407, 11);
  sqcRZGate(q, 0.06792818130334766, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.608593150059472, 0);
  sqcRZGate(q, -1.8904248607621799, 0);
  sqcRYGate(q, -2.4832753675376966, 1);
  sqcRZGate(q, 3.140818715858829, 1);
  sqcRYGate(q, -0.08482150626280825, 2);
  sqcRZGate(q, 0.1923503805058995, 2);
  sqcRYGate(q, -1.5644773795602918, 3);
  sqcRZGate(q, 1.574958705761797, 3);
  sqcRYGate(q, 0.002415070094898266, 4);
  sqcRZGate(q, -2.7530754795095285, 4);
  sqcRYGate(q, 2.000446963997913, 5);
  sqcRZGate(q, -1.6558226733823673, 5);
  sqcRYGate(q, 0.005108006087441334, 6);
  sqcRZGate(q, -0.15995130378438738, 6);
  sqcRYGate(q, 3.139277047136512, 7);
  sqcRZGate(q, -1.2600984219756959, 7);
  sqcRYGate(q, 1.5794482051307819, 8);
  sqcRZGate(q, 0.06832680509330463, 8);
  sqcRYGate(q, -1.5710722457740092, 9);
  sqcRZGate(q, 3.085251837598808, 9);
  sqcRYGate(q, 2.286214186270176, 10);
  sqcRZGate(q, 1.6715555060691907, 10);
  sqcRYGate(q, -1.169247877098596, 11);
  sqcRZGate(q, 1.4496670956424367, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.1219396672369935, 0);
  sqcRZGate(q, 2.7892644786707765, 0);
  sqcRYGate(q, 1.5775663718370774, 1);
  sqcRZGate(q, 1.5471136940269803, 1);
  sqcRYGate(q, 1.4972564704803215, 2);
  sqcRZGate(q, 1.3180834895851652, 2);
  sqcRYGate(q, -1.5758984709094959, 3);
  sqcRZGate(q, -1.4287094336319206, 3);
  sqcRYGate(q, -1.5817390827243072, 4);
  sqcRZGate(q, -1.195446411584851, 4);
  sqcRYGate(q, -2.9374038429453004, 5);
  sqcRZGate(q, -1.6859714009595408, 5);
  sqcRYGate(q, -1.5918252400334405, 6);
  sqcRZGate(q, 1.870100065509586, 6);
  sqcRYGate(q, 3.10881901192917, 7);
  sqcRZGate(q, 0.8305476951078434, 7);
  sqcRYGate(q, -1.5660705704274935, 8);
  sqcRZGate(q, -1.8324180051007772, 8);
  sqcRYGate(q, -1.5666141321936742, 9);
  sqcRZGate(q, -1.966996678402432, 9);
  sqcRYGate(q, 1.4655495740313464, 10);
  sqcRZGate(q, 2.691939814574749, 10);
  sqcRYGate(q, -0.14449381217277438, 11);
  sqcRZGate(q, -1.0472027655408929, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.4343020231460454, 0);
  sqcRZGate(q, -2.128313866740399, 0);
  sqcRYGate(q, -3.0382006796717516, 1);
  sqcRZGate(q, -1.5788709844042845, 1);
  sqcRYGate(q, 3.1409823652151734, 2);
  sqcRZGate(q, 2.8925018361090853, 2);
  sqcRYGate(q, -2.8235884230949297, 3);
  sqcRZGate(q, -2.9654966410661685, 3);
  sqcRYGate(q, -0.0003447853306033366, 4);
  sqcRZGate(q, -1.9812553860426538, 4);
  sqcRYGate(q, 0.10546605155261267, 5);
  sqcRZGate(q, -1.4160464291072423, 5);
  sqcRYGate(q, -3.141089570900132, 6);
  sqcRZGate(q, -1.2749906924129413, 6);
  sqcRYGate(q, 3.140652731831132, 7);
  sqcRZGate(q, 0.71408672284866, 7);
  sqcRYGate(q, 0.2625139753598713, 8);
  sqcRZGate(q, -1.8048296740243952, 8);
  sqcRYGate(q, -0.056788807066247844, 9);
  sqcRZGate(q, -1.0180998723560437, 9);
  sqcRYGate(q, -2.1791781097690026, 10);
  sqcRZGate(q, 0.8965553526966444, 10);
  sqcRYGate(q, -2.135654613290054, 11);
  sqcRZGate(q, 0.16405959828446814, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.001721459706438111, 0);
  sqcRZGate(q, -0.813109123073239, 0);
  sqcRYGate(q, -1.5633858222670582, 1);
  sqcRZGate(q, -1.4046388268512993, 1);
  sqcRYGate(q, -1.5742644065387825, 2);
  sqcRZGate(q, -0.030448208324353132, 2);
  sqcRYGate(q, -1.5633484858414701, 3);
  sqcRZGate(q, -3.1373282972785006, 3);
  sqcRYGate(q, 1.5595157362817407, 4);
  sqcRZGate(q, -2.7692882749888783, 4);
  sqcRYGate(q, 3.094899745327452, 5);
  sqcRZGate(q, 0.14046290765829905, 5);
  sqcRYGate(q, -1.548024778222514, 6);
  sqcRZGate(q, 2.2257250388309417, 6);
  sqcRYGate(q, 0.2507279426719768, 7);
  sqcRZGate(q, 2.9451713339704835, 7);
  sqcRYGate(q, 0.008948280260044683, 8);
  sqcRZGate(q, 0.4379521101220658, 8);
  sqcRYGate(q, 3.1376741678651143, 9);
  sqcRZGate(q, 0.17691537532281523, 9);
  sqcRYGate(q, -1.6092884962813467, 10);
  sqcRZGate(q, 0.19877237825596644, 10);
  sqcRYGate(q, 1.5178879945453847, 11);
  sqcRZGate(q, -2.330944755460011, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.1086563770201323, 0);
  sqcRZGate(q, 2.144946384530404, 0);
  sqcRYGate(q, 1.060462112413063, 1);
  sqcRZGate(q, -0.31141325712618756, 1);
  sqcRYGate(q, -1.570885618313626, 2);
  sqcRZGate(q, 0.3725427310928478, 2);
  sqcRYGate(q, 1.903231486635975, 3);
  sqcRZGate(q, 1.6346240728058725, 3);
  sqcRYGate(q, 3.1415597114296205, 4);
  sqcRZGate(q, -2.1556644221359456, 4);
  sqcRYGate(q, 0.38231796543441554, 5);
  sqcRZGate(q, 1.4504385715138648, 5);
  sqcRYGate(q, 3.1376912386804157, 6);
  sqcRZGate(q, -1.2166814778106776, 6);
  sqcRYGate(q, 0.025577255475683458, 7);
  sqcRZGate(q, -1.375801532546727, 7);
  sqcRYGate(q, 2.9139758382059613, 8);
  sqcRZGate(q, 1.273461960919022, 8);
  sqcRYGate(q, 1.339377687525526, 9);
  sqcRZGate(q, -1.3310403137218385, 9);
  sqcRYGate(q, -1.6336591995844518, 10);
  sqcRZGate(q, -1.8339066298455018, 10);
  sqcRYGate(q, -0.8867373864784001, 11);
  sqcRZGate(q, -2.6520747135356215, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.0039467109912826905, 0);
  sqcRZGate(q, -1.8975850215921284, 0);
  sqcRYGate(q, 1.568016192288796, 1);
  sqcRZGate(q, -3.095563495690835, 1);
  sqcRYGate(q, -3.128310826664108, 2);
  sqcRZGate(q, -2.7771447245395695, 2);
  sqcRYGate(q, 0.0001883159238948879, 3);
  sqcRZGate(q, 0.42742763659141675, 3);
  sqcRYGate(q, 0.003541607829505857, 4);
  sqcRZGate(q, 2.187003708452988, 4);
  sqcRYGate(q, 2.8844674360122786, 5);
  sqcRZGate(q, 2.276632933934513, 5);
  sqcRYGate(q, 0.002837474880945555, 6);
  sqcRZGate(q, -2.1642743227354226, 6);
  sqcRYGate(q, -1.5933260193546102, 7);
  sqcRZGate(q, -3.0499853754189274, 7);
  sqcRYGate(q, -3.1362805073059334, 8);
  sqcRZGate(q, 2.9416790319913106, 8);
  sqcRYGate(q, 3.1328543174809145, 9);
  sqcRZGate(q, -2.0106265825646465, 9);
  sqcRYGate(q, 1.5575161036826735, 10);
  sqcRZGate(q, -1.0602144820403212, 10);
  sqcRYGate(q, 2.386976992364298, 11);
  sqcRZGate(q, 1.5187396895788057, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5840269382051915, 0);
  sqcRZGate(q, 1.5338420434198885, 0);
  sqcRYGate(q, -0.9448288905665647, 1);
  sqcRZGate(q, -0.02858634713584499, 1);
  sqcRYGate(q, -1.5690537237524174, 2);
  sqcRZGate(q, 3.140050421806652, 2);
  sqcRYGate(q, -0.009360838638738933, 3);
  sqcRZGate(q, -2.5646217602565815, 3);
  sqcRYGate(q, -3.141307802489263, 4);
  sqcRZGate(q, 2.7611785033070273, 4);
  sqcRYGate(q, 0.0005424830299061891, 5);
  sqcRZGate(q, 2.9584458558225735, 5);
  sqcRYGate(q, 0.004834213059919198, 6);
  sqcRZGate(q, -2.3159842753871547, 6);
  sqcRYGate(q, 0.004740823207695755, 7);
  sqcRZGate(q, 0.521529019839396, 7);
  sqcRYGate(q, -1.6686939497986737, 8);
  sqcRZGate(q, -1.4979009421664449, 8);
  sqcRYGate(q, -3.1231655304337336, 9);
  sqcRZGate(q, -2.3847730919933574, 9);
  sqcRYGate(q, 0.3574025941629905, 10);
  sqcRZGate(q, 0.47272557776627616, 10);
  sqcRYGate(q, -1.600375347956799, 11);
  sqcRZGate(q, 2.220265281081952, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5716021334149977, 0);
  sqcRZGate(q, 0.02656548230376288, 0);
  sqcRYGate(q, -1.5730724842184323, 1);
  sqcRZGate(q, -0.004070769275709374, 1);
  sqcRYGate(q, 1.5641798904841187, 2);
  sqcRZGate(q, 1.569891053999739, 2);
  sqcRYGate(q, 0.004403859505247496, 3);
  sqcRZGate(q, -1.0710548038293253, 3);
  sqcRYGate(q, 3.1150707899067736, 4);
  sqcRZGate(q, 3.013526650820308, 4);
  sqcRYGate(q, 0.0007435895679333916, 5);
  sqcRZGate(q, 0.8229528526244856, 5);
  sqcRYGate(q, -3.1415072935163426, 6);
  sqcRZGate(q, 3.0596976368168214, 6);
  sqcRYGate(q, -0.0016266506795048485, 7);
  sqcRZGate(q, -2.9474550298381397, 7);
  sqcRYGate(q, -1.5729021993840393, 8);
  sqcRZGate(q, 3.141235531692569, 8);
  sqcRYGate(q, 1.5733042877967467, 9);
  sqcRZGate(q, 3.137557158529793, 9);
  sqcRYGate(q, -1.5705874510734206, 10);
  sqcRZGate(q, 1.5742052954797332, 10);
  sqcRYGate(q, -0.0007961639750355687, 11);
  sqcRZGate(q, -0.6666182989476807, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.581050948894838, 0);
  sqcRZGate(q, 0.167124816679749, 0);
  sqcRYGate(q, 1.5336375038348775, 1);
  sqcRZGate(q, -2.737416533582381, 1);
  sqcRYGate(q, 1.5718005382304483, 2);
  sqcRZGate(q, 1.5438413191876337, 2);
  sqcRYGate(q, -1.5701907636670154, 3);
  sqcRZGate(q, 0.9548398056435311, 3);
  sqcRYGate(q, -3.109407986979554, 4);
  sqcRZGate(q, 1.4356251031802545, 4);
  sqcRYGate(q, 3.1330421901450984, 5);
  sqcRZGate(q, -2.6994045801259556, 5);
  sqcRYGate(q, 0.04408223752152086, 6);
  sqcRZGate(q, -3.1230878420579624, 6);
  sqcRYGate(q, 3.1413943080380546, 7);
  sqcRZGate(q, 0.17957842144293945, 7);
  sqcRYGate(q, 1.5702187676694994, 8);
  sqcRZGate(q, 1.3187688192318132, 8);
  sqcRYGate(q, 1.5697390726764906, 9);
  sqcRZGate(q, 2.1230176252904815, 9);
  sqcRYGate(q, 1.5465287834337023, 10);
  sqcRZGate(q, -3.000515073988787, 10);
  sqcRYGate(q, 1.5715869537172544, 11);
  sqcRZGate(q, -0.004280247244201618, 11);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.0397174033305285, 0);
  sqcRZGate(q, -2.79743139893972, 0);
  sqcRYGate(q, 3.140473296136971, 1);
  sqcRZGate(q, -2.406918620456244, 1);
  sqcRYGate(q, 1.666494961274947, 2);
  sqcRZGate(q, 0.17360439454090756, 2);
  sqcRYGate(q, -3.134564068534918, 3);
  sqcRZGate(q, -1.8439953280350796, 3);
  sqcRYGate(q, -1.548890935917244, 4);
  sqcRZGate(q, 1.747996145889493, 4);
  sqcRYGate(q, -3.1393045347021817, 5);
  sqcRZGate(q, -2.129554321783992, 5);
  sqcRYGate(q, -1.549714283107103, 6);
  sqcRZGate(q, 1.749010982051141, 6);
  sqcRYGate(q, 0.02962665818180778, 7);
  sqcRZGate(q, -2.057776967450878, 7);
  sqcRYGate(q, -3.1268052311978094, 8);
  sqcRZGate(q, 3.0577218297880466, 8);
  sqcRYGate(q, 3.1052742329670844, 9);
  sqcRZGate(q, 0.638200249980483, 9);
  sqcRYGate(q, -0.012017634953489167, 10);
  sqcRZGate(q, 0.013410897665731447, 10);
  sqcRYGate(q, 1.5998652057015785, 11);
  sqcRZGate(q, -2.6930006612970985, 11);

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
