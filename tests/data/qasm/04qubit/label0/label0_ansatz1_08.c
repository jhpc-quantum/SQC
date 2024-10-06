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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -2.4712841569273567, 0);
  sqcRZGate(q, -2.0275557969938145, 0);
  sqcRYGate(q, 3.028783148231556, 1);
  sqcRZGate(q, -0.4841511738812719, 1);
  sqcRYGate(q, -0.12000403770091239, 2);
  sqcRZGate(q, -0.9030875053393554, 2);
  sqcRYGate(q, 1.1183682221251603, 3);
  sqcRZGate(q, -1.6075213042705352, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.322412853165713, 0);
  sqcRZGate(q, 0.2789309239614499, 0);
  sqcRYGate(q, -0.19618260991664405, 1);
  sqcRZGate(q, -2.036901229191098, 1);
  sqcRYGate(q, 0.9614540932125863, 2);
  sqcRZGate(q, 1.0132594848843544, 2);
  sqcRYGate(q, 0.9477620492852182, 3);
  sqcRZGate(q, 0.43311704802779805, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.381046770256237, 0);
  sqcRZGate(q, -3.0763606801566645, 0);
  sqcRYGate(q, -0.4423097546468522, 1);
  sqcRZGate(q, 0.5842012779346463, 1);
  sqcRYGate(q, -3.080302395726839, 2);
  sqcRZGate(q, -0.36711310987511825, 2);
  sqcRYGate(q, -3.031328195834641, 3);
  sqcRZGate(q, -0.7217103899808172, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9544002773890283, 0);
  sqcRZGate(q, 0.39026512899808663, 0);
  sqcRYGate(q, 0.5155360752307405, 1);
  sqcRZGate(q, 0.7831046312675501, 1);
  sqcRYGate(q, -2.1585316791057347, 2);
  sqcRZGate(q, -1.128431848064992, 2);
  sqcRYGate(q, 1.3136242808257537, 3);
  sqcRZGate(q, 1.8270520518685531, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0073491782706987, 0);
  sqcRZGate(q, -2.413845339837008, 0);
  sqcRYGate(q, -2.3984584768270247, 1);
  sqcRZGate(q, 2.647288679501571, 1);
  sqcRYGate(q, 1.3941639787943876, 2);
  sqcRZGate(q, 0.9891456934666297, 2);
  sqcRYGate(q, -1.7508883885431399, 3);
  sqcRZGate(q, 0.2370922283168421, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4998560833001315, 0);
  sqcRZGate(q, -1.3574173769914823, 0);
  sqcRYGate(q, 2.830875702676364, 1);
  sqcRZGate(q, -1.6964484375225297, 1);
  sqcRYGate(q, 0.09223730178432078, 2);
  sqcRZGate(q, -0.4478445017677982, 2);
  sqcRYGate(q, 3.0250479010900255, 3);
  sqcRZGate(q, 1.0505864092173414, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4465774171927057, 0);
  sqcRZGate(q, 1.8643304203357962, 0);
  sqcRYGate(q, -1.2119383338131648, 1);
  sqcRZGate(q, -2.5043133776188498, 1);
  sqcRYGate(q, 0.3126909077977019, 2);
  sqcRZGate(q, 1.6407462337031231, 2);
  sqcRYGate(q, -0.04940724579377597, 3);
  sqcRZGate(q, -1.143161722577362, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.793911666613972, 0);
  sqcRZGate(q, -0.9109160112011258, 0);
  sqcRYGate(q, -0.03227668059534761, 1);
  sqcRZGate(q, -0.28609857705052816, 1);
  sqcRYGate(q, 3.1315911171603172, 2);
  sqcRZGate(q, 2.595944110942848, 2);
  sqcRYGate(q, -2.7749305518126417, 3);
  sqcRZGate(q, 2.898855120755149, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3803394692096365, 0);
  sqcRZGate(q, -2.3561163642967267, 0);
  sqcRYGate(q, -1.354956420718314, 1);
  sqcRZGate(q, -3.0657837542874407, 1);
  sqcRYGate(q, 0.33850791627500243, 2);
  sqcRZGate(q, -0.9125774625158626, 2);
  sqcRYGate(q, 1.8056825147845084, 3);
  sqcRZGate(q, 2.3994554724135804, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7539177259583143, 0);
  sqcRZGate(q, -0.3914951803543918, 0);
  sqcRYGate(q, -1.3193222766899764, 1);
  sqcRZGate(q, -0.05045356952396052, 1);
  sqcRYGate(q, 1.6693826366315214, 2);
  sqcRZGate(q, -0.404057309737305, 2);
  sqcRYGate(q, -2.040117696153995, 3);
  sqcRZGate(q, -2.09752152083733, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.216026648594082, 0);
  sqcRZGate(q, 1.1449553728731723, 0);
  sqcRYGate(q, -2.0284485648710855, 1);
  sqcRZGate(q, -2.23389309692708, 1);
  sqcRYGate(q, 0.0646663084387992, 2);
  sqcRZGate(q, -2.9301143797745413, 2);
  sqcRYGate(q, -0.8885138073578523, 3);
  sqcRZGate(q, -0.16275103626040366, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2114691788083436, 0);
  sqcRZGate(q, 2.0372845020220374, 0);
  sqcRYGate(q, -1.734722645546257, 1);
  sqcRZGate(q, -1.9199286321460285, 1);
  sqcRYGate(q, -2.766066992592198, 2);
  sqcRZGate(q, 2.5184780794573904, 2);
  sqcRYGate(q, 2.5058664114510387, 3);
  sqcRZGate(q, -1.9021877264401983, 3);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
