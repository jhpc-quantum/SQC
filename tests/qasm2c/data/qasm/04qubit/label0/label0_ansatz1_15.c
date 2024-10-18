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

  sqcRYGate(q, 1.1863670554953047, 0);
  sqcRZGate(q, -1.1877223050961219, 0);
  sqcRYGate(q, -2.588165289325589, 1);
  sqcRZGate(q, 1.5642082166581295, 1);
  sqcRYGate(q, 0.05774856235490322, 2);
  sqcRZGate(q, -2.254398833416878, 2);
  sqcRYGate(q, -0.15290411375247093, 3);
  sqcRZGate(q, -0.33546275173048473, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4169971594053203, 0);
  sqcRZGate(q, -2.9460925248667094, 0);
  sqcRYGate(q, -1.4431124231117067, 1);
  sqcRZGate(q, -1.0054000369100995, 1);
  sqcRYGate(q, -0.7269466485958862, 2);
  sqcRZGate(q, 0.48001482323155203, 2);
  sqcRYGate(q, 1.8346791387782906, 3);
  sqcRZGate(q, -1.6314540868377252, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.768547708101676, 0);
  sqcRZGate(q, -2.6505028451642305, 0);
  sqcRYGate(q, 0.7099994166933872, 1);
  sqcRZGate(q, -2.9437112704252404, 1);
  sqcRYGate(q, -2.5126933421611093, 2);
  sqcRZGate(q, 2.5030555714934053, 2);
  sqcRYGate(q, 1.7700328794531397, 3);
  sqcRZGate(q, -2.1625584731626772, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.22279522274613475, 0);
  sqcRZGate(q, 0.7799840046101534, 0);
  sqcRYGate(q, 0.7261698548657859, 1);
  sqcRZGate(q, 0.6488741152970929, 1);
  sqcRYGate(q, 0.2097599426494023, 2);
  sqcRZGate(q, 1.8052954279458995, 2);
  sqcRYGate(q, 1.3303293008333181, 3);
  sqcRZGate(q, 2.0537985086803374, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7607559348292119, 0);
  sqcRZGate(q, 2.528311065581158, 0);
  sqcRYGate(q, -0.6533066381392469, 1);
  sqcRZGate(q, -0.9381576616614856, 1);
  sqcRYGate(q, 2.037952143320139, 2);
  sqcRZGate(q, -1.0394489583439004, 2);
  sqcRYGate(q, -0.5823814753280407, 3);
  sqcRZGate(q, 2.6658346508589585, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6922470574106417, 0);
  sqcRZGate(q, -0.7620609705187746, 0);
  sqcRYGate(q, -0.4999483963931439, 1);
  sqcRZGate(q, 2.073661727890017, 1);
  sqcRYGate(q, 2.9042926583915776, 2);
  sqcRZGate(q, 0.8338267030239809, 2);
  sqcRYGate(q, -0.7375794892825862, 3);
  sqcRZGate(q, -0.44790582656953465, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.20422772867698757, 0);
  sqcRZGate(q, 1.7606596733362965, 0);
  sqcRYGate(q, 2.1395860511707627, 1);
  sqcRZGate(q, -2.6648431099406564, 1);
  sqcRYGate(q, 2.2391741148514948, 2);
  sqcRZGate(q, -0.09586423272681838, 2);
  sqcRYGate(q, 3.1114862225981565, 3);
  sqcRZGate(q, -1.427283392640164, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0169967698222018, 0);
  sqcRZGate(q, -2.2410583905815242, 0);
  sqcRYGate(q, -1.218022838891863, 1);
  sqcRZGate(q, -1.232769059205216, 1);
  sqcRYGate(q, -2.8698622945692205, 2);
  sqcRZGate(q, 1.2477460569339431, 2);
  sqcRYGate(q, -0.9763538882912635, 3);
  sqcRZGate(q, -2.779027320983858, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7354602053287054, 0);
  sqcRZGate(q, 1.2365240524474226, 0);
  sqcRYGate(q, -1.0849391676107825, 1);
  sqcRZGate(q, 0.5248739620704826, 1);
  sqcRYGate(q, -0.45619050199138833, 2);
  sqcRZGate(q, 1.5047103841695861, 2);
  sqcRYGate(q, -2.425163258016567, 3);
  sqcRZGate(q, 1.018456414318061, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.943071840696646, 0);
  sqcRZGate(q, 2.886449677073373, 0);
  sqcRYGate(q, 1.7622212918212332, 1);
  sqcRZGate(q, -1.3741191089164149, 1);
  sqcRYGate(q, 2.900294486957356, 2);
  sqcRZGate(q, -2.1531232455789535, 2);
  sqcRYGate(q, -1.1205447420142143, 3);
  sqcRZGate(q, -2.811760375311925, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.9930998493891183, 0);
  sqcRZGate(q, -0.8336602586936013, 0);
  sqcRYGate(q, -0.8206808249195087, 1);
  sqcRZGate(q, 1.5291897549872946, 1);
  sqcRYGate(q, 2.0778323942111783, 2);
  sqcRZGate(q, 1.9776825719835731, 2);
  sqcRYGate(q, 0.021911167694836507, 3);
  sqcRZGate(q, 1.333160799653279, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8631418609858703, 0);
  sqcRZGate(q, 2.735601181791398, 0);
  sqcRYGate(q, -2.9594331203873896, 1);
  sqcRZGate(q, -1.1398183713718444, 1);
  sqcRYGate(q, 1.7547941561723936, 2);
  sqcRZGate(q, 0.6438766560538882, 2);
  sqcRYGate(q, 2.5448065623840477, 3);
  sqcRZGate(q, 1.9714481749010524, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.944528046542993, 0);
  sqcRZGate(q, 1.7292880606497312, 0);
  sqcRYGate(q, -0.012804769254602276, 1);
  sqcRZGate(q, 0.8147701066834299, 1);
  sqcRYGate(q, -2.568177625921224, 2);
  sqcRZGate(q, 2.978764216591257, 2);
  sqcRYGate(q, 1.8298725920489334, 3);
  sqcRZGate(q, 1.5786019162465983, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.545014784726753, 0);
  sqcRZGate(q, -0.9196732370128685, 0);
  sqcRYGate(q, -1.1934445162475686, 1);
  sqcRZGate(q, -1.7845453616733415, 1);
  sqcRYGate(q, -0.09414621585346869, 2);
  sqcRZGate(q, 0.46164249143073516, 2);
  sqcRYGate(q, 1.399575869623333, 3);
  sqcRZGate(q, -1.9273243556616737, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.4451858483060906, 0);
  sqcRZGate(q, -1.9129652770232357, 0);
  sqcRYGate(q, -1.45074145544079, 1);
  sqcRZGate(q, 2.3351594444103547, 1);
  sqcRYGate(q, -2.443094859061077, 2);
  sqcRZGate(q, 1.9771109305764654, 2);
  sqcRYGate(q, 2.905064105852873, 3);
  sqcRZGate(q, -1.635134999438975, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5688410968693374, 0);
  sqcRZGate(q, -1.160426490433796, 0);
  sqcRYGate(q, 1.5730610029923833, 1);
  sqcRZGate(q, -1.9905538464114731, 1);
  sqcRYGate(q, -0.8595336161595087, 2);
  sqcRZGate(q, -3.005761974409335, 2);
  sqcRYGate(q, 3.0422583047671483, 3);
  sqcRZGate(q, 2.45381052959885, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5010998959060529, 0);
  sqcRZGate(q, -0.021718842549815962, 0);
  sqcRYGate(q, -0.3641159929020634, 1);
  sqcRZGate(q, 2.1044577594385814, 1);
  sqcRYGate(q, -1.0478930440513494, 2);
  sqcRZGate(q, 0.7452482776472298, 2);
  sqcRYGate(q, 1.642612516384066, 3);
  sqcRZGate(q, 2.1075379104003487, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.1316659729681624, 0);
  sqcRZGate(q, -2.358128588594446, 0);
  sqcRYGate(q, -1.3079309071414924, 1);
  sqcRZGate(q, -0.22840149390251965, 1);
  sqcRYGate(q, 0.8052414317387153, 2);
  sqcRZGate(q, -0.8655765264725843, 2);
  sqcRYGate(q, -1.3174219637737845, 3);
  sqcRZGate(q, -1.921728802646804, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9679643889251746, 0);
  sqcRZGate(q, -0.8970481723027913, 0);
  sqcRYGate(q, 1.8170768579732952, 1);
  sqcRZGate(q, -2.1086543185043074, 1);
  sqcRYGate(q, -0.7322011230774379, 2);
  sqcRZGate(q, 2.6543499908874595, 2);
  sqcRYGate(q, -0.4104961930255806, 3);
  sqcRZGate(q, -2.463600148917645, 3);

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
