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

  sqcRYGate(q, 1.4562951813319458, 0);
  sqcRYGate(q, -2.477231793044457, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0588801370634795, 0);
  sqcRYGate(q, 1.1616034445247347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8090889587273304, 2);
  sqcRYGate(q, 1.284104475541719, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.054183049885389, 2);
  sqcRYGate(q, 1.7758946023255284, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.621042647604787, 4);
  sqcRYGate(q, 1.1490706997421913, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.083039113435096, 4);
  sqcRYGate(q, -0.04340083263950945, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5448952916497509, 6);
  sqcRYGate(q, -0.6633152332732609, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3531852165855023, 6);
  sqcRYGate(q, -2.5111392619859223, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9533843756523025, 1);
  sqcRYGate(q, 2.226485437722922, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7641639469660197, 1);
  sqcRYGate(q, -1.6869273413105885, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8740167584568921, 3);
  sqcRYGate(q, 1.5343980652710851, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.588872681392397, 3);
  sqcRYGate(q, 3.1080051387686676, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.2227306323318174, 5);
  sqcRYGate(q, 2.8108598316361078, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4789477958381765, 5);
  sqcRYGate(q, -0.4169368961721648, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.951004360830364, 0);
  sqcRYGate(q, -1.7874510490427273, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.273175831331528, 0);
  sqcRYGate(q, -0.0002878847054743616, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.283199403859737, 2);
  sqcRYGate(q, -1.4519236109433642, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6022350180010003, 2);
  sqcRYGate(q, 1.8224873258542296, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6772873856921612, 4);
  sqcRYGate(q, 3.0808124734023616, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.46700482659223397, 4);
  sqcRYGate(q, -0.07599139145613522, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.24464133864304166, 6);
  sqcRYGate(q, 0.12594934878282524, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6013048083273729, 6);
  sqcRYGate(q, 1.3483551595756589, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3485095322597234, 1);
  sqcRYGate(q, -0.02634104982037133, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5725366851538607, 1);
  sqcRYGate(q, 1.7716056266457925, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0014022936925295326, 3);
  sqcRYGate(q, 2.443967555408866, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5717034769320875, 3);
  sqcRYGate(q, -1.5704234843292502, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.1137854951605632, 5);
  sqcRYGate(q, 2.709178856384112, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.268891795297253, 5);
  sqcRYGate(q, 1.2608014727536703, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.047146798451553576, 0);
  sqcRYGate(q, -1.48818520240474, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5693515556969193, 0);
  sqcRYGate(q, 1.6532281637293502, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7208788575405338, 2);
  sqcRYGate(q, -0.016318669997643198, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0006747200409984444, 2);
  sqcRYGate(q, -0.15646260858558855, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1414408709023407, 4);
  sqcRYGate(q, 1.6368306046934633, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5712363783518815, 4);
  sqcRYGate(q, -2.685799176972586, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1387121162316736, 6);
  sqcRYGate(q, 0.6777150671869006, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.513417792764832, 6);
  sqcRYGate(q, 1.6626680028699825, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5736764310984137, 1);
  sqcRYGate(q, -0.8588722428786935, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5003856951399657, 1);
  sqcRYGate(q, -1.573046858889977, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.047159140256226334, 3);
  sqcRYGate(q, 0.01273151235909431, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4689495123378336, 3);
  sqcRYGate(q, -1.5704331624056163, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5699860374945531, 5);
  sqcRYGate(q, -2.0520254531037545, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1263560051093604, 5);
  sqcRYGate(q, 1.568463567075579, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5168504487788907, 0);
  sqcRYGate(q, 2.003228681788616, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1382254084470285, 0);
  sqcRYGate(q, -1.619794683022501, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5778570245980683, 2);
  sqcRYGate(q, 3.128686316299916, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.107453792128748, 2);
  sqcRYGate(q, -1.5694190280460072, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6357710193958181, 4);
  sqcRYGate(q, -3.111266297264487, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1068324990765857, 4);
  sqcRYGate(q, -0.00027414264622827034, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8478793437333834, 6);
  sqcRYGate(q, 0.1298944823330557, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.121393533488854, 6);
  sqcRYGate(q, 2.9623995493675745, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.110841968101198, 1);
  sqcRYGate(q, 1.5733054295364575, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.06808332303340726, 1);
  sqcRYGate(q, 0.001978578734658414, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.012695405976556273, 3);
  sqcRYGate(q, -0.6382767518522762, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5397417686309371, 3);
  sqcRYGate(q, -1.5367126372732365, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.539451012963575, 5);
  sqcRYGate(q, 3.1307438362898377, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5704480379659158, 5);
  sqcRYGate(q, -1.571343688315065, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.005475046376224314, 0);
  sqcRYGate(q, -1.6771285606598108, 1);
  sqcRYGate(q, -0.0032272894481917176, 2);
  sqcRYGate(q, -1.5692691482028884, 3);
  sqcRYGate(q, 1.5835073295537132, 4);
  sqcRYGate(q, 3.1403212307391515, 5);
  sqcRYGate(q, -3.137278367808019, 6);
  sqcRYGate(q, 0.05154685364728362, 7);

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
