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

  sqcRYGate(q, 1.6204050225772166, 0);
  sqcRYGate(q, -2.6061332140857756, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.09923438125601, 0);
  sqcRYGate(q, 1.8209611837128064, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6464492445064127, 1);
  sqcRYGate(q, 0.6347137230671842, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4361509552377054, 1);
  sqcRYGate(q, 1.769623416564689, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6647847896431845, 2);
  sqcRYGate(q, 0.7937444231978645, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9591481593486229, 2);
  sqcRYGate(q, 0.5260030105240192, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1811868520102595, 0);
  sqcRYGate(q, 1.37928424658672, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7541321877447148, 0);
  sqcRYGate(q, 2.0221515459398933, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2570631362800642, 1);
  sqcRYGate(q, -0.9190881287387889, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4313528225518306, 1);
  sqcRYGate(q, 1.7620674412239632, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8360518100164969, 2);
  sqcRYGate(q, 3.041565434203334, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.242695763344984, 2);
  sqcRYGate(q, -0.12379116054192467, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9402969499417502, 0);
  sqcRYGate(q, -2.498041006200242, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.346440918123064, 0);
  sqcRYGate(q, -1.2844052452810015, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9576474171469354, 1);
  sqcRYGate(q, 2.4331917966259646, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.514912283195876, 1);
  sqcRYGate(q, -1.9124674807450024, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3862342282857036, 2);
  sqcRYGate(q, 0.050499351166584105, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9985457078517558, 2);
  sqcRYGate(q, -1.3361867256087638, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.017698353565823836, 0);
  sqcRYGate(q, -0.0059912823202117, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6041715661769715, 0);
  sqcRYGate(q, -0.17202957338140965, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.760986008840222, 1);
  sqcRYGate(q, 0.18540856674791503, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2356600387680254, 1);
  sqcRYGate(q, -1.5108248100239203, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8910760380509366, 2);
  sqcRYGate(q, 0.41743016419306755, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.02297395152332, 2);
  sqcRYGate(q, 1.8227578608251984, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3932850889518216, 0);
  sqcRYGate(q, 0.26043647797418806, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0771018372608257, 0);
  sqcRYGate(q, -1.9318644879433613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8147483149669776, 1);
  sqcRYGate(q, 0.053830030867414454, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5957931941790555, 1);
  sqcRYGate(q, -2.3270990154233386, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.33778624896284715, 2);
  sqcRYGate(q, -2.852494145394495, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.878403090139029, 2);
  sqcRYGate(q, -2.413908481955306, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.66931314748022, 0);
  sqcRYGate(q, 2.7580810824974913, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3242517405996601, 0);
  sqcRYGate(q, 0.8625604247745953, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.41301460665445916, 1);
  sqcRYGate(q, 2.5473321224525614, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2603973960339667, 1);
  sqcRYGate(q, 2.500265428842372, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3003069811020318, 2);
  sqcRYGate(q, 1.9580125429738677, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9516501256861813, 2);
  sqcRYGate(q, -1.4961544329027507, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7734792468654914, 0);
  sqcRYGate(q, 0.518239649188522, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.263924157558436, 0);
  sqcRYGate(q, 3.0065232091564726, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8666383494229083, 1);
  sqcRYGate(q, 0.31167884866262074, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7736620759029025, 1);
  sqcRYGate(q, 2.680656345378972, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.28929511511816364, 2);
  sqcRYGate(q, -2.629867683840461, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1081628159478023, 2);
  sqcRYGate(q, -2.1773488841585067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7066556508957973, 0);
  sqcRYGate(q, 2.7548762219772187, 1);
  sqcRYGate(q, -3.106740163048954, 2);
  sqcRYGate(q, 2.2534494335505646, 3);

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
