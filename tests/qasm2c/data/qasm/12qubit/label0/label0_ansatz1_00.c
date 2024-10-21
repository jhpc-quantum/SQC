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

  sqcRYGate(q, 1.5655907736085082, 0);
  sqcRZGate(q, -0.7805843933964932, 0);
  sqcRYGate(q, 1.3028015339602121, 1);
  sqcRZGate(q, 1.18618166771941, 1);
  sqcRYGate(q, 0.05292159171779319, 2);
  sqcRZGate(q, -3.086996358444942, 2);
  sqcRYGate(q, 1.0627544192990763, 3);
  sqcRZGate(q, -0.018462101374227456, 3);
  sqcRYGate(q, -1.53848967047319, 4);
  sqcRZGate(q, -0.0009265423482522905, 4);
  sqcRYGate(q, 2.7057861439296467, 5);
  sqcRZGate(q, 0.0663045484021403, 5);
  sqcRYGate(q, 2.069679552482846, 6);
  sqcRZGate(q, 3.1358914675728333, 6);
  sqcRYGate(q, -2.8661479482412417, 7);
  sqcRZGate(q, 2.9335996577119463, 7);
  sqcRYGate(q, -1.5403089038186515, 8);
  sqcRZGate(q, -2.9269869161313626, 8);
  sqcRYGate(q, 1.5751829277044473, 9);
  sqcRZGate(q, 0.24266273382111128, 9);
  sqcRYGate(q, 3.099866354780987, 10);
  sqcRZGate(q, 0.6155540901920261, 10);
  sqcRYGate(q, 0.03154611555292344, 11);
  sqcRZGate(q, -1.2633456857256151, 11);
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
  sqcRYGate(q, 1.3459078967192433, 0);
  sqcRZGate(q, 1.2922230259638987, 0);
  sqcRYGate(q, -0.9811560697845677, 1);
  sqcRZGate(q, 0.04416983123098599, 1);
  sqcRYGate(q, -0.28650839266712147, 2);
  sqcRZGate(q, -0.035735394075202535, 2);
  sqcRYGate(q, -2.5498028873843706, 3);
  sqcRZGate(q, -3.1027457181830056, 3);
  sqcRYGate(q, -0.6462923140620639, 4);
  sqcRZGate(q, 0.004046071664226324, 4);
  sqcRYGate(q, -0.06771798224316261, 5);
  sqcRZGate(q, -0.009203040278539429, 5);
  sqcRYGate(q, -1.6460112143426864, 6);
  sqcRZGate(q, 3.105574970411243, 6);
  sqcRYGate(q, -3.084381172059687, 7);
  sqcRZGate(q, 0.17311478090053178, 7);
  sqcRYGate(q, -1.1861052116573256, 8);
  sqcRZGate(q, 0.16886649295138823, 8);
  sqcRYGate(q, -1.9354081074754843, 9);
  sqcRZGate(q, 0.7017166331291991, 9);
  sqcRYGate(q, 1.6565446413308433, 10);
  sqcRZGate(q, 1.3121686138051276, 10);
  sqcRYGate(q, -3.1371159780381532, 11);
  sqcRZGate(q, 0.49295156816397095, 11);
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
  sqcRYGate(q, 1.4533282762737691, 0);
  sqcRZGate(q, -3.0982192112302567, 0);
  sqcRYGate(q, 1.9435489988409838, 1);
  sqcRZGate(q, 3.12221073353828, 1);
  sqcRYGate(q, -2.9341685349850932, 2);
  sqcRZGate(q, 3.1141144530955858, 2);
  sqcRYGate(q, -0.20098927552355225, 3);
  sqcRZGate(q, -3.055202841232315, 3);
  sqcRYGate(q, 1.6532810137019258, 4);
  sqcRZGate(q, 3.1362515839148677, 4);
  sqcRYGate(q, -0.25017669647306195, 5);
  sqcRZGate(q, -0.026606216202433867, 5);
  sqcRYGate(q, -1.1130204093567286, 6);
  sqcRZGate(q, 2.96761843720685, 6);
  sqcRYGate(q, -0.2378836108590736, 7);
  sqcRZGate(q, 0.018404231090666023, 7);
  sqcRYGate(q, -1.3128255058197777, 8);
  sqcRZGate(q, -0.44995654809280783, 8);
  sqcRYGate(q, -3.132162057082077, 9);
  sqcRZGate(q, 0.654542751816381, 9);
  sqcRYGate(q, -1.263145564764376, 10);
  sqcRZGate(q, -1.8849583107799353, 10);
  sqcRYGate(q, -2.8900754984567243, 11);
  sqcRZGate(q, 3.1370117049547286, 11);
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
  sqcRYGate(q, -1.5807533305730106, 0);
  sqcRZGate(q, -3.1407523074657484, 0);
  sqcRYGate(q, 1.8177273349354255, 1);
  sqcRZGate(q, 0.0025437101140428683, 1);
  sqcRYGate(q, -1.4073763024280348, 2);
  sqcRZGate(q, -3.140203493799893, 2);
  sqcRYGate(q, 0.22823171264385067, 3);
  sqcRZGate(q, -0.13451673002837253, 3);
  sqcRYGate(q, 1.479486865371746, 4);
  sqcRZGate(q, -0.0023458047254568304, 4);
  sqcRYGate(q, 1.908874669072591, 5);
  sqcRZGate(q, 0.001378017075602145, 5);
  sqcRYGate(q, -3.0234648435648968, 6);
  sqcRZGate(q, -0.19549215148762755, 6);
  sqcRYGate(q, 1.48872672751481, 7);
  sqcRZGate(q, 3.0946780067555077, 7);
  sqcRYGate(q, -1.6122684582116937, 8);
  sqcRZGate(q, -0.017238951656853647, 8);
  sqcRYGate(q, 2.7782909094083883, 9);
  sqcRZGate(q, -1.6499057845114837, 9);
  sqcRYGate(q, 3.129019190824692, 10);
  sqcRZGate(q, 2.752799603765542, 10);
  sqcRYGate(q, 1.575797307213981, 11);
  sqcRZGate(q, -3.1324553998866502, 11);

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
