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

  sqcRYGate(q, -3.141591613627707, 0);
  sqcRZGate(q, -1.5637378169122849, 0);
  sqcRYGate(q, 2.6698220256575653, 1);
  sqcRZGate(q, -0.6673808032474868, 1);
  sqcRYGate(q, -0.5673949148269148, 2);
  sqcRZGate(q, -2.765885165619241, 2);
  sqcRYGate(q, -1.275038572798419, 3);
  sqcRZGate(q, -2.870890499230315, 3);
  sqcRYGate(q, 3.14156707969257, 4);
  sqcRZGate(q, -1.6196293037714091, 4);
  sqcRYGate(q, -2.0192908363276896, 5);
  sqcRZGate(q, -1.405220341483278, 5);
  sqcRYGate(q, 3.0427758090922907e-07, 6);
  sqcRZGate(q, -2.467506803861978, 6);
  sqcRYGate(q, 2.0109571002992435, 7);
  sqcRZGate(q, 1.3530369422707422, 7);
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
  sqcRYGate(q, -3.141590781111308, 0);
  sqcRZGate(q, -1.6889235591366163, 0);
  sqcRYGate(q, 2.8212674720901525, 1);
  sqcRZGate(q, -1.2836252344770207, 1);
  sqcRYGate(q, 2.622287324287847, 2);
  sqcRZGate(q, -2.457477142950559, 2);
  sqcRYGate(q, 0.790619563555224, 3);
  sqcRZGate(q, -0.4333824875898609, 3);
  sqcRYGate(q, 3.1415920123773304, 4);
  sqcRZGate(q, -0.7285792485493117, 4);
  sqcRYGate(q, -0.2359907351832613, 5);
  sqcRZGate(q, -3.10309327707058, 5);
  sqcRYGate(q, 3.141591135933932, 6);
  sqcRZGate(q, 3.086559588115504, 6);
  sqcRYGate(q, 1.3819837371625807, 7);
  sqcRZGate(q, -0.7461526167247579, 7);
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
  sqcRYGate(q, 4.106928235714235e-06, 0);
  sqcRZGate(q, 1.9468980701629053, 0);
  sqcRYGate(q, -0.30288658657936146, 1);
  sqcRZGate(q, -0.06459619910421122, 1);
  sqcRYGate(q, 0.7173440724219464, 2);
  sqcRZGate(q, -1.4771714116713937, 2);
  sqcRYGate(q, 1.1122664810368974, 3);
  sqcRZGate(q, -2.4712966272701706, 3);
  sqcRYGate(q, -3.1415803109807543, 4);
  sqcRZGate(q, -2.8331720141780963, 4);
  sqcRYGate(q, 1.3355403144477558, 5);
  sqcRZGate(q, -3.087080203174637, 5);
  sqcRYGate(q, -2.268972975727479e-06, 6);
  sqcRZGate(q, 0.5246819479411948, 6);
  sqcRYGate(q, -1.7154613847248363, 7);
  sqcRZGate(q, -1.9915979731989495, 7);
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
  sqcRYGate(q, -1.5707957875218284, 0);
  sqcRZGate(q, 3.1415893450553027, 0);
  sqcRYGate(q, 2.918833929481156, 1);
  sqcRZGate(q, -1.087227081199261, 1);
  sqcRYGate(q, -1.1545529208329874, 2);
  sqcRZGate(q, 3.119920657538221, 2);
  sqcRYGate(q, -2.418679483502682, 3);
  sqcRZGate(q, 1.5995197446353784, 3);
  sqcRYGate(q, -1.5708141005628218, 4);
  sqcRZGate(q, -1.5708040235432876, 4);
  sqcRYGate(q, -2.324702620704843, 5);
  sqcRZGate(q, -0.5843284405031545, 5);
  sqcRYGate(q, -9.983206004093859e-07, 6);
  sqcRZGate(q, -2.481201260695164, 6);
  sqcRYGate(q, 2.6220722780981434, 7);
  sqcRZGate(q, 3.124636114532169, 7);
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
  sqcRYGate(q, 1.5707991219679143, 0);
  sqcRZGate(q, -0.36696454206435686, 0);
  sqcRYGate(q, -1.5707932654618295, 1);
  sqcRZGate(q, 1.570798498910503, 1);
  sqcRYGate(q, -1.5707962276135525, 2);
  sqcRZGate(q, 3.601286965042068e-07, 2);
  sqcRYGate(q, -0.1909692177517822, 3);
  sqcRZGate(q, 1.427701491569886, 3);
  sqcRYGate(q, 0.20325851442823567, 4);
  sqcRZGate(q, 1.570803103930558, 4);
  sqcRYGate(q, -1.5708000732353684, 5);
  sqcRZGate(q, 3.1415801883445957, 5);
  sqcRYGate(q, -3.1415923494471887, 6);
  sqcRZGate(q, 0.01715362939382281, 6);
  sqcRYGate(q, 2.0751143624817114, 7);
  sqcRZGate(q, 2.7646633509716207, 7);
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
  sqcRYGate(q, -3.1415924846326932, 0);
  sqcRZGate(q, 1.4275792261907156, 0);
  sqcRYGate(q, 1.8553817425254255, 1);
  sqcRZGate(q, -3.1415909771450994, 1);
  sqcRYGate(q, 1.5707991560970829, 2);
  sqcRZGate(q, 3.141585464425151, 2);
  sqcRYGate(q, -1.4707101596075616, 3);
  sqcRZGate(q, 0.5164003462941155, 3);
  sqcRYGate(q, -1.570799472106933, 4);
  sqcRZGate(q, 7.557682911496499e-06, 4);
  sqcRYGate(q, -1.2302396759931398, 5);
  sqcRZGate(q, -2.982665190592103, 5);
  sqcRYGate(q, 1.5707972436221225, 6);
  sqcRZGate(q, -0.8486344453618591, 6);
  sqcRYGate(q, 0.0001736752998482416, 7);
  sqcRZGate(q, -2.668405257284628, 7);
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
  sqcRYGate(q, -1.4853909981291114, 0);
  sqcRZGate(q, -0.8554643922608696, 0);
  sqcRYGate(q, -1.6782719419461471, 1);
  sqcRZGate(q, 3.1415874592426314, 1);
  sqcRYGate(q, 2.687229213754962, 2);
  sqcRZGate(q, -7.79836814857049e-06, 2);
  sqcRYGate(q, -3.141588101329172, 3);
  sqcRZGate(q, 1.751961270065755, 3);
  sqcRYGate(q, 1.5707974130498075, 4);
  sqcRZGate(q, 1.5707951435897982, 4);
  sqcRYGate(q, 3.1415912490738194, 5);
  sqcRZGate(q, -1.4118631598997382, 5);
  sqcRYGate(q, -6.699065897564083e-07, 6);
  sqcRZGate(q, -2.2929601580082974, 6);
  sqcRYGate(q, -7.26217883101477e-07, 7);
  sqcRZGate(q, -0.3862020803646713, 7);
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
  sqcRYGate(q, -3.1415925678354544, 0);
  sqcRZGate(q, -2.2146860295656294, 0);
  sqcRYGate(q, -1.9155037102485415, 1);
  sqcRZGate(q, 1.5707964865554276, 1);
  sqcRYGate(q, -1.5707945119782343, 2);
  sqcRZGate(q, -1.5707951937467755, 2);
  sqcRYGate(q, 1.478946114647922, 3);
  sqcRZGate(q, -0.10880953303234434, 3);
  sqcRYGate(q, -1.5707964353940913, 4);
  sqcRZGate(q, -9.2163688828856e-07, 4);
  sqcRYGate(q, 1.570796616327964, 5);
  sqcRZGate(q, 0.35541353745771614, 5);
  sqcRYGate(q, -1.5707977092237517, 6);
  sqcRZGate(q, 1.570797012769786, 6);
  sqcRYGate(q, 3.1414236855170805, 7);
  sqcRZGate(q, -0.19295573046798073, 7);
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
  sqcRYGate(q, 1.570796580275018, 0);
  sqcRZGate(q, -3.1415924084672557, 0);
  sqcRYGate(q, 1.5707976913646708, 1);
  sqcRZGate(q, 2.080598135048421, 1);
  sqcRYGate(q, 1.5707955817128278, 2);
  sqcRZGate(q, -0.4682327624676698, 2);
  sqcRYGate(q, 1.570799011877966, 3);
  sqcRZGate(q, -0.00011982032304001871, 3);
  sqcRYGate(q, 1.5707972769044485, 4);
  sqcRZGate(q, -1.5707891519876922, 4);
  sqcRYGate(q, -1.692309993406049e-06, 5);
  sqcRZGate(q, 2.732034026452794, 5);
  sqcRYGate(q, -1.5707971635228215, 6);
  sqcRZGate(q, -0.2222255415640757, 6);
  sqcRYGate(q, -3.141587012408612, 7);
  sqcRZGate(q, 0.5812358774454954, 7);
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
  sqcRYGate(q, 1.570796587848248, 0);
  sqcRZGate(q, -0.3553064201293474, 0);
  sqcRYGate(q, -1.5707963696580771, 1);
  sqcRZGate(q, 1.857419788461845, 1);
  sqcRYGate(q, 3.9515207983106634e-07, 2);
  sqcRZGate(q, 1.565912006822015, 2);
  sqcRYGate(q, -0.1372315687215666, 3);
  sqcRZGate(q, 0.00012800142860926623, 3);
  sqcRYGate(q, 1.57078891244105, 4);
  sqcRZGate(q, -5.237391107471012e-07, 4);
  sqcRYGate(q, 2.1364668005921275e-07, 5);
  sqcRZGate(q, 0.05414496634602361, 5);
  sqcRYGate(q, -1.5707963631983795, 6);
  sqcRZGate(q, -1.7016799242844338, 6);
  sqcRYGate(q, 1.5707962761667504, 7);
  sqcRZGate(q, -1.3026465641037284, 7);
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
  sqcRYGate(q, -3.141591762138199, 0);
  sqcRZGate(q, 2.212390422606642, 0);
  sqcRYGate(q, 6.438696163358169e-07, 1);
  sqcRZGate(q, -0.3622608924614209, 1);
  sqcRYGate(q, 1.0629001769608473e-07, 2);
  sqcRZGate(q, -0.1007790198585369, 2);
  sqcRYGate(q, -1.5707961312885255, 3);
  sqcRZGate(q, -1.6464341717778783, 3);
  sqcRYGate(q, -1.5707959502425908, 4);
  sqcRZGate(q, -2.144692320582582, 4);
  sqcRYGate(q, 1.5708016102765814, 5);
  sqcRZGate(q, -1.6464341239353293, 5);
  sqcRYGate(q, 3.1415925588917957, 6);
  sqcRZGate(q, 2.4368128447318176, 6);
  sqcRYGate(q, -3.1415702836043815, 7);
  sqcRZGate(q, 0.19251199645830858, 7);

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
