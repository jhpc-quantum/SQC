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

  sqcRYGate(q, 1.57088067890153, 0);
  sqcRZGate(q, -1.777366830936613, 0);
  sqcRYGate(q, -1.444425443441606, 1);
  sqcRZGate(q, -3.141590455146815, 1);
  sqcRYGate(q, -1.5653499059015135, 2);
  sqcRZGate(q, 1.5707947399815156, 2);
  sqcRYGate(q, -1.5707756023099533, 3);
  sqcRZGate(q, -3.1415897158813704, 3);
  sqcRYGate(q, 1.5707961475143506, 4);
  sqcRZGate(q, -1.367950323547331, 4);
  sqcRYGate(q, 1.5707959717754, 5);
  sqcRZGate(q, 1.7056548088815162, 5);
  sqcRYGate(q, -3.1415867527170844, 6);
  sqcRZGate(q, 1.7686788403304023, 6);
  sqcRYGate(q, 3.141482625019594, 7);
  sqcRZGate(q, -1.1055006351005092, 7);
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
  sqcRYGate(q, -8.669831146335127e-07, 0);
  sqcRZGate(q, 1.0573050679327811, 0);
  sqcRYGate(q, -1.4946573292355714, 1);
  sqcRZGate(q, 2.1364565960619464, 1);
  sqcRYGate(q, -0.7218198296336347, 2);
  sqcRZGate(q, 6.423183769180632e-07, 2);
  sqcRYGate(q, -1.570806310454972, 3);
  sqcRZGate(q, -3.014214826499867, 3);
  sqcRYGate(q, 1.815083223921114, 4);
  sqcRZGate(q, -2.3419995720451317, 4);
  sqcRYGate(q, -1.5707170845404326, 5);
  sqcRZGate(q, 0.09151930845361811, 5);
  sqcRYGate(q, -3.1414678918391767, 6);
  sqcRZGate(q, 2.058951235205278, 6);
  sqcRYGate(q, -1.570780238998279, 7);
  sqcRZGate(q, -0.7866144411937556, 7);
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
  sqcRYGate(q, 6.100000035758058e-06, 0);
  sqcRZGate(q, 0.7074841722748197, 0);
  sqcRYGate(q, -3.1415898394743835, 1);
  sqcRZGate(q, -1.0051425913642427, 1);
  sqcRYGate(q, 1.5707762194734336, 2);
  sqcRZGate(q, -1.7766192870002645e-06, 2);
  sqcRYGate(q, -2.1279846261661017, 3);
  sqcRZGate(q, 0.19753795001636296, 3);
  sqcRYGate(q, 9.79547429569294e-06, 4);
  sqcRZGate(q, 0.7240528738388576, 4);
  sqcRYGate(q, -4.064087260755123e-07, 5);
  sqcRZGate(q, 1.4729978813090803, 5);
  sqcRYGate(q, -2.693691387540965, 6);
  sqcRZGate(q, 3.089179149719552, 6);
  sqcRYGate(q, -0.008855304259951069, 7);
  sqcRZGate(q, -2.3549552927247057, 7);
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
  sqcRYGate(q, 3.1323228319149887, 0);
  sqcRZGate(q, 3.1290141330166157, 0);
  sqcRYGate(q, 2.737623809229399, 1);
  sqcRZGate(q, -9.454901740301666e-06, 1);
  sqcRYGate(q, -1.246293930188239, 2);
  sqcRZGate(q, -3.141588027800199, 2);
  sqcRYGate(q, 1.5707959704701968, 3);
  sqcRZGate(q, -9.305337771786319e-05, 3);
  sqcRYGate(q, 1.5708191979426172, 4);
  sqcRZGate(q, 1.5707921491952277, 4);
  sqcRYGate(q, -1.643861571532161, 5);
  sqcRZGate(q, -3.126517816633795, 5);
  sqcRYGate(q, 3.141528031568111, 6);
  sqcRZGate(q, 1.51839953836954, 6);
  sqcRYGate(q, 1.5708122481496707, 7);
  sqcRZGate(q, -3.1415767409412836, 7);
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
  sqcRYGate(q, 1.570845016756425, 0);
  sqcRZGate(q, -1.4642044279013666, 0);
  sqcRYGate(q, 1.5707794393893593, 1);
  sqcRZGate(q, -2.5124991760381605, 1);
  sqcRYGate(q, -1.5707957624015485, 2);
  sqcRZGate(q, -1.4246870394762774, 2);
  sqcRYGate(q, 3.1292690717269083, 3);
  sqcRZGate(q, 3.0348938671407524, 3);
  sqcRYGate(q, -1.5707974467306791, 4);
  sqcRZGate(q, -2.199214640825689, 4);
  sqcRYGate(q, 3.141474971003696, 5);
  sqcRZGate(q, 3.0105717847927167, 5);
  sqcRYGate(q, -1.9050481834772128, 6);
  sqcRZGate(q, 3.0350507958871855, 6);
  sqcRYGate(q, -2.953296102778991, 7);
  sqcRZGate(q, -1.6773932866221966, 7);
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
  sqcRYGate(q, 1.4255079534941668, 0);
  sqcRZGate(q, 1.6424943272971104, 0);
  sqcRYGate(q, 2.9617014463553635, 1);
  sqcRZGate(q, 2.279309250631372, 1);
  sqcRYGate(q, -1.6762548585912458, 2);
  sqcRZGate(q, -3.0543896559480865, 2);
  sqcRYGate(q, -1.7160819503847142, 3);
  sqcRZGate(q, 1.6424427393780616, 3);
  sqcRYGate(q, -0.1799568467009784, 4);
  sqcRZGate(q, 2.2789646085153223, 4);
  sqcRYGate(q, -1.465327413694279, 5);
  sqcRZGate(q, 0.08714861232930993, 5);
  sqcRYGate(q, 1.7161015610326693, 6);
  sqcRZGate(q, -1.4988023580232406, 6);
  sqcRYGate(q, 1.7160874822363628, 7);
  sqcRZGate(q, -1.4991374733686404, 7);

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
