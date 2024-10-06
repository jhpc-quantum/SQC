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

  sqcRYGate(q, 1.7901715978541253, 0);
  sqcRYGate(q, 0.9756620462969776, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4215858221813784, 0);
  sqcRYGate(q, 0.1549068556855051, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3735067108041, 2);
  sqcRYGate(q, -0.9917782641314998, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4988719666575845, 2);
  sqcRYGate(q, -2.5375250367040505, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.042835343314767, 0);
  sqcRYGate(q, -2.381451308149309, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.35593723363675045, 0);
  sqcRYGate(q, -0.3331188804303475, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4202194865459927, 1);
  sqcRYGate(q, -1.5281076472283468, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1408159055967676, 1);
  sqcRYGate(q, -2.316539360115527, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0533052600911184, 0);
  sqcRYGate(q, 0.611515370427302, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3808177446939656, 0);
  sqcRYGate(q, 3.0430859272167603, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5443256427016587, 1);
  sqcRYGate(q, 0.09632940531930084, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.05679844400383153, 1);
  sqcRYGate(q, -3.1168256053318513, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.008660419727081, 0);
  sqcRYGate(q, -0.33124753386060624, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9232672406781717, 0);
  sqcRYGate(q, -0.41026612710716126, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4097963752477653, 2);
  sqcRYGate(q, -2.6873413531805266, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.43004521704928056, 2);
  sqcRYGate(q, 2.529038121485587, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4886376388441953, 0);
  sqcRYGate(q, 1.922391044739272, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.255775957291373, 0);
  sqcRYGate(q, 1.745460799369982, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3659043253766505, 1);
  sqcRYGate(q, -0.07838010016438028, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4533667827547576, 1);
  sqcRYGate(q, -3.1032618685157085, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6719516790621354, 0);
  sqcRYGate(q, -0.03135483587073562, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.419600750229343, 0);
  sqcRYGate(q, -0.6608359005350465, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9377526073781444, 1);
  sqcRYGate(q, -1.0815118866182123, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.644413723549799, 1);
  sqcRYGate(q, -1.5299080614427913, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4516872170085948, 0);
  sqcRYGate(q, 2.3366270245716776, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.981001652371909, 0);
  sqcRYGate(q, 2.9929183017616836, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.422769131570846, 2);
  sqcRYGate(q, -2.6218090114031862, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7539040078883109, 2);
  sqcRYGate(q, 1.867266405986642, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.013215848016549, 0);
  sqcRYGate(q, -0.33885029043142095, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.320167541279917, 0);
  sqcRYGate(q, 2.5512058866740017, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.120656091261236, 1);
  sqcRYGate(q, -1.0592431554281072, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.253113636266102, 1);
  sqcRYGate(q, 0.31886085278651244, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.655846126143989, 0);
  sqcRYGate(q, 1.7335985339560502, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.18776585639780966, 0);
  sqcRYGate(q, 0.06458915290562128, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.595976862767315, 1);
  sqcRYGate(q, 1.1821016876290942, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8119749148041608, 1);
  sqcRYGate(q, -0.4213264963392902, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7734392704573185, 0);
  sqcRYGate(q, 1.1361019272017299, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.20666797782739546, 0);
  sqcRYGate(q, -0.9138487361831675, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.621835223529993, 2);
  sqcRYGate(q, 2.340201134943254, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.697990628226993, 2);
  sqcRYGate(q, -3.004997736161429, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.15749304459338426, 0);
  sqcRYGate(q, -2.9305766242513323, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3276084247406095, 0);
  sqcRYGate(q, -0.7385577649356172, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1700626338953111, 1);
  sqcRYGate(q, -1.9608411311961076, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1739310275716965, 1);
  sqcRYGate(q, -1.4541176018474715, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7847312347603278, 0);
  sqcRYGate(q, -1.0103922762529534, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6695782906920204, 0);
  sqcRYGate(q, 0.1312747818833424, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.09101215471976264, 1);
  sqcRYGate(q, 1.2997448591179461, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.35917950450136144, 1);
  sqcRYGate(q, 0.6719582047340951, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5387655981487862, 0);
  sqcRYGate(q, -2.8580700139021964, 1);
  sqcRYGate(q, 0.5394181920394434, 2);
  sqcRYGate(q, -2.6695510985822746, 3);

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
