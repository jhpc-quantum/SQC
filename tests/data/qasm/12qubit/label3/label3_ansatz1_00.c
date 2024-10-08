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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -2.1536875340996655, 0);
  sqcRZGate(q, -3.141566620160656, 0);
  sqcRYGate(q, 1.470795118059117, 1);
  sqcRZGate(q, 1.5707960311056863, 1);
  sqcRYGate(q, 1.3161845879970848, 2);
  sqcRZGate(q, 1.5708267547096781, 2);
  sqcRYGate(q, -1.570796470193705, 3);
  sqcRZGate(q, -0.36308083325627205, 3);
  sqcRYGate(q, 1.5707992696057564, 4);
  sqcRZGate(q, 3.1415926519122563, 4);
  sqcRYGate(q, -1.570796387916084, 5);
  sqcRZGate(q, -3.448928405092033e-07, 5);
  sqcRYGate(q, 1.4388708655945897, 6);
  sqcRZGate(q, -1.0863386791829663e-07, 6);
  sqcRYGate(q, -2.732412539155393, 7);
  sqcRZGate(q, 1.171847221591517, 7);
  sqcRYGate(q, -1.5707962017812154, 8);
  sqcRZGate(q, -1.8786030960955378e-06, 8);
  sqcRYGate(q, 1.6309262541143708, 9);
  sqcRZGate(q, 2.60263830493562e-05, 9);
  sqcRYGate(q, -1.5707969442446916, 10);
  sqcRZGate(q, 2.2893212255419586, 10);
  sqcRYGate(q, -1.5708190280201677, 11);
  sqcRZGate(q, -2.966274357129274, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.618341953473242, 0);
  sqcRZGate(q, -1.5707942648443023, 0);
  sqcRYGate(q, -1.5707830306222343, 1);
  sqcRZGate(q, 1.4674970368459437, 1);
  sqcRYGate(q, 1.5707960324953414, 2);
  sqcRZGate(q, -3.1415916193551574, 2);
  sqcRYGate(q, 1.9745753561297887e-07, 3);
  sqcRZGate(q, -1.207715982998601, 3);
  sqcRYGate(q, -1.5707962146582926, 4);
  sqcRZGate(q, -3.023816544479096, 4);
  sqcRYGate(q, -2.7518048220461773, 5);
  sqcRZGate(q, -1.5707963873855955, 5);
  sqcRYGate(q, 1.5707924990660498, 6);
  sqcRZGate(q, 2.368786510779523e-07, 6);
  sqcRYGate(q, 1.7626103061315846e-08, 7);
  sqcRZGate(q, -2.742642144568033, 7);
  sqcRYGate(q, 1.570796339483537, 8);
  sqcRZGate(q, -1.5708156890511922, 8);
  sqcRYGate(q, -1.570796522295482, 9);
  sqcRZGate(q, -1.5707966896056136, 9);
  sqcRYGate(q, -0.9685998288050975, 10);
  sqcRZGate(q, -2.064509894606783, 10);
  sqcRYGate(q, 3.0740422159731353, 11);
  sqcRZGate(q, 0.24139657324215769, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5324893834375508, 0);
  sqcRZGate(q, 3.141571721365437, 0);
  sqcRYGate(q, -1.5707949612211847, 1);
  sqcRZGate(q, -2.8647420636165566, 1);
  sqcRYGate(q, 1.7947494428281394, 2);
  sqcRZGate(q, -2.908802133609635, 2);
  sqcRYGate(q, -0.04768137627762403, 3);
  sqcRZGate(q, 5.736053234373722e-06, 3);
  sqcRYGate(q, 1.5707970211411018, 4);
  sqcRZGate(q, -1.5707773978863355, 4);
  sqcRYGate(q, -1.8066711703482108, 5);
  sqcRZGate(q, 0.7287860906482405, 5);
  sqcRYGate(q, 1.43568971759833, 6);
  sqcRZGate(q, -0.6621791653549183, 6);
  sqcRYGate(q, -3.1159705765188312, 7);
  sqcRZGate(q, 8.217552765366063e-06, 7);
  sqcRYGate(q, 0.8319217305394622, 8);
  sqcRZGate(q, -3.1415607938360846, 8);
  sqcRYGate(q, -0.5569201228670829, 9);
  sqcRZGate(q, 2.067319194752959, 9);
  sqcRYGate(q, 1.5707962669898832, 10);
  sqcRZGate(q, 0.0949118162880662, 10);
  sqcRYGate(q, -1.570837160081047, 11);
  sqcRZGate(q, 1.57079159153741, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.570794172863642, 0);
  sqcRZGate(q, -2.5209106586761747, 0);
  sqcRYGate(q, 3.1415716919235126, 1);
  sqcRZGate(q, 2.468330717865383, 1);
  sqcRYGate(q, -9.582606711309917e-06, 2);
  sqcRZGate(q, -1.1829049163727663, 2);
  sqcRYGate(q, -1.5708019824376303, 3);
  sqcRZGate(q, -0.950112466772289, 3);
  sqcRYGate(q, -1.5707820184414008, 4);
  sqcRZGate(q, 2.191480726896998, 4);
  sqcRYGate(q, 7.362879157444539e-06, 5);
  sqcRZGate(q, 1.4626943274680095, 5);
  sqcRYGate(q, -3.141568526529721, 6);
  sqcRZGate(q, 3.1000979549140895, 6);
  sqcRYGate(q, -1.5707915068342957, 7);
  sqcRZGate(q, 0.6206843528166948, 7);
  sqcRYGate(q, -1.5707978370231803, 8);
  sqcRZGate(q, 0.6206854901839685, 8);
  sqcRYGate(q, 8.043194161366785e-06, 9);
  sqcRZGate(q, 1.6949580294893707, 9);
  sqcRYGate(q, -2.347362132553785e-06, 10);
  sqcRZGate(q, -1.045022674779898, 10);
  sqcRYGate(q, 1.570800800502533, 11);
  sqcRZGate(q, 0.6206842453066042, 11);

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
