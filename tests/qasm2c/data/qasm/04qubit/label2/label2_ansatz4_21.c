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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -2.48682223181433, 0);
  sqcRZGate(q, -0.8136571456838597, 0);
  sqcRYGate(q, -1.2821875944546763, 1);
  sqcRZGate(q, 0.04673946401291011, 1);
  sqcRYGate(q, 1.5918394908989466, 2);
  sqcRZGate(q, -0.3517255844803815, 2);
  sqcRYGate(q, -3.0510435096528665, 3);
  sqcRZGate(q, -2.1148173550204605, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.664758085553457, 0);
  sqcRZGate(q, 1.7174435084477375, 0);
  sqcRYGate(q, -1.360412162147684, 1);
  sqcRZGate(q, -1.4529158627233292, 1);
  sqcRYGate(q, -2.2251256359746927, 2);
  sqcRZGate(q, -0.4428705343360395, 2);
  sqcRYGate(q, -3.004982670804488, 3);
  sqcRZGate(q, -0.5002425690854242, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.4996471193864505, 0);
  sqcRZGate(q, -3.0162422743842687, 0);
  sqcRYGate(q, -2.817892464331663, 1);
  sqcRZGate(q, -1.6419489064448856, 1);
  sqcRYGate(q, -0.9661261223818398, 2);
  sqcRZGate(q, 0.20952261490121502, 2);
  sqcRYGate(q, 2.4120466848314153, 3);
  sqcRZGate(q, -1.2087233307800955, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.914214835332893, 0);
  sqcRZGate(q, -2.611962910948075, 0);
  sqcRYGate(q, 1.6613303979190037, 1);
  sqcRZGate(q, -1.8318957786185779, 1);
  sqcRYGate(q, -1.7906772106746514, 2);
  sqcRZGate(q, -0.45757263132925896, 2);
  sqcRYGate(q, 2.6553539747253314, 3);
  sqcRZGate(q, -2.621813753981621, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.014218610914047, 0);
  sqcRZGate(q, -1.4128139590759716, 0);
  sqcRYGate(q, -0.6898629112384463, 1);
  sqcRZGate(q, 0.8522240552260473, 1);
  sqcRYGate(q, 0.8020821373073068, 2);
  sqcRZGate(q, -2.6619514473454022, 2);
  sqcRYGate(q, 2.1001524344002798, 3);
  sqcRZGate(q, -2.519407776487644, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.495817697561065, 0);
  sqcRZGate(q, -0.6068830063236583, 0);
  sqcRYGate(q, 2.1191328704179275, 1);
  sqcRZGate(q, -0.2125205971312625, 1);
  sqcRYGate(q, -1.1238725899124562, 2);
  sqcRZGate(q, -2.9028142819721423, 2);
  sqcRYGate(q, -2.7027787666824774, 3);
  sqcRZGate(q, 2.0243190275449523, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.161621913921601, 0);
  sqcRZGate(q, -0.14417224658061048, 0);
  sqcRYGate(q, 1.1157008458117448, 1);
  sqcRZGate(q, -0.3231525681364875, 1);
  sqcRYGate(q, -1.3622352760764525, 2);
  sqcRZGate(q, -2.016231639431233, 2);
  sqcRYGate(q, 3.01140531869985, 3);
  sqcRZGate(q, 0.5501095285326238, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.12507159424012093, 0);
  sqcRZGate(q, 1.707056946097989, 0);
  sqcRYGate(q, 0.2698297270154164, 1);
  sqcRZGate(q, 1.7636015151383508, 1);
  sqcRYGate(q, 0.6059788024919481, 2);
  sqcRZGate(q, -1.4522225205584838, 2);
  sqcRYGate(q, -0.8788467255495807, 3);
  sqcRZGate(q, 2.8340181733279564, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7042561784452729, 0);
  sqcRZGate(q, 0.46308228777174243, 0);
  sqcRYGate(q, -0.6043856336785559, 1);
  sqcRZGate(q, 0.39829905571104174, 1);
  sqcRYGate(q, 1.4666601226050422, 2);
  sqcRZGate(q, -2.3779195278233844, 2);
  sqcRYGate(q, 0.11377091623150459, 3);
  sqcRZGate(q, 0.755080410275517, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.167052822185282, 0);
  sqcRZGate(q, 1.8274320602265117, 0);
  sqcRYGate(q, 0.680538649953272, 1);
  sqcRZGate(q, -1.7439760201817227, 1);
  sqcRYGate(q, 3.1133124476624743, 2);
  sqcRZGate(q, 0.7497081042939477, 2);
  sqcRYGate(q, -0.6427372874065672, 3);
  sqcRZGate(q, 2.75051192919318, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9390268746030284, 0);
  sqcRZGate(q, -2.0217976900805485, 0);
  sqcRYGate(q, -0.7798839721272159, 1);
  sqcRZGate(q, 2.0062519971226314, 1);
  sqcRYGate(q, 2.9204442841810874, 2);
  sqcRZGate(q, 0.01718222769408761, 2);
  sqcRYGate(q, 1.9149416998026672, 3);
  sqcRZGate(q, -2.9178738933008295, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4898313351680912, 0);
  sqcRZGate(q, -1.1190708841528876, 0);
  sqcRYGate(q, -1.7392953636905508, 1);
  sqcRZGate(q, -0.10567003997277342, 1);
  sqcRYGate(q, -3.093659552910203, 2);
  sqcRZGate(q, -1.5272784285736236, 2);
  sqcRYGate(q, -0.745541055453109, 3);
  sqcRZGate(q, -1.4665077228265524, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.1335193096959277, 0);
  sqcRZGate(q, -2.5969061937713875, 0);
  sqcRYGate(q, -2.1664444956581397, 1);
  sqcRZGate(q, -0.9652181795880688, 1);
  sqcRYGate(q, 2.5275190314557654, 2);
  sqcRZGate(q, 1.8319513901249422, 2);
  sqcRYGate(q, -1.0268197084639983, 3);
  sqcRZGate(q, -0.9101481415476284, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.867210889753192, 0);
  sqcRZGate(q, 2.4134872092577195, 0);
  sqcRYGate(q, 2.410671442048803, 1);
  sqcRZGate(q, -0.26801155638793095, 1);
  sqcRYGate(q, -1.7750346783372326, 2);
  sqcRZGate(q, -0.7531817974017572, 2);
  sqcRYGate(q, 1.4923604352778983, 3);
  sqcRZGate(q, 0.04697826871182181, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5849348443536062, 0);
  sqcRZGate(q, 2.342132442641146, 0);
  sqcRYGate(q, 2.3245598989940977, 1);
  sqcRZGate(q, 2.6533050930074795, 1);
  sqcRYGate(q, 1.3574468417053875, 2);
  sqcRZGate(q, 2.14146061435164, 2);
  sqcRYGate(q, 1.5238521970933, 3);
  sqcRZGate(q, -1.3326813575586183, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0030518456499493, 0);
  sqcRZGate(q, -3.0676035965764625, 0);
  sqcRYGate(q, 1.4867290616855229, 1);
  sqcRZGate(q, -1.2694821717753535, 1);
  sqcRYGate(q, 3.0618027748485495, 2);
  sqcRZGate(q, 1.83651937417166, 2);
  sqcRYGate(q, -1.1554143332970699, 3);
  sqcRZGate(q, -2.6763651756647437, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6752466798613295, 0);
  sqcRZGate(q, -1.4613947326440488, 0);
  sqcRYGate(q, -1.2071797066878576, 1);
  sqcRZGate(q, -0.8947595123307953, 1);
  sqcRYGate(q, 0.773451222792195, 2);
  sqcRZGate(q, 0.8575471991901794, 2);
  sqcRYGate(q, 2.9546011149684004, 3);
  sqcRZGate(q, 0.5648076054531538, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.000820893998565, 0);
  sqcRZGate(q, 1.7027380707052036, 0);
  sqcRYGate(q, 3.03096302477654, 1);
  sqcRZGate(q, 1.0390341513988082, 1);
  sqcRYGate(q, 1.4563971105968863, 2);
  sqcRZGate(q, 0.6589018139780071, 2);
  sqcRYGate(q, -2.683991086814852, 3);
  sqcRZGate(q, 2.4361452445616867, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5969699931258567, 0);
  sqcRZGate(q, -2.1531426553905346, 0);
  sqcRYGate(q, -0.05230351780136023, 1);
  sqcRZGate(q, -2.871737283341883, 1);
  sqcRYGate(q, -2.1789151242465747, 2);
  sqcRZGate(q, 2.9011636938319603, 2);
  sqcRYGate(q, -1.0580616294424694, 3);
  sqcRZGate(q, -0.9605322724293921, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.6793086818027643, 0);
  sqcRZGate(q, -2.4268333863560585, 0);
  sqcRYGate(q, 2.5625592095875103, 1);
  sqcRZGate(q, -0.5809285425952031, 1);
  sqcRYGate(q, -0.9668686897825296, 2);
  sqcRZGate(q, 0.2604742071874676, 2);
  sqcRYGate(q, 2.454196715666999, 3);
  sqcRZGate(q, 0.22808994836957905, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.39229677092460463, 0);
  sqcRZGate(q, 2.76952518738779, 0);
  sqcRYGate(q, 0.5010987482489861, 1);
  sqcRZGate(q, -0.2526773325912423, 1);
  sqcRYGate(q, 2.87764950020439, 2);
  sqcRZGate(q, 1.8964960320935547, 2);
  sqcRYGate(q, -2.116497442043914, 3);
  sqcRZGate(q, 1.3526714438211334, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.2714058792569, 0);
  sqcRZGate(q, 1.8873838441979247, 0);
  sqcRYGate(q, -3.0965229500166447, 1);
  sqcRZGate(q, -2.6094977964168256, 1);
  sqcRYGate(q, -2.7615473542922078, 2);
  sqcRZGate(q, -2.244781861417545, 2);
  sqcRYGate(q, 1.5391529184836568, 3);
  sqcRZGate(q, -0.2571249127451551, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2502741771195942, 0);
  sqcRZGate(q, 2.2663982021778217, 0);
  sqcRYGate(q, 2.953741218910995, 1);
  sqcRZGate(q, -1.343242993301196, 1);
  sqcRYGate(q, -0.9199354303416822, 2);
  sqcRZGate(q, 2.333602817049198, 2);
  sqcRYGate(q, -0.6459407915005242, 3);
  sqcRZGate(q, 0.7283048339278732, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.126200264517621, 0);
  sqcRZGate(q, -0.6576995527212475, 0);
  sqcRYGate(q, -1.1361751877757742, 1);
  sqcRZGate(q, -1.736466411486442, 1);
  sqcRYGate(q, 0.2555534015165075, 2);
  sqcRZGate(q, -0.13328595767702486, 2);
  sqcRYGate(q, 0.5263142926110786, 3);
  sqcRZGate(q, -0.039234872314305905, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.489839367199257, 0);
  sqcRZGate(q, -1.9237376788328004, 0);
  sqcRYGate(q, -1.4385526918544094, 1);
  sqcRZGate(q, 1.8060232767376307, 1);
  sqcRYGate(q, 3.073922315232745, 2);
  sqcRZGate(q, 0.18745004829481182, 2);
  sqcRYGate(q, 1.9537125713394492, 3);
  sqcRZGate(q, 2.8310585704961087, 3);

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
