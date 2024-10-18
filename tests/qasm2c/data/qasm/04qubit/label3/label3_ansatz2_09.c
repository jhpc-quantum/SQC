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

  sqcRYGate(q, -1.3514074498910968, 0);
  sqcRZGate(q, 0.789063212963133, 0);
  sqcRYGate(q, -1.5109029058729853, 1);
  sqcRZGate(q, 0.7690596355867831, 1);
  sqcRYGate(q, 1.0804552329540875, 2);
  sqcRZGate(q, -2.5272037399741025, 2);
  sqcRYGate(q, -2.2803910856850504, 3);
  sqcRZGate(q, -2.514771177271074, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.5521055882705375, 0);
  sqcRZGate(q, 0.9193065665665285, 0);
  sqcRYGate(q, 2.811422868188773, 1);
  sqcRZGate(q, -2.7029423778269814, 1);
  sqcRYGate(q, 2.9845958796878036, 2);
  sqcRZGate(q, -2.9049756137742047, 2);
  sqcRYGate(q, -1.5182765250087267, 3);
  sqcRZGate(q, -2.6560284255274595, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.8308017697561088, 0);
  sqcRZGate(q, 1.0154087219519854, 0);
  sqcRYGate(q, 1.4667705357387388, 1);
  sqcRZGate(q, -1.1590265390346426, 1);
  sqcRYGate(q, -2.7728985626712803, 2);
  sqcRZGate(q, 0.4674096740570519, 2);
  sqcRYGate(q, 0.6993688986535204, 3);
  sqcRZGate(q, 2.916852274062109, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.8726851166879843, 0);
  sqcRZGate(q, -0.9496806874498551, 0);
  sqcRYGate(q, 0.4108358069898177, 1);
  sqcRZGate(q, -0.06098085570487172, 1);
  sqcRYGate(q, 1.4597798568673876, 2);
  sqcRZGate(q, -0.5069806893050144, 2);
  sqcRYGate(q, -1.5263282365628568, 3);
  sqcRZGate(q, 1.0036538819492211, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.8305251989659785, 0);
  sqcRZGate(q, -2.9955227616726576, 0);
  sqcRYGate(q, -1.055216595496602, 1);
  sqcRZGate(q, 0.9910269395005954, 1);
  sqcRYGate(q, 3.061293109602275, 2);
  sqcRZGate(q, -2.7463579377809046, 2);
  sqcRYGate(q, 2.25908792776574, 3);
  sqcRZGate(q, -1.1570878461922094, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.626486136517921, 0);
  sqcRZGate(q, -2.31218895047997, 0);
  sqcRYGate(q, 1.241063344220046, 1);
  sqcRZGate(q, 2.1722409887715566, 1);
  sqcRYGate(q, 2.0868108180498584, 2);
  sqcRZGate(q, -0.04234035221112809, 2);
  sqcRYGate(q, 1.9043689871754192, 3);
  sqcRZGate(q, -1.426188196945827, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.7617175848687356, 0);
  sqcRZGate(q, -0.6921205602883491, 0);
  sqcRYGate(q, 0.10914696672679634, 1);
  sqcRZGate(q, -2.884649990305036, 1);
  sqcRYGate(q, 2.849090090217952, 2);
  sqcRZGate(q, 1.41963462042102, 2);
  sqcRYGate(q, 0.25503903083166624, 3);
  sqcRZGate(q, 0.14853364890354467, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.9930697869741283, 0);
  sqcRZGate(q, -0.6790304353252062, 0);
  sqcRYGate(q, -3.0787886480335227, 1);
  sqcRZGate(q, -0.8973438211643101, 1);
  sqcRYGate(q, 0.5819143847362036, 2);
  sqcRZGate(q, 0.7699881827060403, 2);
  sqcRYGate(q, -0.7442977428528668, 3);
  sqcRZGate(q, 2.550123365302257, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.9261327763630887, 0);
  sqcRZGate(q, -0.13137397246895421, 0);
  sqcRYGate(q, -0.9028067151828706, 1);
  sqcRZGate(q, 0.4130929761755909, 1);
  sqcRYGate(q, 2.1729612823055886, 2);
  sqcRZGate(q, 0.5770653864060362, 2);
  sqcRYGate(q, -0.9978944185015585, 3);
  sqcRZGate(q, -0.07281549484434713, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.927993789479407, 0);
  sqcRZGate(q, -0.7551889662379657, 0);
  sqcRYGate(q, -2.46071890842311, 1);
  sqcRZGate(q, 1.9929344014793413, 1);
  sqcRYGate(q, -2.574854891126269, 2);
  sqcRZGate(q, 2.6738231514190463, 2);
  sqcRYGate(q, 2.8271019895369878, 3);
  sqcRZGate(q, 2.7276432616878403, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.7664170534443517, 0);
  sqcRZGate(q, 0.38884176796595177, 0);
  sqcRYGate(q, -1.054526364659103, 1);
  sqcRZGate(q, 2.4176743474095796, 1);
  sqcRYGate(q, -1.9334259741586288, 2);
  sqcRZGate(q, -1.0208026276997735, 2);
  sqcRYGate(q, -2.5388521653770875, 3);
  sqcRZGate(q, 0.0015699027802353882, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.9959831760953852, 0);
  sqcRZGate(q, -0.29924732266489784, 0);
  sqcRYGate(q, 1.8171734443363157, 1);
  sqcRZGate(q, -2.2678446358822626, 1);
  sqcRYGate(q, -0.49365523650776383, 2);
  sqcRZGate(q, 1.7911272284381088, 2);
  sqcRYGate(q, 0.5405223144535738, 3);
  sqcRZGate(q, -0.1113100870274213, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.9893886567913176, 0);
  sqcRZGate(q, 1.6863992402576622, 0);
  sqcRYGate(q, 1.4560629158825193, 1);
  sqcRZGate(q, -2.8746750556105893, 1);
  sqcRYGate(q, -3.0261026582306347, 2);
  sqcRZGate(q, 0.3701090495844681, 2);
  sqcRYGate(q, 2.3843550097888593, 3);
  sqcRZGate(q, 2.9202863150593594, 3);

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
