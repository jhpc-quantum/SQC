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

  sqcRYGate(q, 2.997973406338878, 0);
  sqcRZGate(q, 1.5709943498893493, 0);
  sqcRYGate(q, -0.7781622275734392, 1);
  sqcRZGate(q, 1.571225136017171, 1);
  sqcRYGate(q, -1.5703778777971844, 2);
  sqcRZGate(q, -2.7754419521340545, 2);
  sqcRYGate(q, -1.570556738810842, 3);
  sqcRZGate(q, -1.090189939878294, 3);
  sqcRYGate(q, 2.760078657307295, 4);
  sqcRZGate(q, 1.5713167312223233, 4);
  sqcRYGate(q, -0.00021660829496106257, 5);
  sqcRZGate(q, 0.00027461353542346245, 5);
  sqcRYGate(q, 0.3834489986362266, 6);
  sqcRZGate(q, -3.0108290054335116, 6);
  sqcRYGate(q, -1.5907449920143852, 7);
  sqcRZGate(q, -1.5692738783955118, 7);
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
  sqcRYGate(q, 0.15821817986709139, 0);
  sqcRZGate(q, -1.571034560251924, 0);
  sqcRYGate(q, 1.0574629925974832, 1);
  sqcRZGate(q, 1.5706997029561711, 1);
  sqcRYGate(q, -1.3705129229665336, 2);
  sqcRZGate(q, -1.545787420885205, 2);
  sqcRYGate(q, -1.3456074831928797, 3);
  sqcRZGate(q, 0.9286837419326402, 3);
  sqcRYGate(q, -0.14271967975861877, 4);
  sqcRZGate(q, 1.571827321359451, 4);
  sqcRYGate(q, -1.0371388674904303, 5);
  sqcRZGate(q, 0.7412545568996698, 5);
  sqcRYGate(q, -1.778122152777234, 6);
  sqcRZGate(q, -1.5636916310255962, 6);
  sqcRYGate(q, -1.7004439994591904, 7);
  sqcRZGate(q, 0.33695479392161903, 7);
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
  sqcRYGate(q, 0.5291027664887995, 0);
  sqcRZGate(q, 0.00048812253917904686, 0);
  sqcRYGate(q, -1.2490796280988752, 1);
  sqcRZGate(q, -1.57054190785884, 1);
  sqcRYGate(q, -1.5707519490356558, 2);
  sqcRZGate(q, -3.1410348617150894, 2);
  sqcRYGate(q, -1.315198916714265e-05, 3);
  sqcRZGate(q, -0.25676341573979927, 3);
  sqcRYGate(q, -0.04198238636817741, 4);
  sqcRZGate(q, -0.0014565828382248208, 4);
  sqcRYGate(q, 0.0003076254784641391, 5);
  sqcRZGate(q, 0.8294198260559273, 5);
  sqcRYGate(q, 3.042893394182034, 6);
  sqcRZGate(q, 0.009364793950139496, 6);
  sqcRYGate(q, -1.5708863754828486, 7);
  sqcRZGate(q, 1.5713570536818613, 7);
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
  sqcRYGate(q, -0.41070591781444943, 0);
  sqcRZGate(q, 2.1000679380152025, 0);
  sqcRYGate(q, -2.680451762896725, 1);
  sqcRZGate(q, 2.100785834192278, 1);
  sqcRYGate(q, -0.3916311637815028, 2);
  sqcRZGate(q, 2.100516044093846, 2);
  sqcRYGate(q, -1.570980281138145, 3);
  sqcRZGate(q, -2.6120213577359617, 3);
  sqcRYGate(q, -1.0312484274888707, 4);
  sqcRZGate(q, 2.1001915993470432, 4);
  sqcRYGate(q, 1.7914480410045552, 5);
  sqcRZGate(q, -1.0415250200828448, 5);
  sqcRYGate(q, -0.05003778969320103, 6);
  sqcRZGate(q, -1.042852818999413, 6);
  sqcRYGate(q, 1.749590106191871, 7);
  sqcRZGate(q, 2.1032926658897964, 7);

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
