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

  sqcRYGate(q, -2.4782116033700206, 0);
  sqcRZGate(q, -1.6409535883034048, 0);
  sqcRYGate(q, 2.5898606803967565, 1);
  sqcRZGate(q, -0.8715253341139341, 1);
  sqcRYGate(q, -0.05364877028396009, 2);
  sqcRZGate(q, 1.0131587459437732, 2);
  sqcRYGate(q, 2.4019766920607304, 3);
  sqcRZGate(q, 2.1583589307027884, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.619161400614054, 0);
  sqcRZGate(q, -1.727140933025363, 0);
  sqcRYGate(q, -1.573562413104361, 1);
  sqcRZGate(q, -0.6204667305123686, 1);
  sqcRYGate(q, -1.9105039111614701, 2);
  sqcRZGate(q, -2.8867421774304427, 2);
  sqcRYGate(q, -0.28241202034899543, 3);
  sqcRZGate(q, -2.8239729198383343, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.5856719943214992, 0);
  sqcRZGate(q, 0.9092256195940759, 0);
  sqcRYGate(q, 0.20346904105282124, 1);
  sqcRZGate(q, 1.9871417856481042, 1);
  sqcRYGate(q, 2.330303553587113, 2);
  sqcRZGate(q, 2.7624693447448956, 2);
  sqcRYGate(q, -2.7398052440874907, 3);
  sqcRZGate(q, -0.33871742385337894, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.270897426977714, 0);
  sqcRZGate(q, 1.1176234716519293, 0);
  sqcRYGate(q, 2.109586095577691, 1);
  sqcRZGate(q, 2.3711520099653547, 1);
  sqcRYGate(q, 1.5084027382779288, 2);
  sqcRZGate(q, 1.8539795789628462, 2);
  sqcRYGate(q, 1.9037637315794886, 3);
  sqcRZGate(q, 0.019667212542788803, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.948352710870429, 0);
  sqcRZGate(q, -2.454046347333308, 0);
  sqcRYGate(q, 2.1475535815762523, 1);
  sqcRZGate(q, 1.5995371529131384, 1);
  sqcRYGate(q, -2.968666628668625, 2);
  sqcRZGate(q, -2.7146242615551093, 2);
  sqcRYGate(q, 2.734540878155149, 3);
  sqcRZGate(q, 2.0339816064869645, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.39811670618426387, 0);
  sqcRZGate(q, 1.7634221008574602, 0);
  sqcRYGate(q, 0.1876572525677858, 1);
  sqcRZGate(q, -0.8456212195008159, 1);
  sqcRYGate(q, -1.9614834987894492, 2);
  sqcRZGate(q, 0.2341249185269135, 2);
  sqcRYGate(q, 1.2581986700611705, 3);
  sqcRZGate(q, -2.6560014411565502, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.05542663801452363, 0);
  sqcRZGate(q, 0.7348204073436225, 0);
  sqcRYGate(q, -1.612757091792154, 1);
  sqcRZGate(q, -1.9683938410818378, 1);
  sqcRYGate(q, -2.0257959445897864, 2);
  sqcRZGate(q, -2.9742294564680414, 2);
  sqcRYGate(q, -1.8362652043927739, 3);
  sqcRZGate(q, 1.230037879861749, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.177941869296631, 0);
  sqcRZGate(q, -3.1200928941035646, 0);
  sqcRYGate(q, 0.7094395619593825, 1);
  sqcRZGate(q, -1.8769806389881507, 1);
  sqcRYGate(q, 0.9692256524199552, 2);
  sqcRZGate(q, 2.8188326709154694, 2);
  sqcRYGate(q, -2.3031632060274303, 3);
  sqcRZGate(q, 2.4503802708476656, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.36205476131440495, 0);
  sqcRZGate(q, -2.0760653316882216, 0);
  sqcRYGate(q, 2.223479083471165, 1);
  sqcRZGate(q, -2.3750585143753455, 1);
  sqcRYGate(q, -0.9588140073745791, 2);
  sqcRZGate(q, -1.7477238497043217, 2);
  sqcRYGate(q, -2.704828076148075, 3);
  sqcRZGate(q, 1.9653536062086197, 3);

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
