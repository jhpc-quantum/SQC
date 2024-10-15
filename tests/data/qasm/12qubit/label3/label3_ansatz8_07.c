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

  sqcRYGate(q, -0.5521120765524733, 0);
  sqcRYGate(q, -2.4345076904682452, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7605209911935478, 0);
  sqcRYGate(q, 1.0470623378119364, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0243123103982548, 2);
  sqcRYGate(q, -1.5176702436668228, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.046991852995092, 2);
  sqcRYGate(q, 2.0226168348430082, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2324438422604764, 4);
  sqcRYGate(q, 3.0681442339639418, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.672358092940379, 4);
  sqcRYGate(q, 2.4242667901356647, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.004292770084424816, 6);
  sqcRYGate(q, 2.7382825813676694, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.17484666624311182, 6);
  sqcRYGate(q, -1.208680834766457, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.873226517868372, 8);
  sqcRYGate(q, -0.360350917081056, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5948773240842113, 8);
  sqcRYGate(q, -1.7407065452297608, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.036517749961712, 10);
  sqcRYGate(q, 2.6578723337374606, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.3824689690662852, 10);
  sqcRYGate(q, -2.4274783340687125, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.2347847237676897, 0);
  sqcRYGate(q, -1.6520866938213457, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.867183600924406, 0);
  sqcRYGate(q, -1.2828544282260597, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4322164214735038, 2);
  sqcRYGate(q, -2.8403552428234913, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.1518744440051236, 2);
  sqcRYGate(q, 2.2857401284171157, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.6164636667379878, 4);
  sqcRYGate(q, 1.3481356253134988, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.5332538753626723, 4);
  sqcRYGate(q, 3.1296272712467283, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.0545910731290276, 6);
  sqcRYGate(q, -1.0227978241695264, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.728007403116818, 6);
  sqcRYGate(q, 2.761560288596622, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.43443837790518075, 8);
  sqcRYGate(q, 0.10033885116157482, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.2750301795657804, 8);
  sqcRYGate(q, 2.4784052648840733, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.107808751426706, 1);
  sqcRYGate(q, -2.6810498074884874, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.1133053257942125, 1);
  sqcRYGate(q, -3.094184653240762, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.528633649302338, 3);
  sqcRYGate(q, -1.83219093392702, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.6104685663580265, 3);
  sqcRYGate(q, -1.3985406977073156, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.4438259285077812, 5);
  sqcRYGate(q, -3.011813377378719, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.1170131735010929, 5);
  sqcRYGate(q, -3.1111849910792784, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.5176351963619306, 7);
  sqcRYGate(q, -2.957590256115805, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.7218310458659625, 7);
  sqcRYGate(q, 0.5045813868949347, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.3082185859451565, 9);
  sqcRYGate(q, -0.33302201794660213, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.4974162973565516, 9);
  sqcRYGate(q, 1.5061452157345887, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.537645791052567, 0);
  sqcRYGate(q, 2.031694893129703, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.252957091549696, 0);
  sqcRYGate(q, 1.4273501615164372, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3386102921278256, 2);
  sqcRYGate(q, 0.5315533499939455, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0263595500890186, 2);
  sqcRYGate(q, -2.5124836584782106, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8391710255451437, 4);
  sqcRYGate(q, 2.995103155244848, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6818969640805277, 4);
  sqcRYGate(q, 0.0848798712547147, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3567269259743557, 6);
  sqcRYGate(q, -1.8357863307320734, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2600984577747327, 6);
  sqcRYGate(q, -1.8501922662097687, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.954523781335676, 8);
  sqcRYGate(q, 2.1396224709745875, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.579965129545708, 8);
  sqcRYGate(q, -0.29021148284156034, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.0690418444858398, 10);
  sqcRYGate(q, 0.2621596940470043, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.3800480109336695, 10);
  sqcRYGate(q, 1.8029551786938582, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.9239636336190374, 0);
  sqcRYGate(q, 0.2864192873899672, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6774300640845805, 0);
  sqcRYGate(q, -2.7678364492555856, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.37547299175693183, 2);
  sqcRYGate(q, -0.8936953955252916, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.0993527663848557, 2);
  sqcRYGate(q, -1.0775455998981518, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.1067689585063123, 4);
  sqcRYGate(q, 2.5875564503260935, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.1172212386391074, 4);
  sqcRYGate(q, 3.1383007909191445, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.7053642508699212, 6);
  sqcRYGate(q, -1.9415445864636416, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.5106516226056348, 6);
  sqcRYGate(q, 0.02541989877970341, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.5140721441963152, 8);
  sqcRYGate(q, -1.0889284075170786, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.117878372608908, 8);
  sqcRYGate(q, -1.7131441866971695, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.901793570860087, 1);
  sqcRYGate(q, -2.4605771504114062, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.09033096861440552, 1);
  sqcRYGate(q, -0.4740526114122428, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.571407678464247, 3);
  sqcRYGate(q, -2.1117870234290503, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.1054860015577295, 3);
  sqcRYGate(q, -3.131932920334623, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.295981622077102, 5);
  sqcRYGate(q, -2.182882806865117, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.6711896721260668, 5);
  sqcRYGate(q, -0.09371858488201569, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.7449246132064813, 7);
  sqcRYGate(q, -0.6100967993413492, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.8783771713470117, 7);
  sqcRYGate(q, -0.4859902905064842, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.9826734685472083, 9);
  sqcRYGate(q, 2.407076367656369, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.057472017454080065, 9);
  sqcRYGate(q, 0.09173947557508097, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.8316844529393137, 0);
  sqcRYGate(q, 1.5672880844273962, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1113898988641084, 0);
  sqcRYGate(q, 0.9452264466600824, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.09377100658794468, 2);
  sqcRYGate(q, 0.3462928141083115, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2547354228077676, 2);
  sqcRYGate(q, 2.218894741418375, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7926723475558098, 4);
  sqcRYGate(q, -0.5871053137945401, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.439049458074199, 4);
  sqcRYGate(q, 3.136899245233221, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.34242474827958347, 6);
  sqcRYGate(q, 2.709828087552545, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.698033253715071, 6);
  sqcRYGate(q, 2.873556173793422, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9313430170851236, 8);
  sqcRYGate(q, 2.731402469837563, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.2776545489306796, 8);
  sqcRYGate(q, -1.940917608594334, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.4753700814911963, 10);
  sqcRYGate(q, -2.8003001847035995, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.4873850176819552, 10);
  sqcRYGate(q, -1.8947089978179135, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.51499751885656, 0);
  sqcRYGate(q, 2.741090373922097, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4116777972279637, 0);
  sqcRYGate(q, -2.579887733909131, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.332763528342519, 2);
  sqcRYGate(q, 2.9173112356919955, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.1381318981511384, 2);
  sqcRYGate(q, -0.5349819371549842, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.054446043218456, 4);
  sqcRYGate(q, -2.3530148213202686, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.1271914067673041, 4);
  sqcRYGate(q, -3.1406958449369555, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.8595317814649281, 6);
  sqcRYGate(q, -0.40092623619593826, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.6703017654939339, 6);
  sqcRYGate(q, -0.8943792110446201, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.8800917881387601, 8);
  sqcRYGate(q, -0.7456348214502225, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.48099621017441935, 8);
  sqcRYGate(q, 3.0161452232880603, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.952536619109239, 1);
  sqcRYGate(q, 1.7202467567512398, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.580472319404771, 1);
  sqcRYGate(q, -1.2693896410816714, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3070476125762882, 3);
  sqcRYGate(q, 2.451543768200849, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.077592878580718, 3);
  sqcRYGate(q, -3.103721882669369, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.7015446393824116, 5);
  sqcRYGate(q, -1.0570357766632332, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.0674234972807617, 5);
  sqcRYGate(q, -0.1303572367625575, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.6232730261656121, 7);
  sqcRYGate(q, -1.5372824416211468, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.17807279602187348, 7);
  sqcRYGate(q, -0.2812193527288161, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.0737448593224372, 9);
  sqcRYGate(q, -1.459410314023759, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.135509331703097, 9);
  sqcRYGate(q, -0.11855936121524939, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.9704108207658505, 0);
  sqcRYGate(q, 3.139316829912048, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8738574457353347, 0);
  sqcRYGate(q, -1.0548254826212777, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.03795162082996003, 2);
  sqcRYGate(q, 0.4912785471595289, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6168299779914008, 2);
  sqcRYGate(q, -0.6402697022971888, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6884871184400496, 4);
  sqcRYGate(q, -1.1532009461769177, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3235623587903502, 4);
  sqcRYGate(q, 0.006754998643661529, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.15130646787393612, 6);
  sqcRYGate(q, 0.3559881917452031, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.208761296306976, 6);
  sqcRYGate(q, 1.6320385068275067, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.326766709923521, 8);
  sqcRYGate(q, 0.9320639444183564, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.1074343141696446, 8);
  sqcRYGate(q, 2.0546724608096487, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.2127925079259592, 10);
  sqcRYGate(q, 0.2310363789837856, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.35172663199087406, 10);
  sqcRYGate(q, -1.5806401339632714, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5310684993334166, 0);
  sqcRYGate(q, -1.8083036031069994, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6111179755543539, 0);
  sqcRYGate(q, 2.632525409461945, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0226279242281384, 2);
  sqcRYGate(q, -1.4077412553776563, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.02238792344426744, 2);
  sqcRYGate(q, -2.3746900617406035, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.440419455462145, 4);
  sqcRYGate(q, -1.584852190089321, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.24593328562533, 4);
  sqcRYGate(q, 0.0008310211631244552, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5330264997268568, 6);
  sqcRYGate(q, -2.324062531012434, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.4142699687486266, 6);
  sqcRYGate(q, 2.71714872343481, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.7890811595986752, 8);
  sqcRYGate(q, 2.424481665329046, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 3.0950643942834954, 8);
  sqcRYGate(q, -3.005068839564429, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.1798884872145891, 1);
  sqcRYGate(q, -1.9845117012203768, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3687734420515274, 1);
  sqcRYGate(q, -2.8160276441076624, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.023121008592832, 3);
  sqcRYGate(q, -1.6356617629431216, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.011568816591981168, 3);
  sqcRYGate(q, 3.132063540671891, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.7397353424389408, 5);
  sqcRYGate(q, 1.6519373646233104, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.2083370102904242, 5);
  sqcRYGate(q, -2.9088645628852436, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.9297349851918577, 7);
  sqcRYGate(q, 2.9114220684943835, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.647513787785364, 7);
  sqcRYGate(q, -1.0389016053089581, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.727213761337807, 9);
  sqcRYGate(q, 2.5427609624128875, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.06804874063405196, 9);
  sqcRYGate(q, -0.019132652350753787, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.2458176660030365, 0);
  sqcRYGate(q, -0.3261573099623715, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7824692128939036, 0);
  sqcRYGate(q, 0.11746254378429978, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.14087825761290754, 2);
  sqcRYGate(q, 3.06770319237382, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7316476468487255, 2);
  sqcRYGate(q, 0.9567012888461889, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1663002559403277, 4);
  sqcRYGate(q, -0.023363048847477863, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0084446517898191, 4);
  sqcRYGate(q, -3.131194583011832, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2357872528825062, 6);
  sqcRYGate(q, -1.6741040774569034, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.552295558283637, 6);
  sqcRYGate(q, 0.2077841307638444, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.39352176763251434, 8);
  sqcRYGate(q, -2.3787052477295374, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.109921816096575, 8);
  sqcRYGate(q, 0.0012884134443061166, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9344318453423393, 10);
  sqcRYGate(q, -0.4336553414715514, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.41282130572434284, 10);
  sqcRYGate(q, 2.15341564702302, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.0139818908306975, 0);
  sqcRYGate(q, -2.7681139167574043, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5404841226940809, 0);
  sqcRYGate(q, 0.731147008443305, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8771708868364723, 2);
  sqcRYGate(q, -1.389262710531925, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.131692083816357, 2);
  sqcRYGate(q, -0.06348440578746485, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.1579665974065816, 4);
  sqcRYGate(q, 1.8060522173761928, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.8183341169169442, 4);
  sqcRYGate(q, 0.03800950629568778, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.3536584017186728, 6);
  sqcRYGate(q, 1.2472471150691657, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.228125531408809, 6);
  sqcRYGate(q, 0.005607750264220889, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.8497866956937302, 8);
  sqcRYGate(q, 2.6414025998427375, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.0604643515054075, 8);
  sqcRYGate(q, 2.452695431106618, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.6024723760762711, 1);
  sqcRYGate(q, -2.116403885944882, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6585208773082398, 1);
  sqcRYGate(q, -2.693940404591852, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.20018923484062065, 3);
  sqcRYGate(q, 1.105025206274858, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.0446636548959507, 3);
  sqcRYGate(q, 3.1234751191793655, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.0686572315542293, 5);
  sqcRYGate(q, -0.1604352587824982, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.1561409162662466, 5);
  sqcRYGate(q, 3.1168043343135996, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.4523615988090792, 7);
  sqcRYGate(q, 0.8981720992848424, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.8901851380414009, 7);
  sqcRYGate(q, -1.3678179423331274, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.11036417132001, 9);
  sqcRYGate(q, 1.468805109868434, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.9364753588471562, 9);
  sqcRYGate(q, -2.9729732388284034, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.0090871452756702, 0);
  sqcRYGate(q, 0.5332379894373807, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.264294409995408, 0);
  sqcRYGate(q, -1.6430578283389619, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.902869649084092, 2);
  sqcRYGate(q, 3.009074282502543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9024392421440426, 2);
  sqcRYGate(q, -1.309233726208186, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.753950441316283, 4);
  sqcRYGate(q, 0.4017119771326702, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6981333446152191, 4);
  sqcRYGate(q, -3.0928602331202018, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0328643445351926, 6);
  sqcRYGate(q, -0.8371255019765027, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.305474701255509, 6);
  sqcRYGate(q, -2.448750285275582, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1279734374496555, 8);
  sqcRYGate(q, 2.7193562445722463, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.16554395296317367, 8);
  sqcRYGate(q, 2.4154670240310363, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.3919112239944689, 10);
  sqcRYGate(q, 0.20961082893950422, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.1915671269951105, 10);
  sqcRYGate(q, -3.1197427738399632, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.615735899824558, 0);
  sqcRYGate(q, 1.8616556820662415, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5968144960053976, 0);
  sqcRYGate(q, -1.7100027353487253, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.414972149524695, 2);
  sqcRYGate(q, 3.057201253819554, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.089617533696934, 2);
  sqcRYGate(q, 2.6383363480284134, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.279188435282867, 4);
  sqcRYGate(q, 2.0743179805233964, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.8685381525674192, 4);
  sqcRYGate(q, 0.5859132257964941, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.0575611014896977, 6);
  sqcRYGate(q, -0.3572835983742188, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.236118015538585, 6);
  sqcRYGate(q, -0.06492200831240513, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.15353286995000381, 8);
  sqcRYGate(q, -2.280216627285386, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.2822855733395717, 8);
  sqcRYGate(q, 0.37943221175925057, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.4831477960881491, 1);
  sqcRYGate(q, 1.7226054895515244, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6402211750341826, 1);
  sqcRYGate(q, -1.0991636262374964, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.141553122711236, 3);
  sqcRYGate(q, -1.103329606843589, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.05382078079287833, 3);
  sqcRYGate(q, -0.0484194268893976, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.4645590365209271, 5);
  sqcRYGate(q, 2.6376355071426207, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.7449796096770327, 5);
  sqcRYGate(q, -2.1098421878227223, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.689447310500625, 7);
  sqcRYGate(q, 0.26532568498025544, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.03469309631171047, 7);
  sqcRYGate(q, -3.0084837370457143, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.20861559811488156, 9);
  sqcRYGate(q, -0.7617661943473628, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.004977884967678036, 9);
  sqcRYGate(q, 0.9737697621599981, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.324843435494074, 0);
  sqcRYGate(q, 2.0119545759854205, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9259135948050023, 0);
  sqcRYGate(q, -0.017590534815697813, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4800369844411356, 2);
  sqcRYGate(q, -3.12162485255611, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8845067092563955, 2);
  sqcRYGate(q, 2.2903034551908203, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5420723390081592, 4);
  sqcRYGate(q, 2.5367149583683792, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.04871223732366926, 4);
  sqcRYGate(q, 3.1194275818085524, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0912151233712306, 6);
  sqcRYGate(q, -2.2975435854102684, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0041730293190705, 6);
  sqcRYGate(q, 3.0980674122106513, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3008779731299587, 8);
  sqcRYGate(q, 1.6100193252490858, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8944372159664054, 8);
  sqcRYGate(q, -0.0815870656844424, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.81927959643043, 10);
  sqcRYGate(q, 2.884215170015755, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.07375638123331818, 10);
  sqcRYGate(q, -0.012114250719885256, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.6729094988704822, 0);
  sqcRYGate(q, -0.3058478440380707, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.15039118818639985, 0);
  sqcRYGate(q, 1.8099491962411511, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9171329692072994, 2);
  sqcRYGate(q, 2.2860339063113195, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.1266153452957806, 2);
  sqcRYGate(q, -3.1077950075038894, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.061850845303925, 4);
  sqcRYGate(q, -2.6564811838207745, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.129929083492446, 4);
  sqcRYGate(q, 1.0931117772615186, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.68913799849179, 6);
  sqcRYGate(q, -0.3606221883820409, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.6212757290189881, 6);
  sqcRYGate(q, 0.5917650699726623, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.6292811052494399, 8);
  sqcRYGate(q, -1.485138544776941, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.1280982485471687, 8);
  sqcRYGate(q, 1.5427312429750808, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.5906957805106492, 1);
  sqcRYGate(q, 0.5349910833504781, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9110592216767488, 1);
  sqcRYGate(q, -2.957219793180053, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.898097595539697, 3);
  sqcRYGate(q, 2.835531587615184, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.03456891697776321, 3);
  sqcRYGate(q, -0.0429459840165476, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.004466132090513171, 5);
  sqcRYGate(q, 2.7617211768718923, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.465979169226569, 5);
  sqcRYGate(q, 1.2571080428648518, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.1362667306494616, 7);
  sqcRYGate(q, -1.5921717527302324, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.44154922111549816, 7);
  sqcRYGate(q, 3.0950262617900908, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.0861589586514326, 9);
  sqcRYGate(q, 1.0021246911066468, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.8395344774832489, 9);
  sqcRYGate(q, 2.2169994260162196, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.0858606796572303, 0);
  sqcRYGate(q, -1.1744584991968994, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.03682548676114266, 0);
  sqcRYGate(q, 1.755167232052628, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1975769943804204, 2);
  sqcRYGate(q, -0.4598013220637457, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1363056385800796, 2);
  sqcRYGate(q, -1.7445903335488153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7502415134063997, 4);
  sqcRYGate(q, -2.747199056358281, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9510666684625937, 4);
  sqcRYGate(q, -0.14685338897131217, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9284423047363894, 6);
  sqcRYGate(q, 2.148617157979894, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.04434312022678455, 6);
  sqcRYGate(q, 0.03704094045591966, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.30207023369434977, 8);
  sqcRYGate(q, -2.794847316803434, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.024259262414773847, 8);
  sqcRYGate(q, 0.03727839132892058, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.0661600666624909, 10);
  sqcRYGate(q, 0.6095611093331764, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.098756242789626, 10);
  sqcRYGate(q, -3.1350316661091537, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.5228461947037304, 0);
  sqcRYGate(q, -2.44749933242676, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6605726210725766, 0);
  sqcRYGate(q, -0.28140987630680314, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.548642325887057, 2);
  sqcRYGate(q, -1.9545358106578599, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.6290562891847387, 2);
  sqcRYGate(q, -1.5558492708670326, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.23502331165808954, 4);
  sqcRYGate(q, 2.9565380415552394, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.107223502800902, 4);
  sqcRYGate(q, -3.0664772302368455, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.7381342695733633, 6);
  sqcRYGate(q, -0.3999887479636479, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.8995752966900943, 6);
  sqcRYGate(q, 1.5318720736692395, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.9834474867833362, 8);
  sqcRYGate(q, -2.2074457557165337, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.5091249552834176, 8);
  sqcRYGate(q, 0.0038754883934002393, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.740760761143311, 1);
  sqcRYGate(q, -2.09828759714254, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6683317722781412, 1);
  sqcRYGate(q, -2.106307158821938, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5896322198887864, 3);
  sqcRYGate(q, -1.150530147569535, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.804347834243007, 3);
  sqcRYGate(q, -3.0258510721945884, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.368691876078672, 5);
  sqcRYGate(q, -0.06821569608886373, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.7951375885131204, 5);
  sqcRYGate(q, 1.8361132783675824, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.1296039106790374, 7);
  sqcRYGate(q, -0.370214387843105, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.5536847899224304, 7);
  sqcRYGate(q, -1.658456054353235, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.1510072636031268, 9);
  sqcRYGate(q, 3.0133407088333155, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.8677860384153755, 9);
  sqcRYGate(q, 1.4002546781322727, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.7094451555629394, 0);
  sqcRYGate(q, 0.6798282624154139, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.46428809756954875, 0);
  sqcRYGate(q, 0.03148685426734854, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.022886002525961402, 2);
  sqcRYGate(q, -0.7999845702613132, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.015166095704719496, 2);
  sqcRYGate(q, 0.035891985265618764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7223146632424595, 4);
  sqcRYGate(q, -2.163271138921246, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1346562092150654, 4);
  sqcRYGate(q, 0.05117762392427237, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0000371783363098, 6);
  sqcRYGate(q, 2.8807804136701978, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.008849312242581675, 6);
  sqcRYGate(q, -3.140363093536265, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.030430962985671606, 8);
  sqcRYGate(q, -1.4487823995591373, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.0025224533872511374, 8);
  sqcRYGate(q, -0.0026688173076925277, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.8829651481114675, 10);
  sqcRYGate(q, -3.0044675646052457, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.05088059051740412, 10);
  sqcRYGate(q, 0.08768261169636153, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.1975261017281067, 0);
  sqcRYGate(q, 1.1721638385465307, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.30096977078556014, 0);
  sqcRYGate(q, -0.14894427922861145, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.474620804795939, 2);
  sqcRYGate(q, -0.3067128036799175, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.5138734198777843, 2);
  sqcRYGate(q, -1.6214077809499834, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.163201685732896, 4);
  sqcRYGate(q, 2.205818018539067, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.06602634638022842, 4);
  sqcRYGate(q, -3.036022145124936, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.845370149453522, 6);
  sqcRYGate(q, 2.585499951582853, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.322780438875527, 6);
  sqcRYGate(q, -0.8640082431658804, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.3764044822053734, 8);
  sqcRYGate(q, 1.5560219994704712, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.19819021299541362, 8);
  sqcRYGate(q, -0.08298849418768629, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.5715614067863672, 1);
  sqcRYGate(q, -1.6595665403337703, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.267513400389501, 1);
  sqcRYGate(q, 2.7541182533950495, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.17634803695631082, 3);
  sqcRYGate(q, 1.377008519397986, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.734085445128013, 3);
  sqcRYGate(q, -0.42584034637232243, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.10514522782087857, 5);
  sqcRYGate(q, 0.05108809251351155, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.133948241118544, 5);
  sqcRYGate(q, 2.139967637409631, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.0015924866739336, 7);
  sqcRYGate(q, -0.7640500594209385, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.0002200182353924, 7);
  sqcRYGate(q, -0.16007567637432799, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.2086345525887447, 9);
  sqcRYGate(q, 1.3147959201463582, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.230292407633323, 9);
  sqcRYGate(q, 1.3002240464945598, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.3014103045225962, 0);
  sqcRYGate(q, 0.9155584585399935, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.21452545280436622, 0);
  sqcRYGate(q, 0.04977056354967346, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1043844376806455, 2);
  sqcRYGate(q, -0.639300766177521, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.024524331677188323, 2);
  sqcRYGate(q, -3.058581879984364, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0511388462860145, 4);
  sqcRYGate(q, -2.617857866179418, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.140693136006216, 4);
  sqcRYGate(q, 0.003447419801119622, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.981881076254802, 6);
  sqcRYGate(q, 1.0898448007404342, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1395875616941336, 6);
  sqcRYGate(q, 3.1392389147155217, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.012031631923668407, 8);
  sqcRYGate(q, -1.426378779017739, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.1356561399668204, 8);
  sqcRYGate(q, 3.1361040430105223, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.625820268128821, 10);
  sqcRYGate(q, -0.02401789950696089, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.0363158075571537, 10);
  sqcRYGate(q, -0.05969386760272233, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.914606939890355, 0);
  sqcRYGate(q, -0.0005272373720945117, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5858110096288316, 0);
  sqcRYGate(q, 1.5555282543931919, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.766192385964298, 2);
  sqcRYGate(q, 2.969296064034186, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.04101020211561041, 2);
  sqcRYGate(q, -0.058744713976204996, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.0081749309872, 4);
  sqcRYGate(q, -1.7384308490951659, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.05955325041411659, 4);
  sqcRYGate(q, 0.11101397039576266, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.9290545082843247, 6);
  sqcRYGate(q, -0.9898448289529416, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.801035747434651, 6);
  sqcRYGate(q, 1.6422596422459184, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.47860228404514893, 8);
  sqcRYGate(q, 0.21804031487079278, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.8623120713700194, 8);
  sqcRYGate(q, 3.056383086224285, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.0976392854674377, 1);
  sqcRYGate(q, 2.286785015352736, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.539566582541739, 1);
  sqcRYGate(q, -1.8432259332007233, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9528790669480953, 3);
  sqcRYGate(q, 0.5929204301928074, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.1228017531300907, 3);
  sqcRYGate(q, -0.05813567960469168, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.0654041676037695, 5);
  sqcRYGate(q, 0.8083578735373215, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.1404504893743166, 5);
  sqcRYGate(q, -1.0101474669822155, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.3398544942582256, 7);
  sqcRYGate(q, 0.6135379684155676, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.23177410071636828, 7);
  sqcRYGate(q, -1.6087400270662364, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.0070274572079363, 9);
  sqcRYGate(q, -0.7098351703026257, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.3088072934072537, 9);
  sqcRYGate(q, 1.7165510463263245, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.7149706901445136, 0);
  sqcRYGate(q, -2.459171968508641, 1);
  sqcRYGate(q, 2.8531944846363864, 2);
  sqcRYGate(q, 0.43422349276330563, 3);
  sqcRYGate(q, -2.7593808259458705, 4);
  sqcRYGate(q, -1.4683226910733644, 5);
  sqcRYGate(q, 2.8368323425552378, 6);
  sqcRYGate(q, -1.5660888030875515, 7);
  sqcRYGate(q, 2.274307666574983, 8);
  sqcRYGate(q, 3.088609967951508, 9);
  sqcRYGate(q, 2.4250281289518307, 10);
  sqcRYGate(q, 2.115661919939663, 11);

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
