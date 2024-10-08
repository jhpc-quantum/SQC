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

  sqcRYGate(q, -1.5707964958751965, 0);
  sqcRZGate(q, 1.5161440045385843, 0);
  sqcRYGate(q, -1.5707960448523153, 1);
  sqcRZGate(q, -0.5487281974292507, 1);
  sqcRYGate(q, 7.542846844403822e-07, 2);
  sqcRZGate(q, 1.0468218618312182, 2);
  sqcRYGate(q, -2.5781449946976704, 3);
  sqcRZGate(q, -0.9375941700815751, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.9662239745208403, 0);
  sqcRZGate(q, -2.279204089933655, 0);
  sqcRYGate(q, 0.4674014896806744, 1);
  sqcRZGate(q, 0.12855983988602535, 1);
  sqcRYGate(q, -1.5707955008914798, 2);
  sqcRZGate(q, 2.756397146026342, 2);
  sqcRYGate(q, -1.1481247302832822, 3);
  sqcRZGate(q, 2.5503847800356896, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.1415878255119245, 0);
  sqcRZGate(q, -0.6838664088526728, 0);
  sqcRYGate(q, 1.1859930269894114, 1);
  sqcRZGate(q, 0.27887061758793297, 1);
  sqcRYGate(q, 3.0380755089178857, 2);
  sqcRZGate(q, -2.5640932669111214, 2);
  sqcRYGate(q, 1.5707964504224032, 3);
  sqcRZGate(q, -1.9152605503771705, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.3681469380229525, 0);
  sqcRZGate(q, -0.08795259062716403, 0);
  sqcRYGate(q, 1.4993700348540013, 1);
  sqcRZGate(q, 2.413829616074259, 1);
  sqcRYGate(q, -1.474724143106486, 2);
  sqcRZGate(q, -1.043760730871794, 2);
  sqcRYGate(q, -0.33563379460393267, 3);
  sqcRZGate(q, 2.3832985631372736, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.1415889106562656, 0);
  sqcRZGate(q, -1.9179238299945456, 0);
  sqcRYGate(q, 2.7650395246807, 1);
  sqcRZGate(q, 0.637917706032864, 1);
  sqcRYGate(q, 2.3576088767371157, 2);
  sqcRZGate(q, 0.26242414931931357, 2);
  sqcRYGate(q, -9.979593850257401e-06, 3);
  sqcRZGate(q, 2.549411940492913, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.0971476357515206, 0);
  sqcRZGate(q, -2.39181829144307, 0);
  sqcRYGate(q, 0.6235473275584579, 1);
  sqcRZGate(q, 1.0274908486926932, 1);
  sqcRYGate(q, -1.1013033684952895, 2);
  sqcRZGate(q, -0.2391873167645891, 2);
  sqcRYGate(q, 0.8760833205036099, 3);
  sqcRZGate(q, -1.4146374404643334, 3);

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
