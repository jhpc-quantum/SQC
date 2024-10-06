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

  sqcRYGate(q, -0.6835591020214753, 0);
  sqcRZGate(q, -0.06394785121497293, 0);
  sqcRYGate(q, 0.8406745826775751, 1);
  sqcRZGate(q, -2.977459717102329, 1);
  sqcRYGate(q, 0.5303686633384048, 2);
  sqcRZGate(q, 2.7902844480599747, 2);
  sqcRYGate(q, 2.9345256220256255, 3);
  sqcRZGate(q, 2.522346904341204, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8340873667135149, 0);
  sqcRZGate(q, -0.04982622673309223, 0);
  sqcRYGate(q, -2.153814830442114, 1);
  sqcRZGate(q, -0.18615503602436664, 1);
  sqcRYGate(q, 2.6180970661197693, 2);
  sqcRZGate(q, 2.445314240091883, 2);
  sqcRYGate(q, 0.35062305320111964, 3);
  sqcRZGate(q, -2.6655609727812744, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.0473615007335613, 0);
  sqcRZGate(q, 2.620210049122184, 0);
  sqcRYGate(q, 2.8556798188142594, 1);
  sqcRZGate(q, -0.7080879377265955, 1);
  sqcRYGate(q, -2.3507182919838785, 2);
  sqcRZGate(q, -1.527005253891816, 2);
  sqcRYGate(q, -1.999959457306641, 3);
  sqcRZGate(q, 3.0508261859308927, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.074744016263641, 0);
  sqcRZGate(q, -0.2963243559934924, 0);
  sqcRYGate(q, -1.0769344729339938, 1);
  sqcRZGate(q, -1.2343733870017353, 1);
  sqcRYGate(q, 2.6180876673349114, 2);
  sqcRZGate(q, -3.0178084112269428, 2);
  sqcRYGate(q, 0.8398261626225445, 3);
  sqcRZGate(q, 0.6245288723783254, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5754692588811627, 0);
  sqcRZGate(q, 2.192780936920905, 0);
  sqcRYGate(q, -0.43707857222969254, 1);
  sqcRZGate(q, 0.3237968533078926, 1);
  sqcRYGate(q, -0.5803610289457534, 2);
  sqcRZGate(q, 0.5635992677962193, 2);
  sqcRYGate(q, 1.3338940521629077, 3);
  sqcRZGate(q, 2.4311166982317003, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.0666102857779207, 0);
  sqcRZGate(q, -0.45702217725790767, 0);
  sqcRYGate(q, 3.04547133489696, 1);
  sqcRZGate(q, 0.11461341359066422, 1);
  sqcRYGate(q, -1.1500869380295289, 2);
  sqcRZGate(q, 0.9569874655372645, 2);
  sqcRYGate(q, 0.36487890879327, 3);
  sqcRZGate(q, -2.565053909888354, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5915051143715617, 0);
  sqcRZGate(q, -0.8499407921794448, 0);
  sqcRYGate(q, -1.3675123243359062, 1);
  sqcRZGate(q, 2.242496339598053, 1);
  sqcRYGate(q, 1.3722572968914502, 2);
  sqcRZGate(q, 1.586292546896833, 2);
  sqcRYGate(q, -1.7880311264209798, 3);
  sqcRZGate(q, -2.55994439013753, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4924892876967621, 0);
  sqcRZGate(q, 0.1512383831638937, 0);
  sqcRYGate(q, 0.2188082146909851, 1);
  sqcRZGate(q, 0.7343164131807446, 1);
  sqcRYGate(q, -0.29040863853151133, 2);
  sqcRZGate(q, 2.594620273095642, 2);
  sqcRYGate(q, -0.7659923935188715, 3);
  sqcRZGate(q, 2.4109222170182014, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.482178257861797, 0);
  sqcRZGate(q, -2.552266950355403, 0);
  sqcRYGate(q, 2.7558490144135264, 1);
  sqcRZGate(q, 3.0523694527648306, 1);
  sqcRYGate(q, -1.841075475645122, 2);
  sqcRZGate(q, 2.665532262959455, 2);
  sqcRYGate(q, -2.060893605541997, 3);
  sqcRZGate(q, 2.6509796775006045, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.467759069546717, 0);
  sqcRZGate(q, -0.21625579427199895, 0);
  sqcRYGate(q, 2.0379555784791092, 1);
  sqcRZGate(q, 0.23827500602599372, 1);
  sqcRYGate(q, 1.7474037496439898, 2);
  sqcRZGate(q, 2.089785427757538, 2);
  sqcRYGate(q, -0.24071941381140505, 3);
  sqcRZGate(q, 3.0249681645362023, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0322192731209734, 0);
  sqcRZGate(q, -2.7547984483237418, 0);
  sqcRYGate(q, 2.616083187218937, 1);
  sqcRZGate(q, 0.7891322656374723, 1);
  sqcRYGate(q, -1.7248505367821636, 2);
  sqcRZGate(q, -1.293511523916699, 2);
  sqcRYGate(q, -0.7793689324422752, 3);
  sqcRZGate(q, 2.6754082806404336, 3);

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
