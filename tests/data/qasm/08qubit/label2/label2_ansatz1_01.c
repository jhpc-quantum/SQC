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

  sqcRYGate(q, -1.8576969889723243, 0);
  sqcRZGate(q, -3.1185758220506123, 0);
  sqcRYGate(q, 0.09418609821289879, 1);
  sqcRZGate(q, -0.1420922130884648, 1);
  sqcRYGate(q, -2.0309735076107205, 2);
  sqcRZGate(q, 3.1415612354897418, 2);
  sqcRYGate(q, -1.5707978622789787, 3);
  sqcRZGate(q, 3.0449024890409744, 3);
  sqcRYGate(q, -1.5707943401599849, 4);
  sqcRZGate(q, 3.0655644516876013, 4);
  sqcRYGate(q, -0.11822019282683094, 5);
  sqcRZGate(q, -3.1415611830294927, 5);
  sqcRYGate(q, 0.13786181259457886, 6);
  sqcRZGate(q, -3.136583479207599, 6);
  sqcRYGate(q, -2.410679464856911, 7);
  sqcRZGate(q, -1.3204472236274623, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.441729146666113, 0);
  sqcRZGate(q, -0.17168459054632737, 0);
  sqcRYGate(q, 0.004984273470561185, 1);
  sqcRZGate(q, -0.022336874402046902, 1);
  sqcRYGate(q, -1.5707983821959033, 2);
  sqcRZGate(q, -0.04954513793068566, 2);
  sqcRYGate(q, 2.7534408738411713, 3);
  sqcRZGate(q, -0.07124121355975355, 3);
  sqcRYGate(q, 2.3236765722835564, 4);
  sqcRZGate(q, -2.5942811623082878, 4);
  sqcRYGate(q, -1.5707940949819617, 5);
  sqcRZGate(q, 0.0068758856674717705, 5);
  sqcRYGate(q, -3.0674735945509966, 6);
  sqcRZGate(q, -0.005770686365068834, 6);
  sqcRYGate(q, -0.02016201069831333, 7);
  sqcRZGate(q, 1.4045846819828085, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.8515134124588928, 0);
  sqcRZGate(q, -0.04903626465679541, 0);
  sqcRYGate(q, -1.5707968151076892, 1);
  sqcRZGate(q, 2.6142816793718353, 1);
  sqcRYGate(q, -1.5023222849501454, 2);
  sqcRZGate(q, 1.7199328302814791, 2);
  sqcRYGate(q, 0.9357994404226995, 3);
  sqcRZGate(q, -3.032234176760285, 3);
  sqcRYGate(q, 0.04212056076443371, 4);
  sqcRZGate(q, 1.699879673745004, 4);
  sqcRYGate(q, 1.6282759126720583, 5);
  sqcRZGate(q, 2.901986766384036, 5);
  sqcRYGate(q, 1.5707987874991973, 6);
  sqcRZGate(q, -1.6248345618913662, 6);
  sqcRYGate(q, 2.289448883470479, 7);
  sqcRZGate(q, 0.04154086524876798, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.570799456037078, 0);
  sqcRZGate(q, -1.4717301653421329, 0);
  sqcRYGate(q, 3.048358228689295, 1);
  sqcRZGate(q, 1.1464654312385827, 1);
  sqcRYGate(q, -3.094358650419762, 2);
  sqcRZGate(q, 1.5105018019344074, 2);
  sqcRYGate(q, -2.4275227112465303, 3);
  sqcRZGate(q, -2.9556525082449996, 3);
  sqcRYGate(q, 0.056476693589977596, 4);
  sqcRZGate(q, 2.3621718128340126, 4);
  sqcRYGate(q, 0.1984798749837039, 5);
  sqcRZGate(q, -1.3218072690546292, 5);
  sqcRYGate(q, 0.046519018189848715, 6);
  sqcRZGate(q, -2.7766299335636537, 6);
  sqcRYGate(q, -1.570793424929593, 7);
  sqcRZGate(q, 1.986105771412804, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.556475691755428, 0);
  sqcRZGate(q, 0.06501945530132405, 0);
  sqcRYGate(q, 1.543864126808578, 1);
  sqcRZGate(q, -2.9479826108361045, 1);
  sqcRYGate(q, -3.0405467370558754, 2);
  sqcRZGate(q, 1.4907413222581738, 2);
  sqcRYGate(q, -0.20016884573730057, 3);
  sqcRZGate(q, -1.5584716864167811, 3);
  sqcRYGate(q, -1.540093005053813, 4);
  sqcRZGate(q, 0.0974773588052127, 4);
  sqcRYGate(q, -1.5257175286052826, 5);
  sqcRZGate(q, 0.21106928895013957, 5);
  sqcRYGate(q, -3.0969407812318193, 6);
  sqcRZGate(q, 0.5170292558652574, 6);
  sqcRYGate(q, 3.095087743143823, 7);
  sqcRZGate(q, -2.517148061553144, 7);

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
