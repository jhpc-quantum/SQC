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

  sqcRYGate(q, -2.029809424284581, 0);
  sqcRYGate(q, -1.56254638347861, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5341744702818807, 0);
  sqcRYGate(q, 0.19956146068052139, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6519577194060124, 2);
  sqcRYGate(q, -2.251425501372249, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.808185714266655, 2);
  sqcRYGate(q, 1.3767627210595126, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6101744378328369, 0);
  sqcRYGate(q, -1.2104103685930674, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9747940121434945, 0);
  sqcRYGate(q, -0.4785730010451161, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2064691833885295, 1);
  sqcRYGate(q, -2.8196052245240875, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5276513245139052, 1);
  sqcRYGate(q, 1.3629122409485488, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4648717104570785, 0);
  sqcRYGate(q, 0.7922814619210744, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3551235971874318, 0);
  sqcRYGate(q, -2.0156046068609648, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.50515545450192, 1);
  sqcRYGate(q, -2.8353830690835182, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.540203394684518, 1);
  sqcRYGate(q, 1.8410777879730122, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.534487241979028, 0);
  sqcRYGate(q, -2.9523438088752476, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1173437710596746, 0);
  sqcRYGate(q, -2.316550406861142, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0017754704226087, 2);
  sqcRYGate(q, 2.539608995164411, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6016528314464136, 2);
  sqcRYGate(q, -0.8619204165037382, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.732784169378158, 0);
  sqcRYGate(q, -2.8115157786639653, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4977723993206564, 0);
  sqcRYGate(q, 1.603118722543936, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.664239266851415, 1);
  sqcRYGate(q, 2.9891143617775904, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.351751363850614, 1);
  sqcRYGate(q, 3.083804911020199, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7844107830874, 0);
  sqcRYGate(q, -3.091274628901981, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8928896738218113, 0);
  sqcRYGate(q, -0.13150465428868685, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.770837632107555, 1);
  sqcRYGate(q, -0.6125088540682492, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5271992524905292, 1);
  sqcRYGate(q, -1.005184750846359, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4710220901738289, 0);
  sqcRYGate(q, -1.203428117843369, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8811066773580514, 0);
  sqcRYGate(q, -1.820292489703638, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.085570786052544, 2);
  sqcRYGate(q, -0.6349545815397996, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.020324938196043085, 2);
  sqcRYGate(q, 2.1795813791467107, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5864892781173743, 0);
  sqcRYGate(q, -1.1374822684313184, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.765772175618862, 0);
  sqcRYGate(q, -1.4622883058493377, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6769048215377285, 1);
  sqcRYGate(q, -1.1463782820450716, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.747783432818404, 1);
  sqcRYGate(q, -0.34426195799375486, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9283372298141668, 0);
  sqcRYGate(q, 1.0297476448834837, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4020949929323745, 0);
  sqcRYGate(q, 2.7918957983927104, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.529030078187147, 1);
  sqcRYGate(q, -2.837847152869677, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8337204834621121, 1);
  sqcRYGate(q, -1.387852388193161, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1576806328339728, 0);
  sqcRYGate(q, -2.388480536956784, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5320547169034873, 0);
  sqcRYGate(q, 1.2259212332530447, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6929712836230517, 2);
  sqcRYGate(q, 1.0693655469906895, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.445361925204495, 2);
  sqcRYGate(q, 0.6934436751390294, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9731520817478994, 0);
  sqcRYGate(q, 1.627678412249132, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1669282016741622, 0);
  sqcRYGate(q, 1.1360945623842236, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2639773516028834, 1);
  sqcRYGate(q, 0.12625914998841473, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3776661925936071, 1);
  sqcRYGate(q, -1.2787665157240822, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.052068453927128, 0);
  sqcRYGate(q, 1.4562302836744627, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.120008620772968, 0);
  sqcRYGate(q, 0.10863895493354166, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8747408155082644, 1);
  sqcRYGate(q, -0.25108169185057344, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5798768315851793, 1);
  sqcRYGate(q, -1.2650883472707815, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9988048397264744, 0);
  sqcRYGate(q, -2.9082078782787195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.270312788639891, 0);
  sqcRYGate(q, 1.3328547502336336, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2766058069829302, 2);
  sqcRYGate(q, -2.0192147195450483, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2187538438624097, 2);
  sqcRYGate(q, 0.13724520912631166, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2728274593655582, 0);
  sqcRYGate(q, -0.9830167332952424, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.613355941840768, 0);
  sqcRYGate(q, -2.2085469203721386, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5048937767192401, 1);
  sqcRYGate(q, 2.3499050832470822, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7475462858057502, 1);
  sqcRYGate(q, 2.7405210597738545, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3041930689665967, 0);
  sqcRYGate(q, -0.8269654820173344, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.740609293010221, 0);
  sqcRYGate(q, -1.2665016132807203, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0923436918699387, 1);
  sqcRYGate(q, -1.0900250222329824, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2332123755613846, 1);
  sqcRYGate(q, 0.07367676600158646, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.878141446509798, 0);
  sqcRYGate(q, 1.4618283205329703, 1);
  sqcRYGate(q, -1.6892238774276909, 2);
  sqcRYGate(q, 2.471799054193944, 3);

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
