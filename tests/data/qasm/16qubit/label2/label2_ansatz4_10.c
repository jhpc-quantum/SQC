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

  sqcRYGate(q, 1.6121968226785115, 0);
  sqcRZGate(q, 1.083234592945776, 0);
  sqcRYGate(q, 1.5707575906612374, 1);
  sqcRZGate(q, -0.0036485626678199874, 1);
  sqcRYGate(q, 4.42446099916343e-06, 2);
  sqcRZGate(q, -0.34721252122068075, 2);
  sqcRYGate(q, -2.6334337146494136e-06, 3);
  sqcRZGate(q, 1.4831292129205067, 3);
  sqcRYGate(q, -1.5708610418558138, 4);
  sqcRZGate(q, 2.461458942804029e-05, 4);
  sqcRYGate(q, -1.6199818298555955, 5);
  sqcRZGate(q, -3.1064434934836105, 5);
  sqcRYGate(q, -1.5707536247090799, 6);
  sqcRZGate(q, 3.0745870035279697, 6);
  sqcRYGate(q, 1.5709986915778327, 7);
  sqcRZGate(q, 0.5161255129648494, 7);
  sqcRYGate(q, -1.5697984190403629, 8);
  sqcRZGate(q, 1.572225564392828, 8);
  sqcRYGate(q, -1.5711643211474313, 9);
  sqcRZGate(q, 3.019362304688281, 9);
  sqcRYGate(q, -1.5737025990986373, 10);
  sqcRZGate(q, 1.990025990585555, 10);
  sqcRYGate(q, 1.5735840341664047, 11);
  sqcRZGate(q, -0.13918214907848725, 11);
  sqcRYGate(q, 7.90595499644553e-05, 12);
  sqcRZGate(q, -2.6737044635037557, 12);
  sqcRYGate(q, -0.0003061440650318645, 13);
  sqcRZGate(q, 0.10579839064436837, 13);
  sqcRYGate(q, 1.801298375940105, 14);
  sqcRZGate(q, -2.781896592473164, 14);
  sqcRYGate(q, 1.651863257849625, 15);
  sqcRZGate(q, 0.26741685195473064, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -3.137603999330034, 0);
  sqcRZGate(q, -0.06067489726778542, 0);
  sqcRYGate(q, -1.5731128727853763, 1);
  sqcRZGate(q, -1.9984945232970661, 1);
  sqcRYGate(q, -1.5702897855225078, 2);
  sqcRZGate(q, 1.57449771596439, 2);
  sqcRYGate(q, -1.6144635607290692, 3);
  sqcRZGate(q, -1.821716939631439, 3);
  sqcRYGate(q, -1.5725862179170205, 4);
  sqcRZGate(q, 0.3314567153370476, 4);
  sqcRYGate(q, 3.1397685429410136, 5);
  sqcRZGate(q, 0.23969248952369582, 5);
  sqcRYGate(q, -0.005084655155354945, 6);
  sqcRZGate(q, -2.3793521127862562, 6);
  sqcRYGate(q, -0.00036688267505667605, 7);
  sqcRZGate(q, -1.6690802147192356, 7);
  sqcRYGate(q, -1.5193683312484443, 8);
  sqcRZGate(q, -2.964918769591199, 8);
  sqcRYGate(q, 0.025005950554199963, 9);
  sqcRZGate(q, 3.0719019003078287, 9);
  sqcRYGate(q, -0.09931031001712931, 10);
  sqcRZGate(q, -1.8168664658157174, 10);
  sqcRYGate(q, -3.100558299695779, 11);
  sqcRZGate(q, -0.7155235242156763, 11);
  sqcRYGate(q, -9.262005361154733e-05, 12);
  sqcRZGate(q, -0.4146344010195175, 12);
  sqcRYGate(q, 0.0011583349467780835, 13);
  sqcRZGate(q, 2.669699307571495, 13);
  sqcRYGate(q, -1.0113566151258682, 14);
  sqcRZGate(q, 0.00296342633369097, 14);
  sqcRYGate(q, -1.1628333160238191, 15);
  sqcRZGate(q, 1.2662991422276644, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 7.452268397265622e-05, 0);
  sqcRZGate(q, -1.9578447128254728, 0);
  sqcRYGate(q, 3.1414512969642594, 1);
  sqcRZGate(q, 1.1077035633518024, 1);
  sqcRYGate(q, 1.569775693623687, 2);
  sqcRZGate(q, 1.5991492127172517, 2);
  sqcRYGate(q, 3.140039735412989, 3);
  sqcRZGate(q, -0.2505711892166423, 3);
  sqcRYGate(q, -3.8419231146686074e-05, 4);
  sqcRZGate(q, 0.21105957120883456, 4);
  sqcRYGate(q, -3.141555743511324, 5);
  sqcRZGate(q, 1.0193570710442348, 5);
  sqcRYGate(q, -3.03926043112781, 6);
  sqcRZGate(q, -1.2605456778267599, 6);
  sqcRYGate(q, 2.573476539291858, 7);
  sqcRZGate(q, -0.9016023983099529, 7);
  sqcRYGate(q, -1.2737939632388149, 8);
  sqcRZGate(q, -2.7690915932689695, 8);
  sqcRYGate(q, 3.1413779003701983, 9);
  sqcRZGate(q, 0.28923788118274496, 9);
  sqcRYGate(q, 3.093654924447408, 10);
  sqcRZGate(q, -1.123997183968106, 10);
  sqcRYGate(q, 0.000670809366301269, 11);
  sqcRZGate(q, 0.002062994925720041, 11);
  sqcRYGate(q, 1.5711009312173676, 12);
  sqcRZGate(q, -0.008979989366816097, 12);
  sqcRYGate(q, -1.5703673088892742, 13);
  sqcRZGate(q, -1.5274119907355566, 13);
  sqcRYGate(q, 0.058969316981372616, 14);
  sqcRZGate(q, -3.0599195045123224, 14);
  sqcRYGate(q, -2.106134980016531, 15);
  sqcRZGate(q, 1.8481037816851011, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.5818519834157119, 0);
  sqcRZGate(q, -1.5548432786968744, 0);
  sqcRYGate(q, 2.339706748117105, 1);
  sqcRZGate(q, 2.064488667459308, 1);
  sqcRYGate(q, 3.123371650300463, 2);
  sqcRZGate(q, -1.4613202542207067, 2);
  sqcRYGate(q, -1.5711820818763595, 3);
  sqcRZGate(q, -1.425014124775143, 3);
  sqcRYGate(q, 0.000240036293089939, 4);
  sqcRZGate(q, 2.5951446044146236, 4);
  sqcRYGate(q, -3.1414728504851035, 5);
  sqcRZGate(q, 1.5124382916400876, 5);
  sqcRYGate(q, -0.001389822728711465, 6);
  sqcRZGate(q, 0.36375371394032185, 6);
  sqcRYGate(q, 3.140562042781933, 7);
  sqcRZGate(q, -1.445727586470885, 7);
  sqcRYGate(q, -3.1413300789063974, 8);
  sqcRZGate(q, 2.8412107089080156, 8);
  sqcRYGate(q, 1.4050689303049551e-05, 9);
  sqcRZGate(q, -2.1837754420276796, 9);
  sqcRYGate(q, 7.211627652026209e-05, 10);
  sqcRZGate(q, -0.4336741052645019, 10);
  sqcRYGate(q, -4.570759832060664e-05, 11);
  sqcRZGate(q, -1.582529089534532, 11);
  sqcRYGate(q, -2.7874324243097433, 12);
  sqcRZGate(q, -2.987189587939224, 12);
  sqcRYGate(q, -1.5685291637022392, 13);
  sqcRZGate(q, 0.3761736294004931, 13);
  sqcRYGate(q, -2.909406314517461, 14);
  sqcRZGate(q, 1.5708098069208536, 14);
  sqcRYGate(q, -1.3385756286888282, 15);
  sqcRZGate(q, 1.5713275494230856, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.506678264813165, 0);
  sqcRZGate(q, -1.1473216742097687, 0);
  sqcRYGate(q, 2.4508059573492846, 1);
  sqcRZGate(q, 2.3132924932525745, 1);
  sqcRYGate(q, -3.0743071814276774, 2);
  sqcRZGate(q, -2.7762937855205534, 2);
  sqcRYGate(q, -3.1403906741665297, 3);
  sqcRZGate(q, 0.14552314411478928, 3);
  sqcRYGate(q, -1.5640438878491274, 4);
  sqcRZGate(q, -0.6755415627207706, 4);
  sqcRYGate(q, -0.03532703781724772, 5);
  sqcRZGate(q, 1.9962766238096217, 5);
  sqcRYGate(q, -1.270918311576402, 6);
  sqcRZGate(q, -1.4888435749032223, 6);
  sqcRYGate(q, -0.873308973281218, 7);
  sqcRZGate(q, -1.5772009521306711, 7);
  sqcRYGate(q, 2.8583268080729076, 8);
  sqcRZGate(q, 0.8438057970264743, 8);
  sqcRYGate(q, 0.002598940357514401, 9);
  sqcRZGate(q, -1.4413006873669594, 9);
  sqcRYGate(q, -3.1414741812058087, 10);
  sqcRZGate(q, -1.7369775704811676, 10);
  sqcRYGate(q, 3.1415245751918226, 11);
  sqcRZGate(q, 2.490110813689962, 11);
  sqcRYGate(q, 0.032995196643066826, 12);
  sqcRZGate(q, 1.4074519094754245, 12);
  sqcRYGate(q, 1.556372346486846, 13);
  sqcRZGate(q, -0.25574167189791974, 13);
  sqcRYGate(q, -1.4351644269065362, 14);
  sqcRZGate(q, -1.570672632893191, 14);
  sqcRYGate(q, -3.017729401687044, 15);
  sqcRZGate(q, -1.5700114318900606, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.7447383280697621, 0);
  sqcRZGate(q, -0.9452731515919942, 0);
  sqcRYGate(q, -0.058820139568127594, 1);
  sqcRZGate(q, 2.947822613997647, 1);
  sqcRYGate(q, -3.1399845469566587, 2);
  sqcRZGate(q, 0.4175636043321926, 2);
  sqcRYGate(q, -4.3259237027193365e-05, 3);
  sqcRZGate(q, -1.6280009921040888, 3);
  sqcRYGate(q, -0.00111265851623088, 4);
  sqcRZGate(q, 0.7496052223052057, 4);
  sqcRYGate(q, -0.029933018088298624, 5);
  sqcRZGate(q, 0.44809119551710286, 5);
  sqcRYGate(q, -2.9883998889711756, 6);
  sqcRZGate(q, 1.285862640071218, 6);
  sqcRYGate(q, -2.9804391745264507, 7);
  sqcRZGate(q, -2.797357634630313, 7);
  sqcRYGate(q, 1.6129072801357756, 8);
  sqcRZGate(q, 0.7655344794891867, 8);
  sqcRYGate(q, -1.5695308192096702, 9);
  sqcRZGate(q, -2.331942258616472, 9);
  sqcRYGate(q, -0.0037720184028360876, 10);
  sqcRZGate(q, 2.2087853984254324, 10);
  sqcRYGate(q, 3.0746791534789044, 11);
  sqcRZGate(q, -0.27079085106293743, 11);
  sqcRYGate(q, -1.572332783395467, 12);
  sqcRZGate(q, 0.3877834155063891, 12);
  sqcRYGate(q, 3.1277068887699464, 13);
  sqcRZGate(q, -1.8736416971152927, 13);
  sqcRYGate(q, 1.5655016269692594, 14);
  sqcRZGate(q, -1.3797552230404782, 14);
  sqcRYGate(q, 1.5656341868842303, 15);
  sqcRZGate(q, 1.64262387158526, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.349787861312862, 0);
  sqcRZGate(q, -2.139133663300556, 0);
  sqcRYGate(q, 0.4391008233144449, 1);
  sqcRZGate(q, 0.6741749438921625, 1);
  sqcRYGate(q, 2.9728607628527883, 2);
  sqcRZGate(q, -0.13340984600608863, 2);
  sqcRYGate(q, 3.1397886008598133, 3);
  sqcRZGate(q, -2.2953468743042826, 3);
  sqcRYGate(q, -3.134801215120543, 4);
  sqcRZGate(q, 0.0928516678398626, 4);
  sqcRYGate(q, 1.5495003511848497, 5);
  sqcRZGate(q, -0.003301157073365246, 5);
  sqcRYGate(q, -3.137731434268901, 6);
  sqcRZGate(q, 1.285930781975761, 6);
  sqcRYGate(q, 3.1410213883451146, 7);
  sqcRZGate(q, -2.555273526358922, 7);
  sqcRYGate(q, 0.0019566862361646287, 8);
  sqcRZGate(q, 2.987635456025357, 8);
  sqcRYGate(q, -3.122738511858739, 9);
  sqcRZGate(q, 1.7997240217005739, 9);
  sqcRYGate(q, 0.00042758434555787735, 10);
  sqcRZGate(q, -2.2045877947422774, 10);
  sqcRYGate(q, 3.1404285855353624, 11);
  sqcRZGate(q, 2.9772302903482473, 11);
  sqcRYGate(q, 0.003999057246668917, 12);
  sqcRZGate(q, -2.7322381228291905, 12);
  sqcRYGate(q, 1.5704970851224203, 13);
  sqcRZGate(q, 2.142140103509403, 13);
  sqcRYGate(q, -0.3557896685400811, 14);
  sqcRZGate(q, -1.7885640559635556, 14);
  sqcRYGate(q, 1.8889007110976508, 15);
  sqcRZGate(q, -0.3013708943210247, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.3684267886325081, 0);
  sqcRZGate(q, 0.42969654773098187, 0);
  sqcRYGate(q, -2.698014177100689, 1);
  sqcRZGate(q, 0.3560611946542869, 1);
  sqcRYGate(q, -3.121333558838858, 2);
  sqcRZGate(q, 2.3780617538402478, 2);
  sqcRYGate(q, 3.139202783037877, 3);
  sqcRZGate(q, -2.239476952095408, 3);
  sqcRYGate(q, -1.567315584029419, 4);
  sqcRZGate(q, -2.3134669512712236, 4);
  sqcRYGate(q, 1.5902247307558823, 5);
  sqcRZGate(q, -2.3422709263291748, 5);
  sqcRYGate(q, -1.6307133523890371, 6);
  sqcRZGate(q, -1.3379602883197483, 6);
  sqcRYGate(q, -1.6303463458258014, 7);
  sqcRZGate(q, 0.043797930337738045, 7);
  sqcRYGate(q, -3.091678911980928, 8);
  sqcRZGate(q, 2.130748782252516, 8);
  sqcRYGate(q, 0.0027157196826168573, 9);
  sqcRZGate(q, -1.7426504421822102, 9);
  sqcRYGate(q, -1.56745096223227, 10);
  sqcRZGate(q, -0.033508627647867044, 10);
  sqcRYGate(q, -0.078232541768128, 11);
  sqcRZGate(q, 1.539086579453197, 11);
  sqcRYGate(q, -1.2354241077862513, 12);
  sqcRZGate(q, -2.129020815757224, 12);
  sqcRYGate(q, 0.7674520971572285, 13);
  sqcRZGate(q, -3.0271032626732604, 13);
  sqcRYGate(q, -1.993497174854637, 14);
  sqcRZGate(q, -1.1333985153958392, 14);
  sqcRYGate(q, 0.9089984491076578, 15);
  sqcRZGate(q, -1.8960354090301266, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.5710494895800489, 0);
  sqcRZGate(q, -3.1391224585229143, 0);
  sqcRYGate(q, -1.536695868662106, 1);
  sqcRZGate(q, 2.1692139748657326, 1);
  sqcRYGate(q, -0.024887045808481112, 2);
  sqcRZGate(q, -2.628859862906266, 2);
  sqcRYGate(q, 3.095953848673928, 3);
  sqcRZGate(q, -1.5837153510579904, 3);
  sqcRYGate(q, -0.0017212979412379312, 4);
  sqcRZGate(q, -2.3787312235614717, 4);
  sqcRYGate(q, 0.0033393220852885363, 5);
  sqcRZGate(q, 1.630176722846412, 5);
  sqcRYGate(q, 1.5928084812207972, 6);
  sqcRZGate(q, 0.005094031217101463, 6);
  sqcRYGate(q, -1.572188786252691, 7);
  sqcRZGate(q, 1.5492696035425852, 7);
  sqcRYGate(q, 0.816973108449476, 8);
  sqcRZGate(q, -2.183121817306744, 8);
  sqcRYGate(q, -1.5717864852867978, 9);
  sqcRZGate(q, 3.0826526686353466, 9);
  sqcRYGate(q, 1.561779603896472, 10);
  sqcRZGate(q, 2.8738339974618645, 10);
  sqcRYGate(q, 1.5997762491381136, 11);
  sqcRZGate(q, -0.6800448172843451, 11);
  sqcRYGate(q, -3.1413763785956945, 12);
  sqcRZGate(q, -2.798443036226375, 12);
  sqcRYGate(q, -3.1413297726728358, 13);
  sqcRZGate(q, 2.759871974433805, 13);
  sqcRYGate(q, 0.06658603930565395, 14);
  sqcRZGate(q, -2.1431718418458967, 14);
  sqcRYGate(q, 3.104473770483154, 15);
  sqcRZGate(q, 3.0699589043526987, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -3.098957435107823, 0);
  sqcRZGate(q, -2.139427758151286, 0);
  sqcRYGate(q, -3.126788236537941, 1);
  sqcRZGate(q, 2.667209164106991, 1);
  sqcRYGate(q, -1.5478593055717609, 2);
  sqcRZGate(q, -1.419900169146186, 2);
  sqcRYGate(q, -1.5724072533293958, 3);
  sqcRZGate(q, 1.6249708372937957, 3);
  sqcRYGate(q, -3.139109439955784, 4);
  sqcRZGate(q, 0.025149161905017255, 4);
  sqcRYGate(q, -3.137880475078405, 5);
  sqcRZGate(q, -2.2956447884447173, 5);
  sqcRYGate(q, -1.566531327447052, 6);
  sqcRZGate(q, 0.9544647123730303, 6);
  sqcRYGate(q, 1.570385853944292, 7);
  sqcRZGate(q, 0.0008449084386450423, 7);
  sqcRYGate(q, 3.135895696793495, 8);
  sqcRZGate(q, -2.5489309232480375, 8);
  sqcRYGate(q, -0.050212842203933405, 9);
  sqcRZGate(q, 2.1791502351391965, 9);
  sqcRYGate(q, -2.1857828630052634, 10);
  sqcRZGate(q, 0.3071267029968088, 10);
  sqcRYGate(q, -2.0567869910745284, 11);
  sqcRZGate(q, 1.7806007947638596, 11);
  sqcRYGate(q, -1.5922840405744665, 12);
  sqcRZGate(q, -0.8739908867190334, 12);
  sqcRYGate(q, 1.5945857058846213, 13);
  sqcRZGate(q, -2.241290527625547, 13);
  sqcRYGate(q, -0.3608625784286997, 14);
  sqcRZGate(q, -1.4554502531103355, 14);
  sqcRYGate(q, -1.062829988346325, 15);
  sqcRZGate(q, 0.5716057524116609, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.082001218106095, 0);
  sqcRZGate(q, -0.279048698624446, 0);
  sqcRYGate(q, 1.1103449322936525, 1);
  sqcRZGate(q, -0.5083380097493282, 1);
  sqcRYGate(q, 1.90164029261053, 2);
  sqcRZGate(q, 1.0058540978666777, 2);
  sqcRYGate(q, -2.6721756127067104, 3);
  sqcRZGate(q, 1.3553116748537786, 3);
  sqcRYGate(q, 1.582930130480594, 4);
  sqcRZGate(q, -1.6900183613398108, 4);
  sqcRYGate(q, -1.5748122831614944, 5);
  sqcRZGate(q, -0.19613129545877978, 5);
  sqcRYGate(q, -3.133039654475598, 6);
  sqcRZGate(q, 0.9466007063913819, 6);
  sqcRYGate(q, 1.5399886414590105, 7);
  sqcRZGate(q, -1.7729531388581217, 7);
  sqcRYGate(q, 3.1307997074248517, 8);
  sqcRZGate(q, 1.2157549464171666, 8);
  sqcRYGate(q, -3.1315697508781173, 9);
  sqcRZGate(q, -1.0344793556876546, 9);
  sqcRYGate(q, -0.001128629672232151, 10);
  sqcRZGate(q, -1.0693246609563938, 10);
  sqcRYGate(q, -3.141066414102241, 11);
  sqcRZGate(q, 1.575927471153844, 11);
  sqcRYGate(q, 0.004928498567204001, 12);
  sqcRZGate(q, -2.2374860610910807, 12);
  sqcRYGate(q, -3.138429143846878, 13);
  sqcRZGate(q, 2.4068541358109985, 13);
  sqcRYGate(q, -2.3404221091232165, 14);
  sqcRZGate(q, -2.8716514290605595, 14);
  sqcRYGate(q, 2.342290565589336, 15);
  sqcRZGate(q, -0.49314691441706937, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.003554704698752076, 0);
  sqcRZGate(q, -1.7509829648005748, 0);
  sqcRYGate(q, -0.003569614608855076, 1);
  sqcRZGate(q, -0.554802691381667, 1);
  sqcRYGate(q, -0.0001320884359987673, 2);
  sqcRZGate(q, -0.3909884375403326, 2);
  sqcRYGate(q, -3.1237891705501224, 3);
  sqcRZGate(q, 1.2958793995429574, 3);
  sqcRYGate(q, -3.1402710672216894, 4);
  sqcRZGate(q, 3.092694172697913, 4);
  sqcRYGate(q, 0.0006689939831334198, 5);
  sqcRZGate(q, -0.7411096623807385, 5);
  sqcRYGate(q, 1.445454126580386, 6);
  sqcRZGate(q, -0.0003153229747807629, 6);
  sqcRYGate(q, 3.1337312424194157, 7);
  sqcRZGate(q, 2.6570042788788895, 7);
  sqcRYGate(q, -2.3696646325199637, 8);
  sqcRZGate(q, 2.928184597773717, 8);
  sqcRYGate(q, 0.7723556741731358, 9);
  sqcRZGate(q, 2.964828368470041, 9);
  sqcRYGate(q, -0.691505667615952, 10);
  sqcRZGate(q, -2.7055135541655746, 10);
  sqcRYGate(q, -1.9660324662373005, 11);
  sqcRZGate(q, 0.938072394179816, 11);
  sqcRYGate(q, 1.5755164754697502, 12);
  sqcRZGate(q, -0.10068047709526073, 12);
  sqcRYGate(q, -1.0414524298405352, 13);
  sqcRZGate(q, -1.9120876665858042, 13);
  sqcRYGate(q, -1.9318423430154077, 14);
  sqcRZGate(q, 2.259249145381985, 14);
  sqcRYGate(q, 0.9871677531034528, 15);
  sqcRZGate(q, -0.779304453925508, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.9257208985360811, 0);
  sqcRZGate(q, -1.0818704687846146, 0);
  sqcRYGate(q, -0.818835149641747, 1);
  sqcRZGate(q, 1.7189843299985075, 1);
  sqcRYGate(q, 2.790531253509503, 2);
  sqcRZGate(q, -1.3106033545415974, 2);
  sqcRYGate(q, 2.0221900200097114, 3);
  sqcRZGate(q, 1.5684227667764286, 3);
  sqcRYGate(q, -3.1414135827380156, 4);
  sqcRZGate(q, -2.9865697839508862, 4);
  sqcRYGate(q, -0.0006139167836742569, 5);
  sqcRZGate(q, -2.119649820018032, 5);
  sqcRYGate(q, -1.5752808318997582, 6);
  sqcRZGate(q, 3.1303167716311067, 6);
  sqcRYGate(q, -3.1043484755834623, 7);
  sqcRZGate(q, 2.5406863223568723, 7);
  sqcRYGate(q, 3.135132424727842, 8);
  sqcRZGate(q, -0.1853013327641845, 8);
  sqcRYGate(q, 3.134327271610691, 9);
  sqcRZGate(q, 2.925711275181375, 9);
  sqcRYGate(q, -3.1400683413681123, 10);
  sqcRZGate(q, -1.1746992764847315, 10);
  sqcRYGate(q, 0.0009280134974123138, 11);
  sqcRZGate(q, -3.111598674435758, 11);
  sqcRYGate(q, 3.1415926344244296, 12);
  sqcRZGate(q, 0.3522302712385538, 12);
  sqcRYGate(q, 0.0001489779976537875, 13);
  sqcRZGate(q, 1.9839812921396776, 13);
  sqcRYGate(q, 1.5740282898960452, 14);
  sqcRZGate(q, 1.5808615969898498, 14);
  sqcRYGate(q, -1.5677237225010385, 15);
  sqcRZGate(q, 1.179862204942559, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.1539742347240394, 0);
  sqcRZGate(q, 0.7253291531745537, 0);
  sqcRYGate(q, -3.1014119995607228, 1);
  sqcRZGate(q, -1.7812294119719885, 1);
  sqcRYGate(q, -0.033393672703465604, 2);
  sqcRZGate(q, 2.432408928335771, 2);
  sqcRYGate(q, 1.7093623436756242, 3);
  sqcRZGate(q, 0.49717821084147573, 3);
  sqcRYGate(q, 1.5428868393144084, 4);
  sqcRZGate(q, 2.1142992896743413, 4);
  sqcRYGate(q, 1.5424759857212083, 5);
  sqcRZGate(q, 2.1121331617595733, 5);
  sqcRYGate(q, 3.1020214258838115, 6);
  sqcRZGate(q, 0.5366514311451719, 6);
  sqcRYGate(q, -1.5767460357490135, 7);
  sqcRZGate(q, 2.1166541362943176, 7);
  sqcRYGate(q, 0.1031999833561888, 8);
  sqcRZGate(q, 0.5083776511552962, 8);
  sqcRYGate(q, -0.09847013176513914, 9);
  sqcRZGate(q, -2.5678053091620936, 9);
  sqcRYGate(q, -0.5695650761172839, 10);
  sqcRZGate(q, 1.853523970855856, 10);
  sqcRYGate(q, 0.3165689855943051, 11);
  sqcRZGate(q, 0.37477077488431854, 11);
  sqcRYGate(q, -1.581581591899742, 12);
  sqcRZGate(q, -0.9875822695111828, 12);
  sqcRYGate(q, 1.1522108383781715, 13);
  sqcRZGate(q, 0.4973567017303298, 13);
  sqcRYGate(q, -1.1855112841272422, 14);
  sqcRZGate(q, 0.5748230295992133, 14);
  sqcRYGate(q, 0.013705218931053375, 15);
  sqcRZGate(q, 0.967100822240889, 15);

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
