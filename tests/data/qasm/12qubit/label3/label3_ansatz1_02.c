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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -1.8360347999609354, 0);
  sqcRZGate(q, -1.5924459488418288, 0);
  sqcRYGate(q, -1.6529902834750403, 1);
  sqcRZGate(q, -2.0595140017897027, 1);
  sqcRYGate(q, -1.7242701770088207, 2);
  sqcRZGate(q, 1.0198911645146622, 2);
  sqcRYGate(q, -1.5614401899653245, 3);
  sqcRZGate(q, 1.5992933736493509, 3);
  sqcRYGate(q, 2.927957194418926, 4);
  sqcRZGate(q, 3.1190036269367254, 4);
  sqcRYGate(q, -1.578004788930512, 5);
  sqcRZGate(q, 3.139410234003416, 5);
  sqcRYGate(q, -1.5752153616576186, 6);
  sqcRZGate(q, -0.0017889239418913405, 6);
  sqcRYGate(q, -1.5972325214329999, 7);
  sqcRZGate(q, -0.06660261809519152, 7);
  sqcRYGate(q, 1.5614623375975647, 8);
  sqcRZGate(q, 3.113674405618226, 8);
  sqcRYGate(q, -1.54334094866826, 9);
  sqcRZGate(q, 3.1372815637348888, 9);
  sqcRYGate(q, -0.804165508841046, 10);
  sqcRZGate(q, -2.9794915946778815, 10);
  sqcRYGate(q, -0.13118188332369213, 11);
  sqcRZGate(q, 2.5442604883101234, 11);
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
  sqcRYGate(q, -1.052208703923573, 0);
  sqcRZGate(q, -0.014288805964469018, 0);
  sqcRYGate(q, -1.1751484811858945, 1);
  sqcRZGate(q, -1.6937590445616566, 1);
  sqcRYGate(q, 2.6636293819948516, 2);
  sqcRZGate(q, 1.7446724662951913, 2);
  sqcRYGate(q, 1.961144128355877, 3);
  sqcRZGate(q, -0.038958726520441356, 3);
  sqcRYGate(q, -1.5734771473546827, 4);
  sqcRZGate(q, -0.0010887590607329674, 4);
  sqcRYGate(q, 2.99638751242804, 5);
  sqcRZGate(q, 1.5687465331022539, 5);
  sqcRYGate(q, -1.573616589766388, 6);
  sqcRZGate(q, -0.0010120936134217873, 6);
  sqcRYGate(q, -2.8173287215666494, 7);
  sqcRZGate(q, 2.981820117983064, 7);
  sqcRYGate(q, -1.3694018934007692, 8);
  sqcRZGate(q, -0.25998665459736586, 8);
  sqcRYGate(q, -1.5861669823474633, 9);
  sqcRZGate(q, 0.12577644643761324, 9);
  sqcRYGate(q, 0.0852311761570208, 10);
  sqcRZGate(q, -2.9996581794143413, 10);
  sqcRYGate(q, 1.5922380597723176, 11);
  sqcRZGate(q, -3.1291505231244643, 11);
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
  sqcRYGate(q, 2.6366801875486523, 0);
  sqcRZGate(q, -1.7662414054679776, 0);
  sqcRYGate(q, 1.61439960587876, 1);
  sqcRZGate(q, 1.5337092286788938, 1);
  sqcRYGate(q, -1.0010838638443136, 2);
  sqcRZGate(q, 3.0037610705526427, 2);
  sqcRYGate(q, -1.56454473574294, 3);
  sqcRZGate(q, 0.0019113583456231709, 3);
  sqcRYGate(q, 0.7612318665320839, 4);
  sqcRZGate(q, 0.0009791084366037595, 4);
  sqcRYGate(q, 1.574761761988742, 5);
  sqcRZGate(q, 0.12331341504773086, 5);
  sqcRYGate(q, 1.5583892180854724, 6);
  sqcRZGate(q, -1.5939105527590183, 6);
  sqcRYGate(q, 3.125399527620866, 7);
  sqcRZGate(q, 3.02923731528527, 7);
  sqcRYGate(q, 1.715837697166152, 8);
  sqcRZGate(q, -3.104544149316559, 8);
  sqcRYGate(q, 1.597375926526865, 9);
  sqcRZGate(q, 3.077601063294591, 9);
  sqcRYGate(q, 2.8841391633999582, 10);
  sqcRZGate(q, -3.1314776592899864, 10);
  sqcRYGate(q, 1.6786813200108563, 11);
  sqcRZGate(q, -0.29981467408190277, 11);
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
  sqcRYGate(q, 0.17865804797804083, 0);
  sqcRZGate(q, -2.981508560817763, 0);
  sqcRYGate(q, -1.9409099739174163, 1);
  sqcRZGate(q, -1.5998382067789898, 1);
  sqcRYGate(q, 1.5722701612032814, 2);
  sqcRZGate(q, -3.1413050386391985, 2);
  sqcRYGate(q, 0.2627458605512869, 3);
  sqcRZGate(q, -3.137944076537881, 3);
  sqcRYGate(q, -2.9791763716746176, 4);
  sqcRZGate(q, 0.001445097879469337, 4);
  sqcRYGate(q, -3.1394812408890855, 5);
  sqcRZGate(q, -3.0146461794508155, 5);
  sqcRYGate(q, 2.899104666122712, 6);
  sqcRZGate(q, 0.04030228466512406, 6);
  sqcRYGate(q, -2.0364050591596055, 7);
  sqcRZGate(q, -1.5647925251293473, 7);
  sqcRYGate(q, 1.4299790665817111, 8);
  sqcRZGate(q, 0.03185636797375967, 8);
  sqcRYGate(q, 1.5569019077381439, 9);
  sqcRZGate(q, 1.5813289670495152, 9);
  sqcRYGate(q, 1.5618735198635194, 10);
  sqcRZGate(q, -1.6030185615926726, 10);
  sqcRYGate(q, 1.5726019672046951, 11);
  sqcRZGate(q, 0.08723069903205936, 11);
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
  sqcRYGate(q, 1.6176287996845797, 0);
  sqcRZGate(q, 3.0647190892241802, 0);
  sqcRYGate(q, -1.570169041875869, 1);
  sqcRZGate(q, 2.29833148155215, 1);
  sqcRYGate(q, 1.8889708928684739, 2);
  sqcRZGate(q, -3.0961626007386847, 2);
  sqcRYGate(q, -3.0384145608315154, 3);
  sqcRZGate(q, 2.7700274255612314, 3);
  sqcRYGate(q, -2.1022422630045288, 4);
  sqcRZGate(q, 1.2648729647726404, 4);
  sqcRYGate(q, -1.5654508878198936, 5);
  sqcRZGate(q, -0.057199206854512845, 5);
  sqcRYGate(q, -0.6495141063331822, 6);
  sqcRZGate(q, -2.0281842967222734, 6);
  sqcRYGate(q, 0.32927318690835394, 7);
  sqcRZGate(q, -1.487864322186506, 7);
  sqcRYGate(q, -1.5401322920143166, 8);
  sqcRZGate(q, -1.5335674133432895, 8);
  sqcRYGate(q, -2.6184585836597565, 9);
  sqcRZGate(q, 0.0599227637594586, 9);
  sqcRYGate(q, 0.7768983827493257, 10);
  sqcRZGate(q, 1.733124795264545, 10);
  sqcRYGate(q, 0.4187523258947774, 11);
  sqcRZGate(q, 2.905621591534181, 11);
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
  sqcRYGate(q, -1.617442745419841, 0);
  sqcRZGate(q, 2.454505381315914, 0);
  sqcRYGate(q, 0.08147867911379841, 1);
  sqcRZGate(q, -1.3894583266187563, 1);
  sqcRYGate(q, 1.6992345273608835, 2);
  sqcRZGate(q, 0.8895482696167806, 2);
  sqcRYGate(q, 2.9741138999460133, 3);
  sqcRZGate(q, -2.6015929878198776, 3);
  sqcRYGate(q, 0.044373835989987453, 4);
  sqcRZGate(q, -0.3847952209127952, 4);
  sqcRYGate(q, 1.5756671933667086, 5);
  sqcRZGate(q, -2.2265430111124216, 5);
  sqcRYGate(q, 0.04479941093924061, 6);
  sqcRZGate(q, -0.3188831054923209, 6);
  sqcRYGate(q, 0.05616317574795331, 7);
  sqcRZGate(q, -0.7416543370298986, 7);
  sqcRYGate(q, 1.5854299559608578, 8);
  sqcRZGate(q, 0.87656851787728, 8);
  sqcRYGate(q, -1.5553688238020316, 9);
  sqcRZGate(q, -2.2169145580778515, 9);
  sqcRYGate(q, 3.092498085217346, 10);
  sqcRZGate(q, 2.5733619018289953, 10);
  sqcRYGate(q, 3.0854487713334917, 11);
  sqcRZGate(q, 2.2694966419700773, 11);

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
