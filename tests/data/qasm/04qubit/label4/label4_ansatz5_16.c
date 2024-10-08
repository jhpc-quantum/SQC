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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 2.5424285319858906, 0);
  sqcRYGate(q, -1.0065698717463563, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8045512589706245, 0);
  sqcRYGate(q, 0.8817593970527603, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.360225535155314, 2);
  sqcRYGate(q, -1.4587433094496438, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8536928819891747, 2);
  sqcRYGate(q, 0.3047652914426271, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1464144703675529, 1);
  sqcRYGate(q, 0.9366318930883873, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.16562765518344505, 1);
  sqcRYGate(q, -0.5580716320476484, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9045036094434376, 0);
  sqcRYGate(q, 0.8977463204011942, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.30791196272722493, 0);
  sqcRYGate(q, -1.8005512925561786, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.514467423511915, 2);
  sqcRYGate(q, -0.6735693665926862, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8423208863979257, 2);
  sqcRYGate(q, 1.3728832672964397, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5588534337028361, 1);
  sqcRYGate(q, -3.01222864610727, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.141640165880692, 1);
  sqcRYGate(q, -0.33063984345936603, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8394481260944175, 0);
  sqcRYGate(q, 0.5623466643247781, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.21235432814043734, 0);
  sqcRYGate(q, 0.4308521386853932, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8990974905910354, 2);
  sqcRYGate(q, -2.6724611600492594, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4003508884088669, 2);
  sqcRYGate(q, -1.0941607974222984, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7958865471664095, 1);
  sqcRYGate(q, -3.0791570871319918, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6530826894954993, 1);
  sqcRYGate(q, -2.2235850915720166, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6417829849689705, 0);
  sqcRYGate(q, 0.14774951741060638, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7057925304247146, 0);
  sqcRYGate(q, 2.1115219351631396, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3902540250332107, 2);
  sqcRYGate(q, -0.5719378291680015, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8260040012134096, 2);
  sqcRYGate(q, 2.1108529313096938, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5280986860960284, 1);
  sqcRYGate(q, 2.730832470935086, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.09708572900499135, 1);
  sqcRYGate(q, -0.35165322760349227, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.118290905978944, 0);
  sqcRYGate(q, 2.174908755699855, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2689424820696267, 0);
  sqcRYGate(q, -1.5544221583440239, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5115645021010119, 2);
  sqcRYGate(q, -1.558387511412379, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5239961506780859, 2);
  sqcRYGate(q, 2.612409930134974, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8827190400527245, 1);
  sqcRYGate(q, -0.3830859816519858, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7999418262443887, 1);
  sqcRYGate(q, -1.447914724248465, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.16532321234548686, 0);
  sqcRYGate(q, -2.9476827325210087, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0039737242031768, 0);
  sqcRYGate(q, -1.3567529557162412, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.773223170398814, 2);
  sqcRYGate(q, 1.490318006593819, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4490618942634851, 2);
  sqcRYGate(q, -0.6621370206153925, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.374012486535356, 1);
  sqcRYGate(q, 1.094046470457311, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4127139338081174, 1);
  sqcRYGate(q, 0.8396385013827175, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6234108044006645, 0);
  sqcRYGate(q, -1.9644324851657424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.481179507363843, 0);
  sqcRYGate(q, -0.6978629099303061, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2681647630990607, 2);
  sqcRYGate(q, -0.3766705821658505, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8542901487077151, 2);
  sqcRYGate(q, -0.3864943163210066, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6886947118231244, 1);
  sqcRYGate(q, -0.5775951813571893, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1193360704420914, 1);
  sqcRYGate(q, -0.03672375687362023, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.477229440191785, 0);
  sqcRYGate(q, -1.4463081230311232, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6286180642813051, 0);
  sqcRYGate(q, 2.291987028492771, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.10636895636057685, 2);
  sqcRYGate(q, -2.82944924782432, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.015207895239998, 2);
  sqcRYGate(q, -0.5690273682072311, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8418048861744434, 1);
  sqcRYGate(q, -2.5050623553373588, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1253144594185645, 1);
  sqcRYGate(q, 1.5871886271852051, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.071651482967849, 0);
  sqcRYGate(q, 0.03908887410728035, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.060565654036779035, 0);
  sqcRYGate(q, 2.3710133720011144, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5661562304639567, 2);
  sqcRYGate(q, -1.558601170894274, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.032589890552101, 2);
  sqcRYGate(q, -2.1026169093290945, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.866410063814626, 1);
  sqcRYGate(q, -0.7166915444157169, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9159709643494596, 1);
  sqcRYGate(q, 2.081052586986762, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1334546713589954, 0);
  sqcRYGate(q, -0.4119990982229096, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.48997384794557775, 0);
  sqcRYGate(q, 2.7004572965214386, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6959431698465801, 2);
  sqcRYGate(q, 2.6037703027436145, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2659777711139055, 2);
  sqcRYGate(q, -1.6156062726226403, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9429667561246604, 1);
  sqcRYGate(q, -2.346245675789885, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.491087360259348, 1);
  sqcRYGate(q, 1.8032616309331257, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4656309416243856, 0);
  sqcRYGate(q, 0.7810456526481326, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.73898577822094, 0);
  sqcRYGate(q, 0.2187346838476954, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.33815148976803, 2);
  sqcRYGate(q, -1.2756267527495861, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7627741444102842, 2);
  sqcRYGate(q, -0.49284543837139777, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.27785922614979164, 1);
  sqcRYGate(q, -0.0377221621097119, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7276505279032612, 1);
  sqcRYGate(q, -0.674773563836214, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.05986927510746779, 0);
  sqcRYGate(q, -1.007743909336038, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.981263478121395, 0);
  sqcRYGate(q, 2.102205633050871, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9584672267224512, 2);
  sqcRYGate(q, 1.9327466413079772, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.26823308528148004, 2);
  sqcRYGate(q, 2.186183858805834, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2913672463104353, 1);
  sqcRYGate(q, -1.6995100304721342, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8658414249251427, 1);
  sqcRYGate(q, -1.2632552479585328, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9069909216306327, 0);
  sqcRYGate(q, -2.051015863017466, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3980975680245633, 0);
  sqcRYGate(q, 2.614454483372114, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5758919748652065, 2);
  sqcRYGate(q, -2.199302597488553, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.016909919885482516, 2);
  sqcRYGate(q, 2.9005465998660394, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1322113358558834, 1);
  sqcRYGate(q, 2.813217096839921, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.26378997642998475, 1);
  sqcRYGate(q, 0.220898111646814, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.366950491406177, 0);
  sqcRYGate(q, 1.796663969522461, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9717510775459938, 0);
  sqcRYGate(q, 0.4748831194871421, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7250192480517055, 2);
  sqcRYGate(q, -0.3614918816394086, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.190407764165122, 2);
  sqcRYGate(q, 1.9581770402279792, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.764715528058424, 1);
  sqcRYGate(q, 0.06668590047505951, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7871912682137296, 1);
  sqcRYGate(q, -1.7137695698843256, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.14394250260265107, 0);
  sqcRYGate(q, -0.01723797425188427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9247961670006206, 0);
  sqcRYGate(q, 0.6766194006378391, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8221407510406307, 2);
  sqcRYGate(q, -1.9709539819813768, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9564053372107246, 2);
  sqcRYGate(q, 1.654703103411007, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5591985008223865, 1);
  sqcRYGate(q, -2.0772673074490493, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0888636656223096, 1);
  sqcRYGate(q, 0.37429773147275514, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.60124173704584, 0);
  sqcRYGate(q, -2.398227220052735, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5469240909597528, 0);
  sqcRYGate(q, 0.7194007593917892, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5562154316865568, 2);
  sqcRYGate(q, 2.8737262951216374, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.18440081662138574, 2);
  sqcRYGate(q, 1.0549604990711507, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8139613197238753, 1);
  sqcRYGate(q, -1.9579910358157164, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6228143779848491, 1);
  sqcRYGate(q, 0.8080104301347113, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.575035302981986, 0);
  sqcRYGate(q, -1.4799897801906823, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3435543494250792, 0);
  sqcRYGate(q, -2.6890731756000394, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6244478544901306, 2);
  sqcRYGate(q, 1.300781970273105, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.661968165478747, 2);
  sqcRYGate(q, -0.2832123126965586, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7150531321869922, 1);
  sqcRYGate(q, 2.264843021458705, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3509357132672837, 1);
  sqcRYGate(q, -0.3794652556293287, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1273406457101007, 0);
  sqcRYGate(q, -0.23045761305602586, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6242742580982688, 0);
  sqcRYGate(q, 0.30458576637633394, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1847419977239655, 2);
  sqcRYGate(q, -0.31661842884829017, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9314350447638808, 2);
  sqcRYGate(q, 2.8054770245745515, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.47516985487996344, 1);
  sqcRYGate(q, -1.211095012911474, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5136364966547537, 1);
  sqcRYGate(q, -1.268235760589115, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6439011273223461, 0);
  sqcRYGate(q, 2.623862847275614, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9905326053372243, 0);
  sqcRYGate(q, 0.33398465721124065, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2885939167973006, 2);
  sqcRYGate(q, -0.4612815579035532, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.146782870215179, 2);
  sqcRYGate(q, -2.330780564118197, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5627005187845714, 1);
  sqcRYGate(q, -1.8551504998596184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.43771539181341046, 1);
  sqcRYGate(q, -3.0212142911394815, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3578028529177466, 0);
  sqcRYGate(q, 2.923484987993374, 1);
  sqcRYGate(q, 0.22972488997844298, 2);
  sqcRYGate(q, 3.012106477228381, 3);

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
