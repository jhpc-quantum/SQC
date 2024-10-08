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

  sqcRYGate(q, 3.1415693266769793, 0);
  sqcRZGate(q, -1.7638704670649314, 0);
  sqcRYGate(q, -1.5708568024020002, 1);
  sqcRZGate(q, -1.5708568300108252, 1);
  sqcRYGate(q, -1.6360289212258294e-07, 2);
  sqcRZGate(q, -2.4440884469173594, 2);
  sqcRYGate(q, -1.5707873026199985, 3);
  sqcRZGate(q, 0.2066541573676145, 3);
  sqcRYGate(q, -1.5708009256351163, 4);
  sqcRZGate(q, -1.524662324978572, 4);
  sqcRYGate(q, -1.566620549893551, 5);
  sqcRZGate(q, 1.5707974392273103, 5);
  sqcRYGate(q, 1.2766404203348738, 6);
  sqcRZGate(q, -1.2244434214991884e-05, 6);
  sqcRYGate(q, -0.00010688776122158572, 7);
  sqcRZGate(q, 1.333034522410257, 7);
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
  sqcRYGate(q, 1.5707974301104777, 0);
  sqcRZGate(q, -1.4031771387878988, 0);
  sqcRYGate(q, -0.26290233451100425, 1);
  sqcRZGate(q, 1.5708550735540745, 1);
  sqcRYGate(q, -1.57079302525025, 2);
  sqcRZGate(q, 1.4821745361328251, 2);
  sqcRYGate(q, -3.14159197807131, 3);
  sqcRZGate(q, -1.6669666273504482, 3);
  sqcRYGate(q, 5.727970880101493e-06, 4);
  sqcRZGate(q, 1.0273908665397613, 4);
  sqcRYGate(q, 1.570795541561882, 5);
  sqcRZGate(q, 2.3278372424895175, 5);
  sqcRYGate(q, -1.570793375451337, 6);
  sqcRZGate(q, -2.6451141319582323, 6);
  sqcRYGate(q, 1.5707991811397601, 7);
  sqcRZGate(q, 0.11718969658738818, 7);
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
  sqcRYGate(q, 1.6193294367630577, 0);
  sqcRZGate(q, 0.00042093647916749264, 0);
  sqcRYGate(q, -1.570790016647499, 1);
  sqcRZGate(q, 0.18694399204009635, 1);
  sqcRYGate(q, -3.141592587837902, 2);
  sqcRZGate(q, -0.0686538024021866, 2);
  sqcRYGate(q, 3.141592178369611, 3);
  sqcRZGate(q, -2.1365225405065607, 3);
  sqcRYGate(q, 3.1415915672799954, 4);
  sqcRZGate(q, -2.9449167048201943, 4);
  sqcRYGate(q, -2.971818306647705, 5);
  sqcRZGate(q, -0.8064658136552999, 5);
  sqcRYGate(q, -5.401452076725377e-07, 6);
  sqcRZGate(q, -0.4966826621819084, 6);
  sqcRYGate(q, 1.5707971859500818, 7);
  sqcRZGate(q, 3.1415870317043777, 7);
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
  sqcRYGate(q, -1.8749040618864166, 0);
  sqcRZGate(q, -1.4167417585149877, 0);
  sqcRYGate(q, -1.4656107190091916e-06, 1);
  sqcRZGate(q, 1.326160326557961, 1);
  sqcRYGate(q, -9.636469554801005e-07, 2);
  sqcRZGate(q, 0.13401886307162056, 2);
  sqcRYGate(q, 1.5709477916022943, 3);
  sqcRZGate(q, 2.9162782258622526, 3);
  sqcRYGate(q, -3.14158681287955, 4);
  sqcRZGate(q, -0.7242310753491151, 4);
  sqcRYGate(q, 1.5707960996336696, 5);
  sqcRZGate(q, 1.3454853917540295, 5);
  sqcRYGate(q, -3.1294143787818487, 6);
  sqcRZGate(q, 1.7232098468746084, 6);
  sqcRYGate(q, -1.5707989742785686, 7);
  sqcRZGate(q, 1.3454861430499472, 7);

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
