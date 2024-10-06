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

  sqcRYGate(q, 1.5037474860179822, 0);
  sqcRZGate(q, -0.12277857403441864, 0);
  sqcRYGate(q, 1.083247179683, 1);
  sqcRZGate(q, -2.0200005744289884, 1);
  sqcRYGate(q, 2.271337209922475, 2);
  sqcRZGate(q, -1.796558435066168, 2);
  sqcRYGate(q, 1.7009821135017171, 3);
  sqcRZGate(q, 2.2106703529845104, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.9399856638157216, 0);
  sqcRZGate(q, 1.1735028322903895, 0);
  sqcRYGate(q, -2.026609910901944, 1);
  sqcRZGate(q, -2.0589852678350997, 1);
  sqcRYGate(q, 2.717944226518795, 2);
  sqcRZGate(q, 2.174596730963132, 2);
  sqcRYGate(q, 0.8029291349588492, 3);
  sqcRZGate(q, -2.8813888929262634, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.569291010794667, 0);
  sqcRZGate(q, -2.4622940556698785, 0);
  sqcRYGate(q, 2.7762150386660105, 1);
  sqcRZGate(q, 1.8800457980001708, 1);
  sqcRYGate(q, 0.09085830908190622, 2);
  sqcRZGate(q, 1.9688141228719935, 2);
  sqcRYGate(q, 2.348272790903755, 3);
  sqcRZGate(q, -0.9601851718431949, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.8535925331708398, 0);
  sqcRZGate(q, -1.3667519236405559, 0);
  sqcRYGate(q, -1.0781245210707011, 1);
  sqcRZGate(q, 1.686202396808988, 1);
  sqcRYGate(q, 2.9598176576349817, 2);
  sqcRZGate(q, -1.1073096796526647, 2);
  sqcRYGate(q, 0.24971853588652684, 3);
  sqcRZGate(q, -0.3354742601282705, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.1333133687441634, 0);
  sqcRZGate(q, -2.6355752904994594, 0);
  sqcRYGate(q, 0.01846116094222161, 1);
  sqcRZGate(q, -0.09569583857536956, 1);
  sqcRYGate(q, 1.0614299953376785, 2);
  sqcRZGate(q, -0.6479932621201232, 2);
  sqcRYGate(q, -2.7873973170479913, 3);
  sqcRZGate(q, 1.4812563251374238, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.1090184671155647, 0);
  sqcRZGate(q, 0.10956300555073728, 0);
  sqcRYGate(q, -1.7533526173037448, 1);
  sqcRZGate(q, 1.316202035151934, 1);
  sqcRYGate(q, -2.2213863873444453, 2);
  sqcRZGate(q, -2.2767652686876216, 2);
  sqcRYGate(q, 3.0291627410911235, 3);
  sqcRZGate(q, 2.4569575880051002, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.07543066556852551, 0);
  sqcRZGate(q, 2.3410906915497582, 0);
  sqcRYGate(q, 1.401203834626168, 1);
  sqcRZGate(q, -1.2658472114161283, 1);
  sqcRYGate(q, -2.985040892323211, 2);
  sqcRZGate(q, 1.2232435364030652, 2);
  sqcRYGate(q, -0.869750628688978, 3);
  sqcRZGate(q, 0.7738498359076057, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.551271621773898, 0);
  sqcRZGate(q, 1.6865587677596257, 0);
  sqcRYGate(q, 2.560801294866204, 1);
  sqcRZGate(q, -1.5875409004460002, 1);
  sqcRYGate(q, 0.5346396961396822, 2);
  sqcRZGate(q, -2.1181137298975434, 2);
  sqcRYGate(q, 0.7392825562013093, 3);
  sqcRZGate(q, -0.318277108119073, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.9949875561742862, 0);
  sqcRZGate(q, 3.0106531573582958, 0);
  sqcRYGate(q, -1.7647491094643653, 1);
  sqcRZGate(q, 1.4767793263279494, 1);
  sqcRYGate(q, 0.07907126928700033, 2);
  sqcRZGate(q, -0.6663611631154316, 2);
  sqcRYGate(q, 0.6157942743702227, 3);
  sqcRZGate(q, -2.090490733853949, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.7334456519880956, 0);
  sqcRZGate(q, 2.2381445468929178, 0);
  sqcRYGate(q, 0.6300995397324136, 1);
  sqcRZGate(q, -0.33570020069868445, 1);
  sqcRYGate(q, 2.108361993370842, 2);
  sqcRZGate(q, 1.6325665909400584, 2);
  sqcRYGate(q, -2.590314705641104, 3);
  sqcRZGate(q, -2.475438472313453, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.5231900208337, 0);
  sqcRZGate(q, 1.647830444220473, 0);
  sqcRYGate(q, -2.314680160130669, 1);
  sqcRZGate(q, -1.0014575852864016, 1);
  sqcRYGate(q, 2.5213040277771435, 2);
  sqcRZGate(q, 3.126163861579739, 2);
  sqcRYGate(q, -1.9056440568630437, 3);
  sqcRZGate(q, -0.5711712499933983, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.0019342747542546, 0);
  sqcRZGate(q, 1.7763649197546822, 0);
  sqcRYGate(q, 1.1408092187005021, 1);
  sqcRZGate(q, -1.8260269284706725, 1);
  sqcRYGate(q, 0.1860934419007341, 2);
  sqcRZGate(q, -2.6963188197622476, 2);
  sqcRYGate(q, -0.05050026825567756, 3);
  sqcRZGate(q, -1.6400842215593008, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.1700866510928662, 0);
  sqcRZGate(q, -0.7118905730441485, 0);
  sqcRYGate(q, 1.316625883954523, 1);
  sqcRZGate(q, 1.8792164097617117, 1);
  sqcRYGate(q, -2.694718638271341, 2);
  sqcRZGate(q, 1.4387322366262372, 2);
  sqcRYGate(q, 0.5691815945027958, 3);
  sqcRZGate(q, -0.24887395374252366, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.1228350480907987, 0);
  sqcRZGate(q, -2.733177158135972, 0);
  sqcRYGate(q, 1.5832905211582153, 1);
  sqcRZGate(q, 1.9833669865291623, 1);
  sqcRYGate(q, 2.0754308088034144, 2);
  sqcRZGate(q, 0.9027976557544093, 2);
  sqcRYGate(q, -2.6011330729303195, 3);
  sqcRZGate(q, -0.51156572033914, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.517163516028248, 0);
  sqcRZGate(q, -1.964067281843092, 0);
  sqcRYGate(q, 0.8634573412504194, 1);
  sqcRZGate(q, -1.6208649598183196, 1);
  sqcRYGate(q, -1.1248988729099807, 2);
  sqcRZGate(q, 1.7685510307762955, 2);
  sqcRYGate(q, 2.2282897953281156, 3);
  sqcRZGate(q, 0.9714907488212478, 3);

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
