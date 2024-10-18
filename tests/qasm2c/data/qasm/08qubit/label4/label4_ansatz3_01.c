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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -1.1179714456875748e-07, 0);
  sqcRZGate(q, 3.012135655720462, 0);
  sqcRYGate(q, -1.5707964515713664, 1);
  sqcRZGate(q, 3.1415925863834326, 1);
  sqcRYGate(q, 1.5707840307390146, 2);
  sqcRZGate(q, -1.570504374334781, 2);
  sqcRYGate(q, 1.5707956223474984, 3);
  sqcRZGate(q, 0.1423171088367994, 3);
  sqcRYGate(q, 1.5707914772481246, 4);
  sqcRZGate(q, -1.7720224677927348, 4);
  sqcRYGate(q, -1.5707961708400688, 5);
  sqcRZGate(q, 1.9493127476621903e-06, 5);
  sqcRYGate(q, 1.5707970257377868, 6);
  sqcRZGate(q, 0.12190049878944015, 6);
  sqcRYGate(q, 2.71749732938531e-07, 7);
  sqcRZGate(q, 0.21227721351222584, 7);
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
  sqcRYGate(q, 1.4580018181185765, 0);
  sqcRZGate(q, 3.1413476830850366, 0);
  sqcRYGate(q, 1.5707965132827737, 1);
  sqcRZGate(q, -2.301472460916138, 1);
  sqcRYGate(q, 2.2915460269936245, 2);
  sqcRZGate(q, 1.987403083138856, 2);
  sqcRYGate(q, 1.5282980475286292, 3);
  sqcRZGate(q, 1.0754888258494262, 3);
  sqcRYGate(q, 1.5707964014629276, 4);
  sqcRZGate(q, -1.5707965182205372, 4);
  sqcRYGate(q, 1.5707969528127332, 5);
  sqcRZGate(q, -2.3269122932821578, 5);
  sqcRYGate(q, 1.11945387667825, 6);
  sqcRZGate(q, -2.80066784901232, 6);
  sqcRYGate(q, 3.130866034886844, 7);
  sqcRZGate(q, -0.09258331098580985, 7);
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
  sqcRYGate(q, -1.573961619668562, 0);
  sqcRZGate(q, 2.0026402667999044, 0);
  sqcRYGate(q, 1.1539831934470612e-07, 1);
  sqcRZGate(q, 1.8897594654234475, 1);
  sqcRYGate(q, 1.4829091554702245e-07, 2);
  sqcRZGate(q, -0.32725658890853015, 2);
  sqcRYGate(q, -1.4199653922006565, 3);
  sqcRZGate(q, 1.65149418606615, 3);
  sqcRYGate(q, -1.5316829346308958, 4);
  sqcRZGate(q, -1.570796256447391, 4);
  sqcRYGate(q, 0.006666348718754378, 5);
  sqcRZGate(q, -1.6647098623446137, 5);
  sqcRYGate(q, 5.001701598717112e-07, 6);
  sqcRZGate(q, -0.6138737120809087, 6);
  sqcRYGate(q, 3.04284997646474, 7);
  sqcRZGate(q, 3.1415367016587883, 7);
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
  sqcRYGate(q, 0.26431239740018403, 0);
  sqcRZGate(q, -2.016227674360792, 0);
  sqcRYGate(q, 3.1415924689297428, 1);
  sqcRZGate(q, 3.0974518955583994, 1);
  sqcRYGate(q, 0.08689222335089226, 2);
  sqcRZGate(q, 3.0210827858987503, 2);
  sqcRYGate(q, 1.563589037210357, 3);
  sqcRZGate(q, 0.6069160430589182, 3);
  sqcRYGate(q, 1.5707961340498025, 4);
  sqcRZGate(q, -1.6232226735196678, 4);
  sqcRYGate(q, 1.5707980147231195, 5);
  sqcRZGate(q, -3.141590089946369, 5);
  sqcRYGate(q, 0.30145855078698514, 6);
  sqcRZGate(q, 3.1408951408966113, 6);
  sqcRYGate(q, 1.5601136779775633, 7);
  sqcRZGate(q, -1.6326125463725287, 7);
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
  sqcRYGate(q, 1.5675170748224136, 0);
  sqcRZGate(q, -1.7126359622041303, 0);
  sqcRYGate(q, 3.693978955380602e-07, 1);
  sqcRZGate(q, 1.2028329132140614, 1);
  sqcRYGate(q, 1.5707909431650684, 2);
  sqcRZGate(q, -1.7123907198695392, 2);
  sqcRYGate(q, 3.1415912656393954, 3);
  sqcRZGate(q, -0.8324976136177469, 3);
  sqcRYGate(q, 3.141573286593706, 4);
  sqcRZGate(q, -0.14942146614198304, 4);
  sqcRYGate(q, 1.5707962003601077, 5);
  sqcRZGate(q, 1.7911340938887133, 5);
  sqcRYGate(q, -3.096642053730307, 6);
  sqcRZGate(q, 3.000219676415098, 6);
  sqcRYGate(q, -3.1415896170264284, 7);
  sqcRZGate(q, 0.15952326742137493, 7);

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
