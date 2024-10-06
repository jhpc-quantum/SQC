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

  sqcRYGate(q, 3.1415924562799673, 0);
  sqcRZGate(q, 0.29461477424552485, 0);
  sqcRYGate(q, 1.471325204623763, 1);
  sqcRZGate(q, -1.6557635061340064, 1);
  sqcRYGate(q, -2.473708278216691e-07, 2);
  sqcRZGate(q, 1.934865865368527, 2);
  sqcRYGate(q, 3.0927459194782028, 3);
  sqcRZGate(q, -2.6858743693354903, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.5707964372926622, 0);
  sqcRZGate(q, -0.12977591041646389, 0);
  sqcRYGate(q, -0.5031496110202575, 1);
  sqcRZGate(q, 0.1223594939789967, 1);
  sqcRYGate(q, 8.716710175884239e-08, 2);
  sqcRZGate(q, 1.0536830256316991, 2);
  sqcRYGate(q, 0.050711319629209946, 3);
  sqcRZGate(q, -3.0955028020853126, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 6.235443951396746e-06, 0);
  sqcRZGate(q, 1.4960429586558068, 0);
  sqcRYGate(q, -1.7551141571604334, 1);
  sqcRZGate(q, 5.903215913191217e-06, 1);
  sqcRYGate(q, 1.5707963784366623, 2);
  sqcRZGate(q, 0.5434575699625909, 2);
  sqcRYGate(q, 1.5707963319673617, 3);
  sqcRZGate(q, 2.0297516096577866, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.1082949849327342e-08, 0);
  sqcRZGate(q, -2.6809097042421555, 0);
  sqcRYGate(q, -1.570796321679319, 1);
  sqcRZGate(q, 1.5707962812013045, 1);
  sqcRYGate(q, -2.06552387759504e-07, 2);
  sqcRZGate(q, -2.114258770139155, 2);
  sqcRYGate(q, -3.141592609879739, 3);
  sqcRZGate(q, -0.45032625085818917, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.1415858665578593, 0);
  sqcRZGate(q, 0.6671758750497148, 0);
  sqcRYGate(q, -1.570803129234364, 1);
  sqcRZGate(q, -2.5462522560811522, 1);
  sqcRYGate(q, -1.570799998044247, 2);
  sqcRZGate(q, -2.7305696493380394, 2);
  sqcRYGate(q, -6.0970973797649025e-06, 3);
  sqcRZGate(q, -1.821288053500487, 3);

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
