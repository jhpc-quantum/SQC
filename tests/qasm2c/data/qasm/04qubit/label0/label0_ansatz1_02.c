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

  sqcRYGate(q, -0.3130635004018183, 0);
  sqcRZGate(q, 1.1679114160775521, 0);
  sqcRYGate(q, 0.7710406789823757, 1);
  sqcRZGate(q, -0.6938479169656554, 1);
  sqcRYGate(q, -2.2158877363267373, 2);
  sqcRZGate(q, -1.855925421389113, 2);
  sqcRYGate(q, -2.4761071504546455, 3);
  sqcRZGate(q, 3.103197679896148, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.269009033510848, 0);
  sqcRZGate(q, -1.1459559775854622, 0);
  sqcRYGate(q, 0.03835253397378667, 1);
  sqcRZGate(q, -2.7457171144321157, 1);
  sqcRYGate(q, -3.125435226309293, 2);
  sqcRZGate(q, 1.0736358977288252, 2);
  sqcRYGate(q, -0.4091781678193813, 3);
  sqcRZGate(q, 0.9324853837131163, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.427527275833814, 0);
  sqcRZGate(q, 1.6314924805372897, 0);
  sqcRYGate(q, -1.7499063451217314, 1);
  sqcRZGate(q, -0.29818188360148495, 1);
  sqcRYGate(q, -2.224691935703736, 2);
  sqcRZGate(q, 1.239328748515316, 2);
  sqcRYGate(q, 2.544287421986807, 3);
  sqcRZGate(q, -0.9639893865543476, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1683023570502762, 0);
  sqcRZGate(q, -0.2709544383858799, 0);
  sqcRYGate(q, 0.058800280938677396, 1);
  sqcRZGate(q, -2.047874207618677, 1);
  sqcRYGate(q, 1.5758116561618616, 2);
  sqcRZGate(q, -0.18563692162401035, 2);
  sqcRYGate(q, -1.6834860883552525, 3);
  sqcRZGate(q, 0.8507721917568272, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.796590202306717, 0);
  sqcRZGate(q, -0.5129140365607128, 0);
  sqcRYGate(q, -3.0577362639215666, 1);
  sqcRZGate(q, 2.4948768505360603, 1);
  sqcRYGate(q, 2.9163019751759625, 2);
  sqcRZGate(q, 1.62535218565268, 2);
  sqcRYGate(q, 2.756555199908461, 3);
  sqcRZGate(q, -0.289671818311587, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2715359893221085, 0);
  sqcRZGate(q, -2.6923470896000965, 0);
  sqcRYGate(q, -0.22646357614311752, 1);
  sqcRZGate(q, -1.6807306827424686, 1);
  sqcRYGate(q, 2.7657309567730772, 2);
  sqcRZGate(q, 1.5656175085560644, 2);
  sqcRYGate(q, -2.2623017464334887, 3);
  sqcRZGate(q, 2.0473233479210498, 3);

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
