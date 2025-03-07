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

  sqcRYGate(q, 2.0544524531539627, 0);
  sqcRZGate(q, 0.6807634574496335, 0);
  sqcRYGate(q, 2.606157127085731, 1);
  sqcRZGate(q, 0.5468131566867741, 1);
  sqcRYGate(q, -0.029805353111273192, 2);
  sqcRZGate(q, -0.526384827040962, 2);
  sqcRYGate(q, 1.657741991179626, 3);
  sqcRZGate(q, -1.5772963015556263, 3);
  sqcRYGate(q, 0.1403580726750539, 4);
  sqcRZGate(q, -2.331660778412238, 4);
  sqcRYGate(q, 2.235305734990978, 5);
  sqcRZGate(q, 0.0035626291235262616, 5);
  sqcRYGate(q, -1.6537080859631281, 6);
  sqcRZGate(q, 0.44890421480339693, 6);
  sqcRYGate(q, -1.5365231224710971, 7);
  sqcRZGate(q, 1.3860592348785103, 7);
  sqcRYGate(q, 3.1109250443821197, 8);
  sqcRZGate(q, 2.9061508394363194, 8);
  sqcRYGate(q, -0.06519624111199707, 9);
  sqcRZGate(q, -2.39708851372246, 9);
  sqcRYGate(q, -1.259191150386338, 10);
  sqcRZGate(q, 1.6868527030362461, 10);
  sqcRYGate(q, 3.0926062322273595, 11);
  sqcRZGate(q, 2.8131937806468867, 11);
  sqcRYGate(q, -0.20482480840566838, 12);
  sqcRZGate(q, 1.43906042902963, 12);
  sqcRYGate(q, 1.6125580774485349, 13);
  sqcRZGate(q, -1.4344793475364597, 13);
  sqcRYGate(q, 1.9651617151978023, 14);
  sqcRZGate(q, 2.6202896177674684, 14);
  sqcRYGate(q, 3.0999823946771348, 15);
  sqcRZGate(q, -2.9792350239773877, 15);
  sqcRYGate(q, 1.5768787122239916, 16);
  sqcRZGate(q, -2.9614764319939164, 16);
  sqcRYGate(q, 1.5172966555785492, 17);
  sqcRZGate(q, -2.8583174315476114, 17);
  sqcRYGate(q, 2.025306908542678, 18);
  sqcRZGate(q, -2.9024716462324007, 18);
  sqcRYGate(q, -0.0767298778949712, 19);
  sqcRZGate(q, -2.539554549661157, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.3604577895733216, 0);
  sqcRZGate(q, -1.2993355872911911, 0);
  sqcRYGate(q, -2.2951775206959133, 1);
  sqcRZGate(q, -2.9466486568879264, 1);
  sqcRYGate(q, -3.0788130942348975, 2);
  sqcRZGate(q, 2.232028029758262, 2);
  sqcRYGate(q, -1.4361399097283036, 3);
  sqcRZGate(q, -1.658617575709882, 3);
  sqcRYGate(q, 3.122706159339856, 4);
  sqcRZGate(q, -0.21940957855368917, 4);
  sqcRYGate(q, -1.548881873319611, 5);
  sqcRZGate(q, -2.4971982361777507, 5);
  sqcRYGate(q, 2.9583036844878237, 6);
  sqcRZGate(q, -1.9829643175858216, 6);
  sqcRYGate(q, -0.6017270990427717, 7);
  sqcRZGate(q, -2.5492131808980685, 7);
  sqcRYGate(q, -1.5627983914920527, 8);
  sqcRZGate(q, -0.636611441166366, 8);
  sqcRYGate(q, -0.2564544391308089, 9);
  sqcRZGate(q, -0.0738344621903062, 9);
  sqcRYGate(q, -1.2963609418171653, 10);
  sqcRZGate(q, 1.2332837160437642, 10);
  sqcRYGate(q, 2.015035347998163, 11);
  sqcRZGate(q, 2.9885644198327115, 11);
  sqcRYGate(q, -3.1390785972319506, 12);
  sqcRZGate(q, -0.15922746740180085, 12);
  sqcRYGate(q, 0.05825035742057029, 13);
  sqcRZGate(q, -0.24003754753875306, 13);
  sqcRYGate(q, -1.629969768596471, 14);
  sqcRZGate(q, -1.6301358802848176, 14);
  sqcRYGate(q, -1.549113947422385, 15);
  sqcRZGate(q, -0.1626081012683148, 15);
  sqcRYGate(q, 2.8670776631431547, 16);
  sqcRZGate(q, 0.6389704741366626, 16);
  sqcRYGate(q, 0.3208339941588941, 17);
  sqcRZGate(q, 2.0182836899086496, 17);
  sqcRYGate(q, -0.1820224470647708, 18);
  sqcRZGate(q, 1.9356026894418799, 18);
  sqcRYGate(q, -3.087917135726134, 19);
  sqcRZGate(q, -2.1409616566547394, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.0656656841434111, 0);
  sqcRZGate(q, 1.206793142042761, 0);
  sqcRYGate(q, 0.7906434881024706, 1);
  sqcRZGate(q, 1.478764824607798, 1);
  sqcRYGate(q, -1.5762909797085145, 2);
  sqcRZGate(q, 1.6269171623999092, 2);
  sqcRYGate(q, -1.5522351450379341, 3);
  sqcRZGate(q, 1.8145218791417763, 3);
  sqcRYGate(q, 0.10008761377457868, 4);
  sqcRZGate(q, 0.8519844477405031, 4);
  sqcRYGate(q, 2.7304634410497295, 5);
  sqcRZGate(q, 2.3500328644732598, 5);
  sqcRYGate(q, -1.585536290193347, 6);
  sqcRZGate(q, -2.6618502204920778, 6);
  sqcRYGate(q, -1.691769250096515, 7);
  sqcRZGate(q, -3.096106315978571, 7);
  sqcRYGate(q, -0.012900664282500036, 8);
  sqcRZGate(q, 0.6628059916991553, 8);
  sqcRYGate(q, -1.567309237032873, 9);
  sqcRZGate(q, -1.6554622998727335, 9);
  sqcRYGate(q, -3.1343118329637, 10);
  sqcRZGate(q, 2.9250337541459035, 10);
  sqcRYGate(q, -1.6079837846773932, 11);
  sqcRZGate(q, 1.6036578005556459, 11);
  sqcRYGate(q, 0.10079014504117188, 12);
  sqcRZGate(q, -1.298913425768247, 12);
  sqcRYGate(q, -1.5202004566656377, 13);
  sqcRZGate(q, 0.49773743667992687, 13);
  sqcRYGate(q, -2.9566084051764614, 14);
  sqcRZGate(q, 0.33718255359789545, 14);
  sqcRYGate(q, 1.6299488212564992, 15);
  sqcRZGate(q, 2.8757941723498615, 15);
  sqcRYGate(q, 3.056063797829952, 16);
  sqcRZGate(q, 2.238069910916834, 16);
  sqcRYGate(q, -0.15595058887613686, 17);
  sqcRZGate(q, 1.4830762751646365, 17);
  sqcRYGate(q, -2.804221785591622, 18);
  sqcRZGate(q, -1.4669656949765761, 18);
  sqcRYGate(q, 1.9826079846306885, 19);
  sqcRZGate(q, 3.0856170120855935, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.817236902146337, 0);
  sqcRZGate(q, -0.27942122206312464, 0);
  sqcRYGate(q, -0.8654778208464622, 1);
  sqcRZGate(q, -1.3349864317389808, 1);
  sqcRYGate(q, -0.44767788911507267, 2);
  sqcRZGate(q, -2.916914695877357, 2);
  sqcRYGate(q, 0.16822711732731754, 3);
  sqcRZGate(q, -0.0524181260218807, 3);
  sqcRYGate(q, -1.5374134277738454, 4);
  sqcRZGate(q, 2.49795257575802, 4);
  sqcRYGate(q, -1.5991650717957526, 5);
  sqcRZGate(q, 0.6883728346350066, 5);
  sqcRYGate(q, -1.710045594269452, 6);
  sqcRZGate(q, -0.027024491170923422, 6);
  sqcRYGate(q, 1.4404696367853633, 7);
  sqcRZGate(q, -0.03599578421171046, 7);
  sqcRYGate(q, 1.5629657822696466, 8);
  sqcRZGate(q, 1.6093451814144646, 8);
  sqcRYGate(q, -2.1248926829419092, 9);
  sqcRZGate(q, -1.825026899329072, 9);
  sqcRYGate(q, -3.12649157732267, 10);
  sqcRZGate(q, 2.9895316494526, 10);
  sqcRYGate(q, -1.5116214860085773, 11);
  sqcRZGate(q, 0.4591394018558084, 11);
  sqcRYGate(q, 1.5812449453783295, 12);
  sqcRZGate(q, 2.8097279704194227, 12);
  sqcRYGate(q, -2.6806439135478546, 13);
  sqcRZGate(q, -2.308047906081967, 13);
  sqcRYGate(q, -0.025804367426089492, 14);
  sqcRZGate(q, -0.9355584117760323, 14);
  sqcRYGate(q, 0.015466839466578897, 15);
  sqcRZGate(q, -0.14441381777237616, 15);
  sqcRYGate(q, 3.0913737822052063, 16);
  sqcRZGate(q, -3.033364792412619, 16);
  sqcRYGate(q, 2.040087283829857, 17);
  sqcRZGate(q, -2.221402913945294, 17);
  sqcRYGate(q, -1.6948676526657396, 18);
  sqcRZGate(q, -3.136415218343636, 18);
  sqcRYGate(q, -1.3467221563288128, 19);
  sqcRZGate(q, 0.9343949884220035, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.5996685140310496, 0);
  sqcRZGate(q, -2.9965195478264093, 0);
  sqcRYGate(q, -1.0429374963502887, 1);
  sqcRZGate(q, -0.44356886030576087, 1);
  sqcRYGate(q, 0.0030693564675040768, 2);
  sqcRZGate(q, 2.593001301490187, 2);
  sqcRYGate(q, 2.4181197715357152, 3);
  sqcRZGate(q, -1.959341387415731, 3);
  sqcRYGate(q, 0.027885282602277184, 4);
  sqcRZGate(q, -1.1413994816803374, 4);
  sqcRYGate(q, -0.009355960195463605, 5);
  sqcRZGate(q, 1.5331998438901535, 5);
  sqcRYGate(q, -1.5518869034518512, 6);
  sqcRZGate(q, -1.5529637724606085, 6);
  sqcRYGate(q, -0.03206730772377443, 7);
  sqcRZGate(q, 0.06544229051106497, 7);
  sqcRYGate(q, -0.08497887535824254, 8);
  sqcRZGate(q, 3.1369472107051157, 8);
  sqcRYGate(q, 0.12819532366534858, 9);
  sqcRZGate(q, -1.6089297452284974, 9);
  sqcRYGate(q, -2.3198639694154455, 10);
  sqcRZGate(q, -1.4026089767150067, 10);
  sqcRYGate(q, 1.5839818490019173, 11);
  sqcRZGate(q, 1.5604340667958558, 11);
  sqcRYGate(q, -3.141063752670776, 12);
  sqcRZGate(q, -0.32054933513021605, 12);
  sqcRYGate(q, 0.000382282839940018, 13);
  sqcRZGate(q, -0.2653607580126463, 13);
  sqcRYGate(q, -0.029245280313534572, 14);
  sqcRZGate(q, 2.490981435037836, 14);
  sqcRYGate(q, -1.3923502772369876, 15);
  sqcRZGate(q, 0.9282127264563502, 15);
  sqcRYGate(q, 2.0750276433087227, 16);
  sqcRZGate(q, 2.7785758635380264, 16);
  sqcRYGate(q, -0.2794489291058291, 17);
  sqcRZGate(q, -0.8787517067209605, 17);
  sqcRYGate(q, 0.8178666375198035, 18);
  sqcRZGate(q, 0.034396103975069536, 18);
  sqcRYGate(q, -1.968298339788808, 19);
  sqcRZGate(q, 1.3238833941310224, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.0668951939955542, 0);
  sqcRZGate(q, -2.1710811619874617, 0);
  sqcRYGate(q, 1.3955397510443106, 1);
  sqcRZGate(q, -1.4747482695833671, 1);
  sqcRYGate(q, -3.137987092878187, 2);
  sqcRZGate(q, -0.5223579933125739, 2);
  sqcRYGate(q, 1.2388044500474282, 3);
  sqcRZGate(q, 0.16493684093511352, 3);
  sqcRYGate(q, 0.02354264799938968, 4);
  sqcRZGate(q, -3.04434965667958, 4);
  sqcRYGate(q, -1.9828009883697648, 5);
  sqcRZGate(q, -2.9652724704830526, 5);
  sqcRYGate(q, 1.5183432848492369, 6);
  sqcRZGate(q, 0.35839875898306767, 6);
  sqcRYGate(q, -1.7763009815798216, 7);
  sqcRZGate(q, -1.695670908547457, 7);
  sqcRYGate(q, -1.684934764829313, 8);
  sqcRZGate(q, -1.5451955327727456, 8);
  sqcRYGate(q, 0.7302400147795819, 9);
  sqcRZGate(q, 0.9005083177920544, 9);
  sqcRYGate(q, 3.1293461409839436, 10);
  sqcRZGate(q, 0.14292657959364952, 10);
  sqcRYGate(q, 0.3085960826227643, 11);
  sqcRZGate(q, 2.3715220512535433, 11);
  sqcRYGate(q, 1.4201643922272504, 12);
  sqcRZGate(q, 0.008244723148416178, 12);
  sqcRYGate(q, -0.8354427970820054, 13);
  sqcRZGate(q, 0.34587936360104793, 13);
  sqcRYGate(q, 0.03802079851165225, 14);
  sqcRZGate(q, 2.628189553121224, 14);
  sqcRYGate(q, 3.080603085296894, 15);
  sqcRZGate(q, 2.9482704904006596, 15);
  sqcRYGate(q, -0.0288290812723394, 16);
  sqcRZGate(q, -2.0543774473135725, 16);
  sqcRYGate(q, -0.4897499509764037, 17);
  sqcRZGate(q, -1.1819544542944094, 17);
  sqcRYGate(q, -2.612925601792823, 18);
  sqcRZGate(q, -2.9855243583381212, 18);
  sqcRYGate(q, -0.3355179233347627, 19);
  sqcRZGate(q, 1.0265139579019522, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 3.094273470042015, 0);
  sqcRZGate(q, -2.2723197411496763, 0);
  sqcRYGate(q, 1.6346151452615763, 1);
  sqcRZGate(q, 2.4595936310859856, 1);
  sqcRYGate(q, 0.017843093135981647, 2);
  sqcRZGate(q, -3.132893731272229, 2);
  sqcRYGate(q, 3.057413765198288, 3);
  sqcRZGate(q, 0.026204963212107517, 3);
  sqcRYGate(q, 1.1071396630397359, 4);
  sqcRZGate(q, 3.139972630357106, 4);
  sqcRYGate(q, 1.5734094432371482, 5);
  sqcRZGate(q, 0.8330173258736154, 5);
  sqcRYGate(q, -0.10139648793103095, 6);
  sqcRZGate(q, -0.5451612707843783, 6);
  sqcRYGate(q, -0.0357735996843032, 7);
  sqcRZGate(q, -1.4434519490279594, 7);
  sqcRYGate(q, 0.5192922578777901, 8);
  sqcRZGate(q, -2.042035401434668, 8);
  sqcRYGate(q, -3.1324830089230185, 9);
  sqcRZGate(q, -1.8313706774921856, 9);
  sqcRYGate(q, -1.569880062743057, 10);
  sqcRZGate(q, 0.927808105799363, 10);
  sqcRYGate(q, 0.11470847847247206, 11);
  sqcRZGate(q, 2.6942488373630433, 11);
  sqcRYGate(q, 1.5753780205846164, 12);
  sqcRZGate(q, -1.477249099226553, 12);
  sqcRYGate(q, 1.5310478225384232, 13);
  sqcRZGate(q, 1.475551721661845, 13);
  sqcRYGate(q, -1.7285660378690573, 14);
  sqcRZGate(q, -1.866480998625394, 14);
  sqcRYGate(q, 0.442024706224049, 15);
  sqcRZGate(q, -0.8522387516544581, 15);
  sqcRYGate(q, 0.7718900669508733, 16);
  sqcRZGate(q, -0.5527914686387194, 16);
  sqcRYGate(q, -0.7404226802794991, 17);
  sqcRZGate(q, -3.0086049896963396, 17);
  sqcRYGate(q, -2.4053702699875843, 18);
  sqcRZGate(q, 2.6021969082451624, 18);
  sqcRYGate(q, -1.7853060068446482, 19);
  sqcRZGate(q, 0.5524090128337926, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.4987236577625915, 0);
  sqcRZGate(q, -2.0799125854088487, 0);
  sqcRYGate(q, 0.8307476059602168, 1);
  sqcRZGate(q, 0.46648557535601665, 1);
  sqcRYGate(q, 1.8740119290992334, 2);
  sqcRZGate(q, 0.0029561876716543978, 2);
  sqcRYGate(q, -1.1918070130283183, 3);
  sqcRZGate(q, 3.129410210969173, 3);
  sqcRYGate(q, 1.6859725985307241, 4);
  sqcRZGate(q, -1.4836071713134942, 4);
  sqcRYGate(q, -3.117281849531889, 5);
  sqcRZGate(q, -2.219297809473451, 5);
  sqcRYGate(q, 1.6192939737689382, 6);
  sqcRZGate(q, -0.017478201575512803, 6);
  sqcRYGate(q, -1.826283780653946, 7);
  sqcRZGate(q, 1.321020446666874, 7);
  sqcRYGate(q, 3.137613457386393, 8);
  sqcRZGate(q, 1.2252890303975799, 8);
  sqcRYGate(q, 0.009811116426243771, 9);
  sqcRZGate(q, -2.1679345845698443, 9);
  sqcRYGate(q, -3.0356012203450207, 10);
  sqcRZGate(q, -1.3028126180893187, 10);
  sqcRYGate(q, -2.3146232999092793, 11);
  sqcRZGate(q, 0.5027508439443746, 11);
  sqcRYGate(q, -3.10268678659198, 12);
  sqcRZGate(q, 0.007242478398455096, 12);
  sqcRYGate(q, -0.02055419136432004, 13);
  sqcRZGate(q, 0.08304323731678752, 13);
  sqcRYGate(q, -0.15369560953661576, 14);
  sqcRZGate(q, -1.4109053528917341, 14);
  sqcRYGate(q, 0.13293968904332001, 15);
  sqcRZGate(q, 3.069842385241485, 15);
  sqcRYGate(q, 2.8683064382513392, 16);
  sqcRZGate(q, 3.0799473899488947, 16);
  sqcRYGate(q, -3.1399771470212148, 17);
  sqcRZGate(q, -0.34808049085574405, 17);
  sqcRYGate(q, -0.00693850238269178, 18);
  sqcRZGate(q, 1.0128806714738303, 18);
  sqcRYGate(q, -1.4896742573668817, 19);
  sqcRZGate(q, -0.21383575383292758, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 3.1336831115342316, 0);
  sqcRZGate(q, 1.4201197134898402, 0);
  sqcRYGate(q, -0.6590633054124627, 1);
  sqcRZGate(q, -2.7037693422077904, 1);
  sqcRYGate(q, 1.8085594252927875, 2);
  sqcRZGate(q, -3.141211807318008, 2);
  sqcRYGate(q, 1.575526698754117, 3);
  sqcRZGate(q, 0.008649925501154954, 3);
  sqcRYGate(q, -0.002580731103603624, 4);
  sqcRZGate(q, -1.659539061028541, 4);
  sqcRYGate(q, -2.976591056145751, 5);
  sqcRZGate(q, -3.0824339919079424, 5);
  sqcRYGate(q, 1.5923279777363568, 6);
  sqcRZGate(q, 3.0821222483223973, 6);
  sqcRYGate(q, -2.0657771905272266, 7);
  sqcRZGate(q, -0.5147470444643707, 7);
  sqcRYGate(q, 2.7065351024634987, 8);
  sqcRZGate(q, 0.08617511472063534, 8);
  sqcRYGate(q, 2.3462893612536755, 9);
  sqcRZGate(q, -0.8895903720456336, 9);
  sqcRYGate(q, 0.0013192478069150582, 10);
  sqcRZGate(q, -2.9979725853571733, 10);
  sqcRYGate(q, 1.6383079292337106, 11);
  sqcRZGate(q, -3.0506405530161724, 11);
  sqcRYGate(q, -0.016944605667292317, 12);
  sqcRZGate(q, 0.1491581555496737, 12);
  sqcRYGate(q, 1.491107416079787, 13);
  sqcRZGate(q, 1.5292055524037822, 13);
  sqcRYGate(q, -1.7537028038384355, 14);
  sqcRZGate(q, -0.5384189321302074, 14);
  sqcRYGate(q, 2.6756057054844593, 15);
  sqcRZGate(q, 3.038325636728582, 15);
  sqcRYGate(q, 1.5891747706449832, 16);
  sqcRZGate(q, 0.0243973868610734, 16);
  sqcRYGate(q, -2.9275039823207334, 17);
  sqcRZGate(q, 0.6090852636636948, 17);
  sqcRYGate(q, -3.102870690891217, 18);
  sqcRZGate(q, 0.4454455371010697, 18);
  sqcRYGate(q, 0.15191180873875598, 19);
  sqcRZGate(q, 0.2742270600275658, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.6260347701708016, 0);
  sqcRZGate(q, 2.8913178524252867, 0);
  sqcRYGate(q, -0.3688037125654408, 1);
  sqcRZGate(q, -1.1332239409129343, 1);
  sqcRYGate(q, 0.6163487562868291, 2);
  sqcRZGate(q, 0.024235858752513554, 2);
  sqcRYGate(q, 0.2080914502495377, 3);
  sqcRZGate(q, -0.3413346038372875, 3);
  sqcRYGate(q, -1.9253283399438503, 4);
  sqcRZGate(q, 3.138869250895926, 4);
  sqcRYGate(q, -1.6271692502311665, 5);
  sqcRZGate(q, 3.028206552890587, 5);
  sqcRYGate(q, -0.013714797772997224, 6);
  sqcRZGate(q, -3.079238912344282, 6);
  sqcRYGate(q, -3.0996052589237415, 7);
  sqcRZGate(q, 0.03457330475838561, 7);
  sqcRYGate(q, -3.1280182321337997, 8);
  sqcRZGate(q, -0.07079497571120628, 8);
  sqcRYGate(q, 3.139596130679389, 9);
  sqcRZGate(q, 0.6828673785540786, 9);
  sqcRYGate(q, 0.07878780697956095, 10);
  sqcRZGate(q, 1.6534255866771468, 10);
  sqcRYGate(q, 0.7634720401680211, 11);
  sqcRZGate(q, -2.005401980260424, 11);
  sqcRYGate(q, -1.5580014457863691, 12);
  sqcRZGate(q, -3.121424237977446, 12);
  sqcRYGate(q, -1.5819976479621145, 13);
  sqcRZGate(q, -0.004244991309461099, 13);
  sqcRYGate(q, -0.004773120155870281, 14);
  sqcRZGate(q, 0.562534013403848, 14);
  sqcRYGate(q, -1.6997497638595567, 15);
  sqcRZGate(q, -3.111328400342097, 15);
  sqcRYGate(q, 1.406006925425678, 16);
  sqcRZGate(q, 0.003245064630502448, 16);
  sqcRYGate(q, -1.5401915096759575, 17);
  sqcRZGate(q, -1.5093963905911243, 17);
  sqcRYGate(q, -1.3963961170766215, 18);
  sqcRZGate(q, 3.023039739862029, 18);
  sqcRYGate(q, 1.275777691193663, 19);
  sqcRZGate(q, -0.82216827324104, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.10424243748625094, 0);
  sqcRZGate(q, -2.7867731422664344, 0);
  sqcRYGate(q, -0.28469690311768847, 1);
  sqcRZGate(q, 0.6404011361888556, 1);
  sqcRYGate(q, -2.896119645092542, 2);
  sqcRZGate(q, -1.4401613863850968, 2);
  sqcRYGate(q, 3.1074872272155867, 3);
  sqcRZGate(q, -0.3408805040609061, 3);
  sqcRYGate(q, -2.1512967895937796, 4);
  sqcRZGate(q, 3.1309195873837914, 4);
  sqcRYGate(q, 0.08591661534531099, 5);
  sqcRZGate(q, 1.9990029436331342, 5);
  sqcRYGate(q, -2.831612122197277, 6);
  sqcRZGate(q, -0.011718239532506834, 6);
  sqcRYGate(q, 1.0357645907440327, 7);
  sqcRZGate(q, -1.256015829298007, 7);
  sqcRYGate(q, -2.8534810064698637, 8);
  sqcRZGate(q, 0.04570157676101486, 8);
  sqcRYGate(q, 1.8507141960950302, 9);
  sqcRZGate(q, 1.9493836023381137, 9);
  sqcRYGate(q, -3.124446986941846, 10);
  sqcRZGate(q, -2.900544190668033, 10);
  sqcRYGate(q, -3.109349387787132, 11);
  sqcRZGate(q, -0.3445490796072246, 11);
  sqcRYGate(q, 2.6698785519297537, 12);
  sqcRZGate(q, 0.0650370132971548, 12);
  sqcRYGate(q, 1.5676426805852146, 13);
  sqcRZGate(q, -2.0915020874701735, 13);
  sqcRYGate(q, -0.8874026054362911, 14);
  sqcRZGate(q, -3.1377336203589397, 14);
  sqcRYGate(q, -3.05067888151758, 15);
  sqcRZGate(q, 0.04332187154389223, 15);
  sqcRYGate(q, 2.2883597123784307, 16);
  sqcRZGate(q, 2.3974706883529233, 16);
  sqcRYGate(q, 0.20924420667986007, 17);
  sqcRZGate(q, -1.5655446324423687, 17);
  sqcRYGate(q, 0.0007399242174779276, 18);
  sqcRZGate(q, -3.075847758878042, 18);
  sqcRYGate(q, 3.0474858659885604, 19);
  sqcRZGate(q, -0.7617577280345795, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.012718718139825391, 0);
  sqcRZGate(q, 3.0555830002411186, 0);
  sqcRYGate(q, 1.1541781023336544, 1);
  sqcRZGate(q, -0.9747796791273345, 1);
  sqcRYGate(q, 0.0003610950761769871, 2);
  sqcRZGate(q, -1.6794280270233441, 2);
  sqcRYGate(q, 2.572880301574255, 3);
  sqcRZGate(q, -0.88129394160611, 3);
  sqcRYGate(q, 0.5826023927619239, 4);
  sqcRZGate(q, -3.134738744229575, 4);
  sqcRYGate(q, 3.0506910789120862, 5);
  sqcRZGate(q, -1.414595419546468, 5);
  sqcRYGate(q, -2.9635308523097574, 6);
  sqcRZGate(q, 0.014100503061285333, 6);
  sqcRYGate(q, -2.3147707994702076, 7);
  sqcRZGate(q, -2.3609178867569582, 7);
  sqcRYGate(q, -1.5249182223464484, 8);
  sqcRZGate(q, -2.8120451664031214, 8);
  sqcRYGate(q, 0.004321579463612224, 9);
  sqcRZGate(q, -2.797072093757662, 9);
  sqcRYGate(q, 0.053038111072187845, 10);
  sqcRZGate(q, 1.8328809794647776, 10);
  sqcRYGate(q, 1.5355578462730008, 11);
  sqcRZGate(q, -0.001506337824975535, 11);
  sqcRYGate(q, -1.5688410237585715, 12);
  sqcRZGate(q, 1.328696585507154, 12);
  sqcRYGate(q, 3.1380900538406236, 13);
  sqcRZGate(q, -2.088762379077447, 13);
  sqcRYGate(q, 1.5194855229438202, 14);
  sqcRZGate(q, 3.110575697051903, 14);
  sqcRYGate(q, 1.6727501762948735, 15);
  sqcRZGate(q, -0.00014550917156785914, 15);
  sqcRYGate(q, 0.007856537481757199, 16);
  sqcRZGate(q, -2.3995889879762946, 16);
  sqcRYGate(q, 3.136820871553739, 17);
  sqcRZGate(q, 1.3907831553913796, 17);
  sqcRYGate(q, 0.18498033412215148, 18);
  sqcRZGate(q, 2.111418181425451, 18);
  sqcRYGate(q, 0.6296354335937497, 19);
  sqcRZGate(q, -3.086051841098793, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.598760394317357, 0);
  sqcRZGate(q, -2.636762272515399, 0);
  sqcRYGate(q, -1.357144768573436, 1);
  sqcRZGate(q, 1.6988778778962637, 1);
  sqcRYGate(q, -1.5532107192807798, 2);
  sqcRZGate(q, 0.015277635650636334, 2);
  sqcRYGate(q, -2.9288414815529955, 3);
  sqcRZGate(q, -0.15507535488879592, 3);
  sqcRYGate(q, 0.35666228809258455, 4);
  sqcRZGate(q, -1.063626358622881, 4);
  sqcRYGate(q, -3.079223118516081, 5);
  sqcRZGate(q, 3.000129883393966, 5);
  sqcRYGate(q, -0.039510530083748885, 6);
  sqcRZGate(q, -0.45993348792052036, 6);
  sqcRYGate(q, -3.1245159554009696, 7);
  sqcRZGate(q, 2.1158502786803766, 7);
  sqcRYGate(q, 0.010321448274368983, 8);
  sqcRZGate(q, 1.9305577464057864, 8);
  sqcRYGate(q, 1.597907357057446, 9);
  sqcRZGate(q, 0.4173290872319857, 9);
  sqcRYGate(q, -0.46459380009644313, 10);
  sqcRZGate(q, 3.0567140847491165, 10);
  sqcRYGate(q, -0.37774032944708896, 11);
  sqcRZGate(q, -0.1394811355850711, 11);
  sqcRYGate(q, 0.08332988744475589, 12);
  sqcRZGate(q, 0.22669026472563447, 12);
  sqcRYGate(q, -1.6079953537794651, 13);
  sqcRZGate(q, 3.0659913925420135, 13);
  sqcRYGate(q, 0.10592095292219625, 14);
  sqcRZGate(q, 0.15830735669096008, 14);
  sqcRYGate(q, -0.4765527817064313, 15);
  sqcRZGate(q, 1.6525686811523883, 15);
  sqcRYGate(q, 1.5669244406243763, 16);
  sqcRZGate(q, 0.0011589988374984487, 16);
  sqcRYGate(q, -2.9270963709331586, 17);
  sqcRZGate(q, -1.7994154366055586, 17);
  sqcRYGate(q, 1.5663311118783279, 18);
  sqcRZGate(q, -1.2656798100812878, 18);
  sqcRYGate(q, -1.0443371263685082, 19);
  sqcRZGate(q, -2.4034255073795285, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -0.008474450490330911, 0);
  sqcRZGate(q, 2.7172225968734427, 0);
  sqcRYGate(q, 2.167036162602335, 1);
  sqcRZGate(q, -0.016241218058307947, 1);
  sqcRYGate(q, 0.005574430864195179, 2);
  sqcRZGate(q, 0.5066739345691753, 2);
  sqcRYGate(q, 0.0007484684603158546, 3);
  sqcRZGate(q, 2.4273372201450787, 3);
  sqcRYGate(q, 0.005105301197904304, 4);
  sqcRZGate(q, -2.078774254823826, 4);
  sqcRYGate(q, 1.3496648808315896, 5);
  sqcRZGate(q, -0.5116102990714824, 5);
  sqcRYGate(q, 0.7048978954954785, 6);
  sqcRZGate(q, -2.109477398018039, 6);
  sqcRYGate(q, 1.8478790333708837, 7);
  sqcRZGate(q, 2.143738715703855, 7);
  sqcRYGate(q, -3.072930321642487, 8);
  sqcRZGate(q, -0.8431683940399906, 8);
  sqcRYGate(q, 3.130029638435405, 9);
  sqcRZGate(q, -1.7363874409490583, 9);
  sqcRYGate(q, -1.5860702929152535, 10);
  sqcRZGate(q, 1.0869938204211484, 10);
  sqcRYGate(q, 0.07530547129367449, 11);
  sqcRZGate(q, -3.000763189717057, 11);
  sqcRYGate(q, 1.5791151304007203, 12);
  sqcRZGate(q, 3.1373444772013843, 12);
  sqcRYGate(q, -3.1323821735503947, 13);
  sqcRZGate(q, 1.6595849572284422, 13);
  sqcRYGate(q, 2.6632472001572154, 14);
  sqcRZGate(q, -2.9221350646663837, 14);
  sqcRYGate(q, 2.21783180758476, 15);
  sqcRZGate(q, 2.5240861953235094, 15);
  sqcRYGate(q, 1.5237605129928902, 16);
  sqcRZGate(q, -0.0356402052594067, 16);
  sqcRYGate(q, -1.7358543922552858, 17);
  sqcRZGate(q, 3.139411446993491, 17);
  sqcRYGate(q, 0.001487888250932273, 18);
  sqcRZGate(q, 2.8790035284411903, 18);
  sqcRYGate(q, 3.0506380137200395, 19);
  sqcRZGate(q, 1.5071431750114788, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -3.1408700447415994, 0);
  sqcRZGate(q, -1.4982047225100439, 0);
  sqcRYGate(q, -1.1167609270332397, 1);
  sqcRZGate(q, 3.0348862049973775, 1);
  sqcRYGate(q, 0.008313066939182382, 2);
  sqcRZGate(q, 1.051406118023229, 2);
  sqcRYGate(q, 1.5983029261617183, 3);
  sqcRZGate(q, -1.7311547361085768, 3);
  sqcRYGate(q, -1.564338395617789, 4);
  sqcRZGate(q, -1.5673446939599343, 4);
  sqcRYGate(q, -0.00620637632851972, 5);
  sqcRZGate(q, -1.0713318097811715, 5);
  sqcRYGate(q, 3.127955360144952, 6);
  sqcRZGate(q, 2.2763383825999197, 6);
  sqcRYGate(q, -3.1296734981992325, 7);
  sqcRZGate(q, -1.3268005382880568, 7);
  sqcRYGate(q, -3.1323471412586845, 8);
  sqcRZGate(q, 1.6146284843743477, 8);
  sqcRYGate(q, -3.135949370821011, 9);
  sqcRZGate(q, -0.5618299419400844, 9);
  sqcRYGate(q, 3.1415337520393214, 10);
  sqcRZGate(q, 2.6579258829735917, 10);
  sqcRYGate(q, -2.923243245939662, 11);
  sqcRZGate(q, -0.7679676144705722, 11);
  sqcRYGate(q, 0.2842513053072855, 12);
  sqcRZGate(q, 1.5800449264711383, 12);
  sqcRYGate(q, 3.1362883794298226, 13);
  sqcRZGate(q, -2.9169391070516726, 13);
  sqcRYGate(q, -3.1380220012554494, 14);
  sqcRZGate(q, -1.4565082860542233, 14);
  sqcRYGate(q, 3.1368806920240386, 15);
  sqcRZGate(q, 2.3913918900350875, 15);
  sqcRYGate(q, 0.0016456577590977517, 16);
  sqcRZGate(q, 1.6112205898807082, 16);
  sqcRYGate(q, 1.5703242833416482, 17);
  sqcRZGate(q, 1.581236308465197, 17);
  sqcRYGate(q, -1.2454639652792858, 18);
  sqcRZGate(q, -1.5738798009818673, 18);
  sqcRYGate(q, 0.2293743383137598, 19);
  sqcRZGate(q, 0.6380961782273343, 19);
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
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.5638747367349826, 0);
  sqcRZGate(q, -0.9464939193643699, 0);
  sqcRYGate(q, 2.5731365685768344, 1);
  sqcRZGate(q, -1.792776704959583, 1);
  sqcRYGate(q, -1.5668157145078796, 2);
  sqcRZGate(q, 0.6528170918735743, 2);
  sqcRYGate(q, 1.573454783582062, 3);
  sqcRZGate(q, -2.066793921993284, 3);
  sqcRYGate(q, 1.5661251279845514, 4);
  sqcRZGate(q, -2.4827389866520058, 4);
  sqcRYGate(q, -1.6429655164119186, 5);
  sqcRZGate(q, -0.45666172492697715, 5);
  sqcRYGate(q, -1.8534653710784683, 6);
  sqcRZGate(q, -0.11368745300591712, 6);
  sqcRYGate(q, 3.123773912596735, 7);
  sqcRZGate(q, 0.43020137910234124, 7);
  sqcRYGate(q, -1.5127362027973947, 8);
  sqcRZGate(q, 2.409773721535024, 8);
  sqcRYGate(q, -1.5671630524262634, 9);
  sqcRZGate(q, 3.000831494925638, 9);
  sqcRYGate(q, 1.5600260747571602, 10);
  sqcRZGate(q, -1.0034499016003082, 10);
  sqcRYGate(q, 0.007728467340432925, 11);
  sqcRZGate(q, 2.206035086723727, 11);
  sqcRYGate(q, 1.5767146790350912, 12);
  sqcRZGate(q, 2.1362479168295327, 12);
  sqcRYGate(q, 1.570856180065598, 13);
  sqcRZGate(q, 3.0207861246166745, 13);
  sqcRYGate(q, 1.6255603224263213, 14);
  sqcRZGate(q, -2.0952076419746453, 14);
  sqcRYGate(q, 0.6480141811578943, 15);
  sqcRZGate(q, -2.3331567625938487, 15);
  sqcRYGate(q, 1.5692348966260354, 16);
  sqcRZGate(q, -0.9558792559574951, 16);
  sqcRYGate(q, 1.5772146438363788, 17);
  sqcRZGate(q, -0.6099313721102964, 17);
  sqcRYGate(q, -1.5719022251829433, 18);
  sqcRZGate(q, 2.124291995598576, 18);
  sqcRYGate(q, 0.010263211468046762, 19);
  sqcRZGate(q, 1.7594350444749711, 19);

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
