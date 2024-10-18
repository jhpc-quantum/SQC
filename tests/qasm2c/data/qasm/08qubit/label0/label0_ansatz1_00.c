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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 0.004712997851267691, 0);
  sqcRZGate(q, -0.33877585912562136, 0);
  sqcRYGate(q, -2.0477551322642094, 1);
  sqcRZGate(q, -0.21176061113992184, 1);
  sqcRYGate(q, -3.074165976789393, 2);
  sqcRZGate(q, -2.2728846539648013, 2);
  sqcRYGate(q, -1.4731419451621035, 3);
  sqcRZGate(q, 0.006018353669475976, 3);
  sqcRYGate(q, -1.9328581610778883, 4);
  sqcRZGate(q, 2.0565345517169353, 4);
  sqcRYGate(q, -1.4239633995335446, 5);
  sqcRZGate(q, -1.3055076923897748, 5);
  sqcRYGate(q, 3.1385688014783475, 6);
  sqcRZGate(q, 3.0894739120782617, 6);
  sqcRYGate(q, -0.040883883319020445, 7);
  sqcRZGate(q, 1.2327903702250793, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.0216009090010987, 0);
  sqcRZGate(q, 3.122038531269138, 0);
  sqcRYGate(q, 1.2785502066441914, 1);
  sqcRZGate(q, -1.9758882697037015, 1);
  sqcRYGate(q, 1.5804869583551564, 2);
  sqcRZGate(q, -2.98696422020625, 2);
  sqcRYGate(q, -0.2751164311679419, 3);
  sqcRZGate(q, -1.5572400001902151, 3);
  sqcRYGate(q, 1.5845685800301474, 4);
  sqcRZGate(q, 3.074785366678016, 4);
  sqcRYGate(q, -1.1081536798021387, 5);
  sqcRZGate(q, 1.402796501880652, 5);
  sqcRYGate(q, -1.4752002442568974, 6);
  sqcRZGate(q, -1.338913224404208, 6);
  sqcRYGate(q, 3.1262802164434946, 7);
  sqcRZGate(q, 1.5379988163841887, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.119200512647266, 0);
  sqcRZGate(q, 1.2584167981355932, 0);
  sqcRYGate(q, -0.25334914491565685, 1);
  sqcRZGate(q, -0.07275622111505253, 1);
  sqcRYGate(q, 0.23887821797919884, 2);
  sqcRZGate(q, 1.4909525209356465, 2);
  sqcRYGate(q, -3.1101908667108757, 3);
  sqcRZGate(q, -0.026133731788339883, 3);
  sqcRYGate(q, 1.954132917094496, 4);
  sqcRZGate(q, -1.5790084793356751, 4);
  sqcRYGate(q, -0.0623239051440283, 5);
  sqcRZGate(q, -3.1414568256623596, 5);
  sqcRYGate(q, 1.586875917761838, 6);
  sqcRZGate(q, 3.136219197411615, 6);
  sqcRYGate(q, -0.24695926740805252, 7);
  sqcRZGate(q, 2.833830188327973, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.5470927394170897, 0);
  sqcRZGate(q, 3.133433664710433, 0);
  sqcRYGate(q, -1.6134009511890852, 1);
  sqcRZGate(q, 3.018251718820518, 1);
  sqcRYGate(q, 0.09351255098969011, 2);
  sqcRZGate(q, -1.682745069404314, 2);
  sqcRYGate(q, -0.2127969359211552, 3);
  sqcRZGate(q, -1.5619566248814607, 3);
  sqcRYGate(q, 0.7392674163624413, 4);
  sqcRZGate(q, -1.576409960528152, 4);
  sqcRYGate(q, 2.4024502477313465, 5);
  sqcRZGate(q, -1.5440790153092043, 5);
  sqcRYGate(q, -0.32734315072790654, 6);
  sqcRZGate(q, 1.5810969143372304, 6);
  sqcRYGate(q, -1.5703835529968788, 7);
  sqcRZGate(q, 3.140994306567095, 7);

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
