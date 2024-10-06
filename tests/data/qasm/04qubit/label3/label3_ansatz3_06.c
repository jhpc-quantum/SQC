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

  sqcRYGate(q, -1.7573920646529508, 0);
  sqcRZGate(q, -0.293371318351139, 0);
  sqcRYGate(q, -2.5124975288149716, 1);
  sqcRZGate(q, -2.5776373017618512, 1);
  sqcRYGate(q, 1.1314519956002638, 2);
  sqcRZGate(q, -0.503999088814605, 2);
  sqcRYGate(q, 1.399936136003398, 3);
  sqcRZGate(q, 1.2641740364432197, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.6503719764806828, 0);
  sqcRZGate(q, 1.9146258787384127, 0);
  sqcRYGate(q, 3.1015876593907055, 1);
  sqcRZGate(q, 2.7571772752677286, 1);
  sqcRYGate(q, -1.0103565176033351, 2);
  sqcRZGate(q, 0.8228479749460728, 2);
  sqcRYGate(q, -2.263401400391978, 3);
  sqcRZGate(q, -0.8897766908162238, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6084045616157985, 0);
  sqcRZGate(q, 1.6391459992736366, 0);
  sqcRYGate(q, -1.4617442665208689, 1);
  sqcRZGate(q, -1.2576508267005826, 1);
  sqcRYGate(q, -2.159346366498855, 2);
  sqcRZGate(q, 0.26063514037507485, 2);
  sqcRYGate(q, -0.5636679723717175, 3);
  sqcRZGate(q, 0.8099979008342291, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.3701068349550516, 0);
  sqcRZGate(q, -2.5278806749071854, 0);
  sqcRYGate(q, -3.0788333056320383, 1);
  sqcRZGate(q, -1.630873314256802, 1);
  sqcRYGate(q, -3.057860881418961, 2);
  sqcRZGate(q, -0.9407278761032085, 2);
  sqcRYGate(q, 1.9626124668663625, 3);
  sqcRZGate(q, -1.334172949436323, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.6064889741602597, 0);
  sqcRZGate(q, 1.7121707404418158, 0);
  sqcRYGate(q, 3.0049092384394696, 1);
  sqcRZGate(q, -2.69482511079543, 1);
  sqcRYGate(q, -1.949032508032265, 2);
  sqcRZGate(q, 2.5750509585397263, 2);
  sqcRYGate(q, 0.2541726600838417, 3);
  sqcRZGate(q, 0.46957042322366416, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.2119141978889826, 0);
  sqcRZGate(q, 1.1588778139558324, 0);
  sqcRYGate(q, -1.1580918574576993, 1);
  sqcRZGate(q, -1.19429130177654, 1);
  sqcRYGate(q, 0.7794134167708487, 2);
  sqcRZGate(q, 1.3328820551655252, 2);
  sqcRYGate(q, -1.9604320822087216, 3);
  sqcRZGate(q, 0.5998218928810445, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.08039126818223341, 0);
  sqcRZGate(q, -2.1399118978969094, 0);
  sqcRYGate(q, -2.9536541035178727, 1);
  sqcRZGate(q, 0.30543615364095966, 1);
  sqcRYGate(q, 1.2564077166356507, 2);
  sqcRZGate(q, -0.5443730344520085, 2);
  sqcRYGate(q, -2.083196698904066, 3);
  sqcRZGate(q, 0.0723333478222586, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.2364104951587958, 0);
  sqcRZGate(q, -1.3840305501839874, 0);
  sqcRYGate(q, -0.99074937357034, 1);
  sqcRZGate(q, 0.9709584463590977, 1);
  sqcRYGate(q, -2.082229684924818, 2);
  sqcRZGate(q, -0.8143644181664254, 2);
  sqcRYGate(q, 0.2233573636611577, 3);
  sqcRZGate(q, 0.5378642154636584, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.272728647896062, 0);
  sqcRZGate(q, -0.23986684883939233, 0);
  sqcRYGate(q, -1.683318700985302, 1);
  sqcRZGate(q, 1.3501411051480305, 1);
  sqcRYGate(q, 1.4359478023231054, 2);
  sqcRZGate(q, 0.1465380833242529, 2);
  sqcRYGate(q, 2.8821523294477074, 3);
  sqcRZGate(q, 1.7421552241187332, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.2853396604409197, 0);
  sqcRZGate(q, 2.012286688393158, 0);
  sqcRYGate(q, -0.5699747166048493, 1);
  sqcRZGate(q, 0.6688383139454243, 1);
  sqcRYGate(q, 1.054062270160496, 2);
  sqcRZGate(q, 0.26644594705739416, 2);
  sqcRYGate(q, -1.869762344658299, 3);
  sqcRZGate(q, 1.8425753135001972, 3);

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
