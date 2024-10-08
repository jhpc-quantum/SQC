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

  sqcRYGate(q, -1.003576666861722, 0);
  sqcRYGate(q, 2.5579535392859256, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0547342490115792, 0);
  sqcRYGate(q, -2.2391897809816714, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.836517695564872, 2);
  sqcRYGate(q, 1.2893150205015176, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3132885800040714, 2);
  sqcRYGate(q, 0.8537128144769164, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2756470550032266, 0);
  sqcRYGate(q, 1.0742022285385258, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6280165982352031, 0);
  sqcRYGate(q, -2.6922054111233202, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4928050431458005, 1);
  sqcRYGate(q, -1.8967764028710201, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3238221955994613, 1);
  sqcRYGate(q, 1.069469073672731, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.738441041453044, 0);
  sqcRYGate(q, -1.1641252536098108, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0002510129341604, 0);
  sqcRYGate(q, -2.107888390126549, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.923762636580148, 1);
  sqcRYGate(q, 1.7721068011859789, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2846274671154462, 1);
  sqcRYGate(q, 2.4003249284599963, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9797479566119294, 0);
  sqcRYGate(q, 2.0263102898562964, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.255988527593085, 0);
  sqcRYGate(q, -1.4323783085675432, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1030395568088256, 2);
  sqcRYGate(q, 0.901774463712262, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4888992814530351, 2);
  sqcRYGate(q, -0.720552141797046, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.158769123995048, 0);
  sqcRYGate(q, 0.43450947325544487, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7479982580907327, 0);
  sqcRYGate(q, 2.917906155869543, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4587743976545291, 1);
  sqcRYGate(q, -0.25645079125554915, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.535972735869743, 1);
  sqcRYGate(q, 0.9090833939869789, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.974343300781054, 0);
  sqcRYGate(q, 3.0367106387860425, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1832883536505145, 0);
  sqcRYGate(q, -2.808790421872024, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.48343984088956965, 1);
  sqcRYGate(q, -1.7065211363164956, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.37467262260245443, 1);
  sqcRYGate(q, -0.6161775639544276, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.532531510471629, 0);
  sqcRYGate(q, -2.4519774536964785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6263003957709046, 0);
  sqcRYGate(q, 0.7121482284355672, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.01944801570660459, 2);
  sqcRYGate(q, -0.5110561786222788, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7156822798585498, 2);
  sqcRYGate(q, -0.9338356177589056, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2042973401039463, 0);
  sqcRYGate(q, -1.1718191025575138, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.31746916129004, 0);
  sqcRYGate(q, -0.8693226901236725, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8533462769084065, 1);
  sqcRYGate(q, 1.352218811344728, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.905249304483513, 1);
  sqcRYGate(q, -2.8793418741926216, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.401054657624353, 0);
  sqcRYGate(q, 2.721738985606052, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.12268063415458563, 0);
  sqcRYGate(q, -2.7668690023306373, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.577121702716653, 1);
  sqcRYGate(q, -0.5607161435650205, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0572762137702933, 1);
  sqcRYGate(q, 2.7936444382731245, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7304143917584924, 0);
  sqcRYGate(q, 0.6181823392751907, 1);
  sqcRYGate(q, -1.4806553369775939, 2);
  sqcRYGate(q, 1.222238157624026, 3);

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
