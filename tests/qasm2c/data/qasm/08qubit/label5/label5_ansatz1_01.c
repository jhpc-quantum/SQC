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

  sqcRYGate(q, -1.2012425039716437, 0);
  sqcRZGate(q, 2.3827765870731854, 0);
  sqcRYGate(q, -1.6181884254455214, 1);
  sqcRZGate(q, -2.398446115121459, 1);
  sqcRYGate(q, -3.141556109866234, 2);
  sqcRZGate(q, 0.40826875528323603, 2);
  sqcRYGate(q, -1.5708127799836955, 3);
  sqcRZGate(q, -3.105837007646049, 3);
  sqcRYGate(q, -1.5708115446190871, 4);
  sqcRZGate(q, 3.1408665240119866, 4);
  sqcRYGate(q, -1.5708163703237594, 5);
  sqcRZGate(q, -1.5709425175365987, 5);
  sqcRYGate(q, 1.5708224143077434, 6);
  sqcRZGate(q, -2.7883586278268164, 6);
  sqcRYGate(q, 1.82959720567528, 7);
  sqcRZGate(q, 1.805879356175784, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9612087118079201, 0);
  sqcRZGate(q, 3.0328830697740017, 0);
  sqcRYGate(q, -0.9422283336702618, 1);
  sqcRZGate(q, 0.09039041817868392, 1);
  sqcRYGate(q, -1.5707970585898205, 2);
  sqcRZGate(q, 1.8365298571791433, 2);
  sqcRYGate(q, 3.1415725508837413, 3);
  sqcRZGate(q, -0.756433251644907, 3);
  sqcRYGate(q, 1.571419341447652, 4);
  sqcRZGate(q, 1.181308325519498, 4);
  sqcRYGate(q, -1.5707948867341184, 5);
  sqcRZGate(q, -1.5713041715220044, 5);
  sqcRYGate(q, 1.570810923785924, 6);
  sqcRZGate(q, -1.570833929963491, 6);
  sqcRYGate(q, 3.141583642239156, 7);
  sqcRZGate(q, -2.2846784603091272, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.2832480456786755, 0);
  sqcRZGate(q, -0.3597993228321749, 0);
  sqcRYGate(q, 1.5708014250661575, 1);
  sqcRZGate(q, -1.5707972057755155, 1);
  sqcRYGate(q, 1.5707916812998453, 2);
  sqcRZGate(q, 0.2786617440722062, 2);
  sqcRYGate(q, -3.141592499839365, 3);
  sqcRZGate(q, -2.7779902213638157, 3);
  sqcRYGate(q, 0.008414871258754553, 4);
  sqcRZGate(q, 1.9811861067433039, 4);
  sqcRYGate(q, -3.076871226001955, 5);
  sqcRZGate(q, 1.7691721726392968, 5);
  sqcRYGate(q, -1.5707984883745114, 6);
  sqcRZGate(q, -0.0010045700483086834, 6);
  sqcRYGate(q, -3.1415019613475876, 7);
  sqcRZGate(q, 2.192626958129268, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5710450627029005, 0);
  sqcRZGate(q, 3.1415798604782816, 0);
  sqcRYGate(q, -1.849431822341326, 1);
  sqcRZGate(q, 2.2639865671896313, 1);
  sqcRYGate(q, 1.5708156284936585, 2);
  sqcRZGate(q, 0.00010127533759574172, 2);
  sqcRYGate(q, -3.1415262490641385, 3);
  sqcRZGate(q, 2.7266021750395466, 3);
  sqcRYGate(q, 1.5714270446241447, 4);
  sqcRZGate(q, 3.141198396270423, 4);
  sqcRYGate(q, -3.141506248632343, 5);
  sqcRZGate(q, -2.9429566291614613, 5);
  sqcRYGate(q, -1.5711313759779864, 6);
  sqcRZGate(q, -2.690762365327882, 6);
  sqcRYGate(q, 1.570548847983673, 7);
  sqcRZGate(q, -3.1415723045860173, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5708312518723624, 0);
  sqcRZGate(q, 1.047499332339808, 0);
  sqcRYGate(q, 3.1415883743018114, 1);
  sqcRZGate(q, -0.6281153098030549, 1);
  sqcRYGate(q, -0.26598468299124, 2);
  sqcRZGate(q, 1.0473991687928403, 2);
  sqcRYGate(q, -1.5707796721217961, 3);
  sqcRZGate(q, -1.321308677146944, 3);
  sqcRYGate(q, 1.2139988882595156, 4);
  sqcRZGate(q, -2.6057939476034404, 4);
  sqcRYGate(q, -1.5707625337620996, 5);
  sqcRZGate(q, -2.8920258255785662, 5);
  sqcRYGate(q, 3.1415917034171055, 6);
  sqcRZGate(q, -0.5845465343345744, 6);
  sqcRYGate(q, -1.570647515229978, 7);
  sqcRZGate(q, 1.8203795215684087, 7);

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
