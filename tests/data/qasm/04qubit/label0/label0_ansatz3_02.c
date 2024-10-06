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

  sqcRYGate(q, -1.5589643909445579, 0);
  sqcRZGate(q, -2.6487934720519406, 0);
  sqcRYGate(q, -1.7423206107261058, 1);
  sqcRZGate(q, -2.793931685597956, 1);
  sqcRYGate(q, 2.743312630323964, 2);
  sqcRZGate(q, -0.1887039041309015, 2);
  sqcRYGate(q, -2.8241000504424774, 3);
  sqcRZGate(q, -0.3497525731310329, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.4176667649270387, 0);
  sqcRZGate(q, 2.09278540895352, 0);
  sqcRYGate(q, -0.7206392967912604, 1);
  sqcRZGate(q, -2.0182938867828075, 1);
  sqcRYGate(q, -1.5414753775235042, 2);
  sqcRZGate(q, 2.095154742834888, 2);
  sqcRYGate(q, 1.148846892317236, 3);
  sqcRZGate(q, 0.16573297265441325, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8717827112092813, 0);
  sqcRZGate(q, -1.9809541876098178, 0);
  sqcRYGate(q, 2.9166896095838126, 1);
  sqcRZGate(q, 2.415187758080057, 1);
  sqcRYGate(q, 2.813782263748664, 2);
  sqcRZGate(q, -0.8322877175522941, 2);
  sqcRYGate(q, 1.804774966868876, 3);
  sqcRZGate(q, 2.474721107835104, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.11097841600378278, 0);
  sqcRZGate(q, -1.2304361526348278, 0);
  sqcRYGate(q, -1.5345437911389075, 1);
  sqcRZGate(q, 1.4316405554102225, 1);
  sqcRYGate(q, 0.8098789499287907, 2);
  sqcRZGate(q, -2.150990118709217, 2);
  sqcRYGate(q, 0.7942519431677377, 3);
  sqcRZGate(q, 1.1903953490015047, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.4801802318364068, 0);
  sqcRZGate(q, 2.4886555967081443, 0);
  sqcRYGate(q, -1.7677383174159367, 1);
  sqcRZGate(q, 2.1662817432743826, 1);
  sqcRYGate(q, 1.3579760173792943, 2);
  sqcRZGate(q, -0.7640786384051567, 2);
  sqcRYGate(q, -1.4489755380248965, 3);
  sqcRZGate(q, -3.133781755960321, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -3.0824280372240453, 0);
  sqcRZGate(q, 2.4770264484361446, 0);
  sqcRYGate(q, -1.5032587935591908, 1);
  sqcRZGate(q, 0.757622547393197, 1);
  sqcRYGate(q, -0.24475898771463156, 2);
  sqcRZGate(q, -1.0658317848419825, 2);
  sqcRYGate(q, 1.2323927293198238, 3);
  sqcRZGate(q, -1.6245953799375439, 3);

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
