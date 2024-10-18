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

  sqcRYGate(q, 1.6766323557315717, 0);
  sqcRYGate(q, -1.179060265542983, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6393056129670065, 0);
  sqcRYGate(q, -1.8880081827309516, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2018062343828797, 0);
  sqcRYGate(q, -2.7234696407049603, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2583674268535567, 0);
  sqcRYGate(q, -2.683590409380736, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1978759986109975, 0);
  sqcRYGate(q, 0.3465064125605285, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.179377589934073, 0);
  sqcRYGate(q, 1.4793041907797277, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3268490575654789, 1);
  sqcRYGate(q, 0.34001428779301257, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9222535190165662, 1);
  sqcRYGate(q, 1.2021411518111558, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.716559649315384, 1);
  sqcRYGate(q, 2.6177361432720017, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9396339093846802, 1);
  sqcRYGate(q, -0.9384459245448495, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2888627280637492, 2);
  sqcRYGate(q, 0.9269870852202597, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.232544180905586, 2);
  sqcRYGate(q, 0.49296154791276686, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7553536892087944, 0);
  sqcRYGate(q, -1.7477982672348509, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7324131257519628, 0);
  sqcRYGate(q, -0.12344025818599415, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.242117964606763, 0);
  sqcRYGate(q, 0.7386450350441915, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4333827368179985, 0);
  sqcRYGate(q, 1.8104972741976333, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5468331062256704, 0);
  sqcRYGate(q, 2.3476769980384935, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9687198722623465, 0);
  sqcRYGate(q, 1.9572988549821355, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6876562877837398, 1);
  sqcRYGate(q, -2.343042874223831, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7963219756311317, 1);
  sqcRYGate(q, 2.100632765981462, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.18139948471303755, 1);
  sqcRYGate(q, -2.300662338433754, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6671941776860244, 1);
  sqcRYGate(q, -1.556107368810582, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1856914042142197, 2);
  sqcRYGate(q, 2.737680724857305, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5585929407027908, 2);
  sqcRYGate(q, 2.4191552320176672, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0128301926185164, 0);
  sqcRYGate(q, -0.5327191590454747, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0036594160484469, 0);
  sqcRYGate(q, 2.6622316869208293, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3496316471825418, 0);
  sqcRYGate(q, 2.2789354559341266, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.05212565730262231, 0);
  sqcRYGate(q, 2.1742494189895116, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7543879533450195, 0);
  sqcRYGate(q, 2.318689605442259, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.479540190927048, 0);
  sqcRYGate(q, 0.5746816983072588, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8586774595942046, 1);
  sqcRYGate(q, 2.1945647040889287, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.319411890155601, 1);
  sqcRYGate(q, -1.9052966749180644, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8995435329613495, 1);
  sqcRYGate(q, -1.4741759671314556, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.23298323343163663, 1);
  sqcRYGate(q, 2.0544071638449086, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.52633497132998, 2);
  sqcRYGate(q, -0.4544132966891006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.132500995899233, 2);
  sqcRYGate(q, 2.913331060714814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0411590732879095, 0);
  sqcRYGate(q, 2.668923184205697, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4447148456158523, 0);
  sqcRYGate(q, 1.5713420605176482, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4449938658286379, 0);
  sqcRYGate(q, -1.8038258043682163, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.528282484032567, 0);
  sqcRYGate(q, -1.3346459467522327, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.1587930558152033, 0);
  sqcRYGate(q, -0.691436541007584, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.797755614530154, 0);
  sqcRYGate(q, 0.887282286309171, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3567219692531902, 1);
  sqcRYGate(q, 1.8662862631019754, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.12253179186946017, 1);
  sqcRYGate(q, -2.6413525473301713, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2685395932993684, 1);
  sqcRYGate(q, -1.8517273299115555, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8179789082702573, 1);
  sqcRYGate(q, 1.2285710253487665, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.047355481981135, 2);
  sqcRYGate(q, 2.5210787316695167, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5837799034212168, 2);
  sqcRYGate(q, 0.23544156894702242, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.47220286119547517, 0);
  sqcRYGate(q, -1.4868350650997098, 1);
  sqcRYGate(q, 2.3720364325796304, 2);
  sqcRYGate(q, 1.8147605498935118, 3);

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
