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

  sqcRYGate(q, -0.48148175400261134, 0);
  sqcRZGate(q, -2.134261911342466, 0);
  sqcRYGate(q, -0.4376574064223542, 1);
  sqcRZGate(q, 2.1179598976018292, 1);
  sqcRYGate(q, 1.821378156216464, 2);
  sqcRZGate(q, 1.2822970336909885, 2);
  sqcRYGate(q, 0.13966216689135713, 3);
  sqcRZGate(q, -1.2823050438815926, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.081974248707189, 0);
  sqcRZGate(q, -2.048422458654977, 0);
  sqcRYGate(q, -1.170100324143963, 1);
  sqcRZGate(q, -0.2131000220476685, 1);
  sqcRYGate(q, 1.7628328557937278, 2);
  sqcRZGate(q, 2.0563317678615105, 2);
  sqcRYGate(q, -1.7712298834867337, 3);
  sqcRZGate(q, -1.6070348281936608, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.7271785357636764, 0);
  sqcRZGate(q, 0.9655281148191068, 0);
  sqcRYGate(q, 0.8064171168696682, 1);
  sqcRZGate(q, 2.8184487815379713, 1);
  sqcRYGate(q, -2.53740337850241, 2);
  sqcRZGate(q, 1.8753301191941425, 2);
  sqcRYGate(q, -0.6402566544884777, 3);
  sqcRZGate(q, 2.2072664479351336, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.7030928804045704, 0);
  sqcRZGate(q, 1.8741938719731346, 0);
  sqcRYGate(q, 2.2280175843972243, 1);
  sqcRZGate(q, 0.1870973780044109, 1);
  sqcRYGate(q, 0.7687140378365204, 2);
  sqcRZGate(q, -2.904495510320492, 2);
  sqcRYGate(q, -2.301053565640788, 3);
  sqcRZGate(q, -0.7317537662422534, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.3678635917126378, 0);
  sqcRZGate(q, -1.585667259988858, 0);
  sqcRYGate(q, -1.370762496544696, 1);
  sqcRZGate(q, -1.053702337488244, 1);
  sqcRYGate(q, 0.9043240808668892, 2);
  sqcRZGate(q, 2.3217201311903484, 2);
  sqcRYGate(q, 2.2339154393450134, 3);
  sqcRZGate(q, 1.9238232064977927, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.5689314768221065, 0);
  sqcRZGate(q, 2.0776142454494675, 0);
  sqcRYGate(q, 3.069382178339064, 1);
  sqcRZGate(q, -0.009251614763116756, 1);
  sqcRYGate(q, -0.3888169992053978, 2);
  sqcRZGate(q, -1.8951937259177594, 2);
  sqcRYGate(q, -3.1406185474852943, 3);
  sqcRZGate(q, -1.1517034129580597, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.2783179068448929, 0);
  sqcRZGate(q, 2.2546113868533086, 0);
  sqcRYGate(q, 2.708597723835836, 1);
  sqcRZGate(q, 1.920985812116652, 1);
  sqcRYGate(q, 0.6579633444132762, 2);
  sqcRZGate(q, -0.5478072788665037, 2);
  sqcRYGate(q, -0.2229429250506767, 3);
  sqcRZGate(q, 2.3140726279367856, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.823818288934404, 0);
  sqcRZGate(q, -2.1785689457139994, 0);
  sqcRYGate(q, 2.658096593615267, 1);
  sqcRZGate(q, 0.06746321963952279, 1);
  sqcRYGate(q, -1.256869224201683, 2);
  sqcRZGate(q, 2.9267914745899377, 2);
  sqcRYGate(q, -2.3978263211386244, 3);
  sqcRZGate(q, 1.0482951995404726, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.315313604289936, 0);
  sqcRZGate(q, -1.2895869555966555, 0);
  sqcRYGate(q, 1.4065809341072164, 1);
  sqcRZGate(q, 3.13522498834398, 1);
  sqcRYGate(q, -1.6345079969853726, 2);
  sqcRZGate(q, 2.1943110805472443, 2);
  sqcRYGate(q, 0.22546489535998682, 3);
  sqcRZGate(q, -1.4373678121910431, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.030371904317488, 0);
  sqcRZGate(q, -1.758362151363647, 0);
  sqcRYGate(q, 0.12325862668660913, 1);
  sqcRZGate(q, 2.085908542869307, 1);
  sqcRYGate(q, -2.5022811468688055, 2);
  sqcRZGate(q, -0.23691273909600863, 2);
  sqcRYGate(q, 0.6599700654432921, 3);
  sqcRZGate(q, 2.638023752244584, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.08897813613580279, 0);
  sqcRZGate(q, -1.0357279039509517, 0);
  sqcRYGate(q, -0.8091038622524973, 1);
  sqcRZGate(q, -0.45823116558898697, 1);
  sqcRYGate(q, -0.4666906623851501, 2);
  sqcRZGate(q, 0.9546182764815166, 2);
  sqcRYGate(q, 1.4857575737217728, 3);
  sqcRZGate(q, 2.231499686214395, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.414450790921598, 0);
  sqcRZGate(q, 2.6389310049966985, 0);
  sqcRYGate(q, -1.881859897791701, 1);
  sqcRZGate(q, 3.0558005975553053, 1);
  sqcRYGate(q, -1.4480858849804576, 2);
  sqcRZGate(q, 0.42110222818563336, 2);
  sqcRYGate(q, 2.1697050815077983, 3);
  sqcRZGate(q, -2.2099218499363333, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.1410979485772863, 0);
  sqcRZGate(q, -3.0222802231095365, 0);
  sqcRYGate(q, 0.5381151422755258, 1);
  sqcRZGate(q, 0.2925206616593803, 1);
  sqcRYGate(q, 0.9635104403306185, 2);
  sqcRZGate(q, -0.7269268883851286, 2);
  sqcRYGate(q, 1.096854820738061, 3);
  sqcRZGate(q, -0.2359927361711927, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.8610452865642706, 0);
  sqcRZGate(q, -2.01063818798738, 0);
  sqcRYGate(q, -2.9059010578422453, 1);
  sqcRZGate(q, -1.0913377334524916, 1);
  sqcRYGate(q, 1.4845537398253956, 2);
  sqcRZGate(q, -1.6842725532164025, 2);
  sqcRYGate(q, -2.802980006764364, 3);
  sqcRZGate(q, 3.010720366277533, 3);

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
