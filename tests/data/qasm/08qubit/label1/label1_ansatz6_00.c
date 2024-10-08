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

  sqcRYGate(q, -1.999816295233198, 0);
  sqcRYGate(q, -2.2284184974154417, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7823461405106864, 0);
  sqcRYGate(q, 1.860141304080556, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.154176262921692, 1);
  sqcRYGate(q, -0.9127257283212316, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.080575078129601, 1);
  sqcRYGate(q, 1.8391204232483034, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7814289640336742, 2);
  sqcRYGate(q, -2.7092093254212175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.30923510265323, 2);
  sqcRYGate(q, -2.8915204149927987, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.508960117852375, 3);
  sqcRYGate(q, 1.0376130476258933, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6604858279274717, 3);
  sqcRYGate(q, 0.5174662242590692, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8002724876919709, 4);
  sqcRYGate(q, -1.7439632308536568, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.20506545680473579, 4);
  sqcRYGate(q, 2.879860729247233, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4611603414429892, 5);
  sqcRYGate(q, 2.6559275724920948, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6466095950794906, 5);
  sqcRYGate(q, 1.1292675434016015, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.927559948809658, 6);
  sqcRYGate(q, 1.53471286311022, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4894241928244782, 6);
  sqcRYGate(q, -0.31826979304518505, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9128734720267854, 0);
  sqcRYGate(q, -2.682998203530737, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.358812090553949, 0);
  sqcRYGate(q, -1.5739234054559954, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.55051546665278, 1);
  sqcRYGate(q, -3.134108361679347, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.305792419113808, 1);
  sqcRYGate(q, 2.66263841176642, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5411020630026786, 2);
  sqcRYGate(q, -1.352003728408647, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3023480486895411, 2);
  sqcRYGate(q, 1.1529488462863393, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6775466524075866, 3);
  sqcRYGate(q, -2.0378172162578996, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.014999141648223357, 3);
  sqcRYGate(q, 0.35784751462125186, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4180030039626677, 4);
  sqcRYGate(q, -2.9685215696752296, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8520921076463777, 4);
  sqcRYGate(q, -0.5603650881057407, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.071259388421817, 5);
  sqcRYGate(q, -2.0193930379375216, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.399329253104967, 5);
  sqcRYGate(q, 1.3261362532368282, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6010311496588248, 6);
  sqcRYGate(q, 2.739778051966399, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8483588389619388, 6);
  sqcRYGate(q, -3.029795384649308, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.843587712629885, 0);
  sqcRYGate(q, -1.6207777880328025, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1815618060496735, 0);
  sqcRYGate(q, 2.748726079401246, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6104297108671286, 1);
  sqcRYGate(q, -1.597618658409294, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8976261080433645, 1);
  sqcRYGate(q, -1.261287276625187, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5522444489998035, 2);
  sqcRYGate(q, 0.7680169063477564, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2437466593655726, 2);
  sqcRYGate(q, 0.580291506319358, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8660457798113255, 3);
  sqcRYGate(q, -1.857927216294632, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.592411540766332, 3);
  sqcRYGate(q, 3.1150627512551066, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.01637583715407608, 4);
  sqcRYGate(q, -2.069462940113723, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5691114116131966, 4);
  sqcRYGate(q, -3.138430560646462, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5664573639369115, 5);
  sqcRYGate(q, -0.2338334798641081, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.566635433019564, 5);
  sqcRYGate(q, -0.22538849782404236, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5690902091729957, 6);
  sqcRYGate(q, 1.9887990657419536, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.569650848488572, 6);
  sqcRYGate(q, -2.5316991146760732, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6182925587237696, 0);
  sqcRYGate(q, -1.5908665504116901, 1);
  sqcRYGate(q, 1.5560935259148485, 2);
  sqcRYGate(q, 1.5402058614594447, 3);
  sqcRYGate(q, 0.027698766573955425, 4);
  sqcRYGate(q, -1.5711561375100729, 5);
  sqcRYGate(q, 1.5710527262859246, 6);
  sqcRYGate(q, 1.5718937616874424, 7);

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
