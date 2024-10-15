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

  sqcRYGate(q, 1.5708050348393119, 0);
  sqcRZGate(q, -3.1127823031303414, 0);
  sqcRYGate(q, 3.141589378378771, 1);
  sqcRZGate(q, -2.2510035372409707, 1);
  sqcRYGate(q, -9.550256427182143e-07, 2);
  sqcRZGate(q, -1.0779307902777, 2);
  sqcRYGate(q, -1.5707959311777737, 3);
  sqcRZGate(q, -1.3555132776381396, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.2502860694832023, 0);
  sqcRZGate(q, 1.7589829257656573, 0);
  sqcRYGate(q, -1.570796731060138, 1);
  sqcRZGate(q, 1.3590035095794206, 1);
  sqcRYGate(q, 2.138011160612454e-06, 2);
  sqcRZGate(q, -1.2928674134059486, 2);
  sqcRYGate(q, -1.6135613985047312, 3);
  sqcRZGate(q, -0.3190011613162831, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.873354386916133, 0);
  sqcRZGate(q, -0.982207358200046, 0);
  sqcRYGate(q, -3.1415841215224427, 1);
  sqcRZGate(q, 0.2260993921028405, 1);
  sqcRYGate(q, 1.5707957399169743, 2);
  sqcRZGate(q, 5.4424960538312916e-08, 2);
  sqcRYGate(q, -1.5707931962975188, 3);
  sqcRZGate(q, -2.559404922180206, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -5.073108510167401e-06, 0);
  sqcRZGate(q, 0.06251063797934096, 0);
  sqcRYGate(q, 2.9425638982620183e-08, 1);
  sqcRZGate(q, -0.13425305134210175, 1);
  sqcRYGate(q, 1.5707958184214712, 2);
  sqcRZGate(q, 1.7932876305230527, 2);
  sqcRYGate(q, -3.1415907751391257, 3);
  sqcRZGate(q, 2.3462499345983177, 3);

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
