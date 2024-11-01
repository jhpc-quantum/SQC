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

  sqcRYGate(q, 0.02653017136320646, 0);
  sqcRZGate(q, -1.5028454717424828, 0);
  sqcRYGate(q, -1.7984944235216753, 1);
  sqcRZGate(q, 0.1025114394411929, 1);
  sqcRYGate(q, -1.8390528630447858, 2);
  sqcRZGate(q, 1.7793682797899542, 2);
  sqcRYGate(q, 3.141486488385029, 3);
  sqcRZGate(q, 1.6353274177485755, 3);
  sqcRYGate(q, -1.576935727187976, 4);
  sqcRZGate(q, -2.606295145244854, 4);
  sqcRYGate(q, 1.5715728949657901, 5);
  sqcRZGate(q, -1.5714436943871384, 5);
  sqcRYGate(q, 0.00023107434310354336, 6);
  sqcRZGate(q, -1.542211142913894, 6);
  sqcRYGate(q, 3.430096846912534e-05, 7);
  sqcRZGate(q, 0.43293033530441427, 7);
  sqcRYGate(q, 1.0813058643316715, 8);
  sqcRZGate(q, -0.05546726732952109, 8);
  sqcRYGate(q, 2.5089760977112485, 9);
  sqcRZGate(q, -3.0258775665923774, 9);
  sqcRYGate(q, -0.08012370839262317, 10);
  sqcRZGate(q, -1.4468986153995917, 10);
  sqcRYGate(q, 1.5492294876650492, 11);
  sqcRZGate(q, -0.03715800981567777, 11);
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
  sqcRYGate(q, -2.314433078887447, 0);
  sqcRZGate(q, 2.6323554785905214, 0);
  sqcRYGate(q, -2.338451958507284, 1);
  sqcRZGate(q, -1.9012297595352008, 1);
  sqcRYGate(q, -0.0019419688301329785, 2);
  sqcRZGate(q, 2.9262949356122414, 2);
  sqcRYGate(q, -2.5831717487014854, 3);
  sqcRZGate(q, -2.606304270974363, 3);
  sqcRYGate(q, 1.088128646398392, 4);
  sqcRZGate(q, 1.5701902063931668, 4);
  sqcRYGate(q, -2.104958941357501, 5);
  sqcRZGate(q, 2.945521439041362, 5);
  sqcRYGate(q, 4.306086476015974e-05, 6);
  sqcRZGate(q, 2.4924750099957502, 6);
  sqcRYGate(q, -1.9929600912682588e-05, 7);
  sqcRZGate(q, -0.2564478575186166, 7);
  sqcRYGate(q, 1.081535320612887, 8);
  sqcRZGate(q, 2.6923725359241817, 8);
  sqcRYGate(q, 1.7142295612475427, 9);
  sqcRZGate(q, -1.1447609132072492, 9);
  sqcRYGate(q, -2.144911630273439, 10);
  sqcRZGate(q, -0.4408739454347152, 10);
  sqcRYGate(q, -1.9924585883720858, 11);
  sqcRZGate(q, -0.2647893268880157, 11);
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
  sqcRYGate(q, -1.2719157558785534, 0);
  sqcRZGate(q, 2.1081350131672894, 0);
  sqcRYGate(q, 0.5519598995109103, 1);
  sqcRZGate(q, 2.3778604969615267, 1);
  sqcRYGate(q, -0.044823926533237746, 2);
  sqcRZGate(q, 2.014393994329689, 2);
  sqcRYGate(q, -0.9429061248192551, 3);
  sqcRZGate(q, 2.182930770952759, 3);
  sqcRYGate(q, -1.5750145729082965, 4);
  sqcRZGate(q, -0.7431690359436959, 4);
  sqcRYGate(q, 0.42340799875738716, 5);
  sqcRZGate(q, 2.284575597679792, 5);
  sqcRYGate(q, 1.572923947649747, 6);
  sqcRZGate(q, -1.7031598825212282, 6);
  sqcRYGate(q, 3.141522144564771, 7);
  sqcRZGate(q, -1.3623550510142133, 7);
  sqcRYGate(q, 1.5079465886101229, 8);
  sqcRZGate(q, -0.38879896055558294, 8);
  sqcRYGate(q, -1.7877256206587058, 9);
  sqcRZGate(q, -2.8723746041568776, 9);
  sqcRYGate(q, -0.4352618236970436, 10);
  sqcRZGate(q, -1.7754357666455736, 10);
  sqcRYGate(q, 1.365607869075696, 11);
  sqcRZGate(q, 2.702248871437337, 11);
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
  sqcRYGate(q, 2.2185333111245056, 0);
  sqcRZGate(q, 3.024832336662878, 0);
  sqcRYGate(q, 2.2124413372192318, 1);
  sqcRZGate(q, -0.513593861087835, 1);
  sqcRYGate(q, -1.3185002204919367, 2);
  sqcRZGate(q, 2.4038285010033076, 2);
  sqcRYGate(q, 2.2062050467617826, 3);
  sqcRZGate(q, -0.9620581756506481, 3);
  sqcRYGate(q, 1.779367096162035, 4);
  sqcRZGate(q, -0.5357515889539503, 4);
  sqcRYGate(q, -0.08537571619829887, 5);
  sqcRZGate(q, 2.100472125014341, 5);
  sqcRYGate(q, 3.136252204419513, 6);
  sqcRZGate(q, -0.11847609343297894, 6);
  sqcRYGate(q, -1.4177896823674985e-05, 7);
  sqcRZGate(q, -1.6181774569063012, 7);
  sqcRYGate(q, 3.140547243032736, 8);
  sqcRZGate(q, -0.3835539235643446, 8);
  sqcRYGate(q, -2.752270720078063, 9);
  sqcRZGate(q, 2.26037122871936, 9);
  sqcRYGate(q, -0.285923813849094, 10);
  sqcRZGate(q, -0.09900701484523822, 10);
  sqcRYGate(q, 1.0513183986135106, 11);
  sqcRZGate(q, -1.0891099958046766, 11);
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
  sqcRYGate(q, 0.5098643661235142, 0);
  sqcRZGate(q, 1.852557796677938, 0);
  sqcRYGate(q, 1.8301141025114747, 1);
  sqcRZGate(q, 0.49779667415069695, 1);
  sqcRYGate(q, 1.0128698728150685, 2);
  sqcRZGate(q, -1.556367513765327, 2);
  sqcRYGate(q, 1.9062024391921533, 3);
  sqcRZGate(q, -2.7313745410015295, 3);
  sqcRYGate(q, -3.141235535106283, 4);
  sqcRZGate(q, 2.1384208188836933, 4);
  sqcRYGate(q, 1.3208634780374224, 5);
  sqcRZGate(q, 2.0933301146204766, 5);
  sqcRYGate(q, -2.8047624986417925, 6);
  sqcRZGate(q, -1.7330097191291136, 6);
  sqcRYGate(q, -9.867355313336715e-05, 7);
  sqcRZGate(q, 0.19024129349399563, 7);
  sqcRYGate(q, -1.4970090800929183, 8);
  sqcRZGate(q, 2.5102950957578463, 8);
  sqcRYGate(q, 0.3146041540106598, 9);
  sqcRZGate(q, 0.23689829986376396, 9);
  sqcRYGate(q, -0.639429838781454, 10);
  sqcRZGate(q, 1.5904172864623318, 10);
  sqcRYGate(q, 2.3556422956700183, 11);
  sqcRZGate(q, -2.8105657059665377, 11);
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
  sqcRYGate(q, -2.3657926012644186, 0);
  sqcRZGate(q, 0.3927499409415128, 0);
  sqcRYGate(q, 1.4963710372831311, 1);
  sqcRZGate(q, -0.1777011601459311, 1);
  sqcRYGate(q, -1.5104931768681542, 2);
  sqcRZGate(q, 2.1749704326162163, 2);
  sqcRYGate(q, -1.7811566641781371, 3);
  sqcRZGate(q, 0.9051069195697758, 3);
  sqcRYGate(q, -0.6906840663650416, 4);
  sqcRZGate(q, -1.739500877366995, 4);
  sqcRYGate(q, -3.0710901886874833, 5);
  sqcRZGate(q, 0.4704271046277185, 5);
  sqcRYGate(q, -2.5568332868276062, 6);
  sqcRZGate(q, 1.822542319294861, 6);
  sqcRYGate(q, 3.1414384471933823, 7);
  sqcRZGate(q, 2.4232758183149965, 7);
  sqcRYGate(q, -0.00035083634319832413, 8);
  sqcRZGate(q, -0.8749206561844893, 8);
  sqcRYGate(q, -0.08711210333380492, 9);
  sqcRZGate(q, 0.16953279034811575, 9);
  sqcRYGate(q, -0.007046065628405245, 10);
  sqcRZGate(q, 3.073759842133086, 10);
  sqcRYGate(q, -0.07579482025417139, 11);
  sqcRZGate(q, -0.3487362994416065, 11);
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
  sqcRYGate(q, 1.1082737182098852, 0);
  sqcRZGate(q, -2.308050609102678, 0);
  sqcRYGate(q, 2.4603582881463724, 1);
  sqcRZGate(q, 3.031961273529419, 1);
  sqcRYGate(q, -2.7821146449595884, 2);
  sqcRZGate(q, 0.8345624488551158, 2);
  sqcRYGate(q, -0.8065897078405131, 3);
  sqcRZGate(q, -1.486838878232979, 3);
  sqcRYGate(q, 0.002190476196834025, 4);
  sqcRZGate(q, 0.13589753906801771, 4);
  sqcRYGate(q, 1.0403196672729642, 5);
  sqcRZGate(q, 2.2565081389599335, 5);
  sqcRYGate(q, -3.1400282869355376, 6);
  sqcRZGate(q, -0.44643958160405406, 6);
  sqcRYGate(q, -0.00014492644755215167, 7);
  sqcRZGate(q, 1.4666280544904113, 7);
  sqcRYGate(q, -3.140537924357061, 8);
  sqcRZGate(q, 0.02822611291253185, 8);
  sqcRYGate(q, 0.42671809497234303, 9);
  sqcRZGate(q, 1.4612978599807205, 9);
  sqcRYGate(q, 2.600963345659004, 10);
  sqcRZGate(q, 0.4147049610798508, 10);
  sqcRYGate(q, 2.7321947258273838, 11);
  sqcRZGate(q, 1.7557211045022794, 11);
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
  sqcRYGate(q, 2.6688412011168468, 0);
  sqcRZGate(q, -0.7226937926139477, 0);
  sqcRYGate(q, 1.3141019084865917, 1);
  sqcRZGate(q, 0.7445206040734828, 1);
  sqcRYGate(q, -2.6568331893157393, 2);
  sqcRZGate(q, -0.12089622145797321, 2);
  sqcRYGate(q, 1.739336042995638, 3);
  sqcRZGate(q, -2.612085500410255, 3);
  sqcRYGate(q, -2.7707779761943234, 4);
  sqcRZGate(q, 1.4468505797599231, 4);
  sqcRYGate(q, -0.6489450740001658, 5);
  sqcRZGate(q, -2.7408184640707876, 5);
  sqcRYGate(q, 2.4599161446928237, 6);
  sqcRZGate(q, -0.7399366513199777, 6);
  sqcRYGate(q, 0.00022267991927281983, 7);
  sqcRZGate(q, -1.9019842094488082, 7);
  sqcRYGate(q, 0.0004947555678675997, 8);
  sqcRZGate(q, -1.5002056075260326, 8);
  sqcRYGate(q, -1.479453484169132, 9);
  sqcRZGate(q, -2.4401715191750046, 9);
  sqcRYGate(q, 1.054274164339835, 10);
  sqcRZGate(q, 1.3191848108720203, 10);
  sqcRYGate(q, -2.489618582630292, 11);
  sqcRZGate(q, -1.9807755116975754, 11);
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
  sqcRYGate(q, 0.5215766879084716, 0);
  sqcRZGate(q, 0.9042519018982028, 0);
  sqcRYGate(q, -1.3573165858485485, 1);
  sqcRZGate(q, 2.8857122818566365, 1);
  sqcRYGate(q, 1.3780498571069093, 2);
  sqcRZGate(q, 0.010320415297879748, 2);
  sqcRYGate(q, -1.8009757276423688, 3);
  sqcRZGate(q, 3.0130341281498505, 3);
  sqcRYGate(q, 0.0005460016974057069, 4);
  sqcRZGate(q, -0.5106347726828504, 4);
  sqcRYGate(q, -0.022823557013780107, 5);
  sqcRZGate(q, -2.3129088062459062, 5);
  sqcRYGate(q, -3.1364112971054663, 6);
  sqcRZGate(q, 0.3277339086529807, 6);
  sqcRYGate(q, -3.1415382530568907, 7);
  sqcRZGate(q, -2.9535753909605087, 7);
  sqcRYGate(q, 1.7624379833315897, 8);
  sqcRZGate(q, -0.44485668905328396, 8);
  sqcRYGate(q, 0.7641114710968332, 9);
  sqcRZGate(q, 0.9682717603148889, 9);
  sqcRYGate(q, 0.20172499839520197, 10);
  sqcRZGate(q, 1.7602941105872156, 10);
  sqcRYGate(q, 2.2423684863364084, 11);
  sqcRZGate(q, -0.436077914980789, 11);
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
  sqcRYGate(q, 1.3442635125699516, 0);
  sqcRZGate(q, 1.5239182735889454, 0);
  sqcRYGate(q, -0.03570288372009589, 1);
  sqcRZGate(q, 2.9651651280702085, 1);
  sqcRYGate(q, -0.3914931223882787, 2);
  sqcRZGate(q, -0.910088033696093, 2);
  sqcRYGate(q, -1.929566505853326, 3);
  sqcRZGate(q, 0.8099355338950414, 3);
  sqcRYGate(q, 0.39745030349457355, 4);
  sqcRZGate(q, 2.8101319749088676, 4);
  sqcRYGate(q, -2.466670133463007, 5);
  sqcRZGate(q, 0.2755764291344333, 5);
  sqcRYGate(q, -0.03424926427467412, 6);
  sqcRZGate(q, 1.7992446346116084, 6);
  sqcRYGate(q, -6.040090796220812e-05, 7);
  sqcRZGate(q, -0.4988332628375618, 7);
  sqcRYGate(q, 3.1408868970039823, 8);
  sqcRZGate(q, 2.6596903901468223, 8);
  sqcRYGate(q, -0.18855601523403093, 9);
  sqcRZGate(q, -0.8447666319879933, 9);
  sqcRYGate(q, -0.31435958763342153, 10);
  sqcRZGate(q, -2.1138639540600863, 10);
  sqcRYGate(q, -0.6554720680321517, 11);
  sqcRZGate(q, 1.2955380554204972, 11);
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
  sqcRYGate(q, 1.4436842921214783, 0);
  sqcRZGate(q, 3.0772946983175826, 0);
  sqcRYGate(q, 2.483995407228381, 1);
  sqcRZGate(q, 1.3966306679535938, 1);
  sqcRYGate(q, -1.034090003469821, 2);
  sqcRZGate(q, 2.2322797067486606, 2);
  sqcRYGate(q, -0.8766830969670406, 3);
  sqcRZGate(q, -0.18694184417899698, 3);
  sqcRYGate(q, -0.0010171519313812174, 4);
  sqcRZGate(q, 0.44071278470953257, 4);
  sqcRYGate(q, 2.279016229920564, 5);
  sqcRZGate(q, 2.413008939058509, 5);
  sqcRYGate(q, -3.140499221397882, 6);
  sqcRZGate(q, -1.321408957827181, 6);
  sqcRYGate(q, 4.4649814228137075e-06, 7);
  sqcRZGate(q, -1.3773620154661517, 7);
  sqcRYGate(q, -0.8210568590482632, 8);
  sqcRZGate(q, 2.6891461859778, 8);
  sqcRYGate(q, 0.8946198512096847, 9);
  sqcRZGate(q, -2.2566429584866787, 9);
  sqcRYGate(q, 0.21118284718580455, 10);
  sqcRZGate(q, 2.572280910751113, 10);
  sqcRYGate(q, -1.386158986583971, 11);
  sqcRZGate(q, 3.0702641289314587, 11);
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
  sqcRYGate(q, -2.23077293677792, 0);
  sqcRZGate(q, -1.837941580841365, 0);
  sqcRYGate(q, -3.0713535873355626, 1);
  sqcRZGate(q, 1.6450125982979262, 1);
  sqcRYGate(q, -0.6305479366132607, 2);
  sqcRZGate(q, -2.487743120580677, 2);
  sqcRYGate(q, -3.009826724934531, 3);
  sqcRZGate(q, 1.4949132185791845, 3);
  sqcRYGate(q, 1.4714152594424441, 4);
  sqcRZGate(q, -1.7983273455139057, 4);
  sqcRYGate(q, 0.7273548582503162, 5);
  sqcRZGate(q, -2.4408228182854845, 5);
  sqcRYGate(q, 2.926190873834868, 6);
  sqcRZGate(q, -0.036512166453547046, 6);
  sqcRYGate(q, 3.1415801465979, 7);
  sqcRZGate(q, -1.6742182836824808, 7);
  sqcRYGate(q, 0.001156619162358652, 8);
  sqcRZGate(q, -0.8389046266212833, 8);
  sqcRYGate(q, 0.7389802975381116, 9);
  sqcRZGate(q, -0.9271104151224944, 9);
  sqcRYGate(q, -0.2132497573174703, 10);
  sqcRZGate(q, 1.9814530247779718, 10);
  sqcRYGate(q, 0.02608860833261516, 11);
  sqcRZGate(q, 3.0662088769617526, 11);
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
  sqcRYGate(q, 2.493540050205198, 0);
  sqcRZGate(q, 0.15469158964199262, 0);
  sqcRYGate(q, 2.2236740288953447, 1);
  sqcRZGate(q, 2.797815306935868, 1);
  sqcRYGate(q, -1.0193237111755082, 2);
  sqcRZGate(q, -0.3003589012798189, 2);
  sqcRYGate(q, -0.710787195423515, 3);
  sqcRZGate(q, -1.9079980883499246, 3);
  sqcRYGate(q, 0.0004866041092484919, 4);
  sqcRZGate(q, -2.4141786528324025, 4);
  sqcRYGate(q, -1.3134027772168537, 5);
  sqcRZGate(q, 0.2865338529250483, 5);
  sqcRYGate(q, -0.00022654725804116538, 6);
  sqcRZGate(q, 0.018788950810409766, 6);
  sqcRYGate(q, 0.0003638777500265533, 7);
  sqcRZGate(q, 0.8610335190275249, 7);
  sqcRYGate(q, -0.936721254069613, 8);
  sqcRZGate(q, -0.759008593315845, 8);
  sqcRYGate(q, 2.7964494910921966, 9);
  sqcRZGate(q, -3.1395324244834226, 9);
  sqcRYGate(q, -0.2129916237542169, 10);
  sqcRZGate(q, 1.8473371763327766, 10);
  sqcRYGate(q, 0.6985671784310544, 11);
  sqcRZGate(q, -0.7495704504779672, 11);
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
  sqcRYGate(q, 1.3230222320940273, 0);
  sqcRZGate(q, 2.3617043445277637, 0);
  sqcRYGate(q, 0.2543781857361358, 1);
  sqcRZGate(q, -0.9890161867986453, 1);
  sqcRYGate(q, 1.1734243753180014, 2);
  sqcRZGate(q, 2.850563381859324, 2);
  sqcRYGate(q, -0.3452717213232124, 3);
  sqcRZGate(q, 1.7756264464032816, 3);
  sqcRYGate(q, 2.1604869474883204, 4);
  sqcRZGate(q, -0.13854463447629825, 4);
  sqcRYGate(q, 0.056331622039132334, 5);
  sqcRZGate(q, -1.7603467653784028, 5);
  sqcRYGate(q, -0.3209700210350838, 6);
  sqcRZGate(q, -0.4039644422687778, 6);
  sqcRYGate(q, -3.141461999586724, 7);
  sqcRZGate(q, -2.319743960117482, 7);
  sqcRYGate(q, -0.00015595143345858983, 8);
  sqcRZGate(q, -2.0009531620180088, 8);
  sqcRYGate(q, 2.1239420801208926, 9);
  sqcRZGate(q, 2.7045688932890903, 9);
  sqcRYGate(q, -2.9191650278049024, 10);
  sqcRZGate(q, -1.4229301362887208, 10);
  sqcRYGate(q, 2.4281097118215067, 11);
  sqcRZGate(q, 1.7443147438770321, 11);
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
  sqcRYGate(q, 0.4730365707005808, 0);
  sqcRZGate(q, 2.9228519892056704, 0);
  sqcRYGate(q, 1.459129773675584, 1);
  sqcRZGate(q, -0.14980010872776273, 1);
  sqcRYGate(q, 1.867098602689758, 2);
  sqcRZGate(q, -2.483106864939175, 2);
  sqcRYGate(q, 1.2050720630812741, 3);
  sqcRZGate(q, 0.4106108023944133, 3);
  sqcRYGate(q, -3.141563842032427, 4);
  sqcRZGate(q, -3.1331400146878376, 4);
  sqcRYGate(q, 1.3586726072284705, 5);
  sqcRZGate(q, -0.4604721900045447, 5);
  sqcRYGate(q, 0.17183045575220035, 6);
  sqcRZGate(q, -0.963799718753813, 6);
  sqcRYGate(q, -1.5717376978924582, 7);
  sqcRZGate(q, -2.436387074269451, 7);
  sqcRYGate(q, 2.5199007240291214, 8);
  sqcRZGate(q, 2.6469104309633025, 8);
  sqcRYGate(q, 0.22475193553373976, 9);
  sqcRZGate(q, -2.063839987186869, 9);
  sqcRYGate(q, 1.4755703341341615, 10);
  sqcRZGate(q, 2.684251470841393, 10);
  sqcRYGate(q, -0.9418623784214191, 11);
  sqcRZGate(q, -1.7723964305465287, 11);
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
  sqcRYGate(q, 0.9630666756753967, 0);
  sqcRZGate(q, -0.7522127122929277, 0);
  sqcRYGate(q, -3.1273249730006154, 1);
  sqcRZGate(q, 2.483153885344579, 1);
  sqcRYGate(q, 2.6619914007222656, 2);
  sqcRZGate(q, 0.5693019665314284, 2);
  sqcRYGate(q, 0.06408243322983598, 3);
  sqcRZGate(q, -1.8129289261160628, 3);
  sqcRYGate(q, -0.4588307368556834, 4);
  sqcRZGate(q, -0.5428867878409007, 4);
  sqcRYGate(q, -3.1414225456215017, 5);
  sqcRZGate(q, -2.9274335609241184, 5);
  sqcRYGate(q, -2.4551853523977303, 6);
  sqcRZGate(q, 0.6272878223115574, 6);
  sqcRYGate(q, -1.4506107336076122, 7);
  sqcRZGate(q, 0.6203212356172425, 7);
  sqcRYGate(q, 0.001718074997915764, 8);
  sqcRZGate(q, -1.7724100164587817, 8);
  sqcRYGate(q, 0.004481709793606361, 9);
  sqcRZGate(q, -2.074628072298557, 9);
  sqcRYGate(q, 3.063415151570507, 10);
  sqcRZGate(q, -0.09376025677499467, 10);
  sqcRYGate(q, -0.9439991454320956, 11);
  sqcRZGate(q, 1.1810951195570105, 11);
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
  sqcRYGate(q, -2.4853548343133056, 0);
  sqcRZGate(q, 0.9434846840981477, 0);
  sqcRYGate(q, -0.7513000761053421, 1);
  sqcRZGate(q, -1.798932601207416, 1);
  sqcRYGate(q, 3.1148385233211355, 2);
  sqcRZGate(q, 0.4116821465203954, 2);
  sqcRYGate(q, 1.021629832314809, 3);
  sqcRZGate(q, -1.4048460546215535, 3);
  sqcRYGate(q, 3.141462557343407, 4);
  sqcRZGate(q, -1.0468631123903531, 4);
  sqcRYGate(q, -0.0005876283499824326, 5);
  sqcRZGate(q, 2.7326288675453294, 5);
  sqcRYGate(q, -5.743279301029247e-05, 6);
  sqcRZGate(q, -2.677673097722878, 6);
  sqcRYGate(q, 3.140709648410497, 7);
  sqcRZGate(q, -0.1291773116154102, 7);
  sqcRYGate(q, -3.1415518745581874, 8);
  sqcRZGate(q, -1.2702998554067397, 8);
  sqcRYGate(q, -0.0022989603069714093, 9);
  sqcRZGate(q, 1.6191522990885876, 9);
  sqcRYGate(q, -0.31553131209118607, 10);
  sqcRZGate(q, 0.8042554204056831, 10);
  sqcRYGate(q, 0.09864666233367693, 11);
  sqcRZGate(q, 0.5221300868301055, 11);
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
  sqcRYGate(q, 2.206038292010779, 0);
  sqcRZGate(q, 2.8510090443860343, 0);
  sqcRYGate(q, -0.7926661949125702, 1);
  sqcRZGate(q, 1.9337179212401545, 1);
  sqcRYGate(q, 1.2654142443373884, 2);
  sqcRZGate(q, -0.9491279446241556, 2);
  sqcRYGate(q, -2.380150650982201, 3);
  sqcRZGate(q, 1.7939287566267978, 3);
  sqcRYGate(q, 2.340573193179917, 4);
  sqcRZGate(q, -0.08453256868486635, 4);
  sqcRYGate(q, -0.00012662253230644183, 5);
  sqcRZGate(q, 0.3083688181879847, 5);
  sqcRYGate(q, 2.2819834884637307, 6);
  sqcRZGate(q, 0.30382939379137686, 6);
  sqcRYGate(q, 2.993608647875378, 7);
  sqcRZGate(q, -0.7732033574450403, 7);
  sqcRYGate(q, 3.13912654466143, 8);
  sqcRZGate(q, -1.2720519707274138, 8);
  sqcRYGate(q, -0.0021723066558125836, 9);
  sqcRZGate(q, 1.6126036765795126, 9);
  sqcRYGate(q, -2.7432741227178146, 10);
  sqcRZGate(q, -1.209600386073455, 10);
  sqcRYGate(q, 1.170671937677727, 11);
  sqcRZGate(q, -1.7688716314800939, 11);
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
  sqcRYGate(q, 0.8060583608536174, 0);
  sqcRZGate(q, 1.6810149951593363, 0);
  sqcRYGate(q, 1.8258802822957787, 1);
  sqcRZGate(q, -2.8915863742086443, 1);
  sqcRYGate(q, 0.025601775513730975, 2);
  sqcRZGate(q, -1.513492845111739, 2);
  sqcRYGate(q, 0.8679111954084995, 3);
  sqcRZGate(q, 0.5491667131211243, 3);
  sqcRYGate(q, -3.1405926834298428, 4);
  sqcRZGate(q, -2.977509688358396, 4);
  sqcRYGate(q, -3.1407774226026213, 5);
  sqcRZGate(q, 0.31763151354238567, 5);
  sqcRYGate(q, 3.1415869452923437, 6);
  sqcRZGate(q, 2.3224364633099928, 6);
  sqcRYGate(q, 1.589729681618668, 7);
  sqcRZGate(q, 0.40204049242598927, 7);
  sqcRYGate(q, 1.4281167910240762, 8);
  sqcRZGate(q, -0.6490880125666689, 8);
  sqcRYGate(q, 0.49560257557822335, 9);
  sqcRZGate(q, 0.0956537836928407, 9);
  sqcRYGate(q, -1.0904575290922187, 10);
  sqcRZGate(q, 3.0921764198334567, 10);
  sqcRYGate(q, -1.6134562337314167, 11);
  sqcRZGate(q, -1.8072148530534031, 11);
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
  sqcRYGate(q, -0.8771739329193259, 0);
  sqcRZGate(q, -1.4511957859263387, 0);
  sqcRYGate(q, -2.0217458688521055, 1);
  sqcRZGate(q, -1.7149896319141649, 1);
  sqcRYGate(q, 2.995569387669925, 2);
  sqcRZGate(q, -1.0752431412750334, 2);
  sqcRYGate(q, 3.0122462792744846, 3);
  sqcRZGate(q, 1.6796826420736304, 3);
  sqcRYGate(q, -0.08614286964589526, 4);
  sqcRZGate(q, 3.025097553363825, 4);
  sqcRYGate(q, -3.140031198666221, 5);
  sqcRZGate(q, 2.926027025048147, 5);
  sqcRYGate(q, 0.0005025577205530175, 6);
  sqcRZGate(q, -0.41825717473007723, 6);
  sqcRYGate(q, -0.014091187518318726, 7);
  sqcRZGate(q, -1.4179836890776516, 7);
  sqcRYGate(q, -0.0004762206432005201, 8);
  sqcRZGate(q, -0.89170283033208, 8);
  sqcRYGate(q, 0.007320314635164984, 9);
  sqcRZGate(q, -2.7055672607002927, 9);
  sqcRYGate(q, -0.2891181361024744, 10);
  sqcRZGate(q, 3.109605428186072, 10);
  sqcRYGate(q, -3.0647182352028435, 11);
  sqcRZGate(q, -0.2903888403547237, 11);
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
  sqcRYGate(q, -1.706849695503881, 0);
  sqcRZGate(q, -2.17705371978642, 0);
  sqcRYGate(q, -1.922903187511861, 1);
  sqcRZGate(q, 1.8885963404175838, 1);
  sqcRYGate(q, 0.009095379396967826, 2);
  sqcRZGate(q, 0.6577017746398223, 2);
  sqcRYGate(q, -1.8446774456240194, 3);
  sqcRZGate(q, 0.13290838988153356, 3);
  sqcRYGate(q, 3.1402560076697394, 4);
  sqcRZGate(q, 0.6714563143918769, 4);
  sqcRYGate(q, -0.0007435363179623083, 5);
  sqcRZGate(q, -1.9811429152242082, 5);
  sqcRYGate(q, -9.916102261353643e-05, 6);
  sqcRZGate(q, -2.545878557946265, 6);
  sqcRYGate(q, 0.03578289378069895, 7);
  sqcRZGate(q, -0.7351446779150859, 7);
  sqcRYGate(q, 0.44908376562261715, 8);
  sqcRZGate(q, -0.903904407770198, 8);
  sqcRYGate(q, -2.0087996507481436, 9);
  sqcRZGate(q, -1.3255295856065237, 9);
  sqcRYGate(q, -2.608866013384521, 10);
  sqcRZGate(q, -0.019364905679594813, 10);
  sqcRYGate(q, 2.9812131091731264, 11);
  sqcRZGate(q, 0.4345695178169091, 11);
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
  sqcRYGate(q, 0.6843267073587489, 0);
  sqcRZGate(q, 1.9959282209618179, 0);
  sqcRYGate(q, 0.7535774412920855, 1);
  sqcRZGate(q, -0.08091755834707826, 1);
  sqcRYGate(q, 2.484354276894605, 2);
  sqcRZGate(q, -1.8607579608572073, 2);
  sqcRYGate(q, 1.2730853865002714, 3);
  sqcRZGate(q, -0.15135831935058072, 3);
  sqcRYGate(q, 0.36468802364155817, 4);
  sqcRZGate(q, -2.741954995647537, 4);
  sqcRYGate(q, 0.008656802648193464, 5);
  sqcRZGate(q, 2.7105836364742806, 5);
  sqcRYGate(q, 3.1402543462573944, 6);
  sqcRZGate(q, -0.03618708107941426, 6);
  sqcRYGate(q, 1.5694107000441273, 7);
  sqcRZGate(q, -0.8397801325279346, 7);
  sqcRYGate(q, 5.141298633538839e-05, 8);
  sqcRZGate(q, -2.2978415209729643, 8);
  sqcRYGate(q, -1.5695668654109873, 9);
  sqcRZGate(q, 1.6127479909995808, 9);
  sqcRYGate(q, -2.8554650880484402, 10);
  sqcRZGate(q, -2.9506319613040906, 10);
  sqcRYGate(q, -1.6004785329052806, 11);
  sqcRZGate(q, 2.176152554841075, 11);
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
  sqcRYGate(q, 0.4423237041693042, 0);
  sqcRZGate(q, 3.008891765909345, 0);
  sqcRYGate(q, -0.8834122499822344, 1);
  sqcRZGate(q, 0.7416967977061056, 1);
  sqcRYGate(q, -3.0102411131636817, 2);
  sqcRZGate(q, -1.852282704661854, 2);
  sqcRYGate(q, 2.8423730547379287, 3);
  sqcRZGate(q, -3.038042111478748, 3);
  sqcRYGate(q, 0.000713067941847928, 4);
  sqcRZGate(q, -2.4445401776612417, 4);
  sqcRYGate(q, 3.141584223286703, 5);
  sqcRZGate(q, 2.4057523625261155, 5);
  sqcRYGate(q, -3.141568750020561, 6);
  sqcRZGate(q, 2.111371928480091, 6);
  sqcRYGate(q, -3.140506971254031, 7);
  sqcRZGate(q, 0.8968330899684488, 7);
  sqcRYGate(q, 1.5690387868782087, 8);
  sqcRZGate(q, -3.0579031508266303, 8);
  sqcRYGate(q, 1.5714222727320974, 9);
  sqcRZGate(q, -3.0467548260401336, 9);
  sqcRYGate(q, 0.9408431068519478, 10);
  sqcRZGate(q, 1.4714276062270728, 10);
  sqcRYGate(q, -1.5707881988679517, 11);
  sqcRZGate(q, 1.5694060982732054, 11);
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
  sqcRYGate(q, -2.6196554576275117, 0);
  sqcRZGate(q, 0.8356958584392343, 0);
  sqcRYGate(q, -2.8078563355444173, 1);
  sqcRZGate(q, -2.2792071009546326, 1);
  sqcRYGate(q, 2.5737693149975023, 2);
  sqcRZGate(q, -0.9796131685809922, 2);
  sqcRYGate(q, -1.2504601821590227, 3);
  sqcRZGate(q, 2.780705275607384, 3);
  sqcRYGate(q, -0.05295243328164556, 4);
  sqcRZGate(q, 2.5373463372083225, 4);
  sqcRYGate(q, 3.1380832793357674, 5);
  sqcRZGate(q, -1.4624381965292281, 5);
  sqcRYGate(q, 2.6495291382642963, 6);
  sqcRZGate(q, 0.9809507363471174, 6);
  sqcRYGate(q, -1.570265560735753, 7);
  sqcRZGate(q, 1.5445122636478756, 7);
  sqcRYGate(q, -1.5706895659839553, 8);
  sqcRZGate(q, -0.8482410949243141, 8);
  sqcRYGate(q, -2.6048799786947905, 9);
  sqcRZGate(q, -3.0271832105234466, 9);
  sqcRYGate(q, -3.0927263121540514, 10);
  sqcRZGate(q, -1.303463226222118, 10);
  sqcRYGate(q, -1.631277909570657, 11);
  sqcRZGate(q, -3.0895953472002247, 11);
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
  sqcRYGate(q, -3.0973985513507065, 0);
  sqcRZGate(q, -2.1123179040574773, 0);
  sqcRYGate(q, 1.3704593618766285, 1);
  sqcRZGate(q, -2.3052476968760827, 1);
  sqcRYGate(q, -0.754920205884149, 2);
  sqcRZGate(q, 0.9602267653645803, 2);
  sqcRYGate(q, 1.5664932411222106, 3);
  sqcRZGate(q, 2.334651758171376, 3);
  sqcRYGate(q, 0.6608355250145966, 4);
  sqcRZGate(q, 1.7120960327536252, 4);
  sqcRYGate(q, -3.489530302935862e-06, 5);
  sqcRZGate(q, -0.1328021633469856, 5);
  sqcRYGate(q, 3.141591151212651, 6);
  sqcRZGate(q, 0.658657594494681, 6);
  sqcRYGate(q, 3.1415734804834057, 7);
  sqcRZGate(q, -0.026434115178596507, 7);
  sqcRYGate(q, 0.00510025931290059, 8);
  sqcRZGate(q, 2.76623127938661, 8);
  sqcRYGate(q, -1.570068633065035, 9);
  sqcRZGate(q, -2.828110374661722, 9);
  sqcRYGate(q, -1.6073716526460942, 10);
  sqcRZGate(q, 0.058452416004954905, 10);
  sqcRYGate(q, 2.5065737495559754, 11);
  sqcRZGate(q, -3.083044810873421, 11);
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
  sqcRYGate(q, 0.9676498531074742, 0);
  sqcRZGate(q, 2.9775591334516736, 0);
  sqcRYGate(q, 0.3206466807437156, 1);
  sqcRZGate(q, 1.3452869736872408, 1);
  sqcRYGate(q, 3.1414390618910844, 2);
  sqcRZGate(q, 2.8474474241429917, 2);
  sqcRYGate(q, -1.0301694817225417, 3);
  sqcRZGate(q, -0.9888635628074521, 3);
  sqcRYGate(q, 3.1409935020629085, 4);
  sqcRZGate(q, 1.7121024885946214, 4);
  sqcRYGate(q, 2.6172558004812522e-05, 5);
  sqcRZGate(q, -3.0293296437095147, 5);
  sqcRYGate(q, -3.1404133441732243, 6);
  sqcRZGate(q, -0.19791069125039853, 6);
  sqcRYGate(q, -1.5708337363612879, 7);
  sqcRZGate(q, 1.9336897163421352, 7);
  sqcRYGate(q, 1.1628390083009448, 8);
  sqcRZGate(q, 0.36098693935851645, 8);
  sqcRYGate(q, 1.1856050549242798, 9);
  sqcRZGate(q, 1.4630698876946935, 9);
  sqcRYGate(q, 0.47153816586103553, 10);
  sqcRZGate(q, 0.02312977979457731, 10);
  sqcRYGate(q, 1.6996054048270626, 11);
  sqcRZGate(q, -0.30896027969768336, 11);
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
  sqcRYGate(q, 1.5939405527816755, 0);
  sqcRZGate(q, 1.7005515567269434, 0);
  sqcRYGate(q, -0.8164564357451116, 1);
  sqcRZGate(q, -2.652869198580073, 1);
  sqcRYGate(q, 3.0552994663415336, 2);
  sqcRZGate(q, 2.311961162528116, 2);
  sqcRYGate(q, -0.02012272643436204, 3);
  sqcRZGate(q, 2.381916950324738, 3);
  sqcRYGate(q, 2.481903625501584, 4);
  sqcRZGate(q, 1.4420637008894002, 4);
  sqcRYGate(q, 1.7977514155000736, 5);
  sqcRZGate(q, 2.5930825838438665, 5);
  sqcRYGate(q, -4.866225206007258e-06, 6);
  sqcRZGate(q, -0.9027984050269744, 6);
  sqcRYGate(q, -3.1411609627102477, 7);
  sqcRZGate(q, 1.6156033904440514, 7);
  sqcRYGate(q, 0.0038557151882712415, 8);
  sqcRZGate(q, 0.19204265999567494, 8);
  sqcRYGate(q, -0.9162329532192102, 9);
  sqcRZGate(q, -2.1695753887759675, 9);
  sqcRYGate(q, -2.2813121056923666, 10);
  sqcRZGate(q, 2.168751175480324, 10);
  sqcRYGate(q, 0.3282070605860194, 11);
  sqcRZGate(q, 0.5291158352377172, 11);
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
  sqcRYGate(q, 2.3643988612579347, 0);
  sqcRZGate(q, 2.312137465256722, 0);
  sqcRYGate(q, 1.4973110249523538, 1);
  sqcRZGate(q, 0.4118335094763031, 1);
  sqcRYGate(q, -0.23720505835640007, 2);
  sqcRZGate(q, 2.78057885089428, 2);
  sqcRYGate(q, 3.141563743066349, 3);
  sqcRZGate(q, 0.40812697434030826, 3);
  sqcRYGate(q, 0.00038480542072506904, 4);
  sqcRZGate(q, 1.4987631129827799, 4);
  sqcRYGate(q, 3.141408965310971, 5);
  sqcRZGate(q, -0.5485868444419584, 5);
  sqcRYGate(q, -0.41389995347250685, 6);
  sqcRZGate(q, -1.2031506497606932, 6);
  sqcRYGate(q, 3.1415891807301755, 7);
  sqcRZGate(q, -1.5641753110299508, 7);
  sqcRYGate(q, -1.2688911358938697, 8);
  sqcRZGate(q, 2.367094154962282, 8);
  sqcRYGate(q, -0.006324880474370957, 9);
  sqcRZGate(q, 2.14768896460629, 9);
  sqcRYGate(q, 0.1074465469567043, 10);
  sqcRZGate(q, -2.109387594558657, 10);
  sqcRYGate(q, 0.11318045033133561, 11);
  sqcRZGate(q, -1.0484048348005965, 11);
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
  sqcRYGate(q, -1.057831445500327, 0);
  sqcRZGate(q, 0.761196096882257, 0);
  sqcRYGate(q, -2.068314650780698, 1);
  sqcRZGate(q, 1.0851402881143868, 1);
  sqcRYGate(q, -1.5965701547327242, 2);
  sqcRZGate(q, 1.915081028169452, 2);
  sqcRYGate(q, 2.8131301556518715, 3);
  sqcRZGate(q, -0.14962075202311542, 3);
  sqcRYGate(q, -4.322238702592074e-05, 4);
  sqcRZGate(q, 0.17977166020595625, 4);
  sqcRYGate(q, 1.7978918081164954, 5);
  sqcRZGate(q, 2.291409382747653, 5);
  sqcRYGate(q, 3.1415618705318744, 6);
  sqcRZGate(q, 3.001348271612008, 6);
  sqcRYGate(q, 3.1411739340326146, 7);
  sqcRZGate(q, -2.372010416967648, 7);
  sqcRYGate(q, -3.1344528670630014, 8);
  sqcRZGate(q, 1.0563260824817349, 8);
  sqcRYGate(q, 1.2118159818169367, 9);
  sqcRZGate(q, 1.4236265061405213, 9);
  sqcRYGate(q, -1.8806151469359114, 10);
  sqcRZGate(q, -1.42421244138208, 10);
  sqcRYGate(q, -0.2217168167165271, 11);
  sqcRZGate(q, 0.09645663072141365, 11);
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
  sqcRYGate(q, 0.8445310001357286, 0);
  sqcRZGate(q, -1.970429063107608, 0);
  sqcRYGate(q, -1.9653951199792088, 1);
  sqcRZGate(q, 1.494460594918605, 1);
  sqcRYGate(q, 1.1428608368439994, 2);
  sqcRZGate(q, 0.09700438021946489, 2);
  sqcRYGate(q, -0.004645493129560733, 3);
  sqcRZGate(q, 0.5109861049147969, 3);
  sqcRYGate(q, 2.0071144233663576, 4);
  sqcRZGate(q, 1.9240429332965023, 4);
  sqcRYGate(q, 1.2038469545483401, 5);
  sqcRZGate(q, 0.5222007117472884, 5);
  sqcRYGate(q, -1.4513752558467539, 6);
  sqcRZGate(q, 1.7814169274871452, 6);
  sqcRYGate(q, 1.1744438514308264, 7);
  sqcRZGate(q, -1.3227561632086913, 7);
  sqcRYGate(q, 1.9299196543998842, 8);
  sqcRZGate(q, -1.0492319578076303, 8);
  sqcRYGate(q, 0.5086597020587078, 9);
  sqcRZGate(q, -3.0439338806111933, 9);
  sqcRYGate(q, 2.035833414630649, 10);
  sqcRZGate(q, -2.8994515807622503, 10);
  sqcRYGate(q, -0.5274742529769973, 11);
  sqcRZGate(q, -0.29021262461578, 11);

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
