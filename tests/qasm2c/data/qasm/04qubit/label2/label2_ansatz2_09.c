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

  sqcRYGate(q, -1.083147616647393, 0);
  sqcRZGate(q, -1.3676196811336943, 0);
  sqcRYGate(q, 2.136535870885889, 1);
  sqcRZGate(q, -3.0004356414912556, 1);
  sqcRYGate(q, -1.6820898641115736, 2);
  sqcRZGate(q, 2.322011664370792, 2);
  sqcRYGate(q, 0.4787686798596642, 3);
  sqcRZGate(q, -1.0398765292229393, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.089880452612704, 0);
  sqcRZGate(q, -1.695465114971535, 0);
  sqcRYGate(q, -0.6079220528021958, 1);
  sqcRZGate(q, 2.139894645099372, 1);
  sqcRYGate(q, -2.4536952003100057, 2);
  sqcRZGate(q, -0.15824030680829448, 2);
  sqcRYGate(q, 1.1758682393617024, 3);
  sqcRZGate(q, 2.3074193578879028, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.45292875722381515, 0);
  sqcRZGate(q, -1.137130660913428, 0);
  sqcRYGate(q, -0.24168989482065673, 1);
  sqcRZGate(q, -0.4475688402033335, 1);
  sqcRYGate(q, -0.6659417499592619, 2);
  sqcRZGate(q, 0.8302760172393251, 2);
  sqcRYGate(q, 1.018245355606349, 3);
  sqcRZGate(q, 2.3808364756158698, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.066900273127445, 0);
  sqcRZGate(q, 3.0680960547988825, 0);
  sqcRYGate(q, -2.5110604282334377, 1);
  sqcRZGate(q, 2.5681114698274947, 1);
  sqcRYGate(q, -1.0701860676442365, 2);
  sqcRZGate(q, 0.4087087209977982, 2);
  sqcRYGate(q, 1.6900373965211413, 3);
  sqcRZGate(q, -2.3336563115373554, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.3984883239586843, 0);
  sqcRZGate(q, -2.36080260844602, 0);
  sqcRYGate(q, -0.03624158712002146, 1);
  sqcRZGate(q, -0.0881199328904705, 1);
  sqcRYGate(q, 0.8743330891022202, 2);
  sqcRZGate(q, -0.7827518192823995, 2);
  sqcRYGate(q, 1.010113212972426, 3);
  sqcRZGate(q, -0.08719665531472301, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.1981052771848557, 0);
  sqcRZGate(q, -2.0407913233218977, 0);
  sqcRYGate(q, 2.8585145173854296, 1);
  sqcRZGate(q, -0.6581066274136426, 1);
  sqcRYGate(q, 1.6108308132595335, 2);
  sqcRZGate(q, -1.637618875891962, 2);
  sqcRYGate(q, -3.0727386642758114, 3);
  sqcRZGate(q, 2.9563688429780406, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.4967775386125237, 0);
  sqcRZGate(q, -3.076072776062018, 0);
  sqcRYGate(q, 1.1025198428526426, 1);
  sqcRZGate(q, 2.114786765785249, 1);
  sqcRYGate(q, 0.33788991284252834, 2);
  sqcRZGate(q, -2.070628636889418, 2);
  sqcRYGate(q, -1.4244080823079888, 3);
  sqcRZGate(q, 0.21393978064803554, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.6408984756482248, 0);
  sqcRZGate(q, -1.113718703906116, 0);
  sqcRYGate(q, 2.6547162694888238, 1);
  sqcRZGate(q, 0.6692853466299136, 1);
  sqcRYGate(q, 0.4047321285617649, 2);
  sqcRZGate(q, 0.5318343486477684, 2);
  sqcRYGate(q, 0.3723609058652301, 3);
  sqcRZGate(q, -0.6337238762105413, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.3385659694495815, 0);
  sqcRZGate(q, 1.6491838365068074, 0);
  sqcRYGate(q, -0.17722745950934993, 1);
  sqcRZGate(q, -0.10194818786409189, 1);
  sqcRYGate(q, 0.6503841904640498, 2);
  sqcRZGate(q, 3.0077357434677414, 2);
  sqcRYGate(q, 1.600090837813398, 3);
  sqcRZGate(q, -1.8913338541943974, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.637601010989336, 0);
  sqcRZGate(q, -0.6130444654999118, 0);
  sqcRYGate(q, 1.7657964120146719, 1);
  sqcRZGate(q, -2.1794867315455138, 1);
  sqcRYGate(q, -1.5112369366362648, 2);
  sqcRZGate(q, -0.3152305492718579, 2);
  sqcRYGate(q, 0.6919530983097522, 3);
  sqcRZGate(q, -2.4554178907361965, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.1132545896800172, 0);
  sqcRZGate(q, -2.1851580366145846, 0);
  sqcRYGate(q, 3.0115097295898234, 1);
  sqcRZGate(q, -2.1759981512295825, 1);
  sqcRYGate(q, -0.2633686609260296, 2);
  sqcRZGate(q, -0.246913021254161, 2);
  sqcRYGate(q, 0.7701397628254227, 3);
  sqcRZGate(q, -0.48412301823141435, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.9035010437607456, 0);
  sqcRZGate(q, 0.5559558391097424, 0);
  sqcRYGate(q, 1.693365857974924, 1);
  sqcRZGate(q, 2.1270146137525643, 1);
  sqcRYGate(q, 1.4713908269106781, 2);
  sqcRZGate(q, 1.7343269337217473, 2);
  sqcRYGate(q, 2.171645010429581, 3);
  sqcRZGate(q, 0.09210620751335291, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.05020270940165302, 0);
  sqcRZGate(q, 1.9194485492996654, 0);
  sqcRYGate(q, -1.3877299341354918, 1);
  sqcRZGate(q, 1.3421528120462867, 1);
  sqcRYGate(q, -0.5793719782756357, 2);
  sqcRZGate(q, -1.1716774254187148, 2);
  sqcRYGate(q, 2.2861757367320052, 3);
  sqcRZGate(q, -2.4600540370349857, 3);

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
