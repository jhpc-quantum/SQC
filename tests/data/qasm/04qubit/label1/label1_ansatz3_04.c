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

  sqcRYGate(q, 1.8601308274005648, 0);
  sqcRZGate(q, 0.23819707484023994, 0);
  sqcRYGate(q, -0.9332083402279743, 1);
  sqcRZGate(q, 0.7859875990187932, 1);
  sqcRYGate(q, -0.9696283379992265, 2);
  sqcRZGate(q, -0.9007736611493025, 2);
  sqcRYGate(q, 0.36527679849827066, 3);
  sqcRZGate(q, -0.6856511266164415, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.9925426114493443, 0);
  sqcRZGate(q, -0.6784283144882801, 0);
  sqcRYGate(q, -2.8331862204577356, 1);
  sqcRZGate(q, -0.45364764497355664, 1);
  sqcRYGate(q, -0.2927496185625889, 2);
  sqcRZGate(q, 0.3598456981751355, 2);
  sqcRYGate(q, -1.8237809202017474, 3);
  sqcRZGate(q, -0.2995194539163153, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.2787755432424524, 0);
  sqcRZGate(q, 2.761402957276156, 0);
  sqcRYGate(q, -0.9827325054916249, 1);
  sqcRZGate(q, -2.0992069584892317, 1);
  sqcRYGate(q, 0.7167308699701309, 2);
  sqcRZGate(q, -0.17269280253069616, 2);
  sqcRYGate(q, -1.0053800643705602, 3);
  sqcRZGate(q, -0.11218628166247767, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -3.104583827518058, 0);
  sqcRZGate(q, -0.8026711763781966, 0);
  sqcRYGate(q, -1.7015922178245764, 1);
  sqcRZGate(q, 2.85765794994281, 1);
  sqcRYGate(q, -0.5588446809263278, 2);
  sqcRZGate(q, 2.365474247952961, 2);
  sqcRYGate(q, 2.555621513198001, 3);
  sqcRZGate(q, -1.8282516611653206, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.44341882986537007, 0);
  sqcRZGate(q, 2.7010853213418775, 0);
  sqcRYGate(q, 0.24095363983393447, 1);
  sqcRZGate(q, -2.2635175422292813, 1);
  sqcRYGate(q, 2.982863261646951, 2);
  sqcRZGate(q, 0.06308462350358306, 2);
  sqcRYGate(q, -1.1931896829057949, 3);
  sqcRZGate(q, -2.239913837853324, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.41050207036267466, 0);
  sqcRZGate(q, -2.848097907701703, 0);
  sqcRYGate(q, 0.32492164631238674, 1);
  sqcRZGate(q, -0.9246119163661406, 1);
  sqcRYGate(q, -2.9265962678657256, 2);
  sqcRZGate(q, -2.039104589927429, 2);
  sqcRYGate(q, -1.7011339982205227, 3);
  sqcRZGate(q, 0.4183452337476304, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.39050428520040814, 0);
  sqcRZGate(q, -0.005027869070307389, 0);
  sqcRYGate(q, -2.0424466186424657, 1);
  sqcRZGate(q, -1.3681012370118957, 1);
  sqcRYGate(q, 2.684741875076739, 2);
  sqcRZGate(q, 0.18831863489398482, 2);
  sqcRYGate(q, -2.5580559357855477, 3);
  sqcRZGate(q, 2.365975389326317, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8878863118749336, 0);
  sqcRZGate(q, -1.295383229767188, 0);
  sqcRYGate(q, 2.54556721176525, 1);
  sqcRZGate(q, -0.9425007982193145, 1);
  sqcRYGate(q, -0.1496219788373576, 2);
  sqcRZGate(q, -1.3249465655500634, 2);
  sqcRYGate(q, -0.5323551875922279, 3);
  sqcRZGate(q, 2.0004820543599804, 3);

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
