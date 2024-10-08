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

  sqcRYGate(q, 1.5707971526681088, 0);
  sqcRZGate(q, -1.5708451020328262, 0);
  sqcRYGate(q, 3.1415734445358385, 1);
  sqcRZGate(q, 3.1120462519662424, 1);
  sqcRYGate(q, -1.7765904785712374, 2);
  sqcRZGate(q, 7.72442755092584e-07, 2);
  sqcRYGate(q, 6.845619981987738e-08, 3);
  sqcRZGate(q, 1.5818446400139183, 3);
  sqcRYGate(q, 1.5707925489164967, 4);
  sqcRZGate(q, -1.01818103494898, 4);
  sqcRYGate(q, 1.5707762608305138, 5);
  sqcRZGate(q, -3.1415885471056675, 5);
  sqcRYGate(q, 1.5613029593890675, 6);
  sqcRZGate(q, -1.5990233671819518, 6);
  sqcRYGate(q, 2.9747191904575043, 7);
  sqcRZGate(q, -1.322374195019866, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.5708237361664625, 0);
  sqcRZGate(q, 0.5258609194178993, 0);
  sqcRYGate(q, 1.4448323905738958, 1);
  sqcRZGate(q, 0.2968677996890516, 1);
  sqcRYGate(q, -1.570745122366965, 2);
  sqcRZGate(q, -0.004538312001161948, 2);
  sqcRYGate(q, 1.5708103167957541, 3);
  sqcRZGate(q, -2.445143849727007, 3);
  sqcRYGate(q, -3.0135397492969678e-06, 4);
  sqcRZGate(q, 1.5289313041452495, 4);
  sqcRYGate(q, 0.5245650669549349, 5);
  sqcRZGate(q, -0.5327280204034419, 5);
  sqcRYGate(q, 0.047522546331380616, 6);
  sqcRZGate(q, 0.02825996362594268, 6);
  sqcRYGate(q, 0.004450766041888183, 7);
  sqcRZGate(q, -1.7652219799226647, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.5707961719289933, 0);
  sqcRZGate(q, -0.7000046957045584, 0);
  sqcRYGate(q, -3.1415917189141513, 1);
  sqcRZGate(q, -2.844725497169467, 1);
  sqcRYGate(q, 1.5708671597719635, 2);
  sqcRZGate(q, 0.009491439235754129, 2);
  sqcRYGate(q, 3.141588839274855, 3);
  sqcRZGate(q, 0.6962883897901532, 3);
  sqcRYGate(q, 3.0625376730036864, 4);
  sqcRZGate(q, 2.0837676819536446, 4);
  sqcRYGate(q, -3.1415490140780826, 5);
  sqcRZGate(q, -2.188812196971083, 5);
  sqcRYGate(q, -1.6000554833407246, 6);
  sqcRZGate(q, -4.354815954644432e-06, 6);
  sqcRYGate(q, 3.1415924254186582, 7);
  sqcRZGate(q, -1.5166964869567616, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 3.8173594054669024e-06, 0);
  sqcRZGate(q, 0.7300571138175197, 0);
  sqcRYGate(q, -1.5707971408518515, 1);
  sqcRZGate(q, 3.0257546163832854, 1);
  sqcRYGate(q, -1.5707408839018813, 2);
  sqcRZGate(q, 1.600834919660402, 2);
  sqcRYGate(q, -2.3053645661117277, 3);
  sqcRZGate(q, 3.025696466463249, 3);
  sqcRYGate(q, 1.570788909500263, 4);
  sqcRZGate(q, -1.5379594580445708, 4);
  sqcRYGate(q, -0.14698751306103644, 5);
  sqcRZGate(q, -0.029462559387085467, 5);
  sqcRYGate(q, -1.570795791315665, 6);
  sqcRZGate(q, -3.121356884551646, 6);
  sqcRYGate(q, 1.5707981538463605, 7);
  sqcRZGate(q, -0.11567604747985608, 7);

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
