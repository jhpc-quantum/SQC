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

  sqcRYGate(q, 2.300298234924614, 0);
  sqcRZGate(q, -0.6620523077274966, 0);
  sqcRYGate(q, 0.41653424330294797, 1);
  sqcRZGate(q, 0.39198217642031397, 1);
  sqcRYGate(q, 3.069926720794988, 2);
  sqcRZGate(q, 2.821724019145039, 2);
  sqcRYGate(q, 1.0145764638452837, 3);
  sqcRZGate(q, -2.49536971351638, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.196123190256311, 0);
  sqcRZGate(q, 1.0123261676867257, 0);
  sqcRYGate(q, 2.145263971852885, 1);
  sqcRZGate(q, 0.8100287877050504, 1);
  sqcRYGate(q, 0.7477133463845513, 2);
  sqcRZGate(q, -0.06643246598593726, 2);
  sqcRYGate(q, 2.2570321911606963, 3);
  sqcRZGate(q, 0.4806538672881074, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.616716643307041, 0);
  sqcRZGate(q, -2.4927726550235305, 0);
  sqcRYGate(q, 2.189089843482365, 1);
  sqcRZGate(q, 1.655868621674159, 1);
  sqcRYGate(q, -2.5934397868272097, 2);
  sqcRZGate(q, -2.3812886076768556, 2);
  sqcRYGate(q, -0.14702207475113035, 3);
  sqcRZGate(q, 0.2581644542478063, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.006478757767234194, 0);
  sqcRZGate(q, 1.649428531982519, 0);
  sqcRYGate(q, 2.388171735120798, 1);
  sqcRZGate(q, 0.33573959640667544, 1);
  sqcRYGate(q, 2.2679236120789286, 2);
  sqcRZGate(q, -1.4503795894305127, 2);
  sqcRYGate(q, -2.3344092894091824, 3);
  sqcRZGate(q, 0.8269085506104628, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.9956523929466465, 0);
  sqcRZGate(q, 1.4201595928032704, 0);
  sqcRYGate(q, 2.9365904175454385, 1);
  sqcRZGate(q, 2.6429548129368454, 1);
  sqcRYGate(q, -2.6152239038156453, 2);
  sqcRZGate(q, -2.765242673597054, 2);
  sqcRYGate(q, -0.15347088547088372, 3);
  sqcRZGate(q, 1.3595460977127283, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.8336413391568057, 0);
  sqcRZGate(q, 0.05099535428596624, 0);
  sqcRYGate(q, -2.32922314230559, 1);
  sqcRZGate(q, -1.0778961144801578, 1);
  sqcRYGate(q, -1.8414019572209566, 2);
  sqcRZGate(q, 1.435040115027545, 2);
  sqcRYGate(q, -1.119650111438216, 3);
  sqcRZGate(q, 0.868007258873214, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.70987742711095, 0);
  sqcRZGate(q, -0.9768069600925228, 0);
  sqcRYGate(q, -1.1108450795782354, 1);
  sqcRZGate(q, -0.058786954288110316, 1);
  sqcRYGate(q, -2.8244135486582516, 2);
  sqcRZGate(q, -1.0356367121955976, 2);
  sqcRYGate(q, -1.055029072803373, 3);
  sqcRZGate(q, -3.026850449994651, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.8965227630428192, 0);
  sqcRZGate(q, 0.6801717396273341, 0);
  sqcRYGate(q, 0.29350063664377046, 1);
  sqcRZGate(q, -1.73346678879502, 1);
  sqcRYGate(q, -0.19794881455683908, 2);
  sqcRZGate(q, -0.03280573767087602, 2);
  sqcRYGate(q, -0.46388458310627717, 3);
  sqcRZGate(q, 0.4246436166489643, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.31775077803117036, 0);
  sqcRZGate(q, 1.8678581121024243, 0);
  sqcRYGate(q, -1.5711713117192216, 1);
  sqcRZGate(q, 1.5493729259075133, 1);
  sqcRYGate(q, 0.013977129380453883, 2);
  sqcRZGate(q, -1.473827299942653, 2);
  sqcRYGate(q, 2.305654907158225, 3);
  sqcRZGate(q, -1.4629456132739789, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.430439025782864, 0);
  sqcRZGate(q, -2.9219191412066667, 0);
  sqcRYGate(q, -0.2095165876356635, 1);
  sqcRZGate(q, -0.07614042914743387, 1);
  sqcRYGate(q, 2.5608570010103575, 2);
  sqcRZGate(q, 2.7654890474348215, 2);
  sqcRYGate(q, -0.9419825399040427, 3);
  sqcRZGate(q, -1.3952128111083844, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.8064757616238607, 0);
  sqcRZGate(q, 2.2946035631703667, 0);
  sqcRYGate(q, -0.27009097030196827, 1);
  sqcRZGate(q, -0.9681291625740381, 1);
  sqcRYGate(q, 0.3323322301187765, 2);
  sqcRZGate(q, -0.6902831026101329, 2);
  sqcRYGate(q, 2.842548996467989, 3);
  sqcRZGate(q, 0.6084467024277078, 3);

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
