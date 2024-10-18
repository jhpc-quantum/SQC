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

  sqcRYGate(q, 2.331956868683271, 0);
  sqcRYGate(q, 1.1414619958675305, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6350280936042147, 0);
  sqcRYGate(q, 2.887317256892928, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6585244573592715, 2);
  sqcRYGate(q, -3.046723869008527, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.156750349907672, 2);
  sqcRYGate(q, 2.6311650329092258, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.548636824146831, 0);
  sqcRYGate(q, -1.299085952415817, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9900159653677638, 0);
  sqcRYGate(q, 0.04417246389076799, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6637039537591037, 1);
  sqcRYGate(q, 1.1394802279545342, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7987536804183404, 1);
  sqcRYGate(q, 0.40993188128678426, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3938344165332444, 0);
  sqcRYGate(q, 0.20846704111759884, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.25009167553159006, 0);
  sqcRYGate(q, -0.9564707298111301, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6550169494142666, 1);
  sqcRYGate(q, -2.2246165069116746, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4974086721932323, 1);
  sqcRYGate(q, 1.601599724663116, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0605080612701627, 0);
  sqcRYGate(q, 3.08571025671331, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9018217752030416, 0);
  sqcRYGate(q, -0.19679334614870747, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8312555570875392, 2);
  sqcRYGate(q, 0.6369817483022411, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7432072232847562, 2);
  sqcRYGate(q, -3.1255881797951783, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0518584991267392, 0);
  sqcRYGate(q, -1.8237336604227379, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9587941756102545, 0);
  sqcRYGate(q, -0.6546471690556012, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9716905387433896, 1);
  sqcRYGate(q, -1.4887142865693783, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.217377827919677, 1);
  sqcRYGate(q, 2.383428182108169, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6879933861174217, 0);
  sqcRYGate(q, 0.9139473243921357, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.3782376515411867, 0);
  sqcRYGate(q, -1.4082740433831402, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9803700490529725, 1);
  sqcRYGate(q, -0.7707668557956886, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.322467547075321, 1);
  sqcRYGate(q, -2.402622693468656, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.734403285331774, 0);
  sqcRYGate(q, 1.217002107931199, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4252931842471983, 0);
  sqcRYGate(q, -2.3180355537440493, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5241883572396833, 2);
  sqcRYGate(q, 2.4379430857068236, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5184044507239076, 2);
  sqcRYGate(q, -0.4516884930054126, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.29931018644997687, 0);
  sqcRYGate(q, -2.5744386355057878, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.07993026326789465, 0);
  sqcRYGate(q, 2.767653779448876, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0183355545469952, 1);
  sqcRYGate(q, -0.3425376967984746, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8634993121221697, 1);
  sqcRYGate(q, 1.5631233185115896, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4286360524849309, 0);
  sqcRYGate(q, 1.0258432461183773, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0906239189814904, 0);
  sqcRYGate(q, 1.0889114998101361, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.08521775159858436, 1);
  sqcRYGate(q, -1.2931357702072575, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.016588517331423, 1);
  sqcRYGate(q, -2.3240972734383587, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9403685519625995, 0);
  sqcRYGate(q, -0.6534737941274954, 1);
  sqcRYGate(q, 3.067379510717398, 2);
  sqcRYGate(q, 2.306486025756569, 3);

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
