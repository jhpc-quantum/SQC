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

  sqcRYGate(q, -1.4350724593817246, 0);
  sqcRYGate(q, 0.3833337030142898, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0965783921203607, 0);
  sqcRYGate(q, 1.7319268134756056, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8424403256778277, 2);
  sqcRYGate(q, -1.8616058380171694, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1085865838164515, 2);
  sqcRYGate(q, 1.077286824032299, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8943624430385428, 0);
  sqcRYGate(q, 2.3151639955260563, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.408643741242753, 0);
  sqcRYGate(q, -2.876490406554164, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.292048175992746, 1);
  sqcRYGate(q, 0.7923388648325931, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.10107642894980538, 1);
  sqcRYGate(q, -0.4752108448625569, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.957188427374638, 0);
  sqcRYGate(q, 2.098032061142251, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1296982212987965, 0);
  sqcRYGate(q, 1.8434171026566568, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6734777544585135, 1);
  sqcRYGate(q, 1.275203367512069, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6209607439675215, 1);
  sqcRYGate(q, -1.1285776404943701, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4498881838088362, 0);
  sqcRYGate(q, 1.6810556255232876, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.741065632277045, 0);
  sqcRYGate(q, 1.38722067508892, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.23293849561512836, 2);
  sqcRYGate(q, -1.4295854617980082, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0038888035064106, 2);
  sqcRYGate(q, 1.4866439756498684, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.981135614305292, 0);
  sqcRYGate(q, -0.5434773033578784, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8969191295650902, 0);
  sqcRYGate(q, -2.1625593439214246, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.22603408959902893, 1);
  sqcRYGate(q, 2.690479804529933, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7001391901564586, 1);
  sqcRYGate(q, 1.362487979122661, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3255740593206502, 0);
  sqcRYGate(q, 1.7724104941392653, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.240309437306228, 0);
  sqcRYGate(q, -2.9095292684776233, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8061495738713154, 1);
  sqcRYGate(q, 0.3755349456597745, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6850999711121588, 1);
  sqcRYGate(q, 0.4231020389017299, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.489027032206646, 0);
  sqcRYGate(q, 2.2963445977362387, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9200814278396052, 0);
  sqcRYGate(q, -2.320510561884435, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.92856599530723, 2);
  sqcRYGate(q, 1.7906660730933774, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7245359303346867, 2);
  sqcRYGate(q, -2.1230711510730167, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.858531582910565, 0);
  sqcRYGate(q, -2.3596745670179278, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3248440526491688, 0);
  sqcRYGate(q, 2.4337795279766277, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9703727655928667, 1);
  sqcRYGate(q, -0.06004262092607561, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.25493586346356534, 1);
  sqcRYGate(q, -1.3321288393832351, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2291573196304473, 0);
  sqcRYGate(q, -2.3753138484614023, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5301257910548856, 0);
  sqcRYGate(q, 2.0427991905361957, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9397106206032602, 1);
  sqcRYGate(q, 0.9398629885086851, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9187099983074214, 1);
  sqcRYGate(q, -2.6803813751417502, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6319196333173767, 0);
  sqcRYGate(q, -2.5604112476218517, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5744782684013827, 0);
  sqcRYGate(q, 2.508643883384108, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2603195807010108, 2);
  sqcRYGate(q, -0.049490765731585624, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6893698507904262, 2);
  sqcRYGate(q, 2.9891165118555048, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2769040810978538, 0);
  sqcRYGate(q, 0.5668637274310344, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3609314948253601, 0);
  sqcRYGate(q, -2.5446807401847202, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.16104756517179464, 1);
  sqcRYGate(q, -2.449366526802623, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4291900586273567, 1);
  sqcRYGate(q, 0.9926849427587353, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4149711470610198, 0);
  sqcRYGate(q, 2.9353091929708066, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8270961921366755, 0);
  sqcRYGate(q, 2.813986665797023, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7081509936938466, 1);
  sqcRYGate(q, -2.2997824162266034, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.49527440026692243, 1);
  sqcRYGate(q, 0.05754913887431989, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.687084427989052, 0);
  sqcRYGate(q, -1.944694151734633, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3455868396480595, 0);
  sqcRYGate(q, 3.052849962281398, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.021929640862843, 2);
  sqcRYGate(q, 0.14123043787554138, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2769231665801049, 2);
  sqcRYGate(q, 0.7159165559180507, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3060839795408459, 0);
  sqcRYGate(q, -0.7839375449904198, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.508130408362641, 0);
  sqcRYGate(q, 0.39762721321317596, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5534380305795463, 1);
  sqcRYGate(q, 2.1519523465927035, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8570192140111008, 1);
  sqcRYGate(q, 2.3387132072769594, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.45045524005581505, 0);
  sqcRYGate(q, 1.0705895034343893, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.767156417183728, 0);
  sqcRYGate(q, 1.1254865903127564, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8182167026247081, 1);
  sqcRYGate(q, 0.7458901144821883, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.13051038315272, 1);
  sqcRYGate(q, 1.1258587010052648, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.902198134090975, 0);
  sqcRYGate(q, -2.2967083518004823, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3509046993775697, 0);
  sqcRYGate(q, -0.5963560457548318, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9917565107485051, 2);
  sqcRYGate(q, 2.365803226137991, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6369756925491001, 2);
  sqcRYGate(q, -2.074329947192928, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5448546299287793, 0);
  sqcRYGate(q, -1.066989089475543, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0127299977392115, 0);
  sqcRYGate(q, -2.6352425746565173, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.557893656107664, 1);
  sqcRYGate(q, -1.0854533045452308, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6971537787376554, 1);
  sqcRYGate(q, 2.785121265202487, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7271872025890511, 0);
  sqcRYGate(q, 0.44410873955759206, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2116153352661148, 0);
  sqcRYGate(q, 2.8652781753216985, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4435033720477495, 1);
  sqcRYGate(q, 0.5188072717705018, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6558721910578234, 1);
  sqcRYGate(q, 1.4156153376171101, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.29347000950719976, 0);
  sqcRYGate(q, -2.3679023149810075, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.313524730752114, 0);
  sqcRYGate(q, -2.0580463846562704, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6025964012592038, 2);
  sqcRYGate(q, -0.24730158875572794, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5593239954405335, 2);
  sqcRYGate(q, 2.5985286445044204, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.242985273995881, 0);
  sqcRYGate(q, 1.5657656357564758, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.431429234643689, 0);
  sqcRYGate(q, -2.081406735684853, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.24986615018115046, 1);
  sqcRYGate(q, -2.213111713798403, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.096965293997082, 1);
  sqcRYGate(q, 2.698161100661739, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6397706783043215, 0);
  sqcRYGate(q, -1.8797861407546987, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5759836516768644, 0);
  sqcRYGate(q, 0.5420509037545231, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8132082453517562, 1);
  sqcRYGate(q, -0.9128725396335265, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7823304508752402, 1);
  sqcRYGate(q, 0.14074987580225073, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6702877884636331, 0);
  sqcRYGate(q, 0.8583044927925586, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8376246383844652, 0);
  sqcRYGate(q, -0.28889256823755327, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.531830380266713, 2);
  sqcRYGate(q, 1.8828439968994797, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2051778448707049, 2);
  sqcRYGate(q, 0.8023054049500784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8323334702045537, 0);
  sqcRYGate(q, -0.2547682563611966, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5668664033078668, 0);
  sqcRYGate(q, -2.397195629433723, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8303716649164414, 1);
  sqcRYGate(q, -0.7808163622223244, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3791803098114963, 1);
  sqcRYGate(q, -1.8607786088874099, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.426109534113003, 0);
  sqcRYGate(q, -1.6753995267160517, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1277366082099993, 0);
  sqcRYGate(q, 2.595478430636174, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5162756417356347, 1);
  sqcRYGate(q, -0.7194764060473675, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5686674854992297, 1);
  sqcRYGate(q, -1.7558727797736067, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0641393444465024, 0);
  sqcRYGate(q, -0.2508850103748977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5666409506493735, 0);
  sqcRYGate(q, 0.741419862725983, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3418015350792065, 2);
  sqcRYGate(q, -2.036803261089239, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6474344254363156, 2);
  sqcRYGate(q, -2.7605417158506764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9701653374155041, 0);
  sqcRYGate(q, 1.2827305196579797, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6590815901597488, 0);
  sqcRYGate(q, -2.5487838623725105, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3442538269710276, 1);
  sqcRYGate(q, -0.03471432682192082, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0810122828277344, 1);
  sqcRYGate(q, 1.4325459268193859, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7700571455638823, 0);
  sqcRYGate(q, 1.7132982296451162, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.096215226586531, 0);
  sqcRYGate(q, 1.822305628786717, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7172645359696339, 1);
  sqcRYGate(q, 1.672673232987652, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6596710204872165, 1);
  sqcRYGate(q, -0.8387630252158224, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4168422124850366, 0);
  sqcRYGate(q, 0.2768942257764886, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5257673783120687, 0);
  sqcRYGate(q, -1.9780879275417709, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7840006359197957, 2);
  sqcRYGate(q, 2.5834909501836236, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9533035025721177, 2);
  sqcRYGate(q, 0.5503513918673528, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.202967292828073, 0);
  sqcRYGate(q, -2.363161217356553, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.14663491227212688, 0);
  sqcRYGate(q, -0.38916608382617174, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1909203413078995, 1);
  sqcRYGate(q, 2.630484212553164, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6067245276694617, 1);
  sqcRYGate(q, -2.4069457100468945, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.774865565745964, 0);
  sqcRYGate(q, -1.7622642388369076, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1834304901568933, 0);
  sqcRYGate(q, 0.9117115906137072, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.516853738466697, 1);
  sqcRYGate(q, 0.7649249136890771, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3774308040589265, 1);
  sqcRYGate(q, -1.5416798174967783, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.627550596663336, 0);
  sqcRYGate(q, -0.4696985200012156, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0670813886948958, 0);
  sqcRYGate(q, -0.020530596367040133, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.957886591403677, 2);
  sqcRYGate(q, 1.409903179095286, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4617328252896113, 2);
  sqcRYGate(q, -2.93548501094708, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2470817230405213, 0);
  sqcRYGate(q, -2.07110443087368, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9361782673735323, 0);
  sqcRYGate(q, -1.0933458266487337, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2611749936903796, 1);
  sqcRYGate(q, 0.7897969901933506, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0301360723892765, 1);
  sqcRYGate(q, 1.1106719993365566, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.502331046217571, 0);
  sqcRYGate(q, 1.7661235708348393, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.606523983006971, 0);
  sqcRYGate(q, 0.2994046450198562, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1899530999830334, 1);
  sqcRYGate(q, -2.5798009821833423, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9525283469911656, 1);
  sqcRYGate(q, 0.9705356421262694, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9116908876823713, 0);
  sqcRYGate(q, 0.21983231625677316, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.91138016090024, 0);
  sqcRYGate(q, 1.6473778557258387, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4844802523766445, 2);
  sqcRYGate(q, 0.9311089492938303, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.535058091262195, 2);
  sqcRYGate(q, -2.1755768791117034, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3169583603445903, 0);
  sqcRYGate(q, -1.082762780567089, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.393199993608924, 0);
  sqcRYGate(q, -2.117502550917221, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1862672414044688, 1);
  sqcRYGate(q, 3.0496066103213404, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0615711123650327, 1);
  sqcRYGate(q, -1.7306888648808485, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.44851155210265226, 0);
  sqcRYGate(q, 2.517042408012878, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.728009403475535, 0);
  sqcRYGate(q, 0.46720302456445406, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.3986510967704069, 1);
  sqcRYGate(q, -0.6561565643039292, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8770889125097833, 1);
  sqcRYGate(q, 0.277027578401964, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5979328401154661, 0);
  sqcRYGate(q, 0.6209463815836622, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8783793561855417, 0);
  sqcRYGate(q, -2.9507615945462122, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9300480979556855, 2);
  sqcRYGate(q, -0.5941649931629265, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4075546859297736, 2);
  sqcRYGate(q, 0.8263468794401153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6549374987975378, 0);
  sqcRYGate(q, -0.7374943828411649, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.205649113229644, 0);
  sqcRYGate(q, 2.975684374610354, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5812512212975393, 1);
  sqcRYGate(q, 2.770051105090654, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.21977246976228582, 1);
  sqcRYGate(q, 2.3060927850720065, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.222592875514983, 0);
  sqcRYGate(q, -1.6555610569496428, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3265792756932937, 0);
  sqcRYGate(q, 1.7877710157677418, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6120530722446142, 1);
  sqcRYGate(q, -1.9312831546514566, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6189501809232584, 1);
  sqcRYGate(q, -2.56327787008435, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5162463770540135, 0);
  sqcRYGate(q, 1.4122521972953617, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.579126991403859, 0);
  sqcRYGate(q, 2.70072653290994, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.911917212793214, 2);
  sqcRYGate(q, -0.4853217267717893, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1347038485384373, 2);
  sqcRYGate(q, -1.1956259066791715, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1286399875824185, 0);
  sqcRYGate(q, 2.3707668045789, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.10808147438875555, 0);
  sqcRYGate(q, -2.5631366448028143, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3010870276674261, 1);
  sqcRYGate(q, 0.516958721942741, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0533138037062377, 1);
  sqcRYGate(q, 1.0256948427001111, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1841530342720523, 0);
  sqcRYGate(q, 2.2824480534289204, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8123389091187088, 0);
  sqcRYGate(q, 2.0645695521536265, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.953557563151965, 1);
  sqcRYGate(q, 1.7527018348618153, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5786380623573484, 1);
  sqcRYGate(q, -0.9392155784018962, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.292339088265712, 0);
  sqcRYGate(q, -0.98759319887205, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2037440138536077, 0);
  sqcRYGate(q, -3.025407834445284, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3937846594929457, 2);
  sqcRYGate(q, -1.4089787103777924, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5577916891299313, 2);
  sqcRYGate(q, -3.12517138433615, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.068171715788862, 0);
  sqcRYGate(q, 1.444935854255873, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3037661577050938, 0);
  sqcRYGate(q, -0.6797355819304647, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7491336705247269, 1);
  sqcRYGate(q, 0.12129263218380704, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8529674559294125, 1);
  sqcRYGate(q, -1.1141848453933358, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3365957296642918, 0);
  sqcRYGate(q, 3.109128546010984, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4017831281119495, 0);
  sqcRYGate(q, -2.8452922931100533, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.44635260925590803, 1);
  sqcRYGate(q, -0.8344320969992465, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.116434804605984, 1);
  sqcRYGate(q, 1.5197348023136268, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8448309858652403, 0);
  sqcRYGate(q, 2.20532306484138, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.06591294232093503, 0);
  sqcRYGate(q, 0.632814889713595, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.50813288561005, 2);
  sqcRYGate(q, -0.777369660254888, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0410820626865243, 2);
  sqcRYGate(q, 2.8705310079210626, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1559517041661751, 0);
  sqcRYGate(q, 1.717508685374154, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3083666072563833, 0);
  sqcRYGate(q, -0.14273298840359597, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6676564672836047, 1);
  sqcRYGate(q, -2.9224367993859355, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1965992690725002, 1);
  sqcRYGate(q, 2.983547050816482, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9154908835392006, 0);
  sqcRYGate(q, -1.7150514786550182, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7827144130210416, 0);
  sqcRYGate(q, 0.5313018208558846, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4415544767558184, 1);
  sqcRYGate(q, 1.5653613043938615, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4133742723233196, 1);
  sqcRYGate(q, 1.086777872997101, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1483276187014049, 0);
  sqcRYGate(q, 0.03235756993272013, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.362246444739861, 0);
  sqcRYGate(q, -0.5065505944679769, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.664313433792387, 2);
  sqcRYGate(q, 0.3731819669084784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0718254215484735, 2);
  sqcRYGate(q, -0.07911526523317225, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.34359165566911054, 0);
  sqcRYGate(q, 1.942954329121131, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3490103651815963, 0);
  sqcRYGate(q, 2.3736228084949618, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7463281614015302, 1);
  sqcRYGate(q, -2.4975747520537257, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0678397825163841, 1);
  sqcRYGate(q, -0.5794016573358443, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5290856332238434, 0);
  sqcRYGate(q, 0.8413802680549889, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.621507934314181, 0);
  sqcRYGate(q, -0.6995821127089983, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1791754281702775, 1);
  sqcRYGate(q, 2.5003989996737306, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0080470352322006, 1);
  sqcRYGate(q, 2.1397562748012913, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2782387179784278, 0);
  sqcRYGate(q, 2.362543753268447, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8182407901776914, 0);
  sqcRYGate(q, -2.336936528858767, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.583221998805448, 2);
  sqcRYGate(q, 1.1054264375734892, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2498299974902123, 2);
  sqcRYGate(q, 0.8256305805143461, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3431476508226037, 0);
  sqcRYGate(q, 1.5890692546203373, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4123478074420962, 0);
  sqcRYGate(q, -2.147507410865292, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8251624465902409, 1);
  sqcRYGate(q, -2.1874494780330007, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4301921222157016, 1);
  sqcRYGate(q, 0.9605498315346875, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.727086387781104, 0);
  sqcRYGate(q, -1.807068202051278, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.733124192059289, 0);
  sqcRYGate(q, -1.7726731189460248, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.98812176926769, 1);
  sqcRYGate(q, 2.038056840654588, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10949878722769908, 1);
  sqcRYGate(q, 3.095285144940206, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.830388979622659, 0);
  sqcRYGate(q, 1.9622000052462956, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3027034219979257, 0);
  sqcRYGate(q, -0.5193868896530951, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.19982311034572486, 2);
  sqcRYGate(q, 1.5561175353386787, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4924447848466569, 2);
  sqcRYGate(q, -0.969058320211348, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.317573131350365, 0);
  sqcRYGate(q, 0.592663515671906, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1979559032921596, 0);
  sqcRYGate(q, 2.8483720024653905, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3167268441692641, 1);
  sqcRYGate(q, 0.03142863357389469, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8857696297258206, 1);
  sqcRYGate(q, 1.1363756709033366, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9331973413885737, 0);
  sqcRYGate(q, -2.9910738673406074, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3662093938548783, 0);
  sqcRYGate(q, -2.877734299342909, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5874991738596432, 1);
  sqcRYGate(q, -1.5435807693965562, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.00259444751836746, 1);
  sqcRYGate(q, -0.8808017227598414, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0582456231166004, 0);
  sqcRYGate(q, -2.4189098220929, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3578561869859236, 0);
  sqcRYGate(q, 0.9497880252702036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.28027637377191006, 2);
  sqcRYGate(q, -0.4774183481142602, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1192713127268754, 2);
  sqcRYGate(q, -0.5713030050618757, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.039066065454954, 0);
  sqcRYGate(q, -1.308802973991087, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5482523674742898, 0);
  sqcRYGate(q, -0.3198588902512654, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0297972101047326, 1);
  sqcRYGate(q, 1.4678122583291913, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.375878116413019, 1);
  sqcRYGate(q, 2.917685200526171, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.581988798006621, 0);
  sqcRYGate(q, 2.4815024972728477, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.743232378466783, 0);
  sqcRYGate(q, 3.073734410475489, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3596255245549662, 1);
  sqcRYGate(q, -0.10877783151905616, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6220867594266952, 1);
  sqcRYGate(q, 2.3914482845578853, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.841332597652478, 0);
  sqcRYGate(q, 0.5728926581279276, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8058286586788377, 0);
  sqcRYGate(q, 1.074164832797057, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0489925317865088, 2);
  sqcRYGate(q, 1.684271914661909, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1527013288606964, 2);
  sqcRYGate(q, -0.6852494932240153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6907390955735782, 0);
  sqcRYGate(q, -2.2683693808831977, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6348447309844056, 0);
  sqcRYGate(q, 2.611649945192497, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3459599611889134, 1);
  sqcRYGate(q, 0.5727408661153772, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0950295347719952, 1);
  sqcRYGate(q, 2.221166525532128, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.281591291886043, 0);
  sqcRYGate(q, 0.04372170747795945, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0389377752615223, 0);
  sqcRYGate(q, -0.07846383825289392, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0970770567794377, 1);
  sqcRYGate(q, 0.2312429318729046, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6635885137253257, 1);
  sqcRYGate(q, 1.762044890373445, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.683740957035054, 0);
  sqcRYGate(q, 0.6125815456694106, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6273844682854037, 0);
  sqcRYGate(q, -2.929007039129612, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7712179020877592, 2);
  sqcRYGate(q, 0.17048227441873287, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3210483723149302, 2);
  sqcRYGate(q, -0.24663490164052781, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.533029190497727, 0);
  sqcRYGate(q, -2.2421478297510444, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4305157459166251, 0);
  sqcRYGate(q, 1.9037877769426466, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.730464304833274, 1);
  sqcRYGate(q, -2.341258436098343, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4619888573897977, 1);
  sqcRYGate(q, 0.29107906600480327, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1013177203189035, 0);
  sqcRYGate(q, -0.8715076021585092, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.45222417564894357, 0);
  sqcRYGate(q, -2.2404742024774413, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0720654682769055, 1);
  sqcRYGate(q, -2.7827374943823204, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.04173489705434, 1);
  sqcRYGate(q, -2.7850073078961475, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7964044062993494, 0);
  sqcRYGate(q, -1.9830347326828468, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3060589386595167, 0);
  sqcRYGate(q, -1.8326817558453623, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3217734771052627, 2);
  sqcRYGate(q, 0.08194613399568759, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.18369450566838272, 2);
  sqcRYGate(q, -3.0891817651152587, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.13309616418710138, 0);
  sqcRYGate(q, -2.2949603001398096, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8125780119013575, 0);
  sqcRYGate(q, -2.83070172280151, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8353373274495812, 1);
  sqcRYGate(q, -2.5265813786252607, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3227809360334417, 1);
  sqcRYGate(q, -2.345165558924052, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.043170872449778, 0);
  sqcRYGate(q, -0.729935759399995, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2421884003989754, 0);
  sqcRYGate(q, -1.6517504331251969, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4511410044908784, 1);
  sqcRYGate(q, 2.111855127064298, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.16348699876484296, 1);
  sqcRYGate(q, -0.26992767318599004, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.278601488602914, 0);
  sqcRYGate(q, 2.2549776642454638, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3975222089043555, 0);
  sqcRYGate(q, -0.997306840268982, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.472388614540685, 2);
  sqcRYGate(q, -1.0461228600001142, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.029383301396817, 2);
  sqcRYGate(q, 0.3399198168667793, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3114939325835686, 0);
  sqcRYGate(q, 0.21905841984035948, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8307327922168702, 0);
  sqcRYGate(q, 0.5267930190207301, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.658174661835306, 1);
  sqcRYGate(q, 0.31728523078654547, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6038553294810667, 1);
  sqcRYGate(q, -1.4318415462262974, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1434066622732737, 0);
  sqcRYGate(q, -0.09690945955120876, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2402870257574483, 0);
  sqcRYGate(q, -2.0625220181469905, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9863993129211875, 1);
  sqcRYGate(q, -3.134221647852714, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3176006185525977, 1);
  sqcRYGate(q, -2.863817798162343, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.07475860122796398, 0);
  sqcRYGate(q, 2.92954508255013, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9449399378178465, 0);
  sqcRYGate(q, -0.36436139264889067, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.50434950643697, 2);
  sqcRYGate(q, 3.0130070960336965, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7756333266571263, 2);
  sqcRYGate(q, -1.078499060627152, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.28020598460100676, 0);
  sqcRYGate(q, 1.7577410843246197, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7448349123945603, 0);
  sqcRYGate(q, -1.7124997614416744, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.250721413900399, 1);
  sqcRYGate(q, 1.20413826269343, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1990279738563598, 1);
  sqcRYGate(q, -2.6261693682425054, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.663068097142113, 0);
  sqcRYGate(q, -1.1751458345832866, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.23054546040333257, 0);
  sqcRYGate(q, -1.7966129303646534, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.23359138866835, 1);
  sqcRYGate(q, -2.209981712032832, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3655491591502003, 1);
  sqcRYGate(q, -1.1136813810585915, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6108094891167921, 0);
  sqcRYGate(q, -1.0906647059494, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.317596643304715, 0);
  sqcRYGate(q, 2.6412662956216577, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8266012156859501, 2);
  sqcRYGate(q, 2.7184323911082093, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3839042933842207, 2);
  sqcRYGate(q, -2.3123505324792806, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.11927189607753874, 0);
  sqcRYGate(q, -2.297355098868902, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.262930869521217, 0);
  sqcRYGate(q, 0.027524049663020383, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.061734061242077, 1);
  sqcRYGate(q, 1.7755534034104472, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8344740429956565, 1);
  sqcRYGate(q, -1.6667833234328073, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7746504941327946, 0);
  sqcRYGate(q, 1.4139046645071267, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.565873704947366, 0);
  sqcRYGate(q, 0.5086388300543553, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1085961547476941, 1);
  sqcRYGate(q, -2.858856706739938, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.029507770349984, 1);
  sqcRYGate(q, 1.4504477130888072, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7561582245939986, 0);
  sqcRYGate(q, -0.18905899111740435, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.24697557152174987, 0);
  sqcRYGate(q, 1.786427825147154, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8174500562506745, 2);
  sqcRYGate(q, 1.446110313563552, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5488521677002605, 2);
  sqcRYGate(q, 3.1087639276767014, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6341179432226074, 0);
  sqcRYGate(q, -0.5180557560585318, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.816787270930485, 0);
  sqcRYGate(q, 2.4209056734800543, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8800327065828712, 1);
  sqcRYGate(q, -0.18680348532466096, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.14304860468910352, 1);
  sqcRYGate(q, -1.5371392711077991, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1464579451830348, 0);
  sqcRYGate(q, 1.420849681474162, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5734493610801609, 0);
  sqcRYGate(q, 0.6531238891860187, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.121391263542515, 1);
  sqcRYGate(q, -2.102604618329037, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.312230986902457, 1);
  sqcRYGate(q, -2.4249678135135673, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5669968552173446, 0);
  sqcRYGate(q, 2.8239117404244207, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2574438184670247, 0);
  sqcRYGate(q, -0.011576126742307066, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9042790009547055, 2);
  sqcRYGate(q, 2.4065122205275733, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8577814030684785, 2);
  sqcRYGate(q, -2.0453918139337173, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8800910538892177, 0);
  sqcRYGate(q, -1.896997074559116, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1016364007467434, 0);
  sqcRYGate(q, 0.564539296050687, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.391874328251009, 1);
  sqcRYGate(q, 0.052820429122536705, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3137497596809868, 1);
  sqcRYGate(q, 0.1491409484197268, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4561483703147804, 0);
  sqcRYGate(q, -1.851937701814693, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0132256689085875, 0);
  sqcRYGate(q, 3.1316125792311214, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.643857224427812, 1);
  sqcRYGate(q, -1.3343662718153715, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2652905455654482, 1);
  sqcRYGate(q, -2.87998369090112, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.40076139957498214, 0);
  sqcRYGate(q, -1.4237961865201887, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0112695910946483, 0);
  sqcRYGate(q, -2.6691986047920437, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.14934247931712313, 2);
  sqcRYGate(q, -1.6123231499819761, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.39076852346664115, 2);
  sqcRYGate(q, -0.6878821625902063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1063551335627428, 0);
  sqcRYGate(q, 0.1575644870643333, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0858612943715102, 0);
  sqcRYGate(q, -0.4945107957485632, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3056229914352873, 1);
  sqcRYGate(q, 2.6650342872693678, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0338329544471354, 1);
  sqcRYGate(q, 0.6156914897010939, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.30937054823070387, 0);
  sqcRYGate(q, -1.478770522674674, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.539079702781398, 0);
  sqcRYGate(q, 2.6820220311626866, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.17577153547464963, 1);
  sqcRYGate(q, 1.9670155320923208, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7753342313810192, 1);
  sqcRYGate(q, 1.9441248073585, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0305067056928614, 0);
  sqcRYGate(q, -1.5396754057621411, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2087732223883378, 0);
  sqcRYGate(q, -2.408303932188652, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.22805149316719664, 2);
  sqcRYGate(q, 1.922442724244098, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7566883724726448, 2);
  sqcRYGate(q, -2.4352513816166543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.22388730764236886, 0);
  sqcRYGate(q, -1.170022156369536, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.593715283444594, 0);
  sqcRYGate(q, -0.8181675845893874, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8952834715013573, 1);
  sqcRYGate(q, 2.7694320202126894, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8047586488881837, 1);
  sqcRYGate(q, 2.335830274807969, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0099996918553598, 0);
  sqcRYGate(q, 0.24445703384978568, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4008069691480315, 0);
  sqcRYGate(q, -2.441272756370363, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.293260709064813, 1);
  sqcRYGate(q, 3.022654929794562, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5750207892240911, 1);
  sqcRYGate(q, -2.117079130643, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1404197146687682, 0);
  sqcRYGate(q, -1.4466099307399896, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5762068096920436, 0);
  sqcRYGate(q, 2.6046357300765255, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6228357824412366, 2);
  sqcRYGate(q, 1.7712547682647832, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5874882002426193, 2);
  sqcRYGate(q, -2.708153245248075, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7886141197618337, 0);
  sqcRYGate(q, 1.020966749212901, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.078735754949274, 0);
  sqcRYGate(q, 1.1150676035076301, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1798946308722682, 1);
  sqcRYGate(q, 1.3633582798785824, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.973818142929887, 1);
  sqcRYGate(q, -3.0836896036311816, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7262323088246525, 0);
  sqcRYGate(q, -0.29386174849192903, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6283196109408586, 0);
  sqcRYGate(q, 2.5009187230985366, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.138294991606679, 1);
  sqcRYGate(q, 2.732891499453821, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3639169301306289, 1);
  sqcRYGate(q, -1.6361181128602258, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.017270040118209, 0);
  sqcRYGate(q, -0.6556079597346409, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.362509971708755, 0);
  sqcRYGate(q, 2.8177925894051845, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.160016878648881, 2);
  sqcRYGate(q, -0.15233379928126656, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.019924876888558, 2);
  sqcRYGate(q, 2.6029312162661964, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0801726810660153, 0);
  sqcRYGate(q, 1.0044931256055618, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3418553931537165, 0);
  sqcRYGate(q, -1.0906354117114274, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.24089262927856894, 1);
  sqcRYGate(q, -2.035424319943252, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.348618126914397, 1);
  sqcRYGate(q, -2.464945017702366, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4118242088002004, 0);
  sqcRYGate(q, -2.236214399806385, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5712469467993211, 0);
  sqcRYGate(q, -0.5371345499569511, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1825478203080397, 1);
  sqcRYGate(q, 1.8333655302582297, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.003493117358354, 1);
  sqcRYGate(q, 0.975845636028567, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1739361487168667, 0);
  sqcRYGate(q, 2.9212972838943285, 1);
  sqcRYGate(q, 1.1546960129459278, 2);
  sqcRYGate(q, -0.32677138336032374, 3);

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
