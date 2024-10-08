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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -2.9875517700841483, 0);
  sqcRZGate(q, 1.5678134000253714, 0);
  sqcRYGate(q, 0.9621870359009453, 1);
  sqcRZGate(q, 2.242540744030288, 1);
  sqcRYGate(q, 0.5207741928734888, 2);
  sqcRZGate(q, -2.737270170258898, 2);
  sqcRYGate(q, 0.7382167377391753, 3);
  sqcRZGate(q, -2.0346058169764527, 3);
  sqcRYGate(q, 1.5752566693367482, 4);
  sqcRZGate(q, -0.3500284905351645, 4);
  sqcRYGate(q, -0.5901562060140901, 5);
  sqcRZGate(q, -3.1181920671512597, 5);
  sqcRYGate(q, 1.689047913872287, 6);
  sqcRZGate(q, -0.4794235011506342, 6);
  sqcRYGate(q, 2.5907554780417046, 7);
  sqcRZGate(q, -0.18561158592351992, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.3212313617719295, 0);
  sqcRZGate(q, 2.891635103440222, 0);
  sqcRYGate(q, 1.0328440806831798, 1);
  sqcRZGate(q, -1.0917812923691912, 1);
  sqcRYGate(q, 0.01941171213579019, 2);
  sqcRZGate(q, -0.406293347653725, 2);
  sqcRYGate(q, -3.0963375993582964, 3);
  sqcRZGate(q, 1.384952060279958, 3);
  sqcRYGate(q, -0.21652316465899155, 4);
  sqcRZGate(q, 3.108074408179194, 4);
  sqcRYGate(q, -0.16615159097584978, 5);
  sqcRZGate(q, 3.0641853793346643, 5);
  sqcRYGate(q, 2.5636907562559466, 6);
  sqcRZGate(q, -1.767203878568191, 6);
  sqcRYGate(q, -0.13459466391750055, 7);
  sqcRZGate(q, 1.7396853176901361, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.7419941000194785, 0);
  sqcRZGate(q, -1.1123050726744061, 0);
  sqcRYGate(q, -0.9685786234402868, 1);
  sqcRZGate(q, -1.6984718055464256, 1);
  sqcRYGate(q, 0.9256887791874303, 2);
  sqcRZGate(q, 0.5148028330027664, 2);
  sqcRYGate(q, 0.05019130731387654, 3);
  sqcRZGate(q, 1.4127987539086861, 3);
  sqcRYGate(q, -1.4633050965031824, 4);
  sqcRZGate(q, -0.6241528655573875, 4);
  sqcRYGate(q, 2.472865992033217, 5);
  sqcRZGate(q, 1.655631247209425, 5);
  sqcRYGate(q, 1.3785272517896563, 6);
  sqcRZGate(q, 0.08062581014943147, 6);
  sqcRYGate(q, -1.5972606256933677, 7);
  sqcRZGate(q, -1.424592120045189, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.07014276571906919, 0);
  sqcRZGate(q, -0.9646897319550352, 0);
  sqcRYGate(q, -2.0107217660605996, 1);
  sqcRZGate(q, -1.6081714822928443, 1);
  sqcRYGate(q, -0.015771205192851134, 2);
  sqcRZGate(q, -1.7128763175522206, 2);
  sqcRYGate(q, 2.971245681350596, 3);
  sqcRZGate(q, 0.10779091096948168, 3);
  sqcRYGate(q, 3.1334458473559623, 4);
  sqcRZGate(q, 2.3267600206021277, 4);
  sqcRYGate(q, -3.126056785468697, 5);
  sqcRZGate(q, 0.12629084911409638, 5);
  sqcRYGate(q, -0.2944146656255856, 6);
  sqcRZGate(q, 3.1324240020116125, 6);
  sqcRYGate(q, -1.557297698410716, 7);
  sqcRZGate(q, -1.578908127907788, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.9386171581314824, 0);
  sqcRZGate(q, -0.007669346917486597, 0);
  sqcRYGate(q, -1.4402677306651073, 1);
  sqcRZGate(q, -3.0369856672768685, 1);
  sqcRYGate(q, 2.1352182451230073, 2);
  sqcRZGate(q, -2.8475667206919217, 2);
  sqcRYGate(q, 2.6046752166641762, 3);
  sqcRZGate(q, -0.41568725837762305, 3);
  sqcRYGate(q, -3.0510204076858343, 4);
  sqcRZGate(q, -0.7438978298151295, 4);
  sqcRYGate(q, 2.377971225795372, 5);
  sqcRZGate(q, -0.3734752268412649, 5);
  sqcRYGate(q, -2.345884392189708, 6);
  sqcRZGate(q, -0.3443292240686677, 6);
  sqcRYGate(q, -1.8209908220003301, 7);
  sqcRZGate(q, -0.35466159298192723, 7);

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
