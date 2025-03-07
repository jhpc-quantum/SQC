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

  sqcRYGate(q, 0.8578691580418997, 0);
  sqcRZGate(q, 2.7625347363301214, 0);
  sqcRYGate(q, 2.6380394107890957, 1);
  sqcRZGate(q, -1.5165420599587192, 1);
  sqcRYGate(q, 0.00833655942016581, 2);
  sqcRZGate(q, -1.6302214926007952, 2);
  sqcRYGate(q, 1.1959251127459083, 3);
  sqcRZGate(q, 2.0639267401043497, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.6742431282757138, 0);
  sqcRZGate(q, -1.2605539763675662, 0);
  sqcRYGate(q, 1.6376784673361628, 1);
  sqcRZGate(q, 1.7678091394151147, 1);
  sqcRYGate(q, -2.2496384472987625, 2);
  sqcRZGate(q, -0.39379958912451807, 2);
  sqcRYGate(q, -0.055487432826260834, 3);
  sqcRZGate(q, 2.3670599444683087, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.386212788168145, 0);
  sqcRZGate(q, -2.405906129936628, 0);
  sqcRYGate(q, 1.1221930791708756, 1);
  sqcRZGate(q, 2.161753534099765, 1);
  sqcRYGate(q, -1.1207709423982535, 2);
  sqcRZGate(q, 1.1682266041861225, 2);
  sqcRYGate(q, 0.5335898342664389, 3);
  sqcRZGate(q, 2.0167724561128866, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.091310381150098, 0);
  sqcRZGate(q, 1.0799642771235582, 0);
  sqcRYGate(q, 1.6126879053141687, 1);
  sqcRZGate(q, -2.924376826010972, 1);
  sqcRYGate(q, 0.4551175237783811, 2);
  sqcRZGate(q, 2.5604820802081028, 2);
  sqcRYGate(q, 2.085093206969983, 3);
  sqcRZGate(q, 0.7282381597589058, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9182329371699609, 0);
  sqcRZGate(q, -0.009012728488939636, 0);
  sqcRYGate(q, -1.2016340621734851, 1);
  sqcRZGate(q, -0.5594855272139234, 1);
  sqcRYGate(q, 2.409613263332414, 2);
  sqcRZGate(q, -0.6200740821856281, 2);
  sqcRYGate(q, 1.9106743060532843, 3);
  sqcRZGate(q, 0.5893234716412334, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.4834948751198755, 0);
  sqcRZGate(q, -0.6396857156741529, 0);
  sqcRYGate(q, 3.0732264838583023, 1);
  sqcRZGate(q, 0.13448869060978416, 1);
  sqcRYGate(q, -1.4495731004067602, 2);
  sqcRZGate(q, 1.1884385669991224, 2);
  sqcRYGate(q, 0.7287737832877591, 3);
  sqcRZGate(q, 1.3029825293367343, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3388499327019, 0);
  sqcRZGate(q, -0.9074078732428879, 0);
  sqcRYGate(q, -1.688704950244615, 1);
  sqcRZGate(q, 0.9108456496037416, 1);
  sqcRYGate(q, 0.7945107333600043, 2);
  sqcRZGate(q, -3.072637361403764, 2);
  sqcRYGate(q, 1.8487647849087332, 3);
  sqcRZGate(q, -0.945103875615241, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1665971272169893, 0);
  sqcRZGate(q, 0.07203203144742587, 0);
  sqcRYGate(q, 0.9631241576858586, 1);
  sqcRZGate(q, -2.695649394259579, 1);
  sqcRYGate(q, -2.7413573089444814, 2);
  sqcRZGate(q, 0.039495032004083434, 2);
  sqcRYGate(q, 2.5960821640271123, 3);
  sqcRZGate(q, -0.6238496101928597, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8000466429501856, 0);
  sqcRZGate(q, 2.3927947050933454, 0);
  sqcRYGate(q, -0.6059750355040316, 1);
  sqcRZGate(q, 1.5834979105627904, 1);
  sqcRYGate(q, 1.5704234500760417, 2);
  sqcRZGate(q, 2.56532024236103, 2);
  sqcRYGate(q, -2.4254117692416184, 3);
  sqcRZGate(q, -3.128130409816076, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5022082273702775, 0);
  sqcRZGate(q, 1.5386199661625914, 0);
  sqcRYGate(q, -1.2876871262198328, 1);
  sqcRZGate(q, -0.4968207246096426, 1);
  sqcRYGate(q, 0.21102576071094314, 2);
  sqcRZGate(q, -1.8535518146798973, 2);
  sqcRYGate(q, 1.2010120594882263, 3);
  sqcRZGate(q, 0.06165349923958452, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.008770711386827619, 0);
  sqcRZGate(q, 0.5946854509722168, 0);
  sqcRYGate(q, 2.2069441060661257, 1);
  sqcRZGate(q, 0.921174280706552, 1);
  sqcRYGate(q, 1.8093556205339851, 2);
  sqcRZGate(q, 0.5161034386796777, 2);
  sqcRYGate(q, -2.6337068894749915, 3);
  sqcRZGate(q, 2.057918331945765, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.16294738037238837, 0);
  sqcRZGate(q, -2.2791492002668052, 0);
  sqcRYGate(q, -1.159337321941522, 1);
  sqcRZGate(q, -2.6986212884517866, 1);
  sqcRYGate(q, -1.81168003959655, 2);
  sqcRZGate(q, 2.640921938149863, 2);
  sqcRYGate(q, -2.1229478850542582, 3);
  sqcRZGate(q, -1.050602305887911, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9260524038176978, 0);
  sqcRZGate(q, 0.02195849501389616, 0);
  sqcRYGate(q, -0.744137018070414, 1);
  sqcRZGate(q, 1.5393658116357092, 1);
  sqcRYGate(q, 1.159047090556891, 2);
  sqcRZGate(q, 1.894205812914069, 2);
  sqcRYGate(q, -1.3561039604184257, 3);
  sqcRZGate(q, -2.2797951860499883, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.0917379903015783, 0);
  sqcRZGate(q, -2.007525301305777, 0);
  sqcRYGate(q, -1.3802332982425467, 1);
  sqcRZGate(q, -0.2753107961453649, 1);
  sqcRYGate(q, 2.504569661106773, 2);
  sqcRZGate(q, 1.3598011376459809, 2);
  sqcRYGate(q, 2.101481502409372, 3);
  sqcRZGate(q, 3.1213738368295485, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2680002839637403, 0);
  sqcRZGate(q, -1.9047542691276393, 0);
  sqcRYGate(q, -2.6959118910698447, 1);
  sqcRZGate(q, -2.649111751747438, 1);
  sqcRYGate(q, 2.609797629300383, 2);
  sqcRZGate(q, -1.80420917969574, 2);
  sqcRYGate(q, 1.0259239033288852, 3);
  sqcRZGate(q, 0.8026982249056279, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7425596421603314, 0);
  sqcRZGate(q, -3.0946756549912595, 0);
  sqcRYGate(q, 1.8355911931144862, 1);
  sqcRZGate(q, 0.9201331269300433, 1);
  sqcRYGate(q, -2.1371095372851983, 2);
  sqcRZGate(q, -2.3657428150116107, 2);
  sqcRYGate(q, 0.45919756311244925, 3);
  sqcRZGate(q, 1.1262511421626054, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.7697062242808046, 0);
  sqcRZGate(q, 2.4301483976811062, 0);
  sqcRYGate(q, -2.7562132529046695, 1);
  sqcRZGate(q, 1.6111945414744078, 1);
  sqcRYGate(q, 0.9339756614925356, 2);
  sqcRZGate(q, 3.0349033649346024, 2);
  sqcRYGate(q, 1.9421817729293798, 3);
  sqcRZGate(q, 2.0941397194061793, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.460463186199849, 0);
  sqcRZGate(q, -2.2263902272105565, 0);
  sqcRYGate(q, 2.778943125519024, 1);
  sqcRZGate(q, -2.401117424597147, 1);
  sqcRYGate(q, -0.9946348909184684, 2);
  sqcRZGate(q, 1.3872228517211185, 2);
  sqcRYGate(q, -0.31611357866619016, 3);
  sqcRZGate(q, 2.7019251841384317, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.669355862049061, 0);
  sqcRZGate(q, 0.4820471992900455, 0);
  sqcRYGate(q, -2.4288474285487824, 1);
  sqcRZGate(q, 1.8600370393370425, 1);
  sqcRYGate(q, -0.7170305482644412, 2);
  sqcRZGate(q, 1.5772156268810305, 2);
  sqcRYGate(q, -0.5422839972245392, 3);
  sqcRZGate(q, -0.7913897723344885, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5967900194415128, 0);
  sqcRZGate(q, -2.274568691969371, 0);
  sqcRYGate(q, -2.454821952841451, 1);
  sqcRZGate(q, -2.8883761396652186, 1);
  sqcRYGate(q, -1.3080703512279903, 2);
  sqcRZGate(q, -2.029493516428713, 2);
  sqcRYGate(q, 1.0682605576592055, 3);
  sqcRZGate(q, 0.21827708383071162, 3);

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
