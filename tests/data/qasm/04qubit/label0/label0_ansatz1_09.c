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

  sqcRYGate(q, -0.07646380258845452, 0);
  sqcRZGate(q, 0.5816301634548968, 0);
  sqcRYGate(q, 2.683594169305969, 1);
  sqcRZGate(q, 2.2462543051233625, 1);
  sqcRYGate(q, 0.9589088661815033, 2);
  sqcRZGate(q, -0.7963310432113808, 2);
  sqcRYGate(q, 2.461381360709996, 3);
  sqcRZGate(q, -2.772341487411426, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.422079422615809, 0);
  sqcRZGate(q, -1.4330496714538228, 0);
  sqcRYGate(q, -1.4181547466283597, 1);
  sqcRZGate(q, -2.618410422404252, 1);
  sqcRYGate(q, -0.9247308118453957, 2);
  sqcRZGate(q, 0.5593800617474933, 2);
  sqcRYGate(q, -2.376070548103334, 3);
  sqcRZGate(q, 2.9064134203150753, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8102479093751276, 0);
  sqcRZGate(q, 2.2837312084779784, 0);
  sqcRYGate(q, 2.818805910228927, 1);
  sqcRZGate(q, 1.9251279253743174, 1);
  sqcRYGate(q, -2.916550790072253, 2);
  sqcRZGate(q, -2.095479297670064, 2);
  sqcRYGate(q, 0.7740423519915485, 3);
  sqcRZGate(q, -1.5172235680839543, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.8898852630025091, 0);
  sqcRZGate(q, 2.35894469102832, 0);
  sqcRYGate(q, 2.4909773769976495, 1);
  sqcRZGate(q, -2.4985055297444054, 1);
  sqcRYGate(q, -1.4906587203583035, 2);
  sqcRZGate(q, 2.1513165765830973, 2);
  sqcRYGate(q, -3.0109169224965124, 3);
  sqcRZGate(q, 0.9112488170283017, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.8869879329938224, 0);
  sqcRZGate(q, 2.692577083657262, 0);
  sqcRYGate(q, -2.1526246839524865, 1);
  sqcRZGate(q, -0.3408877739299392, 1);
  sqcRYGate(q, -0.7799806377897196, 2);
  sqcRZGate(q, -2.9576492873843034, 2);
  sqcRYGate(q, 0.945590630278077, 3);
  sqcRZGate(q, -1.45354397531126, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.6598652516107313, 0);
  sqcRZGate(q, -1.3787469591214219, 0);
  sqcRYGate(q, -3.134238048771985, 1);
  sqcRZGate(q, -0.789765589982392, 1);
  sqcRYGate(q, 2.854149901940972, 2);
  sqcRZGate(q, 0.026477380934543323, 2);
  sqcRYGate(q, -0.0820863163644386, 3);
  sqcRZGate(q, -2.8011646874798637, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.11348825118206184, 0);
  sqcRZGate(q, -0.11267851504833537, 0);
  sqcRYGate(q, -0.9506535163716237, 1);
  sqcRZGate(q, 1.4876360203535155, 1);
  sqcRYGate(q, -2.037921184323091, 2);
  sqcRZGate(q, -3.140626224554171, 2);
  sqcRYGate(q, 0.7890266405453072, 3);
  sqcRZGate(q, 0.8884512531778945, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.2925564414810364, 0);
  sqcRZGate(q, -0.6635067620254153, 0);
  sqcRYGate(q, -0.7412620286619829, 1);
  sqcRZGate(q, 1.8950947556806677, 1);
  sqcRYGate(q, -2.666196953511918, 2);
  sqcRZGate(q, 1.6683000170551057, 2);
  sqcRYGate(q, -0.8099111457260623, 3);
  sqcRZGate(q, -1.851432542001394, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9279039132923916, 0);
  sqcRZGate(q, 2.875724587827878, 0);
  sqcRYGate(q, 1.443937724924717, 1);
  sqcRZGate(q, -1.2403442158328302, 1);
  sqcRYGate(q, 2.0409855073468623, 2);
  sqcRZGate(q, -2.0006778206698943, 2);
  sqcRYGate(q, 0.754048574384566, 3);
  sqcRZGate(q, -2.5198180461374675, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8008208416549722, 0);
  sqcRZGate(q, -1.1175414707462634, 0);
  sqcRYGate(q, -0.4993127981729101, 1);
  sqcRZGate(q, 0.6611367119379502, 1);
  sqcRYGate(q, -0.2592879784673494, 2);
  sqcRZGate(q, -0.011066294716949978, 2);
  sqcRYGate(q, -0.030581639618154504, 3);
  sqcRZGate(q, -0.45500021799606843, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.2738790027622242, 0);
  sqcRZGate(q, 3.031930128560912, 0);
  sqcRYGate(q, -1.004164335484624, 1);
  sqcRZGate(q, 1.5207826018922388, 1);
  sqcRYGate(q, -1.5846936185045084, 2);
  sqcRZGate(q, -2.466771392606519, 2);
  sqcRYGate(q, 0.6621132584382039, 3);
  sqcRZGate(q, 0.5545494233294449, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0112998742739343, 0);
  sqcRZGate(q, -2.5558579264071764, 0);
  sqcRYGate(q, -1.2145963211857733, 1);
  sqcRZGate(q, 0.37118951766495883, 1);
  sqcRYGate(q, -1.8680829131373757, 2);
  sqcRZGate(q, -1.2305489161191627, 2);
  sqcRYGate(q, 1.3737263565581945, 3);
  sqcRZGate(q, -2.9953304525855273, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.269314906591168, 0);
  sqcRZGate(q, 0.04626519670280783, 0);
  sqcRYGate(q, 0.8079750176106701, 1);
  sqcRZGate(q, 0.13495721829263999, 1);
  sqcRYGate(q, 1.8038025646483418, 2);
  sqcRZGate(q, -1.463247636309202, 2);
  sqcRYGate(q, -0.36860488824601056, 3);
  sqcRZGate(q, -1.1722406096141178, 3);

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
