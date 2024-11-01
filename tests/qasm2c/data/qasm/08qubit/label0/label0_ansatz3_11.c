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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -2.0050542819984685, 0);
  sqcRZGate(q, -0.0038838655949110326, 0);
  sqcRYGate(q, 6.0188231373098246e-05, 1);
  sqcRZGate(q, -1.0954787041435585, 1);
  sqcRYGate(q, 3.1410479880485473, 2);
  sqcRZGate(q, -2.5651760661768725, 2);
  sqcRYGate(q, -3.1415387348653714, 3);
  sqcRZGate(q, 2.8394095402215696, 3);
  sqcRYGate(q, 2.8310298380386616, 4);
  sqcRZGate(q, -2.9568311356400847, 4);
  sqcRYGate(q, 2.12796510768064, 5);
  sqcRZGate(q, -1.8821334401717298, 5);
  sqcRYGate(q, -2.1118922893746124, 6);
  sqcRZGate(q, -1.7181198320546625, 6);
  sqcRYGate(q, -0.03549844736107796, 7);
  sqcRZGate(q, 1.4638322067790206, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.0075235488878467, 0);
  sqcRZGate(q, 1.5301386523674012, 0);
  sqcRYGate(q, -0.003056705487702133, 1);
  sqcRZGate(q, -0.8417768305864515, 1);
  sqcRYGate(q, 0.5660424662577493, 2);
  sqcRZGate(q, 1.108933752051394, 2);
  sqcRYGate(q, 0.0020064562157990906, 3);
  sqcRZGate(q, -1.9231965992286586, 3);
  sqcRYGate(q, 1.0077089745345946, 4);
  sqcRZGate(q, 1.2960572106814405, 4);
  sqcRYGate(q, -1.4837918348882586, 5);
  sqcRZGate(q, -1.1552240269774234, 5);
  sqcRYGate(q, 2.1161548937855503, 6);
  sqcRZGate(q, 1.5654456988984597, 6);
  sqcRYGate(q, 1.5911765403177691, 7);
  sqcRZGate(q, 2.0097623843977415, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.0019708056005978136, 0);
  sqcRZGate(q, 0.5802579112730425, 0);
  sqcRYGate(q, -0.0672600288161016, 1);
  sqcRZGate(q, -0.055726454851275704, 1);
  sqcRYGate(q, -2.694320084130404, 2);
  sqcRZGate(q, 3.010128243993405, 2);
  sqcRYGate(q, 0.007027793263769233, 3);
  sqcRZGate(q, -1.430676209138496, 3);
  sqcRYGate(q, 0.6427185261335682, 4);
  sqcRZGate(q, 0.9766731889251729, 4);
  sqcRYGate(q, 0.19543498190882322, 5);
  sqcRZGate(q, 0.6234743619715974, 5);
  sqcRYGate(q, 2.5701598089540036, 6);
  sqcRZGate(q, -2.4385725596790357, 6);
  sqcRYGate(q, -2.304079275988676, 7);
  sqcRZGate(q, 0.2206907198050745, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.386586962608538, 0);
  sqcRZGate(q, 2.193330398134072, 0);
  sqcRYGate(q, -0.06469519955295466, 1);
  sqcRZGate(q, -0.30636727535032376, 1);
  sqcRYGate(q, 2.010199369685951, 2);
  sqcRZGate(q, -0.48055975869015205, 2);
  sqcRYGate(q, 1.570954137153785, 3);
  sqcRZGate(q, 1.5693454613910962, 3);
  sqcRYGate(q, -1.774979572552941, 4);
  sqcRZGate(q, 0.24300882998364684, 4);
  sqcRYGate(q, -1.0096109628413141, 5);
  sqcRZGate(q, -2.0950234497603875, 5);
  sqcRYGate(q, -2.9681235016180674, 6);
  sqcRZGate(q, -0.6028168092636604, 6);
  sqcRYGate(q, -2.9069965643477116, 7);
  sqcRZGate(q, -1.598277787282876, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.0010072751437624206, 0);
  sqcRZGate(q, 1.6056811743435935, 0);
  sqcRYGate(q, 3.0704349087133993, 1);
  sqcRZGate(q, 2.8485287262467733, 1);
  sqcRYGate(q, -0.00042088691536878997, 2);
  sqcRZGate(q, 2.803574714611269, 2);
  sqcRYGate(q, 1.2769632029592133, 3);
  sqcRZGate(q, -1.6627762822141796, 3);
  sqcRYGate(q, -2.6634254424290207, 4);
  sqcRZGate(q, 2.241415479655399, 4);
  sqcRYGate(q, 3.1410345731360008, 5);
  sqcRZGate(q, -2.9532274512378995, 5);
  sqcRYGate(q, -1.322241483160598, 6);
  sqcRZGate(q, 2.319618714368164, 6);
  sqcRYGate(q, 1.5573526853839825, 7);
  sqcRZGate(q, 0.27543273704987836, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -3.137778661118083, 0);
  sqcRZGate(q, 2.4290676620156364, 0);
  sqcRYGate(q, -0.026296321565287873, 1);
  sqcRZGate(q, 3.0743138282556766, 1);
  sqcRYGate(q, -2.3262948055919828, 2);
  sqcRZGate(q, 1.8240626477853097, 2);
  sqcRYGate(q, 1.8153404653514278, 3);
  sqcRZGate(q, -2.7015560245883603, 3);
  sqcRYGate(q, 1.6965056739448885, 4);
  sqcRZGate(q, -1.8120770210011605, 4);
  sqcRYGate(q, 1.4729849068523304, 5);
  sqcRZGate(q, -1.4975263956441625, 5);
  sqcRYGate(q, -3.1253051237399667, 6);
  sqcRZGate(q, 2.8676156462198983, 6);
  sqcRYGate(q, 2.662849902258891, 7);
  sqcRZGate(q, 1.4240189918277135, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 3.138749002482236, 0);
  sqcRZGate(q, -1.7518020651091533, 0);
  sqcRYGate(q, -2.873593859359475, 1);
  sqcRZGate(q, 0.945054883651575, 1);
  sqcRYGate(q, -0.0013996406812886164, 2);
  sqcRZGate(q, 1.9812574060327017, 2);
  sqcRYGate(q, -0.004847020923541132, 3);
  sqcRZGate(q, -1.9508300964822158, 3);
  sqcRYGate(q, 2.0559629545250084, 4);
  sqcRZGate(q, -1.0111594787295788, 4);
  sqcRYGate(q, -1.6817337985636804, 5);
  sqcRZGate(q, -1.7462236486240648, 5);
  sqcRYGate(q, 0.5666505419515673, 6);
  sqcRZGate(q, 1.2258510887576588, 6);
  sqcRYGate(q, -1.5862469545574243, 7);
  sqcRZGate(q, -2.2679678929672713, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.29110544158000984, 0);
  sqcRZGate(q, 1.4396669715186423, 0);
  sqcRYGate(q, 1.5665314792192315, 1);
  sqcRZGate(q, 1.5566816163512485, 1);
  sqcRYGate(q, -1.464321583226707, 2);
  sqcRZGate(q, 1.9678683733640714, 2);
  sqcRYGate(q, -0.9932468933209524, 3);
  sqcRZGate(q, -0.35959490189300336, 3);
  sqcRYGate(q, 0.5573054309828098, 4);
  sqcRZGate(q, 1.0978891452995079, 4);
  sqcRYGate(q, 1.4940616427839437, 5);
  sqcRZGate(q, -0.8456816858136837, 5);
  sqcRYGate(q, -1.4063099681996105, 6);
  sqcRZGate(q, -1.0874708588037043, 6);
  sqcRYGate(q, 1.124585991733713, 7);
  sqcRZGate(q, -0.45237656395138437, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.0005937869804913599, 0);
  sqcRZGate(q, -2.662529598091532, 0);
  sqcRYGate(q, 1.5138757935329625, 1);
  sqcRZGate(q, -0.8783916806446364, 1);
  sqcRYGate(q, 3.1415368782869106, 2);
  sqcRZGate(q, -2.6647895163360866, 2);
  sqcRYGate(q, 3.1413720505665097, 3);
  sqcRZGate(q, -1.8012436926718511, 3);
  sqcRYGate(q, -2.674496689902322, 4);
  sqcRZGate(q, 2.2490882471983027, 4);
  sqcRYGate(q, -1.5931528434654956, 5);
  sqcRZGate(q, -2.0941836946882475, 5);
  sqcRYGate(q, -1.4355959813625665, 6);
  sqcRZGate(q, 1.869891307600763, 6);
  sqcRYGate(q, -2.4384194345974897, 7);
  sqcRZGate(q, -1.7222849145691896, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.5872595977650745, 0);
  sqcRZGate(q, 0.012743431004718532, 0);
  sqcRYGate(q, 1.605267714203261, 1);
  sqcRZGate(q, -0.8550747805851219, 1);
  sqcRYGate(q, 0.7097810634694168, 2);
  sqcRZGate(q, 1.907472737830715, 2);
  sqcRYGate(q, -3.1405932845691193, 3);
  sqcRZGate(q, 2.956245400089134, 3);
  sqcRYGate(q, -1.69000916101903, 4);
  sqcRZGate(q, 2.9190472428733076, 4);
  sqcRYGate(q, -0.11032065076810228, 5);
  sqcRZGate(q, -2.075829903885486, 5);
  sqcRYGate(q, -0.9150437067878805, 6);
  sqcRZGate(q, 0.20296390356479507, 6);
  sqcRYGate(q, 2.827680160567537, 7);
  sqcRZGate(q, 1.8225457228719941, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -3.1288712296849677, 0);
  sqcRZGate(q, -1.991864583897683, 0);
  sqcRYGate(q, -1.2720776421162447, 1);
  sqcRZGate(q, 0.7059234512786908, 1);
  sqcRYGate(q, -1.4659099849306583, 2);
  sqcRZGate(q, 0.12415388519903436, 2);
  sqcRYGate(q, -3.1415080217006546, 3);
  sqcRZGate(q, 0.11922032932941944, 3);
  sqcRYGate(q, -2.0902234155488992, 4);
  sqcRZGate(q, 1.498398466551975, 4);
  sqcRYGate(q, 1.704310837779433, 5);
  sqcRZGate(q, -2.8416892236371454, 5);
  sqcRYGate(q, 0.01674900365230644, 6);
  sqcRZGate(q, 0.8782899833580364, 6);
  sqcRYGate(q, 2.291843188615398, 7);
  sqcRZGate(q, -2.3977507082593257, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.23332625150668587, 0);
  sqcRZGate(q, -0.05846570509505257, 0);
  sqcRYGate(q, -2.614156048869992, 1);
  sqcRZGate(q, 2.3058614069245356, 1);
  sqcRYGate(q, 0.21524653738102728, 2);
  sqcRZGate(q, -3.088346949971389, 2);
  sqcRYGate(q, 1.9505179119810965, 3);
  sqcRZGate(q, -2.2447640674999274, 3);
  sqcRYGate(q, -3.133198091082906, 4);
  sqcRZGate(q, -2.7754667097015315, 4);
  sqcRYGate(q, 2.672142804246494, 5);
  sqcRZGate(q, -2.6046844888116696, 5);
  sqcRYGate(q, -1.5825288933917712, 6);
  sqcRZGate(q, 2.783451063736454, 6);
  sqcRYGate(q, -1.4109836401286522, 7);
  sqcRZGate(q, 1.2485695162724495, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.5038100330805435, 0);
  sqcRZGate(q, 2.9289064076707154, 0);
  sqcRYGate(q, -0.00019682443668855854, 1);
  sqcRZGate(q, -2.7583520248148803, 1);
  sqcRYGate(q, 0.0010021552536579484, 2);
  sqcRZGate(q, -0.4195380125246988, 2);
  sqcRYGate(q, 0.00012582907079193388, 3);
  sqcRZGate(q, -0.8965458837092871, 3);
  sqcRYGate(q, -2.564936554601591, 4);
  sqcRZGate(q, 1.31554452473842, 4);
  sqcRYGate(q, -3.139867559822753, 5);
  sqcRZGate(q, -1.390216983419561, 5);
  sqcRYGate(q, 2.5029162709404877, 6);
  sqcRZGate(q, 1.9037022311725194, 6);
  sqcRYGate(q, 1.604427722092538, 7);
  sqcRZGate(q, -0.18558878729375233, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -3.122909442970436, 0);
  sqcRZGate(q, 2.9450704882701144, 0);
  sqcRYGate(q, 1.652820517702876, 1);
  sqcRZGate(q, -0.0018248762221366734, 1);
  sqcRYGate(q, -0.0022715176704883005, 2);
  sqcRZGate(q, -2.6046640036081143, 2);
  sqcRYGate(q, 1.1904341651541395, 3);
  sqcRZGate(q, -1.6985449873163845, 3);
  sqcRYGate(q, -0.005586485801678088, 4);
  sqcRZGate(q, 1.0650505674028155, 4);
  sqcRYGate(q, -1.5844647583844944, 5);
  sqcRZGate(q, 2.189161639516402, 5);
  sqcRYGate(q, -0.8831211523174358, 6);
  sqcRZGate(q, 2.9395354990988722, 6);
  sqcRYGate(q, -2.9415211922515367, 7);
  sqcRZGate(q, 1.1251528165414117, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.0258823167469904, 0);
  sqcRZGate(q, -1.5787610913330639, 0);
  sqcRYGate(q, 1.5851921779714728, 1);
  sqcRZGate(q, -1.6206982516098563, 1);
  sqcRYGate(q, -0.062009548076486065, 2);
  sqcRZGate(q, -0.3009644119793151, 2);
  sqcRYGate(q, -2.612869896874416, 3);
  sqcRZGate(q, -0.1507420269390911, 3);
  sqcRYGate(q, -2.825584325871867, 4);
  sqcRZGate(q, -2.2680682276186683, 4);
  sqcRYGate(q, -2.6600027583230386, 5);
  sqcRZGate(q, -1.0435103439986382, 5);
  sqcRYGate(q, 1.462645795586396, 6);
  sqcRZGate(q, 0.26374132143792756, 6);
  sqcRYGate(q, 1.5680764380508272, 7);
  sqcRZGate(q, -3.0571206505390016, 7);

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
