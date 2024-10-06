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

  sqcRYGate(q, 0.060133397190189855, 0);
  sqcRYGate(q, 1.7655806918615422, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.963053158188578, 0);
  sqcRYGate(q, -0.6767655360138587, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0698253537733549, 1);
  sqcRYGate(q, 0.2129788957180221, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7679353223558096, 1);
  sqcRYGate(q, 1.5293475900391869, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.946680411649725, 2);
  sqcRYGate(q, -2.0941859477237, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.487357219349049, 2);
  sqcRYGate(q, 2.981807083021532, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.25492664456493763, 0);
  sqcRYGate(q, 1.3375059893129437, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4189139628502994, 0);
  sqcRYGate(q, -2.3298499056634845, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2444786990879733, 1);
  sqcRYGate(q, -2.325867331225072, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7370179894515285, 1);
  sqcRYGate(q, 1.6303416508274442, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7263401077749534, 2);
  sqcRYGate(q, -0.3335504220255741, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.10287343779561957, 2);
  sqcRYGate(q, -1.4985360441159572, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9898210356178557, 0);
  sqcRYGate(q, 1.6880437173145113, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0988501521046734, 0);
  sqcRYGate(q, -2.367986305153347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0234796108801567, 1);
  sqcRYGate(q, 1.9126891736926497, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5840886673938879, 1);
  sqcRYGate(q, 0.8638526589791561, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6604436451060085, 2);
  sqcRYGate(q, 1.2178317324667418, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2597307532788042, 2);
  sqcRYGate(q, 0.47458045224697676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8455838837722249, 0);
  sqcRYGate(q, -1.7219493608543985, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.720498954629107, 0);
  sqcRYGate(q, -1.380604165625433, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4631522830174193, 1);
  sqcRYGate(q, -2.458493427301052, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.06739435637698765, 1);
  sqcRYGate(q, 0.5206299642043639, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8975171418470768, 2);
  sqcRYGate(q, 1.735378646188459, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.32047681612445705, 2);
  sqcRYGate(q, -2.378503442253427, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8663898322962393, 0);
  sqcRYGate(q, -2.8852138561873226, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.30286994507023374, 0);
  sqcRYGate(q, -1.7122978553497141, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.885562588606498, 1);
  sqcRYGate(q, -2.668324608430882, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.185223190948724, 1);
  sqcRYGate(q, -1.40137379068057, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0982616775804726, 2);
  sqcRYGate(q, 1.742066032713728, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7926910609434658, 2);
  sqcRYGate(q, 0.5836690447352098, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9051895978558591, 0);
  sqcRYGate(q, 0.7567190425499576, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.33571848160051715, 0);
  sqcRYGate(q, 2.6622460324443686, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4095704896173631, 1);
  sqcRYGate(q, 2.0813552468636383, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4033352146104905, 1);
  sqcRYGate(q, -0.5503618259021595, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.37573174372354456, 2);
  sqcRYGate(q, -2.8583325122370007, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.125206813241517, 2);
  sqcRYGate(q, 0.20685902179870116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9350526952984066, 0);
  sqcRYGate(q, -1.9867972154815066, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2741680894290141, 0);
  sqcRYGate(q, -0.1971505889869718, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8555771960512039, 1);
  sqcRYGate(q, 1.0599340722070218, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4823936422951567, 1);
  sqcRYGate(q, -1.088168507561333, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6746964844388375, 2);
  sqcRYGate(q, 1.553576255336895, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1565849709088958, 2);
  sqcRYGate(q, -0.31075886450997814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5888826337476756, 0);
  sqcRYGate(q, 0.06295043421069497, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4607406700468202, 0);
  sqcRYGate(q, -2.6638499825736304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6324934829817845, 1);
  sqcRYGate(q, 2.727090576268827, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.531948085189411, 1);
  sqcRYGate(q, 2.5861851659494848, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.785247618352191, 2);
  sqcRYGate(q, 2.7662301098110618, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4627770068631205, 2);
  sqcRYGate(q, 0.02525058674804506, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3439937519493528, 0);
  sqcRYGate(q, -0.20334198566879103, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1781037884097407, 0);
  sqcRYGate(q, 1.6717663902663649, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8229021098403075, 1);
  sqcRYGate(q, 1.0561549805425035, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8821131515612837, 1);
  sqcRYGate(q, -0.7756139878702879, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5172454682854548, 2);
  sqcRYGate(q, -0.45909488465246273, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3193629971781543, 2);
  sqcRYGate(q, 2.292353372607351, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2363013016703404, 0);
  sqcRYGate(q, -2.668559130231496, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3770648575457818, 0);
  sqcRYGate(q, 0.7408214290589719, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3553842626371715, 1);
  sqcRYGate(q, 1.5577427929428227, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.033392140897077205, 1);
  sqcRYGate(q, -2.4218408118359935, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2896686554084358, 2);
  sqcRYGate(q, -2.639005791911106, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.32029035342784784, 2);
  sqcRYGate(q, 2.3255802987411958, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2514058635575198, 0);
  sqcRYGate(q, -1.704441816016001, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.980579562669063, 0);
  sqcRYGate(q, -1.2007798910715204, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0795574781954969, 1);
  sqcRYGate(q, -0.8742823494868164, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7556578514529475, 1);
  sqcRYGate(q, -1.9516594351219485, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.288373535837564, 2);
  sqcRYGate(q, 1.3140502958277287, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7310029400268756, 2);
  sqcRYGate(q, 2.139076593869909, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.180684521414657, 0);
  sqcRYGate(q, 2.7782606044132523, 1);
  sqcRYGate(q, -2.1373279140760757, 2);
  sqcRYGate(q, 0.7439292875211976, 3);

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
