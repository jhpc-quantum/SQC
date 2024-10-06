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

  sqcRYGate(q, 0.8008383534874529, 0);
  sqcRYGate(q, -3.1013535667673264, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2271774030486309, 0);
  sqcRYGate(q, -0.13670834569393978, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5997846904285469, 2);
  sqcRYGate(q, -0.10061284365185763, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.769381126032367, 2);
  sqcRYGate(q, -2.7787922706753436, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.089808473868076, 4);
  sqcRYGate(q, -0.4942876100599314, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0870039697001572, 4);
  sqcRYGate(q, 2.059514364279902, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7330651928391037, 6);
  sqcRYGate(q, -1.892607185337622, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9708385140568396, 6);
  sqcRYGate(q, -2.724842525606863, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0747722623045495, 0);
  sqcRYGate(q, -1.5814867624679398, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7090016324496613, 0);
  sqcRYGate(q, 2.482703589259348, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.010094465883633, 2);
  sqcRYGate(q, 2.6740780287233115, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.6774752052178261, 2);
  sqcRYGate(q, -1.5751188919205092, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.26405859001585996, 4);
  sqcRYGate(q, 0.807213297666237, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.020008198848400646, 4);
  sqcRYGate(q, 2.8904372429651013, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.0153412234682895, 1);
  sqcRYGate(q, 0.06451399901464772, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6888058631861629, 1);
  sqcRYGate(q, 1.6034347776837772, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4507054413633371, 3);
  sqcRYGate(q, -0.39303250419148567, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.8444833726027254, 3);
  sqcRYGate(q, -3.125171032440865, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.282508402220841, 5);
  sqcRYGate(q, 1.3711118685327977, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.33028220651214024, 5);
  sqcRYGate(q, 1.5184844224771146, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.3962358959300008, 0);
  sqcRYGate(q, -3.1120790167186994, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.015172872461850062, 0);
  sqcRYGate(q, -1.0373494359820787, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.20398501483418663, 2);
  sqcRYGate(q, -0.05706767228129195, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6046897686666597, 2);
  sqcRYGate(q, 1.6010082866492088, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.023290543596672, 4);
  sqcRYGate(q, -1.5712588333773185, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5874201501156238, 4);
  sqcRYGate(q, 3.086956864095382, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2496521319358236, 6);
  sqcRYGate(q, -1.9489958309067266, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.02569472339907189, 6);
  sqcRYGate(q, -1.306713049889412, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.776702570620265, 0);
  sqcRYGate(q, 2.9733702117342578, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.34349697416754665, 0);
  sqcRYGate(q, 0.5804719210896115, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7986514856573024, 2);
  sqcRYGate(q, 1.7373521718126383, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.136456499904178, 2);
  sqcRYGate(q, 1.5487391499104668, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.3068779942157978, 4);
  sqcRYGate(q, 1.5700251522994577, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5461269980393508, 4);
  sqcRYGate(q, 0.25937881318733513, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.20265307278715738, 1);
  sqcRYGate(q, -2.951648259611911, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.42709960502990274, 1);
  sqcRYGate(q, 1.5787521419332387, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.0006723642444022378, 3);
  sqcRYGate(q, 2.7902961892422478, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.033637320983304, 3);
  sqcRYGate(q, -2.890741317439922, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.3693539512681276, 5);
  sqcRYGate(q, -2.7191820543955036, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.006871877266592676, 5);
  sqcRYGate(q, 1.5689215833964267, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5732444355344644, 0);
  sqcRYGate(q, 0.037289391009043264, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.89077464364609, 0);
  sqcRYGate(q, 2.097514616810579, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.09208906219098623, 2);
  sqcRYGate(q, -3.1305410574550208, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.051328204688420996, 2);
  sqcRYGate(q, -0.0029198612443566887, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5381521951744217, 4);
  sqcRYGate(q, 2.8571271736634376, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5491477071501327, 4);
  sqcRYGate(q, 2.9982667340494293, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.589157249873507, 6);
  sqcRYGate(q, -2.672316206650526, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9227566752067817, 6);
  sqcRYGate(q, -1.664830334931688, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4879170894350606, 0);
  sqcRYGate(q, 1.721341147602577, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.47339749153102, 0);
  sqcRYGate(q, -3.033168125227978, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1216527280411768, 2);
  sqcRYGate(q, 3.0925302903065046, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.791322400262913, 2);
  sqcRYGate(q, 0.1980120828123155, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.6304862305446195, 4);
  sqcRYGate(q, 0.08615461775773436, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.558150760168725, 4);
  sqcRYGate(q, -1.5755896369820857, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.9935781575900675, 1);
  sqcRYGate(q, 2.3382378683335725, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.13421059583443995, 1);
  sqcRYGate(q, -3.066187219273813, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7735813158091212, 3);
  sqcRYGate(q, -3.1175604713482725, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.36016565610436135, 3);
  sqcRYGate(q, 2.770596241851691, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.5405845302476207, 5);
  sqcRYGate(q, 1.6044298758918942, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.671331252037621, 5);
  sqcRYGate(q, -1.6391806064828263, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.7591659838643148, 0);
  sqcRYGate(q, 2.399542676017161, 1);
  sqcRYGate(q, -3.0006823890271814, 2);
  sqcRYGate(q, 1.6939018680995308, 3);
  sqcRYGate(q, -3.016751480021932, 4);
  sqcRYGate(q, -1.4576345537201156, 5);
  sqcRYGate(q, 1.6940365566590785, 6);
  sqcRYGate(q, 0.10159027147500765, 7);

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
