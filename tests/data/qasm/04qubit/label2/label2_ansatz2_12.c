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

  sqcRYGate(q, -0.9025526028551764, 0);
  sqcRZGate(q, -0.05600902582129165, 0);
  sqcRYGate(q, 1.0278890832778917, 1);
  sqcRZGate(q, -2.543846760075715, 1);
  sqcRYGate(q, 0.7967735273770131, 2);
  sqcRZGate(q, 1.3809703319814535, 2);
  sqcRYGate(q, -1.8768941852225325, 3);
  sqcRZGate(q, -1.6525074708270537, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.7747686935141989, 0);
  sqcRZGate(q, 2.93105195476863, 0);
  sqcRYGate(q, -1.0622705517167592, 1);
  sqcRZGate(q, 1.3950207614441856, 1);
  sqcRYGate(q, -2.5452516618761982, 2);
  sqcRZGate(q, 2.7234812841233795, 2);
  sqcRYGate(q, 0.6307118367339541, 3);
  sqcRZGate(q, -1.6600486019743603, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.108751623096702, 0);
  sqcRZGate(q, -2.967086505783524, 0);
  sqcRYGate(q, -2.414968497508822, 1);
  sqcRZGate(q, 2.734716066276918, 1);
  sqcRYGate(q, -0.24007640783680007, 2);
  sqcRZGate(q, -2.578127317958404, 2);
  sqcRYGate(q, 2.5806079161286157, 3);
  sqcRZGate(q, -2.6313554743624796, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.2386299706764843, 0);
  sqcRZGate(q, -1.6859185556887288, 0);
  sqcRYGate(q, -2.9143064681312785, 1);
  sqcRZGate(q, 1.9683244853350468, 1);
  sqcRYGate(q, -1.2136181407041562, 2);
  sqcRZGate(q, -3.134258366528382, 2);
  sqcRYGate(q, 1.2268836803593883, 3);
  sqcRZGate(q, 2.3010734264447006, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.8021191364163238, 0);
  sqcRZGate(q, 2.7150650238745584, 0);
  sqcRYGate(q, 0.8896406159510909, 1);
  sqcRZGate(q, -0.8874671904060891, 1);
  sqcRYGate(q, -1.731684727769954, 2);
  sqcRZGate(q, -0.3702760803670384, 2);
  sqcRYGate(q, -0.1425029251331944, 3);
  sqcRZGate(q, -1.3339827337085381, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.9618401226426476, 0);
  sqcRZGate(q, 3.0085126660449117, 0);
  sqcRYGate(q, 2.438163702365729, 1);
  sqcRZGate(q, 2.7788449706878864, 1);
  sqcRYGate(q, -2.574324689677634, 2);
  sqcRZGate(q, 2.9224279913132056, 2);
  sqcRYGate(q, -2.80811870037477, 3);
  sqcRZGate(q, -0.805312255462491, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.8445322843146466, 0);
  sqcRZGate(q, 2.4994157090897664, 0);
  sqcRYGate(q, -2.0841818806321557, 1);
  sqcRZGate(q, 2.471518599058114, 1);
  sqcRYGate(q, -2.8697613177976917, 2);
  sqcRZGate(q, -0.5570493360898876, 2);
  sqcRYGate(q, 1.9144991820047803, 3);
  sqcRZGate(q, -1.9248690293079296, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.2122036865035613, 0);
  sqcRZGate(q, -0.8836043866947597, 0);
  sqcRYGate(q, 0.7717899026269963, 1);
  sqcRZGate(q, -2.159025923899297, 1);
  sqcRYGate(q, -2.884787808532449, 2);
  sqcRZGate(q, 1.535761312188102, 2);
  sqcRYGate(q, 1.8011118872118743, 3);
  sqcRZGate(q, 2.391543673368784, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.7475373110988663, 0);
  sqcRZGate(q, 1.8122441805103597, 0);
  sqcRYGate(q, -1.5082253446618363, 1);
  sqcRZGate(q, 0.3019664169967564, 1);
  sqcRYGate(q, -2.32947079420921, 2);
  sqcRZGate(q, -0.682581171999896, 2);
  sqcRYGate(q, -2.667155533741233, 3);
  sqcRZGate(q, 1.167650913921836, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.3903406932846725, 0);
  sqcRZGate(q, 0.06555246676126192, 0);
  sqcRYGate(q, -1.9543254602448328, 1);
  sqcRZGate(q, 0.953683492186582, 1);
  sqcRYGate(q, 1.0746355360907032, 2);
  sqcRZGate(q, 1.4019359604480361, 2);
  sqcRYGate(q, 2.7789192768207642, 3);
  sqcRZGate(q, 2.86782756882591, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.5117477088588075, 0);
  sqcRZGate(q, 1.189019727496052, 0);
  sqcRYGate(q, 0.7400898876331579, 1);
  sqcRZGate(q, -0.7696160667949606, 1);
  sqcRYGate(q, 2.0203044033026467, 2);
  sqcRZGate(q, -1.1257458616230809, 2);
  sqcRYGate(q, 0.5469492797806573, 3);
  sqcRZGate(q, -2.736173326135144, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.7403362584422557, 0);
  sqcRZGate(q, 2.4757123158704775, 0);
  sqcRYGate(q, 0.5341261254884725, 1);
  sqcRZGate(q, -1.8241312454712721, 1);
  sqcRYGate(q, 0.29981893139550136, 2);
  sqcRZGate(q, 3.068328039594141, 2);
  sqcRYGate(q, 1.352789370168421, 3);
  sqcRZGate(q, -2.237366158089781, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.4360925006575864, 0);
  sqcRZGate(q, 2.474105105241403, 0);
  sqcRYGate(q, 1.704009277337676, 1);
  sqcRZGate(q, -0.6125694646150671, 1);
  sqcRYGate(q, -1.9940828325266051, 2);
  sqcRZGate(q, 2.802139079383867, 2);
  sqcRYGate(q, -0.8663889343241297, 3);
  sqcRZGate(q, -1.480702236773581, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 3.076677835513602, 0);
  sqcRZGate(q, 2.707831940362241, 0);
  sqcRYGate(q, -1.6733948956059006, 1);
  sqcRZGate(q, 1.5512874763744886, 1);
  sqcRYGate(q, -3.072072352337227, 2);
  sqcRZGate(q, -2.1074102643218167, 2);
  sqcRYGate(q, -2.2204838918285335, 3);
  sqcRZGate(q, -0.8147423348801022, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.237468281246594, 0);
  sqcRZGate(q, -0.6898636324276709, 0);
  sqcRYGate(q, 0.5293386861222122, 1);
  sqcRZGate(q, 2.302220113708263, 1);
  sqcRYGate(q, -2.761354432872003, 2);
  sqcRZGate(q, 1.2642888564094195, 2);
  sqcRYGate(q, -2.690368536219295, 3);
  sqcRZGate(q, -1.0961836015797575, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.816449061875745, 0);
  sqcRZGate(q, -2.9805319991112844, 0);
  sqcRYGate(q, 3.0574554253479436, 1);
  sqcRZGate(q, 1.1474281736896845, 1);
  sqcRYGate(q, 3.0691331494414675, 2);
  sqcRZGate(q, -1.092438776437139, 2);
  sqcRYGate(q, -0.045026873286690076, 3);
  sqcRZGate(q, -0.8236949741266805, 3);

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
