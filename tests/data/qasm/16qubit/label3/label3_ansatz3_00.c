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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 5.656362988756673e-06, 0);
  sqcRZGate(q, -1.5314771823708409, 0);
  sqcRYGate(q, 2.772530402852355, 1);
  sqcRZGate(q, -1.2468387218195045, 1);
  sqcRYGate(q, 0.08050631635292316, 2);
  sqcRZGate(q, 1.8836455352255241, 2);
  sqcRYGate(q, -1.5708031066067203, 3);
  sqcRZGate(q, -1.5707982027953096, 3);
  sqcRYGate(q, -3.122200727879358, 4);
  sqcRZGate(q, 1.5862524064629002, 4);
  sqcRYGate(q, -2.7042653003531583, 5);
  sqcRZGate(q, 0.07382651142270902, 5);
  sqcRYGate(q, 1.5806351370418046, 6);
  sqcRZGate(q, 1.5193303017355024, 6);
  sqcRYGate(q, 1.5707785005123713, 7);
  sqcRZGate(q, -1.570779588226313, 7);
  sqcRYGate(q, 3.137995892497673, 8);
  sqcRZGate(q, 0.865371334106398, 8);
  sqcRYGate(q, -2.805959773732135, 9);
  sqcRZGate(q, 0.0017440673090609853, 9);
  sqcRYGate(q, 3.0496415737849922, 10);
  sqcRZGate(q, -2.8081709038590645, 10);
  sqcRYGate(q, -1.5708056204589624, 11);
  sqcRZGate(q, -1.5708721319284826, 11);
  sqcRYGate(q, -0.06754187803969014, 12);
  sqcRZGate(q, -1.562973496915208, 12);
  sqcRYGate(q, -2.6147953003311457, 13);
  sqcRZGate(q, 0.0029255746326742015, 13);
  sqcRYGate(q, 1.5666285013917927, 14);
  sqcRZGate(q, 1.6901264892049062, 14);
  sqcRYGate(q, 1.5708584865276722, 15);
  sqcRZGate(q, -1.5712581053910157, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 3.1415918087576173, 0);
  sqcRZGate(q, 2.362783234778935, 0);
  sqcRYGate(q, -1.0662190583147512e-06, 1);
  sqcRZGate(q, -0.1305087244292764, 1);
  sqcRYGate(q, 1.5708013297098882, 2);
  sqcRZGate(q, -3.141379449298342, 2);
  sqcRYGate(q, 1.3214617710252767, 3);
  sqcRZGate(q, 1.570839542513532, 3);
  sqcRYGate(q, -2.7356123123875173, 4);
  sqcRZGate(q, -2.1555511663760942, 4);
  sqcRYGate(q, -0.2803362551441353, 5);
  sqcRZGate(q, -1.350352396515075, 5);
  sqcRYGate(q, 1.5707921290943023, 6);
  sqcRZGate(q, 1.570808301311999, 6);
  sqcRYGate(q, 3.0352659254897727, 7);
  sqcRZGate(q, -3.141585874896621, 7);
  sqcRYGate(q, 0.39230738920752817, 8);
  sqcRZGate(q, 2.9820084385624845, 8);
  sqcRYGate(q, -2.8781687247688454, 9);
  sqcRZGate(q, 1.3923058405738176, 9);
  sqcRYGate(q, 1.570801834152645, 10);
  sqcRZGate(q, 0.00015140781121480984, 10);
  sqcRYGate(q, 1.7660266791655774, 11);
  sqcRZGate(q, 1.841271214954383, 11);
  sqcRYGate(q, 2.3594960569733106, 12);
  sqcRZGate(q, -0.272949374561035, 12);
  sqcRYGate(q, 2.805221941572561, 13);
  sqcRZGate(q, -1.718949747565401, 13);
  sqcRYGate(q, -1.5703151801839246, 14);
  sqcRZGate(q, 1.5707718205148593, 14);
  sqcRYGate(q, -0.266137769870698, 15);
  sqcRZGate(q, -2.3989040624358254e-05, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 2.5736134326568068, 0);
  sqcRZGate(q, -2.600721097183285, 0);
  sqcRYGate(q, -0.28208484028742825, 1);
  sqcRZGate(q, 0.1832359584724418, 1);
  sqcRYGate(q, -0.012744261033998951, 2);
  sqcRZGate(q, 2.7445951199028724, 2);
  sqcRYGate(q, -3.120932808972845, 3);
  sqcRZGate(q, 0.33995950480978365, 3);
  sqcRYGate(q, 0.28887007601950937, 4);
  sqcRZGate(q, -2.5987027127883984, 4);
  sqcRYGate(q, 3.079446197399302, 5);
  sqcRZGate(q, -3.0916785904487796, 5);
  sqcRYGate(q, -1.5707957983426306, 6);
  sqcRZGate(q, 1.5161042881264766, 6);
  sqcRYGate(q, 1.5708145777353604, 7);
  sqcRZGate(q, -1.3987174110329175, 7);
  sqcRYGate(q, 0.3686484218175989, 8);
  sqcRZGate(q, 1.772140113186389, 8);
  sqcRYGate(q, -0.12464311895656832, 9);
  sqcRZGate(q, -3.134033940928779, 9);
  sqcRYGate(q, -0.009953439602652579, 10);
  sqcRZGate(q, -2.468847838746289, 10);
  sqcRYGate(q, 3.1400966335278246, 11);
  sqcRZGate(q, -2.6505350734700492, 11);
  sqcRYGate(q, -2.8580142935486252, 12);
  sqcRZGate(q, -1.7723076863365017, 12);
  sqcRYGate(q, 0.05865257013777736, 13);
  sqcRZGate(q, -3.0931451998881507, 13);
  sqcRYGate(q, -1.570799047683872, 14);
  sqcRZGate(q, 1.5095127843880567, 14);
  sqcRYGate(q, 1.5707395018505153, 15);
  sqcRZGate(q, -1.672942699118546, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcRYGate(q, 2.4590469472474865, 0);
  sqcRZGate(q, -1.255502212507036, 0);
  sqcRYGate(q, 2.4589884474815205, 1);
  sqcRZGate(q, -1.2554485747485489, 1);
  sqcRYGate(q, -2.1418428419392117, 2);
  sqcRZGate(q, -1.9149525671585028, 2);
  sqcRYGate(q, -0.9667168445120149, 3);
  sqcRZGate(q, 1.329271769480853, 3);
  sqcRYGate(q, -2.4590650361836324, 4);
  sqcRZGate(q, 1.8860764251709137, 4);
  sqcRYGate(q, 0.6825994188435036, 5);
  sqcRZGate(q, 1.88613232784264, 5);
  sqcRYGate(q, -2.4590836939678375, 6);
  sqcRZGate(q, 1.8860686527313666, 6);
  sqcRYGate(q, 2.4590017113546567, 7);
  sqcRZGate(q, -1.255462885821674, 7);
  sqcRYGate(q, -0.6825046894717653, 8);
  sqcRZGate(q, -1.255534850334092, 8);
  sqcRYGate(q, -0.6825966394622016, 9);
  sqcRZGate(q, -1.255476004897445, 9);
  sqcRYGate(q, -1.4443167194312718, 10);
  sqcRZGate(q, 0.47233772907980287, 10);
  sqcRYGate(q, 0.9192525052969549, 11);
  sqcRZGate(q, -1.6096663451324709, 11);
  sqcRYGate(q, -2.4591409017576336, 12);
  sqcRZGate(q, 1.8860617673275342, 12);
  sqcRYGate(q, 0.6825668990838776, 13);
  sqcRZGate(q, 1.886139764639089, 13);
  sqcRYGate(q, 0.682471550996218, 14);
  sqcRZGate(q, 1.8860415968736812, 14);
  sqcRYGate(q, -0.6825511288332293, 15);
  sqcRZGate(q, -1.2555000453821084, 15);

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
