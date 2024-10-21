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

  sqcRYGate(q, -2.8965061309919102, 0);
  sqcRYGate(q, -1.7936607989871876, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.48912034998221987, 0);
  sqcRYGate(q, 0.48815166166911084, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.04152361659479098, 2);
  sqcRYGate(q, -2.7631231669240393, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.35461231921211933, 2);
  sqcRYGate(q, 0.4331562647441602, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2631641915504614, 0);
  sqcRYGate(q, 2.899972537432378, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5905102181698942, 0);
  sqcRYGate(q, -2.9339516820393974, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8095654237507868, 1);
  sqcRYGate(q, 0.18782903126496484, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5236509082596488, 1);
  sqcRYGate(q, -2.783889929246322, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4671463858173137, 0);
  sqcRYGate(q, 1.8328018473311267, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4002633777772049, 0);
  sqcRYGate(q, 1.6481197066950983, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3880171609161487, 1);
  sqcRYGate(q, -2.7703970942951925, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.35396815362835543, 1);
  sqcRYGate(q, -2.2667494691962116, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3335880406666518, 0);
  sqcRYGate(q, 0.31756448106593904, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.947345904156891, 0);
  sqcRYGate(q, 2.5476028199908125, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6555921520229043, 2);
  sqcRYGate(q, -2.8755442287041597, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4471473697858217, 2);
  sqcRYGate(q, -2.9998416562624155, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.003646567327399, 0);
  sqcRYGate(q, -1.5138728232009366, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.22514054945518247, 0);
  sqcRYGate(q, -1.8948685874360276, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1005227933272392, 1);
  sqcRYGate(q, 0.41846242285354046, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5542135079577717, 1);
  sqcRYGate(q, -2.1102132735269863, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1723597089704105, 0);
  sqcRYGate(q, -0.10645347297639556, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2158863279095886, 0);
  sqcRYGate(q, 1.2375533313621099, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.25848349962470696, 1);
  sqcRYGate(q, 2.549093662702627, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.01862826550739527, 1);
  sqcRYGate(q, -0.5925297609796827, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8718449416526628, 0);
  sqcRYGate(q, -2.983925893719579, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7644273854000453, 0);
  sqcRYGate(q, -2.298809531103163, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.594018316314154, 2);
  sqcRYGate(q, -2.372451043630412, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6104011032947882, 2);
  sqcRYGate(q, 0.5186971560151334, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.946488163841555, 0);
  sqcRYGate(q, 2.2205461558068693, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4766903068681687, 0);
  sqcRYGate(q, 1.4813772869505684, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2436931168691466, 1);
  sqcRYGate(q, 1.2399326140591158, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6187853495353766, 1);
  sqcRYGate(q, 0.6837500748096526, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9744244929283687, 0);
  sqcRYGate(q, -0.341009582296854, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9112150421009151, 0);
  sqcRYGate(q, 1.4191885301968652, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.86876314161029, 1);
  sqcRYGate(q, 1.2406799358309417, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.830049610308863, 1);
  sqcRYGate(q, 0.17068134873196603, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5689451390875803, 0);
  sqcRYGate(q, -0.6987480137300787, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2005781505853117, 0);
  sqcRYGate(q, 1.9911753739512106, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1057691162215613, 2);
  sqcRYGate(q, -1.575862060088717, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7569346058608315, 2);
  sqcRYGate(q, 1.020935514916931, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.057129855693085, 0);
  sqcRYGate(q, -3.0673863030346262, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9164834632267294, 0);
  sqcRYGate(q, 3.134484900781216, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.929268607282367, 1);
  sqcRYGate(q, 3.0615821358850703, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8273030060899202, 1);
  sqcRYGate(q, 3.0826519386009656, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0121284326866222, 0);
  sqcRYGate(q, 1.41735023864027, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2404090055782646, 0);
  sqcRYGate(q, -0.6905620453873581, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.22919008158930038, 1);
  sqcRYGate(q, 0.9501544058079007, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1086873781126285, 1);
  sqcRYGate(q, 1.693801243400233, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7343002111476813, 0);
  sqcRYGate(q, 3.0360761771066302, 1);
  sqcRYGate(q, 0.08492482515917106, 2);
  sqcRYGate(q, -2.176319193672933, 3);

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
