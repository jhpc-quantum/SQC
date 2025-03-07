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

  sqcRYGate(q, 0.002826159691243845, 0);
  sqcRZGate(q, -0.39360537940384166, 0);
  sqcRYGate(q, 0.4369903447684875, 1);
  sqcRZGate(q, -0.3313600301674697, 1);
  sqcRYGate(q, 3.1328353849351163, 2);
  sqcRZGate(q, 1.1673640039332227, 2);
  sqcRYGate(q, 2.949679667488249, 3);
  sqcRZGate(q, -1.5778887844856377, 3);
  sqcRYGate(q, 0.00015189215267085118, 4);
  sqcRZGate(q, -2.377418913176947, 4);
  sqcRYGate(q, -2.8701403144671453, 5);
  sqcRZGate(q, -1.3021985503545774, 5);
  sqcRYGate(q, 0.0008347721993855473, 6);
  sqcRZGate(q, 1.5429032492352146, 6);
  sqcRYGate(q, 0.001823425382832887, 7);
  sqcRZGate(q, -2.1016112488449776, 7);
  sqcRYGate(q, 0.055162904906992424, 8);
  sqcRZGate(q, 0.49994022652927583, 8);
  sqcRYGate(q, -1.264159218417269, 9);
  sqcRZGate(q, -0.08872863677954766, 9);
  sqcRYGate(q, 1.5333936898034242, 10);
  sqcRZGate(q, -1.6382894193395412, 10);
  sqcRYGate(q, -2.742506526938777, 11);
  sqcRZGate(q, 1.6354413289659764, 11);
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
  sqcRYGate(q, 0.004617989035766712, 0);
  sqcRZGate(q, 1.7465217374612454, 0);
  sqcRYGate(q, 1.5430721396705327, 1);
  sqcRZGate(q, 0.917983878196404, 1);
  sqcRYGate(q, 0.03071396844934438, 2);
  sqcRZGate(q, -2.6327563397611224, 2);
  sqcRYGate(q, 3.075227224298552, 3);
  sqcRZGate(q, 2.1993932809278522, 3);
  sqcRYGate(q, -0.00027216353118268574, 4);
  sqcRZGate(q, 3.135755060842929, 4);
  sqcRYGate(q, -2.195792052507039, 5);
  sqcRZGate(q, 0.9716861616448755, 5);
  sqcRYGate(q, -0.005829319096176455, 6);
  sqcRZGate(q, -2.9856104874527873, 6);
  sqcRYGate(q, -1.5678067958419772, 7);
  sqcRZGate(q, 1.5803716806206987, 7);
  sqcRYGate(q, -1.6258192429991754, 8);
  sqcRZGate(q, 2.7202000155036243, 8);
  sqcRYGate(q, 1.8964181641224087, 9);
  sqcRZGate(q, -1.2983248200861155, 9);
  sqcRYGate(q, 0.10973040400507017, 10);
  sqcRZGate(q, 0.10434809950086078, 10);
  sqcRYGate(q, -1.5670015274503764, 11);
  sqcRZGate(q, 2.994846939039518, 11);
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
  sqcRYGate(q, -1.5708337673528323, 0);
  sqcRZGate(q, -1.481038764422455, 0);
  sqcRYGate(q, -2.36709838929729, 1);
  sqcRZGate(q, -1.9296266462116625, 1);
  sqcRYGate(q, 3.110741763035519, 2);
  sqcRZGate(q, -2.7528901055671713, 2);
  sqcRYGate(q, 0.009003919526151982, 3);
  sqcRZGate(q, 0.6468615186108494, 3);
  sqcRYGate(q, -3.141577546730699, 4);
  sqcRZGate(q, 0.049848391149581166, 4);
  sqcRYGate(q, -1.5765749189904554, 5);
  sqcRZGate(q, -0.0001277021441423955, 5);
  sqcRYGate(q, 1.5707869772985286, 6);
  sqcRZGate(q, -1.5708322306864602, 6);
  sqcRYGate(q, -0.9484807309848744, 7);
  sqcRZGate(q, -0.0284968963224026, 7);
  sqcRYGate(q, -1.6912380055748735, 8);
  sqcRZGate(q, -1.0481996267487201, 8);
  sqcRYGate(q, 0.0008910290338858128, 9);
  sqcRZGate(q, 2.8422181838553464, 9);
  sqcRYGate(q, 1.540160868232746, 10);
  sqcRZGate(q, 1.3364676630992223, 10);
  sqcRYGate(q, 1.727785522041155, 11);
  sqcRZGate(q, -0.30663716829408294, 11);
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
  sqcRYGate(q, 0.572491326326611, 0);
  sqcRZGate(q, -2.7493226743699606, 0);
  sqcRYGate(q, -0.06802493493630944, 1);
  sqcRZGate(q, 0.7762506773713485, 1);
  sqcRYGate(q, 1.5706334433817695, 2);
  sqcRZGate(q, 0.9890094807853568, 2);
  sqcRYGate(q, 1.5710238842432191, 3);
  sqcRZGate(q, 3.1412549594443893, 3);
  sqcRYGate(q, -1.5706694835485662, 4);
  sqcRZGate(q, 1.7313849397324423, 4);
  sqcRYGate(q, 0.8924646540258472, 5);
  sqcRZGate(q, -0.0013463916966577625, 5);
  sqcRYGate(q, 1.5707270796574848, 6);
  sqcRZGate(q, -1.82186794917731, 6);
  sqcRYGate(q, 3.1390510951030266, 7);
  sqcRZGate(q, 3.1205275483378947, 7);
  sqcRYGate(q, 6.73091470924092e-05, 8);
  sqcRZGate(q, -1.1468087118481314, 8);
  sqcRYGate(q, -1.5843638738837742, 9);
  sqcRZGate(q, 2.308102267698044, 9);
  sqcRYGate(q, 0.9058736916929565, 10);
  sqcRZGate(q, 1.5268180378965268, 10);
  sqcRYGate(q, 2.793322959238764, 11);
  sqcRZGate(q, -2.2517133844645594, 11);
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
  sqcRYGate(q, 2.730625680116332, 0);
  sqcRZGate(q, -2.9196997559215045, 0);
  sqcRYGate(q, 0.0011209774904272836, 1);
  sqcRZGate(q, 3.044608062568703, 1);
  sqcRYGate(q, 7.91485742457354e-06, 2);
  sqcRZGate(q, -1.3906394010911516, 2);
  sqcRYGate(q, 1.5704321922585298, 3);
  sqcRZGate(q, 2.0343018076138706, 3);
  sqcRYGate(q, -1.5708056814758147, 4);
  sqcRZGate(q, -1.5678222093139629, 4);
  sqcRYGate(q, 1.570704378777538, 5);
  sqcRZGate(q, -2.410706138263862, 5);
  sqcRYGate(q, 1.5302449467598205, 6);
  sqcRZGate(q, -1.8074181535187304, 6);
  sqcRYGate(q, -1.5703947213550302, 7);
  sqcRZGate(q, -0.7127220975633635, 7);
  sqcRYGate(q, -1.570750267200288, 8);
  sqcRZGate(q, -0.38854491273418557, 8);
  sqcRYGate(q, -3.138026997615074, 9);
  sqcRZGate(q, 3.0612718866814035, 9);
  sqcRYGate(q, 1.3177091345632501, 10);
  sqcRZGate(q, 1.9326544913343007, 10);
  sqcRYGate(q, 1.7040919634310576, 11);
  sqcRZGate(q, 0.3366226983351333, 11);
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
  sqcRYGate(q, 2.7998383045528854, 0);
  sqcRZGate(q, 2.5078875461428396, 0);
  sqcRYGate(q, 0.0006005185524653456, 1);
  sqcRZGate(q, 2.7890100527108963, 1);
  sqcRYGate(q, -2.86456848106734, 2);
  sqcRZGate(q, 2.6389396896617106, 2);
  sqcRYGate(q, 0.2859654204208262, 3);
  sqcRZGate(q, 1.125583792154603, 3);
  sqcRYGate(q, -1.5708645573170854, 4);
  sqcRZGate(q, 1.5706991979367029, 4);
  sqcRYGate(q, 3.1415523527575235, 5);
  sqcRZGate(q, 0.16912796654482484, 5);
  sqcRYGate(q, 3.968005829795159e-05, 6);
  sqcRZGate(q, 2.379416824606261, 6);
  sqcRYGate(q, -0.0017149273203296291, 7);
  sqcRZGate(q, -2.8585310659182204, 7);
  sqcRYGate(q, 0.002625961165480639, 8);
  sqcRZGate(q, 1.958472774629757, 8);
  sqcRYGate(q, -1.7567733443424451, 9);
  sqcRZGate(q, 0.004989678680615839, 9);
  sqcRYGate(q, -0.00048310295324861547, 10);
  sqcRZGate(q, 2.6853667205766456, 10);
  sqcRYGate(q, 3.040267879871542, 11);
  sqcRZGate(q, -1.3303582191401162, 11);
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
  sqcRYGate(q, -2.602468840833832, 0);
  sqcRZGate(q, 2.19044868990434, 0);
  sqcRYGate(q, 3.1411611298477506, 1);
  sqcRZGate(q, 2.4722670278306014, 1);
  sqcRYGate(q, -3.116550306569824, 2);
  sqcRZGate(q, 1.6819228256634216, 2);
  sqcRYGate(q, 1.5703548979362791, 3);
  sqcRZGate(q, -3.141570046171826, 3);
  sqcRYGate(q, 1.5707069735419328, 4);
  sqcRZGate(q, -2.7336405184661166, 4);
  sqcRYGate(q, -1.5708585724850004, 5);
  sqcRZGate(q, -1.5479251832719307, 5);
  sqcRYGate(q, -5.9435697010406114e-05, 6);
  sqcRZGate(q, 0.8501400153414576, 6);
  sqcRYGate(q, 3.1410639183150026, 7);
  sqcRZGate(q, -1.0896666312155743, 7);
  sqcRYGate(q, 1.2963144224487264, 8);
  sqcRZGate(q, 3.141461239058152, 8);
  sqcRYGate(q, 3.1373319573683673, 9);
  sqcRZGate(q, 0.08450420791583846, 9);
  sqcRYGate(q, 0.29925663432983995, 10);
  sqcRZGate(q, -1.8938099914842743, 10);
  sqcRYGate(q, -1.2234657976686594, 11);
  sqcRZGate(q, -2.8862853845709853, 11);
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
  sqcRYGate(q, -3.10648508166075, 0);
  sqcRZGate(q, -1.9427729401563205, 0);
  sqcRYGate(q, 1.7169963081452402, 1);
  sqcRZGate(q, -3.7193574097926785e-05, 1);
  sqcRYGate(q, -2.3964230099844444, 2);
  sqcRZGate(q, 2.5852414368239303, 2);
  sqcRYGate(q, 1.5707386644244576, 3);
  sqcRZGate(q, -0.9304643259390986, 3);
  sqcRYGate(q, -0.00015877470177461106, 4);
  sqcRZGate(q, 0.4772856644633166, 4);
  sqcRYGate(q, -3.1212150558701293, 5);
  sqcRZGate(q, -3.118795699475641, 5);
  sqcRYGate(q, 2.9453581800828434, 6);
  sqcRZGate(q, -1.1495313399341567, 6);
  sqcRYGate(q, -2.1678612349695925e-05, 7);
  sqcRZGate(q, -0.8900259374422883, 7);
  sqcRYGate(q, -1.5703577973442977, 8);
  sqcRZGate(q, -1.570001720685627, 8);
  sqcRYGate(q, -1.7039216408758526, 9);
  sqcRZGate(q, -0.01827953172596117, 9);
  sqcRYGate(q, 1.5701391030582859, 10);
  sqcRZGate(q, -0.0020458088990773335, 10);
  sqcRYGate(q, -0.7925476908010252, 11);
  sqcRZGate(q, -0.03772185213288905, 11);
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
  sqcRYGate(q, -1.768370952793644, 0);
  sqcRZGate(q, -3.0309521498078964, 0);
  sqcRYGate(q, -1.3588105532120385, 1);
  sqcRZGate(q, -0.03476652595954643, 1);
  sqcRYGate(q, 2.1269754616248804e-05, 2);
  sqcRZGate(q, 1.8627098486312093, 2);
  sqcRYGate(q, -0.0002528907004348824, 3);
  sqcRZGate(q, -2.068722715668179, 3);
  sqcRYGate(q, 0.0001682734289270016, 4);
  sqcRZGate(q, 1.566138325710137, 4);
  sqcRYGate(q, 1.5707802127309025, 5);
  sqcRZGate(q, 2.748563478040312, 5);
  sqcRYGate(q, -0.00011755187536336934, 6);
  sqcRZGate(q, 1.2781938511866677, 6);
  sqcRYGate(q, 1.5713742175717158, 7);
  sqcRZGate(q, -1.9097148002342852, 7);
  sqcRYGate(q, -1.570530584346544, 8);
  sqcRZGate(q, 1.6293990442538266, 8);
  sqcRYGate(q, -1.5707662039266133, 9);
  sqcRZGate(q, 0.08403662122001158, 9);
  sqcRYGate(q, -3.117636481055146, 10);
  sqcRZGate(q, 1.3093558510802925, 10);
  sqcRYGate(q, -1.5694462844708994, 11);
  sqcRZGate(q, -1.6281323959852374, 11);
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
  sqcRYGate(q, -1.5771471529660088, 0);
  sqcRZGate(q, 1.5783870816771621, 0);
  sqcRYGate(q, 0.23848260560997778, 1);
  sqcRZGate(q, 0.035952726748347714, 1);
  sqcRYGate(q, -0.7368994150274863, 2);
  sqcRZGate(q, -0.43289602509474506, 2);
  sqcRYGate(q, 1.503572522252946, 3);
  sqcRZGate(q, -2.6436024328385166, 3);
  sqcRYGate(q, -2.90378648877804, 4);
  sqcRZGate(q, 0.24519870302548166, 4);
  sqcRYGate(q, 1.8852208276607318, 5);
  sqcRZGate(q, 3.0780720916254567, 5);
  sqcRYGate(q, 0.12645160182992604, 6);
  sqcRZGate(q, 0.025382746670876703, 6);
  sqcRYGate(q, -1.0573380172079547, 7);
  sqcRZGate(q, -1.9294421248104436, 7);
  sqcRYGate(q, -0.8241657395751956, 8);
  sqcRZGate(q, 2.049117907456856, 8);
  sqcRYGate(q, -1.7915252253467866, 9);
  sqcRZGate(q, -2.0016332409666586, 9);
  sqcRYGate(q, 0.724608961411727, 10);
  sqcRZGate(q, 1.7058766578151499, 10);
  sqcRYGate(q, -1.2304803073150774, 11);
  sqcRZGate(q, 0.6715100787734434, 11);
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
  sqcRYGate(q, 1.5753171036042772, 0);
  sqcRZGate(q, -1.4752216265274296, 0);
  sqcRYGate(q, -1.575621911279482, 1);
  sqcRZGate(q, 2.4029195920499427, 1);
  sqcRYGate(q, -3.1414054037501127, 2);
  sqcRZGate(q, 2.3338749649436004, 2);
  sqcRYGate(q, -5.068761312898573e-05, 3);
  sqcRZGate(q, 0.8993860319411168, 3);
  sqcRYGate(q, 0.00023597077483028525, 4);
  sqcRZGate(q, -3.0335669577488593, 4);
  sqcRYGate(q, -0.0003702332297788047, 5);
  sqcRZGate(q, 2.7778912177532615, 5);
  sqcRYGate(q, -0.0001798337150100693, 6);
  sqcRZGate(q, 1.9438168467657735, 6);
  sqcRYGate(q, 3.136047944127074, 7);
  sqcRZGate(q, -0.1124991397143118, 7);
  sqcRYGate(q, -0.0009569155272233233, 8);
  sqcRZGate(q, 1.9501469905152922, 8);
  sqcRYGate(q, -0.002935021023748874, 9);
  sqcRZGate(q, 2.4104032281434673, 9);
  sqcRYGate(q, -3.0658272042165833, 10);
  sqcRZGate(q, 2.4256013126906915, 10);
  sqcRYGate(q, 3.1408286935085328, 11);
  sqcRZGate(q, 2.838677287331938, 11);
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
  sqcRYGate(q, -2.4722282048532858, 0);
  sqcRZGate(q, 1.2757735365810996, 0);
  sqcRYGate(q, 2.492117788602589, 1);
  sqcRZGate(q, -1.909140263760432, 1);
  sqcRYGate(q, -0.6691468688329649, 2);
  sqcRZGate(q, -1.862068286323729, 2);
  sqcRYGate(q, 0.6550892041476626, 3);
  sqcRZGate(q, 1.2900040747679622, 3);
  sqcRYGate(q, 0.9707238351699639, 4);
  sqcRZGate(q, -0.9009304479849382, 4);
  sqcRYGate(q, -0.7087158237754244, 5);
  sqcRZGate(q, 1.9305720179654635, 5);
  sqcRYGate(q, -1.9984321798057467, 6);
  sqcRZGate(q, -0.9398391605523974, 6);
  sqcRYGate(q, -0.05042010446526657, 7);
  sqcRZGate(q, -1.2663349850953693, 7);
  sqcRYGate(q, -1.6126031694535987, 8);
  sqcRZGate(q, 2.963363064311544, 8);
  sqcRYGate(q, -0.8110448056884797, 9);
  sqcRZGate(q, 0.5123703246658525, 9);
  sqcRYGate(q, -1.5813525597946967, 10);
  sqcRZGate(q, 3.1323012506128807, 10);
  sqcRYGate(q, 0.3543930705756135, 11);
  sqcRZGate(q, 1.6313858692038876, 11);

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
