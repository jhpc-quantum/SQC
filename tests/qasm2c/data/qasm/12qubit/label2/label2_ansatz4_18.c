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

  sqcRYGate(q, 0.011084468053332408, 0);
  sqcRZGate(q, 2.2650188378907794, 0);
  sqcRYGate(q, -1.5491230541745293, 1);
  sqcRZGate(q, 1.558051195092544, 1);
  sqcRYGate(q, 1.588982593652715, 2);
  sqcRZGate(q, 2.7308163188365744, 2);
  sqcRYGate(q, -1.5954342079217003, 3);
  sqcRZGate(q, -2.6534875464480137, 3);
  sqcRYGate(q, -1.5367359535650722, 4);
  sqcRZGate(q, 0.06006741537467204, 4);
  sqcRYGate(q, 1.5022891685080644, 5);
  sqcRZGate(q, 2.665299885726495, 5);
  sqcRYGate(q, -1.3828975583874215, 6);
  sqcRZGate(q, -1.6234368748464787, 6);
  sqcRYGate(q, 1.7761981705399126, 7);
  sqcRZGate(q, 1.7103714635655853, 7);
  sqcRYGate(q, 3.1397655788077614, 8);
  sqcRZGate(q, 2.4378122122994266, 8);
  sqcRYGate(q, -0.0032020333919943874, 9);
  sqcRZGate(q, 0.819699107969677, 9);
  sqcRYGate(q, -0.5363622612294625, 10);
  sqcRZGate(q, 1.9755965472564654, 10);
  sqcRYGate(q, -1.1652954212335787, 11);
  sqcRZGate(q, 2.148534691087076, 11);
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
  sqcRYGate(q, -3.1207916379884346, 0);
  sqcRZGate(q, 2.3000799525674296, 0);
  sqcRYGate(q, -1.5018486385221133, 1);
  sqcRZGate(q, 0.5195286375436997, 1);
  sqcRYGate(q, -0.010810354310813786, 2);
  sqcRZGate(q, -1.0988270759583667, 2);
  sqcRYGate(q, -0.00939179978941808, 3);
  sqcRZGate(q, -2.031049997899101, 3);
  sqcRYGate(q, -3.1363656921536207, 4);
  sqcRZGate(q, 1.6579859301304216, 4);
  sqcRYGate(q, -0.004538143151703013, 5);
  sqcRZGate(q, 1.7867421161553991, 5);
  sqcRYGate(q, 1.4561368625121434, 6);
  sqcRZGate(q, -1.517159620096712, 6);
  sqcRYGate(q, -1.5903978306931439, 7);
  sqcRZGate(q, 1.6272506586954762, 7);
  sqcRYGate(q, 3.1346222148409435, 8);
  sqcRZGate(q, -1.3800549574930496, 8);
  sqcRYGate(q, 0.007438258778609639, 9);
  sqcRZGate(q, -1.0534247024880914, 9);
  sqcRYGate(q, -3.0811667216458254, 10);
  sqcRZGate(q, 1.2541726136252886, 10);
  sqcRYGate(q, 2.5782231378786817, 11);
  sqcRZGate(q, 0.46515199644089156, 11);
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
  sqcRYGate(q, -1.8152863809865294, 0);
  sqcRZGate(q, 2.582385889916866, 0);
  sqcRYGate(q, -1.727002737147588, 1);
  sqcRZGate(q, -1.6603382272167482, 1);
  sqcRYGate(q, -2.574875245988246, 2);
  sqcRZGate(q, 1.4817840205239947, 2);
  sqcRYGate(q, 2.1619043049748914, 3);
  sqcRZGate(q, -0.49611015130947855, 3);
  sqcRYGate(q, -0.28230419681947727, 4);
  sqcRZGate(q, -1.9032056809796878, 4);
  sqcRYGate(q, -2.910559622104841, 5);
  sqcRZGate(q, 0.8503480579822154, 5);
  sqcRYGate(q, 1.4028060049479762, 6);
  sqcRZGate(q, 3.0658551336310347, 6);
  sqcRYGate(q, -1.711477179905254, 7);
  sqcRZGate(q, 0.4462959782706193, 7);
  sqcRYGate(q, 3.139829720348656, 8);
  sqcRZGate(q, 2.370563807677087, 8);
  sqcRYGate(q, 3.1380411880111914, 9);
  sqcRZGate(q, 2.634435196466935, 9);
  sqcRYGate(q, -1.1028807783085068, 10);
  sqcRZGate(q, 0.9076855810342845, 10);
  sqcRYGate(q, -2.777387047260915, 11);
  sqcRZGate(q, -2.4152509871604764, 11);
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
  sqcRYGate(q, -2.343611236559294, 0);
  sqcRZGate(q, 0.4268016634875659, 0);
  sqcRYGate(q, 1.2318023219454577, 1);
  sqcRZGate(q, -2.376159245855197, 1);
  sqcRYGate(q, 3.13989464341594, 2);
  sqcRZGate(q, -0.07441092747038322, 2);
  sqcRYGate(q, -3.139721697320268, 3);
  sqcRZGate(q, -2.1433234678821194, 3);
  sqcRYGate(q, -3.1244121241149845, 4);
  sqcRZGate(q, 2.880747211645715, 4);
  sqcRYGate(q, 3.1200684670182146, 5);
  sqcRZGate(q, 2.6236267424018793, 5);
  sqcRYGate(q, 0.7381294767543967, 6);
  sqcRZGate(q, 1.5049668557022995, 6);
  sqcRYGate(q, 2.773421178051764, 7);
  sqcRZGate(q, -3.001954734032116, 7);
  sqcRYGate(q, 1.521777416977339, 8);
  sqcRZGate(q, 1.1939701786036496, 8);
  sqcRYGate(q, 1.4950642341405525, 9);
  sqcRZGate(q, 0.8497763862420815, 9);
  sqcRYGate(q, 2.6403123007098293, 10);
  sqcRZGate(q, 1.8851969051010804, 10);
  sqcRYGate(q, 2.36888255182729, 11);
  sqcRZGate(q, -2.402597900366553, 11);
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
  sqcRYGate(q, 0.021536022536961987, 0);
  sqcRZGate(q, -1.4234151881413637, 0);
  sqcRYGate(q, -0.7810919349554231, 1);
  sqcRZGate(q, 2.9322147557275176, 1);
  sqcRYGate(q, -1.7972474662426299, 2);
  sqcRZGate(q, 1.5135514818964362, 2);
  sqcRYGate(q, -1.321502739680576, 3);
  sqcRZGate(q, 1.4531076592164611, 3);
  sqcRYGate(q, -1.5787745576822594, 4);
  sqcRZGate(q, -0.5668009461142631, 4);
  sqcRYGate(q, -1.4939287735140896, 5);
  sqcRZGate(q, 2.688022359117874, 5);
  sqcRYGate(q, 0.0009595917073964064, 6);
  sqcRZGate(q, -2.9321923808309447, 6);
  sqcRYGate(q, -3.14041580894895, 7);
  sqcRZGate(q, -2.461294013646088, 7);
  sqcRYGate(q, -0.00480098611504166, 8);
  sqcRZGate(q, 0.3225153889094941, 8);
  sqcRYGate(q, -0.0008380626590468999, 9);
  sqcRZGate(q, 0.7919841539433765, 9);
  sqcRYGate(q, 2.3002269105914785, 10);
  sqcRZGate(q, -2.367579318046663, 10);
  sqcRYGate(q, -0.716843606936469, 11);
  sqcRZGate(q, 2.37901078704639, 11);
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
  sqcRYGate(q, 0.9606928684565346, 0);
  sqcRZGate(q, -1.5161029837335198, 0);
  sqcRYGate(q, 1.108375328649075, 1);
  sqcRZGate(q, 1.2007365566401509, 1);
  sqcRYGate(q, -1.6502761185137338, 2);
  sqcRZGate(q, -3.0601822874802087, 2);
  sqcRYGate(q, -1.4168403711437045, 3);
  sqcRZGate(q, 1.2387077986157071, 3);
  sqcRYGate(q, 1.5004192195689265, 4);
  sqcRZGate(q, -0.5989502457345821, 4);
  sqcRYGate(q, 1.7601465221611368, 5);
  sqcRZGate(q, 3.0022799786281875, 5);
  sqcRYGate(q, 3.017138689273358, 6);
  sqcRZGate(q, -0.7591399271110728, 6);
  sqcRYGate(q, -2.993318030280395, 7);
  sqcRZGate(q, -1.2780375265965378, 7);
  sqcRYGate(q, -0.315797102910175, 8);
  sqcRZGate(q, -2.9115819291897846, 8);
  sqcRYGate(q, 1.9387797021216837, 9);
  sqcRZGate(q, -0.15951508681546234, 9);
  sqcRYGate(q, -1.260342006505778, 10);
  sqcRZGate(q, -2.052319887885832, 10);
  sqcRYGate(q, 1.093567447794376, 11);
  sqcRZGate(q, -0.6017902320544579, 11);
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
  sqcRYGate(q, -2.572933866211997, 0);
  sqcRZGate(q, 2.302333947067018, 0);
  sqcRYGate(q, 2.3650604129385173, 1);
  sqcRZGate(q, 1.9652776642273775, 1);
  sqcRYGate(q, -0.005199741594648976, 2);
  sqcRZGate(q, 1.0894629211937856, 2);
  sqcRYGate(q, 3.1392774547940094, 3);
  sqcRZGate(q, -0.7999527413635041, 3);
  sqcRYGate(q, -0.07581629555799053, 4);
  sqcRZGate(q, 1.1164315362333006, 4);
  sqcRYGate(q, -3.0414849494545173, 5);
  sqcRZGate(q, -0.8016546541546354, 5);
  sqcRYGate(q, 3.1415779295295208, 6);
  sqcRZGate(q, 0.7217703468240995, 6);
  sqcRYGate(q, -0.0022731378212409482, 7);
  sqcRZGate(q, 2.256518745780406, 7);
  sqcRYGate(q, 2.536325203581038, 8);
  sqcRZGate(q, -1.7818624960407408, 8);
  sqcRYGate(q, 0.6079156130435432, 9);
  sqcRZGate(q, 1.3820648306064678, 9);
  sqcRYGate(q, -2.7142693078837334, 10);
  sqcRZGate(q, -3.05487784500372, 10);
  sqcRYGate(q, 2.5354101451177526, 11);
  sqcRZGate(q, 2.356567800055461, 11);
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
  sqcRYGate(q, -1.8563404224418776, 0);
  sqcRZGate(q, 1.5558721134486717, 0);
  sqcRYGate(q, 2.2574399571393955, 1);
  sqcRZGate(q, -0.7916908633867111, 1);
  sqcRYGate(q, -0.8171079035309013, 2);
  sqcRZGate(q, 2.8410248918014287, 2);
  sqcRYGate(q, 2.378229083217811, 3);
  sqcRZGate(q, 0.4424467021062206, 3);
  sqcRYGate(q, 3.1127634239520274, 4);
  sqcRZGate(q, -1.8925639979515998, 4);
  sqcRYGate(q, -2.9217694012562063, 5);
  sqcRZGate(q, 1.8441765094149067, 5);
  sqcRYGate(q, 1.2495860643512906, 6);
  sqcRZGate(q, 0.0405927665391026, 6);
  sqcRYGate(q, 1.2449024397364488, 7);
  sqcRZGate(q, 0.4264773352874567, 7);
  sqcRYGate(q, 1.1314947088192047, 8);
  sqcRZGate(q, 2.0560511382930584, 8);
  sqcRYGate(q, -2.0965974150421025, 9);
  sqcRZGate(q, -2.5820112352219096, 9);
  sqcRYGate(q, -0.47366924965507085, 10);
  sqcRZGate(q, -1.8847632359635016, 10);
  sqcRYGate(q, 1.1193198642073883, 11);
  sqcRZGate(q, -2.9576365079982927, 11);
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
  sqcRYGate(q, 0.01058631559921519, 0);
  sqcRZGate(q, -0.782143581915821, 0);
  sqcRYGate(q, 1.2789519468603405, 1);
  sqcRZGate(q, 1.2307154299164136, 1);
  sqcRYGate(q, 3.119277948343726, 2);
  sqcRZGate(q, 0.2549905117025657, 2);
  sqcRYGate(q, 3.1149454707206687, 3);
  sqcRZGate(q, -0.03834871524741461, 3);
  sqcRYGate(q, 2.830426916371665, 4);
  sqcRZGate(q, -0.9800444814800578, 4);
  sqcRYGate(q, -3.0211650071141487, 5);
  sqcRZGate(q, -1.7448203097891741, 5);
  sqcRYGate(q, -1.1552281890291618, 6);
  sqcRZGate(q, -2.828867802161911, 6);
  sqcRYGate(q, 0.19569994088875206, 7);
  sqcRZGate(q, 1.722197297769779, 7);
  sqcRYGate(q, -0.5507324074094393, 8);
  sqcRZGate(q, -0.6080023136593818, 8);
  sqcRYGate(q, -2.364625358259392, 9);
  sqcRZGate(q, 1.6455179757304412, 9);
  sqcRYGate(q, -1.1055932665413142, 10);
  sqcRZGate(q, -3.0037188068397387, 10);
  sqcRYGate(q, 1.7181818599991454, 11);
  sqcRZGate(q, 2.5048930235590414, 11);
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
  sqcRYGate(q, 1.680989724785743, 0);
  sqcRZGate(q, 2.3412089424216376, 0);
  sqcRYGate(q, 0.36010851288955154, 1);
  sqcRZGate(q, 1.260114487951581, 1);
  sqcRYGate(q, -1.9032991655527556, 2);
  sqcRZGate(q, 2.8341965450927913, 2);
  sqcRYGate(q, -1.2761434344085947, 3);
  sqcRZGate(q, 1.7421725629434965, 3);
  sqcRYGate(q, 3.061573694313081, 4);
  sqcRZGate(q, -3.1407028940608352, 4);
  sqcRYGate(q, -3.0702030200775883, 5);
  sqcRZGate(q, -1.9992025842833936, 5);
  sqcRYGate(q, 3.141154548717239, 6);
  sqcRZGate(q, -2.6747387077227214, 6);
  sqcRYGate(q, -0.0023529200161425123, 7);
  sqcRZGate(q, -2.1933806717255653, 7);
  sqcRYGate(q, 0.0022973721485714522, 8);
  sqcRZGate(q, -2.0333068905450142, 8);
  sqcRYGate(q, -3.1368194630225568, 9);
  sqcRZGate(q, 0.42672080701169257, 9);
  sqcRYGate(q, -0.42526320175557464, 10);
  sqcRZGate(q, -1.948929286817241, 10);
  sqcRYGate(q, 2.583352119153446, 11);
  sqcRZGate(q, -0.44805908730354366, 11);
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
  sqcRYGate(q, -2.9245455896947568, 0);
  sqcRZGate(q, 0.3845569910387799, 0);
  sqcRYGate(q, -2.90058373368783, 1);
  sqcRZGate(q, 1.1109371531993435, 1);
  sqcRYGate(q, 3.132990570627232, 2);
  sqcRZGate(q, 0.22910779900996747, 2);
  sqcRYGate(q, 3.137195626035018, 3);
  sqcRZGate(q, 0.6444860545101948, 3);
  sqcRYGate(q, 0.9717138146791927, 4);
  sqcRZGate(q, -2.4711113974043006, 4);
  sqcRYGate(q, 1.5683223696336606, 5);
  sqcRZGate(q, -2.122585919854548, 5);
  sqcRYGate(q, 0.4084915655676644, 6);
  sqcRZGate(q, -2.0894966312169885, 6);
  sqcRYGate(q, 1.3225384985939765, 7);
  sqcRZGate(q, -1.2451732888729596, 7);
  sqcRYGate(q, 0.02769270029846016, 8);
  sqcRZGate(q, -0.9211252106338392, 8);
  sqcRYGate(q, 0.0647698133358272, 9);
  sqcRZGate(q, 1.9974913635075593, 9);
  sqcRYGate(q, 2.9219322839958703, 10);
  sqcRZGate(q, -2.3171874499016867, 10);
  sqcRYGate(q, 3.0676203566006386, 11);
  sqcRZGate(q, -0.8006757637399188, 11);
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
  sqcRYGate(q, -2.3078836243239023, 0);
  sqcRZGate(q, -1.9903918803838163, 0);
  sqcRYGate(q, 1.0384829646773301, 1);
  sqcRZGate(q, -3.049000316067197, 1);
  sqcRYGate(q, -2.376166710512167, 2);
  sqcRZGate(q, 3.0405033070536667, 2);
  sqcRYGate(q, 1.82786792886181, 3);
  sqcRZGate(q, -2.360974479531083, 3);
  sqcRYGate(q, 0.6412974882467477, 4);
  sqcRZGate(q, 1.7268903292582654, 4);
  sqcRYGate(q, -2.2895233603574, 5);
  sqcRZGate(q, -0.05622251931410058, 5);
  sqcRYGate(q, -3.123598837453228, 6);
  sqcRZGate(q, -0.8407649474337723, 6);
  sqcRYGate(q, -3.1261325673255675, 7);
  sqcRZGate(q, -2.0501095674491747, 7);
  sqcRYGate(q, 1.1557375367770306, 8);
  sqcRZGate(q, 2.110154531207268, 8);
  sqcRYGate(q, 1.1923933184855597, 9);
  sqcRZGate(q, 0.35652194320406844, 9);
  sqcRYGate(q, 2.77642030323111, 10);
  sqcRZGate(q, -1.1790463390347883, 10);
  sqcRYGate(q, -0.3836013770633037, 11);
  sqcRZGate(q, 0.6886545285779071, 11);
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
  sqcRYGate(q, 0.07499351099701546, 0);
  sqcRZGate(q, 2.3573218376170453, 0);
  sqcRYGate(q, -0.07951693816352545, 1);
  sqcRZGate(q, -1.04620376686227, 1);
  sqcRYGate(q, -1.6686700635339902, 2);
  sqcRZGate(q, -0.6301655211934761, 2);
  sqcRYGate(q, -1.4831614908791027, 3);
  sqcRZGate(q, -0.5600691663188585, 3);
  sqcRYGate(q, 0.02997591394027553, 4);
  sqcRZGate(q, -1.9565014479631655, 4);
  sqcRYGate(q, -0.0029628529313618828, 5);
  sqcRZGate(q, 1.2468233639213009, 5);
  sqcRYGate(q, -3.139215479629918, 6);
  sqcRZGate(q, -2.7021540079752984, 6);
  sqcRYGate(q, -3.0044632816927535, 7);
  sqcRZGate(q, -2.8867757172627293, 7);
  sqcRYGate(q, -2.8343206715654468, 8);
  sqcRZGate(q, -1.3221523825242896, 8);
  sqcRYGate(q, -2.721281488669479, 9);
  sqcRZGate(q, -2.4172211527151144, 9);
  sqcRYGate(q, -0.8051359185919151, 10);
  sqcRZGate(q, 1.7904285840281267, 10);
  sqcRYGate(q, -0.9760447407807584, 11);
  sqcRZGate(q, -3.049875543791254, 11);
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
  sqcRYGate(q, 0.18042942223445646, 0);
  sqcRZGate(q, -0.835702967031593, 0);
  sqcRYGate(q, -1.3886788533884846, 1);
  sqcRZGate(q, 1.6702393085400589, 1);
  sqcRYGate(q, -2.1653162503798455, 2);
  sqcRZGate(q, -1.9842117607763772, 2);
  sqcRYGate(q, -2.233916942738884, 3);
  sqcRZGate(q, 2.7585836603734717, 3);
  sqcRYGate(q, -0.11623482280786224, 4);
  sqcRZGate(q, 0.5025543421728366, 4);
  sqcRYGate(q, 3.1279939010961657, 5);
  sqcRZGate(q, 0.4718197814480175, 5);
  sqcRYGate(q, -0.03462863343075284, 6);
  sqcRZGate(q, 2.852413014662362, 6);
  sqcRYGate(q, -0.01607801310570066, 7);
  sqcRZGate(q, 0.3746982380482952, 7);
  sqcRYGate(q, -2.333928116204007, 8);
  sqcRZGate(q, -2.3336426819480978, 8);
  sqcRYGate(q, -2.2974656596610687, 9);
  sqcRZGate(q, 2.997853278518018, 9);
  sqcRYGate(q, 2.7563120812545345, 10);
  sqcRZGate(q, -0.5786516895411541, 10);
  sqcRYGate(q, -0.037878964241748754, 11);
  sqcRZGate(q, -1.2549396287259156, 11);
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
  sqcRYGate(q, -3.1321179954762846, 0);
  sqcRZGate(q, -2.2417357147344017, 0);
  sqcRYGate(q, -0.4606896957463232, 1);
  sqcRZGate(q, -0.4980702248638487, 1);
  sqcRYGate(q, 3.135007284395461, 2);
  sqcRZGate(q, -2.4353077239287857, 2);
  sqcRYGate(q, -0.005797170123327019, 3);
  sqcRZGate(q, 1.249995601210508, 3);
  sqcRYGate(q, -1.5627999767427623, 4);
  sqcRZGate(q, 1.0135554543744485, 4);
  sqcRYGate(q, -1.248991558346309, 5);
  sqcRZGate(q, 1.3760598582312484, 5);
  sqcRYGate(q, 3.017193939592182, 6);
  sqcRZGate(q, 1.2169256949566503, 6);
  sqcRYGate(q, -0.004527993109747072, 7);
  sqcRZGate(q, -1.4351072231446267, 7);
  sqcRYGate(q, -2.4489321689764783, 8);
  sqcRZGate(q, -1.6653079138283173, 8);
  sqcRYGate(q, 2.5607246802323647, 9);
  sqcRZGate(q, -0.15250669507390402, 9);
  sqcRYGate(q, 0.22493809319197133, 10);
  sqcRZGate(q, -2.504014083550185, 10);
  sqcRYGate(q, 2.8899121139020076, 11);
  sqcRZGate(q, -0.9134260729104078, 11);
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
  sqcRYGate(q, 1.2841733945819422, 0);
  sqcRZGate(q, 1.650193746941567, 0);
  sqcRYGate(q, -2.1072030347017066, 1);
  sqcRZGate(q, 3.0427037265613532, 1);
  sqcRYGate(q, -0.29886031922011563, 2);
  sqcRZGate(q, -1.6235829192378903, 2);
  sqcRYGate(q, 0.3113015490741918, 3);
  sqcRZGate(q, 2.3908776162332503, 3);
  sqcRYGate(q, 1.5959483654472018, 4);
  sqcRZGate(q, -0.4711867563193009, 4);
  sqcRYGate(q, -0.40447002744103927, 5);
  sqcRZGate(q, -1.430986746846048, 5);
  sqcRYGate(q, -3.1361277913657806, 6);
  sqcRZGate(q, -1.2578714572044283, 6);
  sqcRYGate(q, -3.138499043938593, 7);
  sqcRZGate(q, -1.780323129701063, 7);
  sqcRYGate(q, -2.8244175271446155, 8);
  sqcRZGate(q, 1.3664672658950576, 8);
  sqcRYGate(q, 2.837626941179093, 9);
  sqcRZGate(q, -1.8341478181277822, 9);
  sqcRYGate(q, 1.8286979673234056, 10);
  sqcRZGate(q, -0.9264230514614377, 10);
  sqcRYGate(q, -3.122058938298877, 11);
  sqcRZGate(q, -1.494236027794769, 11);
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
  sqcRYGate(q, -3.0426399544099034, 0);
  sqcRZGate(q, -2.9147064623282817, 0);
  sqcRYGate(q, 0.18175684089218258, 1);
  sqcRZGate(q, 0.735291381989973, 1);
  sqcRYGate(q, 3.139977764346981, 2);
  sqcRZGate(q, 2.7796964239794644, 2);
  sqcRYGate(q, -3.141209538003041, 3);
  sqcRZGate(q, -1.9175847206386583, 3);
  sqcRYGate(q, 2.527367891276306, 4);
  sqcRZGate(q, 0.5040749826597253, 4);
  sqcRYGate(q, -2.7757368538499447, 5);
  sqcRZGate(q, 0.689000812882191, 5);
  sqcRYGate(q, -0.0051472512070406306, 6);
  sqcRZGate(q, -2.649087704793477, 6);
  sqcRYGate(q, 0.008696800344359486, 7);
  sqcRZGate(q, -1.332806761822176, 7);
  sqcRYGate(q, -0.06727180507297346, 8);
  sqcRZGate(q, 1.4293799854213158, 8);
  sqcRYGate(q, -2.968036775417086, 9);
  sqcRZGate(q, -3.0773509825769567, 9);
  sqcRYGate(q, 2.083874428161881, 10);
  sqcRZGate(q, 2.604677983951981, 10);
  sqcRYGate(q, 0.15366051059387742, 11);
  sqcRZGate(q, -2.977014339358567, 11);
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
  sqcRYGate(q, 0.4553294758013031, 0);
  sqcRZGate(q, 2.5444473441530793, 0);
  sqcRYGate(q, -1.1898410649605138, 1);
  sqcRZGate(q, -3.1051999448961247, 1);
  sqcRYGate(q, -0.7693229592987354, 2);
  sqcRZGate(q, -2.148673796927823, 2);
  sqcRYGate(q, -0.6491935095520601, 3);
  sqcRZGate(q, -2.2251485811115037, 3);
  sqcRYGate(q, 2.928067677005275, 4);
  sqcRZGate(q, -1.705186029229634, 4);
  sqcRYGate(q, -0.9136168314669783, 5);
  sqcRZGate(q, 3.1153452930090095, 5);
  sqcRYGate(q, 1.8417744448067386, 6);
  sqcRZGate(q, -2.8294716508100444, 6);
  sqcRYGate(q, -2.7281554317572914, 7);
  sqcRZGate(q, 0.7741081204082839, 7);
  sqcRYGate(q, 0.30776806690503816, 8);
  sqcRZGate(q, 0.9914839036256925, 8);
  sqcRYGate(q, 2.8817246260344094, 9);
  sqcRZGate(q, -2.0095015863335766, 9);
  sqcRYGate(q, -0.43433314897571407, 10);
  sqcRZGate(q, -1.8632363361188293, 10);
  sqcRYGate(q, -2.6330590811237817, 11);
  sqcRZGate(q, -1.1270526615934064, 11);
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
  sqcRYGate(q, 1.9737105263970802, 0);
  sqcRZGate(q, -2.2197484796574507, 0);
  sqcRYGate(q, 1.2226685608602366, 1);
  sqcRZGate(q, 2.4043366052919963, 1);
  sqcRYGate(q, 3.1197201774458643, 2);
  sqcRZGate(q, 2.5242350677960275, 2);
  sqcRYGate(q, 3.115533506006901, 3);
  sqcRZGate(q, -2.08530564076099, 3);
  sqcRYGate(q, -0.006776397184097453, 4);
  sqcRZGate(q, -1.8316881949230153, 4);
  sqcRYGate(q, 0.007255871437063632, 5);
  sqcRZGate(q, -1.4732512061586984, 5);
  sqcRYGate(q, -0.0037207760103514786, 6);
  sqcRZGate(q, -3.12609161401273, 6);
  sqcRYGate(q, -7.826275897571122e-06, 7);
  sqcRZGate(q, 2.9087949042429964, 7);
  sqcRYGate(q, 1.5241555529801272, 8);
  sqcRZGate(q, 2.0940192272832605, 8);
  sqcRYGate(q, -1.3426325884198103, 9);
  sqcRZGate(q, -2.11595246974663, 9);
  sqcRYGate(q, 1.765469783632521, 10);
  sqcRZGate(q, 1.8657324536002735, 10);
  sqcRYGate(q, 2.3280086695138347, 11);
  sqcRZGate(q, -1.6879299774588388, 11);
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
  sqcRYGate(q, 0.3043852550430419, 0);
  sqcRZGate(q, -2.6385519380419233, 0);
  sqcRYGate(q, 0.6628249693124069, 1);
  sqcRZGate(q, -0.8418794015252606, 1);
  sqcRYGate(q, 3.0632212418726654, 2);
  sqcRZGate(q, 1.1941575588580262, 2);
  sqcRYGate(q, -1.528422958775115, 3);
  sqcRZGate(q, -2.223115568349412, 3);
  sqcRYGate(q, 0.5148296206330532, 4);
  sqcRZGate(q, 1.5626777807115282, 4);
  sqcRYGate(q, 1.0518982032324056, 5);
  sqcRZGate(q, 2.80913750686398, 5);
  sqcRYGate(q, 3.138805605113062, 6);
  sqcRZGate(q, -2.732641857270161, 6);
  sqcRYGate(q, 3.079706849018974, 7);
  sqcRZGate(q, 1.3712735095077415, 7);
  sqcRYGate(q, 3.1391497819386243, 8);
  sqcRZGate(q, -0.8224641556071317, 8);
  sqcRYGate(q, -3.139761095918163, 9);
  sqcRZGate(q, -1.9265922532235322, 9);
  sqcRYGate(q, 0.7203241177866418, 10);
  sqcRZGate(q, 2.5912915291924694, 10);
  sqcRYGate(q, 0.8408287329695304, 11);
  sqcRZGate(q, -1.5376566399966887, 11);
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
  sqcRYGate(q, -1.5572378502333493, 0);
  sqcRZGate(q, -0.6619367726370723, 0);
  sqcRYGate(q, 1.5576688167691348, 1);
  sqcRZGate(q, 1.436746218798505, 1);
  sqcRYGate(q, 0.010259512991517882, 2);
  sqcRZGate(q, 2.4191696324994663, 2);
  sqcRYGate(q, 3.135191045900353, 3);
  sqcRZGate(q, 0.9072497031701748, 3);
  sqcRYGate(q, -0.00041884558290638667, 4);
  sqcRZGate(q, 2.8741577703184027, 4);
  sqcRYGate(q, -3.141401030227334, 5);
  sqcRZGate(q, -1.4879851886554032, 5);
  sqcRYGate(q, -3.1388549641752346, 6);
  sqcRZGate(q, -0.2693721732572847, 6);
  sqcRYGate(q, 0.0016659268889955795, 7);
  sqcRZGate(q, -2.725793041126392, 7);
  sqcRYGate(q, -1.5746461789385167, 8);
  sqcRZGate(q, 1.1782051750309046, 8);
  sqcRYGate(q, 1.66402939839214, 9);
  sqcRZGate(q, 2.178239795173322, 9);
  sqcRYGate(q, 0.008617967131414163, 10);
  sqcRZGate(q, -1.9933343368709662, 10);
  sqcRYGate(q, 1.6650054543056294, 11);
  sqcRZGate(q, 1.1423145754248303, 11);
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
  sqcRYGate(q, 3.063524961903875, 0);
  sqcRZGate(q, 2.693059023877816, 0);
  sqcRYGate(q, -2.6180999717658264, 1);
  sqcRZGate(q, 1.6648303439081897, 1);
  sqcRYGate(q, 0.4866036878953534, 2);
  sqcRZGate(q, -1.3750536654943026, 2);
  sqcRYGate(q, 1.4663041349252366, 3);
  sqcRZGate(q, -2.9014105060119046, 3);
  sqcRYGate(q, -1.7744126676954668, 4);
  sqcRZGate(q, 2.288658810064468, 4);
  sqcRYGate(q, 1.221317023242527, 5);
  sqcRZGate(q, 2.2071672289539146, 5);
  sqcRYGate(q, 0.7256822159443541, 6);
  sqcRZGate(q, 2.6904278731253553, 6);
  sqcRYGate(q, 2.1596086135651658, 7);
  sqcRZGate(q, 2.7127547081762655, 7);
  sqcRYGate(q, -0.3727140073410613, 8);
  sqcRZGate(q, -0.32391212757977655, 8);
  sqcRYGate(q, 0.35529035771520423, 9);
  sqcRZGate(q, 2.654002691049395, 9);
  sqcRYGate(q, -0.712857314300245, 10);
  sqcRZGate(q, -0.6732587977684937, 10);
  sqcRYGate(q, 1.1558662838463123, 11);
  sqcRZGate(q, -0.03326273427378279, 11);

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
