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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 0.004873282634499854, 0);
  sqcRZGate(q, 0.5413882412271355, 0);
  sqcRYGate(q, -0.021977500482241126, 1);
  sqcRZGate(q, -2.973999221284656, 1);
  sqcRYGate(q, -0.03777673626399295, 2);
  sqcRZGate(q, 0.23902339215981083, 2);
  sqcRYGate(q, 3.14158504970201, 3);
  sqcRZGate(q, -2.715754979081067, 3);
  sqcRYGate(q, -0.49714833535393854, 4);
  sqcRZGate(q, -2.9304185292511185, 4);
  sqcRYGate(q, 2.648588041160154, 5);
  sqcRZGate(q, 2.5810259388840873, 5);
  sqcRYGate(q, -0.00254871516027354, 6);
  sqcRZGate(q, 1.8932915961777323, 6);
  sqcRYGate(q, -3.1038630931330937, 7);
  sqcRZGate(q, 1.6303361488138068, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.0037911902652764074, 0);
  sqcRZGate(q, 2.4588361308214712, 0);
  sqcRYGate(q, 0.013017712162625499, 1);
  sqcRZGate(q, -0.48763334747982834, 1);
  sqcRYGate(q, -0.029962836409073972, 2);
  sqcRZGate(q, 2.9149220537223335, 2);
  sqcRYGate(q, 3.1415871094058025, 3);
  sqcRZGate(q, -0.5628657267750423, 3);
  sqcRYGate(q, 0.45215996622309895, 4);
  sqcRZGate(q, -0.24931872792596343, 4);
  sqcRYGate(q, -0.5107478804298778, 5);
  sqcRZGate(q, -2.7173736758806424, 5);
  sqcRYGate(q, 1.5788209617386861, 6);
  sqcRZGate(q, -3.1392026879086443, 6);
  sqcRYGate(q, -2.8905715218259886, 7);
  sqcRZGate(q, 2.4659938575190012, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.24684742395732598, 0);
  sqcRZGate(q, 1.4409262395725777, 0);
  sqcRYGate(q, -1.5512974824830403, 1);
  sqcRZGate(q, -3.040488725146448, 1);
  sqcRYGate(q, 2.9019057117942535, 2);
  sqcRZGate(q, -1.565902984670606, 2);
  sqcRYGate(q, 3.141592365865568, 3);
  sqcRZGate(q, -2.719401879662318, 3);
  sqcRYGate(q, -0.01441041325839966, 4);
  sqcRZGate(q, 1.6820007899588378, 4);
  sqcRYGate(q, -3.132979510782001, 5);
  sqcRZGate(q, -1.5829298385636363, 5);
  sqcRYGate(q, 1.5629653762049642, 6);
  sqcRZGate(q, -3.0978514117717633, 6);
  sqcRYGate(q, -3.139031424843208, 7);
  sqcRZGate(q, -0.8086301179002074, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.035844156421235535, 0);
  sqcRZGate(q, -1.438469380284931, 0);
  sqcRYGate(q, 1.5912427582874864, 1);
  sqcRZGate(q, -3.137179091499369, 1);
  sqcRYGate(q, 2.8742959937614754, 2);
  sqcRZGate(q, -1.5624096635444535, 2);
  sqcRYGate(q, -1.5708610792100186, 3);
  sqcRZGate(q, -1.5707964559518839, 3);
  sqcRYGate(q, 0.26461831672943337, 4);
  sqcRZGate(q, -1.6071701495339834, 4);
  sqcRYGate(q, 0.09904654300958662, 5);
  sqcRZGate(q, -1.6516574444336962, 5);
  sqcRYGate(q, 3.103776937826112, 6);
  sqcRZGate(q, -1.5202965428377166, 6);
  sqcRYGate(q, -3.125618965888127, 7);
  sqcRZGate(q, 1.5490065188777293, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.57079645291046, 0);
  sqcRZGate(q, -3.1415920888024482, 0);
  sqcRYGate(q, 1.5707961094303104, 1);
  sqcRZGate(q, -1.59763230889412e-06, 1);
  sqcRYGate(q, 1.5707963123704776, 2);
  sqcRZGate(q, -3.1415770741175564, 2);
  sqcRYGate(q, 1.5794100000673357, 3);
  sqcRZGate(q, 1.5708651088348484, 3);
  sqcRYGate(q, -1.5707972482508392, 4);
  sqcRZGate(q, 1.2207936694430543e-05, 4);
  sqcRYGate(q, 1.5707960901021838, 5);
  sqcRZGate(q, -3.1415923350359756, 5);
  sqcRYGate(q, 1.5707952721287803, 6);
  sqcRZGate(q, -3.1415900286855627, 6);
  sqcRYGate(q, -1.5707964023195797, 7);
  sqcRZGate(q, 1.318654886394379e-07, 7);

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
