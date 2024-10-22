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

  sqcRYGate(q, -0.06332267301407501, 0);
  sqcRZGate(q, -0.8165338925670229, 0);
  sqcRYGate(q, -2.2185840474708067, 1);
  sqcRZGate(q, 2.4860622536091417, 1);
  sqcRYGate(q, -1.8044541880221106, 2);
  sqcRZGate(q, 2.330520195437078, 2);
  sqcRYGate(q, -0.14765284578531723, 3);
  sqcRZGate(q, 0.1152019836184199, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.1010420733439252, 0);
  sqcRZGate(q, 2.7422385936043048, 0);
  sqcRYGate(q, -0.9284988288269114, 1);
  sqcRZGate(q, 0.2282427141866963, 1);
  sqcRYGate(q, -0.8624646830419556, 2);
  sqcRZGate(q, -3.0407957115973363, 2);
  sqcRYGate(q, 2.6899286282636643, 3);
  sqcRZGate(q, -2.624335878909223, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.15000779109934345, 0);
  sqcRZGate(q, 0.18471059825675779, 0);
  sqcRYGate(q, 0.04053744129637601, 1);
  sqcRZGate(q, 1.0434719767699008, 1);
  sqcRYGate(q, -2.100756047556397, 2);
  sqcRZGate(q, -2.87169027819802, 2);
  sqcRYGate(q, -2.585196009132409, 3);
  sqcRZGate(q, -2.513991058089245, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.4429259859997956, 0);
  sqcRZGate(q, -0.7906228329384337, 0);
  sqcRYGate(q, -1.3150796738655017, 1);
  sqcRZGate(q, 1.0798211233418504, 1);
  sqcRYGate(q, 1.6917625660657238, 2);
  sqcRZGate(q, 1.9385862586941345, 2);
  sqcRYGate(q, 0.9091723005005024, 3);
  sqcRZGate(q, 0.002824723228711458, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.7076490379871587, 0);
  sqcRZGate(q, -2.5856440503963327, 0);
  sqcRYGate(q, -3.0838142668491533, 1);
  sqcRZGate(q, 1.0044699300743851, 1);
  sqcRYGate(q, -3.105312176920378, 2);
  sqcRZGate(q, 1.427135482398958, 2);
  sqcRYGate(q, 0.37806356502463956, 3);
  sqcRZGate(q, -2.006577189361292, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.01596875893665324, 0);
  sqcRZGate(q, -2.9056238920479145, 0);
  sqcRYGate(q, -0.8550220687591298, 1);
  sqcRZGate(q, -2.471400795791688, 1);
  sqcRYGate(q, 2.2624124981870564, 2);
  sqcRZGate(q, 0.39533981061727896, 2);
  sqcRYGate(q, 1.9100210585463822, 3);
  sqcRZGate(q, -2.1990572239223014, 3);

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
