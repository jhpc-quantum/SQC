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

  sqcRYGate(q, 3.1403141029021286, 0);
  sqcRZGate(q, -2.310618279513957, 0);
  sqcRYGate(q, 0.06608472662078846, 1);
  sqcRZGate(q, 3.0762618637224812, 1);
  sqcRYGate(q, 2.4923216718020695, 2);
  sqcRZGate(q, 1.9513465069036249, 2);
  sqcRYGate(q, -2.0457625678054603, 3);
  sqcRZGate(q, -0.898430143758148, 3);
  sqcRYGate(q, -3.1415431591361362, 4);
  sqcRZGate(q, 2.5988620842491823, 4);
  sqcRYGate(q, 3.1411393261845446, 5);
  sqcRZGate(q, 2.7691230075293993, 5);
  sqcRYGate(q, -1.5528821718758221, 6);
  sqcRZGate(q, -0.4445727325004093, 6);
  sqcRYGate(q, 1.5718841270308737, 7);
  sqcRZGate(q, -0.9940950695149979, 7);
  sqcRYGate(q, -0.01216106563607736, 8);
  sqcRZGate(q, 1.3044720866716473, 8);
  sqcRYGate(q, 0.0013100006177415037, 9);
  sqcRZGate(q, 1.675073593788798, 9);
  sqcRYGate(q, 5.650684554626858e-06, 10);
  sqcRZGate(q, 1.8688634155138757, 10);
  sqcRYGate(q, -1.570854178976707, 11);
  sqcRZGate(q, -2.185775075818503, 11);
  sqcRYGate(q, 1.45505971140457, 12);
  sqcRZGate(q, -1.808291349867205, 12);
  sqcRYGate(q, 2.4089624573925676, 13);
  sqcRZGate(q, -2.595938438204655, 13);
  sqcRYGate(q, -4.572413617509596e-06, 14);
  sqcRZGate(q, 0.7706487024004973, 14);
  sqcRYGate(q, 1.5708830142323613, 15);
  sqcRZGate(q, 0.3724677791693965, 15);
  sqcRYGate(q, -1.4063106975438877, 16);
  sqcRZGate(q, 2.7575017856212, 16);
  sqcRYGate(q, 3.136813033429296, 17);
  sqcRZGate(q, -0.8470169770491296, 17);
  sqcRYGate(q, 0.00029991697459922436, 18);
  sqcRZGate(q, 0.563666342249168, 18);
  sqcRYGate(q, 2.036539046626917, 19);
  sqcRZGate(q, -2.30589890792918, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -3.1408603445190475, 0);
  sqcRZGate(q, 2.4326669123843363, 0);
  sqcRYGate(q, 1.5685567410416597, 1);
  sqcRZGate(q, 1.794443689128311, 1);
  sqcRYGate(q, -1.0833604471299503, 2);
  sqcRZGate(q, 1.958641691353894, 2);
  sqcRYGate(q, -0.35487608091918493, 3);
  sqcRZGate(q, -0.9246514292500576, 3);
  sqcRYGate(q, -0.002889468401321899, 4);
  sqcRZGate(q, -0.6437570734148649, 4);
  sqcRYGate(q, -1.5706745102842516, 5);
  sqcRZGate(q, 1.437384821698112, 5);
  sqcRYGate(q, 0.0561801741697483, 6);
  sqcRZGate(q, -2.7784989134918594, 6);
  sqcRYGate(q, 0.09649576951221846, 7);
  sqcRZGate(q, 2.597512547677248, 7);
  sqcRYGate(q, 1.5708542221802333, 8);
  sqcRZGate(q, 0.5874223585873111, 8);
  sqcRYGate(q, -1.5707315826826616, 9);
  sqcRZGate(q, -2.7229459360727963, 9);
  sqcRYGate(q, 3.1372292282519703, 10);
  sqcRZGate(q, -1.280235905082061, 10);
  sqcRYGate(q, -3.141383309476001, 11);
  sqcRZGate(q, 0.9558075693034511, 11);
  sqcRYGate(q, -0.6769476561006558, 12);
  sqcRZGate(q, 1.876263725480262, 12);
  sqcRYGate(q, -3.1190045947129534, 13);
  sqcRZGate(q, -0.013257486469620437, 13);
  sqcRYGate(q, 1.5855228729559334, 14);
  sqcRZGate(q, 2.8170895044851134, 14);
  sqcRYGate(q, 3.141456690769398, 15);
  sqcRZGate(q, 2.53094777052752, 15);
  sqcRYGate(q, -0.3033335134411175, 16);
  sqcRZGate(q, -2.760121815787449, 16);
  sqcRYGate(q, -0.05600456006321686, 17);
  sqcRZGate(q, -3.0003778218893706, 17);
  sqcRYGate(q, 3.141554431100526, 18);
  sqcRZGate(q, 0.8316486975001508, 18);
  sqcRYGate(q, -0.6373714635478215, 19);
  sqcRZGate(q, 0.24714310522392421, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.5759545505704307, 0);
  sqcRZGate(q, -1.5857345761675683, 0);
  sqcRYGate(q, 0.2247938209923093, 1);
  sqcRZGate(q, -0.5337737543318993, 1);
  sqcRYGate(q, -0.9481002409971238, 2);
  sqcRZGate(q, -0.09418535085745884, 2);
  sqcRYGate(q, -3.1415213175027685, 3);
  sqcRZGate(q, 2.325289658174409, 3);
  sqcRYGate(q, -9.883554251623113e-05, 4);
  sqcRZGate(q, -1.4970196651971013, 4);
  sqcRYGate(q, 5.92874693232659e-05, 5);
  sqcRZGate(q, 3.0444901330460095, 5);
  sqcRYGate(q, -1.567607901658886, 6);
  sqcRZGate(q, 2.499886703710965, 6);
  sqcRYGate(q, 1.5707709723840269, 7);
  sqcRZGate(q, -2.772626548577299, 7);
  sqcRYGate(q, -1.570940458052589, 8);
  sqcRZGate(q, 0.96713065327551, 8);
  sqcRYGate(q, 1.5724616215144334, 9);
  sqcRZGate(q, -1.568084432042142, 9);
  sqcRYGate(q, 1.4786307865410242, 10);
  sqcRZGate(q, 3.1400517180247394, 10);
  sqcRYGate(q, 1.5707634236765105, 11);
  sqcRZGate(q, 0.9540287971404584, 11);
  sqcRYGate(q, 3.0981280793129575, 12);
  sqcRZGate(q, 1.7438526714577387, 12);
  sqcRYGate(q, -1.8709470439542928, 13);
  sqcRZGate(q, -1.4427307104295715, 13);
  sqcRYGate(q, 1.1391787338332904e-05, 14);
  sqcRZGate(q, 2.7971186696578414, 14);
  sqcRYGate(q, 8.901001957380993e-05, 15);
  sqcRZGate(q, -2.1584926439840766, 15);
  sqcRYGate(q, -1.547249162122682, 16);
  sqcRZGate(q, 1.5463018163581725, 16);
  sqcRYGate(q, -3.1366061640493847, 17);
  sqcRZGate(q, -1.4133779304189498, 17);
  sqcRYGate(q, 3.1006332360249367, 18);
  sqcRZGate(q, 2.542524767424648, 18);
  sqcRYGate(q, -0.006247967032927627, 19);
  sqcRZGate(q, 0.18971888824489622, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -0.017040586164474902, 0);
  sqcRZGate(q, -3.119693073517216, 0);
  sqcRYGate(q, -3.127317911699641, 1);
  sqcRZGate(q, 0.18060489937562263, 1);
  sqcRYGate(q, -1.5688396672641065, 2);
  sqcRZGate(q, -3.1331190641706113, 2);
  sqcRYGate(q, 0.7547799829268549, 3);
  sqcRZGate(q, 0.16787650906718984, 3);
  sqcRYGate(q, 1.6745263680830909, 4);
  sqcRZGate(q, -1.2781786349012512, 4);
  sqcRYGate(q, 0.0004136654535429329, 5);
  sqcRZGate(q, 1.7934409944126646, 5);
  sqcRYGate(q, -1.699331684851746, 6);
  sqcRZGate(q, -1.2262980306710674, 6);
  sqcRYGate(q, 3.1404495437326934, 7);
  sqcRZGate(q, -1.8992313051661425, 7);
  sqcRYGate(q, -4.1547545892584026e-06, 8);
  sqcRZGate(q, 2.7392129797117764, 8);
  sqcRYGate(q, 0.025983118487097556, 9);
  sqcRZGate(q, 1.5680845749781458, 9);
  sqcRYGate(q, 1.402679475904006, 10);
  sqcRZGate(q, -1.3450135133879746, 10);
  sqcRYGate(q, -2.471791689235444e-06, 11);
  sqcRZGate(q, -0.9485799855049556, 11);
  sqcRYGate(q, 0.47845149584797414, 12);
  sqcRZGate(q, -0.11803751492141827, 12);
  sqcRYGate(q, 1.5707952391608715, 13);
  sqcRZGate(q, -3.1415778104044962, 13);
  sqcRYGate(q, 3.134147427983558, 14);
  sqcRZGate(q, 2.452628506289861, 14);
  sqcRYGate(q, -1.5707827159724506, 15);
  sqcRZGate(q, -2.357744018117127, 15);
  sqcRYGate(q, -1.558369627325539, 16);
  sqcRZGate(q, -3.0295226001379305, 16);
  sqcRYGate(q, 1.5711555553242986, 17);
  sqcRZGate(q, -0.26061917374536847, 17);
  sqcRYGate(q, 1.9982952735198015e-05, 18);
  sqcRZGate(q, 2.2390533706160625, 18);
  sqcRYGate(q, 0.052158472355587016, 19);
  sqcRZGate(q, -1.1144173599443752, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.5687337655447662, 0);
  sqcRZGate(q, 0.8722662289191194, 0);
  sqcRYGate(q, 2.751927098761771, 1);
  sqcRZGate(q, -1.1189447995594397, 1);
  sqcRYGate(q, 2.8904643350049337, 2);
  sqcRZGate(q, -0.15397153088212612, 2);
  sqcRYGate(q, -3.13596458536778, 3);
  sqcRZGate(q, -0.6931628371502905, 3);
  sqcRYGate(q, 2.207197114807563e-07, 4);
  sqcRZGate(q, -1.6123225933497047, 4);
  sqcRYGate(q, 2.817639137069177, 5);
  sqcRZGate(q, 0.017994627009787042, 5);
  sqcRYGate(q, -0.0002323571911786267, 6);
  sqcRZGate(q, 0.824476227449758, 6);
  sqcRYGate(q, -1.2209885841052426e-05, 7);
  sqcRZGate(q, 0.697437817449816, 7);
  sqcRYGate(q, 0.007226022574724489, 8);
  sqcRZGate(q, -1.9713116308287422, 8);
  sqcRYGate(q, -1.5691470189911552, 9);
  sqcRZGate(q, -1.7708329573568933, 9);
  sqcRYGate(q, 4.9896784186272875e-05, 10);
  sqcRZGate(q, 1.2196835571304105, 10);
  sqcRYGate(q, 1.5718871488274448, 11);
  sqcRZGate(q, 1.577923718389969, 11);
  sqcRYGate(q, -3.1415894740476324, 12);
  sqcRZGate(q, 1.371216747633449, 12);
  sqcRYGate(q, -1.5708611781652246, 13);
  sqcRZGate(q, 0.2633570086047136, 13);
  sqcRYGate(q, 3.0629604723579464, 14);
  sqcRZGate(q, 0.010243140837097544, 14);
  sqcRYGate(q, -1.5709069443976311, 15);
  sqcRZGate(q, -2.3991690782679824e-05, 15);
  sqcRYGate(q, -1.5696283417354522, 16);
  sqcRZGate(q, 1.084934446844675, 16);
  sqcRYGate(q, -8.571416090674688e-06, 17);
  sqcRZGate(q, 2.9177040691063176, 17);
  sqcRYGate(q, -2.71913221224976, 18);
  sqcRZGate(q, 0.918590576430241, 18);
  sqcRYGate(q, 3.1415711078472874, 19);
  sqcRZGate(q, 2.3459937166202756, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -0.053812267514754986, 0);
  sqcRZGate(q, 0.13913919973036612, 0);
  sqcRYGate(q, -1.4056688433425009, 1);
  sqcRZGate(q, -2.9323472553945757, 1);
  sqcRYGate(q, 2.5200205479362534, 2);
  sqcRZGate(q, -0.12445651400142485, 2);
  sqcRYGate(q, 1.571082157567058, 3);
  sqcRZGate(q, 2.3791878468578407, 3);
  sqcRYGate(q, -1.6969869093524086, 4);
  sqcRZGate(q, 0.15303930368966198, 4);
  sqcRYGate(q, -3.108834046491771, 5);
  sqcRZGate(q, 1.0231601348256607, 5);
  sqcRYGate(q, -3.0019655407675634, 6);
  sqcRZGate(q, 0.5938630711690146, 6);
  sqcRYGate(q, 1.5707903282391023, 7);
  sqcRZGate(q, -3.1415697700742378, 7);
  sqcRYGate(q, 1.8083625317214926, 8);
  sqcRZGate(q, 1.0516251785238686, 8);
  sqcRYGate(q, -7.816830507323402e-07, 9);
  sqcRZGate(q, 1.3056012116329205, 9);
  sqcRYGate(q, -0.0024310586357421116, 10);
  sqcRZGate(q, 0.12875948961811773, 10);
  sqcRYGate(q, -2.4567189049750318, 11);
  sqcRZGate(q, 1.5793366233207873, 11);
  sqcRYGate(q, -3.141588933203856, 12);
  sqcRZGate(q, 1.2547685148309426, 12);
  sqcRYGate(q, 3.1415741651898252, 13);
  sqcRZGate(q, 1.830271095958122, 13);
  sqcRYGate(q, 1.5710048490336606, 14);
  sqcRZGate(q, 1.5506989768510264, 14);
  sqcRYGate(q, -1.5736359451031336, 15);
  sqcRZGate(q, 0.0009487448157564477, 15);
  sqcRYGate(q, 1.5756547284932854, 16);
  sqcRZGate(q, -3.1312012149902264, 16);
  sqcRYGate(q, 1.2826149992403608, 17);
  sqcRZGate(q, -2.5781994455174773, 17);
  sqcRYGate(q, -4.9169371461974884e-05, 18);
  sqcRZGate(q, -0.9186041848252263, 18);
  sqcRYGate(q, -0.00022815376694484968, 19);
  sqcRZGate(q, 0.8429883281950268, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -1.5670366104108657, 0);
  sqcRZGate(q, 3.087769276180986, 0);
  sqcRYGate(q, -1.5713235620141957, 1);
  sqcRZGate(q, -3.1013037699733625, 1);
  sqcRYGate(q, 3.141422953688598, 2);
  sqcRZGate(q, 1.5788202566217537, 2);
  sqcRYGate(q, 0.0004793761346286729, 3);
  sqcRZGate(q, -2.379072804588602, 3);
  sqcRYGate(q, -2.55222534852565e-05, 4);
  sqcRZGate(q, -1.7240529297144702, 4);
  sqcRYGate(q, 0.006655569175642917, 5);
  sqcRZGate(q, 0.09429950646298835, 5);
  sqcRYGate(q, 1.198243827439467, 6);
  sqcRZGate(q, -1.3709097538442692, 6);
  sqcRYGate(q, -1.5708125610464876, 7);
  sqcRZGate(q, -2.7852853060952967, 7);
  sqcRYGate(q, 0.45383939773654025, 8);
  sqcRZGate(q, -1.571950885280521, 8);
  sqcRYGate(q, -3.1415061113540594, 9);
  sqcRZGate(q, -2.336760063479327, 9);
  sqcRYGate(q, -0.03713665809156552, 10);
  sqcRZGate(q, -1.5741598961154346, 10);
  sqcRYGate(q, -1.5704693017018174, 11);
  sqcRZGate(q, 1.2782043288359877, 11);
  sqcRYGate(q, 5.244717848462699e-06, 12);
  sqcRZGate(q, 0.2346071188563128, 12);
  sqcRYGate(q, -1.5708019519590697, 13);
  sqcRZGate(q, 3.141569947627863, 13);
  sqcRYGate(q, -0.3476852284045009, 14);
  sqcRZGate(q, -3.082525556687469, 14);
  sqcRYGate(q, 1.568195232920817, 15);
  sqcRZGate(q, 1.7384761073072217, 15);
  sqcRYGate(q, 1.5704447423342218, 16);
  sqcRZGate(q, -0.08869476586450707, 16);
  sqcRYGate(q, 3.141564130398776, 17);
  sqcRZGate(q, 2.1526897108741974, 17);
  sqcRYGate(q, -1.5710984862510697, 18);
  sqcRZGate(q, 1.7118401736044393, 18);
  sqcRYGate(q, -1.5708132975771452, 19);
  sqcRZGate(q, -2.634632025865176, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.4364567907646288, 0);
  sqcRZGate(q, -2.45073475361786, 0);
  sqcRYGate(q, 3.1325492334164773, 1);
  sqcRZGate(q, 3.007376787500786, 1);
  sqcRYGate(q, 1.6097760619220718, 2);
  sqcRZGate(q, -2.474036032856277, 2);
  sqcRYGate(q, 1.55776260319052, 3);
  sqcRZGate(q, -0.17743212829794802, 3);
  sqcRYGate(q, 1.5706269450843795, 4);
  sqcRZGate(q, -2.3214175754524433, 4);
  sqcRYGate(q, -0.000208890402209151, 5);
  sqcRZGate(q, -0.3687845979449865, 5);
  sqcRYGate(q, 0.07993371228897671, 6);
  sqcRZGate(q, 0.8183599528002655, 6);
  sqcRYGate(q, -3.1414667798663634, 7);
  sqcRZGate(q, -0.48362702046027994, 7);
  sqcRYGate(q, -1.5695295361179813, 8);
  sqcRZGate(q, -2.2593508818276113, 8);
  sqcRYGate(q, -3.1415758975263723, 9);
  sqcRZGate(q, 2.2967998095888604, 9);
  sqcRYGate(q, -1.570910836485497, 10);
  sqcRZGate(q, 2.4461587276798507, 10);
  sqcRYGate(q, 5.883149651886299e-06, 11);
  sqcRZGate(q, -2.1857613078095577, 11);
  sqcRYGate(q, -1.570673886070936, 12);
  sqcRZGate(q, 0.628845316173919, 12);
  sqcRYGate(q, -1.5707904635311136, 13);
  sqcRZGate(q, -0.8996074172628266, 13);
  sqcRYGate(q, 0.11392237828590623, 14);
  sqcRZGate(q, -2.426588027994726, 14);
  sqcRYGate(q, -3.141427274726409, 15);
  sqcRZGate(q, -0.7353801740267789, 15);
  sqcRYGate(q, -1.7200076545750027, 16);
  sqcRZGate(q, -2.5880714445107853, 16);
  sqcRYGate(q, 3.1201980764554156, 17);
  sqcRZGate(q, 0.7039229656537396, 17);
  sqcRYGate(q, -2.961153685188123e-05, 18);
  sqcRZGate(q, -1.1311433730124352, 18);
  sqcRYGate(q, -3.141556772545278, 19);
  sqcRZGate(q, -1.9515649706670835, 19);

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
