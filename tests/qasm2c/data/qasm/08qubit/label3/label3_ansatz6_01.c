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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -1.5974186590730444, 0);
  sqcRYGate(q, -2.505841973326925, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2604824554444094, 0);
  sqcRYGate(q, -2.077831061134155, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7161588137396655, 1);
  sqcRYGate(q, 1.5816502657296372, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8745848145215502, 1);
  sqcRYGate(q, 1.5769611660767973, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2734000180637466, 2);
  sqcRYGate(q, 0.0029238853136712706, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5829012185063829, 2);
  sqcRYGate(q, -2.551121095992738, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.488650657128456, 3);
  sqcRYGate(q, -0.004103887050582954, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5715754189992808, 3);
  sqcRYGate(q, -2.5410396010129657, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.757751160162852, 4);
  sqcRYGate(q, 0.0021445454012445036, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5714100157842212, 4);
  sqcRYGate(q, 2.711361369743818, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6972813570736011, 5);
  sqcRYGate(q, 0.0860949691663053, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5381278887661365, 5);
  sqcRYGate(q, 2.7527568560662417, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8458937399883824, 6);
  sqcRYGate(q, -1.7028327778471741, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.05825864786387566, 6);
  sqcRYGate(q, 2.091190833432025, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.2522737820290059, 0);
  sqcRYGate(q, 2.168277921499005, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9862916574826626, 0);
  sqcRYGate(q, -1.4828844317659697, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.235639534708402, 1);
  sqcRYGate(q, -0.7965473325346102, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1092514039440236, 1);
  sqcRYGate(q, -0.01553553690510272, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8499057090813311, 2);
  sqcRYGate(q, 2.0633051276387757, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.43627554495546156, 2);
  sqcRYGate(q, 1.3395251250142297, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6676378322586105, 3);
  sqcRYGate(q, -0.9635346574792184, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0032781629357235, 3);
  sqcRYGate(q, -2.8255957921544637, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.04645490999677, 4);
  sqcRYGate(q, 0.5461481032370825, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0608566680029017, 4);
  sqcRYGate(q, 0.8176134131399078, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5310969476097118, 5);
  sqcRYGate(q, -1.3269175981626258, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5078852097440336, 5);
  sqcRYGate(q, 0.3048427116601413, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6174590618330569, 6);
  sqcRYGate(q, -1.4452006576484606, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3954123454341556, 6);
  sqcRYGate(q, -2.4886778176721713, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1016044493526183, 0);
  sqcRYGate(q, -1.479642389399389, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2388384405521622, 0);
  sqcRYGate(q, -1.497413124834563, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5051337042370294, 1);
  sqcRYGate(q, -3.011360441906192, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.613960930857667, 1);
  sqcRYGate(q, -0.005171742853038662, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6142627573527155, 2);
  sqcRYGate(q, 1.043863388661988, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5798004118426237, 2);
  sqcRYGate(q, -0.9013367511606418, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.571933914759449, 3);
  sqcRYGate(q, -3.1170688669531756, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5904856515472974, 3);
  sqcRYGate(q, -2.9073704186369844, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.566196070263979, 4);
  sqcRYGate(q, 3.019207091228805, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5739335156430696, 4);
  sqcRYGate(q, 1.4154220645209241, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.552167744491956, 5);
  sqcRYGate(q, -1.725516155039763, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5720641773130781, 5);
  sqcRYGate(q, -1.4415286387324846, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0006951461758317734, 6);
  sqcRYGate(q, 1.0301240322638607, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.002798877093149521, 6);
  sqcRYGate(q, 1.567543039317065, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3532900033912765, 0);
  sqcRYGate(q, 1.1997178579306444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.233701040093552, 0);
  sqcRYGate(q, -0.06108436262502224, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6724635928546938, 1);
  sqcRYGate(q, -3.1012901007430824, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5705777406500472, 1);
  sqcRYGate(q, -1.5609507591956415, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0560784070687435, 2);
  sqcRYGate(q, 2.9945786979931457, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.127176413668655, 2);
  sqcRYGate(q, -1.5706574063725933, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4202065490849387, 3);
  sqcRYGate(q, 1.561242446854319, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5718274471519387, 3);
  sqcRYGate(q, 1.5703874730766314, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.168867126077501, 4);
  sqcRYGate(q, -1.526400776012629, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1257483392170125, 4);
  sqcRYGate(q, -3.0328821894798352e-05, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0951421920942868, 5);
  sqcRYGate(q, 1.5991041982663452, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.456318326937157, 5);
  sqcRYGate(q, -1.3641609387517062, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0037488390522630866, 6);
  sqcRYGate(q, -2.6441026966167867, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5698627069570543, 6);
  sqcRYGate(q, 1.5706581144382694, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2440499372012406, 0);
  sqcRYGate(q, -2.8850316168576975, 1);
  sqcRYGate(q, 0.2516382844087319, 2);
  sqcRYGate(q, -1.3198781619260105, 3);
  sqcRYGate(q, -1.9148717127164723, 4);
  sqcRYGate(q, -2.8893293465407353, 5);
  sqcRYGate(q, 0.27216458845580394, 6);
  sqcRYGate(q, -1.3179412829936044, 7);

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
