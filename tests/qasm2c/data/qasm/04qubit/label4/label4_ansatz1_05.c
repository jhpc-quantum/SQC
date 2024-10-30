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

  sqcRYGate(q, 1.628604549899018, 0);
  sqcRZGate(q, -2.0396778886781792, 0);
  sqcRYGate(q, 0.11226894522447228, 1);
  sqcRZGate(q, -0.9175850252556731, 1);
  sqcRYGate(q, -0.1908960645990172, 2);
  sqcRZGate(q, 2.7515305392056986, 2);
  sqcRYGate(q, 0.24234769064233072, 3);
  sqcRZGate(q, 0.5900320522916997, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.864947932954932, 0);
  sqcRZGate(q, 1.1929410064076817, 0);
  sqcRYGate(q, -2.103186742749169, 1);
  sqcRZGate(q, -2.4123198751906023, 1);
  sqcRYGate(q, -2.974809164595142, 2);
  sqcRZGate(q, 2.2227060833574437, 2);
  sqcRYGate(q, -1.2593150102046877, 3);
  sqcRZGate(q, -0.7199342473468803, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.2772926809262506, 0);
  sqcRZGate(q, -0.6153450392682052, 0);
  sqcRYGate(q, 0.2007485743994435, 1);
  sqcRZGate(q, -0.6613375595144593, 1);
  sqcRYGate(q, 1.0057866369707842, 2);
  sqcRZGate(q, -2.766742242931971, 2);
  sqcRYGate(q, 1.8241683150887127, 3);
  sqcRZGate(q, -2.6675862112588047, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4335441751000393, 0);
  sqcRZGate(q, 0.43294496544565947, 0);
  sqcRYGate(q, -0.4582919028518725, 1);
  sqcRZGate(q, 0.6905359443012298, 1);
  sqcRYGate(q, -2.234194096499232, 2);
  sqcRZGate(q, 1.3024811364424538, 2);
  sqcRYGate(q, -2.7572565015654193, 3);
  sqcRZGate(q, 0.02369570439085944, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9199215911007097, 0);
  sqcRZGate(q, -0.10042509222036047, 0);
  sqcRYGate(q, -0.16604076090469277, 1);
  sqcRZGate(q, 2.3541450649818167, 1);
  sqcRYGate(q, 0.7914959311229426, 2);
  sqcRZGate(q, -1.7310317701419684, 2);
  sqcRYGate(q, -1.2893003206870457, 3);
  sqcRZGate(q, -1.370353265816005, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1698743490333805, 0);
  sqcRZGate(q, 2.887099761683865, 0);
  sqcRYGate(q, 2.220206149891528, 1);
  sqcRZGate(q, 1.5742970091806836, 1);
  sqcRYGate(q, 1.0243717066206879, 2);
  sqcRZGate(q, -2.0321571618191117, 2);
  sqcRYGate(q, -1.320789430110279, 3);
  sqcRZGate(q, 2.8912975240614287, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.7801270574153927, 0);
  sqcRZGate(q, -2.372587194815924, 0);
  sqcRYGate(q, 1.498001171762879, 1);
  sqcRZGate(q, -1.571699499212531, 1);
  sqcRYGate(q, 2.3311882955218355, 2);
  sqcRZGate(q, -1.3583906129391385, 2);
  sqcRYGate(q, 1.5576567028836275, 3);
  sqcRZGate(q, -0.25657513498527346, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.039612216165165, 0);
  sqcRZGate(q, 0.5523206682052377, 0);
  sqcRYGate(q, -1.9667997404765827, 1);
  sqcRZGate(q, 1.2195365959015625, 1);
  sqcRYGate(q, -2.6959845611733937, 2);
  sqcRZGate(q, 2.838626618646172, 2);
  sqcRYGate(q, 2.009693283424224, 3);
  sqcRZGate(q, -0.5585776435080695, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.468552681737841, 0);
  sqcRZGate(q, -0.19298904459374763, 0);
  sqcRYGate(q, 3.1033152026319635, 1);
  sqcRZGate(q, 1.578353609340354, 1);
  sqcRYGate(q, -2.653357557908983, 2);
  sqcRZGate(q, -1.3533908967334423, 2);
  sqcRYGate(q, -0.9892190174885229, 3);
  sqcRZGate(q, -1.3961323996183002, 3);

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
