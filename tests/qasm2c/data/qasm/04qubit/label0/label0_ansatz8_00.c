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

  sqcRYGate(q, 0.6312417326767552, 0);
  sqcRYGate(q, -2.5172545808070366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.66489160475512, 0);
  sqcRYGate(q, -1.995357324148051, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9088405577399008, 2);
  sqcRYGate(q, 0.536583314527071, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4164672883305709, 2);
  sqcRYGate(q, 2.492112480486732, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5430021740088407, 0);
  sqcRYGate(q, -1.84410970654158, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3405447885932489, 0);
  sqcRYGate(q, 2.968068885529495, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7933533086680686, 1);
  sqcRYGate(q, -2.0593636528475967, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.102584253012376, 1);
  sqcRYGate(q, -2.7442102841552924, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.227488138180492, 0);
  sqcRYGate(q, -1.0628878281463525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5401778153964418, 0);
  sqcRYGate(q, -1.0639622640660162, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6757573148699796, 2);
  sqcRYGate(q, 1.9839745969286715, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6107586624071222, 2);
  sqcRYGate(q, -0.4367582808263044, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0866891318438867, 0);
  sqcRYGate(q, 2.118688528464467, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2100872190547491, 0);
  sqcRYGate(q, -1.7724779129222463, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.683404614892479, 1);
  sqcRYGate(q, -1.2115975088119963, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.130921651336103, 1);
  sqcRYGate(q, 1.0212046653025328, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0871725650934283, 0);
  sqcRYGate(q, 0.830830628849987, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.12339601452593278, 0);
  sqcRYGate(q, 0.9303890931798166, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6880017002051275, 2);
  sqcRYGate(q, 0.3881368717760684, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.11815019514476763, 2);
  sqcRYGate(q, -0.9360275582385054, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6673553443574334, 0);
  sqcRYGate(q, -0.027217588540302096, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0427115173931965, 0);
  sqcRYGate(q, -1.854045542259814, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0116499734511362, 1);
  sqcRYGate(q, -2.5914747749523452, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.304000906289697, 1);
  sqcRYGate(q, 2.689289966341837, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.0710070755273324, 0);
  sqcRYGate(q, 2.747428343225697, 1);
  sqcRYGate(q, -1.4608170710352746, 2);
  sqcRYGate(q, -0.4457865267751633, 3);

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
