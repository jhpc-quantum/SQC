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

  sqcRYGate(q, 1.4313067651888616, 0);
  sqcRYGate(q, 0.04046376586219402, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.32061244157589197, 0);
  sqcRYGate(q, 1.2316250979401824, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3712452855724002, 2);
  sqcRYGate(q, 2.25480078420286, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8487790818949383, 2);
  sqcRYGate(q, 2.3388348248713573, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8529620373550246, 0);
  sqcRYGate(q, -2.8400607607409407, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5335942240459572, 0);
  sqcRYGate(q, 2.167332579470549, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8222681511161063, 1);
  sqcRYGate(q, 3.1058255840813653, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1188872150821894, 1);
  sqcRYGate(q, 2.4327060615831555, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.655108167643717, 0);
  sqcRYGate(q, -0.28884138242083063, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7353332288283143, 0);
  sqcRYGate(q, 0.028695976842595172, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8860568002797118, 2);
  sqcRYGate(q, -3.071431401381408, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08447310143257791, 2);
  sqcRYGate(q, 2.2442117202283756, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4660761351887168, 0);
  sqcRYGate(q, 3.1285011297614576, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0392276973055448, 0);
  sqcRYGate(q, 1.5943841120436923, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1500090298799215, 1);
  sqcRYGate(q, -0.27658787027696535, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1831528298104539, 1);
  sqcRYGate(q, 2.247744952821783, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3696543664184104, 0);
  sqcRYGate(q, 0.057933442302281035, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9639493261974907, 0);
  sqcRYGate(q, -2.048036672580543, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4734402325451272, 2);
  sqcRYGate(q, -1.3939708176987082, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4285571398041994, 2);
  sqcRYGate(q, -1.3672107129141233, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8622448761210535, 0);
  sqcRYGate(q, 2.300746873711803, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.801620741730458, 0);
  sqcRYGate(q, -2.998132289941949, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8012694810381271, 1);
  sqcRYGate(q, 0.282209836173403, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8869216143000678, 1);
  sqcRYGate(q, -1.9503770572461152, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9295256043436333, 0);
  sqcRYGate(q, -1.6668937435282556, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7085749994012245, 0);
  sqcRYGate(q, 2.3255634280753528, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3170174277031528, 2);
  sqcRYGate(q, 1.0534049254060702, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1206667613159245, 2);
  sqcRYGate(q, 0.9783706974644066, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7360820097179621, 0);
  sqcRYGate(q, -1.0919924529662561, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.604918980047147, 0);
  sqcRYGate(q, 1.2222311066116234, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5727044497477598, 1);
  sqcRYGate(q, 0.42276141368138553, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3546608845207024, 1);
  sqcRYGate(q, 0.9977782186466575, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3311139664181351, 0);
  sqcRYGate(q, -0.09053378801999123, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.41334917744071337, 0);
  sqcRYGate(q, 2.9142970561850867, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.109115682666282, 2);
  sqcRYGate(q, -1.4341261619452421, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.547439775993224, 2);
  sqcRYGate(q, 1.2698085629902476, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.27725863319379945, 0);
  sqcRYGate(q, -0.9172485701880057, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.836873959584841, 0);
  sqcRYGate(q, 2.2138675213843317, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6049889067220278, 1);
  sqcRYGate(q, 0.9354018580537806, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.036778950834798, 1);
  sqcRYGate(q, -2.472401797459532, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.794188513836789, 0);
  sqcRYGate(q, -1.2168284328922252, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6758153865754428, 0);
  sqcRYGate(q, -1.7885924291692215, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.252826440935614, 2);
  sqcRYGate(q, 0.2794423912462145, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5269134699324045, 2);
  sqcRYGate(q, -1.800065650605832, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0724086159271455, 0);
  sqcRYGate(q, -2.0562216618852727, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.713059065397086, 0);
  sqcRYGate(q, 1.7779913531257303, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6346845601702906, 1);
  sqcRYGate(q, -2.0683747592105677, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4961872955680784, 1);
  sqcRYGate(q, 2.9945186207444725, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.77636180373477, 0);
  sqcRYGate(q, -1.349418333971413, 1);
  sqcRYGate(q, 2.736281477079556, 2);
  sqcRYGate(q, -1.1895392263926912, 3);

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
