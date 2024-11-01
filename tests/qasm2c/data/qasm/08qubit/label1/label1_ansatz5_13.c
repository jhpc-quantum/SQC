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

  sqcRYGate(q, -1.8944101548759311, 0);
  sqcRYGate(q, -1.9280416337590385, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1298309410537435, 0);
  sqcRYGate(q, -2.308361487513872, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3543285765041611, 2);
  sqcRYGate(q, -2.084325172833524, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.287382349436319, 2);
  sqcRYGate(q, 2.5334617297648583, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7806635423168897, 4);
  sqcRYGate(q, -0.5822886988287239, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3832373268215026, 4);
  sqcRYGate(q, 1.5743236035805097, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.884724978397645, 6);
  sqcRYGate(q, -0.3856638987663174, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6900625484183116, 6);
  sqcRYGate(q, 2.1702235744773555, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0413177436384298, 1);
  sqcRYGate(q, 1.5848787587680397, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.26084446071227146, 1);
  sqcRYGate(q, 2.510721003695681, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7715113192173836, 3);
  sqcRYGate(q, -0.4876496542562905, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8968927941258835, 3);
  sqcRYGate(q, 3.078015983676116, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.924906193033948, 5);
  sqcRYGate(q, 1.6937119298856462, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1413624563629496, 5);
  sqcRYGate(q, -2.824709051088276, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9666802950433789, 0);
  sqcRYGate(q, -1.168862966321858, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9329016362849352, 0);
  sqcRYGate(q, -1.899002664333094, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6984081239131623, 2);
  sqcRYGate(q, -0.5154825834856981, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6033742878527018, 2);
  sqcRYGate(q, 1.7297376087467466, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1776175662244688, 4);
  sqcRYGate(q, 2.724295875479849, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4815006311389272, 4);
  sqcRYGate(q, -1.8282325569103144, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8292148411418879, 6);
  sqcRYGate(q, -1.0053779688574176, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.23097716923689482, 6);
  sqcRYGate(q, 0.02930803150257688, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9685485581439695, 1);
  sqcRYGate(q, 0.5583585193162568, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.633391354475286, 1);
  sqcRYGate(q, 2.327063268340611, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.263547857362412, 3);
  sqcRYGate(q, -0.8669122133678924, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4134558027574204, 3);
  sqcRYGate(q, 2.8063170438489777, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2148638045624995, 5);
  sqcRYGate(q, -1.159455980185726, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1104531466301069, 5);
  sqcRYGate(q, -3.0866894519361656, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7375531182929973, 0);
  sqcRYGate(q, 1.50332455063229, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3103797257029646, 0);
  sqcRYGate(q, -0.8282967331153839, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3278498603355017, 2);
  sqcRYGate(q, 2.539187375681068, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4941739692189295, 2);
  sqcRYGate(q, -2.303741038832084, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3710210704136108, 4);
  sqcRYGate(q, 2.7384343891806164, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0947119761731656, 4);
  sqcRYGate(q, 1.570852869725169, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.215805057981566, 6);
  sqcRYGate(q, -0.6996173598717192, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.488544096549923, 6);
  sqcRYGate(q, -2.8276061005628925, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4783874094868041, 1);
  sqcRYGate(q, -0.7959955008918227, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5658981097704573, 1);
  sqcRYGate(q, -3.104584052730085, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8817237494624686, 3);
  sqcRYGate(q, -2.4665306576591597, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4622161047555613, 3);
  sqcRYGate(q, -1.5463010934682098, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.139669752563854, 5);
  sqcRYGate(q, -1.7071220503482618, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1154496395254694, 5);
  sqcRYGate(q, 1.99773540849755, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.119115850492083, 0);
  sqcRYGate(q, -2.3438674173520284, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1373159049070054, 0);
  sqcRYGate(q, -2.6850081966941537, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3690245804911, 2);
  sqcRYGate(q, -2.043580534794347, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2257994985006047, 2);
  sqcRYGate(q, 2.550023024747413, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3259802562354741, 4);
  sqcRYGate(q, 1.8646042238987965, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3149809473667746, 4);
  sqcRYGate(q, -2.0092753222715256, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9504244261908718, 6);
  sqcRYGate(q, 1.0828550660797758, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.05672920600831, 6);
  sqcRYGate(q, 1.0365951472660804, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3272956065750778, 1);
  sqcRYGate(q, 1.0081458795515106, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8777729889227434, 1);
  sqcRYGate(q, 1.034269618273279, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6635512513166368, 3);
  sqcRYGate(q, 0.7990990880949135, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4716432127379216, 3);
  sqcRYGate(q, 1.4364833978035603, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9501239875941844, 5);
  sqcRYGate(q, -0.6190595861350188, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.135622529508989, 5);
  sqcRYGate(q, 1.759725589252879, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.22326234074913032, 0);
  sqcRYGate(q, -0.17361392326568392, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8349489931256028, 0);
  sqcRYGate(q, -1.9001932319920218, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.236603300983844, 2);
  sqcRYGate(q, 0.9517617059849927, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.29180646938173904, 2);
  sqcRYGate(q, -2.7411292999286982, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8948507768275475, 4);
  sqcRYGate(q, -0.40643614675202155, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.453875948236378, 4);
  sqcRYGate(q, 0.9872567752081252, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4572799123248494, 6);
  sqcRYGate(q, 0.3310930445960111, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0532257520208956, 6);
  sqcRYGate(q, 3.034380040097515, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4703279955911857, 1);
  sqcRYGate(q, -2.1912232622055674, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7003947864244031, 1);
  sqcRYGate(q, -1.3222479561195086, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5352770508279807, 3);
  sqcRYGate(q, -1.5511463027476975, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.3167681690421618, 3);
  sqcRYGate(q, -0.9979452450376052, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8089353502698574, 5);
  sqcRYGate(q, 0.35394908751372756, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4070514345895822, 5);
  sqcRYGate(q, 2.5755794728386925, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4298849770792075, 0);
  sqcRYGate(q, -2.5245237104638103, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.206167893289261, 0);
  sqcRYGate(q, -1.1266290617889616, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.396012857032625, 2);
  sqcRYGate(q, 0.938500016422279, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7355781154267206, 2);
  sqcRYGate(q, -1.3576415483006505, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5608783683138308, 4);
  sqcRYGate(q, -1.3956336401143796, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.245656649563242, 4);
  sqcRYGate(q, -1.9123923790814334, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.606616516722154, 6);
  sqcRYGate(q, 0.8361729907241157, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2491670934442896, 6);
  sqcRYGate(q, 1.098834154691163, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.13440969618499568, 1);
  sqcRYGate(q, -0.7928731306324606, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.091068453103789, 1);
  sqcRYGate(q, -0.9975704232059512, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.952285185918972, 3);
  sqcRYGate(q, -2.2606429427690893, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6430480364440927, 3);
  sqcRYGate(q, 3.0603060827518123, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6789684658218764, 5);
  sqcRYGate(q, 0.25235617327621307, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7738659457235109, 5);
  sqcRYGate(q, -0.9302785122944653, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8418559202483831, 0);
  sqcRYGate(q, 0.48570990229670835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3602928894982575, 0);
  sqcRYGate(q, -0.8570789419482365, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4035248224215838, 2);
  sqcRYGate(q, 2.728011624501471, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4799536443128405, 2);
  sqcRYGate(q, 1.600438081115976, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.752201383235851, 4);
  sqcRYGate(q, -1.1277127124870665, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5957837322207507, 4);
  sqcRYGate(q, 1.3737304255846574, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8041838451345658, 6);
  sqcRYGate(q, -0.3049084281138103, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6018817931295102, 6);
  sqcRYGate(q, 2.068078235490751, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0241222709773146, 1);
  sqcRYGate(q, 2.2231980807101737, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2849160121323093, 1);
  sqcRYGate(q, 2.9564534262289066, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0652241771422633, 3);
  sqcRYGate(q, -2.186426745726176, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5019484361740731, 3);
  sqcRYGate(q, -2.1913598780507084, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9214844342762176, 5);
  sqcRYGate(q, 0.26459948026660834, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1986884783646006, 5);
  sqcRYGate(q, 3.0305986432069467, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9499640427987583, 0);
  sqcRYGate(q, 0.5742626708321233, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9706080152302352, 0);
  sqcRYGate(q, 1.2161846656279884, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.088933806407513, 2);
  sqcRYGate(q, -0.5767575313599762, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8580334969790153, 2);
  sqcRYGate(q, -2.078596597753818, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2724149929739115, 4);
  sqcRYGate(q, -2.552445364829433, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.161795584632749, 4);
  sqcRYGate(q, -2.829186340800326, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.40276676218871904, 6);
  sqcRYGate(q, -1.777149889087105, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.440425088948621, 6);
  sqcRYGate(q, 1.2751789402005775, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2602942306949316, 1);
  sqcRYGate(q, -0.7748359771197207, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6974380591173794, 1);
  sqcRYGate(q, 1.310782278415746, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5424787479156639, 3);
  sqcRYGate(q, 3.1070045911349164, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.1029900966653376, 3);
  sqcRYGate(q, 1.2446200378572547, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.759064778369888, 5);
  sqcRYGate(q, -2.705589352812919, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8900813084506825, 5);
  sqcRYGate(q, -0.143381599737471, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9595945133462781, 0);
  sqcRYGate(q, -2.4591977887605347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6345172826230865, 0);
  sqcRYGate(q, 3.1088581278568923, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.504823821701003, 2);
  sqcRYGate(q, -2.619156289020698, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.41014239608120784, 2);
  sqcRYGate(q, 2.642492323283814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9974917226707228, 4);
  sqcRYGate(q, -0.12692707082249918, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8237137361323676, 4);
  sqcRYGate(q, 2.6300908974416903, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9310412757001796, 6);
  sqcRYGate(q, 1.598985352598305, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9138188672252614, 6);
  sqcRYGate(q, -2.7224595575163106, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.979411853616273, 1);
  sqcRYGate(q, -1.1964618124695123, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0611677914784083, 1);
  sqcRYGate(q, -2.4060683008067154, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8191753700780211, 3);
  sqcRYGate(q, -0.5019409504156451, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.20700768424511534, 3);
  sqcRYGate(q, 1.3708909309923145, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.908753759466852, 5);
  sqcRYGate(q, 1.336763094120716, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6230233529420295, 5);
  sqcRYGate(q, 2.0124502924413123, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6179211928020328, 0);
  sqcRYGate(q, 1.755864425809626, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.105719518464348, 0);
  sqcRYGate(q, 2.1649606766210887, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.46421836959614754, 2);
  sqcRYGate(q, 0.8557019615275907, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1216556503080302, 2);
  sqcRYGate(q, 0.264044328078446, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.449968629600342, 4);
  sqcRYGate(q, 2.854499157282702, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.000003640155768, 4);
  sqcRYGate(q, 2.3494961109392656, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9367193793128714, 6);
  sqcRYGate(q, 0.02422993253361776, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9923084868478979, 6);
  sqcRYGate(q, 0.7744817410012168, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2184152327668605, 1);
  sqcRYGate(q, -0.14580321719184108, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0712786893638089, 1);
  sqcRYGate(q, 1.9877902200194546, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2834738975968472, 3);
  sqcRYGate(q, -0.33929198299577656, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6525184001123805, 3);
  sqcRYGate(q, 1.5894701045881534, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8034589228037246, 5);
  sqcRYGate(q, 2.9518298273469608, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.655536775489991, 5);
  sqcRYGate(q, 1.4113835220011395, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8189069566448681, 0);
  sqcRYGate(q, -0.4953539173484435, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.607744578178377, 0);
  sqcRYGate(q, 0.7095459539540849, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9475494928462114, 2);
  sqcRYGate(q, 3.052540550139931, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7152194333636304, 2);
  sqcRYGate(q, 2.861597068489805, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0052959511963846, 4);
  sqcRYGate(q, -1.8462741936834641, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6464794138744303, 4);
  sqcRYGate(q, 2.510057539544785, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3364394463828984, 6);
  sqcRYGate(q, 0.8760048230730728, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3771666131267333, 6);
  sqcRYGate(q, 1.6737414007268485, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.17040067942799916, 1);
  sqcRYGate(q, 2.6959077934508406, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5028751752695442, 1);
  sqcRYGate(q, -1.7971691643592855, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2042181976871533, 3);
  sqcRYGate(q, 1.8004304216678353, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4295779408065747, 3);
  sqcRYGate(q, 0.5798010728608463, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2814695208962468, 5);
  sqcRYGate(q, -2.636678778791291, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1078305409924702, 5);
  sqcRYGate(q, -1.5266332710437238, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9748184162244355, 0);
  sqcRYGate(q, -2.705484770214995, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0327017731782155, 0);
  sqcRYGate(q, 2.272804440257702, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.262534775180732, 2);
  sqcRYGate(q, 0.4166660101165087, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2844864100108495, 2);
  sqcRYGate(q, 2.5534762963638546, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3239227013358992, 4);
  sqcRYGate(q, 0.010218590062826542, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4717639044684376, 4);
  sqcRYGate(q, 1.2987657645842878, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8460344757951335, 6);
  sqcRYGate(q, -2.8041651362793365, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5640368522458854, 6);
  sqcRYGate(q, -1.3308442577850927, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5068881196475203, 1);
  sqcRYGate(q, -1.4136111668793478, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.21594362458946573, 1);
  sqcRYGate(q, -2.7151808562513424, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8232522031513849, 3);
  sqcRYGate(q, -1.168179650783535, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9565709804075668, 3);
  sqcRYGate(q, -2.9862190104416935, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5942705363841865, 5);
  sqcRYGate(q, -0.32460627360428074, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.24753793157372295, 5);
  sqcRYGate(q, 1.1377107656299223, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9444782971812233, 0);
  sqcRYGate(q, 2.6466177547825445, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4450918075577506, 0);
  sqcRYGate(q, 0.8729870872506664, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.371989857530823, 2);
  sqcRYGate(q, 0.8754768288907275, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9704009512647859, 2);
  sqcRYGate(q, 2.1290080860105567, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5804308994868395, 4);
  sqcRYGate(q, -1.5445023776108509, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9639760810086626, 4);
  sqcRYGate(q, -1.1482423309801904, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.245809476952215, 6);
  sqcRYGate(q, 0.2908755360974175, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3444707354068593, 6);
  sqcRYGate(q, 0.8689461461546237, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0004684800920045, 1);
  sqcRYGate(q, -2.6987757902827068, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6702667675879033, 1);
  sqcRYGate(q, 2.3654033765116105, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7421283276593895, 3);
  sqcRYGate(q, -2.844839068332211, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.00516717222202, 3);
  sqcRYGate(q, -1.7056028833785595, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8417435426915025, 5);
  sqcRYGate(q, 1.7707459208874579, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.889367040691808, 5);
  sqcRYGate(q, -1.6761505586185272, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.042655091400663, 0);
  sqcRYGate(q, 2.2986862380385342, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7640802162051173, 0);
  sqcRYGate(q, -1.867296068895862, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.019290964247167, 2);
  sqcRYGate(q, 2.100345243606035, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5317914682743816, 2);
  sqcRYGate(q, 2.4307946554840854, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0085453667254014, 4);
  sqcRYGate(q, 1.2901762644251131, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9526430885959641, 4);
  sqcRYGate(q, 1.0151550476288171, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.560281486377209, 6);
  sqcRYGate(q, -1.8255125766689502, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5146620401100046, 6);
  sqcRYGate(q, 1.8504473339401653, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4011243111546143, 1);
  sqcRYGate(q, 0.7830922204401436, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.951837663932502, 1);
  sqcRYGate(q, -2.5784401114971365, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6492772694923277, 3);
  sqcRYGate(q, 0.9551388769580598, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1551805078518118, 3);
  sqcRYGate(q, -2.8846334303250796, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1985495336346297, 5);
  sqcRYGate(q, -0.6262131473804688, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0566844566651277, 5);
  sqcRYGate(q, -2.0780849171902736, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8600923587989682, 0);
  sqcRYGate(q, -1.0876888815838552, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4742569409539839, 0);
  sqcRYGate(q, -0.8353366011034561, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5420484073934326, 2);
  sqcRYGate(q, 0.5263991549326904, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07663222299313138, 2);
  sqcRYGate(q, 1.8956888592016512, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3103939239472602, 4);
  sqcRYGate(q, -0.5892842537460784, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8841505595574591, 4);
  sqcRYGate(q, 0.9660717148059833, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0010139607982045, 6);
  sqcRYGate(q, -2.9304065794561946, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7561065520569474, 6);
  sqcRYGate(q, 1.3942246713257083, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.111988345204369, 1);
  sqcRYGate(q, -0.18295055734570212, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9435824336778897, 1);
  sqcRYGate(q, -2.8554058549371746, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.231009486073571, 3);
  sqcRYGate(q, 2.694244526100406, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.290312230697381, 3);
  sqcRYGate(q, 0.6876041171289796, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.166477686623776, 5);
  sqcRYGate(q, -2.4975429309614525, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2865484822963102, 5);
  sqcRYGate(q, -1.2480001815440156, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3430328212317315, 0);
  sqcRYGate(q, -0.9365661001398662, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.08700637399575228, 0);
  sqcRYGate(q, -0.427379615284436, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.730991606311702, 2);
  sqcRYGate(q, -2.6447205664963898, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.336139700630591, 2);
  sqcRYGate(q, 2.5033715226683073, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.278842916593886, 4);
  sqcRYGate(q, -2.555672046917301, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7699123406074664, 4);
  sqcRYGate(q, -1.8107225727897374, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6001558671787266, 6);
  sqcRYGate(q, -1.1494572175043976, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2660111836999599, 6);
  sqcRYGate(q, 1.3209482085881963, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1533881187463355, 1);
  sqcRYGate(q, -0.1584672071584627, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2372352307102104, 1);
  sqcRYGate(q, 2.1838620657659216, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.176996896513546, 3);
  sqcRYGate(q, 0.24049583746715886, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3579363789199403, 3);
  sqcRYGate(q, -2.122564306833546, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3050004441299148, 5);
  sqcRYGate(q, -2.4843336181714912, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.69228784941889, 5);
  sqcRYGate(q, 2.8998613274245626, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7473011807807285, 0);
  sqcRYGate(q, -0.01064107651237867, 1);
  sqcRYGate(q, -2.9396842832156107, 2);
  sqcRYGate(q, 1.0704046142648131, 3);
  sqcRYGate(q, 0.24076679361189232, 4);
  sqcRYGate(q, -0.6020591242075292, 5);
  sqcRYGate(q, 2.7356391750547098, 6);
  sqcRYGate(q, -2.1646780546919953, 7);

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
