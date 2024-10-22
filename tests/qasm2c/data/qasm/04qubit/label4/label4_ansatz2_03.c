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

  sqcRYGate(q, 0.16091917806741307, 0);
  sqcRZGate(q, -0.662416339969905, 0);
  sqcRYGate(q, 0.24255471765776726, 1);
  sqcRZGate(q, 2.8742975773734623, 1);
  sqcRYGate(q, 2.538800009766391, 2);
  sqcRZGate(q, -1.0329236031343623, 2);
  sqcRYGate(q, -1.5884063819259264, 3);
  sqcRZGate(q, -1.5753859261227063, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.5342411946240995, 0);
  sqcRZGate(q, -3.0914865724876046, 0);
  sqcRYGate(q, 3.1011027216789975, 1);
  sqcRZGate(q, -1.0643470701011193, 1);
  sqcRYGate(q, 1.4915747467041747, 2);
  sqcRZGate(q, -3.015228313699391, 2);
  sqcRYGate(q, -1.4180306016830817, 3);
  sqcRZGate(q, -1.1496926788957802, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.134999528794531, 0);
  sqcRZGate(q, -2.6980744396591922, 0);
  sqcRYGate(q, -1.785316007688155, 1);
  sqcRZGate(q, 1.056498104560232, 1);
  sqcRYGate(q, 0.5016284869394811, 2);
  sqcRZGate(q, 1.3288969726999282, 2);
  sqcRYGate(q, 0.9636939210761223, 3);
  sqcRZGate(q, -2.335810990099816, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.2322539137979336, 0);
  sqcRZGate(q, -1.9625821248018394, 0);
  sqcRYGate(q, 2.838051214839439, 1);
  sqcRZGate(q, 1.8369913569332852, 1);
  sqcRYGate(q, -2.6812474603575702, 2);
  sqcRZGate(q, 2.4786087282902534, 2);
  sqcRYGate(q, -1.0863981442881436, 3);
  sqcRZGate(q, 1.9682587921496448, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.3997940078363553, 0);
  sqcRZGate(q, 1.8370634763944933, 0);
  sqcRYGate(q, -0.3318829256621436, 1);
  sqcRZGate(q, -1.0925904120897691, 1);
  sqcRYGate(q, -2.9425701592592537, 2);
  sqcRZGate(q, 0.6713845698300385, 2);
  sqcRYGate(q, 1.4321453932234893, 3);
  sqcRZGate(q, -3.038591678314418, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.7756342276194124, 0);
  sqcRZGate(q, -2.3860992721448326, 0);
  sqcRYGate(q, 1.3416628925422038, 1);
  sqcRZGate(q, 2.262036918649522, 1);
  sqcRYGate(q, 2.9495648279243953, 2);
  sqcRZGate(q, 0.02683348193572144, 2);
  sqcRYGate(q, -2.0595239169504147, 3);
  sqcRZGate(q, 0.49308284407964087, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.389400032865509, 0);
  sqcRZGate(q, -1.030673031882917, 0);
  sqcRYGate(q, 2.8623255684158804, 1);
  sqcRZGate(q, 0.4617597855872337, 1);
  sqcRYGate(q, 0.06146256584819376, 2);
  sqcRZGate(q, 1.7245379936020617, 2);
  sqcRYGate(q, -1.6237183280657073, 3);
  sqcRZGate(q, 0.8803678589596832, 3);

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
