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

  sqcRYGate(q, -1.8492864136549292, 0);
  sqcRYGate(q, -2.7825366074674034, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9955839854109394, 0);
  sqcRYGate(q, 0.7904931425200772, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3619138184184867, 1);
  sqcRYGate(q, 0.3708522021293792, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8036073955040495, 1);
  sqcRYGate(q, 1.4739358986611615, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.14938847681091652, 2);
  sqcRYGate(q, -2.9653041706356302, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3416310451057942, 2);
  sqcRYGate(q, 2.362203592670278, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0759753337532922, 0);
  sqcRYGate(q, -0.6921449024677537, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3019790386029302, 0);
  sqcRYGate(q, -1.7776522590328758, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.11784581476112194, 1);
  sqcRYGate(q, 2.3361843322836284, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.42461812721174397, 1);
  sqcRYGate(q, 2.4989698612746314, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4965688819169388, 2);
  sqcRYGate(q, -0.3166547786976452, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0472810735648386, 2);
  sqcRYGate(q, -0.8499470041925292, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.346255294997645, 0);
  sqcRYGate(q, 0.33703953242117085, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3520300609152547, 0);
  sqcRYGate(q, -2.329428746948425, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2725836297630366, 1);
  sqcRYGate(q, 0.7544222338321712, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6364124989105564, 1);
  sqcRYGate(q, -2.3132921140555873, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3483491217654238, 2);
  sqcRYGate(q, -2.918527285286972, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10573840790902281, 2);
  sqcRYGate(q, 0.5317155182041059, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3871373451109061, 0);
  sqcRYGate(q, -1.0426108731307884, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0480426930689166, 0);
  sqcRYGate(q, 0.4172016218418113, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2411604874654187, 1);
  sqcRYGate(q, -1.174982288912858, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7208793596147565, 1);
  sqcRYGate(q, 1.70607887075347, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6306448268437786, 2);
  sqcRYGate(q, 3.025747186966267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2582520858150996, 2);
  sqcRYGate(q, -2.391377692191365, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.183964643530292, 0);
  sqcRYGate(q, -0.028859390215149716, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.68886342663005, 0);
  sqcRYGate(q, 2.287871076469897, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.167407246400811, 1);
  sqcRYGate(q, -2.2939117535290223, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6580874006420085, 1);
  sqcRYGate(q, 2.3561961679387675, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6334229402189977, 2);
  sqcRYGate(q, -1.6124490555482436, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9140083328652797, 2);
  sqcRYGate(q, -2.4003148844139823, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6029119113807226, 0);
  sqcRYGate(q, 2.798314555843206, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.991830786726807, 0);
  sqcRYGate(q, 0.5823516275451439, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3159707256124697, 1);
  sqcRYGate(q, 1.9439235678217717, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2300605523666057, 1);
  sqcRYGate(q, -3.0331264529139568, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.867254142592421, 2);
  sqcRYGate(q, 1.6206923456635351, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.10199117810215498, 2);
  sqcRYGate(q, -1.6900280523119469, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7916644375385364, 0);
  sqcRYGate(q, 0.9562106366164742, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0594711272299175, 0);
  sqcRYGate(q, 2.124840480397541, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0895190423243637, 1);
  sqcRYGate(q, 2.072411635574073, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8870451091328748, 1);
  sqcRYGate(q, -0.8736694773585295, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.80375592100827, 2);
  sqcRYGate(q, -2.809195162486006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4430856181335054, 2);
  sqcRYGate(q, -1.8397598821569539, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4413537326898993, 0);
  sqcRYGate(q, 0.78762817603927, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0599581358733956, 0);
  sqcRYGate(q, -0.24696704595191601, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.421209490717461, 1);
  sqcRYGate(q, -1.254167360937848, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7322756441753332, 1);
  sqcRYGate(q, 0.34496450550221347, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7756768319145859, 2);
  sqcRYGate(q, 2.927330429829849, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1355343673196536, 2);
  sqcRYGate(q, -2.390743850341434, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.33197327157339185, 0);
  sqcRYGate(q, -0.34480979813882573, 1);
  sqcRYGate(q, 1.5061394622464244, 2);
  sqcRYGate(q, 2.754034014268001, 3);

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
