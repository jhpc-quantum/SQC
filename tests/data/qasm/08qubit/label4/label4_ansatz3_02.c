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

  sqcRYGate(q, 1.5707967402895981, 0);
  sqcRZGate(q, -2.566697717987114, 0);
  sqcRYGate(q, 1.5708030428487922, 1);
  sqcRZGate(q, -1.5708100999071837, 1);
  sqcRYGate(q, 0.5529790044938, 2);
  sqcRZGate(q, 1.5707958835299873, 2);
  sqcRYGate(q, -3.1415832362434246, 3);
  sqcRZGate(q, -1.2887746980811312, 3);
  sqcRYGate(q, 1.5707959721579416, 4);
  sqcRZGate(q, 3.889180613114718e-07, 4);
  sqcRYGate(q, -3.1603831469473747e-07, 5);
  sqcRZGate(q, 2.6787004827273098, 5);
  sqcRYGate(q, -1.5707964785797441, 6);
  sqcRZGate(q, 1.9727094430369851, 6);
  sqcRYGate(q, 1.3061853848023803, 7);
  sqcRZGate(q, -3.900243148820878e-07, 7);
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
  sqcRYGate(q, 0.13185550513925826, 0);
  sqcRZGate(q, -2.8070750449873643, 0);
  sqcRYGate(q, -2.146050352097114, 1);
  sqcRZGate(q, 0.4687736349129597, 1);
  sqcRYGate(q, -1.5707971395184475, 2);
  sqcRZGate(q, 2.339467615102727, 2);
  sqcRYGate(q, 1.5707954897243048, 3);
  sqcRZGate(q, -0.9111522113390695, 3);
  sqcRYGate(q, 1.5707969747316435, 4);
  sqcRZGate(q, -0.7361866410098639, 4);
  sqcRYGate(q, -1.5127518234408617, 5);
  sqcRZGate(q, 6.468377469204255e-07, 5);
  sqcRYGate(q, 2.212781581967249e-06, 6);
  sqcRZGate(q, -3.134223400015502, 6);
  sqcRYGate(q, 1.5707966047675308, 7);
  sqcRZGate(q, -1.4894698193080622, 7);
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
  sqcRYGate(q, 6.526529167069038e-06, 0);
  sqcRZGate(q, 2.807436511609212, 0);
  sqcRYGate(q, -0.4132024584104032, 1);
  sqcRZGate(q, 0.2462356267639351, 1);
  sqcRYGate(q, -3.8808755227078615e-07, 2);
  sqcRZGate(q, 1.1849765899777671, 2);
  sqcRYGate(q, -1.5707962488276417, 3);
  sqcRZGate(q, -1.5707965759117721, 3);
  sqcRYGate(q, -1.5707980960719894, 4);
  sqcRZGate(q, 3.059834965253373, 4);
  sqcRYGate(q, 1.5707964721548202, 5);
  sqcRZGate(q, 2.704333219058558, 5);
  sqcRYGate(q, -3.1415910875947914, 6);
  sqcRZGate(q, 2.7304150836013235, 6);
  sqcRYGate(q, 1.575381182055478, 7);
  sqcRZGate(q, -1.097264520078769, 7);
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
  sqcRYGate(q, 1.4458581354858087, 0);
  sqcRZGate(q, -1.5708272623207795, 0);
  sqcRYGate(q, -1.422517011681951e-06, 1);
  sqcRZGate(q, -2.2524003911249775, 1);
  sqcRYGate(q, 3.14158976838917, 2);
  sqcRZGate(q, -1.1126892235985124, 2);
  sqcRYGate(q, -1.5707974349629064, 3);
  sqcRZGate(q, -1.6019974360758393, 3);
  sqcRYGate(q, -4.6118908008570916e-07, 4);
  sqcRZGate(q, 0.08175724469289135, 4);
  sqcRYGate(q, 8.137101545802805e-08, 5);
  sqcRZGate(q, -2.7044125449070058, 5);
  sqcRYGate(q, 1.5707983854586531, 6);
  sqcRZGate(q, -0.6438872154171397, 6);
  sqcRYGate(q, -1.5509605860176778, 7);
  sqcRZGate(q, 0.09368228690220257, 7);
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
  sqcRYGate(q, 1.5707984127343901, 0);
  sqcRZGate(q, -2.264832234979024, 0);
  sqcRYGate(q, -1.570796845025541, 1);
  sqcRZGate(q, 3.1415924543256057, 1);
  sqcRYGate(q, 2.2081307982091403e-07, 2);
  sqcRZGate(q, 1.661284136032548, 2);
  sqcRYGate(q, -1.4621451162651453, 3);
  sqcRZGate(q, 0.29181459959002787, 3);
  sqcRYGate(q, 1.570796291471476, 4);
  sqcRZGate(q, -2.498242543218913, 4);
  sqcRYGate(q, 1.5707962856228308, 5);
  sqcRZGate(q, -2.1322064850532727, 5);
  sqcRYGate(q, -3.1415923682778204, 6);
  sqcRZGate(q, -0.9644984459718023, 6);
  sqcRYGate(q, 3.1118088674730866e-06, 7);
  sqcRZGate(q, 1.4665793399005498, 7);
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
  sqcRYGate(q, 9.33925571811045e-06, 0);
  sqcRZGate(q, 2.0844574608237085, 0);
  sqcRYGate(q, 1.5707937997609394, 1);
  sqcRZGate(q, -0.3067170031191253, 1);
  sqcRYGate(q, -1.5355778142378542e-06, 2);
  sqcRZGate(q, -0.346126362555899, 2);
  sqcRYGate(q, -1.5707959267168465, 3);
  sqcRZGate(q, 2.8348760294921345, 3);
  sqcRYGate(q, 3.1415918817294366, 4);
  sqcRZGate(q, -1.1078295530759272, 4);
  sqcRYGate(q, 3.141592471047328, 5);
  sqcRZGate(q, -2.4389237947888414, 5);
  sqcRYGate(q, -3.1415901359154943, 6);
  sqcRZGate(q, -0.5009915922957103, 6);
  sqcRYGate(q, 1.570795805888489, 7);
  sqcRZGate(q, -0.30671726975916863, 7);

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
