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

  sqcRYGate(q, -1.058602928243217, 0);
  sqcRZGate(q, 3.0337479230028976, 0);
  sqcRYGate(q, -0.6680599453418921, 1);
  sqcRZGate(q, -1.140659929157441, 1);
  sqcRYGate(q, -0.5491751971541862, 2);
  sqcRZGate(q, 2.897642143705408, 2);
  sqcRYGate(q, 0.39287607961977467, 3);
  sqcRZGate(q, 1.2486014254869424, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.4204407009323194, 0);
  sqcRZGate(q, 0.7316149268911931, 0);
  sqcRYGate(q, -2.986198316375617, 1);
  sqcRZGate(q, -2.4030545508990833, 1);
  sqcRYGate(q, 3.0086060281867253, 2);
  sqcRZGate(q, -1.095131963740255, 2);
  sqcRYGate(q, 1.2361662831251146, 3);
  sqcRZGate(q, 0.424685422905986, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.824514760060328, 0);
  sqcRZGate(q, 2.0420277062966314, 0);
  sqcRYGate(q, -2.237190985137522, 1);
  sqcRZGate(q, 2.6016613224341576, 1);
  sqcRYGate(q, -1.5246103696139155, 2);
  sqcRZGate(q, -0.15555464751070042, 2);
  sqcRYGate(q, 2.2061726912056723, 3);
  sqcRZGate(q, -2.364759410158311, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.7080421218188544, 0);
  sqcRZGate(q, -1.5352845177431993, 0);
  sqcRYGate(q, -1.1611073619350165, 1);
  sqcRZGate(q, -1.0957777278226466, 1);
  sqcRYGate(q, 0.3257253499475356, 2);
  sqcRZGate(q, 1.19849299363138, 2);
  sqcRYGate(q, -2.278881923752823, 3);
  sqcRZGate(q, -1.4730484162275916, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.3678852928250587, 0);
  sqcRZGate(q, 2.1893231716699035, 0);
  sqcRYGate(q, -0.12327121519779062, 1);
  sqcRZGate(q, 2.920665548646056, 1);
  sqcRYGate(q, 2.397482661965498, 2);
  sqcRZGate(q, -0.4834269717341274, 2);
  sqcRYGate(q, -2.339886428496744, 3);
  sqcRZGate(q, 2.8419818983173775, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.7682871403154046, 0);
  sqcRZGate(q, -1.8096853431849746, 0);
  sqcRYGate(q, 0.2723348750899861, 1);
  sqcRZGate(q, -3.0787932193801306, 1);
  sqcRYGate(q, -1.055465805103792, 2);
  sqcRZGate(q, 0.027945956627355346, 2);
  sqcRYGate(q, 3.0895512286321014, 3);
  sqcRZGate(q, -0.7502498907726567, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.29216052218167654, 0);
  sqcRZGate(q, -0.812252560843171, 0);
  sqcRYGate(q, -2.9932725116969787, 1);
  sqcRZGate(q, -0.8760961398818518, 1);
  sqcRYGate(q, -0.7452647513994233, 2);
  sqcRZGate(q, 1.951312268754872, 2);
  sqcRYGate(q, -2.3517318410490717, 3);
  sqcRZGate(q, -1.4823283641625586, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.4023882507659184, 0);
  sqcRZGate(q, -2.3057049512980243, 0);
  sqcRYGate(q, 1.7403047957225104, 1);
  sqcRZGate(q, 0.9865607009458601, 1);
  sqcRYGate(q, 0.3559799478157677, 2);
  sqcRZGate(q, -3.027078394641424, 2);
  sqcRYGate(q, 2.9190149371044525, 3);
  sqcRZGate(q, -2.0431542924795245, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.05925591846754408, 0);
  sqcRZGate(q, 1.0105659394638806, 0);
  sqcRYGate(q, 1.273757302689451, 1);
  sqcRZGate(q, 2.659247154811482, 1);
  sqcRYGate(q, 1.6368237181606913, 2);
  sqcRZGate(q, 2.6652512354656968, 2);
  sqcRYGate(q, -2.2264824194122124, 3);
  sqcRZGate(q, -2.638977219584576, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.7179800602731705, 0);
  sqcRZGate(q, 2.9960309264859153, 0);
  sqcRYGate(q, 1.0052305792353975, 1);
  sqcRZGate(q, 0.5947269539583663, 1);
  sqcRYGate(q, 1.862377422482231, 2);
  sqcRZGate(q, -0.5369636778501592, 2);
  sqcRYGate(q, -2.4560848778870485, 3);
  sqcRZGate(q, -2.7636190845836484, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.7400733929183887, 0);
  sqcRZGate(q, 1.5809655526975126, 0);
  sqcRYGate(q, -0.46901426075208186, 1);
  sqcRZGate(q, 3.040333889088762, 1);
  sqcRYGate(q, 0.31618241457111296, 2);
  sqcRZGate(q, -2.0372169205886017, 2);
  sqcRYGate(q, -2.5929089661329257, 3);
  sqcRZGate(q, -2.7941353277401326, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.243888769476456, 0);
  sqcRZGate(q, -0.4666641994812064, 0);
  sqcRYGate(q, -3.070030540271601, 1);
  sqcRZGate(q, 1.5607241876247295, 1);
  sqcRYGate(q, -0.0242757643982549, 2);
  sqcRZGate(q, 2.8253855340425544, 2);
  sqcRYGate(q, 1.4417986589570455, 3);
  sqcRZGate(q, -2.066459613362678, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.6712816583622718, 0);
  sqcRZGate(q, -2.543549523627568, 0);
  sqcRYGate(q, 0.4608836954810372, 1);
  sqcRZGate(q, 1.3367574144503496, 1);
  sqcRYGate(q, 2.2126074785000083, 2);
  sqcRZGate(q, -1.3129853697341751, 2);
  sqcRYGate(q, 0.6498875889866678, 3);
  sqcRZGate(q, 0.9239193116582677, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.774911536011521, 0);
  sqcRZGate(q, -2.3935882970985882, 0);
  sqcRYGate(q, 1.7374569891759064, 1);
  sqcRZGate(q, 2.4588186404423356, 1);
  sqcRYGate(q, 1.4592536935311287, 2);
  sqcRZGate(q, 0.8022444586051459, 2);
  sqcRYGate(q, 0.011878857588144776, 3);
  sqcRZGate(q, 2.31463246584406, 3);

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
