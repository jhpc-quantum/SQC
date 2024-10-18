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

  sqcRYGate(q, 2.8430860948810577, 0);
  sqcRYGate(q, -0.04869289260645668, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4072268430653625, 0);
  sqcRYGate(q, 2.0429721104477334, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.682256962317499, 2);
  sqcRYGate(q, 0.9141896042778599, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.18731034235141042, 2);
  sqcRYGate(q, -0.019432617309290832, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.47264139490913315, 1);
  sqcRYGate(q, 0.5951864724721885, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.322902865151687, 1);
  sqcRYGate(q, -0.2442682153868377, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8803258563481864, 0);
  sqcRYGate(q, 0.7033872261954555, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9025196078907616, 0);
  sqcRYGate(q, -0.8796331100928586, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.237415593663944, 2);
  sqcRYGate(q, -0.9698737022116237, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2539354336098674, 2);
  sqcRYGate(q, 1.9571753258621953, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7059558547219282, 1);
  sqcRYGate(q, -1.2907909229545727, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9656967133710008, 1);
  sqcRYGate(q, 2.7419255439646406, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7380676503494819, 0);
  sqcRYGate(q, -1.777303996672429, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.702830410323897, 0);
  sqcRYGate(q, -0.15395218670812602, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.657502819394771, 2);
  sqcRYGate(q, 2.2051423316214365, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6216195262933626, 2);
  sqcRYGate(q, -1.868372059101896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5347959177325325, 1);
  sqcRYGate(q, 2.937311200592618, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.038966701717565, 1);
  sqcRYGate(q, 2.8914957879581387, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7500298075271754, 0);
  sqcRYGate(q, -2.43026145825555, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.998319160515826, 0);
  sqcRYGate(q, 2.7778168350670898, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8989542025041433, 2);
  sqcRYGate(q, -3.0524516956323584, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5638986361654865, 2);
  sqcRYGate(q, -0.7575680284366486, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2424533205229906, 1);
  sqcRYGate(q, -0.9188403256782425, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2299322349548438, 1);
  sqcRYGate(q, 2.4602693672647336, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2123034468183636, 0);
  sqcRYGate(q, -1.4001690719298878, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2255307327154366, 0);
  sqcRYGate(q, 2.10859996596587, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4612234087740794, 2);
  sqcRYGate(q, 1.3800035406612858, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.925576990339534, 2);
  sqcRYGate(q, -0.09531096526794275, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2650731954325378, 1);
  sqcRYGate(q, -1.4874602498718925, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.864120253087674, 1);
  sqcRYGate(q, 2.631594064639069, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4840923153529824, 0);
  sqcRYGate(q, 1.4572742482446144, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8885099636596574, 0);
  sqcRYGate(q, 0.852186035238244, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.44014313557560913, 2);
  sqcRYGate(q, -0.41562581196652815, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6871386836384612, 2);
  sqcRYGate(q, -0.47132954276193123, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4390043622562807, 1);
  sqcRYGate(q, 0.15326075769401282, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7279276391758667, 1);
  sqcRYGate(q, -2.7060335103760544, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6686807406232882, 0);
  sqcRYGate(q, -1.7743411988827882, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.579385690536815, 0);
  sqcRYGate(q, 0.38561915422123444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.55268153603652, 2);
  sqcRYGate(q, -1.878330990865602, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5024221257550181, 2);
  sqcRYGate(q, 2.8453914117975017, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.31045679253611347, 1);
  sqcRYGate(q, 2.1464744720417768, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4777599173428193, 1);
  sqcRYGate(q, -3.104407551724789, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0583976285192156, 0);
  sqcRYGate(q, -2.6671597211767644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6154088980131478, 0);
  sqcRYGate(q, -0.7581102838501198, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.131447286623247, 2);
  sqcRYGate(q, 3.0236162452293596, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6668157238591172, 2);
  sqcRYGate(q, -2.2844355216192818, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.357497577390056, 1);
  sqcRYGate(q, -0.9228139624347689, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0905642895422942, 1);
  sqcRYGate(q, 1.7506817907699013, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.022192999299762945, 0);
  sqcRYGate(q, 1.3085966124462036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1279092456527164, 0);
  sqcRYGate(q, -2.7547480448951718, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.030177957425139294, 2);
  sqcRYGate(q, 0.8453736136362391, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1731455424248343, 2);
  sqcRYGate(q, -0.5676357769460578, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.999227489449496, 1);
  sqcRYGate(q, -2.730004446061135, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.137869016077254, 1);
  sqcRYGate(q, 2.828797764949386, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0515671443229975, 0);
  sqcRYGate(q, 1.432045071232324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.41249143909986474, 0);
  sqcRYGate(q, -1.9905370300524559, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5012542291545135, 2);
  sqcRYGate(q, 0.5270072623559938, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0633131256296044, 2);
  sqcRYGate(q, -1.0143047222058659, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.545166000039777, 1);
  sqcRYGate(q, 0.781866703263562, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9567830792651897, 1);
  sqcRYGate(q, -0.6016915688716031, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0671388037062397, 0);
  sqcRYGate(q, -1.2652354730028508, 1);
  sqcRYGate(q, -2.116542696422421, 2);
  sqcRYGate(q, -0.27721318124252825, 3);

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
