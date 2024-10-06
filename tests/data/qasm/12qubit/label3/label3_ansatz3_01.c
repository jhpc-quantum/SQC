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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 1.5707930604615041, 0);
  sqcRZGate(q, -1.570925398673852, 0);
  sqcRYGate(q, -2.781052977422028, 1);
  sqcRZGate(q, 2.8022755256946854, 1);
  sqcRYGate(q, -0.4156995983649248, 2);
  sqcRZGate(q, -2.372111053056858, 2);
  sqcRYGate(q, -4.6219034102179535e-06, 3);
  sqcRZGate(q, 1.090896593534708, 3);
  sqcRYGate(q, -1.570790918218431, 4);
  sqcRZGate(q, -3.141446948508668, 4);
  sqcRYGate(q, -1.5707382215638708, 5);
  sqcRZGate(q, -3.141500178588993, 5);
  sqcRYGate(q, 3.141582157812907, 6);
  sqcRZGate(q, -1.5843002306593519, 6);
  sqcRYGate(q, -0.4079456575129304, 7);
  sqcRZGate(q, 0.3116820416207762, 7);
  sqcRYGate(q, -0.0655413156485711, 8);
  sqcRZGate(q, 2.60783355922012, 8);
  sqcRYGate(q, -1.5707391812817197, 9);
  sqcRZGate(q, 2.3305604955053382e-05, 9);
  sqcRYGate(q, 1.5707991732076865, 10);
  sqcRZGate(q, -1.5708252622366023, 10);
  sqcRYGate(q, -3.0155725161355607, 11);
  sqcRZGate(q, -3.099831327140512, 11);
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
  sqcRYGate(q, 2.8935447013787217, 0);
  sqcRZGate(q, 1.5707095172078893, 0);
  sqcRYGate(q, -1.5708068161509834, 1);
  sqcRZGate(q, 2.8386796665280656e-05, 1);
  sqcRYGate(q, -0.3909164777033373, 2);
  sqcRZGate(q, -2.821702223210363, 2);
  sqcRYGate(q, 2.6299224252209474, 3);
  sqcRZGate(q, -0.1716285561886917, 3);
  sqcRYGate(q, 3.09274186575001, 4);
  sqcRZGate(q, 0.00014865870949076768, 4);
  sqcRYGate(q, 3.1313273271349864, 5);
  sqcRZGate(q, 1.5708643859352351, 5);
  sqcRYGate(q, 0.41475843512962035, 6);
  sqcRZGate(q, 0.8455334162659095, 6);
  sqcRYGate(q, 2.691040219618814, 7);
  sqcRZGate(q, -0.006365114323048537, 7);
  sqcRYGate(q, 0.09225841067491664, 8);
  sqcRZGate(q, -2.8359272195622887, 8);
  sqcRYGate(q, -1.5707610376718597, 9);
  sqcRZGate(q, -0.3124468568906718, 9);
  sqcRYGate(q, 0.8724351894231965, 10);
  sqcRZGate(q, 1.5708191954952762, 10);
  sqcRYGate(q, -3.031805749416315, 11);
  sqcRZGate(q, 0.436322919128001, 11);
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
  sqcRYGate(q, 0.2587612377945113, 0);
  sqcRZGate(q, -3.5818615977855225e-05, 0);
  sqcRYGate(q, -2.8981550579109143, 1);
  sqcRZGate(q, -3.1415900642177776, 1);
  sqcRYGate(q, 2.507590583123966, 2);
  sqcRZGate(q, -2.962422450758024, 2);
  sqcRYGate(q, 2.4653113464336744, 3);
  sqcRZGate(q, 0.7517923860478787, 3);
  sqcRYGate(q, -1.5708189334249512, 4);
  sqcRZGate(q, 0.7281402835613815, 4);
  sqcRYGate(q, -2.6245944662782734, 5);
  sqcRZGate(q, -1.5249500313010107, 5);
  sqcRYGate(q, -3.1415410241239483, 6);
  sqcRZGate(q, -2.2447613622471003, 6);
  sqcRYGate(q, -3.141592166254928, 7);
  sqcRZGate(q, 2.0040728782999584, 7);
  sqcRYGate(q, 1.5707971072944462, 8);
  sqcRZGate(q, -0.0002848863478615016, 8);
  sqcRYGate(q, 1.5707729394007393, 9);
  sqcRZGate(q, -0.00036390196515867507, 9);
  sqcRYGate(q, 1.5708099985867865, 10);
  sqcRZGate(q, -0.3336071312592413, 10);
  sqcRYGate(q, 4.4498928888359055e-06, 11);
  sqcRZGate(q, 1.631120220414922, 11);
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
  sqcRYGate(q, -1.570770837978813, 0);
  sqcRZGate(q, -1.6025193863662617, 0);
  sqcRYGate(q, -1.570791049902132, 1);
  sqcRZGate(q, -2.769564664925253, 1);
  sqcRYGate(q, -3.141588484160561, 2);
  sqcRZGate(q, -0.1173129007821564, 2);
  sqcRYGate(q, 2.7378104842589273, 3);
  sqcRZGate(q, 0.6739681651441384, 3);
  sqcRYGate(q, 3.08571666939723, 4);
  sqcRZGate(q, 0.5445682345433633, 4);
  sqcRYGate(q, -3.141543614439458, 5);
  sqcRZGate(q, 0.045854931352217014, 5);
  sqcRYGate(q, -0.2658542634249734, 6);
  sqcRZGate(q, 2.526936624654684, 6);
  sqcRYGate(q, 1.0190254980641602e-05, 7);
  sqcRZGate(q, 2.098652282078051, 7);
  sqcRYGate(q, 0.03400546844158293, 8);
  sqcRZGate(q, -3.141303283724188, 8);
  sqcRYGate(q, -3.1081870621289456, 9);
  sqcRZGate(q, 3.1411825841579946, 9);
  sqcRYGate(q, 0.7851514813102494, 10);
  sqcRZGate(q, -0.018313179065177716, 10);
  sqcRYGate(q, 2.5639351368843055, 11);
  sqcRZGate(q, 0.5899445796900774, 11);
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
  sqcRYGate(q, 9.223582380161441e-06, 0);
  sqcRZGate(q, -2.5017185033525218, 0);
  sqcRYGate(q, -3.1415746830481095, 1);
  sqcRZGate(q, 2.9934357395286444, 1);
  sqcRYGate(q, -2.8438710245382026e-05, 2);
  sqcRZGate(q, 0.18382754119493416, 2);
  sqcRYGate(q, 1.4356951269968666e-05, 3);
  sqcRZGate(q, 2.6478149144165424, 3);
  sqcRYGate(q, 2.145950489109421e-06, 4);
  sqcRZGate(q, 0.34824512197649243, 4);
  sqcRYGate(q, 1.5708245618946557, 5);
  sqcRZGate(q, -1.9028383441372583, 5);
  sqcRYGate(q, 6.427552228061018e-05, 6);
  sqcRZGate(q, -2.4087329224121965, 6);
  sqcRYGate(q, -3.1415837452715225, 7);
  sqcRZGate(q, 2.688989277467009, 7);
  sqcRYGate(q, 1.5708147614293493, 8);
  sqcRZGate(q, -3.0218986683603735, 8);
  sqcRYGate(q, 1.5707987430273338, 9);
  sqcRZGate(q, 1.709551313158057, 9);
  sqcRYGate(q, 3.2345284317614187e-06, 10);
  sqcRZGate(q, -3.0104067073912453, 10);
  sqcRYGate(q, 8.395994034716522e-06, 11);
  sqcRZGate(q, -1.8900140471740319, 11);

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
