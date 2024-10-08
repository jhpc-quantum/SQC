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

  sqcRYGate(q, -2.783454927975868, 0);
  sqcRZGate(q, 0.2584090150941849, 0);
  sqcRYGate(q, 2.789022049162638, 1);
  sqcRZGate(q, -2.0372647182680064, 1);
  sqcRYGate(q, -1.7349820786408772, 2);
  sqcRZGate(q, -2.1796376763352407, 2);
  sqcRYGate(q, -2.96953019063678, 3);
  sqcRZGate(q, 1.2621056631304741, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.9207698975556811, 0);
  sqcRZGate(q, -0.32140217036736557, 0);
  sqcRYGate(q, -1.8311579656865065, 1);
  sqcRZGate(q, 2.425650334530808, 1);
  sqcRYGate(q, -0.7794550112896182, 2);
  sqcRZGate(q, 1.5122674489862555, 2);
  sqcRYGate(q, 1.359644888918729, 3);
  sqcRZGate(q, 1.6616529577963834, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.20237659404491734, 0);
  sqcRZGate(q, 2.029951724924364, 0);
  sqcRYGate(q, 0.021231443129619738, 1);
  sqcRZGate(q, -2.808451655446909, 1);
  sqcRYGate(q, -2.6431249412833964, 2);
  sqcRZGate(q, -1.2723141822657664, 2);
  sqcRYGate(q, -1.6203037965509102, 3);
  sqcRZGate(q, -0.9342914037663524, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.0410260557256037, 0);
  sqcRZGate(q, -1.64132765252557, 0);
  sqcRYGate(q, -2.3076489018311452, 1);
  sqcRZGate(q, -1.841395994484686, 1);
  sqcRYGate(q, 2.4096310640071876, 2);
  sqcRZGate(q, 2.78062016270839, 2);
  sqcRYGate(q, 1.8683556186838817, 3);
  sqcRZGate(q, 1.3345991353057962, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.4817578554246298, 0);
  sqcRZGate(q, -0.6455053094834545, 0);
  sqcRYGate(q, 0.27672894553884175, 1);
  sqcRZGate(q, -3.0265723404824922, 1);
  sqcRYGate(q, -2.612904045587867, 2);
  sqcRZGate(q, 1.9341679151529985, 2);
  sqcRYGate(q, -1.629684834637425, 3);
  sqcRZGate(q, -2.838032212898745, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.04205721391851913, 0);
  sqcRZGate(q, -2.9748778101328925, 0);
  sqcRYGate(q, 2.0057650322473926, 1);
  sqcRZGate(q, -2.0547014689759675, 1);
  sqcRYGate(q, -1.9033885006932127, 2);
  sqcRZGate(q, -2.9116002226282163, 2);
  sqcRYGate(q, 2.944464207007435, 3);
  sqcRZGate(q, -2.3781532028822503, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.6479978411157955, 0);
  sqcRZGate(q, 1.9456889534650021, 0);
  sqcRYGate(q, -2.4472819589262484, 1);
  sqcRZGate(q, 1.9306884332290117, 1);
  sqcRYGate(q, -1.315010915784175, 2);
  sqcRZGate(q, -2.054178466040383, 2);
  sqcRYGate(q, -3.0453445158171464, 3);
  sqcRZGate(q, 2.9990501988334803, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.7288317034815348, 0);
  sqcRZGate(q, 0.5688822363664564, 0);
  sqcRYGate(q, 2.696994600216148, 1);
  sqcRZGate(q, -0.19659301919193803, 1);
  sqcRYGate(q, -1.8542287550127874, 2);
  sqcRZGate(q, 1.648934365165642, 2);
  sqcRYGate(q, -0.30465397676962613, 3);
  sqcRZGate(q, -0.8604713819662633, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.1454958542815765, 0);
  sqcRZGate(q, -0.8681197398342375, 0);
  sqcRYGate(q, -1.5735050945556328, 1);
  sqcRZGate(q, -2.319503248641556, 1);
  sqcRYGate(q, 2.7826884861320726, 2);
  sqcRZGate(q, 0.8697843489194792, 2);
  sqcRYGate(q, -0.4263246648057768, 3);
  sqcRZGate(q, -2.308931548813747, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.3829700510952354, 0);
  sqcRZGate(q, -2.6688447166414573, 0);
  sqcRYGate(q, 0.6842253042131022, 1);
  sqcRZGate(q, -2.1463446026827997, 1);
  sqcRYGate(q, -2.3095036573920744, 2);
  sqcRZGate(q, 0.22099455036165058, 2);
  sqcRYGate(q, -2.2392023160329932, 3);
  sqcRZGate(q, 2.7943103174645834, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.173136037032781, 0);
  sqcRZGate(q, -2.269463571102456, 0);
  sqcRYGate(q, 1.8124935360233403, 1);
  sqcRZGate(q, 2.0613731646674838, 1);
  sqcRYGate(q, -1.4101491286192305, 2);
  sqcRZGate(q, 1.3842039800363324, 2);
  sqcRYGate(q, 2.549729409837689, 3);
  sqcRZGate(q, 2.501148176538751, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.29634579819199836, 0);
  sqcRZGate(q, 1.0648437976194094, 0);
  sqcRYGate(q, 3.125573157750331, 1);
  sqcRZGate(q, 1.5292573708069372, 1);
  sqcRYGate(q, 2.6811632941506627, 2);
  sqcRZGate(q, -2.4563379977376543, 2);
  sqcRYGate(q, 0.882441075015904, 3);
  sqcRZGate(q, -1.38933492690727, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.481694154120908, 0);
  sqcRZGate(q, -0.08235656183446415, 0);
  sqcRYGate(q, -0.24029389777638155, 1);
  sqcRZGate(q, -0.5847248805435015, 1);
  sqcRYGate(q, 3.1301914601358414, 2);
  sqcRZGate(q, 0.43728338216123813, 2);
  sqcRYGate(q, 1.2504381191174816, 3);
  sqcRZGate(q, 1.6639911212360463, 3);

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
