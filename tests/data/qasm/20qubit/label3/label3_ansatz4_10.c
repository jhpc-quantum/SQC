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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -1.428648094092006, 0);
  sqcRZGate(q, -2.972236441457385, 0);
  sqcRYGate(q, 1.5818679912437263, 1);
  sqcRZGate(q, 0.6678227499634414, 1);
  sqcRYGate(q, 3.1412205755346165, 2);
  sqcRZGate(q, -1.6750457559202117, 2);
  sqcRYGate(q, 0.00034821003223761693, 3);
  sqcRZGate(q, 2.2424562530450474, 3);
  sqcRYGate(q, -2.277874179486237, 4);
  sqcRZGate(q, -2.557809909476415, 4);
  sqcRYGate(q, -0.09081439187884278, 5);
  sqcRZGate(q, -0.2505921136039788, 5);
  sqcRYGate(q, 0.0007550464726295621, 6);
  sqcRZGate(q, 0.4482916300810774, 6);
  sqcRYGate(q, -0.4515595661250437, 7);
  sqcRZGate(q, -0.7132478814012566, 7);
  sqcRYGate(q, 8.166597861005375e-05, 8);
  sqcRZGate(q, 2.012499109486042, 8);
  sqcRYGate(q, 3.138799672438621, 9);
  sqcRZGate(q, 2.374893749699817, 9);
  sqcRYGate(q, -3.1415905050701216, 10);
  sqcRZGate(q, -0.6984474279291677, 10);
  sqcRYGate(q, 3.1415385319592772, 11);
  sqcRZGate(q, -2.376284404158795, 11);
  sqcRYGate(q, -1.5707836160867237, 12);
  sqcRZGate(q, 3.138806328328784, 12);
  sqcRYGate(q, -1.5715371133314484, 13);
  sqcRZGate(q, 1.3986224887034262, 13);
  sqcRYGate(q, 3.0318826670480052, 14);
  sqcRZGate(q, -2.8720522756068583, 14);
  sqcRYGate(q, -3.037453350457227, 15);
  sqcRZGate(q, 0.2892773983125698, 15);
  sqcRYGate(q, -2.9513793032460693, 16);
  sqcRZGate(q, 1.4392885858761932, 16);
  sqcRYGate(q, -3.01522499566404, 17);
  sqcRZGate(q, 1.3795661596894488, 17);
  sqcRYGate(q, 3.022480776298781, 18);
  sqcRZGate(q, -0.3489574321138216, 18);
  sqcRYGate(q, 1.5929627663181771, 19);
  sqcRZGate(q, 1.0011894606288232, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.9141458794073807, 0);
  sqcRZGate(q, -3.0351046455464847, 0);
  sqcRYGate(q, 0.1082709364981434, 1);
  sqcRZGate(q, 2.828779147171294, 1);
  sqcRYGate(q, 1.5695358172668437, 2);
  sqcRZGate(q, 0.28962123225461595, 2);
  sqcRYGate(q, -1.3633782654421749, 3);
  sqcRZGate(q, -2.79278633423094, 3);
  sqcRYGate(q, -0.8763656119955074, 4);
  sqcRZGate(q, 2.706707996684495, 4);
  sqcRYGate(q, -3.0789606448885287, 5);
  sqcRZGate(q, -3.022576311726455, 5);
  sqcRYGate(q, 3.141138909337097, 6);
  sqcRZGate(q, -0.1148373708099901, 6);
  sqcRYGate(q, 0.4129085601723279, 7);
  sqcRZGate(q, -0.14440560958916332, 7);
  sqcRYGate(q, -3.1388212604719516, 8);
  sqcRZGate(q, 3.0840577392290904, 8);
  sqcRYGate(q, 1.5699353130449882, 9);
  sqcRZGate(q, -1.5686233620961376, 9);
  sqcRYGate(q, 3.1415461085747327, 10);
  sqcRZGate(q, 0.3621469094860066, 10);
  sqcRYGate(q, 0.26559627388251883, 11);
  sqcRZGate(q, 1.5207700389095269, 11);
  sqcRYGate(q, -1.5655672584741556, 12);
  sqcRZGate(q, -1.6101360559691944, 12);
  sqcRYGate(q, -0.0028072398529221942, 13);
  sqcRZGate(q, 0.1773308571228762, 13);
  sqcRYGate(q, -1.7968021174984663, 14);
  sqcRZGate(q, 3.1202719186797405, 14);
  sqcRYGate(q, -1.574086702023771, 15);
  sqcRZGate(q, -0.79530485554446, 15);
  sqcRYGate(q, -0.19059049154188656, 16);
  sqcRZGate(q, -1.855123556653607, 16);
  sqcRYGate(q, 3.0050984164144476, 17);
  sqcRZGate(q, 1.6776567348714377, 17);
  sqcRYGate(q, 1.5639671541585605, 18);
  sqcRZGate(q, -2.777827068702873, 18);
  sqcRYGate(q, -3.048005190479314, 19);
  sqcRZGate(q, 0.01132578372662607, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.56393946828578, 0);
  sqcRZGate(q, -0.7777047825579312, 0);
  sqcRYGate(q, -0.0011747785186643634, 1);
  sqcRZGate(q, 2.105850352188565, 1);
  sqcRYGate(q, -0.0004401292675098034, 2);
  sqcRZGate(q, 2.851293440076233, 2);
  sqcRYGate(q, -0.0004235786207536302, 3);
  sqcRZGate(q, 2.781582864721688, 3);
  sqcRYGate(q, -0.00010563685000586898, 4);
  sqcRZGate(q, 1.6635118862384755, 4);
  sqcRYGate(q, -3.1410052002578674, 5);
  sqcRZGate(q, -2.3490585804429482, 5);
  sqcRYGate(q, -1.5708267227992956, 6);
  sqcRZGate(q, -1.5707873155595358, 6);
  sqcRYGate(q, 3.1414920699666062, 7);
  sqcRZGate(q, -0.8742674023218125, 7);
  sqcRYGate(q, 1.5719096729171258, 8);
  sqcRZGate(q, 0.005748782079110448, 8);
  sqcRYGate(q, 1.5739743225182599, 9);
  sqcRZGate(q, -1.4363751111983871, 9);
  sqcRYGate(q, -1.547471485544368, 10);
  sqcRZGate(q, -1.4288802833259655, 10);
  sqcRYGate(q, -1.5702361333837649, 11);
  sqcRZGate(q, -1.570923761673735, 11);
  sqcRYGate(q, -0.008712039698815751, 12);
  sqcRZGate(q, -0.7330643860685715, 12);
  sqcRYGate(q, 0.024027848464301726, 13);
  sqcRZGate(q, -2.944437363165637, 13);
  sqcRYGate(q, 2.4343904364720985, 14);
  sqcRZGate(q, 1.013055259272916, 14);
  sqcRYGate(q, 2.1600317762730743, 15);
  sqcRZGate(q, -2.07235991988167, 15);
  sqcRYGate(q, 1.4611117385305101, 16);
  sqcRZGate(q, 2.880955923131705, 16);
  sqcRYGate(q, -1.6530670612106757, 17);
  sqcRZGate(q, -1.3366156912927913, 17);
  sqcRYGate(q, 1.7206050168389437, 18);
  sqcRZGate(q, -1.2425548514226064, 18);
  sqcRYGate(q, 2.7038073515257794, 19);
  sqcRZGate(q, -2.2530342669904906, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.1161130695429957, 0);
  sqcRZGate(q, -1.338781721618332, 0);
  sqcRYGate(q, 2.5423136990637802, 1);
  sqcRZGate(q, -2.4434774911986334, 1);
  sqcRYGate(q, -1.540423146088549, 2);
  sqcRZGate(q, 1.3326291247063042, 2);
  sqcRYGate(q, -1.5708996593381024, 3);
  sqcRZGate(q, 1.8332750218824683, 3);
  sqcRYGate(q, -1.5708173395214127, 4);
  sqcRZGate(q, -1.5705718125827468, 4);
  sqcRYGate(q, 3.141496197662753, 5);
  sqcRZGate(q, -0.2885643578680712, 5);
  sqcRYGate(q, -1.5720872809103836, 6);
  sqcRZGate(q, -0.0006660483517990407, 6);
  sqcRYGate(q, 1.5705047975911173, 7);
  sqcRZGate(q, -1.5703088287426885, 7);
  sqcRYGate(q, -3.141450007513622, 8);
  sqcRZGate(q, 1.0718669201165758, 8);
  sqcRYGate(q, 0.00015410558407058517, 9);
  sqcRZGate(q, -1.7074108499637932, 9);
  sqcRYGate(q, 3.074542296566194, 10);
  sqcRZGate(q, 1.1017247258964993, 10);
  sqcRYGate(q, -1.5698186702612997, 11);
  sqcRZGate(q, -0.4168270609218253, 11);
  sqcRYGate(q, 3.14136420633832, 12);
  sqcRZGate(q, 2.497624478285455, 12);
  sqcRYGate(q, -3.1413503738219446, 13);
  sqcRZGate(q, -0.8566417187384596, 13);
  sqcRYGate(q, 1.571005231313404, 14);
  sqcRZGate(q, 2.8265728163262227, 14);
  sqcRYGate(q, 0.5948394188274158, 15);
  sqcRZGate(q, -3.0946892291536345, 15);
  sqcRYGate(q, 0.07734325448726288, 16);
  sqcRZGate(q, 1.8648673049694207, 16);
  sqcRYGate(q, 3.1259611457682053, 17);
  sqcRZGate(q, -2.87564904750238, 17);
  sqcRYGate(q, -1.5749499401117901, 18);
  sqcRZGate(q, -1.1405726628703112, 18);
  sqcRYGate(q, 1.564302086794, 19);
  sqcRZGate(q, -0.9780865305512827, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.8210012651448242, 0);
  sqcRZGate(q, 1.6600023975173333, 0);
  sqcRYGate(q, -2.711426803294048, 1);
  sqcRZGate(q, 0.2874365879525028, 1);
  sqcRYGate(q, -3.1413515826057927, 2);
  sqcRZGate(q, -1.8076293485580885, 2);
  sqcRYGate(q, -3.139530922452781, 3);
  sqcRZGate(q, -0.5079453014740088, 3);
  sqcRYGate(q, 1.5717550215351703, 4);
  sqcRZGate(q, 0.000323439167584134, 4);
  sqcRYGate(q, 0.0010045985028977918, 5);
  sqcRZGate(q, 0.51034820179886, 5);
  sqcRYGate(q, 1.5757290220732205, 6);
  sqcRZGate(q, 0.819638727760358, 6);
  sqcRYGate(q, -0.8732876356375813, 7);
  sqcRZGate(q, -2.6745950077303933, 7);
  sqcRYGate(q, -3.1397972815786295, 8);
  sqcRZGate(q, -0.469288209220398, 8);
  sqcRYGate(q, 1.5704360063311267, 9);
  sqcRZGate(q, -0.03560681367376706, 9);
  sqcRYGate(q, 3.1410703420661052, 10);
  sqcRZGate(q, 0.9593565369014261, 10);
  sqcRYGate(q, -3.093262876433965, 11);
  sqcRZGate(q, -0.3426991025736281, 11);
  sqcRYGate(q, -3.1413485292487904, 12);
  sqcRZGate(q, 1.6951226276029492, 12);
  sqcRYGate(q, 3.141289212430654, 13);
  sqcRZGate(q, -2.571012389123409, 13);
  sqcRYGate(q, -1.3899664448721276, 14);
  sqcRZGate(q, -2.8487392554982702, 14);
  sqcRYGate(q, 1.6720096860855538, 15);
  sqcRZGate(q, -0.5329806291128341, 15);
  sqcRYGate(q, 2.3250336648614534, 16);
  sqcRZGate(q, -0.5860491593987849, 16);
  sqcRYGate(q, 2.348399263865215, 17);
  sqcRZGate(q, 1.423623775396612, 17);
  sqcRYGate(q, -0.1698098146044602, 18);
  sqcRZGate(q, -1.9058597471833107, 18);
  sqcRYGate(q, -3.0421959434691437, 19);
  sqcRZGate(q, -1.0695733775028857, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.260016883615938, 0);
  sqcRZGate(q, 1.3017100415660394, 0);
  sqcRYGate(q, 1.36923890158831, 1);
  sqcRZGate(q, 2.0446299629799176, 1);
  sqcRYGate(q, -1.5711011133290391, 2);
  sqcRZGate(q, -1.5806513818659473, 2);
  sqcRYGate(q, 1.599860152043627, 3);
  sqcRZGate(q, -1.8308026781897617, 3);
  sqcRYGate(q, 1.5708680240795723, 4);
  sqcRZGate(q, -2.9963191465033376, 4);
  sqcRYGate(q, -1.5688675013236204, 5);
  sqcRZGate(q, 2.015999980645093, 5);
  sqcRYGate(q, 0.00013375787408520523, 6);
  sqcRZGate(q, 2.3217616522697386, 6);
  sqcRYGate(q, 3.141568273604813, 7);
  sqcRZGate(q, -1.3550647855388647, 7);
  sqcRYGate(q, 1.5702979298306667, 8);
  sqcRZGate(q, -0.7228107807844886, 8);
  sqcRYGate(q, 0.0064489301852715735, 9);
  sqcRZGate(q, -0.9181440274843241, 9);
  sqcRYGate(q, 1.0727201469565744, 10);
  sqcRZGate(q, -1.5707836648729865, 10);
  sqcRYGate(q, 3.133146072158928, 11);
  sqcRZGate(q, -1.5073610608578791, 11);
  sqcRYGate(q, -0.0020055497936564168, 12);
  sqcRZGate(q, 1.6113622865603485, 12);
  sqcRYGate(q, -0.0018757446951047695, 13);
  sqcRZGate(q, 1.4466673510663144, 13);
  sqcRYGate(q, 2.611752978616949, 14);
  sqcRZGate(q, 0.2160647324101941, 14);
  sqcRYGate(q, 1.740180338438538, 15);
  sqcRZGate(q, -2.5984910443872904, 15);
  sqcRYGate(q, -0.08339546404229578, 16);
  sqcRZGate(q, -0.602421556465017, 16);
  sqcRYGate(q, 0.6351157052680918, 17);
  sqcRZGate(q, 0.19788990940022355, 17);
  sqcRYGate(q, -1.3621985880924694, 18);
  sqcRZGate(q, 1.0676015508904575, 18);
  sqcRYGate(q, -1.7629799519322886, 19);
  sqcRZGate(q, 2.6505279365790706, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.1280253740298263, 0);
  sqcRZGate(q, -2.68139257269266, 0);
  sqcRYGate(q, -1.5261631457760059, 1);
  sqcRZGate(q, 3.105390409756523, 1);
  sqcRYGate(q, -3.1222081486911133, 2);
  sqcRZGate(q, -1.6207263026780006, 2);
  sqcRYGate(q, -0.0005993598368201346, 3);
  sqcRZGate(q, 0.257910221144491, 3);
  sqcRYGate(q, -0.005859256858699702, 4);
  sqcRZGate(q, 1.4006365043630091, 4);
  sqcRYGate(q, 0.05129269549965976, 5);
  sqcRZGate(q, -1.945187175641629, 5);
  sqcRYGate(q, -1.5708215498191456, 6);
  sqcRZGate(q, -1.2280611928659186, 6);
  sqcRYGate(q, 3.1415804223281376, 7);
  sqcRZGate(q, 1.3217668512881096, 7);
  sqcRYGate(q, 3.135292987508033, 8);
  sqcRZGate(q, -0.7201001646053591, 8);
  sqcRYGate(q, 3.138748845782496, 9);
  sqcRZGate(q, -0.9533486218742802, 9);
  sqcRYGate(q, -1.5705400172988795, 10);
  sqcRZGate(q, -1.6889813498381097, 10);
  sqcRYGate(q, 1.5701506830538425, 11);
  sqcRZGate(q, -1.5701863958446585, 11);
  sqcRYGate(q, 0.008779489684434871, 12);
  sqcRZGate(q, 1.9248476246663229, 12);
  sqcRYGate(q, -3.1328303024362953, 13);
  sqcRZGate(q, 1.5055158625708085, 13);
  sqcRYGate(q, -1.887109746874963, 14);
  sqcRZGate(q, -1.6711892362113114, 14);
  sqcRYGate(q, -1.3640606365341912, 15);
  sqcRZGate(q, -2.4038134662561457, 15);
  sqcRYGate(q, -2.1827629316276065, 16);
  sqcRZGate(q, -2.8963254908712877, 16);
  sqcRYGate(q, 0.913082407306691, 17);
  sqcRZGate(q, 1.113907976602511, 17);
  sqcRYGate(q, 1.8139062777198711, 18);
  sqcRZGate(q, 0.04181876603672315, 18);
  sqcRYGate(q, 1.605424743618222, 19);
  sqcRZGate(q, 2.844602933008991, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 2.1235215120235877, 0);
  sqcRZGate(q, -2.595166270798819, 0);
  sqcRYGate(q, 2.556332586207041, 1);
  sqcRZGate(q, -1.6060843553532014, 1);
  sqcRYGate(q, -2.9387962032779584, 2);
  sqcRZGate(q, -1.7112841551697469, 2);
  sqcRYGate(q, 0.5500132844629372, 3);
  sqcRZGate(q, 1.5323821303629073, 3);
  sqcRYGate(q, 0.007427215961087086, 4);
  sqcRZGate(q, -0.007137082422190133, 4);
  sqcRYGate(q, -3.1388057639523876, 5);
  sqcRZGate(q, -2.8609221331137418, 5);
  sqcRYGate(q, 3.141576609113485, 6);
  sqcRZGate(q, -1.2266792259902495, 6);
  sqcRYGate(q, -0.3331890778948103, 7);
  sqcRZGate(q, 1.535305686119266, 7);
  sqcRYGate(q, -1.5707356387901306, 8);
  sqcRZGate(q, 3.1415735839505006, 8);
  sqcRYGate(q, -1.570770273148625, 9);
  sqcRZGate(q, -3.030924430051957, 9);
  sqcRYGate(q, -3.129973863983406, 10);
  sqcRZGate(q, 3.0231244407161983, 10);
  sqcRYGate(q, -1.0726375569749411, 11);
  sqcRZGate(q, 0.004365568369487427, 11);
  sqcRYGate(q, 0.006152203315462401, 12);
  sqcRZGate(q, 0.13155642871067022, 12);
  sqcRYGate(q, -1.7178370248999704, 13);
  sqcRZGate(q, -3.1392482287423613, 13);
  sqcRYGate(q, 0.8827387234301237, 14);
  sqcRZGate(q, 3.102666559591292, 14);
  sqcRYGate(q, -0.25027298640586965, 15);
  sqcRZGate(q, -0.17298977244654876, 15);
  sqcRYGate(q, 1.5646689646065601, 16);
  sqcRZGate(q, 3.139347622351184, 16);
  sqcRYGate(q, 3.1317307901743674, 17);
  sqcRZGate(q, -1.9860287221727928, 17);
  sqcRYGate(q, -1.8276127689102903, 18);
  sqcRZGate(q, -1.5555095789267732, 18);
  sqcRYGate(q, -1.7600547927712933, 19);
  sqcRZGate(q, 1.5694965934725742, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.426785139321168, 0);
  sqcRZGate(q, 1.5055879729989181, 0);
  sqcRYGate(q, -1.6566333318764597, 1);
  sqcRZGate(q, -1.571685276896348, 1);
  sqcRYGate(q, -3.126003115908197, 2);
  sqcRZGate(q, -1.7082786077426722, 2);
  sqcRYGate(q, 0.005886773305988413, 3);
  sqcRZGate(q, 1.611159061198828, 3);
  sqcRYGate(q, -3.078341737456121, 4);
  sqcRZGate(q, 3.086063883098578, 4);
  sqcRYGate(q, 2.776398494952368, 5);
  sqcRZGate(q, -3.076588789677346, 5);
  sqcRYGate(q, -1.571663905246111, 6);
  sqcRZGate(q, -0.5560397465785315, 6);
  sqcRYGate(q, -4.537594692965996e-05, 7);
  sqcRZGate(q, -1.0467323129795278, 7);
  sqcRYGate(q, -1.571011683160867, 8);
  sqcRZGate(q, -3.141100807907245, 8);
  sqcRYGate(q, -3.1228278995564493, 9);
  sqcRZGate(q, -1.455205771327515, 9);
  sqcRYGate(q, -1.5708063504526617, 10);
  sqcRZGate(q, 0.000627491566180758, 10);
  sqcRYGate(q, -1.5709034858279667, 11);
  sqcRZGate(q, 0.020314556928465954, 11);
  sqcRYGate(q, 3.141275254516493, 12);
  sqcRZGate(q, -1.858696447102745, 12);
  sqcRYGate(q, 1.5709654054182574, 13);
  sqcRZGate(q, -1.9522584286260116, 13);
  sqcRYGate(q, 1.5019513453145708, 14);
  sqcRZGate(q, -3.1398350112657347, 14);
  sqcRYGate(q, 0.19370699055980545, 15);
  sqcRZGate(q, -1.5731948795337063, 15);
  sqcRYGate(q, -1.228711254045515, 16);
  sqcRZGate(q, 2.685803109137522, 16);
  sqcRYGate(q, -1.5738165035697627, 17);
  sqcRZGate(q, -1.5729146315535996, 17);
  sqcRYGate(q, -1.519233084934477, 18);
  sqcRZGate(q, 0.0007953814627046965, 18);
  sqcRYGate(q, -1.577917474871106, 19);
  sqcRZGate(q, -2.2729026527182743, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.0473043447721815, 0);
  sqcRZGate(q, 0.42553834355988407, 0);
  sqcRYGate(q, 1.5943268309784102, 1);
  sqcRZGate(q, 1.572120118392132, 1);
  sqcRYGate(q, -0.006905908201901845, 2);
  sqcRZGate(q, 1.6085923583204191, 2);
  sqcRYGate(q, 1.370377472894182, 3);
  sqcRZGate(q, 3.1375726286376278, 3);
  sqcRYGate(q, 0.003086714474655139, 4);
  sqcRZGate(q, 1.854421422768014, 4);
  sqcRYGate(q, -0.2681966387962485, 5);
  sqcRZGate(q, -1.705327143516239, 5);
  sqcRYGate(q, 0.00020310065234507846, 6);
  sqcRZGate(q, 0.5707991989261811, 6);
  sqcRYGate(q, 3.141552361673887, 7);
  sqcRZGate(q, -1.0892038473295937, 7);
  sqcRYGate(q, 1.5707530352289136, 8);
  sqcRZGate(q, 1.834167737005231, 8);
  sqcRYGate(q, 0.04245645262989229, 9);
  sqcRZGate(q, -0.2695118013194841, 9);
  sqcRYGate(q, 1.570818205298492, 10);
  sqcRZGate(q, 3.320591376983061e-06, 10);
  sqcRYGate(q, -1.5707822186279312, 11);
  sqcRZGate(q, 2.6503691173571756e-05, 11);
  sqcRYGate(q, 6.014288134181812e-06, 12);
  sqcRZGate(q, 0.809990562554449, 12);
  sqcRYGate(q, 3.1414707124647454, 13);
  sqcRZGate(q, 2.760597868970789, 13);
  sqcRYGate(q, -1.5707545472620046, 14);
  sqcRZGate(q, 3.141576452322148, 14);
  sqcRYGate(q, -1.5712279354444425, 15);
  sqcRZGate(q, -1.412955627960832, 15);
  sqcRYGate(q, 3.109706459342715, 16);
  sqcRZGate(q, -2.993815230304941, 16);
  sqcRYGate(q, 2.8188327591962388, 17);
  sqcRZGate(q, -0.3617219295269746, 17);
  sqcRYGate(q, 1.6346259863142731, 18);
  sqcRZGate(q, -2.1162992101220133, 18);
  sqcRYGate(q, -0.006368442715077194, 19);
  sqcRZGate(q, -0.9341015603392325, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.5690690279829846, 0);
  sqcRZGate(q, -2.2584429077587043, 0);
  sqcRYGate(q, 1.54948673053977, 1);
  sqcRZGate(q, 1.5740386456573612, 1);
  sqcRYGate(q, -1.5699864972830777, 2);
  sqcRZGate(q, 1.5760052801667643, 2);
  sqcRYGate(q, -0.08384819879104849, 3);
  sqcRZGate(q, -1.5855134022022102, 3);
  sqcRYGate(q, -3.071753442022496, 4);
  sqcRZGate(q, -1.5990921490659833, 4);
  sqcRYGate(q, -0.3599533638354949, 5);
  sqcRZGate(q, 1.2814236244674158, 5);
  sqcRYGate(q, -1.5707506933049231, 6);
  sqcRZGate(q, -2.2917980028379414, 6);
  sqcRYGate(q, 0.011676064093872124, 7);
  sqcRZGate(q, -1.6993701942867994, 7);
  sqcRYGate(q, -4.118960653058404e-05, 8);
  sqcRZGate(q, 1.272613488242885, 8);
  sqcRYGate(q, -3.140156427975739, 9);
  sqcRZGate(q, 2.8760766028089195, 9);
  sqcRYGate(q, -1.5707911232572211, 10);
  sqcRZGate(q, 0.0254264978647225, 10);
  sqcRYGate(q, -1.5707913353575567, 11);
  sqcRZGate(q, -0.03721970329427027, 11);
  sqcRYGate(q, 1.4161081159103244, 12);
  sqcRZGate(q, 2.4799465696112577e-05, 12);
  sqcRYGate(q, -1.5704394916757973, 13);
  sqcRZGate(q, 1.459117919677615e-05, 13);
  sqcRYGate(q, -1.5707184650206638, 14);
  sqcRZGate(q, -2.9816193498836565, 14);
  sqcRYGate(q, -0.005190769617138124, 15);
  sqcRZGate(q, 0.02393848748452489, 15);
  sqcRYGate(q, 3.140714753385283, 16);
  sqcRZGate(q, -2.553205962797539, 16);
  sqcRYGate(q, 3.139583125026176, 17);
  sqcRZGate(q, -2.5430328673385243, 17);
  sqcRYGate(q, 0.0022115639707012136, 18);
  sqcRZGate(q, 0.5413992066389335, 18);
  sqcRYGate(q, -1.5706774064913525, 19);
  sqcRZGate(q, -2.354261470508682, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 0.005477939317931834, 0);
  sqcRZGate(q, 2.2364992279154468, 0);
  sqcRYGate(q, -1.573699052804843, 1);
  sqcRZGate(q, -1.5705795034320342, 1);
  sqcRYGate(q, 1.571704675742307, 2);
  sqcRZGate(q, -1.8662444435292092, 2);
  sqcRYGate(q, -3.0579402840311967, 3);
  sqcRZGate(q, 3.1221187801836727, 3);
  sqcRYGate(q, 3.141422148053853, 4);
  sqcRZGate(q, 1.3850820286677201, 4);
  sqcRYGate(q, -3.1410994653562603, 5);
  sqcRZGate(q, -1.7775904123926274, 5);
  sqcRYGate(q, -1.5707202431341583, 6);
  sqcRZGate(q, 3.1414050182827853, 6);
  sqcRYGate(q, -1.5708087927715981, 7);
  sqcRZGate(q, -2.2874168080555538e-05, 7);
  sqcRYGate(q, -9.508676415139815e-05, 8);
  sqcRZGate(q, 0.22833674974060802, 8);
  sqcRYGate(q, 1.5699735577114922, 9);
  sqcRZGate(q, 2.0058732284372893, 9);
  sqcRYGate(q, -0.02330939940181319, 10);
  sqcRZGate(q, -2.1215714651524618, 10);
  sqcRYGate(q, -3.1278829264149492, 11);
  sqcRZGate(q, -1.4694293104815843, 11);
  sqcRYGate(q, -1.9184219661915256, 12);
  sqcRZGate(q, 1.5708036720038656, 12);
  sqcRYGate(q, 2.306559879747383, 13);
  sqcRZGate(q, 1.570757782635206, 13);
  sqcRYGate(q, 1.5525064319156159, 14);
  sqcRZGate(q, -2.612433621048724, 14);
  sqcRYGate(q, -0.002674006975486007, 15);
  sqcRZGate(q, -0.04499906747581906, 15);
  sqcRYGate(q, -1.5710604787530984, 16);
  sqcRZGate(q, 1.4441407155030186, 16);
  sqcRYGate(q, 0.000457145353879973, 17);
  sqcRZGate(q, 2.226350046019277, 17);
  sqcRYGate(q, -1.272454127479513, 18);
  sqcRZGate(q, -1.581410344295172, 18);
  sqcRYGate(q, 3.1388412256073375, 19);
  sqcRZGate(q, 0.7970864508646658, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.5747311799924866, 0);
  sqcRZGate(q, 0.27188726534847274, 0);
  sqcRYGate(q, 1.56548846628745, 1);
  sqcRZGate(q, 1.2777765744580136, 1);
  sqcRYGate(q, 0.0033739565826763837, 2);
  sqcRZGate(q, 0.6111003367659915, 2);
  sqcRYGate(q, -1.5722103965164038, 3);
  sqcRZGate(q, -1.1950009320594033, 3);
  sqcRYGate(q, 3.141475795669847, 4);
  sqcRZGate(q, 0.3754049858417874, 4);
  sqcRYGate(q, -0.0003938815617555816, 5);
  sqcRZGate(q, -0.6039853483447046, 5);
  sqcRYGate(q, -1.5709143983974414, 6);
  sqcRZGate(q, 0.28313878607742904, 6);
  sqcRYGate(q, -1.5707011530640784, 7);
  sqcRZGate(q, -2.9170396120173865, 7);
  sqcRYGate(q, 3.1415239889179234, 8);
  sqcRZGate(q, 3.062963506891615, 8);
  sqcRYGate(q, 3.1415403625579614, 9);
  sqcRZGate(q, 2.116308610320776, 9);
  sqcRYGate(q, -0.00024257253366322118, 10);
  sqcRZGate(q, -2.266512327605124, 10);
  sqcRYGate(q, -9.526237811681175e-06, 11);
  sqcRZGate(q, -1.9636650227687769, 11);
  sqcRYGate(q, 1.5709050748970927, 12);
  sqcRZGate(q, 0.2285409380404025, 12);
  sqcRYGate(q, -1.5708702637657335, 13);
  sqcRZGate(q, 0.08409030721677375, 13);
  sqcRYGate(q, 0.0002426894715484169, 14);
  sqcRZGate(q, 1.3407699816524186, 14);
  sqcRYGate(q, -0.0007539757199462609, 15);
  sqcRZGate(q, 1.4585496107251528, 15);
  sqcRYGate(q, -7.983088974616489e-05, 16);
  sqcRZGate(q, -2.9266470890002014, 16);
  sqcRYGate(q, 2.240910925733855e-05, 17);
  sqcRZGate(q, -2.8722904988569375, 17);
  sqcRYGate(q, -1.5707720461588652, 18);
  sqcRZGate(q, -1.6655975021907237, 18);
  sqcRYGate(q, 1.5707779187122703, 19);
  sqcRZGate(q, -0.7976420814758042, 19);
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
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
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
  sqcCZGate(q, 10, 13);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 12, 15);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 14, 17);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 16, 19);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.6868682408325881, 0);
  sqcRZGate(q, -2.336011515038594, 0);
  sqcRYGate(q, -0.3728508739701981, 1);
  sqcRZGate(q, 2.6599228386687113, 1);
  sqcRYGate(q, -0.28563978053512784, 2);
  sqcRZGate(q, 2.02813946023307, 2);
  sqcRYGate(q, -2.8508495912767846, 3);
  sqcRZGate(q, -0.39414731090433625, 3);
  sqcRYGate(q, 1.670672079696022, 4);
  sqcRZGate(q, 0.8123049699542566, 4);
  sqcRYGate(q, -1.46254376420828, 5);
  sqcRZGate(q, 0.8151892254678766, 5);
  sqcRYGate(q, 1.6323660922239314, 6);
  sqcRZGate(q, 0.9454225777801614, 6);
  sqcRYGate(q, -1.4801438599875194, 7);
  sqcRZGate(q, -1.4988675890924643, 7);
  sqcRYGate(q, -1.4732032783627211, 8);
  sqcRZGate(q, 0.811079143971891, 8);
  sqcRYGate(q, -1.3607306246104738, 9);
  sqcRZGate(q, -0.7778491023377779, 9);
  sqcRYGate(q, 2.852969327613464, 10);
  sqcRZGate(q, 2.718677217330751, 10);
  sqcRYGate(q, 1.4630840332014419, 11);
  sqcRZGate(q, -2.324428745051406, 11);
  sqcRYGate(q, 1.3651126555093136, 12);
  sqcRZGate(q, 1.6112851585947923, 12);
  sqcRYGate(q, 3.1182179602659645, 13);
  sqcRZGate(q, -2.252051658390684, 13);
  sqcRYGate(q, -1.5984076470273723, 14);
  sqcRZGate(q, -2.337897834436478, 14);
  sqcRYGate(q, -1.251692783472846, 15);
  sqcRZGate(q, -0.7727644634162024, 15);
  sqcRYGate(q, -2.8193514707155285, 16);
  sqcRZGate(q, -0.6833121790161125, 16);
  sqcRYGate(q, 1.5939094683217112, 17);
  sqcRZGate(q, 0.8057492215112925, 17);
  sqcRYGate(q, 0.30288713267123013, 18);
  sqcRZGate(q, -0.676525025776793, 18);
  sqcRYGate(q, 3.1085686018931833, 19);
  sqcRZGate(q, -3.1337517391740977, 19);

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
