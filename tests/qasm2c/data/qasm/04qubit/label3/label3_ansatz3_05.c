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

  sqcRYGate(q, -1.8608318252152456, 0);
  sqcRZGate(q, 1.2037338211055961, 0);
  sqcRYGate(q, -0.17589447727963523, 1);
  sqcRZGate(q, -1.4474203887287234, 1);
  sqcRYGate(q, -2.1873460753897827, 2);
  sqcRZGate(q, -2.7108822281059557, 2);
  sqcRYGate(q, -2.521771798525494, 3);
  sqcRZGate(q, -1.5022077926171313, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.625909565088225, 0);
  sqcRZGate(q, -1.266648156962454, 0);
  sqcRYGate(q, 0.8564788958903646, 1);
  sqcRZGate(q, -0.8256003351422123, 1);
  sqcRYGate(q, -1.6735055441107063, 2);
  sqcRZGate(q, 1.2104267842595091, 2);
  sqcRYGate(q, 1.4575414078669082, 3);
  sqcRZGate(q, -3.1116567666291877, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.8926236164669594, 0);
  sqcRZGate(q, 0.5747316720089257, 0);
  sqcRYGate(q, -1.133422622859474, 1);
  sqcRZGate(q, 2.802080794883321, 1);
  sqcRYGate(q, 2.4715077830601526, 2);
  sqcRZGate(q, -1.6556628923629448, 2);
  sqcRYGate(q, 1.345253815925837, 3);
  sqcRZGate(q, -2.0296593914634578, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.8743371921678196, 0);
  sqcRZGate(q, -0.597775458750587, 0);
  sqcRYGate(q, -0.3117044470579007, 1);
  sqcRZGate(q, 0.5799448452964358, 1);
  sqcRYGate(q, -1.665223432048962, 2);
  sqcRZGate(q, 0.2598920056003508, 2);
  sqcRYGate(q, 0.5984492452884035, 3);
  sqcRZGate(q, 1.24878302992441, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.4426328795347336, 0);
  sqcRZGate(q, 2.002687932927831, 0);
  sqcRYGate(q, -0.018077751859341323, 1);
  sqcRZGate(q, -1.420034942620556, 1);
  sqcRYGate(q, 1.7200004796222954, 2);
  sqcRZGate(q, 0.07022219479440006, 2);
  sqcRYGate(q, -1.6206135762441038, 3);
  sqcRZGate(q, 0.2674456193741229, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.5929020324096084, 0);
  sqcRZGate(q, -0.8751043912055447, 0);
  sqcRYGate(q, 2.500170176993175, 1);
  sqcRZGate(q, -1.859646084447405, 1);
  sqcRYGate(q, -1.928237751473359, 2);
  sqcRZGate(q, -1.535387474260983, 2);
  sqcRYGate(q, -2.721639292645603, 3);
  sqcRZGate(q, 2.747274239534308, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.466135634664419, 0);
  sqcRZGate(q, 2.1779347944679515, 0);
  sqcRYGate(q, 2.9082742920440348, 1);
  sqcRZGate(q, -0.08711927982076251, 1);
  sqcRYGate(q, 0.3372411643956523, 2);
  sqcRZGate(q, 0.22329732770835073, 2);
  sqcRYGate(q, 0.7059649445546858, 3);
  sqcRZGate(q, 0.1254479875762097, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.539561491629361, 0);
  sqcRZGate(q, 0.23344123006626719, 0);
  sqcRYGate(q, 1.5882639737909283, 1);
  sqcRZGate(q, 2.386937099112868, 1);
  sqcRYGate(q, 2.396341643894269, 2);
  sqcRZGate(q, 1.5618543290677886, 2);
  sqcRYGate(q, -0.6323931016605481, 3);
  sqcRZGate(q, 1.0707226676484267, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.5163773659073225, 0);
  sqcRZGate(q, -2.6025630813554783, 0);
  sqcRYGate(q, -2.6227634189314384, 1);
  sqcRZGate(q, -2.540446493669324, 1);
  sqcRYGate(q, -1.7509796295288789, 2);
  sqcRZGate(q, 0.17484328861912668, 2);
  sqcRYGate(q, 2.175475165602769, 3);
  sqcRZGate(q, -2.397598484800786, 3);

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
