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

  sqcRYGate(q, -2.936203279741048, 0);
  sqcRYGate(q, 0.39411377040371337, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.105562764069491, 0);
  sqcRYGate(q, 1.9118313100852395, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.43544228582494, 1);
  sqcRYGate(q, -2.553393378897511, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.329304713720461, 1);
  sqcRYGate(q, -0.9036988991236679, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.247023161117698, 2);
  sqcRYGate(q, 0.35402150568082824, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2877769340419603, 2);
  sqcRYGate(q, 2.7170733183394864, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9974549834346075, 0);
  sqcRYGate(q, 1.0819403628549393, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6845043893166834, 0);
  sqcRYGate(q, 0.628893433366633, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.11531031519981028, 1);
  sqcRYGate(q, -2.125016457855752, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5211863232692835, 1);
  sqcRYGate(q, -1.2029255825938723, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9396276373017605, 2);
  sqcRYGate(q, -1.1868827447417525, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.33125154522510325, 2);
  sqcRYGate(q, 0.7552882200519965, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9933070679891098, 0);
  sqcRYGate(q, -1.197706644957318, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5769327379638987, 0);
  sqcRYGate(q, -0.2434727371252862, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9832913298656618, 1);
  sqcRYGate(q, -2.4923855672629984, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3234954273515929, 1);
  sqcRYGate(q, -0.21031018095373707, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6791627299201027, 2);
  sqcRYGate(q, -0.8918652791714066, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2811554981272115, 2);
  sqcRYGate(q, -2.206865122878331, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.48531549995579, 0);
  sqcRYGate(q, 2.439954440417006, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2786440128106362, 0);
  sqcRYGate(q, -0.41368188014063195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9488079583369594, 1);
  sqcRYGate(q, -1.6191316570036003, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9372349478574051, 1);
  sqcRYGate(q, 2.545447405420768, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9527712269152597, 2);
  sqcRYGate(q, -1.1971963576471705, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5726081095638671, 2);
  sqcRYGate(q, 1.9450831920029543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07774019420990098, 0);
  sqcRYGate(q, -2.7960314796441432, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6655159169096017, 0);
  sqcRYGate(q, 2.7922308660246338, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6808364466480405, 1);
  sqcRYGate(q, 1.4968146779098532, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5927195344618976, 1);
  sqcRYGate(q, 0.31106029964086673, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8888939930227402, 2);
  sqcRYGate(q, 0.6000888011803225, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0421097410552465, 2);
  sqcRYGate(q, 1.7296488825777558, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.424814623918384, 0);
  sqcRYGate(q, 3.0040313647960217, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.790864063217113, 0);
  sqcRYGate(q, 0.17189429474962967, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7428325717495774, 1);
  sqcRYGate(q, 2.143228455207314, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4740384488527773, 1);
  sqcRYGate(q, -1.0023389186033134, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.218253490413411, 2);
  sqcRYGate(q, 1.479114346487229, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5964497138287204, 2);
  sqcRYGate(q, 0.6473661055254292, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0518060242919534, 0);
  sqcRYGate(q, -1.7286310215541831, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.696488431739833, 0);
  sqcRYGate(q, -2.868134801038139, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5914810862412394, 1);
  sqcRYGate(q, 2.004949493664733, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.43130317115015515, 1);
  sqcRYGate(q, 2.6380349218462196, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3694543952198604, 2);
  sqcRYGate(q, 2.795954747184133, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.10522549757365378, 2);
  sqcRYGate(q, -0.17851862460928025, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0157701095748215, 0);
  sqcRYGate(q, -1.8401644697372328, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9812429427824423, 0);
  sqcRYGate(q, -2.7362584040829434, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8608165052049696, 1);
  sqcRYGate(q, -1.2447567487676219, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5749779449124536, 1);
  sqcRYGate(q, -3.02190390588172, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.096596565934189, 2);
  sqcRYGate(q, -1.988358309919249, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2795418440127087, 2);
  sqcRYGate(q, 1.4587283436970013, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9496032355106419, 0);
  sqcRYGate(q, 1.5229377051435495, 1);
  sqcRYGate(q, -0.36457112519034307, 2);
  sqcRYGate(q, -0.09661835611430382, 3);

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
