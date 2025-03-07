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

  sqcRYGate(q, 1.5702957227747747, 0);
  sqcRZGate(q, 1.570485811033254, 0);
  sqcRYGate(q, -3.141206045311055, 1);
  sqcRZGate(q, -0.752227502941233, 1);
  sqcRYGate(q, 0.0003015487289579194, 2);
  sqcRZGate(q, 1.8822965384566468, 2);
  sqcRYGate(q, -1.5706858118892422, 3);
  sqcRZGate(q, 0.1520741883161979, 3);
  sqcRYGate(q, 1.570803314924519, 4);
  sqcRZGate(q, 1.4862936284733095, 4);
  sqcRYGate(q, 1.1589449689113072, 5);
  sqcRZGate(q, 1.7387445676844013, 5);
  sqcRYGate(q, -0.0005141512989243952, 6);
  sqcRZGate(q, -2.9506035023694195, 6);
  sqcRYGate(q, -2.6217321102723448, 7);
  sqcRZGate(q, 2.078878062773289, 7);
  sqcRYGate(q, 0.0004884236080568982, 8);
  sqcRZGate(q, -0.8234279904194143, 8);
  sqcRYGate(q, 1.5707454763979445, 9);
  sqcRZGate(q, 1.5753357538245616, 9);
  sqcRYGate(q, 1.5711507674737124, 10);
  sqcRZGate(q, -1.5676711867494049, 10);
  sqcRYGate(q, 0.14778533510698968, 11);
  sqcRZGate(q, 1.5685758453694492, 11);
  sqcRYGate(q, 1.5705837802241644, 12);
  sqcRZGate(q, -0.0004661232955621025, 12);
  sqcRYGate(q, 0.933226562748076, 13);
  sqcRZGate(q, -0.0012596438552252565, 13);
  sqcRYGate(q, -0.031148179866261092, 14);
  sqcRZGate(q, 2.75891305675881, 14);
  sqcRYGate(q, -3.679847458279058e-05, 15);
  sqcRZGate(q, 0.616841039018137, 15);
  sqcRYGate(q, -3.0365510435613547, 16);
  sqcRZGate(q, 3.116406288906812, 16);
  sqcRYGate(q, -1.5893347010401138, 17);
  sqcRZGate(q, -1.5641332386853106, 17);
  sqcRYGate(q, 1.5708890738404406, 18);
  sqcRZGate(q, 0.1452620187188649, 18);
  sqcRYGate(q, -0.9569100169031631, 19);
  sqcRZGate(q, -1.6997720290990979, 19);
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
  sqcRYGate(q, 1.8050295268619836, 0);
  sqcRZGate(q, 0.22340065631449516, 0);
  sqcRYGate(q, 1.5706797414433085, 1);
  sqcRZGate(q, -1.5702966747804856, 1);
  sqcRYGate(q, -1.815708012420858, 2);
  sqcRZGate(q, -1.5712894011561682, 2);
  sqcRYGate(q, -6.107246600304132e-05, 3);
  sqcRZGate(q, -3.011092348547451, 3);
  sqcRYGate(q, -0.0005982988338021241, 4);
  sqcRZGate(q, 2.8682941924830776, 4);
  sqcRYGate(q, 0.0004062544847815985, 5);
  sqcRZGate(q, 1.4046048791271897, 5);
  sqcRYGate(q, -2.956228782826687, 6);
  sqcRZGate(q, -1.5745914566087835, 6);
  sqcRYGate(q, -0.00020261023557655022, 7);
  sqcRZGate(q, 1.061981848406103, 7);
  sqcRYGate(q, -1.5709571350487337, 8);
  sqcRZGate(q, -1.5705817602817587, 8);
  sqcRYGate(q, 0.028502921839734612, 9);
  sqcRZGate(q, -3.079923047011842, 9);
  sqcRYGate(q, 1.5707154840511313, 10);
  sqcRZGate(q, 1.8834435816953548, 10);
  sqcRYGate(q, -1.570290763169523, 11);
  sqcRZGate(q, -1.5709552743745487, 11);
  sqcRYGate(q, -2.4123664627949353, 12);
  sqcRZGate(q, -2.348653205585906, 12);
  sqcRYGate(q, 2.2934500857229554, 13);
  sqcRZGate(q, -0.16329180004483046, 13);
  sqcRYGate(q, -3.1414190309107375, 14);
  sqcRZGate(q, -0.15809613380281373, 14);
  sqcRYGate(q, 3.0426613506110427, 15);
  sqcRZGate(q, 2.9632408968382227, 15);
  sqcRYGate(q, 1.570768306284375, 16);
  sqcRZGate(q, 1.0958034954093439, 16);
  sqcRYGate(q, -1.9703498305264218, 17);
  sqcRZGate(q, -1.5566878691929396, 17);
  sqcRYGate(q, 0.01273125903122535, 18);
  sqcRZGate(q, 2.5664776217200282, 18);
  sqcRYGate(q, -0.002400430176092705, 19);
  sqcRZGate(q, 0.14491078664863835, 19);
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
  sqcRYGate(q, 3.136885130153291, 0);
  sqcRZGate(q, -2.92499415277534, 0);
  sqcRYGate(q, -1.5742102009699535, 1);
  sqcRZGate(q, -1.2829603988926905, 1);
  sqcRYGate(q, -1.5709559069275878, 2);
  sqcRZGate(q, -1.591826496101791, 2);
  sqcRYGate(q, 3.1396862153235, 3);
  sqcRZGate(q, 1.6198052844012887, 3);
  sqcRYGate(q, -3.1412630096307224, 4);
  sqcRZGate(q, -0.4369013222080955, 4);
  sqcRYGate(q, -3.0786198647363188, 5);
  sqcRZGate(q, 1.5905544575095505, 5);
  sqcRYGate(q, 1.5720169422154926, 6);
  sqcRZGate(q, -1.569486654668144, 6);
  sqcRYGate(q, 1.586452669741207, 7);
  sqcRZGate(q, 1.570665310467282, 7);
  sqcRYGate(q, 0.95297234501556, 8);
  sqcRZGate(q, -1.5591333202457074, 8);
  sqcRYGate(q, -0.005253524561505074, 9);
  sqcRZGate(q, -0.812896579753263, 9);
  sqcRYGate(q, 0.00043006419648872196, 10);
  sqcRZGate(q, 2.8490869259490528, 10);
  sqcRYGate(q, -1.5711303470775873, 11);
  sqcRZGate(q, -2.9774348268270425, 11);
  sqcRYGate(q, 3.108020229003823, 12);
  sqcRZGate(q, -2.350215434746159, 12);
  sqcRYGate(q, 3.141463965214703, 13);
  sqcRZGate(q, -0.16271863389627939, 13);
  sqcRYGate(q, -0.00021194948085478965, 14);
  sqcRZGate(q, -2.3047698476978122, 14);
  sqcRYGate(q, -0.007837315954240623, 15);
  sqcRZGate(q, 1.7965761042722068, 15);
  sqcRYGate(q, 0.018330943266212152, 16);
  sqcRZGate(q, 1.4064560091075848, 16);
  sqcRYGate(q, -1.5695199508023832, 17);
  sqcRZGate(q, 2.798348344418667, 17);
  sqcRYGate(q, 0.009460319134174125, 18);
  sqcRZGate(q, -1.8433697702103082, 18);
  sqcRYGate(q, -1.5890067219923738, 19);
  sqcRZGate(q, -3.1409336182604894, 19);
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
  sqcRYGate(q, 1.5731486321531476, 0);
  sqcRZGate(q, 1.8878671368087796, 0);
  sqcRYGate(q, 0.0017653307993501168, 1);
  sqcRZGate(q, 1.5713280050317762, 1);
  sqcRYGate(q, 3.1415073475062387, 2);
  sqcRZGate(q, -0.46039018752871, 2);
  sqcRYGate(q, 1.1853659533073992, 3);
  sqcRZGate(q, -3.141591370741766, 3);
  sqcRYGate(q, 3.1414951529428605, 4);
  sqcRZGate(q, 1.6912586308618085, 4);
  sqcRYGate(q, 3.1233134845478108, 5);
  sqcRZGate(q, 2.375570356207058, 5);
  sqcRYGate(q, -1.5709894136751044, 6);
  sqcRZGate(q, 1.5713655684542052, 6);
  sqcRYGate(q, -1.6878459838518047, 7);
  sqcRZGate(q, -0.8161431554703009, 7);
  sqcRYGate(q, 3.1153623930693186, 8);
  sqcRZGate(q, 1.5838549723479964, 8);
  sqcRYGate(q, 3.141220760639343, 9);
  sqcRZGate(q, -0.7499586606782761, 9);
  sqcRYGate(q, 0.0010938345147710749, 10);
  sqcRZGate(q, 1.5503480880129135, 10);
  sqcRYGate(q, -0.0003555138619129927, 11);
  sqcRZGate(q, 1.406493662988552, 11);
  sqcRYGate(q, 1.5713675988127482, 12);
  sqcRZGate(q, -1.5729836844749165, 12);
  sqcRYGate(q, -1.5714125926487856, 13);
  sqcRZGate(q, -1.5834398523403648, 13);
  sqcRYGate(q, 0.0012695254347621086, 14);
  sqcRZGate(q, -1.0333302110767448, 14);
  sqcRYGate(q, -1.702174598643458, 15);
  sqcRZGate(q, 1.569825484392152, 15);
  sqcRYGate(q, 3.135223934916269, 16);
  sqcRZGate(q, -2.6284055339858243, 16);
  sqcRYGate(q, -3.138411423686878, 17);
  sqcRZGate(q, -1.999404349455578, 17);
  sqcRYGate(q, 0.5541671945194222, 18);
  sqcRZGate(q, -1.098875451536804, 18);
  sqcRYGate(q, -1.572063531615119, 19);
  sqcRZGate(q, -1.0361323537051588, 19);
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
  sqcRYGate(q, -1.5696717935735574, 0);
  sqcRZGate(q, -2.742397254674506, 0);
  sqcRYGate(q, 2.7870699157499965, 1);
  sqcRZGate(q, 3.130453287988529, 1);
  sqcRYGate(q, 3.1413230725236203, 2);
  sqcRZGate(q, 1.4500510190800666, 2);
  sqcRYGate(q, 1.5714113508040934, 3);
  sqcRZGate(q, 3.100824572308053, 3);
  sqcRYGate(q, -0.005507015287420492, 4);
  sqcRZGate(q, -0.1994754556657128, 4);
  sqcRYGate(q, -0.0006936247376553637, 5);
  sqcRZGate(q, -0.7863473636257298, 5);
  sqcRYGate(q, 1.555284087889949, 6);
  sqcRZGate(q, -1.5708778629619293, 6);
  sqcRYGate(q, 3.141146480974901, 7);
  sqcRZGate(q, 2.324780510770839, 7);
  sqcRYGate(q, -1.5713537641258748, 8);
  sqcRZGate(q, -0.014229922010901265, 8);
  sqcRYGate(q, -1.570613813966932, 9);
  sqcRZGate(q, 1.568502725780296, 9);
  sqcRYGate(q, -1.5704523788717146, 10);
  sqcRZGate(q, 1.8366592381292461, 10);
  sqcRYGate(q, 1.5709284788652074, 11);
  sqcRZGate(q, 0.7876545525488299, 11);
  sqcRYGate(q, 0.06126850942731978, 12);
  sqcRZGate(q, -2.3872758958469977, 12);
  sqcRYGate(q, -3.078586782010242, 13);
  sqcRZGate(q, -0.010890856575727526, 13);
  sqcRYGate(q, 1.5709690938011098, 14);
  sqcRZGate(q, 3.1382832573248867, 14);
  sqcRYGate(q, 1.5695655892480231, 15);
  sqcRZGate(q, 1.5695531610493871, 15);
  sqcRYGate(q, 3.1412890369433013, 16);
  sqcRZGate(q, -2.383496987046268, 16);
  sqcRYGate(q, 2.7143788392260406, 17);
  sqcRZGate(q, 1.1835279758312511, 17);
  sqcRYGate(q, 1.488872117443817, 18);
  sqcRZGate(q, -2.3819835704232664, 18);
  sqcRYGate(q, 1.4995221257757727, 19);
  sqcRZGate(q, 1.5954520309390725, 19);
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
  sqcRYGate(q, -3.1411820783076787, 0);
  sqcRZGate(q, -2.7344075804186274, 0);
  sqcRYGate(q, -0.0002526464054408706, 1);
  sqcRZGate(q, -1.4780781019249203, 1);
  sqcRYGate(q, -2.2370156547945284, 2);
  sqcRZGate(q, -3.139263548165119, 2);
  sqcRYGate(q, -1.5684729998441655, 3);
  sqcRZGate(q, 2.3454633626146064, 3);
  sqcRYGate(q, -1.5698798126696627, 4);
  sqcRZGate(q, 1.1374653437278004, 4);
  sqcRYGate(q, -1.5701846036504188, 5);
  sqcRZGate(q, -0.0025522922096792825, 5);
  sqcRYGate(q, -1.5708111956180772, 6);
  sqcRZGate(q, 0.3595593478237901, 6);
  sqcRYGate(q, 1.5706947889968639, 7);
  sqcRZGate(q, -1.571864727170708, 7);
  sqcRYGate(q, 3.100082618115852, 8);
  sqcRZGate(q, 1.5645886465816596, 8);
  sqcRYGate(q, -3.122958716401346, 9);
  sqcRZGate(q, -0.0023184562922224923, 9);
  sqcRYGate(q, -0.0007326480810236902, 10);
  sqcRZGate(q, -0.6376265989505778, 10);
  sqcRYGate(q, 3.1411237605232785, 11);
  sqcRZGate(q, 1.929932051304753, 11);
  sqcRYGate(q, -3.1413018400774115, 12);
  sqcRZGate(q, 2.0431700843920884, 12);
  sqcRYGate(q, -0.8747171811527837, 13);
  sqcRZGate(q, 2.1589195699989707, 13);
  sqcRYGate(q, -1.569832049166524, 14);
  sqcRZGate(q, 0.13939862772442618, 14);
  sqcRYGate(q, -1.5718603265698015, 15);
  sqcRZGate(q, 1.83210028280334, 15);
  sqcRYGate(q, 0.006902931402819454, 16);
  sqcRZGate(q, -1.1462896880946893, 16);
  sqcRYGate(q, -0.00014286147174867955, 17);
  sqcRZGate(q, -0.0972629977883237, 17);
  sqcRYGate(q, 0.003943569101985567, 18);
  sqcRZGate(q, -3.0282793802718526, 18);
  sqcRYGate(q, 2.9650837986330694, 19);
  sqcRZGate(q, 3.132010277166068, 19);
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
  sqcRYGate(q, -0.4634957923996507, 0);
  sqcRZGate(q, -1.5792646845280673, 0);
  sqcRYGate(q, 1.5741811046783596, 1);
  sqcRZGate(q, 1.2929788824179127, 1);
  sqcRYGate(q, 1.5707725391283347, 2);
  sqcRZGate(q, -0.5878466168220228, 2);
  sqcRYGate(q, 3.1414727542718843, 3);
  sqcRZGate(q, 0.7699836603281849, 3);
  sqcRYGate(q, 0.0010449520007821398, 4);
  sqcRZGate(q, -2.708379419417308, 4);
  sqcRYGate(q, 2.666476098008645, 5);
  sqcRZGate(q, 0.3123933978138052, 5);
  sqcRYGate(q, 1.5709087137800426, 6);
  sqcRZGate(q, -3.12278375940238, 6);
  sqcRYGate(q, 1.5706381706283055, 7);
  sqcRZGate(q, 0.09553967417380856, 7);
  sqcRYGate(q, 1.582180511595147, 8);
  sqcRZGate(q, 0.6276532548401655, 8);
  sqcRYGate(q, -1.5708739755349337, 9);
  sqcRZGate(q, 2.525589696486234, 9);
  sqcRYGate(q, -0.00031151097945660613, 10);
  sqcRZGate(q, 1.0922794411414642, 10);
  sqcRYGate(q, 7.901620808681287e-05, 11);
  sqcRZGate(q, 2.347555477820872, 11);
  sqcRYGate(q, -3.141455028751659, 12);
  sqcRZGate(q, 2.9007893865139422, 12);
  sqcRYGate(q, -3.141574854171284, 13);
  sqcRZGate(q, -0.9703051047018452, 13);
  sqcRYGate(q, -1.3929610751285098, 14);
  sqcRZGate(q, 2.047969097736683, 14);
  sqcRYGate(q, -0.0005666709381729368, 15);
  sqcRZGate(q, -1.1394543943267257, 15);
  sqcRYGate(q, 0.45758083546133577, 16);
  sqcRZGate(q, 1.5707557299124009, 16);
  sqcRYGate(q, 6.556463237927801e-05, 17);
  sqcRZGate(q, 2.72044623827996, 17);
  sqcRYGate(q, 2.9956914406569557, 18);
  sqcRZGate(q, -0.7066393985029307, 18);
  sqcRYGate(q, 0.5029028999764078, 19);
  sqcRZGate(q, 0.5956811904467996, 19);
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
  sqcRYGate(q, -1.5780538598623168, 0);
  sqcRZGate(q, 1.7955102758629786, 0);
  sqcRYGate(q, -3.086551647635701, 1);
  sqcRZGate(q, 2.8681748471666135, 1);
  sqcRYGate(q, -0.0018094784783132664, 2);
  sqcRZGate(q, -2.555640331911458, 2);
  sqcRYGate(q, 1.5708069725909066, 3);
  sqcRZGate(q, -0.7949011677943227, 3);
  sqcRYGate(q, -2.8025192555117706, 4);
  sqcRZGate(q, 0.00013467430772972136, 4);
  sqcRYGate(q, -0.0002427391080486174, 5);
  sqcRZGate(q, -1.8857609374810815, 5);
  sqcRYGate(q, -3.0426317606739337, 6);
  sqcRZGate(q, 0.01891169075497512, 6);
  sqcRYGate(q, 7.310889235068174e-05, 7);
  sqcRZGate(q, 3.046107650829431, 7);
  sqcRYGate(q, 1.5708771649808622, 8);
  sqcRZGate(q, -1.3005124768907077, 8);
  sqcRYGate(q, 3.1413387344853225, 9);
  sqcRZGate(q, -0.20049156813566404, 9);
  sqcRYGate(q, 3.1159648265544315, 10);
  sqcRZGate(q, 1.2643604450932837, 10);
  sqcRYGate(q, 3.133773755953419, 11);
  sqcRZGate(q, -1.2313439195281788, 11);
  sqcRYGate(q, -0.005757519681156786, 12);
  sqcRZGate(q, -0.5036658157204426, 12);
  sqcRYGate(q, -1.6601002272673906, 13);
  sqcRZGate(q, -2.0836411956755336, 13);
  sqcRYGate(q, 0.008903704792234375, 14);
  sqcRZGate(q, 1.0935470232153046, 14);
  sqcRYGate(q, 3.1411314326073057, 15);
  sqcRZGate(q, 1.7039324034466947, 15);
  sqcRYGate(q, 2.103258969580711, 16);
  sqcRZGate(q, 1.4007344087960654, 16);
  sqcRYGate(q, -3.141275587619253, 17);
  sqcRZGate(q, 2.2291422970927037, 17);
  sqcRYGate(q, 1.5720895525153633, 18);
  sqcRZGate(q, 3.1403493344827402, 18);
  sqcRYGate(q, 3.139608144130137, 19);
  sqcRZGate(q, 2.118207683550858, 19);
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
  sqcRYGate(q, 3.141464099586604, 0);
  sqcRZGate(q, -2.917755873154397, 0);
  sqcRYGate(q, 1.5698753425466225, 1);
  sqcRZGate(q, -0.0076613159837186666, 1);
  sqcRYGate(q, 0.362325573629259, 2);
  sqcRZGate(q, 1.5728470038281976, 2);
  sqcRYGate(q, -0.00014427968996599819, 3);
  sqcRZGate(q, -2.3462243213398564, 3);
  sqcRYGate(q, 0.4223272869247873, 4);
  sqcRZGate(q, -0.00034051554928904437, 4);
  sqcRYGate(q, -2.789473128893516, 5);
  sqcRZGate(q, -3.1091337584027743, 5);
  sqcRYGate(q, -1.5713101431229497, 6);
  sqcRZGate(q, -0.39086926333123284, 6);
  sqcRYGate(q, 1.5715494288430936, 7);
  sqcRZGate(q, 1.5689837674052138, 7);
  sqcRYGate(q, -0.05021408755682082, 8);
  sqcRZGate(q, 3.136792071453582, 8);
  sqcRYGate(q, 0.00032799994387477943, 9);
  sqcRZGate(q, -1.9913877250720065, 9);
  sqcRYGate(q, -0.0002960234910698025, 10);
  sqcRZGate(q, -0.5441716289235812, 10);
  sqcRYGate(q, 0.09992236509762356, 11);
  sqcRZGate(q, 1.5791833757947167, 11);
  sqcRYGate(q, -3.1415197975983777, 12);
  sqcRZGate(q, -2.0358112744748507, 12);
  sqcRYGate(q, -2.3642212420584057e-05, 13);
  sqcRZGate(q, -1.056881435902175, 13);
  sqcRYGate(q, 0.2751630686581919, 14);
  sqcRZGate(q, 0.00016810707796798127, 14);
  sqcRYGate(q, 0.0001737345088512754, 15);
  sqcRZGate(q, -2.5370742743748482, 15);
  sqcRYGate(q, 3.1408353117671086, 16);
  sqcRZGate(q, 2.113151278064905, 16);
  sqcRYGate(q, 3.0662097198212175, 17);
  sqcRZGate(q, 3.1262635501580998, 17);
  sqcRYGate(q, -2.9158477304897676, 18);
  sqcRZGate(q, 1.5698787224485775, 18);
  sqcRYGate(q, 1.5721199032782718, 19);
  sqcRZGate(q, -1.5704043532124379, 19);
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
  sqcRYGate(q, 1.5709382465677573, 0);
  sqcRZGate(q, -3.0692743507480054, 0);
  sqcRYGate(q, 2.9598860656647723, 1);
  sqcRZGate(q, -2.2768961532959193, 1);
  sqcRYGate(q, -1.5707753387159462, 2);
  sqcRZGate(q, 1.6439455263322396, 2);
  sqcRYGate(q, 1.5701287832132442, 3);
  sqcRZGate(q, -2.269295093430997, 3);
  sqcRYGate(q, -1.5708245473956601, 4);
  sqcRZGate(q, 1.6438651703457303, 4);
  sqcRYGate(q, 3.0419226005543574, 5);
  sqcRZGate(q, 0.905032107379732, 5);
  sqcRYGate(q, -0.0010869507203743088, 6);
  sqcRZGate(q, 0.46259866235647423, 6);
  sqcRYGate(q, 1.5689517247221667, 7);
  sqcRZGate(q, 0.872694640925773, 7);
  sqcRYGate(q, 0.0008713104902166848, 8);
  sqcRZGate(q, -1.7654998700395317, 8);
  sqcRYGate(q, -1.4448614049495703, 9);
  sqcRZGate(q, 0.8721471895916875, 9);
  sqcRYGate(q, 1.577394757896917, 10);
  sqcRZGate(q, -3.087484390738087, 10);
  sqcRYGate(q, 1.5644856316945213, 11);
  sqcRZGate(q, -0.700795268023346, 11);
  sqcRYGate(q, 1.5703868437633743, 12);
  sqcRZGate(q, 1.635228026589508, 12);
  sqcRYGate(q, -1.529140305886087, 13);
  sqcRZGate(q, 0.881803330726287, 13);
  sqcRYGate(q, -1.5673711366869973, 14);
  sqcRZGate(q, 1.6324276033475853, 14);
  sqcRYGate(q, -0.0015451599073426083, 15);
  sqcRZGate(q, 2.398210983998382, 15);
  sqcRYGate(q, -0.0016937581742677565, 16);
  sqcRZGate(q, 0.9286814032135382, 16);
  sqcRYGate(q, 1.5455865367491433, 17);
  sqcRZGate(q, -2.2718104193793813, 17);
  sqcRYGate(q, -1.571148283331892, 18);
  sqcRZGate(q, -3.0700256103422645, 18);
  sqcRYGate(q, -1.570303671113666, 19);
  sqcRZGate(q, 2.4422451648843233, 19);

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
