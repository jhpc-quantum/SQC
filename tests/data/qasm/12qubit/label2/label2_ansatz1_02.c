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

  sqcRYGate(q, -0.010820505894685084, 0);
  sqcRZGate(q, 1.4493383892446117, 0);
  sqcRYGate(q, 2.062856514350618, 1);
  sqcRZGate(q, -3.1138518846249656, 1);
  sqcRYGate(q, -0.011210202031382448, 2);
  sqcRZGate(q, -0.5857234767827055, 2);
  sqcRYGate(q, 0.736737164225114, 3);
  sqcRZGate(q, 2.658429633247872, 3);
  sqcRYGate(q, -0.9153791723072011, 4);
  sqcRZGate(q, 0.5561994500391979, 4);
  sqcRYGate(q, -0.890534188722401, 5);
  sqcRZGate(q, 0.10232603068376989, 5);
  sqcRYGate(q, -2.691097691027848, 6);
  sqcRZGate(q, 3.015732270125274, 6);
  sqcRYGate(q, 1.3881946420208953, 7);
  sqcRZGate(q, 0.0003422521568454684, 7);
  sqcRYGate(q, -1.5699869159174011, 8);
  sqcRZGate(q, -1.335988147865987, 8);
  sqcRYGate(q, -1.5634021204388528, 9);
  sqcRZGate(q, 2.0425293393221784, 9);
  sqcRYGate(q, -3.1385235663968882, 10);
  sqcRZGate(q, -0.538573850364605, 10);
  sqcRYGate(q, -1.373117611089608, 11);
  sqcRZGate(q, -0.4082759342474827, 11);
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
  sqcRYGate(q, -1.5869555458225366, 0);
  sqcRZGate(q, -0.34073385460458616, 0);
  sqcRYGate(q, 2.1009041011815874, 1);
  sqcRZGate(q, -1.4956949092644234, 1);
  sqcRYGate(q, 0.20895367204838866, 2);
  sqcRZGate(q, -3.1204318173675927, 2);
  sqcRYGate(q, 2.019746894529678, 3);
  sqcRZGate(q, 2.1962945629869632, 3);
  sqcRYGate(q, -2.054741137038722, 4);
  sqcRZGate(q, 2.7293126130682968, 4);
  sqcRYGate(q, 0.04386830161180999, 5);
  sqcRZGate(q, -0.10099421905375992, 5);
  sqcRYGate(q, -0.005538881948769614, 6);
  sqcRZGate(q, -3.0132826883759214, 6);
  sqcRYGate(q, -1.168053697804368, 7);
  sqcRZGate(q, -0.10851393117698117, 7);
  sqcRYGate(q, 3.065757096676362, 8);
  sqcRZGate(q, 1.8034456695522851, 8);
  sqcRYGate(q, 3.13944194210094, 9);
  sqcRZGate(q, -1.880905609282582, 9);
  sqcRYGate(q, -1.2519966731052605, 10);
  sqcRZGate(q, -3.1192314980474456, 10);
  sqcRYGate(q, -2.8290223630378426, 11);
  sqcRZGate(q, -2.3657989295601287, 11);
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
  sqcRYGate(q, 1.6982865953022488, 0);
  sqcRZGate(q, 0.8185589038656753, 0);
  sqcRYGate(q, -0.012067546762585481, 1);
  sqcRZGate(q, 0.6500750542310286, 1);
  sqcRYGate(q, -1.5669877369133287, 2);
  sqcRZGate(q, 0.04748657169677089, 2);
  sqcRYGate(q, -2.4165556535111916, 3);
  sqcRZGate(q, 3.0574588089672483, 3);
  sqcRYGate(q, 0.6343765220792061, 4);
  sqcRZGate(q, -2.8320048172800405, 4);
  sqcRYGate(q, -0.6505701009072593, 5);
  sqcRZGate(q, -2.8212067298820434, 5);
  sqcRYGate(q, -0.8539925349223373, 6);
  sqcRZGate(q, -2.7926297027629743, 6);
  sqcRYGate(q, -0.2153588377725548, 7);
  sqcRZGate(q, -1.2583608180170636, 7);
  sqcRYGate(q, 1.5810799032423486, 8);
  sqcRZGate(q, 0.2751195680110821, 8);
  sqcRYGate(q, 3.1082954353660788, 9);
  sqcRZGate(q, -0.810194272943804, 9);
  sqcRYGate(q, 0.05760324321224518, 10);
  sqcRZGate(q, 0.010260682611014538, 10);
  sqcRYGate(q, -2.6985269933202733, 11);
  sqcRZGate(q, 0.3317030347340712, 11);
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
  sqcRYGate(q, -0.2713647468391853, 0);
  sqcRZGate(q, -2.544112327182698, 0);
  sqcRYGate(q, 1.5720545703379072, 1);
  sqcRZGate(q, 1.6397254338225604, 1);
  sqcRYGate(q, -1.7079295376078985, 2);
  sqcRZGate(q, 1.54247404943324, 2);
  sqcRYGate(q, 2.9169292734642127, 3);
  sqcRZGate(q, 1.6010227541021693, 3);
  sqcRYGate(q, 1.7510214699953819, 4);
  sqcRZGate(q, 0.3966555929727953, 4);
  sqcRYGate(q, 1.604171829355699, 5);
  sqcRZGate(q, 1.5855664333161232, 5);
  sqcRYGate(q, 1.6303208089471504, 6);
  sqcRZGate(q, -1.014271218973355, 6);
  sqcRYGate(q, 0.35694722635228293, 7);
  sqcRZGate(q, -1.777547932097539, 7);
  sqcRYGate(q, -3.126797090507159, 8);
  sqcRZGate(q, -2.188703757144542, 8);
  sqcRYGate(q, -1.1212504640008398, 9);
  sqcRZGate(q, -1.8360671036291356, 9);
  sqcRYGate(q, -2.7903978345224485, 10);
  sqcRZGate(q, 1.1449798027437468, 10);
  sqcRYGate(q, -3.0988817121037426, 11);
  sqcRZGate(q, -0.9004984842608232, 11);
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
  sqcRYGate(q, -1.5631517288329488, 0);
  sqcRZGate(q, -1.5167178859998245, 0);
  sqcRYGate(q, 0.08898658674118483, 1);
  sqcRZGate(q, -2.560541090239158, 1);
  sqcRYGate(q, 3.0945127773299768, 2);
  sqcRZGate(q, 2.201748868914913, 2);
  sqcRYGate(q, 3.068520025739542, 3);
  sqcRZGate(q, -2.897067345336799, 3);
  sqcRYGate(q, -2.597653373921769, 4);
  sqcRZGate(q, 0.16396575095309898, 4);
  sqcRYGate(q, 0.045210566358388604, 5);
  sqcRZGate(q, 1.4152358137792778, 5);
  sqcRYGate(q, 0.052466913022678696, 6);
  sqcRZGate(q, 0.26839393317875787, 6);
  sqcRYGate(q, 2.594105952905246, 7);
  sqcRZGate(q, 2.400936604659506, 7);
  sqcRYGate(q, 0.0370109943650192, 8);
  sqcRZGate(q, 0.03896085100505963, 8);
  sqcRYGate(q, 3.087735487457088, 9);
  sqcRZGate(q, 0.7778037858963586, 9);
  sqcRYGate(q, 0.05151679283719535, 10);
  sqcRZGate(q, 2.5430907222062693, 10);
  sqcRYGate(q, -1.4320819823940678, 11);
  sqcRZGate(q, -0.09292712253293622, 11);
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
  sqcRYGate(q, -2.3217895982763808, 0);
  sqcRZGate(q, 3.0900150790703598, 0);
  sqcRYGate(q, 1.1738439790955104, 1);
  sqcRZGate(q, 1.907049299370832, 1);
  sqcRYGate(q, -0.7474026328509766, 2);
  sqcRZGate(q, 3.0319420945330187, 2);
  sqcRYGate(q, -2.402751044823447, 3);
  sqcRZGate(q, -0.40582766919471663, 3);
  sqcRYGate(q, -0.6839305157293243, 4);
  sqcRZGate(q, -0.6516081258284441, 4);
  sqcRYGate(q, -2.3110886520496807, 5);
  sqcRZGate(q, 2.523492439815937, 5);
  sqcRYGate(q, -1.4190024995399506, 6);
  sqcRZGate(q, 1.0906236070863438, 6);
  sqcRYGate(q, 1.4124824848683661, 7);
  sqcRZGate(q, -2.0448976859830212, 7);
  sqcRYGate(q, 2.3999109760711232, 8);
  sqcRZGate(q, 2.7334395066012176, 8);
  sqcRYGate(q, 1.1321585949859776, 9);
  sqcRZGate(q, -0.688895022908456, 9);
  sqcRYGate(q, 1.0947480496592328, 10);
  sqcRZGate(q, -2.507011157956204, 10);
  sqcRYGate(q, -1.9451490043034525, 11);
  sqcRZGate(q, -2.438181470938435, 11);

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
