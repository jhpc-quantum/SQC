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

  sqcRYGate(q, 2.880708330876374, 0);
  sqcRZGate(q, -0.9611891916772226, 0);
  sqcRYGate(q, -0.9380657340720404, 1);
  sqcRZGate(q, 0.9907183694397466, 1);
  sqcRYGate(q, -3.1413499136566294, 2);
  sqcRZGate(q, 2.3829561190990907, 2);
  sqcRYGate(q, -1.6403224111689347, 3);
  sqcRZGate(q, -1.6840976539699843, 3);
  sqcRYGate(q, -1.404705373469851, 4);
  sqcRZGate(q, 1.6055340718975015, 4);
  sqcRYGate(q, -0.8136018870806986, 5);
  sqcRZGate(q, 2.98182447733995, 5);
  sqcRYGate(q, -2.955026159956782, 6);
  sqcRZGate(q, -1.4219993805662234, 6);
  sqcRYGate(q, -0.16356367811772188, 7);
  sqcRZGate(q, 1.553541948530058, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.03930662490514092, 0);
  sqcRZGate(q, 1.1101856813358808, 0);
  sqcRYGate(q, -1.6444439459914284, 1);
  sqcRZGate(q, 2.570899001951678, 1);
  sqcRYGate(q, 3.1399776726766047, 2);
  sqcRZGate(q, -0.8089379189827408, 2);
  sqcRYGate(q, 2.746708504010033, 3);
  sqcRZGate(q, 1.247904717342842, 3);
  sqcRYGate(q, 0.0009889080494738024, 4);
  sqcRZGate(q, 3.136867196952127, 4);
  sqcRYGate(q, 0.27040718160771643, 5);
  sqcRZGate(q, 0.20346226830232172, 5);
  sqcRYGate(q, 3.1372122597912964, 6);
  sqcRZGate(q, -0.7775088095823661, 6);
  sqcRYGate(q, 3.119821183569815, 7);
  sqcRZGate(q, 1.6950236482186265, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9147123538045011, 0);
  sqcRZGate(q, -2.5007944317685906, 0);
  sqcRYGate(q, -1.0887615054866495, 1);
  sqcRZGate(q, -1.3995173391677014, 1);
  sqcRYGate(q, -0.004141980661272806, 2);
  sqcRZGate(q, 0.7687097897274889, 2);
  sqcRYGate(q, -1.3679801281219062, 3);
  sqcRZGate(q, 1.5219243948825145, 3);
  sqcRYGate(q, 0.9834317537995512, 4);
  sqcRZGate(q, 1.1875588318917294, 4);
  sqcRYGate(q, 1.0637086718963484, 5);
  sqcRZGate(q, 0.8081012311649928, 5);
  sqcRYGate(q, -1.3625986443944278, 6);
  sqcRZGate(q, 0.18321313454344557, 6);
  sqcRYGate(q, -0.17347897654572209, 7);
  sqcRZGate(q, -0.2517521893130308, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.572660224916284, 0);
  sqcRZGate(q, -1.2056681748816456, 0);
  sqcRYGate(q, 0.1452320637183648, 1);
  sqcRZGate(q, -1.034466692472087, 1);
  sqcRYGate(q, -1.5634178088798432, 2);
  sqcRZGate(q, 2.4059692939474906, 2);
  sqcRYGate(q, 0.038493918567943375, 3);
  sqcRZGate(q, 2.631622998110171, 3);
  sqcRYGate(q, 0.015448430720129913, 4);
  sqcRZGate(q, -1.3066462815796582, 4);
  sqcRYGate(q, -0.03206684285024508, 5);
  sqcRZGate(q, 2.281401576502551, 5);
  sqcRYGate(q, -0.014897060053607802, 6);
  sqcRZGate(q, 0.167791298905525, 6);
  sqcRYGate(q, 1.2083748924847517, 7);
  sqcRZGate(q, -0.9230386117628584, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.0747649970868778, 0);
  sqcRZGate(q, -2.8724594409640534, 0);
  sqcRYGate(q, 1.6022468739458262, 1);
  sqcRZGate(q, -2.5756486499305025, 1);
  sqcRYGate(q, -3.1312737680431617, 2);
  sqcRZGate(q, 0.8682783405846818, 2);
  sqcRYGate(q, -1.5728903768299705, 3);
  sqcRZGate(q, -3.0818771309333512, 3);
  sqcRYGate(q, -0.978662762586997, 4);
  sqcRZGate(q, 2.98770779323485, 4);
  sqcRYGate(q, 0.28927474222207716, 5);
  sqcRZGate(q, 1.0674229371872748, 5);
  sqcRYGate(q, 3.136752260454163, 6);
  sqcRZGate(q, 0.8939916999730553, 6);
  sqcRYGate(q, -2.7956937698671447, 7);
  sqcRZGate(q, 1.6384566187690566, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.8397402185811291, 0);
  sqcRZGate(q, 0.07743048226275828, 0);
  sqcRYGate(q, -0.005747403225103476, 1);
  sqcRZGate(q, -0.5368200001909456, 1);
  sqcRYGate(q, 0.7866423969459667, 2);
  sqcRZGate(q, -3.1406404623881223, 2);
  sqcRYGate(q, -3.1059330255132283, 3);
  sqcRZGate(q, 0.03375957578095345, 3);
  sqcRYGate(q, -1.5987024869108577, 4);
  sqcRZGate(q, 0.38715934557201914, 4);
  sqcRYGate(q, -0.0027750012529967616, 5);
  sqcRZGate(q, -0.951274486947675, 5);
  sqcRYGate(q, -0.01816045805754659, 6);
  sqcRZGate(q, 1.6272637717930811, 6);
  sqcRYGate(q, -0.7843247648359383, 7);
  sqcRZGate(q, 0.7819518554304828, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.1762068503514636, 0);
  sqcRZGate(q, -2.835748785342928, 0);
  sqcRYGate(q, -0.0975986415035067, 1);
  sqcRZGate(q, 3.1055498099908365, 1);
  sqcRYGate(q, -2.6746870579925988, 2);
  sqcRZGate(q, -3.1394083153219303, 2);
  sqcRYGate(q, -3.0942526043509457, 3);
  sqcRZGate(q, -2.3001345270150484, 3);
  sqcRYGate(q, -2.8730298447446976, 4);
  sqcRZGate(q, 0.9354782953022198, 4);
  sqcRYGate(q, -1.5667892626441562, 5);
  sqcRZGate(q, 0.2133458226301723, 5);
  sqcRYGate(q, -2.7657073534604772, 6);
  sqcRZGate(q, 3.084863859549291, 6);
  sqcRYGate(q, 0.2400594650158376, 7);
  sqcRZGate(q, 2.5784244289287526, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.3520734498864185, 0);
  sqcRZGate(q, -3.0296427543329636, 0);
  sqcRYGate(q, -0.15291292552162575, 1);
  sqcRZGate(q, -3.017038265905612, 1);
  sqcRYGate(q, -2.3487361170061747, 2);
  sqcRZGate(q, -0.02940706787159337, 2);
  sqcRYGate(q, -3.138153442492875, 3);
  sqcRZGate(q, -2.044871875242026, 3);
  sqcRYGate(q, -3.14144224724694, 4);
  sqcRZGate(q, 2.0893314869052846, 4);
  sqcRYGate(q, -3.1396630021300664, 5);
  sqcRZGate(q, 2.6940606730891057, 5);
  sqcRYGate(q, 1.571107177449771, 6);
  sqcRZGate(q, 2.4723908939229275, 6);
  sqcRYGate(q, 2.4348876383045304, 7);
  sqcRZGate(q, 1.107036878288737, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.984903204771375, 0);
  sqcRZGate(q, -1.146018004921681, 0);
  sqcRYGate(q, -0.07858473299852878, 1);
  sqcRZGate(q, 1.3871093872901785, 1);
  sqcRYGate(q, 2.743417168821601, 2);
  sqcRZGate(q, 1.5663893512114118, 2);
  sqcRYGate(q, -3.1212840963977877, 3);
  sqcRZGate(q, -1.3276185005253973, 3);
  sqcRYGate(q, -0.09970099552218137, 4);
  sqcRZGate(q, -3.0928815954794184, 4);
  sqcRYGate(q, 3.135451362753566, 5);
  sqcRZGate(q, 0.9093817059848216, 5);
  sqcRYGate(q, -3.1402235712520987, 6);
  sqcRZGate(q, 0.9020779458174931, 6);
  sqcRYGate(q, -1.5705177199892635, 7);
  sqcRZGate(q, 3.1415254652611493, 7);

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
